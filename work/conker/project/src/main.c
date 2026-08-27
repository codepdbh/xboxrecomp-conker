#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <xbox/xboxrecomp.h>
#include "nv2a_mmio_hook.h"
#include "recomp_funcs.h"

#define CONKER_ENTRY_POINT 0x0042F0E9u
#define CONKER_DEFAULT_GAME_DIR "C:/Users/danie/Downloads/Conker"
#define CONKER_DEFAULT_SAVE_DIR "C:/Users/danie/OneDrive/Documents/xboxrecomp-main/work/conker/saves"

extern uint32_t g_eax, g_ecx, g_edx, g_esp;
extern uint32_t g_ebx, g_esi, g_edi, g_seh_ebp;
extern ptrdiff_t g_xbox_mem_offset;
static int g_nv2a_ready;

static LONG CALLBACK conker_exception_handler(PEXCEPTION_POINTERS ep)
{
    const DWORD code = ep->ExceptionRecord->ExceptionCode;
    if (code == EXCEPTION_BREAKPOINT) {
        const uintptr_t module_base = (uintptr_t)GetModuleHandleW(NULL);
        const uintptr_t native_pc = (uintptr_t)ep->ExceptionRecord->ExceptionAddress;
        fprintf(stderr,
                "[CONKER] breakpoint at native PC %p rva=0x%llX "
                "xbox eax=%08X ecx=%08X edx=%08X esp=%08X\n",
                ep->ExceptionRecord->ExceptionAddress,
                (unsigned long long)(native_pc - module_base),
                g_eax, g_ecx, g_edx, g_esp);
        fflush(stderr);
        return EXCEPTION_CONTINUE_SEARCH;
    }

    if (code == EXCEPTION_ACCESS_VIOLATION) {
        const ULONG_PTR operation = ep->ExceptionRecord->ExceptionInformation[0];
        const ULONG_PTR address = ep->ExceptionRecord->ExceptionInformation[1];
        const uint64_t xbox_va = (uint64_t)((intptr_t)address - g_xbox_mem_offset);

        /* Direct D3D8 code touches NV2A registers and VRAM through Xbox VAs.
         * Route those faults to the bundled GPU model before treating them as
         * a fatal host access violation. */
        if (g_nv2a_ready && xbox_va >= 0xFD000000u && xbox_va < 0xFE000000u &&
            nv2a_hook_handle_mmio(ep->ContextRecord, (uintptr_t)address,
                                  (uint32_t)xbox_va, operation == 1)) {
            return EXCEPTION_CONTINUE_EXECUTION;
        }
        if (g_nv2a_ready && xbox_va >= 0xF0000000u && xbox_va < 0xFD000000u &&
            nv2a_hook_handle_vram((uintptr_t)address, (uint32_t)xbox_va)) {
            return EXCEPTION_CONTINUE_EXECUTION;
        }

        const uintptr_t module_base = (uintptr_t)GetModuleHandleW(NULL);
        const uintptr_t native_pc = (uintptr_t)ep->ExceptionRecord->ExceptionAddress;
        fprintf(stderr,
                "[CONKER] access violation: %s address=%p native_pc=%p rva=0x%llX\n",
                operation == 0 ? "read" : operation == 1 ? "write" : "execute",
                (void *)address, ep->ExceptionRecord->ExceptionAddress,
                (unsigned long long)(native_pc - module_base));
        fprintf(stderr,
                "[CONKER] xbox regs eax=%08X ecx=%08X edx=%08X esp=%08X "
                "ebx=%08X esi=%08X edi=%08X ebp=%08X\n",
                g_eax, g_ecx, g_edx, g_esp,
                g_ebx, g_esi, g_edi, g_seh_ebp);
        {
            const uint32_t tib20 = *(const uint32_t *)((uintptr_t)g_xbox_mem_offset + 0x20u);
            const uint32_t cache = tib20 < 0x04000000u
                ? *(const uint32_t *)((uintptr_t)g_xbox_mem_offset + tib20 + 0x250u)
                : 0xFFFFFFFFu;
            fprintf(stderr, "[CONKER] TIB fs20=%08X fs20+250=%08X low250=%08X\n",
                    tib20, cache,
                    *(const uint32_t *)((uintptr_t)g_xbox_mem_offset + 0x250u));
        }
        {
            void *frames[32];
            USHORT count = CaptureStackBackTrace(0, 32, frames, NULL);
            USHORT i;
            fprintf(stderr, "[CONKER] native stack:");
            for (i = 0; i < count; ++i)
                fprintf(stderr, " %llX",
                        (unsigned long long)((uintptr_t)frames[i] - module_base));
            fputc('\n', stderr);
        }
        fflush(stderr);
    } else {
        const uintptr_t module_base = (uintptr_t)GetModuleHandleW(NULL);
        const uintptr_t native_pc = (uintptr_t)ep->ExceptionRecord->ExceptionAddress;
        void *frames[32];
        USHORT count;
        USHORT i;
        fprintf(stderr, "[CONKER] native exception code=0x%08lX pc=%p rva=0x%llX\n",
                (unsigned long)code, ep->ExceptionRecord->ExceptionAddress,
                (unsigned long long)(native_pc - module_base));
        count = CaptureStackBackTrace(0, 32, frames, NULL);
        fprintf(stderr, "[CONKER] native stack:");
        for (i = 0; i < count; ++i)
            fprintf(stderr, " %llX",
                    (unsigned long long)((uintptr_t)frames[i] - module_base));
        fputc('\n', stderr);
        fflush(stderr);
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

static int load_file(const char *path, void **data_out, size_t *size_out)
{
    FILE *file = fopen(path, "rb");
    long file_size;
    void *data;

    if (!file) {
        fprintf(stderr, "[CONKER] cannot open %s\n", path);
        return 0;
    }
    if (fseek(file, 0, SEEK_END) != 0 || (file_size = ftell(file)) <= 0 ||
        fseek(file, 0, SEEK_SET) != 0) {
        fclose(file);
        return 0;
    }

    data = malloc((size_t)file_size);
    if (!data || fread(data, 1, (size_t)file_size, file) != (size_t)file_size) {
        free(data);
        fclose(file);
        return 0;
    }
    fclose(file);
    *data_out = data;
    *size_out = (size_t)file_size;
    return 1;
}

int main(int argc, char **argv)
{
    const char *game_dir = argc > 1 ? argv[1] : CONKER_DEFAULT_GAME_DIR;
    char xbe_path[MAX_PATH];
    const char *save_path = argc > 2 ? argv[2] : CONKER_DEFAULT_SAVE_DIR;
    void *xbe_data = NULL;
    size_t xbe_size = 0;
    recomp_func_t entry;

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    AddVectoredExceptionHandler(1, conker_exception_handler);

    if (snprintf(xbe_path, sizeof(xbe_path), "%s/default.xbe", game_dir) < 0) {
        return 1;
    }
    CreateDirectoryA(save_path, NULL);

    printf("=== Conker: Live and Reloaded static recompilation ===\n");
    printf("[CONKER] game directory: %s\n", game_dir);
    printf("[CONKER] save directory: %s\n", save_path);
    if (!load_file(xbe_path, &xbe_data, &xbe_size)) {
        return 1;
    }
    printf("[CONKER] loaded XBE: %zu bytes\n", xbe_size);

    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        fprintf(stderr, "[CONKER] Xbox memory initialization failed\n");
        free(xbe_data);
        return 1;
    }
    g_xbox_mem_offset = xbox_GetMemoryOffset();
    nv2a_hook_init(g_xbox_mem_offset);
    g_nv2a_ready = 1;
    xbox_kernel_init();
    xbox_path_init(game_dir, save_path);
    xbox_kernel_bridge_init();

    entry = recomp_lookup(CONKER_ENTRY_POINT);
    if (!entry) {
        fprintf(stderr, "[CONKER] entry point %08X is absent from dispatch\n",
                CONKER_ENTRY_POINT);
        xbox_kernel_shutdown();
        xbox_MemoryLayoutShutdown();
        free(xbe_data);
        return 1;
    }

    printf("[CONKER] starting at %08X, ESP=%08X\n",
           CONKER_ENTRY_POINT, g_esp);
    entry();
    printf("[CONKER] game entry point returned, eax=%08X\n", g_eax);

    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(xbe_data);
    return 0;
}
