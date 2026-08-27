/**
 * Burnout 3 - Recompiled code chunk 45
 * Functions: 250 (0x003EC5B0 - 0x003FB7F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003EC5B0
 * Original: 0x003EC5B0 - 0x003EC7C9 (537 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC5B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EC5B0: ;
    edx = 0x750820;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC5BC: ;
    edx = 0x750834;
    eax = 1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC5CB: ;
    edx = 0x750868;
    eax = 0x21;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC5DA: ;
    edx = 0x750920;
    eax = 0x31;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC5E9: ;
    edx = 0x750A18;
    eax = 0xA1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC5F8: ;
    edx = 0x750B00;
    eax = 0xB1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC607: ;
    edx = 0x750C28;
    eax = 0x221;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC616: ;
    edx = 0x750D60;
    eax = 0x331;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC625: ;
    edx = 0x750F18;
    eax = 0xAA1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC634: ;
    edx = 0x7510B0;
    eax = 0xBB1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC643: ;
    edx = 0x7512C8;
    eax = 0x321;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC652: ;
    edx = 0x751440;
    eax = 0xBA1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC661: ;
    edx = 0x751618;
    eax = 2;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC670: ;
    edx = 0x751690;
    eax = 3;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC67F: ;
    edx = 0x751748;
    eax = 0xA;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC68E: ;
    edx = 0x7517F0;
    eax = 0xB;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC69D: ;
    edx = 0x7518D8;
    eax = 0x22;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC6AC: ;
    edx = 0x7519D0;
    eax = 0x33;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC6BB: ;
    edx = 0x751B48;
    eax = 0xAA;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC6CA: ;
    edx = 0x751CA0;
    eax = 0xBB;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC6D9: ;
    edx = 0x751E78;
    eax = 0x32;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC6E8: ;
    edx = 0x751FB0;
    eax = 0xBA;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC6F7: ;
    edx = 0x752148;
    eax = 0xE;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC706: ;
    edx = 0x752220;
    eax = 0xEE;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC715: ;
    edx = 0x7523D8;
    eax = 0xEEE;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC724: ;
    edx = 0x752670;
    eax = 0xF;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC733: ;
    edx = 0x752788;
    eax = 0xFF;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC742: ;
    edx = 0x7529C0;
    eax = 0xFFF;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC751: ;
    edx = 0x752D18;
    eax = 0xE1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC760: ;
    edx = 0x752E30;
    eax = 0xEE1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC76F: ;
    edx = 0x753028;
    eax = 0xEEE1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC77E: ;
    edx = 0x753300;
    eax = 0xF1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC78D: ;
    edx = 0x753458;
    eax = 0xFF1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC79C: ;
    edx = 0x7536D0;
    eax = 0xFFF1;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC7AB: ;
    edx = 0x753A68;
    eax = 0x11;
    PUSH32(esp, 0); sub_003EA0E0(); /* call 0x003EA0E0 */

loc_003EC7BA: ;
    edx = 0x753AE0;
    eax = 0x111;
    g_seh_ebp = ebp; sub_003EA0E0(); return; /* tail jmp 0x003EA0E0 */

}

/**
 * sub_003ECB70
 * Original: 0x003ECB70 - 0x003ECB87 (23 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECB70: ;
    esp = esp - 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = eax;
    if (TEST_NZ(edi, edi)) { sub_003ECB87(); return; } /* jne: not equal / not zero */

loc_003ECB7F: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003ECC20
 * Original: 0x003ECC20 - 0x003ECC69 (73 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECC20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECC20: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_003ECC4E; /* je: equal / zero */

loc_003ECC25: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003ECC4E; /* je: equal / zero */

loc_003ECC2C: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003ECC39: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003ECC4E; /* je: equal / zero */

loc_003ECC40: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECC52; /* je: equal / zero */

loc_003ECC47: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_003ECC55; /* jne: not equal / not zero */

loc_003ECC4E: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECC52: ;
    eax = MEM32(esp);

loc_003ECC55: ;
    if (TEST_Z(eax, eax)) goto loc_003ECC4E; /* je: equal / zero */

loc_003ECC59: ;
    if (TEST_Z(esi, esi)) goto loc_003ECC62; /* je: equal / zero */

loc_003ECC5D: ;
    edx = MEM32(eax + 0x18);
    MEM32(esi) = edx;

loc_003ECC62: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECC70
 * Original: 0x003ECC70 - 0x003ECCA8 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECC70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECC70: ;
    PUSH32(esp, ecx);
    if (TEST_Z(ecx, ecx)) goto loc_003ECC88; /* je: equal / zero */

loc_003ECC75: ;
    ecx = MEM32(ecx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_003ECC88; /* je: equal / zero */

loc_003ECC7C: ;
    if (TEST_S(eax, eax)) goto loc_003ECC88; /* jl: less (signed <) */

loc_003ECC80: ;
    edx = esp;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_003ECC88: ;
    eax = MEM32(esp);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_003ECCA8(); return; } /* je: equal / zero */

loc_003ECC90: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003ECB70(); /* call 0x003ECB70 */

loc_003ECCA2: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECCD0
 * Original: 0x003ECCD0 - 0x003ECD2B (91 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECCD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECCD0: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_003ECD05; /* je: equal / zero */

loc_003ECCD5: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003ECD05; /* je: equal / zero */

loc_003ECCDC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003ECCEF: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003ECD05; /* je: equal / zero */

loc_003ECCF7: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECD09; /* je: equal / zero */

loc_003ECCFE: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_003ECD0C; /* jne: not equal / not zero */

loc_003ECD05: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECD09: ;
    eax = MEM32(esp);

loc_003ECD0C: ;
    if (TEST_Z(eax, eax)) goto loc_003ECD05; /* je: equal / zero */

loc_003ECD10: ;
    if (TEST_Z(esi, esi)) goto loc_003ECD24; /* je: equal / zero */

loc_003ECD14: ;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;

loc_003ECD24: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECD30
 * Original: 0x003ECD30 - 0x003ECD84 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECD30(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECD30: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_003ECD84(); return; } /* je: equal / zero */

loc_003ECD35: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_003ECD84(); return; } /* je: equal / zero */

loc_003ECD3C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003ECD4F: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_003ECD84(); return; } /* je: equal / zero */

loc_003ECD57: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECD71; /* je: equal / zero */

loc_003ECD5E: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECD71: ;
    eax = MEM32(esp);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECD90
 * Original: 0x003ECD90 - 0x003ECDE8 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECD90(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECD90: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_003ECDC5; /* je: equal / zero */

loc_003ECD95: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003ECDC5; /* je: equal / zero */

loc_003ECD9C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003ECDAF: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003ECDC5; /* je: equal / zero */

loc_003ECDB7: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECDC9; /* je: equal / zero */

loc_003ECDBE: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_003ECDCC; /* jne: not equal / not zero */

loc_003ECDC5: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECDC9: ;
    eax = MEM32(esp);

loc_003ECDCC: ;
    if (TEST_Z(eax, eax)) goto loc_003ECDC5; /* je: equal / zero */

loc_003ECDD0: ;
    edx = MEM32(eax + 0xC);
    MEM32(esi) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 8) = edx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECDF0
 * Original: 0x003ECDF0 - 0x003ECE3D (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECDF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECDF0: ;
    PUSH32(esp, ecx);
    if (TEST_Z(ecx, ecx)) goto loc_003ECE1A; /* je: equal / zero */

loc_003ECDF5: ;
    ecx = MEM32(ecx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_003ECE1A; /* je: equal / zero */

loc_003ECDFC: ;
    if (TEST_S(eax, eax)) goto loc_003ECE1A; /* jl: less (signed <) */

loc_003ECE00: ;
    edx = esp;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_003ECE08: ;
    if (TEST_Z(eax, eax)) goto loc_003ECE1A; /* je: equal / zero */

loc_003ECE0C: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECE1E; /* je: equal / zero */

loc_003ECE13: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_003ECE21; /* jne: not equal / not zero */

loc_003ECE1A: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECE1E: ;
    eax = MEM32(esp);

loc_003ECE21: ;
    if (TEST_Z(eax, eax)) goto loc_003ECE1A; /* je: equal / zero */

loc_003ECE25: ;
    ecx = MEM32(eax + 0xC);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 8) = eax;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECE40
 * Original: 0x003ECE40 - 0x003ECEA2 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECE40(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECE40: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_003ECE75; /* je: equal / zero */

loc_003ECE45: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003ECE75; /* je: equal / zero */

loc_003ECE4C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003ECE5F: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003ECE75; /* je: equal / zero */

loc_003ECE67: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECE79; /* je: equal / zero */

loc_003ECE6E: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_003ECE7C; /* jne: not equal / not zero */

loc_003ECE75: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECE79: ;
    eax = MEM32(esp);

loc_003ECE7C: ;
    if (TEST_Z(eax, eax)) goto loc_003ECE75; /* je: equal / zero */

loc_003ECE80: ;
    edx = MEM32(eax + 0x20);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x24);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x28);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECEB0
 * Original: 0x003ECEB0 - 0x003ECEC3 (19 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003ECEB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(eax, eax)) { sub_003ECEC3(); return; } /* jne: not equal / not zero */

loc_003ECEBE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECF40
 * Original: 0x003ECF40 - 0x003ECF8F (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECF40(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECF40: ;
    PUSH32(esp, ecx);
    if (TEST_Z(ecx, ecx)) { sub_003ECF8F(); return; } /* je: equal / zero */

loc_003ECF45: ;
    ecx = MEM32(ecx + 0x10);
    if (TEST_Z(ecx, ecx)) { sub_003ECF8F(); return; } /* je: equal / zero */

loc_003ECF4C: ;
    if (TEST_S(eax, eax)) { sub_003ECF8F(); return; } /* jl: less (signed <) */

loc_003ECF50: ;
    edx = esp;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_003ECF58: ;
    if (TEST_Z(eax, eax)) { sub_003ECF8F(); return; } /* je: equal / zero */

loc_003ECF5C: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_003ECF79; /* je: equal / zero */

loc_003ECF63: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_003ECEB0(); /* call 0x003ECEB0 */

loc_003ECF74: ;
    esp = esp + 4;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ECF79: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_003ECEB0(); /* call 0x003ECEB0 */

loc_003ECF8A: ;
    esp = esp + 4;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECFA0
 * Original: 0x003ECFA0 - 0x003ECFD9 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ECFA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_003ECFD7; /* je: equal / zero */

loc_003ECFA9: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_003ECFB0: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_003ECFBB: ;
    eax = MEM32(esi + 0x14);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003ECFCF; /* je: equal / zero */

loc_003ECFC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ECFA0(); /* call 0x003ECFA0 */

loc_003ECFCC: ;
    esp = esp + 8;

loc_003ECFCF: ;
    esi = MEM32(esi + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_003ECFB0; /* jne: not equal / not zero */

loc_003ECFD6: ;
    POP32(esp, edi);

loc_003ECFD7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ECFE0
 * Original: 0x003ECFE0 - 0x003ED026 (70 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECFE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_003ED024; /* je: equal / zero */

loc_003ECFE9: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003ECFF0: ;
    esi = MEM32(ebx);
    edi = 0x64571C;
    ecx = 0xD;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_003ED009; /* jne: not equal / not zero */

loc_003ED002: ;
    edx = ebp;
    PUSH32(esp, 0); sub_003EFA80(); /* call 0x003EFA80 */

loc_003ED009: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003ED01A; /* je: equal / zero */

loc_003ED010: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ECFE0(); /* call 0x003ECFE0 */

loc_003ED017: ;
    esp = esp + 8;

loc_003ED01A: ;
    ebx = MEM32(ebx + 0x18);
    if (TEST_NZ(ebx, ebx)) goto loc_003ECFF0; /* jne: not equal / not zero */

loc_003ED021: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003ED024: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED030
 * Original: 0x003ED030 - 0x003ED095 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED030(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED030: ;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003ED062; /* je: equal / zero */

loc_003ED03B: ;
    esi = MEM32(eax);
    esi = esi - edx;
    if ((esi == 0)) goto loc_003ED054; /* je: equal / zero */

loc_003ED041: ;
    esi--;
    if ((esi != 0)) goto loc_003ED062; /* jne: not equal / not zero */

loc_003ED044: ;
    edx = MEM32(eax + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 8));
    eax = MEM32(eax + 4);
    edx = edx + eax + 0x10;
    goto loc_003ED062;

loc_003ED054: ;
    edx = MEM32(eax + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 8));
    eax = MEM32(eax + 4);
    edx = edx + eax + 0x20;

loc_003ED062: ;
    eax = MEM32(ecx + 4);
    esi = MEM32(ecx + 0x18);
    edi = MEM32(ecx + 0x34);
    eax = eax * 4 + 0x37;
    eax = eax & 0xFFFFFFE0u;
    esi = esi + 0x1F;
    edi = edi + 0x1F;
    esi = esi & 0xFFFFFFE0u;
    esi = eax + esi * 2;
    eax = MEM32(ecx);
    edi = edi & 0xFFFFFFE0u;
    edi = edi + edx;
    eax = eax + 0x1F;
    edi = edi + esi;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED0A0
 * Original: 0x003ED0A0 - 0x003ED1EB (331 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED0A0: ;
    eax = ebx + 0x18;
    MEM32(ebx + 4) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = ecx * 4 + 0x37;
    ebp = ebp & 0xFFFFFFE0u;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(ecx & ecx, 0)) goto loc_003ED0D4; /* jbe: below or equal (unsigned <=) */

loc_003ED0BB: ;
    goto loc_003ED0C0;

    /* nop */

loc_003ED0C0: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ebx + 4);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esi + 4);
    eax++;
    if (CMP_B(eax, ecx)) goto loc_003ED0C0; /* jb: below (unsigned <) */

loc_003ED0D4: ;
    edx = ebx + ebp;
    MEM32(ebx) = edx;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003ED0FC; /* jbe: below or equal (unsigned <=) */

loc_003ED0E2: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ECFA0(); /* call 0x003ECFA0 */

loc_003ED0F1: ;
    eax = MEM32(esi + 0xC);
    esp = esp + 8;
    edi++;
    if (CMP_B(edi, eax)) goto loc_003ED0E2; /* jb: below (unsigned <) */

loc_003ED0FC: ;
    eax = MEM32(esi);
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    ebp = ebp + eax;
    eax = MEM32(esi + 0x30);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_003ED19B; /* je: equal / zero */

loc_003ED113: ;
    eax = ebx + ebp;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(esi + 0x30);
    if (CMP_EQ(ecx, edi)) goto loc_003ED167; /* je: equal / zero */

loc_003ED120: ;
    ecx = MEM32(ecx);
    ecx = ecx - edi;
    if ((ecx == 0)) goto loc_003ED13D; /* je: equal / zero */

loc_003ED126: ;
    ecx--;
    if ((ecx != 0)) goto loc_003ED167; /* jne: not equal / not zero */

loc_003ED129: ;
    ecx = eax + 0x10;
    PUSH32(esp, ecx);
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FBA80(); /* call 0x003FBA80 */

loc_003ED13B: ;
    goto loc_003ED164;

loc_003ED13D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = eax + 0x20;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003FC4A0(); /* call 0x003FC4A0 */

loc_003ED164: ;
    esp = esp + 8;

loc_003ED167: ;
    eax = MEM32(esi + 0x30);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_003ED199; /* je: equal / zero */

loc_003ED172: ;
    edx = MEM32(eax);
    edx = edx - edi;
    if ((edx == 0)) goto loc_003ED18B; /* je: equal / zero */

loc_003ED178: ;
    edx--;
    if ((edx != 0)) goto loc_003ED199; /* jne: not equal / not zero */

loc_003ED17B: ;
    ecx = MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 8));
    edx = MEM32(eax + 4);
    ecx = ecx + edx + 0x10;
    goto loc_003ED199;

loc_003ED18B: ;
    ecx = MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 8));
    edx = MEM32(eax + 4);
    ecx = ecx + edx + 0x20;

loc_003ED199: ;
    ebp = ebp + ecx;

loc_003ED19B: ;
    if (CMP_EQ(MEM32(esi + 0x18), edi)) { sub_003ED1EB(); return; } /* je: equal / zero */

loc_003ED1A0: ;
    edi = ebx + ebp;
    MEM32(ebx + 0xC) = edi;
    ecx = MEM32(esi + 0x18);
    edx = ecx;
    ecx = ecx >> 2;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x18);
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    ebp = ebp + eax;
    edi = ebx + ebp;
    MEM32(ebx + 0x10) = edi;
    ecx = MEM32(esi + 0x18);
    edx = ecx;
    eax = 0; /* xor self */
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x18);
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    ebp = ebp + eax;
    g_seh_ebp = ebp; sub_003ED1F1(); return; /* tail jmp 0x003ED1F1 */

}

/**
 * sub_003ED220
 * Original: 0x003ED220 - 0x003ED371 (337 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED220: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x3C);
    if (CMP_A(edx, 4)) goto loc_003ED239; /* ja: above (unsigned >) */

loc_003ED22F: ;
    if (CMP_BE(MEM32(esi + 0x40), 4)) goto loc_003ED36F; /* jbe: below or equal (unsigned <=) */

loc_003ED239: ;
    if (TEST_NZ(LO8(eax), 4)) goto loc_003ED35B; /* jne: not equal / not zero */

loc_003ED241: ;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 2)) goto loc_003ED289; /* je: equal / zero */

loc_003ED248: ;
    ebx = MEM32(0x81BE38);
    ebp = MEM32(0x81BE40);
    ecx = MEM32(ebx + ebp * 4);
    edi = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x14);
    eax = eax - edi;
    ecx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(eax, edi)) ? 1 : 0); /* setle */
    ecx--;
    ecx = ecx & eax;
    if (CMP_AE(ecx, MEM32(esi + 0x40))) goto loc_003ED358; /* jae: above or equal (unsigned >=) */

loc_003ED274: ;
    eax = ebp + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x81BE3C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x81BE3C))); }
    MEM32(0x81BE40) = edx;
    esi = MEM32(ebx + edx * 4);
    goto loc_003ED2CB;

loc_003ED289: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_003ED2E7; /* je: equal / zero */

loc_003ED28D: ;
    esi = MEM32(0x81BE38);
    ebp = MEM32(0x81BE40);
    ecx = MEM32(esi + ebp * 4);
    edi = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x14);
    eax = eax - edi;
    ecx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(eax, edi)) ? 1 : 0); /* setle */
    ecx--;
    ecx = ecx & eax;
    if (CMP_AE(ecx, edx)) goto loc_003ED358; /* jae: above or equal (unsigned >=) */

loc_003ED2B8: ;
    eax = ebp + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x81BE3C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x81BE3C))); }
    MEM32(0x81BE40) = edx;
    esi = MEM32(esi + edx * 4);

loc_003ED2CB: ;
    eax = MEM32(0x5499E8);
    if (CMP_EQ(eax, edi)) goto loc_003ED352; /* je: equal / zero */

loc_003ED2D4: ;
    (void)0; /* test MEM32(esi), 0x780000 - flags set for next jcc */
    ecx = MEM32(esi + 8);
    if (TEST_Z(MEM32(esi), 0x780000)) goto loc_003ED346; /* je: equal / zero */

loc_003ED2DF: ;
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    goto loc_003ED34D;

loc_003ED2E7: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_003ED358; /* je: equal / zero */

loc_003ED2EB: ;
    ebx = MEM32(0x81BE38);
    ebp = MEM32(0x81BE40);
    ecx = MEM32(ebx + ebp * 4);
    edi = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esi + 0x40);
    eax = eax - edi;
    ecx = ecx + edx;
    edx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(eax, edi)) ? 1 : 0); /* setle */
    edx--;
    edx = edx & eax;
    if (CMP_AE(edx, ecx)) goto loc_003ED358; /* jae: above or equal (unsigned >=) */

loc_003ED317: ;
    eax = ebp + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x81BE3C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x81BE3C))); }
    eax = MEM32(0x5499E8);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x81BE40) = edx;
    esi = MEM32(ebx + edx * 4);
    if (CMP_EQ(eax, edi)) goto loc_003ED352; /* je: equal / zero */

loc_003ED333: ;
    (void)0; /* test MEM32(esi), 0x780000 - flags set for next jcc */
    ecx = MEM32(esi + 8);
    if (TEST_Z(MEM32(esi), 0x780000)) goto loc_003ED346; /* je: equal / zero */

loc_003ED33E: ;
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    goto loc_003ED34D;

loc_003ED346: ;
    if (CMP_EQ(ecx, edi)) goto loc_003ED352; /* je: equal / zero */

loc_003ED34A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);

loc_003ED34D: ;
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_003ED352: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0xC) = edi;

loc_003ED358: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003ED35B: ;
    ecx = MEM32(0x81BE38);
    edx = MEM32(0x81BE40);
    eax = MEM32(ecx + edx * 4);
    MEM32(0x81BE34) = eax;

loc_003ED36F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED380
 * Original: 0x003ED380 - 0x003ED3F5 (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED380: ;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_003ED3A8; /* je: equal / zero */

loc_003ED3A3: ;
    MEM32(0x84B854) = eax;

loc_003ED3A8: ;
    edx = MEM32(edi + -16);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) >> 3);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = 0;
    if (TEST_Z(LO8(eax), 1)) { sub_003ED3F5(); return; } /* je: equal / zero */

loc_003ED3C4: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(0x84B7CC) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_003ED3D7: ;
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(0x84B7CC) = 0;
    MEM8(0x750341) = 0xFF;
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_003ED3F3: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED420
 * Original: 0x003ED420 - 0x003ED457 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED420(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_003ED452; /* je: equal / zero */

loc_003ED42A: ;
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_003ED430: ;
    if (CMP_EQ(MEM16(esi + 4), LO16(edi))) { sub_003ED457(); return; } /* je: equal / zero */

loc_003ED436: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003ED44B; /* je: equal / zero */

loc_003ED43D: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_003ED444: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003ED454; /* jne: not equal / not zero */

loc_003ED44B: ;
    esi = MEM32(esi + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_003ED430; /* jne: not equal / not zero */

loc_003ED452: ;
    eax = 0; /* xor self */

loc_003ED454: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED460
 * Original: 0x003ED460 - 0x003ED48B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED460(void)
{

loc_003ED460: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_003ED471: ;
    edx = ZX16(MEM16(esp + 0x14));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_003ED487: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003ED490
 * Original: 0x003ED490 - 0x003ED4B5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED490(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED490: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B80C);
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + 0x81DE70;
    if (TEST_Z(esi, esi)) { sub_003ED4B5(); return; } /* je: equal / zero */

loc_003ED4A7: ;
    PUSH32(esp, edi);
    edi = eax + 0x40;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED520
 * Original: 0x003ED520 - 0x003ED636 (278 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003ED520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = 0x81B810;
    MEM32(0x81B808) = eax;
    MEM32(esp + 4) = eax;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    ecx = MEM32(0x81BDE0);
    ecx = ecx + 0x60;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_003ED59B: ;
    if (CMP_EQ(MEM32(0x81BDE4), 0xFFFF)) goto loc_003ED630; /* je: equal / zero */

loc_003ED5AB: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    eax = MEM32(0x81BDE4);
    SET_LO8(ecx, MEM8(0x547548));
    eax = eax + 0x60;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_003ED623; /* jne: not equal / not zero */

loc_003ED60D: ;
    edi = eax;
    edi = edi << 4;
    ecx = 0xC;
    esi = esp + 0x10;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_003ED623: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x14;
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_003ED630: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED640
 * Original: 0x003ED640 - 0x003ED650 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED640(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED640: ;
    (void)0; /* cmp LO16(edx), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(LO16(edx), 4)) { sub_003ED650(); return; } /* jne: not equal / not zero */

loc_003ED649: ;
    PUSH32(esp, 0); sub_003ED710(); /* call 0x003ED710 */

loc_003ED64E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED6C0
 * Original: 0x003ED6C0 - 0x003ED709 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 6));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax & edi;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_003ED701; /* jne: not equal / not zero */

loc_003ED6D7: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003ED6EC; /* je: equal / zero */

loc_003ED6DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED6C0(); /* call 0x003ED6C0 */

loc_003ED6E5: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003ED701; /* jne: not equal / not zero */

loc_003ED6EC: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) { sub_003ED709(); return; } /* je: equal / zero */

loc_003ED6F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED6C0(); /* call 0x003ED6C0 */

loc_003ED6FA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003ED709(); return; } /* je: equal / zero */

loc_003ED701: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED710
 * Original: 0x003ED710 - 0x003ED742 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED710(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED710: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003ED73E; /* jbe: below or equal (unsigned <=) */

loc_003ED71A: ;
    eax = 0; /* xor self */
    /* nop */

loc_003ED720: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED750(); /* call 0x003ED750 */

loc_003ED72C: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_003ED742(); return; } /* jne: not equal / not zero */

loc_003ED733: ;
    ecx = MEM32(edi + 0xC);
    esi++;
    eax = ZX16(LO16(esi));
    if (CMP_B(eax, ecx)) goto loc_003ED720; /* jb: below (unsigned <) */

loc_003ED73E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED750
 * Original: 0x003ED750 - 0x003ED7FA (170 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED750(void)
{
    int _flags = 0; /* fallback flag var */

loc_003ED750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x75EEF4);
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_003ED796; /* jne: not equal / not zero */

loc_003ED75E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64570C);
    ecx = 0x822670;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_003ED772: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x6456EC);
    ecx = 0x822670;
    MEM32(0x75EEF4) = edi;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_003ED78E: ;
    esp = esp + 0x10;
    MEM32(0x75EEF0) = eax;

loc_003ED796: ;
    esi = MEM32(esp + 0x10);
    eax = ZX16(MEM16(esi + 4));
    if (CMP_EQ(eax, edi)) goto loc_003ED7DB; /* je: equal / zero */

loc_003ED7A2: ;
    if (CMP_EQ(eax, MEM32(0x75EEF0))) goto loc_003ED7DB; /* je: equal / zero */

loc_003ED7AA: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003ED7BE; /* je: equal / zero */

loc_003ED7B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED750(); /* call 0x003ED750 */

loc_003ED7B7: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_003ED7D2; /* jne: not equal / not zero */

loc_003ED7BE: ;
    esi = MEM32(esi + 0x18);
    if (TEST_Z(esi, esi)) { sub_003ED7FA(); return; } /* je: equal / zero */

loc_003ED7C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003ED750(); /* call 0x003ED750 */

loc_003ED7CB: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_003ED7FA(); return; } /* je: equal / zero */

loc_003ED7D2: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003ED7DB: ;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_003ED7EA; /* je: equal / zero */

loc_003ED7E2: ;
    edx = MEM32(eax + 4);
    edx = edx + 8;
    if ((edx != 0)) goto loc_003ED7D2; /* jne: not equal / not zero */

loc_003ED7EA: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) { sub_003ED7FA(); return; } /* je: equal / zero */

loc_003ED7F1: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003ED800
 * Original: 0x003ED800 - 0x003ED84B (75 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED800(void)
{

loc_003ED800: ;
    ecx = 0; /* xor self */
    eax = 0xCCCCCCCCu;
    MEM32(0x81BDFC) = ecx;
    MEM32(0x84B83C) = ecx;
    edx = 0x203;
    ecx = 0x40354;
    MEM32(0x81BE44) = 1;
    MEM32(0x84B840) = eax;
    MEM32(0x84B844) = eax;
    MEM32(0x84B848) = eax;
    MEM32(0x84B84C) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003ED840: ;
    MEM32(0x549ADC) = 0x203;
    esp += 4; return; /* ret */

}

/**
 * sub_003ED850
 * Original: 0x003ED850 - 0x003ED8C7 (119 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ED850: ;
    eax = ZX8(MEM8(0x7502E8));
    ecx = ZX8(MEM8(0x7502E9));
    edx = ZX8(MEM8(0x7502EA));
    eax = eax | 0xFFFFFF00u;
    eax = eax << 8;
    eax = eax | ecx;
    esp = esp - 0x10;
    eax = eax << 8;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7502EB));
    eax = eax | edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00537010(); /* call 0x00537010 */

loc_003ED885: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(0x750324);
    eax = MEM32(0x7502EC);
    edx = edx | 0x2000;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x5499F0) = edx;
    MEM32(0x549B68) = eax;
    MEM32(0x81BE20) = 0;
    if (TEST_Z(ecx, ecx)) { sub_003ED8C7(); return; } /* je: equal / zero */

loc_003ED8B5: ;
    xmm0 = MEMF(0x750308); /* movss */
    xmm2 = MEMF(0x75030C); /* movss */
    g_seh_ebp = ebp; sub_003ED8D7(); return; /* tail jmp 0x003ED8D7 */

}

/**
 * sub_003EDAC0
 * Original: 0x003EDAC0 - 0x003EDB1B (91 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EDAC0: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_003EDB0C; /* jbe: below or equal (unsigned <=) */

loc_003EDACC: ;
    ebp = MEM32(eax + 4);
    /* nop */

loc_003EDAD0: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(ebp);

loc_003EDAD7: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003EDAFB; /* jne: not equal / not zero */

loc_003EDADF: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003EDAF7; /* je: equal / zero */

loc_003EDAE3: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003EDAFB; /* jne: not equal / not zero */

loc_003EDAED: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003EDAD7; /* jne: not equal / not zero */

loc_003EDAF7: ;
    eax = 0; /* xor self */
    goto loc_003EDB00;

loc_003EDAFB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003EDB00: ;
    if (TEST_Z(eax, eax)) { sub_003EDB1B(); return; } /* je: equal / zero */

loc_003EDB04: ;
    edi++;
    ebp = ebp + 0x14;
    if (CMP_B(edi, edx)) goto loc_003EDAD0; /* jb: below (unsigned <) */

loc_003EDB0C: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDB30
 * Original: 0x003EDB30 - 0x003EDB8C (92 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EDB30: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(edx & edx, 0)) goto loc_003EDB7D; /* jbe: below or equal (unsigned <=) */

loc_003EDB3C: ;
    edi = MEM32(eax + 4);
    edi = edi + 4;

loc_003EDB42: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(edi);

loc_003EDB48: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003EDB6C; /* jne: not equal / not zero */

loc_003EDB50: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003EDB68; /* je: equal / zero */

loc_003EDB54: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003EDB6C; /* jne: not equal / not zero */

loc_003EDB5E: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003EDB48; /* jne: not equal / not zero */

loc_003EDB68: ;
    eax = 0; /* xor self */
    goto loc_003EDB71;

loc_003EDB6C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003EDB71: ;
    if (TEST_Z(eax, eax)) { sub_003EDB8C(); return; } /* je: equal / zero */

loc_003EDB75: ;
    ebp++;
    edi = edi + 0x14;
    if (CMP_B(ebp, edx)) goto loc_003EDB42; /* jb: below (unsigned <) */

loc_003EDB7D: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDBA0
 * Original: 0x003EDBA0 - 0x003EDBC3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDBA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EDBA0: ;
    ecx = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    eax = eax >> 3;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = 0x80;
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003EDBC3(); return; } /* je: equal / zero */

loc_003EDBBC: ;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDBE0
 * Original: 0x003EDBE0 - 0x003EDC00 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDBE0(void)
{

loc_003EDBE0: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    edx = ecx;
    edx = edx >> 3;
    eax = ZX8(MEM8(edx + eax));
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax & edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EDC10
 * Original: 0x003EDC10 - 0x003EDC61 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EDC10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + -16);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(0x81BE64) = eax;
    MEM32(0x81BE28) = edi;
    MEM32(0x81BE2C) = edi;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, edi)) goto loc_003EDC38; /* je: equal / zero */

loc_003EDC33: ;
    MEM32(0x84B854) = eax;

loc_003EDC38: ;
    if (CMP_BE(MEM32(esi + 0xC), edi)) goto loc_003EDC5E; /* jbe: below or equal (unsigned <=) */

loc_003EDC3D: ;
    /* nop */

loc_003EDC40: ;
    ecx = MEM32(0x81BCE0);
    edx = MEM32(esi + 8);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EDC70(); /* call 0x003EDC70 */

loc_003EDC53: ;
    eax = MEM32(esi + 0xC);
    esp = esp + 8;
    edi++;
    if (CMP_B(edi, eax)) goto loc_003EDC40; /* jb: below (unsigned <) */

loc_003EDC5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDC70
 * Original: 0x003EDC70 - 0x003EDCB0 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EDC70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_003EDCAE; /* je: equal / zero */

loc_003EDC79: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_003EDC80: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003EF4A0(); /* call 0x003EF4A0 */

loc_003EDC88: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_003EDC92: ;
    eax = MEM32(esi + 0x14);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003EDCA6; /* je: equal / zero */

loc_003EDC9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EDC70(); /* call 0x003EDC70 */

loc_003EDCA3: ;
    esp = esp + 8;

loc_003EDCA6: ;
    esi = MEM32(esi + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_003EDC80; /* jne: not equal / not zero */

loc_003EDCAD: ;
    POP32(esp, edi);

loc_003EDCAE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDCE0
 * Original: 0x003EDCE0 - 0x003EDDFC (284 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDCE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EDCE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_003EDDFA; /* je: equal / zero */

loc_003EDCED: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_003EDCF0: ;
    eax = MEM32(ebx);
    edi = 0x645758;
    esi = eax;
    ecx = 0xF;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_003EDD50; /* jne: not equal / not zero */

loc_003EDD04: ;
    eax = MEM32(ebx + 0x34);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003EDDDD; /* jbe: below or equal (unsigned <=) */

loc_003EDD11: ;
    esi = 0; /* xor self */

loc_003EDD13: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + esi + 0x14);
    eax = eax + esi;
    if (TEST_Z(ecx, ecx)) goto loc_003EDD40; /* je: equal / zero */

loc_003EDD20: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_003EDD40; /* je: equal / zero */

loc_003EDD27: ;
    goto loc_003EDD30;

    /* nop */

loc_003EDD30: ;
    ecx = MEM32(ebx + 0x30);
    ecx = esi + ecx + 4;
    PUSH32(esp, 0); sub_0053B940(); /* call 0x0053B940 */

loc_003EDD3C: ;
    if (TEST_NZ(eax, eax)) goto loc_003EDD30; /* jne: not equal / not zero */

loc_003EDD40: ;
    eax = MEM32(ebx + 0x34);
    edi++;
    esi = esi + 0x18;
    if (CMP_B(edi, eax)) goto loc_003EDD13; /* jb: below (unsigned <) */

loc_003EDD4B: ;
    goto loc_003EDDDD;

loc_003EDD50: ;
    edi = 0x5F5384;
    esi = eax;
    ecx = 0x10;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_003EDDD8; /* je: equal / zero */

loc_003EDD62: ;
    edi = 0x645748;
    esi = eax;
    ecx = 0xE;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_003EDDD8; /* je: equal / zero */

loc_003EDD74: ;
    edi = 0x645738;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_003EDD9E; /* jne: not equal / not zero */

loc_003EDD86: ;
    eax = MEM32(ebx + 0x34);
    if (TEST_Z(eax, eax)) goto loc_003EDDDD; /* je: equal / zero */

loc_003EDD8D: ;
    /* nop */

loc_003EDD90: ;
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, 0); sub_0053B940(); /* call 0x0053B940 */

loc_003EDD98: ;
    if (TEST_NZ(eax, eax)) goto loc_003EDD90; /* jne: not equal / not zero */

loc_003EDD9C: ;
    goto loc_003EDDDD;

loc_003EDD9E: ;
    edi = 0x5E07FC;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_003EDDBB; /* jne: not equal / not zero */

loc_003EDDB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003F0780(); /* call 0x003F0780 */

loc_003EDDB6: ;
    esp = esp + 4;
    goto loc_003EDDDD;

loc_003EDDBB: ;
    esi = eax;
    edi = 0x64571C;
    ecx = 0xD;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_003EDDDD; /* jne: not equal / not zero */

loc_003EDDCD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003EF990(); /* call 0x003EF990 */

loc_003EDDD3: ;
    esp = esp + 4;
    goto loc_003EDDDD;

loc_003EDDD8: ;
    PUSH32(esp, 0); sub_003EEB50(); /* call 0x003EEB50 */

loc_003EDDDD: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EDDED; /* je: equal / zero */

loc_003EDDE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EDCE0(); /* call 0x003EDCE0 */

loc_003EDDEA: ;
    esp = esp + 4;

loc_003EDDED: ;
    ebx = MEM32(ebx + 0x18);
    if (TEST_NZ(ebx, ebx)) goto loc_003EDCF0; /* jne: not equal / not zero */

loc_003EDDF8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003EDDFA: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EDE00
 * Original: 0x003EDE00 - 0x003EDE3D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003EDE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B80C);
    ebx = ebx + ebx * 8;
    ebx = ebx << 4;
    PUSH32(esp, esi);
    ebx = ebx + 0x81DE70;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_003EDE3D(); return; } /* je: equal / zero */

loc_003EDE28: ;
    ecx = MEM32(0x81BE48);
    edx = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    eax = MEM32(edx + ecx * 8);
    MEM32(esp + 0x18) = eax;
    g_seh_ebp = ebp; sub_003EDE44(); return; /* tail jmp 0x003EDE44 */

}

/**
 * sub_003EE090
 * Original: 0x003EE090 - 0x003EE0FF (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE090(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE090: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_003EE0FD; /* je: equal / zero */

loc_003EE099: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    /* nop */

loc_003EE0A0: ;
    SET_LO16(eax, MEM16(edi + 4));
    if (CMP_NE(LO16(eax), MEM16(0x753BC8))) goto loc_003EE0C8; /* jne: not equal / not zero */

loc_003EE0AD: ;
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84B804) = edi;
    if (TEST_NZ(eax, eax)) goto loc_003EE0DA; /* jne: not equal / not zero */

loc_003EE0BA: ;
    esi = MEM32(edi + 0x34);
    if (TEST_Z(esi, esi)) goto loc_003EE0DA; /* je: equal / zero */

loc_003EE0C1: ;
    PUSH32(esp, 0); sub_003F5200(); /* call 0x003F5200 */

loc_003EE0C6: ;
    goto loc_003EE0DA;

loc_003EE0C8: ;
    if (CMP_EQ(LO16(eax), MEM16(0x753BC0))) goto loc_003EE0EA; /* je: equal / zero */

loc_003EE0D1: ;
    if (CMP_EQ(LO16(eax), MEM16(0x753BC4))) goto loc_003EE0EA; /* je: equal / zero */

loc_003EE0DA: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EE0F4; /* je: equal / zero */

loc_003EE0E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EE090(); /* call 0x003EE090 */

loc_003EE0E8: ;
    goto loc_003EE0F1;

loc_003EE0EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EDE00(); /* call 0x003EDE00 */

loc_003EE0F1: ;
    esp = esp + 8;

loc_003EE0F4: ;
    edi = MEM32(edi + 0x18);
    if (TEST_NZ(edi, edi)) goto loc_003EE0A0; /* jne: not equal / not zero */

loc_003EE0FB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003EE0FD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE100
 * Original: 0x003EE100 - 0x003EE1F7 (247 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE100(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003EE100: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM16(0x753BC0), 0xFFFF)) goto loc_003EE15C; /* jne: not equal / not zero */

loc_003EE10C: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64570C);
    ecx = 0x822670;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_003EE11F: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6456EC);
    ecx = 0x822670;
    MEM16(0x753BC0) = LO16(eax);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_003EE139: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E07FC);
    ecx = 0x822670;
    MEM16(0x753BC4) = LO16(eax);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_003EE153: ;
    esp = esp + 0x18;
    MEM16(0x753BC8) = LO16(eax);

loc_003EE15C: ;
    fp_push(MEMF(0x74FB30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EE16D: ;
    fp_push(MEMF(0x74FB34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(0x81BCD0) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EE183: ;
    fp_push(MEMF(0x74FB38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(0x81BCD2) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EE199: ;
    fp_push(MEMF(0x74FB3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(0x81BCD1) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EE1AF: ;
    MEM8(0x81BCD3) = LO8(eax);
    PUSH32(esp, 0); sub_003F63D0(); /* call 0x003F63D0 */

loc_003EE1B9: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 8);
    ecx = ZX16(MEM16(esp + 0xC));
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003EE090(); /* call 0x003EE090 */

loc_003EE1D3: ;
    eax = MEM32(0x81BDFC);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003EE1F0; /* je: equal / zero */

loc_003EE1DF: ;
    PUSH32(esp, 0);
    MEM32(0x81BDFC) = 0;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003EE1F0: ;
    PUSH32(esp, 0); sub_003F78F0(); /* call 0x003F78F0 */

loc_003EE1F5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003EE200
 * Original: 0x003EE200 - 0x003EE2AD (173 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE200: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003EE2AA; /* je: equal / zero */

loc_003EE213: ;
    eax = MEM32(eax);
    eax = eax - 0;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    if ((eax == 0)) goto loc_003EE276; /* je: equal / zero */

loc_003EE21E: ;
    eax--;
    if ((eax != 0)) goto loc_003EE2A9; /* jne: not equal / not zero */

loc_003EE225: ;
    eax = MEM32(0x753BD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00429E20(); /* call 0x00429E20 */

loc_003EE230: ;
    edx = MEM32(0x753BD4);
    edi = MEM32(ebp + 0x30);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(0x753BE0));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(0x753BDC));
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_003EE310(); /* call 0x003EE310 */

loc_003EE257: ;
    ecx = MEM32(edi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 8));
    esi = MEM32(edi + 4);
    ebx = ebx - ecx;
    edx = eax;
    ebx = ebx - esi;
    edx = edx + ebx;
    PUSH32(esp, 0); sub_00429D90(); /* call 0x00429D90 */

loc_003EE26E: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003EE276: ;
    eax = MEM32(0x753BD8);
    PUSH32(esp, 0); sub_00429E20(); /* call 0x00429E20 */

loc_003EE280: ;
    edx = MEM32(0x753BE4);
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0); sub_003EE310(); /* call 0x003EE310 */

loc_003EE291: ;
    ecx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 8));
    edx = MEM32(esi + 4);
    ebx = ebx - ecx;
    ebx = ebx - edx;
    eax = eax + ebx;
    PUSH32(esp, 0); sub_00429860(); /* call 0x00429860 */

loc_003EE2A6: ;
    esp = esp + 4;

loc_003EE2A9: ;
    POP32(esp, ebx);

loc_003EE2AA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE2B0
 * Original: 0x003EE2B0 - 0x003EE2E2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE2B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE2B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003EE2C7: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_003EE2E2(); return; } /* je: equal / zero */

loc_003EE2CF: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) { sub_003EE2E2(); return; } /* je: equal / zero */

loc_003EE2D6: ;
    eax = MEM32(eax + 8);
    MEM32(esi) = eax;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE2F0
 * Original: 0x003EE2F0 - 0x003EE308 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE2F0: ;
    if (TEST_Z(ecx, ecx)) { sub_003EE308(); return; } /* je: equal / zero */

loc_003EE2F4: ;
    ecx = MEM32(ecx + 0x10);
    if (TEST_Z(ecx, ecx)) { sub_003EE308(); return; } /* je: equal / zero */

loc_003EE2FB: ;
    if (TEST_S(eax, eax)) { sub_003EE308(); return; } /* jl: less (signed <) */

loc_003EE2FF: ;
    if (TEST_Z(edx, edx)) { sub_003EE308(); return; } /* je: equal / zero */

loc_003EE303: ;
    g_seh_ebp = ebp; sub_00416030(); return; /* tail jmp 0x00416030 */

}

/**
 * sub_003EE310
 * Original: 0x003EE310 - 0x003EE340 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE310(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE310: ;
    ecx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_003EE33F; /* je: equal / zero */

loc_003EE319: ;
    edx = MEM32(ecx);
    edx = edx - eax;
    if ((edx == 0)) goto loc_003EE331; /* je: equal / zero */

loc_003EE31F: ;
    edx--;
    if ((edx != 0)) goto loc_003EE33F; /* jne: not equal / not zero */

loc_003EE322: ;
    edx = MEM32(ecx + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 8));
    eax = MEM32(ecx + 4);
    eax = edx + eax + 0x10;
    esp += 4; return; /* ret */

loc_003EE331: ;
    edx = MEM32(ecx + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 8));
    eax = MEM32(ecx + 4);
    eax = edx + eax + 0x20;

loc_003EE33F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE350
 * Original: 0x003EE350 - 0x003EE3A2 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE350(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE350: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x84B808);
    if (TEST_Z(ecx, ecx)) goto loc_003EE37E; /* je: equal / zero */

loc_003EE360: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    esi = MEM32(esi + 0x50);
    esi = MEM32(esi);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = esi;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;
    POP32(esp, esi);

loc_003EE37E: ;
    ecx = MEM32(edx + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_003EE3A1; /* je: equal / zero */

loc_003EE385: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003EE3A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE3B0
 * Original: 0x003EE3B0 - 0x003EE404 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE3B0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x84B808);
    if (TEST_Z(ecx, ecx)) goto loc_003EE3DF; /* je: equal / zero */

loc_003EE3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    esi = MEM32(esi + 0x50);
    esi = MEM32(esi + 0x10);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = esi;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;
    POP32(esp, esi);

loc_003EE3DF: ;
    ecx = MEM32(edx + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_003EE403; /* je: equal / zero */

loc_003EE3E6: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx + 0x10);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003EE403: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE410
 * Original: 0x003EE410 - 0x003EE47D (109 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE410(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE410: ;
    edx = MEM32(esi + 0x1C);
    ecx = 0xFFFF;
    eax = 0; /* xor self */
    if (CMP_EQ(edx, ecx)) goto loc_003EE423; /* je: equal / zero */

loc_003EE41E: ;
    eax = 1;

loc_003EE423: ;
    if (CMP_EQ(MEM32(esi + 0x20), ecx)) goto loc_003EE42B; /* je: equal / zero */

loc_003EE428: ;
    eax = eax | 2;

loc_003EE42B: ;
    SET_LO8(edx, MEM8(esi + 0x50));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003EE435; /* je: equal / zero */

loc_003EE432: ;
    eax = eax | 4;

loc_003EE435: ;
    SET_LO8(edx, MEM8(esi + 0x51));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003EE43F; /* je: equal / zero */

loc_003EE43C: ;
    eax = eax | 8;

loc_003EE43F: ;
    SET_LO8(edx, MEM8(esi + 0x52));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003EE449; /* je: equal / zero */

loc_003EE446: ;
    eax = eax | 0x10;

loc_003EE449: ;
    if (CMP_EQ(MEM32(esi + 0x70), ecx)) goto loc_003EE451; /* je: equal / zero */

loc_003EE44E: ;
    eax = eax | 0x20;

loc_003EE451: ;
    (void)0; /* cmp MEM32(0x81BE64), 0x3E884DF5 - flags set for next jcc */
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    if (CMP_B(MEM32(0x81BE64), 0x3E884DF5)) { sub_003EE47D(); return; } /* jb: below (unsigned <) */

loc_003EE461: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EBE10(); /* call 0x003EBE10 */

loc_003EE476: ;
    esp = esp + 0x14;
    MEM32(esi + 0x5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE4A0
 * Original: 0x003EE4A0 - 0x003EE4B6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE4A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(0x81BE48);
    if (TEST_Z(eax, eax)) { sub_003EE4B6(); return; } /* je: equal / zero */

loc_003EE4AE: ;
    eax = MEM32(eax + 4);
    eax = MEM32(eax + edx * 4);
    g_seh_ebp = ebp; sub_003EE4B9(); return; /* tail jmp 0x003EE4B9 */

}

/**
 * sub_003EE500
 * Original: 0x003EE500 - 0x003EE581 (129 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE500(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EE500: ;
    SET_LO8(eax, MEM8(edi + 6));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(0x81BE2C);
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    if (TEST_Z(LO8(eax), 2)) esi = MEM32(0x81BE28); /* cmove */
    if (TEST_Z(esi, esi)) goto loc_003EE57C; /* je: equal / zero */

loc_003EE51A: ;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    MEM32(0x54A8B0) = 0;
    if (((int32_t)(MEM32(esi) - 0) < 0)) goto loc_003EE530; /* js: sign (negative) */

loc_003EE529: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0053C600(); /* call 0x0053C600 */

loc_003EE530: ;
    ecx = MEM32(esp + 0x10);
    eax = esp + 4;
    ecx = ecx + 0x198;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_003EE4A0(); /* call 0x003EE4A0 */

loc_003EE54B: ;
    eax = MEM32(0x54A8B0);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003EE57C; /* je: equal / zero */

loc_003EE557: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    esi = MEM32(eax + 0x14);
    ecx = ecx + edx;
    edx = edx + 4;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(0x54A8B0) = 0;
    MEM32(eax + 0x10) = edx;
    if (CMP_A(edx, esi)) goto loc_003EE57C; /* ja: above (unsigned >) */

loc_003EE576: ;
    MEM32(ecx) = 0xFFFFFFFFu;

loc_003EE57C: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE590
 * Original: 0x003EE590 - 0x003EE65D (205 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE590: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 0x3C);
    ecx = ecx | 4;
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 8) = ecx;
    if (CMP_BE(eax, ebx)) goto loc_003EE5F5; /* jbe: below or equal (unsigned <=) */

loc_003EE5AB: ;
    edx = 0; /* xor self */
    PUSH32(esp, ebp);
    edi = edi;

loc_003EE5B0: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(eax + edx + 0x18);
    eax = eax + edx;
    if (CMP_EQ(ecx, ebx)) goto loc_003EE5E9; /* je: equal / zero */

loc_003EE5BD: ;
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(edi + 0x30);
    ebp = MEM32(ecx + edx + 0xC);
    eax = ecx + edx;
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ebp;
    ebp = MEM32(eax + 8);
    ebp = ebp & 0x70000;
    if (CMP_EQ(ebp, 0x20000)) goto loc_003EE5E6; /* je: equal / zero */

loc_003EE5E0: ;
    ecx = ecx & 0xFFFFFFF;

loc_003EE5E6: ;
    MEM32(eax + 0xC) = ecx;

loc_003EE5E9: ;
    eax = MEM32(edi + 0x3C);
    esi++;
    edx = edx + 0x1C;
    if (CMP_B(esi, eax)) goto loc_003EE5B0; /* jb: below (unsigned <) */

loc_003EE5F4: ;
    POP32(esp, ebp);

loc_003EE5F5: ;
    (void)0; /* cmp MEM32(edi + 0x48), ebx - flags set for next jcc */
    eax = MEM32(edi + 0x38);
    if (CMP_EQ(MEM32(edi + 0x48), ebx)) { sub_003EE65D(); return; } /* je: equal / zero */

loc_003EE5FD: ;
    if (CMP_EQ(eax, ebx)) goto loc_003EE647; /* je: equal / zero */

loc_003EE601: ;
    ecx = MEM32(eax);
    esi = 0; /* xor self */
    if (CMP_BE(ecx, ebx)) goto loc_003EE632; /* jbe: below or equal (unsigned <=) */

loc_003EE609: ;
    /* nop */

loc_003EE610: ;
    MEM32(0x81BE48) = esi;
    edx = MEM32(edi + 0x38);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003EE500(); /* call 0x003EE500 */

loc_003EE625: ;
    edx = MEM32(edi + 0x38);
    eax = MEM32(edx);
    esp = esp + 4;
    esi++;
    if (CMP_B(esi, eax)) goto loc_003EE610; /* jb: below (unsigned <) */

loc_003EE632: ;
    MEM32(0x81BE48) = ebx;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    MEM32(edi + 0x34) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003EE647: ;
    MEM32(0x81BE48) = ebx;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EE500(); /* call 0x003EE500 */

loc_003EE656: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE6A0
 * Original: 0x003EE6A0 - 0x003EE6BE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE6A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE6A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x38);
    if (TEST_Z(eax, eax)) { sub_003EE6BE(); return; } /* je: equal / zero */

loc_003EE6B0: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(0x81BE48);
    esi = MEM32(eax + ecx * 4);
    g_seh_ebp = ebp; sub_003EE6C1(); return; /* tail jmp 0x003EE6C1 */

}

/**
 * sub_003EE720
 * Original: 0x003EE720 - 0x003EE7F8 (216 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE720: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x40;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + 8;
    ecx = 0x10;
    /* nop */

loc_003EE740: ;
    MEM32(eax) = 2;
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_003EE740; /* jne: not equal / not zero */

loc_003EE74C: ;
    eax = MEM32(ebx + 4);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003EE7F4; /* jbe: below or equal (unsigned <=) */

loc_003EE759: ;
    /* nop */

loc_003EE760: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = MEM32(ecx + 0x30);
    edx = MEM32(eax + edi + 4);
    eax = eax + edi;
    PUSH32(esp, 8);
    PUSH32(esp, 0x645784);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_003EE782: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003EE7C7; /* jne: not equal / not zero */

loc_003EE789: ;
    eax = MEM32(ebx + 0x40);
    edi = MEM32(0x5499E8);
    ebp = ZX8(MEM8(eax + esi));
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_003EE7AC; /* jb: below (unsigned <) */

loc_003EE79D: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003EE7AC: ;
    edx = ebp * 4 + 0x41940;
    ebp = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 8;
    MEM32(edi) = eax;
    goto loc_003EE7E8;

loc_003EE7C7: ;
    ecx = MEM32(ebx + 0x40);
    edx = ZX8(MEM8(ecx + esi));
    eax = MEM32(ebx + 0x44);
    eax = MEM32(eax + esi * 4);
    edx = edx << 4;
    MEM32(edx + ebp + 8) = eax;
    ecx = MEM32(ebx + 0x40);
    edx = ZX8(MEM8(ecx + esi));
    edx = edx << 4;
    MEM32(edx + ebp) = esi;

loc_003EE7E8: ;
    eax = MEM32(ebx + 4);
    esi++;
    if (CMP_B(esi, eax)) goto loc_003EE760; /* jb: below (unsigned <) */

loc_003EE7F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE800
 * Original: 0x003EE800 - 0x003EE830 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EE800: ;
    esp = esp - 0x108;
    eax = MEM32(ecx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(0x81B7C0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = 0x8A4;
    MEM32(esp + 0xC) = edx;
    if (TEST_Z(eax, eax)) { sub_003EE830(); return; } /* je: equal / zero */

loc_003EE822: ;
    eax = MEM32(eax + 4);
    esi = MEM32(0x81BE48);
    ebx = MEM32(eax + esi * 4);
    g_seh_ebp = ebp; sub_003EE833(); return; /* tail jmp 0x003EE833 */

}

/**
 * sub_003EE8F0
 * Original: 0x003EE8F0 - 0x003EE908 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003EE8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    eax = MEM32(ecx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_003EE908(); return; } /* jne: not equal / not zero */

loc_003EE903: ;
    ebx = MEM32(ecx + 0x34);
    g_seh_ebp = ebp; sub_003EE914(); return; /* tail jmp 0x003EE914 */

}

/**
 * sub_003EEB20
 * Original: 0x003EEB20 - 0x003EEB4C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB20(void)
{

loc_003EEB20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x34);
    eax = eax + 0x198;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_003EE800(); /* call 0x003EE800 */

loc_003EEB35: ;
    ecx = esi;
    PUSH32(esp, 0); sub_003EE8F0(); /* call 0x003EE8F0 */

loc_003EEB3C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003EEB47: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EEB50
 * Original: 0x003EEB50 - 0x003EEBA0 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EEB50: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_NZ(eax, eax)) goto loc_003EEB9F; /* jne: not equal / not zero */

loc_003EEB57: ;
    eax = MEM32(ebx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_003EEBA0(); return; } /* je: equal / zero */

loc_003EEB5F: ;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003EEB9D; /* jbe: below or equal (unsigned <=) */

loc_003EEB68: ;
    goto loc_003EEB70;

    /* nop */

loc_003EEB70: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + edi * 4);
    esi = MEM32(ecx + 0x5C);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003EEB93; /* je: equal / zero */

loc_003EEB7E: ;
    PUSH32(esp, 0); sub_003EC4E0(); /* call 0x003EC4E0 */

loc_003EEB83: ;
    edx = MEM32(ebx + 0x38);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + edi * 4);
    MEM32(ecx + 0x5C) = 0xFFFFFFFFu;

loc_003EEB93: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax);
    edi++;
    if (CMP_B(edi, ecx)) goto loc_003EEB70; /* jb: below (unsigned <) */

loc_003EEB9D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003EEB9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EEBC0
 * Original: 0x003EEBC0 - 0x003EEBDA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003EEBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(ecx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_003EEBDA(); return; } /* je: equal / zero */

loc_003EEBD2: ;
    eax = MEM32(eax + 4);
    edi = MEM32(eax + edx * 4);
    g_seh_ebp = ebp; sub_003EEBDD(); return; /* tail jmp 0x003EEBDD */

}

/**
 * sub_003EED00
 * Original: 0x003EED00 - 0x003EED4C (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EED00(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EED00: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx * 4 + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003EED22: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    ebx = ebp;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_003EEBC0(); /* call 0x003EEBC0 */

loc_003EED35: ;
    eax = MEM32(edi + 0x38);
    ebx = MEM32(eax + 0xC);
    esi = MEM32(eax + esi * 4 + 0x38);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003EED47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EED50
 * Original: 0x003EED50 - 0x003EED83 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EED50(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EED50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) { sub_003EED83(); return; } /* je: equal / zero */

loc_003EED61: ;
    eax = MEM32(0x81BE48);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EED00(); /* call 0x003EED00 */

loc_003EED6E: ;
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EE3B0(); /* call 0x003EE3B0 */

loc_003EED7D: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EEDB0
 * Original: 0x003EEDB0 - 0x003EEEBD (269 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEDB0(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EEDB0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x84B80C);
    xmm1 = MEMF(0x648D34); /* movss */
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + 0x81DEB0;
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(0x81BD74) = xmm0; /* movss */
    MEMF(0x81BD7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEM16(0x81BD26) = LO16(ebx);
    MEM32(0x81BD2C) = ebx;
    MEMF(0x81BD78) = xmm1; /* movss */
    MEM32(0x81BD70) = 0x3F0270;
    MEM32(0x81BE60) = ebx;
    MEM16(0x81BD2A) = LO16(ebx);
    MEM32(0x81BDCC) = ebx;
    MEM32(0x81BE24) = ebx;
    MEM32(0x81BE28) = ebx;
    MEM32(0x81BE2C) = ebx;
    MEM32(0x81BE40) = ebx;
    MEM32(0x81BE3C) = ebx;
    MEM32(0x81BE44) = ebx;
    MEM32(0x81BE4C) = 1;
    MEM32(0x822670) = 0x822678;
    MEM32(0x822674) = ebx;
    MEM32(0x81BCE0) = 0x822670;
    MEM32(0x8226C8) = 0x753BE8;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_003EEEC0(); return; /* tail jmp 0x003EEEC0 */

}

/**
 * sub_003EF4A0
 * Original: 0x003EF4A0 - 0x003EF523 (131 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF4A0: ;
    edx = MEM32(eax + 4);
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003EF51E; /* jle: less or equal (signed <=) */

loc_003EF4AD: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    edi = eax;
    PUSH32(esp, esi);

loc_003EF4C2: ;
    esi = MEM32(esp + 0x10);
    eax = edi;

loc_003EF4C8: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003EF4EC; /* jne: not equal / not zero */

loc_003EF4D0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003EF4E8; /* je: equal / zero */

loc_003EF4D4: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003EF4EC; /* jne: not equal / not zero */

loc_003EF4DE: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003EF4C8; /* jne: not equal / not zero */

loc_003EF4E8: ;
    eax = 0; /* xor self */
    goto loc_003EF4F1;

loc_003EF4EC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003EF4F1: ;
    if (TEST_Z(eax, eax)) goto loc_003EF505; /* je: equal / zero */

loc_003EF4F5: ;
    ebp++;
    edi = edi + 0x54;
    if (CMP_L(ebp, edx)) goto loc_003EF4C2; /* jl: less (signed <) */

loc_003EF4FD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003EF505: ;
    eax = MEM32(esp + 0x14);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    POP32(esp, esi);
    edx = edx + eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebx);
    MEM32(eax + 0x10) = edx;
    MEM16(eax + 4) = LO16(ebp);
    POP32(esp, edi);

loc_003EF51E: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF530
 * Original: 0x003EF530 - 0x003EF597 (103 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF530: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003EF585; /* jbe: below or equal (unsigned <=) */

loc_003EF53E: ;
    ecx = MEM32(ecx);
    MEM32(esp + 0x10) = ecx;
    ebp = ecx;

loc_003EF546: ;
    esi = MEM32(esp + 0x18);
    ecx = ebp;
    /* nop */

loc_003EF550: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003EF574; /* jne: not equal / not zero */

loc_003EF558: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003EF570; /* je: equal / zero */

loc_003EF55C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003EF574; /* jne: not equal / not zero */

loc_003EF566: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003EF550; /* jne: not equal / not zero */

loc_003EF570: ;
    ecx = 0; /* xor self */
    goto loc_003EF579;

loc_003EF574: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_003EF579: ;
    if (TEST_Z(ecx, ecx)) { sub_003EF597(); return; } /* je: equal / zero */

loc_003EF57D: ;
    edi++;
    ebp = ebp + 0x54;
    if (CMP_B(edi, eax)) goto loc_003EF546; /* jb: below (unsigned <) */

loc_003EF585: ;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF5B0
 * Original: 0x003EF5B0 - 0x003EF650 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF5B0: ;
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ebp;
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003EF63D; /* jle: less or equal (signed <=) */

loc_003EF5C4: ;
    PUSH32(esp, esi);

loc_003EF5C5: ;
    ecx = MEM32(edi + 0x30);
    ecx = ZX16(MEM16(ecx + edx * 8));
    /* TODO: prefetchnta byte ptr [eax + 0x40] */
    /* TODO: prefetchnta byte ptr [eax + 0x60] */
    ecx = ecx << 6;
    ecx = ecx + MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    esi = eax + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003EF5E6: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    ecx = MEM32(edi + 0x34);
    edx++;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(edx, ecx)) goto loc_003EF5C5; /* jl: less (signed <) */

loc_003EF63C: ;
    POP32(esp, esi);

loc_003EF63D: ;
    eax = MEM32(0x84B80C);
    edx = eax + eax * 8;
    edx = edx << 4;
    MEM32(edx + 0x81DEF0) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF650
 * Original: 0x003EF650 - 0x003EF699 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF650: ;
    edx = MEM32(0x84B810);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B818);
    PUSH32(esp, esi);
    esi = MEM32(0x84B814);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84B80C);
    ebx = eax + eax * 8;
    eax = MEM32(edi + 0x34);
    eax = eax << 6;
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    ebx = ebx << 4;
    ecx = esi + eax;
    ebp = edx + ebp + -1;
    ebx = ebx + 0x81DE70;
    if (CMP_BE(ecx, ebp)) { sub_003EF699(); return; } /* jbe: below or equal (unsigned <=) */

loc_003EF690: ;
    eax = eax + edx;
    MEM32(0x84B814) = eax;
    g_seh_ebp = ebp; sub_003EF6A1(); return; /* tail jmp 0x003EF6A1 */

}

/**
 * sub_003EF6C0
 * Original: 0x003EF6C0 - 0x003EF6E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF6C0(void)
{

loc_003EF6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_003EF650(); /* call 0x003EF650 */

loc_003EF6CC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x81BDD0) = esi;
    MEM32(0x81BDD4) = eax;
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003EF6E2: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF6F0
 * Original: 0x003EF6F0 - 0x003EF7ED (253 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF6F0(void)
{
    float xmm0, xmm1;

loc_003EF6F0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = esi;
    PUSH32(esp, 0); sub_003EF650(); /* call 0x003EF650 */

loc_003EF700: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x81BDD0) = esi;
    MEM32(0x81BDD4) = eax;
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003EF716: ;
    eax = ZX8(MEM8(0x753BCC));
    xmm0 = MEMF(0x648CEC); /* movss */
    ecx = ZX8(MEM8(0x753BCD));
    edx = ZX8(MEM8(0x753BCE));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(0x753BCF));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp + 8;
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = esp + 8;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_003EF786: ;
    eax = MEM32(0x753BD0);
    SET_LO8(edx, MEM8(0x753BCD));
    SET_LO8(ebx, MEM8(0x753BD2));
    SET_LO8(ecx, MEM8(0x753BCC));
    SET_LO8(edx, LO8(edx) + HI8(eax));
    MEM8(0x753BCD) = LO8(edx);
    SET_LO8(edx, MEM8(0x753BCE));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    SET_LO8(ebx, MEM8(0x753BCD));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(0x753BCD) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x753BD2));
    MEM8(0x753BCC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x753BCD));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    POP32(esp, esi);
    MEM8(0x753BCD) = LO8(ecx);
    MEM8(0x753BCE) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF7F0
 * Original: 0x003EF7F0 - 0x003EF81C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF7F0(void)
{

loc_003EF7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_003EF650(); /* call 0x003EF650 */

loc_003EF7FC: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x81BDD0) = esi;
    MEM32(0x81BDD4) = eax;
    PUSH32(esp, 0); sub_003EE3B0(); /* call 0x003EE3B0 */

loc_003EF817: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF820
 * Original: 0x003EF820 - 0x003EF83D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF820: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(eax + 0x3A));
    edx = edx | 4;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(eax + 8) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_003EF83D(); return; } /* jne: not equal / not zero */

loc_003EF834: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003EFC20(); return; /* tail jmp 0x003EFC20 */

}

/**
 * sub_003EF840
 * Original: 0x003EF840 - 0x003EF86D (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF840(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EF840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(esi + 0x3A));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax + edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003EF86D(); return; } /* je: equal / zero */

loc_003EF856: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EFD50(); /* call 0x003EFD50 */

loc_003EF85D: ;
    esp = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003EF867: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF890
 * Original: 0x003EF890 - 0x003EF973 (227 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF890: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x3A));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edi = edi + ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EF8B2; /* je: equal / zero */

loc_003EF8A7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_003EFB10(); /* call 0x003EFB10 */

loc_003EF8AF: ;
    esp = esp + 4;

loc_003EF8B2: ;
    eax = MEM32(esi + 0x34);
    eax = eax + ebx;
    MEM32(edi + 0x1C4) = eax;
    SET_LO8(eax, MEM8(esi + 0x3A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EF937; /* je: equal / zero */

loc_003EF8C4: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_BE(ecx & ecx, 0)) goto loc_003EF932; /* jbe: below or equal (unsigned <=) */

loc_003EF8D9: ;
    ecx = 0; /* xor self */
    edx = edi + 0x184;

loc_003EF8E1: ;
    eax = MEM32(eax + 0x30);
    eax = eax + ecx;
    SET_LO8(eax, MEM8(eax + 1));
    if (CMP_EQ(LO8(eax), 9)) goto loc_003EF8F1; /* je: equal / zero */

loc_003EF8ED: ;
    if (CMP_NE(LO8(eax), 0xA)) goto loc_003EF91B; /* jne: not equal / not zero */

loc_003EF8F1: ;
    eax = ZX16(MEM16(esi + 0x38));
    eax = ebp + eax * 4;
    ebp = MEM32(edi + 0x1C4);
    eax = eax + ebp + -4;
    ebp = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    eax = MEM32(eax + 0x30);
    ebp = ebp + MEM32(eax + ecx + 0x14);
    MEM32(esp + 0x14) = ebp;
    goto loc_003EF921;

loc_003EF91B: ;
    MEM32(edx) = 0;

loc_003EF921: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    ebx++;
    edx = edx + 4;
    ecx = ecx + 0x18;
    if (CMP_B(ebx, MEM32(eax + 0x34))) goto loc_003EF8E1; /* jb: below (unsigned <) */

loc_003EF932: ;
    ebx = MEM32(esp + 0x18);
    POP32(esp, ebp);

loc_003EF937: ;
    ecx = ZX16(MEM16(esi + 0x38));
    eax = 0; /* xor self */
    ecx--;
    if ((ecx == 0)) { sub_003EF973(); return; } /* je: equal / zero */

loc_003EF940: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_003EF950;

    /* nop */
    /* nop */

loc_003EF950: ;
    edx = MEM32(edi + 0x1C4);
    MEMF(edx + eax * 4) = xmm0; /* movss */
    ecx = ZX16(MEM16(esi + 0x38));
    eax++;
    ecx--;
    if (CMP_B(eax, ecx)) goto loc_003EF950; /* jb: below (unsigned <) */

loc_003EF965: ;
    edx = MEM32(esi + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + edx) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF990
 * Original: 0x003EF990 - 0x003EFA71 (225 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + 0x3A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003EFA6F; /* jne: not equal / not zero */

loc_003EF9A0: ;
    eax = MEM32(ebx + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003EFA04; /* jbe: below or equal (unsigned <=) */

loc_003EF9B1: ;
    ebp = 0; /* xor self */

loc_003EF9B3: ;
    esi = MEM32(eax + 0x30);
    eax = MEM32(esi + ebp + 0x10);
    esi = esi + ebp;
    if (TEST_Z(eax, eax)) goto loc_003EF9F4; /* je: equal / zero */

loc_003EF9C0: ;
    eax = MEM32(esi + 0x14);
    if (CMP_BE(eax & eax, 0)) goto loc_003EF9F4; /* jbe: below or equal (unsigned <=) */

loc_003EF9C7: ;
    ebx = esi + 4;
    /* nop */

loc_003EF9D0: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0053B940(); /* call 0x0053B940 */

loc_003EF9D7: ;
    if (TEST_NZ(eax, eax)) goto loc_003EF9D0; /* jne: not equal / not zero */

loc_003EF9DB: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003EF9E9: ;
    ebx = MEM32(esp + 0x14);
    MEM32(esi + 0x10) = 0;

loc_003EF9F4: ;
    edx = MEM32(ebx + 0x30);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x34);
    edi++;
    ebp = ebp + 0x18;
    if (CMP_B(edi, ecx)) goto loc_003EF9B3; /* jb: below (unsigned <) */

loc_003EFA04: ;
    ebp = 1;
    if (CMP_BE(MEM16(ebx + 0x38), LO16(ebp))) goto loc_003EFA6C; /* jbe: below or equal (unsigned <=) */

loc_003EFA0F: ;
    /* nop */

loc_003EFA10: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ecx + ebp * 4);
    edx = MEM32(edx + 0x30);
    ecx = edx + 1;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM8(ecx), 9)) goto loc_003EFA2C; /* je: equal / zero */

loc_003EFA23: ;
    ecx = ecx + 0x18;
    eax++;
    if (CMP_NE(MEM8(ecx), 9)) goto loc_003EFA23; /* jne: not equal / not zero */

loc_003EFA2C: ;
    eax = eax + eax * 2;
    esi = edx + eax * 8;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003EFA63; /* je: equal / zero */

loc_003EFA39: ;
    eax = MEM32(esi + 0x14);
    if (CMP_BE(eax & eax, 0)) goto loc_003EFA63; /* jbe: below or equal (unsigned <=) */

loc_003EFA40: ;
    edi = esi + 4;

loc_003EFA43: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0053B940(); /* call 0x0053B940 */

loc_003EFA4A: ;
    if (TEST_NZ(eax, eax)) goto loc_003EFA43; /* jne: not equal / not zero */

loc_003EFA4E: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003EFA5C: ;
    MEM32(esi + 0x10) = 0;

loc_003EFA63: ;
    edx = ZX16(MEM16(ebx + 0x38));
    ebp++;
    if (CMP_B(ebp, edx)) goto loc_003EFA10; /* jb: below (unsigned <) */

loc_003EFA6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003EFA6F: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFA80
 * Original: 0x003EFA80 - 0x003EFB09 (137 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EFA80: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebx + 0x3A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EFB07; /* je: equal / zero */

loc_003EFA88: ;
    eax = MEM32(ebx + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = edx;
    edx = MEM32(eax + 0x34);
    PUSH32(esp, edi);
    ecx = ecx + esi;
    edi = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_003EFB05; /* jbe: below or equal (unsigned <=) */

loc_003EFA9F: ;
    edx = 0xFFFFFFE8u;
    edx = edx - ecx;
    esi = ecx + 0x18;
    MEM32(esp + 8) = edx;
    PUSH32(esp, ebp);
    edi = edi;

loc_003EFAB0: ;
    ecx = MEM32(eax + 0x30);
    ecx = ecx + edx;
    eax = MEM32(ecx + esi + 0x14);
    if (CMP_BE(eax & eax, 0)) goto loc_003EFAF4; /* jbe: below or equal (unsigned <=) */

loc_003EFABD: ;
    eax = MEM32(esi + -4);
    if (TEST_Z(eax, eax)) goto loc_003EFAF4; /* je: equal / zero */

loc_003EFAC4: ;
    if (CMP_BE(MEM32(esi), 0)) goto loc_003EFAF4; /* jbe: below or equal (unsigned <=) */

loc_003EFAC9: ;
    ebp = esi + -16;
    /* nop */

loc_003EFAD0: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0053B940(); /* call 0x0053B940 */

loc_003EFAD7: ;
    if (TEST_NZ(eax, eax)) goto loc_003EFAD0; /* jne: not equal / not zero */

loc_003EFADB: ;
    edx = MEM32(esi + -4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003EFAE9: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + -4) = 0;

loc_003EFAF4: ;
    eax = MEM32(ebx + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x34);
    edi++;
    esi = esi + 0x18;
    if (CMP_B(edi, ecx)) goto loc_003EFAB0; /* jb: below (unsigned <) */

loc_003EFB04: ;
    POP32(esp, ebp);

loc_003EFB05: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003EFB07: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFB10
 * Original: 0x003EFB10 - 0x003EFC1A (266 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EFB10: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    edx = MEM32(eax + 0x34);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 4) = 0;
    if (CMP_BE(edx & edx, 0)) goto loc_003EFC15; /* jbe: below or equal (unsigned <=) */

loc_003EFB30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0xFFFFFFF4u;
    ebp = ebp - ecx;
    PUSH32(esp, edi);
    ebx = ecx + 0xC;
    MEM32(esp + 0x14) = ebp;
    goto loc_003EFB47;

loc_003EFB43: ;
    ebp = MEM32(esp + 0x14);

loc_003EFB47: ;
    ecx = MEM32(eax + 0x30);
    ebp = ebp + ebx;
    eax = MEM32(ecx + ebp + 0x14);
    if (CMP_BE(eax & eax, 0)) goto loc_003EFBDC; /* jbe: below or equal (unsigned <=) */

loc_003EFB58: ;
    PUSH32(esp, 0xBC800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EFB63: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(edx + ebp + 0x14);
    esi = MEM32(edx + ebp + 0x10);
    edx = edx + ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    edx = edx + ebp;
    esi = MEM32(edx);
    ecx = ebx + -8;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    esi = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = esi;
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 0x14) = edx;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(ebx);
    ecx = ecx + eax;
    eax = MEM32(ebx + -4);
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x20000)) goto loc_003EFBD2; /* jne: not equal / not zero */

loc_003EFBCE: ;
    MEM32(ebx) = ecx;
    goto loc_003EFBF2;

loc_003EFBD2: ;
    ecx = ecx & 0xFFFFFFF;
    MEM32(ebx) = ecx;
    goto loc_003EFBF2;

loc_003EFBDC: ;
    ecx = 0; /* xor self */
    edx = ebx + -8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;

loc_003EFBF2: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(eax);
    edx = MEM32(eax + 0x34);
    ecx++;
    ebx = ebx + 0x18;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(ecx, edx)) goto loc_003EFB43; /* jb: below (unsigned <) */

loc_003EFC12: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003EFC15: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003EFC20
 * Original: 0x003EFC20 - 0x003EFD43 (291 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EFC20: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax);
    edx = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(edx, ebp)) goto loc_003EFCAE; /* jbe: below or equal (unsigned <=) */

loc_003EFC37: ;
    MEM32(esp + 0x10) = ebp;
    goto loc_003EFC40;

    /* nop */

loc_003EFC40: ;
    ebx = MEM32(eax + 0x30);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebx + edx + 0x14);
    ebx = ebx + edx;
    if (CMP_BE(eax & eax, 0)) goto loc_003EFC92; /* jbe: below or equal (unsigned <=) */

loc_003EFC51: ;
    PUSH32(esp, 0xBC800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EFC5C: ;
    ecx = MEM32(ebx + 0x14);
    esi = MEM32(ebx + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0x10) = eax;
    ecx = MEM32(ebx + 8);
    ecx = ecx + eax;
    eax = MEM32(ebx + 4);
    eax = eax & 0x70000;
    if (CMP_EQ(eax, 0x20000)) goto loc_003EFC8F; /* je: equal / zero */

loc_003EFC89: ;
    ecx = ecx & 0xFFFFFFF;

loc_003EFC8F: ;
    MEM32(ebx + 8) = ecx;

loc_003EFC92: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x30);
    esi = MEM32(esp + 0x10);
    eax = MEM32(edx);
    edx = MEM32(eax + 0x34);
    ebp++;
    esi = esi + 0x18;
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(ebp, edx)) goto loc_003EFC40; /* jb: below (unsigned <) */

loc_003EFCAE: ;
    ebp = 1;
    if (CMP_BE(MEM16(ecx + 0x38), LO16(ebp))) goto loc_003EFD3D; /* jbe: below or equal (unsigned <=) */

loc_003EFCBD: ;
    /* nop */

loc_003EFCC0: ;
    ecx = MEM32(ecx + 0x30);
    edx = MEM32(ecx + ebp * 4);
    edx = MEM32(edx + 0x30);
    SET_LO8(ebx, MEM8(edx + 1));
    ecx = edx + 1;
    eax = 0; /* xor self */
    if (CMP_EQ(LO8(ebx), 9)) goto loc_003EFCE2; /* je: equal / zero */

loc_003EFCD6: ;
    SET_LO8(ebx, MEM8(ecx + 0x18));
    ecx = ecx + 0x18;
    eax++;
    if (CMP_NE(LO8(ebx), 9)) goto loc_003EFCD6; /* jne: not equal / not zero */

loc_003EFCE2: ;
    eax = eax + eax * 2;
    ebx = edx + eax * 8;
    eax = MEM32(ebx + 0x14);
    if (CMP_BE(eax & eax, 0)) goto loc_003EFD30; /* jbe: below or equal (unsigned <=) */

loc_003EFCEF: ;
    PUSH32(esp, 0xBC800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EFCFA: ;
    ecx = MEM32(ebx + 0x14);
    esi = MEM32(ebx + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0x10) = eax;
    ecx = MEM32(ebx + 8);
    ecx = ecx + eax;
    eax = MEM32(ebx + 4);
    eax = eax & 0x70000;
    if (CMP_EQ(eax, 0x20000)) goto loc_003EFD2D; /* je: equal / zero */

loc_003EFD27: ;
    ecx = ecx & 0xFFFFFFF;

loc_003EFD2D: ;
    MEM32(ebx + 8) = ecx;

loc_003EFD30: ;
    ecx = MEM32(esp + 0x18);
    edx = ZX16(MEM16(ecx + 0x38));
    ebp++;
    if (CMP_B(ebp, edx)) goto loc_003EFCC0; /* jb: below (unsigned <) */

loc_003EFD3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFD50
 * Original: 0x003EFD50 - 0x003F0047 (759 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFD50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EFD50: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(ecx & ecx, 0)) goto loc_003F0042; /* jbe: below or equal (unsigned <=) */

loc_003EFD70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    ebp = 0xFFFFFFF4u;
    ecx = edi + 0x184;
    ebx = edi + 0xC;
    ebp = ebp - edi;
    MEM32(esp + 0x1C) = 0x81BD8C;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebp;
    goto loc_003EFDB0;

loc_003EFD9D: ;
    ebp = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x34);
    goto loc_003EFDB0;

    /* nop */
    edi = edi;

loc_003EFDB0: ;
    if (TEST_Z(MEM8(0x81BD24), 1)) goto loc_003F0000; /* je: equal / zero */

loc_003EFDBD: ;
    edx = MEM32(eax + 0x30);
    ebp = ebp + ebx;
    SET_LO8(eax, MEM8(edx + ebp + 1));
    edx = edx + ebp;
    (void)0; /* cmp LO8(eax), 9 - flags set for next jcc */
    MEM32(esp + 0x28) = ebp;
    if (CMP_EQ(LO8(eax), 9)) goto loc_003EFDD8; /* je: equal / zero */

loc_003EFDD0: ;
    if (CMP_NE(LO8(eax), 0xA)) goto loc_003F0000; /* jne: not equal / not zero */

loc_003EFDD8: ;
    eax = ZX16(MEM16(esi + 0x38));
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = eax + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003EFE0A; /* jbe: below or equal (unsigned <=) */

loc_003EFDE9: ;
    eax = MEM32(edi + 0x1C4);
    /* nop */

loc_003EFDF0: ;
    xmm2 = MEMF(eax); /* movss */
    eax = eax + 4;
    ecx--;
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((ecx != 0)) goto loc_003EFDF0; /* jne: not equal / not zero */

loc_003EFE01: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003EFE21; /* jp: parity */

loc_003EFE0A: ;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0x10);
    edi = MEM32(ebx + 8);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    goto loc_003EFFFB;

loc_003EFE21: ;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    edx = MEM32(esp + 0x30);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = 1;
    (void)0; /* cmp MEM16(edx + 0x38), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(MEM16(edx + 0x38), LO16(ecx))) goto loc_003EFF87; /* jbe: below or equal (unsigned <=) */

loc_003EFE52: ;
    goto loc_003EFE60;

loc_003EFE54: ;
    ebp = MEM32(esp + 0x28);
    goto loc_003EFE60;

    /* nop */

loc_003EFE60: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax + 0x30);
    eax = MEM32(edx + ecx * 4);
    edi = MEM32(eax + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx + 0x1C4);
    esi = MEM32(edi + ebp + 0x10);
    xmm0 = MEMF(eax + ecx * 4 + -4); /* movss */
    edi = edi + ebp;
    ebp = MEM32(edi + 0x14);
    ebp = ebp + esi;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003EFF72; /* jnp: not parity */

loc_003EFE95: ;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    if (CMP_AE(esi, ebp)) goto loc_003EFF72; /* jae: above or equal (unsigned >=) */

loc_003EFEA3: ;
    if (CMP_NE(MEM8(edi + 1), 0xA)) goto loc_003EFF2D; /* jne: not equal / not zero */

loc_003EFEAD: ;
    ecx = MEM32(edx);
    eax = MEM32(esi);
    eax = eax << 0x15;
    ebx = ecx;
    eax = (uint32_t)((int32_t)eax >> 0x15);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    ebx = ebx << 0x15;
    ebx = (uint32_t)((int32_t)ebx >> 0x15);
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    eax = eax + ebx;
    eax = eax ^ ecx;
    eax = eax & 0x7FF;
    eax = eax ^ ecx;
    MEM32(edx) = eax;
    ecx = MEM32(esi);
    ecx = ecx << 0xA;
    ecx = (uint32_t)((int32_t)ecx >> 0x15);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ebx = eax;
    xmm2 = xmm2 * xmm0; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    ecx = ecx << 0xB;
    ebx = ebx << 0xA;
    ebx = (uint32_t)((int32_t)ebx >> 0xA);
    ecx = ecx + ebx;
    ebx = MEM32(esp + 0x20);
    ecx = ecx ^ eax;
    ecx = ecx & 0x3FF800;
    ecx = ecx ^ eax;
    MEM32(edx) = ecx;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax >> 0x16);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = eax << 0x16;
    eax = eax + ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    goto loc_003EFF63;

loc_003EFF2D: ;
    xmm2 = MEMF(esi); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edx); /* addss */
    MEMF(edx) = xmm2; /* movss */
    xmm2 = MEMF(esi + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edx + 4); /* addss */
    MEMF(edx + 4) = xmm2; /* movss */
    xmm2 = MEMF(esi + 8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edx + 8); /* addss */
    MEMF(edx + 8) = xmm2; /* movss */

loc_003EFF63: ;
    eax = ZX8(MEM8(edi));
    esi = esi + eax;
    edx = edx + eax;
    if (CMP_B(esi, ebp)) goto loc_003EFEA3; /* jb: below (unsigned <) */

loc_003EFF72: ;
    edx = MEM32(esp + 0x30);
    eax = ZX16(MEM16(edx + 0x38));
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(ecx, eax)) goto loc_003EFE54; /* jb: below (unsigned <) */

loc_003EFF87: ;
    ecx = MEM32(0x5499E8);
    esi = ecx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_003EFFAB; /* jb: below (unsigned <) */

loc_003EFF96: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_003EFFA5: ;
    ecx = MEM32(0x5499E8);

loc_003EFFAB: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_003EFFE1; /* je: equal / zero */

loc_003EFFC1: ;
    (void)0; /* test MEM32(ebx + -4), 0x780000 - flags set for next jcc */
    eax = MEM32(ebx + 4);
    if (TEST_Z(MEM32(ebx + -4), 0x780000)) goto loc_003EFFD5; /* je: equal / zero */

loc_003EFFCD: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    goto loc_003EFFDC;

loc_003EFFD5: ;
    if (TEST_Z(eax, eax)) goto loc_003EFFE1; /* je: equal / zero */

loc_003EFFD9: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);

loc_003EFFDC: ;
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_003EFFE1: ;
    ecx = MEM32(ebx + 0xC);
    edi = MEM32(ebx);
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    edx = ecx;
    edi = edi | 0x80000000u;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;

loc_003EFFFB: ;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_003F0000: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x10);
    ecx = ebx + -8;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esp + 0x18);
    eax = eax + 4;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx);
    edx = MEM32(eax + 0x34);
    ecx++;
    ebp = ebp + 4;
    ebx = ebx + 0x18;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x20) = ebx;
    if (CMP_B(ecx, edx)) goto loc_003EFD9D; /* jb: below (unsigned <) */

loc_003F003F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F0042: ;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0050
 * Original: 0x003F0050 - 0x003F01F0 (416 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0050: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    MEM32(esp + 8) = ecx;
    MEM32(0x81BDEC) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(0x81BDF0) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(0x81BDF4) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(0x81BDF8) = eax;
    ecx = ZX16(MEM16(ebp + 0x38));
    edx = 0; /* xor self */
    ecx--;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003F0178; /* jle: less or equal (signed <=) */

loc_003F0092: ;
    ecx = MEM32(esi + 0x1C4);
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    ecx = ecx + edx * 4;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(eax * 4 + 0x81BDEC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003F016A; /* jbe: below or equal (unsigned <=) */

loc_003F00B5: ;
    xmm0 = MEMF(ecx); /* movss */
    MEMF(eax * 4 + 0x81BDEC) = xmm0; /* movss */
    fp_push(MEMF(0x81BDEC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = edx + 1;
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + eax * 4 + 8) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003F00F7; /* jbe: below or equal (unsigned <=) */

loc_003F00E7: ;
    xmm0 = MEMF(0x81BDEC); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = 0; /* xor self */

loc_003F00F7: ;
    fp_push(MEMF(0x81BDF0)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003F0122; /* jbe: below or equal (unsigned <=) */

loc_003F010F: ;
    xmm0 = MEMF(0x81BDF0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = 1;

loc_003F0122: ;
    fp_push(MEMF(0x81BDF4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003F014D; /* jbe: below or equal (unsigned <=) */

loc_003F013A: ;
    xmm0 = MEMF(0x81BDF4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = 2;

loc_003F014D: ;
    fp_push(MEMF(0x81BDF8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003F016A; /* jbe: below or equal (unsigned <=) */

loc_003F0165: ;
    eax = 3;

loc_003F016A: ;
    ecx = ZX16(MEM16(ebp + 0x38));
    edx++;
    ecx--;
    if (CMP_L(edx, ecx)) goto loc_003F0092; /* jl: less (signed <) */

loc_003F0178: ;
    ecx = MEM32(ebp + 0x30);
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x34);
    esi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003F01EA; /* jle: less or equal (signed <=) */

loc_003F0186: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0x81BD8C;
    /* nop */

loc_003F0190: ;
    edx = MEM32(eax + 0x30);
    eax = edx + ebx;
    SET_LO8(edx, MEM8(eax + 1));
    if (CMP_B(LO8(edx), 0x1B)) goto loc_003F01D3; /* jb: below (unsigned <) */

loc_003F019E: ;
    if (CMP_A(LO8(edx), 0x1E)) goto loc_003F01D3; /* ja: above (unsigned >) */

loc_003F01A3: ;
    eax = ZX8(LO8(edx));
    edx = MEM32(esp + eax * 4 + -92);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ecx + 0x30);
    ecx = edx + 1;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM8(ecx), 9)) goto loc_003F01C9; /* je: equal / zero */

loc_003F01BA: ;
    /* nop */

loc_003F01C0: ;
    ecx = ecx + 0x18;
    eax++;
    if (CMP_NE(MEM8(ecx), 9)) goto loc_003F01C0; /* jne: not equal / not zero */

loc_003F01C9: ;
    eax = eax + eax * 2;
    ecx = edx + eax * 8;
    MEM32(edi) = ecx;
    goto loc_003F01D5;

loc_003F01D3: ;
    MEM32(edi) = eax;

loc_003F01D5: ;
    ecx = MEM32(ebp + 0x30);
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x34);
    esi++;
    edi = edi + 4;
    ebx = ebx + 0x18;
    if (CMP_L(esi, edx)) goto loc_003F0190; /* jl: less (signed <) */

loc_003F01E8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003F01EA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003F01F0
 * Original: 0x003F01F0 - 0x003F0263 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F01F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F01F0: ;
    eax = MEM32(0x84B808);
    ecx = MEM32(eax * 8 + 0x81BE70);
    edx = MEM32(eax * 8 + 0x81BE74);
    eax--;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84B808) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_003F0262; /* je: equal / zero */

loc_003F020D: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_003F0210: ;
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(edx + 6));
    ebx = ebx & edi;
    if (CMP_NE(LO16(ebx), LO16(edi))) goto loc_003F022B; /* jne: not equal / not zero */

loc_003F021D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003F0221: ;
    eax = MEM32(0x84B808);
    esp = esp + 8;
    goto loc_003F0249;

loc_003F022B: ;
    edx = MEM32(edx + 0x18);
    if (TEST_Z(edx, edx)) goto loc_003F0249; /* je: equal / zero */

loc_003F0232: ;
    ecx = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0x50);
    ecx = MEM32(ecx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(eax * 8 + 0x81BE74) = edx;

loc_003F0249: ;
    ecx = MEM32(eax * 8 + 0x81BE70);
    edx = MEM32(eax * 8 + 0x81BE74);
    eax--;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84B808) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_003F0210; /* jne: not equal / not zero */

loc_003F0261: ;
    POP32(esp, ebx);

loc_003F0262: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0270
 * Original: 0x003F0270 - 0x003F0291 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0270: ;
    esp = esp - 8;
    PUSH32(esp, 0); sub_003F3640(); /* call 0x003F3640 */

loc_003F0278: ;
    SET_LO8(eax, MEM8(0x84B7CF));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003F0291(); return; } /* jne: not equal / not zero */

loc_003F0281: ;
    SET_LO8(eax, MEM8(0x84B7CE));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003F0291(); return; } /* jne: not equal / not zero */

loc_003F028A: ;
    PUSH32(esp, 0x900);
    g_seh_ebp = ebp; sub_003F0296(); return; /* tail jmp 0x003F0296 */

}

/**
 * sub_003F04D0
 * Original: 0x003F04D0 - 0x003F04DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F04D0(void)
{

loc_003F04D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_003F04DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F04E0
 * Original: 0x003F04E0 - 0x003F054B (107 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F04E0(void)
{

loc_003F04E0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = MEM32(eax + edi + 4);
    edx = MEM32(eax + edi + 8);
    eax = eax + edi;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_003F051E: ;
    eax = MEM32(0x84B808);
    eax++;
    PUSH32(esp, edi);
    MEM32(eax * 8 + 0x81BE70) = 0x3F04D0;
    PUSH32(esp, esi);
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = esi;
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F0542: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0550
 * Original: 0x003F0550 - 0x003F056A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0550(void)
{

loc_003F0550: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax + MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0570
 * Original: 0x003F0570 - 0x003F0583 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0570(void)
{

loc_003F0570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 8);
    MEM32(edx + ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0590
 * Original: 0x003F0590 - 0x003F05C2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0590(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F0590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x38);
    ecx = eax;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    ecx = MEM32(0x81BE5C);
    eax = eax >> 3;
    if (TEST_Z(MEM8(eax + ecx), LO8(edx))) { sub_003F05C2(); return; } /* je: equal / zero */

loc_003F05B2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F05BD: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F05F0
 * Original: 0x003F05F0 - 0x003F0623 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F05F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F05F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x38);
    ecx = eax;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    ecx = MEM32(0x81BE5C);
    eax = eax >> 3;
    (void)0; /* test MEM8(eax + ecx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(eax + ecx), LO8(edx))) { sub_003F0623(); return; } /* je: equal / zero */

loc_003F0618: ;
    edx = MEM32(esp + 0x1C);
    edi = MEM32(edx + 4);
    ebx = esi;
    g_seh_ebp = ebp; sub_003F062D(); return; /* tail jmp 0x003F062D */

}

/**
 * sub_003F0650
 * Original: 0x003F0650 - 0x003F077B (299 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0650(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F0650: ;
    SET_LO8(eax, MEM8(0x81BD24));
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) >> 3);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(LO8(eax), 1)) goto loc_003F06E7; /* je: equal / zero */

loc_003F0666: ;
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(0x81BE48);
    if (TEST_Z(eax, eax)) goto loc_003F067E; /* je: equal / zero */

loc_003F0673: ;
    esi = MEM32(eax + 4);
    ecx = edx + edx * 4;
    ecx = MEM32(esi + ecx * 4);
    goto loc_003F0681;

loc_003F067E: ;
    ecx = MEM32(edi + 0x30);

loc_003F0681: ;
    ecx = ZX8(MEM8(ecx + 0x10));
    if (TEST_Z(ecx, ecx)) goto loc_003F06B7; /* je: equal / zero */

loc_003F0689: ;
    if (TEST_Z(eax, eax)) goto loc_003F06A5; /* je: equal / zero */

loc_003F068D: ;
    eax = MEM32(eax + 4);
    edx = edx + edx * 4;
    esi = MEM32(eax + edx * 4);
    PUSH32(esp, 0); sub_003F5200(); /* call 0x003F5200 */

loc_003F069B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    goto loc_003F074D;

loc_003F06A5: ;
    esi = MEM32(edi + 0x30);
    PUSH32(esp, 0); sub_003F5200(); /* call 0x003F5200 */

loc_003F06AD: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    goto loc_003F074D;

loc_003F06B7: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_003F0756; /* je: equal / zero */

loc_003F06C2: ;
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0x50);
    ecx = MEM32(0x84B808);
    edx = MEM32(edx);
    ecx++;
    MEM32(ecx * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = ecx;
    MEM32(ecx * 8 + 0x81BE74) = eax;
    goto loc_003F0756;

loc_003F06E7: ;
    SET_LO8(eax, MEM8(0x84B7CF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(edi + 0x38);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F072B; /* je: equal / zero */

loc_003F06F3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x84B838) = 1;
    if (TEST_Z(eax, eax)) goto loc_003F070F; /* je: equal / zero */

loc_003F06FE: ;
    ecx = MEM32(0x81BE48);
    edx = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    esi = MEM32(edx + ecx * 4);
    goto loc_003F0712;

loc_003F070F: ;
    esi = MEM32(edi + 0x30);

loc_003F0712: ;
    PUSH32(esp, 0); sub_003F5200(); /* call 0x003F5200 */

loc_003F0717: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F0722: ;
    MEM8(0x84B838) = 0;
    goto loc_003F0753;

loc_003F072B: ;
    if (TEST_Z(eax, eax)) goto loc_003F0740; /* je: equal / zero */

loc_003F072F: ;
    ecx = MEM32(0x81BE48);
    edx = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    esi = MEM32(edx + ecx * 4);
    goto loc_003F0743;

loc_003F0740: ;
    esi = MEM32(edi + 0x30);

loc_003F0743: ;
    PUSH32(esp, 0); sub_003F5200(); /* call 0x003F5200 */

loc_003F0748: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);

loc_003F074D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F0753: ;
    esp = esp + 8;

loc_003F0756: ;
    eax = MEM32(0x81BE20);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003F077A; /* je: equal / zero */

loc_003F0761: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F0770: ;
    MEM32(0x549AE4) = 1;

loc_003F077A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0780
 * Original: 0x003F0780 - 0x003F0892 (274 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x38);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_003F0847; /* je: equal / zero */

loc_003F0795: ;
    (void)0; /* cmp MEM32(eax), ebx - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(MEM32(eax), ebx)) goto loc_003F088D; /* jbe: below or equal (unsigned <=) */

loc_003F07A1: ;
    PUSH32(esp, ebp);
    edi = 0; /* xor self */
    goto loc_003F07B0;

loc_003F07A6: ;
    ebx = 0; /* xor self */
    goto loc_003F07B0;

    /* nop */

loc_003F07B0: ;
    eax = MEM32(eax + 4);
    esi = MEM32(edi + eax);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_003F07D4; /* je: equal / zero */

loc_003F07BD: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_003F07D1; /* jne: not equal / not zero */

loc_003F07C1: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_003F07D1; /* je: equal / zero */

loc_003F07C6: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003F07D1: ;
    MEM32(esi + 0xC) = ebx;

loc_003F07D4: ;
    ebx = edi;
    ebp = 4;
    goto loc_003F07E0;

    /* nop */

loc_003F07E0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x38);
    eax = MEM32(edx + 4);
    if (CMP_BE(MEM32(ebx + eax + 4), 0xFFFF)) goto loc_003F081E; /* jbe: below or equal (unsigned <=) */

loc_003F07F4: ;
    eax = MEM32(edi + eax + 4);
    esi = MEM32(eax);
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003F081E; /* je: equal / zero */

loc_003F0801: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_003F0817; /* jne: not equal / not zero */

loc_003F0805: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003F0817; /* je: equal / zero */

loc_003F080C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003F0817: ;
    MEM32(esi + 0xC) = 0;

loc_003F081E: ;
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_003F07E0; /* jne: not equal / not zero */

loc_003F0824: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x38);
    edx = MEM32(eax);
    ecx++;
    edi = edi + 0x14;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(ecx, edx)) goto loc_003F07A6; /* jb: below (unsigned <) */

loc_003F0841: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F0847: ;
    esi = MEM32(edi + 0x30);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_003F0868; /* je: equal / zero */

loc_003F0851: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_003F0865; /* jne: not equal / not zero */

loc_003F0855: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_003F0865; /* je: equal / zero */

loc_003F085A: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003F0865: ;
    MEM32(esi + 0xC) = ebx;

loc_003F0868: ;
    esi = MEM32(edi + 0x34);
    if (CMP_EQ(esi, ebx)) goto loc_003F088D; /* je: equal / zero */

loc_003F086F: ;
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_003F088D; /* je: equal / zero */

loc_003F0876: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_003F088A; /* jne: not equal / not zero */

loc_003F087A: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_003F088A; /* je: equal / zero */

loc_003F087F: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003F088A: ;
    MEM32(esi + 0xC) = ebx;

loc_003F088D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F08A0
 * Original: 0x003F08A0 - 0x003F08D9 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F08A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F08A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_003F08C7; /* jne: not equal / not zero */

loc_003F08B1: ;
    eax = MEM32(0x84B834);
    if (TEST_Z(eax, eax)) goto loc_003F08C7; /* je: equal / zero */

loc_003F08BA: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003F08C4: ;
    esp = esp + 8;

loc_003F08C7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EE3B0(); /* call 0x003EE3B0 */

loc_003F08D3: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F08E0
 * Original: 0x003F08E0 - 0x003F0973 (147 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F08E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F08E0: ;
    eax = MEM32(0x84B80C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x81BD30;
    edi = 0x824FF0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    ecx = ecx + 0x81DE70;
    edx = edx + ebx;
    PUSH32(esp, 0); sub_003F7D90(); /* call 0x003F7D90 */

loc_003F0918: ;
    xmm0 = MEMF(0x81BD74); /* movss */
    MEMF(0x7547E0) = xmm0; /* movss */
    xmm0 = MEMF(0x81BD78); /* movss */
    MEMF(0x7547E4) = xmm0; /* movss */
    xmm0 = MEMF(0x81BD7C); /* movss */
    MEMF(0x7547E8) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x38);
    if (TEST_NZ(ecx, ecx)) { sub_003F0973(); return; } /* jne: not equal / not zero */

loc_003F094F: ;
    eax = MEM32(ebp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_003F096B; /* je: equal / zero */

loc_003F0956: ;
    ecx = ZX16(MEM16(0x81BD26));
    eax = MEM32(ebp + 0xC);
    eax = eax + ebx;
    eax = MEM32(eax + ecx * 4 + 0x10);
    MEM32(0x84B858) = eax;

loc_003F096B: ;
    ebx = MEM32(edx + 4);
    eax = MEM32(ebp + 0x30);
    g_seh_ebp = ebp; sub_003F09B9(); return; /* tail jmp 0x003F09B9 */

}

/**
 * sub_003F09E0
 * Original: 0x003F09E0 - 0x003F0BBE (478 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F09E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F09E0: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    edi = edi + ecx;
    if (CMP_NE(eax, ebx)) goto loc_003F0A4D; /* jne: not equal / not zero */

loc_003F09FC: ;
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(MEM32(eax + 0x4C), ebx)) goto loc_003F0A14; /* je: equal / zero */

loc_003F0A04: ;
    eax = edi + 0x20;
    MEM32(edi + 4) = eax;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_003F40B0(); /* call 0x003F40B0 */

loc_003F0A12: ;
    goto loc_003F0A17;

loc_003F0A14: ;
    MEM32(edi + 4) = ebx;

loc_003F0A17: ;
    eax = MEM32(esi + 0x34);
    if (CMP_EQ(eax, ebx)) goto loc_003F0BB7; /* je: equal / zero */

loc_003F0A22: ;
    if (CMP_EQ(MEM32(eax + 0x4C), ebx)) goto loc_003F0A43; /* je: equal / zero */

loc_003F0A27: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 0x4C);
    eax = MEM32(edi + 4);
    eax = eax + edx;
    MEM32(edi + 8) = eax;
    edx = MEM32(esi + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_003F40B0(); return; /* tail jmp 0x003F40B0 */

loc_003F0A43: ;
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003F0A4D: ;
    eax = edi + 0x20;
    ecx = eax + 0x10;
    MEM32(edi + 0xC) = eax;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x38);
    (void)0; /* cmp MEM32(eax), ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_BE(MEM32(eax), ebx)) goto loc_003F0BA5; /* jbe: below or equal (unsigned <=) */

loc_003F0A67: ;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = 4;
    MEM32(esp + 0x18) = 8;
    goto loc_003F0A94;

loc_003F0A8A: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    ebx = 0; /* xor self */

loc_003F0A94: ;
    eax = MEM32(eax + 4);
    eax = MEM32(eax + ecx);
    if (CMP_EQ(MEM32(eax + 0x4C), ebx)) goto loc_003F0ACB; /* je: equal / zero */

loc_003F0A9F: ;
    ebp = MEM32(esi + 0x38);
    ebp = MEM32(ebp + 4);
    ebp = MEM32(ecx + ebp + 4);
    eax = MEM32(edi + 0xC);
    ebp = ebp + eax;
    eax = MEM32(eax);
    MEM32(edx + eax) = ebp;
    eax = MEM32(edi + 0xC);
    ebp = MEM32(esi + 0x38);
    eax = MEM32(eax);
    ebp = MEM32(ebp + 4);
    eax = MEM32(eax + edx);
    edx = MEM32(ecx + ebp);
    PUSH32(esp, 0); sub_003F40B0(); /* call 0x003F40B0 */

loc_003F0AC9: ;
    goto loc_003F0AD3;

loc_003F0ACB: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    MEM32(edx + eax) = ebx;

loc_003F0AD3: ;
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = ebp;
    goto loc_003F0AE0;

    /* nop */

loc_003F0AE0: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + ebp);
    if (TEST_Z(eax, eax)) goto loc_003F0B47; /* je: equal / zero */

loc_003F0AED: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x4C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(edi + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_003F0B38; /* je: equal / zero */

loc_003F0AF9: ;
    edx = MEM32(esp + 0x28);
    ebp = MEM32(esi + 0x38);
    ebp = MEM32(ebp + 4);
    eax = edx + ebx;
    edx = MEM32(esp + 0x14);
    edx = edx + ebx;
    edx = MEM32(ebp + edx * 4 + 0x18);
    ebp = MEM32(esp + 0x1C);
    edx = edx + ecx;
    ecx = MEM32(ecx);
    eax = eax << 2;
    MEM32(eax + ecx) = edx;
    edx = MEM32(edi + 0xC);
    ecx = MEM32(edx);
    edx = MEM32(esi + 0x38);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + ebp);
    eax = MEM32(ecx + eax);
    edx = MEM32(edx);
    PUSH32(esp, 0); sub_003F40B0(); /* call 0x003F40B0 */

loc_003F0B36: ;
    goto loc_003F0B47;

loc_003F0B38: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    eax = eax + ebx;
    MEM32(edx + eax * 4) = 0;

loc_003F0B47: ;
    ebx++;
    ebp = ebp + 4;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_B(ebx, 4)) goto loc_003F0AE0; /* jb: below (unsigned <) */

loc_003F0B54: ;
    ebp = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax = 0x28;
    ebp = ebp + eax;
    MEM32(esp + 0x2C) = ebp;
    ebp = MEM32(esp + 0x18);
    ebx = ebx + 0x30;
    edx = edx + 0xA;
    ebp = ebp + eax;
    eax = MEM32(esi + 0x38);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esp + 0x28);
    ecx++;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    ebx = ebx + 0xC;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x28) = ebx;
    if (CMP_B(ecx, edx)) goto loc_003F0A8A; /* jb: below (unsigned <) */

loc_003F0BA4: ;
    POP32(esp, ebp);

loc_003F0BA5: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax);
    ecx = ecx + 0x10;
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax);
    eax = MEM32(edx);
    MEM32(edi + 4) = eax;

loc_003F0BB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0BC0
 * Original: 0x003F0BC0 - 0x003F0CA8 (232 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0BC0(void)
{
    float xmm0, xmm1;

loc_003F0BC0: ;
    esp = esp - 0x10;
    eax = ZX8(MEM8(0x753BCC));
    xmm0 = MEMF(0x648CEC); /* movss */
    ecx = ZX8(MEM8(0x753BCD));
    edx = ZX8(MEM8(0x753BCE));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(0x753BCF));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xC) = xmm1; /* movss */
    ecx = esp + 4;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_003F0C30: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F0C3F: ;
    eax = MEM32(0x753BD0);
    SET_LO8(edx, MEM8(0x753BCD));
    SET_LO8(ebx, MEM8(0x753BD2));
    SET_LO8(ecx, MEM8(0x753BCC));
    SET_LO8(edx, LO8(edx) + HI8(eax));
    MEM8(0x753BCD) = LO8(edx);
    SET_LO8(edx, MEM8(0x753BCE));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    SET_LO8(ebx, MEM8(0x753BCD));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(0x753BCD) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x753BD2));
    MEM8(0x753BCC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x753BCD));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    esp = esp + 8;
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    MEM8(0x753BCD) = LO8(ecx);
    MEM8(0x753BCE) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0CB0
 * Original: 0x003F0CB0 - 0x003F0CE9 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0CB0: ;
    eax = MEM32(esi + 0xC);
    eax = eax + edx;
    edx = MEM32(esi + 0x38);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(edx, edx)) { sub_003F0CE9(); return; } /* je: equal / zero */

loc_003F0CC1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(edx);
    ecx = 0; /* xor self */
    if (CMP_BE(ebp & ebp, 0)) goto loc_003F0CE6; /* jbe: below or equal (unsigned <=) */

loc_003F0CCA: ;
    edx = ebx * 4 + 0x20;

loc_003F0CD1: ;
    ebx = MEM32(eax + 0xC);
    ebx = MEM32(ebx);
    MEM32(edx + ebx) = edi;
    ebx = MEM32(esi + 0x38);
    ebp = MEM32(ebx);
    ecx++;
    edx = edx + 0x30;
    if (CMP_B(ecx, ebp)) goto loc_003F0CD1; /* jb: below (unsigned <) */

loc_003F0CE6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0CF0
 * Original: 0x003F0CF0 - 0x003F0D1A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F0CF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003F0D19; /* je: equal / zero */

loc_003F0CFB: ;
    SET_LO8(edx, MEM8(ecx + 6));
    PUSH32(esp, edi);
    edi = MEM32(0x81BE2C);
    (void)0; /* test LO8(edx), 2 - flags set for next jcc */
    if (TEST_Z(LO8(edx), 2)) edi = MEM32(0x81BE28); /* cmove */
    if (TEST_Z(edi, edi)) goto loc_003F0D18; /* je: equal / zero */

loc_003F0D13: ;
    PUSH32(esp, 0); sub_003F3F70(); /* call 0x003F3F70 */

loc_003F0D18: ;
    POP32(esp, edi);

loc_003F0D19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0D20
 * Original: 0x003F0D20 - 0x003F0DB2 (146 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0D20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(eax + ebp * 4 + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003F0D42: ;
    eax = MEM32(0x84B834);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_003F0D6A; /* je: equal / zero */

loc_003F0D53: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(ebx + 0x3C);
    ecx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + ebp * 4;
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003F0D67: ;
    esp = esp + 8;

loc_003F0D6A: ;
    ecx = MEM32(ebx + 0x38);
    edx = MEM32(ecx + 4);
    eax = ebp + ebp * 4;
    esi = MEM32(edx + eax * 8);
    if (TEST_Z(esi, esi)) goto loc_003F0D9B; /* je: equal / zero */

loc_003F0D7B: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    eax = ebp + ebp * 2;
    eax = eax << 4;
    edx = MEM32(ecx + eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F42C0(); /* call 0x003F42C0 */

loc_003F0D98: ;
    esp = esp + 8;

loc_003F0D9B: ;
    eax = MEM32(ebx + 0x38);
    ebx = MEM32(eax + 0xC);
    esi = MEM32(eax + ebp * 4 + 0x38);
    edi = MEM32(edi + 4);
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003F0DAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0DC0
 * Original: 0x003F0DC0 - 0x003F0E79 (185 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0DC0: ;
    eax = MEM32(0x84B80C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x81BD30;
    edi = 0x824FF0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    ecx = ecx + 0x81DE70;
    edx = edx + ebp;
    PUSH32(esp, 0); sub_003F7D90(); /* call 0x003F7D90 */

loc_003F0DF8: ;
    xmm0 = MEMF(0x81BD74); /* movss */
    edi = MEM32(esp + 0x1C);
    MEMF(0x7547E0) = xmm0; /* movss */
    xmm0 = MEMF(0x81BD78); /* movss */
    MEMF(0x7547E4) = xmm0; /* movss */
    xmm0 = MEMF(0x81BD7C); /* movss */
    MEMF(0x7547E8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x38);
    if (TEST_Z(eax, eax)) { sub_003F0E79(); return; } /* je: equal / zero */

loc_003F0E33: ;
    ecx = MEM32(0x81BE48);
    esi = ZX16(MEM16(0x81BD26));
    eax = MEM32(ebx + 0xC);
    edi = ecx + ecx * 2;
    eax = eax + ebp;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax);
    esi = esi + edi * 4;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(eax + esi * 4 + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(0x84B858) = eax;
    PUSH32(esp, 0); sub_003F0D20(); /* call 0x003F0D20 */

loc_003F0E66: ;
    esp = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003EE3B0(); /* call 0x003EE3B0 */

loc_003F0E71: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0EC0
 * Original: 0x003F0EC0 - 0x003F0F73 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0EC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84B80C);
    PUSH32(esp, ebx);
    ebx = eax + eax * 8;
    eax = MEM32(0x81BE64);
    ebx = ebx << 4;
    ebx = ebx + 0x81DE70;
    (void)0; /* cmp eax, 0x3FFEAFB3 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_B(eax, 0x3FFEAFB3)) goto loc_003F0EF4; /* jb: below (unsigned <) */

loc_003F0EE4: ;
    SET_LO8(eax, MEM8(edi + 0x3C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F0EF4; /* je: equal / zero */

loc_003F0EEB: ;
    eax = MEM32(0x81BE50);
    if (TEST_NZ(eax, eax)) goto loc_003F0F6F; /* jne: not equal / not zero */

loc_003F0EF4: ;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(eax, esi)) goto loc_003F0F54; /* jbe: below or equal (unsigned <=) */

loc_003F0EFE: ;
    MEM32(esp + 0xC) = esi;

loc_003F0F02: ;
    eax = MEM32(edi + 0x30);
    eax = ZX8(MEM8(eax + esi));
    edx = MEM32(ebx + 0x80);
    eax = eax << 6;
    eax = eax + edx;
    if (TEST_Z(ebp, ebp)) goto loc_003F0F2A; /* je: equal / zero */

loc_003F0F18: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F0F28: ;
    goto loc_003F0F41;

loc_003F0F2A: ;
    edx = MEM32(0x81BDE8);
    ecx = MEM32(esp + 0xC);
    ecx = ecx + edx + 0x60;
    PUSH32(esp, 0xC);
    edx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_003F0F41: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x34);
    esi++;
    ecx = ecx + 3;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_B(esi, eax)) goto loc_003F0F02; /* jb: below (unsigned <) */

loc_003F0F54: ;
    edx = MEM32(esp + 0x14);
    MEM32(0x81BE50) = 1;
    MEM32(0x81BDD8) = edi;
    MEM32(0x81BDDC) = edx;
    POP32(esp, esi);

loc_003F0F6F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0F80
 * Original: 0x003F0F80 - 0x003F0F9F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0F80(void)
{

loc_003F0F80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F0EC0(); /* call 0x003F0EC0 */

loc_003F0F92: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F0F99: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0FA0
 * Original: 0x003F0FA0 - 0x003F108A (234 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0FA0(void)
{
    float xmm0, xmm1;

loc_003F0FA0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F0EC0(); /* call 0x003F0EC0 */

loc_003F0FB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F0FBD: ;
    eax = MEM32(0x753BD0);
    SET_LO8(edx, MEM8(0x753BCD));
    SET_LO8(ebx, MEM8(0x753BD2));
    SET_LO8(ecx, MEM8(0x753BCC));
    xmm0 = MEMF(0x648CEC); /* movss */
    SET_LO8(edx, LO8(edx) + HI8(eax));
    MEM8(0x753BCD) = LO8(edx);
    SET_LO8(edx, MEM8(0x753BCE));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    SET_LO8(ebx, MEM8(0x753BCD));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(eax, MEM8(0x753BD2));
    MEM8(0x753BCD) = LO8(ebx);
    SET_LO8(edx, LO8(edx) + MEM8(0x753BD2));
    SET_LO8(ebx, MEM8(0x753BCD));
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = ZX8(LO8(ecx));
    MEM8(0x753BCC) = LO8(ecx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(0x753BCF));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = ZX8(LO8(ebx));
    MEM8(0x753BCE) = LO8(edx);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    edx = ZX8(LO8(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp + 0x10;
    MEMF(esp + 0x14) = xmm1; /* movss */
    ecx = esp + 0xC;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = 1;
    ecx = 0; /* xor self */
    MEM8(0x753BCD) = LO8(ebx);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_003F1083: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1090
 * Original: 0x003F1090 - 0x003F10A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1090: ;
    if (TEST_Z(MEM8(0x81BD24), 8)) { sub_003F10A7(); return; } /* je: equal / zero */

loc_003F1099: ;
    SET_LO8(eax, MEM8(0x750341));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) { sub_003F10A7(); return; } /* jbe: below or equal (unsigned <=) */

loc_003F10A2: ;
    g_seh_ebp = ebp; sub_003EE3B0(); return; /* tail jmp 0x003EE3B0 */

}

/**
 * sub_003F1100
 * Original: 0x003F1100 - 0x003F1178 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1100: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_003F1118; /* jle: less or equal (signed <=) */

loc_003F1109: ;
    /* nop */

loc_003F1110: ;
    MEM32(edx + ecx * 4) = ecx;
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_003F1110; /* jl: less (signed <) */

loc_003F1118: ;
    esi = MEM32(eax + 0x90);
    if (CMP_GE(esi, MEM32(eax + 0x8C))) goto loc_003F1176; /* jge: greater or equal (signed >=) */

loc_003F1126: ;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_003F1176; /* jle: less or equal (signed <=) */

loc_003F112C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = edi;

loc_003F1130: ;
    ebx = MEM32(eax + 0x7C);
    esi = MEM32(edi + ecx * 4);
    ebp = MEM32(eax + 0x80);
    esi = MEM32(ebx + esi * 4);
    ebp = MEM32(ebp + ecx * 4);
    MEM32(edx + ebp * 4) = esi;
    SET_LO8(ebx, MEM8(eax + 0xBD));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003F1169; /* je: equal / zero */

loc_003F1150: ;
    esi = MEM32(edi + ecx * 4);
    ebx = MEM32(eax + 0x84);
    ebp = MEM32(eax + 0x88);
    ebp = MEM32(ebp + ecx * 4);
    esi = MEM32(ebx + esi * 4);
    MEM32(edx + ebp * 4) = esi;

loc_003F1169: ;
    esi = MEM32(eax + 0x90);
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_003F1130; /* jl: less (signed <) */

loc_003F1174: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F1176: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1180
 * Original: 0x003F1180 - 0x003F11F4 (116 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1180: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ebp & ebp, 0)) goto loc_003F1198; /* jle: less or equal (signed <=) */

loc_003F118D: ;
    /* nop */

loc_003F1190: ;
    MEM32(ebx + eax * 4) = eax;
    eax++;
    if (CMP_L(eax, ebp)) goto loc_003F1190; /* jl: less (signed <) */

loc_003F1198: ;
    esi = MEM32(esp + 0x10);
    ecx = ebp;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebp + -1;

loc_003F11A5: ;
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_003F11EC; /* jle: less or equal (signed <=) */

loc_003F11AB: ;
    goto loc_003F11B0;

    /* nop */

loc_003F11B0: ;
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + eax * 4 + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003F11CC; /* ja: above (unsigned >) */

loc_003F11C5: ;
    eax++;
    if (CMP_L(eax, esi)) goto loc_003F11B0; /* jl: less (signed <) */

loc_003F11CA: ;
    goto loc_003F11EC;

loc_003F11CC: ;
    ecx = MEM32(edx + eax * 4 + 4);
    xmm0 = MEMF(edx + eax * 4); /* movss */
    MEM32(edx + eax * 4) = ecx;
    MEMF(edx + eax * 4 + 4) = xmm0; /* movss */
    ecx = MEM32(ebx + eax * 4);
    edi = MEM32(ebx + eax * 4 + 4);
    MEM32(ebx + eax * 4) = edi;
    MEM32(ebx + eax * 4 + 4) = ecx;

loc_003F11EC: ;
    if (CMP_NE(eax, esi)) goto loc_003F11A5; /* jne: not equal / not zero */

loc_003F11F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003F1200
 * Original: 0x003F1200 - 0x003F1223 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1200: ;
    edx = MEM32(esp + 4);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    ebx = ecx;
    if (CMP_LE(eax, ebp)) { sub_003F1223(); return; } /* jle: less or equal (signed <=) */

loc_003F1213: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F1180(); /* call 0x003F1180 */

loc_003F121A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003F12D0
 * Original: 0x003F12D0 - 0x003F1362 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F12D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F12D0: ;
    esp = esp - 0x8C0;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x8C);
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    edi = edx;
    ecx = esp + 0x2D0;
    PUSH32(esp, 0); sub_003F1200(); /* call 0x003F1200 */

loc_003F12FD: ;
    ecx = MEM32(ebx + 0x3C);
    edx = esp + 0x4D0;
    edi = esp + 0x2D0;
    eax = ebx;
    PUSH32(esp, 0); sub_003F1100(); /* call 0x003F1100 */

loc_003F1315: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_003EE6A0(); /* call 0x003EE6A0 */

loc_003F131F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_003EE800(); /* call 0x003EE800 */

loc_003F132B: ;
    eax = MEM32(ebx + 0x90);
    ecx = MEM32(ebx + 0x34);
    ecx = MEM32(ecx + 0x2C);
    esp = esp + 0x10;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    eax++;
    if (CMP_NE(eax, 1)) { sub_003F1362(); return; } /* jne: not equal / not zero */

loc_003F134A: ;
    ecx = ecx + 0x60;
    edx = esp + 0xC8;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F1359: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x8C0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1400
 * Original: 0x003F1400 - 0x003F1453 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1400(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003F1400: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx + esi;
    ecx = ecx + esi;
    MEM32(ecx + 0x1C4) = edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x8C);
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) { sub_003F1453(); return; } /* jle: less or equal (signed <=) */

loc_003F1426: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* nop */

loc_003F1430: ;
    edi = MEM32(ecx + 0x1C4);
    MEMF(edi + edx * 4) = xmm0; /* movss */
    edi = MEM32(eax + 0x8C);
    edx++;
    if (CMP_L(edx, edi)) goto loc_003F1430; /* jl: less (signed <) */

loc_003F1446: ;
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);
    MEM32(esi + eax) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1460
 * Original: 0x003F1460 - 0x003F14F0 (144 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1460(void)
{

loc_003F1460: ;
    esp = esp - 0x700;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x8C);
    ecx = esp + 0x10C;
    PUSH32(esp, ecx);
    edi = edx;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_003F1200(); /* call 0x003F1200 */

loc_003F148A: ;
    ecx = MEM32(ebx + 0x3C);
    edx = esp + 0x310;
    edi = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_003F1100(); /* call 0x003F1100 */

loc_003F149F: ;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_003EE6A0(); /* call 0x003EE6A0 */

loc_003F14A9: ;
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_003EE4A0(); /* call 0x003EE4A0 */

loc_003F14B6: ;
    eax = MEM32(ebx + 0x90);
    ecx = MEM32(0x81BE48);
    esp = esp + 0x14;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    edx = MEM32(ebx + ecx * 4 + 0x94);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    eax++;
    PUSH32(esp, eax);
    eax = esp + 0x10C;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F14E7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x700;
    esp += 4; return; /* ret */

}

/**
 * sub_003F14F0
 * Original: 0x003F14F0 - 0x003F154F (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F14F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F14F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx * 4 + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003F1512: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    edx = MEM32(edx + 0x1C4);
    esi = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_003F1460(); /* call 0x003F1460 */

loc_003F1529: ;
    esi = MEM32(esp + 0x1C);
    ebx = ebp;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_003EEBC0(); /* call 0x003EEBC0 */

loc_003F1538: ;
    eax = MEM32(edi + 0x38);
    ebx = MEM32(eax + 0xC);
    esi = MEM32(eax + esi * 4 + 0x38);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003F154A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1550
 * Original: 0x003F1550 - 0x003F158C (60 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1550: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x38);
    eax = eax + ebp;
    if (TEST_Z(ecx, ecx)) { sub_003F158C(); return; } /* je: equal / zero */

loc_003F156B: ;
    ecx = MEM32(0x81BE48);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F14F0(); /* call 0x003F14F0 */

loc_003F157A: ;
    esp = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EE3B0(); /* call 0x003EE3B0 */

loc_003F1585: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F15C0
 * Original: 0x003F15C0 - 0x003F1977 (951 bytes, 265 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F15C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_003F15C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    ecx = MEM32(0x84B868);
    eax = MEM32(0x84B80C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x50;
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    eax = eax + eax * 8;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    eax = eax << 4;
    eax = eax + 0x81DE70;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x70); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x74); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    eax = esp + 0x38;
    ecx = esp + 0x2C;
    edx = esp + 0x58;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F1691; /* je: equal / zero */

loc_003F168A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003F1691: ;
    eax = MEM32(esi + 0x58);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esi + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_003F1809; /* je: equal / zero */

loc_003F16A1: ;
    if (CMP_BE(eax & eax, 0)) goto loc_003F18EA; /* jbe: below or equal (unsigned <=) */

loc_003F16A9: ;
    ebx = 0; /* xor self */
    goto loc_003F16B0;

    /* nop */

loc_003F16B0: ;
    eax = MEM32(esi + 0x58);
    eax = MEM32(eax + edi * 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003F17DB; /* je: equal / zero */

loc_003F16BF: ;
    edx = MEM32(0x81BD80);
    ecx = MEM32(esi + 0x50);
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ecx + ebx;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003F16DF: ;
    eax = esp + 0x64;
    ecx = esp + 0x58;
    edx = esp + 0x20;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x54);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0x54);
    eax = eax + ebx;
    ecx = esp + 0x48;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    eax = MEM32(esp + 0x18);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x44);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003F17DB; /* jbe: below or equal (unsigned <=) */

loc_003F17B2: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 >= xmm0)) goto loc_003F17F5; /* jae: above or equal (unsigned >=) */

loc_003F17DB: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053AA00(); /* call 0x0053AA00 */

loc_003F17F5: ;
    eax = MEM32(esi + 0x5C);
    edi++;
    ebx = ebx + 0xC;
    if (CMP_B(edi, eax)) goto loc_003F16B0; /* jb: below (unsigned <) */

loc_003F1804: ;
    goto loc_003F18EA;

loc_003F1809: ;
    if (CMP_BE(eax & eax, 0)) goto loc_003F18EA; /* jbe: below or equal (unsigned <=) */

loc_003F1811: ;
    edx = esp + 0x58;
    eax = esp + 0x20;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x44) = eax;
    ebx = 0; /* xor self */

loc_003F1823: ;
    ecx = MEM32(esi + 0x50);
    ecx = ecx + ebx;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0x54);
    xmm0 = MEMF(eax + ebx + 8); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(eax + ebx + 4); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(eax + ebx); /* movss */
    eax = eax + ebx;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003F18C1; /* jbe: below or equal (unsigned <=) */

loc_003F1898: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 >= xmm0)) goto loc_003F18DB; /* jae: above or equal (unsigned >=) */

loc_003F18C1: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053AA00(); /* call 0x0053AA00 */

loc_003F18DB: ;
    eax = MEM32(esi + 0x5C);
    edi++;
    ebx = ebx + 0xC;
    if (CMP_B(edi, eax)) goto loc_003F1823; /* jb: below (unsigned <) */

loc_003F18EA: ;
    edi = MEM32(esi + 0x5C);
    if (CMP_AE(edi, MEM32(esi + 0x30))) goto loc_003F1914; /* jae: above or equal (unsigned >=) */

loc_003F18F2: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053AA00(); /* call 0x0053AA00 */

loc_003F190C: ;
    eax = MEM32(esi + 0x30);
    edi++;
    if (CMP_B(edi, eax)) goto loc_003F18F2; /* jb: below (unsigned <) */

loc_003F1914: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F1925; /* je: equal / zero */

loc_003F191B: ;
    PUSH32(esp, 0x900);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003F1925: ;
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x84B808);
    if (TEST_Z(ecx, ecx)) goto loc_003F194D; /* je: equal / zero */

loc_003F1931: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003F194D: ;
    esi = MEM32(esi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_003F1970; /* je: equal / zero */

loc_003F1954: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = esi;

loc_003F1970: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1980
 * Original: 0x003F1980 - 0x003F19D1 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1980(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F1980: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 8) = MEM32(ecx + 8) | 4;
    eax = MEM32(ecx + 0x34);
    if (TEST_Z(eax, eax)) goto loc_003F19D0; /* je: equal / zero */

loc_003F198F: ;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = 0x20001;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx + 0x38);
    ecx = ecx + edx;
    edx = MEM32(eax);
    edx = edx & 0x70000;
    if (CMP_EQ(edx, 0x20000)) goto loc_003F19CD; /* je: equal / zero */

loc_003F19C7: ;
    ecx = ecx & 0xFFFFFFF;

loc_003F19CD: ;
    MEM32(eax + 4) = ecx;

loc_003F19D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F19E0
 * Original: 0x003F19E0 - 0x003F1A04 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F19E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F19E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F19F3; /* je: equal / zero */

loc_003F19EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003F19F3: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) { sub_003F1A04(); return; } /* je: equal / zero */

loc_003F19FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053AE30(); /* call 0x0053AE30 */

loc_003F1A02: ;
    g_seh_ebp = ebp; sub_003F1A33(); return; /* tail jmp 0x003F1A33 */

}

/**
 * sub_003F1AB0
 * Original: 0x003F1AB0 - 0x003F1B17 (103 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1AB0(void)
{
    float xmm0, xmm1;

loc_003F1AB0: ;
    esp = esp - 0x10;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x1B01);
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003F1AE7: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = 1;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_003F1AF7: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F19E0(); /* call 0x003F19E0 */

loc_003F1B06: ;
    esp = esp + 8;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003F1B13: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1B20
 * Original: 0x003F1B20 - 0x003F1B42 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1B20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F1B20: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) { sub_003F1B42(); return; } /* je: equal / zero */

loc_003F1B2F: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F1B3A: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1D90
 * Original: 0x003F1D90 - 0x003F1DEE (94 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F1D90: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 8);
    eax = MEM32(edx + 0x34);
    PUSH32(esp, edi);
    ecx = ecx | 4;
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 8) = ecx;
    if (CMP_BE(eax & eax, 0)) goto loc_003F1DEC; /* jbe: below or equal (unsigned <=) */

loc_003F1DA7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    goto loc_003F1DB0;

    /* nop */

loc_003F1DB0: ;
    eax = MEM32(edx + 0x30);
    ecx = MEM32(eax + esi + 0x14);
    eax = eax + esi;
    if (TEST_Z(ecx, ecx)) goto loc_003F1DDF; /* je: equal / zero */

loc_003F1DBD: ;
    ebx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    ecx = ecx + ebx;
    ebx = MEM32(eax + 4);
    ebx = ebx & 0x70000;
    if (CMP_EQ(ebx, 0x20000)) goto loc_003F1DDC; /* je: equal / zero */

loc_003F1DD6: ;
    ecx = ecx & 0xFFFFFFF;

loc_003F1DDC: ;
    MEM32(eax + 8) = ecx;

loc_003F1DDF: ;
    eax = MEM32(edx + 0x34);
    edi++;
    esi = esi + 0x18;
    if (CMP_B(edi, eax)) goto loc_003F1DB0; /* jb: below (unsigned <) */

loc_003F1DEA: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F1DEC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1DF0
 * Original: 0x003F1DF0 - 0x003F1E6C (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F1DF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003F1E1C; /* jbe: below or equal (unsigned <=) */

loc_003F1DFE: ;
    edx = 0; /* xor self */
    ecx = 0x81BD8C;
    PUSH32(esp, edi);

loc_003F1E06: ;
    edi = MEM32(eax + 0x30);
    edi = edi + edx;
    MEM32(ecx) = edi;
    edi = MEM32(eax + 0x34);
    esi++;
    ecx = ecx + 4;
    edx = edx + 0x18;
    if (CMP_B(esi, edi)) goto loc_003F1E06; /* jb: below (unsigned <) */

loc_003F1E1B: ;
    POP32(esp, edi);

loc_003F1E1C: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(0x84B808);
    if (TEST_Z(edx, edx)) goto loc_003F1E46; /* je: equal / zero */

loc_003F1E29: ;
    esi = MEM32(edx + 0x10);
    esi = MEM32(esi + 0x50);
    esi = MEM32(esi);
    ecx++;
    MEM32(ecx * 8 + 0x81BE70) = esi;
    MEM32(0x84B808) = ecx;
    MEM32(ecx * 8 + 0x81BE74) = edx;

loc_003F1E46: ;
    eax = MEM32(eax + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003F1E6B; /* je: equal / zero */

loc_003F1E4E: ;
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx);
    ecx++;
    MEM32(ecx * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = ecx;
    MEM32(ecx * 8 + 0x81BE74) = eax;

loc_003F1E6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E70
 * Original: 0x003F1E70 - 0x003F1E8E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E70(void)
{

loc_003F1E70: ;
    eax = MEM32(0x84B80C);
    eax--;
    MEM32(0x84B80C) = eax;
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + 0x81DE70;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED520(); /* call 0x003ED520 */

loc_003F1E8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E90
 * Original: 0x003F1E90 - 0x003F1EC7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E90(void)
{

loc_003F1E90: ;
    eax = MEM32(0x84B80C);
    eax--;
    MEM32(0x84B80C) = eax;
    eax = eax + eax * 8;
    eax = eax << 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = eax + 0x81DE70;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x8C);
    edx = MEM32(eax + 0x84);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F2630(); /* call 0x003F2630 */

loc_003F1EC2: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1ED0
 * Original: 0x003F1ED0 - 0x003F1F17 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F1ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF8;
    edx = MEM32(0x84B80C);
    eax = edx + edx * 8;
    eax = eax << 4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x81DE70;
    edi = eax + 0x81DF00;
    eax = MEM32(ebp + 0xC);
    edx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x24;
    MEM32(0x84B80C) = edx;
    edx = MEM32(ebp + 8);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_NZ(eax, eax)) { sub_003F1F17(); return; } /* jne: not equal / not zero */

loc_003F1F0E: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003F29C0(); /* call 0x003F29C0 */

loc_003F1F15: ;
    g_seh_ebp = ebp; sub_003F1F44(); return; /* tail jmp 0x003F1F44 */

}

/**
 * sub_003F2500
 * Original: 0x003F2500 - 0x003F258B (139 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2500(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2500: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F1ED0(); /* call 0x003F1ED0 */

loc_003F2511: ;
    eax = MEM32(0x84B80C);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    ecx = ecx + 0x81DE70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED520(); /* call 0x003ED520 */

loc_003F2528: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(0x84B808);
    esp = esp + 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_003F254E; /* je: equal / zero */

loc_003F2537: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003F254E: ;
    eax++;
    MEM32(eax * 8 + 0x81BE70) = 0x3F1E70;
    MEM32(eax * 8 + 0x81BE74) = ebx;
    ebx = MEM32(ebx + 0x14);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x84B808) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_003F2589; /* je: equal / zero */

loc_003F256D: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ebx;

loc_003F2589: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2590
 * Original: 0x003F2590 - 0x003F262F (159 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2590(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2590: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F1ED0(); /* call 0x003F1ED0 */

loc_003F25A5: ;
    eax = MEM32(0x84B80C);
    edx = MEM32(ebx + 0x88);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    ecx = ecx + 0x81DE70;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x80);
    PUSH32(esp, 0); sub_003F2630(); /* call 0x003F2630 */

loc_003F25C9: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(0x84B808);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_003F25F0; /* je: equal / zero */

loc_003F25D8: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx + 0x10);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003F25F0: ;
    eax++;
    MEM32(eax * 8 + 0x81BE70) = 0x3F1E90;
    MEM32(eax * 8 + 0x81BE74) = ebx;
    ebx = MEM32(ebx + 0x14);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x84B808) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_003F262C; /* je: equal / zero */

loc_003F260F: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx + 0x10);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ebx;

loc_003F262C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2630
 * Original: 0x003F2630 - 0x003F2715 (229 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003F2630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x50;
    eax = 0x81B810;
    MEM32(0x81B808) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x10;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    ecx = MEM32(esi + 4);
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F26A5: ;
    if (CMP_EQ(MEM32(0x81BDE4), 0xFFFF)) goto loc_003F2711; /* je: equal / zero */

loc_003F26B1: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    edx = MEM32(ebp + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 3);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F2711: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2720
 * Original: 0x003F2720 - 0x003F276C (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2720: ;
    eax = MEM32(0x84B80C);
    eax--;
    PUSH32(esp, esi);
    edx = eax + eax * 8;
    PUSH32(esp, edi);
    edx = edx << 4;
    edx = edx + 0x81DE70;
    MEM32(0x84B80C) = eax;
    PUSH32(esp, 0x81BD30);
    eax = edx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003F2748: ;
    esi = MEM32(esp + 0x14);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    if (TEST_Z(esi, esi)) { sub_003F276C(); return; } /* je: equal / zero */

loc_003F2755: ;
    ecx = MEM32(edi + 0x8C);
    edx = MEM32(edi + 0x84);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F2630(); /* call 0x003F2630 */

loc_003F2767: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003F2774(); return; /* tail jmp 0x003F2774 */

}

/**
 * sub_003F27A0
 * Original: 0x003F27A0 - 0x003F27FE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F27A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F27A0: ;
    eax = MEM32(0x84B80C);
    eax--;
    edx = eax + eax * 8;
    edx = edx << 4;
    edx = edx + 0x81DE70;
    MEM32(0x84B80C) = eax;
    PUSH32(esp, 0x81BD30);
    eax = edx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003F27C6: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED520(); /* call 0x003ED520 */

loc_003F27CC: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ecx + 0x30));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_003F27FD; /* je: equal / zero */

loc_003F27DA: ;
    eax = MEM32(0x81BDD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EF650(); /* call 0x003EF650 */

loc_003F27E5: ;
    edx = MEM32(0x81BDDC);
    edi = MEM32(0x81BDD8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F0EC0(); /* call 0x003F0EC0 */

loc_003F27F9: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_003F27FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2800
 * Original: 0x003F2800 - 0x003F2925 (293 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003F2800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B80C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(edx, MEM8(ecx + 0x30));
    ebx = ebx + ebx * 8;
    ebx = ebx << 4;
    MEM8(esp + 0x13) = LO8(edx);
    SET_LO8(edx, LO8(edx) & 0xF);
    eax = eax + edi;
    ebx = ebx + 0x81DE70;
    if (CMP_NE(LO8(edx), 2)) { sub_003F2925(); return; } /* jne: not equal / not zero */

loc_003F2838: ;
    ecx = ZX16(MEM16(ecx + 0x32));
    edx = MEM32(0x81BD84);
    edi = MEM32(0x81BD80);
    eax = ecx;
    ecx = ecx + ecx * 8;
    eax = eax << 6;
    edx = edx + ecx * 4;
    eax = eax + edi;
    ecx = esp + 0x20;
    if (CMP_EQ(eax, ecx)) goto loc_003F286A; /* je: equal / zero */

loc_003F285D: ;
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_003F286A: ;
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm3 = MEMF(edx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(edx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 0x50) = xmm3; /* movss */
    xmm2 = MEMF(eax + 0x24); /* movss */
    xmm3 = MEMF(edx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(edx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(esp + 0x54); /* addss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm3 = MEMF(edx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(edx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_003F293C(); return; /* tail jmp 0x003F293C */

}

/**
 * sub_003F29C0
 * Original: 0x003F29C0 - 0x003F2A0B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F29C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F29C0: ;
    ecx = esi;
    PUSH32(esp, 0); sub_003F2800(); /* call 0x003F2800 */

loc_003F29C7: ;
    eax = MEM32(0x84B80C);
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + 0x81DE70;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED520(); /* call 0x003ED520 */

loc_003F29DD: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_003F2A0A; /* je: equal / zero */

loc_003F29E7: ;
    eax = MEM32(0x81BDD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EF650(); /* call 0x003EF650 */

loc_003F29F2: ;
    ecx = MEM32(0x81BDDC);
    edi = MEM32(0x81BDD8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F0EC0(); /* call 0x003F0EC0 */

loc_003F2A06: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_003F2A0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2A10
 * Original: 0x003F2A10 - 0x003F2A72 (98 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0); sub_003F2800(); /* call 0x003F2800 */

loc_003F2A1F: ;
    if (TEST_Z(esi, esi)) goto loc_003F2A49; /* je: equal / zero */

loc_003F2A23: ;
    eax = MEM32(0x84B80C);
    ecx = MEM32(edi + 0x88);
    edx = MEM32(edi + 0x80);
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + 0x81DE70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F2630(); /* call 0x003F2630 */

loc_003F2A46: ;
    esp = esp + 8;

loc_003F2A49: ;
    if (TEST_Z(MEM8(edi + 0x30), 0x20)) goto loc_003F2A6F; /* je: equal / zero */

loc_003F2A4F: ;
    eax = MEM32(0x81BDD0);
    PUSH32(esp, 0); sub_003EF650(); /* call 0x003EF650 */

loc_003F2A59: ;
    edx = MEM32(0x81BDDC);
    edi = MEM32(0x81BDD8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F0EC0(); /* call 0x003F0EC0 */

loc_003F2A6C: ;
    esp = esp + 8;

loc_003F2A6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2A80
 * Original: 0x003F2A80 - 0x003F2B16 (150 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2A80: ;
    edx = MEM32(0x84B80C);
    eax = edx + edx * 8;
    PUSH32(esp, esi);
    eax = eax << 4;
    PUSH32(esp, edi);
    edx++;
    esi = eax + 0x81DE70;
    edi = eax + 0x81DF00;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0xC);
    MEM32(0x84B80C) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_003F29C0(); /* call 0x003F29C0 */

loc_003F2AB5: ;
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x84B808);
    if (TEST_Z(ecx, ecx)) goto loc_003F2AD8; /* je: equal / zero */

loc_003F2AC1: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003F2AD8: ;
    eax++;
    MEM32(eax * 8 + 0x81BE70) = 0x3F27A0;
    MEM32(eax * 8 + 0x81BE74) = esi;
    esi = MEM32(esi + 0x14);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x84B808) = eax;
    if (TEST_Z(esi, esi)) goto loc_003F2B13; /* je: equal / zero */

loc_003F2AF7: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = esi;

loc_003F2B13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B20
 * Original: 0x003F2B20 - 0x003F2BC0 (160 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2B20: ;
    edx = MEM32(0x84B80C);
    PUSH32(esp, esi);
    eax = edx + edx * 8;
    eax = eax << 4;
    PUSH32(esp, edi);
    esi = eax + 0x81DE70;
    edi = eax + 0x81DF00;
    eax = MEM32(esp + 0x14);
    ecx = 0x24;
    edx++;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0xC);
    MEM32(0x84B80C) = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F2A10(); /* call 0x003F2A10 */

loc_003F2B5A: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(0x84B808);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_003F2B81; /* je: equal / zero */

loc_003F2B69: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx + 0x10);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003F2B81: ;
    eax++;
    MEM32(eax * 8 + 0x81BE70) = 0x3F2720;
    MEM32(eax * 8 + 0x81BE74) = esi;
    esi = MEM32(esi + 0x14);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x84B808) = eax;
    if (TEST_Z(esi, esi)) goto loc_003F2BBD; /* je: equal / zero */

loc_003F2BA0: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx + 0x10);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = esi;

loc_003F2BBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2BF0
 * Original: 0x003F2BF0 - 0x003F2BF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2BF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2BF0: ;
    g_seh_ebp = ebp; sub_003EE350(); return; /* tail jmp 0x003EE350 */

}

/**
 * sub_003F2D70
 * Original: 0x003F2D70 - 0x003F2E43 (211 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2;

loc_003F2D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xAC;
    eax = MEM32(0x81BE4C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0xF) = 0;
    if (TEST_Z(eax, eax)) goto loc_003F2E2F; /* je: equal / zero */

loc_003F2D94: ;
    eax = MEM32(0x84B868);
    esi = eax + 0x114;
    eax = MEM32(ebx + 0x3C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x2A;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_NZ(eax, eax)) goto loc_003F2DC9; /* jne: not equal / not zero */

loc_003F2DB1: ;
    xmm2 = MEMF(ebx + 0x4C); /* movss */
    eax = esp + 0xF;
    PUSH32(esp, eax);
    esi = ebx + 0x40;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_003F2DC7: ;
    goto loc_003F2DE2;

loc_003F2DC9: ;
    if (CMP_NE(eax, 1)) goto loc_003F2E0D; /* jne: not equal / not zero */

loc_003F2DCE: ;
    eax = esp + 0x10;
    ecx = ebx + 0x4C;
    edx = ebx + 0x40;
    PUSH32(esp, eax);
    edi = esp + 0x13;
    PUSH32(esp, 0); sub_003E0DD0(); /* call 0x003E0DD0 */

loc_003F2DE2: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_003F2E0D; /* jne: not equal / not zero */

loc_003F2DE9: ;
    ecx = MEM32(ebx + 0x38);
    edx = MEM32(0x81BE54);
    esi = MEM32(edx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    goto loc_003F2E2C;

loc_003F2E0D: ;
    eax = MEM32(0x81BE54);
    ecx = MEM32(ebx + 0x38);
    esi = MEM32(eax + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(ecx, LO8(ecx) | LO8(edx));

loc_003F2E2C: ;
    MEM8(eax + esi) = LO8(ecx);

loc_003F2E2F: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003F0590(); /* call 0x003F0590 */

loc_003F2E39: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2E50
 * Original: 0x003F2E50 - 0x003F2F52 (258 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2E50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003F2E50: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003F2F3F; /* je: equal / zero */

loc_003F2E63: ;
    ecx = MEM32(eax + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_003F2F3F; /* je: equal / zero */

loc_003F2E6E: ;
    edx = eax;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(0x84B80C);
    eax = eax + eax * 8;
    ecx = edi + 0x30;
    eax = eax << 4;
    PUSH32(esp, ecx);
    eax = eax + 0x81DE70;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E25F0(); /* call 0x003E25F0 */

loc_003F2E93: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_003F2EA7; /* jbe: below or equal (unsigned <=) */

loc_003F2EA0: ;
    eax = 1;
    goto loc_003F2EA9;

loc_003F2EA7: ;
    eax = 0; /* xor self */

loc_003F2EA9: ;
    (void)0; /* cmp MEM32(edx + 0x30), eax - flags set for next jcc */
    eax = MEM32(0x84B808);
    if (CMP_NE(MEM32(edx + 0x30), eax)) goto loc_003F2EE3; /* jne: not equal / not zero */

loc_003F2EB3: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x50);
    ecx = MEM32(ecx);
    MEM32(eax * 8 + 0x81BE78) = ecx;
    eax++;
    MEM32(eax * 8 + 0x81BE74) = esi;
    ecx = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0x50);
    ecx = MEM32(ecx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = ecx;
    MEM32(eax * 8 + 0x81BE74) = edx;
    goto loc_003F2F11;

loc_003F2EE3: ;
    ecx = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0x50);
    ecx = MEM32(ecx);
    MEM32(eax * 8 + 0x81BE78) = ecx;
    eax++;
    MEM32(eax * 8 + 0x81BE74) = edx;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x50);
    edx = MEM32(ecx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(eax * 8 + 0x81BE74) = esi;

loc_003F2F11: ;
    ecx = MEM32(edi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84B808) = eax;
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_003F2F4D; /* je: equal / zero */

loc_003F2F1E: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    edx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003F2F3F: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003EE350(); /* call 0x003EE350 */

loc_003F2F4A: ;
    esp = esp + 8;

loc_003F2F4D: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2F60
 * Original: 0x003F2F60 - 0x003F2F8D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2F60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_003F2F8C; /* je: equal / zero */

loc_003F2F6B: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x50);
    eax = MEM32(0x84B808);
    edx = MEM32(edx);
    eax++;
    MEM32(eax * 8 + 0x81BE70) = edx;
    MEM32(0x84B808) = eax;
    MEM32(eax * 8 + 0x81BE74) = ecx;

loc_003F2F8C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2F90
 * Original: 0x003F2F90 - 0x003F2FD1 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F2F90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x78);
    ecx = eax;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    ecx = MEM32(0x81BE58);
    eax = eax >> 3;
    if (TEST_Z(MEM8(eax + ecx), LO8(edx))) { sub_003F2FD1(); return; } /* je: equal / zero */

loc_003F2FB2: ;
    eax = MEM32(0x84B81C);
    if (TEST_Z(eax, eax)) goto loc_003F2FC1; /* je: equal / zero */

loc_003F2FBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003F2FBE: ;
    esp = esp + 4;

loc_003F2FC1: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F19E0(); /* call 0x003F19E0 */

loc_003F2FCC: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2FF0
 * Original: 0x003F2FF0 - 0x003F3023 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x78);
    ecx = eax;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    ecx = MEM32(0x81BE58);
    eax = eax >> 3;
    (void)0; /* test MEM8(eax + ecx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x70);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(eax + ecx), LO8(edx))) { sub_003F3023(); return; } /* je: equal / zero */

loc_003F3018: ;
    edx = MEM32(esp + 0x1C);
    edi = MEM32(edx + 4);
    ebx = esi;
    g_seh_ebp = ebp; sub_003F302D(); return; /* tail jmp 0x003F302D */

}

/**
 * sub_003F3050
 * Original: 0x003F3050 - 0x003F3081 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3050(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F3050: ;
    edx = MEM32(0x81BE58);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042AF50(); /* call 0x0042AF50 */

loc_003F306A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003F3081(); return; } /* je: equal / zero */

loc_003F3071: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F08E0(); /* call 0x003F08E0 */

loc_003F307C: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F30B0
 * Original: 0x003F30B0 - 0x003F30D6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F30B0(void)
{

loc_003F30B0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3F0DC0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BE58);
    PUSH32(esp, eax);
    eax = MEM32(eax + 0x50);
    PUSH32(esp, 0); sub_003F3760(); /* call 0x003F3760 */

loc_003F30D2: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003F30E0
 * Original: 0x003F30E0 - 0x003F3113 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F30E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F30E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 8);
    eax = ecx + edx;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(eax) = ebx;
    ecx = eax + 0x16;
    eax = eax + 0xC;
    edx = 2;
    edi = edi;

loc_003F3100: ;
    MEM32(eax + -8) = ebx;
    MEM32(eax) = ebx;
    eax = eax + 4;
    MEM8(ecx + -2) = LO8(ebx);
    MEM8(ecx) = LO8(ebx);
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_003F3100; /* jne: not equal / not zero */

loc_003F3111: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3120
 * Original: 0x003F3120 - 0x003F313D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3120: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(0x81BD24));
    edi = edi + edx;
    if (TEST_Z(LO8(eax), 1)) { sub_003F313D(); return; } /* je: equal / zero */

loc_003F3139: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_003F3145(); return; /* tail jmp 0x003F3145 */

}

/**
 * sub_003F31A0
 * Original: 0x003F31A0 - 0x003F31BD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F31A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F31A0: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(0x81BD24));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    esi = esi + ecx;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 1)) { sub_003F31BD(); return; } /* je: equal / zero */

loc_003F31B9: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_003F31C5(); return; /* tail jmp 0x003F31C5 */

}

/**
 * sub_003F3410
 * Original: 0x003F3410 - 0x003F3448 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3410(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3410: ;
    eax = MEM32(0x84B808);
    PUSH32(esp, ebx);
    eax++;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(eax * 8 + 0x81BE70) = 0;
    MEM32(eax * 8 + 0x81BE74) = 0;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x84B808) = eax;
    MEM32(esp + 0x14) = ecx;
    g_seh_ebp = ebp; sub_003F3450(); return; /* tail jmp 0x003F3450 */

}

/**
 * sub_003F3510
 * Original: 0x003F3510 - 0x003F35F6 (230 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3510: ;
    esp = esp - 8;
    ecx = MEM32(0x81BE34);
    eax = 0xCCCCCCCCu;
    MEM32(0x84B840) = eax;
    MEM32(0x84B844) = eax;
    MEM32(0x84B848) = eax;
    MEM32(0x84B84C) = eax;
    eax = ZX8(MEM8(0x81BD24));
    eax = eax >> 1;
    eax = eax & 1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(0x81BDFC) = 0;
    MEM32(0x81BE30) = eax;
    MEM32(esp + 4) = ecx;
    edx = MEM32(esi + eax * 4 + 0x30);
    PUSH32(esp, edi);
    MEM32(0x84B83C) = 0;
    MEM32(esp + 0xC) = edx;
    if (TEST_Z(ecx, ecx)) { sub_003F35F6(); return; } /* je: equal / zero */

loc_003F3571: ;
    SET_LO8(edx, MEM8(eax + esi + 0x48));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003F357F; /* je: equal / zero */

loc_003F3579: ;
    ecx = 0; /* xor self */
    MEM32(esp + 8) = ecx;

loc_003F357F: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x54A8B0) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_003F358F; /* je: equal / zero */

loc_003F3589: ;
    eax = MEM32(ecx + 0x10);
    MEM32(ecx + 0xC) = eax;

loc_003F358F: ;
    edx = MEM32(esp + 0x18);
    eax = ZX16(MEM16(0x81BD24));
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F3410(); /* call 0x003F3410 */

loc_003F35AA: ;
    eax = MEM32(0x54A8B0);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003F35DB; /* je: equal / zero */

loc_003F35B6: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    edi = MEM32(eax + 0x14);
    ecx = ecx + edx;
    edx = edx + 4;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(0x54A8B0) = 0;
    MEM32(eax + 0x10) = edx;
    if (CMP_A(edx, edi)) goto loc_003F35DB; /* ja: above (unsigned >) */

loc_003F35D5: ;
    MEM32(ecx) = 0xFFFFFFFFu;

loc_003F35DB: ;
    ecx = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) { sub_003F35F6(); return; } /* je: equal / zero */

loc_003F35E3: ;
    eax = MEM32(ecx + 0x10);
    eax = eax - MEM32(ecx + 0xC);
    if (CMP_BE(eax, 4)) { sub_003F35F6(); return; } /* jbe: below or equal (unsigned <=) */

loc_003F35EE: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_seh_ebp = ebp; sub_003F35FD(); return; /* tail jmp 0x003F35FD */

}

/**
 * sub_003F3640
 * Original: 0x003F3640 - 0x003F3756 (278 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003F3640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(0x84B80C);
    PUSH32(esp, esi);
    edx = eax + eax * 8;
    PUSH32(esp, edi);
    edx = edx << 4;
    edx = edx + 0x81DE70;
    PUSH32(esp, 0x81BD30);
    eax = edx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003F366B: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    if (TEST_NZ(MEM8(0x547548), 0x10)) goto loc_003F36D8; /* jne: not equal / not zero */

loc_003F36C8: ;
    ecx = 0xC;
    esi = esp + 0x10;
    edi = 0x54A298;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_003F36D8: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x14;
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_003F36E8: ;
    eax = 0x81B810;
    edx = esp + 0x10;
    MEM32(0x81B808) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    ecx = 0x63;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_003F3750: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3760
 * Original: 0x003F3760 - 0x003F37A1 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042AF50(); /* call 0x0042AF50 */

loc_003F3776: ;
    edi = MEM32(ebp + 4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003F37A1(); return; } /* je: equal / zero */

loc_003F3780: ;
    esi = MEM32(esi + 8);
    ebx = esi;
    PUSH32(esp, 0); sub_0053B620(); /* call 0x0053B620 */

loc_003F378A: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x28), _icall_esp); /* indirect call */
    }

loc_003F3799: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F37E0
 * Original: 0x003F37E0 - 0x003F3B96 (950 bytes, 262 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F37E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F37E0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_BE(eax, ebp)) goto loc_003F3B90; /* jbe: below or equal (unsigned <=) */

loc_003F37FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_003F3800: ;
    SET_LO8(eax, MEM8(ebx + 0x1A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F38B4; /* je: equal / zero */

loc_003F380B: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + ebp + 4);
    edi = eax + ebp;
    SET_LO8(eax, MEM8(ebx + 0x1D));
    ecx = ecx - 0xA;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_003F38B4; /* je: equal / zero */

loc_003F3829: ;
    ecx = MEM32(0x81B880);
    edx = MEM32(0x81B884);
    eax = MEM32(0x81B888);
    MEM32(esp + 0x10) = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(0x81B88C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003F385F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = eax;
    esi = esi & 0xFF;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003F3876: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax << 8;
    esi = esi | eax;
    esi = esi << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003F388D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 0xFF;
    esi = esi | eax;
    esi = esi << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003F38A6: ;
    eax = eax & 0xFF;
    esi = esi | eax;
    eax = 1;
    goto loc_003F38D8;

loc_003F38B4: ;
    edx = MEM32(ebx);
    ecx = ZX8(MEM8(edx + ebp + 1));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(edx + ebp + 3));
    edi = edx + ebp;
    edx = ZX8(MEM8(edi + 2));
    SET_LO8(eax, MEM8(edi));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    esi = eax;
    eax = 0; /* xor self */

loc_003F38D8: ;
    ecx = MEM32(esp + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_003F38FC; /* je: equal / zero */

loc_003F38E0: ;
    if (TEST_Z(eax, eax)) goto loc_003F3B77; /* je: equal / zero */

loc_003F38E8: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_0053B5C0(); /* call 0x0053B5C0 */

loc_003F38F7: ;
    goto loc_003F3B77;

loc_003F38FC: ;
    edi = MEM32(edi + 4);
    if (CMP_GE(edi, 0x5C)) goto loc_003F391E; /* jge: greater or equal (signed >=) */

loc_003F3904: ;
    ecx = MEM32(edi * 4 + 0x5B1108);
    edx = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F3912: ;
    MEM32(edi * 4 + 0x5499F8) = esi;
    goto loc_003F3B77;

loc_003F391E: ;
    if (CMP_GE(edi, 0x88)) goto loc_003F3945; /* jge: greater or equal (signed >=) */

loc_003F3926: ;
    eax = MEM32(0x5499F0);
    ecx = MEM32(edi * 4 + 0x5B0EE8);
    eax = eax | ecx;
    MEM32(0x5499F0) = eax;
    MEM32(edi * 4 + 0x5499F8) = esi;
    goto loc_003F3B77;

loc_003F3945: ;
    if ((eax != 0)) goto loc_003F396D; /* jne: not equal / not zero */

loc_003F3947: ;
    eax = MEM32(0x5499F0);
    edx = MEM32(0x5499E8);
    eax = eax | 0x4000;
    MEM32(edx + 0x790) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x549C18) = esi;
    goto loc_003F3B77;

loc_003F396D: ;
    if (CMP_NE(edi, 0x89)) goto loc_003F3980; /* jne: not equal / not zero */

loc_003F3975: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537910(); /* call 0x00537910 */

loc_003F397B: ;
    goto loc_003F3B77;

loc_003F3980: ;
    if (CMP_NE(edi, 0x8A)) goto loc_003F3993; /* jne: not equal / not zero */

loc_003F3988: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537010(); /* call 0x00537010 */

loc_003F398E: ;
    goto loc_003F3B77;

loc_003F3993: ;
    if (CMP_NE(edi, 0x8B)) goto loc_003F39A6; /* jne: not equal / not zero */

loc_003F399B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003F39A1: ;
    goto loc_003F3B77;

loc_003F39A6: ;
    if (CMP_NE(edi, 0x8C)) goto loc_003F39B9; /* jne: not equal / not zero */

loc_003F39AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537890(); /* call 0x00537890 */

loc_003F39B4: ;
    goto loc_003F3B77;

loc_003F39B9: ;
    if (CMP_NE(edi, 0x8D)) goto loc_003F39CC; /* jne: not equal / not zero */

loc_003F39C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005378B0(); /* call 0x005378B0 */

loc_003F39C7: ;
    goto loc_003F3B77;

loc_003F39CC: ;
    if (CMP_NE(edi, 0x8E)) goto loc_003F39DF; /* jne: not equal / not zero */

loc_003F39D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537140(); /* call 0x00537140 */

loc_003F39DA: ;
    goto loc_003F3B77;

loc_003F39DF: ;
    if (CMP_NE(edi, 0x8F)) goto loc_003F39F2; /* jne: not equal / not zero */

loc_003F39E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003F39ED: ;
    goto loc_003F3B77;

loc_003F39F2: ;
    if (CMP_NE(edi, 0x90)) goto loc_003F3A05; /* jne: not equal / not zero */

loc_003F39FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_003F3A00: ;
    goto loc_003F3B77;

loc_003F3A05: ;
    if (CMP_NE(edi, 0x91)) goto loc_003F3A18; /* jne: not equal / not zero */

loc_003F3A0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005372E0(); /* call 0x005372E0 */

loc_003F3A13: ;
    goto loc_003F3B77;

loc_003F3A18: ;
    if (CMP_NE(edi, 0x93)) goto loc_003F3A2B; /* jne: not equal / not zero */

loc_003F3A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003F3A26: ;
    goto loc_003F3B77;

loc_003F3A2B: ;
    if (CMP_NE(edi, 0x92)) goto loc_003F3A3E; /* jne: not equal / not zero */

loc_003F3A33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005370F0(); /* call 0x005370F0 */

loc_003F3A39: ;
    goto loc_003F3B77;

loc_003F3A3E: ;
    if (CMP_NE(edi, 0x94)) goto loc_003F3A51; /* jne: not equal / not zero */

loc_003F3A46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_003F3A4C: ;
    goto loc_003F3B77;

loc_003F3A51: ;
    if (CMP_NE(edi, 0x95)) goto loc_003F3A64; /* jne: not equal / not zero */

loc_003F3A59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_003F3A5F: ;
    goto loc_003F3B77;

loc_003F3A64: ;
    if (CMP_NE(edi, 0x96)) goto loc_003F3A77; /* jne: not equal / not zero */

loc_003F3A6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005377E0(); /* call 0x005377E0 */

loc_003F3A72: ;
    goto loc_003F3B77;

loc_003F3A77: ;
    if (CMP_NE(edi, 0x97)) goto loc_003F3A8A; /* jne: not equal / not zero */

loc_003F3A7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_003F3A85: ;
    goto loc_003F3B77;

loc_003F3A8A: ;
    if (CMP_NE(edi, 0x98)) goto loc_003F3A9D; /* jne: not equal / not zero */

loc_003F3A92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537760(); /* call 0x00537760 */

loc_003F3A98: ;
    goto loc_003F3B77;

loc_003F3A9D: ;
    if (CMP_NE(edi, 0x99)) goto loc_003F3AB0; /* jne: not equal / not zero */

loc_003F3AA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005377A0(); /* call 0x005377A0 */

loc_003F3AAB: ;
    goto loc_003F3B77;

loc_003F3AB0: ;
    if (CMP_NE(edi, 0x9A)) goto loc_003F3AC3; /* jne: not equal / not zero */

loc_003F3AB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537700(); /* call 0x00537700 */

loc_003F3ABE: ;
    goto loc_003F3B77;

loc_003F3AC3: ;
    if (CMP_NE(edi, 0x9B)) goto loc_003F3AD6; /* jne: not equal / not zero */

loc_003F3ACB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537730(); /* call 0x00537730 */

loc_003F3AD1: ;
    goto loc_003F3B77;

loc_003F3AD6: ;
    if (CMP_NE(edi, 0x9C)) goto loc_003F3AE9; /* jne: not equal / not zero */

loc_003F3ADE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536FD0(); /* call 0x00536FD0 */

loc_003F3AE4: ;
    goto loc_003F3B77;

loc_003F3AE9: ;
    if (CMP_NE(edi, 0x9D)) goto loc_003F3AF9; /* jne: not equal / not zero */

loc_003F3AF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005373D0(); /* call 0x005373D0 */

loc_003F3AF7: ;
    goto loc_003F3B77;

loc_003F3AF9: ;
    if (CMP_NE(edi, 0x9E)) goto loc_003F3B09; /* jne: not equal / not zero */

loc_003F3B01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005377C0(); /* call 0x005377C0 */

loc_003F3B07: ;
    goto loc_003F3B77;

loc_003F3B09: ;
    if (CMP_NE(edi, 0x9F)) goto loc_003F3B19; /* jne: not equal / not zero */

loc_003F3B11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537440(); /* call 0x00537440 */

loc_003F3B17: ;
    goto loc_003F3B77;

loc_003F3B19: ;
    if (CMP_NE(edi, 0xA0)) goto loc_003F3B29; /* jne: not equal / not zero */

loc_003F3B21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005374D0(); /* call 0x005374D0 */

loc_003F3B27: ;
    goto loc_003F3B77;

loc_003F3B29: ;
    if (CMP_NE(edi, 0xA1)) goto loc_003F3B39; /* jne: not equal / not zero */

loc_003F3B31: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537510(); /* call 0x00537510 */

loc_003F3B37: ;
    goto loc_003F3B77;

loc_003F3B39: ;
    if (CMP_NE(edi, 0xA2)) goto loc_003F3B49; /* jne: not equal / not zero */

loc_003F3B41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537580(); /* call 0x00537580 */

loc_003F3B47: ;
    goto loc_003F3B77;

loc_003F3B49: ;
    if (CMP_NE(edi, 0xA3)) goto loc_003F3B59; /* jne: not equal / not zero */

loc_003F3B51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005375F0(); /* call 0x005375F0 */

loc_003F3B57: ;
    goto loc_003F3B77;

loc_003F3B59: ;
    if (CMP_NE(edi, 0xA4)) goto loc_003F3B69; /* jne: not equal / not zero */

loc_003F3B61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537610(); /* call 0x00537610 */

loc_003F3B67: ;
    goto loc_003F3B77;

loc_003F3B69: ;
    if (CMP_NE(edi, 0xA5)) goto loc_003F3B77; /* jne: not equal / not zero */

loc_003F3B71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537630(); /* call 0x00537630 */

loc_003F3B77: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x14);
    eax++;
    ebp = ebp + 0xC;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_B(eax, ecx)) goto loc_003F3800; /* jb: below (unsigned <) */

loc_003F3B8E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003F3B90: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003F3BA0
 * Original: 0x003F3BA0 - 0x003F3C69 (201 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3BA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003F3BA0: ;
    SET_LO8(eax, MEM8(edi + 0x1B));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), 6)) goto loc_003F3C65; /* jne: not equal / not zero */

loc_003F3BAE: ;
    eax = ZX8(MEM8(edi + 0x3C));
    if (CMP_NE(eax, ebx)) goto loc_003F3BC4; /* jne: not equal / not zero */

loc_003F3BB6: ;
    SET_LO8(eax, MEM8(edi + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F3BC4; /* je: equal / zero */

loc_003F3BBD: ;
    PUSH32(esp, 0); sub_003EBC20(); /* call 0x003EBC20 */

loc_003F3BC2: ;
    goto loc_003F3BCC;

loc_003F3BC4: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_003F3BCC: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + ecx + 0xC); /* movss */
    eax = ebx;
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_003F3BFB: ;
    eax = MEM32(edi + 8);
    xmm0 = MEMF(esi + eax + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = ebx;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_003F3C1E: ;
    edx = MEM32(edi + 8);
    xmm0 = MEMF(esi + edx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    eax = ebx;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_003F3C41: ;
    ecx = MEM32(edi + 8);
    xmm0 = MEMF(esi + ecx + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x18);
    eax = ebx;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_003F3C64: ;
    POP32(esp, esi);

loc_003F3C65: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003F3C70
 * Original: 0x003F3C70 - 0x003F3D53 (227 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003F3C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_BE(eax, esi)) goto loc_003F3D4D; /* jbe: below or equal (unsigned <=) */

loc_003F3C8A: ;
    MEM32(esp + 8) = esi;
    edi = edi;

loc_003F3C90: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_003F3CB1; /* je: equal / zero */

loc_003F3C97: ;
    ecx = MEM32(eax + 4);
    if (CMP_EQ(MEM8(ebx + ecx), 0)) goto loc_003F3CB1; /* je: equal / zero */

loc_003F3CA0: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    eax = MEM32(edi + 4);
    edx = edx + ecx;
    ecx = MEM32(esi + eax + 0x40);
    goto loc_003F3D29;

loc_003F3CB1: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(esi + ecx + 0x44);
    if (TEST_Z(eax, eax)) goto loc_003F3D20; /* je: equal / zero */

loc_003F3CBC: ;
    eax = 1;
    PUSH32(esp, 0); sub_003F7960(); /* call 0x003F7960 */

loc_003F3CC6: ;
    edx = esp + 0x10;
    MEM32(esp + 0xC) = edx;
    ecx = 0x824F70;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    eax = MEM32(edi + 4);
    ecx = MEM32(esi + eax + 0x40);
    goto loc_003F3D29;

loc_003F3D20: ;
    ecx = MEM32(edi + 4);
    edx = esi + ecx;
    ecx = MEM32(edx + 0x40);

loc_003F3D29: ;
    ecx = ecx + 0x60;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_003F3D33: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edi + 0x10);
    ebx++;
    edx = edx + 0x40;
    esi = esi + 0x50;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (CMP_B(ebx, eax)) goto loc_003F3C90; /* jb: below (unsigned <) */

loc_003F3D4D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F3D60
 * Original: 0x003F3D60 - 0x003F3DD9 (121 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3D60: ;
    eax = MEM32(esi + 0x88);
    eax = MEM32(eax + 0x40);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003F3D87; /* je: equal / zero */

loc_003F3D70: ;
    edx = MEM32(edi + 0x10);
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F3D7B: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00537010(); /* call 0x00537010 */

loc_003F3D87: ;
    eax = MEM32(0x5499F0);
    edx = 1;
    MEM32(0x549B68) = edx;
    ecx = MEM32(esi + 0x88);
    SET_LO8(ecx, MEM8(ecx + 0x4C));
    eax = eax | 0x2000;
    eax = eax | 0x2000;
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003F3DD9(); return; } /* je: equal / zero */

loc_003F3DAE: ;
    (void)0; /* cmp LO8(ecx), LO8(edx) - flags set for next jcc */
    MEM32(0x549B6C) = edx;
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_003F3DC2; /* je: equal / zero */

loc_003F3DB8: ;
    MEM32(0x549B6C) = 2;

loc_003F3DC2: ;
    edx = MEM32(edi + 0x10);
    eax = eax | 0x2000;
    MEM32(0x5499F0) = eax;
    eax = MEM32(edx + 0x34);
    MEM32(0x549B78) = eax;
    g_seh_ebp = ebp; sub_003F3DE8(); return; /* tail jmp 0x003F3DE8 */

}

/**
 * sub_003F3E10
 * Original: 0x003F3E10 - 0x003F3E2B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F3E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x1A));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003F3E2B(); return; } /* je: equal / zero */

loc_003F3E24: ;
    PUSH32(esp, 0x204);
    g_seh_ebp = ebp; sub_003F3E30(); return; /* tail jmp 0x003F3E30 */

}

/**
 * sub_003F3F70
 * Original: 0x003F3F70 - 0x003F40A2 (306 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F3F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F3F70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edi);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x54A8B0) = ebp;
    if (TEST_S(eax, eax)) goto loc_003F3F8B; /* js: sign (negative) */

loc_003F3F84: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0053C600(); /* call 0x0053C600 */

loc_003F3F8B: ;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    if (CMP_BE(eax, ebp)) goto loc_003F406F; /* jbe: below or equal (unsigned <=) */

loc_003F3F98: ;
    goto loc_003F3FA0;

    /* nop */

loc_003F3FA0: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + ebp + 7));
    eax = eax + ebp;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F4060; /* jne: not equal / not zero */

loc_003F3FB1: ;
    SET_LO8(ecx, MEM8(esi + 0x1B));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F3FC1; /* je: equal / zero */

loc_003F3FB8: ;
    if (CMP_EQ(ebx, MEM32(esi + 0x44))) goto loc_003F4060; /* je: equal / zero */

loc_003F3FC1: ;
    SET_LO8(ecx, MEM8(esi + 0x1C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F3FD1; /* je: equal / zero */

loc_003F3FC8: ;
    if (CMP_EQ(ebx, MEM32(esi + 0x48))) goto loc_003F4060; /* je: equal / zero */

loc_003F3FD1: ;
    ecx = ZX8(MEM8(esi + 0x3C));
    if (CMP_NE(ecx, ebx)) goto loc_003F3FF1; /* jne: not equal / not zero */

loc_003F3FD9: ;
    SET_LO8(ecx, MEM8(esi + 0x19));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F3FF1; /* je: equal / zero */

loc_003F3FE0: ;
    edx = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003F4AE0(); /* call 0x003F4AE0 */

loc_003F3FEC: ;
    esp = esp + 0xC;
    goto loc_003F4060;

loc_003F3FF1: ;
    ecx = MEM32(esi + 0x3C);
    ecx = ecx >> 8;
    edx = ZX8(LO8(ecx));
    if (CMP_NE(edx, ebx)) goto loc_003F4020; /* jne: not equal / not zero */

loc_003F3FFE: ;
    if (CMP_NE(MEM8(0x750341), 0xFF)) goto loc_003F4020; /* jne: not equal / not zero */

loc_003F4007: ;
    ecx = MEM32(0x81B864);
    eax = MEM32(eax + 0x24);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x81B850;
    MEM32(esp + 0xC) = ecx;
    goto loc_003F4056;

loc_003F4020: ;
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003F4060; /* je: equal / zero */

loc_003F4027: ;
    eax = MEM32(eax);
    if (CMP_AE(eax, 0xFFFF)) goto loc_003F4060; /* jae: above or equal (unsigned >=) */

loc_003F4030: ;
    ecx = MEM32(0x84B854);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_003F4060; /* je: equal / zero */

loc_003F403D: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_003FA600(); /* call 0x003FA600 */

loc_003F4048: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + ebp + 0x24);
    ecx = MEM32(esp + 0x10);
    esp = esp + 4;

loc_003F4056: ;
    PUSH32(esp, eax);
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F4060: ;
    eax = MEM32(esi + 0xC);
    ebx++;
    ebp = ebp + 0x2C;
    if (CMP_B(ebx, eax)) goto loc_003F3FA0; /* jb: below (unsigned <) */

loc_003F406F: ;
    eax = MEM32(0x54A8B0);
    if (TEST_Z(eax, eax)) goto loc_003F409D; /* je: equal / zero */

loc_003F4078: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    esi = MEM32(eax + 0x14);
    ecx = ecx + edx;
    edx = edx + 4;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(0x54A8B0) = 0;
    MEM32(eax + 0x10) = edx;
    if (CMP_A(edx, esi)) goto loc_003F409D; /* ja: above (unsigned >) */

loc_003F4097: ;
    MEM32(ecx) = 0xFFFFFFFFu;

loc_003F409D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F40B0
 * Original: 0x003F40B0 - 0x003F40F2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F40B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F40B0: ;
    PUSH32(esp, ecx);
    ecx = eax + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 0x10);
    ecx = ecx << 6;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx + 0x20;
    esi = ecx + eax;
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 0x10);
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    ecx = ecx + esi;
    esi = ecx + eax;
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 0x88);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) { sub_003F40F2(); return; } /* je: equal / zero */

loc_003F40E5: ;
    esi = MEM32(edx + 0xC);
    ecx = ecx + esi * 4;
    ecx = ecx + eax;
    MEM32(eax + 0x10) = ecx;
    g_seh_ebp = ebp; sub_003F40F5(); return; /* tail jmp 0x003F40F5 */

}

/**
 * sub_003F41F0
 * Original: 0x003F41F0 - 0x003F424D (93 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F41F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F41F0: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_003F4245; /* jbe: below or equal (unsigned <=) */

loc_003F41FE: ;
    eax = MEM32(eax + 0x28);
    MEM32(esp + 0x10) = eax;
    ebp = eax;

loc_003F4207: ;
    esi = MEM32(ebp);
    eax = MEM32(esp + 0x18);
    edi = edi;

loc_003F4210: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003F4234; /* jne: not equal / not zero */

loc_003F4218: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F4230; /* je: equal / zero */

loc_003F421C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003F4234; /* jne: not equal / not zero */

loc_003F4226: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F4210; /* jne: not equal / not zero */

loc_003F4230: ;
    eax = 0; /* xor self */
    goto loc_003F4239;

loc_003F4234: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003F4239: ;
    if (TEST_Z(eax, eax)) { sub_003F424D(); return; } /* je: equal / zero */

loc_003F423D: ;
    edi++;
    ebp = ebp + 0x10;
    if (CMP_B(edi, edx)) goto loc_003F4207; /* jb: below (unsigned <) */

loc_003F4245: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F4270
 * Original: 0x003F4270 - 0x003F42B1 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4270(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F4270: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F427F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003F42B1(); return; } /* je: equal / zero */

loc_003F4286: ;
    ecx = MEM32(esp);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, 1)) goto loc_003F4296; /* je: equal / zero */

loc_003F4291: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_003F42B1(); return; } /* jne: not equal / not zero */

loc_003F4296: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    edx = edx << 6;
    edx = edx + ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F42C0
 * Original: 0x003F42C0 - 0x003F451B (603 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F42C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003F42C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    eax = MEM32(0x84B82C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003F42E4; /* je: equal / zero */

loc_003F42DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003F37E0(); /* call 0x003F37E0 */

loc_003F42E1: ;
    esp = esp + 8;

loc_003F42E4: ;
    eax = MEM32(0x753E2C);
    if (TEST_NZ(eax, eax)) goto loc_003F439C; /* jne: not equal / not zero */

loc_003F42F1: ;
    if (CMP_EQ(MEM8(esi + 0x1E), 2)) goto loc_003F439C; /* je: equal / zero */

loc_003F42FB: ;
    SET_LO8(eax, MEM8(esi + 0x1B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003F439C; /* jne: not equal / not zero */

loc_003F4306: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003F439C; /* jne: not equal / not zero */

loc_003F4311: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003F439C; /* jne: not equal / not zero */

loc_003F431C: ;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003F4367; /* jbe: below or equal (unsigned <=) */

loc_003F4325: ;
    edi = 0; /* xor self */

loc_003F4327: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(edi + eax + 7));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F435C; /* je: equal / zero */

loc_003F4332: ;
    edx = MEM32(0x84B858);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F7860(); /* call 0x003F7860 */

loc_003F4343: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + eax + 0x24);
    eax = MEM32(ebp + 0xC);
    esp = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = ebx;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F435C: ;
    eax = MEM32(esi + 0xC);
    ebx++;
    edi = edi + 0x2C;
    if (CMP_B(ebx, eax)) goto loc_003F4327; /* jb: below (unsigned <) */

loc_003F4367: ;
    ebx = MEM32(ebp + 0xC);

loc_003F436A: ;
    eax = MEM32(esi + 0x10);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_BE(eax & eax, 0)) goto loc_003F444B; /* jbe: below or equal (unsigned <=) */

loc_003F437B: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = edi;

loc_003F4381: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_003F43AD; /* je: equal / zero */

loc_003F4388: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(MEM8(ecx + edx), 0)) goto loc_003F43AD; /* je: equal / zero */

loc_003F4391: ;
    eax = MEM32(eax);
    eax = eax + MEM32(esp + 0x14);
    goto loc_003F4417;

loc_003F439C: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_003F4CE0(); /* call 0x003F4CE0 */

loc_003F43A8: ;
    esp = esp + 8;
    goto loc_003F436A;

loc_003F43AD: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi + edx + 0x44);
    if (TEST_Z(eax, eax)) goto loc_003F4429; /* je: equal / zero */

loc_003F43B8: ;
    eax = 1;
    PUSH32(esp, 0); sub_003F7960(); /* call 0x003F7960 */

loc_003F43C2: ;
    eax = esp + 0x20;
    MEM32(esp + 0x18) = eax;
    ecx = 0x824F70;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    eax = esp + 0x20;

loc_003F4417: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + edi + 0x48);
    ecx = ecx + edi;
    ecx = ebx;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F4429: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax = eax + 0x40;
    ecx++;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    edi = edi + 0x50;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_B(ecx, eax)) goto loc_003F4381; /* jb: below (unsigned <) */

loc_003F444B: ;
    if (CMP_EQ(MEM32(esi + 0x6C), 0xFFFF)) goto loc_003F44BD; /* je: equal / zero */

loc_003F4454: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003F7960(); /* call 0x003F7960 */

loc_003F445B: ;
    edx = esp + 0x60;
    MEM32(esp + 0x18) = edx;
    ecx = 0x824F70;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    eax = edx;
    edx = MEM32(esi + 0x80);
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F44BD: ;
    eax = MEM32(esi + 0x88);
    if (TEST_Z(eax, eax)) goto loc_003F4505; /* je: equal / zero */

loc_003F44C7: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_003F4505; /* je: equal / zero */

loc_003F44D4: ;
    ecx = MEM32(esi + 0x88);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F44E6: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003F4505; /* je: equal / zero */

loc_003F44ED: ;
    ecx = MEM32(esi + 0x88);
    eax = MEM32(edi + 0x10);
    edx = MEM32(ecx + 8);
    PUSH32(esp, 1);
    eax = eax + 0x10;
    ecx = ebx;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F4505: ;
    eax = MEM32(0x84B828);
    if (TEST_Z(eax, eax)) goto loc_003F4515; /* je: equal / zero */

loc_003F450E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003F4512: ;
    esp = esp + 8;

loc_003F4515: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F4520
 * Original: 0x003F4520 - 0x003F45A5 (133 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4520(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003F4520: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B858);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F7860(); /* call 0x003F7860 */

loc_003F4531: ;
    ecx = MEM32(esp + 8);
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_003F4586; /* je: equal / zero */

loc_003F453C: ;
    if (TEST_Z(edi, edi)) goto loc_003F4558; /* je: equal / zero */

loc_003F4540: ;
    eax = MEM32(ebx + 8);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    edx = MEM32(edx + eax + 0x24);
    PUSH32(esp, edx);
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F4556: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F4558: ;
    PUSH32(esp, 0);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_003F4E20(); /* call 0x003F4E20 */

loc_003F4563: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esi * 4 + 0x84B840);
    esp = esp + 4;
    if (CMP_EQ(ecx, eax)) goto loc_003F45A3; /* je: equal / zero */

loc_003F4575: ;
    MEM32(esi * 4 + 0x84B840) = eax;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4584: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F4586: ;
    if (TEST_NZ(edi, edi)) goto loc_003F45A3; /* jne: not equal / not zero */

loc_003F458A: ;
    eax = MEM32(0x81B7DC);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x81B7C8;
    MEM32(esp) = eax;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F45A3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F45B0
 * Original: 0x003F45B0 - 0x003F473B (395 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F45B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F45B0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x84B7F4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(ecx, ecx)) { sub_003F473B(); return; } /* je: equal / zero */

loc_003F45CF: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(edi, edi)) goto loc_003F460B; /* je: equal / zero */

loc_003F45D4: ;
    ebx = MEM32(esi + 8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    edx = MEM32(edx + ebx + 0x24);
    PUSH32(esp, edx);
    edx = eax;
    eax = edi;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F45EA: ;
    if (CMP_EQ(MEM32(esi + 0x30), 0xFFFF)) goto loc_003F4604; /* je: equal / zero */

loc_003F45F3: ;
    edx = MEM32(esi + 0x7C);
    PUSH32(esp, 4);
    eax = 0x81B890;
    ecx = edi;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F4604: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003F460B: ;
    edx = MEM32(esi + 0x40);
    eax = edx;
    eax = eax << 7;
    edi = 4;
    MEM32(eax + 0x547330) = edi;
    eax = MEM32(esi + 0x40);
    ecx = eax;
    PUSH32(esp, ebp);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = edx;
    edx = MEM32(0x5499F0);
    ebp = 1;
    ebp = ebp << LO8(ecx);
    eax = eax << 7;
    MEM32(eax + 0x547334) = edi;
    eax = MEM32(esi + 0x40);
    ebx = ebx | ebp;
    edx = edx | ebx;
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(0x5499F0) = edx;
    PUSH32(esp, 0); sub_00537B40(); /* call 0x00537B40 */

loc_003F4658: ;
    edx = MEM32(esi + 0x40);
    ecx = edx;
    ecx = ecx << 7;
    MEM32(ecx + 0x54734C) = 0;
    edi = MEM32(esi + 0x40);
    eax = edi;
    eax = eax << 7;
    ecx = 2;
    MEM32(eax + 0x547340) = ecx;
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0x14) = eax;
    eax = eax << 7;
    MEM32(eax + 0x547344) = ecx;
    ebx = MEM32(esi + 0x40);
    eax = ebx;
    eax = eax << 7;
    MEM32(eax + 0x54733C) = ecx;
    eax = MEM32(esi + 0x40);
    ecx = eax;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    ecx = 1;
    MEM32(esp + 0x10) = ecx;
    ecx = ebx;
    ebx = MEM32(esp + 0x10);
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x14);
    eax = eax << 7;
    MEM32(eax + 0x547358) = 0;
    eax = MEM32(esp + 0x20);
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = edi;
    edi = 1;
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = edx;
    edx = MEM32(eax * 4 + 0x84B840);
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebp = ebp | ebx;
    ebx = MEM32(0x5499F0);
    ebp = ebp | edi;
    ebx = ebx | ebp;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(0x5499F0) = ebx;
    POP32(esp, ebp);
    if (CMP_EQ(edx, ecx)) goto loc_003F4719; /* je: equal / zero */

loc_003F470C: ;
    PUSH32(esp, ecx);
    MEM32(eax * 4 + 0x84B840) = ecx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4719: ;
    esi = MEM32(esi + 0x30);
    if (CMP_EQ(esi, 0xFFFF)) goto loc_003F4604; /* je: equal / zero */

loc_003F4728: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    ecx = esi + 0x60;
    edx = 0x81B890;
    POP32(esp, esi);
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00536B50(); return; /* tail jmp 0x00536B50 */

}

/**
 * sub_003F4770
 * Original: 0x003F4770 - 0x003F4971 (513 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4770: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x750324);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_003F494F; /* je: equal / zero */

loc_003F478B: ;
    ecx = MEM32(0x750304);
    if (TEST_Z(ecx, ecx)) goto loc_003F494F; /* je: equal / zero */

loc_003F4799: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = MEMF(0x750310); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x750314); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x750318); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x75031C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (TEST_Z(edi, edi)) goto loc_003F480D; /* je: equal / zero */

loc_003F47D5: ;
    if (TEST_Z(eax, eax)) goto loc_003F47E5; /* je: equal / zero */

loc_003F47D9: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003F47E5; /* je: equal / zero */

loc_003F47E0: ;
    eax = eax + 0x20;
    goto loc_003F47E9;

loc_003F47E5: ;
    eax = esp + 0x1C;

loc_003F47E9: ;
    edx = MEM32(esi + 0x78);
    ecx = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F47F5: ;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    ecx = 0x75032C;
    edx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F4807: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003F480D: ;
    edx = MEM32(esi + 0x5C);
    ecx = 1;
    eax = edx;
    eax = eax << 7;
    MEM32(eax + 0x547330) = ecx;
    edi = MEM32(esi + 0x5C);
    eax = edi;
    eax = eax << 7;
    MEM32(eax + 0x547334) = ecx;
    eax = MEM32(esi + 0x5C);
    MEM32(esp + 0x18) = eax;
    eax = eax << 7;
    MEM32(eax + 0x547338) = ecx;
    eax = MEM32(esi + 0x5C);
    MEM32(esp + 0x14) = eax;
    eax = eax << 7;
    MEM32(eax + 0x54734C) = 0;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = eax;
    eax = eax << 7;
    ebp = 2;
    MEM32(eax + 0x547340) = ebp;
    eax = MEM32(esi + 0x5C);
    MEM32(esp + 0x10) = eax;
    eax = eax << 7;
    MEM32(eax + 0x547344) = ebp;
    ebx = MEM32(esi + 0x5C);
    eax = ebx;
    eax = eax << 7;
    MEM32(eax + 0x54733C) = ebp;
    eax = MEM32(esi + 0x5C);
    ebp = ecx;
    ecx = eax;
    ebp = ebp << LO8(ecx);
    ecx = 1;
    MEM32(esp + 0xC) = ecx;
    ecx = ebx;
    ebx = MEM32(esp + 0xC);
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    eax = eax << 7;
    MEM32(eax + 0x547358) = 0;
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x34);
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = edi;
    edi = 1;
    ebp = ebp | ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = edx;
    edi = edi << LO8(ecx);
    ebp = ebp | ebx;
    ebp = ebp | edi;
    edi = MEM32(0x5499F0);
    edi = edi | ebp;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x5499F0) = edi;
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_003F491A; /* je: equal / zero */

loc_003F4910: ;
    eax = MEM32(eax + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = eax + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_003F491E; /* jne: not equal / not zero */

loc_003F491A: ;
    edx = esp + 0x1C;

loc_003F491E: ;
    ecx = MEM32(esi + 0x58);
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F4929: ;
    eax = MEM32(esi + 0x5C);
    edx = MEM32(eax * 4 + 0x84B840);
    ecx = 0x75032C;
    if (CMP_EQ(edx, ecx)) goto loc_003F496B; /* je: equal / zero */

loc_003F493C: ;
    PUSH32(esp, ecx);
    MEM32(eax * 4 + 0x84B840) = ecx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4949: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003F494F: ;
    if (TEST_NZ(edi, edi)) goto loc_003F496B; /* jne: not equal / not zero */

loc_003F4953: ;
    ecx = MEM32(0x81B7DC);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x81B7C8;
    eax = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F496B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003F4980
 * Original: 0x003F4980 - 0x003F4A21 (161 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4980: ;
    eax = MEM32(0x84B7D0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) { sub_003F4A21(); return; } /* je: equal / zero */

loc_003F4996: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm0 = MEMF(eax + esi + 0xC); /* movss */
    MEMF(0x753E3C) = xmm0; /* movss */
    if (TEST_Z(ebp, ebp)) goto loc_003F49DF; /* je: equal / zero */

loc_003F49B1: ;
    edx = MEM32(edi + 0x84);
    PUSH32(esp, 1);
    eax = 0x753E30;
    ecx = ebp;
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F49C5: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + esi + 0x24);
    ecx = MEM32(0x84B7D0);
    PUSH32(esp, edx);
    edx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F49DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003F49DF: ;
    ecx = MEM32(edi + 0x34);
    ecx = ecx + 0x60;
    edx = 0x753E30;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F49EF: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_003F4E20(); /* call 0x003F4E20 */

loc_003F49FD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx * 4 + 0x84B840);
    esp = esp + 4;
    if (CMP_EQ(ecx, eax)) goto loc_003F49DC; /* je: equal / zero */

loc_003F4A0F: ;
    MEM32(ebx * 4 + 0x84B840) = eax;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4A1E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F4A40
 * Original: 0x003F4A40 - 0x003F4ADE (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4A40: ;
    eax = MEM32(ebx + 0x90);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0042AFD0(); /* call 0x0042AFD0 */

loc_003F4A55: ;
    esi = MEM32(esp + 0x10);
    if (TEST_Z(esi, esi)) goto loc_003F4ABF; /* je: equal / zero */

loc_003F4A5D: ;
    if (TEST_Z(ebp, ebp)) goto loc_003F4A7C; /* je: equal / zero */

loc_003F4A61: ;
    ecx = MEM32(ebx + 8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = MEM32(eax + ecx + 0x24);
    PUSH32(esp, edx);
    ecx = esi;
    edx = edi;
    eax = ebp;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F4A79: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003F4A7C: ;
    eax = MEM32(ebx + 0x38);
    if (CMP_EQ(eax, MEM32(ebx + 0x34))) goto loc_003F4A91; /* je: equal / zero */

loc_003F4A84: ;
    ecx = eax + 0x60;
    edx = 0x753E30;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F4A91: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0); sub_003F4E20(); /* call 0x003F4E20 */

loc_003F4A9F: ;
    eax = MEM32(edi * 4 + 0x84B840);
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_003F4ADB; /* je: equal / zero */

loc_003F4AAD: ;
    PUSH32(esp, esi);
    eax = edi;
    MEM32(edi * 4 + 0x84B840) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4ABC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003F4ABF: ;
    if (TEST_NZ(ebp, ebp)) goto loc_003F4ADB; /* jne: not equal / not zero */

loc_003F4AC3: ;
    ecx = MEM32(0x81B7DC);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x81B7C8;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4ADB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F4AE0
 * Original: 0x003F4AE0 - 0x003F4B01 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4AE0: ;
    SET_LO8(eax, MEM8(0x750341));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(eax), 0xFF)) { sub_003F4B01(); return; } /* jne: not equal / not zero */

loc_003F4AEF: ;
    edi = MEM32(0x81B864);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x81B850;
    g_seh_ebp = ebp; sub_003F4B29(); return; /* tail jmp 0x003F4B29 */

}

/**
 * sub_003F4BE0
 * Original: 0x003F4BE0 - 0x003F4CD8 (248 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4BE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edi);
    esi = esp + 0x10;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_0042B060(); /* call 0x0042B060 */

loc_003F4C09: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_003F4CB7; /* je: equal / zero */

loc_003F4C1C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x81BE64);
    if (TEST_Z(eax, eax)) goto loc_003F4C67; /* je: equal / zero */

loc_003F4C25: ;
    if (CMP_B(eax, 0x4039CD65)) goto loc_003F4C4D; /* jb: below (unsigned <) */

loc_003F4C2C: ;
    if (CMP_EQ(MEM32(ebx + 0x94), 0xFFFF)) goto loc_003F4C4D; /* je: equal / zero */

loc_003F4C38: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x98);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053B510(); /* call 0x0053B510 */

loc_003F4C4D: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(edx + edi + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esi;
    edx = ebp;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F4C62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F4C67: ;
    if (CMP_B(eax, 0x4039CD65)) goto loc_003F4C87; /* jb: below (unsigned <) */

loc_003F4C6E: ;
    eax = MEM32(ebx + 0x94);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003F4C87; /* je: equal / zero */

loc_003F4C7B: ;
    edx = MEM32(esp + 0x18);
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F4C87: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_003F4E20(); /* call 0x003F4E20 */

loc_003F4C95: ;
    eax = MEM32(ebp * 4 + 0x84B840);
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_003F4CD3; /* je: equal / zero */

loc_003F4CA3: ;
    PUSH32(esp, esi);
    eax = ebp;
    MEM32(ebp * 4 + 0x84B840) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4CB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F4CB7: ;
    if (TEST_NZ(eax, eax)) goto loc_003F4CD3; /* jne: not equal / not zero */

loc_003F4CBB: ;
    edx = MEM32(0x81B7DC);
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x81B7C8;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4CD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F4CE0
 * Original: 0x003F4CE0 - 0x003F4E11 (305 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4CE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003F4E0A; /* jbe: below or equal (unsigned <=) */

loc_003F4CF9: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);

loc_003F4D00: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax + ecx);
    eax = eax + ecx;
    if (CMP_A(edx, 0xFFFF)) goto loc_003F4DE1; /* ja: above (unsigned >) */

loc_003F4D14: ;
    SET_LO8(ecx, MEM8(eax + 7));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F4DE1; /* jne: not equal / not zero */

loc_003F4D1F: ;
    ecx = ZX8(MEM8(esi + 0x3C));
    if (CMP_NE(ecx, ebx)) goto loc_003F4D45; /* jne: not equal / not zero */

loc_003F4D27: ;
    SET_LO8(ecx, MEM8(esi + 0x19));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F4D45; /* je: equal / zero */

loc_003F4D2E: ;
    edx = MEM32(eax + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003F4AE0(); /* call 0x003F4AE0 */

loc_003F4D3D: ;
    esp = esp + 0xC;
    goto loc_003F4DF2;

loc_003F4D45: ;
    ecx = MEM32(esi + 0x3C);
    ecx = ecx >> 8;
    eax = ZX8(LO8(ecx));
    if (CMP_NE(eax, ebx)) goto loc_003F4D71; /* jne: not equal / not zero */

loc_003F4D52: ;
    if (CMP_NE(MEM8(0x750341), 0xFF)) goto loc_003F4D71; /* jne: not equal / not zero */

loc_003F4D5B: ;
    edi = MEM32(0x81B864);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x81B850;
    MEM32(esp + 0x10) = edi;
    goto loc_003F4D99;

loc_003F4D71: ;
    if (TEST_Z(ebp, ebp)) goto loc_003F4D7F; /* je: equal / zero */

loc_003F4D75: ;
    ecx = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(ecx + ebx * 4));
    PUSH32(esp, eax);
    goto loc_003F4D81;

loc_003F4D7F: ;
    PUSH32(esp, 0);

loc_003F4D81: ;
    eax = MEM32(0x84B854);
    eax = MEM32(eax + edx * 4);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_003FA600(); /* call 0x003FA600 */

loc_003F4D92: ;
    edi = MEM32(esp + 0x14);
    esp = esp + 4;

loc_003F4D99: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_003F4DB8; /* je: equal / zero */

loc_003F4DA1: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + ecx + 0x24);
    PUSH32(esp, ecx);
    ecx = edi;
    edx = ebx;
    PUSH32(esp, 0); sub_0053B450(); /* call 0x0053B450 */

loc_003F4DB6: ;
    goto loc_003F4DF2;

loc_003F4DB8: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_003F4E20(); /* call 0x003F4E20 */

loc_003F4DC2: ;
    eax = MEM32(ebx * 4 + 0x84B840);
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_003F4DF2; /* je: equal / zero */

loc_003F4DD0: ;
    PUSH32(esp, edi);
    eax = ebx;
    MEM32(ebx * 4 + 0x84B840) = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003F4DDF: ;
    goto loc_003F4DF2;

loc_003F4DE1: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ecx = ebp;
    edx = esi;
    PUSH32(esp, 0); sub_003F4F50(); /* call 0x003F4F50 */

loc_003F4DEF: ;
    esp = esp + 4;

loc_003F4DF2: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0xC);
    ebx++;
    eax = eax + 0x2C;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(ebx, ecx)) goto loc_003F4D00; /* jb: below (unsigned <) */

loc_003F4E09: ;
    POP32(esp, edi);

loc_003F4E0A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003F4E20
 * Original: 0x003F4E20 - 0x003F4F19 (249 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4E20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x1B));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003F4E45; /* je: equal / zero */

loc_003F4E2F: ;
    if (TEST_Z(LO8(eax), 6)) goto loc_003F4E45; /* je: equal / zero */

loc_003F4E33: ;
    edx = MEM32(edi + 8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    if (CMP_NE(MEM32(eax + edx), 0xFFFFFF02u)) goto loc_003F4E45; /* jne: not equal / not zero */

loc_003F4E44: ;
    ecx++;

loc_003F4E45: ;
    esi = MEM32(edi + 8);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    esi = ZX8(MEM8(edx + esi + 4));
    eax = ecx;
    eax = eax << 7;
    MEM32(eax + 0x547330) = esi;
    esi = MEM32(edi + 8);
    esi = ZX8(MEM8(edx + esi + 5));
    MEM32(eax + 0x547334) = esi;
    esi = MEM32(edi + 8);
    esi = ZX8(MEM8(edx + esi + 6));
    MEM32(eax + 0x547338) = esi;
    MEM32(eax + 0x54734C) = ebx;
    esi = MEM32(edi + 8);
    esi = ZX8(MEM8(edx + esi + 0x20));
    MEM32(eax + 0x547340) = esi;
    esi = MEM32(edi + 8);
    esi = ZX8(MEM8(edx + esi + 0x21));
    ebp = MEM32(0x5499F0);
    MEM32(eax + 0x547344) = esi;
    esi = MEM32(edi + 8);
    esi = ZX8(MEM8(edx + esi + 0x20));
    MEM32(eax + 0x54733C) = esi;
    esi = MEM32(edi + 8);
    esi = MEM32(edx + esi + 0x1C);
    MEM32(eax + 0x547348) = esi;
    esi = 1;
    esi = esi << LO8(ecx);
    ebp = ebp | esi;
    MEM32(0x5499F0) = ebp;
    ebp = MEM32(edi + 8);
    ebp = ZX8(MEM8(edx + ebp + 0x22));
    MEM32(eax + 0x547350) = ebp;
    ebp = MEM32(edi + 8);
    if (CMP_EQ(MEM16(edx + ebp + 0xA), LO16(ebx))) { sub_003F4F19(); return; } /* je: equal / zero */

loc_003F4EE3: ;
    (void)0; /* test MEM8(edi + 0x1B), 6 - flags set for next jcc */
    ecx = MEM32(0x5499F0);
    if (TEST_NZ(MEM8(edi + 0x1B), 6)) goto loc_003F4F06; /* jne: not equal / not zero */

loc_003F4EEF: ;
    POP32(esp, edi);
    ecx = ecx | esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5499F0) = ecx;
    MEM32(eax + 0x547358) = 0xF0000000u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003F4F06: ;
    POP32(esp, edi);
    ecx = ecx | esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x547358) = ebx;
    MEM32(0x5499F0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F4F50
 * Original: 0x003F4F50 - 0x003F4FC6 (118 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F4F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F4F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    edi = edi + ebx;
    ebx = MEM32(edi);
    ebx = ebx + 0x100;
    if (CMP_A(ebx, 6)) { sub_003F4FC6(); return; } /* ja: above (unsigned >) */

loc_003F4F6E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx * 4 + 0x3F4FF4)); return; /* indirect tail jmp */

    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0); sub_003F45B0(); /* call 0x003F45B0 */

loc_003F4F7D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5030
 * Original: 0x003F5030 - 0x003F5092 (98 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5030(void)
{

loc_003F5030: ;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F503F: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F5058: ;
    edx = 1;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F5071: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AF4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F5087: ;
    MEM32(0x549AE8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F50A0
 * Original: 0x003F50A0 - 0x003F5142 (162 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F50A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F50A0: ;
    PUSH32(esp, ebx);
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F50B0: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F50C9: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F50E2: ;
    SET_LO8(ebx, MEM8(0x84B7CD));
    (void)0; /* cmp LO8(ebx), 0xFF - flags set for next jcc */
    MEM32(0x549AF4) = 0x303;
    ecx = 0x40300;
    if (CMP_AE(LO8(ebx), 0xFF)) { sub_003F5142(); return; } /* jae: above or equal (unsigned >=) */

loc_003F50FC: ;
    PUSH32(esp, esi);
    edx = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F5107: ;
    esi = ZX8(LO8(ebx));
    edx = esi;
    ecx = 0x40340;
    MEM32(0x549AE8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F5120: ;
    edx = 0x204;
    ecx = 0x4033C;
    MEM32(0x549AEC) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F5135: ;
    POP32(esp, esi);
    MEM32(0x549AE0) = 0x204;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5160
 * Original: 0x003F5160 - 0x003F5192 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F5160: ;
    eax = MEM32(0x824D84);
    if (CMP_A(eax, 3)) { sub_003F5192(); return; } /* ja: above (unsigned >) */

loc_003F516A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3F5194); /* switch: 4 entries, 3 targets */
    if (_jt == 0x003F5171u) goto loc_003F5171;
    if (_jt == 0x003F5188u) goto loc_003F5188;
    if (_jt == 0x003F518Du) goto loc_003F518D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003F5171: ;
    SET_LO8(eax, MEM8(0x84B7CC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003F5188; /* jne: not equal / not zero */

loc_003F517A: ;
    eax = MEM32(0x84B850);
    if (TEST_NZ(eax, eax)) goto loc_003F5188; /* jne: not equal / not zero */

loc_003F5183: ;
    g_seh_ebp = ebp; sub_003F5010(); return; /* tail jmp 0x003F5010 */

loc_003F5188: ;
    g_seh_ebp = ebp; sub_003F50A0(); return; /* tail jmp 0x003F50A0 */

loc_003F518D: ;
    g_seh_ebp = ebp; sub_003F5030(); return; /* tail jmp 0x003F5030 */

}

/**
 * sub_003F51B0
 * Original: 0x003F51B0 - 0x003F51FA (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F51B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F51B0: ;
    if (CMP_NE(MEM8(eax + 0x14), 2)) goto loc_003F51F9; /* jne: not equal / not zero */

loc_003F51B6: ;
    ecx = MEM32(0x7502EC);
    if (TEST_Z(ecx, ecx)) goto loc_003F51F9; /* je: equal / zero */

loc_003F51C0: ;
    SET_LO8(ecx, MEM8(eax + 0x17));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F51F9; /* jne: not equal / not zero */

loc_003F51C7: ;
    edx = 0x13030C00;
    ecx = 0x40288;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F51D6: ;
    edx = 0x1C00;
    ecx = 0x4028C;
    MEM32(0x549A18) = 0x13030C00;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F51EF: ;
    MEM32(0x549A1C) = 0x1C00;

loc_003F51F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F5200
 * Original: 0x003F5200 - 0x003F52C7 (199 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5200(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F5200: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    MEM32(0x824D84) = eax;
    PUSH32(esp, 0); sub_003F5160(); /* call 0x003F5160 */

loc_003F520D: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    eax = MEM32(0x5499F0);
    MEM32(0x549B94) = 1;
    if (CMP_EQ(LO8(eax), 2)) goto loc_003F522B; /* je: equal / zero */

loc_003F5225: ;
    MEM32(0x549B94) = ebx;

loc_003F522B: ;
    eax = eax | 0x3000;
    MEM32(0x5499F0) = eax;
    (void)0; /* cmp MEM8(0x84B838), LO8(ebx) - flags set for next jcc */
    eax = MEM32(0x84B83C);
    if (CMP_EQ(MEM8(0x84B838), LO8(ebx))) goto loc_003F5276; /* je: equal / zero */

loc_003F5242: ;
    edx = 0x753E40;
    if (CMP_EQ(eax, edx)) goto loc_003F52B1; /* je: equal / zero */

loc_003F524B: ;
    ecx = MEM32(0x5499E8);
    eax = ecx + 0x924;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = ebx;
    MEM32(ecx + 0x92C) = edx;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003F526E: ;
    MEM32(0x84B83C) = ebx;
    goto loc_003F52B1;

loc_003F5276: ;
    edx = MEM32(esi + 4);
    if (CMP_EQ(eax, edx)) goto loc_003F52B1; /* je: equal / zero */

loc_003F527D: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = MEM32(0x5499E8);
    if (CMP_EQ(edx, ebx)) goto loc_003F52A1; /* je: equal / zero */

loc_003F5287: ;
    eax = ecx + 0x924;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = ebx;
    MEM32(ecx + 0x92C) = edx;
    goto loc_003F52A3;

loc_003F52A1: ;
    eax = 0; /* xor self */

loc_003F52A3: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003F52A8: ;
    ecx = MEM32(esi + 4);
    MEM32(0x84B83C) = ecx;

loc_003F52B1: ;
    eax = esi;
    PUSH32(esp, 0); sub_003F51B0(); /* call 0x003F51B0 */

loc_003F52B8: ;
    eax = MEM32(0x84B830);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_003F52C6; /* je: equal / zero */

loc_003F52C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003F52C5: ;
    POP32(esp, ecx);

loc_003F52C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F52D0
 * Original: 0x003F52D0 - 0x003F536E (158 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F52D0(void)
{
    uint32_t ebp;

loc_003F52D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    eax = eax + 0x30;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1B8);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0x24));
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = ZX16(MEM16(edx + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F5D50(); /* call 0x003F5D50 */

loc_003F52FE: ;
    esp = esp + 0xC;
    eax = MEM32(ebp + -4);
    eax = eax + 0x2C;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00522F3A(); /* call 0x00522F3A */

loc_003F530E: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1B8);
    MEM32(ebp + -12) = edx;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x2C;
    edx = MEM32(ebp + -12);
    PUSH32(esp, 0); sub_0053B9D0(); /* call 0x0053B9D0 */

loc_003F5328: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x38) = 0;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x3C) = 0;
    edx = MEM32(ebp + -4);
    edx = edx + 0x2C;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x158) = edx;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x15C) = 0x18;
    edx = MEM32(ebp + -4);
    MEM32(edx + 0x160) = 0;
    MEM32(ebp + -8) = 0;
    g_seh_ebp = ebp; sub_003F5377(); return; /* tail jmp 0x003F5377 */

}

/**
 * sub_003F5450
 * Original: 0x003F5450 - 0x003F54DF (143 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5450(void)
{
    uint32_t ebp;

loc_003F5450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x824D88;
    PUSH32(esp, 0); sub_003E1800(); /* call 0x003E1800 */

loc_003F545D: ;
    eax = 0x824D90;
    PUSH32(esp, 0); sub_003E1800(); /* call 0x003E1800 */

loc_003F5467: ;
    MEM32(0x824D98) = 0;
    MEM32(0x824D9C) = 0x28;
    MEM32(0x824DA0) = 0x88;
    MEM32(0x824DA4) = 0x10C;
    MEM16(0x824DAC) = 0x20;
    MEM16(0x824DAA) = 0x20;
    MEM32(0x824F54) = 0x3F7F80;
    MEM32(0x824F58) = 0x3F7FE0;
    MEM32(0x824F5C) = 0x3F82F0;
    MEM32(0x824F60) = 0x3F8320;
    PUSH32(esp, 0x824D88);
    PUSH32(esp, 0); sub_003F52D0(); /* call 0x003F52D0 */

loc_003F54D3: ;
    esp = esp + 4;
    MEM8(0x824DB4) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F54E0
 * Original: 0x003F54E0 - 0x003F54E5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F54E0(void)
{
    uint32_t ebp;

loc_003F54E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F54F0
 * Original: 0x003F54F0 - 0x003F556B (123 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F54F0(void)
{
    uint32_t ebp;

loc_003F54F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0x22));
    edx = MEM32(ebp + 8);
    eax = ZX16(MEM16(edx + 0x22));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x1C4), _icall_esp); /* indirect call */
    }

loc_003F5517: ;
    esp = esp + 8;
    edx = MEM32(ebp + 0xC);
    MEM32(edx + 0xC8) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = MEM32(ebp + 8);
    ecx = ZX16(MEM16(ecx + 0x22));
    edx = MEM32(ebp + 8);
    eax = ZX16(MEM16(edx + 0x22));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00522F13(); /* call 0x00522F13 */

loc_003F554A: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0xC8);
    MEM32(ebp + -4) = edx;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + 0xCC;
    edx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_0053B9D0(); /* call 0x0053B9D0 */

loc_003F5567: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5570
 * Original: 0x003F5570 - 0x003F562A (186 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5570(void)
{
    uint32_t ebp;

loc_003F5570: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F44), _icall_esp); /* indirect call */
    }

loc_003F557E: ;
    esp = esp + 4;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    edx = MEM32(0x824DA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F44), _icall_esp); /* indirect call */
    }

loc_003F5593: ;
    esp = esp + 4;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(edx + 0xC0) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(0x824DA4);
    MEM32(ecx + 0xC4) = edx;
    eax = MEM32(0x824DA0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F44), _icall_esp); /* indirect call */
    }

loc_003F55BE: ;
    esp = esp + 4;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(edx + 0xB8) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(0x824DA0);
    MEM32(ecx + 0xBC) = edx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x824D88);
    PUSH32(esp, 0); sub_003F54F0(); /* call 0x003F54F0 */

loc_003F55ED: ;
    esp = esp + 8;
    edx = MEM32(0x824D98);
    edx = edx + 1;
    MEM32(0x824D98) = edx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(0x824DAA));
    MEM16(ecx + 0xB0) = LO16(edx);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F6CB0(); /* call 0x003F6CB0 */

loc_003F5625: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5630
 * Original: 0x003F5630 - 0x003F564F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F5630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_003E1860(); /* call 0x003E1860 */

loc_003F563B: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xCC;
    PUSH32(esp, 0); sub_0053B940(); /* call 0x0053B940 */

loc_003F5649: ;
    if (TEST_Z(eax, eax)) { sub_003F564F(); return; } /* je: equal / zero */

loc_003F564D: ;
    goto loc_003F563B;

}

/**
 * sub_003F56B0
 * Original: 0x003F56B0 - 0x003F56CA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F56B0(void)
{
    uint32_t ebp;

loc_003F56B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_003E1860(); /* call 0x003E1860 */

loc_003F56BB: ;
    edx = MEM32(ebp + 8);
    eax = 0x824D90;
    PUSH32(esp, 0); sub_003E1810(); /* call 0x003E1810 */

loc_003F56C8: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F56D0
 * Original: 0x003F56D0 - 0x003F5762 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F56D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F56D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    edx = ebp + -8;
    eax = 0x824D90;
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F56EC: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) { sub_003F5762(); return; } /* je: equal / zero */

loc_003F56F2: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = ecx;
    edx = MEM32(ebp + -4);
    eax = ZX16(MEM16(edx + 0xB0));
    ecx = ZX16(MEM16(0x824DAA));
    if (CMP_NE(eax, ecx)) goto loc_003F5755; /* jne: not equal / not zero */

loc_003F570D: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(edx + 0xBC);
    if (CMP_NE(eax, MEM32(0x824DA0))) goto loc_003F5755; /* jne: not equal / not zero */

loc_003F571E: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ecx + 0xC4);
    if (CMP_NE(edx, MEM32(0x824DA4))) goto loc_003F5755; /* jne: not equal / not zero */

loc_003F572F: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_003E1860(); /* call 0x003E1860 */

loc_003F5737: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F6CB0(); /* call 0x003F6CB0 */

loc_003F5748: ;
    esp = esp + 0xC;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_003F5762(); return; /* tail jmp 0x003F5762 */

loc_003F5755: ;
    edx = ebp + -8;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5760: ;
    goto loc_003F56EC;

}

/**
 * sub_003F57D0
 * Original: 0x003F57D0 - 0x003F583B (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F57D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003F57D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    edx = ebp + -4;
    eax = 0x824D88;
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F57E3: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) { sub_003F583B(); return; } /* je: equal / zero */

loc_003F57E9: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ecx + 0xB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0xC0);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F54), _icall_esp); /* indirect call */
    }

loc_003F5811: ;
    esp = esp + 0x10;
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003F582E; /* jnp: not parity */

loc_003F5824: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -8);
    MEM32(ecx) = edx;
    g_seh_ebp = ebp; sub_003F584F(); return; /* tail jmp 0x003F584F */

loc_003F582E: ;
    edx = ebp + -4;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5839: ;
    goto loc_003F57E3;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003F5860
 * Original: 0x003F5860 - 0x003F58E5 (133 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5860(void)
{
    uint32_t ebp;

loc_003F5860: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x87AB28);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F58), _icall_esp); /* indirect call */
    }

loc_003F5888: ;
    esp = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x87AB28);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F60), _icall_esp); /* indirect call */
    }

loc_003F5896: ;
    esp = esp + 4;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + edx * 4);
    MEM32(0x824DB8) = ecx;
    edx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + edx * 4);
    MEM32(0x824DBC) = ecx;
    edx = MEM32(ebp + 0x10);
    MEM32(0x824DC0) = edx;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x87AB28);
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F57D0(); /* call 0x003F57D0 */

loc_003F58DE: ;
    esp = esp + 0xC;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F58F0
 * Original: 0x003F58F0 - 0x003F5A1F (303 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F58F0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F58F0: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp - 8;
    esp = esp & 0xFFFFFFF0u;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    esp = esp - 0x1FC;
    PUSH32(esp, edi);
    MEM32(ebp + -272) = 0;
    xmm0 = MEMF(ebx + 0xC); /* movss */
    MEMF(ebp + -268) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x14));
    MEM8(ebp + -262) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x2C));
    MEM8(ebp + -263) = LO8(ecx);
    ecx = 0x22;
    eax = 0; /* xor self */
    edi = ebp + -408;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -480;
    PUSH32(esp, 0); sub_003E2550(); /* call 0x003E2550 */

loc_003F5950: ;
    edx = ZX8(MEM8(ebx + 0x24));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    eax = ZX8(MEM8(ebx + 0x20));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    ecx = ZX8(MEM8(ebx + 0x1C));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    edx = ZX8(MEM8(ebx + 0x18));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    eax = ebp + -496;
    PUSH32(esp, 0); sub_003E5840(); /* call 0x003E5840 */

loc_003F59AD: ;
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88);
    eax = ebp + -408;
    PUSH32(esp, eax);
    ecx = ebp + -496;
    PUSH32(esp, ecx);
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, edx);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    ecx = ebp + -480;
    PUSH32(esp, ecx);
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F58), _icall_esp); /* indirect call */
    }

loc_003F59DC: ;
    esp = esp + 0x1C;
    MEM32(0x824DB8) = 0;
    MEM32(0x824DBC) = 0;
    MEM32(0x824DC0) = 0;
    eax = MEM32(ebx + 0x30);
    PUSH32(esp, eax);
    ecx = ebp + -408;
    PUSH32(esp, ecx);
    edx = ebp + -272;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F57D0(); /* call 0x003F57D0 */

loc_003F5A14: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5A20
 * Original: 0x003F5A20 - 0x003F5A58 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F5A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    edx = ebp + -4;
    eax = 0x824D90;
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5A33: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) { sub_003F5A58(); return; } /* je: equal / zero */

loc_003F5A39: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    edx = ebp + -4;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5A4A: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F5630(); /* call 0x003F5630 */

loc_003F5A53: ;
    esp = esp + 4;
    goto loc_003F5A33;

}

/**
 * sub_003F5AB0
 * Original: 0x003F5AB0 - 0x003F5AE8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F5AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    edx = ebp + -4;
    eax = 0x824D90;
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5AC3: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) { sub_003F5AE8(); return; } /* je: equal / zero */

loc_003F5AC9: ;
    edx = ebp + -12;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5AD4: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F5630(); /* call 0x003F5630 */

loc_003F5ADD: ;
    esp = esp + 4;
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -4) = ecx;
    goto loc_003F5AC3;

}

/**
 * sub_003F5BD0
 * Original: 0x003F5BD0 - 0x003F5BE2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5BD0(void)
{
    uint32_t ebp;

loc_003F5BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = 0x824D88;
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F5BE0: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5BF0
 * Original: 0x003F5BF0 - 0x003F5BFD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5BF0(void)
{
    uint32_t ebp;

loc_003F5BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(0x824F40) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5C00
 * Original: 0x003F5C00 - 0x003F5C0D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5C00(void)
{
    uint32_t ebp;

loc_003F5C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(0x824F44) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5C10
 * Original: 0x003F5C10 - 0x003F5C1D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5C10(void)
{
    uint32_t ebp;

loc_003F5C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(0x824F4C) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5C20
 * Original: 0x003F5C20 - 0x003F5C2D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5C20(void)
{
    uint32_t ebp;

loc_003F5C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(0x824F48) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5C30
 * Original: 0x003F5C30 - 0x003F5C3D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5C30(void)
{
    uint32_t ebp;

loc_003F5C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(0x824F50) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5C40
 * Original: 0x003F5C40 - 0x003F5C4E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5C40(void)
{
    uint32_t ebp;

loc_003F5C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xB4);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F5C50
 * Original: 0x003F5C50 - 0x003F5D40 (240 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003F5C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003F5D40(); return; } /* jbe: below or equal (unsigned <=) */

loc_003F5C87: ;
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 / MEMF(0x648D14); /* divss */
    edx = MEM32(ebp + 0xC);
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 / MEMF(0x648D14); /* divss */
    ecx = MEM32(ebp + 0xC);
    MEMF(ecx + 4) = xmm0; /* movss */
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * MEMF(edx + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 8) = xmm0; /* movss */
    ecx = MEM32(ebp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 8))) goto loc_003F5D15; /* jbe: below or equal (unsigned <=) */

loc_003F5CF0: ;
    edx = MEM32(ebp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(edx + 8); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3F70(); /* call 0x003E3F70 */

loc_003F5D0B: ;
    esp = esp + 4;
    MEMF(ebp + -4) = xmm0; /* movss */
    goto loc_003F5D22;

loc_003F5D15: ;
    xmm0 = MEMF(0x648CF8); /* movss */
    MEMF(ebp + -4) = xmm0; /* movss */

loc_003F5D22: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = MEMF(ebp + -4); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_003E1F50(); /* call 0x003E1F50 */

loc_003F5D3B: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_003F5D48(); return; /* tail jmp 0x003F5D48 */

}

/**
 * sub_003F5D50
 * Original: 0x003F5D50 - 0x003F5DA4 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F5D50(void)
{
    uint32_t ebp;
    float xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F5D50: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp - 8;
    esp = esp & 0xFFFFFFF0u;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    esp = esp - 0xA0;
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    xmm4 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    eax = ebp + -64;
    PUSH32(esp, 0); sub_003E2AE0(); /* call 0x003E2AE0 */

loc_003F5D98: ;
    esp = esp + 0x10;
    MEM32(ebp + -68) = 0;
    g_seh_ebp = ebp; sub_003F5DAD(); return; /* tail jmp 0x003F5DAD */

}

/**
 * sub_003F6000
 * Original: 0x003F6000 - 0x003F601B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F6000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (CMP_EQ(MEM32(ebp + 8), 0)) { sub_003F601B(); return; } /* je: equal / zero */

loc_003F600C: ;
    eax = MEM32(ebp + 8);
    ecx = eax + eax + -2;
    ecx = ecx | 1;
    MEM32(ebp + -16) = ecx;
    g_seh_ebp = ebp; sub_003F6022(); return; /* tail jmp 0x003F6022 */

}

/**
 * sub_003F6070
 * Original: 0x003F6070 - 0x003F60B2 (66 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F6070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x5499E8);
    MEM32(ebp + -4) = eax;
    ecx = 0x93;
    if (CMP_GE(ecx, 0x5C)) { sub_003F60B2(); return; } /* jge: greater or equal (signed >=) */

loc_003F6086: ;
    eax = 0x93;
    eax = eax << 2;
    edx = 0; /* xor self */
    ecx = MEM32(eax + 0x5B1108);
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F609B: ;
    ecx = 0x93;
    ecx = ecx << 2;
    MEM32(ecx + 0x5499F8) = 0;
    g_seh_ebp = ebp; sub_003F63C1(); return; /* tail jmp 0x003F63C1 */

}

/**
 * sub_003F63D0
 * Original: 0x003F63D0 - 0x003F63F9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F63D0(void)
{
    uint32_t ebp;

loc_003F63D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F6070(); /* call 0x003F6070 */

loc_003F63D9: ;
    eax = MEM32(0x5499E8);
    MEM32(ebp + -4) = eax;
    eax = 0x824F10;
    edx = 1;
    ecx = 0x824E10;
    PUSH32(esp, 0); sub_00536D90(); /* call 0x00536D90 */

loc_003F63F5: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F6400
 * Original: 0x003F6400 - 0x003F640F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6400(void)
{
    uint32_t ebp;

loc_003F6400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -4) = 0;
    g_seh_ebp = ebp; sub_003F6418(); return; /* tail jmp 0x003F6418 */

}

/**
 * sub_003F6480
 * Original: 0x003F6480 - 0x003F64C6 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F6480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = MEM32(0x5499E8);
    MEM32(ebp + -4) = eax;
    ecx = 0x5C;
    if (CMP_GE(ecx, 0x5C)) { sub_003F64C6(); return; } /* jge: greater or equal (signed >=) */

loc_003F649A: ;
    eax = 0x5C;
    eax = eax << 2;
    edx = 0; /* xor self */
    ecx = MEM32(eax + 0x5B1108);
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F64AF: ;
    ecx = 0x5C;
    ecx = ecx << 2;
    MEM32(ecx + 0x5499F8) = 0;
    g_seh_ebp = ebp; sub_003F67D5(); return; /* tail jmp 0x003F67D5 */

}

/**
 * sub_003F6B70
 * Original: 0x003F6B70 - 0x003F6C22 (178 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F6B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    if (CMP_NE(MEM32(0x824DB8), 0)) { sub_003F6C22(); return; } /* jne: not equal / not zero */

loc_003F6B83: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = ecx;
    edx = MEM32(ebp + -8);
    eax = MEM32(edx + 4);
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_003F6BAD; /* je: equal / zero */

loc_003F6B9E: ;
    ecx = MEM32(ebp + -20);
    edx = ecx + ecx + -2;
    edx = edx | 1;
    MEM32(ebp + -52) = edx;
    goto loc_003F6BB4;

loc_003F6BAD: ;
    MEM32(ebp + -52) = 0;

loc_003F6BB4: ;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -4);
    edx = ZX8(MEM8(ecx + 9));
    PUSH32(esp, edx);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F6000(); /* call 0x003F6000 */

loc_003F6BCE: ;
    esp = esp + 8;
    edx = MEM32(ebp + -16);
    eax = MEM32(edx * 4 + 0x824F1C);
    MEM32(ebp + -24) = eax;
    ecx = MEM32(0x5499E8);
    MEM32(ebp + -28) = ecx;
    ecx = ebp + -12;
    eax = 0x87A1F0;
    edx = MEM32(ebp + -24);
    PUSH32(esp, 0); sub_00536CE0(); /* call 0x00536CE0 */

loc_003F6BF7: ;
    edx = MEM32(0x5499E8);
    MEM32(ebp + -32) = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x87A1F0);
    PUSH32(esp, 0); sub_00536120(); /* call 0x00536120 */

loc_003F6C0C: ;
    eax = MEM32(0x5499E8);
    MEM32(ebp + -36) = eax;
    eax = 0; /* xor self */
    ecx = 0x824E10;
    PUSH32(esp, 0); sub_005361B0(); /* call 0x005361B0 */

loc_003F6C20: ;
    g_seh_ebp = ebp; sub_003F6C56(); return; /* tail jmp 0x003F6C56 */

}

/**
 * sub_003F6C60
 * Original: 0x003F6C60 - 0x003F6CAF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6C60(void)
{
    uint32_t ebp;

loc_003F6C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC4);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 0xC0);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xBC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 0xB8);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F6CB0
 * Original: 0x003F6CB0 - 0x003F6E04 (340 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F6CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003F6CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F6C60(); /* call 0x003F6C60 */

loc_003F6CC7: ;
    esp = esp + 0xC;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xE0;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0);
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xCC;
    PUSH32(esp, 0); sub_0053B680(); /* call 0x0053B680 */

loc_003F6CE4: ;
    ecx = MEM32(ebp + -28);
    MEM32(ecx) = eax;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0xB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0xC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x824F5C), _icall_esp); /* indirect call */
    }

loc_003F6D03: ;
    esp = esp + 8;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -20) = 0;
    eax = MEM32(ebp + 0x10);
    ecx = ZX16(MEM16(eax + 0xB0));
    MEM32(ebp + -16) = ecx;
    edx = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edx + 0xB0));
    MEM32(ebp + -12) = eax;
    xmm0 = MEMF(0x648CF8); /* movss */
    MEMF(ebp + -8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp + -4) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x824DF0), 0)) goto loc_003F6D89; /* jne: not equal / not zero */

loc_003F6D51: ;
    ecx = MEM32(0x5499E8);
    MEM32(ebp + -32) = ecx;
    PUSH32(esp, 0); sub_00539580(); /* call 0x00539580 */

loc_003F6D5F: ;
    MEM32(0x824DF0) = eax;
    edx = MEM32(0x5499E8);
    MEM32(ebp + -36) = edx;
    PUSH32(esp, 0); sub_005395C0(); /* call 0x005395C0 */

loc_003F6D72: ;
    MEM32(0x824DF4) = eax;
    eax = MEM32(0x5499E8);
    MEM32(ebp + -40) = eax;
    eax = 0x824DF8;
    PUSH32(esp, 0); sub_00539930(); /* call 0x00539930 */

loc_003F6D89: ;
    ecx = MEM32(0x824DF4);
    MEM32(ebp + -44) = ecx;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0xE0);
    MEM32(ebp + -48) = eax;
    ecx = MEM32(0x5499E8);
    MEM32(ebp + -52) = ecx;
    edx = MEM32(ebp + -44);
    PUSH32(esp, edx);
    eax = MEM32(ebp + -48);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_003F6DB4: ;
    ecx = MEM32(0x5499E8);
    MEM32(ebp + -56) = ecx;
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_003F6DC6: ;
    eax = MEM32(0x5499E8);
    MEM32(ebp + -60) = eax;
    ecx = 0x40;
    if (CMP_GE(ecx, 0x5C)) { sub_003F6E04(); return; } /* jge: greater or equal (signed >=) */

loc_003F6DD8: ;
    eax = 0x40;
    eax = eax << 2;
    edx = 0; /* xor self */
    ecx = MEM32(eax + 0x5B1108);
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003F6DED: ;
    ecx = 0x40;
    ecx = ecx << 2;
    MEM32(ecx + 0x5499F8) = 0;
    g_seh_ebp = ebp; sub_003F7113(); return; /* tail jmp 0x003F7113 */

}

/**
 * sub_003F7840
 * Original: 0x003F7840 - 0x003F7852 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7840(void)
{
    uint32_t ebp;

loc_003F7840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0xC600;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7860
 * Original: 0x003F7860 - 0x003F78B4 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F7860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    edx = ebp + -4;
    eax = 0x824D88;
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F7873: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) { sub_003F78B4(); return; } /* je: equal / zero */

loc_003F7879: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ecx + 0xB4);
    if (CMP_NE(edx, MEM32(ebp + 8))) goto loc_003F78A7; /* jne: not equal / not zero */

loc_003F788D: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x18) = 1;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 0xCC;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    g_seh_ebp = ebp; sub_003F78E8(); return; /* tail jmp 0x003F78E8 */

loc_003F78A7: ;
    edx = ebp + -4;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_003E1880(); /* call 0x003E1880 */

loc_003F78B2: ;
    goto loc_003F7873;

}

/**
 * sub_003F78F0
 * Original: 0x003F78F0 - 0x003F7957 (103 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F78F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003F78F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    if (CMP_EQ(MEM32(0x824DF0), 0)) goto loc_003F7953; /* je: equal / zero */

loc_003F78FF: ;
    eax = MEM32(0x824DF4);
    PUSH32(esp, eax);
    ecx = MEM32(0x824DF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_003F7911: ;
    PUSH32(esp, 0x824DF8);
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_003F791B: ;
    edx = MEM32(0x824DF0);
    MEM32(ebp + -4) = edx;
    eax = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003F792D: ;
    ecx = MEM32(0x824DF4);
    MEM32(ebp + -8) = ecx;
    edx = MEM32(ebp + -8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003F793F: ;
    MEM32(0x824DF0) = 0;
    MEM32(0x824DF4) = 0;

loc_003F7953: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7960
 * Original: 0x003F7960 - 0x003F7A20 (192 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003F7960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    if (TEST_Z(esi, esi)) { sub_003F7A20(); return; } /* je: equal / zero */

loc_003F7995: ;
    eax = esp + 0x1C;
    MEM32(esp + 0xC) = eax;
    eax = 0x7547E0;
    xmm2 = MEMF(eax); /* movss */
    ecx = 0x824FF0;
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    eax = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003F79EC: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    g_seh_ebp = ebp; sub_003F7A4D(); return; /* tail jmp 0x003F7A4D */

}

/**
 * sub_003F7D90
 * Original: 0x003F7D90 - 0x003F7EB7 (295 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7D90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003F7D90: ;
    esp = esp - 0xC;
    eax = esp;
    PUSH32(esp, 0); sub_003E2D30(); /* call 0x003E2D30 */

loc_003F7D9B: ;
    (void)0; /* cmp ecx, 0x824FB0 - flags set for next jcc */
    xmm1 = MEMF(ecx); /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FB0) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FB4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FB8) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x824FBC) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FC0) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FC4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FC8) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(0x824FCC) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FD0) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FD4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FD8) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x824FDC) = xmm1; /* movss */
    if (CMP_EQ(ecx, 0x824FB0)) goto loc_003F7EB3; /* je: equal / zero */

loc_003F7E7F: ;
    xmm0 = MEMF(ecx + 0x30); /* movss */
    MEMF(0x824FE0) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x34); /* movss */
    MEMF(0x824FE4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    MEMF(0x824FE8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x3C); /* movss */
    MEMF(0x824FEC) = xmm0; /* movss */

loc_003F7EB3: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003F7EC0
 * Original: 0x003F7EC0 - 0x003F7EED (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7EC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_003F7EC0: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, MEM32(esi))) goto loc_003F7EE8; /* jne: not equal / not zero */

loc_003F7ECB: ;
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    edx = ebx + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E5870(); /* call 0x003E5870 */

loc_003F7ED8: ;
    xmm3 = MEMF(0x648D2C); /* movss */
    esp = esp + 8;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) { sub_003F7EED(); return; } /* jbe: below or equal (unsigned <=) */

loc_003F7EE8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F7F80
 * Original: 0x003F7F80 - 0x003F7FD4 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7F80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003F7F80: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    if (CMP_NE(eax, MEM32(edx))) goto loc_003F7FCC; /* jne: not equal / not zero */

loc_003F7F8F: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003F7FCC; /* jp: parity */

loc_003F7F9E: ;
    SET_LO8(eax, MEM8(ecx + 0xA));
    if (CMP_NE(LO8(eax), MEM8(edx + 0xA))) goto loc_003F7FCC; /* jne: not equal / not zero */

loc_003F7FA6: ;
    SET_LO8(ecx, MEM8(ecx + 9));
    if (CMP_NE(LO8(ecx), MEM8(edx + 9))) goto loc_003F7FCC; /* jne: not equal / not zero */

loc_003F7FAE: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F7EC0(); /* call 0x003F7EC0 */

loc_003F7FBC: ;
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003F7FD4(); return; } /* jbe: below or equal (unsigned <=) */

loc_003F7FCC: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003F7FE0
 * Original: 0x003F7FE0 - 0x003F819F (447 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F7FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F7FE0: ;
    PUSH32(esp, ecx);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x22;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = eax;
    MEMF(ebx + 0x78) = xmm4; /* movss */
    MEMF(ebx + 0x7C) = xmm4; /* movss */
    MEMF(ebx + 0x80) = xmm4; /* movss */
    MEMF(ebx + 0x84) = xmm4; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_003F811B; /* jle: less or equal (signed <=) */

loc_003F801F: ;
    esi = MEM32(esp + 0x1C);
    xmm0 = MEMF(0x648CEC); /* movss */
    PUSH32(esp, ebp);
    edx = ebx + 0x20;
    SET_LO8(ebx, MEM8(0x819FE8));
    esi = esi + 4;
    ebp = eax;
    /* nop */

loc_003F8040: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edi = edx + -8;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003F8093; /* jne: not equal / not zero */

loc_003F8047: ;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x10) = esi;
    eax = MEM32(esp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x18);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    goto loc_003F80A2;

loc_003F8093: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edx + -4) = ecx;
    eax = MEM32(esi + 8);
    MEM32(edx) = eax;

loc_003F80A2: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(edi); /* subss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(edx + -4); /* subss */
    MEMF(edx + -4) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(edx); /* subss */
    MEMF(edx) = xmm1; /* movss */
    ecx = ZX8(MEM8(esi + -4));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + -24) = xmm1; /* movss */
    eax = ZX8(MEM8(esi + -3));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + -20) = xmm1; /* movss */
    ecx = ZX8(MEM8(esi + -2));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + -16) = xmm1; /* movss */
    eax = ZX8(MEM8(esi + -1));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + -12) = xmm1; /* movss */
    esi = esi + 0x14;
    edx = edx + 0x1C;
    ebp--;
    if ((ebp != 0)) goto loc_003F8040; /* jne: not equal / not zero */

loc_003F8116: ;
    ebx = MEM32(esp + 0x2C);
    POP32(esp, ebp);

loc_003F811B: ;
    ecx = 0; /* xor self */
    esi = ebx + 1;
    edi = 0x22;

loc_003F8125: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + -1);
    ecx = ecx << 4;
    eax = eax + ecx;
    ecx = eax;
    ecx = ecx & 0xF0000000u;
    if ((ecx == 0)) goto loc_003F8141; /* je: equal / zero */

loc_003F8138: ;
    edx = ecx;
    edx = edx >> 0x18;
    edx = edx | ecx;
    eax = eax ^ edx;

loc_003F8141: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    eax = eax << 4;
    eax = eax + ecx;
    ecx = eax;
    ecx = ecx & 0xF0000000u;
    if ((ecx == 0)) goto loc_003F815C; /* je: equal / zero */

loc_003F8153: ;
    edx = ecx;
    edx = edx >> 0x18;
    edx = edx | ecx;
    eax = eax ^ edx;

loc_003F815C: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    eax = eax << 4;
    edx = edx + eax;
    eax = edx;
    eax = eax & 0xF0000000u;
    if ((eax == 0)) goto loc_003F8177; /* je: equal / zero */

loc_003F816E: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    ecx = ecx | eax;
    edx = edx ^ ecx;

loc_003F8177: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 2);
    edx = edx << 4;
    ecx = ecx + edx;
    eax = ecx;
    eax = eax & 0xF0000000u;
    if ((eax == 0)) goto loc_003F8192; /* je: equal / zero */

loc_003F8189: ;
    edx = eax;
    edx = edx >> 0x18;
    edx = edx | eax;
    ecx = ecx ^ edx;

loc_003F8192: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_003F8125; /* jne: not equal / not zero */

loc_003F8198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F81A0
 * Original: 0x003F81A0 - 0x003F82E5 (325 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F81A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F81A0: ;
    esp = esp - 0x44;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(esp + 0x50) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003F82C2; /* jle: less or equal (signed <=) */

loc_003F81F5: ;
    xmm0 = MEMF(0x648D34); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    edi = 0x65;
    ebx = ebx + 0x18;
    goto loc_003F8220;

    /* nop */

loc_003F8220: ;
    ecx = edi + -1;
    edx = ebx;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F822A: ;
    esi = esp + 0x1C;
    eax = esp + 0x28;
    ecx = ebx;
    PUSH32(esp, 0); sub_003E2110(); /* call 0x003E2110 */

loc_003F8239: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F8267: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    ecx = edi + 1;
    edx = esp + 0x34;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F8290: ;
    edx = ebx + -16;
    ecx = edi + 2;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F829B: ;
    eax = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(edx + 4);
    eax++;
    ebx = ebx + 0x1C;
    edi = edi + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x58) = eax;
    if (CMP_L(eax, ecx)) goto loc_003F8220; /* jl: less (signed <) */

loc_003F82B9: ;
    ebx = edx;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    (void)0; /* test eax, eax - flags set for next jcc */

loc_003F82C2: ;
    if (TEST_NZ(eax, eax)) goto loc_003F82D2; /* jne: not equal / not zero */

loc_003F82C4: ;
    edx = esp + 0x3C;
    ecx = 0x67;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F82D2: ;
    edx = ebx + 0x78;
    ecx = 0x74;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003F82DF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_003F82F0
 * Original: 0x003F82F0 - 0x003F8313 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F82F0(void)
{

loc_003F82F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F6480(); /* call 0x003F6480 */

loc_003F82F7: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F6B70(); /* call 0x003F6B70 */

loc_003F8306: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F81A0(); /* call 0x003F81A0 */

loc_003F830D: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8320
 * Original: 0x003F8320 - 0x003F833A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8320(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F8320: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_003F8337; /* je: equal / zero */

loc_003F832B: ;
    eax--;
    if (CMP_L(eax, 3)) goto loc_003F8339; /* jl: less (signed <) */

loc_003F8331: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_003F8337: ;
    eax = 0; /* xor self */

loc_003F8339: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F8340
 * Original: 0x003F8340 - 0x003F8423 (227 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8340(void)
{
    float xmm0, xmm1;

loc_003F8340: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5A0350;
    MEM32(eax + 0x80) = esi;
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    MEMF(eax + 0x68) = xmm1; /* movss */
    MEMF(eax + 0x54) = xmm1; /* movss */
    MEMF(eax + 0x40) = xmm1; /* movss */
    ecx = 0x10;
    edi = eax;
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    MEMF(eax) = xmm1; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0; /* xor self */
    POP32(esp, edi);
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x94) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8430
 * Original: 0x003F8430 - 0x003F8528 (248 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8430(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003F8430: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x84);
    if (CMP_LE(ebx & ebx, 0)) goto loc_003F8526; /* jle: less or equal (signed <=) */

loc_003F843F: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */

loc_003F8444: ;
    eax = MEM32(edi + 0x8C);
    ecx = MEM32(edi + 0x88);
    xmm2 = MEMF(eax + edx + 0x20); /* movss */
    xmm3 = MEMF(ecx + esi + 0x14); /* movss */
    xmm1 = MEMF(eax + edx + 0x10); /* movss */
    xmm0 = MEMF(eax + edx); /* movss */
    eax = eax + edx;
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + esi + 0x10); /* movss */
    ecx = ecx + esi;
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x30); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm2 = MEMF(eax + 0x24); /* movss */
    xmm3 = MEMF(ecx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm3 = MEMF(ecx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    edx = edx + 0x40;
    esi = esi + 0x24;
    ebx--;
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    if ((ebx != 0)) goto loc_003F8444; /* jne: not equal / not zero */

loc_003F8525: ;
    POP32(esp, esi);

loc_003F8526: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8530
 * Original: 0x003F8530 - 0x003F861C (236 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8530(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003F8530: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x84);
    if (CMP_LE(ebx & ebx, 0)) goto loc_003F861A; /* jle: less or equal (signed <=) */

loc_003F853F: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */

loc_003F8544: ;
    eax = MEM32(edi + 0x8C);
    ecx = MEM32(edi + 0x88);
    xmm2 = MEMF(eax + edx + 0x20); /* movss */
    xmm3 = MEMF(ecx + esi + 0x14); /* movss */
    xmm1 = MEMF(eax + edx + 0x10); /* movss */
    xmm0 = MEMF(eax + edx); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + esi + 0x10); /* movss */
    eax = eax + edx;
    ecx = ecx + esi;
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm3; /* movss */
    xmm2 = MEMF(eax + 0x24); /* movss */
    xmm3 = MEMF(ecx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm3; /* movss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm3 = MEMF(ecx + 0x14); /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x38); /* addss */
    edx = edx + 0x40;
    esi = esi + 0x24;
    ebx--;
    MEMF(eax + 0x38) = xmm3; /* movss */
    if ((ebx != 0)) goto loc_003F8544; /* jne: not equal / not zero */

loc_003F8619: ;
    POP32(esp, esi);

loc_003F861A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8620
 * Original: 0x003F8620 - 0x003F8665 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F8620: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx + 0x80);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) { sub_003F8665(); return; } /* je: equal / zero */

loc_003F8631: ;
    PUSH32(esp, ebp);
    eax = ebx + 0x40;
    ebp = 0; /* xor self */
    ecx = 0x10;
    edi = edx;
    esi = eax;
    /* repe cmpsd - string compare, ecx iterations */
    POP32(esp, ebp);
    if (1 /* strings matched (repe cmpsb) */) { sub_003F8665(); return; } /* je: equal / zero */

loc_003F8645: ;
    esi = edx;
    edi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x10;
    esi = ebx;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003F865B: ;
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8670
 * Original: 0x003F8670 - 0x003F873F (207 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8670(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F8670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0xA);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = edx;
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_003F8685: ;
    edx = ebx;
    esp = esp + 0xC;
    eax = esi;
    edx = edx - esi;
    edi = edi;

loc_003F8690: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F8690; /* jne: not equal / not zero */

loc_003F869A: ;
    edi = ebx;
    edi--;
    /* nop */

loc_003F86A0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003F86A0; /* jne: not equal / not zero */

loc_003F86A8: ;
    edx = MEM32(0x6458B0);
    eax = MEM32(esp + 0x14);
    MEM32(edi) = edx;
    ecx = eax;

loc_003F86B6: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003F86B6; /* jne: not equal / not zero */

loc_003F86BD: ;
    edi = ebx;
    eax = eax - ecx;
    esi = ecx;
    edi--;

loc_003F86C4: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F86C4; /* jne: not equal / not zero */

loc_003F86CC: ;
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    eax = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = eax;

loc_003F86E0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003F86E0; /* jne: not equal / not zero */

loc_003F86E7: ;
    edi = ebx;
    eax = eax - ecx;
    esi = ecx;
    edi--;
    edi = edi;

loc_003F86F0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F86F0; /* jne: not equal / not zero */

loc_003F86F8: ;
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x18);
    ecx = ecx & 3;
    (void)0; /* test eax, eax - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if (TEST_Z(eax, eax)) goto loc_003F873A; /* je: equal / zero */

loc_003F870E: ;
    ebx--;
    edi = ebx;

loc_003F8711: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003F8711; /* jne: not equal / not zero */

loc_003F8719: ;
    eax = MEM32(0x6458A0);
    MEM32(edi) = eax;
    ecx = MEM32(0x6458A4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(0x6458A8);
    MEM32(edi + 8) = edx;
    SET_LO8(eax, MEM8(0x6458AC));
    MEM8(edi + 0xC) = LO8(eax);

loc_003F873A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8740
 * Original: 0x003F8740 - 0x003F874D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8740(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F8740: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    edx = ebp;
    PUSH32(esp, edi);
    edx = edx - eax;
    g_seh_ebp = ebp; sub_003F8750(); return; /* tail jmp 0x003F8750 */

}

/**
 * sub_003F87A0
 * Original: 0x003F87A0 - 0x003F882F (143 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F87A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F87A0: ;
    esp = esp - 0x68;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003F8670(); /* call 0x003F8670 */

loc_003F87B7: ;
    esp = esp + 8;
    edx = esp + 8;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_003F87C3: ;
    MEM32(esp + 4) = eax;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003F882A; /* jle: less or equal (signed <=) */

loc_003F87CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_003F87D1: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ecx * 4);
    edi = edx + ecx * 4;
    edx = MEM32(eax);
    ebx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003F8821; /* jle: less or equal (signed <=) */

loc_003F87E2: ;
    edx = 0; /* xor self */

loc_003F87E4: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 4);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(edi, MEM32(eax + edx + 0x74))) goto loc_003F8811; /* jne: not equal / not zero */

loc_003F87F3: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ecx * 4);
    eax = MEM32(eax + 4);
    edi = MEM32(esp + 0x78);
    MEM32(eax + edx + 0x6C) = edi;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ecx * 4);
    eax = MEM32(eax + 4);
    MEM32(eax + edx + 0x70) = ebp;

loc_003F8811: ;
    eax = MEM32(esi + 4);
    edi = eax + ecx * 4;
    eax = MEM32(edi);
    ebx++;
    edx = edx + 0x78;
    if (CMP_L(ebx, MEM32(eax))) goto loc_003F87E4; /* jl: less (signed <) */

loc_003F8821: ;
    eax = MEM32(esi);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_003F87D1; /* jl: less (signed <) */

loc_003F8828: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003F882A: ;
    POP32(esp, ebp);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_003F8830
 * Original: 0x003F8830 - 0x003F8ECF (1695 bytes, 528 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F8830: ;
    esp = esp - 0x100;
    eax = MEM32(esp + 0x10C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x30) = ebx;
    if (CMP_BE(ecx, ebx)) { sub_003F8ECF(); return; } /* jbe: below or equal (unsigned <=) */

loc_003F8855: ;
    MEM32(esp + 0x18) = ebx;
    esi = 0x82504C;
    PUSH32(esp, ebp);
    /* nop */

loc_003F8860: ;
    ecx = MEM32(esp + 0x11C);
    eax = MEM32(ecx + 0x28);
    eax = eax + MEM32(esp + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x64589C);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_003F8881: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003F8E4B; /* jne: not equal / not zero */

loc_003F888C: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F88A4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8E4B; /* je: equal / zero */

loc_003F88AF: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, 1)) goto loc_003F88C4; /* je: equal / zero */

loc_003F88BB: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_003F8E4B; /* jne: not equal / not zero */

loc_003F88C4: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x120);
    edi = MEM32(edx);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax << 6;
    eax = eax + edi;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    ebp = esp + 0x48;
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm4 = xmm0; /* movaps */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x40) = ebx;
    ebp = ebp - eax;

loc_003F8910: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8910; /* jne: not equal / not zero */

loc_003F891A: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F8920: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8920; /* jne: not equal / not zero */

loc_003F8928: ;
    ecx = MEM32(0x645898);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    MEM32(edi) = ecx;
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8946: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8956; /* je: equal / zero */

loc_003F894D: ;
    ecx = MEM32(esp + 0x10);
    xmm4 = MEMF(ecx + 8); /* movss */

loc_003F8956: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    /* nop */

loc_003F8960: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8960; /* jne: not equal / not zero */

loc_003F896A: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F8970: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8970; /* jne: not equal / not zero */

loc_003F8978: ;
    eax = MEM32(0x645894);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8995: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F89A5; /* je: equal / zero */

loc_003F899C: ;
    eax = MEM32(esp + 0x10);
    xmm3 = MEMF(eax + 8); /* movss */

loc_003F89A5: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    goto loc_003F89B0;

    /* nop */

loc_003F89B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F89B0; /* jne: not equal / not zero */

loc_003F89BA: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F89C0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F89C0; /* jne: not equal / not zero */

loc_003F89C8: ;
    edx = MEM32(0x645888);
    eax = MEM32(0x64588C);
    SET_LO8(ecx, MEM8(0x645890));
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    MEM8(edi + 8) = LO8(ecx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F89F7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8A07; /* je: equal / zero */

loc_003F89FE: ;
    ecx = MEM32(esp + 0x10);
    xmm1 = MEMF(ecx + 8); /* movss */

loc_003F8A07: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    /* nop */

loc_003F8A10: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8A10; /* jne: not equal / not zero */

loc_003F8A1A: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F8A20: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8A20; /* jne: not equal / not zero */

loc_003F8A28: ;
    eax = MEM32(0x645880);
    SET_LO16(ecx, MEM16(0x645884));
    SET_LO8(edx, MEM8(0x645886));
    MEM32(edi) = eax;
    MEM16(edi + 4) = LO16(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM8(edi + 6) = LO8(edx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8A59: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8A69; /* je: equal / zero */

loc_003F8A60: ;
    edx = MEM32(esp + 0x10);
    xmm2 = MEMF(edx + 8); /* movss */

loc_003F8A69: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    /* nop */

loc_003F8A70: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8A70; /* jne: not equal / not zero */

loc_003F8A7A: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F8A80: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8A80; /* jne: not equal / not zero */

loc_003F8A88: ;
    ecx = MEM32(0x645878);
    edx = MEM32(0x64587C);
    MEM32(edi) = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM32(edi + 4) = edx;
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8AAF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8AC1; /* je: equal / zero */

loc_003F8AB6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    MEM32(esp + 0x28) = eax;

loc_003F8AC1: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);

loc_003F8AC7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8AC7; /* jne: not equal / not zero */

loc_003F8AD1: ;
    edi = esp + 0x48;
    edi--;

loc_003F8AD6: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8AD6; /* jne: not equal / not zero */

loc_003F8ADE: ;
    edx = MEM32(0x64586C);
    eax = MEM32(0x645870);
    SET_LO16(ecx, MEM16(0x645874));
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    MEM16(edi + 8) = LO16(ecx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8B0F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8B21; /* je: equal / zero */

loc_003F8B16: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x30) = edx;

loc_003F8B21: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);

loc_003F8B27: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8B27; /* jne: not equal / not zero */

loc_003F8B31: ;
    edi = esp + 0x48;
    edi--;

loc_003F8B36: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8B36; /* jne: not equal / not zero */

loc_003F8B3E: ;
    ecx = MEM32(0x645864);
    SET_LO16(edx, MEM16(0x645868));
    MEM32(edi) = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM16(edi + 4) = LO16(edx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8B67: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8B79; /* je: equal / zero */

loc_003F8B6E: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    MEM32(esp + 0x18) = eax;

loc_003F8B79: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    /* nop */

loc_003F8B80: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8B80; /* jne: not equal / not zero */

loc_003F8B8A: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F8B90: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8B90; /* jne: not equal / not zero */

loc_003F8B98: ;
    edx = MEM32(0x645854);
    eax = MEM32(0x645858);
    ecx = MEM32(0x64585C);
    MEM32(edi) = edx;
    SET_LO16(edx, MEM16(0x645860));
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM16(edi + 0xC) = LO16(edx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8BD2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8BE4; /* je: equal / zero */

loc_003F8BD9: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = eax;

loc_003F8BE4: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    /* nop */

loc_003F8BF0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8BF0; /* jne: not equal / not zero */

loc_003F8BFA: ;
    edi = esp + 0x48;
    edi--;
    /* nop */

loc_003F8C00: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8C00; /* jne: not equal / not zero */

loc_003F8C08: ;
    edx = MEM32(0x64584C);
    SET_LO16(eax, MEM16(0x645850));
    SET_LO8(ecx, MEM8(0x645852));
    MEM32(edi) = edx;
    MEM16(edi + 4) = LO16(eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    MEM8(edi + 6) = LO8(ecx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8C39: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8C4B; /* je: equal / zero */

loc_003F8C40: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = edx;

loc_003F8C4B: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);

loc_003F8C51: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003F8C51; /* jne: not equal / not zero */

loc_003F8C5B: ;
    edi = esp + 0x48;
    edi--;

loc_003F8C60: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003F8C60; /* jne: not equal / not zero */

loc_003F8C68: ;
    ecx = MEM32(0x645840);
    edx = MEM32(0x645844);
    SET_LO8(eax, MEM8(0x645848));
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM8(edi + 8) = LO8(eax);
    edi = MEM32(esp + 0x11C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8C99: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F8CA9; /* je: equal / zero */

loc_003F8CA0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 8);
    goto loc_003F8CAD;

loc_003F8CA9: ;
    ecx = MEM32(esp + 0x40);

loc_003F8CAD: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003F8CD9; /* jp: parity */

loc_003F8CB6: ;
    /* ucomiss xmm4, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003F8CD9; /* jp: parity */

loc_003F8CBF: ;
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003F8CD9; /* jp: parity */

loc_003F8CC8: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003F8CD9; /* jp: parity */

loc_003F8CD1: ;
    if (CMP_EQ(ecx, ebx)) goto loc_003F8E4B; /* je: equal / zero */

loc_003F8CD9: ;
    eax = MEM32(esp + 0x30);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x28);
    MEM32(esi + -20) = edx;
    MEMF(esi) = xmm4; /* movss */
    MEMF(esi + 4) = xmm3; /* movss */
    MEMF(esi + 0xC) = xmm1; /* movss */
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_003F8D40; /* je: equal / zero */

loc_003F8D00: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x18);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    xmm3 = xmm3 / xmm1; /* divss */
    MEMF(esi + 0x38) = xmm3; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(0x648CE0); /* mulss */
    xmm4 = xmm4 / xmm3; /* divss */
    MEMF(esi + 0x4C) = xmm4; /* movss */
    if (CMP_EQ(ecx, ebx)) goto loc_003F8D51; /* je: equal / zero */

loc_003F8D35: ;
    xmm2 = xmm2 / xmm1; /* divss */
    MEMF(esi + 8) = xmm2; /* movss */
    goto loc_003F8D56;

loc_003F8D40: ;
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esi + 0x38) = xmm1; /* movss */

loc_003F8D51: ;
    MEMF(esi + 8) = xmm0; /* movss */

loc_003F8D56: ;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    MEMF(esi + -16) = xmm0; /* movss */
    MEMF(esi + -12) = xmm0; /* movss */
    if (CMP_NE(ecx, 1)) goto loc_003F8D88; /* jne: not equal / not zero */

loc_003F8D65: ;
    if (CMP_LE(eax, ebx)) goto loc_003F8D88; /* jle: less or equal (signed <=) */

loc_003F8D69: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm2 / xmm1; /* divss */
    MEMF(esi + -8) = xmm2; /* movss */
    goto loc_003F8D8D;

loc_003F8D88: ;
    MEMF(esi + -8) = xmm0; /* movss */

loc_003F8D8D: ;
    ebp = MEM32(esp + 0x14);
    MEMF(esi + -4) = xmm0; /* movss */
    eax = MEM32(edi + 0x54);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x3C) = 1;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x54); /* divss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x14); /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x54); /* divss */
    edx = esp + 0xAC;
    MEMF(esi + 0x54) = xmm0; /* movss */
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    PUSH32(esp, 0); sub_003F8740(); /* call 0x003F8740 */

loc_003F8DFE: ;
    edx = esp + 0xB4;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_003F8E0A: ;
    ecx = MEM32(esp + 0x28);
    ecx++;
    MEM32(esi + 0x60) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esi + 0x58) = 0x3F91D0;
    MEM32(esi + 0x5C) = ebx;
    edx = MEM32(ebp);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi;
    esi = esi + 0x78;
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F8E33: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0x130);
    eax = MEM32(edx + 4);
    esp = esp + 0x10;
    MEM8(ecx + eax) = 1;

loc_003F8E4B: ;
    eax = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x11C);
    edx = MEM32(ecx + 0x2C);
    eax++;
    edi = edi + 0x10;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(eax, edx)) goto loc_003F8860; /* jb: below (unsigned <) */

loc_003F8E71: ;
    esi = MEM32(esp + 0x20);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(esi, ebx)) { sub_003F8ECF(); return; } /* je: equal / zero */

loc_003F8E7A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B85C), _icall_esp); /* indirect call */
    }

loc_003F8E82: ;
    ebx = MEM32(esp + 0x114);
    MEM32(ebx) = eax;
    MEM32(eax) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B85C), _icall_esp); /* indirect call */
    }

loc_003F8E97: ;
    edx = MEM32(ebx);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebx);
    edi = MEM32(eax + 4);
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    esi = 0x825038;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 8;
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_003F8EF0
 * Original: 0x003F8EF0 - 0x003F8F5F (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F8EF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(ebp);
    eax = ecx + 1;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    if (TEST_NZ(edx, edx)) goto loc_003F8F49; /* jne: not equal / not zero */

loc_003F8F08: ;
    eax = ecx + ecx * 2 + 0x96;
    eax = eax << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B85C), _icall_esp); /* indirect call */
    }

loc_003F8F1A: ;
    ecx = MEM32(ebp);
    esi = MEM32(ebx);
    ecx = ecx << 2;
    edi = eax;
    MEM32(esp + 0x18) = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_003F8F3F: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 8;
    MEM32(ebx) = edx;
    POP32(esp, edi);

loc_003F8F49: ;
    eax = MEM32(ebp);
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(ebp);
    eax++;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F8F60
 * Original: 0x003F8F60 - 0x003F8F7E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F8F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F8F60: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebx, edi)) { sub_003F8F7E(); return; } /* je: equal / zero */

loc_003F8F6F: ;
    eax = MEM32(ebx + 0x10);
    if (CMP_EQ(eax, edi)) { sub_003F8F7E(); return; } /* je: equal / zero */

loc_003F8F76: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_003F8F82(); return; /* tail jmp 0x003F8F82 */

}

/**
 * sub_003F9110
 * Original: 0x003F9110 - 0x003F91AD (157 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9110: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, 0xC8);
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B85C), _icall_esp); /* indirect call */
    }

loc_003F9124: ;
    ecx = MEM32(esp + 0x18);
    MEM32(0x825030) = eax;
    edx = MEM32(ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x825030);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F8F60(); /* call 0x003F8F60 */

loc_003F9144: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 0x14;
    if (CMP_EQ(esi, ebp)) { sub_003F91AD(); return; } /* je: equal / zero */

loc_003F914F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B85C), _icall_esp); /* indirect call */
    }

loc_003F9158: ;
    MEM32(ebx) = eax;
    MEM32(eax) = esi;
    esi = esi << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B85C), _icall_esp); /* indirect call */
    }

loc_003F9166: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    edx = MEM32(ebx);
    edi = MEM32(edx + 4);
    ecx = esi;
    esi = MEM32(0x825030);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx);
    MEM32(ecx + 8) = ebp;
    edx = MEM32(ebx);
    MEM32(edx + 0xC) = ebp;
    eax = MEM32(ebx);
    esp = esp + 8;
    MEM32(eax + 0x10) = ebp;
    ecx = MEM32(0x825030);
    POP32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_003F91A6: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F91D0
 * Original: 0x003F91D0 - 0x003F9206 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F91D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003F91D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) { sub_003F9206(); return; } /* je: equal / zero */

loc_003F91E7: ;
    ecx = MEM32(esi + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_003F91FF; /* je: equal / zero */

loc_003F91F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x10), _icall_esp); /* indirect call */
    }

loc_003F91F7: ;
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 4;
    g_seh_ebp = ebp; sub_003F921A(); return; /* tail jmp 0x003F921A */

loc_003F91FF: ;
    eax = MEM32(eax);
    MEM32(esi + 4) = eax;
    g_seh_ebp = ebp; sub_003F921A(); return; /* tail jmp 0x003F921A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003F9540
 * Original: 0x003F9540 - 0x003F9677 (311 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9540: ;
    eax = MEM32(esi);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003F9672; /* jle: less or equal (signed <=) */

loc_003F9550: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    goto loc_003F9560;

    /* nop */

loc_003F9560: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi + 0x6C);
    eax = eax + edi;
    if (TEST_Z(ecx, ecx)) goto loc_003F957F; /* je: equal / zero */

loc_003F956D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(edi + ecx + 0x70);
    eax = edi + ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_003F957D: ;
    goto loc_003F9588;

loc_003F957F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F91D0(); /* call 0x003F91D0 */

loc_003F9588: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi);
    xmm0 = MEMF(eax + edi + 0x64); /* movss */
    xmm0 = xmm0 * MEMF(eax + edi + 0x3C); /* mulss */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(edi + ecx + 0x3C); /* movss */
    eax = eax + edi;
    eax = edi + ecx;
    ecx = MEM32(eax);
    xmm0 = xmm0 * MEMF(ecx + 0x10); /* mulss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + edx);
    xmm0 = MEMF(edi + edx + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    eax = edi + edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi);
    xmm0 = MEMF(eax + edi + 0x68); /* movss */
    xmm0 = xmm0 * MEMF(eax + edi + 0x3C); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x14); /* mulss */
    eax = eax + edi;
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    eax = MEM32(edi + ecx);
    esp = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movaps */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm3 = MEMF(ecx + 0x20); /* movaps */
    xmm5 = MEMF(ecx + 0x30); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm3; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    /* unpcklps xmm3, xmm5 */
    /* unpckhps xmm4, xmm5 */
    MEMD(eax) = xmm0; /* movlps */
    MEMD(eax + 8) = xmm3; /* movlps */
    MEMD(eax + 0x10) = xmm0; /* movhps */
    MEMD(eax + 0x18) = xmm3; /* movhps */
    MEMD(eax + 0x20) = xmm1; /* movlps */
    MEMD(eax + 0x28) = xmm4; /* movlps */
    MEMD(eax + 0x30) = xmm1; /* movhps */
    MEMD(eax + 0x38) = xmm4; /* movhps */
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + edx + 0x58);
    eax = edi + edx;
    edx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(eax + 0x5C));
    edx = MEM32(edx + 0xC);
    MEM8(edx + ecx * 4) = LO8(eax);
    eax = MEM32(esi);
    ebx++;
    edi = edi + 0x78;
    if (CMP_L(ebx, eax)) goto loc_003F9560; /* jl: less (signed <) */

loc_003F9670: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003F9672: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003F9680
 * Original: 0x003F9680 - 0x003F96AA (42 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9680: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003F96A8; /* jle: less or equal (signed <=) */

loc_003F9689: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    /* nop */

loc_003F9690: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(eax + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003F9540(); /* call 0x003F9540 */

loc_003F969C: ;
    eax = MEM32(ebx);
    esp = esp + 4;
    edi++;
    if (CMP_L(edi, eax)) goto loc_003F9690; /* jl: less (signed <) */

loc_003F96A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003F96A8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F96B0
 * Original: 0x003F96B0 - 0x003F96F8 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F96B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F96B0: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003F96E2; /* jle: less or equal (signed <=) */

loc_003F96B9: ;
    PUSH32(esp, edi);
    /* nop */

loc_003F96C0: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(eax + esi * 4);
    ecx = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_003F96D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_003F96D7: ;
    eax = MEM32(ebx);
    esp = esp + 8;
    esi++;
    if (CMP_L(esi, eax)) goto loc_003F96C0; /* jl: less (signed <) */

loc_003F96E1: ;
    POP32(esp, edi);

loc_003F96E2: ;
    edx = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_003F96EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_003F96F3: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9700
 * Original: 0x003F9700 - 0x003F974B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003F9700: ;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    esi = MEM32(edx + 4);
    esi = MEM32(esi + ecx * 4);
    esi = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + eax + 0x44);
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_003F974A; /* je: equal / zero */

loc_003F9718: ;
    edx = MEM32(edx + 4);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm2 = (float)(int32_t)MEM32(eax + edx + 0x48); /* cvtsi2ss */
    eax = eax + edx;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 / xmm2; /* divss */
    MEMF(eax + 0xC) = xmm1; /* movss */

loc_003F974A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F9750
 * Original: 0x003F9750 - 0x003F97AA (90 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9750: ;
    MEM32(edx) = 0;
    (void)0; /* cmp MEM32(edi), 0 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_LE(MEM32(edi), 0)) goto loc_003F97A5; /* jle: less or equal (signed <=) */

loc_003F975D: ;
    /* nop */

loc_003F9760: ;
    MEM32(ecx) = 0;
    eax = MEM32(edi + 4);
    esi = MEM32(edx);
    esi = MEM32(eax + esi * 4);
    if (CMP_LE(MEM32(esi), 0)) goto loc_003F9798; /* jle: less or equal (signed <=) */

loc_003F9773: ;
    ebp = MEM32(edx);
    eax = MEM32(eax + ebp * 4);
    esi = MEM32(ecx);
    eax = MEM32(eax + 4);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    if (CMP_EQ(MEM32(eax + ebp), ebx)) { sub_003F97AA(); return; } /* je: equal / zero */

loc_003F9787: ;
    esi++;
    MEM32(ecx) = esi;
    eax = MEM32(edi + 4);
    esi = MEM32(edx);
    esi = MEM32(eax + esi * 4);
    ebp = MEM32(ecx);
    if (CMP_L(ebp, MEM32(esi))) goto loc_003F9773; /* jl: less (signed <) */

loc_003F9798: ;
    ebp = MEM32(edx);
    ebp++;
    MEM32(edx) = ebp;
    esi = MEM32(edi);
    eax = ebp;
    if (CMP_L(eax, esi)) goto loc_003F9760; /* jl: less (signed <) */

loc_003F97A5: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003F97C0
 * Original: 0x003F97C0 - 0x003F987E (190 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F97C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F97C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003F9855; /* je: equal / zero */

loc_003F97D4: ;
    ecx = MEM32(eax);
    ebx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003F9876; /* jbe: below or equal (unsigned <=) */

loc_003F97E0: ;
    edi = 0; /* xor self */
    esi = 0; /* xor self */

loc_003F97E4: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx);
    edx = MEM32(eax + 4);
    ebp = MEM32(esi + ecx);
    eax = MEM32(edi + edx);
    edx = MEM32(esp + 0x20);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F41F0(); /* call 0x003F41F0 */

loc_003F9805: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F981D; /* je: equal / zero */

loc_003F980C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, 1)) goto loc_003F9839; /* je: equal / zero */

loc_003F9818: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003F9839; /* je: equal / zero */

loc_003F981D: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax);
    ebx++;
    esi = esi + 0x30;
    edi = edi + 0x28;
    if (CMP_B(ebx, ecx)) goto loc_003F97E4; /* jb: below (unsigned <) */

loc_003F9831: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F9839: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ebp);
    edx = MEM32(esp + 0x24);
    ecx = ecx << 6;
    ecx = ecx + eax;
    MEM32(edx) = ecx;

loc_003F984A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003F9855: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0); sub_003F4270(); /* call 0x003F4270 */

loc_003F986F: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003F984A; /* jne: not equal / not zero */

loc_003F9876: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9880
 * Original: 0x003F9880 - 0x003F98AD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9880(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9880: ;
    esp = esp - 0x64;
    SET_LO8(ecx, MEM8(0x64589E));
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO16(eax, MEM16(0x64589C));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    MEM16(esp + 8) = LO16(eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, esi);
    MEM8(esp + 0xE) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = eax;
    g_seh_ebp = ebp; sub_003F98B0(); return; /* tail jmp 0x003F98B0 */

}

/**
 * sub_003F9990
 * Original: 0x003F9990 - 0x003F9AA2 (274 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9990: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0x2C);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_LE(ecx, eax)) goto loc_003F9A9D; /* jle: less or equal (signed <=) */

loc_003F99A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;

loc_003F99B0: ;
    eax = MEM32(esp + 0x24);
    edi = MEM32(ebp + 0x28);
    ecx = MEM32(edi + eax);
    ebx = MEM32(esp + 0x30);
    edi = edi + eax;
    eax = ecx;
    esi = eax + 1;

loc_003F99C5: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003F99C5; /* jne: not equal / not zero */

loc_003F99CC: ;
    eax = eax - esi;
    edx = ebx + 2;
    if (CMP_LE(eax, edx)) goto loc_003F9A7B; /* jle: less or equal (signed <=) */

loc_003F99D9: ;
    eax = ecx;
    esi = eax + 1;
    edi = edi;

loc_003F99E0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003F99E0; /* jne: not equal / not zero */

loc_003F99E7: ;
    eax = eax - esi;
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x64589C);
    esi = esi - ebx;
    PUSH32(esp, ecx);
    esi = esi + eax;
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_003F99FC: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003F9A7B; /* jne: not equal / not zero */

loc_003F9A03: ;
    eax = MEM32(esp + 0x2C);

loc_003F9A07: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_003F9A2F; /* jne: not equal / not zero */

loc_003F9A11: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F9A2B; /* je: equal / zero */

loc_003F9A15: ;
    SET_LO8(edx, MEM8(esi + 1));
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_003F9A2F; /* jne: not equal / not zero */

loc_003F9A21: ;
    esi = esi + 2;
    eax = eax + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F9A07; /* jne: not equal / not zero */

loc_003F9A2B: ;
    eax = 0; /* xor self */
    goto loc_003F9A34;

loc_003F9A2F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003F9A34: ;
    if (TEST_NZ(eax, eax)) goto loc_003F9A7B; /* jne: not equal / not zero */

loc_003F9A38: ;
    ebx = MEM32(edi + 8);
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax);
    edi = MEM32(esp + 0x20);
    ebx = ebx << 6;
    ebx = ebx + edx;
    ecx = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_003F9750(); /* call 0x003F9750 */

loc_003F9A57: ;
    if (TEST_Z(eax, eax)) goto loc_003F9A7B; /* je: equal / zero */

loc_003F9A5B: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x38);
    MEM32(esi + ecx * 4) = edx;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x34);
    MEM32(esi + ecx * 4) = edx;
    MEM32(eax) = MEM32(eax) + 1;

loc_003F9A7B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebp + 0x2C);
    eax++;
    edx = edx + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x24) = edx;
    if (CMP_L(eax, ecx)) goto loc_003F99B0; /* jl: less (signed <) */

loc_003F9A9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003F9A9D: ;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003F9AB0
 * Original: 0x003F9AB0 - 0x003F9AF6 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9AB0: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 0x1C;
    edx = eax + 1;
    /* nop */

loc_003F9AC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F9AC0; /* jne: not equal / not zero */

loc_003F9AC7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax - edx;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ebx;
    edi = 0; /* xor self */
    ecx = MEM32(esp + 0x34);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edi;
    if (CMP_EQ(ecx, ebx)) { sub_003F9AF6(); return; } /* je: equal / zero */

loc_003F9AEB: ;
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, ebx)) { sub_003F9AF6(); return; } /* je: equal / zero */

loc_003F9AF2: ;
    eax = MEM32(eax);
    g_seh_ebp = ebp; sub_003F9AF8(); return; /* tail jmp 0x003F9AF8 */

}

/**
 * sub_003F9C60
 * Original: 0x003F9C60 - 0x003F9CA9 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003F9C60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_003F9C72; /* je: equal / zero */

loc_003F9C6E: ;
    ecx = ecx + edx;
    MEM32(eax) = ecx;

loc_003F9C72: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003F9C7E; /* je: equal / zero */

loc_003F9C79: ;
    ecx = ecx + edx;
    MEM32(eax + 4) = ecx;

loc_003F9C7E: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(eax + 8), LO16(ecx))) goto loc_003F9CA8; /* jbe: below or equal (unsigned <=) */

loc_003F9C86: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + edx;
    goto loc_003F9C90;

    /* nop */

loc_003F9C90: ;
    edx = MEM32(eax + 4);
    edi = MEM32(edx + ecx * 8);
    edx = edx + ecx * 8;
    edi = edi + esi;
    MEM32(edx) = edi;
    edx = ZX16(MEM16(eax + 8));
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_003F9C90; /* jl: less (signed <) */

loc_003F9CA6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003F9CA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F9CB0
 * Original: 0x003F9CB0 - 0x003F9D3C (140 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9CB0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00416130(); /* call 0x00416130 */

loc_003F9CC0: ;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM16(edi + 8), LO16(esi) - flags set for next jcc */
    ebx = eax;
    if (CMP_BE(MEM16(edi + 8), LO16(esi))) goto loc_003F9D04; /* jbe: below or equal (unsigned <=) */

loc_003F9CCA: ;
    /* nop */

loc_003F9CD0: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp LO16(ebx), MEM16(eax + esi * 8 + 4) - flags set for next jcc */
    eax = eax + esi * 8;
    if (CMP_NE(LO16(ebx), MEM16(eax + esi * 8 + 4))) goto loc_003F9CF1; /* jne: not equal / not zero */

loc_003F9CDD: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_003F9CEA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003F9CFC; /* je: equal / zero */

loc_003F9CF1: ;
    eax = ZX16(MEM16(edi + 8));
    esi++;
    if (CMP_L(esi, eax)) goto loc_003F9CD0; /* jl: less (signed <) */

loc_003F9CFA: ;
    goto loc_003F9D04;

loc_003F9CFC: ;
    ecx = MEM32(edi + 4);
    SET_LO16(ebx, MEM16(ecx + esi * 8 + 6));

loc_003F9D04: ;
    if (TEST_Z(ebp, ebp)) { sub_003F9D3C(); return; } /* je: equal / zero */

loc_003F9D08: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) { sub_003F9D3C(); return; } /* jne: not equal / not zero */

loc_003F9D0F: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0x3F9E70);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    edx = ZX16(LO16(ebx));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00471B99(); /* call 0x00471B99 */

loc_003F9D2A: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) { sub_003F9D3C(); return; } /* je: equal / zero */

loc_003F9D31: ;
    eax = MEM32(eax + 2);
    ecx = MEM32(ebp + 8);
    eax = ecx + eax * 2;
    g_seh_ebp = ebp; sub_003F9D41(); return; /* tail jmp 0x003F9D41 */

}

/**
 * sub_003F9D60
 * Original: 0x003F9D60 - 0x003F9DEE (142 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9D60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x18);
    ebx = MEM32(eax + 4);
    ebp = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_003F9DDD; /* jbe: below or equal (unsigned <=) */

loc_003F9D77: ;
    esi = MEM32(esp + 0x18);
    eax = edi;
    /* nop */

loc_003F9D80: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_003F9DA4; /* jne: not equal / not zero */

loc_003F9D88: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003F9DA0; /* je: equal / zero */

loc_003F9D8C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) goto loc_003F9DA4; /* jne: not equal / not zero */

loc_003F9D96: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F9D80; /* jne: not equal / not zero */

loc_003F9DA0: ;
    eax = 0; /* xor self */
    goto loc_003F9DA9;

loc_003F9DA4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_003F9DA9: ;
    if (TEST_Z(eax, eax)) goto loc_003F9DD5; /* je: equal / zero */

loc_003F9DAD: ;
    eax = edi;
    edx = eax + 1;

loc_003F9DB2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003F9DB2; /* jne: not equal / not zero */

loc_003F9DB9: ;
    eax = eax - edx;
    ebp++;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    edi = edi + eax + 1;
    if (CMP_B(ebp, ebx)) goto loc_003F9D77; /* jb: below (unsigned <) */

loc_003F9DC4: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003F9DD5: ;
    esi = ebp + 1;
    if (CMP_NE(esi, 0xFFFFFFFFu)) { sub_003F9DEE(); return; } /* jne: not equal / not zero */

loc_003F9DDD: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F9E80
 * Original: 0x003F9E80 - 0x003FA02E (430 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F9E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F9E80: ;
    ecx = ecx + 0xFFFFFFFEu;
    (void)0; /* cmp ecx, 0x3F - flags set for next jcc */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_A(ecx, 0x3F)) goto loc_003FA02C; /* ja: above (unsigned >) */

loc_003F9E8F: ;
    ecx = ZX8(MEM8(ecx + 0x3FA068));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3FA030); /* switch: 14 entries, 14 targets */
    if (_jt == 0x003F9E9Du) goto loc_003F9E9D;
    if (_jt == 0x003F9EB3u) goto loc_003F9EB3;
    if (_jt == 0x003F9ECDu) goto loc_003F9ECD;
    if (_jt == 0x003F9EEAu) goto loc_003F9EEA;
    if (_jt == 0x003F9F07u) goto loc_003F9F07;
    if (_jt == 0x003F9F1Du) goto loc_003F9F1D;
    if (_jt == 0x003F9F32u) goto loc_003F9F32;
    if (_jt == 0x003F9F55u) goto loc_003F9F55;
    if (_jt == 0x003F9F6Du) goto loc_003F9F6D;
    if (_jt == 0x003F9F82u) goto loc_003F9F82;
    if (_jt == 0x003F9FA5u) goto loc_003F9FA5;
    if (_jt == 0x003F9FCEu) goto loc_003F9FCE;
    if (_jt == 0x003F9FFDu) goto loc_003F9FFD;
    if (_jt == 0x003FA02Cu) goto loc_003FA02C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003F9E9D: ;
    ecx = eax + eax;
    edx = ecx;
    ecx = ecx >> 2;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9EB3: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9EBB: ;
    goto loc_003F9EC0;

    /* nop */

loc_003F9EC0: ;
    MEM8(edi) = 0x66;
    edi++;
    MEM8(edi) = 0xFF;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9EC0; /* jne: not equal / not zero */

loc_003F9ECB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9ECD: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9ED5: ;
    MEM8(edi) = 0xFF;
    edi++;
    MEM16(edi) = 0x6F6F;
    edi = edi + 2;
    MEM8(edi) = 0xFF;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9ED5; /* jne: not equal / not zero */

loc_003F9EE8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9EEA: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9EF2: ;
    MEM16(edi) = 0x6F6F;
    edi = edi + 2;
    MEM16(edi) = 0xFFFF;
    edi = edi + 2;
    eax--;
    if ((eax != 0)) goto loc_003F9EF2; /* jne: not equal / not zero */

loc_003F9F05: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9F07: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9F0F: ;
    /* nop */

loc_003F9F10: ;
    MEM8(edi) = 0x8E;
    edi++;
    MEM8(edi) = 0xFB;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9F10; /* jne: not equal / not zero */

loc_003F9F1B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9F1D: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9F25: ;
    MEM8(edi) = 0xFD;
    edi++;
    MEM8(edi) = 0xCE;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9F25; /* jne: not equal / not zero */

loc_003F9F30: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9F32: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9F3A: ;
    /* nop */

loc_003F9F40: ;
    MEM16(edi) = 0x6F6F;
    edi = edi + 2;
    MEM16(edi) = 0xFFFF;
    edi = edi + 2;
    eax--;
    if ((eax != 0)) goto loc_003F9F40; /* jne: not equal / not zero */

loc_003F9F53: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9F55: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9F5D: ;
    /* nop */

loc_003F9F60: ;
    MEM8(edi) = 0xF6;
    edi++;
    MEM8(edi) = 0x6F;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9F60; /* jne: not equal / not zero */

loc_003F9F6B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9F6D: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9F75: ;
    MEM8(edi) = 0xFB;
    edi++;
    MEM8(edi) = 0x9D;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9F75; /* jne: not equal / not zero */

loc_003F9F80: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9F82: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9F8A: ;
    /* nop */

loc_003F9F90: ;
    MEM8(edi) = 0xFF;
    edi++;
    MEM16(edi) = 0x6F6F;
    edi = edi + 2;
    MEM8(edi) = 0xFF;
    edi++;
    eax--;
    if ((eax != 0)) goto loc_003F9F90; /* jne: not equal / not zero */

loc_003F9FA3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9FA5: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9FAD: ;
    /* nop */

loc_003F9FB0: ;
    MEM8(edi) = 0x2F;
    edi++;
    MEM8(edi) = 0xE3;
    edi++;
    MEM16(edi) = 0;
    edi = edi + 2;
    MEM32(edi) = 0;
    edi = edi + 4;
    eax--;
    if ((eax != 0)) goto loc_003F9FB0; /* jne: not equal / not zero */

loc_003F9FCC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9FCE: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003F9FD2: ;
    edx = edi;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(edx) = ecx;
    edi = edi + 8;
    MEM32(edx + 4) = ecx;
    MEM8(edi) = 0x2F;
    edi++;
    MEM8(edi) = 0xE3;
    edi++;
    MEM16(edi) = 0;
    edi = edi + 2;
    MEM32(edi) = 0;
    edi = edi + 4;
    eax--;
    if ((eax != 0)) goto loc_003F9FD2; /* jne: not equal / not zero */

loc_003F9FFB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003F9FFD: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003FA02C; /* jle: less or equal (signed <=) */

loc_003FA001: ;
    MEM16(edi) = 0xFFFF;
    edi = edi + 2;
    edx = edi;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    edi = edi + 6;
    MEM16(edx + 4) = LO16(ecx);
    MEM8(edi) = 0x2F;
    edi++;
    MEM8(edi) = 0xE3;
    edi++;
    MEM16(edi) = LO16(ecx);
    edi = edi + 2;
    MEM32(edi) = ecx;
    edi = edi + 4;
    eax--;
    if ((eax != 0)) goto loc_003FA001; /* jne: not equal / not zero */

loc_003FA02C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FA100
 * Original: 0x003FA100 - 0x003FA152 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA100: ;
    esp = esp - 0x2C;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = 2;
    MEM32(esp + 0x2C) = 3;
    MEM32(esp + 0x30) = 4;
    MEM32(esp + 0x34) = 5;
    if (CMP_EQ(eax, 0xC)) { sub_003FA152(); return; } /* je: equal / zero */

loc_003FA13B: ;
    if (CMP_EQ(eax, 0xE)) { sub_003FA152(); return; } /* je: equal / zero */

loc_003FA140: ;
    if (CMP_EQ(eax, 0xF)) { sub_003FA152(); return; } /* je: equal / zero */

loc_003FA145: ;
    ebp = ZX16(MEM16(ebx + 0xE));
    eax = ZX16(MEM16(ebx + 0xC));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    g_seh_ebp = ebp; sub_003FA170(); return; /* tail jmp 0x003FA170 */

}

/**
 * sub_003FA1C0
 * Original: 0x003FA1C0 - 0x003FA1E7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA1C0: ;
    eax = MEM32(edi);
    esp = esp - 0x14;
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, 0xC)) { sub_003FA1E7(); return; } /* je: equal / zero */

loc_003FA1CC: ;
    if (CMP_EQ(eax, 0xE)) { sub_003FA1E7(); return; } /* je: equal / zero */

loc_003FA1D1: ;
    if (CMP_EQ(eax, 0xF)) { sub_003FA1E7(); return; } /* je: equal / zero */

loc_003FA1D6: ;
    esi = ZX16(MEM16(edi + 0xE));
    eax = ZX16(MEM16(edi + 0xC));
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edi + 0x20));
    g_seh_ebp = ebp; sub_003FA1F9(); return; /* tail jmp 0x003FA1F9 */

}

/**
 * sub_003FA240
 * Original: 0x003FA240 - 0x003FA263 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA240: ;
    eax = MEM32(esi);
    esp = esp - 0x14;
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xC)) { sub_003FA263(); return; } /* je: equal / zero */

loc_003FA24C: ;
    if (CMP_EQ(eax, 0xE)) { sub_003FA263(); return; } /* je: equal / zero */

loc_003FA251: ;
    if (CMP_EQ(eax, 0xF)) { sub_003FA263(); return; } /* je: equal / zero */

loc_003FA256: ;
    ebp = ZX16(MEM16(esi + 0xE));
    eax = ZX16(MEM16(esi + 0xC));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    g_seh_ebp = ebp; sub_003FA279(); return; /* tail jmp 0x003FA279 */

}

/**
 * sub_003FA2D0
 * Original: 0x003FA2D0 - 0x003FA302 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA2D0: ;
    eax = MEM32(edx + 4);
    if (CMP_A(eax, 4)) goto loc_003FA301; /* ja: above (unsigned >) */

loc_003FA2D8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3FA304); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003FA2DFu) goto loc_003FA2DF;
    if (_jt == 0x003FA2E4u) goto loc_003FA2E4;
    if (_jt == 0x003FA2EEu) goto loc_003FA2EE;
    if (_jt == 0x003FA2F8u) goto loc_003FA2F8;
    if (_jt == 0x003FA301u) goto loc_003FA301;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003FA2DF: ;
    g_seh_ebp = ebp; sub_003FA0B0(); return; /* tail jmp 0x003FA0B0 */

loc_003FA2E4: ;
    PUSH32(esp, ebx);
    ebx = edx;
    PUSH32(esp, 0); sub_003FA100(); /* call 0x003FA100 */

loc_003FA2EC: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003FA2EE: ;
    PUSH32(esp, edi);
    edi = edx;
    PUSH32(esp, 0); sub_003FA1C0(); /* call 0x003FA1C0 */

loc_003FA2F6: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003FA2F8: ;
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, 0); sub_003FA240(); /* call 0x003FA240 */

loc_003FA300: ;
    POP32(esp, esi);

loc_003FA301: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003FA320
 * Original: 0x003FA320 - 0x003FA4D3 (435 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA320: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_A(eax, 4)) goto loc_003FA4C3; /* ja: above (unsigned >) */

loc_003FA32F: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x3FA4D4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003FA337u) goto loc_003FA337;
    if (_jt == 0x003FA39Au) goto loc_003FA39A;
    if (_jt == 0x003FA3ECu) goto loc_003FA3EC;
    if (_jt == 0x003FA40Bu) goto loc_003FA40B;
    if (_jt == 0x003FA4C2u) goto loc_003FA4C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003FA337: ;
    edi = MEM32(esi + 0x1C);
    edx = MEM32(esi);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x18));
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);

loc_003FA34E: ;
    edx = ZX16(MEM16(esi + 0xC));
    ecx = ZX16(MEM16(esi + 0xE));
    PUSH32(esp, edx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003FA35E: ;
    MEM32(edi) = 0x40001;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 4) = ebp;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 4);
    eax = MEM32(esi + 0x14);
    eax = eax + edx;
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    if (CMP_NE(edx, 0x20000)) goto loc_003FA38D; /* jne: not equal / not zero */

loc_003FA385: ;
    MEM32(ecx + 4) = eax;
    goto loc_003FA4C2;

loc_003FA38D: ;
    eax = eax & 0xFFFFFFF;
    MEM32(ecx + 4) = eax;
    goto loc_003FA4C2;

loc_003FA39A: ;
    edi = MEM32(esi + 0x1C);
    ecx = ZX16(MEM16(esi + 0xC));
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x18));
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003FA3BD: ;
    MEM32(edi) = 0x40001;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 4) = ebp;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 4);
    eax = MEM32(esi + 0x14);
    eax = eax + edx;
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    if (CMP_NE(edx, 0x20000)) goto loc_003FA38D; /* jne: not equal / not zero */

loc_003FA3E4: ;
    MEM32(ecx + 4) = eax;
    goto loc_003FA4C2;

loc_003FA3EC: ;
    edi = MEM32(esi + 0x1C);
    edx = MEM32(esi);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x18));
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_003FA34E;

loc_003FA40B: ;
    eax = MEM32(esi + 0x1C);
    edi = MEM32(eax);
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x18));
    edx = edi + 0xC;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + 0xC));
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esi + 0xE));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003FA435: ;
    MEM32(edi) = 0x40001;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 4) = ebp;
    eax = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    if (CMP_BE(eax, ebp)) goto loc_003FA4C1; /* jbe: below or equal (unsigned <=) */

loc_003FA44A: ;
    /* nop */

loc_003FA450: ;
    eax = MEM32(esi + 0x1C);
    edi = MEM32(eax + ebx * 4);
    eax = MEM32(esi);
    edx = ZX8(MEM8(esi + 0x18));
    ecx = ZX16(MEM16(esi + 0xE));
    ebp = edi + 0x10;
    PUSH32(esp, ebp);
    ebp = edi + 0xC;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003FA47C: ;
    eax = eax + 0x7F;
    eax = eax & 0xFFFFFF80u;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    MEM32(edi) = 0x40001;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 4) = ebp;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + ebx * 4);
    edi = MEM32(ecx + 4);
    edx = MEM32(esi + 0x14);
    eax = eax + edi;
    eax = eax + edx;
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    if (CMP_EQ(edx, 0x20000)) goto loc_003FA4B6; /* je: equal / zero */

loc_003FA4B1: ;
    eax = eax & 0xFFFFFFF;

loc_003FA4B6: ;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0x20);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_003FA450; /* jb: below (unsigned <) */

loc_003FA4C1: ;
    POP32(esp, ebx);

loc_003FA4C2: ;
    POP32(esp, edi);

loc_003FA4C3: ;
    (void)0; /* cmp MEM32(0x84B864), ebp - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(MEM32(0x84B864), ebp)) { sub_003FA4D3(); return; } /* je: equal / zero */

loc_003FA4CC: ;
    edx = esi;
    g_seh_ebp = ebp; sub_003FA2D0(); return; /* tail jmp 0x003FA2D0 */

}

/**
 * sub_003FA5C0
 * Original: 0x003FA5C0 - 0x003FA5E3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA5C0: ;
    edx = MEM32(eax + 4);
    if (CMP_A(edx, 4)) { sub_003FA5E3(); return; } /* ja: above (unsigned >) */

loc_003FA5C8: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x3FA5EC)); return; /* indirect tail jmp */

    eax = MEM32(eax + 0x1C);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003FA650
 * Original: 0x003FA650 - 0x003FA795 (325 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA650(void)
{
    float xmm0, xmm1;

loc_003FA650: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    ecx = 0x70;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(edx + 0x48) = xmm0; /* movss */
    MEMF(edx + 0x44) = xmm0; /* movss */
    MEMF(edx + 0x40) = xmm0; /* movss */
    MEMF(edx + 0x3C) = xmm0; /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */
    MEMF(edx + 0x30) = xmm0; /* movss */
    MEMF(edx + 0x2C) = xmm0; /* movss */
    MEMF(edx + 0x28) = xmm0; /* movss */
    MEMF(edx + 0x20) = xmm0; /* movss */
    MEMF(edx + 0x1C) = xmm0; /* movss */
    MEMF(edx + 0x18) = xmm0; /* movss */
    MEMF(edx + 0x14) = xmm0; /* movss */
    MEMF(edx + 0x4C) = xmm1; /* movss */
    MEMF(edx + 0x38) = xmm1; /* movss */
    MEMF(edx + 0x24) = xmm1; /* movss */
    MEMF(edx + 0x10) = xmm1; /* movss */
    MEMF(edx + 0x88) = xmm0; /* movss */
    MEMF(edx + 0x84) = xmm0; /* movss */
    MEMF(edx + 0x80) = xmm0; /* movss */
    MEMF(edx + 0x7C) = xmm0; /* movss */
    MEMF(edx + 0x74) = xmm0; /* movss */
    MEMF(edx + 0x70) = xmm0; /* movss */
    MEMF(edx + 0x6C) = xmm0; /* movss */
    MEMF(edx + 0x68) = xmm0; /* movss */
    MEMF(edx + 0x60) = xmm0; /* movss */
    MEMF(edx + 0x5C) = xmm0; /* movss */
    MEMF(edx + 0x58) = xmm0; /* movss */
    MEMF(edx + 0x54) = xmm0; /* movss */
    MEMF(edx + 0x8C) = xmm1; /* movss */
    MEMF(edx + 0x78) = xmm1; /* movss */
    MEMF(edx + 0x64) = xmm1; /* movss */
    MEMF(edx + 0x50) = xmm1; /* movss */
    MEMF(edx + 0xC8) = xmm0; /* movss */
    MEMF(edx + 0xC4) = xmm0; /* movss */
    MEMF(edx + 0xC0) = xmm0; /* movss */
    MEMF(edx + 0xBC) = xmm0; /* movss */
    MEMF(edx + 0xB4) = xmm0; /* movss */
    MEMF(edx + 0xB0) = xmm0; /* movss */
    MEMF(edx + 0xAC) = xmm0; /* movss */
    MEMF(edx + 0xA8) = xmm0; /* movss */
    MEMF(edx + 0xA0) = xmm0; /* movss */
    MEMF(edx + 0x9C) = xmm0; /* movss */
    MEMF(edx + 0x98) = xmm0; /* movss */
    MEMF(edx + 0x94) = xmm0; /* movss */
    MEMF(edx + 0xCC) = xmm1; /* movss */
    MEMF(edx + 0xB8) = xmm1; /* movss */
    MEMF(edx + 0xA4) = xmm1; /* movss */
    MEMF(edx + 0x90) = xmm1; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FA7A0
 * Original: 0x003FA7A0 - 0x003FA7E5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA7A0(void)
{

loc_003FA7A0: ;
    ecx = MEM32(eax + 0xD4);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xD8);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xDC);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xE4);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0xE8);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003FA7F0
 * Original: 0x003FA7F0 - 0x003FA80A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FA7F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FA7F0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = ebx;
    PUSH32(esp, edi);
    MEM8(esp + 0xB) = 0x80;
    edi = esi;
    ebp = ebp - esi;
    MEM32(esp + 0xC) = 6;
    g_seh_ebp = ebp; sub_003FA810(); return; /* tail jmp 0x003FA810 */

}

/**
 * sub_003FAA20
 * Original: 0x003FAA20 - 0x003FAB98 (376 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAA20(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003FAA20: ;
    esp = esp - 0xA8;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(eax + 0x14); /* movss */
    xmm2 = xmm2 / MEMF(eax + 0x10); /* divss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(eax); /* movss */
    xmm5 = MEMF(eax + 0xC); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(eax + 0x10); /* subss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x14); /* subss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    eax = MEM32(esp + 0xB0);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0xFC);
    xmm2 = xmm2 - xmm6; /* subss */
    PUSH32(esp, eax);
    ebx = esp + 0x10;
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    MEMF(esp + 0x80) = xmm4; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0x90) = xmm2; /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FA7F0(); /* call 0x003FA7F0 */

loc_003FAB8D: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FABA0
 * Original: 0x003FABA0 - 0x003FAE8E (750 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FABA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FABA0: ;
    esp = esp - 0xB0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(eax); /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x14); /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x10); /* subss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    ebp = esp + 0x14;
    ebx = 0; /* xor self */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    edi = esi;
    ebp = ebp - esi;

loc_003FACE3: ;
    if (CMP_EQ(ebx, 4)) goto loc_003FACFA; /* je: equal / zero */

loc_003FACE8: ;
    eax = MEM32(esp + 0xC0);
    PUSH32(esp, eax);
    ecx = edi + ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003FACFA: ;
    ebx++;
    edi = edi + 0xC;
    if (CMP_L(ebx, 6)) goto loc_003FACE3; /* jl: less (signed <) */

loc_003FAD03: ;
    ebp = esi + 0x48;
    edi = esp + 0x5C;
    edx = ebp;
    ebx = 6;

loc_003FAD11: ;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = edi;
    eax = MEM32(esp + 0xC);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0xC0);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    edx = edx + 0x10;
    edi = edi + 0x10;
    ebx--;
    if ((ebx != 0)) goto loc_003FAD11; /* jne: not equal / not zero */

loc_003FAD67: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm1 = MEMF(ebp + 4); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ebp); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x14); /* mulss */
    xmm1 = MEMF(esi + 0x5C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x58); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x70); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm1 = MEMF(esi + 0x6C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x68); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x20); /* mulss */
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x1C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x78); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x18); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x90); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm1 = MEMF(esi + 0x8C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x88); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esi + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xA0); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x44); /* mulss */
    xmm1 = MEMF(esi + 0x9C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x40); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x3C); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x98); /* mulss */
    POP32(esp, edi);
    POP32(esp, ebp);
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esi + 0xA4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_003FAE90
 * Original: 0x003FAE90 - 0x003FB029 (409 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FAE90(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003FAE90: ;
    esp = esp - 0xB4;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 / MEMF(esp + 8); /* divss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - MEMF(eax + 8); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0xC); /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, 0xFC);
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    PUSH32(esp, 0xFC);
    xmm2 = xmm4; /* movaps */
    PUSH32(esp, eax);
    ebx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm4; /* movss */
    MEMF(esp + 0x88) = xmm2; /* movss */
    MEMF(esp + 0x8C) = xmm3; /* movss */
    MEMF(esp + 0x98) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm3; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FA7F0(); /* call 0x003FA7F0 */

loc_003FB01E: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    esp = esp + 0xB4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003FB030
 * Original: 0x003FB030 - 0x003FB1A1 (369 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB030(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003FB030: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp = esp - 8;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 1)) { sub_003FB1A1(); return; } /* je: equal / zero */

loc_003FB03F: ;
    xmm0 = MEMF(ecx + 0x100); /* movss */
    xmm7 = MEMF(ecx + 0xF8); /* movss */
    xmm1 = MEMF(ecx + 0xFC); /* movss */
    xmm3 = MEMF(ecx + 0xF4); /* movss */
    xmm4 = MEMF(ecx + 0xEC); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xF0); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = xmm3 + xmm7; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 / xmm0; /* divss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm2; /* movaps */
    MEMF(ecx + 0xB0) = xmm3; /* movss */
    eax = ecx + 0xEC;
    xmm7 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 4); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm3 = xmm3 / xmm7; /* divss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(ecx + 0xA4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm5 = xmm5 / xmm3; /* divss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(ecx + 0x90) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0xB4) = xmm4; /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(ecx + 0xA0) = xmm0; /* movss */
    MEMF(ecx + 0xC0) = xmm0; /* movss */
    MEMF(ecx + 0x94) = xmm0; /* movss */
    MEMF(ecx + 0xC4) = xmm0; /* movss */
    MEMF(ecx + 0x98) = xmm0; /* movss */
    MEMF(ecx + 0xA8) = xmm0; /* movss */
    MEMF(ecx + 0xB8) = xmm4; /* movss */
    MEMF(ecx + 0xC8) = xmm2; /* movss */
    MEMF(ecx + 0x9C) = xmm0; /* movss */
    MEMF(ecx + 0xAC) = xmm0; /* movss */
    MEMF(ecx + 0xBC) = xmm1; /* movss */
    MEMF(ecx + 0xCC) = xmm0; /* movss */
    esi = ecx + 0x114;
    ecx = ecx + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FAA20(); /* call 0x003FAA20 */

loc_003FB199: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FB250
 * Original: 0x003FB250 - 0x003FB2C7 (119 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB250(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003FB250: ;
    esp = esp - 0x18;
    edx = esi + 0x90;
    eax = 1;
    PUSH32(esp, 0); sub_00539600(); /* call 0x00539600 */

loc_003FB263: ;
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003FB26E: ;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    MEM32(esp) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003FB27C: ;
    fp_push(MEMF(esi + 0xDC)); /* fld float */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003FB28B: ;
    fp_push(MEMF(esi + 0xE0)); /* fld float */
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003FB29A: ;
    xmm0 = MEMF(esi + 0xE4); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = esp;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xE8); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_003FB2C3: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003FB2D0
 * Original: 0x003FB2D0 - 0x003FB3B6 (230 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FB2D0: ;
    eax = MEM32(0x84B86C);
    esp = esp - 0x44;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003FB33F; /* je: equal / zero */

loc_003FB2DD: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_003FB2ED: ;
    eax = MEM32(0x84B870);
    if (TEST_Z(eax, eax)) goto loc_003FB2FC; /* je: equal / zero */

loc_003FB2F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003FB2FC: ;
    eax = MEM32(0x84B874);
    if (TEST_Z(eax, eax)) goto loc_003FB30B; /* je: equal / zero */

loc_003FB305: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003FB30B: ;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi + 0x938);
    if (CMP_NE(eax, 1)) goto loc_003FB338; /* jne: not equal / not zero */

loc_003FB31C: ;
    eax = edi;
    PUSH32(esp, 0); sub_0053EEF0(); /* call 0x0053EEF0 */

loc_003FB323: ;
    ecx = 0x928;
    eax = 0; /* xor self */
    MEM32(0x5499E8) = 0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_003FB33F;

loc_003FB338: ;
    eax--;
    MEM32(edi + 0x938) = eax;

loc_003FB33F: ;
    edx = ZX16(MEM16(esi));
    eax = 0; /* xor self */
    ecx = 0x11;
    edi = esp + 4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(esi + 2));
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 4) = edx;
    edx = ZX8(MEM8(esi + 0x1A));
    MEM32(esp + 8) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = edx;
    (void)0; /* cmp MEM32(esi + 8), 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi + 8), 2)) ? 1 : 0); /* sete */
    MEM32(esp + 0xC) = 6;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x28) = 0x2A;
    eax = eax + eax + 1;
    MEM32(esp + 0x18) = eax;
    eax = ZX8(MEM8(esi + 0x18));
    eax--;
    if ((eax == 0)) { sub_003FB3B6(); return; } /* je: equal / zero */

loc_003FB392: ;
    eax--;
    if ((eax == 0)) goto loc_003FB3AC; /* je: equal / zero */

loc_003FB395: ;
    eax--;
    if ((eax == 0)) goto loc_003FB3A2; /* je: equal / zero */

loc_003FB398: ;
    MEM32(esp + 0x34) = 0;
    g_seh_ebp = ebp; sub_003FB3BE(); return; /* tail jmp 0x003FB3BE */

loc_003FB3A2: ;
    MEM32(esp + 0x34) = 4;
    g_seh_ebp = ebp; sub_003FB3BE(); return; /* tail jmp 0x003FB3BE */

loc_003FB3AC: ;
    MEM32(esp + 0x34) = 2;
    g_seh_ebp = ebp; sub_003FB3BE(); return; /* tail jmp 0x003FB3BE */

}

/**
 * sub_003FB4C0
 * Original: 0x003FB4C0 - 0x003FB537 (119 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB4C0(void)
{
    int _cf = 0; /* carry flag */
    float xmm0;

loc_003FB4C0: ;
    esp = esp - 0x18;
    eax = ZX16(MEM16(0x827F24));
    ecx = ZX16(MEM16(0x827F20));
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_003FB509: ;
    ecx = MEM32(0x827F18);
    eax = MEM32(0x827F1C);
    PUSH32(esp, 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, 0x3F800000);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, eax);
    ecx = ecx & 0xF0;
    ecx = ecx | 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_003FB533: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003FB540
 * Original: 0x003FB540 - 0x003FB6C2 (386 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB540(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003FB540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = MEM32(ecx + 0x48);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + edi;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm1; /* movss */
    MEMF(eax + 0x78) = xmm1; /* movss */
    MEMF(eax + 0x64) = xmm1; /* movss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    esi = MEM32(ecx + 0x38);
    MEM32(eax + 0x90) = esi;
    ebx = 0; /* xor self */
    MEM32(eax + 0x94) = ebx;
    MEM8(eax + 0x98) = LO8(ebx);
    MEM8(eax + 0x99) = LO8(ebx);
    edx = eax + 0xB0;
    MEM32(eax + 0x9C) = edx;
    esi = ZX16(MEM16(ecx + 0x20));
    esi = esi + esi * 2;
    edx = edx + esi * 4;
    MEM32(eax + 0xA0) = edx;
    esi = ZX16(MEM16(ecx + 0x20));
    esi = esi << 4;
    edx = edx + esi + 0x10;
    MEM32(eax + 0xA4) = edx;
    esi = ZX16(MEM16(ecx + 0x20));
    edx = edx + esi * 8 + 8;
    MEM32(eax + 0xA8) = edx;
    esi = MEM32(ecx + 0x3C);
    esi = esi + edx;
    MEM32(eax + 0xAC) = esi;
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(ecx + 0x1C), LO16(ebx))) goto loc_003FB69E; /* jbe: below or equal (unsigned <=) */

loc_003FB669: ;
    /* nop */

loc_003FB670: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + edx * 4);
    eax = MEM32(eax + 0x40);
    eax = eax + edi;
    MEM8(eax) = 1;
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = ebx;
    eax = ZX16(MEM16(ecx + 0x1C));
    edx++;
    if (CMP_L(edx, eax)) goto loc_003FB670; /* jl: less (signed <) */

loc_003FB69E: ;
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(ecx + 0x28), LO16(ebx))) goto loc_003FB6BF; /* jbe: below or equal (unsigned <=) */

loc_003FB6A6: ;
    eax = MEM32(ecx + 0x24);
    eax = MEM32(eax + edx * 4);
    eax = MEM32(eax + 0x4C);
    eax = eax + edi;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = ZX16(MEM16(ecx + 0x28));
    edx++;
    if (CMP_L(edx, eax)) goto loc_003FB6A6; /* jl: less (signed <) */

loc_003FB6BF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FB6D0
 * Original: 0x003FB6D0 - 0x003FB6FF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB6D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FB6D0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(MEM16(edi + 0x28), LO16(esi))) goto loc_003FB6FD; /* jbe: below or equal (unsigned <=) */

loc_003FB6D9: ;
    /* nop */

loc_003FB6E0: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx + 0x3C);
    if (TEST_Z(edx, edx)) goto loc_003FB6F4; /* je: equal / zero */

loc_003FB6ED: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003FE020(); /* call 0x003FE020 */

loc_003FB6F4: ;
    edx = ZX16(MEM16(edi + 0x28));
    esi++;
    if (CMP_L(esi, edx)) goto loc_003FB6E0; /* jl: less (signed <) */

loc_003FB6FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FB700
 * Original: 0x003FB700 - 0x003FB762 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB700(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FB700: ;
    esp = esp - 8;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(edx + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = eax + edi;
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = eax + 4;
    if (TEST_Z(ecx, ecx)) goto loc_003FB72D; /* je: equal / zero */

loc_003FB723: ;
    ecx = MEM32(ecx + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_003FB72D; /* je: equal / zero */

loc_003FB72A: ;
    edx = MEM32(ecx + 0x28);

loc_003FB72D: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_003FB742; /* je: equal / zero */

loc_003FB738: ;
    ecx = MEM32(ecx + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_003FB742; /* je: equal / zero */

loc_003FB73F: ;
    edx = edx + MEM32(ecx + 0x28);

loc_003FB742: ;
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax) = edi;
    MEM8(edi) = 0;
    if (CMP_BE(edx & edx, 0)) goto loc_003FB75C; /* jbe: below or equal (unsigned <=) */

loc_003FB74D: ;
    /* nop */

loc_003FB750: ;
    esi = MEM32(eax);
    MEM8(esi + ecx + 1) = 0;
    ecx++;
    if (CMP_B(ecx, edx)) goto loc_003FB750; /* jb: below (unsigned <) */

loc_003FB75C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FB770
 * Original: 0x003FB770 - 0x003FB7EE (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FB770: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(esi + 0x4C);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM32(eax + 0x10) = 0;
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    PUSH32(esp, edi);
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    edi = eax + 0x30;
    MEM32(eax + 0x2C) = edi;
    ecx = MEM32(esi + 0x44);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x1C), LO16(edi))) goto loc_003FB7EC; /* jbe: below or equal (unsigned <=) */

loc_003FB7D6: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 4);
    edx = ebx;
    PUSH32(esp, 0); sub_003FB700(); /* call 0x003FB700 */

loc_003FB7E3: ;
    ecx = ZX16(MEM16(esi + 0x1C));
    edi++;
    if (CMP_L(edi, ecx)) goto loc_003FB7D6; /* jl: less (signed <) */

loc_003FB7EC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FB7F0
 * Original: 0x003FB7F0 - 0x003FB865 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FB7F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 0x28), LO16(ebp))) goto loc_003FB862; /* jbe: below or equal (unsigned <=) */

loc_003FB7FE: ;
    PUSH32(esp, esi);
    /* nop */

loc_003FB800: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(eax + ebp * 4);
    esi = MEM32(ecx + 0x3C);
    if (TEST_Z(esi, esi)) goto loc_003FB858; /* je: equal / zero */

loc_003FB80D: ;
    edx = MEM32(edi + 8);
    eax = MEM32(esi + 0x38);
    eax = eax + edx;
    edx = eax + 4;
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_003FB82B; /* je: equal / zero */

loc_003FB821: ;
    eax = MEM32(eax + 0x28);
    MEM32(0x8281C0) = eax;
    goto loc_003FB835;

loc_003FB82B: ;
    MEM32(0x8281C0) = 0;

loc_003FB835: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FE0C0(); /* call 0x003FE0C0 */

loc_003FB83F: ;
    esi = MEM32(esi + 0x28);
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_003FB858; /* je: equal / zero */

loc_003FB849: ;
    PUSH32(esp, edi);
    ebx = esi;
    PUSH32(esp, 0); sub_003FE570(); /* call 0x003FE570 */

loc_003FB851: ;
    ebx = MEM32(esp + 0x14);
    esp = esp + 4;

loc_003FB858: ;
    edx = ZX16(MEM16(ebx + 0x28));
    ebp++;
    if (CMP_L(ebp, edx)) goto loc_003FB800; /* jl: less (signed <) */

loc_003FB861: ;
    POP32(esp, esi);

loc_003FB862: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
