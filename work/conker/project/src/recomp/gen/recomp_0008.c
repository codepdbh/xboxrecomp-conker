/**
 * Burnout 3 - Recompiled code chunk 8
 * Functions: 250 (0x000A9390 - 0x000C7550)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A9390
 * Original: 0x000A9390 - 0x000A93B1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9390(void)
{

loc_000A9390: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x94);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_000A93AC: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A93C0
 * Original: 0x000A93C0 - 0x000A94ED (301 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A93C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A93C0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x94);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x64);
    if (TEST_Z(edx, edx)) { sub_000A94ED(); return; } /* je: equal / zero */

loc_000A93DC: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) { sub_000A94ED(); return; } /* jne: not equal / not zero */

loc_000A93EB: ;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(ebx) = 0;
    esi = edi + 0x34;
    edx = esi;
    ebp = MEM32(edx);
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = edx;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 8));
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A9500(); /* call 0x000A9500 */

loc_000A9422: ;
    xmm0 = MEMF(esi); /* movss */
    esp = esp + 0x14;
    /* ucomiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000A9458; /* jp: parity */

loc_000A9434: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000A9458; /* jp: parity */

loc_000A9444: ;
    xmm0 = MEMF(edi + 0x3C); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000A94E3; /* jnp: not parity */

loc_000A9458: ;
    xmm3 = MEMF(0x649274); /* movss */
    MEM8(ebx) = 1;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm1 = MEMF(edi + 0x5C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm2 = MEMF(edi + 0x60); /* movss */
    xmm2 = xmm2 - MEMF(esi + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi); /* addss */
    MEMF(edi + 0x40) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 4); /* addss */
    MEMF(edi + 0x44) = xmm4; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 8); /* addss */
    xmm3 = MEMF(0x649270); /* movss */
    MEMF(edi + 0x48) = xmm4; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(edi + 0x50) = xmm1; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 8); /* addss */
    MEMF(edi + 0x54) = xmm2; /* movss */

loc_000A94E3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9500
 * Original: 0x000A9500 - 0x000A959E (158 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9500: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x20;
    edi = esp + 0x2C;
    ecx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_000A9522: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = ebx;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000A9538: ;
    xmm0 = MEMF(ebp + 0x1F8); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 4); /* mulss */
    eax = MEM32(esp + 0x3C);
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    POP32(esp, edi);
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ebx + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_000A959A; /* je: equal / zero */

loc_000A9587: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000A959A: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A95A0
 * Original: 0x000A95A0 - 0x000A96C9 (297 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A95A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_000A95A0: ;
    esp = esp - 0xC;
    xmm6 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    eax = ebx + 1;
    ecx = esp + 4;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 / xmm0; /* divss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    if (CMP_LE(ebx & ebx, 0)) goto loc_000A96C3; /* jle: less or equal (signed <=) */

loc_000A95F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    esi = esi + 8;
    /* nop */

loc_000A9600: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(esi + -8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 4); /* addss */
    MEMF(esi + -4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    MEMF(esi) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A963F: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm7 = xmm7 + MEMF(esi); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A965B: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 + MEMF(esi + -4); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A9681: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 + MEMF(esi + -8); /* addss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    MEMF(esi + -8) = xmm2; /* movss */
    MEMF(esi + -4) = xmm1; /* movss */
    MEMF(esi) = xmm7; /* movss */
    esi = esi + 0xC;
    ebx--;
    xmm6 = xmm6 * xmm0; /* mulss */
    if ((ebx != 0)) goto loc_000A9600; /* jne: not equal / not zero */

loc_000A96C2: ;
    POP32(esp, esi);

loc_000A96C3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A96D0
 * Original: 0x000A96D0 - 0x000A98F7 (551 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A96D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000A96D0: ;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x90);
    if (TEST_Z(ebx, ebx)) goto loc_000A98EF; /* je: equal / zero */

loc_000A96E6: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000A98EF; /* je: equal / zero */

loc_000A96F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x4C;
    edi = esp + 0x24;
    ecx = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_000A9709: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0xA0);
    edx = MEM32(esp + 0x9C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000A9727: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    xmm0 = MEMF(ebx + 0x1F8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    esp = esp + 0xC;
    PUSH32(esp, 0xD3);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A9776: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x41C80000);
    PUSH32(esp, 0x3D99999A);
    PUSH32(esp, 0x3D99999A);
    eax = esp + 0x20;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000F69D0(); /* call 0x000F69D0 */

loc_000A97A2: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7F0); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x1C;
    eax = edi;
    ebx = edi;
    MEM32(esp + 0x64) = 0xF;
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEM32(esp + 0x70) = 0xEF;
    MEM8(esp + 0x84) = 0;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000A984C: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    esi = esp + 0x54;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000A98D7: ;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    MEM32(esp + 0x78) = 0xF0;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000A98EA: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000A98EF: ;
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9900
 * Original: 0x000A9900 - 0x000A9923 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A9900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D8;
    edx = MEM32(esi + 0x3C8);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (TEST_NZ(edx, edx)) { sub_000A9923(); return; } /* jne: not equal / not zero */

loc_000A991B: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9BA0
 * Original: 0x000A9BA0 - 0x000A9CD3 (307 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9BA0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x94);
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) { sub_000A9CD3(); return; } /* je: equal / zero */

loc_000A9BBC: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ecx + 4))) { sub_000A9CD3(); return; } /* jne: not equal / not zero */

loc_000A9BCB: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_Z(edx, edx)) { sub_000A9CD3(); return; } /* je: equal / zero */

loc_000A9BD9: ;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(ebx) = 0;
    esi = edi + 0x34;
    edx = esi;
    ebp = MEM32(edx);
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = edx;
    edx = ecx + 8;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(ecx + 0x14));
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_000AA190(); /* call 0x000AA190 */

loc_000A9C08: ;
    xmm0 = MEMF(esi); /* movss */
    esp = esp + 8;
    /* ucomiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000A9C3E; /* jp: parity */

loc_000A9C1A: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000A9C3E; /* jp: parity */

loc_000A9C2A: ;
    xmm0 = MEMF(edi + 0x3C); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000A9CC9; /* jnp: not parity */

loc_000A9C3E: ;
    xmm3 = MEMF(0x649274); /* movss */
    MEM8(ebx) = 1;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm1 = MEMF(edi + 0x5C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm2 = MEMF(edi + 0x60); /* movss */
    xmm2 = xmm2 - MEMF(esi + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi); /* addss */
    MEMF(edi + 0x40) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 4); /* addss */
    MEMF(edi + 0x44) = xmm4; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 8); /* addss */
    xmm3 = MEMF(0x649270); /* movss */
    MEMF(edi + 0x48) = xmm4; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(edi + 0x50) = xmm1; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 8); /* addss */
    MEMF(edi + 0x54) = xmm2; /* movss */

loc_000A9CC9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9CE0
 * Original: 0x000A9CE0 - 0x000A9D57 (119 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9CE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000A9CE0: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm2 > xmm0)) goto loc_000A9D53; /* ja: above (unsigned >) */

loc_000A9D16: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000A9D23; /* jbe: below or equal (unsigned <=) */

loc_000A9D1B: ;
    MEMF(esp + 8) = xmm1; /* movss */
    goto loc_000A9D2C;

loc_000A9D23: ;
    /* comiss xmm0, MEMF(0x648E68) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E68))) goto loc_000A9D53; /* jbe: below or equal (unsigned <=) */

loc_000A9D2C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000A9D4D: ;
    MEM8(esi + 0x8F) = LO8(eax);

loc_000A9D53: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000A9D60
 * Original: 0x000A9D60 - 0x000A9D85 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9D60: ;
    edx = MEM32(esp + 4);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0x94);
    ecx = MEM32(ebp);
    eax = MEM32(ecx + 0xB0);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, MEM32(ebp + 4))) { sub_000A9D85(); return; } /* je: equal / zero */

loc_000A9D7D: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9F30
 * Original: 0x000A9F30 - 0x000A9F90 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9F30: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    ebx = MEM32(ebp + 0x94);
    eax = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(eax, eax)) { sub_000A9F90(); return; } /* jne: not equal / not zero */

loc_000A9F4E: ;
    ecx = eax + 0x84;
    eax = eax + 0x78;
    edx = esp + 0x18;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x34);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    g_seh_ebp = ebp; sub_000A9FD7(); return; /* tail jmp 0x000A9FD7 */

}

/**
 * sub_000AA190
 * Original: 0x000AA190 - 0x000AA1BD (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA190(void)
{
    uint32_t ebp;

loc_000AA190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    edx = ZX8(LO8(edx));
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000AA1A6: ;
    edx = MEM32(ebp + 0xC);
    ecx = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000AA1B6: ;
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA1C0
 * Original: 0x000AA1C0 - 0x000AA214 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000AA1C0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x94);
    if (TEST_Z(eax, eax)) goto loc_000AA1DD; /* je: equal / zero */

loc_000AA1D3: ;
    if (CMP_EQ(eax, 3)) goto loc_000AA1DD; /* je: equal / zero */

loc_000AA1D8: ;
    if (CMP_NE(eax, 0x5A)) goto loc_000AA212; /* jne: not equal / not zero */

loc_000AA1DD: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_000AA212; /* jne: not equal / not zero */

loc_000AA1E8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AA212; /* jne: not equal / not zero */

loc_000AA1F1: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AA1F8: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AA212; /* jl: less (signed <) */

loc_000AA1FF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000AA214(); return; } /* je: equal / zero */

loc_000AA20C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AA20F: ;
    esp = esp + 4;

loc_000AA212: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA280
 * Original: 0x000AA280 - 0x000AA2A9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA280(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000AA280: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x94);
    eax = MEM32(esp + 0xC);
    eax = eax - 0x64;
    if ((eax == 0)) goto loc_000AA296; /* je: equal / zero */

loc_000AA293: ;
    eax--;
    if ((eax != 0)) goto loc_000AA2A8; /* jne: not equal / not zero */

loc_000AA296: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    if (CMP_NE(eax, MEM32(ecx))) goto loc_000AA2A8; /* jne: not equal / not zero */

loc_000AA2A0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 8) = xmm0; /* movss */

loc_000AA2A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA2B0
 * Original: 0x000AA2B0 - 0x000AA770 (1216 bytes, 335 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA2B0: ;
    PUSH32(esp, ecx);
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x80);
    ebx = 0x7F800000;
    (void)0; /* test ebx, eax - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (TEST_NZ(ebx, eax)) goto loc_000AA2D5; /* jne: not equal / not zero */

loc_000AA2CD: ;
    MEMF(esi + 0x80) = xmm3; /* movss */

loc_000AA2D5: ;
    if (TEST_NZ(MEM32(esi + 0x78), ebx)) goto loc_000AA2DF; /* jne: not equal / not zero */

loc_000AA2DA: ;
    MEMF(esi + 0x78) = xmm3; /* movss */

loc_000AA2DF: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    SET_LO8(eax, MEM8(esi + 0x64));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esi + 0x80); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000AA325; /* je: equal / zero */

loc_000AA300: ;
    eax = SX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x58E938);
    if (TEST_Z(eax, eax)) goto loc_000AA325; /* je: equal / zero */

loc_000AA30E: ;
    ecx = esp + 0xF;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AA316: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AA322; /* jne: not equal / not zero */

loc_000AA31D: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000AA322: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_000AA325: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(esi + 0x30) = MEM16(esi + 0x30) - LO16(edx);
    (void)0; /* test MEM8(esi + 0x32), 1 - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + 0x30));
    if (TEST_Z(MEM8(esi + 0x32), 1)) goto loc_000AA37A; /* je: equal / zero */

loc_000AA33A: ;
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_000AA37A; /* jge: greater or equal (signed >=) */

loc_000AA33F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AA37A; /* jne: not equal / not zero */

loc_000AA348: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AA34F: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AA37A; /* jl: less (signed <) */

loc_000AA356: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000AA36E; /* je: equal / zero */

loc_000AA363: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AA366: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    goto loc_000AA37A;

loc_000AA36E: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000AA37A: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000AA38A; /* je: equal / zero */

loc_000AA382: ;
    PUSH32(esp, 0); sub_000A79C0(); /* call 0x000A79C0 */

loc_000AA387: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_000AA38A: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x9C) = MEM16(esi + 0x9C) - LO16(eax);
    SET_LO8(ecx, MEM8(esp + 0xF));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + 0x9C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000AA3AB; /* jne: not equal / not zero */

loc_000AA3A6: ;
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_000AA3D6; /* jge: greater or equal (signed >=) */

loc_000AA3AB: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A7C50(); /* call 0x000A7C50 */

loc_000AA3B8: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA3C0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x76);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm3 = 0.0f; /* xorps self = zero */
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x74));
    MEM16(esi + 0x9C) = LO16(edx);

loc_000AA3D6: ;
    eax = MEM32(esi + 0x68);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    ebp = 1;
    eax++;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    ecx = edx + esi + 0xBC;
    if (CMP_LE(eax, ebp)) goto loc_000AA72B; /* jle: less or equal (signed <=) */

loc_000AA3F3: ;
    xmm7 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = ecx + 0x60;
    goto loc_000AA410;

loc_000AA401: ;
    ebx = 0x7F800000;
    goto loc_000AA410;

    /* nop */
    /* nop */

loc_000AA410: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(esi + 0x88); /* movss */
    xmm5 = MEMF(esi + 0x84); /* movss */
    xmm2 = MEMF(edi + -16); /* movss */
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    edx = edi + -16;
    if (1 /* jp after test - parity */) goto loc_000AA49E; /* jp: parity */

loc_000AA439: ;
    ecx = edi + -28;

loc_000AA43C: ;
    MEMF(ecx) = xmm2; /* movss */
    MEMF(edi + -4) = xmm3; /* movss */

loc_000AA445: ;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(0x648E94) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648E94))) goto loc_000AA45F; /* ja: above (unsigned >) */

loc_000AA452: ;
    xmm0 = MEMF(0x6499F4); /* movss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx))) goto loc_000AA463; /* jbe: below or equal (unsigned <=) */

loc_000AA45F: ;
    MEMF(ecx) = xmm3; /* movss */

loc_000AA463: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(esi + 0x88); /* movss */
    xmm5 = MEMF(esi + 0x84); /* movss */
    xmm2 = MEMF(edi + -12); /* movss */
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AA5DD; /* jnp: not parity */

loc_000AA48D: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_000AA548; /* jbe: below or equal (unsigned <=) */

loc_000AA496: ;
    xmm1 = xmm3; /* movaps */
    goto loc_000AA550;

loc_000AA49E: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_000AA4A8; /* jbe: below or equal (unsigned <=) */

loc_000AA4A3: ;
    xmm1 = xmm3; /* movaps */
    goto loc_000AA4B0;

loc_000AA4A8: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_000AA4B0; /* jbe: below or equal (unsigned <=) */

loc_000AA4AD: ;
    xmm1 = xmm7; /* movaps */

loc_000AA4B0: ;
    xmm6 = MEMF(0x648D34); /* movss */
    ecx = edi + -28;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_000AA4CA; /* ja: above (unsigned >) */

loc_000AA4C7: ;
    xmm6 = xmm7; /* movaps */

loc_000AA4CA: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - MEMF(edi + -4); /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi + -4); /* addss */
    MEMF(edi + -4) = xmm0; /* movss */
    if (TEST_NZ(MEM32(edi + -4), ebx)) goto loc_000AA4EF; /* jne: not equal / not zero */

loc_000AA4EA: ;
    MEMF(edi + -4) = xmm3; /* movss */

loc_000AA4EF: ;
    eax = MEM32(edi + -4);
    ebx = eax;
    ebx = ebx & 0x7F800000;
    if (CMP_NE(ebx, 0x7F800000)) goto loc_000AA50E; /* jne: not equal / not zero */

loc_000AA502: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_000AA50E; /* je: equal / zero */

loc_000AA509: ;
    MEMF(edi + -4) = xmm3; /* movss */

loc_000AA50E: ;
    xmm0 = MEMF(edi + -4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm1 = MEMF(0x648D34); /* movss */
    if ((xmm3 > xmm1)) goto loc_000AA532; /* ja: above (unsigned >) */

loc_000AA52F: ;
    xmm1 = xmm7; /* movaps */

loc_000AA532: ;
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AA43C; /* jp: parity */

loc_000AA53F: ;
    MEMF(ecx) = xmm0; /* movss */
    goto loc_000AA445;

loc_000AA548: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_000AA550; /* jbe: below or equal (unsigned <=) */

loc_000AA54D: ;
    xmm1 = xmm7; /* movaps */

loc_000AA550: ;
    xmm6 = MEMF(0x648D34); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(edi + -24); /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_000AA568; /* ja: above (unsigned >) */

loc_000AA565: ;
    xmm6 = xmm7; /* movaps */

loc_000AA568: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(edi) = xmm0; /* movss */
    if (TEST_NZ(MEM32(edi), 0x7F800000)) goto loc_000AA58C; /* jne: not equal / not zero */

loc_000AA588: ;
    MEMF(edi) = xmm3; /* movss */

loc_000AA58C: ;
    eax = MEM32(edi);
    ebx = eax;
    ebx = ebx & 0x7F800000;
    if (CMP_NE(ebx, 0x7F800000)) goto loc_000AA5A9; /* jne: not equal / not zero */

loc_000AA59E: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_000AA5A9; /* je: equal / zero */

loc_000AA5A5: ;
    MEMF(edi) = xmm3; /* movss */

loc_000AA5A9: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi + -24); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm1 = MEMF(0x648D34); /* movss */
    if ((xmm3 > xmm1)) goto loc_000AA5CD; /* ja: above (unsigned >) */

loc_000AA5CA: ;
    xmm1 = xmm7; /* movaps */

loc_000AA5CD: ;
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AA5DD; /* jp: parity */

loc_000AA5D6: ;
    MEMF(edi + -24) = xmm0; /* movss */
    goto loc_000AA5E6;

loc_000AA5DD: ;
    MEMF(edi + -24) = xmm2; /* movss */
    MEMF(edi) = xmm3; /* movss */

loc_000AA5E6: ;
    xmm0 = MEMF(edi + -24); /* movss */
    /* comiss xmm0, MEMF(0x648E94) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648E94))) goto loc_000AA602; /* ja: above (unsigned >) */

loc_000AA5F4: ;
    xmm0 = MEMF(0x6499F4); /* movss */
    /* comiss xmm0, MEMF(edi + -24) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + -24))) goto loc_000AA607; /* jbe: below or equal (unsigned <=) */

loc_000AA602: ;
    MEMF(edi + -24) = xmm3; /* movss */

loc_000AA607: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(esi + 0x88); /* movss */
    xmm5 = MEMF(esi + 0x84); /* movss */
    xmm2 = MEMF(edi + -8); /* movss */
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AA6D4; /* jnp: not parity */

loc_000AA631: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_000AA63B; /* jbe: below or equal (unsigned <=) */

loc_000AA636: ;
    xmm1 = xmm3; /* movaps */
    goto loc_000AA643;

loc_000AA63B: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_000AA643; /* jbe: below or equal (unsigned <=) */

loc_000AA640: ;
    xmm1 = xmm7; /* movaps */

loc_000AA643: ;
    xmm6 = MEMF(0x648D34); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(edi + -20); /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_000AA65B; /* ja: above (unsigned >) */

loc_000AA658: ;
    xmm6 = xmm7; /* movaps */

loc_000AA65B: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0; /* movss */
    if (TEST_NZ(MEM32(edi + 4), 0x7F800000)) goto loc_000AA684; /* jne: not equal / not zero */

loc_000AA67F: ;
    MEMF(edi + 4) = xmm3; /* movss */

loc_000AA684: ;
    eax = MEM32(edi + 4);
    ebx = eax;
    ebx = ebx & 0x7F800000;
    if (CMP_NE(ebx, 0x7F800000)) goto loc_000AA6A3; /* jne: not equal / not zero */

loc_000AA697: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_000AA6A3; /* je: equal / zero */

loc_000AA69E: ;
    MEMF(edi + 4) = xmm3; /* movss */

loc_000AA6A3: ;
    xmm1 = xmm1 * MEMF(edi + 4); /* mulss */
    xmm1 = xmm1 + MEMF(edi + -20); /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm0 = MEMF(0x648D34); /* movss */
    if ((xmm3 > xmm0)) goto loc_000AA6C4; /* ja: above (unsigned >) */

loc_000AA6C1: ;
    xmm0 = xmm7; /* movaps */

loc_000AA6C4: ;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AA6D4; /* jp: parity */

loc_000AA6CD: ;
    MEMF(edi + -20) = xmm1; /* movss */
    goto loc_000AA6DE;

loc_000AA6D4: ;
    MEMF(edi + -20) = xmm2; /* movss */
    MEMF(edi + 4) = xmm3; /* movss */

loc_000AA6DE: ;
    xmm0 = MEMF(edi + -20); /* movss */
    /* comiss xmm0, MEMF(0x648E94) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648E94))) goto loc_000AA6FA; /* ja: above (unsigned >) */

loc_000AA6EC: ;
    xmm0 = MEMF(0x6499F4); /* movss */
    /* comiss xmm0, MEMF(edi + -20) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + -20))) goto loc_000AA6FF; /* jbe: below or equal (unsigned <=) */

loc_000AA6FA: ;
    MEMF(edi + -20) = xmm3; /* movss */

loc_000AA6FF: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000AA706: ;
    xmm1 = MEMF(0x648CE4); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000AA71A; /* jbe: below or equal (unsigned <=) */

loc_000AA716: ;
    MEM8(edi + -44) = 1;

loc_000AA71A: ;
    eax = MEM32(esi + 0x68);
    ebp++;
    edi = edi + 0x34;
    eax++;
    if (CMP_L(ebp, eax)) goto loc_000AA401; /* jl: less (signed <) */

loc_000AA72A: ;
    POP32(esp, edi);

loc_000AA72B: ;
    eax = MEM32(esi + 0xA0);
    if (TEST_Z(eax, eax)) goto loc_000AA74B; /* je: equal / zero */

loc_000AA735: ;
    ecx = esi + 0x34;
    edx = MEM32(ecx);
    eax = eax + 0x70;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_000AA74B: ;
    eax = MEM32(esi + 0xA4);
    if (TEST_Z(eax, eax)) goto loc_000AA76B; /* je: equal / zero */

loc_000AA755: ;
    esi = esi + 0x58;
    edx = MEM32(esi);
    eax = eax + 0x70;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;

loc_000AA76B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA770
 * Original: 0x000AA770 - 0x000AAB7A (1034 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_000AA770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA783: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648F58); /* mulss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 > xmm2)) goto loc_000AAB74; /* ja: above (unsigned >) */

loc_000AA79F: ;
    edi = 0xF;
    MEM8(esp + 0x59) = 6;
    MEM8(esp + 0x20) = 1;
    MEM8(esp + 0x58) = 5;
    MEM16(esp + 0x68) = 2;
    MEM16(esp + 0x6A) = LO16(edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA7C4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x86) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA7DB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x85) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA7F2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, 0xFF);
    MEM8(esp + 0x87) = LO8(ebx);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x84) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA811: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x82) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA828: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x81) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AA83F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = esp + 0x88;
    MEM16(esp + 0x24) = LO16(edi);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    edi = 8;
    MEM8(esp + 0x83) = LO8(ebx);
    MEM32(esp + 0x5C) = edi;
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEM8(esp + 0x26) = 7;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x80) = LO8(edx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0030E770(); /* call 0x0030E770 */

loc_000AA8DE: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA8E6: ;
    xmm1 = MEMF(esp + 0x88); /* movss */
    xmm2 = MEMF(esp + 0x94); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x8C); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x9C); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA95D: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000AA9D1; /* jbe: below or equal (unsigned <=) */

loc_000AA96A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA96F: ;
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA98B: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA99F: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEM32(esp + 0x5C) = 0xA;
    MEM8(esp + 0x87) = 0;
    goto loc_000AAA25;

loc_000AA9D1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA9D6: ;
    xmm6 = MEMF(0x648CF0); /* movss */
    xmm7 = MEMF(0x648F58); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AA9F6: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEM32(esp + 0x5C) = edi;
    MEM8(esp + 0x87) = LO8(ebx);

loc_000AAA25: ;
    eax = esp + 0x10;
    ebx = eax;
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000AAA3C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x437A0000);
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    edx = ebx;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002D1EE0(); /* call 0x002D1EE0 */

loc_000AAA68: ;
    eax = MEM32(esp + 0x1C4);
    esp = esp + 0x30;
    if (TEST_NZ(eax, eax)) goto loc_000AAAC2; /* jne: not equal / not zero */

loc_000AAA76: ;
    xmm0 = MEMF(0x648EB8); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    goto loc_000AAAEF;

loc_000AAAC2: ;
    xmm0 = MEMF(esp + 0xB8); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xBC); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */

loc_000AAAEF: ;
    xmm5 = MEMF(esp + 0xB4); /* movss */
    xmm5 = xmm5 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, 2);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A95A0(); /* call 0x000A95A0 */

loc_000AAB16: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    edi = MEM32(esi + 0xB0);
    ecx = esp + 0x30;
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    edx = 0x10;
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_000AAB4E: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000AAB74; /* je: equal / zero */

loc_000AAB55: ;
    edx = MEM32(eax + 0x94);
    eax = MEM32(esp + 0xA8);
    ecx = MEM32(esp + 0xAC);
    MEM32(edx) = esi;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;

loc_000AAB74: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AAB80
 * Original: 0x000AAB80 - 0x000AAC54 (212 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAB80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000AAB80: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0xB0);
    if (CMP_NE(eax, MEM32(edi + 4))) goto loc_000AAC4C; /* jne: not equal / not zero */

loc_000AABA0: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AAC31; /* jp: parity */

loc_000AABB2: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_0030E770(); /* call 0x0030E770 */

loc_000AABC3: ;
    xmm0 = MEMF(edi + 0xC); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0x30);
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEMF(esi + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esi + 0x3C) = xmm2; /* movss */
    POP32(esp, edi);
    MEM8(ecx) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000AAC31: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    /* comiss xmm0, MEMF(0x648E14) - sets EFLAGS */
    MEMF(edi + 8) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E14))) { sub_000AAC54(); return; } /* jbe: below or equal (unsigned <=) */

loc_000AAC4C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000AACB0
 * Original: 0x000AACB0 - 0x000AAF33 (643 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AACB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000AACB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x198;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esp + 0x61) = 6;
    MEM8(esp + 0x28) = 1;
    MEM8(esp + 0x60) = 5;
    MEM16(esp + 0x70) = 2;
    MEM16(esp + 0x72) = 0xF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AACE0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x8E) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AACF7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x8D) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AAD0E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, 0xFF);
    MEM8(esp + 0x8F) = LO8(ebx);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x8C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AAD2D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x8A) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AAD44: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x89) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AAD5B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x649788); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F20); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    eax = edi;
    MEM8(esp + 0x8F) = LO8(ebx);
    MEM16(esp + 0x30) = 0x2D;
    MEM32(esp + 0x68) = 0xC;
    MEM8(esp + 0x32) = 7;
    MEMF(esp + 0x24) = xmm0; /* movss */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x8C) = LO8(edx);
    edx = MEM32(edi + 0xB0);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_0030E770(); /* call 0x0030E770 */

loc_000AAE24: ;
    esp = esp + 8;
    MEM32(esp + 8) = 0;
    /* nop */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AAE3F: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E14); /* subss */
    /* fld st(0) */
    eax = esp + 0xC;
    /* FPU: fcos  */
    ebx = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000AAE6E: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x447A0000);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = esp + 0xD0;
    MEM32(0x780AB0) = 0x637EEC;
    MEM32(0x6C0210) = 0x68;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000AAEBD: ;
    eax = MEM32(esp + 0x1B4);
    esp = esp + 0x30;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_NE(eax, ebx)) { sub_000AAF33(); return; } /* jne: not equal / not zero */

loc_000AAEE7: ;
    xmm0 = MEMF(0x59D944); /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_000AAF60(); return; /* tail jmp 0x000AAF60 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000AAFE0
 * Original: 0x000AAFE0 - 0x000AB093 (179 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAFE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000AAFE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, 0xA0);
    PUSH32(esp, edi);
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = 0xFF;
    edi = 0xA;
    /* nop */

loc_000AB000: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AB005: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 4);
    PUSH32(esp, 0xFF);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x17) = LO8(edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AB028: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AB045: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    ebx = ebx + 0xA;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AB057: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x1E;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AB068: ;
    xmm0 = MEMF(0x59D944); /* movss */
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5A02CC);
    eax = ebx;
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_000A9900(); /* call 0x000A9900 */

loc_000AB084: ;
    esp = esp + 0x28;
    edi--;
    if ((edi != 0)) goto loc_000AB000; /* jne: not equal / not zero */

loc_000AB08E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB0A0
 * Original: 0x000AB0A0 - 0x000AB2A7 (519 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB0A0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x28;
    if (TEST_Z(eax, eax)) goto loc_000AB2A3; /* je: equal / zero */

loc_000AB0AF: ;
    eax = MEM32(eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F24E4);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000AB0D8: ;
    esp = esp + 0x10;
    if (TEST_Z(edi, edi)) goto loc_000AB101; /* je: equal / zero */

loc_000AB0DF: ;
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_000AB101; /* je: equal / zero */

loc_000AB0E6: ;
    eax = MEM32(esp + 0x14);
    if (TEST_S(eax, eax)) goto loc_000AB101; /* jl: less (signed <) */

loc_000AB0EE: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_000AB0F7: ;
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_000AB101; /* je: equal / zero */

loc_000AB0FF: ;
    ebp = MEM32(ebx);

loc_000AB101: ;
    PUSH32(esp, ebp);
    esi = 0x6A8058;
    eax = edi;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_000AB10E: ;
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F24C8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000AB120: ;
    esp = esp + 0x14;
    if (TEST_Z(edi, edi)) goto loc_000AB143; /* je: equal / zero */

loc_000AB127: ;
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_000AB143; /* je: equal / zero */

loc_000AB12E: ;
    eax = MEM32(esp + 0x14);
    if (TEST_S(eax, eax)) goto loc_000AB143; /* jl: less (signed <) */

loc_000AB136: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_000AB13F: ;
    ebx = MEM32(esp + 0x10);

loc_000AB143: ;
    if (TEST_Z(ebx, ebx)) goto loc_000AB149; /* je: equal / zero */

loc_000AB147: ;
    ebp = MEM32(ebx);

loc_000AB149: ;
    PUSH32(esp, ebp);
    esi = 0x6A8064;
    eax = edi;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_000AB156: ;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F24B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000AB168: ;
    esp = esp + 0x14;
    if (TEST_Z(edi, edi)) goto loc_000AB18B; /* je: equal / zero */

loc_000AB16F: ;
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_000AB18B; /* je: equal / zero */

loc_000AB176: ;
    eax = MEM32(esp + 0x14);
    if (TEST_S(eax, eax)) goto loc_000AB18B; /* jl: less (signed <) */

loc_000AB17E: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_000AB187: ;
    ebx = MEM32(esp + 0x10);

loc_000AB18B: ;
    if (TEST_Z(ebx, ebx)) goto loc_000AB191; /* je: equal / zero */

loc_000AB18F: ;
    ebp = MEM32(ebx);

loc_000AB191: ;
    PUSH32(esp, ebp);
    esi = 0x6A8088;
    eax = edi;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_000AB19E: ;
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F2498);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000AB1B0: ;
    esp = esp + 0x14;
    if (TEST_Z(edi, edi)) goto loc_000AB1D3; /* je: equal / zero */

loc_000AB1B7: ;
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_000AB1D3; /* je: equal / zero */

loc_000AB1BE: ;
    eax = MEM32(esp + 0x14);
    if (TEST_S(eax, eax)) goto loc_000AB1D3; /* jl: less (signed <) */

loc_000AB1C6: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_000AB1CF: ;
    ebx = MEM32(esp + 0x10);

loc_000AB1D3: ;
    if (TEST_Z(ebx, ebx)) goto loc_000AB1D9; /* je: equal / zero */

loc_000AB1D7: ;
    ebp = MEM32(ebx);

loc_000AB1D9: ;
    PUSH32(esp, ebp);
    esi = 0x6A8094;
    eax = edi;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_000AB1E6: ;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    esp = esp + 4;
    MEM8(esp + 0x1C) = LO8(eax);
    eax = MEM32(0x84A5F8);
    ecx = 0; /* xor self */
    SET_LO8(edx, 1);

loc_000AB204: ;
    esi = MEM32(eax + 0x64);
    if (TEST_Z(esi, esi)) goto loc_000AB213; /* je: equal / zero */

loc_000AB20B: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(edx))) goto loc_000AB223; /* je: equal / zero */

loc_000AB213: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_000AB204; /* jl: less (signed <) */

loc_000AB221: ;
    eax = 0; /* xor self */

loc_000AB223: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x6C;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x2D) = 0;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000AB253: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000AB29F; /* je: equal / zero */

loc_000AB25A: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x16;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x12;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edi = eax + 0x4C;
    ecx = 8;
    esi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000AB29F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000AB2A3: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000AB2B0
 * Original: 0x000AB2B0 - 0x000AB342 (146 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB2B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000AB2B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4C);
    edx = MEM32(eax + 0x64);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esi + 0x54);
    if (TEST_Z(edx, edx)) goto loc_000AB332; /* je: equal / zero */

loc_000AB2C3: ;
    ebx = MEM32(eax + 0x68);
    edx = 0xFFFF;
    if (CMP_EQ(ebx, edx)) goto loc_000AB332; /* je: equal / zero */

loc_000AB2CF: ;
    SET_LO8(eax, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x50))) goto loc_000AB332; /* jne: not equal / not zero */

loc_000AB2DA: ;
    eax = MEM32(ecx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000AB332; /* je: equal / zero */

loc_000AB2E1: ;
    if (CMP_EQ(MEM32(ecx + 0x68), edx)) goto loc_000AB332; /* je: equal / zero */

loc_000AB2E6: ;
    SET_LO8(ecx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x58))) goto loc_000AB332; /* jne: not equal / not zero */

loc_000AB2F1: ;
    SET_LO8(ebx, MEM8(esi + 0x59));
    ecx = esi;
    PUSH32(esp, 0); sub_000AB440(); /* call 0x000AB440 */

loc_000AB2FB: ;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esi + 0x59) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_000AB33F; /* je: equal / zero */

loc_000AB302: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000AB350(); /* call 0x000AB350 */

loc_000AB308: ;
    SET_LO8(eax, MEM8(esi + 0x59));
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 1)) goto loc_000AB31B; /* jne: not equal / not zero */

loc_000AB312: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000AB4B0(); /* call 0x000AB4B0 */

loc_000AB318: ;
    esp = esp + 4;

loc_000AB31B: ;
    SET_LO8(eax, MEM8(esi + 0x59));
    if (CMP_EQ(LO8(eax), 2)) goto loc_000AB326; /* je: equal / zero */

loc_000AB322: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AB33F; /* jne: not equal / not zero */

loc_000AB326: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000AB940(); /* call 0x000AB940 */

loc_000AB32C: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AB332: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_000AB33F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB350
 * Original: 0x000AB350 - 0x000AB3DA (138 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x5C;
    ebx = 3;

loc_000AB360: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_000AB39E; /* je: equal / zero */

loc_000AB366: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AB39E; /* jne: not equal / not zero */

loc_000AB36F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AB376: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AB39E; /* jl: less (signed <) */

loc_000AB37D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000AB392; /* je: equal / zero */

loc_000AB38A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AB38D: ;
    esp = esp + 4;
    goto loc_000AB39E;

loc_000AB392: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000AB39E: ;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_000AB360; /* jne: not equal / not zero */

loc_000AB3A4: ;
    esi = MEM32(ebp + 0x68);
    if (TEST_Z(esi, esi)) goto loc_000AB3D5; /* je: equal / zero */

loc_000AB3AB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AB3D5; /* jne: not equal / not zero */

loc_000AB3B4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AB3BB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AB3D5; /* jl: less (signed <) */

loc_000AB3C2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000AB3DA(); return; } /* je: equal / zero */

loc_000AB3CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AB3D2: ;
    esp = esp + 4;

loc_000AB3D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB420
 * Original: 0x000AB420 - 0x000AB43E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB420(void)
{

loc_000AB420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000AB350(); /* call 0x000AB350 */

loc_000AB42B: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000AB433: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000AB439: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB440
 * Original: 0x000AB440 - 0x000AB4A1 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB440(void)
{
    int _flags = 0; /* fallback flag var */

loc_000AB440: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x54);
    ecx = ZX16(MEM16(eax + 0x60));
    edx = ZX8(MEM8(esi + 0x135));
    ecx++;
    if (CMP_NE(edx, ecx)) goto loc_000AB49C; /* jne: not equal / not zero */

loc_000AB458: ;
    eax = MEM32(eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58D8;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000AB47B: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_000AB490; /* je: equal / zero */

loc_000AB483: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_000AB490; /* je: equal / zero */

loc_000AB48B: ;
    eax = MEM32(eax + 8);
    goto loc_000AB492;

loc_000AB490: ;
    eax = 0; /* xor self */

loc_000AB492: ;
    (void)0; /* cmp MEM32(esi + 0x12C), eax - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_EQ(MEM32(esi + 0x12C), eax)) goto loc_000AB49E; /* je: equal / zero */

loc_000AB49C: ;
    SET_LO8(eax, 2);

loc_000AB49E: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB4B0
 * Original: 0x000AB4B0 - 0x000AB515 (101 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB4B0: ;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x84);
    ebp = MEM32(edi + 0x54);
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    SET_LO8(eax, MEM8(ebp + 0x10B));
    esi = MEM32(edi + 0x4C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM8(esp + 0x20) = LO8(eax);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F248C;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x4C) = edi;
    MEM8(esp + 0x50) = 2;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000AB501: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_000AB515(); return; } /* je: equal / zero */

loc_000AB508: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) { sub_000AB515(); return; } /* je: equal / zero */

loc_000AB510: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_000AB517(); return; /* tail jmp 0x000AB517 */

}

/**
 * sub_000AB940
 * Original: 0x000AB940 - 0x000AB99B (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB940: ;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x7C);
    ebp = MEM32(esi + 0x4C);
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    SET_LO8(eax, MEM8(ebp + 0x10B));
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM8(esp + 0x1C) = LO8(eax);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58CC;
    MEM32(esp + 0x48) = esi;
    MEM8(esp + 0x4C) = 1;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000AB987: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_000AB99B(); return; } /* je: equal / zero */

loc_000AB98E: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) { sub_000AB99B(); return; } /* je: equal / zero */

loc_000AB996: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_000AB99D(); return; /* tail jmp 0x000AB99D */

}

/**
 * sub_000ABC90
 * Original: 0x000ABC90 - 0x000ABCAE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABC90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ABC90: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1B8);
    if (TEST_Z(eax, eax)) goto loc_000ABCAD; /* je: equal / zero */

loc_000ABC9E: ;
    ecx = ZX8(MEM8(ecx + 0x1BC));
    MEM32(eax + ecx * 4 + 0x5C) = 0;

loc_000ABCAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ABCB0
 * Original: 0x000ABCB0 - 0x000ABD09 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABCB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ABCB0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x2D - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x2D)) goto loc_000ABD08; /* jne: not equal / not zero */

loc_000ABCBB: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_NE(edx, esi)) goto loc_000ABCD4; /* jne: not equal / not zero */

loc_000ABCC9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x4C) = edx;
    SET_LO8(edx, MEM8(eax + 9));
    goto loc_000ABCDF;

loc_000ABCD4: ;
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_000ABCE2; /* jne: not equal / not zero */

loc_000ABCD9: ;
    MEM32(ecx + 0x4C) = esi;
    SET_LO8(edx, MEM8(eax + 8));

loc_000ABCDF: ;
    MEM8(ecx + 0x50) = LO8(edx);

loc_000ABCE2: ;
    edx = MEM32(ecx + 0x54);
    esi = MEM32(eax);
    if (CMP_NE(edx, esi)) goto loc_000ABCF9; /* jne: not equal / not zero */

loc_000ABCEB: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(ecx + 0x58) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ABCF9: ;
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_000ABD07; /* jne: not equal / not zero */

loc_000ABCFE: ;
    MEM32(ecx + 0x54) = esi;
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(ecx + 0x58) = LO8(edx);

loc_000ABD07: ;
    POP32(esp, esi);

loc_000ABD08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ABD10
 * Original: 0x000ABD10 - 0x000ABD2E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABD10(void)
{

loc_000ABD10: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edi = eax + 0x190;
    PUSH32(esp, 0); sub_001166D0(); /* call 0x001166D0 */

loc_000ABD29: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABD30
 * Original: 0x000ABD30 - 0x000ABD61 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABD30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABD30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_000ABD43; /* je: equal / zero */

loc_000ABD3C: ;
    MEM32(eax + 0x68) = 0;

loc_000ABD43: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000ABD4B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000ABD61(); return; } /* jne: not equal / not zero */

loc_000ABD54: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000ABD70
 * Original: 0x000ABD70 - 0x000ABD96 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABD70(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ABD70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_000ABD83; /* je: equal / zero */

loc_000ABD7C: ;
    MEM32(eax + 0x68) = 0;

loc_000ABD83: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000ABD8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000ABD91: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABDA0
 * Original: 0x000ABDA0 - 0x000ABE73 (211 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABDA0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABDA0: ;
    xmm0 = MEMF(ebx + 0x114); /* movss */
    xmm0 = xmm0 * MEMF(0x649750); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = 0xFFFFFF80u;
    ecx = ecx - eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM16(edi) = LO16(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000ABDC8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000ABDCD: ;
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    xmm3 = MEMF(ebp); /* movss */
    eax = MEM32(esp + 0xC);
    xmm4 = MEMF(eax); /* movss */
    xmm1 = MEMF(0x64974C); /* movss */
    xmm2 = MEMF(0x649748); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esi) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esi + 4) = xmm3; /* movss */
    xmm3 = MEMF(ebp + 4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(0x649744); /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 4); /* movss */
    eax = MEM32(esp + 8);
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esi + 8) = xmm3; /* movss */
    MEM16(edi) = MEM16(edi) + LO16(edx);
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x228); /* movss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABE80
 * Original: 0x000ABE80 - 0x000ABEB9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABE80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ABE80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_000ABEC0(); /* call 0x000ABEC0 */

loc_000ABE8D: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x3C)) goto loc_000ABEA1; /* je: equal / zero */

loc_000ABE97: ;
    if (CMP_EQ(eax, 0x3D)) goto loc_000ABEA1; /* je: equal / zero */

loc_000ABE9C: ;
    if (CMP_NE(eax, 0x41)) goto loc_000ABEB7; /* jne: not equal / not zero */

loc_000ABEA1: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x23C);
    if (TEST_Z(edi, edi)) goto loc_000ABEB6; /* je: equal / zero */

loc_000ABEAC: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_000ABEB6: ;
    POP32(esp, edi);

loc_000ABEB7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABEC0
 * Original: 0x000ABEC0 - 0x000ABF38 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABEC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000ABEC0: ;
    esp = esp - 0xC;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000ABEE3: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000ABF34; /* je: equal / zero */

loc_000ABEEA: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x58;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x43;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000ABF34: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000ABF40
 * Original: 0x000ABF40 - 0x000AC252 (786 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000ABF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 0x4C);
    eax = MEM32(ebx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000AC23E; /* je: equal / zero */

loc_000ABF5D: ;
    SET_LO8(eax, MEM8(ebx + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) goto loc_000AC23E; /* jne: not equal / not zero */

loc_000ABF6C: ;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_000ABF77: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (TEST_Z(esi, esi)) goto loc_000AC24B; /* je: equal / zero */

loc_000ABF85: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_NE(MEM8(ecx + 0x67), 2)) goto loc_000AC24B; /* jne: not equal / not zero */

loc_000ABF95: ;
    xmm1 = MEMF(esi + 0x118); /* movss */
    xmm0 = MEMF(ebx + 0x110); /* movss */
    xmm1 = xmm1 * MEMF(0x6496B8); /* mulss */
    xmm0 = xmm0 * MEMF(0x649D7C); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000ABFBD; /* jbe: below or equal (unsigned <=) */

loc_000ABFBA: ;
    xmm0 = xmm1; /* movaps */

loc_000ABFBD: ;
    xmm1 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000AC24B; /* jbe: below or equal (unsigned <=) */

loc_000ABFCE: ;
    xmm7 = MEMF(0x648E58); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649418); /* mulss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 > xmm7)) goto loc_000ABFEA; /* ja: above (unsigned >) */

loc_000ABFE7: ;
    xmm7 = xmm0; /* movaps */

loc_000ABFEA: ;
    xmm7 = xmm7 + MEMF(0x648F20); /* addss */
    xmm0 = MEMF(0x648D10); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm7; /* movss */
    if ((xmm0 > xmm7)) goto loc_000AC24B; /* ja: above (unsigned >) */

loc_000AC009: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x64909C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000AC021; /* jbe: below or equal (unsigned <=) */

loc_000AC01E: ;
    xmm0 = xmm1; /* movaps */

loc_000AC021: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * MEMF(0x648EA0); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x54); /* addss */
    MEMF(edi + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC03C: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_000AC24B; /* jbe: below or equal (unsigned <=) */

loc_000AC04E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = ebx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_000AC062: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AC071; /* jne: not equal / not zero */

loc_000AC069: ;
    MEM32(esp + 0x10) = 0x595D14;

loc_000AC071: ;
    fp_push(MEMF(ebx + 0x114)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_000AC0A5;

loc_000AC09B: ;
    xmm7 = MEMF(esp + 0x14); /* movss */
    esi = MEM32(esp + 0x18);

loc_000AC0A5: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = esp + 0x28;
    esi = esp + 0x58;
    PUSH32(esp, 0); sub_000ABDA0(); /* call 0x000ABDA0 */

loc_000AC0BD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC0C2: ;
    xmm0 = xmm0 * MEMF(0x649D78); /* mulss */
    xmm0 = xmm0 + MEMF(0x649D74); /* addss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AC0DF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x44;
    edx = edx - 0x29;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000AC0F9: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(0x648E14); /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 8); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x4C); /* addss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0x54); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC127: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x649D70); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC145: ;
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC164: ;
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC183: ;
    xmm0 = xmm0 * MEMF(0x648FA4); /* mulss */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    esi = 2;
    MEMF(esp + 0x4C) = xmm5; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_000AC1CF: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001911F0(); /* call 0x001911F0 */

loc_000AC212: ;
    esp = esp + 0x2C;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000AC09B; /* ja: above (unsigned >) */

loc_000AC237: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000AC23E: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_000AC24B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000AC260
 * Original: 0x000AC260 - 0x000AC2FA (154 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC260: ;
    edx = MEM32(0x84A144);
    xmm0 = MEMF(0x59D944); /* movss */
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x6BCFEB));
    PUSH32(esp, esi);
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(edx, 1)) ? 1 : 0); /* setg */
    esi = 4;
    esi = (uint32_t)((int32_t)esi >> LO8(ecx));
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0xA;
    MEM32(eax + 4) = esi;
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(0x649268); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649264); /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649260); /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649258); /* movss */
    esi = 0x14;
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEM32(eax + 0x2C) = esi;
    if (CMP_G(edx, 1)) { sub_000AC2FA(); return; } /* jg: greater (signed >) */

loc_000AC2F1: ;
    if (CMP_G(LO8(ebx), 7)) { sub_000AC2FA(); return; } /* jg: greater (signed >) */

loc_000AC2F6: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000AC2FF(); return; /* tail jmp 0x000AC2FF */

}

/**
 * sub_000AC380
 * Original: 0x000AC380 - 0x000AC552 (466 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;

loc_000AC380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    xmm2 = MEMF(0x6493B8); /* movss */
    xmm1 = MEMF(0x6493C0); /* movss */
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_000AC3B6: ;
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A03126F);
    PUSH32(esp, 0x44FA0000);
    eax = edi;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_000AC3D3: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_000AC3E7: ;
    esp = esp + 0x24;
    if (TEST_Z(esi, esi)) goto loc_000AC423; /* je: equal / zero */

loc_000AC3EE: ;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000AC423; /* je: equal / zero */

loc_000AC3F5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000AC40D; /* je: equal / zero */

loc_000AC3F9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x2C))) goto loc_000AC40D; /* jbe: below or equal (unsigned <=) */

loc_000AC403: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000AC6D0(); /* call 0x000AC6D0 */

loc_000AC40A: ;
    esp = esp + 8;

loc_000AC40D: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000AC423; /* je: equal / zero */

loc_000AC416: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CDAD0(); /* call 0x001CDAD0 */

loc_000AC420: ;
    esp = esp + 0xC;

loc_000AC423: ;
    eax = MEM32(ebp + 0xC);
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000AC42F: ;
    xmm0 = MEMF(0x648EB8); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(edi); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(edi + 4); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    PUSH32(esp, 0x43AF0000);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 8); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, 1);
    esi = esp + 0x44;
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_000AC4A4: ;
    eax = MEM32(0x84A144);
    esp = esp + 0x1C;
    ebx = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_000AC54B; /* jl: less (signed <) */

loc_000AC4B6: ;
    xmm4 = MEMF(0x648CE4); /* movss */
    MEM32(esp + 0x18) = ebx;
    goto loc_000AC4D0;

loc_000AC4C4: ;
    edi = MEM32(ebp + 8);
    goto loc_000AC4D0;

    /* nop */

loc_000AC4D0: ;
    xmm0 = MEMF(edi); /* movss */
    eax = MEM32(0x84A13C);
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    edx = esp + 0x17;
    PUSH32(esp, edx);
    edi = ecx + eax + 0x148;
    esi = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x1B) = 0;
    xmm2 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_000AC516: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000AC52F; /* je: equal / zero */

loc_000AC51D: ;
    edx = esi;
    PUSH32(esp, 0x41200000);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_0006B180(); /* call 0x0006B180 */

loc_000AC52C: ;
    esp = esp + 8;

loc_000AC52F: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(0x84A144);
    ebx++;
    ecx = ecx + 0x2B0;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(ebx, eax)) goto loc_000AC4C4; /* jle: less or equal (signed <=) */

loc_000AC54B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC560
 * Original: 0x000AC560 - 0x000AC6CA (362 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000AC560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    edi = eax;
    PUSH32(esp, 0x3A03126F);
    PUSH32(esp, 0x44FA0000);
    eax = ebx;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_000AC591: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = ebx;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_000AC5B2: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    esp = esp + 0x2C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000AC6C3; /* je: equal / zero */

loc_000AC5C0: ;
    if (TEST_Z(edi, edi)) goto loc_000AC6C3; /* je: equal / zero */

loc_000AC5C8: ;
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    edx = edi;
    eax = esp + 0x30;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000AC5FB: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x24;
    MEM32(0x780AB0) = 0x5F2504;
    MEM32(0x6C0210) = 0x239;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_000AC642: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x84B538) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000AC6B7; /* je: equal / zero */

loc_000AC65A: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    SET_LO8(ecx, MEM8(0x7819D5));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000AC6A3; /* je: equal / zero */

loc_000AC694: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CDAD0(); /* call 0x001CDAD0 */

loc_000AC6A0: ;
    esp = esp + 0xC;

loc_000AC6A3: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000AC6D0(); /* call 0x000AC6D0 */

loc_000AC6AD: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000AC6B7: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;

loc_000AC6C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC6D0
 * Original: 0x000AC6D0 - 0x000AC709 (57 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC6D0(void)
{
    float xmm0;

loc_000AC6D0: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AC6DA: ;
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    SET_LO8(edx, MEM8(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_000AC705: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000AC710
 * Original: 0x000AC710 - 0x000AC78E (126 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000AC710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x274;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(esp + 0x1B) = 0xFF;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000AC78E(); return; } /* je: equal / zero */

loc_000AC734: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000AC74B; /* je: equal / zero */

loc_000AC73E: ;
    ecx = esp + 0x1C;
    eax = ebx;
    PUSH32(esp, 0); sub_000AD3A0(); /* call 0x000AD3A0 */

loc_000AC749: ;
    goto loc_000AC777;

loc_000AC74B: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64944C); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_000AC777: ;
    eax = MEM32(ebx + 0x568);
    SET_LO8(eax, MEM8(eax + 0x292));
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esp + 0x1B) = LO8(eax);
    g_seh_ebp = ebp; sub_000AC880(); return; /* tail jmp 0x000AC880 */

}

/**
 * sub_000AD090
 * Original: 0x000AD090 - 0x000AD15F (207 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD090(void)
{
    int _flags = 0; /* fallback flag var */

loc_000AD090: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x3AC);
    if (TEST_Z(esi, esi)) goto loc_000AD0D3; /* je: equal / zero */

loc_000AD09B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AD0D3; /* jne: not equal / not zero */

loc_000AD0A4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AD0AB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AD0D3; /* jl: less (signed <) */

loc_000AD0B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000AD0C7; /* je: equal / zero */

loc_000AD0BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AD0C2: ;
    esp = esp + 4;
    goto loc_000AD0D3;

loc_000AD0C7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000AD0D3: ;
    esi = MEM32(edi + 0x3B0);
    if (TEST_Z(esi, esi)) goto loc_000AD115; /* je: equal / zero */

loc_000AD0DD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AD115; /* jne: not equal / not zero */

loc_000AD0E6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AD0ED: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AD115; /* jl: less (signed <) */

loc_000AD0F4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000AD109; /* je: equal / zero */

loc_000AD101: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AD104: ;
    esp = esp + 4;
    goto loc_000AD115;

loc_000AD109: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000AD115: ;
    eax = MEM32(edi + 0x3B4);
    if (TEST_Z(eax, eax)) goto loc_000AD129; /* je: equal / zero */

loc_000AD11F: ;
    MEM32(eax + 0x310) = 0;

loc_000AD129: ;
    esi = MEM32(edi + 0x3B8);
    if (TEST_Z(esi, esi)) goto loc_000AD15D; /* je: equal / zero */

loc_000AD133: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AD15D; /* jne: not equal / not zero */

loc_000AD13C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000AD143: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000AD15D; /* jl: less (signed <) */

loc_000AD14A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000AD15F(); return; } /* je: equal / zero */

loc_000AD157: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AD15A: ;
    esp = esp + 4;

loc_000AD15D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD1A0
 * Original: 0x000AD1A0 - 0x000AD1BB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD1A0(void)
{

loc_000AD1A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000AD090(); /* call 0x000AD090 */

loc_000AD1AA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0013D300(); /* call 0x0013D300 */

loc_000AD1B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000AD1B6: ;
    esp = esp + 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD1C0
 * Original: 0x000AD1C0 - 0x000AD381 (449 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AD1C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x771260);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_Z(eax, eax)) goto loc_000AD1EF; /* je: equal / zero */

loc_000AD1D9: ;
    ecx = (int32_t)MEMF(esi + 8); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 4); /* cvttss2si */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (int32_t)MEMF(esi); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000AD1EC: ;
    esp = esp + 0xC;

loc_000AD1EF: ;
    eax = ZX8(MEM8(esp + 0x18));
    eax--;
    if (CMP_A(eax, 6)) goto loc_000AD364; /* ja: above (unsigned >) */

loc_000AD1FE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xAD384); /* switch: 7 entries, 6 targets */
    if (_jt == 0x000AD205u) goto loc_000AD205;
    if (_jt == 0x000AD217u) goto loc_000AD217;
    if (_jt == 0x000AD229u) goto loc_000AD229;
    if (_jt == 0x000AD246u) goto loc_000AD246;
    if (_jt == 0x000AD263u) goto loc_000AD263;
    if (_jt == 0x000AD280u) goto loc_000AD280;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000AD205: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_0019A500(); /* call 0x0019A500 */

loc_000AD20F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD217: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_0019A500(); /* call 0x0019A500 */

loc_000AD221: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD229: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019A370(); /* call 0x0019A370 */

loc_000AD23E: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD246: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019A370(); /* call 0x0019A370 */

loc_000AD25B: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD263: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019A370(); /* call 0x0019A370 */

loc_000AD278: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD280: ;
    ebp = MEM32(0x84A5F8);
    ebp = ebp + 0x36800;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F2E90(); /* call 0x002F2E90 */

loc_000AD292: ;
    edi = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM16(ebp + 0x60) = 0xFFFF;
    if (CMP_EQ(ebx, edi)) goto loc_000AD37C; /* je: equal / zero */

loc_000AD2A5: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_000ADA00(); /* call 0x000ADA00 */

loc_000AD2AC: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_000AD2C6; /* je: equal / zero */

loc_000AD2B3: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM8(eax + 8) = 0;
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 0x18) = 1;
    edi = eax;

loc_000AD2C6: ;
    eax = ebx;
    MEM32(ebp + 0x23C) = edi;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_000AD2D3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0x64) = 4;
    eax = esi;
    ecx = MEM32(eax);
    edx = ebp + 0x78;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    ecx = 0; /* xor self */
    MEM32(edx + 8) = eax;
    (void)0; /* cmp MEM8(esp + 0x18), 6 - flags set for next jcc */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1C);
    SET_LO8(ecx, (CMP_NE(MEM8(esp + 0x18), 6)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx--;
    ecx = ecx & 0xFFFFFFE4u;
    ecx = ecx + 0xE5;
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    MEMF(ebp + 0x114) = xmm0; /* movss */
    MEM32(ebp + 0x68) = ecx;
    PUSH32(esp, 0); sub_0019BE40(); /* call 0x0019BE40 */

loc_000AD331: ;
    eax = MEM32(ebp + 0x23C);
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_000AD355; /* je: equal / zero */

loc_000AD33E: ;
    MEM32(eax) = 0;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000AD352: ;
    esp = esp + 4;

loc_000AD355: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x23C) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD364: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019A370(); /* call 0x0019A370 */

loc_000AD379: ;
    esp = esp + 0x20;

loc_000AD37C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD450
 * Original: 0x000AD450 - 0x000AD4BB (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD450(void)
{
    float xmm0;

loc_000AD450: ;
    esp = esp - 8;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AD461: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 6) = 0;
    edx = edx + ecx;
    MEM16(esp + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AD492: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = edx + 5;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000AD4B7: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD4C0
 * Original: 0x000AD4C0 - 0x000AD4FE (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD4C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000AD4C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi);
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_LE(edx & edx, 0)) goto loc_000AD4E3; /* jle: less or equal (signed <=) */

loc_000AD4D2: ;
    eax = 0; /* xor self */

loc_000AD4D4: ;
    if (CMP_EQ(edi, MEM32(esi + eax * 4 + 4))) { sub_000AD4FE(); return; } /* je: equal / zero */

loc_000AD4DA: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    eax = ZX8(LO8(ecx));
    if (CMP_L(eax, edx)) goto loc_000AD4D4; /* jl: less (signed <) */

loc_000AD4E3: ;
    if (CMP_EQ(edi, MEM32(esp + 0x10))) { sub_000AD4FE(); return; } /* je: equal / zero */

loc_000AD4E9: ;
    eax = MEM32(edi + 0x64);
    if (TEST_Z(eax, eax)) { sub_000AD4FE(); return; } /* je: equal / zero */

loc_000AD4F0: ;
    eax = MEM32(edi + 0x68);
    POP32(esp, edi);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(eax, 0xFFFF)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000AD510
 * Original: 0x000AD510 - 0x000AD7BE (686 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AD510: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000AD677; /* je: equal / zero */

loc_000AD520: ;
    ecx = MEM32(esp + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_000AD677; /* je: equal / zero */

loc_000AD52C: ;
    esi = MEM32(eax);
    ebx = ebp + 0x2C;
    edx = ebx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx);
    esi = ebp + 0x38;
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x30);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000AD7C0(); /* call 0x000AD7C0 */

loc_000AD581: ;
    eax = MEM32(ebp + 0xE4);
    esp = esp + 0x34;
    if (TEST_NZ(eax, eax)) goto loc_000AD5F0; /* jne: not equal / not zero */

loc_000AD58E: ;
    edi = MEM32(esp + 0x18);
    xmm0 = MEMF(edi); /* movss */
    /* ucomiss xmm0, MEMF(ebx) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AD5C1; /* jp: parity */

loc_000AD59F: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 0x30) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AD5C1; /* jp: parity */

loc_000AD5AE: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 0x34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AD6ED; /* jnp: not parity */

loc_000AD5C1: ;
    ecx = edi;
    eax = MEM32(ecx);
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edx);
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    goto loc_000AD6AD;

loc_000AD5F0: ;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, MEMF(ebx) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AD623; /* jp: parity */

loc_000AD601: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 0x30) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000AD623; /* jp: parity */

loc_000AD610: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 0x34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AD6A9; /* jnp: not parity */

loc_000AD623: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    eax = ecx;
    edi = MEM32(eax);
    edx = ebx;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    MEMF(ebp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    edi = ebp + 4;
    ecx = 0; /* xor self */
    edx = esi;
    MEMF(ebp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000AD66E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000AD6A9; /* jne: not equal / not zero */

loc_000AD672: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000AD677: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    ebx = ebp + 0x2C;
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx);
    esi = ebp + 0x38;
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_000AD6A9: ;
    edi = MEM32(esp + 0x18);

loc_000AD6AD: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000AD7C0(); /* call 0x000AD7C0 */

loc_000AD6D8: ;
    eax = MEM32(ebp + 0xE4);
    ecx = 0; /* xor self */
    esp = esp + 0x34;
    if (CMP_NE(eax, ecx)) goto loc_000AD7B7; /* jne: not equal / not zero */

loc_000AD6EB: ;
    goto loc_000AD6EF;

loc_000AD6ED: ;
    ecx = 0; /* xor self */

loc_000AD6EF: ;
    xmm0 = MEMF(0x649C54); /* movss */
    MEM32(ebp) = ecx;
    MEMF(ebp + 4) = xmm0; /* movss */
    eax = MEM32(edi);
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(edi + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(edi + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    if (CMP_EQ(eax, ecx)) eax = MEM32(esp + 0x1C); /* cmove */
    edi = MEM32(eax);
    edx = esi;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(ebp + 8) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x3C); /* movss */
    eax = ebp + 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x30); /* addss */
    MEMF(ebp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x34); /* addss */
    MEMF(ebp + 0x10) = xmm1; /* movss */
    esi = eax;
    edi = MEM32(esi);
    edx = ebp + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = esi;
    esi = MEM32(eax);
    edx = ebp + 0x20;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = eax;
    MEM16(ebp + 0xE0) = LO16(ecx);
    MEM8(ebp + 0xE2) = 0;
    MEM32(ebp + 0xE4) = ecx;
    MEM8(ebp + 0xE8) = 0;
    MEM32(ebp + 0xEC) = ecx;
    MEM32(ebp + 0xF0) = ecx;

loc_000AD7B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD7C0
 * Original: 0x000AD7C0 - 0x000AD92D (365 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AD7C0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x3C);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;

loc_000AD7F2: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0x4100000);
    ecx = 0x9F7;
    eax = 0x5F2504;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000AD810: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = ebp;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000AD846: ;
    eax = MEM32(ebp + 0xEC);
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */
    esp = esp + 0x34;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x780AB0) = edi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = edi;
    if (CMP_EQ(eax, edi)) { sub_000AD92D(); return; } /* je: equal / zero */

loc_000AD87F: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if (CMP_NE(LO8(ecx), 0x40)) { sub_000AD92D(); return; } /* jne: not equal / not zero */

loc_000AD891: ;
    xmm2 = MEMF(ebp + 0x38); /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x48);
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 8); /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0x3C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0xC); /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0x40); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x10); /* addss */
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x4C);
    MEMF(edx) = xmm0; /* movss */
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx) = ecx;
    esi = ebp + 0x50;
    edi = ebx + 0x10;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(ebp + 0xF0);
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEM32(ebx + 0xA0) = edx;
    MEM8(ebx + 0xA4) = 7;
    MEM8(ebx + 0xA5) = 3;
    MEM32(ebx + 0xA8) = eax;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_000AD7F2;

}

/**
 * sub_000AD960
 * Original: 0x000AD960 - 0x000AD9F5 (149 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD960(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;

loc_000AD960: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_000AD9F1; /* je: equal / zero */

loc_000AD971: ;
    MEM8(esp) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AD97A: ;
    eax = eax & 0x80000007u;
    if (((int32_t)eax >= 0)) goto loc_000AD986; /* jns: not sign (positive) */

loc_000AD981: ;
    eax--;
    eax = eax | 0xFFFFFFF8u;
    eax++;

loc_000AD986: ;
    eax = eax + 0xD;
    MEM16(esp + 2) = LO16(eax);
    eax = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(esp + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AD9A7: ;
    xmm5 = MEMF(0x648E14); /* movss */
    xmm6 = MEMF(0x648F58); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AD9CA: ;
    PUSH32(esp, 0xFF);
    eax = esp + 4;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x19) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_000AD9EE: ;
    esp = esp + 0xC;

loc_000AD9F1: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADA00
 * Original: 0x000ADA00 - 0x000ADA84 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADA00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ADA00: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000ADA84(); return; } /* je: equal / zero */

loc_000ADA1B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000ADA2F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000ADA64; /* je: equal / zero */

loc_000ADA3A: ;
    ecx = 0x75DC50;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000ADA44: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000ADA61: ;
    esp = esp + 0x14;

loc_000ADA64: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000ADA7D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADAB0
 * Original: 0x000ADAB0 - 0x000ADF4A (1178 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADAB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000ADAB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x79);
    eax = 0x2C8;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000ADAC3: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000ADF47; /* je: equal / zero */

loc_000ADAD0: ;
    xmm0 = MEMF(0x649ACC); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648EEC); /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    xmm2 = MEMF(0x648CDC); /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x649AC8); /* movss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = 0;
    MEMF(esi + 0x78) = xmm5; /* movss */
    MEMF(esi + 0x7C) = xmm7; /* movss */
    MEMF(esi + 0x3C) = xmm3; /* movss */
    MEMF(esi + 0x48) = xmm1; /* movss */
    MEMF(esi + 0x4C) = xmm2; /* movss */
    MEMF(esi + 0x40) = xmm5; /* movss */
    eax = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = MEM32(ecx + edx + 0x224);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(esi + 0x80) = eax;
    ecx = MEM32(edi + 0x564);
    edx = ZX8(MEM8(ecx + 0x2A8));
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    ecx = MEM32(edx + eax + 0x228);
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x98) = ecx;
    MEMF(esi + 0x54) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000ADBA6; /* je: equal / zero */

loc_000ADB99: ;
    xmm0 = xmm0 * MEMF(0x649AC4); /* mulss */
    MEMF(esi + 0x54) = xmm0; /* movss */

loc_000ADBA6: ;
    xmm6 = MEMF(0x6490F4); /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esi + 0x144) = xmm3; /* movss */
    MEMF(esi + 0x60) = xmm6; /* movss */
    MEMF(esi + 0x64) = xmm0; /* movss */
    MEMF(esi + 0x58) = xmm5; /* movss */
    MEMF(esi + 0x150) = xmm1; /* movss */
    MEMF(esi + 0x154) = xmm2; /* movss */
    MEMF(esi + 0x148) = xmm5; /* movss */
    edx = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(edx + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    ecx = MEM32(ecx + edx + 0x224);
    xmm3 = MEMF(0x59A8D8); /* movss */
    MEM32(esi + 0x188) = ecx;
    edx = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(edx + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ecx + edx + 0x228);
    MEM32(esi + 0x1A0) = ecx;
    MEMF(esi + 0x15C) = xmm3; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000ADC55; /* je: equal / zero */

loc_000ADC45: ;
    xmm3 = MEMF(0x649AC0); /* movss */
    MEMF(esi + 0x15C) = xmm3; /* movss */

loc_000ADC55: ;
    xmm3 = MEMF(0x648D84); /* movss */
    MEMF(esi + 0xF0) = xmm3; /* movss */
    xmm3 = MEMF(0x649960); /* movss */
    MEMF(esi + 0x168) = xmm6; /* movss */
    MEMF(esi + 0x16C) = xmm0; /* movss */
    MEMF(esi + 0x160) = xmm5; /* movss */
    MEMF(esi + 0xFC) = xmm5; /* movss */
    MEMF(esi + 0x100) = xmm7; /* movss */
    MEMF(esi + 0xF4) = xmm3; /* movss */
    MEMF(esi + 0xCC) = xmm1; /* movss */
    MEMF(esi + 0xD0) = xmm2; /* movss */
    MEMF(esi + 0xC4) = xmm5; /* movss */
    edx = MEM32(edi + 0x564);
    eax = ZX8(MEM8(edx + 0x2A8));
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = MEM32(eax + ecx + 0x224);
    MEM32(esi + 0x104) = edx;
    eax = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = MEM32(ecx + edx + 0x228);
    MEM32(esi + 0x11C) = eax;
    MEMF(esi + 0xE4) = xmm6; /* movss */
    MEMF(esi + 0xE8) = xmm0; /* movss */
    MEMF(esi + 0xDC) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000ADD1E: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(esi + 0x2C);
    /* fld st(0) */
    edx = MEM32(ecx + 0x564);
    /* FPU: fcos  */
    eax = ZX8(MEM8(edx + 0x2A8));
    ecx = MEM32(0x84A13C);
    xmm0 = MEMF(0x648F58); /* movss */
    xmm1 = MEMF(0x648CF0); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x198) = xmm5; /* movss */
    MEMF(esi + 0x19C) = xmm7; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x1B0) = xmm5; /* movss */
    edx = MEM32(esp + 4);
    /* fld st(1) */
    MEMF(esi + 0x18C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esi + 0x1B4) = xmm7; /* movss */
    MEMF(esi + 0x114) = xmm0; /* movss */
    MEMF(esi + 0x1A4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esi + 0x118) = xmm1; /* movss */
    MEM32(esi + 0x120) = edx;
    MEMF(esi + 0x108) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esi + 0x12C) = xmm0; /* movss */
    MEMF(esi + 0x130) = xmm1; /* movss */
    eax = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + edx + 0x224); /* movss */
    MEMF(esi + 0x290) = xmm0; /* movss */
    MEMF(esi + 0x20C) = xmm0; /* movss */
    eax = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + edx + 0x228); /* movss */
    MEMF(esi + 0x2A8) = xmm0; /* movss */
    MEMF(esi + 0x224) = xmm0; /* movss */
    eax = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + edx + 0x224); /* movss */
    MEMF(esi + 0x294) = xmm0; /* movss */
    MEMF(esi + 0x210) = xmm0; /* movss */
    eax = MEM32(edi + 0x564);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + edx + 0x228); /* movss */
    MEMF(esi + 0x2AC) = xmm0; /* movss */
    MEMF(esi + 0x228) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esi + 0x2A0) = xmm0; /* movss */
    MEMF(esi + 0x21C) = xmm0; /* movss */
    MEMF(esi + 0x2B8) = xmm0; /* movss */
    MEMF(esi + 0x234) = xmm0; /* movss */
    MEMF(esi + 0x2A4) = xmm6; /* movss */
    MEMF(esi + 0x220) = xmm6; /* movss */
    MEMF(esi + 0x2BC) = xmm6; /* movss */
    MEMF(esi + 0x238) = xmm6; /* movss */
    MEM32(esi + 0x34) = 0x289;
    MEM32(esi + 0xB8) = 0x28A;
    MEM32(esi + 0x13C) = 0x28B;
    MEM32(esi + 0x1C0) = 0x28C;
    MEM32(esi + 0x244) = 0x28D;
    eax = 0x64CDFF;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x1BC) = eax;
    eax = 0xC83232;
    MEM32(esi + 0x240) = eax;
    MEM32(esi + 0x2C4) = eax;

loc_000ADF47: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000ADF50
 * Original: 0x000ADF50 - 0x000AE4C3 (1395 bytes, 437 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ADF50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = edi + 0x50;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADF60: ;
    edx = edi + 0x38;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADF68: ;
    esi = edi + 0x68;
    edx = esi;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADF72: ;
    edx = edi + 0x80;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADF7D: ;
    edx = edi + 0x98;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADF88: ;
    xmm0 = MEMF(esi); /* movss */
    xmm7 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xB0); /* addss */
    edx = edi + 0xD4;
    MEMF(edi + 0xB0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADFB3: ;
    edx = edi + 0xBC;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADFBE: ;
    esi = edi + 0xEC;
    edx = esi;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADFCB: ;
    edx = edi + 0x104;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADFD6: ;
    edx = edi + 0x11C;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000ADFE1: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x134); /* addss */
    edx = edi + 0x158;
    MEMF(edi + 0x134) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000AE004: ;
    edx = edi + 0x140;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000AE00F: ;
    esi = edi + 0x170;
    edx = esi;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000AE01C: ;
    edx = edi + 0x188;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000AE027: ;
    edx = edi + 0x1A0;
    PUSH32(esp, 0); sub_000AEDE0(); /* call 0x000AEDE0 */

loc_000AE032: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x1B8); /* addss */
    xmm7 = 0.0f; /* xorps self = zero */
    edx = edi + 0x1DC;
    MEMF(edi + 0x1B8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x10); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE0B3; /* jnp: not parity */

loc_000AE061: ;
    xmm0 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE0B3; /* jnp: not parity */

loc_000AE06F: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE0AE; /* jnp: not parity */

loc_000AE07D: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE0AE; /* ja: above (unsigned >) */

loc_000AE08D: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE0A9: ;
    esp = esp + 0xC;
    goto loc_000AE0B3;

loc_000AE0AE: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE0B3: ;
    xmm0 = MEMF(edi + 0x1D4); /* movss */
    edx = edi + 0x1C4;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE11C; /* jnp: not parity */

loc_000AE0CA: ;
    xmm0 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE11C; /* jnp: not parity */

loc_000AE0D8: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE117; /* jnp: not parity */

loc_000AE0E6: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE117; /* ja: above (unsigned >) */

loc_000AE0F6: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE112: ;
    esp = esp + 0xC;
    goto loc_000AE11C;

loc_000AE117: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE11C: ;
    xmm0 = MEMF(edi + 0x204); /* movss */
    esi = edi + 0x1F4;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE187; /* jnp: not parity */

loc_000AE133: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE187; /* jnp: not parity */

loc_000AE141: ;
    xmm0 = MEMF(esi); /* movss */
    /* ucomiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE182; /* jnp: not parity */

loc_000AE14F: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE182; /* ja: above (unsigned >) */

loc_000AE15F: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    edx = esi;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE17D: ;
    esp = esp + 0xC;
    goto loc_000AE187;

loc_000AE182: ;
    eax = MEM32(esi + 4);
    MEM32(esi) = eax;

loc_000AE187: ;
    xmm0 = MEMF(edi + 0x21C); /* movss */
    edx = edi + 0x20C;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE1F0; /* jnp: not parity */

loc_000AE19E: ;
    xmm0 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE1F0; /* jnp: not parity */

loc_000AE1AC: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE1EB; /* jnp: not parity */

loc_000AE1BA: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE1EB; /* ja: above (unsigned >) */

loc_000AE1CA: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(edx + 0x10);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE1E6: ;
    esp = esp + 0xC;
    goto loc_000AE1F0;

loc_000AE1EB: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE1F0: ;
    xmm0 = MEMF(edi + 0x234); /* movss */
    edx = edi + 0x224;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE259; /* jnp: not parity */

loc_000AE207: ;
    xmm0 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE259; /* jnp: not parity */

loc_000AE215: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE254; /* jnp: not parity */

loc_000AE223: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE254; /* ja: above (unsigned >) */

loc_000AE233: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE24F: ;
    esp = esp + 0xC;
    goto loc_000AE259;

loc_000AE254: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE259: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x23C); /* addss */
    edx = edi + 0x260;
    MEMF(edi + 0x23C) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x10); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE2DE; /* jnp: not parity */

loc_000AE28C: ;
    xmm1 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE2DE; /* jnp: not parity */

loc_000AE29A: ;
    xmm1 = MEMF(edx); /* movss */
    /* ucomiss xmm1, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE2D9; /* jnp: not parity */

loc_000AE2A8: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE2D9; /* ja: above (unsigned >) */

loc_000AE2B8: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE2CC: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    esp = esp + 0xC;
    goto loc_000AE2DE;

loc_000AE2D9: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE2DE: ;
    xmm1 = MEMF(edi + 0x258); /* movss */
    edx = edi + 0x248;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE347; /* jnp: not parity */

loc_000AE2F5: ;
    xmm1 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE347; /* jnp: not parity */

loc_000AE303: ;
    xmm1 = MEMF(edx); /* movss */
    /* ucomiss xmm1, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE342; /* jnp: not parity */

loc_000AE311: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE342; /* ja: above (unsigned >) */

loc_000AE321: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE335: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    esp = esp + 0xC;
    goto loc_000AE347;

loc_000AE342: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE347: ;
    xmm1 = MEMF(edi + 0x288); /* movss */
    esi = edi + 0x278;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE3B2; /* jnp: not parity */

loc_000AE35E: ;
    xmm1 = MEMF(esi + 0x14); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE3B2; /* jnp: not parity */

loc_000AE36C: ;
    xmm1 = MEMF(esi); /* movss */
    /* ucomiss xmm1, MEMF(esi + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE3AD; /* jnp: not parity */

loc_000AE37A: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE3AD; /* ja: above (unsigned >) */

loc_000AE38A: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    edx = esi;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE3A0: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    esp = esp + 0xC;
    goto loc_000AE3B2;

loc_000AE3AD: ;
    eax = MEM32(esi + 4);
    MEM32(esi) = eax;

loc_000AE3B2: ;
    xmm1 = MEMF(edi + 0x2A0); /* movss */
    edx = edi + 0x290;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE41B; /* jnp: not parity */

loc_000AE3C9: ;
    xmm1 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE41B; /* jnp: not parity */

loc_000AE3D7: ;
    xmm1 = MEMF(edx); /* movss */
    /* ucomiss xmm1, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE416; /* jnp: not parity */

loc_000AE3E5: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE416; /* ja: above (unsigned >) */

loc_000AE3F5: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE409: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    esp = esp + 0xC;
    goto loc_000AE41B;

loc_000AE416: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE41B: ;
    xmm1 = MEMF(edi + 0x2B8); /* movss */
    edx = edi + 0x2A8;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE484; /* jnp: not parity */

loc_000AE432: ;
    xmm1 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE484; /* jnp: not parity */

loc_000AE440: ;
    xmm1 = MEMF(edx); /* movss */
    /* ucomiss xmm1, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AE47F; /* jnp: not parity */

loc_000AE44E: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AE47F; /* ja: above (unsigned >) */

loc_000AE45E: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AE472: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    esp = esp + 0xC;
    goto loc_000AE484;

loc_000AE47F: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AE484: ;
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x2C0); /* addss */
    MEMF(edi + 0x2C0) = xmm1; /* movss */
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx + 0x568);
    edx = 0; /* xor self */
    eax = eax + 0x28D;
    esi = 1;

loc_000AE4B1: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_000AE4BB; /* je: equal / zero */

loc_000AE4B6: ;
    if (CMP_EQ(MEM32(edi + 0x30), esi)) { sub_000AE4C3(); return; } /* je: equal / zero */

loc_000AE4BB: ;
    edx++;
    eax++;
    if (CMP_L(edx, esi)) goto loc_000AE4B1; /* jl: less (signed <) */

loc_000AE4C1: ;
    g_seh_ebp = ebp; sub_000AE4CA(); return; /* tail jmp 0x000AE4CA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000AEB20
 * Original: 0x000AEB20 - 0x000AEBF6 (214 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000AEB20: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_000AEB4D; /* je: equal / zero */

loc_000AEB33: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_000AEB4D; /* je: equal / zero */

loc_000AEB3D: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    if (CMP_NE(LO16(eax), LO16(ecx))) goto loc_000AEBF1; /* jne: not equal / not zero */

loc_000AEB4D: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000AEBA8; /* je: equal / zero */

loc_000AEB57: ;
    esi = MEM32(0x84A13C);
    eax = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = (int32_t)MEMF(eax + esi + 0x21C); /* cvttss2si */
    edx = (int32_t)MEMF(eax + esi + 0x214); /* cvttss2si */
    eax = eax + esi;
    MEM32(esp + 8) = ecx;
    ecx = (int32_t)MEMF(eax + 0x220); /* cvttss2si */
    MEM32(esp + 0xC) = edx;
    edx = (int32_t)MEMF(eax + 0x218); /* cvttss2si */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_000AEBA8: ;
    esi = edi + 0x34;
    PUSH32(esp, 0); sub_000AEE50(); /* call 0x000AEE50 */

loc_000AEBB0: ;
    esi = edi + 0xB8;
    PUSH32(esp, 0); sub_000AEE50(); /* call 0x000AEE50 */

loc_000AEBBB: ;
    esi = edi + 0x13C;
    PUSH32(esp, 0); sub_000AEE50(); /* call 0x000AEE50 */

loc_000AEBC6: ;
    esi = edi + 0x1C0;
    PUSH32(esp, 0); sub_000AEE50(); /* call 0x000AEE50 */

loc_000AEBD1: ;
    esi = edi + 0x244;
    PUSH32(esp, 0); sub_000AEE50(); /* call 0x000AEE50 */

loc_000AEBDC: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000AEBF1; /* je: equal / zero */

loc_000AEBE6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_000AEBF1: ;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000AEC00
 * Original: 0x000AEC00 - 0x000AED42 (322 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEC00: ;
    eax = MEM32(esp + 0xC);
    if (CMP_A(eax, 0x6C)) goto loc_000AED41; /* ja: above (unsigned >) */

loc_000AEC0D: ;
    eax = ZX8(MEM8(eax + 0xAED64));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0xAED44)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    edx = MEM32(ecx);
    (void)0; /* cmp edx, MEM32(esi + 0x2C) - flags set for next jcc */
    goto loc_000AED39;

    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(eax + 0x2C))) goto loc_000AED40; /* jne: not equal / not zero */

loc_000AEC41: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AEFD0(); return; /* tail jmp 0x000AEFD0 */

    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx);
    eax = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(eax + 0x2C))) goto loc_000AED40; /* jne: not equal / not zero */

loc_000AEC5A: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AEFD0(); return; /* tail jmp 0x000AEFD0 */

    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(eax + 0x2C))) goto loc_000AED40; /* jne: not equal / not zero */

loc_000AEC73: ;
    SET_LO8(edx, MEM8(ecx + 4));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000AECCC; /* je: equal / zero */

loc_000AEC7A: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_000AED40; /* jne: not equal / not zero */

loc_000AEC85: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(eax + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEM32(eax + 0x30) = 1;
    MEMF(eax + 0xD8) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_000AED40; /* je: equal / zero */

loc_000AECBA: ;
    xmm0 = MEMF(0x649954); /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000AECCC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x30) = 0;
    MEMF(eax + 0xC0) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    MEMF(eax + 0x1C8) = xmm0; /* movss */
    MEMF(eax + 0x24C) = xmm0; /* movss */
    MEMF(eax + 0x1E0) = xmm0; /* movss */
    MEMF(eax + 0x264) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    eax = MEM32(edx);
    (void)0; /* cmp eax, MEM32(esi + 0x2C) - flags set for next jcc */
    goto loc_000AED39;

    esi = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(edx);
    (void)0; /* cmp eax, MEM32(ecx + 0x564) - flags set for next jcc */

loc_000AED39: ;
    if (CMP_NE(eax, MEM32(ecx + 0x564))) goto loc_000AED40; /* jne: not equal / not zero */

loc_000AED3B: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000AED40: ;
    POP32(esp, esi);

loc_000AED41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AEDE0
 * Original: 0x000AEDE0 - 0x000AEE43 (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEDE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000AEDE0: ;
    xmm1 = MEMF(edx + 0x10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AEE42; /* jnp: not parity */

loc_000AEDF1: ;
    xmm1 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AEE42; /* jnp: not parity */

loc_000AEDFF: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AEE3D; /* jnp: not parity */

loc_000AEE0D: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000AEE3D; /* ja: above (unsigned >) */

loc_000AEE1D: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_000AEE39: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_000AEE3D: ;
    ecx = MEM32(edx + 4);
    MEM32(edx) = ecx;

loc_000AEE42: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000AEE50
 * Original: 0x000AEE50 - 0x000AEFC6 (374 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000AEE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10;
    xmm1 = MEMF(esi + 0x1C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((xmm1 <= xmm0)) goto loc_000AEFC0; /* jbe: below or equal (unsigned <=) */

loc_000AEE6C: ;
    xmm1 = MEMF(esi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000AEFC0; /* jbe: below or equal (unsigned <=) */

loc_000AEE7A: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000AEE82: ;
    edi = MEM32(esi + 0x80);
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | edi;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000AEEA0: ;
    edi = eax;
    esp = esp + 4;
    if (CMP_NE(edi, ebx)) goto loc_000AEEB9; /* jne: not equal / not zero */

loc_000AEEA9: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000AEEB1: ;
    MEM32(0x771764) = ebx;
    goto loc_000AEED0;

loc_000AEEB9: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_000AEED0; /* je: equal / zero */

loc_000AEEC1: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_000AEECA: ;
    MEM32(0x771764) = edi;

loc_000AEED0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    edi = esp + 0x14;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000AEEE1: ;
    xmm6 = MEMF(0x648D14); /* movss */
    edx = MEM32(esp + 0x14);
    esp = esp + 8;
    edi = 0x590638;
    ebx = 0x59060C;
    /* nop */

loc_000AEF00: ;
    xmm0 = MEMF(ebx + -4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000AEF39; /* jnp: not parity */

loc_000AEF27: ;
    eax = MEM32(esi + 0x7C);
    ecx = esp + 0xC;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_0029CFE0(); /* call 0x0029CFE0 */

loc_000AEF36: ;
    esp = esp + 4;

loc_000AEF39: ;
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm2 = MEMF(esi + 0x4C); /* movss */
    xmm3 = MEMF(edi); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x64); /* movss */
    edx = edx + 4;
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(edx + -4) = xmm2; /* movss */
    MEMF(edx) = xmm1; /* movss */
    edx = edx + 4;
    MEMF(edx) = xmm6; /* movss */
    edx = edx + 4;
    MEM32(edx) = ecx;
    edx = edx + 4;
    MEMF(edx) = xmm3; /* movss */
    edx = edx + 4;
    MEMF(edx) = xmm0; /* movss */
    ebx = ebx + 0xC;
    edx = edx + 4;
    edi = edi + 8;
    if (CMP_L(ebx, 0x59063C)) goto loc_000AEF00; /* jl: less (signed <) */

loc_000AEFA7: ;
    eax = MEM32(0x5499E8);
    MEM32(edx) = 0x417FC;
    edx = edx + 4;
    MEM32(edx) = 0;
    edx = edx + 4;
    MEM32(eax) = edx;

loc_000AEFC0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000AEFD0
 * Original: 0x000AEFD0 - 0x000AF179 (425 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEFD0(void)
{
    float xmm0, xmm1, xmm2;

loc_000AEFD0: ;
    ecx = MEM32(eax + 0x2C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x30) = 3;
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x144) = xmm0; /* movss */
    MEMF(eax + 0x15C) = xmm0; /* movss */
    MEMF(eax + 0xC0) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    edx = MEM32(ecx + 0x564);
    edx = ZX8(MEM8(edx + 0x2A8));
    xmm1 = MEMF(0x648D20); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm2 = MEMF(0x6490F4); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x84A13C);
    edx = MEM32(edx + esi + 0x224);
    MEM32(eax + 0x18C) = edx;
    MEMF(eax + 0x198) = xmm1; /* movss */
    MEMF(eax + 0x19C) = xmm2; /* movss */
    edx = MEM32(ecx + 0x564);
    edx = ZX8(MEM8(edx + 0x2A8));
    esi = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    edx = MEM32(edx + esi + 0x228);
    MEM32(eax + 0x1A4) = edx;
    MEMF(eax + 0x1B0) = xmm1; /* movss */
    MEMF(eax + 0x1B4) = xmm2; /* movss */
    edx = MEM32(ecx + 0x564);
    edx = ZX8(MEM8(edx + 0x2A8));
    esi = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    edx = MEM32(edx + esi + 0x224);
    MEM32(eax + 0x108) = edx;
    MEMF(eax + 0x114) = xmm1; /* movss */
    MEMF(eax + 0x118) = xmm2; /* movss */
    edx = MEM32(ecx + 0x564);
    edx = ZX8(MEM8(edx + 0x2A8));
    esi = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    edx = MEM32(edx + esi + 0x228);
    MEM32(eax + 0x120) = edx;
    MEMF(eax + 0x12C) = xmm1; /* movss */
    MEMF(eax + 0x130) = xmm2; /* movss */
    ecx = MEM32(ecx + 0x564);
    edx = ZX8(MEM8(ecx + 0x2A8));
    ecx = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm1 = MEMF(edx + ecx + 0x224); /* movss */
    MEMF(eax + 0x294) = xmm1; /* movss */
    MEMF(eax + 0x210) = xmm1; /* movss */
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(edx + 0x564);
    edx = ZX8(MEM8(ecx + 0x2A8));
    ecx = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm1 = MEMF(edx + ecx + 0x228); /* movss */
    MEMF(eax + 0x2AC) = xmm1; /* movss */
    MEMF(eax + 0x228) = xmm1; /* movss */
    MEMF(eax + 0x24C) = xmm0; /* movss */
    MEMF(eax + 0x1C8) = xmm0; /* movss */
    MEMF(eax + 0x264) = xmm0; /* movss */
    MEMF(eax + 0x1E0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF180
 * Original: 0x000AF180 - 0x000AF1FA (122 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF180(void)
{

loc_000AF180: ;
    edx = 0; /* xor self */
    ecx = eax + 0x54;
    PUSH32(esp, esi);
    esi = 2;
    ecx = ecx + 0x30;
    ecx = ecx + 0x30;
    PUSH32(esp, edi);
    edi = 4;
    MEM32(ecx + -84) = edi;
    MEM32(ecx + -76) = esi;
    MEM32(ecx + -68) = edi;
    MEM32(ecx + -60) = esi;
    MEM32(ecx + -80) = edx;
    MEM32(ecx + -72) = edx;
    MEM32(ecx + -64) = edx;
    MEM32(ecx + -56) = edx;
    MEM32(ecx + -36) = edi;
    MEM32(ecx + -28) = esi;
    MEM32(ecx + -20) = edi;
    MEM32(ecx + -12) = esi;
    MEM32(ecx + -32) = edx;
    MEM32(ecx + -24) = edx;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -8) = edx;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x1C) = edi;
    MEM32(ecx + 0x14) = esi;
    MEM32(ecx + 0x24) = esi;
    MEM32(ecx + 0x3C) = edi;
    MEM32(ecx + 0x4C) = edi;
    POP32(esp, edi);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x44) = esi;
    MEM32(ecx + 0x54) = esi;
    MEM32(ecx + 0x40) = edx;
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x58) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF200
 * Original: 0x000AF200 - 0x000AF26D (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000AF200: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x310);
    if (TEST_Z(ecx, ecx)) { sub_000AF26D(); return; } /* je: equal / zero */

loc_000AF20E: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(eax + 0x58); /* movss */
    ecx = ecx + 0x60;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 0x40;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x4C); /* addss */
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm1; /* movss */
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000AF280
 * Original: 0x000AF280 - 0x000AF3E4 (356 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF280(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000AF280: ;
    esp = esp - 0x24;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0x28);
    ebx = 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0x1B9530;
    MEM32(esp + 0x14) = 0x1076D0;
    MEM32(esp + 0x18) = 0x108250;
    MEM32(esp + 0x20) = 0xD1;
    MEM32(esp + 0x1C) = 0x108310;
    MEM32(esp + 0x24) = 0x303;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x2C) = 0x50;
    MEM8(esp + 0x30) = LO8(ebx);
    PUSH32(esp, 0); sub_00106EC0(); /* call 0x00106EC0 */

loc_000AF2DB: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000AF3DC; /* je: equal / zero */

loc_000AF2E8: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x44) = 4;
    MEM32(esi + 0x4C) = 2;
    MEMF(esi + 0xAC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ecx;
    MEMF(esi + 0xB0) = xmm0; /* movss */
    MEM32(esi + 0xB4) = 0;
    eax = MEM32(esi + 0x40);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    xmm1 = (float)(int32_t)MEM32(esi + 0x70); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000AF34E; /* je: equal / zero */

loc_000AF340: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) goto loc_000AF34E; /* je: equal / zero */

loc_000AF345: ;
    SET_LO8(eax, MEM8(eax * 8 + 0x75B954));
    goto loc_000AF350;

loc_000AF34E: ;
    SET_LO8(eax, 0); /* xor self */

loc_000AF350: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    edx = ZX8(LO8(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(0x648EEC); /* mulss */
    MEMF(esi + 0xC0) = xmm1; /* movss */
    xmm1 = MEMF(0x648E38); /* movss */
    PUSH32(esp, edi);
    MEMF(esi + 0xB8) = xmm1; /* movss */
    xmm1 = MEMF(0x5A005C); /* movss */
    MEMF(esi + 0xBC) = xmm1; /* movss */
    MEMF(esi + 0xC4) = xmm0; /* movss */
    edi = MEM32(esi + 0x70);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x107);
    PUSH32(esp, 0x5F2538);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000AF3B8: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_000AF3D5; /* je: equal / zero */

loc_000AF3C1: ;
    ecx = edi;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_000AF3D5: ;
    MEM32(esi + 0xC8) = edx;
    POP32(esp, edi);

loc_000AF3DC: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000AF3F0
 * Original: 0x000AF3F0 - 0x000AF7C7 (983 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF3F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;

loc_000AF3F0: ;
    esp = esp - 0xAC;
    xmm0 = MEMF(esp + 0xBC); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0x14;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    PUSH32(esp, edi);
    ebx = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000AF431: ;
    xmm0 = MEMF(0x648F08); /* movss */
    eax = ebx;
    ecx = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = ecx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xBC); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC0); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC4); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF4B4: ;
    xmm0 = xmm0 * MEMF(0x649D6C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF4CF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x41;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF4E0: ;
    ebx = 0xFF;
    eax = eax & ebx;
    PUSH32(esp, eax);
    edi = esp + 0x3C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000AF4F1: ;
    xmm1 = MEMF(0x7FA248); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x18);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xD4); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xDC); /* mulss */
    xmm3 = xmm3 * MEMF(esp + 0xD8); /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm2 = MEMF(0x648CE4); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(0x649D68); /* movss */
    SET_LO8(eax, LO8(eax) | 0xFF);
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x3C); /* addss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0x40); /* addss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x44); /* addss */
    MEM32(esp + 0x74) = 0xD1;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM16(esp + 0x78) = 0xC8;
    MEM16(esp + 0x7A) = 1;
    MEM8(esp + 0xBC) = 0x2B;
    MEM8(esp + 0xBD) = LO8(eax);
    MEM8(esp + 0xBE) = LO8(eax);
    MEM8(esp + 0xBF) = 0;
    MEM16(esp + 0x7C) = 0x64;
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEM8(esp + 0x54) = LO8(ebx);
    MEM8(esp + 0x55) = LO8(ebx);
    MEM8(esp + 0x56) = LO8(ebx);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF5F9: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 * MEMF(0x648E54); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(0x648D18); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF627: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 * MEMF(0x648E54); /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF64D: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm7 = xmm7 * MEMF(0x648E54); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF673: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF69C: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF6A8: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    esi = esi | 0x804415;
    MEM32(esp + 0xB4) = esi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF6C2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x74);
    MEM8(esp + 0x57) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF6D6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)MEM32(0x6A33A0); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    edx = edx + 0x28;
    MEM16(esp + 0x48) = LO16(edx);
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF70C: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    eax = 2;
    ecx = 4;
    MEM32(esp + 0x5C) = eax;
    esi = 0; /* xor self */
    MEM32(esp + 0x68) = eax;
    SET_LO8(eax, 0x78);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x70) = 0x303;
    MEM8(esp + 0x1B) = LO8(eax);
    MEM8(esp + 0x1C) = LO8(eax);
    xmm0 = MEMF(0x648F58); /* movss */
    MEM8(esp + 0x1D) = LO8(eax);
    eax = MEM32(esp + 0xE0);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 4));
    edx = esp + 0x48;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ebx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000AF79E: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_000AF7C0; /* je: equal / zero */

loc_000AF7A8: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000AF7C0: ;
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_000AF7D0
 * Original: 0x000AF7D0 - 0x000AFA63 (659 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF7D0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x78;
    ebp = 0x32;

loc_000AF7E3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF7E8: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF809: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648EBC); /* mulss */
    xmm5 = xmm5 + MEMF(0x648EA4); /* addss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF831: ;
    xmm0 = xmm0 * MEMF(0x648F50); /* mulss */
    xmm0 = xmm0 - MEMF(0x5A005C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x2C5);
    PUSH32(esp, 0x2C5);
    PUSH32(esp, 0x3E4CCCCD);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, 0x40400000);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF893: ;
    xmm0 = xmm0 * MEMF(0x648CDC); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490F4); /* addss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    edi = esp + 0x70;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000AF8C2: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_000AF8E9; /* je: equal / zero */

loc_000AF8C9: ;
    xmm0 = MEMF(0x649D60); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */

loc_000AF8E9: ;
    ebp--;
    if ((ebp != 0)) goto loc_000AF7E3; /* jne: not equal / not zero */

loc_000AF8F0: ;
    ebp = 0x32;

loc_000AF8F5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF8FA: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AF91F: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm3 = MEMF(0x648EA4); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(0x64913C); /* mulss */
    xmm2 = xmm2 * MEMF(0x64908C); /* mulss */
    xmm2 = xmm2 + MEMF(ebx + 0x7C); /* addss */
    xmm2 = xmm2 + MEMF(0x5A005C); /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x80); /* addss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000AF9CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0xC1200000u);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000AFA09: ;
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    xmm0 = xmm0 + MEMF(0x6498C4); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x80); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = esp + 0x7C;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000AFA3D: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_000AFA54; /* je: equal / zero */

loc_000AFA44: ;
    xmm0 = MEMF(0x649D5C); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */

loc_000AFA54: ;
    ebp--;
    if ((ebp != 0)) goto loc_000AF8F5; /* jne: not equal / not zero */

loc_000AFA5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000AFA70
 * Original: 0x000AFA70 - 0x000AFCCC (604 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_000AFA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x118;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_000AFCC6; /* je: equal / zero */

loc_000AFA86: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAA);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_000AFAA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000215C0(); /* call 0x000215C0 */

loc_000AFAA7: ;
    xmm6 = MEMF(ebx + 0x264); /* movss */
    xmm6 = xmm6 + MEMF(ebx + 0x260); /* addss */
    xmm6 = xmm6 * MEMF(0x648D10); /* mulss */
    esi = esp + 0x70;
    edi = esp + 0x6C;
    ecx = esp + 0x60;
    eax = ebx;
    MEMF(esp + 0x10) = xmm6; /* movss */
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_000AFAD8: ;
    edx = ebx;
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000AFAE3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x68);
    xmm0 = MEMF(0x648F38); /* movss */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    esi = MEM32(esp + 0x6C);
    edi = MEM32(esp + 0x70);
    PUSH32(esp, 0x41A00000);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE1C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE18); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0xC);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    xmm6 = xmm6 * MEMF(0x648CF8); /* mulss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE14); /* movss */
    PUSH32(esp, 0x5F257C);
    MEM32(esp + 0x48) = eax;
    MEM16(esp + 0x58) = LO16(eax);
    eax = esp + 0x44;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x5F25AC);
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = 0xC;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x58) = edi;
    MEM16(esp + 0x62) = 0xFF;
    MEM16(esp + 0x64) = 0xFFC4;
    MEM16(esp + 0x66) = 0x34;
    MEM16(esp + 0x78) = 0x50;
    MEM16(esp + 0x7A) = 0x1E;
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x8C) = 0x13F750;
    PUSH32(esp, 0); sub_000F3460(); /* call 0x000F3460 */

loc_000AFBE3: ;
    edx = MEM32(esp + 0xA0);
    ecx = 0; /* xor self */
    MEM32(esp + 0x4C) = 0x19;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = edx;
    MEM16(esp + 0x60) = LO16(ecx);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    eax = 0x14;
    MEM16(esp + 0x66) = LO16(eax);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADB8); /* movss */
    MEM16(esp + 0x7A) = LO16(eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE10); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(0x648EB0); /* mulss */
    PUSH32(esp, 1);
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE0C); /* movss */
    PUSH32(esp, 0x648D14);
    PUSH32(esp, 0x5F4AB0);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x60;
    MEM16(esp + 0x76) = 0xFF;
    MEM16(esp + 0x78) = 0xFFE3;
    MEM16(esp + 0x8C) = 0x50;
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_000AFCB5: ;
    ecx = MEM32(esp + 0x5C);
    esp = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000AF7D0(); /* call 0x000AF7D0 */

loc_000AFCC3: ;
    esp = esp + 8;

loc_000AFCC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AFCD0
 * Original: 0x000AFCD0 - 0x000AFD1E (78 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFCD0(void)
{
    float xmm0;

loc_000AFCD0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x35;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x74) = LO8(eax);
    MEMF(edx) = xmm0; /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    MEMF(edx + 8) = xmm0; /* movss */
    MEMF(edx + 0x28) = xmm0; /* movss */
    MEMF(edx + 0x2C) = xmm0; /* movss */
    MEMF(edx + 0x30) = xmm0; /* movss */
    MEM32(edx + 0xA0) = 0xCF570;
    MEM32(edx + 0x98) = 0x13E6E0;
    MEM8(edx + 0x7C) = 0xFF;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AFD20
 * Original: 0x000AFD20 - 0x000AFE14 (244 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AFD20: ;
    ecx = MEM32(eax + 0x68);
    if (CMP_A(ecx, 0x9D)) goto loc_000AFD8C; /* ja: above (unsigned >) */

loc_000AFD2B: ;
    if (CMP_EQ(ecx, 0x9D)) goto loc_000AFD86; /* je: equal / zero */

loc_000AFD2D: ;
    if (CMP_A(ecx, 0x9C)) { sub_000AFE14(); return; } /* ja: above (unsigned >) */

loc_000AFD39: ;
    ecx = ZX8(MEM8(ecx + 0xAFE7C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0xAFE44)); return; /* indirect tail jmp */

    eax = 0xD;
    esp += 4; return; /* ret */

loc_000AFD86: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_000AFD8C: ;
    ecx = ecx - 0x9F;
    if (CMP_A(ecx, 0xF5)) { sub_000AFE14(); return; } /* ja: above (unsigned >) */

loc_000AFD9A: ;
    edx = ZX8(MEM8(ecx + 0xAFF6C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0xAFF1C)); return; /* indirect tail jmp */

    eax = 0xE;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0070
 * Original: 0x000B0070 - 0x000B0115 (165 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000B0070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x70;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000B008A: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_000B010C; /* je: equal / zero */

loc_000B0093: ;
    esi = MEM32(ebp + 8);
    edi = ebx + 0x2C;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x38);
    if (TEST_NZ(eax, eax)) goto loc_000B00AD; /* jne: not equal / not zero */

loc_000B00A7: ;
    MEM8(ebx + 0x56) = MEM8(ebx + 0x56) | 8;
    g_seh_ebp = ebp; sub_000B011B(); return; /* tail jmp 0x000B011B */

loc_000B00AD: ;
    SET_LO8(ecx, MEM8(ebx + 0x56));
    if (TEST_Z(LO8(ecx), 2)) { sub_000B0115(); return; } /* je: equal / zero */

loc_000B00B5: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_000B0105; /* je: equal / zero */

loc_000B00BC: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ebx + 0x34))) goto loc_000B0105; /* jne: not equal / not zero */

loc_000B00C7: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_000B0100; /* je: equal / zero */

loc_000B00D1: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_000B0100; /* je: equal / zero */

loc_000B00DF: ;
    edx = ZX8(MEM8(ebx + 0x3C));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000B00ED: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x5C;
    PUSH32(esp, ecx);
    edx = ebx + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B00FB: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_000B011B(); return; /* tail jmp 0x000B011B */

loc_000B0100: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    g_seh_ebp = ebp; sub_000B0118(); return; /* tail jmp 0x000B0118 */

loc_000B0105: ;
    esi = ebx;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000B010C: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0150
 * Original: 0x000B0150 - 0x000B0505 (949 bytes, 279 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B0150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebx + 0x56));
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(LO8(ecx), 4)) goto loc_000B0182; /* je: equal / zero */

loc_000B016C: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(ebx + 0x54) = MEM16(ebx + 0x54) - LO16(eax);
    if (CMP_GE(MEM16(ebx + 0x54), 0)) goto loc_000B0182; /* jge: greater or equal (signed >=) */

loc_000B017D: ;
    MEM8(esp + 0x13) = 1;

loc_000B0182: ;
    eax = MEM32(ebx + 0x38);
    if (TEST_Z(eax, eax)) goto loc_000B042B; /* je: equal / zero */

loc_000B018D: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_000B019C; /* je: equal / zero */

loc_000B0192: ;
    edx = esp + 0x24;
    MEM32(esp + 0x14) = edx;
    goto loc_000B01A3;

loc_000B019C: ;
    edx = ebx + 0x5C;
    MEM32(esp + 0x14) = edx;

loc_000B01A3: ;
    if (TEST_Z(LO8(ecx), 1)) goto loc_000B01D1; /* je: equal / zero */

loc_000B01A8: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    goto loc_000B0272;

loc_000B01D1: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_000B0233; /* je: equal / zero */

loc_000B01D6: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_000B0225; /* je: equal / zero */

loc_000B01DD: ;
    if (CMP_EQ(edx, 8)) goto loc_000B0225; /* je: equal / zero */

loc_000B01E2: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ebx + 0x34))) goto loc_000B0225; /* jne: not equal / not zero */

loc_000B01ED: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_000B0218; /* je: equal / zero */

loc_000B01F7: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_000B0218; /* je: equal / zero */

loc_000B0205: ;
    edx = ZX8(MEM8(ebx + 0x3C));
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000B0213: ;
    esp = esp + 4;
    goto loc_000B0258;

loc_000B0218: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(ebx + 0x56) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B0225: ;
    esi = ebx;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000B022C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B0233: ;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_000B04FE; /* jne: not equal / not zero */

loc_000B023C: ;
    SET_LO8(ecx, MEM8(0x7FA230));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    ecx = 0x10;
    edi = esp + 0x30;
    esi = MEM32(ebx + eax * 4 + 0x2C);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000B0258: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = ebx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B026B: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 0xC;

loc_000B0272: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 0x6C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648F98)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000B02DF; /* jbe: below or equal (unsigned <=) */

loc_000B02D2: ;
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(ebx + 0x6C) = xmm0; /* movss */

loc_000B02DF: ;
    if (TEST_Z(MEM8(ebx + 0x56), 0x20)) goto loc_000B0329; /* je: equal / zero */

loc_000B02E5: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_000B0329; /* jne: not equal / not zero */

loc_000B02EE: ;
    xmm1 = MEMF(ebx + 0x6C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000B0412; /* jbe: below or equal (unsigned <=) */

loc_000B0304: ;
    xmm2 = xmm1; /* movaps */
    goto loc_000B0310;

    /* nop */

loc_000B0310: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm1; /* movaps */
    if ((xmm1 > xmm0)) goto loc_000B0310; /* ja: above (unsigned >) */

loc_000B031F: ;
    MEMF(ebx + 0x6C) = xmm2; /* movss */
    goto loc_000B0412;

loc_000B0329: ;
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_000B0412; /* jbe: below or equal (unsigned <=) */

loc_000B033F: ;
    edi = MEM32(esp + 0x18);

loc_000B0343: ;
    xmm6 = MEMF(ebx + 0x4C); /* movss */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B0355: ;
    esi = ZX8(MEM8(ebx + 0x57));
    eax = MEM32(esi * 4 + 0x58EDC4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm5 = xmm0; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_000B03FB; /* je: equal / zero */

loc_000B036B: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x2C); /* mulss */
    xmm7 = xmm7 + MEMF(ebx + 0x4C); /* addss */
    xmm7 = xmm7 + MEMF(esp + 0x38); /* addss */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B0390: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm7; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x30); /* mulss */
    xmm7 = xmm7 + MEMF(ebx + 0x4C); /* addss */
    xmm7 = xmm7 + MEMF(esp + 0x3C); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B03B7: ;
    xmm5 = xmm5 * MEMF(esp + 0x2C); /* mulss */
    xmm5 = xmm5 + MEMF(ebx + 0x4C); /* addss */
    xmm5 = xmm5 + MEMF(esp + 0x38); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    PUSH32(esp, ecx);
    xmm7 = xmm7 - xmm0; /* subss */
    MEMF(esp) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B03DB: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm5 = xmm5 - xmm0; /* subss */
    MEMF(esp) = xmm5; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi * 4 + 0x58EDC4), _icall_esp); /* indirect call */
    }

loc_000B03F0: ;
    xmm7 = MEMF(0x648D14); /* movss */
    esp = esp + 0x1C;

loc_000B03FB: ;
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(ebx + 0x6C) = xmm0; /* movss */
    if ((xmm0 > xmm7)) goto loc_000B0343; /* ja: above (unsigned >) */

loc_000B0412: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = ebx + 0x5C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    goto loc_000B0497;

loc_000B042B: ;
    xmm0 = MEMF(ebx + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x6C); /* addss */
    xmm5 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebx + 0x6C) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_000B0497; /* jbe: below or equal (unsigned <=) */

loc_000B044F: ;
    /* nop */

loc_000B0450: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B0455: ;
    edx = ZX8(MEM8(ebx + 0x57));
    eax = MEM32(edx * 4 + 0x58EDC4);
    if (TEST_Z(eax, eax)) goto loc_000B0484; /* je: equal / zero */

loc_000B0464: ;
    ecx = MEM32(ebx + 0x48);
    edx = MEM32(ebx + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000B0479: ;
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp + 0x1C;

loc_000B0484: ;
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebx + 0x6C) = xmm0; /* movss */
    if ((xmm0 > xmm5)) goto loc_000B0450; /* ja: above (unsigned >) */

loc_000B0497: ;
    SET_LO8(ecx, MEM8(ebx + 0x56));
    SET_LO8(eax, MEM8(esp + 0x13));
    SET_LO8(ecx, LO8(ecx) & 0xF7);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebx + 0x56) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B04C1; /* jne: not equal / not zero */

loc_000B04A8: ;
    SET_LO8(eax, MEM8(ebx + 0x58));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000B04FE; /* je: equal / zero */

loc_000B04AF: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x58EE00), _icall_esp); /* indirect call */
    }

loc_000B04BA: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B04FE; /* jne: not equal / not zero */

loc_000B04C1: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B04FE; /* jne: not equal / not zero */

loc_000B04CA: ;
    edx = ebx;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000B04D1: ;
    eax = MEM32(ebx);
    if (CMP_L(eax, 2)) goto loc_000B04FE; /* jl: less (signed <) */

loc_000B04D8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000B04F2; /* je: equal / zero */

loc_000B04E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000B04E8: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B04F2: ;
    edx = 1;
    eax = ebx;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000B04FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B0510
 * Original: 0x000B0510 - 0x000B0519 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0510(void)
{

loc_000B0510: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x56) = MEM8(eax + 0x56) & 0xEF;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0520
 * Original: 0x000B0520 - 0x000B053E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B0520: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x59));
    if (TEST_S(eax, eax)) goto loc_000B0531; /* jl: less (signed <) */

loc_000B052C: ;
    if (CMP_L(eax, 0xA)) goto loc_000B0533; /* jl: less (signed <) */

loc_000B0531: ;
    eax = 0; /* xor self */

loc_000B0533: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x58EE0C)); return; /* indirect tail jmp */

}

/**
 * sub_000B0630
 * Original: 0x000B0630 - 0x000B064B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0630(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B0630: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    eax = eax + 0x60;
    PUSH32(esp, 0x31);
    esi = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000B0642: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000B064B(); return; } /* jne: not equal / not zero */

loc_000B0649: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B06C0
 * Original: 0x000B06C0 - 0x000B06F7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B06C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B06C0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    edx = MEM32(esi + 0x2C);
    if (TEST_Z(edx, edx)) { sub_000B06F7(); return; } /* je: equal / zero */

loc_000B06CF: ;
    ecx = MEM32(esi + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_000B06F7(); return; } /* je: equal / zero */

loc_000B06D6: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) { sub_000B06F7(); return; } /* je: equal / zero */

loc_000B06DD: ;
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm2 = MEMF(edx); /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_000B0706(); return; /* tail jmp 0x000B0706 */

}

/**
 * sub_000B0960
 * Original: 0x000B0960 - 0x000B099F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0960(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B0960: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x44));
    eax = eax - 0;
    if ((eax == 0)) goto loc_000B0980; /* je: equal / zero */

loc_000B096E: ;
    eax--;
    if ((eax != 0)) goto loc_000B099D; /* jne: not equal / not zero */

loc_000B0971: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0017EB30(); /* call 0x0017EB30 */

loc_000B097E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B0980: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000B098D; /* je: equal / zero */

loc_000B0988: ;
    if (CMP_NE(eax, 0x5A)) goto loc_000B099D; /* jne: not equal / not zero */

loc_000B098D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x48))) goto loc_000B099D; /* jne: not equal / not zero */

loc_000B0998: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000B099D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B09A0
 * Original: 0x000B09A0 - 0x000B0AB8 (280 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B09A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000B09A0: ;
    esp = esp - 0x18;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B09CD: ;
    esi = MEM32(esp + 0x38);
    xmm0 = xmm0 * MEMF(0x6498A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A20C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x2C); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x30); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm1; /* movaps */
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm3 - xmm2; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B0A47: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B0A62: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B0A72: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_000B0A7E; /* jns: not sign (positive) */

loc_000B0A79: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_000B0A7E: ;
    eax = eax + 0x19;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B0A87: ;
    xmm0 = xmm0 * MEMF(0x64946C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A208); /* subss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x48));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x34;
    ecx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000B0AB0: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0AC0
 * Original: 0x000B0AC0 - 0x000B0B4A (138 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0AC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000B0AC0: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(0x7FA24C); /* movss */
    ecx = ZX8(MEM8(eax + 0x50));
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x180); /* addss */
    MEMF(eax + 0x180) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648EF8); /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x184); /* addss */
    MEMF(eax + 0x184) = xmm2; /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x184); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x30); /* movss */
    /* comiss xmm0, MEMF(0x649248) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649248))) goto loc_000B0B47; /* ja: above (unsigned >) */

loc_000B0B38: ;
    edx = MEM32(0x7FA20C);
    edx = (uint32_t)(-(int32_t)edx);
    ecx = ecx + edx * 2;
    if (CMP_GE(ecx & ecx, 0)) { sub_000B0B4A(); return; } /* jge: greater or equal (signed >=) */

loc_000B0B47: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000B0B50
 * Original: 0x000B0B50 - 0x000B0B69 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B0B50: ;
    PUSH32(esp, 0xFF);
    eax = eax + 0x9C;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000B0B61: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000B0B69(); return; } /* jne: not equal / not zero */

loc_000B0B68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0BB0
 * Original: 0x000B0BB0 - 0x000B0FFA (1098 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B0BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0x1B) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_000B0BDC; /* je: equal / zero */

loc_000B0BD1: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(esi + 0x34))) goto loc_000B0BE1; /* je: equal / zero */

loc_000B0BDC: ;
    MEM8(esp + 0x1B) = 1;

loc_000B0BE1: ;
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_000B0FAE; /* je: equal / zero */

loc_000B0BEB: ;
    SET_LO8(ecx, MEM8(esp + 0x1B));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000B0F79; /* jne: not equal / not zero */

loc_000B0BF7: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000B0F79; /* je: equal / zero */

loc_000B0C05: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_000B0F79; /* je: equal / zero */

loc_000B0C17: ;
    edx = ZX8(MEM8(esi + 0x3C));
    PUSH32(esp, eax);
    eax = esp + 0x94;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000B0C28: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x74) = MEM16(esi + 0x74) - LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x74));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    edx = SX16(LO16(eax));
    ecx = (uint32_t)(-(int32_t)ecx);
    esp = esp + 4;
    if (CMP_GE(edx, ecx)) goto loc_000B0C93; /* jge: greater or equal (signed >=) */

loc_000B0C46: ;
    SET_LO16(eax, MEM16(esi + 0x5A));
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    edx = esp + 0x98;
    MEM16(esi + 0x74) = LO16(eax);
    ecx = esi + 0x4C;
    eax = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B10B0(); /* call 0x000B10B0 */

loc_000B0C6C: ;
    SET_LO8(eax, MEM8(esi + 0x68));
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000B0C93; /* je: equal / zero */

loc_000B0C76: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6A81DC), _icall_esp); /* indirect call */
    }

loc_000B0C81: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B0C93; /* jne: not equal / not zero */

loc_000B0C88: ;
    MEM8(esp + 0x1B) = 1;
    MEM16(esi + 0x74) = 0xFFFF;

loc_000B0C93: ;
    if (CMP_LE(MEM16(esi + 0x74), 0)) goto loc_000B0F79; /* jle: less or equal (signed <=) */

loc_000B0C9E: ;
    SET_LO8(eax, MEM8(esi + 0x6A));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000B0CB9; /* je: equal / zero */

loc_000B0CA5: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6A821C), _icall_esp); /* indirect call */
    }

loc_000B0CB0: ;
    esp = esp + 4;
    MEMF(esi + 0x94) = (float)fp_top(); fp_popp(); /* fstp */

loc_000B0CB9: ;
    xmm0 = MEMF(esi + 0x6C); /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x90); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esi + 0x90) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_000B0F79; /* jbe: below or equal (unsigned <=) */

loc_000B0CEB: ;
    xmm6 = MEMF(esi + 0x98); /* movss */
    edi = esi + 0x78;
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    ebx = esi + 0x84;
    MEM32(esp + 0x28) = edx;
    eax = ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    xmm5 = xmm5 / xmm0; /* divss */
    xmm6 = xmm6 + xmm1; /* addss */
    edx = esp + 0x98;
    xmm0 = xmm6; /* movaps */
    MEM32(esp + 0x3C) = eax;
    xmm0 = xmm0 * xmm5; /* mulss */
    ecx = esi + 0x4C;
    eax = esi + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000B10B0(); /* call 0x000B10B0 */

loc_000B0D60: ;
    xmm2 = MEMF(esp + 0x78); /* movss */
    xmm2 = xmm2 - MEMF(edi); /* subss */
    xmm3 = MEMF(esp + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x7C); /* subss */
    xmm4 = MEMF(esp + 0x80); /* movss */
    xmm4 = xmm4 - MEMF(esi + 0x80); /* subss */
    xmm7 = MEMF(esp + 0x60); /* movss */
    xmm7 = xmm7 - MEMF(ebx); /* subss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x88); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x8C); /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x94); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x7FA248); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x94); /* mulss */
    esp = esp + 0xC;
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    goto loc_000B0E72;

loc_000B0E6C: ;
    xmm6 = MEMF(esp + 0x1C); /* movss */

loc_000B0E72: ;
    SET_LO8(eax, MEM8(esi + 0x69));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000B0EA9; /* je: equal / zero */

loc_000B0E79: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6A81F8), _icall_esp); /* indirect call */
    }

loc_000B0EA0: ;
    xmm6 = MEMF(esp + 0x34); /* movss */
    esp = esp + 0x18;

loc_000B0EA9: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x44); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x90); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000B0E6C; /* ja: above (unsigned >) */

loc_000B0F46: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    xmm0 = xmm6; /* movaps */
    MEM32(ebx + 8) = ecx;
    MEMF(esi + 0x98) = xmm0; /* movss */

loc_000B0F79: ;
    SET_LO8(eax, MEM8(esi + 0x71));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000B0F97; /* je: equal / zero */

loc_000B0F80: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6A822C), _icall_esp); /* indirect call */
    }

loc_000B0F8B: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B0F97; /* jne: not equal / not zero */

loc_000B0F92: ;
    MEM8(esp + 0x1B) = 1;

loc_000B0F97: ;
    if (TEST_Z(MEM8(esi + 0x58), 2)) goto loc_000B0FAE; /* je: equal / zero */

loc_000B0F9D: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x5E) = MEM16(esi + 0x5E) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x5E), 0)) goto loc_000B0FB6; /* jl: less (signed <) */

loc_000B0FAE: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B0FF3; /* je: equal / zero */

loc_000B0FB6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B0FF3; /* jne: not equal / not zero */

loc_000B0FBF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000B0FC6: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000B0FF3; /* jl: less (signed <) */

loc_000B0FCD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000B0FE7; /* je: equal / zero */

loc_000B0FDA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000B0FDD: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B0FE7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000B0FF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B1000
 * Original: 0x000B1000 - 0x000B1005 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1000(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1000: ;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_000B1060
 * Original: 0x000B1060 - 0x000B10A1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1060(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B1060: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebx + 0x70));
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_S(esi, esi)) goto loc_000B1074; /* jl: less (signed <) */

loc_000B106F: ;
    if (CMP_L(esi, 6)) goto loc_000B1076; /* jl: less (signed <) */

loc_000B1074: ;
    esi = 0; /* xor self */

loc_000B1076: ;
    eax = MEM32(ebx + 0x60);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = ebx + 0x60;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000B1092; /* je: equal / zero */

loc_000B1081: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x64);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000B1092: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi * 4 + 0x58EE9C), _icall_esp); /* indirect call */
    }

loc_000B109A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B10B0
 * Original: 0x000B10B0 - 0x000B10E6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B10B0(void)
{

loc_000B10B0: ;
    esp = esp - 0x10;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp) = edx;
    PUSH32(esp, ecx);
    edx = esp + 4;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = 2;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_000B10E2: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000B10F0
 * Original: 0x000B10F0 - 0x000B1162 (114 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B10F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B10F0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 0x2D)) goto loc_000B1127; /* jne: not equal / not zero */

loc_000B1103: ;
    edi = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    if (CMP_NE(edi, ebx)) goto loc_000B1118; /* jne: not equal / not zero */

loc_000B110D: ;
    ecx = MEM32(edx + 4);
    MEM32(esi + 0x38) = ecx;
    SET_LO8(ecx, MEM8(edx + 9));
    goto loc_000B1123;

loc_000B1118: ;
    if (CMP_NE(edi, MEM32(edx + 4))) goto loc_000B1126; /* jne: not equal / not zero */

loc_000B111D: ;
    MEM32(esi + 0x38) = ebx;
    SET_LO8(ecx, MEM8(edx + 8));

loc_000B1123: ;
    MEM8(esi + 0x34) = LO8(ecx);

loc_000B1126: ;
    POP32(esp, ebx);

loc_000B1127: ;
    edi = ZX8(MEM8(esi + 0x70));
    edi--;
    if ((edi == 0)) goto loc_000B1156; /* je: equal / zero */

loc_000B112E: ;
    edi--;
    if ((edi == 0)) goto loc_000B114C; /* je: equal / zero */

loc_000B1131: ;
    if (TEST_NZ(eax, eax)) goto loc_000B115F; /* jne: not equal / not zero */

loc_000B1135: ;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, MEM32(edx))) goto loc_000B1144; /* je: equal / zero */

loc_000B113C: ;
    SET_LO8(ecx, MEM8(esi + 0x34));
    if (CMP_NE(LO8(ecx), MEM8(edx + 4))) goto loc_000B115F; /* jne: not equal / not zero */

loc_000B1144: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000B1149: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B114C: ;
    ecx = edx;
    PUSH32(esp, 0); sub_000B1170(); /* call 0x000B1170 */

loc_000B1153: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B1156: ;
    ecx = eax;
    eax = edx;
    PUSH32(esp, 0); sub_000B11C0(); /* call 0x000B11C0 */

loc_000B115F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1170
 * Original: 0x000B1170 - 0x000B11B3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1170(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B1170: ;
    if (TEST_Z(eax, eax)) goto loc_000B1179; /* je: equal / zero */

loc_000B1174: ;
    if (CMP_NE(eax, 0x12)) goto loc_000B11B2; /* jne: not equal / not zero */

loc_000B1179: ;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, MEM32(ecx))) goto loc_000B1188; /* je: equal / zero */

loc_000B1180: ;
    SET_LO8(edx, MEM8(esi + 0x34));
    if (CMP_NE(LO8(edx), MEM8(ecx + 4))) goto loc_000B11B2; /* jne: not equal / not zero */

loc_000B1188: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B11B2; /* jne: not equal / not zero */

loc_000B1191: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000B1198: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000B11B2; /* jl: less (signed <) */

loc_000B119F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000B11B3(); return; } /* je: equal / zero */

loc_000B11AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000B11AF: ;
    esp = esp + 4;

loc_000B11B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B11C0
 * Original: 0x000B11C0 - 0x000B11DD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B11C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B11C0: ;
    if (TEST_Z(ecx, ecx)) { sub_000B11DD(); return; } /* je: equal / zero */

loc_000B11C4: ;
    if (CMP_NE(ecx, 3)) goto loc_000B11DC; /* jne: not equal / not zero */

loc_000B11C9: ;
    ecx = MEM32(esi + 0x38);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_000B11D8; /* je: equal / zero */

loc_000B11D0: ;
    SET_LO8(edx, MEM8(esi + 0x34));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_000B11DC; /* jne: not equal / not zero */

loc_000B11D8: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0xFFFFFFFEu;

loc_000B11DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1250
 * Original: 0x000B1250 - 0x000B129C (76 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1250(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B1250: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_000B1255: ;
    MEM32(eax + 0x8004) = 6;
    eax = MEM32(0x801EC0);
    if (TEST_NZ(eax, eax)) goto loc_000B128F; /* jne: not equal / not zero */

loc_000B1268: ;
    MEM32(0x801EC0) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_000B1277: ;
    (void)0; /* cmp MEM32(eax + 0x8004), 6 - flags set for next jcc */
    MEM32(0x801F10) = 0x3E8;
    if (CMP_L(MEM32(eax + 0x8004), 6)) goto loc_000B128F; /* jl: less (signed <) */

loc_000B128A: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_000B128F: ;
    fp_push((double)SMEM32(0x801F10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B12A0
 * Original: 0x000B12A0 - 0x000B1329 (137 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B12A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B12A0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(0x7FA24C); /* movss */
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x180));
    esp = esp - 8;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) { sub_000B1329(); return; } /* jle: less or equal (signed <=) */

loc_000B12BF: ;
    xmm1 = MEMF(ecx + 0x188); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = edx - MEM32(0x7FA20C);
    MEM16(ecx + 0x180) = LO16(edx);
    xmm1 = xmm1 + MEMF(ecx + 0x2C); /* addss */
    MEMF(ecx + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x18C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x30); /* addss */
    MEMF(ecx + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x184); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x184); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_000B13BA(); return; /* tail jmp 0x000B13BA */

}

/**
 * sub_000B13F0
 * Original: 0x000B13F0 - 0x000B1B7E (1934 bytes, 446 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B13F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B13F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(ebp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(ebp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebx); /* movss */
    edx = MEM32(ebx + 4);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648E98); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    MEM32(esp + 0x170) = esi;
    MEM8(esp + 0x174) = 0;
    MEM8(esp + 0x175) = 0;
    MEM32(esp + 0x178) = esi;
    ecx = 0x24;
    edi = esp + 0xE0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029FC30(); /* call 0x0029FC30 */

loc_000B14A9: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B1692; /* je: equal / zero */

loc_000B14B4: ;
    if (CMP_NE(MEM8(esp + 0x175), 3)) goto loc_000B1692; /* jne: not equal / not zero */

loc_000B14C2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B14C7: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000B14D3; /* jns: not sign (positive) */

loc_000B14CE: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000B14D3: ;
    eax = eax + 3;
    if (CMP_LE(eax, esi)) goto loc_000B1B77; /* jle: less or equal (signed <=) */

loc_000B14DE: ;
    edi = eax;

loc_000B14E0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B14E5: ;
    xmm0 = xmm0 * MEMF(0x649054); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F00); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1532: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x34;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0xFF;
    esi = edx;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    esi = esi + 0x63;
    ecx = SX16(LO16(esi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1557: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1569: ;
    xmm0 = xmm0 * MEMF(0x649F2C); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B157C: ;
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */
    xmm0 = xmm0 + MEMF(0x649450); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1597: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x7C;
    ecx = ebx;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_000B15C2: ;
    esi = eax;
    esp = esp + 0x28;
    if (TEST_Z(esi, esi)) goto loc_000B1684; /* je: equal / zero */

loc_000B15CF: ;
    MEM32(esi + 0x58) = 0x253;
    xmm0 = MEMF(0x774880); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x7748B0); /* movss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    eax = MEM32(esp + 0x3C);
    xmm0 = MEMF(0x7748E0); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x18;
    MEMF(esp + 0x40) = xmm0; /* movss */
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(0x648D18); /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = edx;
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B1662: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM8(esi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B166E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM8(esi + 0x39) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B167A: ;
    MEM8(esi + 0x3A) = LO8(eax);
    MEM32(esi + 0x3C) = 4;

loc_000B1684: ;
    edi--;
    if ((edi != 0)) goto loc_000B14E0; /* jne: not equal / not zero */

loc_000B168B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B1692: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B16B3; /* je: equal / zero */

loc_000B169B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B16A0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = 2;
    eax = edx;
    eax = eax + edi;
    goto loc_000B16CC;

loc_000B16B3: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B16B8: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000B16C4; /* jns: not sign (positive) */

loc_000B16BF: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000B16C4: ;
    eax = eax + 3;
    edi = 2;

loc_000B16CC: ;
    (void)0; /* cmp MEM32(0x84A144), esi - flags set for next jcc */
    xmm1 = MEMF(0x648E5C); /* movss */
    if (CMP_EQ(MEM32(0x84A144), esi)) goto loc_000B16E4; /* je: equal / zero */

loc_000B16DC: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000B16E4: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 >= xmm2)) goto loc_000B1710; /* jae: above or equal (unsigned >=) */

loc_000B16FD: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */

loc_000B1710: ;
    if (CMP_LE(eax, esi)) goto loc_000B185F; /* jle: less or equal (signed <=) */

loc_000B1718: ;
    esi = eax;
    /* nop */

loc_000B1720: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1725: ;
    edx = MEM32(ebp + 0x10);
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x64A7EC); /* mulss */
    xmm6 = xmm6 + MEMF(0x64A7E8); /* addss */
    xmm6 = xmm6 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1749: ;
    eax = eax & 0x7F;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1752: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000B1761: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm6 = xmm6 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x2C); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B17A5: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000B17B9; /* jbe: below or equal (unsigned <=) */

loc_000B17B2: ;
    eax = 2;
    goto loc_000B17BB;

loc_000B17B9: ;
    eax = 0; /* xor self */

loc_000B17BB: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B17E1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B17F2: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B180D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B181E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B182F: ;
    xmm0 = xmm0 * MEMF(0x64A7E4); /* mulss */
    PUSH32(esp, ecx);
    eax = esp + 0x60;
    ecx = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000B1848: ;
    esp = esp + 0x48;
    esi--;
    if ((esi != 0)) goto loc_000B1720; /* jne: not equal / not zero */

loc_000B1852: ;
    xmm2 = MEMF(0x648D14); /* movss */
    edi = 2;

loc_000B185F: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x649EE8); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x649D64); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x68;
    esi = esp + 0x8C;
    MEM32(esp + 0xA0) = 0xA;
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEM8(esp + 0xC0) = 0;
    MEMF(esp + 0x68) = xmm3; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm3; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0xAC) = 0x58;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B197F: ;
    PUSH32(esp, 0);
    eax = esp + 0x6C;
    MEM32(esp + 0xB0) = 0x40;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B1995: ;
    PUSH32(esp, 0);
    eax = esp + 0x70;
    MEM32(esp + 0xB4) = 0x3E;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B19AB: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B19B3: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000B19BF; /* jns: not sign (positive) */

loc_000B19BA: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000B19BF: ;
    eax = eax + edi;
    if (CMP_LE(eax & eax, 0)) goto loc_000B1B77; /* jle: less or equal (signed <=) */

loc_000B19C9: ;
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_000B19D0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B19D5: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1A1C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0xFF;
    esi = edx;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    esi = esi + 0xA;
    ecx = SX16(LO16(esi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1A41: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1A53: ;
    xmm0 = xmm0 * MEMF(0x649F2C); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1A66: ;
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */
    xmm0 = xmm0 + MEMF(0x649450); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1A81: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x7C;
    ecx = ebx;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_000B1AAC: ;
    esi = eax;
    esp = esp + 0x28;
    if (TEST_Z(esi, esi)) goto loc_000B1B6D; /* je: equal / zero */

loc_000B1AB9: ;
    xmm0 = MEMF(0x774880); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x7748B0); /* movss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    eax = MEM32(esp + 0x3C);
    xmm0 = MEMF(0x7748E0); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x18;
    MEMF(esp + 0x40) = xmm0; /* movss */
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(0x648D18); /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = edx;
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x34) = eax;
    xmm0 = MEMF(esp + 0x60); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x34);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B1B45: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM8(esi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B1B51: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM8(esi + 0x39) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B1B5D: ;
    MEM8(esi + 0x3A) = LO8(eax);
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x58) = 0x253;

loc_000B1B6D: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    if ((MEM32(esp + 0x24) != 0)) goto loc_000B19D0; /* jne: not equal / not zero */

loc_000B1B77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B1B80
 * Original: 0x000B1B80 - 0x000B1D81 (513 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;

loc_000B1B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_000B1D7A; /* je: equal / zero */

loc_000B1B9A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1B9F: ;
    xmm7 = MEMF(ebp + 0xC); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x64A9DC); /* mulss */
    xmm6 = xmm6 + MEMF(0x64A61C); /* addss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 * MEMF(0x649284); /* mulss */
    edx = ebx;
    eax = esp + 0x30;
    MEMF(esp + 0x20) = xmm6; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B1BE3: ;
    /* comiss xmm6, MEMF(0x648D14) - sets EFLAGS */
    MEM32(0x780AB0) = 0x5F26E8;
    MEM32(0x6C0210) = 0xC22;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    if ((xmm6 <= MEMF(0x648D14))) goto loc_000B1D5F; /* jbe: below or equal (unsigned <=) */

loc_000B1C15: ;
    goto loc_000B1C20;

loc_000B1C17: ;
    xmm7 = MEMF(ebp + 0xC); /* movss */
    /* nop */

loc_000B1C20: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1C2F: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1C3B: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000B1C46: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x59D948); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x3C;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_000B1CA5: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B1D3E; /* je: equal / zero */

loc_000B1CB0: ;
    if (CMP_EQ(MEM8(esp + 0xD5), 3)) goto loc_000B1D3E; /* je: equal / zero */

loc_000B1CBE: ;
    edx = MEM32(ebp + 0x10);
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1CEF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    edi = edi + 0x190;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B1D09: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B1D1A: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000B1D3B: ;
    esp = esp + 0x1C;

loc_000B1D3E: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000B1C17; /* ja: above (unsigned >) */

loc_000B1D5F: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_000B1D7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1D90
 * Original: 0x000B1D90 - 0x000B1E86 (246 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1D90: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    edi = ecx;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000B1DA6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x130); /* movss */
    ecx = MEM32(esi + 4);
    eax = 2;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x12C); /* movss */
    xmm1 = xmm1 * MEMF(0x5A0060); /* mulss */
    edx = 4;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 8);
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x5C) = 0x303;
    MEM8(esp + 0x64) = 1;
    MEM32(esp + 0x68) = 0x225;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x84) = edx;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x44) = ebx;
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) { sub_000B1E86(); return; } /* jne: not equal / not zero */

loc_000B1E7D: ;
    MEM16(esp + 0x16) = 0x12C;
    g_seh_ebp = ebp; sub_000B1E96(); return; /* tail jmp 0x000B1E96 */

}

/**
 * sub_000B1F50
 * Original: 0x000B1F50 - 0x000B1F86 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F50(void)
{

loc_000B1F50: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B1D90(); /* call 0x000B1D90 */

loc_000B1F82: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1F90
 * Original: 0x000B1F90 - 0x000B1FE9 (89 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B1F90: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x36));
    if (CMP_GE(LO16(eax), 0x20)) goto loc_000B1FAF; /* jge: greater or equal (signed >=) */

loc_000B1F9E: ;
    edx = ZX8(MEM8(ecx + 0x7B));
    eax = SX16(LO16(eax));
    eax = eax << 3;
    if (CMP_LE(edx, eax)) goto loc_000B1FAF; /* jle: less or equal (signed <=) */

loc_000B1FAC: ;
    MEM8(ecx + 0x7B) = LO8(eax);

loc_000B1FAF: ;
    xmm1 = MEMF(ecx + 0x328); /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x328); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x3C); /* addss */
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1FF0
 * Original: 0x000B1FF0 - 0x000B20FE (270 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000B1FF0: ;
    esp = esp - 0x18;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B201C: ;
    eax = MEM32(esp + 0x34);
    xmm0 = xmm0 * MEMF(0x6498A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A20C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 4));
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x28); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(esp) = xmm3; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm1; /* movaps */
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm3 - xmm2; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2095: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B20B0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B20C0: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_000B20CC; /* jns: not sign (positive) */

loc_000B20C7: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_000B20CC: ;
    eax = eax + 0x19;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B20D5: ;
    xmm0 = xmm0 * MEMF(0x64946C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A208); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x34;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000B20FA: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_000B2100
 * Original: 0x000B2100 - 0x000B2319 (537 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B2100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_000B2312; /* je: equal / zero */

loc_000B211A: ;
    esi = esp + 0x18;
    edi = esp + 0x10;
    ecx = esp + 0x1C;
    eax = ebx;
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_000B212D: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B2134: ;
    esi = eax;
    if (CMP_EQ(esi, 0x63)) goto loc_000B2312; /* je: equal / zero */

loc_000B213F: ;
    edx = ebx;
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B214D: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B225B; /* je: equal / zero */

loc_000B2158: ;
    eax = MEM32(ebp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(eax, eax)) goto loc_000B21F6; /* je: equal / zero */

loc_000B2168: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    eax = esp + 0x34;
    ecx = esp + 0x40;
    edx = esp + 0x28;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x4C) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM8(esp + 0x14) = 1;
    goto loc_000B2213;

loc_000B21F6: ;
    eax = MEM32(0x5A02CC);
    ecx = MEM32(0x5A02D0);
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;

loc_000B2213: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000B2248; /* je: equal / zero */

loc_000B221D: ;
    SET_LO8(eax, MEM8(ebx + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_000B2248; /* je: equal / zero */

loc_000B2229: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_000B41A0(); /* call 0x000B41A0 */

loc_000B2245: ;
    esp = esp + 0x14;

loc_000B2248: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B4A10(); /* call 0x000B4A10 */

loc_000B2258: ;
    esp = esp + 0x10;

loc_000B225B: ;
    ecx = esi;
    ecx = ecx << 4;
    if (CMP_EQ(MEM8(ecx + 0x58EEC6), 2)) goto loc_000B2312; /* je: equal / zero */

loc_000B226D: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B2312; /* je: equal / zero */

loc_000B2278: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(0x64AC9C); /* movss */
    MEM32(esp + 0x58) = edx;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEM32(esp + 0x60) = ecx;
    edx = esi + esi * 4;
    MEM32(esp + 0x5C) = eax;
    SET_LO8(eax, MEM8(edx * 4 + 0x6A8C30));
    ecx = esp + 0x50;
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = 0xF;
    MEM32(esp + 0x58) = 3;
    MEM16(esp + 0x68) = 0;
    MEM16(esp + 0x6A) = 0xFF;
    MEM16(esp + 0x6C) = 0xFFC0;
    MEM16(esp + 0x6E) = 0x45;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEM16(esp + 0x7C) = 0x15E;
    MEM16(esp + 0x7E) = 0x12C;
    MEM8(esp + 0x80) = LO8(eax);
    PUSH32(esp, 0); sub_000F3860(); /* call 0x000F3860 */

loc_000B230F: ;
    esp = esp + 4;

loc_000B2312: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2320
 * Original: 0x000B2320 - 0x000B2995 (1653 bytes, 424 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;

loc_000B2320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    SET_LO8(eax, 1);
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xE) = LO8(eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B2E70(); /* call 0x000B2E70 */

loc_000B236A: ;
    SET_LO8(ecx, 0); /* xor self */
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_000B298E; /* je: equal / zero */

loc_000B2377: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_000B2383; /* jne: not equal / not zero */

loc_000B237B: ;
    MEM8(esp + 0xE) = LO8(ecx);
    MEM8(esp + 0xF) = LO8(ecx);

loc_000B2383: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B238A: ;
    ebx = eax;
    ebx = ebx & 0x80000007u;
    if (((int32_t)ebx >= 0)) goto loc_000B2399; /* jns: not sign (positive) */

loc_000B2394: ;
    ebx--;
    ebx = ebx | 0xFFFFFFF8u;
    ebx++;

loc_000B2399: ;
    ebx = ebx + 0xF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B23A1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B23B1: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648CE4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = ebx;
    eax = esp + 0x80;
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, 0); sub_00144930(); /* call 0x00144930 */

loc_000B23D2: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B23DA: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_000B23E6; /* jns: not sign (positive) */

loc_000B23E1: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_000B23E6: ;
    eax = eax + 2;
    if (CMP_LE(eax & eax, 0)) goto loc_000B258E; /* jle: less or equal (signed <=) */

loc_000B23F1: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm7 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    ebx = 0x253;
    goto loc_000B2440;

loc_000B2434: ;
    xmm7 = MEMF(esp + 0x40); /* movss */
    /* nop */

loc_000B2440: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2445: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64A584); /* mulss */
    xmm5 = xmm5 + MEMF(0x64A580); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2467: ;
    xmm6 = MEMF(0x648F08); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B247B: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000B2486: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x5C); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x68); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x6C); /* movss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    esp = esp + 0xC;
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x34); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x4C); /* addss */
    PUSH32(esp, 8);
    xmm2 = xmm2 * xmm5; /* mulss */
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x2C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2515: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x6A);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2526: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2537: ;
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F828F5C);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B254F: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64A57C); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    ecx = esp + 0x90;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_000B257A: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_000B2584; /* je: equal / zero */

loc_000B2581: ;
    MEM32(eax + 0x58) = ebx;

loc_000B2584: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_000B2434; /* jne: not equal / not zero */

loc_000B258E: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B2772; /* je: equal / zero */

loc_000B259A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B259F: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000B25AB; /* jns: not sign (positive) */

loc_000B25A6: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000B25AB: ;
    ecx = MEM32(0x84A144);
    xmm1 = MEMF(0x648E5C); /* movss */
    eax = eax + 3;
    if (TEST_Z(ecx, ecx)) goto loc_000B25C8; /* je: equal / zero */

loc_000B25C0: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000B25C8: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 >= xmm7)) goto loc_000B25FD; /* jae: above or equal (unsigned >=) */

loc_000B25E1: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    if (TEST_NZ(eax, eax)) goto loc_000B2605; /* jne: not equal / not zero */

loc_000B25F8: ;
    goto loc_000B2772;

loc_000B25FD: ;
    if (TEST_Z(eax, eax)) goto loc_000B2772; /* je: equal / zero */

loc_000B2605: ;
    edx = esp + 0x14;
    ecx = edx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x20) = eax;
    goto loc_000B2621;

loc_000B2619: ;
    xmm7 = MEMF(0x648D14); /* movss */

loc_000B2621: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2626: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B263A: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x648F10); /* mulss */
    xmm6 = xmm6 + MEMF(0x648E14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2652: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = esp + 0x14;
    xmm0 = xmm0 - xmm7; /* subss */
    ebx = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B267B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2680: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x6492E4); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B26C0: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000B26D4; /* jbe: below or equal (unsigned <=) */

loc_000B26CD: ;
    eax = 2;
    goto loc_000B26D6;

loc_000B26D4: ;
    eax = 0; /* xor self */

loc_000B26D6: ;
    ecx = MEM32(ebp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_Z(ecx, ecx)) goto loc_000B26E5; /* je: equal / zero */

loc_000B26E0: ;
    xmm0 = MEMF(ecx + 0x7C); /* movss */

loc_000B26E5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B270F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B271F: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B273F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x54;
    ecx = esp + 0xB4;
    edx = edx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000B2760: ;
    eax = MEM32(esp + 0x68);
    esp = esp + 0x48;
    eax--;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_000B2619; /* jne: not equal / not zero */

loc_000B2772: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B295F; /* je: equal / zero */

loc_000B277E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2783: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000B278F; /* jns: not sign (positive) */

loc_000B278A: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000B278F: ;
    eax = eax + 3;
    if ((eax == 0)) goto loc_000B295F; /* je: equal / zero */

loc_000B2798: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;
    esi = 0x4000;
    /* nop */

loc_000B27E0: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B27EF: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x649148); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B27FF: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000B280A: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x5C); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x68); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x60); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x64); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x6C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x70); /* mulss */
    eax = esp + 0x30;
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x40); /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    esp = esp + 0xC;
    ebx = eax;
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B2884: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, ebx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    MEM32(0x780AB0) = 0x5F26E8;
    MEM32(0x6C0210) = 0xFD9;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = esi;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000B28E3: ;
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x74FA2C) = ebx;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM32(0x780AB0) = ebx;
    if (TEST_Z(eax, eax)) goto loc_000B2955; /* je: equal / zero */

loc_000B2906: ;
    eax = MEM32(esp + 0x38);
    if (CMP_L(eax, ebx)) goto loc_000B292C; /* jl: less (signed <) */

loc_000B290E: ;
    edx = MEM32(0x8471B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    SET_LO8(eax, MEM8(eax + edx + 0xC3));
    SET_LO8(eax, LO8(eax) & 0x80);
    (void)0; /* cmp LO8(eax), 0x80 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(eax), 0x80)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_000B2955; /* je: equal / zero */

loc_000B292C: ;
    xmm0 = MEMF(0x64A578); /* movss */
    /* comiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x30))) goto loc_000B2955; /* jbe: below or equal (unsigned <=) */

loc_000B293B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2940: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000BA020(); /* call 0x000BA020 */

loc_000B2952: ;
    esp = esp + 4;

loc_000B2955: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_000B27E0; /* jne: not equal / not zero */

loc_000B295F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B298E; /* jne: not equal / not zero */

loc_000B2968: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x68);
    PUSH32(esp, 0); sub_000867A0(); /* call 0x000867A0 */

loc_000B2973: ;
    if (TEST_NZ(eax, eax)) goto loc_000B298E; /* jne: not equal / not zero */

loc_000B2977: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B297C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_000B298B: ;
    esp = esp + 4;

loc_000B298E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B29A0
 * Original: 0x000B29A0 - 0x000B2B55 (437 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B29A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B29A0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_000B2AF0; /* je: equal / zero */

loc_000B29B0: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000B2B52; /* je: equal / zero */

loc_000B29BE: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_000B2B52; /* je: equal / zero */

loc_000B29CE: ;
    if (CMP_B(MEM16(esi + 0x3AE), 1)) goto loc_000B2B52; /* jb: below (unsigned <) */

loc_000B29DC: ;
    eax = MEM32(esi + 0x68);
    if (CMP_A(eax, 0x8C)) goto loc_000B2A2E; /* ja: above (unsigned >) */

loc_000B29E6: ;
    if (CMP_EQ(eax, 0x8C)) goto loc_000B2A17; /* je: equal / zero */

loc_000B29E8: ;
    eax = eax - 5;
    if (CMP_A(eax, 0x85)) goto loc_000B2A67; /* ja: above (unsigned >) */

loc_000B29F2: ;
    ecx = ZX8(MEM8(eax + 0xB2B6C));
    { uint32_t _jt = MEM32(ecx * 4 + 0xB2B58); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000B2A00u) goto loc_000B2A00;
    if (_jt == 0x000B2A17u) goto loc_000B2A17;
    if (_jt == 0x000B2A48u) goto loc_000B2A48;
    if (_jt == 0x000B2A52u) goto loc_000B2A52;
    if (_jt == 0x000B2A67u) goto loc_000B2A67;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B2A00: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2A05: ;
    if (TEST_NZ(LO8(eax), 3)) goto loc_000B2B52; /* jne: not equal / not zero */

loc_000B2A0D: ;
    eax = 2;
    goto loc_000B2AF2;

loc_000B2A17: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2A1C: ;
    if (TEST_NZ(LO8(eax), 1)) goto loc_000B2B52; /* jne: not equal / not zero */

loc_000B2A24: ;
    eax = 2;
    goto loc_000B2AF2;

loc_000B2A2E: ;
    eax = eax - 0xA6;
    if (CMP_A(eax, 0xD5)) goto loc_000B2A67; /* ja: above (unsigned >) */

loc_000B2A3A: ;
    edx = ZX8(MEM8(eax + 0xB2C00));
    { uint32_t _jt = MEM32(edx * 4 + 0xB2BF4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000B2A48u) goto loc_000B2A48;
    if (_jt == 0x000B2A52u) goto loc_000B2A52;
    if (_jt == 0x000B2A67u) goto loc_000B2A67;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B2A48: ;
    eax = 3;
    goto loc_000B2AF2;

loc_000B2A52: ;
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_00172330(); /* call 0x00172330 */

loc_000B2A5A: ;
    esp = esp + 4;
    eax = 2;
    goto loc_000B2AF2;

loc_000B2A67: ;
    eax = MEM32(esi + 0x70);
    if (CMP_EQ(eax, 0xB1)) goto loc_000B2AB7; /* je: equal / zero */

loc_000B2A71: ;
    if (CMP_EQ(eax, 0x5F)) goto loc_000B2AB7; /* je: equal / zero */

loc_000B2A76: ;
    if (CMP_EQ(eax, 0x5A)) goto loc_000B2AB7; /* je: equal / zero */

loc_000B2A7B: ;
    if (CMP_EQ(eax, 0x75)) goto loc_000B2AB7; /* je: equal / zero */

loc_000B2A80: ;
    SET_LO8(eax, MEM8(esi + 0x234));

loc_000B2A86: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B2B52; /* jne: not equal / not zero */

loc_000B2A8E: ;
    SET_LO8(eax, MEM8(esi + 0x20C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B2B52; /* jne: not equal / not zero */

loc_000B2A9C: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000B2AF0; /* je: equal / zero */

loc_000B2AA6: ;
    SET_LO8(ecx, MEM8(eax + 0x8C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000B2AF0; /* je: equal / zero */

loc_000B2AB0: ;
    eax = 2;
    goto loc_000B2AF2;

loc_000B2AB7: ;
    SET_LO8(eax, MEM8(esi + 0x234));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_000B2A86; /* jne: not equal / not zero */

loc_000B2AC1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B2AC6: ;
    if (TEST_NZ(LO8(eax), 0x1F)) goto loc_000B2B52; /* jne: not equal / not zero */

loc_000B2ACE: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000B2AE9; /* je: equal / zero */

loc_000B2AD8: ;
    SET_LO8(ecx, MEM8(eax + 0x8C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000B2AE9; /* je: equal / zero */

loc_000B2AE2: ;
    eax = 2;
    goto loc_000B2AF2;

loc_000B2AE9: ;
    eax = 1;
    goto loc_000B2AF2;

loc_000B2AF0: ;
    eax = 0; /* xor self */

loc_000B2AF2: ;
    SET_LO8(ecx, MEM8(esi + 0x6B8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000B2AFE; /* je: equal / zero */

loc_000B2AFC: ;
    eax = 0; /* xor self */

loc_000B2AFE: ;
    eax--;
    PUSH32(esp, ebx);
    if ((eax == 0)) goto loc_000B2B3C; /* je: equal / zero */

loc_000B2B02: ;
    eax--;
    if ((eax == 0)) goto loc_000B2B2F; /* je: equal / zero */

loc_000B2B05: ;
    eax--;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    if ((eax == 0)) goto loc_000B2B1D; /* je: equal / zero */

loc_000B2B0B: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B2320(); /* call 0x000B2320 */

loc_000B2B17: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B2B1D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B2320(); /* call 0x000B2320 */

loc_000B2B29: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B2B2F: ;
    eax = ebp;
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_000B2B36: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B2B3C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_000E7360(); /* call 0x000E7360 */

loc_000B2B4F: ;
    esp = esp + 0x18;

loc_000B2B52: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2CE0
 * Original: 0x000B2CE0 - 0x000B2E6A (394 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000B2CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD8;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_000B2E64; /* je: equal / zero */

loc_000B2CF6: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B2CFD: ;
    (void)0; /* cmp eax, 0x63 - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(eax, 0x63)) goto loc_000B2E64; /* je: equal / zero */

loc_000B2D0A: ;
    esi = esp + 0x2C;
    edi = esp + 0x28;
    ecx = esp + 0x18;
    eax = ebx;
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_000B2D1D: ;
    edx = ebx;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B2D28: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esi = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001120F0(); /* call 0x001120F0 */

loc_000B2D5D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B2E64; /* je: equal / zero */

loc_000B2D65: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x3C;
    edi = esp + 0x18;
    MEM32(0x780AB0) = 0x5F26E8;
    MEM32(0x6C0210) = 0x116A;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_000B2DAF: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B2DC4; /* je: equal / zero */

loc_000B2DB6: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_000B2DDC;

loc_000B2DC4: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;

loc_000B2DDC: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebx;
    MEM32(0x780AB0) = edi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = edi;
    PUSH32(esp, 0); sub_000B41A0(); /* call 0x000B41A0 */

loc_000B2E0F: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B4A10(); /* call 0x000B4A10 */

loc_000B2E20: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x24;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B2E5D; /* jne: not equal / not zero */

loc_000B2E2C: ;
    edx = MEM32(0x847024);
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = eax << 1;
    edx = 0; /* xor self */
    ecx = 0x4FE;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000B2E5D: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_000B2E64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2E70
 * Original: 0x000B2E70 - 0x000B2EBC (76 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2E70: ;
    edx = MEM32(esp + 8);
    esp = esp - 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) { sub_000B2EBC(); return; } /* je: equal / zero */

loc_000B2E87: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = edi;
    if (TEST_Z(ecx, ecx)) goto loc_000B2E96; /* je: equal / zero */

loc_000B2E8D: ;
    ebp = MEM32(eax);
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_000B2ECB(); return; /* tail jmp 0x000B2ECB */

loc_000B2E96: ;
    ecx = eax;
    ebp = MEM32(ecx);
    MEM32(ebx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(ebx + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 8) = ecx;
    ebx = MEM32(eax);
    ecx = edx;
    MEM32(ecx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    g_seh_ebp = ebp; sub_000B2EE6(); return; /* tail jmp 0x000B2EE6 */

}

/**
 * sub_000B2F70
 * Original: 0x000B2F70 - 0x000B2F9C (44 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2F70(void)
{
    float xmm0;

loc_000B2F70: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B2F75: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 + MEMF(0x649740); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2FA0
 * Original: 0x000B2FA0 - 0x000B302D (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2FA0(void)
{

loc_000B2FA0: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x38;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_000B3030(); /* call 0x000B3030 */

loc_000B2FE7: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esp + 0x6C;
    ecx = esp + 0x78;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000B3024: ;
    esp = esp + 0x58;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3030
 * Original: 0x000B3030 - 0x000B3169 (313 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3030(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3030: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    xmm1 = xmm1 + MEMF(ebp); /* addss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 4); /* addss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    ebx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 8); /* addss */
    MEMF(ecx + 8) = xmm1; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x94); /* mulss */
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x94); /* mulss */
    MEMF(edx + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x94); /* mulss */
    MEMF(edx + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B30FC: ;
    xmm0 = xmm0 * MEMF(0x64973C); /* mulss */
    eax = MEM32(esp + 0x20);
    xmm0 = xmm0 - MEMF(0x649738); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B3121: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x24);
    edx = edx + 0x1E;
    MEM16(eax) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B3138: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x28);
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(eax) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B314E: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    ecx = MEM32(esp + 0x2C);
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    POP32(esp, ebp);
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3170
 * Original: 0x000B3170 - 0x000B3199 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000B3170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000B3192; /* je: equal / zero */

loc_000B3186: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_NE(LO8(eax), 0xF)) { sub_000B3199(); return; } /* jne: not equal / not zero */

loc_000B3192: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B31E0
 * Original: 0x000B31E0 - 0x000B3322 (322 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B31E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B31E0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = edi;
    eax = eax << 4;
    SET_LO8(ecx, MEM8(eax + 0x58EEC6));
    SET_LO8(ebx, 2);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_000B331C; /* je: equal / zero */

loc_000B31FC: ;
    SET_LO8(eax, MEM8(esp + 0x4C));
    SET_LO8(ecx, MEM8(esi + 0x10B));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 8) = LO8(ecx);
    MEM32(esp + 0xC) = esi;
    eax = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B321B; /* je: equal / zero */

loc_000B3214: ;
    PUSH32(esp, 0x5D4CB4);
    goto loc_000B3220;

loc_000B321B: ;
    PUSH32(esp, 0x5D58D8);

loc_000B3220: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_000B3225: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x64908C); /* movss */
    esp = esp + 4;
    (void)0; /* cmp edi, 8 - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM16(esp + 0x2E) = 0x28;
    MEM16(esp + 0x30) = 0x10;
    if (CMP_EQ(edi, 8)) goto loc_000B328B; /* je: equal / zero */

loc_000B3272: ;
    if (CMP_EQ(edi, 9)) goto loc_000B328B; /* je: equal / zero */

loc_000B3277: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = eax + eax * 4;
    edx = edx << 1;
    MEM16(esp + 0x32) = LO16(edx);
    goto loc_000B32DF;

loc_000B328B: ;
    PUSH32(esp, 0x5F26DC);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_000B3295: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B32D0; /* jne: not equal / not zero */

loc_000B329C: ;
    PUSH32(esp, 0x5F26D0);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_000B32A6: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B32D0; /* jne: not equal / not zero */

loc_000B32AD: ;
    PUSH32(esp, 0x5F26C0);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_000B32B7: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000B32D0; /* jne: not equal / not zero */

loc_000B32BE: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = eax << 2;
    MEM16(esp + 0x32) = LO16(eax);
    goto loc_000B32DF;

loc_000B32D0: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = ecx << 1;
    MEM16(esp + 0x32) = LO16(ecx);

loc_000B32DF: ;
    xmm0 = MEMF(0x648F10); /* movss */
    SET_LO8(eax, 5);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    eax = 0xFFFFFFFFu;
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x45) = LO8(eax);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x34) = eax;
    eax = 0; /* xor self */
    ebx = esp + 8;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x44) = 0;
    PUSH32(esp, 0); sub_000B0B50(); /* call 0x000B0B50 */

loc_000B331C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3330
 * Original: 0x000B3330 - 0x000B356E (574 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3330(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000B3330: ;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax;
    ecx = ecx << 4;
    if (CMP_EQ(MEM8(ecx + 0x58EEC6), 2)) goto loc_000B3566; /* je: equal / zero */

loc_000B334B: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    edx = esi;
    ecx = MEM32(edx);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x64A7E0); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0x1E - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    ecx = 3;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A07C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM16(esp + 0x30) = 0x64;
    MEM16(esp + 0x32) = 0x32;
    MEM16(esp + 0x34) = LO16(ecx);
    MEM16(esp + 0x36) = LO16(ecx);
    MEM16(esp + 0x38) = 0x14;
    MEM16(esp + 0x3A) = 0x1E;
    MEM16(esp + 0x3C) = 0xFF;
    MEM16(esp + 0x3E) = LO16(ebx);
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM16(esp + 0x48) = 0x10;
    MEM16(esp + 0x4A) = 0xF;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x40) = LO8(ebx);
    edi = esp + 0xC;
    if (CMP_NE(eax, 0x1E)) goto loc_000B3425; /* jne: not equal / not zero */

loc_000B3415: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_000F5BC0(); /* call 0x000F5BC0 */

loc_000B3420: ;
    esp = esp + 0xC;
    goto loc_000B342A;

loc_000B3425: ;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_000B342A: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_000B3564; /* je: equal / zero */

loc_000B3436: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7DC); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649294); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    esi = esp + 0x54;
    MEM32(esp + 0x68) = 0x23;
    MEM8(esp + 0x88) = LO8(ebx);
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x74) = 0x58;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B353D: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    MEM32(esp + 0x78) = 0x40;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B354F: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    MEM32(esp + 0x7C) = 0x3E;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B3561: ;
    esp = esp + 0xC;

loc_000B3564: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000B3566: ;
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3570
 * Original: 0x000B3570 - 0x000B3AE6 (1398 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_000B3570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x254;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F0724);
    esi = ebx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000B3596: ;
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    edx = esp + 0x114;
    PUSH32(esp, edx);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x11C;
    PUSH32(esp, ecx);
    edx = esp + 0x134;
    PUSH32(esp, edx);
    edx = esp + 0x128;
    eax = esp + 0x120;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_000B35E0: ;
    xmm0 = MEMF(0x64908C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE08); /* movss */
    esp = esp + 0x28;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm6; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEM32(esp + 0x88) = 0x39E9;
    MEMF(esp + 0x7C) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B3632: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    MEM32(esp + 0x90) = esi;
    edx = edx + 0xFA;
    (void)0; /* cmp eax, 0xF - flags set for next jcc */
    MEM32(esp + 0x8C) = edx;
    if (CMP_NE(eax, 0xF)) goto loc_000B3660; /* jne: not equal / not zero */

loc_000B3658: ;
    xmm1 = MEMF(0x649228); /* movss */

loc_000B3660: ;
    xmm0 = MEMF(ebx + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x260); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B368D: ;
    xmm0 = xmm0 * MEMF(0x64AE04); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AE00); /* subss */
    xmm7 = MEMF(0x648D2C); /* movss */
    edx = ebx + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B36CE: ;
    xmm0 = xmm0 * MEMF(0x648CDC); /* mulss */
    xmm0 = xmm0 + MEMF(0x649278); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B36E9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x53;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B36FA: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x78;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000B3709: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm6; /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B3744: ;
    xmm5 = MEMF(0x64ADFC); /* movss */
    xmm6 = MEMF(0x64ADF8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B376E: ;
    eax = MEM32(ebx + 0x68);
    SET_LO8(edx, MEM8(ebx + 0x10B));
    ecx = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEM8(esp + 0xDC) = LO8(edx);
    edx = esp + 0x168;
    xmm0 = xmm0 - xmm6; /* subss */
    PUSH32(esp, 0x5F26A4);
    xmm0 = xmm0 * xmm7; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0xB0) = esi;
    MEM8(esp + 0xB4) = 0xFF;
    MEM32(esp + 0xB8) = 0x13EF80;
    MEM32(esp + 0xBC) = esi;
    MEM32(esp + 0xC0) = 0xB3AF0;
    MEM32(esp + 0xD8) = 0xCF570;
    MEM32(esp + 0xC4) = esi;
    MEM32(esp + 0xC8) = esi;
    MEM32(esp + 0xCC) = esi;
    MEM32(esp + 0xD0) = 0x13E6E0;
    MEM8(esp + 0xAC) = 0;
    MEM32(esp + 0xD4) = 0x13EC80;
    MEM32(esp + 0xE0) = ebx;
    MEM16(esp + 0xE6) = 0xC;
    MEM16(esp + 0xE8) = 0x15;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000B3832: ;
    eax = esp + 0x170;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000B3852: ;
    edi = eax;
    esp = esp + 0x38;
    if (CMP_EQ(edi, esi)) goto loc_000B38BD; /* je: equal / zero */

loc_000B385B: ;
    ecx = MEM32(edi + 0x100);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    if (CMP_EQ(MEM32(eax + 0x14), esi)) goto loc_000B38AE; /* je: equal / zero */

loc_000B386F: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F2690);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000B3884: ;
    edx = MEM32(edi + 0x100);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 8);
    esp = esp + 0x10;
    esi = edi + 0xE8;
    PUSH32(esp, 0); sub_003ECDF0(); /* call 0x003ECDF0 */

loc_000B38A5: ;
    MEM8(edi + 0xE4) = 1;
    esi = 0; /* xor self */

loc_000B38AE: ;
    PUSH32(esp, 0x41200000);
    eax = edi;
    PUSH32(esp, 0); sub_000B5FA0(); /* call 0x000B5FA0 */

loc_000B38BA: ;
    esp = esp + 4;

loc_000B38BD: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(edx, MEM8(ebx + 0x10B));
    eax = 0; /* xor self */
    ecx = 0x35;
    edi = esp + 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x68);
    ecx = MEM32(eax * 4 + 0x6A58F0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ecx);
    MEM8(esp + 0xD0) = LO8(edx);
    edx = esp + 0x15C;
    PUSH32(esp, 0x5F2670);
    PUSH32(esp, edx);
    MEM8(esp + 0xA8) = 0xFF;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x94) = 0x101800;
    MEM32(esp + 0x98) = 0x64;
    MEM8(esp + 0xA0) = 5;
    MEM32(esp + 0xAC) = esi;
    MEM32(esp + 0xB0) = esi;
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0xC8) = 0x13F4D0;
    MEM32(esp + 0xCC) = esi;
    MEM32(esp + 0xB8) = esi;
    MEM32(esp + 0xBC) = esi;
    MEM32(esp + 0xC0) = esi;
    MEM32(esp + 0xC4) = esi;
    MEM8(esp + 0xD0) = 1;
    MEM32(esp + 0xD4) = ebx;
    MEM16(esp + 0xDA) = 0xC;
    MEM16(esp + 0xDC) = 0x15;
    MEM32(esp + 0x9C) = esi;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000B39D1: ;
    ecx = MEM32(ebp + 0x14);
    eax = esp + 0x164;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    edx = esp + 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000B39EF: ;
    edi = eax;
    esp = esp + 0x2C;
    if (CMP_EQ(edi, esi)) goto loc_000B3ADF; /* je: equal / zero */

loc_000B39FC: ;
    ecx = MEM32(ebx + 0x4B0);
    eax = MEM32(ebx + 0x68);
    MEM32(ebx + 0x588) = edi;
    edx = MEM32(ecx + 0x24);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebx = 0x5D4CB4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000B3A2A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000B3A3E; /* je: equal / zero */

loc_000B3A31: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_000B3A3E; /* je: equal / zero */

loc_000B3A39: ;
    eax = MEM32(eax + 8);
    goto loc_000B3A40;

loc_000B3A3E: ;
    eax = 0; /* xor self */

loc_000B3A40: ;
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = edi + 0x290;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    edx = MEM32(edi + 0x100);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + 0x14);
    if (TEST_Z(ebx, ebx)) goto loc_000B3ADF; /* je: equal / zero */

loc_000B3A6D: ;
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    MEM32(esp + 0x1C) = 0;
    if (CMP_BE(MEM32(ebx), 0)) goto loc_000B3ADF; /* jbe: below or equal (unsigned <=) */

loc_000B3A7A: ;
    MEM32(esp + 0x10) = 0;

loc_000B3A82: ;
    esi = MEM32(ebx + 4);
    esi = esi + MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, 0x5F2668);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_000B3A96: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000B3AC5; /* jne: not equal / not zero */

loc_000B3A9D: ;
    eax = MEM32(edi + 0x100);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(esi + 8);
    esi = MEM32(edx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);

loc_000B3AC5: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx);
    eax++;
    edx = edx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_B(eax, ecx)) goto loc_000B3A82; /* jb: below (unsigned <) */

loc_000B3ADF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3AF0
 * Original: 0x000B3AF0 - 0x000B3C75 (389 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3AF0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B3AF0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000B3B4D; /* jbe: below or equal (unsigned <=) */

loc_000B3B09: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + 0x94);
    eax = eax & 0xFFFFFF96u;
    MEMF(esi + 0x78) = xmm0; /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    MEM32(esi + 0x94) = eax;

loc_000B3B4D: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B3B80: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ebx);
    edi = edx;
    edi = edi + 0x50;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B3B97: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B3BA8: ;
    xmm0 = xmm0 * MEMF(0x64A574); /* mulss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 + MEMF(esi + 0x34); /* addss */
    xmm0 = xmm0 + MEMF(0x64A570); /* addss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000B3BDF: ;
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x54) = xmm3; /* movss */
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x70); /* addss */
    esp = esp + 0x1C;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x74); /* addss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, ebx);
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_000B3C6B; /* jbe: below or equal (unsigned <=) */

loc_000B3C08: ;
    eax = esi + 0x78;
    MEM32(esp + 0x14) = eax;
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x24))) goto loc_000B3C6B; /* jbe: below or equal (unsigned <=) */

loc_000B3C4B: ;
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */
    MEMF(esi + 0x90) = xmm3; /* movss */
    MEM32(esi + 0xAC) = 0;

loc_000B3C6B: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B3C80
 * Original: 0x000B3C80 - 0x000B3CEA (106 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000B3C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B3C95: ;
    esi = eax;
    if (CMP_EQ(esi, 0x63)) goto loc_000B3CE4; /* je: equal / zero */

loc_000B3C9C: ;
    PUSH32(esp, 1);
    edi = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_000B31E0(); /* call 0x000B31E0 */

loc_000B3CA7: ;
    esp = esp + 4;
    edi = esp + 0x14;
    eax = ebx;
    PUSH32(esp, 0); sub_000B3170(); /* call 0x000B3170 */

loc_000B3CB5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B3CE4; /* je: equal / zero */

loc_000B3CB9: ;
    edx = ebx;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B3CC4: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_000B3330(); /* call 0x000B3330 */

loc_000B3CD4: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B3570(); /* call 0x000B3570 */

loc_000B3CE1: ;
    esp = esp + 0x18;

loc_000B3CE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3CF0
 * Original: 0x000B3CF0 - 0x000B3D22 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000B3CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B3D11: ;
    esi = eax;
    if (CMP_NE(esi, 0x63)) { sub_000B3D22(); return; } /* jne: not equal / not zero */

loc_000B3D18: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3DA0
 * Original: 0x000B3DA0 - 0x000B3F62 (450 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000B3DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x1F4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + eax * 4;
    esi = ecx;
    ecx = MEM32(eax * 4 + 0x6A8E9C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_000B3F58; /* je: equal / zero */

loc_000B3DC3: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(esi + 0x68);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D4CB4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000B3DEC: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000B3E00; /* je: equal / zero */

loc_000B3DF3: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000B3E00; /* je: equal / zero */

loc_000B3DFB: ;
    eax = MEM32(eax + 8);
    goto loc_000B3E02;

loc_000B3E00: ;
    eax = 0; /* xor self */

loc_000B3E02: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0x18) = LO8(eax);
    eax = 0; /* xor self */
    ecx = 0x35;
    edi = esp + 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x68);
    SET_LO8(eax, MEM8(esi + 0x10B));
    edx = MEM32(ecx * 4 + 0x6A58F0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, edx);
    MEM8(esp + 0xD0) = LO8(eax);
    eax = esp + 0xFC;
    PUSH32(esp, 0x5F2670);
    PUSH32(esp, eax);
    MEM32(esp + 0xCC) = 0xCF570;
    MEM32(esp + 0xC4) = 0x13E6E0;
    MEM8(esp + 0xA8) = 0xFF;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x94) = 0x101900;
    MEM32(esp + 0x98) = 0x64;
    MEM8(esp + 0xA0) = 5;
    MEM32(esp + 0xC8) = 0x13F4D0;
    MEM8(esp + 0xD0) = 1;
    MEM32(esp + 0xD4) = esi;
    MEM16(esp + 0xDA) = 0xC;
    MEM16(esp + 0xDC) = 0x15;
    MEM32(esp + 0x9C) = 0;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000B3EFC: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000B3F1C: ;
    edi = eax;
    esp = esp + 0x2C;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(edi, edi)) goto loc_000B3F58; /* je: equal / zero */

loc_000B3F29: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x588) = edi;
    ecx = edi + 0x290;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(edi + 0x100);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + 0x14);
    if (TEST_NZ(ebx, ebx)) { sub_000B3F62(); return; } /* jne: not equal / not zero */

loc_000B3F58: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3FE0
 * Original: 0x000B3FE0 - 0x000B419A (442 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3FE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B3FE0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm1 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x18);
    xmm0 = MEMF(esi + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    xmm2 = MEMF(esi + 0x30); /* movss */
    xmm2 = xmm2 * MEMF(esi + 0x7C); /* mulss */
    MEMF(esi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x78); /* mulss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = MEMF(esi + 0x30); /* movss */
    fp_push(MEMF(0x648D10)); /* fld float */
    xmm0 = xmm0 * MEMF(esi + 0x80); /* mulss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x84); /* mulss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x88); /* mulss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x8C); /* mulss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000B40E6; /* jbe: below or equal (unsigned <=) */

loc_000B408D: ;
    edi = MEM32(esi + 0x94);
    eax = esp + 0x18;
    PUSH32(esp, 0x69);
    PUSH32(esp, eax);
    edi = edi & 0xFFFFFF96u;
    eax = 0x2A;
    MEMF(esi + 0x78) = xmm1; /* movss */
    MEMF(esi + 0x7C) = xmm1; /* movss */
    MEMF(esi + 0x80) = xmm1; /* movss */
    MEMF(esi + 0x84) = xmm1; /* movss */
    MEMF(esi + 0x88) = xmm1; /* movss */
    MEMF(esi + 0x8C) = xmm1; /* movss */
    MEMF(esi + 0x90) = xmm1; /* movss */
    MEM32(esi + 0x94) = edi;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_000B40E3: ;
    esp = esp + 8;

loc_000B40E6: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    /* ucomiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000B418F; /* jnp: not parity */

loc_000B40FC: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B412D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x90;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edi = edi + 0x50;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B4144: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4155: ;
    xmm0 = xmm0 * MEMF(0x64A56C); /* mulss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 + MEMF(esi + 0x34); /* addss */
    xmm0 = xmm0 + MEMF(0x64A568); /* addss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000B418C: ;
    esp = esp + 0x1C;

loc_000B418F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B41A0
 * Original: 0x000B41A0 - 0x000B41DB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B41A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B41A0: ;
    ecx = MEM32(eax + 0x238);
    eax = MEM32(ecx);
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, 1)) goto loc_000B41C0; /* jne: not equal / not zero */

loc_000B41BB: ;
    ebp = 1;

loc_000B41C0: ;
    edx = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(edx + 4), ebx)) { sub_000B41DB(); return; } /* jne: not equal / not zero */

loc_000B41CB: ;
    eax = MEM32(ebp * 4 + 0x6A80B4);
    MEM32(esp + 0xAC) = eax;
    g_seh_ebp = ebp; sub_000B41E9(); return; /* tail jmp 0x000B41E9 */

}

/**
 * sub_000B49F0
 * Original: 0x000B49F0 - 0x000B4A0E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B49F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B49F0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x45 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x45)) goto loc_000B4A0D; /* jne: not equal / not zero */

loc_000B49FB: ;
    MEM32(eax + 0x290) = MEM32(eax + 0x290) - 1;
    if (((int32_t)MEM32(eax + 0x290) >= 0)) goto loc_000B4A0D; /* jns: not sign (positive) */

loc_000B4A03: ;
    MEM32(eax + 0x94) = MEM32(eax + 0x94) | 0x80;

loc_000B4A0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4A10
 * Original: 0x000B4A10 - 0x000B53FD (2541 bytes, 546 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4A10: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x184;
    (void)0; /* cmp eax, 0xD - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x190);
    if (CMP_EQ(eax, 0xD)) goto loc_000B53F5; /* je: equal / zero */

loc_000B4A2B: ;
    eax = MEM32(0x8470DC);
    SET_LO8(ecx, MEM8(eax + 0x6DE));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000B53F5; /* jne: not equal / not zero */

loc_000B4A3E: ;
    eax = eax + 0x330;
    MEM32(esp + 4) = eax;
    eax = esp + 0x24;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x190);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x24;
    MEM32(esp + 8) = ecx;
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(0x649234) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649234))) goto loc_000B53F5; /* ja: above (unsigned >) */

loc_000B4AC1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B4ACD: ;
    edx = MEM32(0x8470DC);
    esi = MEM32(edx + 4);
    esi = esi + 4;
    ebx = esp + 0x24;
    PUSH32(esp, 0); sub_000489B0(); /* call 0x000489B0 */

loc_000B4AE2: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x38); /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648EDC); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * MEMF(0x648CE4); /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ebx = 0; /* xor self */
    ebp = (int32_t)xmm1; /* cvttss2si */
    if (CMP_LE(ebp, ebx)) goto loc_000B53F2; /* jle: less or equal (signed <=) */

loc_000B4B4A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_000B4B50: ;
    ecx = MEM32(esp + 0x19C);
    edx = MEM32(ecx + 0x238);
    ecx = MEM32(edx);
    esp = esp + 4;
    eax = 0; /* xor self */
    if (CMP_NE(ecx, 1)) goto loc_000B4B6E; /* jne: not equal / not zero */

loc_000B4B69: ;
    eax = 1;

loc_000B4B6E: ;
    ecx = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(ecx + 4), ebx)) goto loc_000B4B89; /* jne: not equal / not zero */

loc_000B4B79: ;
    edx = MEM32(eax * 4 + 0x6A80B4);
    MEM32(esp + 0x124) = edx;
    goto loc_000B4B97;

loc_000B4B89: ;
    ecx = MEM32(eax * 4 + 0x6A80AC);
    MEM32(esp + 0x124) = ecx;

loc_000B4B97: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = MEM32(0x595D14);
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x595D18);
    xmm1 = MEMF(0x648EA8); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0xC4) = edx;
    edx = MEM32(0x595D1C);
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEM32(esp + 0xC8) = ecx;
    MEM32(esp + 0xCC) = edx;
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_000B4C02; /* je: equal / zero */

loc_000B4BF9: ;
    MEMF(esp + 0xE0) = xmm0; /* movss */

loc_000B4C02: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEMF(esp + 0xE4) = xmm0; /* movss */
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x180) = eax;
    MEM32(esp + 0x184) = eax;
    eax = MEM32(edi);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0xE8) = eax;
    eax = MEM32(esp + 0x3C);
    xmm6 = xmm1; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    MEM32(esp + 0xEC) = ecx;
    MEM32(esp + 0xF0) = edx;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(0x8470DC);
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    edx = MEM32(esp + 0x44);
    xmm5 = xmm5 - xmm6; /* subss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x118) = xmm2; /* movss */
    MEM32(esp + 0x11C) = 0x11981;
    MEM32(esp + 0x120) = 0x258;
    MEM8(esp + 0x128) = LO8(ebx);
    MEM32(esp + 0x12C) = ebx;
    MEM8(esp + 0x130) = 0xFF;
    MEM32(esp + 0x134) = 0x13EDB0;
    MEM32(esp + 0x138) = 0xB5400;
    MEM32(esp + 0x13C) = 0xB3FE0;
    MEM32(esp + 0x140) = ebx;
    MEM32(esp + 0x144) = ebx;
    MEM32(esp + 0x148) = ebx;
    MEM32(esp + 0x14C) = 0x13E6E0;
    MEM32(esp + 0x150) = 0x13EC40;
    MEM32(esp + 0x154) = ebx;
    MEM8(esp + 0x158) = 1;
    MEM32(esp + 0x15C) = ebx;
    MEM8(esp + 0x160) = LO8(ebx);
    MEM16(esp + 0x162) = 1;
    MEM16(esp + 0x164) = 0xFF;
    MEM32(esp + 0x17C) = ebx;
    MEM32(esp + 0x168) = ebx;
    MEM8(esp + 0x16C) = LO8(ebx);
    MEMF(esp + 0x170) = xmm2; /* movss */
    MEMF(esp + 0x174) = xmm2; /* movss */
    MEMF(esp + 0x178) = xmm2; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm2; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEM32(esp + 0x60) = edx;
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x330); /* addss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x334); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    xmm1 = xmm1 + MEMF(eax + 0x338); /* addss */
    ecx = esp + 0x10;
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_0013FA70(); /* call 0x0013FA70 */

loc_000B4DE6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B50D9; /* je: equal / zero */

loc_000B4DEE: ;
    eax = MEM32(esp + 0x10);
    if (CMP_LE(eax, ebx)) goto loc_000B50D9; /* jle: less or equal (signed <=) */

loc_000B4DFA: ;
    ecx = esp + 0x58;
    MEM32(esp + 0x48) = ecx;
    edx = esp + 0x24;
    ecx = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    edx = esp + 0x4C;
    ecx = esp + 0x64;
    MEM32(esp + 0x80) = edx;
    edx = ecx;
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x3C;
    MEM32(esp + 0x84) = edx;
    edx = ecx;
    MEM32(esp + 0x78) = ecx;
    ecx = esp + 0x100;
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_000B4E50: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4E55: ;
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4E7C: ;
    xmm5 = MEMF(0x6493A8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - MEMF(0x6490B8); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4EC0: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    ecx = MEM32(esp + 0x80);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x6C);
    xmm0 = MEMF(esp + 0x64); /* movss */
    edx = esp + 0x18C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x6C);
    eax = esp + 0x18C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = esp + 0x1A0;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_000B4F2A: ;
    eax = MEM32(0x8470DC);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    esp = esp + 0x10;
    eax = ecx + edx + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000B4F5C: ;
    ecx = MEM32(esp + 0x84);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x19C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x78);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x3C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B4F94: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4F99: ;
    xmm1 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x70);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x7C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4FE2: ;
    xmm6 = MEMF(0x648F38); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B4FF6: ;
    eax = MEM32(esp + 0x1A4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    xmm0 = xmm0 * xmm6; /* mulss */
    ecx = esp + 0xCC;
    MEMF(esp + 0x124) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEMF(esp + 0x130) = xmm5; /* movss */
    MEMF(esp + 0x134) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000B5039: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_000B50CA; /* je: equal / zero */

loc_000B5044: ;
    edx = MEM32(eax + 0x100);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 8);
    edx = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 0x1A0);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x2C) = edx;
    ecx = ecx << 4;
    SET_LO8(edx, MEM8(ecx + 0x58EEC6));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    edi = eax + 0x290;
    ecx = 0xB;
    esi = esp + 0x88;
    MEM8(esp + 0x88) = LO8(edx);
    MEM8(esp + 0x89) = 0;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000B50CA: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_000B4E50; /* jne: not equal / not zero */

loc_000B50D4: ;
    xmm2 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */

loc_000B50D9: ;
    if (CMP_LE(ebp, ebx)) goto loc_000B53F2; /* jle: less or equal (signed <=) */

loc_000B50E1: ;
    eax = MEM32(esp + 0x1A0);
    eax = eax << 4;
    eax = eax + 0x58EEC6;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEM32(esp + 0x14) = eax;
    goto loc_000B5100;

    /* nop */

loc_000B5100: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5105: ;
    ecx = MEM32(0x8470DC);
    edx = ZX8(MEM8(ecx + 0x2A8));
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(edx + eax + 0x1F8); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B512E: ;
    ecx = MEM32(0x8470DC);
    edx = ZX8(MEM8(ecx + 0x2A8));
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = xmm0 * MEMF(edx + eax + 0x1F4); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5160: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    (void)0; /* cmp MEM8(ecx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_000B51B1; /* jne: not equal / not zero */

loc_000B518C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B5191: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B51A4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    goto loc_000B51D3;

loc_000B51B1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B51B6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B51C9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));

loc_000B51D3: ;
    MEM8(esp + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B51DC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFAEE0);
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x24) = LO8(edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x103);
    PUSH32(esp, 0x135);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5227: ;
    xmm0 = xmm0 * MEMF(0x6496BC); /* mulss */
    xmm0 = xmm0 + MEMF(0x59A8D8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000B5252: ;
    esi = eax;
    esp = esp + 0x48;
    if (CMP_EQ(esi, ebx)) goto loc_000B52A3; /* je: equal / zero */

loc_000B525B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5260: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    MEMF(esi + 0x104) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x108) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5288: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x649550); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0x10C) = xmm1; /* movss */

loc_000B52A3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B52A8: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    edx = MEM32(esp + 0x14);
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    (void)0; /* cmp MEM8(edx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if (CMP_NE(MEM8(edx), LO8(ebx))) goto loc_000B52F9; /* jne: not equal / not zero */

loc_000B52D4: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B52D9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B52EC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    goto loc_000B531B;

loc_000B52F9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B52FE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B5311: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));

loc_000B531B: ;
    MEM8(esp + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B5324: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFAEE0);
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x24) = LO8(edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12A);
    PUSH32(esp, 0x135);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B536F: ;
    xmm0 = xmm0 * MEMF(0x6496BC); /* mulss */
    xmm0 = xmm0 + MEMF(0x59A8D8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000B539A: ;
    esi = eax;
    esp = esp + 0x48;
    if (CMP_EQ(esi, ebx)) goto loc_000B53EB; /* je: equal / zero */

loc_000B53A3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B53A8: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    MEMF(esi + 0x104) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x108) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B53D0: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x649550); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0x10C) = xmm1; /* movss */

loc_000B53EB: ;
    ebp--;
    if ((ebp != 0)) goto loc_000B5100; /* jne: not equal / not zero */

loc_000B53F2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B53F5: ;
    POP32(esp, edi);
    esp = esp + 0x184;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5400
 * Original: 0x000B5400 - 0x000B5543 (323 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5400: ;
    esp = esp - 0x34;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    SET_LO8(eax, MEM8(ebp + 0x291));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000B5543(); return; } /* je: equal / zero */

loc_000B5417: ;
    xmm1 = MEMF(ebp + 0x2AC); /* movss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x2AC) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000B5483; /* jbe: below or equal (unsigned <=) */

loc_000B543B: ;
    xmm1 = MEMF(ebp + 0x2B0); /* movss */
    xmm2 = MEMF(ebp + 0x298); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x2B4); /* addss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x2B0); /* addss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(ebp + 0x2B4) = xmm1; /* movss */
    MEMF(ebp + 0x298) = xmm2; /* movss */
    MEMF(ebp + 0x2B0) = xmm0; /* movss */

loc_000B5483: ;
    eax = MEM32(0x8470DC);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = ecx + edx + 0x80;
    PUSH32(esp, eax);
    ecx = ebp + 0x294;
    PUSH32(esp, ecx);
    edx = ebp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000B54B3: ;
    eax = MEM32(0x8470DC);
    ecx = ZX8(MEM8(eax + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = ecx + edx + 0x80;
    PUSH32(esp, eax);
    ecx = ebp + 0x2A0;
    PUSH32(esp, ecx);
    esi = ebp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000B54E3: ;
    edx = MEM32(0x8470DC);
    ecx = MEM32(edx + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x40;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000B5500: ;
    xmm0 = MEMF(ecx + 0x328); /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648E18); /* mulss */
    MEMF(esi) = xmm4; /* movss */
    xmm1 = xmm1 + MEMF(ebp + 0x2A4); /* addss */
    xmm1 = xmm1 * MEMF(0x649080); /* mulss */
    POP32(esp, esi);
    MEMF(ebp + 0x40) = xmm1; /* movss */
    MEMF(ebp + 0x44) = xmm4; /* movss */
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000B58F0
 * Original: 0x000B58F0 - 0x000B5E35 (1349 bytes, 298 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B58F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B58F0: ;
    esp = esp - 0xD0;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xD8);
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_000B5E2D; /* jbe: below or equal (unsigned <=) */

loc_000B5922: ;
    eax = MEM32(ebp + 0x4C);
    ecx = eax + 0x84;
    PUSH32(esp, ebx);
    eax = eax + 0x78;
    edx = esp + 0x40;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(ebp + 0x4C);
    ecx = MEM32(eax + 0x4B0);
    edi = MEM32(eax + 0x3C8);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(0x81BCE0);
    ebx = MEM32(edx + 8);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000B5991: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_000B599D: ;
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_000B59A9; /* je: equal / zero */

loc_000B59A6: ;
    ecx = MEM32(eax + 0x34);

loc_000B59A9: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = esp + 0x24;
    ecx = ebx;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_000B59BA: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000B59D6; /* jne: not equal / not zero */

loc_000B59C1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_000B59D6: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, edi);
    esi = esp + 0x1C;
    edi = esp + 0x18;
    ecx = ebx;
    PUSH32(esp, 0); sub_003ECF40(); /* call 0x003ECF40 */

loc_000B59EE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000B5A12; /* jne: not equal / not zero */

loc_000B59F5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_000B5A12: ;
    eax = esp + 0x10;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B5A1D: ;
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = (int32_t)MEMF(ebp + 0x54); /* cvttss2si */
    xmm1 = MEMF(0x648E5C); /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_000B5A3C; /* je: equal / zero */

loc_000B5A34: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000B5A3C: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 >= xmm7)) goto loc_000B5A68; /* jae: above or equal (unsigned >=) */

loc_000B5A55: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */

loc_000B5A68: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000B5E2A; /* jle: less or equal (signed <=) */

loc_000B5A70: ;
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = esp + 0x34;
    edx = ecx;
    MEM32(esp + 0x6C) = ecx;
    ecx = esp + 0x48;
    MEM32(esp + 0x68) = ecx;
    ecx = esp + 0x78;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x70) = ecx;
    MEMF(esp + 0xCC) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    MEM8(esp + 0xD4) = 0;
    MEM32(esp + 0x30) = eax;
    edi = 1;
    goto loc_000B5AC7;

loc_000B5ABF: ;
    xmm7 = MEMF(0x648D14); /* movss */

loc_000B5AC7: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5ACC: ;
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648F20); /* subss */
    xmm5 = xmm5 * MEMF(0x648D40); /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5AEE: ;
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    xmm6 = xmm6 + xmm0; /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5B08: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    xmm1 = xmm1 - MEMF(0x648F20); /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5B39: ;
    xmm0 = xmm0 * MEMF(0x649788); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x6C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x64);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B5B75: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000B5B81; /* jns: not sign (positive) */

loc_000B5B7C: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000B5B81: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    SET_LO8(eax, LO8(eax) + 3);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM8(esp + 0xC1) = LO8(eax);
    MEMF(esp + 0xB4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B5BBC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0xBC) = edi;
    MEM8(esp + 0xC0) = 0xFF;
    MEM32(esp + 0xC4) = 0;
    MEM16(esp + 0xBA) = 0x35;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    edx = edx + 0x38;
    MEM16(esp + 0xB8) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5C04: ;
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x68);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x70);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B5C3A: ;
    edx = MEM32(esp + 0x24);
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x9C) = 0x48;
    MEM8(esp + 0xA0) = 2;
    MEM8(esp + 0xA1) = 0xFF;
    MEM16(esp + 0xA6) = 0x10;
    MEM16(esp + 0xA8) = 0xF;
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_000B5C92: ;
    eax = MEM32(0x5A02F8);
    ecx = MEM32(0x5A02F0);
    edx = MEM32(0x5A02F4);
    MEM32(esp + 0x70) = eax;
    eax = esp + 0x68;
    esp = esp + 0x10;
    ebx = eax;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B5CBD: ;
    ecx = MEM32(0x85D5B4);
    edx = esp + 0xA0;
    eax = ebx;
    PUSH32(esp, 0); sub_0012CDB0(); /* call 0x0012CDB0 */

loc_000B5CD1: ;
    xmm0 = MEMF(esp + 0xA0); /* movss */
    xmm0 = xmm0 * MEMF(0x64A104); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x44) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_000B5CFB; /* ja: above (unsigned >) */

loc_000B5CF5: ;
    MEMF(esp + 0x44) = xmm1; /* movss */

loc_000B5CFB: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B5D04: ;
    xmm0 = MEMF(esp + 0xA4); /* movss */
    xmm0 = xmm0 * MEMF(0x64A104); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x92) = LO8(eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_000B5D35; /* ja: above (unsigned >) */

loc_000B5D2F: ;
    MEMF(esp + 0x2C) = xmm1; /* movss */

loc_000B5D35: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B5D3E: ;
    xmm0 = MEMF(esp + 0xA8); /* movss */
    xmm0 = xmm0 * MEMF(0x64A104); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x93) = LO8(eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_000B5D6F; /* ja: above (unsigned >) */

loc_000B5D69: ;
    MEMF(esp + 0x28) = xmm1; /* movss */

loc_000B5D6F: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B5D78: ;
    esi = MEM32(esp + 0x8C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    ebx = MEM32(ebp + 0x50);
    esi = esi | 3;
    MEM32(esp + 0x8C) = esi;
    esi = MEM32(ebp + 0x4C);
    edx = esp + 0x74;
    MEM8(esp + 0x94) = LO8(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    MEM8(esp + 0xBD) = 0xFF;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, edx);
    ecx = esp + 0xDC;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_000B5DD6: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_000B5E09; /* je: equal / zero */

loc_000B5DDD: ;
    eax = MEM32(eax + 0x144);
    ecx = MEM32(esp + 0xCC);
    edx = MEM32(esp + 0xD0);
    eax = eax + 0x34;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xD4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = ebx;

loc_000B5E09: ;
    eax = MEM32(esp + 0x30);
    xmm0 = MEMF(ebp + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    eax--;
    MEMF(ebp + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x30) = eax;
    if ((eax != 0)) goto loc_000B5ABF; /* jne: not equal / not zero */

loc_000B5E2A: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000B5E2D: ;
    POP32(esp, ebp);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B5E40
 * Original: 0x000B5E40 - 0x000B5EC4 (132 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    eax = MEM32(edi + 0x40);
    ecx = MEM32(eax + 0x4B0);
    ebp = MEM32(eax + 0x3C8);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(0x81BCE0);
    ebx = MEM32(edx + 8);
    edi = edi + 0x34;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000B5E7B: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_000B5E87: ;
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_000B5E93; /* je: equal / zero */

loc_000B5E90: ;
    ecx = MEM32(eax + 0x34);

loc_000B5E93: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    esi = esi + 0x2C;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_000B5EA2: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(eax, eax)) goto loc_000B5EBF; /* jne: not equal / not zero */

loc_000B5EAE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */

loc_000B5EBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B5ED0
 * Original: 0x000B5ED0 - 0x000B5FA0 (208 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5ED0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B5ED0: ;
    esp = esp - 0x28;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    SET_LO8(eax, 3);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x74;
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000B5F4C: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000B5F9C; /* je: equal / zero */

loc_000B5F53: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x6A;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x4C;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xA;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B5F9C: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5FA0
 * Original: 0x000B5FA0 - 0x000B6071 (209 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5FA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B5FA0: ;
    esp = esp - 0x28;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 4) = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    SET_LO8(eax, 2);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x74;
    MEM32(esp + 8) = 0;
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000B601D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000B606D; /* je: equal / zero */

loc_000B6024: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x6A;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x4C;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xA;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B606D: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6080
 * Original: 0x000B6080 - 0x000B6292 (530 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6080: ;
    xmm6 = MEMF(0x648D14); /* movss */
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x54); /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm0 <= xmm6)) goto loc_000B628D; /* jbe: below or equal (unsigned <=) */

loc_000B60B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    if (TEST_Z(edi, edi)) goto loc_000B60BD; /* je: equal / zero */

loc_000B60B8: ;
    edi = edi + 0x78;
    goto loc_000B60C3;

loc_000B60BD: ;
    edi = MEM32(esi + 0x50);
    edi = edi + 0x60;

loc_000B60C3: ;
    xmm1 = MEMF(edi + 4); /* movss */
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(0x648E5C); /* movss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (TEST_Z(ecx, ecx)) goto loc_000B60EC; /* je: equal / zero */

loc_000B60E4: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000B60EC: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 >= xmm6)) goto loc_000B6110; /* jae: above or equal (unsigned >=) */

loc_000B60FD: ;
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */

loc_000B6110: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000B628C; /* jle: less or equal (signed <=) */

loc_000B6118: ;
    ecx = esp + 0x14;
    PUSH32(esp, ebx);
    edx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x2C) = eax;
    goto loc_000B6140;

loc_000B6132: ;
    xmm6 = MEMF(0x648D14); /* movss */
    /* nop */

loc_000B6140: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6145: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6159: ;
    xmm7 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6161: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = esp + 0x1C;
    xmm0 = xmm0 - xmm6; /* subss */
    ebx = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000B618A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B618F: ;
    xmm0 = xmm0 * MEMF(esi + 0x60); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B61C9: ;
    xmm1 = MEMF(esi + 0x70); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000B61DA; /* jbe: below or equal (unsigned <=) */

loc_000B61D3: ;
    eax = 1;
    goto loc_000B61DC;

loc_000B61DA: ;
    eax = 0; /* xor self */

loc_000B61DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B6203: ;
    ecx = ZX8(MEM8(esi + 0x6D));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(MEM8(esi + 0x6C));
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6217: ;
    xmm0 = xmm0 * MEMF(esi + 0x68); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x64); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B622C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B623C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B624D: ;
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    ecx = edi;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000B6266: ;
    eax = MEM32(esp + 0x74);
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    esp = esp + 0x48;
    eax--;
    MEMF(esi + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    if ((eax != 0)) goto loc_000B6132; /* jne: not equal / not zero */

loc_000B628A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B628C: ;
    POP32(esp, edi);

loc_000B628D: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000B62A0
 * Original: 0x000B62A0 - 0x000B62D9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B62A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B62A0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x69 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_A(eax, 0x69)) goto loc_000B62D7; /* ja: above (unsigned >) */

loc_000B62AE: ;
    eax = ZX8(MEM8(eax + 0xB62E8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0xB62DC)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    (void)0; /* cmp edx, MEM32(esi + 0x4C) - flags set for next jcc */
    goto loc_000B62D0;

    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, MEM32(esi + 0x50) - flags set for next jcc */

loc_000B62D0: ;
    if (CMP_NE(ecx, MEM32(esi + 0x50))) goto loc_000B62D7; /* jne: not equal / not zero */

loc_000B62D2: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000B62D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6360
 * Original: 0x000B6360 - 0x000B6F2A (3018 bytes, 605 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6360: ;
    esp = esp - 0x88;
    if (CMP_LE(eax & eax, 0)) goto loc_000B6F23; /* jle: less or equal (signed <=) */

loc_000B636E: ;
    ecx = MEM32(esp + 0xB8);
    xmm6 = MEMF(esp + 0x9C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm6 = xmm6 + MEMF(esp + 0xA0); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx++;
    PUSH32(esp, edi);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x38) = ecx;
    MEMF(esp + 0x50) = xmm6; /* movss */
    MEM32(esp + 0x2C) = eax;
    goto loc_000B63B3;

loc_000B63AD: ;
    xmm6 = MEMF(esp + 0x50); /* movss */

loc_000B63B3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B63B8: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0xA8); /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0xA4); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B63D2: ;
    xmm0 = xmm0 * MEMF(esp + 0xA0); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x9C); /* addss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B63FB: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0xB8); /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0xB4); /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B642C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x38))); }
    SET_LO8(edx, LO8(edx) + MEM8(esp + 0xC4));
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6441: ;
    xmm0 = xmm0 * MEMF(esp + 0xB0); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0xAC); /* addss */
    xmm2 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(esp + 0xDC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x6490B0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0xC0); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0xBC); /* mulss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm0 = xmm0 * xmm2; /* mulss */
    ebx = 1;
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B64C4; /* je: equal / zero */

loc_000B64BC: ;
    MEM32(esp + 0x10) = 5;

loc_000B64C4: ;
    SET_LO8(eax, MEM8(esp + 0xE0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B64D7; /* je: equal / zero */

loc_000B64CF: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 0x600;

loc_000B64D7: ;
    edx = MEM32(esp + 0xD4);
    eax = MEM32(esp + 0xD0);
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C11B0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x114);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x238);
    PUSH32(esp, 0x237);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000B653E: ;
    esi = eax;
    esp = esp + 0x48;
    if (TEST_Z(esi, esi)) goto loc_000B6F15; /* je: equal / zero */

loc_000B654B: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEMF(esi + 0x108) = xmm0; /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x118) = xmm0; /* movss */
    MEMF(esi + 0x10C) = xmm0; /* movss */
    MEMF(esi + 0x204) = xmm0; /* movss */
    MEMF(esi + 0x208) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esi + 0x11C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    eax = esi + 0x118;
    MEM32(esp + 0x44) = eax;
    eax = esi + 0x11C;
    MEM32(esp + 0x4C) = eax;
    MEMF(esi + 0x120) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    eax = esi + 0x120;
    MEM32(esp + 0x54) = eax;
    eax = esi + 0x124;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    MEM32(esp + 0x64) = eax;
    eax = esi + 0x128;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648E2C); /* movss */
    MEM32(esp + 0x74) = eax;
    eax = esi + 0x12C;
    MEMF(esi + 0x200) = xmm1; /* movss */
    MEM32(esi + 0x114) = ebx;
    MEM32(esp + 0x84) = eax;
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6620: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    ebp = esi + 0x130;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B663E: ;
    xmm7 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(ebp) = xmm0; /* movss */
    MEMF(ebp + 4) = xmm6; /* movss */
    xmm1 = MEMF(ebp); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp + 4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B66D3: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    ebx = esi + 0x138;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B66E9: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(ebx) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm6; /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6772: ;
    xmm6 = xmm0; /* movaps */
    edi = esi + 0x140;
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    MEM32(esp + 0x5C) = edi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B678C: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x88) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */
    MEMF(edi + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6817: ;
    xmm6 = xmm0; /* movaps */
    edi = esi + 0x148;
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    MEM32(esp + 0x6C) = edi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6831: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edi); /* mulss */
    MEMF(edi) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */
    MEMF(edi + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B68B5: ;
    xmm6 = xmm0; /* movaps */
    edi = esi + 0x150;
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    MEM32(esp + 0x7C) = edi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B68CF: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edi); /* mulss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B695D: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    esi = esi + 0x158;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B6973: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm6; /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    eax = MEM32(esp + 0xD4);
    ecx = MEM32(esp + 0xD0);
    edx = MEM32(esp + 0xCC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0E10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    xmm1 = MEMF(esi); /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x258);
    eax = eax & 0xFFFFFFFBu;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x238);
    PUSH32(esp, 0x237);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    PUSH32(esp, eax);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x114); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    edi = 0x5A02CC;
    MEMF(esi + 4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000B6A6C: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_000B6F15; /* je: equal / zero */

loc_000B6A77: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    edx = MEM32(esp + 0x44);
    MEMF(eax + 0x108) = xmm0; /* movss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x10C) = xmm0; /* movss */
    MEMF(eax + 0x340) = xmm0; /* movss */
    MEMF(eax + 0x348) = xmm0; /* movss */
    MEMF(eax + 0x344) = xmm1; /* movss */
    MEMF(eax + 0x34C) = xmm0; /* movss */
    MEM32(eax + 0x114) = 1;
    ecx = MEM32(edx);
    MEM32(eax + 0x118) = ecx;
    ecx = eax + 0x130;
    if (CMP_EQ(ebp, ecx)) goto loc_000B6AE9; /* je: equal / zero */

loc_000B6ADE: ;
    edx = MEM32(ebp);
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 4);
    MEM32(ecx + 4) = edx;

loc_000B6AE9: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx);
    ecx = eax + 0x138;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(eax + 0x11C) = edx;
    if (CMP_EQ(ebx, ecx)) goto loc_000B6B09; /* je: equal / zero */

loc_000B6AFF: ;
    edx = MEM32(ebx);
    MEM32(ecx) = edx;
    edx = MEM32(ebx + 4);
    MEM32(ecx + 4) = edx;

loc_000B6B09: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(ecx);
    MEM32(eax + 0x120) = edx;
    edx = MEM32(esp + 0x5C);
    ecx = eax + 0x140;
    if (CMP_EQ(edx, ecx)) goto loc_000B6B2D; /* je: equal / zero */

loc_000B6B23: ;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;

loc_000B6B2D: ;
    ecx = MEM32(esp + 0x64);
    edx = MEM32(ecx);
    MEM32(eax + 0x124) = edx;
    edx = MEM32(esp + 0x6C);
    ecx = eax + 0x148;
    if (CMP_EQ(edx, ecx)) goto loc_000B6B51; /* je: equal / zero */

loc_000B6B47: ;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;

loc_000B6B51: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(ecx);
    MEM32(eax + 0x128) = edx;
    edx = MEM32(esp + 0x7C);
    ecx = eax + 0x150;
    if (CMP_EQ(edx, ecx)) goto loc_000B6B75; /* je: equal / zero */

loc_000B6B6B: ;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;

loc_000B6B75: ;
    ecx = MEM32(esp + 0x84);
    edx = MEM32(ecx);
    ecx = eax + 0x158;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    MEM32(eax + 0x12C) = edx;
    if (CMP_EQ(esi, ecx)) goto loc_000B6B98; /* je: equal / zero */

loc_000B6B8E: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;

loc_000B6B98: ;
    ecx = MEM32(eax + 0x30);
    (void)0; /* test HI8(ecx), 2 - flags set for next jcc */
    xmm3 = MEMF(eax + 0x54); /* movss */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm0; /* movaps */
    if (TEST_Z(HI8(ecx), 2)) goto loc_000B6BB7; /* je: equal / zero */

loc_000B6BB0: ;
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = xmm0; /* movaps */

loc_000B6BB7: ;
    xmm1 = MEMF(eax + 0x78); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(eax + 0x160) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(eax + 0x164) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x78); /* movss */
    xmm1 = xmm1 + MEMF(eax + 0x54); /* addss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(eax + 0x188) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(eax + 0x18C) = xmm1; /* movss */
    MEMF(eax + 0x170) = xmm0; /* movss */
    MEMF(eax + 0x174) = xmm0; /* movss */
    MEMF(eax + 0x19C) = xmm0; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x198) = xmm1; /* movss */
    MEMF(eax + 0x180) = xmm0; /* movss */
    MEMF(eax + 0x184) = xmm0; /* movss */
    MEMF(eax + 0x1A8) = xmm1; /* movss */
    MEMF(eax + 0x1AC) = xmm0; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x1B0) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x1B4) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + MEMF(eax + 0x54); /* addss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x1D8) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x1DC) = xmm4; /* movss */
    xmm4 = MEMF(0x648E64); /* movss */
    MEMF(eax + 0x1C4) = xmm4; /* movss */
    MEMF(eax + 0x1C0) = xmm0; /* movss */
    MEMF(eax + 0x1EC) = xmm4; /* movss */
    MEMF(eax + 0x1E8) = xmm1; /* movss */
    MEMF(eax + 0x1D4) = xmm4; /* movss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    MEMF(eax + 0x1FC) = xmm4; /* movss */
    MEMF(eax + 0x1F8) = xmm1; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x200) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x204) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + MEMF(eax + 0x54); /* addss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x228) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x22C) = xmm4; /* movss */
    xmm4 = MEMF(0x648EA8); /* movss */
    MEMF(eax + 0x214) = xmm4; /* movss */
    MEMF(eax + 0x210) = xmm0; /* movss */
    MEMF(eax + 0x23C) = xmm4; /* movss */
    MEMF(eax + 0x238) = xmm1; /* movss */
    MEMF(eax + 0x224) = xmm4; /* movss */
    MEMF(eax + 0x220) = xmm0; /* movss */
    MEMF(eax + 0x24C) = xmm4; /* movss */
    MEMF(eax + 0x248) = xmm1; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x250) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x254) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + MEMF(eax + 0x54); /* addss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x278) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x27C) = xmm4; /* movss */
    xmm4 = MEMF(0x649228); /* movss */
    MEMF(eax + 0x260) = xmm0; /* movss */
    MEMF(eax + 0x264) = xmm4; /* movss */
    MEMF(eax + 0x28C) = xmm4; /* movss */
    MEMF(eax + 0x288) = xmm1; /* movss */
    MEMF(eax + 0x274) = xmm4; /* movss */
    MEMF(eax + 0x270) = xmm0; /* movss */
    MEMF(eax + 0x29C) = xmm4; /* movss */
    MEMF(eax + 0x298) = xmm1; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x2A0) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x2A4) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + MEMF(eax + 0x54); /* addss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x2C8) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x2CC) = xmm4; /* movss */
    xmm4 = MEMF(0x648E68); /* movss */
    MEMF(eax + 0x2B4) = xmm4; /* movss */
    MEMF(eax + 0x2B0) = xmm0; /* movss */
    MEMF(eax + 0x2DC) = xmm4; /* movss */
    MEMF(eax + 0x2D8) = xmm1; /* movss */
    MEMF(eax + 0x2C4) = xmm4; /* movss */
    MEMF(eax + 0x2C0) = xmm0; /* movss */
    MEMF(eax + 0x2EC) = xmm4; /* movss */
    MEMF(eax + 0x2E8) = xmm1; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x2F0) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x7C); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + 0x2F4) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm4 = xmm4 + MEMF(eax + 0x54); /* addss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(eax + 0x318) = xmm4; /* movss */
    xmm2 = MEMF(eax + 0x7C); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(eax + 0x31C) = xmm2; /* movss */
    MEMF(eax + 0x300) = xmm0; /* movss */
    MEMF(eax + 0x304) = xmm1; /* movss */
    MEMF(eax + 0x328) = xmm1; /* movss */
    MEMF(eax + 0x32C) = xmm1; /* movss */
    MEMF(eax + 0x310) = xmm0; /* movss */
    MEMF(eax + 0x314) = xmm1; /* movss */
    MEMF(eax + 0x338) = xmm1; /* movss */
    MEMF(eax + 0x33C) = xmm1; /* movss */

loc_000B6F15: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    if ((MEM32(esp + 0x2C) != 0)) goto loc_000B63AD; /* jne: not equal / not zero */

loc_000B6F1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B6F23: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6F30
 * Original: 0x000B6F30 - 0x000B6F94 (100 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B6F30: ;
    eax = MEM32(0x84A144);
    if (TEST_NZ(eax, eax)) goto loc_000B6F93; /* jne: not equal / not zero */

loc_000B6F39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(0x84A13C);
    PUSH32(esp, 0x3E800000);
    ecx = MEM32(eax + 0x1F8);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x14);
    edx = MEM32(eax + 0x1F4);
    PUSH32(esp, 0x9B);
    PUSH32(esp, 0x64);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x40600000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B6360(); /* call 0x000B6360 */

loc_000B6F90: ;
    esp = esp + 0x48;

loc_000B6F93: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6FA0
 * Original: 0x000B6FA0 - 0x000B7085 (229 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000B6FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebx;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B6FBD: ;
    xmm1 = MEMF(ebx + 0x78); /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm2 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x30;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_000B701B: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B707E; /* je: equal / zero */

loc_000B7022: ;
    if (CMP_EQ(MEM8(esp + 0xD5), 3)) goto loc_000B707E; /* je: equal / zero */

loc_000B702C: ;
    esi = MEM32(ebx + 0x68);
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    (void)0; /* cmp esi, 0x194 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(esi, 0x194)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(eax, LO8(eax) & 0x33);
    SET_LO8(eax, LO8(eax) - 1);
    eax = ZX8(LO8(eax));
    ecx = eax;
    ecx = ecx | 0xFFFFFF00u;
    ecx = ecx << 8;
    ecx = ecx | eax;
    edx = esp + 0x18;
    ecx = ecx << 8;
    PUSH32(esp, edx);
    ecx = ecx | eax;
    PUSH32(esp, 0);
    edi = esp + 0x1C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_000B9F10(); /* call 0x000B9F10 */

loc_000B707B: ;
    esp = esp + 8;

loc_000B707E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7090
 * Original: 0x000B7090 - 0x000B711E (142 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7090: ;
    esp = esp - 0x68;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x70));
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B70B2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648D10); /* movss */
    edx = edx + 0x64;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x40) = edx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_000B711E(); return; } /* je: equal / zero */

loc_000B70D0: ;
    xmm0 = MEMF(0x6493C0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x58C050); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649440); /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_000B7172(); return; /* tail jmp 0x000B7172 */

}

/**
 * sub_000B7240
 * Original: 0x000B7240 - 0x000B7346 (262 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7240(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000B7240: ;
    esp = esp - 0x18;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B726C: ;
    xmm0 = xmm0 * MEMF(0x64A564); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A560); /* addss */
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x28) = xmm0; /* movss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000B729A: ;
    eax = MEM32(esp + 0x64);
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B72C5: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_000B72D1; /* jns: not sign (positive) */

loc_000B72CC: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_000B72D1: ;
    eax = eax + 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B72DA: ;
    xmm0 = xmm0 * MEMF(0x64A55C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A558); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B72F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7305: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1F;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7316: ;
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A554); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x58;
    ecx = esp + 0x4C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000B7339: ;
    esp = esp + 0x48;
    eax = 1;
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7350
 * Original: 0x000B7350 - 0x000B74CD (381 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000B7350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x138;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7367: ;
    if (TEST_Z(esi, esi)) goto loc_000B74C7; /* je: equal / zero */

loc_000B736F: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000B74C7; /* je: equal / zero */

loc_000B737D: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_000B74C7; /* je: equal / zero */

loc_000B738D: ;
    edx = esi;
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B739B: ;
    if (TEST_Z(edi, edi)) { sub_000B74CD(); return; } /* je: equal / zero */

loc_000B73A3: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0x53)) { sub_000B74CD(); return; } /* je: equal / zero */

loc_000B73AF: ;
    if (CMP_EQ(eax, 0xA5)) { sub_000B74CD(); return; } /* je: equal / zero */

loc_000B73BA: ;
    eax = edi;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B73C1: ;
    if (CMP_EQ(eax, 0x63)) goto loc_000B74C7; /* je: equal / zero */

loc_000B73CA: ;
    eax = eax << 4;
    edi = eax + 0x58EEC6;
    if (CMP_EQ(MEM8(edi), 2)) goto loc_000B74C7; /* je: equal / zero */

loc_000B73DC: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F0678);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000B73EB: ;
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x58F1D8);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B73FF: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7D8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7D4); /* movss */
    eax = 0x1E;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEM16(esp + 0x40) = LO16(eax);
    MEM16(esp + 0x48) = LO16(eax);
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0x14;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7D0); /* movss */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 1)) ? 1 : 0); /* sete */
    edi = esp + 8;
    MEM16(esp + 0x2E) = 0x14;
    MEM16(esp + 0x30) = 3;
    MEM16(esp + 0x32) = 2;
    MEM16(esp + 0x36) = 0x28;
    MEM16(esp + 0x38) = 0x9B;
    MEM16(esp + 0x3A) = 0x64;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x3C) = LO8(ecx);
    MEM16(esp + 0x44) = 0x10;
    MEM16(esp + 0x46) = 0xF;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_000B74C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B74E0
 * Original: 0x000B74E0 - 0x000B7987 (1191 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B74E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B74E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x128;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ebx, esi)) goto loc_000B77B1; /* je: equal / zero */

loc_000B74F8: ;
    edx = ebx;
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B7506: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9D8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A674); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A864); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9D4); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648CFC); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9D0); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edi = esp + 0x38;
    MEM16(esp + 0x5C) = 0xA;
    MEM16(esp + 0x5E) = LO16(esi);
    MEM16(esp + 0x60) = 3;
    MEM16(esp + 0x62) = 2;
    MEM16(esp + 0x64) = 0x28;
    MEM16(esp + 0x66) = 0x14;
    MEM16(esp + 0x68) = 0x9B;
    MEM16(esp + 0x6A) = 0x64;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM8(esp + 0x6C) = 0;
    MEM16(esp + 0x74) = 0x10;
    MEM16(esp + 0x76) = 0xF;
    MEM32(esp + 0x78) = esi;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_000B75E2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B75E7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    ecx = 0x24;
    eax = esi;
    edi = esp + 0x90;
    MEM32(esp + 0x120) = esi;
    MEM8(esp + 0x124) = 0;
    MEM8(esp + 0x125) = 0;
    MEM32(esp + 0x128) = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = edx + 0xC;
    MEM32(esp + 0x20) = edx;
    if ((edx != 0)) goto loc_000B77C0; /* jne: not equal / not zero */

loc_000B764E: ;
    xmm3 = MEMF(0x648E60); /* movss */
    xmm1 = MEMF(ebx + 0x78); /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm2 = MEMF(ebx + 0x80); /* movss */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEMF(esp + 0x84) = xmm3; /* movss */
    MEM32(esp + 0x124) = esi;
    MEM8(esp + 0x128) = 0;
    MEM8(esp + 0x129) = 0;
    MEM32(esp + 0x12C) = esi;
    ecx = 0x24;
    edi = esp + 0x94;
    PUSH32(esp, esi);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    xmm1 = xmm1 + MEMF(0x648EA4); /* addss */
    MEMF(esp) = xmm0; /* movss */
    edx = esp + 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_000B76EB: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B77B1; /* je: equal / zero */

loc_000B76F6: ;
    if (CMP_EQ(MEM8(esp + 0x125), 3)) goto loc_000B77B1; /* je: equal / zero */

loc_000B7704: ;
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B772E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x46;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B773F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7750: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7760: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x64A854); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648D24); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7786: ;
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA0); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, ecx);
    SET_LO8(ecx, 1);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000B1F50(); /* call 0x000B1F50 */

loc_000B77AE: ;
    esp = esp + 0x20;

loc_000B77B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B77B7: ;
    esi = 0; /* xor self */
    /* nop */

loc_000B77C0: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B77CF: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648EA4); /* mulss */
    xmm2 = xmm2 + MEMF(0x649420); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B77E7: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000B77F2: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    esp = esp + 0xC;
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, esi);
    esi = esp + 0x8C;
    edi = esp + 0x30;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEM32(0x780AB0) = 0x5F2730;
    MEM32(0x6C0210) = 0x181;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_000B7870: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000B7987(); return; } /* je: equal / zero */

loc_000B788C: ;
    if (CMP_EQ(MEM8(esp + 0x125), 3)) { sub_000B7987(); return; } /* je: equal / zero */

loc_000B789A: ;
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    esi = 0; /* xor self */
    MEM32(0x780AB0) = esi;
    MEM32(0x74FA2C) = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B78C4: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000B7927; /* je: equal / zero */

loc_000B78C8: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x98;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B78DC: ;
    MEMF(esp + 0x44) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B78F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B78FD: ;
    xmm0 = xmm0 * MEMF(0x6495E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, esi);
    edi = 0x64;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000B7922: ;
    esp = esp + 0x1C;
    goto loc_000B7976;

loc_000B7927: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7932: ;
    MEMF(esp + 0x38) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B794D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7953: ;
    xmm0 = xmm0 * MEMF(0x64A5E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A9CC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, esi);
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_001439F0(); /* call 0x001439F0 */

loc_000B7973: ;
    esp = esp + 0x14;

loc_000B7976: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_000B77B7; /* jne: not equal / not zero */

loc_000B7980: ;
    esi = 0; /* xor self */
    goto loc_000B764E;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B79A0
 * Original: 0x000B79A0 - 0x000B7AB7 (279 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B79A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000B79A0: ;
    esp = esp - 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xAC);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(esi, ebx)) goto loc_000B7AAB; /* je: equal / zero */

loc_000B79BC: ;
    if (CMP_EQ(eax, ebx)) goto loc_000B7A30; /* je: equal / zero */

loc_000B79C0: ;
    ecx = MEM32(eax + 0x68);
    if (CMP_EQ(ecx, 0x53)) goto loc_000B7A30; /* je: equal / zero */

loc_000B79C8: ;
    if (CMP_EQ(ecx, 0xA5)) goto loc_000B7A30; /* je: equal / zero */

loc_000B79D0: ;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B79D5: ;
    if (CMP_EQ(eax, 0x63)) goto loc_000B7AAB; /* je: equal / zero */

loc_000B79DE: ;
    eax = eax << 4;
    SET_LO8(eax, MEM8(eax + 0x58EEC6));
    if (CMP_EQ(LO8(eax), 2)) goto loc_000B7AAB; /* je: equal / zero */

loc_000B79EF: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 0x13);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(eax), 1)) ? 1 : 0); /* sete */
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0xB8) = LO8(eax);
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000B7A1C: ;
    esp = esp + 0x10;
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    MEM8(esp + 0xC) = LO8(ebx);
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) goto loc_000B7A37; /* jne: not equal / not zero */

loc_000B7A29: ;
    edi = 0x12C;
    goto loc_000B7A3C;

loc_000B7A30: ;
    eax = 4;
    goto loc_000B79DE;

loc_000B7A37: ;
    MEM8(esp + 0xC) = 1;

loc_000B7A3C: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x18) = LO8(eax);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x1C) = ebx;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    eax = esp + 0x24;
    ecx = 0xB;

loc_000B7A63: ;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 0xC;
    ecx--;
    if ((ecx != 0)) goto loc_000B7A63; /* jne: not equal / not zero */

loc_000B7A71: ;
    eax = 0x5F2720;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000B7A7B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_000B7A89: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000B7AB7(); return; } /* je: equal / zero */

loc_000B7A90: ;
    eax = 0x5F2714;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000B7A9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_000B7AA8: ;
    esp = esp + 0xC;

loc_000B7AAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7B10
 * Original: 0x000B7B10 - 0x000B8068 (1368 bytes, 330 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B7B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx + 0x64);
    ebx = esi + 0x4C;
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(edx, eax)) goto loc_000B8054; /* je: equal / zero */

loc_000B7B35: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ebx + 4))) goto loc_000B8054; /* jne: not equal / not zero */

loc_000B7B44: ;
    if (CMP_EQ(MEM32(ecx + 0x3C8), eax)) goto loc_000B8041; /* je: equal / zero */

loc_000B7B50: ;
    SET_LO8(ecx, MEM8(ecx + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_000B8041; /* je: equal / zero */

loc_000B7B62: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    edi = ebx + 0xC;
    MEM32(esp + 0x18) = ecx;
    goto loc_000B7B80;

    /* nop */

loc_000B7B80: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_000B7C83; /* je: equal / zero */

loc_000B7B8A: ;
    edx = eax + 0x40;
    esi = MEM32(edx);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x58F298);
    esi = MEM32(ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000B7BB3: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x58F1E8);
    esi = MEM32(ebx);
    edx = esp + 0x188;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000B7BCD: ;
    edx = MEM32(ebx);
    eax = MEM32(edx + 0x68);
    esp = esp + 0x10;
    (void)0; /* cmp eax, 0x36 - flags set for next jcc */
    ecx = esp + 0x20;
    if (CMP_EQ(eax, 0x36)) goto loc_000B7E58; /* je: equal / zero */

loc_000B7BE2: ;
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x180;
    eax = eax + 0x58F1EC;

loc_000B7BF3: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    ecx = ecx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B7C00: ;
    eax = MEM32(edi + 4);
    edx = MEM32(0x7FA20C);
    esp = esp + 0xC;
    eax = eax - edx;
    MEM32(edi + 4) = eax;
    if (((int32_t)eax >= 0)) goto loc_000B7CA3; /* jns: not sign (positive) */

loc_000B7C17: ;
    eax = MEM32(edi);
    xmm1 = MEMF(eax + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x4C); /* subss */
    xmm0 = MEMF(0x7FA248); /* movss */
    ecx = eax + 0x310;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 4) = xmm1; /* movss */
    eax = MEM32(edi);
    xmm1 = MEMF(eax + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x54); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 8) = xmm1; /* movss */
    eax = MEM32(edi);
    MEM8(eax + 0x148) = 0x10;
    MEM8(eax + 0x149) = 0x1B;
    MEM8(eax + 0x14A) = 0;
    MEM8(eax + 0x14B) = 0x10;
    eax = MEM32(edi);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 1;
    MEM32(edi) = 0;
    MEM32(ebx + 8) = MEM32(ebx + 8) - 1;

loc_000B7C83: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_000B7C8F; /* jne: not equal / not zero */

loc_000B7C8B: ;
    MEM32(esp + 0x1C) = edi;

loc_000B7C8F: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x14);
    eax++;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;

loc_000B7CA3: ;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + 0x10;
    edi = edi + 0xC;
    (void)0; /* cmp ecx, 0xB0 - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, 0xB0)) goto loc_000B7B80; /* jl: less (signed <) */

loc_000B7CBD: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000B8061; /* je: equal / zero */

loc_000B7CC9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7CCE: ;
    xmm0 = xmm0 * MEMF(0x64A204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x90); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x90) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_000B8061; /* jbe: below or equal (unsigned <=) */

loc_000B7D03: ;
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000B7D0C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edx + 8) = ecx;
    eax = ZX8(MEM8(ebx + 0x94));
    ecx = MEM32(eax * 4 + 0x597528);
    eax = 2;
    esi = 0; /* xor self */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEM32(esp + 0xB0) = 0x303;
    MEM32(esp + 0xBC) = ecx;
    MEM8(esp + 0xB8) = 1;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = esi;
    MEM32(esp + 0xD8) = 4;
    MEM32(esp + 0xE0) = esi;
    MEM32(esp + 0xE4) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7D85: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    MEM32(esp + 0xE8) = esi;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x98) = esi;
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEM8(esp + 0x30) = 0;
    MEM8(esp + 0x31) = 0;
    edx = edx + 0x34;
    MEM16(esp + 0x6A) = LO16(edx);
    SET_LO8(edx, MEM8(ebx + 0x94));
    MEM8(esp + 0x45) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7E0C: ;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    SET_LO8(eax, LO8(eax) & 1);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEM8(esp + 0x44) = LO8(eax);
    MEMF(esp + 0x40) = xmm0; /* movss */
    goto loc_000B7E70;

loc_000B7E58: ;
    eax = MEM32(esp + 0x18);
    eax = eax + 0x58F29C;
    goto loc_000B7BF3;

loc_000B7E67: ;
    esi = 0; /* xor self */
    /* nop */

loc_000B7E70: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7E75: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    if (CMP_EQ(edx, esi)) goto loc_000B7E92; /* je: equal / zero */

loc_000B7E7E: ;
    eax = edx;

loc_000B7E80: ;
    eax--;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = ecx;
    if ((eax != 0)) goto loc_000B7E80; /* jne: not equal / not zero */

loc_000B7E92: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx - ebx;
    ecx = ecx - 0xC;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    MEM8(esp + 0xAC) = 0xFF;
    MEM8(esp + 0xAD) = 0xFF;
    MEM8(esp + 0xAE) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7EC8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0xAF) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7EDE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x32) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7EF2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x33) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B7F06: ;
    xmm0 = xmm0 * MEMF(0x64A200); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A16C); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    esi = esi << 4;
    edi = esi;
    eax = MEM32(edi + 0x58F1E8);
    esi = MEM32(ebx);
    edx = esp + 0x180;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000B7F3F: ;
    ecx = esp + 0x188;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = edi + 0x58F1EC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B7F5B: ;
    ecx = MEM32(esp + 0x88);
    edx = MEM32(esp + 0x8C);
    eax = MEM32(esp + 0x90);
    MEM32(esp + 0x94) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x98) = edx;
    SET_LO8(edx, MEM8(ecx + 4));
    MEM32(esp + 0x9C) = eax;
    MEM8(esp + 0x2C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7F94: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x597978);
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000B7FBA: ;
    ecx = MEM32(esp + 0x4C);
    esp = esp + 0x3C;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_000B800D; /* je: equal / zero */

loc_000B7FC7: ;
    edi = eax + 0x310;
    ecx = 0xA;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B7FDD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x10);
    edx = edx + 0x14;
    MEM32(eax + 4) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    ecx++;
    eax--;
    MEM32(ebx + 8) = ecx;
    MEM32(esp + 0x14) = eax;

loc_000B800D: ;
    xmm0 = MEMF(ebx + 0x90); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x90) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000B8061; /* jbe: below or equal (unsigned <=) */

loc_000B802E: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_000B7E67; /* jne: not equal / not zero */

loc_000B803A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B8041: ;
    if (CMP_EQ(MEM32(ebx + 8), eax)) goto loc_000B8061; /* je: equal / zero */

loc_000B8046: ;
    eax = esi;
    PUSH32(esp, 0); sub_000B8710(); /* call 0x000B8710 */

loc_000B804D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B8054: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_000B8061: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8070
 * Original: 0x000B8070 - 0x000B830C (668 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8070: ;
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm4 = MEMF(0x648E14); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    xmm2 = MEMF(ebp + 0x310); /* movss */
    xmm6 = MEMF(ebp + 0x318); /* movss */
    xmm7 = MEMF(ebp + 0x44); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(ebp + 0x310) = xmm0; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm4 = MEMF(ebp + 0x31C); /* movss */
    MEMF(ebp + 0x318) = xmm1; /* movss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x314); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(ebp + 0x314); /* movss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(ebp + 0x314) = xmm3; /* movss */
    xmm6 = MEMF(ebp + 0x4C); /* movss */
    xmm3 = MEMF(ebp + 0x44); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + MEMF(ebp + 0x40); /* addss */
    xmm0 = MEMF(0x64A9C8); /* movss */
    xmm6 = xmm6 - xmm4; /* subss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(ebp + 0x4C) = xmm6; /* movss */
    xmm6 = MEMF(ebp + 0x50); /* movss */
    xmm6 = xmm6 + xmm2; /* addss */
    xmm2 = MEMF(ebp + 0x54); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm5 = MEMF(ebp + 0x48); /* movss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm3; /* addss */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(ebp + 0x40) = xmm4; /* movss */
    MEMF(ebp + 0x44) = xmm3; /* movss */
    MEMF(ebp + 0x48) = xmm5; /* movss */
    MEMF(ebp + 0x50) = xmm6; /* movss */
    MEMF(ebp + 0x54) = xmm2; /* movss */
    SET_LO8(eax, MEM8(ebp + 0x334));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B8304; /* je: equal / zero */

loc_000B81A9: ;
    xmm3 = xmm3 - MEMF(ebp + 0x3C); /* subss */
    xmm7 = xmm7 - MEMF(ebp + 0x3C); /* subss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm3; /* movss */
    esi = ebp + 0x150;
    PUSH32(esp, 0);
    edi = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEM32(0x780AB0) = 0x5F2730;
    MEM32(0x6C0210) = 0x473;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_000B8204: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B82E7; /* je: equal / zero */

loc_000B820F: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(ebp + 0x32C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x330); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x328); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x324); /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B8276: ;
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, MEM8(ebp + 0x7B));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_000B82BA; /* je: equal / zero */

loc_000B827F: ;
    xmm0 = xmm0 * MEMF(0x64A96C); /* mulss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 4));
    ecx = ebp + 0x160;
    edi = 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x335));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000B82B5: ;
    esp = esp + 0x1C;
    goto loc_000B82E5;

loc_000B82BA: ;
    xmm0 = xmm0 * MEMF(0x64A9C4); /* mulss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x335));
    esi = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001439F0(); /* call 0x001439F0 */

loc_000B82E2: ;
    esp = esp + 0x14;

loc_000B82E5: ;
    ebx = 0; /* xor self */

loc_000B82E7: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    POP32(esp, esi);

loc_000B8304: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8310
 * Original: 0x000B8310 - 0x000B8335 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8310(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B8310: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x36));
    if (CMP_GE(LO16(eax), 0x20)) goto loc_000B832F; /* jge: greater or equal (signed >=) */

loc_000B831E: ;
    edx = ZX8(MEM8(ecx + 0x7B));
    eax = SX16(LO16(eax));
    eax = eax << 3;
    if (CMP_LE(edx, eax)) goto loc_000B832F; /* jle: less or equal (signed <=) */

loc_000B832C: ;
    MEM8(ecx + 0x7B) = LO8(eax);

loc_000B832F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8340
 * Original: 0x000B8340 - 0x000B85E7 (679 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8340(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B8340: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    xmm0 = MEMF(0x648D34); /* movss */
    xmm1 = MEMF(ecx + 0x54); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x48); /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x40); /* subss */
    edx = edx << 2;
    xmm0 = xmm0 * MEMF(edx + 0x77148C); /* mulss */
    xmm1 = xmm1 * MEMF(edx + 0x77149C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x7FA248); /* mulss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    eax = ecx + 0x294;
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_000B83BA; /* jbe: below or equal (unsigned <=) */

loc_000B839F: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_000B83BA: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648DE0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000B83E8; /* jbe: below or equal (unsigned <=) */

loc_000B83DA: ;
    xmm0 = MEMF(0x648DE0); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_000B83E8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(edx + 0x77148C); /* movss */
    xmm1 = MEMF(ecx + 0x38); /* movss */
    PUSH32(esp, esi);
    /* fld st(0) */
    xmm2 = xmm3; /* movaps */
    /* FPU: fsin  */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    /* FPU: fcos  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + MEMF(ecx + 0x40); /* addss */
    esi = (int32_t)xmm4; /* cvttss2si */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esi = SX16(LO16(esi));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 0x44); /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    esi = (int32_t)xmm4; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 4) = xmm4; /* movss */
    xmm4 = MEMF(edx + 0x77149C); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 - xmm4; /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 8) = xmm2; /* movss */
    esi = 0; /* xor self */
    MEM16(eax + 0x18) = LO16(esi);
    xmm2 = MEMF(edx + 0x77148C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x40); /* addss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x44); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x77149C); /* movss */
    xmm4 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    edi = (int32_t)xmm4; /* cvttss2si */
    xmm4 = MEMF(esp + 0x14); /* movss */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    MEM16(eax + 0x34) = LO16(esi);
    xmm5 = MEMF(edx + 0x77148C); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(ecx + 0x40); /* addss */
    edi = (int32_t)xmm5; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm5; /* movss */
    xmm6 = MEMF(ecx + 0x44); /* movss */
    xmm5 = MEMF(esp + 8); /* movss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm6 = xmm6 - xmm5; /* subss */
    edi = (int32_t)xmm6; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x3C) = xmm6; /* movss */
    xmm6 = MEMF(edx + 0x77149C); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm2 = xmm2 - xmm6; /* subss */
    edi = (int32_t)xmm2; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEM16(eax + 0x50) = LO16(esi);
    MEMF(eax + 0x40) = xmm2; /* movss */
    xmm0 = MEMF(edx + 0x77148C); /* movss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x40); /* addss */
    edi = (int32_t)xmm0; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x44); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    edi = (int32_t)xmm0; /* cvttss2si */
    edi = SX16(LO16(edi));
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x77149C); /* movss */
    xmm1 = MEMF(ecx + 0x48); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    POP32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM16(eax + 0x6C) = LO16(esi);
    MEMF(eax + 0x5C) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B85F0
 * Original: 0x000B85F0 - 0x000B8642 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B85F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B85F0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x322));
    SET_LO8(edx, MEM8(ecx + 0x320));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FA20C));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x323));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, MEM8(ecx + 0x321));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx + 0x320) = LO8(edx);
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ecx + 0x321) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) { sub_000B8642(); return; } /* je: equal / zero */

loc_000B8636: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_000B8647(); return; /* tail jmp 0x000B8647 */

}

/**
 * sub_000B8710
 * Original: 0x000B8710 - 0x000B8780 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8710: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(eax + 0xDC) = xmm0; /* movss */
    MEM32(eax + 0x54) = ebx;
    edi = eax + 0x58;
    ebp = 0xB;
    /* nop */

loc_000B8730: ;
    esi = MEM32(edi);
    if (CMP_EQ(esi, ebx)) goto loc_000B876D; /* je: equal / zero */

loc_000B8736: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_000B876D; /* jne: not equal / not zero */

loc_000B873E: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000B8745: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000B876D; /* jl: less (signed <) */

loc_000B874C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_000B8761; /* je: equal / zero */

loc_000B8759: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000B875C: ;
    esp = esp + 4;
    goto loc_000B876D;

loc_000B8761: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000B876D: ;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    edi = edi + 0xC;
    ebp--;
    if ((ebp != 0)) goto loc_000B8730; /* jne: not equal / not zero */

loc_000B877B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8840
 * Original: 0x000B8840 - 0x000B885F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8840(void)
{

loc_000B8840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000B8710(); /* call 0x000B8710 */

loc_000B884C: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000B8854: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000B885A: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8860
 * Original: 0x000B8860 - 0x000B8997 (311 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8860(void)
{
    float xmm0, xmm1, xmm2;

loc_000B8860: ;
    esp = esp - 0x68;
    xmm0 = MEMF(0x6491F0); /* movss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm1 = MEMF(0x648F08); /* movss */
    eax = MEM32(eax + 8);
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649444); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648F5C); /* movss */
    PUSH32(esp, 0);
    eax = esp + 8;
    esi = esp + 0x2C;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x40) = 0x12C;
    MEM32(esp + 0x4C) = 0x40;
    MEM8(esp + 0x60) = 0;
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B894D: ;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    MEM32(esp + 0x50) = 0x3E;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B8960: ;
    xmm0 = MEMF(0x64931C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491F0); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x10;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x54) = 0x58;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000B898F: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000B89A0
 * Original: 0x000B89A0 - 0x000B8A70 (208 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B89A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000B89A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_000B8A69; /* je: equal / zero */

loc_000B89BA: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000B8A69; /* je: equal / zero */

loc_000B89C8: ;
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_000B8A69; /* je: equal / zero */

loc_000B89DA: ;
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + 0x58F358;
    edx = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000B89F3: ;
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B8A04: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000B8A17: ;
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    (void)0; /* cmp LO8(ebx), 0x1B - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(ebx), 0x1B)) ? 1 : 0); /* setne */
    eax--;
    eax = eax & 0xE;
    eax++;
    if (CMP_LE(eax & eax, 0)) goto loc_000B8A69; /* jle: less or equal (signed <=) */

loc_000B8A2B: ;
    esi = eax;
    /* nop */

loc_000B8A30: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B8A36: ;
    xmm0 = xmm0 * MEMF(0x58BD44); /* mulss */
    xmm0 = xmm0 + MEMF(0x64953C); /* addss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B13F0(); /* call 0x000B13F0 */

loc_000B8A63: ;
    esp = esp + 0x10;
    esi--;
    if ((esi != 0)) goto loc_000B8A30; /* jne: not equal / not zero */

loc_000B8A69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8A70
 * Original: 0x000B8A70 - 0x000B8A7D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B8A70: ;
    esp = esp - 0x38;
    if (TEST_NZ(esi, esi)) { sub_000B8A7D(); return; } /* jne: not equal / not zero */

loc_000B8A77: ;
    eax = 0; /* xor self */
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8B70
 * Original: 0x000B8B70 - 0x000B8C24 (180 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8B70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B8B70: ;
    esp = esp - 0xC;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B8B9B: ;
    xmm1 = MEMF(0x648EB0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000B8C20; /* ja: above (unsigned >) */

loc_000B8BA8: ;
    xmm1 = MEMF(0x648E14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000B8BE8; /* jbe: below or equal (unsigned <=) */

loc_000B8BB5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B8BBA: ;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_000B8BCA; /* jbe: below or equal (unsigned <=) */

loc_000B8BC3: ;
    eax = 1;
    goto loc_000B8BCC;

loc_000B8BCA: ;
    eax = 0; /* xor self */

loc_000B8BCC: ;
    ecx = MEM32(esp + 0x28);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 4));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000B8CF0(); /* call 0x000B8CF0 */

loc_000B8BE1: ;
    esp = esp + 0xC;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_000B8BE8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B8BED: ;
    /* comiss xmm0, MEMF(0x64A088) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64A088))) goto loc_000B8BFA; /* jbe: below or equal (unsigned <=) */

loc_000B8BF6: ;
    SET_LO8(ecx, 1);
    goto loc_000B8BFC;

loc_000B8BFA: ;
    SET_LO8(ecx, 0); /* xor self */

loc_000B8BFC: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    xmm1 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    SET_LO8(eax, MEM8(eax + 4));
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B8C30(); /* call 0x000B8C30 */

loc_000B8C1D: ;
    esp = esp + 0xC;

loc_000B8C20: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8C30
 * Original: 0x000B8C30 - 0x000B8CE3 (179 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C30(void)
{
    float xmm0, xmm1;

loc_000B8C30: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x64A1FC); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B8C7E: ;
    xmm0 = xmm0 * MEMF(0x64A1F8); /* mulss */
    xmm0 = xmm0 + MEMF(0x649054); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B8C99: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B8CA9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B8CBA: ;
    xmm0 = xmm0 * MEMF(0x649CF8); /* mulss */
    xmm0 = xmm0 - MEMF(0x649C74); /* subss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000B8CDF: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8CF0
 * Original: 0x000B8CF0 - 0x000B8D1F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8CF0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B8CFA: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B8D01: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0x7F);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x3F);
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    edx = edx & 0x3F;
    if (TEST_Z(LO8(ebx), 0x40)) { sub_000B8D1F(); return; } /* je: equal / zero */

loc_000B8D16: ;
    esi = 0x40;
    esi = esi - edx;
    g_seh_ebp = ebp; sub_000B8D21(); return; /* tail jmp 0x000B8D21 */

}

/**
 * sub_000B8F00
 * Original: 0x000B8F00 - 0x000B91C6 (710 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B8F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x128;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ebx, esi)) goto loc_000B91C0; /* je: equal / zero */

loc_000B8F18: ;
    edx = ebx;
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000B8F26: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9D8); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A674); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64A864); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9D4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648CFC); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9D0); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edi = esp + 0x28;
    MEM16(esp + 0x4C) = 0xA;
    MEM16(esp + 0x4E) = LO16(esi);
    MEM16(esp + 0x50) = 3;
    MEM16(esp + 0x52) = 2;
    MEM16(esp + 0x54) = 0x28;
    MEM16(esp + 0x56) = 0x14;
    MEM16(esp + 0x58) = 0x9B;
    MEM16(esp + 0x5A) = 0x64;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM16(esp + 0x64) = 0x10;
    MEM16(esp + 0x66) = 0xF;
    MEM32(esp + 0x68) = esi;
    MEM8(esp + 0x5C) = 0;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_000B9002: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9007: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    edx = edx + 7;
    MEM32(esp + 0x1C) = edx;
    if ((edx == 0)) goto loc_000B91B7; /* je: equal / zero */

loc_000B902F: ;
    /* nop */

loc_000B9030: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B903F: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x64A2FC); /* mulss */
    xmm2 = xmm2 + MEMF(0x648E3C); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9057: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000B9062: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    xmm1 = MEMF(ebx + 0x80); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x8C;
    edi = esp + 0x80;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_000B90C3: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000B91C0; /* je: equal / zero */

loc_000B90CE: ;
    if (CMP_EQ(MEM8(esp + 0x125), 3)) goto loc_000B91C0; /* je: equal / zero */

loc_000B90DC: ;
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B90F8: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000B915D; /* je: equal / zero */

loc_000B90FC: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x98;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9111: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B912C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9132: ;
    xmm0 = xmm0 * MEMF(0x6495E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    edi = 0x64;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000B9158: ;
    esp = esp + 0x1C;
    goto loc_000B91AD;

loc_000B915D: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9168: ;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000B9183: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9189: ;
    xmm0 = xmm0 * MEMF(0x64A5E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A9CC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_001439F0(); /* call 0x001439F0 */

loc_000B91AA: ;
    esp = esp + 0x14;

loc_000B91AD: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    if ((MEM32(esp + 0x1C) != 0)) goto loc_000B9030; /* jne: not equal / not zero */

loc_000B91B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B6FA0(); /* call 0x000B6FA0 */

loc_000B91BD: ;
    esp = esp + 4;

loc_000B91C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000B91D0
 * Original: 0x000B91D0 - 0x000B91DD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B91D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B91D0: ;
    esp = esp - 0x38;
    if (TEST_NZ(esi, esi)) { sub_000B91DD(); return; } /* jne: not equal / not zero */

loc_000B91D7: ;
    eax = 0; /* xor self */
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000B92C0
 * Original: 0x000B92C0 - 0x000B930E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B92C0(void)
{
    float xmm0, xmm1;

loc_000B92C0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 4));
    eax = MEM32(esp + 0x20);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000B9310(); /* call 0x000B9310 */

loc_000B930A: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9310
 * Original: 0x000B9310 - 0x000B93D6 (198 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9310(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B9310: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x64A1D8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9349: ;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9354: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FD9999A);
    PUSH32(esp, 0x3FD9999A);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9375: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x6490B8); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9398: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_000B93A4; /* jns: not sign (positive) */

loc_000B939F: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_000B93A4: ;
    eax = eax + 0x1E;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B93AD: ;
    xmm0 = xmm0 * MEMF(0x64A1D4); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A1D0); /* subss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000B93D2: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000B93E0
 * Original: 0x000B93E0 - 0x000B95CA (490 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B93E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000B93E0: ;
    esp = esp - 0x48;
    if (TEST_Z(esi, esi)) goto loc_000B95C6; /* je: equal / zero */

loc_000B93EB: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, ebx);
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, ecx);
    eax = 0x30;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_000B940B: ;
    eax = MEM32(esi + 0x4B0);
    SET_LO8(edx, MEM8(esi + 0x10B));
    ecx = MEM32(eax + 0x24);
    MEM8(esp + 0x14) = LO8(edx);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F27C4;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000B943B: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000B944F; /* je: equal / zero */

loc_000B9442: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_000B944F; /* je: equal / zero */

loc_000B944A: ;
    eax = MEM32(eax + 8);
    goto loc_000B9451;

loc_000B944F: ;
    eax = 0; /* xor self */

loc_000B9451: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x6498B8); /* movss */
    xmm2 = MEMF(0x58BCCC); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x14) = LO8(eax);
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649D54); /* movss */
    SET_LO8(ecx, 2);
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM8(esp + 0x30) = 0;
    MEM8(esp + 0x40) = LO8(eax);
    MEM8(esp + 0x41) = 1;
    MEM8(esp + 0x42) = LO8(eax);
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM8(esp + 0x48) = LO8(ecx);
    MEM8(esp + 0x49) = LO8(eax);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    if (TEST_Z(LO16(edi), LO16(edi))) goto loc_000B94D9; /* je: equal / zero */

loc_000B94CE: ;
    MEM16(esp + 0x36) = LO16(edi);
    MEM8(esp + 0x30) = LO8(ecx);
    goto loc_000B94E0;

loc_000B94D9: ;
    MEM16(esp + 0x36) = 0x12C;

loc_000B94E0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B94E5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x42;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x23;
    MEM16(esp + 0x32) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B94FA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    ebx = esp + 0xC;
    edx = edx + 0x19;
    MEM16(esp + 0x34) = LO16(edx);
    PUSH32(esp, 0); sub_000B0B50(); /* call 0x000B0B50 */

loc_000B9515: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F27BC;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000B9537: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000B954B; /* je: equal / zero */

loc_000B953E: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_000B954B; /* je: equal / zero */

loc_000B9546: ;
    eax = MEM32(eax + 8);
    goto loc_000B954D;

loc_000B954B: ;
    eax = 0; /* xor self */

loc_000B954D: ;
    xmm0 = MEMF(0x648D74); /* movss */
    xmm1 = MEMF(0x6498B8); /* movss */
    xmm2 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x14) = LO8(eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9595: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x42;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x23;
    MEM16(esp + 0x32) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B95AA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    ebx = esp + 0xC;
    edx = edx + 0x19;
    MEM16(esp + 0x34) = LO16(edx);
    PUSH32(esp, 0); sub_000B0B50(); /* call 0x000B0B50 */

loc_000B95C5: ;
    POP32(esp, ebx);

loc_000B95C6: ;
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_000B95D0
 * Original: 0x000B95D0 - 0x000B96CA (250 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95D0(void)
{
    float xmm0, xmm1;

loc_000B95D0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x14);
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(0x64A1F4); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    xmm1 = xmm1 - MEMF(edi); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 - MEMF(edi + 4); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 - MEMF(edi + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B9624: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    esi = edx;
    edx = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(edx + 4));
    esi = esi + 0x2A;
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B964F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9660: ;
    xmm0 = xmm0 * MEMF(0x64A1F0); /* mulss */
    xmm0 = xmm0 - MEMF(0x6495C8); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B967B: ;
    xmm0 = xmm0 * MEMF(0x64A1EC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A1E8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9696: ;
    xmm0 = xmm0 * MEMF(0x6490B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x30;
    ecx = edi;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_000B96C1: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000B96D0
 * Original: 0x000B96D0 - 0x000B96E9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B96D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B96D0: ;
    esp = esp - 0x38;
    if (TEST_Z(esi, esi)) goto loc_000B96E3; /* je: equal / zero */

loc_000B96D7: ;
    eax = esi;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_000B96DE: ;
    if (CMP_NE(eax, 0x63)) { sub_000B96E9(); return; } /* jne: not equal / not zero */

loc_000B96E3: ;
    eax = 0; /* xor self */
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000B97E0
 * Original: 0x000B97E0 - 0x000B9831 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97E0(void)
{
    float xmm0, xmm1;

loc_000B97E0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x70));
    SET_LO8(eax, MEM8(eax + 4));
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B9840(); /* call 0x000B9840 */

loc_000B982D: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9840
 * Original: 0x000B9840 - 0x000B9900 (192 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9840(void)
{
    float xmm0, xmm1;

loc_000B9840: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x64A1E4); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, 0x3FD9999A);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3FD9999A);
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B988D: ;
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9898: ;
    xmm0 = xmm0 * MEMF(0x64A1E0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649538); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B98B3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000B98C3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B98D4: ;
    xmm0 = xmm0 * MEMF(0x64A1DC); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000B98FC: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9900
 * Original: 0x000B9900 - 0x000B990B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9900(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B9900: ;
    esp = esp - 0x34;
    if (TEST_NZ(eax, eax)) { sub_000B990B(); return; } /* jne: not equal / not zero */

loc_000B9907: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000B99E0
 * Original: 0x000B99E0 - 0x000B9A8A (170 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B99E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B99E0: ;
    esp = esp - 0x58;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D1C); /* movss */
    eax = MEM32(0x7FA1F8);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ecx = 1;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM8(esp + 2) = LO8(edx);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0x227;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = 0x228;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = 0x2C8;
    MEM8(esp + 0x28) = LO8(edx);
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x38) = LO8(edx);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x48) = LO8(edx);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    if (CMP_EQ(eax, 4)) goto loc_000B9A7B; /* je: equal / zero */

loc_000B9A71: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_000B9A7B; /* je: equal / zero */

loc_000B9A76: ;
    if (CMP_NE(eax, 0x2F)) { sub_000B9A8A(); return; } /* jne: not equal / not zero */

loc_000B9A7B: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    eax = 7;
    g_seh_ebp = ebp; sub_000B9A94(); return; /* tail jmp 0x000B9A94 */

}

/**
 * sub_000B9B00
 * Original: 0x000B9B00 - 0x000B9B6D (109 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B00(void)
{
    float xmm0;

loc_000B9B00: ;
    esp = esp - 0xC;
    ecx = MEM32(eax + 0x64);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + ecx * 4 + 0x24) = 0x6A9104;
    ecx = MEM32(eax + 0x64);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    PUSH32(esp, 0x771268);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649244); /* movss */
    ecx++;
    PUSH32(esp, 0);
    edx = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x64) = ecx;
    PUSH32(esp, 0); sub_000F0AE0(); /* call 0x000F0AE0 */

loc_000B9B49: ;
    PUSH32(esp, 0x77126A);
    PUSH32(esp, 1);
    edx = esp + 8;
    PUSH32(esp, 0); sub_000F0AE0(); /* call 0x000F0AE0 */

loc_000B9B59: ;
    PUSH32(esp, 0x77126C);
    PUSH32(esp, 2);
    edx = esp + 8;
    PUSH32(esp, 0); sub_000F0AE0(); /* call 0x000F0AE0 */

loc_000B9B69: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B70
 * Original: 0x000B9B70 - 0x000B9BCF (95 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B70(void)
{
    float xmm0;

loc_000B9B70: ;
    esp = esp - 0xC;
    eax = MEM32(0x771B6C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0); sub_000B99E0(); /* call 0x000B99E0 */

loc_000B9B81: ;
    ecx = MEM32(esi + 0x64);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + ecx * 4 + 0x24) = 0x6A9100;
    edx = MEM32(esi + 0x64);
    edx++;
    PUSH32(esp, 0x771270);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E8C); /* movss */
    MEM32(esi + 0x64) = edx;
    PUSH32(esp, 0x225);
    edx = esp + 0xC;
    eax = esi;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F0AE0(); /* call 0x000F0AE0 */

loc_000B9BC5: ;
    PUSH32(esp, 0); sub_000B9B00(); /* call 0x000B9B00 */

loc_000B9BCA: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9BD0
 * Original: 0x000B9BD0 - 0x000B9C18 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9BD0: ;
    SET_LO16(eax, MEM16(0x6A90FC));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000B9C0C; /* je: equal / zero */

loc_000B9BE6: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000B9BFD: ;
    ebx = ebx << 5;
    ebx = ebx + esi;
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, ebx);

loc_000B9C0C: ;
    POP32(esp, edi);
    MEM16(0x6A90FC) = 0xFFFF;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9C20
 * Original: 0x000B9C20 - 0x000B9D2E (270 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000B9C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000B9D29; /* je: equal / zero */

loc_000B9C3A: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000B9C57: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000B9C6B; /* je: equal / zero */

loc_000B9C5E: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_000B9C6B; /* je: equal / zero */

loc_000B9C66: ;
    edx = MEM32(eax + 8);
    goto loc_000B9C6D;

loc_000B9C6B: ;
    edx = 0; /* xor self */

loc_000B9C6D: ;
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000B9C77: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    esp = esp + 4;
    esi = esp + 0x24;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B01A0(); /* call 0x002B01A0 */

loc_000B9CA7: ;
    SET_LO16(eax, MEM16(0x6A90FC));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(ebp + 8);
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO16(edx, MEM16(edx * 2 + 0x771274));
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000B9D29; /* je: equal / zero */

loc_000B9CDB: ;
    esi = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    ecx = ecx >> 0xC;
    esi = esp + 0x38;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    ecx = ecx << 5;
    ecx = ecx + eax;
    eax = MEM32(0x771B78);
    ecx = MEM32(eax + ecx * 4 + 0x31C);
    esi = esp + 0x30;
    PUSH32(esp, esi);
    esi = esp + 0x24;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_000B9D29: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D30
 * Original: 0x000B9D30 - 0x000B9E11 (225 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9D30: ;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 4)) goto loc_000B9E0A; /* je: equal / zero */

loc_000B9D45: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_000B9D53; /* je: equal / zero */

loc_000B9D4A: ;
    if (CMP_NE(eax, 0x2F)) { sub_000B9E11(); return; } /* jne: not equal / not zero */

loc_000B9D53: ;
    edi = 0x20;

loc_000B9D58: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5D58D8;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9D70: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5F3244;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9D88: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5E740C;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9DA0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5F2480;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9DB8: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5F248C;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9DD3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5F323C;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9DEB: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = 0x5F3234;
    eax = esi;
    PUSH32(esp, 0); sub_000B9C20(); /* call 0x000B9C20 */

loc_000B9E03: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B9E0A: ;
    edi = 0; /* xor self */
    goto loc_000B9D58;

}

/**
 * sub_000B9E50
 * Original: 0x000B9E50 - 0x000B9EA6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B9E50: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 4)) goto loc_000B9E64; /* je: equal / zero */

loc_000B9E5A: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_000B9E64; /* je: equal / zero */

loc_000B9E5F: ;
    if (CMP_NE(eax, 0x2F)) goto loc_000B9E74; /* jne: not equal / not zero */

loc_000B9E64: ;
    SET_LO16(eax, MEM16(0x6A90FC));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000B9EA5; /* je: equal / zero */

loc_000B9E70: ;
    PUSH32(esp, 7);
    goto loc_000B9E82;

loc_000B9E74: ;
    SET_LO16(eax, MEM16(0x6A90FC));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000B9EA5; /* je: equal / zero */

loc_000B9E80: ;
    PUSH32(esp, 1);

loc_000B9E82: ;
    edx = MEM32(0x771B78);
    eax = ZX16(LO16(eax));
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx << 5;
    eax = eax & 0xFFF;
    ecx = ecx + eax;
    ecx = MEM32(edx + ecx * 4 + 0x31C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000B9EA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9EB0
 * Original: 0x000B9EB0 - 0x000B9F07 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000B9EB0: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 4)) goto loc_000B9EC4; /* je: equal / zero */

loc_000B9EBA: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_000B9EC4; /* je: equal / zero */

loc_000B9EBF: ;
    if (CMP_NE(eax, 0x2F)) goto loc_000B9ED4; /* jne: not equal / not zero */

loc_000B9EC4: ;
    SET_LO16(eax, MEM16(0x6A90FC));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000B9F06; /* je: equal / zero */

loc_000B9ED0: ;
    PUSH32(esp, 7);
    goto loc_000B9EE2;

loc_000B9ED4: ;
    SET_LO16(eax, MEM16(0x6A90FC));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000B9F06; /* je: equal / zero */

loc_000B9EE0: ;
    PUSH32(esp, 1);

loc_000B9EE2: ;
    edx = MEM32(0x771B78);
    eax = ZX16(LO16(eax));
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx << 5;
    eax = eax & 0xFFF;
    ecx = ecx + eax;
    ecx = MEM32(edx + ecx * 4 + 0x31C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_000B9F06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9F10
 * Original: 0x000B9F10 - 0x000BA01E (270 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9F10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000B9F10: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9F19: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000B9F2C: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_000B9F45: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x34);
    xmm0 = MEMF(esp + 4); /* movss */
    SET_LO16(esi, MEM16(eax * 2 + 0x771270));
    SET_LO16(eax, MEM16(0x6A9100));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000BA019; /* je: equal / zero */

loc_000B9FC1: ;
    if (TEST_Z(edi, edi)) goto loc_000B9FC9; /* je: equal / zero */

loc_000B9FC5: ;
    edx = MEM32(edi);
    goto loc_000B9FCC;

loc_000B9FC9: ;
    edx = edx | 0xFFFFFFFFu;

loc_000B9FCC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ZX16(LO16(eax));
    ecx = eax;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ecx >> 0xC;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    eax = eax & 0xFFF;
    ecx = ecx << 5;
    ecx = ecx + eax;
    eax = MEM32(0x771B78);
    ecx = MEM32(eax + ecx * 4 + 0x31C);
    PUSH32(esp, edx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEM32(esp + 0x54) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_000BA019: ;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BA020
 * Original: 0x000BA020 - 0x000BA091 (113 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA020(void)
{
    int _flags = 0; /* fallback flag var */

loc_000BA020: ;
    esp = esp - 0x10;
    if (TEST_Z(edi, edi)) goto loc_000BA08D; /* je: equal / zero */

loc_000BA027: ;
    PUSH32(esp, esi);
    esi = esp + 8;
    PUSH32(esp, 0); sub_002B01A0(); /* call 0x002B01A0 */

loc_000BA031: ;
    eax = MEM32(esp + 0x18);
    SET_LO16(edx, MEM16(eax * 2 + 0x771268));
    SET_LO16(eax, MEM16(0x6A9104));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000BA08C; /* je: equal / zero */

loc_000BA049: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ecx >> 0xC;
    PUSH32(esp, 0);
    eax = eax & 0xFFF;
    PUSH32(esp, esi);
    ecx = ecx << 5;
    ecx = ecx + eax;
    eax = MEM32(0x771B78);
    ecx = MEM32(eax + ecx * 4 + 0x31C);
    PUSH32(esp, edi);
    esi = esp + 0x20;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_000BA08C: ;
    POP32(esp, esi);

loc_000BA08D: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA0A0
 * Original: 0x000BA0A0 - 0x000BA3AF (783 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BA0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax + ecx + 0x330); /* subss */
    eax = eax + ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x14); /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x334); /* subss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x18); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax + 0x338); /* subss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_000BA106: ;
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_000BA3A8; /* jle: less or equal (signed <=) */

loc_000BA11F: ;
    /* nop */

loc_000BA120: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xD);
    eax = 0x1C0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000BA131: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_000BA3A8; /* je: equal / zero */

loc_000BA13E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA143: ;
    ecx = MEM32(ebp + 0x10);
    xmm1 = MEMF(esp + 0x34); /* movss */
    eax = eax & 0x7F;
    edx = eax + ecx + -63;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA168: ;
    ecx = MEM32(ebp + 0x18);
    eax = eax & 0x7F;
    edx = eax + ecx + -63;
    SET_LO8(eax, MEM8(ebp + 0xC));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEM8(esi + 0xB0) = LO8(eax);
    MEM16(esi + 0xB2) = 3;
    MEMF(esi + 0xB8) = xmm0; /* movss */
    MEMF(esi + 0xBC) = xmm1; /* movss */
    MEMF(esi + 0xC0) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA1AB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0xC6) = 1;
    edx = edx + 0xA;
    MEM16(esi + 0xC4) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA1CB: ;
    edx = MEM32(esp + 0x38);
    eax = eax & 0x1F;
    edi = eax + edx + -15;
    if (CMP_GE(edi, ebx)) goto loc_000BA1E2; /* jge: greater or equal (signed >=) */

loc_000BA1DA: ;
    edi = edi + 0x168;
    goto loc_000BA1F0;

loc_000BA1E2: ;
    if (CMP_L(edi, 0x168)) goto loc_000BA1F0; /* jl: less (signed <) */

loc_000BA1EA: ;
    edi = edi - 0x168;

loc_000BA1F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA1F5: ;
    xmm4 = MEMF(0x648D34); /* movss */
    eax = eax & 0x1F;
    eax = eax - 0xF;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0xC8) = xmm3; /* movss */
    xmm3 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esi + 0xCC) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD0) = xmm3; /* movss */
    MEMF(esi + 0xD4) = xmm4; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA233: ;
    eax = eax & 0xFF;
    eax = eax - 0x80;
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 * MEMF(0x648E54); /* mulss */
    MEMF(esi + 0xD8) = xmm4; /* movss */
    MEMF(esi + 0xDC) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA25E: ;
    eax = eax & 0xFFFF;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(ebp + 0x20); /* mulss */
    xmm3 = xmm3 * MEMF(0x649ABC); /* mulss */
    xmm3 = xmm3 + MEMF(ebp + 0x1C); /* addss */
    MEMF(esi + 0xE0) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA286: ;
    edi = MEM32(esp + 0x18);
    eax = eax & 1;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ecx = eax + eax * 4;
    edx = MEM32(ecx * 4 + 0x774978);
    MEM32(esi + 0xB4) = edx;
    MEM8(esi + 0x1A5) = LO8(eax);
    if (CMP_NE(edi, ebx)) goto loc_000BA300; /* jne: not equal / not zero */

loc_000BA2A7: ;
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    MEM32(esi + 0x1AC) = 0xA2;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xA2;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000BA2EC: ;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    goto loc_000BA309;

loc_000BA300: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x1AC) = eax;

loc_000BA309: ;
    MEM32(esi + 0x1A8) = eax;
    (void)0; /* test MEM8(ebp + 0x24), 1 - flags set for next jcc */
    MEM32(esi + 0x1A0) = ebx;
    if (TEST_Z(MEM8(ebp + 0x24), 1)) goto loc_000BA386; /* je: equal / zero */

loc_000BA31B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM8(esi + 0xB2) = MEM8(esi + 0xB2) | 0x80;
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = (int32_t)xmm2; /* cvttss2si */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000BA36B: ;
    edx = (int32_t)MEMF(esp + 0x68); /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 0x38;
    MEMF(esi + 0x180) = xmm0; /* movss */
    MEM32(esi + 0x1A0) = ebx;

loc_000BA386: ;
    eax = MEM32(ebp + 8);
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM8(esi + 0x1A4) = LO8(ebx);
    MEM8(esi + 0x1B0) = LO8(ebx);
    MEM8(esi + 0x1B1) = LO8(ebx);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(edi, eax)) goto loc_000BA120; /* jl: less (signed <) */

loc_000BA3A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BA3B0
 * Original: 0x000BA3B0 - 0x000BA55E (430 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA3B0: ;
    PUSH32(esp, ecx);
    if (CMP_L(ebx, 2)) goto loc_000BA55C; /* jl: less (signed <) */

loc_000BA3BA: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_000BA55C; /* jle: less or equal (signed <=) */

loc_000BA3CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000BA3D0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x16);
    eax = 0x1C0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000BA3E1: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000BA559; /* je: equal / zero */

loc_000BA3EE: ;
    edi = ebx;
    edi = (uint32_t)((int32_t)edi >> 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA3F7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebp = edx;
    edx = MEM32(esp + 0x1C);
    ebp = ebp - edi;
    ebp = ebp + edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA409: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = MEM32(esp + 0x24);
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esi + 0xB8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    MEMF(esi + 0xBC) = xmm0; /* movss */
    edx = edx - edi;
    edx = edx + eax;
    SET_LO8(eax, MEM8(esp + 0x18));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM8(esi + 0xB0) = LO8(eax);
    MEMF(esi + 0xC0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA449: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0xC6) = 0;
    edx = edx + 4;
    MEM16(esi + 0xC4) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA469: ;
    eax = eax & 0x1F;
    eax = eax - 0xF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0xC8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA480: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA499: ;
    xmm1 = MEMF(0x648D20); /* movss */
    eax = eax & 0x1F;
    eax = eax - 0xF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    MEMF(esi + 0xD8) = xmm1; /* movss */
    MEMF(esi + 0xDC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA4D3: ;
    ecx = MEM32(0x7FA098);
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 * MEMF(0x649ABC); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    SET_LO8(eax, MEM8(0x8472BD));
    MEMF(esi + 0xE0) = xmm0; /* movss */
    edx = MEM32(0x774A04);
    ecx++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 0xB4) = edx;
    MEM8(esi + 0x1A5) = 7;
    MEM32(0x7FA098) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BA544; /* jne: not equal / not zero */

loc_000BA521: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000BA528: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000BA53C; /* je: equal / zero */

loc_000BA538: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000BA53A: ;
    goto loc_000BA541;

loc_000BA53C: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000BA541: ;
    esp = esp + 4;

loc_000BA544: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_000BA3D0; /* jl: less (signed <) */

loc_000BA559: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000BA55C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA560
 * Original: 0x000BA560 - 0x000BA9DD (1149 bytes, 286 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BA560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(edi, ebx)) goto loc_000BA9D6; /* jle: less or equal (signed <=) */

loc_000BA580: ;
    if (CMP_LE(edi, MEM32(ebp + 0x24))) goto loc_000BA9D6; /* jle: less or equal (signed <=) */

loc_000BA589: ;
    ecx = MEM32(ebp + 0x28);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000BA59A; /* je: equal / zero */

loc_000BA591: ;
    if (CMP_LE(MEM32(ebp + 0x20), ebx)) goto loc_000BA9D6; /* jle: less or equal (signed <=) */

loc_000BA59A: ;
    ecx = ecx & 0x10000;
    MEM32(esp + 0x3C) = ecx;
    if ((ecx == 0)) goto loc_000BA5FF; /* je: equal / zero */

loc_000BA5A6: ;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax + ecx + 0x330); /* subss */
    eax = eax + ecx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x14); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax + 0x334); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x18); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax + 0x338); /* subss */
    edx = esp + 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_000BA5F7: ;
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x20) = edx;

loc_000BA5FF: ;
    (void)0; /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    if (CMP_LE(MEM32(ebp + 8), ebx)) goto loc_000BA9D6; /* jle: less or equal (signed <=) */

loc_000BA60C: ;
    goto loc_000BA613;

loc_000BA60E: ;
    edi = MEM32(ebp + 0x1C);
    ebx = 0; /* xor self */

loc_000BA613: ;
    esi = MEM32(ebp + 0x30);
    if (CMP_EQ(esi, ebx)) goto loc_000BA628; /* je: equal / zero */

loc_000BA61A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA61F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0x18) = edx;
    goto loc_000BA62C;

loc_000BA628: ;
    MEM32(esp + 0x18) = ebx;

loc_000BA62C: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(esp + 0x18);
    ecx = ecx + eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    eax = 0x1C0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000BA645: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_000BA9D6; /* je: equal / zero */

loc_000BA652: ;
    edi = edi - MEM32(ebp + 0x24);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA65A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 0x24);
    ebx = edx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_000BA66A; /* jge: greater or equal (signed >=) */

loc_000BA666: ;
    ebx = ebx - eax;
    goto loc_000BA66C;

loc_000BA66A: ;
    ebx = ebx + eax;

loc_000BA66C: ;
    ebx = ebx + MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA674: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 0x24);
    edi = edx;
    if (CMP_GE(edi & edi, 0)) goto loc_000BA684; /* jge: greater or equal (signed >=) */

loc_000BA680: ;
    edi = edi - eax;
    goto loc_000BA686;

loc_000BA684: ;
    edi = edi + eax;

loc_000BA686: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x3C);
    edx = MEM32(ebp + 0x14);
    edi = edi + ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(eax, eax)) goto loc_000BA6A3; /* je: equal / zero */

loc_000BA699: ;
    if (TEST_Z(MEM8(ebp + 0x48), 1)) goto loc_000BA738; /* je: equal / zero */

loc_000BA6A3: ;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(0x780AB0) = 0x5F324C;
    MEM32(0x6C0210) = 0x184;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000BA708: ;
    edx = (int32_t)MEMF(esp + 0x70); /* cvttss2si */
    esp = esp + 0x38;
    eax = 0; /* xor self */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x180) = xmm0; /* movss */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_000BA738: ;
    eax = MEM32(ebp + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_000BA74D; /* jne: not equal / not zero */

loc_000BA73F: ;
    eax = (int32_t)MEMF(esi + 0x180); /* cvttss2si */
    MEM32(esp + 0x1C) = eax;
    goto loc_000BA764;

loc_000BA74D: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_000BA764; /* je: equal / zero */

loc_000BA754: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA759: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 0x20))); }
    edx = edx + MEM32(ebp + 0x14);
    MEM32(esp + 0x1C) = edx;

loc_000BA764: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    SET_LO16(edx, MEM16(ebp + 0x28));
    SET_LO8(eax, MEM8(ebp + 0x3C));
    xmm1 = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    MEM8(esi + 0xB0) = LO8(ecx);
    MEM16(esi + 0xB2) = LO16(edx);
    MEM8(esi + 0xB1) = LO8(eax);
    MEMF(esi + 0xB8) = xmm0; /* movss */
    MEMF(esi + 0xBC) = xmm1; /* movss */
    MEMF(esi + 0xC0) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA7AC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x3C);
    ebx = 0; /* xor self */
    MEM16(esi + 0xC6) = LO16(ebx);
    edx = edx + 0xA;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM16(esi + 0xC4) = LO16(edx);
    if (CMP_EQ(eax, ebx)) goto loc_000BA7FB; /* je: equal / zero */

loc_000BA7CF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA7D4: ;
    edx = MEM32(esp + 0x20);
    eax = eax & 0x1F;
    edi = eax + edx + -15;
    if (CMP_GE(edi, ebx)) goto loc_000BA7EB; /* jge: greater or equal (signed >=) */

loc_000BA7E3: ;
    edi = edi + 0x168;
    goto loc_000BA80A;

loc_000BA7EB: ;
    if (CMP_L(edi, 0x168)) goto loc_000BA80A; /* jl: less (signed <) */

loc_000BA7F3: ;
    edi = edi - 0x168;
    goto loc_000BA80A;

loc_000BA7FB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA800: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;

loc_000BA80A: ;
    if (TEST_Z(MEM32(ebp + 0x28), 0x20000)) goto loc_000BA83F; /* je: equal / zero */

loc_000BA813: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA818: ;
    eax = eax & 0x1F;
    eax = eax - 0xF;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0xC8) = xmm3; /* movss */
    xmm3 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0xD4) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    goto loc_000BA852;

loc_000BA83F: ;
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC8) = xmm3; /* movss */
    MEMF(esi + 0xD4) = xmm3; /* movss */

loc_000BA852: ;
    xmm4 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esi + 0xCC) = xmm4; /* movss */
    MEMF(esi + 0xD0) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA86B: ;
    eax = eax & 0xFF;
    eax = eax - 0x80;
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 * MEMF(0x648E54); /* mulss */
    MEMF(esi + 0xD8) = xmm4; /* movss */
    MEMF(esi + 0xDC) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA896: ;
    edi = MEM32(ebp + 0x38);
    eax = eax & 0xFFFF;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 * MEMF(ebp + 0x44); /* mulss */
    xmm4 = xmm4 * MEMF(0x649ABC); /* mulss */
    xmm4 = xmm4 + MEMF(ebp + 0x40); /* addss */
    MEMF(esi + 0xE0) = xmm4; /* movss */
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_000BA8D2; /* je: equal / zero */

loc_000BA8C1: ;
    if (CMP_EQ(edi, ebx)) goto loc_000BA8CE; /* je: equal / zero */

loc_000BA8C5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BA8CA: ;
    eax = eax & edi;
    goto loc_000BA8D6;

loc_000BA8CE: ;
    MEM32(esp + 0x18) = ebx;

loc_000BA8D2: ;
    eax = MEM32(esp + 0x18);

loc_000BA8D6: ;
    ecx = MEM32(ebp + 0x34);
    edi = MEM32(esp + 0x24);
    eax = eax + ecx;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    edx = eax + eax * 4;
    ecx = MEM32(edx * 4 + 0x774978);
    SET_LO16(edx, MEM16(ebp + 0x10));
    MEM32(esi + 0xB4) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x18));
    MEM8(esi + 0x1A5) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x14));
    MEM16(esi + 0x188) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x1C));
    MEM16(esi + 0x18A) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x24));
    MEM16(esi + 0x18C) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x20));
    MEM16(esi + 0x18E) = LO16(edx);
    MEM16(esi + 0x190) = LO16(eax);
    MEM16(esi + 0x192) = LO16(ecx);
    MEMF(esi + 0x198) = xmm3; /* movss */
    MEM16(esi + 0x194) = LO16(ebx);
    MEM16(esi + 0x196) = LO16(ebx);
    MEM32(esi + 0x1A0) = ebx;
    if (CMP_NE(edi, ebx)) goto loc_000BA98F; /* jne: not equal / not zero */

loc_000BA957: ;
    if (CMP_NE(MEM32(ebp + 0x2C), 0xD)) goto loc_000BA99E; /* jne: not equal / not zero */

loc_000BA95D: ;
    edx = MEM32(0x847024);
    ecx = 0xA2;
    eax = esp + 0x28;
    MEM32(esi + 0x1AC) = ecx;
    edx = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_000BA98D: ;
    goto loc_000BA998;

loc_000BA98F: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x1AC) = eax;

loc_000BA998: ;
    MEM32(esi + 0x1A8) = eax;

loc_000BA99E: ;
    (void)0; /* test MEM8(ebp + 0x48), 1 - flags set for next jcc */
    MEM8(esi + 0x1A4) = 0;
    if (TEST_Z(MEM8(ebp + 0x48), 1)) goto loc_000BA9B8; /* je: equal / zero */

loc_000BA9AB: ;
    MEM8(esi + 0xB2) = MEM8(esi + 0xB2) | 0x80;
    MEM32(esi + 0x1A0) = ebx;

loc_000BA9B8: ;
    eax = MEM32(ebp + 8);
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM8(esi + 0x1B0) = 0;
    MEM8(esi + 0x1B1) = 0;
    MEM32(esp + 0x24) = edi;
    if (CMP_L(edi, eax)) goto loc_000BA60E; /* jl: less (signed <) */

loc_000BA9D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BA9E0
 * Original: 0x000BA9E0 - 0x000BB4B0 (2768 bytes, 641 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BA9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi + 0x1A5));
    esi = ZX8(LO8(eax));
    ecx = esi + esi * 4;
    edx = MEM32(ecx * 4 + 0x774970);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(edx, edx)) goto loc_000BAA59; /* jne: not equal / not zero */

loc_000BAA0D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BB4A9; /* jne: not equal / not zero */

loc_000BAA1A: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000BAA21: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_000BB4A9; /* jl: less (signed <) */

loc_000BAA2C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000BAA46; /* je: equal / zero */

loc_000BAA39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000BAA3C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BAA46: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000BAA52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BAA59: ;
    (void)0; /* cmp LO8(eax), 8 - flags set for next jcc */
    edx = ZX8(MEM8(edi + 0x1B0));
    if (CMP_EQ(LO8(eax), 8)) goto loc_000BAA6C; /* je: equal / zero */

loc_000BAA64: ;
    if (CMP_NE(LO8(eax), 9)) goto loc_000BAB4D; /* jne: not equal / not zero */

loc_000BAA6C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 6)) goto loc_000BAB4D; /* jne: not equal / not zero */

loc_000BAA79: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BAB4D; /* je: equal / zero */

loc_000BAA86: ;
    if (CMP_NE(MEM8(0x76F0DC), 0xF)) goto loc_000BAB4D; /* jne: not equal / not zero */

loc_000BAA93: ;
    MEM8(edi + 0xB2) = MEM8(edi + 0xB2) & 0xF7;
    SET_LO8(ecx, MEM8(0x76F0E0));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO16(eax, MEM16(edi + 0xB2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000BB4A2; /* je: equal / zero */

loc_000BAAAF: ;
    if (CMP_NE(MEM8(0x76F0DC), 0xF)) goto loc_000BB4A2; /* jne: not equal / not zero */

loc_000BAABC: ;
    if (CMP_L(MEM32(0x76F0F8), 0x3C)) goto loc_000BAB4D; /* jl: less (signed <) */

loc_000BAAC9: ;
    if (TEST_NZ(HI8(eax), 2)) goto loc_000BAB4D; /* jne: not equal / not zero */

loc_000BAACE: ;
    fp_push(MEMF(edi + 0xB8)); /* fld float */
    eax = eax & 0xFFFFFFB3u;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = eax | 0x200;
    MEM16(edi + 0xB2) = LO16(eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(edi + 0xC0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000BAB0C: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(0x648DE0); /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm1 = xmm1 - xmm0; /* subss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x64AB88); /* movss */
    esp = esp + 8;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edi + 0xD4) = xmm1; /* movss */
    MEMF(edi + 0xD8) = xmm0; /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(edi + 0xDC) = (float)fp_top(); fp_popp(); /* fstp */

loc_000BAB4D: ;
    SET_LO8(eax, MEM8(edi + 0x1B1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x7FA20C);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BAB9E; /* jne: not equal / not zero */

loc_000BAB5C: ;
    if (TEST_Z(MEM8(edi + 0xB2), 8)) goto loc_000BAB7F; /* je: equal / zero */

loc_000BAB65: ;
    ecx = ZX8(MEM8(edi + 0xB0));
    SET_LO8(ebx, MEM8(ecx + 0x77496C));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000BAB7F; /* jne: not equal / not zero */

loc_000BAB76: ;
    MEM8(edi + 0x1B1) = 1;
    goto loc_000BABB5;

loc_000BAB7F: ;
    if (CMP_EQ(edx, 0xFF)) goto loc_000BABB5; /* je: equal / zero */

loc_000BAB87: ;
    eax = edx + eax * 4;
    if (CMP_LE(eax, 0xFF)) goto loc_000BAB96; /* jle: less or equal (signed <=) */

loc_000BAB91: ;
    eax = 0xFF;

loc_000BAB96: ;
    MEM8(edi + 0x1B0) = LO8(eax);
    goto loc_000BABB5;

loc_000BAB9E: ;
    if (TEST_Z(edx, edx)) goto loc_000BB4A2; /* je: equal / zero */

loc_000BABA6: ;
    eax = eax << 2;
    edx = edx - eax;
    if (((int32_t)edx >= 0)) goto loc_000BABAF; /* jns: not sign (positive) */

loc_000BABAD: ;
    edx = 0; /* xor self */

loc_000BABAF: ;
    MEM8(edi + 0x1B0) = LO8(edx);

loc_000BABB5: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x38);
    MEM8(esi + 0x77495C) = 1;
    eax = MEM32(edi + 0x1A8);
    esi = esi | 0xFFFFFFFFu;
    ebx = ebx + 0x6B6A18;
    if (CMP_EQ(eax, esi)) goto loc_000BABF9; /* je: equal / zero */

loc_000BABD4: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x1AC);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_000BABE9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BABF9; /* jne: not equal / not zero */

loc_000BABED: ;
    MEM32(edi + 0x1A8) = esi;
    MEM32(edi + 0x1AC) = esi;

loc_000BABF9: ;
    if (TEST_Z(MEM8(edi + 0xB2), 4)) goto loc_000BAE91; /* je: equal / zero */

loc_000BAC06: ;
    eax = (int32_t)MEMF(edi + 0xB8); /* cvttss2si */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x188);
    ecx = (int32_t)MEMF(edi + 0xC0); /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x18C);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    (void)0; /* test MEM8(edi + 0xB2), 0x10 - flags set for next jcc */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    if (TEST_Z(MEM8(edi + 0xB2), 0x10)) goto loc_000BAC81; /* je: equal / zero */

loc_000BAC6F: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x190);
    if (CMP_GE(eax, ecx)) goto loc_000BAC81; /* jge: greater or equal (signed >=) */

loc_000BAC7A: ;
    ecx = 1;
    goto loc_000BAC83;

loc_000BAC81: ;
    ecx = 0; /* xor self */

loc_000BAC83: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x18E);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_G(eax, edx)) goto loc_000BAC96; /* jg: greater (signed >) */

loc_000BAC92: ;
    if (TEST_Z(ecx, ecx)) goto loc_000BAD15; /* je: equal / zero */

loc_000BAC96: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x188);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x18C);
    xmm1 = MEMF(edi + 0xC0); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(edi + 0xB8); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    esi = esp + 0x24;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002B0D50(); /* call 0x002B0D50 */

loc_000BACD5: ;
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_000BACE2; /* je: equal / zero */

loc_000BACDD: ;
    eax = eax + 0x80;

loc_000BACE2: ;
    if (CMP_L(eax, 0x100)) goto loc_000BACEE; /* jl: less (signed <) */

loc_000BACE9: ;
    eax = eax - 0x100;

loc_000BACEE: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649794); /* mulss */
    MEMF(edi + 0x198) = xmm0; /* movss */
    SET_LO16(edx, ZX8(MEM8(ebx + 3)));
    MEM16(edi + 0x194) = LO16(edx);
    MEM8(edi + 0xB1) = 3;

loc_000BAD15: ;
    (void)0; /* cmp MEM8(edi + 0xB1), 3 - flags set for next jcc */
    xmm2 = MEMF(0x648D10); /* movss */
    esi = MEM32(0x7FA20C);
    if (CMP_NE(MEM8(edi + 0xB1), 3)) goto loc_000BADBB; /* jne: not equal / not zero */

loc_000BAD30: ;
    xmm0 = MEMF(edi + 0xCC); /* movss */
    /* comiss xmm0, MEMF(edi + 0x198) - sets EFLAGS */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    if ((xmm0 <= MEMF(edi + 0x198))) goto loc_000BAD56; /* jbe: below or equal (unsigned <=) */

loc_000BAD4C: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */

loc_000BAD56: ;
    fp_push(MEMF(edi + 0x198)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E6C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_000BAD7C; /* jb: below (unsigned <) */

loc_000BAD72: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */

loc_000BAD7C: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BAD8A; /* jbe: below or equal (unsigned <=) */

loc_000BAD81: ;
    /* comiss xmm0, MEMF(edi + 0xD8) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 0xD8))) goto loc_000BAD9C; /* ja: above (unsigned >) */

loc_000BAD8A: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000BADA5; /* jbe: below or equal (unsigned <=) */

loc_000BAD8F: ;
    xmm3 = MEMF(edi + 0xD8); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_000BADA5; /* jbe: below or equal (unsigned <=) */

loc_000BAD9C: ;
    MEM8(edi + 0xB1) = 2;
    goto loc_000BADBE;

loc_000BADA5: ;
    xmm3 = MEMF(edi + 0xD8); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(edi + 0xD8) = xmm3; /* movss */
    goto loc_000BADBE;

loc_000BADBB: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_000BADBE: ;
    if (CMP_NE(MEM8(edi + 0xB1), 2)) goto loc_000BAE54; /* jne: not equal / not zero */

loc_000BADCB: ;
    xmm1 = MEMF(edi + 0xD8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000BAE17; /* jnp: not parity */

loc_000BADDC: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BADF2; /* jbe: below or equal (unsigned <=) */

loc_000BADE1: ;
    xmm3 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_000BAE05;

loc_000BADF2: ;
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0xD8); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_000BAE05: ;
    MEMF(edi + 0xD8) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000BAE17; /* jbe: below or equal (unsigned <=) */

loc_000BAE0F: ;
    MEMF(edi + 0xD8) = xmm0; /* movss */

loc_000BAE17: ;
    MEM16(edi + 0x194) = MEM16(edi + 0x194) - LO16(esi);
    if (CMP_G(MEM16(edi + 0x194), 0)) goto loc_000BAE54; /* jg: greater (signed >) */

loc_000BAE28: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BAE2D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 0x198) = xmm1; /* movss */
    SET_LO16(edx, ZX8(MEM8(ebx + 2)));
    MEM16(edi + 0x194) = LO16(edx);
    MEM8(edi + 0xB1) = 3;

loc_000BAE54: ;
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000BAE9A; /* jbe: below or equal (unsigned <=) */

loc_000BAE67: ;
    xmm1 = MEMF(edi + 0xD8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BAE7F; /* jbe: below or equal (unsigned <=) */

loc_000BAE74: ;
    eax = MEM32(ebx + 0x10);
    MEM32(edi + 0xD8) = eax;
    goto loc_000BAE9A;

loc_000BAE7F: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ebx + 0x10); /* subss */
    MEMF(edi + 0xD8) = xmm1; /* movss */
    goto loc_000BAE9A;

loc_000BAE91: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(0x7FA20C);

loc_000BAE9A: ;
    SET_LO8(eax, MEM8(edi + 0xB2));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_000BAEEA; /* jns: not sign (positive) */

loc_000BAEA4: ;
    ecx = (int32_t)MEMF(edi + 0xC0); /* cvttss2si */
    edx = (int32_t)MEMF(edi + 0xBC); /* cvttss2si */
    eax = (int32_t)MEMF(edi + 0xB8); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0); sub_00066BA0(); /* call 0x00066BA0 */

loc_000BAEC8: ;
    esi = MEM32(0x7FA20C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x180) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    MEM32(edi + 0x1A0) = 0;

loc_000BAEEA: ;
    (void)0; /* test MEM8(edi + 0xB2), 0x40 - flags set for next jcc */
    xmm3 = MEMF(0x648D34); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    if (TEST_Z(MEM8(edi + 0xB2), 0x40)) goto loc_000BAFE7; /* je: equal / zero */

loc_000BAF07: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x196));
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_000BAF93; /* jl: less (signed <) */

loc_000BAF15: ;
    eax = eax - esi;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(edi + 0x196) = LO16(eax);
    if (CMP_G(LO16(eax) & LO16(eax), 0)) goto loc_000BAF69; /* jg: greater (signed >) */

loc_000BAF23: ;
    MEM16(edi + 0x196) = 0xFFFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BAF31: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x192);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x18A);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, MEMF(edi + 0xBC) - sets EFLAGS */
    MEMF(edi + 0x19C) = xmm1; /* movss */
    if ((xmm1 <= MEMF(edi + 0xBC))) goto loc_000BAF89; /* jbe: below or equal (unsigned <=) */

loc_000BAF5F: ;
    MEMF(edi + 0xD4) = xmm3; /* movss */
    goto loc_000BAFE7;

loc_000BAF69: ;
    xmm1 = MEMF(edi + 0xC8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BAF80; /* jbe: below or equal (unsigned <=) */

loc_000BAF76: ;
    MEMF(edi + 0xD4) = xmm3; /* movss */
    goto loc_000BAFE7;

loc_000BAF80: ;
    /* comiss xmm0, MEMF(edi + 0xC8) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0xC8))) goto loc_000BAFE7; /* jbe: below or equal (unsigned <=) */

loc_000BAF89: ;
    MEMF(edi + 0xD4) = xmm4; /* movss */
    goto loc_000BAFE7;

loc_000BAF93: ;
    xmm1 = MEMF(edi + 0xD4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BAFB1; /* jbe: below or equal (unsigned <=) */

loc_000BAFA0: ;
    xmm1 = MEMF(edi + 0x19C); /* movss */
    /* comiss xmm1, MEMF(edi + 0xBC) - sets EFLAGS */
    if ((xmm1 > MEMF(edi + 0xBC))) goto loc_000BAFCB; /* ja: above (unsigned >) */

loc_000BAFB1: ;
    /* comiss xmm0, MEMF(edi + 0xD4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0xD4))) goto loc_000BAFE7; /* jbe: below or equal (unsigned <=) */

loc_000BAFBA: ;
    xmm1 = MEMF(edi + 0xBC); /* movss */
    /* comiss xmm1, MEMF(edi + 0x19C) - sets EFLAGS */
    if ((xmm1 <= MEMF(edi + 0x19C))) goto loc_000BAFE7; /* jbe: below or equal (unsigned <=) */

loc_000BAFCB: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edi + 0xD4); /* subss */
    MEM16(edi + 0x196) = 0x78;
    MEMF(edi + 0xD4) = xmm1; /* movss */

loc_000BAFE7: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0xB2));
    esi = edx;
    esi = esi & 0x200;
    if ((esi != 0)) goto loc_000BB181; /* jne: not equal / not zero */

loc_000BAFFE: ;
    xmm1 = MEMF(edi + 0xD4); /* movss */
    xmm1 = xmm1 + MEMF(edi + 0xC8); /* addss */
    MEMF(edi + 0xC8) = xmm1; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(ebx + 8); /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000BB028; /* jbe: below or equal (unsigned <=) */

loc_000BB023: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000BB033;

loc_000BB028: ;
    /* comiss xmm1, MEMF(ebx + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebx + 8))) goto loc_000BB033; /* jbe: below or equal (unsigned <=) */

loc_000BB02E: ;
    xmm1 = MEMF(ebx + 8); /* movss */

loc_000BB033: ;
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    MEMF(edi + 0xC8) = xmm1; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000BB0F4; /* jbe: below or equal (unsigned <=) */

loc_000BB055: ;
    xmm1 = MEMF(edi + 0xD8); /* movss */
    xmm1 = xmm1 + MEMF(edi + 0xCC); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0xCC) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000BB07C; /* jbe: below or equal (unsigned <=) */

loc_000BB072: ;
    xmm1 = xmm1 + MEMF(0x648F60); /* addss */
    goto loc_000BB08D;

loc_000BB07C: ;
    xmm2 = MEMF(0x648F60); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 < xmm2)) goto loc_000BB095; /* jb: below (unsigned <) */

loc_000BB089: ;
    xmm1 = xmm1 - xmm2; /* subss */

loc_000BB08D: ;
    MEMF(edi + 0xCC) = xmm1; /* movss */

loc_000BB095: ;
    if (TEST_NZ(LO8(edx), 0x20)) goto loc_000BB154; /* jne: not equal / not zero */

loc_000BB09E: ;
    xmm1 = MEMF(edi + 0xD0); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(edi + 0xD8); /* subss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(edi + 0xDC) = xmm2; /* movss */
    MEMF(edi + 0xD0) = xmm1; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(ebx + 4); /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000BB0DF; /* jbe: below or equal (unsigned <=) */

loc_000BB0D2: ;
    xmm1 = xmm2; /* movaps */
    MEMF(edi + 0xD0) = xmm1; /* movss */
    goto loc_000BB154;

loc_000BB0DF: ;
    /* comiss xmm1, MEMF(ebx + 4) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebx + 4))) goto loc_000BB0EA; /* jbe: below or equal (unsigned <=) */

loc_000BB0E5: ;
    xmm1 = MEMF(ebx + 4); /* movss */

loc_000BB0EA: ;
    MEMF(edi + 0xD0) = xmm1; /* movss */
    goto loc_000BB154;

loc_000BB0F4: ;
    xmm1 = MEMF(edi + 0xD0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BB10B; /* jbe: below or equal (unsigned <=) */

loc_000BB101: ;
    MEMF(edi + 0xDC) = xmm3; /* movss */
    goto loc_000BB11C;

loc_000BB10B: ;
    /* comiss xmm0, MEMF(edi + 0xD0) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0xD0))) goto loc_000BB11C; /* jbe: below or equal (unsigned <=) */

loc_000BB114: ;
    MEMF(edi + 0xDC) = xmm4; /* movss */

loc_000BB11C: ;
    xmm1 = MEMF(edi + 0xDC); /* movss */
    xmm1 = xmm1 + MEMF(edi + 0xD0); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(edi + 0xD0) = xmm1; /* movss */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000BB154; /* jbe: below or equal (unsigned <=) */

loc_000BB14C: ;
    MEMF(edi + 0xD0) = xmm0; /* movss */

loc_000BB154: ;
    SET_LO16(eax, MEM16(edi + 0xC6));
    MEM16(edi + 0xC4) = MEM16(edi + 0xC4) + LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xC4);
    ecx = ZX8(MEM8(ebx + 1));
    if (CMP_L(eax, ecx)) goto loc_000BB178; /* jl: less (signed <) */

loc_000BB171: ;
    ecx = ZX8(MEM8(ebx));
    if (CMP_LE(eax, ecx)) goto loc_000BB17A; /* jle: less or equal (signed <=) */

loc_000BB178: ;
    eax = ecx;

loc_000BB17A: ;
    MEM16(edi + 0xC4) = LO16(eax);

loc_000BB181: ;
    if (TEST_NZ(LO8(edx), 1)) goto loc_000BB1F2; /* jne: not equal / not zero */

loc_000BB186: ;
    xmm1 = MEMF(edi + 0xC8); /* movss */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 0xB4);
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(ebx + 0x20); /* movss */
    if ((xmm1 < xmm0)) goto loc_000BB1C8; /* jb: below (unsigned <) */

loc_000BB1A2: ;
    if (CMP_NE(ecx, MEM32(eax * 4 + 0x774974))) goto loc_000BB1F2; /* jne: not equal / not zero */

loc_000BB1AB: ;
    /* comiss xmm1, MEMF(ebx + 0x18) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebx + 0x18))) goto loc_000BB1F2; /* jbe: below or equal (unsigned <=) */

loc_000BB1B1: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ebx + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BB1F2; /* jbe: below or equal (unsigned <=) */

loc_000BB1BF: ;
    edx = MEM32(eax * 4 + 0x774978);
    goto loc_000BB1EC;

loc_000BB1C8: ;
    if (CMP_NE(ecx, MEM32(eax * 4 + 0x774978))) goto loc_000BB1F2; /* jne: not equal / not zero */

loc_000BB1D1: ;
    /* comiss xmm1, MEMF(ebx + 0x18) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebx + 0x18))) goto loc_000BB1F2; /* jbe: below or equal (unsigned <=) */

loc_000BB1D7: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ebx + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BB1F2; /* jbe: below or equal (unsigned <=) */

loc_000BB1E5: ;
    edx = MEM32(eax * 4 + 0x774974);

loc_000BB1EC: ;
    MEM32(edi + 0xB4) = edx;

loc_000BB1F2: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_000BB320; /* je: equal / zero */

loc_000BB1FB: ;
    xmm0 = MEMF(edi + 0xD8); /* movss */
    xmm1 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm2 = MEMF(0x64AB84); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xD4); /* addss */
    MEMF(edi + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xD8); /* movss */
    xmm0 = xmm0 + MEMF(0x64AB80); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(edi + 0xD8) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_000BB24C; /* jbe: below or equal (unsigned <=) */

loc_000BB244: ;
    MEMF(edi + 0xD8) = xmm2; /* movss */

loc_000BB24C: ;
    xmm1 = xmm1 * MEMF(0x649414); /* mulss */
    xmm0 = MEMF(edi + 0xDC); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648E38); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0xDC) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000BB27D; /* jbe: below or equal (unsigned <=) */

loc_000BB275: ;
    MEMF(edi + 0xDC) = xmm1; /* movss */

loc_000BB27D: ;
    fp_push(MEMF(edi + 0xD4)); /* fld float */
    esi = edi + 0xB8;
    /* FPU: fcos  */
    xmm0 = MEMF(edi + 0xDC); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(edi + 0xBC); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x64AB7C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0xBC) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0xD4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 0xC0) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm1 > xmm0)) goto loc_000BB4A2; /* ja: above (unsigned >) */

loc_000BB2F8: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BB4A2; /* je: equal / zero */

loc_000BB305: ;
    if (CMP_EQ(MEM8(0x76F0DC), 0xF)) goto loc_000BB3B8; /* je: equal / zero */

loc_000BB312: ;
    esi = edi;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000BB319: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BB320: ;
    fp_push(MEMF(edi + 0xC8)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xC4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    fp_push(MEMF(edi + 0xCC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    /* FPU: fcos  */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    esi = edi + 0xB8;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    /* FPU: fsin  */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0xBC); /* addss */
    /* FPU: fcos  */
    MEMF(edi + 0xBC) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xC0); /* addss */
    MEMF(edi + 0xC0) = xmm0; /* movss */

loc_000BB3B8: ;
    if (CMP_NE(MEM32(edi), 0x16)) goto loc_000BB40E; /* jne: not equal / not zero */

loc_000BB3BD: ;
    eax = ZX8(MEM8(edi + 0xB0));
    SET_LO8(ecx, MEM8(eax + 0x774968));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000BB40E; /* jne: not equal / not zero */

loc_000BB3CE: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x10;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000BB3F8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BB3FD: ;
    ecx = ZX8(MEM8(edi + 0xB0));
    SET_LO8(eax, LO8(eax) & 0x3F);
    SET_LO8(eax, LO8(eax) + 0x1E);
    MEM8(ecx + 0x774968) = LO8(eax);

loc_000BB40E: ;
    if (TEST_Z(MEM8(edi + 0xB2), 2)) goto loc_000BB4A9; /* je: equal / zero */

loc_000BB41B: ;
    ebx = MEM32(0x780A48);
    edx = MEM32(0x780A4C);
    eax = MEM32(0x76F7B0);
    ecx = MEM32(0x76F7AC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC0);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xBC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x76F8C0);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00074090(); /* call 0x00074090 */

loc_000BB455: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_000BB4A9; /* je: equal / zero */

loc_000BB45C: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_000BB461: ;
    if (CMP_NE(MEM32(eax + 4), 1)) goto loc_000BB4A2; /* jne: not equal / not zero */

loc_000BB467: ;
    edx = MEM32(0x780A4C);
    eax = MEM32(0x76F7B0);
    ecx = MEM32(0x76F7AC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC0);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xBC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x76F900);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00074090(); /* call 0x00074090 */

loc_000BB49B: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_000BB4A9; /* je: equal / zero */

loc_000BB4A2: ;
    esi = edi;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000BB4A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BB970
 * Original: 0x000BB970 - 0x000BBB6A (506 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_000BB970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    edx = MEM32(ebp + 8);
    eax = ZX8(MEM8(edx + 0x1A5));
    eax = eax + eax * 4;
    ecx = MEM32(eax * 4 + 0x774970);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_000BBB64; /* je: equal / zero */

loc_000BB99A: ;
    xmm0 = MEMF(edx + 0xCC); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000BB9D6: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0xD0); /* movss */
    esp = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xC8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x6C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000BBA21: ;
    esp = esp + 0x24;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_000BBA34: ;
    xmm0 = MEMF(edx + 0xB8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xBC); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xC0); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xE0); /* mulss */
    eax = eax << 6;
    edi = eax + edx + 0x30;
    ecx = 0x10;
    esi = esp + 0x10;
    MEMF(esp + 0x38) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ZX8(MEM8(edx + 0x1A4));
    if (TEST_Z(eax, eax)) goto loc_000BBB64; /* je: equal / zero */

loc_000BBB36: ;
    ecx = MEM32(0x7FA20C);
    if (CMP_GE(eax & eax, 0)) goto loc_000BBB53; /* jge: greater or equal (signed >=) */

loc_000BBB3E: ;
    eax = eax + ecx * 4;
    if (CMP_LE(eax & eax, 0)) goto loc_000BBB5E; /* jle: less or equal (signed <=) */

loc_000BBB45: ;
    eax = 0; /* xor self */
    MEM8(edx + 0x1A4) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BBB53: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    eax = eax + ecx * 4;
    if (CMP_GE(eax & eax, 0)) goto loc_000BBB5E; /* jge: greater or equal (signed >=) */

loc_000BBB5C: ;
    eax = 0; /* xor self */

loc_000BBB5E: ;
    MEM8(edx + 0x1A4) = LO8(eax);

loc_000BBB64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBB70
 * Original: 0x000BBB70 - 0x000BBD3C (460 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BBB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    xmm2 = MEMF(edx + 0xB8); /* movss */
    xmm1 = MEMF(edx + 0xBC); /* movss */
    xmm0 = MEMF(edx + 0xC0); /* movss */
    eax = SX16(LO16(ecx));
    eax = eax << 6;
    eax = eax + 0x76F8C0;
    xmm3 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x18); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x38); /* addss */
    xmm1 = MEMF(0x76F7AC); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_000BBD36; /* ja: above (unsigned >) */

loc_000BBBFC: ;
    /* comiss xmm0, MEMF(0x649834) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649834))) goto loc_000BBD36; /* ja: above (unsigned >) */

loc_000BBC09: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000BBD36; /* ja: above (unsigned >) */

loc_000BBC3C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000BBD36; /* ja: above (unsigned >) */

loc_000BBC70: ;
    SET_LO8(eax, MEM8(edx + 0xB1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BBC8E; /* je: equal / zero */

loc_000BBC7A: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000BB970(); /* call 0x000BB970 */

loc_000BBC85: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BBC8E: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0xD0); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xCC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xC8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000BBCF0: ;
    xmm0 = MEMF(edx + 0xB8); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xBC); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xC0); /* movss */
    eax = eax << 6;
    edi = eax + edx + 0x30;
    ecx = 0x10;
    esi = esp + 0x20;
    MEMF(esp + 0x58) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000BBD36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BBD40
 * Original: 0x000BBD40 - 0x000BBE6F (303 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBD40(void)
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

loc_000BBD40: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    esi = esi + 0x6B6A18;
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x24)); /* fld float */
    edi = MEM32(eax * 4 + 0x774978);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000BBD7B: ;
    /* FPU: fsin  */
    ebx = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000BBD87: ;
    ecx = SX16(LO16(ebx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x1DC) = xmm1; /* movss */
    MEMF(edi + 0x1F8) = xmm1; /* movss */
    edx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 0x1E0) = xmm0; /* movss */
    MEMF(edi + 0x1FC) = xmm0; /* movss */
    ecx = (uint32_t)(-(int32_t)ecx);
    MEMF(edi + 0x11C) = xmm0; /* movss */
    MEMF(edi + 0x138) = xmm0; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x118) = xmm1; /* movss */
    MEMF(edi + 0x134) = xmm1; /* movss */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000BBE04: ;
    /* FPU: fsin  */
    ebx = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000BBE10: ;
    ecx = SX16(LO16(ebx));
    edx = ecx;
    edx = (uint32_t)(-(int32_t)edx);
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 0x188) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x18C) = xmm0; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x214) = xmm1; /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    MEMF(edi + 0x218) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x24) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_000BBE6B; /* jb: below (unsigned <) */

loc_000BBE62: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esi + 0x24) = xmm0; /* movss */

loc_000BBE6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BBE70
 * Original: 0x000BBE70 - 0x000BC413 (1443 bytes, 354 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BBE70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2D4;
    xmm0 = MEMF(ebp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x64A1CC); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x64);
    esi = ecx;
    MEMF(ebp + 0x20) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BC02A; /* je: equal / zero */

loc_000BBEA0: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000BC02A; /* je: equal / zero */

loc_000BBEAB: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;

loc_000BBEC4: ;
    SET_LO8(edx, MEM8(ebp + 0x34));
    SET_LO8(ecx, MEM8(ebp + 0x38));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(edx, MEM8(ebp + 0x3C));
    SET_LO8(eax, LO8(eax) - 1);
    MEM32(esp + 0x2C8) = 0;
    eax = eax & 4;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    ecx = ecx & 8;
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x40));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(edx, MEM8(ebp + 0x54));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    MEM8(esp + 0x2C4) = LO8(edx);
    edx = MEM32(ebp + 0x48);
    MEM32(esp + 0x2C0) = edx;
    ecx = ecx & 2;
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, MEM8(ebp + 0x44));
    MEM8(esp + 0x2AD) = LO8(ecx);
    ecx = MEM32(ebp + 0x6C);
    MEM8(esp + 0x150) = LO8(eax);
    MEM32(esp + 0x2CC) = ecx;
    if (TEST_Z(edi, edi)) goto loc_000BBF6B; /* je: equal / zero */

loc_000BBF37: ;
    edx = MEM32(edi);
    ecx = MEM32(edi + 8);
    xmm0 = MEMF(ebp + 0x60); /* movss */
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esp + 0x150) = LO8(eax);
    eax = MEM32(edi + 4);
    MEM32(esp + 0x160) = edx;
    MEM32(esp + 0x164) = eax;
    MEM32(esp + 0x168) = ecx;
    MEMF(esp + 0x16C) = xmm0; /* movss */

loc_000BBF6B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BBF70: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x2BD) = 0;
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esp + 0x2BC) = LO8(edx);
    edx = MEM32(ebp + 0xC);
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x2B4) = eax;
    MEM32(esp + 0x2B8) = eax;
    if (TEST_Z(edx, edx)) goto loc_000BC034; /* je: equal / zero */

loc_000BBFA9: ;
    ecx = MEM32(ebp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_000BC034; /* je: equal / zero */

loc_000BBFB4: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BC0A4; /* jne: not equal / not zero */

loc_000BBFC0: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000BC40A; /* jnp: not parity */

loc_000BBFFF: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM8(esp + 0x13) = 1;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_000BC0A0;

loc_000BC02A: ;
    MEM8(esp + 0x13) = 0;
    goto loc_000BBEC4;

loc_000BC034: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000BC0A0; /* je: equal / zero */

loc_000BC03B: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000BC40A; /* jnp: not parity */

loc_000BC07A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    SET_LO8(ebx, 1);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */

loc_000BC0A0: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_000BC0A4: ;
    ecx = MEM32(ebp + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x38);
    edi = MEM32(ebp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(ebp + 0x18); /* divss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, 3);
    ecx = esp + 0x170;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    MEM32(esp + 0x2EC) = 0;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x30);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x2D4;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & ecx;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x1E0;
    PUSH32(esp, 0); sub_000BE540(); /* call 0x000BE540 */

loc_000BC119: ;
    esp = esp + 0x40;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BC40A; /* je: equal / zero */

loc_000BC124: ;
    xmm2 = MEMF(ebp + 0x18); /* movss */
    edx = esp + 0x1D8;
    eax = esp + 0x154;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebp + 0x20); /* movss */
    ecx = esp + 0x1D8;
    edx = esp + 0x188;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x194) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x198) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEMF(esp + 0x19C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x170) = xmm0; /* movss */
    MEMF(esp + 0x174) = xmm0; /* movss */
    MEMF(esp + 0x178) = xmm0; /* movss */
    MEM32(esp + 0x2A8) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_000BC213; /* je: equal / zero */

loc_000BC204: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    MEM8(esp + 0x2AC) = LO8(eax);
    goto loc_000BC21B;

loc_000BC213: ;
    MEM8(esp + 0x2AC) = 0x63;

loc_000BC21B: ;
    eax = esp + 0x38;
    MEMF(esp + 0x2A4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000BC22D: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM8(esp + 0x88) = 1;
    if (CMP_EQ(edi, ebx)) goto loc_000BC29E; /* je: equal / zero */

loc_000BC24A: ;
    ecx = MEM32(edi + 0x238);
    eax = MEM32(ecx);
    edi = MEM32(edi + 0x568);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, ebx)) ? 1 : 0); /* setne */
    edx = edx + 0x101;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x8C) = edx;
    if (CMP_EQ(edi, ebx)) goto loc_000BC2A9; /* je: equal / zero */

loc_000BC270: ;
    eax = MEM32(edi + 0x444);
    if (CMP_EQ(eax, ebx)) goto loc_000BC2A9; /* je: equal / zero */

loc_000BC27A: ;
    if (CMP_NE(MEM32(eax + 8), 4)) goto loc_000BC2A9; /* jne: not equal / not zero */

loc_000BC280: ;
    PUSH32(esp, 0); sub_0032FD10(); /* call 0x0032FD10 */

loc_000BC285: ;
    if (CMP_EQ(eax, ebx)) goto loc_000BC2A9; /* je: equal / zero */

loc_000BC289: ;
    eax = MEM32(eax + 0x1C);
    if (CMP_NE(MEM32(eax), 0x32)) goto loc_000BC2A9; /* jne: not equal / not zero */

loc_000BC291: ;
    MEM32(esp + 0x8C) = 0x41;
    goto loc_000BC2A9;

loc_000BC29E: ;
    MEM32(esp + 0x8C) = 0x101;

loc_000BC2A9: ;
    eax = MEM32(ebp + 0x70);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000BC2B8; /* je: equal / zero */

loc_000BC2B1: ;
    MEM32(esp + 0x8C) = eax;

loc_000BC2B8: ;
    SET_LO8(ecx, MEM8(ebp + 0x28));
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi);
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    eax = 2;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xB4) = eax;
    eax = MEM32(esi + 4);
    MEM8(esp + 0x7F) = LO8(ecx);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x48) = eax;
    SET_LO8(eax, 0xFF);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(ebp + 0x58);
    MEM8(esp + 0x7C) = LO8(eax);
    MEM8(esp + 0x7D) = LO8(eax);
    MEM8(esp + 0x7E) = LO8(eax);
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, eax);
    ecx = ecx + 0x190;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    MEM32(esp + 0x64) = edx;
    SET_LO8(edx, MEM8(ebp + 0x50));
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x20); /* movss */
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x597978);
    eax = esp + 0x60;
    MEM8(esp + 0x60) = 4;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = 4;
    MEM32(esp + 0xD8) = ebx;
    MEM32(esp + 0xA8) = 0x303;
    MEM16(esp + 0x62) = 0x12C;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEM32(esp + 0xE0) = ebx;
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0x90) = 0xC0C00008u;
    MEM8(esp + 0x98) = LO8(edx);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000BC3C9: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, ebx)) goto loc_000BC40C; /* je: equal / zero */

loc_000BC3D0: ;
    xmm1 = 0.0f; /* xorps self = zero */
    edx = eax + 0x310;
    ecx = 0x64;
    esi = esp + 0x150;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(edx + 0x150); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x4C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edx + 0x150) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_000BC40C; /* jb: below (unsigned <) */

loc_000BC403: ;
    esi = eax;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000BC40A: ;
    eax = 0; /* xor self */

loc_000BC40C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BC420
 * Original: 0x000BC420 - 0x000BC4CA (170 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC420: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA21C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ebp + 0x310));
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ebp + 0x310;
    PUSH32(esp, edi);
    MEM8(esp + 0x20) = 1;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_000BC4B6; /* je: equal / zero */

loc_000BC446: ;
    eax = MEM32(esi + 0x1C);
    edi = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_000BC45B: ;
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648E54); /* movss */
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi))) goto loc_000BC4B6; /* jbe: below or equal (unsigned <=) */

loc_000BC496: ;
    /* comiss xmm0, MEMF(esi + 0x14) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x14))) goto loc_000BC4B6; /* jbe: below or equal (unsigned <=) */

loc_000BC49C: ;
    /* comiss xmm0, MEMF(esi + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x18))) goto loc_000BC4B6; /* jbe: below or equal (unsigned <=) */

loc_000BC4A2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEM8(esi) = MEM8(esi) & 0xEF;

loc_000BC4B6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = esi;
    PUSH32(esp, 0); sub_000BD940(); /* call 0x000BD940 */

loc_000BC4BF: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000BC4CA(); return; } /* jne: not equal / not zero */

loc_000BC4C6: ;
    SET_LO8(ebx, 0); /* xor self */
    g_seh_ebp = ebp; sub_000BC4CE(); return; /* tail jmp 0x000BC4CE */

}

/**
 * sub_000BC620
 * Original: 0x000BC620 - 0x000BC686 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC620(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000BC620: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    xmm3 = MEMF(eax + 0x464); /* movss */
    xmm3 = xmm3 * MEMF(0x7FA21C); /* mulss */
    eax = eax + 0x330;
    MEM32(esp + 0xC) = eax;
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esp); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) { sub_000BC686(); return; } /* jb: below (unsigned <) */

loc_000BC680: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC6D0
 * Original: 0x000BC6D0 - 0x000BC818 (328 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC6D0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    edx = MEM32(esp + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm3 = MEMF(edx + 0x40); /* movss */
    xmm3 = xmm3 - MEMF(edx + 0x330); /* subss */
    xmm6 = MEMF(0x648D10); /* movss */
    xmm4 = MEMF(edx + 0x44); /* movss */
    xmm4 = xmm4 - MEMF(edx + 0x334); /* subss */
    xmm5 = MEMF(edx + 0x48); /* movss */
    xmm5 = xmm5 - MEMF(edx + 0x338); /* subss */
    esi = MEM32(0x8470DC);
    eax = eax + esi + 0x330;
    esi = edx + 0x40;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(esp + 0x1C) = ebp;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    MEM32(esp + 0x20) = ebp;
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEM32(esp + 0x24) = ebx;
    xmm7 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = edx + 0x294;
    edi = ecx;
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_000BC818(); return; } /* jp: parity */

loc_000BC810: ;
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_000BC84F(); return; /* tail jmp 0x000BC84F */

}

/**
 * sub_000BC9B0
 * Original: 0x000BC9B0 - 0x000BC9E7 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC9B0(void)
{

loc_000BC9B0: ;
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 4));
    ecx = eax + 0x398;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x480);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019AF70(); /* call 0x0019AF70 */

loc_000BC9E3: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC9F0
 * Original: 0x000BC9F0 - 0x000BCC97 (679 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC9F0: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x8C);
    eax = MEM32(edi + 0x468);
    ecx = MEM32(eax + 0x238);
    edx = MEM32(ecx);
    PUSH32(esp, 0x3F800000);
    ebp = edi + 0x360;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_00185DB0(); /* call 0x00185DB0 */

loc_000BCA20: ;
    ecx = edi + 0x3B0;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_000BCA3B; /* je: equal / zero */

loc_000BCA2F: ;
    ecx = MEM32(edi + 0x438);
    if (TEST_Z(ecx, ecx)) goto loc_000BCA3B; /* je: equal / zero */

loc_000BCA39: ;
    eax = MEM32(ecx);

loc_000BCA3B: ;
    eax = eax & 0x1F;
    ecx = MEM32(eax * 4 + 0x65DE60);
    if (TEST_Z(ecx, ecx)) goto loc_000BCA73; /* je: equal / zero */

loc_000BCA49: ;
    eax = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = edi + 0x368;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000BCA73: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BCA78: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x14)) goto loc_000BCAB4; /* jg: greater (signed >) */

loc_000BCA85: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = edi + 0x368;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB9C;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000BCAB4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BCAB9: ;
    xmm1 = MEMF(0x773770); /* movss */
    xmm1 = xmm1 * MEMF(0x64AB74); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000BCB3A; /* jbe: below or equal (unsigned <=) */

loc_000BCACE: ;
    MEM8(esp + 0xC) = 3;
    MEM8(esp + 0xD) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BCADD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x12) = 0;
    edx = edx + 4;
    MEM16(esp + 0xE) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BCB10: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = edi + 0x368;
    edx = edx + 0xC;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x28;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000BCB37: ;
    esp = esp + 0x20;

loc_000BCB3A: ;
    eax = ebp + 0xC0;
    PUSH32(esp, eax);
    eax = edi + 0x314;
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_003E22C0(); /* call 0x003E22C0 */

loc_000BCB50: ;
    ecx = MEM32(edi + 0x468);
    edx = MEM32(ecx + 0x238);
    ecx = MEM32(edx);
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = 0x103;
    if (TEST_Z(ecx, ecx)) goto loc_000BCB6F; /* je: equal / zero */

loc_000BCB6A: ;
    eax = 0x105;

loc_000BCB6F: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EFC); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEM32(esp + 0x64) = eax;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x24;
    esi = esp + 0x48;
    MEM32(esp + 0x5C) = 3;
    MEM8(esp + 0x7C) = 0;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000BCC8D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_000BCCA0
 * Original: 0x000BCCA0 - 0x000BCE03 (355 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCCA0: ;
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB4);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebx)) { sub_000BCE03(); return; } /* je: equal / zero */

loc_000BCCBA: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(edi); /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(0x649234); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    xmm4 = MEMF(0x59D948); /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEMF(esp + 0x50) = xmm3; /* movss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    xmm3 = MEMF(0x648D3C); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm4 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm2 - xmm3; /* subss */
    PUSH32(esp, ebx);
    eax = esp + 0x94;
    esi = esp + 0x18;
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x38) = 0x105;
    MEMF(esp + 0x40) = xmm4; /* movss */
    MEM8(esp + 0x4C) = LO8(ebx);
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm2; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000BCDF6: ;
    esp = esp + 4;
    esi = 1;
    g_seh_ebp = ebp; sub_000BCF84(); return; /* tail jmp 0x000BCF84 */

}

/**
 * sub_000BD140
 * Original: 0x000BD140 - 0x000BD47E (830 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD140: ;
    esp = esp - 0x84;
    xmm0 = MEMF(0x64A1C8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1C4); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1C0); /* movss */
    PUSH32(esp, ebp);
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1BC); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    ebp = 5;
    eax = 1;
    ecx = esp + 0xC;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = 8;
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x20) = edx;
    MEM16(esp + 0x40) = LO16(ebx);
    MEM16(esp + 0x42) = 0xFF;
    MEM16(esp + 0x44) = 0xFFC0;
    MEM16(esp + 0x46) = 0x50;
    MEM32(esp + 0x48) = 3;
    MEM32(esp + 0x4C) = ebx;
    MEM16(esp + 0x50) = LO16(ebp);
    MEM16(esp + 0x52) = LO16(ebp);
    MEM16(esp + 0x54) = LO16(eax);
    MEM8(esp + 0x56) = 4;
    MEM8(esp + 0x57) = 2;
    MEM8(esp + 0x58) = 3;
    MEM8(esp + 0x5B) = 0xFF;
    MEM8(esp + 0x5A) = 0xFF;
    MEM8(esp + 0x59) = 0xFF;
    MEM8(esp + 0x5C) = 0xFF;
    MEM8(esp + 0x5F) = LO8(ebx);
    MEM8(esp + 0x5E) = LO8(ebx);
    MEM8(esp + 0x5D) = LO8(ebx);
    MEM8(esp + 0x60) = LO8(ebx);
    MEM8(esp + 0x63) = 0xFF;
    MEM8(esp + 0x62) = 0xFF;
    MEM8(esp + 0x61) = 0xFF;
    MEM8(esp + 0x64) = 0xFF;
    MEM8(esp + 0x67) = LO8(ebx);
    MEM8(esp + 0x66) = LO8(ebx);
    MEM8(esp + 0x65) = LO8(ebx);
    MEM8(esp + 0x68) = LO8(ebx);
    MEM8(esp + 0x69) = 0xFF;
    MEM8(esp + 0x6A) = LO8(ebx);
    MEM32(esp + 0x6C) = 0x205;
    MEM32(esp + 0x70) = 0x63000;
    MEM16(esp + 0x74) = LO16(ebp);
    MEM16(esp + 0x76) = 0x33;
    MEM16(esp + 0x78) = LO16(eax);
    MEM8(esp + 0x7A) = LO8(ebx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEM8(esp + 0x80) = 0xFF;
    MEM8(esp + 0x81) = LO8(ebx);
    MEM8(esp + 0x82) = 0xFF;
    MEM8(esp + 0x83) = 0xFF;
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_000BD2C0: ;
    MEM32(esp + 0x3C) = 0x303;
    MEM32(esp + 0x40) = 0x2B;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BD2D5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    xmm5 = 0.0f; /* xorps self = zero */
    edx = edx + 4;
    MEM16(esp + 0x14) = LO16(edx);
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEM8(esp + 0x20) = 0xFF;
    MEM8(esp + 0x21) = 0xFF;
    MEM8(esp + 0x22) = 0xFF;
    MEM8(esp + 0x23) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BD308: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x60) = edx;
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    MEMF(esp + 0x74) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm5; /* movss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEM16(esp + 0x44) = 2;
    MEM16(esp + 0x46) = 0x7F;
    MEM16(esp + 0x48) = 1;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BD38C: ;
    ebp = eax;
    ebp = ebp & 1;
    ebp = ebp << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BD398: ;
    eax = eax & 1;
    PUSH32(esp, esi);
    ebp = ebp | eax;
    eax = 2;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    ebp = ebp << 6;
    eax = esp + 0x20;
    PUSH32(esp, 1);
    ebp = ebp | 0xC201;
    PUSH32(esp, eax);
    MEM32(esp + 0x94) = ebp;
    MEM8(esp + 0x9C) = 0xFF;
    MEM8(esp + 0x9D) = 0xFF;
    MEM8(esp + 0x9E) = 0xFF;
    MEM8(esp + 0x9F) = 4;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = 4;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000BD3FD: ;
    esp = esp + 0x1C;
    MEM8(esp + 0x88) = 3;
    MEM8(esp + 0x89) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BD415: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    MEM8(esp + 0xA6) = LO8(ebx);
    edx = edx + 6;
    MEM16(esp + 0xA2) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BD447: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_000BD453; /* jns: not sign (positive) */

loc_000BD44E: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_000BD453: ;
    PUSH32(esp, ecx);
    eax = eax + 5;
    edx = esp + 0xA4;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000BD471: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD480
 * Original: 0x000BD480 - 0x000BD4D8 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5, xmm6;

loc_000BD480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    eax = MEM32(edi + 0x450);
    ecx = MEM32(0x7FA1F8);
    eax = eax & 0x1F;
    (void)0; /* cmp ecx, 0x2B - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, 0x2B)) { sub_000BD4D8(); return; } /* je: equal / zero */

loc_000BD49E: ;
    if (CMP_EQ(ecx, 0x30)) { sub_000BD4D8(); return; } /* je: equal / zero */

loc_000BD4A3: ;
    if (CMP_EQ(ecx, 0x45)) { sub_000BD4D8(); return; } /* je: equal / zero */

loc_000BD4A8: ;
    if (CMP_NE(eax, 0xB)) goto loc_000BD4B2; /* jne: not equal / not zero */

loc_000BD4AD: ;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    goto loc_000BD4BF;

loc_000BD4B2: ;
    if (CMP_EQ(eax, 7)) goto loc_000BD4BC; /* je: equal / zero */

loc_000BD4B7: ;
    if (CMP_NE(eax, 0xA)) goto loc_000BD4C1; /* jne: not equal / not zero */

loc_000BD4BC: ;
    (void)0; /* cmp ecx, 0xE - flags set for next jcc */

loc_000BD4BF: ;
    if (CMP_EQ(ecx, 0xE)) { sub_000BD4D8(); return; } /* je: equal / zero */

loc_000BD4C1: ;
    if (CMP_EQ(ecx, 0x34)) { sub_000BD4D8(); return; } /* je: equal / zero */

loc_000BD4C6: ;
    if (CMP_EQ(ecx, 0x27)) { sub_000BD4D8(); return; } /* je: equal / zero */

loc_000BD4CB: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = xmm5; /* movaps */
    MEMF(ebp + 0xC) = xmm5; /* movss */
    g_seh_ebp = ebp; sub_000BD4E0(); return; /* tail jmp 0x000BD4E0 */

}

/**
 * sub_000BD7D0
 * Original: 0x000BD7D0 - 0x000BD938 (360 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD7D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000BD7D0: ;
    esp = esp - 0x28;
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = ecx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000BD7E0: ;
    xmm3 = MEMF(0x7F9F5C); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x34); /* mulss */
    esp = esp + 8;
    /* comiss xmm3, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    if ((xmm3 <= MEMF(0x648CF8))) goto loc_000BD934; /* jbe: below or equal (unsigned <=) */

loc_000BD809: ;
    edx = esi + 0x38;
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 8) = eax;
    ebx = esi + 0x20;
    goto loc_000BD824;

loc_000BD81E: ;
    xmm3 = MEMF(esp + 0x30); /* movss */

loc_000BD824: ;
    MEM32(esp + 0xC) = ebx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648E14); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    MEMF(ebx + 8) = xmm1; /* movss */
    MEM32(esp + 0xC) = ebx;
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 4))) goto loc_000BD915; /* jbe: below or equal (unsigned <=) */

loc_000BD8CF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BD8D6: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm3 = MEMF(esp + 0x30); /* movss */

loc_000BD915: ;
    xmm3 = xmm3 - MEMF(0x648D14); /* subss */
    xmm0 = xmm3; /* movaps */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_000BD81E; /* ja: above (unsigned >) */

loc_000BD933: ;
    POP32(esp, ebx);

loc_000BD934: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD940
 * Original: 0x000BD940 - 0x000BDC7C (828 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD940: ;
    esp = esp - 0x28;
    xmm2 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x158);
    ebp = edi + 4;
    eax = esp + 0x1C;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebp;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    if (TEST_Z(MEM8(edi), 0x10)) goto loc_000BD9D4; /* je: equal / zero */

loc_000BD995: ;
    xmm0 = MEMF(edi + 0x10); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x14); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_000BD9D4: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BDA12: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000BDC73; /* jnp: not parity */

loc_000BDA29: ;
    (void)0; /* test MEM8(edi), 4 - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (TEST_Z(MEM8(edi), 4)) goto loc_000BDA32; /* je: equal / zero */

loc_000BDA30: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000BDA32: ;
    PUSH32(esp, 0x4100000);
    ecx = 0x9EA;
    eax = 0x5F32D4;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000BDA46: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x174));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = ZX8(LO8(ebx));
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = eax >> 3;
    eax = ~eax;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx + 0x40;
    PUSH32(esp, ecx);
    esi = edi + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000BDA89: ;
    eax = MEM32(edi + 0x134);
    ecx = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x780AB0) = ecx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ecx);
    MEM32(0x74FA2C) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_000BDC73; /* je: equal / zero */

loc_000BDAB8: ;
    if (CMP_LE(eax, 1)) goto loc_000BDC08; /* jle: less or equal (signed <=) */

loc_000BDAC1: ;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    edx = edi + 0x70;
    PUSH32(esp, edx);
    ecx = edi + 0x58;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x17C);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_000BC9B0(); /* call 0x000BC9B0 */

loc_000BDADF: ;
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BDC25; /* jne: not equal / not zero */

loc_000BDAEA: ;
    if (CMP_NE(MEM32(edi + 0x134), 3)) { sub_000BDC7C(); return; } /* jne: not equal / not zero */

loc_000BDAF7: ;
    eax = edi + 0x64;
    MEM32(esp + 0x18) = eax;
    eax = edi + 0x58;
    ecx = esp + 0x28;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x28;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BDB3F: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_000BDB49: ;
    edx = ebx;
    esp = esp + 4;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = edi + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_000BDB8A: ;
    eax = ebx;
    esp = esp + 4;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = edi + 0x38;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_000BDBCB: ;
    ecx = ebx;
    esp = esp + 4;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_000BDC08: ;
    if (TEST_Z(MEM8(edi), 2)) goto loc_000BDC25; /* je: equal / zero */

loc_000BDC0D: ;
    SET_LO8(eax, MEM8(edi + 0x15D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000BDC25; /* je: equal / zero */

loc_000BDC17: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x58F6E0), _icall_esp); /* indirect call */
    }

loc_000BDC22: ;
    esp = esp + 4;

loc_000BDC25: ;
    MEM8(ebx + 0x148) = 0x2A;
    eax = ebp;
    ebx = ebp;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BDC35: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x3C); /* divss */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_000BDC73: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDD00
 * Original: 0x000BDD00 - 0x000BDD4B (75 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000BDD00: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_000BDD4A; /* jne: not equal / not zero */

loc_000BDD09: ;
    eax = MEM32(ecx + 0xEC);
    if (TEST_Z(eax, eax)) goto loc_000BDD4A; /* je: equal / zero */

loc_000BDD13: ;
    eax = ZX8(MEM8(eax + 0xC5));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000BDD4A; /* je: equal / zero */

loc_000BDD1F: ;
    ecx = MEM32(ecx + 0xEC);
    edx = ZX8(MEM8(ecx + 0xC5));
    eax = MEM32(0x8471B8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x150);
    SET_LO8(ecx, MEM8(edx + eax + 0xC7));
    eax = edx + eax + 0xC7;
    SET_LO8(ecx, LO8(ecx) | 3);
    MEM8(eax) = LO8(ecx);

loc_000BDD4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDD50
 * Original: 0x000BDD50 - 0x000BDEE4 (404 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_000BDD50: ;
    eax = MEM32(0x7FA20C);
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) - eax;
    if (((int32_t)MEM32(ebx + 0x50) >= 0)) goto loc_000BDEDF; /* jns: not sign (positive) */

loc_000BDD66: ;
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x70); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BDD81: ;
    xmm0 = xmm0 * MEMF(ebx + 0x74); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BDD91: ;
    xmm0 = xmm0 * MEMF(ebx + 0x74); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BDDA1: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BDDB8: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BDDE1: ;
    xmm0 = xmm0 * MEMF(ebx + 0x68); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x64); /* addss */
    eax = MEM32(ebx + 0x4C);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(ebx + 4));
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x84); /* movss */
    xmm0 = xmm0 * MEMF(0x6497D0); /* mulss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM8(esp + 0x50) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BDE5E: ;
    edx = MEM32(esp + 0x50);
    xmm0 = xmm0 * MEMF(ebx + 0x60); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x5C); /* addss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x2A);
    eax = 0x90;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000BDE7F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000BDECD; /* je: equal / zero */

loc_000BDE86: ;
    xmm0 = MEMF(esp + 4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x2B;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x11;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_000BDECD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BDED2: ;
    ecx = MEM32(ebx + 0x58);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(ebx + 0x54);
    MEM32(ebx + 0x50) = edx;

loc_000BDEDF: ;
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDEF0
 * Original: 0x000BDEF0 - 0x000BE4F0 (1536 bytes, 326 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BDEF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x304;
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm2 = MEMF(esi + 0x70); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x74); /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esi + 0x74) = xmm2; /* movss */
    if ((xmm2 <= xmm0)) goto loc_000BE4E9; /* jbe: below or equal (unsigned <=) */

loc_000BDF2E: ;
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(esi + 0x6C); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x5C); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x60); /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x64); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x68); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    ebx = esi + 0x78;
    /* nop */

loc_000BDF90: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    SET_LO8(eax, MEM8(esi + 4));
    /* FPU: fsin  */
    MEM8(esp + 0x60) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    /* FPU: fcos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BDFEA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = MEMF(esi + 0x8C); /* movss */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x14) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BE005: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64925C); /* mulss */
    xmm5 = xmm5 + MEMF(0x648EB8); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000BE01D: ;
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm0 + MEMF(0x649124); /* addss */
    xmm5 = xmm5 * MEMF(0x64A1CC); /* mulss */
    xmm2 = MEMF(esi + 0x84); /* movss */
    edi = 0; /* xor self */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    MEM8(esp + 0x180) = 0;
    MEM32(esp + 0x2F8) = edi;
    MEM8(esp + 0x2F4) = 0xFF;
    MEM8(esp + 0x2DD) = 0xFF;
    MEM32(esp + 0x2F0) = edi;
    MEM32(esp + 0x2FC) = edi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000BE07D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEM8(esp + 0x2ED) = 0;
    xmm0 = xmm0 + xmm3; /* addss */
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(edx, LO8(edx) + 1);
    eax = eax | 0xFFFFFFFFu;
    MEM8(esp + 0x2EC) = LO8(edx);
    MEM32(esp + 0x2E4) = eax;
    MEM32(esp + 0x2E8) = eax;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x64) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000BE42B; /* jnp: not parity */

loc_000BE0ED: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    SET_LO8(edx, MEM8(esp + 0x180));
    fp_top() = sqrt(fp_top()); /* fsqrt */
    SET_LO8(edx, LO8(edx) & 0xFC);
    MEM8(esp + 0x180) = LO8(edx);
    edx = ebx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x1FC) = eax;
    MEM32(esp + 0x200) = ecx;
    MEM32(esp + 0x204) = edx;
    MEM32(esp + 0x2F8) = edi;
    MEMF(esp + 0x2D0) = xmm6; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x54);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x208) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x208;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x20C) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x184;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x210) = edx;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x208;
    eax = esp + 0x1B8;
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x1C4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x1C8) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    eax = esp + 0x68;
    MEMF(esp + 0x1CC) = xmm0; /* movss */
    MEMF(esp + 0x1A0) = xmm3; /* movss */
    MEMF(esp + 0x1A4) = xmm3; /* movss */
    MEMF(esp + 0x1A8) = xmm3; /* movss */
    MEM32(esp + 0x2D8) = edi;
    MEM8(esp + 0x2DC) = 0x63;
    MEMF(esp + 0x2D4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000BE25D: ;
    xmm0 = MEMF(0x648EB0); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    SET_LO8(ecx, MEM8(esp + 0x14));
    eax = 2;
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    MEM8(esp + 0xB8) = 1;
    MEM32(esp + 0xBC) = 0x101;
    MEM8(esp + 0x68) = 4;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = edi;
    MEM32(esp + 0xD8) = 4;
    MEM32(esp + 0xE0) = edi;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xB0) = 0x303;
    MEM16(esp + 0x6A) = 0x12C;
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    MEM32(esp + 0xE8) = edi;
    MEM8(esp + 0xAF) = LO8(ecx);
    MEMF(esp + 0x70) = xmm1; /* movss */
    edx = ebx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0x190);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x597978);
    eax = esp + 0x90;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = edx;
    MEM8(esp + 0xD4) = 0xFF;
    MEM8(esp + 0xD5) = 0xFF;
    MEM8(esp + 0xD6) = 0xFF;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEM32(esp + 0xC0) = 0xC0C00008u;
    MEM8(esp + 0xC8) = 0xFF;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000BE3AD: ;
    esp = esp + 0x28;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(eax, edi)) goto loc_000BE428; /* je: equal / zero */

loc_000BE3B8: ;
    xmm1 = 0.0f; /* xorps self = zero */
    edx = eax + 0x310;
    ecx = 0x64;
    esi = esp + 0x180;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(edx + 0x150); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edx + 0x150) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_000BE425; /* jb: below (unsigned <) */

loc_000BE3EC: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000BE425; /* jne: not equal / not zero */

loc_000BE3F6: ;
    edx = eax;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000BE3FD: ;
    eax = edx;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000BE425; /* jl: less (signed <) */

loc_000BE406: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_000BE41B; /* je: equal / zero */

loc_000BE413: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000BE416: ;
    esp = esp + 4;
    goto loc_000BE425;

loc_000BE41B: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000BE425: ;
    esi = MEM32(ebp + 8);

loc_000BE428: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_000BE42B: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x74); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x74) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000BDF90; /* ja: above (unsigned >) */

loc_000BE480: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000BE49C; /* jbe: below or equal (unsigned <=) */

loc_000BE493: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000BE493; /* ja: above (unsigned >) */

loc_000BE49C: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_000BE4AA; /* jbe: below or equal (unsigned <=) */

loc_000BE4A1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_000BE4A1; /* ja: above (unsigned >) */

loc_000BE4AA: ;
    MEMF(esi + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000BE4C9; /* jbe: below or equal (unsigned <=) */

loc_000BE4BA: ;
    /* nop */

loc_000BE4C0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000BE4C0; /* ja: above (unsigned >) */

loc_000BE4C9: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_000BE4D9; /* jbe: below or equal (unsigned <=) */

loc_000BE4CE: ;
    edi = edi;

loc_000BE4D0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_000BE4D0; /* ja: above (unsigned >) */

loc_000BE4D9: ;
    MEMF(esi + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */

loc_000BE4E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BE540
 * Original: 0x000BE540 - 0x000BEAFB (1467 bytes, 473 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000BE540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    SET_LO8(edx, MEM8(ebp + 0x38));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = eax;
    if (TEST_Z(esi, esi)) goto loc_000BE718; /* je: equal / zero */

loc_000BE55E: ;
    ecx = 0x40;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0x2C) - sets EFLAGS */
    edi = ebx + 0x2C;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000BE59D; /* jp: parity */

loc_000BE57B: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0x30) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000BE59D; /* jp: parity */

loc_000BE58A: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0x34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000BE672; /* jnp: not parity */

loc_000BE59D: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    MEMF(ebx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    MEMF(ebx + 0x40) = xmm0; /* movss */
    edx = MEM32(ecx);
    eax = edi;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    xmm2 = MEMF(ebx + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(ebx + 0x38); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = ebx + 4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000BEA8C; /* jnp: not parity */

loc_000BE61C: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    if (TEST_Z(ecx, ecx)) goto loc_000BE638; /* je: equal / zero */

loc_000BE626: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    goto loc_000BE642;

loc_000BE638: ;
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */

loc_000BE642: ;
    xmm1 = MEMF(ebx + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x40) = xmm1; /* movss */

loc_000BE672: ;
    SET_LO8(eax, MEM8(ebp + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BE6F3; /* je: equal / zero */

loc_000BE679: ;
    eax = MEM32(ebx + 0xE4);
    if (CMP_EQ(eax, 2)) goto loc_000BE689; /* je: equal / zero */

loc_000BE684: ;
    if (CMP_NE(eax, 3)) goto loc_000BE6F3; /* jne: not equal / not zero */

loc_000BE689: ;
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, 0x4100000);
    ecx = 0xBE9;
    eax = 0x5F32D4;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000BE6A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ebx + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = esp + 0x54;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000BE6C1: ;
    ecx = MEM32(esp + 0x138);
    eax = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_000BE6F3; /* je: equal / zero */

loc_000BE6EA: ;
    ecx = 0x40;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000BE6F3: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = xmm0 * MEMF(ebp + 0x14); /* mulss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    ecx = eax;
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BE718: ;
    SET_LO8(eax, MEM8(ebp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BEA95; /* je: equal / zero */

loc_000BE723: ;
    esi = MEM32(ebp + 0x1C);
    if (TEST_Z(esi, esi)) goto loc_000BE749; /* je: equal / zero */

loc_000BE72A: ;
    ecx = MEM32(ebp + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_000BE749; /* je: equal / zero */

loc_000BE731: ;
    edi = MEM32(esi);
    eax = ebx + 0x2C;
    MEM32(eax) = edi;
    edi = MEM32(esi + 4);
    MEM32(eax + 4) = edi;
    esi = MEM32(esi + 8);
    edi = MEM32(ebp + 8);
    MEM32(eax + 8) = esi;
    goto loc_000BE764;

loc_000BE749: ;
    edi = MEM32(ebp + 8);
    ecx = edi;
    esi = MEM32(ecx);
    eax = ebx + 0x2C;
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0xC);

loc_000BE764: ;
    esi = MEM32(ecx);
    eax = ebx + 0x38;
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(ebp + 0x3C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x780AB0) = 0x5F32D4;
    MEM32(0x6C0210) = 0xC1B;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x200000;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BE7AB; /* je: equal / zero */

loc_000BE7A3: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000BE7AB; /* je: equal / zero */

loc_000BE7A7: ;
    eax = 0; /* xor self */
    goto loc_000BE7B0;

loc_000BE7AB: ;
    eax = 1;

loc_000BE7B0: ;
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    esi = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    eax = ebx + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000BE7DE: ;
    eax = MEM32(ebx + 0xEC);
    esi = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    esp = esp + 0x30;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x780AB0) = esi;
    MEM32(0x6C0210) = ecx;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = esi;
    if (CMP_NE(eax, esi)) goto loc_000BE80F; /* jne: not equal / not zero */

loc_000BE809: ;
    MEM32(esp + 0x18) = ecx;
    goto loc_000BE82E;

loc_000BE80F: ;
    eax = eax - MEM32(0x8471B8);
    ecx = eax;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x18) = eax;
    ecx = eax;

loc_000BE82E: ;
    eax = MEM32(ebx + 0xE4);
    if (CMP_EQ(eax, esi)) goto loc_000BEA64; /* je: equal / zero */

loc_000BE83C: ;
    if (CMP_EQ(eax, 1)) goto loc_000BE985; /* je: equal / zero */

loc_000BE845: ;
    if (CMP_EQ(eax, 4)) goto loc_000BE985; /* je: equal / zero */

loc_000BE84E: ;
    if (CMP_EQ(MEM32(ebp + 0x1C), esi)) goto loc_000BE927; /* je: equal / zero */

loc_000BE857: ;
    if (CMP_EQ(MEM32(ebp + 0x20), esi)) goto loc_000BE927; /* je: equal / zero */

loc_000BE860: ;
    edx = edi;
    ecx = MEM32(edx);
    eax = ebx + 0x2C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    ecx = ebx + 0x38;
    PUSH32(esp, ecx);
    MEM32(eax + 8) = edx;
    eax = ebx + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_000BE883: ;
    edx = ebx + 0x38;
    esp = esp + 0xC;
    edi = ebx + 4;
    ecx = 0; /* xor self */
    esi = edx;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000BE895: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BEA8C; /* je: equal / zero */

loc_000BE89D: ;
    xmm0 = MEMF(edi); /* movss */
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, 0x4100000);
    ecx = 0xC60;
    eax = 0x5F32D4;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000BE8BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = ebx + 0xF0;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = ebx + 0x10;
    PUSH32(esp, edx);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    eax = ebx + 8;
    PUSH32(esp, eax);
    ecx = ebx + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx + 0x38;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000BE8EC: ;
    esp = esp + 0x34;
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_000BE8F6: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000BEA64; /* je: equal / zero */

loc_000BE8FE: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    edx = MEM32(ebp + 8);
    MEMF(edi) = xmm0; /* movss */
    esi = MEM32(edx);
    edi = MEM32(ebp + 8);
    eax = ebx + 0x2C;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    goto loc_000BE979;

loc_000BE927: ;
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, 0x4100000);
    ecx = 0xC7D;
    eax = 0x5F32D4;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000BE93E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = ebx + 0xF0;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = ebx + 4;
    PUSH32(esp, edx);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    ecx = ebx + 0xC;
    PUSH32(esp, ecx);
    edx = ebx + 8;
    PUSH32(esp, edx);
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx + 0x38;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000BE96F: ;
    esp = esp + 0x34;
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_000BE979: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000BEA64; /* je: equal / zero */

loc_000BE981: ;
    ecx = MEM32(esp + 0x18);

loc_000BE985: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 4); /* mulss */
    edx = ebx + 4;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0x2C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000BE9C5; /* jp: parity */

loc_000BE9A7: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0x30) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000BE9C5; /* jp: parity */

loc_000BE9B6: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0x34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000BEA18; /* jnp: not parity */

loc_000BE9C5: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    MEMF(ebx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    MEMF(ebx + 0x40) = xmm0; /* movss */
    ecx = MEM32(edi);
    MEM32(ebx + 0x2C) = ecx;
    eax = MEM32(edi + 4);
    MEM32(ebx + 0x30) = eax;
    ecx = MEM32(edi + 8);
    edi = edx;
    edx = ebx + 0x38;
    MEM32(ebx + 0x34) = ecx;
    ecx = 0; /* xor self */
    esi = edx;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000BEA10: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BEA8C; /* je: equal / zero */

loc_000BEA14: ;
    ecx = MEM32(esp + 0x18);

loc_000BEA18: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_000BEA3C; /* jne: not equal / not zero */

loc_000BEA1D: ;
    ecx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    MEM32(ebx + 0xEC) = 0;
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BEA3C: ;
    eax = MEM32(0x8471B8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x150);
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    ecx = ecx + eax;
    MEM32(ebx + 0xEC) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BEA64: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    ecx = MEM32(ebp + 0x24);
    SET_LO8(edx, MEM8(ecx));
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ecx) = LO8(edx);
    edx = MEM32(ebp + 0x10);
    MEMF(edx) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_000BEAE6; /* jne: not equal / not zero */

loc_000BEA85: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_000BEAE6; /* jne: not equal / not zero */

loc_000BEA8C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BEA95: ;
    ecx = MEM32(ebp + 0x24);
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, MEM8(ebp + 0x28));
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    eax = MEM32(ebp + 0x10);
    MEM8(ecx) = LO8(edx);
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    ecx = ebx + 0x2C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_000BEAD3; /* jne: not equal / not zero */

loc_000BEACC: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_000BEA8C; /* je: equal / zero */

loc_000BEAD3: ;
    ecx = MEM32(eax);
    ebx = ebx + 0x38;
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;

loc_000BEAE6: ;
    ecx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000BEB00
 * Original: 0x000BEB00 - 0x000BEB65 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000BEB00: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(edi + 0xF8), 0xFFFFFFFFu)) goto loc_000BEB63; /* je: equal / zero */

loc_000BEB0E: ;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    ebx = MEM32(esi + 0x40);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BEB36; /* je: equal / zero */

loc_000BEB22: ;
    eax = MEM32(edi + 0xF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000BEB33: ;
    esp = esp + 8;

loc_000BEB36: ;
    eax = MEM32(edi + 0xF8);
    if (TEST_S(eax, eax)) goto loc_000BEB4D; /* jl: less (signed <) */

loc_000BEB40: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_000BEB4D: ;
    POP32(esp, esi);
    MEM32(edi + 0xF8) = 0xFFFFFFFFu;
    MEM32(edi + 0xF8) = 0xFFFFFFFFu;
    POP32(esp, ebx);

loc_000BEB63: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BEB70
 * Original: 0x000BEB70 - 0x000BED43 (467 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BEB70: ;
    esp = esp - 0x234;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x244);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x244);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000BEBDE; /* je: equal / zero */

loc_000BEB93: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000BEBA6; /* je: equal / zero */

loc_000BEB9D: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 1)) goto loc_000BEBDE; /* je: equal / zero */

loc_000BEBA6: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_EQ(eax, 0xC5)) goto loc_000BEBDE; /* je: equal / zero */

loc_000BEBB0: ;
    if (CMP_EQ(eax, 0x138)) goto loc_000BEBDE; /* je: equal / zero */

loc_000BEBB7: ;
    PUSH32(esp, ebx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_001A88B0(); /* call 0x001A88B0 */

loc_000BEBCB: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BEC19; /* je: equal / zero */

loc_000BEBD2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x234;
    esp += 4; return; /* ret */

loc_000BEBDE: ;
    edx = ebp + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x2C) = ecx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    ecx = MEM32(edx + 8);
    xmm0 = xmm0 - MEMF(0x648E5C); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = ecx;

loc_000BEC19: ;
    eax = MEM32(esp + 0x280);
    ecx = MEM32(esp + 0x274);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); sub_000C0570(); /* call 0x000C0570 */

loc_000BEC47: ;
    esp = esp + 0x28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BEBD2; /* je: equal / zero */

loc_000BEC4E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x274);
    if (CMP_NE(edi, 0xE)) goto loc_000BEC88; /* jne: not equal / not zero */

loc_000BEC5B: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */

loc_000BEC88: ;
    esi = MEM32(esp + 0x26C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_000BEC95: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_000BED43(); return; } /* jne: not equal / not zero */

loc_000BECA0: ;
    eax = esi;
    ebx = esp + 0x54;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BECAB: ;
    ecx = esp + 0x38;
    edx = ebx;
    eax = esp + 0x20;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BECF3: ;
    xmm0 = MEMF(esp + 0x254); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    eax = ebx;
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BED41: ;
    g_seh_ebp = ebp; sub_000BED67(); return; /* tail jmp 0x000BED67 */

}

/**
 * sub_000BF3B0
 * Original: 0x000BF3B0 - 0x000BF49D (237 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BF3B0: ;
    esp = esp - 0x208;
    xmm0 = MEMF(eax); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x23C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x218);
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x238);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_000BF3F8: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_000BF49D(); return; } /* jne: not equal / not zero */

loc_000BF403: ;
    eax = edi;
    ebx = esp + 0x30;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BF40E: ;
    eax = ebx;
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x21C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BF451: ;
    xmm0 = MEMF(esp + 0x220); /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    eax = ebx;
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BF49B: ;
    g_seh_ebp = ebp; sub_000BF4BD(); return; /* tail jmp 0x000BF4BD */

}

/**
 * sub_000BF9E0
 * Original: 0x000BF9E0 - 0x000BFB4E (366 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000BF9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x298);
    ecx = MEM32(eax + 0xB0);
    eax = MEM32(esi + 0x29C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x290;
    MEM32(esp + 0x2C) = edi;
    if (CMP_NE(ecx, eax)) goto loc_000BFB45; /* jne: not equal / not zero */

loc_000BFA16: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xB0);
    if (CMP_NE(eax, MEM32(edi + 4))) goto loc_000BFB45; /* jne: not equal / not zero */

loc_000BFA27: ;
    xmm0 = MEMF(edi + 0x34); /* movss */
    /* comiss xmm0, MEMF(esi + 0x5C) - sets EFLAGS */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    if ((xmm0 <= MEMF(esi + 0x5C))) goto loc_000BFA6A; /* jbe: below or equal (unsigned <=) */

loc_000BFA3D: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_000BFA5A; /* jbe: below or equal (unsigned <=) */

loc_000BFA55: ;
    xmm0 = xmm3; /* movaps */
    goto loc_000BFA65;

loc_000BFA5A: ;
    /* comiss xmm0, MEMF(edi + 0x34) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x34))) goto loc_000BFA65; /* jbe: below or equal (unsigned <=) */

loc_000BFA60: ;
    xmm0 = MEMF(edi + 0x34); /* movss */

loc_000BFA65: ;
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_000BFA6A: ;
    xmm0 = MEMF(edi + 0x2C); /* movss */
    eax = esi + 0x78;
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x28); /* addss */
    ecx = esp + 0x10;
    MEMF(edi + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, MEM8(edi + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BFB01; /* je: equal / zero */

loc_000BFAC2: ;
    xmm0 = MEMF(edi + 0x1C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x20); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_000BFB01: ;
    edx = esp + 0x10;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_000BFB4E(); return; } /* jp: parity */

loc_000BFB45: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BFD80
 * Original: 0x000BFD80 - 0x000C00A9 (809 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000BFD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    xmm2 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = MEMF(esi + 0x2C4); /* movss */
    /* comiss xmm0, MEMF(esi + 0x5C) - sets EFLAGS */
    PUSH32(esp, edi);
    edi = esi + 0x290;
    MEM32(esp + 0x2C) = edi;
    if ((xmm0 <= MEMF(esi + 0x5C))) goto loc_000BFDE2; /* jbe: below or equal (unsigned <=) */

loc_000BFDB2: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000BFDD2; /* jbe: below or equal (unsigned <=) */

loc_000BFDCD: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000BFDDD;

loc_000BFDD2: ;
    /* comiss xmm0, MEMF(edi + 0x34) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x34))) goto loc_000BFDDD; /* jbe: below or equal (unsigned <=) */

loc_000BFDD8: ;
    xmm0 = MEMF(edi + 0x34); /* movss */

loc_000BFDDD: ;
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_000BFDE2: ;
    xmm0 = MEMF(edi + 0x2C); /* movss */
    eax = esi + 0x78;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x28); /* addss */
    eax = esp + 0x10;
    MEMF(edi + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, MEM8(edi + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000BFE79; /* je: equal / zero */

loc_000BFE3A: ;
    xmm0 = MEMF(edi + 0x1C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x20); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_000BFE79: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000BFEB7: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_000C00A9(); return; } /* jnp: not parity */

loc_000BFECE: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000BFEE7; /* jne: not equal / not zero */

loc_000BFED5: ;
    SET_LO8(ecx, MEM8(edi + 0x11));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000BFEE7; /* jne: not equal / not zero */

loc_000BFEDC: ;
    SET_LO8(ecx, MEM8(edi + 0x12));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_000C00A9(); return; } /* je: equal / zero */

loc_000BFEE7: ;
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x40));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    ebx = esi + 0x60;
    esi = esp + 0x40;
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(edi + 0x12));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    MEM32(0x780AB0) = 0x5F32D4;
    MEM32(0x6C0210) = 0x105E;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(edi + 0x11));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    eax = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000BFF51: ;
    eax = MEM32(esp + 0x144);
    esi = 0; /* xor self */
    esp = esp + 0x30;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x780AB0) = esi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = esi;
    MEM8(esp + 0xF) = 0;
    if (CMP_EQ(eax, esi)) goto loc_000C005E; /* je: equal / zero */

loc_000BFF87: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    ecx = MEM32(esp + 0x11C);
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    SET_LO8(ecx, (CMP_EQ(ecx, esi)) ? 1 : 0); /* sete */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEM8(esp + 0x1C) = LO8(ecx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    eax = esp + 0x13;
    PUSH32(esp, eax);
    MEMF(ebx + 8) = xmm1; /* movss */
    ebx = MEM32(ebp + 8);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_000C1320(); /* call 0x000C1320 */

loc_000BFFF2: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C0033; /* je: equal / zero */

loc_000BFFFD: ;
    PUSH32(esp, edi);
    eax = esp + 0x34;
    edi = ebx;
    PUSH32(esp, 0); sub_000C1500(); /* call 0x000C1500 */

loc_000C0009: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx + 0x4C);
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_000C0024; /* je: equal / zero */

loc_000C0017: ;
    if (CMP_NE(MEM32(eax + 0x2C), 1)) goto loc_000C0024; /* jne: not equal / not zero */

loc_000C001D: ;
    MEM8(eax + 0x104) = 1;

loc_000C0024: ;
    MEM32(ecx + 0x4C) = esi;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C0033: ;
    eax = MEM32(esp + 0x24);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebx + 0xAC) = 0xC0170;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C005E: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    MEMF(ebx + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C00F0
 * Original: 0x000C00F0 - 0x000C0161 (113 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C00F0(void)
{
    uint32_t ebp;
    float xmm0;

loc_000C00F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x2B8);
    PUSH32(esp, eax);
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x54;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_000C0112: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x64);
    eax = MEM32(esi + 0x60);
    xmm0 = MEMF(esi + 0x34); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, 0); sub_0010FC50(); /* call 0x0010FC50 */

loc_000C0148: ;
    ecx = MEM32(ebp + 8);
    esp = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_000C015A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0170
 * Original: 0x000C0170 - 0x000C01D1 (97 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0170: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(eax + 0x2C8); /* movss */
    xmm2 = MEMF(eax + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0x5C) = xmm2; /* movss */
    xmm1 = MEMF(eax + 0x2BC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x2B8); /* addss */
    MEMF(eax + 0x2B8) = xmm1; /* movss */
    ecx = ZX8(MEM8(eax + 0xA8));
    xmm1 = MEMF(eax + 0x2CC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx - edx;
    if (((int32_t)ecx >= 0)) { sub_000C01D1(); return; } /* jns: not sign (positive) */

loc_000C01CD: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000C01DE(); return; /* tail jmp 0x000C01DE */

}

/**
 * sub_000C0200
 * Original: 0x000C0200 - 0x000C02C5 (197 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0200: ;
    if (TEST_Z(edi, edi)) goto loc_000C0221; /* je: equal / zero */

loc_000C0204: ;
    eax = MEM32(edi + 0x238);
    if (TEST_Z(eax, eax)) goto loc_000C0221; /* je: equal / zero */

loc_000C020E: ;
    eax = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00185DB0(); /* call 0x00185DB0 */

loc_000C021E: ;
    esp = esp + 0xC;

loc_000C0221: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 0xB48;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C0299; /* jne: not equal / not zero */

loc_000C0230: ;
    if (TEST_Z(esi, esi)) goto loc_000C024D; /* je: equal / zero */

loc_000C0234: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0x42)) goto loc_000C0246; /* je: equal / zero */

loc_000C023C: ;
    if (CMP_EQ(eax, 0x28)) goto loc_000C0246; /* je: equal / zero */

loc_000C0241: ;
    if (CMP_NE(eax, 0x5B)) goto loc_000C024D; /* jne: not equal / not zero */

loc_000C0246: ;
    ebp = 0xB4C;
    goto loc_000C025F;

loc_000C024D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C0252: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x32)) goto loc_000C0299; /* jg: greater (signed >) */

loc_000C025F: ;
    if (TEST_Z(esi, esi)) goto loc_000C026B; /* je: equal / zero */

loc_000C0263: ;
    eax = MEM32(esi + 0x580);
    goto loc_000C026E;

loc_000C026B: ;
    eax = eax | 0xFFFFFFFFu;

loc_000C026E: ;
    if (TEST_Z(ebp, ebp)) goto loc_000C0299; /* je: equal / zero */

loc_000C0272: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = ebp;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000C0299: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x48);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = ebx + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019AF70(); /* call 0x0019AF70 */

loc_000C02C0: ;
    esp = esp + 0x24;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C02D0
 * Original: 0x000C02D0 - 0x000C040E (318 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C02D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C02D0: ;
    esp = esp - 8;
    if (CMP_NE(LO8(eax), 1)) goto loc_000C02FF; /* jne: not equal / not zero */

loc_000C02D7: ;
    eax = MEM32(edi + 0x290);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    if (TEST_Z(eax, eax)) goto loc_000C02F3; /* je: equal / zero */

loc_000C02E8: ;
    eax = MEM32(eax + 0x238);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    goto loc_000C02F5;

loc_000C02F3: ;
    PUSH32(esp, 1);

loc_000C02F5: ;
    eax = esi;
    PUSH32(esp, 0); sub_00185DB0(); /* call 0x00185DB0 */

loc_000C02FC: ;
    esp = esp + 0xC;

loc_000C02FF: ;
    edx = esi + 0x50;
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_000C0314; /* je: equal / zero */

loc_000C0308: ;
    ecx = MEM32(esi + 0xD8);
    if (TEST_Z(ecx, ecx)) goto loc_000C0314; /* je: equal / zero */

loc_000C0312: ;
    eax = MEM32(ecx);

loc_000C0314: ;
    eax = eax & 0x1F;
    ecx = MEM32(eax * 4 + 0x65DE60);
    if (TEST_Z(ecx, ecx)) goto loc_000C034A; /* je: equal / zero */

loc_000C0322: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 8;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000C034A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C034F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x14)) goto loc_000C0388; /* jg: greater (signed >) */

loc_000C035C: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB9C;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000C0388: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C038D: ;
    xmm1 = MEMF(0x773770); /* movss */
    xmm1 = xmm1 * MEMF(0x64AB74); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C040A; /* jbe: below or equal (unsigned <=) */

loc_000C03A2: ;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C03B0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 6) = 0;
    edx = edx + 3;
    MEM16(esp + 2) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C03E3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esi + 8;
    edx = edx + 0xA;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000C0407: ;
    esp = esp + 0x20;

loc_000C040A: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0410
 * Original: 0x000C0410 - 0x000C048B (123 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0410(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C0410: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(ebx + 0x4B0);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 0x24);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000C0439: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F3290);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000C044E: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_000C046D; /* jne: not equal / not zero */

loc_000C0455: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F3290);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000C0466: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_000C048B(); return; } /* je: equal / zero */

loc_000C046D: ;
    eax = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0); sub_003ECDF0(); /* call 0x003ECDF0 */

loc_000C0478: ;
    if (TEST_Z(eax, eax)) { sub_000C048B(); return; } /* je: equal / zero */

loc_000C047C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000C0484: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C04C0
 * Original: 0x000C04C0 - 0x000C053B (123 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C04C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C04C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(ebx + 0x4B0);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 0x24);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000C04E9: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F3284);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000C04FE: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_000C051D; /* jne: not equal / not zero */

loc_000C0505: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F3284);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000C0516: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_000C053B(); return; } /* je: equal / zero */

loc_000C051D: ;
    eax = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0); sub_003ECDF0(); /* call 0x003ECDF0 */

loc_000C0528: ;
    if (TEST_Z(eax, eax)) { sub_000C053B(); return; } /* je: equal / zero */

loc_000C052C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000C0534: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0570
 * Original: 0x000C0570 - 0x000C059E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000C0570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) { sub_000C059E(); return; } /* je: equal / zero */

loc_000C0588: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    g_seh_ebp = ebp; sub_000C0600(); return; /* tail jmp 0x000C0600 */

}

/**
 * sub_000C0850
 * Original: 0x000C0850 - 0x000C09B6 (358 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0850(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000C0850: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x74;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C09B2; /* je: equal / zero */

loc_000C0860: ;
    PUSH32(esp, esi);
    eax = edi + 0xC0;
    PUSH32(esp, eax);
    eax = ebx + 0x78;
    esi = esp + 8;
    PUSH32(esp, 0); sub_003E22C0(); /* call 0x003E22C0 */

loc_000C0874: ;
    eax = MEM32(ebx + 0x290);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x103;
    if (TEST_Z(eax, eax)) goto loc_000C0896; /* je: equal / zero */

loc_000C0886: ;
    edx = MEM32(eax + 0x238);
    if (CMP_EQ(MEM32(edx), 0)) goto loc_000C0896; /* je: equal / zero */

loc_000C0891: ;
    ecx = 0x105;

loc_000C0896: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EFC); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x14;
    esi = esp + 0x38;
    MEM32(esp + 0x4C) = 3;
    MEM32(esp + 0x58) = ecx;
    MEM8(esp + 0x6C) = 0;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000C09AE: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_000C09B2: ;
    esp = esp + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_000C09C0
 * Original: 0x000C09C0 - 0x000C0C3B (635 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C09C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C09C0: ;
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x150);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 0xC0;
    PUSH32(esp, eax);
    eax = ebp + 0x78;
    esi = esp + 0x14C;
    PUSH32(esp, 0); sub_003E22C0(); /* call 0x003E22C0 */

loc_000C09E9: ;
    esp = esp + 4;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000C09F5: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    xmm1 = MEMF(edi + 0x38); /* movss */
    xmm2 = MEMF(edi + 8); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(edi + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0xC); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(edi + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    eax = 2;
    ebx = 0; /* xor self */
    xmm0 = xmm0 - xmm1; /* subss */
    MEM8(esp + 0x84) = 1;
    MEM32(esp + 0x88) = 0x29;
    MEM32(esp + 0x94) = 3;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = 4;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = eax;
    MEMF(esp + 0x8C) = xmm5; /* movss */
    MEMF(esp + 0x90) = xmm5; /* movss */
    MEM32(esp + 0xB4) = ebx;
    MEMF(esp + 0x3C) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C0AD2: ;
    SET_LO8(ecx, MEM8(ebp + 4));
    xmm0 = xmm0 * MEMF(0x648E6C); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    MEM8(esp + 0x10) = LO8(ecx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0xDC);
    PUSH32(esp, ebx);
    MEM8(esp + 0x98) = LO8(eax);
    MEM8(esp + 0x99) = LO8(eax);
    MEM8(esp + 0x9A) = LO8(eax);
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x597978);
    eax = esp + 0x5C;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEMF(esp + 0x88) = xmm6; /* movss */
    MEM32(esp + 0x8C) = ebx;
    MEM16(esp + 0x5E) = 0x12C;
    MEM8(esp + 0xA3) = LO8(ebx);
    MEMF(esp + 0xA8) = xmm5; /* movss */
    MEM32(esp + 0xA4) = 0x303;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000C0B68: ;
    esp = esp + 0x28;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_000C0C30; /* je: equal / zero */

loc_000C0B75: ;
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C0B83: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648EB0); /* mulss */
    xmm5 = xmm5 + MEMF(0x64909C); /* addss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C0BA1: ;
    xmm0 = xmm0 * MEMF(0x64A1B8); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C0BBC: ;
    xmm0 = xmm0 * MEMF(0x59D944); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm1 = xmm1 / xmm5; /* divss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649020); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648EB8); /* mulss */
    edi = esi + 0x310;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    ecx = 8;
    esi = esp + 0x14;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000C0C30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0C40
 * Original: 0x000C0C40 - 0x000C0CA8 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0C40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C0C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(0x847278));
    if (TEST_Z(LO16(edi), LO16(edi))) goto loc_000C0C7A; /* je: equal / zero */

loc_000C0C4E: ;
    MEM32(0x7FA0B0) = MEM32(0x7FA0B0) + 1;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_000C0C61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_000C0C6F: ;
    MEM32(0x7FA0B8) = eax;
    MEM32(0x7FA0BC) = edx;

loc_000C0C7A: ;
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(esi + 0x310); /* movss */
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(esi + 0x314) - sets EFLAGS */
    MEMF(esi + 0x310) = xmm0; /* movss */
    if ((xmm0 < MEMF(esi + 0x314))) { sub_000C0CA8(); return; } /* jb: below (unsigned <) */

loc_000C0CA3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0DE0
 * Original: 0x000C0DE0 - 0x000C0F30 (336 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0DE0(void)
{
    float xmm0, xmm1, xmm2;

loc_000C0DE0: ;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = edi + 0xC0;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x84);
    eax = eax + 0x78;
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_003E22C0(); /* call 0x003E22C0 */

loc_000C0DFF: ;
    esp = esp + 4;
    eax = esi;
    ebx = esi;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000C0E0B: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x59D948); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x649430); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x18;
    esi = esp + 0x3C;
    MEM32(esp + 0x50) = 3;
    MEM32(esp + 0x5C) = 0x105;
    MEM8(esp + 0x70) = 0;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000C0F27: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0F30
 * Original: 0x000C0F30 - 0x000C116A (570 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0F30: ;
    esp = esp - 0x144;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 0xC0;
    PUSH32(esp, eax);
    eax = ebx + 0x78;
    esi = esp + 0x148;
    PUSH32(esp, 0); sub_003E22C0(); /* call 0x003E22C0 */

loc_000C0F51: ;
    esp = esp + 4;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000C0F5D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(edi + 0x38); /* movss */
    xmm2 = MEMF(edi + 8); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(edi + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0xC); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(edi + 0x40); /* movss */
    eax = 2;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    ebp = 0; /* xor self */
    xmm0 = xmm0 - xmm1; /* subss */
    MEM8(esp + 0x80) = 1;
    MEM32(esp + 0x84) = 0x29;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x9C) = ebp;
    MEM32(esp + 0xA0) = 4;
    MEM32(esp + 0xA8) = ebp;
    MEM32(esp + 0xAC) = eax;
    MEMF(esp + 0x88) = xmm5; /* movss */
    MEMF(esp + 0x8C) = xmm5; /* movss */
    MEM32(esp + 0xB0) = ebp;
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C1036: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    xmm0 = xmm0 * MEMF(0x648E6C); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    MEM8(esp + 0xC) = LO8(ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    SET_LO8(eax, 0xDC);
    PUSH32(esp, ebp);
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEM8(esp + 0x94) = LO8(eax);
    MEM8(esp + 0x95) = LO8(eax);
    MEM8(esp + 0x96) = LO8(eax);
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x597978);
    eax = esp + 0x58;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x88) = ebp;
    MEM16(esp + 0x5A) = 0x12C;
    MEM8(esp + 0x9F) = 0xFF;
    MEMF(esp + 0xA4) = xmm5; /* movss */
    MEM32(esp + 0xA0) = 0x303;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000C10D2: ;
    esp = esp + 0x28;
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_000C1160; /* je: equal / zero */

loc_000C10DF: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C10ED: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C110B: ;
    xmm0 = xmm0 * MEMF(0x64A1B8); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    edi = esi + 0x310;
    ecx = 8;
    esi = esp + 0x10;
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000C1160: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_000C1170
 * Original: 0x000C1170 - 0x000C1318 (424 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1170: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C117D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x84A144);
    xmm1 = MEMF(0x648E5C); /* movss */
    edx++;
    if (TEST_Z(eax, eax)) goto loc_000C119F; /* je: equal / zero */

loc_000C1197: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000C119F: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 >= xmm7)) goto loc_000C11CB; /* jae: above or equal (unsigned >=) */

loc_000C11B8: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */

loc_000C11CB: ;
    if (CMP_LE(edx & edx, 0)) goto loc_000C1313; /* jle: less or equal (signed <=) */

loc_000C11D3: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    edi = ebp + 8;
    esi = edx;
    goto loc_000C11F3;

loc_000C11EB: ;
    xmm7 = MEMF(0x648D14); /* movss */

loc_000C11F3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C11F8: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C120C: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x648F10); /* mulss */
    xmm6 = xmm6 + MEMF(0x648E14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C1224: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = esp + 0x1C;
    xmm0 = xmm0 - xmm7; /* subss */
    ebx = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000C124D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C1252: ;
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x2C);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 4));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C12BC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C12CC: ;
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C12EC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ebx;
    ecx = edi;
    edx = edx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000C1306: ;
    esp = esp + 0x48;
    esi--;
    if ((esi != 0)) goto loc_000C11EB; /* jne: not equal / not zero */

loc_000C1310: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000C1313: ;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000C1320
 * Original: 0x000C1320 - 0x000C14B7 (407 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    (void)0; /* cmp MEM32(ebp + 0xE4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(MEM32(ebp + 0xE4), 1)) goto loc_000C136E; /* jle: less or equal (signed <=) */

loc_000C1333: ;
    esi = MEM32(ebp);
    if (CMP_EQ(MEM32(esi + 0x68), 0x18A)) goto loc_000C136E; /* je: equal / zero */

loc_000C133F: ;
    edi = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = ebp + 0x20;
    ebx = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000C0200(); /* call 0x000C0200 */

loc_000C1357: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C149B; /* jne: not equal / not zero */

loc_000C1362: ;
    edx = MEM32(esp + 0x18);
    MEM8(edx) = 1;
    goto loc_000C149B;

loc_000C136E: ;
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_000C1387; /* je: equal / zero */

loc_000C1375: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000C137F: ;
    esp = esp + 0x10;
    goto loc_000C149B;

loc_000C1387: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C138C: ;
    eax = MEM32(ebp + 0xF0);
    eax = eax & 0x1F;
    eax = eax + 0xFFFFFFFAu;
    (void)0; /* cmp eax, 0x14 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_A(eax, 0x14)) goto loc_000C1473; /* ja: above (unsigned >) */

loc_000C13A7: ;
    eax = ZX8(MEM8(eax + 0xC14E0));
    { uint32_t _jt = MEM32(eax * 4 + 0xC14B8); /* switch: 10 entries, 10 targets */
    if (_jt == 0x000C13B5u) goto loc_000C13B5;
    if (_jt == 0x000C13D2u) goto loc_000C13D2;
    if (_jt == 0x000C13EFu) goto loc_000C13EF;
    if (_jt == 0x000C141Du) goto loc_000C141D;
    if (_jt == 0x000C1431u) goto loc_000C1431;
    if (_jt == 0x000C1440u) goto loc_000C1440;
    if (_jt == 0x000C1456u) goto loc_000C1456;
    if (_jt == 0x000C1473u) goto loc_000C1473;
    if (_jt == 0x000C1487u) goto loc_000C1487;
    if (_jt == 0x000C149Bu) goto loc_000C149B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C13B5: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C13C2: ;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_000C09C0(); /* call 0x000C09C0 */

loc_000C13CA: ;
    esp = esp + 4;
    goto loc_000C149B;

loc_000C13D2: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C13DF: ;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_000C09C0(); /* call 0x000C09C0 */

loc_000C13E7: ;
    esp = esp + 4;
    goto loc_000C149B;

loc_000C13EF: ;
    xmm1 = MEMF(0x648E14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C1403; /* jbe: below or equal (unsigned <=) */

loc_000C13FC: ;
    ecx = MEM32(esp + 0x18);
    MEM8(ecx) = 1;

loc_000C1403: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C1410: ;
    PUSH32(esp, ebx);
    edi = ebp;
    PUSH32(esp, 0); sub_000C0DE0(); /* call 0x000C0DE0 */

loc_000C1418: ;
    esp = esp + 4;
    goto loc_000C149B;

loc_000C141D: ;
    xmm1 = MEMF(0x648E14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C1431; /* jbe: below or equal (unsigned <=) */

loc_000C142A: ;
    edx = MEM32(esp + 0x18);
    MEM8(edx) = 1;

loc_000C1431: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C143E: ;
    goto loc_000C149B;

loc_000C1440: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C144D: ;
    eax = ebp;
    PUSH32(esp, 0); sub_000C0F30(); /* call 0x000C0F30 */

loc_000C1454: ;
    goto loc_000C149B;

loc_000C1456: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C1463: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000C1170(); /* call 0x000C1170 */

loc_000C146A: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 8;

loc_000C1473: ;
    xmm1 = MEMF(0x648EB0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C1487; /* jbe: below or equal (unsigned <=) */

loc_000C1480: ;
    eax = MEM32(esp + 0x18);
    MEM8(eax) = 1;

loc_000C1487: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    edi = ebx;
    esi = ebp;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C1494: ;
    edi = ebp;
    PUSH32(esp, 0); sub_000C0850(); /* call 0x000C0850 */

loc_000C149B: ;
    ebp = MEM32(ebp + 0xE4);
    if (CMP_EQ(ebp, 1)) goto loc_000C14B2; /* je: equal / zero */

loc_000C14A6: ;
    if (CMP_EQ(ebp, 4)) goto loc_000C14B2; /* je: equal / zero */

loc_000C14AB: ;
    ecx = MEM32(esp + 0x18);
    MEM8(ecx) = 0;

loc_000C14B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1500
 * Original: 0x000C1500 - 0x000C155E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1500: ;
    ecx = MEM32(eax + 0xE4);
    esp = esp - 0x24;
    (void)0; /* cmp ecx, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    if (CMP_NE(ecx, 3)) { sub_000C155E(); return; } /* jne: not equal / not zero */

loc_000C1514: ;
    ecx = eax + 0x14;
    eax = eax + 8;
    edx = esp + 0x10;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x10;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000C155C: ;
    g_seh_ebp = ebp; sub_000C157E(); return; /* tail jmp 0x000C157E */

}

/**
 * sub_000C16D0
 * Original: 0x000C16D0 - 0x000C2027 (2391 bytes, 589 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C16D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C16D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM16(esi + 0x10C) = MEM16(esi + 0x10C) - LO16(ebx);
    SET_LO16(eax, MEM16(esi + 0x10C));
    xmm6 = xmm5; /* movaps */
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm6; /* movss */
    if (((int32_t)MEM16(esi + 0x10C) < 0)) goto loc_000C1FE3; /* js: sign (negative) */

loc_000C1708: ;
    ecx = MEM32(esi + 0x15C);
    if (TEST_Z(ecx, ecx)) goto loc_000C1730; /* je: equal / zero */

loc_000C1712: ;
    SET_LO16(eax, MEM16(esi + 0x160));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000C1730; /* je: equal / zero */

loc_000C171F: ;
    edx = MEM32(ecx + 0xA4);
    eax = SX16(LO16(eax));
    if (CMP_NE(edx, eax)) goto loc_000C1FE3; /* jne: not equal / not zero */

loc_000C1730: ;
    eax = MEM32(esi + 0x14C);
    if (TEST_Z(eax, eax)) goto loc_000C1CC6; /* je: equal / zero */

loc_000C173E: ;
    SET_LO8(eax, MEM8(esi + 0x163));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C17FD; /* jne: not equal / not zero */

loc_000C174C: ;
    if (TEST_Z(ecx, ecx)) goto loc_000C1805; /* je: equal / zero */

loc_000C1754: ;
    eax = MEM32(ecx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000C1805; /* je: equal / zero */

loc_000C1762: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x158))) goto loc_000C1805; /* jne: not equal / not zero */

loc_000C1774: ;
    if (CMP_EQ(MEM8(ecx + 0x236), 0xFF)) goto loc_000C1805; /* je: equal / zero */

loc_000C1781: ;
    edi = ZX8(MEM8(esi + 0x162));
    xmm0 = MEMF(esi + 0x164); /* movss */
    edi = edi << 6;
    edi = edi + eax;
    eax = esi + 0x118;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x16C);
    ecx = esi + 0x114;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x168);
    edx = esi + 0x110;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_000C17BF: ;
    xmm0 = MEMF(esi + 0x170); /* movss */
    edx = esi + 0x134;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x178);
    eax = esi + 0x130;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x174);
    ecx = esi + 0x12C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_000C17F1: ;
    esp = esp + 0x28;
    MEM8(esi + 0x163) = 3;
    goto loc_000C1805;

loc_000C17FD: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi + 0x163) = LO8(eax);

loc_000C1805: ;
    MEM16(esi + 0x154) = MEM16(esi + 0x154) - LO16(ebx);
    SET_LO16(eax, MEM16(esi + 0x154));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x152);
    edx = SX16(LO16(eax));
    ecx = (uint32_t)(-(int32_t)ecx);
    if (CMP_GE(edx, ecx)) goto loc_000C1CC6; /* jge: greater or equal (signed >=) */

loc_000C1827: ;
    SET_LO16(eax, MEM16(esi + 0x150));
    MEM16(esi + 0x154) = LO16(eax);
    eax = MEM32(esi + 0x15C);
    if (TEST_Z(eax, eax)) goto loc_000C1FD7; /* je: equal / zero */

loc_000C1843: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000C1FD7; /* je: equal / zero */

loc_000C1851: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x158))) goto loc_000C1FD7; /* jne: not equal / not zero */

loc_000C1863: ;
    edx = ZX8(MEM8(esi + 0x162));
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000C1874: ;
    xmm0 = MEMF(esi + 0x164); /* movss */
    eax = esi + 0x118;
    PUSH32(esp, eax);
    ecx = esi + 0x114;
    PUSH32(esp, ecx);
    edx = esi + 0x110;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esi + 0x16C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x168);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x68;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_000C18B4: ;
    ecx = MEM32(esi + 0x15C);
    ebx = ZX8(MEM8(ecx + 0x236));
    edx = MEM32(esi + 0x178);
    xmm0 = MEMF(esi + 0x170); /* movss */
    edi = esi + 0x134;
    PUSH32(esp, edi);
    eax = esi + 0x130;
    PUSH32(esp, eax);
    ecx = esi + 0x12C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esi + 0x174);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x7C;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x50) = ecx;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_000C1901: ;
    SET_LO8(eax, MEM8(esi + 0x17D));
    esp = esp + 0x2C;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 1);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x17D) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C1929; /* jne: not equal / not zero */

loc_000C1918: ;
    MEM8(esi + 0x17D) = 2;
    MEM32(esp + 0x18) = 1;
    goto loc_000C1931;

loc_000C1929: ;
    MEM32(esp + 0x18) = 0;

loc_000C1931: ;
    xmm0 = MEMF(esi + 0x124); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C1947; /* jp: parity */

loc_000C1942: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C1947: ;
    if (CMP_EQ(ebx, 0xFF)) goto loc_000C1B5E; /* je: equal / zero */

loc_000C1953: ;
    ecx = MEM32(esi + 0x15C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    edx = MEM32(ecx + 0x568);
    xmm0 = MEMF(edx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x6491F8); /* mulss */
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x170));
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x40) = LO16(eax);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x18) = edx;
    edx = ZX16(LO16(edx));
    edx = edx - eax;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x771280);
    if (CMP_NE(eax, edx)) goto loc_000C1AD0; /* jne: not equal / not zero */

loc_000C199C: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x771282);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(ecx + 0x3BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C1AD0; /* jp: parity */

loc_000C19B8: ;
    eax = MEM32(ebx + 0x771284);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    edx = MEM32(ebx + 0x771288);
    eax = MEM32(esp + 0x28);
    MEM32(eax) = edx;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebx + 0x77128C);
    MEM32(edi) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C1B30; /* jne: not equal / not zero */

loc_000C19E5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C19EA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(MEM8(ebx + 0x771283));
    if (CMP_AE(edx, eax)) goto loc_000C1B30; /* jae: above or equal (unsigned >=) */

loc_000C1A01: ;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    edx = MEM32(esp + 0x20);
    xmm0 = xmm0 - MEMF(edx); /* subss */
    xmm2 = MEMF(edi); /* movss */
    edx = MEM32(esp + 0x14);
    xmm2 = xmm2 - MEMF(edx); /* subss */
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    xmm3 = MEMF(ebx + 0x771298); /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    edi = ebx + 0x771290;
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, ecx);
    esi = esp + 0x48;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_002B0E00(); /* call 0x002B0E00 */

loc_000C1A81: ;
    eax = esi;
    edi = esi;
    PUSH32(esp, eax);
    esi = esp + 0x38;
    PUSH32(esp, 0); sub_002B0C10(); /* call 0x002B0C10 */

loc_000C1A8F: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C1A97: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C1AAA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx;
    ecx = ecx + 0x2B;
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_000C1ABE: ;
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    edi = MEM32(esp + 0x3C);
    esi = MEM32(ebp + 8);
    goto loc_000C1B30;

loc_000C1AD0: ;
    edx = MEM32(ecx + 0x3BC);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, 0x44FA0000);
    ecx = ecx - edx;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_002EB710(); /* call 0x002EB710 */

loc_000C1AEF: ;
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x30);
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    ecx = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    esp = esp + 8;
    MEMF(edi) = xmm0; /* movss */

loc_000C1B30: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C1B35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    MEMF(esi + 0x13C) = xmm0; /* movss */
    goto loc_000C1C1A;

loc_000C1B5E: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000C1C1A; /* je: equal / zero */

loc_000C1B6A: ;
    edx = MEM32(esp + 0x24);
    xmm0 = MEMF(edx); /* movss */
    eax = MEM32(esp + 0x20);
    xmm0 = xmm0 - MEMF(eax); /* subss */
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(edx); /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    eax = esp + 0x44;
    ebx = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000C1BB3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000C1BE4: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(esp + 0x5C); /* movss */
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_000C1C1A; /* je: equal / zero */

loc_000C1BF4: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(edi) = xmm0; /* movss */

loc_000C1C1A: ;
    edx = MEM32(esp + 0x14);
    xmm3 = MEMF(edi); /* movss */
    xmm3 = xmm3 - MEMF(edx); /* subss */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    xmm4 = MEMF(eax); /* movss */
    xmm4 = xmm4 - MEMF(ecx); /* subss */
    esp = esp - 8;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000C1C57: ;
    MEMF(esp + 0x20) = xmm4; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x30);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x120) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000C1C9D: ;
    ebx = MEM32(0x7FA20C);
    esp = esp + 8;
    MEMF(esi + 0x11C) = xmm0; /* movss */
    MEMF(esi + 0x140) = xmm5; /* movss */
    MEMF(esi + 0x144) = xmm5; /* movss */
    MEMF(esi + 0x148) = xmm5; /* movss */

loc_000C1CC6: ;
    if (CMP_LE(MEM16(esi + 0x154), 0)) goto loc_000C2020; /* jle: less or equal (signed <=) */

loc_000C1CD4: ;
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    /* FPU: fcos  */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(0x648D34); /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x120)); /* fld float */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* FPU: fsin  */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D14); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm0 = xmm2; /* movaps */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x120)); /* fld float */
    /* FPU: fcos  */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = MEMF(esi + 0x128); /* movss */
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    if (1 /* jnp after test - parity */) goto loc_000C1DB7; /* jnp: not parity */

loc_000C1D71: ;
    fp_push(MEMF(esi + 0x134)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x130)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = MEMF(esp + 0x2C); /* movss */

loc_000C1DB7: ;
    SET_LO8(eax, MEM8(esi + 0x159));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C1DD5; /* jne: not equal / not zero */

loc_000C1DC1: ;
    xmm3 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */

loc_000C1DD5: ;
    xmm3 = MEMF(esi + 0x124); /* movss */
    xmm4 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm4; /* mulss */
    /* comiss xmm3, xmm6 - sets EFLAGS */
    MEMF(esi + 0x140) = xmm0; /* movss */
    MEMF(esi + 0x144) = xmm1; /* movss */
    MEMF(esi + 0x148) = xmm2; /* movss */
    if ((xmm3 <= xmm6)) goto loc_000C1E29; /* jbe: below or equal (unsigned <=) */

loc_000C1E02: ;
    xmm4 = MEMF(esi + 0x128); /* movss */
    /* ucomiss xmm4, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C1E29; /* jnp: not parity */

loc_000C1E13: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    MEMF(esi + 0x13C) = xmm6; /* movss */
    goto loc_000C1E35;

loc_000C1E29: ;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */

loc_000C1E35: ;
    (void)0; /* cmp MEM8(esi + 0x17E), 1 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    if (CMP_NE(MEM8(esi + 0x17E), 1)) goto loc_000C1ECA; /* jne: not equal / not zero */

loc_000C1E50: ;
    eax = MEM32(esi + 0x15C);
    if (TEST_Z(eax, eax)) goto loc_000C1E60; /* je: equal / zero */

loc_000C1E5A: ;
    ecx = ZX16(MEM16(eax + 0x60));
    goto loc_000C1E62;

loc_000C1E60: ;
    ecx = 0; /* xor self */

loc_000C1E62: ;
    xmm0 = MEMF(esi + 0x118); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    edx = MEM32(esi + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x118);
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x110); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x110);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002BA800(); /* call 0x002BA800 */

loc_000C1EBE: ;
    xmm6 = MEMF(esp + 0x50); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    esp = esp + 0x24;

loc_000C1ECA: ;
    xmm0 = MEMF(esi + 0x110); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x114) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x118); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x128); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C2020; /* jnp: not parity */

loc_000C1F33: ;
    fp_push(MEMF(esi + 0x134)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x130)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esi + 0x128)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000C1FA4; /* ja: above (unsigned >) */

loc_000C1F79: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 > xmm6)) goto loc_000C1FA4; /* ja: above (unsigned >) */

loc_000C1F84: ;
    xmm1 = MEMF(esi + 0x13C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C2020; /* jbe: below or equal (unsigned <=) */

loc_000C1F95: ;
    MEMF(esi + 0x13C) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C1FA4: ;
    SET_LO8(eax, MEM8(esi + 0x17C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C1FD7; /* je: equal / zero */

loc_000C1FAE: ;
    edx = MEM32(esi + 0x134);
    ecx = MEM32(esi + 0x130);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x12C);
    PUSH32(esp, ecx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C3560(); /* call 0x000C3560 */

loc_000C1FD4: ;
    esp = esp + 0x18;

loc_000C1FD7: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000C1FDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C1FE3: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C2020; /* jne: not equal / not zero */

loc_000C1FEC: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C1FF3: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C2020; /* jl: less (signed <) */

loc_000C1FFA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000C2014; /* je: equal / zero */

loc_000C2007: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C200A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C2014: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000C2020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C2030
 * Original: 0x000C2030 - 0x000C23D5 (933 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2030: ;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8472C4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    if (CMP_LE(MEM16(edi + 0x154), 0)) goto loc_000C23C2; /* jle: less or equal (signed <=) */

loc_000C204E: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x74);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm7 = MEMF(eax + ecx + 0x334); /* movss */
    xmm5 = MEMF(edi + 0x118); /* movss */
    xmm3 = MEMF(edi + 0x110); /* movss */
    xmm4 = MEMF(edi + 0x114); /* movss */
    xmm0 = MEMF(edi + 0x13C); /* movss */
    xmm1 = MEMF(edi + 0x13C); /* movss */
    xmm2 = MEMF(edi + 0x148); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x140); /* mulss */
    xmm1 = xmm1 * MEMF(edi + 0x144); /* mulss */
    xmm2 = xmm2 * MEMF(edi + 0x13C); /* mulss */
    xmm6 = MEMF(eax + ecx + 0x330); /* movss */
    eax = eax + ecx;
    MEMF(esp + 0x1C) = xmm7; /* movss */
    xmm7 = MEMF(eax + 0x338); /* movss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    xmm7 = MEMF(edi + 0x138); /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    ebx = 0; /* xor self */
    ecx = esp + 0x28;
    edx = esp + 0x40;
    goto loc_000C2120;

    /* nop */

loc_000C2120: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x20); /* subss */
    xmm3 = MEMF(edi + 0x148); /* movss */
    xmm4 = MEMF(edi + 0x144); /* movss */
    xmm0 = MEMF(ecx + -4); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = MEMF(edi + 0x140); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = MEMF(edi + 0x148); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm2 = MEMF(edi + 0x144); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 0x140); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x10) = xmm4; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = xmm3; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C23CE; /* jnp: not parity */

loc_000C21DC: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x70); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + -4); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(edx + -4) = xmm2; /* movss */
    xmm2 = MEMF(ecx); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(edx) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(edx + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + -4); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(edx + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(edx + 8) = xmm2; /* movss */
    MEMF(edx + 0x10) = xmm1; /* movss */
    ebx++;
    ecx = ecx + 0xC;
    edx = edx + 0x18;
    if (CMP_L(ebx, 2)) goto loc_000C2120; /* jl: less (signed <) */

loc_000C2258: ;
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ecx = esp + 0x3C;
    eax = edx + edi + 0x39;
    MEM32(esp + 0x70) = 4;
    PUSH32(esp, ebp);

loc_000C2273: ;
    edx = eax + -13;
    ebp = 3;
    goto loc_000C2280;

    /* nop */

loc_000C2280: ;
    ebx = (int32_t)MEMF(ecx); /* cvttss2si */
    ebx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    ebx = 0xFF;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    ecx = ecx + 4;
    edx = edx + 4;
    ebp--;
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    if ((ebp != 0)) goto loc_000C2280; /* jne: not equal / not zero */

loc_000C22A8: ;
    edx = MEM32(esp + 0x74);
    eax = eax + 0x1C;
    edx--;
    MEM32(esp + 0x74) = edx;
    if ((edx != 0)) goto loc_000C2273; /* jne: not equal / not zero */

loc_000C22B6: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x156);
    ecx = MEM32(eax * 4 + 0x594960);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebp = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_000C22DC; /* jne: not equal / not zero */

loc_000C22D0: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000C22D9: ;
    esp = esp + 8;

loc_000C22DC: ;
    ebp = MEM32(ebp);
    if (CMP_EQ(MEM32(esi + 0x3838), ebp)) goto loc_000C22F2; /* je: equal / zero */

loc_000C22E7: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C22EC: ;
    MEM32(esi + 0x3838) = ebp;

loc_000C22F2: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    ecx = eax + edi + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000C230E: ;
    edx = MEM32(esi + 0x24);
    edx = edx + 3;
    (void)0; /* cmp edx, 0x3FF - flags set for next jcc */
    ebx = 0x1FF;
    if (CMP_GE(edx, 0x3FF)) goto loc_000C2326; /* jge: greater or equal (signed >=) */

loc_000C2321: ;
    if (CMP_L(MEM32(esi + 0x20), ebx)) goto loc_000C232B; /* jl: less (signed <) */

loc_000C2326: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C232B: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x30));
    MEM16(ecx + eax * 2) = LO16(edx);
    ebp = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebp++;
    MEM32(esi + 0x24) = ebp;
    SET_LO16(ecx, LO16(ecx) + 1);
    eax = ebp;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 3);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    POP32(esp, ebp);
    if (CMP_GE(eax, 0x3FF)) goto loc_000C237E; /* jge: greater or equal (signed >=) */

loc_000C2379: ;
    if (CMP_L(MEM32(esi + 0x20), ebx)) goto loc_000C2383; /* jl: less (signed <) */

loc_000C237E: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C2383: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x30));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 3);
    MEM16(edx + eax * 2) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM16(edx + eax * 2) = LO16(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_000C23C2: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C23C7: ;
    MEM8(edi + 0x159) = 1;

loc_000C23CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C23E0
 * Original: 0x000C23E0 - 0x000C2426 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C23E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C23E0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x2D)) goto loc_000C2425; /* jne: not equal / not zero */

loc_000C23E7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x15C);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_000C2410; /* jne: not equal / not zero */

loc_000C23FC: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x15C) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x158) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C2410: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_000C2424; /* jne: not equal / not zero */

loc_000C2415: ;
    MEM32(eax + 0x15C) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 0x158) = LO8(edx);

loc_000C2424: ;
    POP32(esp, esi);

loc_000C2425: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2430
 * Original: 0x000C2430 - 0x000C244D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2430(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C2430: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2E);
    eax = 0x150;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C2441: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) { sub_000C244D(); return; } /* jne: not equal / not zero */

loc_000C244A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000C2560
 * Original: 0x000C2560 - 0x000C2614 (180 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2560: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    edx = ebp;
    edx = edx - esi;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ebx;
    edx = edx - ecx;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = edi;
    edx = edx - eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    edx = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    xmm1 = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    PUSH32(esp, 0xFFFFFF9Du);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x3C);
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000C2430(); /* call 0x000C2430 */

loc_000C2602: ;
    esp = esp + 0x38;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_000C2614(); return; } /* je: equal / zero */

loc_000C260B: ;
    eax = ZX8(MEM8(eax + 0x64));
    eax++;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2620
 * Original: 0x000C2620 - 0x000C2658 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2620(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C2620: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0xFFFFFF9Du);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C2430(); /* call 0x000C2430 */

loc_000C264B: ;
    esp = esp + 0x38;
    if (TEST_Z(eax, eax)) { sub_000C2658(); return; } /* je: equal / zero */

loc_000C2652: ;
    eax = ZX8(MEM8(eax + 0x64));
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2660
 * Original: 0x000C2660 - 0x000C2699 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2660(void)
{

loc_000C2660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x1A);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000C2430(); /* call 0x000C2430 */

loc_000C2693: ;
    esp = esp + 0x38;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C26A0
 * Original: 0x000C26A0 - 0x000C26AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C26A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C26A0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x68), 0x58 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(eax + 0x68), 0x58)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000C26B0
 * Original: 0x000C26B0 - 0x000C27DD (301 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C26B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C26B0: ;
    esp = esp - 0x10;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000C2430(); /* call 0x000C2430 */

loc_000C2707: ;
    esi = eax;
    esp = esp + 0x38;
    if (TEST_Z(esi, esi)) { sub_000C27DD(); return; } /* je: equal / zero */

loc_000C2714: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    (void)0; /* cmp MEM32(esi + 0x68), 0xFFFFFFFFu - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(esi + 0x68), 0xFFFFFFFFu)) goto loc_000C27D3; /* jne: not equal / not zero */

loc_000C2742: ;
    PUSH32(esp, edi);
    edi = MEM32(0x847024);
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 0x2E04);
    if (TEST_Z(eax, eax)) goto loc_000C2768; /* je: equal / zero */

loc_000C275C: ;
    edx = MEM32(eax + 0xC);
    if (CMP_EQ(edx, eax)) goto loc_000C2768; /* je: equal / zero */

loc_000C2763: ;
    if (CMP_GE(MEM32(edx), 0)) goto loc_000C27D2; /* jge: greater or equal (signed >=) */

loc_000C2768: ;
    eax = MEM32(ecx + 0x2E08);
    if (TEST_Z(eax, eax)) goto loc_000C277E; /* je: equal / zero */

loc_000C2772: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, eax)) goto loc_000C277E; /* je: equal / zero */

loc_000C2779: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_000C27D2; /* jge: greater or equal (signed >=) */

loc_000C277E: ;
    if (TEST_Z(MEM8(esi + 0x64), 1)) goto loc_000C278D; /* je: equal / zero */

loc_000C2784: ;
    MEM32(esi + 0x6C) = 0xB82;
    goto loc_000C2794;

loc_000C278D: ;
    MEM32(esi + 0x6C) = 0xB81;

loc_000C2794: ;
    ecx = MEM32(esi + 0x6C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edi + 0x40);
    if (TEST_NZ(ecx, ecx)) goto loc_000C27AF; /* jne: not equal / not zero */

loc_000C279E: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x68) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_000C27AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000C27CF: ;
    MEM32(esi + 0x68) = eax;

loc_000C27D2: ;
    POP32(esp, edi);

loc_000C27D3: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax++;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C27F0
 * Original: 0x000C27F0 - 0x000C2894 (164 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C27F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C27F0: ;
    eax = ZX8(MEM8(esi + 0x64));
    if (CMP_NE(MEM32(eax * 4 + 0x7712F0), esi)) goto loc_000C2808; /* jne: not equal / not zero */

loc_000C27FD: ;
    MEM32(eax * 4 + 0x7712F0) = 0;

loc_000C2808: ;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x68;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000C2832; /* je: equal / zero */

loc_000C2814: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000C2825: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(esi + 0x6C) = 0xFFFFFFFFu;

loc_000C2832: ;
    eax = MEM32(esi + 0x80);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = esi + 0x80;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000C2868; /* je: equal / zero */

loc_000C2843: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000C2858: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(esi + 0x84) = 0xFFFFFFFFu;

loc_000C2868: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C2893; /* jne: not equal / not zero */

loc_000C2872: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C2879: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C2893; /* jl: less (signed <) */

loc_000C2880: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000C2894(); return; } /* je: equal / zero */

loc_000C288D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C2890: ;
    esp = esp + 4;

loc_000C2893: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C28A0
 * Original: 0x000C28A0 - 0x000C28E9 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C28A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C28A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x771598);
    PUSH32(esp, edi);
    edi = eax;
    edi--;
    if (TEST_Z(esi, esi)) goto loc_000C28E6; /* je: equal / zero */

loc_000C28AF: ;
    SET_LO8(eax, MEM8(0x771758));

loc_000C28B4: ;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(esi + 0xC);
    ecx = SX8(LO8(eax));
    MEM32(ecx * 4 + 0x771740) = edx;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_000C28CE; /* je: equal / zero */

loc_000C28C6: ;
    ecx = ZX8(MEM8(esi + 0x64));
    if (CMP_NE(ecx, edi)) goto loc_000C28D8; /* jne: not equal / not zero */

loc_000C28CE: ;
    PUSH32(esp, 0); sub_000C27F0(); /* call 0x000C27F0 */

loc_000C28D3: ;
    SET_LO8(eax, MEM8(0x771758));

loc_000C28D8: ;
    edx = SX8(LO8(eax));
    esi = MEM32(edx * 4 + 0x771740);
    if (TEST_NZ(esi, esi)) goto loc_000C28B4; /* jne: not equal / not zero */

loc_000C28E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C28F0
 * Original: 0x000C28F0 - 0x000C2926 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C28F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C28F0: ;
    eax--;
    if (((int32_t)eax < 0)) goto loc_000C2925; /* js: sign (negative) */

loc_000C28F3: ;
    if (CMP_GE(eax, 8)) goto loc_000C2925; /* jge: greater or equal (signed >=) */

loc_000C28F8: ;
    eax = MEM32(eax * 4 + 0x7712F0);
    if (TEST_Z(eax, eax)) goto loc_000C2925; /* je: equal / zero */

loc_000C2903: ;
    if (CMP_NE(MEM32(eax), 0x2E)) goto loc_000C2925; /* jne: not equal / not zero */

loc_000C2908: ;
    ecx = (int32_t)MEMF(eax + 0x2C); /* cvttss2si */
    MEM32(edx) = ecx;
    ecx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 8);
    eax = (int32_t)MEMF(eax + 0x34); /* cvttss2si */
    MEM32(ecx) = eax;

loc_000C2925: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2930
 * Original: 0x000C2930 - 0x000C29AE (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2930: ;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x80);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x144));
    (void)0; /* cmp LO16(eax), 0xFF9D - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO16(eax), 0xFF9D)) goto loc_000C2965; /* je: equal / zero */

loc_000C294C: ;
    eax = eax - MEM32(0x7FA20C);
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(ebx + 0x144) = LO16(eax);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_000C2965; /* jge: greater or equal (signed >=) */

loc_000C295E: ;
    esi = ebx;
    PUSH32(esp, 0); sub_000C27F0(); /* call 0x000C27F0 */

loc_000C2965: ;
    edi = ebx + 0x2C;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebx + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    if (TEST_Z(eax, eax)) { sub_000C29AE(); return; } /* je: equal / zero */

loc_000C2985: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_NZ(ecx, ecx)) goto loc_000C299A; /* jne: not equal / not zero */

loc_000C298C: ;
    esi = ebx;
    PUSH32(esp, 0); sub_000C27F0(); /* call 0x000C27F0 */

loc_000C2993: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

loc_000C299A: ;
    ecx = MEM32(eax + 0x78);
    MEM32(ebx + 0x38) = ecx;
    edx = MEM32(eax + 0x7C);
    MEM32(ebx + 0x3C) = edx;
    eax = MEM32(eax + 0x80);
    g_seh_ebp = ebp; sub_000C29C6(); return; /* tail jmp 0x000C29C6 */

}

/**
 * sub_000C2D80
 * Original: 0x000C2D80 - 0x000C2D9E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2D80(void)
{

loc_000C2D80: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3E6978D6);
    PUSH32(esp, 0x3F441894);
    PUSH32(esp, 0x3EB43959);
    PUSH32(esp, 0); sub_000BD480(); /* call 0x000BD480 */

loc_000C2D99: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2DA0
 * Original: 0x000C2DA0 - 0x000C2DD8 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2DA0(void)
{
    float xmm0, xmm1;

loc_000C2DA0: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x58); /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2DE0
 * Original: 0x000C2DE0 - 0x000C3390 (1456 bytes, 307 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2DE0: ;
    esp = esp - 0xBC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xD0);
    eax = MEM32(ebp + 0xF0);
    eax = eax & 0x1F;
    (void)0; /* cmp eax, 0x16 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x16)) goto loc_000C3373; /* ja: above (unsigned >) */

loc_000C2E0A: ;
    eax = ZX8(MEM8(eax + 0xC33A4));
    { uint32_t _jt = MEM32(eax * 4 + 0xC3390); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000C2E18u) goto loc_000C2E18;
    if (_jt == 0x000C2F64u) goto loc_000C2F64;
    if (_jt == 0x000C335Eu) goto loc_000C335E;
    if (_jt == 0x000C3373u) goto loc_000C3373;
    if (_jt == 0x000C3385u) goto loc_000C3385;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C2E18: ;
    edi = MEM32(esp + 0xD0);
    SET_LO8(eax, 1);
    esi = ebp;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C2E28: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm2 = MEMF(ebp + 0xC4); /* movss */
    xmm1 = MEMF(ebp + 0xC0); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x58BC24); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x6496F4); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648E74); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0xC8); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x64AC98); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648F5C); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x28;
    esi = esp + 0x4C;
    MEM32(esp + 0x60) = 7;
    MEM32(esp + 0x6C) = 0x105;
    MEM8(esp + 0x80) = 0;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000C2F56: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xBC;
    esp += 4; return; /* ret */

loc_000C2F64: ;
    edi = MEM32(esp + 0xD0);
    SET_LO8(eax, 0); /* xor self */
    esi = ebp;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C2F74: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x70) = 0x303;
    MEM32(esp + 0x74) = 0x253;
    MEM16(esp + 0x48) = 0x1E;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C2F9F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x5A02CC);
    ecx = MEM32(0x5A02D0);
    MEM32(esp + 0x98) = eax;
    eax = MEM32(0x5A02D4);
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x9C) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x48));
    esi = SX16(LO16(ecx));
    xmm0 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM16(esp + 0x78) = LO16(ecx);
    MEM16(esp + 0x7C) = LO16(ecx);
    MEM8(esp + 0xBC) = 5;
    MEM8(esp + 0xBF) = LO8(ebx);
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0xC0) = 0xFF;
    MEM32(esp + 0x58) = 3;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = 4;
    SET_LO8(edx, LO8(edx) + 0x64);
    eax = ZX8(LO8(edx));
    MEM8(esp + 0x57) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x7A) = LO16(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0xBD) = LO8(eax);
    MEM8(esp + 0xBE) = LO8(eax);
    eax = 2;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C3074: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C3080: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x5A02CC);
    edx = MEM32(0x5A02D0);
    eax = eax & 1;
    esi = esi | eax;
    eax = MEM32(0x5A02D4);
    esi = esi << 6;
    esi = esi | 0x844E07;
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0x3C) = eax;
    esi = esp + 0x14;
    eax = ebp;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM8(esp + 0x2F) = LO8(ebx);
    MEM8(esp + 0x30) = LO8(ebx);
    MEM8(esp + 0x31) = LO8(ebx);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00067D30(); /* call 0x00067D30 */

loc_000C30EF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C3166; /* je: equal / zero */

loc_000C30F3: ;
    eax = MEM32(esp + 0x14);
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_000C3114; /* jge: greater or equal (signed >=) */

loc_000C310E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C3114: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = eax;
    edx = edx >> 8;
    edx = edx & 0xFF;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_000C313B; /* jge: greater or equal (signed >=) */

loc_000C3135: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C313B: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 0xFF;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_000C315C; /* jge: greater or equal (signed >=) */

loc_000C3156: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C315C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C3166: ;
    eax = esp + 0xA4;
    ecx = eax;
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0x14) = ecx;
    ebp = 4;
    /* nop */

loc_000C3180: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C3185: ;
    xmm7 = MEMF(0x648E14); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C31A1: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 + MEMF(0x648F58); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C31B5: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = esp + 0xA4;
    xmm0 = xmm0 - xmm7; /* subss */
    ebx = eax;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm6; /* movss */
    MEMF(esp + 0xAC) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000C31EA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C31EF: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00143DC0(); /* call 0x00143DC0 */

loc_000C323D: ;
    eax = ZX8(MEM8(esp + 0x58));
    MEM32(esp + 0x14) = eax;
    esp = esp + 4;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C3256: ;
    ecx = ZX8(MEM8(esp + 0x55));
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 0x54) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C3270: ;
    edx = ZX8(MEM8(esp + 0x56));
    MEM32(esp + 0x10) = edx;
    MEM8(esp + 0x55) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C328A: ;
    MEM8(esp + 0x56) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C3293: ;
    xmm0 = xmm0 * MEMF(0x5A0060); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EB8); /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C32BA: ;
    xmm0 = xmm0 * MEMF(0x64A808); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C32DC: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C32F6: ;
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F58); /* addss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x24) = 0;
    if (1 /* jnp after test - parity */) goto loc_000C331F; /* jnp: not parity */

loc_000C331A: ;
    MEM8(esp + 0x24) = 2;

loc_000C331F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    eax = esp + 0x54;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000C3334: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000C334C; /* je: equal / zero */

loc_000C333B: ;
    edi = eax + 0x170;
    ecx = 7;
    esi = esp + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000C334C: ;
    ebp--;
    if ((ebp != 0)) goto loc_000C3180; /* jne: not equal / not zero */

loc_000C3353: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xBC;
    esp += 4; return; /* ret */

loc_000C335E: ;
    SET_LO8(eax, 0); /* xor self */
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C3369: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000C1170(); /* call 0x000C1170 */

loc_000C3370: ;
    esp = esp + 8;

loc_000C3373: ;
    SET_LO8(eax, 0); /* xor self */
    esi = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_000C02D0(); /* call 0x000C02D0 */

loc_000C337E: ;
    edi = ebp;
    PUSH32(esp, 0); sub_000C0850(); /* call 0x000C0850 */

loc_000C3385: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xBC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C33C0
 * Original: 0x000C33C0 - 0x000C34BA (250 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C33C0(void)
{
    float xmm0, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C33C0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8470DC);
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x34); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000C33E3: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm4 = MEMF(0x648E18); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000C342B: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x328); /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fcos  */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C3462: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    ecx = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = (int32_t)MEMF(esi + 0x334); /* cvttss2si */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = eax;
    eax = (int32_t)MEMF(esi + 0x338); /* cvttss2si */
    edi = edi + eax;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ebx = ebx + ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C3493: ;
    /* fstp st(0) */
    edx = (int32_t)MEMF(esi + 0x330); /* cvttss2si */
    MEM16(0x771314) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x771312) = LO16(ebx);
    eax = eax + edx;
    MEM16(0x771310) = LO16(eax);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C34C0
 * Original: 0x000C34C0 - 0x000C3557 (151 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C34C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C34C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(0x771314);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(0x771310);
    if (CMP_LE(eax & eax, 0)) goto loc_000C3550; /* jle: less or equal (signed <=) */

loc_000C34E1: ;
    MEM32(esp + 0x18) = eax;

loc_000C34E5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C34EA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F4;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + edi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C34FB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F4;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, ecx);
    eax = esp + 0x3C;
    edx = edx + ebx;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000C3542: ;
    eax = MEM32(esp + 0x50);
    esp = esp + 0x38;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_000C34E5; /* jne: not equal / not zero */

loc_000C3550: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C3560
 * Original: 0x000C3560 - 0x000C380C (684 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C3560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, 0x8000 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x78;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(esi, 0x8000)) goto loc_000C3597; /* je: equal / zero */

loc_000C3589: ;
    esi = esi ^ 0x8000;
    MEM32(esp + 0x10) = 0x8000;

loc_000C3597: ;
    esi = esi + esi * 2;
    esi = esi << 2;
    eax = MEM32(esi + 0x58F75C);
    if (TEST_Z(eax, eax)) goto loc_000C3672; /* je: equal / zero */

loc_000C35AB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C35B0: ;
    ecx = ZX8(MEM8(esi + 0x58F763));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(MEM8(esi + 0x58F762));
    ecx = MEM32(ebp + 0x14);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    eax = edx + eax + 1;
    if (CMP_EQ(ecx, 1)) goto loc_000C35D5; /* je: equal / zero */

loc_000C35CD: ;
    MEM32(esp + 0xC) = 0x1E;

loc_000C35D5: ;
    edx = MEM32(esi + 0x58F75C);
    (void)0; /* cmp edx, 0x13 - flags set for next jcc */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ecx * 4 + 0x58F8A8); /* mulss */
    PUSH32(esp, 0xFF);
    edi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0);
    if (CMP_NE(edx, 0x13)) goto loc_000C361E; /* jne: not equal / not zero */

loc_000C35F8: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x55);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebx = 0xF;
    edi = 0x13;
    ecx = 0; /* xor self */
    edx = 0x1E;
    goto loc_000C366A;

loc_000C361E: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000C364A; /* je: equal / zero */

loc_000C3625: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xB5AD);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000EA6B0(); /* call 0x000EA6B0 */

loc_000C3645: ;
    esp = esp + 0x20;
    goto loc_000C3672;

loc_000C364A: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = edx;
    edx = MEM32(esp + 0x30);
    ebx = 0; /* xor self */
    ecx = 0xB5AD;

loc_000C366A: ;
    PUSH32(esp, 0); sub_000EA510(); /* call 0x000EA510 */

loc_000C366F: ;
    esp = esp + 0x24;

loc_000C3672: ;
    SET_LO8(eax, MEM8(esi + 0x58F761));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(ebp + 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C36A6; /* je: equal / zero */

loc_000C367F: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = ZX8(LO8(eax));
    eax = eax | edx;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_000C3AE0(); /* call 0x000C3AE0 */

loc_000C36A3: ;
    esp = esp + 0x14;

loc_000C36A6: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000C3715; /* je: equal / zero */

loc_000C36AD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C36B2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(MEM8(esi + 0x58F760));
    if (CMP_AE(edx, eax)) goto loc_000C3715; /* jae: above or equal (unsigned >=) */

loc_000C36C5: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    PUSH32(esp, 0xFF);
    eax = 0; /* xor self */
    edi = esp + 0x18;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_000C36FE: ;
    esp = esp + 4;
    if (CMP_EQ(ebx, 0xFF)) goto loc_000C3727; /* je: equal / zero */

loc_000C3709: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    MEM8(ebx + 0x771283) = 0x64;
    goto loc_000C3727;

loc_000C3715: ;
    if (CMP_EQ(ebx, 0xFF)) goto loc_000C3727; /* je: equal / zero */

loc_000C371D: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    MEM8(ebx + 0x771283) = 0;

loc_000C3727: ;
    if (CMP_EQ(MEM16(esi + 0x58F758), 0)) goto loc_000C3805; /* je: equal / zero */

loc_000C3735: ;
    edx = (int32_t)MEMF(ebp + 0xC); /* cvttss2si */
    eax = 0; /* xor self */
    ecx = 0x47;
    edi = esp + 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = (int32_t)MEMF(ebp + 0x10); /* cvttss2si */
    ecx = (int32_t)MEMF(ebp + 8); /* cvttss2si */
    MEM16(esp + 0x110) = LO16(eax);
    eax = MEM32(ebp + 0x14);
    MEM16(esp + 0x10E) = LO16(edx);
    SET_LO16(edx, MEM16(eax * 4 + 0x58F89C));
    SET_LO16(eax, MEM16(eax * 4 + 0x58F89E));
    PUSH32(esp, 0xB4);
    MEM16(esp + 0x110) = LO16(ecx);
    SET_LO8(ecx, MEM8(esi + 0x58F758));
    MEM16(esp + 0x10A) = LO16(eax);
    eax = 1;
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0xB4);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    esi = esp + 0x2C;
    MEM8(esp + 0x140) = 0xD;
    MEM8(esp + 0x138) = LO8(ecx);
    MEM16(esp + 0x110) = LO16(edx);
    MEM16(esp + 0x124) = 0x2A00;
    MEM16(esp + 0x11E) = LO16(eax);
    MEM16(esp + 0x120) = LO16(eax);
    MEM8(esp + 0x142) = 0xFF;
    PUSH32(esp, 0); sub_000DA2D0(); /* call 0x000DA2D0 */

loc_000C37E3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x11);
    eax = 0x148;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C37F4: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000C3805; /* je: equal / zero */

loc_000C37FB: ;
    edi = eax + 0x2C;
    ecx = 0x47;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000C3805: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C3810
 * Original: 0x000C3810 - 0x000C39DA (458 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C3810: ;
    esp = esp - 0x24;
    eax = MEM32(0x8471B8);
    ecx = esi;
    ecx = ecx - eax;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x76FD10);
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp) = 5;
    if (CMP_GE(eax, ecx)) goto loc_000C39D6; /* jge: greater or equal (signed >=) */

loc_000C3842: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_L(eax, ebx)) goto loc_000C39D5; /* jl: less (signed <) */

loc_000C384D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 0x20;

loc_000C3852: ;
    edi = ZX16(MEM16(esi + 0xA0));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C385E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    edx = edx << 1;
    edx = edx - edi;
    edx = edx + eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_000C387D; /* jge: greater or equal (signed >=) */

loc_000C3877: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C387D: ;
    edi = ZX16(MEM16(esi + 0xA0));
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C388D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = edx << 1;
    edx = edx - edi;
    edx = edx + ecx;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_000C38AC; /* jge: greater or equal (signed >=) */

loc_000C38A6: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C38AC: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    edx = eax + edi;
    /* fld st(1) */
    eax = eax - edi;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(0x76FC50) = ebx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x76FC58) = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x76FC3C) = xmm0; /* movss */
    eax = MEM32(esi + 0x140);
    MEM32(0x812A18) = eax;
    edi = 1;
    MEM32(0x819B24) = edi;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ebp;
    MEM32(0x84B568) = edi;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    MEM32(0x780AB0) = 0x5F34C4;
    MEM32(0x6C0210) = 0x175;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_000C3979: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_000C39A9; /* je: equal / zero */

loc_000C3980: ;
    ecx = MEM32(0x76FC4C);
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x76FC44);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000C3560(); /* call 0x000C3560 */

loc_000C39A0: ;
    esp = esp + 0x18;
    MEM32(esp + 0xC) = ebx;
    goto loc_000C39AD;

loc_000C39A9: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;

loc_000C39AD: ;
    (void)0; /* cmp MEM32(esp + 0xC), ebx - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_NE(MEM32(esp + 0xC), ebx)) goto loc_000C3852; /* jne: not equal / not zero */

loc_000C39D3: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000C39D5: ;
    POP32(esp, ebx);

loc_000C39D6: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C39E0
 * Original: 0x000C39E0 - 0x000C3A2F (79 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C39E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C39E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10C);
    if (CMP_GE(esi, 9)) { sub_000C3A2F(); return; } /* jge: greater or equal (signed >=) */

loc_000C39F7: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5A);
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x112);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E90); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(ecx + 0x120) = LO16(eax);
    g_seh_ebp = ebp; sub_000C3AA2(); return; /* tail jmp 0x000C3AA2 */

}

/**
 * sub_000C3AE0
 * Original: 0x000C3AE0 - 0x000C3C06 (294 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C3AE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    xmm0 = MEMF(0x64ADF0); /* movss */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 1;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x28) = eax;
    eax = 0; /* xor self */
    ecx = 0xE;
    edi = esp + 0x58;
    esi = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 0x14);
    (void)0; /* test edi, 0x8000 - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x38) = esi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_Z(edi, 0x8000)) goto loc_000C3B3C; /* je: equal / zero */

loc_000C3B2E: ;
    edi = edi ^ 0x8000;
    esi = 1;
    MEM32(ebp + 0x14) = edi;

loc_000C3B3C: ;
    if (TEST_Z(edx, edx)) { sub_000C3C06(); return; } /* je: equal / zero */

loc_000C3B44: ;
    (void)0; /* cmp ebx, 0xFF - flags set for next jcc */
    xmm1 = MEMF(edx + 0x7C); /* movss */
    xmm2 = MEMF(edx + 0x80); /* movss */
    xmm3 = MEMF(edx + 0x84); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    if (CMP_EQ(ebx, 0xFF)) { sub_000C3C06(); return; } /* je: equal / zero */

loc_000C3B77: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E40)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_000C3C06(); return; } /* jbe: below or equal (unsigned <=) */

loc_000C3B89: ;
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_0029C3E0(); /* call 0x0029C3E0 */

loc_000C3BA5: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000C3BD5: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEMF(eax + 0x771290) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(eax + 0x771294) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(eax + 0x771298) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000C3C11(); return; /* tail jmp 0x000C3C11 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C40F0
 * Original: 0x000C40F0 - 0x000C4141 (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C40F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm4, xmm5, xmm7;

loc_000C40F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xD8;
    xmm7 = MEMF(ebp + 0x18); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648E3C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x35;
    edi = esp + 8;
    /* ucomiss xmm7, xmm5 - sets EFLAGS */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_000C4141(); return; } /* jnp: not parity */

loc_000C4127: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000C4131: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    g_seh_ebp = ebp; sub_000C4144(); return; /* tail jmp 0x000C4144 */

}

/**
 * sub_000C4370
 * Original: 0x000C4370 - 0x000C43CA (90 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4370(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C4370: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    esp = esp - 0xC;
    /* comiss xmm0, MEMF(0x648D74) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D74))) { sub_000C43CA(); return; } /* jbe: below or equal (unsigned <=) */

loc_000C439D: ;
    ecx = MEM32(eax + 0x94);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx & 0xFFFFFF90u;
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEM32(eax + 0x94) = ecx;
    eax = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4570
 * Original: 0x000C4570 - 0x000C4659 (233 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4570(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C4570: ;
    if (CMP_NE(MEM32(0x8472A8), 1)) goto loc_000C4658; /* jne: not equal / not zero */

loc_000C457D: ;
    edx = MEM32(0x77131C);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    edx = edx + edi;
    (void)0; /* cmp edx, 0x82 - flags set for next jcc */
    MEM32(0x77131C) = edx;
    if (CMP_LE(edx, 0x82)) goto loc_000C45AF; /* jle: less or equal (signed <=) */

loc_000C459A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C459F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(0x77131C) = edx;

loc_000C45AF: ;
    (void)0; /* cmp edx, 0x1E - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x771318);
    if (CMP_LE(edx, 0x1E)) goto loc_000C45C9; /* jle: less or equal (signed <=) */

loc_000C45BC: ;
    if (CMP_GE(esi, MEM32(0x771320))) goto loc_000C45E3; /* jge: greater or equal (signed >=) */

loc_000C45C4: ;
    esi = esi + edi * 2;
    goto loc_000C45DD;

loc_000C45C9: ;
    if (CMP_LE(esi, edi)) goto loc_000C45D1; /* jle: less or equal (signed <=) */

loc_000C45CD: ;
    esi = esi - edi;
    goto loc_000C45DD;

loc_000C45D1: ;
    MEM32(0x8472A8) = 0;
    esi = 0; /* xor self */

loc_000C45DD: ;
    MEM32(0x771318) = esi;

loc_000C45E3: ;
    ecx = esi + 0xA;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    edi = edx;
    edi = edi >> 0x1F;
    edi = edi + edx;
    ebx = esi + 1;
    PUSH32(esp, 0); sub_000C33C0(); /* call 0x000C33C0 */

loc_000C45FF: ;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, 0); sub_000C34C0(); /* call 0x000C34C0 */

loc_000C4617: ;
    if (CMP_LE(edi & edi, 0)) goto loc_000C4655; /* jle: less or equal (signed <=) */

loc_000C461B: ;
    goto loc_000C4620;

    /* nop */

loc_000C4620: ;
    if (CMP_GE(ebx, 0xA)) goto loc_000C4636; /* jge: greater or equal (signed >=) */

loc_000C4625: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C462A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - ebx;
    if ((edx != 0)) goto loc_000C464F; /* jne: not equal / not zero */

loc_000C4636: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C463B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C4640: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C4645: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C464A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C464F: ;
    ebx = ebx - 0xA;
    edi--;
    if ((edi != 0)) goto loc_000C4620; /* jne: not equal / not zero */

loc_000C4655: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);

loc_000C4658: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4660
 * Original: 0x000C4660 - 0x000C4739 (217 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4660(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C4660: ;
    ecx = ZX8(MEM8(ebx + 8));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, esi);
    eax = eax + MEM32(0x8470DC);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_000C4739(); return; } /* je: equal / zero */

loc_000C4681: ;
    edx = MEM32(eax + 0x568);
    if (TEST_Z(edx, edx)) { sub_000C4739(); return; } /* je: equal / zero */

loc_000C468F: ;
    eax = ecx + ecx * 2;
    SET_LO8(ecx, MEM8(eax * 4 + 0x771390));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000C4739(); return; } /* jne: not equal / not zero */

loc_000C46A1: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    eax = eax + 0x9C;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C46B6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_000C4739(); return; } /* je: equal / zero */

loc_000C46BD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x14;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(edx, MEM16(eax + 0x32));
    SET_LO8(ecx, 1);
    MEM16(eax + 0x30) = LO16(edx);
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEM8(eax + 0x94) = LO8(ecx);
    MEM8(eax + 0x95) = LO8(ecx);
    MEM8(eax + 0x96) = LO8(ecx);
    MEM8(eax + 0x97) = LO8(ecx);
    MEM8(eax + 0x98) = LO8(ecx);
    MEM8(eax + 0x99) = LO8(ecx);
    edx = ZX8(MEM8(ebx + 8));
    edx = edx + edx * 2;
    POP32(esp, edi);
    MEM8(edx * 4 + 0x771390) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4740
 * Original: 0x000C4740 - 0x000C4BD9 (1177 bytes, 334 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4740: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_000C475F; /* je: equal / zero */

loc_000C474E: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x32) = MEM16(esi + 0x32) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x32), 0)) goto loc_000C4778; /* jl: less (signed <) */

loc_000C475F: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000C477C; /* je: equal / zero */

loc_000C4766: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x58F8D8), _icall_esp); /* indirect call */
    }

loc_000C4771: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C477C; /* jne: not equal / not zero */

loc_000C4778: ;
    MEM8(esi + 0x2C) = MEM8(esi + 0x2C) | 2;

loc_000C477C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x94;
    edx = edi;
    SET_LO16(eax, MEM16(edx));
    SET_LO8(ebx, MEM8(edx + 2));
    ebp = esi + 0x97;
    ecx = ebp;
    SET_LO16(edx, MEM16(ecx));
    MEM16(esp + 0x10) = LO16(eax);
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esp + 0x1E) = LO8(eax);
    (void)0; /* test MEM8(esi + 0x2C), 4 - flags set for next jcc */
    MEM16(esp + 0x1C) = LO16(edx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x2C), 4)) goto loc_000C47D6; /* je: equal / zero */

loc_000C47BD: ;
    SET_LO8(eax, MEM8(esi + 0x2E));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000C47D6; /* je: equal / zero */

loc_000C47C4: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x58F8E0), _icall_esp); /* indirect call */
    }

loc_000C47CF: ;
    esp = esp + 4;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C47D6: ;
    xmm0 = MEMF(esi + 0x50); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm4 = MEMF(0x648D88); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    xmm0 = MEMF(0x648D30); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C4872; /* jnp: not parity */

loc_000C47FF: ;
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x7C); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C481B; /* jbe: below or equal (unsigned <=) */

loc_000C4812: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000C4812; /* ja: above (unsigned >) */

loc_000C481B: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000C4829; /* jbe: below or equal (unsigned <=) */

loc_000C4820: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_000C4820; /* ja: above (unsigned >) */

loc_000C4829: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esi + 0x7C) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000C4837; /* jbe: below or equal (unsigned <=) */

loc_000C4833: ;
    SET_LO8(eax, 1);
    goto loc_000C4839;

loc_000C4837: ;
    SET_LO8(eax, 0); /* xor self */

loc_000C4839: ;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM8(edi) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_000C4851; /* je: equal / zero */

loc_000C4841: ;
    if (CMP_EQ(LO8(eax), MEM8(esp + 0x10))) goto loc_000C4851; /* je: equal / zero */

loc_000C4847: ;
    MEMF(esi + 0x50) = xmm2; /* movss */
    MEMF(esi + 0x7C) = xmm2; /* movss */

loc_000C4851: ;
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    eax = ZX8(MEM8(esi + 0x34));
    /* FPU: fsin  */
    eax = eax + eax * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax * 8 + 0x771330) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C4872: ;
    xmm1 = MEMF(esi + 0x54); /* movss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C48FF; /* jnp: not parity */

loc_000C4880: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x80); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C489A; /* jbe: below or equal (unsigned <=) */

loc_000C4891: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000C4891; /* ja: above (unsigned >) */

loc_000C489A: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000C48A9; /* jbe: below or equal (unsigned <=) */

loc_000C489F: ;
    /* nop */

loc_000C48A0: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_000C48A0; /* ja: above (unsigned >) */

loc_000C48A9: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esi + 0x80) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000C48BA; /* jbe: below or equal (unsigned <=) */

loc_000C48B6: ;
    SET_LO8(eax, 1);
    goto loc_000C48BC;

loc_000C48BA: ;
    SET_LO8(eax, 0); /* xor self */

loc_000C48BC: ;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM8(esi + 0x95) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_000C48DB; /* je: equal / zero */

loc_000C48C8: ;
    if (CMP_EQ(LO8(eax), MEM8(esp + 0x11))) goto loc_000C48DB; /* je: equal / zero */

loc_000C48CE: ;
    MEMF(esi + 0x54) = xmm2; /* movss */
    MEMF(esi + 0x80) = xmm2; /* movss */

loc_000C48DB: ;
    fp_push(MEMF(esi + 0x80)); /* fld float */
    eax = ZX8(MEM8(esi + 0x34));
    /* FPU: fsin  */
    eax = eax + eax * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax * 8 + 0x771334) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C48FF: ;
    xmm1 = MEMF(esi + 0x58); /* movss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C498D; /* jnp: not parity */

loc_000C4911: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x84); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C492B; /* jbe: below or equal (unsigned <=) */

loc_000C4922: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000C4922; /* ja: above (unsigned >) */

loc_000C492B: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000C4939; /* jbe: below or equal (unsigned <=) */

loc_000C4930: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_000C4930; /* ja: above (unsigned >) */

loc_000C4939: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esi + 0x84) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000C494A; /* jbe: below or equal (unsigned <=) */

loc_000C4946: ;
    SET_LO8(eax, 1);
    goto loc_000C494C;

loc_000C494A: ;
    SET_LO8(eax, 0); /* xor self */

loc_000C494C: ;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM8(esi + 0x96) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_000C4969; /* je: equal / zero */

loc_000C4958: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_000C4969; /* je: equal / zero */

loc_000C495C: ;
    MEMF(esi + 0x58) = xmm2; /* movss */
    MEMF(esi + 0x84) = xmm2; /* movss */

loc_000C4969: ;
    fp_push(MEMF(esi + 0x84)); /* fld float */
    eax = ZX8(MEM8(esi + 0x34));
    /* FPU: fsin  */
    eax = eax + eax * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax * 8 + 0x771338) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C498D: ;
    xmm1 = MEMF(esi + 0x5C); /* movss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C4A1C; /* jnp: not parity */

loc_000C499F: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x88); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C49B9; /* jbe: below or equal (unsigned <=) */

loc_000C49B0: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000C49B0; /* ja: above (unsigned >) */

loc_000C49B9: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000C49C9; /* jbe: below or equal (unsigned <=) */

loc_000C49BE: ;
    edi = edi;

loc_000C49C0: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_000C49C0; /* ja: above (unsigned >) */

loc_000C49C9: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esi + 0x88) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000C49DA; /* jbe: below or equal (unsigned <=) */

loc_000C49D6: ;
    SET_LO8(eax, 1);
    goto loc_000C49DC;

loc_000C49DA: ;
    SET_LO8(eax, 0); /* xor self */

loc_000C49DC: ;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM8(ebp) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_000C49F8; /* je: equal / zero */

loc_000C49E5: ;
    if (CMP_EQ(LO8(eax), MEM8(esp + 0x1C))) goto loc_000C49F8; /* je: equal / zero */

loc_000C49EB: ;
    MEMF(esi + 0x5C) = xmm2; /* movss */
    MEMF(esi + 0x88) = xmm2; /* movss */

loc_000C49F8: ;
    fp_push(MEMF(esi + 0x88)); /* fld float */
    eax = ZX8(MEM8(esi + 0x34));
    /* FPU: fsin  */
    eax = eax + eax * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax * 8 + 0x77133C) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C4A1C: ;
    xmm1 = MEMF(esi + 0x60); /* movss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    POP32(esp, edi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (1 /* jnp after test - parity */) goto loc_000C4AAF; /* jnp: not parity */

loc_000C4A31: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x8C); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C4A4B; /* jbe: below or equal (unsigned <=) */

loc_000C4A42: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000C4A42; /* ja: above (unsigned >) */

loc_000C4A4B: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000C4A59; /* jbe: below or equal (unsigned <=) */

loc_000C4A50: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_000C4A50; /* ja: above (unsigned >) */

loc_000C4A59: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esi + 0x8C) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000C4A6A; /* jbe: below or equal (unsigned <=) */

loc_000C4A66: ;
    SET_LO8(eax, 1);
    goto loc_000C4A6C;

loc_000C4A6A: ;
    SET_LO8(eax, 0); /* xor self */

loc_000C4A6C: ;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM8(esi + 0x98) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_000C4A8B; /* je: equal / zero */

loc_000C4A78: ;
    if (CMP_EQ(LO8(eax), MEM8(esp + 0x11))) goto loc_000C4A8B; /* je: equal / zero */

loc_000C4A7E: ;
    MEMF(esi + 0x60) = xmm2; /* movss */
    MEMF(esi + 0x8C) = xmm2; /* movss */

loc_000C4A8B: ;
    fp_push(MEMF(esi + 0x8C)); /* fld float */
    eax = ZX8(MEM8(esi + 0x34));
    /* FPU: fsin  */
    eax = eax + eax * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax * 8 + 0x771340) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C4AAF: ;
    xmm1 = MEMF(esi + 0x64); /* movss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C4B3F; /* jnp: not parity */

loc_000C4AC1: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x90); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000C4ADB; /* jbe: below or equal (unsigned <=) */

loc_000C4AD2: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000C4AD2; /* ja: above (unsigned >) */

loc_000C4ADB: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000C4AE9; /* jbe: below or equal (unsigned <=) */

loc_000C4AE0: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_000C4AE0; /* ja: above (unsigned >) */

loc_000C4AE9: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esi + 0x90) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000C4AFA; /* jbe: below or equal (unsigned <=) */

loc_000C4AF6: ;
    SET_LO8(eax, 1);
    goto loc_000C4AFC;

loc_000C4AFA: ;
    SET_LO8(eax, 0); /* xor self */

loc_000C4AFC: ;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM8(esi + 0x99) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_000C4B1B; /* je: equal / zero */

loc_000C4B08: ;
    if (CMP_EQ(LO8(eax), MEM8(esp + 0x12))) goto loc_000C4B1B; /* je: equal / zero */

loc_000C4B0E: ;
    MEMF(esi + 0x64) = xmm2; /* movss */
    MEMF(esi + 0x90) = xmm2; /* movss */

loc_000C4B1B: ;
    fp_push(MEMF(esi + 0x90)); /* fld float */
    eax = ZX8(MEM8(esi + 0x34));
    /* FPU: fsin  */
    eax = eax + eax * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax * 8 + 0x771344) = (float)fp_top(); fp_popp(); /* fstp */

loc_000C4B3F: ;
    xmm0 = MEMF(esi + 0x50); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C4BD4; /* jp: parity */

loc_000C4B51: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C4BD4; /* jp: parity */

loc_000C4B63: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C4BD4; /* jp: parity */

loc_000C4B71: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C4BD4; /* jp: parity */

loc_000C4B7F: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C4BD4; /* jp: parity */

loc_000C4B8D: ;
    xmm0 = MEMF(esi + 0x64); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000C4BD4; /* jp: parity */

loc_000C4B9B: ;
    eax = ZX8(MEM8(esi + 0x34));
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edx * 4 + 0x771390) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C4BD4; /* jne: not equal / not zero */

loc_000C4BB3: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C4BBA: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C4BD4; /* jl: less (signed <) */

loc_000C4BC1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000C4BD9(); return; } /* je: equal / zero */

loc_000C4BCE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C4BD1: ;
    esp = esp + 4;

loc_000C4BD4: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C4C10
 * Original: 0x000C4C10 - 0x000C5399 (1929 bytes, 323 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4C10: ;
    edx = ZX8(LO8(edx));
    esp = esp - 0x40;
    if (CMP_A(edx, 8)) goto loc_000C5393; /* ja: above (unsigned >) */

loc_000C4C1F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0xC539C); /* switch: 9 entries, 8 targets */
    if (_jt == 0x000C4C26u) goto loc_000C4C26;
    if (_jt == 0x000C4D04u) goto loc_000C4D04;
    if (_jt == 0x000C4DE2u) goto loc_000C4DE2;
    if (_jt == 0x000C4EA3u) goto loc_000C4EA3;
    if (_jt == 0x000C4F81u) goto loc_000C4F81;
    if (_jt == 0x000C506Fu) goto loc_000C506F;
    if (_jt == 0x000C5164u) goto loc_000C5164;
    if (_jt == 0x000C5281u) goto loc_000C5281;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C4C26: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649278); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649D44); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649D40); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649D3C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649D38); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649D34); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649D30); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649D2C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649D28); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    goto loc_000C5052;

loc_000C4D04: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649D24); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649D20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649D1C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649D18); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649D14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649450); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649D10); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649D0C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649D08); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x649D04); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6496BC); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    goto loc_000C5052;

loc_000C4DE2: ;
    xmm0 = MEMF(0x64908C); /* movss */
    xmm1 = MEMF(0x649D00); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x649C4C); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649260); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649CFC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x649CF8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649CF4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649CF0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    goto loc_000C5052;

loc_000C4EA3: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649CEC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649CE8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649CE4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649CE0); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649CDC); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649CD8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649CD4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649CD0); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649CCC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x649B0C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    goto loc_000C5052;

loc_000C4F81: ;
    xmm1 = MEMF(0x649CC8); /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x649CC4); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x649CC0); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x649CBC); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649CB8); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64912C); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649CB4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649CB0); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x649CAC); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649CA8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */

loc_000C5052: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    ecx = esp + 0xC;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C54C0(); /* call 0x000C54C0 */

loc_000C5068: ;
    esp = esp + 0xC;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_000C506F: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x649D04); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649CA4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649CA0); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649C9C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649C98); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649C94); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649C90); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649C8C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649C88); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649C84); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0xC;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C54C0(); /* call 0x000C54C0 */

loc_000C515D: ;
    esp = esp + 0xC;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_000C5164: ;
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649C4C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649C80); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649C7C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649C78); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649C74); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649C70); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649C6C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649C68); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649C64); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649C60); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    PUSH32(esp, 0x18);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x6495E4); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    ecx = esp + 0xC;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C54C0(); /* call 0x000C54C0 */

loc_000C524A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000C5395; /* je: equal / zero */

loc_000C5255: ;
    edx = MEM32(esi);
    ecx = eax + 0x13C;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x14) = edx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_000C5281: ;
    xmm1 = MEMF(0x649C4C); /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(0x649C80); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x649C7C); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x649C78); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x649C74); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649C70); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649C6C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649C68); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x649C64); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649C60); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, 0x18);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648F78); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    ecx = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C54C0(); /* call 0x000C54C0 */

loc_000C5360: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000C5395; /* je: equal / zero */

loc_000C5367: ;
    edx = MEM32(esi);
    ecx = eax + 0x13C;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x14) = edx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_000C5393: ;
    eax = 0; /* xor self */

loc_000C5395: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000C53E0
 * Original: 0x000C53E0 - 0x000C53F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C53E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C53E0: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x5C;
    if (TEST_NZ(eax, eax)) { sub_000C53F1(); return; } /* jne: not equal / not zero */

loc_000C53ED: ;
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_000C54C0
 * Original: 0x000C54C0 - 0x000C57E3 (803 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C54C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000C54C0: ;
    xmm0 = MEMF(ecx + 0x30); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp - 0xF0;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C57DA; /* jnp: not parity */

loc_000C54DB: ;
    xmm0 = MEMF(ecx + 0x38); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C57DA; /* jnp: not parity */

loc_000C54ED: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(ecx + 0x3C); /* movss */
    MEMF(esp + 0xEC) = xmm3; /* movss */
    xmm3 = MEMF(ecx); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(ecx + 0x30); /* divss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 4); /* mulss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 8); /* mulss */
    MEMF(esp + 8) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0xC); /* mulss */
    xmm1 = xmm1 / MEMF(ecx + 0x38); /* divss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0x18); /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0x1C); /* mulss */
    SET_LO8(eax, MEM8(esp + 0xF4));
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0x20); /* mulss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(ecx + 0x24); /* mulss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x2C); /* mulss */
    xmm3 = xmm3 * MEMF(ecx + 0x28); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 8); /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0xC); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x10); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x14); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x18); /* mulss */
    PUSH32(esp, ebx);
    MEM8(esp + 0xA4) = 4;
    MEM8(esp + 0xA5) = 0;
    MEM16(esp + 0xAA) = 0x12C;
    MEM8(esp + 0xAC) = LO8(eax);
    MEM8(esp + 0xA6) = LO8(edx);
    MEMF(esp + 0xB0) = xmm2; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    MEMF(esp + 0xBC) = xmm2; /* movss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    MEMF(esp + 0xC4) = xmm2; /* movss */
    MEMF(esp + 0xC8) = xmm2; /* movss */
    MEMF(esp + 0xCC) = xmm2; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm2; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm2; /* movss */
    MEM8(esp + 0xE0) = 1;
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x1C); /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(ecx + 0x10);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x20); /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(ecx + 0x18);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x24); /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x78) = edx;
    edx = MEM32(ecx + 0x1C);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x28); /* mulss */
    xmm1 = xmm1 * MEMF(ecx + 0x2C); /* mulss */
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(ecx + 0x20);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x30); /* movss */
    MEM32(esp + 0x80) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(ecx + 0x28);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x34); /* movss */
    MEM32(esp + 0x88) = edx;
    edx = MEM32(ecx + 0x2C);
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    ecx = MEM32(esp + 0xFC);
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esp + 0x100);
    PUSH32(esp, eax);
    ecx = ecx + 0xA0;
    PUSH32(esp, ecx);
    ebx = esp + 0xAC;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEM32(esp + 0x98) = edx;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm2; /* movss */
    PUSH32(esp, 0); sub_000C4660(); /* call 0x000C4660 */

loc_000C57B6: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_000C57DC; /* je: equal / zero */

loc_000C57BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x9C;
    ecx = 0x28;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xF0;
    esp += 4; return; /* ret */

loc_000C57DA: ;
    eax = 0; /* xor self */

loc_000C57DC: ;
    esp = esp + 0xF0;
    esp += 4; return; /* ret */

}

/**
 * sub_000C57F0
 * Original: 0x000C57F0 - 0x000C5897 (167 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C57F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_000C57F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xA0);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm3; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_000C588C; /* je: equal / zero */

loc_000C5808: ;
    ecx = MEM32(eax + 0xC84);
    if (TEST_Z(ecx, ecx)) goto loc_000C5833; /* je: equal / zero */

loc_000C5812: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) goto loc_000C5833; /* je: equal / zero */

loc_000C581B: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    MEMF(edx + 0x9C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000C5833: ;
    if (TEST_Z(eax, eax)) goto loc_000C588C; /* je: equal / zero */

loc_000C5837: ;
    if (CMP_NE(MEM32(eax + 0xE40), 2)) goto loc_000C588C; /* jne: not equal / not zero */

loc_000C5840: ;
    xmm1 = MEMF(eax + 0x1704); /* movss */
    xmm2 = MEMF(0x648F98); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    xmm1 = MEMF(0x6495F8); /* movss */
    if ((xmm1 <= xmm3)) goto loc_000C586D; /* jbe: below or equal (unsigned <=) */

loc_000C585D: ;
    xmm0 = MEMF(eax + 0x1704); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */

loc_000C586D: ;
    xmm4 = MEMF(eax + 0x1708); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_000C588C; /* jbe: below or equal (unsigned <=) */

loc_000C587A: ;
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */

loc_000C588C: ;
    MEMF(edx + 0x9C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000C58A0
 * Original: 0x000C58A0 - 0x000C59C4 (292 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C58A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C58A0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x138); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA24C); /* addss */
    xmm1 = MEMF(ecx + 0x12C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    SET_LO8(eax, 1);
    MEMF(ecx + 0x138) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_000C59C4(); return; } /* jbe: below or equal (unsigned <=) */

loc_000C58CF: ;
    xmm0 = xmm0 * MEMF(ecx + 0x9C); /* mulss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xA0); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xA4); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xA8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xAC); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xB0); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xB4); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xB8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xBC); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xC0); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xC4); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xC8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x138); /* mulss */
    MEMF(ecx + 0x64) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5BD0
 * Original: 0x000C5BD0 - 0x000C5BDB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BD0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C5BD0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x9C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C5BE0
 * Original: 0x000C5BE0 - 0x000C5C0C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BE0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C5BE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x150);
    ecx = eax + 0x13C;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C5C10(); /* call 0x000C5C10 */

loc_000C5BFE: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C5C10
 * Original: 0x000C5C10 - 0x000C5CAC (156 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5C10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000C5C10: ;
    esp = esp - 0x14;
    edx = ZX8(MEM8(eax + 0x34));
    eax = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(edx + eax + 0x330); /* subss */
    eax = edx + eax + 0x330;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    ecx = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp) = ecx;
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_000C5CAC(); return; } /* jbe: below or equal (unsigned <=) */

loc_000C5CA0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5CE0
 * Original: 0x000C5CE0 - 0x000C6221 (1345 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C5CE0: ;
    esp = esp - 0xB4;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xBC);
    eax = ebp + ebp * 2;
    eax = eax << 2;
    SET_LO8(ecx, MEM8(eax + 0x771391));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000C6219; /* je: equal / zero */

loc_000C5D07: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1A14);
    eax = MEM32(edi);
    (void)0; /* test eax, 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x38) = edi;
    if (TEST_NZ(eax, 0xFFFF)) goto loc_000C5D3B; /* jne: not equal / not zero */

loc_000C5D22: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_000C5D3B; /* jne: not equal / not zero */

loc_000C5D2E: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000C5D3B; /* je: equal / zero */

loc_000C5D35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_000C5D3B: ;
    eax = MEM32(edi);
    eax++;
    esi = esp + 0xA8;
    ebx = 0; /* xor self */
    MEM32(edi) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_000C5D4E: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x2B0);
    ecx = MEM32(0x84A13C);
    esi = ecx + ebp;
    fp_push(MEMF(esi + 0x220)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C5D6E: ;
    fp_push(MEMF(esi + 0x218)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = eax;
    ebx = ebx >> 2;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C5D88: ;
    xmm0 = MEMF(esi + 0x21C); /* movss */
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x771394);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x220); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x214); /* movss */
    eax = eax >> 2;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x218); /* movss */
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    if (TEST_NZ(ecx, ecx)) goto loc_000C5E4F; /* jne: not equal / not zero */

loc_000C5DD5: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    edx = eax;
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_000C5DF4: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_000C5E02: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_000C5E49; /* je: equal / zero */

loc_000C5E08: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_000C5E13: ;
    if (TEST_NZ(eax, eax)) goto loc_000C5E26; /* jne: not equal / not zero */

loc_000C5E17: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_000C5E22: ;
    esi = 0; /* xor self */
    goto loc_000C5E49;

loc_000C5E26: ;
    edx = MEM32(esp + 0x14);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 0;

loc_000C5E49: ;
    MEM32(ebp + 0x771394) = esi;

loc_000C5E4F: ;
    eax = MEM32(ebp + 0x771394);
    if (TEST_Z(eax, eax)) goto loc_000C6210; /* je: equal / zero */

loc_000C5E5D: ;
    ecx = MEM32(0x5499E8);
    ebp = MEM32(ecx + 0x1A04);
    if (TEST_Z(ebp, ebp)) goto loc_000C5E93; /* je: equal / zero */

loc_000C5E6D: ;
    eax = MEM32(ebp);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_000C5E90; /* jne: not equal / not zero */

loc_000C5E77: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_000C5E90; /* jne: not equal / not zero */

loc_000C5E83: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000C5E90; /* je: equal / zero */

loc_000C5E8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_000C5E90: ;
    MEM32(ebp) = MEM32(ebp) + 1;

loc_000C5E93: ;
    edx = MEM32(0x5499E8);
    ecx = MEM32(edx + 0x1A08);
    if (TEST_NZ(ecx, ecx)) goto loc_000C5EA9; /* jne: not equal / not zero */

loc_000C5EA3: ;
    MEM32(esp + 0x14) = ecx;
    goto loc_000C5ED1;

loc_000C5EA9: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_000C5ECB; /* jne: not equal / not zero */

loc_000C5EB2: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_000C5ECB; /* jne: not equal / not zero */

loc_000C5EBE: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000C5ECB; /* je: equal / zero */

loc_000C5EC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_000C5ECB: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    MEM32(esp + 0x14) = ecx;

loc_000C5ED1: ;
    esi = esp + 0xA8;
    ebx = 0; /* xor self */
    edi = ebp;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_000C5EE1: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    MEM32(esp + 0x30) = eax;
    edx = esp + 0x30;
    MEM32(esp + 0x34) = eax;
    esi = MEM32(ebp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_000C5F13: ;
    edx = eax;
    eax = MEM32(esp + 0xC8);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_000C5F34: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + 0x771394);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x40) = 0x40001;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x44) = esi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_000C5F72: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_000C5F85: ;
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_000C5F8E: ;
    edx = MEM32(0x6B850C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000C5F9A: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000C5FA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000C5FAA: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C5FB6: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C5FC8: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = ebx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000C5FEA; /* jb: below (unsigned <) */

loc_000C5FDB: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000C5FEA: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_000C6047; /* jne: not equal / not zero */

loc_000C6018: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_000C601D: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_000C6022: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000C6038; /* jb: below (unsigned <) */

loc_000C6029: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000C6038: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_000C6040: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_000C6045: ;
    MEM32(esi) = eax;

loc_000C6047: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C6053: ;
    esi = MEM32(0x5499F0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    esi = esi | 0x1200;
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000C607D: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000C6085: ;
    eax = 2;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = eax;
    MEM32(0x547370) = eax;
    MEM32(0x547378) = eax;
    MEM32(0x547340) = eax;
    eax = MEM32(0x5499F0);
    ecx = 3;
    esi = 1;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    eax = eax | 0xC01;
    edx = esi;
    ecx = 0x40344;
    MEM32(0x5473E0) = esi;
    MEM32(0x5473F0) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C60E6: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    MEM32(0x549AF0) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C60F8: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = ebx;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000C6105: ;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    ecx = MEM32(esp + 0x3C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D80); /* movss */
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm4 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    if (CMP_GE(ecx & ecx, 0)) goto loc_000C614C; /* jge: greater or equal (signed >=) */

loc_000C6146: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C614C: ;
    edx = MEM32(esp + 0x40);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fst */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x34); /* movss */
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm4; /* movss */
    if (CMP_GE(edx & edx, 0)) goto loc_000C6184; /* jge: greater or equal (signed >=) */

loc_000C617E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C6184: ;
    PUSH32(esp, 0x14);
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fst */
    eax = esp + 0x58;
    MEMF(esp + 0x98) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    MEMF(esp + 0x94) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x58); /* movss */
    PUSH32(esp, 8);
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm3; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm2; /* movss */
    MEMF(esp + 0xB0) = xmm3; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_000C61E7: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000C61EF: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_000C61FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000C6200: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000C6206: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000C620C: ;
    edi = MEM32(esp + 0x38);

loc_000C6210: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000C6216: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000C6219: ;
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C6230
 * Original: 0x000C6230 - 0x000C6573 (835 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C6230: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    ebp = ebp + ebp * 2;
    ebp = ebp << 2;
    SET_LO8(eax, MEM8(ebp + 0x771391));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_000C656A; /* je: equal / zero */

loc_000C6256: ;
    if (CMP_EQ(MEM32(ebp + 0x771394), ebx)) goto loc_000C656A; /* je: equal / zero */

loc_000C6262: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000C626F: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000C6279: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000C627F: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C628E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C62A4: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = ebx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000C62C6; /* jb: below (unsigned <) */

loc_000C62B7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000C62C6: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    edi = 2;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, edi)) goto loc_000C6327; /* jne: not equal / not zero */

loc_000C62F8: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_000C62FD: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_000C6302: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000C6318; /* jb: below (unsigned <) */

loc_000C6309: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000C6318: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_000C6320: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_000C6325: ;
    MEM32(esi) = eax;

loc_000C6327: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C6333: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    eax = MEM32(ebp + 0x771394);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000C6357: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000C635F: ;
    ecx = MEM32(0x5499F0);
    eax = 3;
    ecx = ecx | 0xC01;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = 1;
    MEM32(0x5499F0) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = edi;
    MEM32(0x547368) = edi;
    MEM32(0x547370) = edi;
    MEM32(0x547378) = ebx;
    MEM32(0x54733C) = edi;
    MEM32(0x5473E0) = eax;
    MEM32(0x5473F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C63C2: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000C63DB: ;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000C63EC: ;
    edi = MEM32(ebp + 0x771394);
    esi = esp + 0x14;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_000C63FD: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    ecx = MEM32(esp + 0x94);
    esi = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + esi + 0x21C); /* movss */
    eax = MEM32(ebp + 0x771398);
    xmm0 = xmm0 + MEMF(eax + 0x58); /* addss */
    edx = ZX8(MEM8(ebp + 0x771392));
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = ecx + esi;
    esi = MEM32(esp + 0x28);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x214); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    edx = edx << 0x18;
    edx = edx | 0xFFFFFF;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm2 = MEMF(ecx + 0x220); /* movss */
    xmm2 = xmm2 + MEMF(eax + 0x58); /* addss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x60); /* movss */
    xmm2 = xmm2 + MEMF(ecx + 0x214); /* addss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(esp + 0x54) = edx;
    if (CMP_GE(esi & esi, 0)) goto loc_000C64B2; /* jge: greater or equal (signed >=) */

loc_000C64AC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C64B2: ;
    esi = MEM32(esp + 0x2C);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fst */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm2 = MEMF(ecx + 0x220); /* movss */
    xmm2 = xmm2 + MEMF(eax + 0x58); /* addss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x60); /* movss */
    xmm2 = xmm2 + MEMF(ecx + 0x218); /* addss */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x6C) = edx;
    if (CMP_GE(esi & esi, 0)) goto loc_000C6502; /* jge: greater or equal (signed >=) */

loc_000C64FC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000C6502: ;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fst */
    xmm2 = MEMF(ecx + 0x21C); /* movss */
    xmm2 = xmm2 + MEMF(eax + 0x58); /* addss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x60); /* movss */
    xmm2 = xmm2 + MEMF(ecx + 0x218); /* addss */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x18);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEM32(esp + 0x94) = edx;
    MEMF(esp + 0x98) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_000C655F: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000C6568: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000C656A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C6580
 * Original: 0x000C6580 - 0x000C668B (267 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6580(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C6580: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    eax = eax + eax * 2;
    edx = MEM32(eax * 4 + 0x771398);
    if (TEST_Z(edx, edx)) goto loc_000C65DA; /* je: equal / zero */

loc_000C6591: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C65BB; /* jne: not equal / not zero */

loc_000C659A: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C659F: ;
    ecx = MEM32(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_000C65B3; /* je: equal / zero */

loc_000C65AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C65B1: ;
    goto loc_000C65B8;

loc_000C65B3: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000C65B8: ;
    esp = esp + 4;

loc_000C65BB: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = eax + eax * 2;
    MEM8(edx * 4 + 0x771391) = 0;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    eax = eax + eax * 2;
    MEM32(eax * 4 + 0x771398) = 0;

loc_000C65DA: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x50);
    eax = 0x68;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C65EB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000C668A; /* je: equal / zero */

loc_000C65F6: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x48) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    SET_LO8(edx, MEM8(esi + 8));
    MEM8(eax + 0x54) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 9));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000C6622; /* jne: not equal / not zero */

loc_000C661A: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_000C6622: ;
    MEMF(eax + 0x50) = xmm1; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(esi + 0xA));
    MEM8(eax + 0x30) = LO8(ecx);
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x38) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x40) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(eax + 0x44) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ecx + ecx * 2;
    MEM8(ecx * 4 + 0x771391) = 1;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = ecx + ecx * 2;
    MEM32(edx * 4 + 0x771398) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    SET_LO8(ecx, MEM8(esi + 8));
    eax = eax + eax * 2;
    MEM8(eax * 4 + 0x771392) = LO8(ecx);

loc_000C668A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C6690
 * Original: 0x000C6690 - 0x000C6697 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6690(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C6690: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C66A0
 * Original: 0x000C66A0 - 0x000C670E (110 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C66A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C66A0: ;
    esp = esp - 0xC;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    eax = MEM32(eax + ecx + 0x3E0);
    xmm0 = MEMF(eax + 0x80); /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm2 = MEMF(eax + 0x78); /* movss */
    edx = esi + 0x34;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000C66F0: ;
    xmm1 = MEMF(esi + 0x40); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 < xmm0)) { sub_000C670E(); return; } /* jb: below (unsigned <) */

loc_000C6703: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C6740
 * Original: 0x000C6740 - 0x000C68FD (445 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000C6740: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(esi + 0x2C));
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 2;
    SET_LO8(eax, MEM8(edi + 0x771391));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C68F7; /* je: equal / zero */

loc_000C6761: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6A97F8), _icall_esp); /* indirect call */
    }

loc_000C676D: ;
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm6 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(0x7FA21C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm5 = xmm2; /* movaps */
    MEMF(esp + 0x18) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000C67FD; /* jnp: not parity */

loc_000C67A6: ;
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x4C); /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_000C67CA; /* jbe: below or equal (unsigned <=) */

loc_000C67C5: ;
    xmm1 = xmm3; /* movaps */
    goto loc_000C67D2;

loc_000C67CA: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_000C67D2; /* jbe: below or equal (unsigned <=) */

loc_000C67CF: ;
    xmm1 = xmm2; /* movaps */

loc_000C67D2: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm5, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) { sub_000C68FD(); return; } /* jnp: not parity */

loc_000C67FD: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_000C68FD(); return; } /* jnp: not parity */

loc_000C6810: ;
    xmm0 = MEMF(esi + 0x50); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000C68D8; /* jnp: not parity */

loc_000C6822: ;
    xmm7 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(esi + 0x50) = xmm0; /* movss */
    if ((xmm3 < xmm0)) goto loc_000C68A8; /* jb: below (unsigned <) */

loc_000C6838: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C683D: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C684B: ;
    xmm6 = MEMF(0x648CE4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esi + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C6865: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000C687B; /* je: equal / zero */

loc_000C6869: ;
    xmm0 = MEMF(esi + 0x64); /* movss */
    xmm0 = xmm0 * MEMF(0x648D34); /* mulss */
    MEMF(esi + 0x64) = xmm0; /* movss */

loc_000C687B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C6880: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C6892: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000C68A8; /* je: equal / zero */

loc_000C6896: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D34); /* mulss */
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_000C68A8: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x58); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x58); /* addss */
    MEMF(esi + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x60); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x60); /* addss */
    MEMF(esi + 0x60) = xmm0; /* movss */

loc_000C68D8: ;
    ecx = ZX8(MEM8(esi + 0x54));
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C68F1: ;
    MEM8(edi + 0x771392) = LO8(eax);

loc_000C68F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C69A0
 * Original: 0x000C69A0 - 0x000C69F0 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C69A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C69A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x2C);
    esi = eax + eax * 2;
    esi = esi << 2;
    SET_LO8(eax, MEM8(esi + 0x771391));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C69DA; /* je: equal / zero */

loc_000C69B9: ;
    eax = MEM32(esi + 0x771394);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x771391) = 0;
    if (TEST_Z(eax, eax)) goto loc_000C69D0; /* je: equal / zero */

loc_000C69CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000C69D0: ;
    MEM32(esi + 0x771394) = 0;

loc_000C69DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000C69E0: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0x771398) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C69F0
 * Original: 0x000C69F0 - 0x000C6A2E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C69F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C69F0: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x771398);
    if (TEST_Z(esi, esi)) goto loc_000C6A2C; /* je: equal / zero */

loc_000C6A02: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C6A2C; /* jne: not equal / not zero */

loc_000C6A0B: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C6A12: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C6A2C; /* jl: less (signed <) */

loc_000C6A19: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000C6A2E(); return; } /* je: equal / zero */

loc_000C6A26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C6A29: ;
    esp = esp + 4;

loc_000C6A2C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6A80
 * Original: 0x000C6A80 - 0x000C6B21 (161 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C6A80: ;
    eax = MEM32(esp + 0xC);
    if (CMP_A(eax, 0x75)) goto loc_000C6B20; /* ja: above (unsigned >) */

loc_000C6A8D: ;
    eax = ZX8(MEM8(eax + 0xC6B34));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0xC6B24)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x564);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000C6ABB; /* je: equal / zero */

loc_000C6AB0: ;
    SET_LO8(edx, MEM8(ecx + 0x2A8));
    if (CMP_EQ(LO8(edx), MEM8(esi + 0x34))) goto loc_000C6B1A; /* je: equal / zero */

loc_000C6ABB: ;
    if (TEST_Z(MEM8(esi + 0x2C), 8)) goto loc_000C6B1F; /* je: equal / zero */

loc_000C6AC1: ;
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_000C6B1F; /* jne: not equal / not zero */

loc_000C6AC7: ;
    eax = MEM32(eax + 0x570);
    if (CMP_EQ(MEM32(esi + 0xA0), eax)) goto loc_000C6B1A; /* je: equal / zero */

loc_000C6AD5: ;
    eax = MEM32(eax + 0x1F0);
    (void)0; /* test eax, eax - flags set for next jcc */
    goto loc_000C6B03;

    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 8)) goto loc_000C6B1F; /* je: equal / zero */

loc_000C6AE9: ;
    ecx = ZX8(MEM8(esi + 0x34));
    (void)0; /* cmp MEM32(esp + 0xC), ecx - flags set for next jcc */
    goto loc_000C6B18;

    esi = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esi + 0x2C));
    eax = MEM32(edx);
    (void)0; /* test LO8(ecx), 8 - flags set for next jcc */

loc_000C6B03: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_000C6B1F; /* je: equal / zero */

loc_000C6B05: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_000C6B1F; /* je: equal / zero */

loc_000C6B0F: ;
    SET_LO8(eax, MEM8(eax + 0x2A8));
    (void)0; /* cmp LO8(eax), MEM8(esi + 0x34) - flags set for next jcc */

loc_000C6B18: ;
    if (CMP_NE(LO8(eax), MEM8(esi + 0x34))) goto loc_000C6B1F; /* jne: not equal / not zero */

loc_000C6B1A: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000C6B1F: ;
    POP32(esp, esi);

loc_000C6B20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C6BF0
 * Original: 0x000C6BF0 - 0x000C6C17 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C6BF0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C6C0C; /* je: equal / zero */

loc_000C6C01: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C47B0(); /* call 0x002C47B0 */

loc_000C6C09: ;
    esp = esp + 8;

loc_000C6C0C: ;
    if (TEST_NZ(esi, esi)) { sub_000C6C17(); return; } /* jne: not equal / not zero */

loc_000C6C10: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C72A0
 * Original: 0x000C72A0 - 0x000C7391 (241 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C72A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C72A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x2C));
    PUSH32(esp, edi);
    ebx = 1;
    edi = 0; /* xor self */
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_000C72D7; /* jne: not equal / not zero */

loc_000C72BB: ;
    eax = MEM32(esi + 0x44);
    if (TEST_Z(eax, eax)) goto loc_000C738A; /* je: equal / zero */

loc_000C72C6: ;
    eax = esi;
    PUSH32(esp, 0); sub_000C73A0(); /* call 0x000C73A0 */

loc_000C72CD: ;
    MEM8(esi + 0x48) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C72D7: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_000C7350; /* je: equal / zero */

loc_000C72DE: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_000C7350; /* je: equal / zero */

loc_000C72E5: ;
    SET_LO8(eax, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x38))) goto loc_000C7350; /* jne: not equal / not zero */

loc_000C72F0: ;
    eax = MEM32(esi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_000C730B; /* je: equal / zero */

loc_000C72F7: ;
    ecx = MEM32(eax + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esi + 0x50) = xmm0; /* movss */

loc_000C730B: ;
    if (TEST_Z(MEM8(esi + 0x3C), LO8(ebx))) goto loc_000C733D; /* je: equal / zero */

loc_000C7310: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(esi + 0x3A) = MEM16(esi + 0x3A) - LO16(edx);
    if (CMP_GE(MEM16(esi + 0x3A), 0)) goto loc_000C733D; /* jge: greater or equal (signed >=) */

loc_000C7322: ;
    SET_LO8(eax, MEM8(esi + 0x3D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000C733B; /* je: equal / zero */

loc_000C7329: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x58F910), _icall_esp); /* indirect call */
    }

loc_000C7334: ;
    esp = esp + 4;
    edi = eax;
    goto loc_000C733D;

loc_000C733B: ;
    edi = ebx;

loc_000C733D: ;
    if (TEST_NZ(MEM8(esi + 0x48), LO8(ebx))) goto loc_000C734C; /* jne: not equal / not zero */

loc_000C7342: ;
    eax = esi;
    PUSH32(esp, 0); sub_000C73A0(); /* call 0x000C73A0 */

loc_000C7349: ;
    MEM8(esi + 0x48) = MEM8(esi + 0x48) | LO8(ebx);

loc_000C734C: ;
    if (TEST_Z(edi, edi)) goto loc_000C738A; /* je: equal / zero */

loc_000C7350: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C738A; /* jne: not equal / not zero */

loc_000C7359: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C7360: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C738A; /* jl: less (signed <) */

loc_000C7367: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000C7381; /* je: equal / zero */

loc_000C7374: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C7377: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C7381: ;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000C738A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C73A0
 * Original: 0x000C73A0 - 0x000C7412 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C73A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C73A0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x60;
    ebx = edi;
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEM32(eax + 0x44) = 0;
    ebp = 0x64;
    /* nop */

loc_000C73C0: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_000C73FE; /* je: equal / zero */

loc_000C73C6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C73FE; /* jne: not equal / not zero */

loc_000C73CF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C73D6: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C73FE; /* jl: less (signed <) */

loc_000C73DD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000C73F2; /* je: equal / zero */

loc_000C73EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C73ED: ;
    esp = esp + 4;
    goto loc_000C73FE;

loc_000C73F2: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000C73FE: ;
    ebx = ebx + 0x18;
    ebp--;
    if ((ebp != 0)) goto loc_000C73C0; /* jne: not equal / not zero */

loc_000C7404: ;
    ecx = 0x258;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7420
 * Original: 0x000C7420 - 0x000C744E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7420(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C7420: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    if (CMP_EQ(MEM32(eax + 0x68), 0x96)) goto loc_000C744A; /* je: equal / zero */

loc_000C742E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x29);
    eax = 0xA20;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C743F: ;
    edx = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(edx, eax)) { sub_000C744E(); return; } /* jne: not equal / not zero */

loc_000C744A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C74B0
 * Original: 0x000C74B0 - 0x000C74E0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C74B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C74B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi;
    PUSH32(esp, 0); sub_000C73A0(); /* call 0x000C73A0 */

loc_000C74BD: ;
    ebx = MEM32(esi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_000C74C6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000C74E0(); return; } /* jne: not equal / not zero */

loc_000C74D2: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000C74F0
 * Original: 0x000C74F0 - 0x000C7512 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C74F0(void)
{

loc_000C74F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi;
    PUSH32(esp, 0); sub_000C73A0(); /* call 0x000C73A0 */

loc_000C74FD: ;
    ebx = MEM32(esi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_000C7506: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000C750C: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7520
 * Original: 0x000C7520 - 0x000C7540 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7520(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C7520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM8(esi) = 2;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C752D: ;
    if (TEST_Z(LO8(eax), 1)) { sub_000C7540(); return; } /* je: equal / zero */

loc_000C7531: ;
    MEM8(esi) = MEM8(esi) | 1;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x134;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7550
 * Original: 0x000C7550 - 0x000C756B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7550(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C7550: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C7555: ;
    if (TEST_Z(LO8(eax), 1)) { sub_000C756B(); return; } /* je: equal / zero */

loc_000C7559: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = MEM8(eax) | 1;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x16;
    esp += 4; return; /* ret */

}
