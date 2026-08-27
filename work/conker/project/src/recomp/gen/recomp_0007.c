/**
 * Burnout 3 - Recompiled code chunk 7
 * Functions: 250 (0x00096890 - 0x000A9110)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00096890
 * Original: 0x00096890 - 0x000968A7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096890: ;
    eax = MEM32(esi + 0x48);
    SET_LO8(ecx, MEM8(eax + 0x2F0));
    esp = esp - 0x3C;
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_000968A7(); return; } /* je: equal / zero */

loc_000968A0: ;
    eax = eax + 0x2E0;
    g_seh_ebp = ebp; sub_000968BA(); return; /* tail jmp 0x000968BA */

}

/**
 * sub_00096A10
 * Original: 0x00096A10 - 0x00096B14 (260 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096A10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00096A10: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x7FA21C); /* movss */
    eax = esp + 8;
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 8);
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm2 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x10); /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x14); /* addss */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm2; /* movss */
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x1C);
    ebx = 1;
    if (CMP_LE(ecx, ebx)) goto loc_00096B0D; /* jle: less or equal (signed <=) */

loc_00096A93: ;
    xmm4 = MEMF(0x648E54); /* movss */
    PUSH32(esp, esi);
    esi = 0x28;

loc_00096AA1: ;
    edx = MEM32(eax + 8);
    xmm0 = MEMF(edx + esi + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    xmm2 = MEMF(edx + esi + 0x10); /* movss */
    xmm1 = MEMF(edx + esi + 0x14); /* movss */
    eax = edx + esi + 0xC;
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00096AC8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = xmm1 + MEMF(esp + 0x18); /* addss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 8);
    eax = eax + esi;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x1C);
    ebx++;
    esi = esi + 0x28;
    if (CMP_L(ebx, ecx)) goto loc_00096AA1; /* jl: less (signed <) */

loc_00096B0C: ;
    POP32(esp, esi);

loc_00096B0D: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096B20
 * Original: 0x00096B20 - 0x00096B67 (71 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm7;

loc_00096B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    xmm7 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    xmm0 = MEMF(edi + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(edi + 0x40) = xmm0; /* movss */
    if ((xmm0 <= xmm7)) goto loc_00096B56; /* jbe: below or equal (unsigned <=) */

loc_00096B51: ;
    MEMF(edi + 0x40) = xmm7; /* movss */

loc_00096B56: ;
    esi = 0; /* xor self */
    ebx = eax;
    ebx = ebx + 0x34;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x20) = ebx;
    g_seh_ebp = ebp; sub_00096B80(); return; /* tail jmp 0x00096B80 */

}

/**
 * sub_000974A0
 * Original: 0x000974A0 - 0x000974EA (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000974A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;

loc_000974A0: ;
    ecx = MEM32(esp + 8);
    xmm2 = MEMF(ecx * 4 + 0x770F28); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0x4C;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_000974EA(); return; } /* jp: parity */

loc_000974BC: ;
    edx = MEM32(esp + 0x58);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + edx + 4;
    edx = MEM32(esp + 0x50);
    edx = MEM32(edx + 8);
    ecx = ecx + ecx * 4;
    ecx = edx + ecx * 8;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_000977A0
 * Original: 0x000977A0 - 0x000977EC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000977A0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi + 0xC); /* movss */
    /* comiss xmm0, MEMF(edi + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0xC))) { sub_000977EC(); return; } /* jbe: below or equal (unsigned <=) */

loc_000977E7: ;
    xmm3 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_000977F1(); return; /* tail jmp 0x000977F1 */

}

/**
 * sub_000978D0
 * Original: 0x000978D0 - 0x0009790E (62 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000978D0: ;
    xmm0 = MEMF(eax + 0x67C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = MEMF(0x648D54); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000978F0; /* ja: above (unsigned >) */

loc_000978ED: ;
    xmm0 = xmm1; /* movaps */

loc_000978F0: ;
    xmm1 = MEMF(eax + 0x67C); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0009790E(); return; } /* jp: parity */

loc_00097905: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00097920
 * Original: 0x00097920 - 0x000979C0 (160 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097920(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097920: ;
    MEM32(esi) = 0x5F0F38;
    MEM32(esi + 4) = 1;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    eax = eax << 3;
    PUSH32(esp, eax);
    edi = ecx;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0009794B: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = ebp;
    ebp = ebp << 4;
    PUSH32(esp, ebp);
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00097961: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = edi;
    edi = edi << 4;
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esi + 0x20) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00097975: ;
    ecx = ebx + ebx * 4;
    ecx = ecx << 2;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0009798A: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(0x7F9F60);
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = ebp;
    MEM32(esi + 0x38) = edx;
    MEM8(esi + 0xC8) = 0;
    MEM32(esi + 0xD8) = 3;
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000979F0
 * Original: 0x000979F0 - 0x00097B9A (426 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000979F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(ebp) = 0x5F0F38;
    eax = MEM32(esi + 4);
    ecx = ebp + 8;
    ebx = esi + 8;
    PUSH32(esp, ecx);
    MEM32(ebp + 4) = eax;
    PUSH32(esp, 0); sub_00098C70(); /* call 0x00098C70 */

loc_00097A15: ;
    edi = ebp + 0x14;
    esi = esi + 0x14;
    PUSH32(esp, 0); sub_00098CD0(); /* call 0x00098CD0 */

loc_00097A20: ;
    ebx = MEM32(esp + 0x18);
    edi = ebp + 0x20;
    esi = ebx + 0x20;
    PUSH32(esp, 0); sub_00098CD0(); /* call 0x00098CD0 */

loc_00097A2F: ;
    edi = ebp + 0x2C;
    esi = ebx + 0x2C;
    PUSH32(esp, 0); sub_00098D30(); /* call 0x00098D30 */

loc_00097A3A: ;
    edx = MEM32(ebx + 0x38);
    ecx = MEM32(0x7F9F60);
    MEM32(ebp + 0x38) = edx;
    eax = MEM32(ebx + 0x3C);
    esi = 0; /* xor self */
    MEM32(ebp + 0xC0) = ecx;
    MEM32(ebp + 0x3C) = eax;
    MEM32(ebp + 0xC4) = esi;
    SET_LO8(edx, MEM8(ebx + 0xC8));
    MEM8(ebp + 0xC8) = LO8(edx);
    MEM32(ebp + 0xD8) = 3;
    eax = MEM32(ebx + 0x3C);
    ecx = 0; /* xor self */
    if (CMP_LE(eax, esi)) goto loc_00097A90; /* jle: less or equal (signed <=) */

loc_00097A79: ;
    edx = ebx;
    eax = ebp + 0x40;
    edx = edx - ebp;

loc_00097A80: ;
    edi = MEM32(edx + eax);
    MEM32(eax) = edi;
    edi = MEM32(ebx + 0x3C);
    ecx++;
    eax = eax + 4;
    if (CMP_L(ecx, edi)) goto loc_00097A80; /* jl: less (signed <) */

loc_00097A90: ;
    if (CMP_LE(MEM32(ebp + 0x2C), esi)) goto loc_00097ACD; /* jle: less or equal (signed <=) */

loc_00097A95: ;
    edi = 0; /* xor self */

loc_00097A97: ;
    ecx = MEM32(ebp + 0x34);
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ecx + edi);
    edx = edx - eax;
    ecx = ecx + edi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ebp + 0x10);
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x2C);
    esi++;
    edi = edi + 0x14;
    if (CMP_L(esi, eax)) goto loc_00097A97; /* jl: less (signed <) */

loc_00097ACB: ;
    esi = 0; /* xor self */

loc_00097ACD: ;
    (void)0; /* cmp MEM32(ebp + 0x14), esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(MEM32(ebp + 0x14), esi)) goto loc_00097B48; /* jle: less or equal (signed <=) */

loc_00097AD6: ;
    MEM32(esp + 0x18) = esi;
    /* nop */

loc_00097AE0: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(esp + 0x18);
    edi = MEM32(ebx + 0x10);
    ecx = ecx + edx;
    edx = MEM32(ecx);
    esi = MEM32(ebp + 0x10);
    edx = edx - edi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = eax + eax * 4;
    eax = esi + edx * 8;
    edx = MEM32(ecx + 4);
    MEM32(ecx) = eax;
    edx = edx - edi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = eax + eax * 4;
    eax = esi + edx * 8;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x14);
    eax++;
    edx = edx + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, ecx)) goto loc_00097AE0; /* jl: less (signed <) */

loc_00097B46: ;
    esi = 0; /* xor self */

loc_00097B48: ;
    if (CMP_LE(MEM32(ebp + 0x20), esi)) goto loc_00097B91; /* jle: less or equal (signed <=) */

loc_00097B4D: ;
    MEM32(esp + 0x18) = esi;

loc_00097B51: ;
    eax = MEM32(ebp + 0x28);
    edi = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0x1C);
    ecx = MEM32(ebp + 0x1C);
    eax = eax + edi;
    edi = MEM32(eax);
    edi = edi - edx;
    edi = (uint32_t)((int32_t)edi >> 4);
    edi = edi << 4;
    edi = edi + ecx;
    MEM32(eax) = edi;
    edi = MEM32(eax + 4);
    edi = edi - edx;
    edi = (uint32_t)((int32_t)edi >> 4);
    edi = edi << 4;
    edi = edi + ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebp + 0x20);
    esi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(esi, eax)) goto loc_00097B51; /* jl: less (signed <) */

loc_00097B91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097BA0
 * Original: 0x00097BA0 - 0x00097BEF (79 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097BA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00097BA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5F0F38;
    if (TEST_Z(eax, eax)) goto loc_00097BC5; /* je: equal / zero */

loc_00097BB4: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00097BC2: ;
    esp = esp + 4;

loc_00097BC5: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00097BCE: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00097BD7: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00097BE0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00097BE9: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097BF0
 * Original: 0x00097BF0 - 0x00097C62 (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097BF0: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax + -40;
    esi = esi + 0x28;
    ecx = esi;
    ecx = ecx - eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(edi + 8);
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_GE(eax, ecx)) goto loc_00097C5D; /* jge: greater or equal (signed >=) */

loc_00097C1B: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x1C;
    /* nop */

loc_00097C20: ;
    ecx = ebx;
    eax = MEM32(ecx);
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(edi + 0x10);
    esi = esi + 0x28;
    ecx = esi;
    ecx = ecx - edx;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(edi + 8);
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ebp = ebp + 0xC;
    ebx = ebx + 0x28;
    if (CMP_L(eax, ecx)) goto loc_00097C20; /* jl: less (signed <) */

loc_00097C5C: ;
    POP32(esp, ebx);

loc_00097C5D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097C70
 * Original: 0x00097C70 - 0x00097DF2 (386 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097C70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00097C70: ;
    ecx = MEM32(esp + -4);
    eax = MEM32(esi + 0x38);
    esp = esp - 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 0x870ED4;
    MEM32(esi + 0xDC) = 0;
    PUSH32(esp, 0); sub_00098E50(); /* call 0x00098E50 */

loc_00097C91: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00097DEE; /* je: equal / zero */

loc_00097C9B: ;
    xmm5 = MEMF(0x649088); /* movss */
    xmm4 = MEMF(0x648D10); /* movss */
    PUSH32(esp, edi);
    /* nop */

loc_00097CB0: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EC);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1F0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0xDC);
    xmm0 = xmm0 + MEMF(ecx + 0x7C); /* addss */
    edx = edx + edx * 2;
    edx = edx << 4;
    MEMF(edx + esi + 0xFC) = xmm2; /* movss */
    edx = MEM32(esi + 0xDC);
    edi = MEM32(ecx + 0x78);
    edx = edx + 5;
    edx = edx + edx * 2;
    edx = edx << 4;
    edx = edx + esi;
    xmm1 = xmm2; /* movaps */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    MEMF(edx + 8) = xmm2; /* movss */
    MEM32(edx) = edi;
    MEMF(edx + 4) = xmm0; /* movss */
    edx = MEM32(esi + 0xDC);
    edx = edx + edx * 2;
    edx = edx << 4;
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(edx + esi + 0x10C) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EE);
    edi = MEM32(ecx + 0x78);
    xmm3 = MEMF(ecx + 0x80); /* movss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0xDC);
    edx = edx + edx * 2;
    edx = edx << 4;
    MEM32(edx + esi + 0x100) = edi;
    MEMF(edx + esi + 0x108) = xmm3; /* movss */
    edx = edx + esi + 0x100;
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(edx + 4) = xmm2; /* movss */
    edx = MEM32(esi + 0xDC);
    edx = edx + edx * 2;
    edx = edx << 4;
    MEMF(edx + esi + 0x11C) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EE);
    edi = MEM32(ecx + 0x78);
    xmm2 = MEMF(ecx + 0x80); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0xDC);
    edx = edx + edx * 2;
    edx = edx << 4;
    edx = edx + esi + 0x110;
    MEM32(edx) = edi;
    MEMF(edx + 8) = xmm2; /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edx + 4) = xmm1; /* movss */
    edx = MEM32(esi + 0xDC);
    MEM32(esi + edx * 4 + 0xE0) = ecx;
    edx = MEM32(esi + 0xDC);
    eax = eax + 4;
    edx++;
    ecx = edx;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esi + 0xDC) = edx;
    if (CMP_GE(ecx, 4)) goto loc_00097DED; /* jge: greater or equal (signed >=) */

loc_00097DE3: ;
    ecx = MEM32(eax);
    if (TEST_NZ(ecx, ecx)) goto loc_00097CB0; /* jne: not equal / not zero */

loc_00097DED: ;
    POP32(esp, edi);

loc_00097DEE: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00097E00
 * Original: 0x00097E00 - 0x000982DD (1245 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097E00: ;
    esp = esp - 0xB0;
    eax = MEM32(esp + 0xB8);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB8);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 0xDC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0xB) = 0;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_LE(ecx & ecx, 0)) goto loc_000982BA; /* jle: less or equal (signed <=) */

loc_00097E47: ;
    eax = esp + 0x28;
    ecx = eax;
    MEM32(esp + 0x8C) = eax;
    eax = esp + 0x58;
    MEM32(esp + 0x80) = ecx;
    ecx = eax;
    MEM32(esp + 0xAC) = eax;
    eax = esp + 0x4C;
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    MEM32(esp + 0x7C) = ecx;
    ecx = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xBC) = edx;
    MEM32(esp + 0xA8) = edx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x98) = ecx;
    esi = ebp + 0x10C;

loc_00097EA1: ;
    xmm3 = MEMF(esi + -16); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x28); /* addss */
    edx = esi + -28;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0xA4) = xmm3; /* movss */
    ecx = MEM32(esp + 0x9C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x94);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x88);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x8C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x8C))) goto loc_00097FEE; /* jbe: below or equal (unsigned <=) */

loc_00097F2D: ;
    eax = esp + 0x1C;
    ecx = esp + 0x48;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x48;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00097F6F: ;
    xmm0 = MEMF(esp + 0xA4); /* movss */
    edx = ebx;
    eax = ebx;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0xAC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = ebx;
    edx = esp + 0x1C;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, 1);
    goto loc_00097FF0;

loc_00097FEE: ;
    SET_LO8(eax, 0); /* xor self */

loc_00097FF0: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    xmm3 = MEMF(esi); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x28); /* addss */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    eax = esi + -12;
    MEM8(esp + 0x13) = LO8(ecx);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x78) = xmm3; /* movss */
    ecx = MEM32(esp + 0xBC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xB4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x80);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0xA0) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xA0))) goto loc_00098140; /* jbe: below or equal (unsigned <=) */

loc_00098082: ;
    ecx = esp + 0x1C;
    edx = esp + 0x3C;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x3C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000980C4: ;
    xmm0 = MEMF(esp + 0x78); /* movss */
    eax = ebx;
    ecx = ebx;
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ebx;
    eax = esp + 0x1C;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, 1);
    goto loc_00098142;

loc_00098140: ;
    SET_LO8(eax, 0); /* xor self */

loc_00098142: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    xmm3 = MEMF(esi + 0x10); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x28); /* addss */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = esi + 4;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x7C) = xmm3; /* movss */
    ecx = MEM32(esp + 0xA8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x90);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x98);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0xB8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xB8))) goto loc_00098293; /* jbe: below or equal (unsigned <=) */

loc_000981D5: ;
    edx = esp + 0x1C;
    eax = esp + 0x6C;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x6C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00098217: ;
    xmm0 = MEMF(esp + 0x7C); /* movss */
    ecx = ebx;
    edx = ebx;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x84); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ebx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, 1);
    goto loc_00098295;

loc_00098293: ;
    SET_LO8(eax, 0); /* xor self */

loc_00098295: ;
    SET_LO8(ebx, MEM8(esp + 0x13));
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    eax = MEM32(ebp + 0xDC);
    edi++;
    esi = esi + 0x30;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_L(edi, eax)) goto loc_00097EA1; /* jl: less (signed <) */

loc_000982B1: ;
    eax = MEM32(esp + 0xC8);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000982BA: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    SET_LO8(eax, MEM8(esp + 7));
    POP32(esp, ebp);
    esp = esp + 0xB0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000982E0
 * Original: 0x000982E0 - 0x0009837E (158 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000982E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000982E0: ;
    xmm0 = MEMF(0x648E14); /* movss */
    esp = esp - 0xC;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_000982F3; /* ja: above (unsigned >) */

loc_000982F0: ;
    xmm2 = xmm0; /* movaps */

loc_000982F3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_00098352; /* jle: less or equal (signed <=) */

loc_000982FE: ;
    eax = esi + 0xCC;
    MEM32(esp + 0xC) = eax;
    edi = 0; /* xor self */
    /* nop */

loc_00098310: ;
    eax = MEM32(esi + 0x10);
    eax = eax + edi;
    eax = eax + 0xC;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 8);
    ebx++;
    edi = edi + 0x28;
    if (CMP_L(ebx, eax)) goto loc_00098310; /* jl: less (signed <) */

loc_00098352: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098378; /* jle: less or equal (signed <=) */

loc_0009835B: ;
    ebx = 0; /* xor self */
    /* nop */

loc_00098360: ;
    eax = MEM32(esi + 0x10);
    eax = eax + ebx;
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_000931E0(); /* call 0x000931E0 */

loc_0009836D: ;
    eax = MEM32(esi + 8);
    edi++;
    ebx = ebx + 0x28;
    if (CMP_L(edi, eax)) goto loc_00098360; /* jl: less (signed <) */

loc_00098378: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00098380
 * Original: 0x00098380 - 0x00098C55 (2261 bytes, 629 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00098380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    xmm1 = MEMF(0x648D54); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0xD8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    edi = edi & eax;
    eax = MEM32(ebx + 0x38);
    xmm0 = MEMF(eax + 0x67C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = ecx;
    if ((xmm0 > xmm1)) goto loc_000983C8; /* ja: above (unsigned >) */

loc_000983C5: ;
    xmm0 = xmm1; /* movaps */

loc_000983C8: ;
    xmm1 = MEMF(eax + 0x67C); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00098438; /* jnp: not parity */

loc_000983DD: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648D10); /* movss */
    if (TEST_Z(eax, eax)) goto loc_000983F2; /* je: equal / zero */

loc_000983EE: ;
    xmm0 = xmm0 * xmm1; /* mulss */

loc_000983F2: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000983FE; /* jbe: below or equal (unsigned <=) */

loc_000983F7: ;
    edi = edi & 0xFFFFFFBDu;
    MEM32(esp + 0x1C) = edi;

loc_000983FE: ;
    xmm2 = MEMF(0x648D3C); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00098412; /* jbe: below or equal (unsigned <=) */

loc_0009840B: ;
    edi = edi & 0xFFFFFFFBu;
    MEM32(esp + 0x1C) = edi;

loc_00098412: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00098438; /* jbe: below or equal (unsigned <=) */

loc_00098417: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    ecx--;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    eax = (int32_t)xmm1; /* cvttss2si */
    MEM32(esp + 0x18) = eax;

loc_00098438: ;
    eax = edi;
    eax = eax & 0x40;
    MEM32(esp + 0x30) = eax;
    if ((eax == 0)) goto loc_000984F3; /* je: equal / zero */

loc_00098447: ;
    eax = MEM32(ebx + 0x10);
    xmm0 = MEMF(eax + 0x18); /* movss */
    ecx = MEM32(eax + 0x1C);
    eax = eax + 0x1C;
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ebx + 8);
    esi = 1;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEMF(esp + 0x44) = xmm0; /* movss */
    if (CMP_LE(eax, esi)) goto loc_000984DA; /* jle: less or equal (signed <=) */

loc_00098479: ;
    edi = 0x28;
    edi = edi;

loc_00098480: ;
    ecx = MEM32(ebx + 0x10);
    xmm0 = MEMF(edi + ecx + 0x18); /* movss */
    eax = edi + ecx;
    edx = MEM32(eax + 0x1C);
    eax = eax + 0x1C;
    MEM32(esp + 0x4C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(eax + 8);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ebx = esp + 0xF8;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000977A0(); /* call 0x000977A0 */

loc_000984C0: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 8);
    esi++;
    edi = edi + 0x28;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ebx = edx;
    if (CMP_L(esi, eax)) goto loc_00098480; /* jl: less (signed <) */

loc_000984D0: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    edi = MEM32(esp + 0x1C);

loc_000984DA: ;
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    edx = esp + 0x38;
    esi = ebx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00097C70(); /* call 0x00097C70 */

loc_000984F3: ;
    eax = edi;
    eax = eax & 2;
    MEM32(esp + 0x64) = eax;
    if ((eax == 0)) goto loc_0009850A; /* je: equal / zero */

loc_000984FE: ;
    edi = MEM32(ebx + 0x38);
    PUSH32(esp, 0); sub_002D0EF0(); /* call 0x002D0EF0 */

loc_00098506: ;
    edi = MEM32(esp + 0x1C);

loc_0009850A: ;
    edi = edi & 4;
    MEM32(esp + 0x5C) = edi;
    if ((edi == 0)) goto loc_00098529; /* je: equal / zero */

loc_00098513: ;
    eax = MEM32(ebx + 0xC4);
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(eax + 0x1834) = xmm0; /* movss */

loc_00098529: ;
    eax = MEM32(esp + 0x18);
    if (CMP_LE(eax & eax, 0)) goto loc_00098C00; /* jle: less or equal (signed <=) */

loc_00098535: ;
    ecx = MEM32(esp + 0x1C);
    eax = ecx;
    eax = eax & 8;
    MEM32(esp + 0x68) = eax;
    eax = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax & 1;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x48) = ecx;

loc_00098553: ;
    eax = MEM32(esp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00098755; /* je: equal / zero */

loc_0009855F: ;
    eax = MEM32(esp + 0x1C);
    eax = eax & 0x10;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x20) = 2;

loc_00098572: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_000986F5; /* je: equal / zero */

loc_0009857E: ;
    eax = MEM32(ebx + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_000986F5; /* jle: less or equal (signed <=) */

loc_00098591: ;
    MEM32(esp + 0x18) = 0;
    /* nop */

loc_000985A0: ;
    ecx = MEM32(ebx + 0x38);
    esi = ZX8(MEM8(ecx + 0x3A8));
    esi = MEM32(ecx + esi * 4 + 0x4EC);
    eax = MEM32(ebx + 0x34);
    edi = MEM32(esp + 0x18);
    edx = MEM32(eax + edi + 4);
    eax = eax + edi;
    edi = edx;
    MEM32(esp + 0x28) = esi;
    esi = MEM32(ecx + 0x3C8);
    edi = edi << 6;
    esi = esi + edi;
    ecx = 0x10;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x28);
    ecx = MEM32(ecx + 0x34);
    xmm0 = MEMF(esp + 0xD0); /* movss */
    xmm1 = MEMF(esp + 0xC0); /* movss */
    xmm2 = MEMF(esp + 0xC4); /* movss */
    edx = edx + edx * 8;
    xmm4 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    xmm5 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm3 = MEMF(ecx + edx * 4 + 0xC); /* movss */
    ecx = ecx + edx * 4;
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xB0); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xD4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xE0); /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0xB4); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0xD8); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0xE4); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0xC8); /* movss */
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0xBC); /* movss */
    ecx = eax + 8;
    xmm2 = xmm2 + xmm5; /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    xmm2 = xmm2 + xmm4; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0xF0); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0xEC) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm1; /* movss */
    MEMF(esp + 0xF4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000986D6: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x2C);
    eax++;
    edx = edx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, ecx)) goto loc_000985A0; /* jl: less (signed <) */

loc_000986F5: ;
    eax = MEM32(ebx + 0x14);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0009874B; /* jle: less or equal (signed <=) */

loc_000986FE: ;
    esi = 0; /* xor self */

loc_00098700: ;
    eax = MEM32(ebx + 0x1C);
    SET_LO8(ecx, MEM8(eax + esi + 0xC));
    eax = eax + esi;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00098726; /* je: equal / zero */

loc_0009870E: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    PUSH32(esp, edx);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00093350(); /* call 0x00093350 */

loc_00098724: ;
    goto loc_0009873D;

loc_00098726: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, 0x3C23D70A);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000934A0(); /* call 0x000934A0 */

loc_0009873D: ;
    eax = MEM32(ebx + 0x14);
    esp = esp + 0xC;
    edi++;
    esi = esi + 0x10;
    if (CMP_L(edi, eax)) goto loc_00098700; /* jl: less (signed <) */

loc_0009874B: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_00098572; /* jne: not equal / not zero */

loc_00098755: ;
    eax = MEM32(esp + 0x68);
    if (TEST_Z(eax, eax)) goto loc_000987B6; /* je: equal / zero */

loc_0009875D: ;
    eax = MEM32(ebx + 0x20);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_000987B6; /* jle: less or equal (signed <=) */

loc_00098766: ;
    MEM32(esp + 0x18) = esi;
    /* nop */

loc_00098770: ;
    eax = MEM32(ebx + 0x28);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + ecx);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    edi = MEM32(ecx + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000935D0(); /* call 0x000935D0 */

loc_000987A0: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 0x20);
    esp = esp + 0x14;
    esi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(esi, eax)) goto loc_00098770; /* jl: less (signed <) */

loc_000987B6: ;
    eax = MEM32(esp + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_00098978; /* je: equal / zero */

loc_000987C2: ;
    eax = MEM32(ebx + 0xC4);
    MEM8(eax) = MEM8(eax) & 0xFE;
    eax = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_000988D7; /* jle: less or equal (signed <=) */

loc_000987DE: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x18) = eax;

loc_000987E4: ;
    edx = MEM32(ebx + 0x10);
    xmm0 = MEMF(eax + edx + 0x18); /* movss */
    eax = eax + edx;
    edx = eax + 0x1C;
    eax = MEM32(ebx + 0xC4);
    SET_LO8(ecx, MEM8(eax));
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00098834; /* jne: not equal / not zero */

loc_00098805: ;
    esi = MEM32(edx);
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x54) = edx;
    edx = eax + 8;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x54);
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = esi;
    MEMF(esp + 0x58) = xmm0; /* movss */
    esi = MEM32(esp + 0x58);
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM32(edx + 0xC) = esi;
    MEM8(eax) = LO8(ecx);
    goto loc_0009884D;

loc_00098834: ;
    ecx = MEM32(esp + 0x6C);
    ebx = eax + 0x14;
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00093D20(); /* call 0x00093D20 */

loc_0009884A: ;
    ebx = MEM32(ebp + 8);

loc_0009884D: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x10);
    esi = MEM32(ebx + 0xC4);
    xmm0 = MEMF(eax + ecx + 0x18); /* movss */
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(esi));
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), 1)) goto loc_0009889E; /* jne: not equal / not zero */

loc_0009886F: ;
    edx = MEM32(eax);
    edi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x40) = eax;
    eax = esi + 8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    edx = MEM32(esp + 0x44);
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM32(eax + 0xC) = edx;
    MEM8(esi) = LO8(ecx);
    goto loc_000988B8;

loc_0009889E: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esi + 0x14);
    ebx = esi + 0x14;
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00093D20(); /* call 0x00093D20 */

loc_000988B5: ;
    ebx = MEM32(ebp + 8);

loc_000988B8: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx + 8);
    ecx++;
    eax = eax + 0x28;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(ecx, edx)) goto loc_000987E4; /* jl: less (signed <) */

loc_000988D7: ;
    eax = MEM32(ebx + 0xC4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000993E0(); /* call 0x000993E0 */

loc_000988E3: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_000988FA; /* je: equal / zero */

loc_000988F0: ;
    SET_LO8(edx, MEM8(ecx + 0x84));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0009893E; /* jne: not equal / not zero */

loc_000988FA: ;
    xmm0 = MEMF(eax + 0x294); /* movss */
    eax = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0009893E; /* jle: less or equal (signed <=) */

loc_0009890B: ;
    edx = 0; /* xor self */
    /* nop */

loc_00098910: ;
    eax = MEM32(ebx + 0x10);
    xmm1 = MEMF(eax + edx + 0x20); /* movss */
    xmm1 = xmm1 - MEMF(eax + edx + 0x18); /* subss */
    eax = eax + edx;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00098933; /* jbe: below or equal (unsigned <=) */

loc_00098926: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x20) = xmm1; /* movss */

loc_00098933: ;
    eax = MEM32(ebx + 8);
    ecx++;
    edx = edx + 0x28;
    if (CMP_L(ecx, eax)) goto loc_00098910; /* jl: less (signed <) */

loc_0009893E: ;
    eax = MEM32(ebx + 8);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098978; /* jle: less or equal (signed <=) */

loc_00098947: ;
    edi = 0; /* xor self */
    /* nop */

loc_00098950: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax + edi + 0x18);
    eax = eax + edi;
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xC4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000996C0(); /* call 0x000996C0 */

loc_0009896D: ;
    eax = MEM32(ebx + 8);
    esi++;
    edi = edi + 0x28;
    if (CMP_L(esi, eax)) goto loc_00098950; /* jl: less (signed <) */

loc_00098978: ;
    eax = MEM32(esp + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000989CF; /* je: equal / zero */

loc_00098980: ;
    eax = MEM32(ebx + 0x38);
    ecx = ebx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002D0DE0(); /* call 0x002D0DE0 */

loc_0009898C: ;
    eax = MEM32(ebx + 8);
    esp = esp + 4;
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_000989CF; /* jle: less or equal (signed <=) */

loc_00098998: ;
    esi = 0; /* xor self */
    /* nop */

loc_000989A0: ;
    edx = MEM32(ebx + 0x10);
    xmm0 = MEMF(esi + edx + 0x18); /* movss */
    /* comiss xmm0, MEMF(0x648D2C) - sets EFLAGS */
    eax = esi + edx;
    if ((xmm0 <= MEMF(0x648D2C))) goto loc_000989C4; /* jbe: below or equal (unsigned <=) */

loc_000989B5: ;
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    xmm4 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002D0F90(); /* call 0x002D0F90 */

loc_000989C1: ;
    esp = esp + 4;

loc_000989C4: ;
    eax = MEM32(ebx + 8);
    edi++;
    esi = esi + 0x28;
    if (CMP_L(edi, eax)) goto loc_000989A0; /* jl: less (signed <) */

loc_000989CF: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_00098A03; /* je: equal / zero */

loc_000989D7: ;
    eax = MEM32(ebx + 8);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098A03; /* jle: less or equal (signed <=) */

loc_000989E0: ;
    edi = 0; /* xor self */

loc_000989E2: ;
    edx = MEM32(ebx + 0x10);
    xmm0 = MEMF(edi + edx + 0x18); /* movss */
    eax = edi + edx;
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00097E00(); /* call 0x00097E00 */

loc_000989F8: ;
    eax = MEM32(ebx + 8);
    esi++;
    edi = edi + 0x28;
    if (CMP_L(esi, eax)) goto loc_000989E2; /* jl: less (signed <) */

loc_00098A03: ;
    eax = MEM32(esp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00098BF6; /* je: equal / zero */

loc_00098A0F: ;
    eax = MEM32(esp + 0x1C);
    eax = eax & 0x10;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x24) = 2;

loc_00098A22: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00098B96; /* je: equal / zero */

loc_00098A2E: ;
    eax = MEM32(ebx + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00098B96; /* jle: less or equal (signed <=) */

loc_00098A41: ;
    MEM32(esp + 0x18) = 0;
    /* nop */

loc_00098A50: ;
    ecx = MEM32(ebx + 0x38);
    esi = ZX8(MEM8(ecx + 0x3A8));
    esi = MEM32(ecx + esi * 4 + 0x4EC);
    eax = MEM32(ebx + 0x34);
    edi = MEM32(esp + 0x18);
    edx = MEM32(eax + edi + 4);
    eax = eax + edi;
    edi = edx;
    MEM32(esp + 0x28) = esi;
    esi = MEM32(ecx + 0x3C8);
    edi = edi << 6;
    esi = esi + edi;
    ecx = 0x10;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x28);
    ecx = MEM32(ecx + 0x34);
    xmm0 = MEMF(esp + 0x90); /* movss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    xmm2 = MEMF(esp + 0x84); /* movss */
    edx = edx + edx * 8;
    xmm4 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    xmm5 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm3 = MEMF(ecx + edx * 4 + 0xC); /* movss */
    ecx = ecx + edx * 4;
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x94); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xA0); /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x74); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x98); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0xA4); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0x88); /* movss */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x7C); /* movss */
    ecx = eax + 8;
    xmm2 = xmm2 + xmm5; /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    xmm2 = xmm2 + xmm4; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0xB0); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00098B77: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x2C);
    eax++;
    edx = edx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, ecx)) goto loc_00098A50; /* jl: less (signed <) */

loc_00098B96: ;
    eax = MEM32(ebx + 0x14);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098BEC; /* jle: less or equal (signed <=) */

loc_00098B9F: ;
    esi = 0; /* xor self */

loc_00098BA1: ;
    eax = MEM32(ebx + 0x1C);
    SET_LO8(ecx, MEM8(eax + esi + 0xC));
    eax = eax + esi;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00098BC7; /* je: equal / zero */

loc_00098BAF: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    PUSH32(esp, edx);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00093350(); /* call 0x00093350 */

loc_00098BC5: ;
    goto loc_00098BDE;

loc_00098BC7: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, 0x3C23D70A);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    edx = edx + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000934A0(); /* call 0x000934A0 */

loc_00098BDE: ;
    eax = MEM32(ebx + 0x14);
    esp = esp + 0xC;
    edi++;
    esi = esi + 0x10;
    if (CMP_L(edi, eax)) goto loc_00098BA1; /* jl: less (signed <) */

loc_00098BEC: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    if ((MEM32(esp + 0x24) != 0)) goto loc_00098A22; /* jne: not equal / not zero */

loc_00098BF6: ;
    MEM32(esp + 0x48) = MEM32(esp + 0x48) - 1;
    if ((MEM32(esp + 0x48) != 0)) goto loc_00098553; /* jne: not equal / not zero */

loc_00098C00: ;
    eax = MEM32(ebx + 8);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) { sub_00098C55(); return; } /* jle: less or equal (signed <=) */

loc_00098C09: ;
    eax = MEM32(esp + 0x1C);
    eax = eax & 0x20;
    MEM32(esp + 0x30) = eax;
    ecx = 0; /* xor self */

loc_00098C16: ;
    if (TEST_Z(eax, eax)) goto loc_00098C36; /* je: equal / zero */

loc_00098C1A: ;
    eax = MEM32(ebx + 0x10);
    eax = eax + ecx;
    esi = eax + 0x1C;
    edi = MEM32(esi);
    MEM32(eax) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x30);

loc_00098C36: ;
    esi = MEM32(ebx + 8);
    edx++;
    ecx = ecx + 0x28;
    if (CMP_L(edx, esi)) goto loc_00098C16; /* jl: less (signed <) */

loc_00098C41: ;
    eax = MEM32(0x7F9F60);
    MEM32(ebx + 0xC0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098C70
 * Original: 0x00098C70 - 0x00098CC8 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098C70: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    MEM32(ebp) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + 4) = ecx;
    eax = MEM32(ebx + 4);
    edx = eax + eax * 4;
    edx = edx << 3;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00098C8F: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00098CC2; /* je: equal / zero */

loc_00098C99: ;
    eax = MEM32(ebx);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098CC2; /* jle: less or equal (signed <=) */

loc_00098CA1: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);

loc_00098CA5: ;
    esi = MEM32(ebx + 8);
    edi = MEM32(ebp + 8);
    esi = esi + eax;
    edi = edi + eax;
    ecx = 0xA;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx);
    edx++;
    eax = eax + 0x28;
    if (CMP_L(edx, ecx)) goto loc_00098CA5; /* jl: less (signed <) */

loc_00098CC0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00098CC2: ;
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098CD0
 * Original: 0x00098CD0 - 0x00098D2F (95 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098CD0: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 4);
    edx = edx << 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00098CE6: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00098D2C; /* je: equal / zero */

loc_00098CF0: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098D2C; /* jle: less or equal (signed <=) */

loc_00098CF8: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    /* nop */

loc_00098D00: ;
    edx = MEM32(esi + 8);
    ebx = MEM32(edi + 8);
    edx = edx + eax;
    ebp = MEM32(edx);
    ebx = ebx + eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = edx;
    edx = MEM32(esi);
    ecx++;
    eax = eax + 0x10;
    if (CMP_L(ecx, edx)) goto loc_00098D00; /* jl: less (signed <) */

loc_00098D2A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00098D2C: ;
    eax = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_00098D30
 * Original: 0x00098D30 - 0x00098D95 (101 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098D30: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    eax = MEM32(esi + 4);
    edx = eax + eax * 4;
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00098D49: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00098D92; /* je: equal / zero */

loc_00098D53: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00098D92; /* jle: less or equal (signed <=) */

loc_00098D5B: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    /* nop */

loc_00098D60: ;
    edx = MEM32(esi + 8);
    ebx = MEM32(edi + 8);
    edx = edx + eax;
    ebp = MEM32(edx);
    ebx = ebx + eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = ebp;
    edx = MEM32(edx + 0x10);
    MEM32(ebx + 0x10) = edx;
    edx = MEM32(esi);
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, edx)) goto loc_00098D60; /* jl: less (signed <) */

loc_00098D90: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00098D92: ;
    eax = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_00098DA0
 * Original: 0x00098DA0 - 0x00098E24 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00098DA0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00098E24(); return; } /* je: equal / zero */

loc_00098DBB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00098DCF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00098E04; /* je: equal / zero */

loc_00098DDA: ;
    ecx = 0x75DBF8;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00098DE4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00098E01: ;
    esp = esp + 0x14;

loc_00098E04: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00098E1D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00098E50
 * Original: 0x00098E50 - 0x00098E5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00098E50: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_00098E5E(); return; } /* jne: not equal / not zero */

loc_00098E57: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00098EA0
 * Original: 0x00098EA0 - 0x000990C5 (549 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098EA0: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00098EC4; /* je: equal / zero */

loc_00098EBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00098EC4: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_00098ED1: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_00098FD3; /* jne: not equal / not zero */

loc_00098EE4: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00099099; /* jbe: below or equal (unsigned <=) */

loc_00098EEC: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_00098F05: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x468);
    eax = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ecx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_00098FBE; /* jbe: below or equal (unsigned <=) */

loc_00098FA4: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, MEM32(esp + 0x470))) goto loc_00098FBE; /* je: equal / zero */

loc_00098FAF: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00098FBE; /* je: equal / zero */

loc_00098FB6: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_00098FBE: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_00098F05; /* jl: less (signed <) */

loc_00098FCE: ;
    goto loc_00099099;

loc_00098FD3: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00099099; /* jbe: below or equal (unsigned <=) */

loc_00098FDB: ;
    eax = esp + 0x58;
    edx = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_00098FF1: ;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esp + 0x468);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x2C) = ecx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x2C); /* addss */
    MEM32(esp + ebx * 4 + 0x64) = esi;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x40) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_00099089; /* jbe: below or equal (unsigned <=) */

loc_00099088: ;
    ebx++;

loc_00099089: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_00098FF1; /* jl: less (signed <) */

loc_00099099: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_00098ED1; /* jne: not equal / not zero */

loc_000990A6: ;
    eax = MEM32(esp + 0x46C);
    edx = MEM32(esp + 0x54);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000990D0
 * Original: 0x000990D0 - 0x000990D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000990D0(void)
{

loc_000990D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000990E0
 * Original: 0x000990E0 - 0x00099151 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000990E0(void)
{
    float xmm0, xmm1, xmm2;

loc_000990E0: ;
    esp = esp - 0x10;
    eax = esp + 4;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 4;
    MEM32(esp + 0x14) = ecx;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099160
 * Original: 0x00099160 - 0x000991FE (158 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099160(void)
{
    float xmm0, xmm1;

loc_00099160: ;
    esp = esp - 0x14;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    eax = esi + 0x10;
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0xC;
    MEM32(esp + 8) = edx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099200
 * Original: 0x00099200 - 0x0009937D (381 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00099200: ;
    esp = esp - 0x44;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    MEMF(edi + 0xC) = xmm0; /* movss */
    MEMF(edi + 0x1C) = xmm0; /* movss */
    edx = MEM32(eax + 4);
    xmm0 = MEMF(esp + 0x54); /* movss */
    esi = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00099160(); /* call 0x00099160 */

loc_00099247: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x54); /* movss */
    edx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    esi = edi + 0x10;
    eax = esp + 0x10;
    ecx = esp + 0x1C;
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x10;
    eax = esp + 0x1C;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(esi); /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00099300; /* jbe: below or equal (unsigned <=) */

loc_000992FD: ;
    xmm0 = xmm1; /* movaps */

loc_00099300: ;
    MEMF(esi) = xmm0; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00099317; /* jbe: below or equal (unsigned <=) */

loc_00099314: ;
    xmm0 = xmm1; /* movaps */

loc_00099317: ;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0009932F; /* jbe: below or equal (unsigned <=) */

loc_0009932C: ;
    xmm0 = xmm1; /* movaps */

loc_0009932F: ;
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi))) goto loc_00099343; /* jbe: below or equal (unsigned <=) */

loc_0009933F: ;
    xmm0 = MEMF(edi); /* movss */

loc_00099343: ;
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 4))) goto loc_00099358; /* jbe: below or equal (unsigned <=) */

loc_00099353: ;
    xmm0 = MEMF(edi + 4); /* movss */

loc_00099358: ;
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0, MEMF(edi + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 8))) goto loc_0009936E; /* jbe: below or equal (unsigned <=) */

loc_00099369: ;
    xmm0 = MEMF(edi + 8); /* movss */

loc_0009936E: ;
    MEMF(edi + 8) = xmm0; /* movss */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099380
 * Original: 0x00099380 - 0x000993D7 (87 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099380(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00099380: ;
    SET_LO8(ecx, MEM8(eax));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(eax) = LO8(ecx);
    MEMF(eax + 0x1834) = xmm0; /* movss */
    ecx = eax + 0x185C;
    edx = 0x80;
    /* nop */

loc_000993A0: ;
    MEMF(ecx + -16) = xmm0; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    ecx = ecx + 0x20;
    edx--;
    if ((edx != 0)) goto loc_000993A0; /* jne: not equal / not zero */

loc_000993AF: ;
    MEMF(eax + 0x1824) = xmm0; /* movss */
    MEMF(eax + 0x1828) = xmm0; /* movss */
    MEMF(eax + 0x182C) = xmm0; /* movss */
    MEMF(eax + 0x1830) = xmm0; /* movss */
    MEM32(eax + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000993E0
 * Original: 0x000993E0 - 0x00099403 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000993E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000993E0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(edi));
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x84B56C) = ebp;
    if (TEST_NZ(LO8(eax), 1)) { sub_00099403(); return; } /* jne: not equal / not zero */

loc_000993F7: ;
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(edi) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000996C0
 * Original: 0x000996C0 - 0x000996DF (31 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000996C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* test MEM8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ebx), 2)) { sub_000996DF(); return; } /* je: equal / zero */

loc_000996D4: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00099920
 * Original: 0x00099920 - 0x00099979 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099920: ;
    eax = MEM32(0x847224);
    if (TEST_Z(eax, eax)) goto loc_00099978; /* je: equal / zero */

loc_00099929: ;
    PUSH32(esp, 0); sub_001FF9C0(); /* call 0x001FF9C0 */

loc_0009992E: ;
    eax = MEM32(0x847224);
    if (TEST_Z(eax, eax)) goto loc_0009993D; /* je: equal / zero */

loc_00099937: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005F3C0(); /* call 0x0005F3C0 */

loc_0009993D: ;
    eax = MEM32(0x777EC4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00099977; /* jle: less or equal (signed <=) */

loc_00099949: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0x777F00;

loc_00099950: ;
    esi = MEM32(0x862CC0);
    eax = edi;
    PUSH32(esp, 0); sub_001FF2E0(); /* call 0x001FF2E0 */

loc_0009995D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00099968; /* je: equal / zero */

loc_00099961: ;
    esi = MEM32(ebx);
    PUSH32(esp, 0); sub_00099980(); /* call 0x00099980 */

loc_00099968: ;
    eax = MEM32(0x777EC4);
    edi++;
    ebx = ebx + 0x40;
    if (CMP_L(edi, eax)) goto loc_00099950; /* jl: less (signed <) */

loc_00099975: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00099977: ;
    POP32(esp, edi);

loc_00099978: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00099980
 * Original: 0x00099980 - 0x000999D8 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099980: ;
    eax = MEM32(0x847224);
    esp = esp - 0x104;
    if (TEST_Z(eax, eax)) goto loc_000999D1; /* je: equal / zero */

loc_0009998F: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_000999D1; /* je: equal / zero */

loc_00099994: ;
    eax = MEM32(esi * 4 + 0x6A58F0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F04F4);
    PUSH32(esp, 0x18);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000999AE: ;
    ebx = MEM32(0x847224);
    esp = esp + 0xC;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0005F240(); /* call 0x0005F240 */

loc_000999C2: ;
    edi = MEM32(0x847224);
    edx = eax;
    PUSH32(esp, 0); sub_0005F340(); /* call 0x0005F340 */

loc_000999CF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000999D1: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_000999E0
 * Original: 0x000999E0 - 0x00099A48 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000999E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000999E0: ;
    ecx = MEM32(0x847224);
    esp = esp - 0x104;
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00099A41; /* je: equal / zero */

loc_000999F2: ;
    eax = MEM32(esp + 0x108);
    ecx = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F04F4);
    PUSH32(esp, 0x18);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00099A12: ;
    esi = MEM32(0x847224);
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    eax = esp + 8;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_00099A29: ;
    ecx = eax;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00099A3F; /* je: equal / zero */

loc_00099A33: ;
    if (CMP_EQ(MEM32(eax + 0xC), ecx)) goto loc_00099A41; /* je: equal / zero */

loc_00099A38: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00099A33; /* jne: not equal / not zero */

loc_00099A3F: ;
    eax = 0; /* xor self */

loc_00099A41: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00099A50
 * Original: 0x00099A50 - 0x00099A8D (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099A50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000999E0(); /* call 0x000999E0 */

loc_00099A57: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) { sub_00099A8D(); return; } /* je: equal / zero */

loc_00099A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x847224);
    edx = ebx;
    PUSH32(esp, 0); sub_0005F340(); /* call 0x0005F340 */

loc_00099A6F: ;
    esi = MEM32(ebx + 0xC);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00099A83; /* je: equal / zero */

loc_00099A79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0005E5A0(); /* call 0x0005E5A0 */

loc_00099A80: ;
    esp = esp + 4;

loc_00099A83: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00099AA0
 * Original: 0x00099AA0 - 0x00099AC6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099AA0(void)
{

loc_00099AA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_001A7730(); /* call 0x001A7730 */

loc_00099AAA: ;
    PUSH32(esp, 0x67);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00099AC1: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00099AD0
 * Original: 0x00099AD0 - 0x00099C24 (340 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099AD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099AD0: ;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* cmp ebx, 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ebx, 0xFFFF)) goto loc_00099B00; /* je: equal / zero */

loc_00099AE2: ;
    eax = MEM32(0x84722C);
    if (TEST_Z(eax, eax)) goto loc_00099B00; /* je: equal / zero */

loc_00099AEB: ;
    goto loc_00099AF0;

    /* nop */

loc_00099AF0: ;
    if (CMP_EQ(MEM32(eax + 8), ebx)) { sub_00099C24(); return; } /* je: equal / zero */

loc_00099AF9: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00099AF0; /* jne: not equal / not zero */

loc_00099B00: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00099B0E; /* jne: not equal / not zero */

loc_00099B09: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00099B0E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00099B59; /* je: equal / zero */

loc_00099B35: ;
    if (CMP_B(MEM32(esi + 0x80), 0x14)) goto loc_00099B59; /* jb: below (unsigned <) */

loc_00099B3E: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00099B48: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00099B50: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00099B7A; /* jne: not equal / not zero */

loc_00099B59: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00099B6B: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00099B73: ;
    esi = eax;
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */

loc_00099B7A: ;
    POP32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00099C19; /* je: equal / zero */

loc_00099B81: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(0x847228);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = 0x847228;
    if (TEST_Z(ecx, ecx)) goto loc_00099BA7; /* je: equal / zero */

loc_00099B9A: ;
    /* nop */

loc_00099BA0: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00099BA0; /* jne: not equal / not zero */

loc_00099BA7: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00099BB8; /* je: equal / zero */

loc_00099BB6: ;
    MEM32(ecx) = esi;

loc_00099BB8: ;
    eax = MEM32(ebx * 4 + 0x6A58F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F04F4);
    PUSH32(esp, 0x18);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00099BD0: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_00099BE1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00099C0E; /* jne: not equal / not zero */

loc_00099BE8: ;
    PUSH32(esp, 0x84D458);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_00099BF6: ;
    if (TEST_NZ(eax, eax)) goto loc_00099C0B; /* jne: not equal / not zero */

loc_00099BFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x84D458);
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_00061C40(); /* call 0x00061C40 */

loc_00099C0B: ;
    MEM32(esi + 0x10) = eax;

loc_00099C0E: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00099C19; /* je: equal / zero */

loc_00099C15: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_00099C19: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00099C30
 * Original: 0x00099C30 - 0x00099C49 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x10);
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) { sub_00099C49(); return; } /* je: equal / zero */

loc_00099C3C: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;
    esi = edi;
    PUSH32(esp, 0); sub_0005E680(); /* call 0x0005E680 */

loc_00099C47: ;
    g_seh_ebp = ebp; sub_00099C62(); return; /* tail jmp 0x00099C62 */

}

/**
 * sub_00099CC0
 * Original: 0x00099CC0 - 0x00099CE0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099CC0: ;
    if (CMP_EQ(ecx, 0xFFFF)) goto loc_00099CDD; /* je: equal / zero */

loc_00099CC8: ;
    eax = MEM32(0x84722C);
    if (TEST_Z(eax, eax)) goto loc_00099CDD; /* je: equal / zero */

loc_00099CD1: ;
    if (CMP_EQ(MEM32(eax + 8), ecx)) { sub_00099CE0(); return; } /* je: equal / zero */

loc_00099CD6: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00099CD1; /* jne: not equal / not zero */

loc_00099CDD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00099CF0
 * Original: 0x00099CF0 - 0x00099D48 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099CF0: ;
    esp = esp - 0x104;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_L(esi, 0x205)) goto loc_00099D29; /* jl: less (signed <) */

loc_00099D01: ;
    if (CMP_EQ(esi, 0xFFFF)) goto loc_00099D3B; /* je: equal / zero */

loc_00099D09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00099D19: ;
    esp = esp + 0xC;
    eax = 0xD;
    POP32(esp, esi);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_00099D29: ;
    if (CMP_EQ(esi, 0xB)) goto loc_00099D3B; /* je: equal / zero */

loc_00099D2E: ;
    if (CMP_EQ(esi, 0x48)) goto loc_00099D3B; /* je: equal / zero */

loc_00099D33: ;
    if (CMP_NE(esi, 0xFFFF)) { sub_00099D48(); return; } /* jne: not equal / not zero */

loc_00099D3B: ;
    eax = 0xD;
    POP32(esp, esi);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00099E50
 * Original: 0x00099E50 - 0x00099EEF (159 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* cmp ebx, 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ebx, 0xFFFF)) goto loc_00099EE6; /* je: equal / zero */

loc_00099E61: ;
    esi = MEM32(0x84722C);
    if (TEST_Z(esi, esi)) goto loc_00099EE6; /* je: equal / zero */

loc_00099E6B: ;
    goto loc_00099E70;

    /* nop */

loc_00099E70: ;
    if (CMP_EQ(MEM32(esi + 8), ebx)) goto loc_00099E85; /* je: equal / zero */

loc_00099E75: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_00099E70; /* jne: not equal / not zero */

loc_00099E7C: ;
    POP32(esp, esi);
    eax = 0x490;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00099E85: ;
    eax = MEM32(esi + 0xC);
    if (CMP_LE(eax, 1)) goto loc_00099E97; /* jle: less or equal (signed <=) */

loc_00099E8D: ;
    eax--;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00099E97: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000999E0(); /* call 0x000999E0 */

loc_00099E9D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00099EC0; /* je: equal / zero */

loc_00099EA4: ;
    eax = MEM32(0x847224);
    ebx = esi;
    MEM32(eax + 0xC) = 0x99AA0;
    PUSH32(esp, 0); sub_00099C30(); /* call 0x00099C30 */

loc_00099EB7: ;
    POP32(esp, esi);
    eax = 0x490;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00099EC0: ;
    PUSH32(esp, 0); sub_001A7730(); /* call 0x001A7730 */

loc_00099EC5: ;
    PUSH32(esp, 0x67);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00099EDC: ;
    esp = esp + 0xC;
    ebx = esi;
    PUSH32(esp, 0); sub_00099C30(); /* call 0x00099C30 */

loc_00099EE6: ;
    POP32(esp, esi);
    eax = 0x490;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00099EF0
 * Original: 0x00099EF0 - 0x00099F42 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00099EF0: ;
    esp = esp - 0x104;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_L(esi, 0x205)) goto loc_00099F26; /* jl: less (signed <) */

loc_00099F01: ;
    if (CMP_EQ(esi, 0xFFFF)) goto loc_00099F38; /* je: equal / zero */

loc_00099F09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00099F19: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_00099F26: ;
    if (CMP_EQ(esi, 0xB)) goto loc_00099F38; /* je: equal / zero */

loc_00099F2B: ;
    if (CMP_EQ(esi, 0x48)) goto loc_00099F38; /* je: equal / zero */

loc_00099F30: ;
    if (CMP_NE(esi, 0xFFFF)) { sub_00099F42(); return; } /* jne: not equal / not zero */

loc_00099F38: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00099FA0
 * Original: 0x00099FA0 - 0x0009A04F (175 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847234);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0009A04C; /* je: equal / zero */

loc_00099FB2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_00099FB4: ;
    edi = MEM32(esi + 0x24);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ebp = MEM32(esi + 4);
    if (CMP_EQ(edi, ebx)) goto loc_00099FC6; /* je: equal / zero */

loc_00099FBE: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_00099FC3: ;
    MEM32(esi + 0x24) = ebx;

loc_00099FC6: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00099FCF: ;
    if (TEST_NZ(eax, eax)) goto loc_0009A000; /* jne: not equal / not zero */

loc_00099FD3: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_0009A000; /* je: equal / zero */

loc_00099FDA: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00099FFA: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = ebx;

loc_0009A000: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0009A00E; /* je: equal / zero */

loc_0009A00C: ;
    MEM32(eax) = ecx;

loc_0009A00E: ;
    PUSH32(esp, esi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0009A019: ;
    if (TEST_NZ(eax, eax)) goto loc_0009A040; /* jne: not equal / not zero */

loc_0009A01D: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0009A03D: ;
    esp = esp + 4;

loc_0009A040: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    esi = ebp;
    if (CMP_NE(ebp, ebx)) goto loc_00099FB4; /* jne: not equal / not zero */

loc_0009A04A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0009A04C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A050
 * Original: 0x0009A050 - 0x0009A0F5 (165 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A050(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A050: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(ebx), LO16(edi))) goto loc_0009A095; /* jbe: below or equal (unsigned <=) */

loc_0009A05E: ;
    edi = edi;

loc_0009A060: ;
    eax = MEM32(ebx + 0xC);
    esi = MEM32(eax + edi * 4);
    ecx = esi + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0009A06F: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0009A08D; /* jge: greater or equal (signed >=) */

loc_0009A07C: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_0009A08D; /* je: equal / zero */

loc_0009A087: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0009A08A: ;
    esp = esp + 4;

loc_0009A08D: ;
    edx = ZX16(MEM16(ebx));
    edi++;
    if (CMP_L(edi, edx)) goto loc_0009A060; /* jl: less (signed <) */

loc_0009A095: ;
    esi = MEM32(ebx + 0x10);
    if (TEST_Z(esi, esi)) goto loc_0009A0C3; /* je: equal / zero */

loc_0009A09C: ;
    eax = esi + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0009A0A5: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0009A0C3; /* jge: greater or equal (signed >=) */

loc_0009A0B2: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_0009A0C3; /* je: equal / zero */

loc_0009A0BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0009A0C0: ;
    esp = esp + 4;

loc_0009A0C3: ;
    ebx = MEM32(ebx + 0x14);
    if (TEST_Z(ebx, ebx)) goto loc_0009A0F1; /* je: equal / zero */

loc_0009A0CA: ;
    ecx = ebx + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0009A0D3: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0009A0F1; /* jge: greater or equal (signed >=) */

loc_0009A0E0: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_0009A0F1; /* je: equal / zero */

loc_0009A0EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0009A0EE: ;
    esp = esp + 4;

loc_0009A0F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A100
 * Original: 0x0009A100 - 0x0009A116 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A100(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A100: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0009A116(); return; } /* jne: not equal / not zero */

loc_0009A104: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) { sub_0009A116(); return; } /* jbe: below or equal (unsigned <=) */

loc_0009A111: ;
    eax--;
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A1D0
 * Original: 0x0009A1D0 - 0x0009A20F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A1D0(void)
{

loc_0009A1D0: ;
    eax = MEM32(esi * 4 + 0x6A58F0);
    esp = esp - 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F04F4);
    PUSH32(esp, 3);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0009A1EE: ;
    ecx = MEM32(esp + 0x118);
    edx = MEM32(esp + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0009A210(); /* call 0x0009A210 */

loc_0009A208: ;
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A210
 * Original: 0x0009A210 - 0x0009A332 (290 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0009A21B: ;
    ebx = eax;
    eax = MEM32(0x847234);
    if (TEST_Z(eax, eax)) goto loc_0009A236; /* je: equal / zero */

loc_0009A226: ;
    if (CMP_EQ(ebx, MEM32(eax + 0x14))) { sub_0009A332(); return; } /* je: equal / zero */

loc_0009A22F: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0009A226; /* jne: not equal / not zero */

loc_0009A236: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0009A244; /* jne: not equal / not zero */

loc_0009A23F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0009A244: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_0009A28E; /* je: equal / zero */

loc_0009A26A: ;
    if (CMP_B(MEM32(esi + 0x80), 0x28)) goto loc_0009A28E; /* jb: below (unsigned <) */

loc_0009A273: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0009A27D: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0009A285: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0009A2AD; /* jne: not equal / not zero */

loc_0009A28E: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0009A2A0: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0009A2A8: ;
    esp = esp + 8;
    esi = eax;

loc_0009A2AD: ;
    ebp = 0; /* xor self */
    if (CMP_EQ(esi, ebp)) goto loc_0009A324; /* je: equal / zero */

loc_0009A2B3: ;
    eax = 0; /* xor self */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    PUSH32(esp, 0x19D);
    PUSH32(esp, 0x5F0F3C);
    MEM32(esi + 8) = ebp;
    MEM8(esi + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0009A2E9: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = eax;
    edx = esi;
    eax = 0x847230;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x20) = ebp;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_0009A30C: ;
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0009A340(); /* call 0x0009A340 */

loc_0009A316: ;
    esp = esp + 0x10;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009A324; /* je: equal / zero */

loc_0009A321: ;
    MEM8(esi + 0xC) = LO8(eax);

loc_0009A324: ;
    eax = MEM32(esi + 8);
    eax++;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A340
 * Original: 0x0009A340 - 0x0009A3A1 (97 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A340(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1FB);
    PUSH32(esp, 0x5F0F3C);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0009A356: ;
    esi = eax;
    ebx = 0; /* xor self */
    esp = esp + 0x10;
    if (CMP_EQ(esi, ebx)) goto loc_0009A36C; /* je: equal / zero */

loc_0009A361: ;
    ecx = 0xB;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0009A36C: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0009A39D; /* je: equal / zero */

loc_0009A376: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x201);
    PUSH32(esp, 0x5F0F3C);
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0009A389: ;
    MEM32(esi) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    esp = esp + 8;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;

loc_0009A39D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A3B0
 * Original: 0x0009A3B0 - 0x0009A48E (222 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A3B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0009A3B7: ;
    if (TEST_NZ(eax, eax)) goto loc_0009A48C; /* jne: not equal / not zero */

loc_0009A3BF: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0009A3E6; /* je: equal / zero */

loc_0009A3C7: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0009A3CE: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009A3DC: ;
    esp = esp + 4;
    MEM32(edi + 4) = 0;

loc_0009A3E6: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0009A401; /* je: equal / zero */

loc_0009A3ED: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DD110(); /* call 0x001DD110 */

loc_0009A3F6: ;
    esi = MEM32(edi + 0x18);
    esp = esp + 4;
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_0009A401: ;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_0009A40F; /* je: equal / zero */

loc_0009A406: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009A40C: ;
    esp = esp + 4;

loc_0009A40F: ;
    PUSH32(esp, ebx);
    esi = edi + 0x10;
    ebx = 2;

loc_0009A418: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0009A457; /* je: equal / zero */

loc_0009A41E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0009A424: ;
    if (TEST_NZ(eax, eax)) goto loc_0009A457; /* jne: not equal / not zero */

loc_0009A428: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0009A457; /* je: equal / zero */

loc_0009A42E: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0009A44E: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0009A457: ;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_0009A418; /* jne: not equal / not zero */

loc_0009A45D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0009A463: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_0009A48B; /* jne: not equal / not zero */

loc_0009A468: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0009A488: ;
    esp = esp + 4;

loc_0009A48B: ;
    POP32(esp, esi);

loc_0009A48C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A490
 * Original: 0x0009A490 - 0x0009A4FD (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A490(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A490: ;
    eax = MEM32(esi + 0x20);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0009A4D7; /* je: equal / zero */

loc_0009A498: ;
    eax--;
    if ((eax != 0)) goto loc_0009A4F1; /* jne: not equal / not zero */

loc_0009A49B: ;
    eax = esi;
    PUSH32(esp, 0); sub_0009A560(); /* call 0x0009A560 */

loc_0009A4A2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009A4F1; /* je: equal / zero */

loc_0009A4A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0009A5B0(); /* call 0x0009A5B0 */

loc_0009A4AC: ;
    eax = MEM32(esi + 0x18);
    esp = esp + 4;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0009A4C4; /* je: equal / zero */

loc_0009A4B9: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0009A820(); /* call 0x0009A820 */

loc_0009A4C1: ;
    esp = esp + 4;

loc_0009A4C4: ;
    MEM32(esi + 0x20) = 2;
    ecx = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, 2)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_0009A4D7: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0); sub_00099CC0(); /* call 0x00099CC0 */

loc_0009A4DF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009A4F1; /* je: equal / zero */

loc_0009A4E3: ;
    eax = esi;
    PUSH32(esp, 0); sub_0009A500(); /* call 0x0009A500 */

loc_0009A4EA: ;
    MEM32(esi + 0x20) = 1;

loc_0009A4F1: ;
    ecx = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, 2)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A500
 * Original: 0x0009A500 - 0x0009A560 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A500(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A500: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    if (TEST_Z(edi, edi)) goto loc_0009A55E; /* je: equal / zero */

loc_0009A508: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x114);
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_0009A513: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0009A558; /* je: equal / zero */

loc_0009A51C: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x104);
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0009A52D: ;
    eax = esi;
    MEM32(esi + 0x110) = 0x1D;
    MEM32(esi) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0009A552: ;
    MEM32(edi + 4) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0009A558: ;
    esi = 0; /* xor self */
    MEM32(edi + 4) = esi;
    POP32(esp, esi);

loc_0009A55E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A560
 * Original: 0x0009A560 - 0x0009A5A0 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A560(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A560: ;
    if (TEST_Z(eax, eax)) goto loc_0009A59D; /* je: equal / zero */

loc_0009A564: ;
    edx = 0; /* xor self */
    ecx = eax + 0x24;
    /* nop */

loc_0009A570: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0009A591; /* je: equal / zero */

loc_0009A576: ;
    eax = MEM32(eax + 4);
    eax = MEM32(eax + 4);
    eax = MEM32(eax + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0009A58D; /* jl: less (signed <) */

loc_0009A586: ;
    if (CMP_LE(eax, 0x3E5)) goto loc_0009A59D; /* jle: less or equal (signed <=) */

loc_0009A58D: ;
    if (TEST_NZ(eax, eax)) { sub_0009A5A0(); return; } /* jne: not equal / not zero */

loc_0009A591: ;
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, 1)) goto loc_0009A570; /* jl: less (signed <) */

loc_0009A59A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009A59D: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A5B0
 * Original: 0x0009A5B0 - 0x0009A668 (184 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A5B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    if (TEST_Z(esi, esi)) goto loc_0009A665; /* je: equal / zero */

loc_0009A5C1: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0009A5D3; /* je: equal / zero */

loc_0009A5CF: ;
    ebx = 0; /* xor self */
    goto loc_0009A5DE;

loc_0009A5D3: ;
    ebx = MEM32(eax + 0x18);
    if (TEST_Z(ebx, ebx)) goto loc_0009A5DE; /* je: equal / zero */

loc_0009A5DA: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_0009A5DE: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_Z(edi, edi)) goto loc_0009A5FE; /* je: equal / zero */

loc_0009A5E6: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0009A5ED: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009A5FB: ;
    esp = esp + 4;

loc_0009A5FE: ;
    MEM32(esi + 4) = 0;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0009A61A; /* je: equal / zero */

loc_0009A60C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0009A670(); /* call 0x0009A670 */

loc_0009A612: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009A61A: ;
    ecx = ebx;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0009A626: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0009A651; /* je: equal / zero */

loc_0009A62C: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0009A637; /* je: equal / zero */

loc_0009A633: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0009A637: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0009A651; /* jne: not equal / not zero */

loc_0009A63E: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0009A647: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0009A651: ;
    edi = esi;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_0009A658: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(edx + 0x24) = 0;
    POP32(esp, ebx);

loc_0009A665: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A670
 * Original: 0x0009A670 - 0x0009A71A (170 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = ebp;
    edi = MEM32(ebp + 0x10);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esi + 8) = edi;
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0x5E07FC);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_0009A696: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_0009A6A2: ;
    ecx = 0; /* xor self */
    esp = esp + 0x10;
    if (CMP_EQ(eax, ecx)) { sub_0009A71A(); return; } /* je: equal / zero */

loc_0009A6AB: ;
    eax = MEM32(eax + 0x38);
    if (CMP_EQ(eax, ecx)) { sub_0009A71A(); return; } /* je: equal / zero */

loc_0009A6B2: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0xE) = LO16(eax);
    ebx = esi + 0x10;
    MEM32(esp + 0xC) = 2;

loc_0009A6C4: ;
    eax = ZX16(MEM16(esi + 0xE));
    PUSH32(esp, 0xFFFFFFFFu);
    edi = eax + eax * 8;
    PUSH32(esp, 0x303);
    edi = edi << 2;
    PUSH32(esp, 0x5F0F3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0009A6E0: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_0009A701; /* je: equal / zero */

loc_0009A6E9: ;
    ecx = edi;
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ebp = MEM32(esp + 0x14);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0009A701: ;
    eax = MEM32(esp + 0xC);
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_0009A6C4; /* jne: not equal / not zero */

loc_0009A711: ;
    ebx = esi;
    PUSH32(esp, 0); sub_00084300(); /* call 0x00084300 */

loc_0009A718: ;
    g_seh_ebp = ebp; sub_0009A724(); return; /* tail jmp 0x0009A724 */

}

/**
 * sub_0009A7D0
 * Original: 0x0009A7D0 - 0x0009A811 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A7D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A7D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x6A7FA8;
    /* nop */

loc_0009A7E0: ;
    ecx = MEM32(esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0009A8D0(); /* call 0x0009A8D0 */

loc_0009A7F7: ;
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(edi) = LO16(edx);
    esi = esi + 4;
    edi = edi + 2;
    if (CMP_L(esi, 0x6A7FC0)) goto loc_0009A7E0; /* jl: less (signed <) */

loc_0009A80D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A820
 * Original: 0x0009A820 - 0x0009A8CB (171 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A820: ;
    esp = esp - 0x108;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0009A8C3; /* je: equal / zero */

loc_0009A834: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x118);
    eax = MEM32(esi * 4 + 0x6A58F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F04F4);
    PUSH32(esp, 3);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0009A855: ;
    esp = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0); sub_002B34D0(); /* call 0x002B34D0 */

loc_0009A85F: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0009A8B1; /* je: equal / zero */

loc_0009A865: ;
    eax = MEM32(ebp + 0x28);
    if (TEST_NZ(eax, eax)) goto loc_0009A871; /* jne: not equal / not zero */

loc_0009A86C: ;
    MEM8(ebp + 0x64) = LO8(eax);
    goto loc_0009A88B;

loc_0009A871: ;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_003EE2B0(); /* call 0x003EE2B0 */

loc_0009A881: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    esp = esp + 4;
    MEM8(ebp + 0x64) = LO8(edx);

loc_0009A88B: ;
    eax = MEM32(ebp + 0x2C);
    if (TEST_NZ(eax, eax)) goto loc_0009A897; /* jne: not equal / not zero */

loc_0009A892: ;
    MEM8(ebp + 0x65) = LO8(eax);
    goto loc_0009A8B1;

loc_0009A897: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x24);
    eax = MEM32(eax + 8);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_003EE2B0(); /* call 0x003EE2B0 */

loc_0009A8A7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    esp = esp + 4;
    MEM8(ebp + 0x65) = LO8(ecx);

loc_0009A8B1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x11C);
    PUSH32(esp, 0); sub_002D0590(); /* call 0x002D0590 */

loc_0009A8BE: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0009A8C3: ;
    POP32(esp, edi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A8D0
 * Original: 0x0009A8D0 - 0x0009A91F (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A8D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    eax = ebp;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0009A8E6: ;
    MEM32(esp + 0x14) = eax;
    eax = edi + edi * 2;
    ecx = esp + 0x14;
    edi = ebx + eax * 4;
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0006B560(); /* call 0x0006B560 */

loc_0009A8FE: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) { sub_0009A91F(); return; } /* je: equal / zero */

loc_0009A905: ;
    edx = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(eax), edx)) { sub_0009A91F(); return; } /* jne: not equal / not zero */

loc_0009A90D: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009A970
 * Original: 0x0009A970 - 0x0009A997 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A970(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009A970: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F0FD4;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_0009A991; /* je: equal / zero */

loc_0009A980: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009A98E: ;
    esp = esp + 4;

loc_0009A991: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A9A0
 * Original: 0x0009A9A0 - 0x0009A9C3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A9A0: ;
    eax = MEM32(0x7FA4E4);
    edx = MEM32(0x7FA4E0);
    ecx = MEM32(esi);
    eax = eax - edx;
    ecx = ecx + eax;
    MEM32(esi) = ecx;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_0009A9C3(); return; } /* jne: not equal / not zero */

loc_0009A9BC: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009A9C1: ;
    g_seh_ebp = ebp; sub_0009A9C8(); return; /* tail jmp 0x0009A9C8 */

}

/**
 * sub_0009ABA0
 * Original: 0x0009ABA0 - 0x0009ABC7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ABA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009ABA0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_000A21A0(); /* call 0x000A21A0 */

loc_0009ABAD: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0009ABB8; /* jne: not equal / not zero */

loc_0009ABB4: ;
    SET_LO8(ebx, MEM8(esp + 0xB));

loc_0009ABB8: ;
    edx = MEM32(esi + 0x18);
    (void)0; /* cmp edx, 8 - flags set for next jcc */
    eax = esi + 4;
    if (CMP_B(edx, 8)) { sub_0009ABC7(); return; } /* jb: below (unsigned <) */

loc_0009ABC3: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_0009ABC9(); return; /* tail jmp 0x0009ABC9 */

}

/**
 * sub_0009AC70
 * Original: 0x0009AC70 - 0x0009AD43 (211 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AC70: ;
    esp = esp - 0x8C;
    xmm0 = MEMF(0x648EEC); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, edi);
    edi = eax;
    MEMF(esp + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(0x64A6FC); /* movss */
    eax = ebp;
    MEM32(esp + 0x44) = 0x5F2228;
    MEM32(esp + 0x48) = 0x5F2218;
    MEM32(esp + 0x4C) = 0x5F2208;
    MEM32(esp + 0x50) = 0x5F21FC;
    MEM32(esp + 0x54) = 0x5F21F0;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0009ABA0(); /* call 0x0009ABA0 */

loc_0009AD34: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0009AD43(); return; } /* jne: not equal / not zero */

loc_0009AD38: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AE90
 * Original: 0x0009AE90 - 0x0009AEDF (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AE90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009AE90: ;
    eax = MEM32(0x847254);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 4))); }
    eax = MEM32(edi + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edx;
    if (TEST_Z(eax, eax)) { sub_0009AEDF(); return; } /* je: equal / zero */

loc_0009AEA4: ;
    ecx = MEM32(edi + 0x30);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_AE(esi, eax)) { sub_0009AEDF(); return; } /* jae: above or equal (unsigned >=) */

loc_0009AEC0: ;
    ecx = MEM32(edi + 0x2C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    eax = MEM32(esi + ecx + 0x18);
    esi = esi + ecx;
    if (CMP_B(eax, 8)) goto loc_0009AED8; /* jb: below (unsigned <) */

loc_0009AED1: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009AED8: ;
    eax = esi + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AEF0
 * Original: 0x0009AEF0 - 0x0009AF5C (108 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AEF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    MEM8(ebp) = 0;
    esi = MEM32(ebx + 0x2C);
    (void)0; /* cmp esi, MEM32(ebx + 0x30) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, MEM32(ebx + 0x30))) goto loc_0009AF33; /* je: equal / zero */

loc_0009AF03: ;
    (void)0; /* cmp MEM32(esi + 0x18), 8 - flags set for next jcc */
    ecx = MEM32(esi + 0x14);
    if (CMP_B(MEM32(esi + 0x18), 8)) goto loc_0009AF11; /* jb: below (unsigned <) */

loc_0009AF0C: ;
    eax = MEM32(esi + 4);
    goto loc_0009AF14;

loc_0009AF11: ;
    eax = esi + 4;

loc_0009AF14: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    edi = 0; /* xor self */
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000A3A60(); /* call 0x000A3A60 */

loc_0009AF25: ;
    if (TEST_Z(eax, eax)) { sub_0009AF5C(); return; } /* je: equal / zero */

loc_0009AF29: ;
    eax = MEM32(ebx + 0x30);
    esi = esi + 0x1C;
    if (CMP_NE(esi, eax)) goto loc_0009AF03; /* jne: not equal / not zero */

loc_0009AF33: ;
    if (CMP_B(MEM32(esp + 0x28), 8)) goto loc_0009AF53; /* jb: below (unsigned <) */

loc_0009AF3A: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_0009AF53; /* je: equal / zero */

loc_0009AF46: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009AF50: ;
    esp = esp + 4;

loc_0009AF53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0009AFA0
 * Original: 0x0009AFA0 - 0x0009AFE7 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0009AFA0: ;
    PUSH32(esp, esi);
    esi = eax;
    MEM8(ebx) = 0;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0009AFC5; /* je: equal / zero */

loc_0009AFAD: ;
    ecx = MEM32(edi + 0x30);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0009AFC5: ;
    if (CMP_GE(esi, eax)) { sub_0009AFE7(); return; } /* jge: greater or equal (signed >=) */

loc_0009AFC9: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    MEM8(ebx) = 1;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(esi + ecx + 0x18);
    esi = esi + ecx;
    if (CMP_B(eax, 8)) goto loc_0009AFE2; /* jb: below (unsigned <) */

loc_0009AFDD: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AFE2: ;
    eax = esi + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009AFF0
 * Original: 0x0009AFF0 - 0x0009B00B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AFF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AFF0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x18);
    esp = esp - 8;
    PUSH32(esp, ebp);
    ecx = 8;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(eax, ecx)) { sub_0009B00B(); return; } /* jb: below (unsigned <) */

loc_0009B006: ;
    edi = MEM32(edx + 4);
    g_seh_ebp = ebp; sub_0009B00E(); return; /* tail jmp 0x0009B00E */

}

/**
 * sub_0009B0C0
 * Original: 0x0009B0C0 - 0x0009B30E (590 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B0C0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(0x847278));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(esi), LO16(ebx) - flags set for next jcc */
    MEM8(0x8471A0) = LO8(ebx);
    if (CMP_EQ(LO16(esi), LO16(ebx))) goto loc_0009B160; /* je: equal / zero */

loc_0009B0DD: ;
    eax = MEM32(0x776184);
    if (CMP_EQ(eax, 0x8072F4)) goto loc_0009B0F7; /* je: equal / zero */

loc_0009B0E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_0009B0F4: ;
    esp = esp + 8;

loc_0009B0F7: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEM32(0x776180) = ebx;
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */

loc_0009B160: ;
    if (CMP_EQ(LO16(esi), 0xF)) goto loc_0009B16C; /* je: equal / zero */

loc_0009B166: ;
    MEM32(0x87B344) = ebx;

loc_0009B16C: ;
    PUSH32(esp, 0); sub_0009C350(); /* call 0x0009C350 */

loc_0009B171: ;
    eax = SX16(LO16(esi));
    eax--;
    if (CMP_A(eax, 0x1B)) goto loc_0009B308; /* ja: above (unsigned >) */

loc_0009B17E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x9B310); /* switch: 28 entries, 22 targets */
    if (_jt == 0x0009B185u) goto loc_0009B185;
    if (_jt == 0x0009B194u) goto loc_0009B194;
    if (_jt == 0x0009B1A1u) goto loc_0009B1A1;
    if (_jt == 0x0009B1AEu) goto loc_0009B1AE;
    if (_jt == 0x0009B1BBu) goto loc_0009B1BB;
    if (_jt == 0x0009B1C6u) goto loc_0009B1C6;
    if (_jt == 0x0009B1D1u) goto loc_0009B1D1;
    if (_jt == 0x0009B1DCu) goto loc_0009B1DC;
    if (_jt == 0x0009B1E7u) goto loc_0009B1E7;
    if (_jt == 0x0009B1F2u) goto loc_0009B1F2;
    if (_jt == 0x0009B1FDu) goto loc_0009B1FD;
    if (_jt == 0x0009B208u) goto loc_0009B208;
    if (_jt == 0x0009B213u) goto loc_0009B213;
    if (_jt == 0x0009B223u) goto loc_0009B223;
    if (_jt == 0x0009B22Eu) goto loc_0009B22E;
    if (_jt == 0x0009B24Au) goto loc_0009B24A;
    if (_jt == 0x0009B25Au) goto loc_0009B25A;
    if (_jt == 0x0009B265u) goto loc_0009B265;
    if (_jt == 0x0009B270u) goto loc_0009B270;
    if (_jt == 0x0009B27Bu) goto loc_0009B27B;
    if (_jt == 0x0009B2E6u) goto loc_0009B2E6;
    if (_jt == 0x0009B308u) goto loc_0009B308;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009B185: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0009FCB0(); /* call 0x0009FCB0 */

loc_0009B18B: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B194: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0009CE30(); /* call 0x0009CE30 */

loc_0009B19B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1A1: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0009D6F0(); /* call 0x0009D6F0 */

loc_0009B1A8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1AE: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0009B4D0(); /* call 0x0009B4D0 */

loc_0009B1B5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1BB: ;
    PUSH32(esp, 0); sub_0009B780(); /* call 0x0009B780 */

loc_0009B1C0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1C6: ;
    PUSH32(esp, 0); sub_0009C9B0(); /* call 0x0009C9B0 */

loc_0009B1CB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1D1: ;
    PUSH32(esp, 0); sub_0009E480(); /* call 0x0009E480 */

loc_0009B1D6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1DC: ;
    PUSH32(esp, 0); sub_0009E360(); /* call 0x0009E360 */

loc_0009B1E1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1E7: ;
    PUSH32(esp, 0); sub_0009F200(); /* call 0x0009F200 */

loc_0009B1EC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1F2: ;
    PUSH32(esp, 0); sub_0009B380(); /* call 0x0009B380 */

loc_0009B1F7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B1FD: ;
    PUSH32(esp, 0); sub_0009D8D0(); /* call 0x0009D8D0 */

loc_0009B202: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B208: ;
    PUSH32(esp, 0); sub_0009E280(); /* call 0x0009E280 */

loc_0009B20D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B213: ;
    esi = 0x87B344;
    PUSH32(esp, 0); sub_0009A9A0(); /* call 0x0009A9A0 */

loc_0009B21D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B223: ;
    PUSH32(esp, 0); sub_0009F250(); /* call 0x0009F250 */

loc_0009B228: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B22E: ;
    eax = MEM32(0x84A190);
    if (CMP_EQ(eax, ebx)) goto loc_0009B308; /* je: equal / zero */

loc_0009B23B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0009F9A0(); /* call 0x0009F9A0 */

loc_0009B241: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B24A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0009FCB0(); /* call 0x0009FCB0 */

loc_0009B251: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B25A: ;
    PUSH32(esp, 0); sub_000A0160(); /* call 0x000A0160 */

loc_0009B25F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B265: ;
    PUSH32(esp, 0); sub_000A1430(); /* call 0x000A1430 */

loc_0009B26A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B270: ;
    PUSH32(esp, 0); sub_0009BDB0(); /* call 0x0009BDB0 */

loc_0009B275: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B27B: ;
    eax = MEM32(0x84A188);
    if (CMP_EQ(eax, ebx)) goto loc_0009B308; /* je: equal / zero */

loc_0009B288: ;
    xmm0 = MEMF(0x648E68); /* movss */
    PUSH32(esp, edi);
    esi = eax + 0x28;
    ecx = 9;
    edi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_0009B2A4: ;
    ecx = MEM32(esp + 0x20);
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 0x190);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F2198);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x32);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0009B2DC: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B2E6: ;
    eax = MEM32(0x847270);
    if (CMP_EQ(eax, ebx)) goto loc_0009B301; /* je: equal / zero */

loc_0009B2EF: ;
    edx = MEM32(0x847274);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0009B2F8: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0009B301: ;
    MEM16(0x847278) = LO16(ebx);

loc_0009B308: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B380
 * Original: 0x0009B380 - 0x0009B39E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0009B380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x210;
    eax = MEM32(0x8086E8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_0009B39E(); return; } /* jne: not equal / not zero */

loc_0009B397: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009B39C: ;
    g_seh_ebp = ebp; sub_0009B3A3(); return; /* tail jmp 0x0009B3A3 */

}

/**
 * sub_0009B4D0
 * Original: 0x0009B4D0 - 0x0009B4F5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B4D0: ;
    ecx = MEM32(0x8470DC);
    esp = esp - 0x50;
    PUSH32(esp, esi);
    esi = SX16(LO16(eax));
    eax = MEM32(0x8086E8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    esi = esi + ecx;
    if (TEST_NZ(eax, eax)) { sub_0009B4F5(); return; } /* jne: not equal / not zero */

loc_0009B4EE: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009B4F3: ;
    g_seh_ebp = ebp; sub_0009B4FA(); return; /* tail jmp 0x0009B4FA */

}

/**
 * sub_0009B780
 * Original: 0x0009B780 - 0x0009B7FD (125 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B780: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x87AB24);
    ecx = MEM32(0x87AB20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x7F9F68);
    PUSH32(esp, edi);
    edi = MEM32(0x7F9F6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7A120);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0009B7AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7A120);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = eax;
    ebp = edx;
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0009B7C1: ;
    if (CMP_NE(eax, ebx)) goto loc_0009B7C9; /* jne: not equal / not zero */

loc_0009B7C5: ;
    if (CMP_EQ(edx, ebp)) goto loc_0009B7CE; /* je: equal / zero */

loc_0009B7C9: ;
    MEM8(esp + 0x10) = 1;

loc_0009B7CE: ;
    edx = MEM32(0x847104);
    eax = MEM32(edx + 8);
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    MEM32(0x87AB20) = esi;
    MEM32(0x87AB24) = edi;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0009B7ED; /* je: equal / zero */

loc_0009B7E8: ;
    PUSH32(esp, 0); sub_0009C690(); /* call 0x0009C690 */

loc_0009B7ED: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_0009B7FD(); return; } /* jne: not equal / not zero */

loc_0009B7F6: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009B7FB: ;
    g_seh_ebp = ebp; sub_0009B802(); return; /* tail jmp 0x0009B802 */

}

/**
 * sub_0009BDB0
 * Original: 0x0009BDB0 - 0x0009BDD2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BDB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0009BDB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x98;
    eax = MEM32(0x8086E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, esi)) { sub_0009BDD2(); return; } /* jne: not equal / not zero */

loc_0009BDCB: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009BDD0: ;
    g_seh_ebp = ebp; sub_0009BDD7(); return; /* tail jmp 0x0009BDD7 */

}

/**
 * sub_0009C350
 * Original: 0x0009C350 - 0x0009C373 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C350: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0009C373(); return; } /* jne: not equal / not zero */

loc_0009C359: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x771108); /* addss */
    MEMF(0x771108) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0009C37B(); return; /* tail jmp 0x0009C37B */

}

/**
 * sub_0009C690
 * Original: 0x0009C690 - 0x0009C751 (193 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C690(void)
{

loc_0009C690: ;
    eax = 0; /* xor self */
    MEM32(0x771100) = eax;
    MEM32(0x771104) = eax;
    MEM32(0x7710F8) = eax;
    MEM32(0x7710FC) = eax;
    MEM32(0x7710F0) = eax;
    MEM32(0x7710F4) = eax;
    MEM32(0x7710E8) = eax;
    MEM32(0x7710EC) = eax;
    MEM32(0x7710E0) = eax;
    MEM32(0x7710E4) = eax;
    MEM32(0x7710D8) = eax;
    MEM32(0x7710DC) = eax;
    MEM32(0x7710D0) = eax;
    MEM32(0x7710D4) = eax;
    MEM32(0x7710C8) = eax;
    MEM32(0x7710CC) = eax;
    MEM32(0x7710C0) = eax;
    MEM32(0x7710C4) = eax;
    MEM32(0x7710B0) = eax;
    MEM32(0x7710B4) = eax;
    MEM32(0x7710B8) = eax;
    MEM32(0x7710BC) = eax;
    MEM32(0x7710A8) = eax;
    MEM32(0x7710AC) = eax;
    MEM32(0x7710A0) = eax;
    MEM32(0x7710A4) = eax;
    MEM32(0x771098) = eax;
    MEM32(0x77109C) = eax;
    MEM32(0x771088) = eax;
    MEM32(0x77108C) = eax;
    MEM32(0x771090) = eax;
    MEM32(0x771094) = eax;
    MEM32(0x771080) = eax;
    MEM32(0x771084) = eax;
    MEM32(0x771078) = eax;
    MEM32(0x77107C) = eax;
    MEM32(0x771070) = eax;
    MEM32(0x771074) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C760
 * Original: 0x0009C760 - 0x0009C80B (171 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C760(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C760: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xC8;
    MEM8(0x807666) = 0xC8;
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009C793: ;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = MEMF(0x649298); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F1E7C);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009C7B5: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009C7CE; /* je: equal / zero */

loc_0009C7C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0009C890(); /* call 0x0009C890 */

loc_0009C7C7: ;
    esp = esp + 8;
    MEMF(ebx) = xmm0; /* movss */

loc_0009C7CE: ;
    fp_push(MEMF(ebx)); /* fld float */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(0x58E77C); /* movss */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x5F1E74);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009C7EE: ;
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM32(esp + 8) = eax;
    eax = eax | ecx;
    POP32(esp, esi);
    MEM32(esp + 8) = ecx;
    POP32(esp, ebp);
    if ((eax != 0)) { sub_0009C80B(); return; } /* jne: not equal / not zero */

loc_0009C806: ;
    xmm0 = 0.0f; /* xorps self = zero */
    g_seh_ebp = ebp; sub_0009C846(); return; /* tail jmp 0x0009C846 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0009C890
 * Original: 0x0009C890 - 0x0009C8C4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C890(void)
{
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

loc_0009C890: ;
    eax = MEM32(esp + 4);
    eax = eax | MEM32(esp + 8);
    if ((eax == 0)) goto loc_0009C8C0; /* je: equal / zero */

loc_0009C89A: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0009C8C4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0009C8C0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0009C8E0
 * Original: 0x0009C8E0 - 0x0009C9AC (204 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C8E0(void)
{
    float xmm0;

loc_0009C8E0: ;
    eax = 0; /* xor self */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x771108) = xmm0; /* movss */
    MEM32(0x771100) = eax;
    MEM32(0x771104) = eax;
    MEM32(0x7710F8) = eax;
    MEM32(0x7710FC) = eax;
    MEM32(0x7710F0) = eax;
    MEM32(0x7710F4) = eax;
    MEM32(0x7710E8) = eax;
    MEM32(0x7710EC) = eax;
    MEM32(0x7710E0) = eax;
    MEM32(0x7710E4) = eax;
    MEM32(0x7710D8) = eax;
    MEM32(0x7710DC) = eax;
    MEM32(0x7710D0) = eax;
    MEM32(0x7710D4) = eax;
    MEM32(0x7710C8) = eax;
    MEM32(0x7710CC) = eax;
    MEM32(0x7710C0) = eax;
    MEM32(0x7710C4) = eax;
    MEM32(0x7710B0) = eax;
    MEM32(0x7710B4) = eax;
    MEM32(0x7710B8) = eax;
    MEM32(0x7710BC) = eax;
    MEM32(0x7710A8) = eax;
    MEM32(0x7710AC) = eax;
    MEM32(0x7710A0) = eax;
    MEM32(0x7710A4) = eax;
    MEM32(0x771098) = eax;
    MEM32(0x77109C) = eax;
    MEM32(0x771088) = eax;
    MEM32(0x77108C) = eax;
    MEM32(0x771090) = eax;
    MEM32(0x771094) = eax;
    MEM32(0x771080) = eax;
    MEM32(0x771084) = eax;
    MEM32(0x771078) = eax;
    MEM32(0x77107C) = eax;
    MEM32(0x771070) = eax;
    MEM32(0x771074) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C9B0
 * Original: 0x0009C9B0 - 0x0009C9C6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C9B0: ;
    eax = MEM32(0x8086E8);
    esp = esp - 0x50;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(eax, esi)) { sub_0009C9C6(); return; } /* jne: not equal / not zero */

loc_0009C9BF: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009C9C4: ;
    g_seh_ebp = ebp; sub_0009C9CB(); return; /* tail jmp 0x0009C9CB */

}

/**
 * sub_0009CE30
 * Original: 0x0009CE30 - 0x0009CE8C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CE30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0009CE30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x7C;
    edx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = SX16(LO16(eax));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    eax = MEM32(edi + edx + 0x3E0);
    SET_LO8(eax, MEM8(eax + 0x135));
    edi = edi + edx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0009CE8C(); return; } /* je: equal / zero */

loc_0009CE5E: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    eax = MEM32(eax + 0x64);
    if (CMP_EQ(eax, 0x35)) goto loc_0009CE81; /* je: equal / zero */

loc_0009CE7C: ;
    if (CMP_NE(eax, 0x1E)) { sub_0009CE8C(); return; } /* jne: not equal / not zero */

loc_0009CE81: ;
    esi = MEM32(edi + 4);
    esi = esi + 0x360;
    g_seh_ebp = ebp; sub_0009CE8F(); return; /* tail jmp 0x0009CE8F */

}

/**
 * sub_0009D6F0
 * Original: 0x0009D6F0 - 0x0009D8C1 (465 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6F0(void)
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

loc_0009D6F0: ;
    edx = MEM32(0x8470DC);
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = SX16(LO16(eax));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    eax = MEM32(esi + edx + 0xC0);
    esi = esi + edx;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0009D8BB; /* je: equal / zero */

loc_0009D717: ;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0009D72E; /* jne: not equal / not zero */

loc_0009D71B: ;
    goto loc_0009D720;

    /* nop */

loc_0009D720: ;
    ebx++;
    edx = 1;
    SET_LO8(ecx, LO8(ebx));
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_0009D720; /* je: equal / zero */

loc_0009D72E: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) goto loc_0009D73E; /* jne: not equal / not zero */

loc_0009D737: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009D73C: ;
    goto loc_0009D743;

loc_0009D73E: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_0009D743: ;
    eax = MEM32(esi + 0x468);
    ecx = SX16(LO16(ebx));
    edx = MEM32(ecx * 4 + 0x68BE70);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x5F1B24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0009D764: ;
    xmm1 = MEMF(0x648E5C); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009D77E: ;
    esp = esp + 0x14;
    (void)0; /* cmp MEM16(esi + 0x428), 0 - flags set for next jcc */
    eax = 0x5F1B1C;
    if (CMP_NE(MEM16(esi + 0x428), 0)) goto loc_0009D795; /* jne: not equal / not zero */

loc_0009D790: ;
    eax = 0x5F1B14;

loc_0009D795: ;
    edx = MEM32(esi + 0x3E0);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x298);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x5F1AFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0009D7B2: ;
    xmm1 = MEMF(0x649A8C); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009D7CC: ;
    SET_LO8(eax, MEM8(esi + 0x3F0));
    esp = esp + 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x5F1B1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009D7E3; /* jne: not equal / not zero */

loc_0009D7DE: ;
    eax = 0x5F1B14;

loc_0009D7E3: ;
    fp_push(MEMF(esi + 0x41C)); /* fld float */
    PUSH32(esp, eax);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x1C;
    PUSH32(esp, 0x5F1ADC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0009D809: ;
    xmm1 = MEMF(0x64A74C); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009D823: ;
    edx = MEM32(esi + 4);
    SET_LO8(ebx, MEM8(edx + 0x8C2));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x220);
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(ebx), 1)) ? 1 : 0); /* sete */
    edx = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x5F1ABC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0009D856: ;
    xmm1 = MEMF(0x64A6FC); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009D870: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x24C);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, 0x5F1AAC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0009D887: ;
    xmm1 = MEMF(0x64A76C); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    eax = esp + 0x50;
    esp = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_0009D8A4: ;
    esp = esp + 4;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0009D8B0: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_0009D8BB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0009D8D0
 * Original: 0x0009D8D0 - 0x0009D8F1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0009D8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0009E230(); /* call 0x0009E230 */

loc_0009D8E1: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_0009D8F1(); return; } /* jne: not equal / not zero */

loc_0009D8EA: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009D8EF: ;
    g_seh_ebp = ebp; sub_0009D8F6(); return; /* tail jmp 0x0009D8F6 */

}

/**
 * sub_0009E230
 * Original: 0x0009E230 - 0x0009E262 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E230: ;
    eax = MEM32(0x847104);
    eax = MEM32(eax + 8);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0009E250; /* je: equal / zero */

loc_0009E23D: ;
    MEM32(0x771018) = MEM32(0x771018) - 1;
    if (((int32_t)MEM32(0x771018) >= 0)) { sub_0009E262(); return; } /* jns: not sign (positive) */

loc_0009E245: ;
    MEM32(0x771018) = 0x7F;
    esp += 4; return; /* ret */

loc_0009E250: ;
    if (TEST_Z(HI8(eax), 0x20)) { sub_0009E262(); return; } /* je: equal / zero */

loc_0009E255: ;
    eax = MEM32(0x771018);
    eax++;
    MEM32(0x771018) = eax;
    g_seh_ebp = ebp; sub_0009E267(); return; /* tail jmp 0x0009E267 */

}

/**
 * sub_0009E280
 * Original: 0x0009E280 - 0x0009E295 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E280: ;
    PUSH32(esp, 0); sub_0009E230(); /* call 0x0009E230 */

loc_0009E285: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_0009E295(); return; } /* jne: not equal / not zero */

loc_0009E28E: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009E293: ;
    g_seh_ebp = ebp; sub_0009E29A(); return; /* tail jmp 0x0009E29A */

}

/**
 * sub_0009E360
 * Original: 0x0009E360 - 0x0009E373 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E360: ;
    eax = MEM32(0x8086E8);
    esp = esp - 0x50;
    if (TEST_NZ(eax, eax)) { sub_0009E373(); return; } /* jne: not equal / not zero */

loc_0009E36C: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009E371: ;
    g_seh_ebp = ebp; sub_0009E378(); return; /* tail jmp 0x0009E378 */

}

/**
 * sub_0009E480
 * Original: 0x0009E480 - 0x0009E493 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E480: ;
    eax = MEM32(0x8086E8);
    esp = esp - 0x50;
    if (TEST_NZ(eax, eax)) { sub_0009E493(); return; } /* jne: not equal / not zero */

loc_0009E48C: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009E491: ;
    g_seh_ebp = ebp; sub_0009E498(); return; /* tail jmp 0x0009E498 */

}

/**
 * sub_0009E600
 * Original: 0x0009E600 - 0x0009E61A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E600: ;
    eax = SX16(LO16(eax));
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_GE(eax, 2)) { sub_0009E61A(); return; } /* jge: greater or equal (signed >=) */

loc_0009E60E: ;
    eax = MEM32(eax * 4 + 0x8470FC);
    edi = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0009E61F(); return; /* tail jmp 0x0009E61F */

}

/**
 * sub_0009E6E0
 * Original: 0x0009E6E0 - 0x0009E85F (383 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E6E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E6E0: ;
    esp = esp - 0x50;
    eax = MEM32(0x847104);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = eax;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_0035DC50(); /* call 0x0035DC50 */

loc_0009E700: ;
    ecx = MEM32(0x875630);
    ecx++;
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(0x875630) = ecx;
    if (CMP_NE(ecx, 5)) goto loc_0009E72B; /* jne: not equal / not zero */

loc_0009E716: ;
    (void)0; /* cmp MEM8(0x87562D), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(0x87562D), LO8(ebx))) ? 1 : 0); /* sete */
    MEM32(0x875630) = ebx;
    MEM8(0x87562D) = LO8(ecx);

loc_0009E72B: ;
    (void)0; /* cmp eax, 0x13 - flags set for next jcc */
    MEM8(0x84725A) = 1;
    MEM8(0x84725B) = 1;
    MEM8(esp + 0x12) = LO8(eax);
    if (CMP_L(eax, 0x13)) goto loc_0009E747; /* jl: less (signed <) */

loc_0009E742: ;
    MEM8(esp + 0x12) = 0x1B;

loc_0009E747: ;
    eax = ZX8(MEM8(esp + 0x12));
    MEM32(esp + 0x28) = eax;
    eax--;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM8(esp + 0x13) = LO8(eax);
    eax = 0x84EC58;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0); sub_0009F470(); /* call 0x0009F470 */

loc_0009E769: ;
    (void)0; /* test ebp, 0x800 - flags set for next jcc */
    MEM32(esp + 0x5C) = 7;
    MEM32(esp + 0x58) = ebx;
    MEM16(esp + 0x48) = LO16(ebx);
    if (TEST_Z(ebp, 0x800)) goto loc_0009E788; /* je: equal / zero */

loc_0009E782: ;
    MEM32(0x847254) = MEM32(0x847254) + 1;

loc_0009E788: ;
    if (TEST_Z(ebp, 0x400)) goto loc_0009E79F; /* je: equal / zero */

loc_0009E790: ;
    (void)0; /* cmp MEM8(0x87562C), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM8(0x87562C), LO8(ebx))) ? 1 : 0); /* sete */
    MEM8(0x87562C) = LO8(edx);

loc_0009E79F: ;
    eax = MEM32(0x847280);
    if (CMP_NE(eax, ebx)) goto loc_0009E7DB; /* jne: not equal / not zero */

loc_0009E7A8: ;
    if (TEST_Z(ebp, 0x4000)) goto loc_0009E7F6; /* je: equal / zero */

loc_0009E7B0: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_0009E7F6; /* je: equal / zero */

loc_0009E7B8: ;
    MEM32(0x847280) = 0x3C;
    PUSH32(esp, 0); sub_0035DF40(); /* call 0x0035DF40 */

loc_0009E7C7: ;
    PUSH32(esp, 0); sub_0035DFC0(); /* call 0x0035DFC0 */

loc_0009E7CC: ;
    eax = MEM32(0x847280);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x87562D) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0009E7F6; /* je: equal / zero */

loc_0009E7DB: ;
    eax = eax - MEM32(0x7FA20C);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    MEM32(0x847280) = eax;
    ebp = ebx;
    if (CMP_G(eax, ebx)) goto loc_0009E7F6; /* jg: greater (signed >) */

loc_0009E7F0: ;
    MEM32(0x847280) = ebx;

loc_0009E7F6: ;
    eax = ZX16(MEM16(esp + 0x68));
    if (TEST_Z(ebp, eax)) { sub_0009E85F(); return; } /* je: equal / zero */

loc_0009E7FF: ;
    esi = ZX8(MEM8(0x6A7FE8));
    esi++;
    edx = esi;
    PUSH32(esp, 0); sub_0035DC10(); /* call 0x0035DC10 */

loc_0009E80E: ;
    ecx = eax;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0); sub_0035DC10(); /* call 0x0035DC10 */

loc_0009E823: ;
    ecx = MEM32(0x84B290);
    eax = (uint32_t)((int32_t)eax >> 3);
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(esp + 0x68);
    if (TEST_NZ(LO8(edx), LO8(eax))) { sub_0009E85F(); return; } /* jne: not equal / not zero */

loc_0009E837: ;
    edx = esi;
    MEM8(0x84725A) = LO8(ebx);
    MEM8(0x84725B) = LO8(ebx);
    PUSH32(esp, 0); sub_0035DC10(); /* call 0x0035DC10 */

loc_0009E84A: ;
    esi = esp + 0x44;
    edi = eax;
    PUSH32(esp, 0); sub_000A3F20(); /* call 0x000A3F20 */

loc_0009E855: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0009EEE0
 * Original: 0x0009EEE0 - 0x0009F06A (394 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009EEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009EEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = edi + edi * 4;
    esi = esi << 2;
    eax = MEM32(esi + 0x59E9AC);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x35DD30);
    MEM16(0x847258) = LO16(ebp);
    PUSH32(esp, 0); sub_0035DE10(); /* call 0x0035DE10 */

loc_0009EF05: ;
    esp = esp + 4;
    eax = edi;
    PUSH32(esp, 0); sub_0035DDD0(); /* call 0x0035DDD0 */

loc_0009EF0F: ;
    eax = MEM32(0x84B118);
    if (CMP_EQ(eax, ebp)) goto loc_0009EF1F; /* je: equal / zero */

loc_0009EF18: ;
    MEM8(eax + 0x2B8) = 1;

loc_0009EF1F: ;
    SET_LO8(eax, MEM8(esi + 0x59E9AA));
    ecx = MEM32(0x84A5F8);
    edi = ZX16(MEM16(esi + 0x59E9A8));
    MEM8(0x771B9C) = LO8(eax);
    edx = MEM32(ecx + 0x568);
    MEM8(edx + 0x1FC) = LO8(eax);
    eax = 0; /* xor self */
    MEM32(0x84B118) = ebp;
    MEM32(0x7FA1F4) = edi;
    MEM8(0x7FA275) = 0;
    MEM8(0x801A33) = 1;
    MEM8(0x801A31) = 1;
    MEM8(0x6BCFEB) = 1;
    PUSH32(esp, 0); sub_0032D1E0(); /* call 0x0032D1E0 */

loc_0009EF72: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009EF84; /* jne: not equal / not zero */

loc_0009EF7B: ;
    SET_LO8(eax, MEM8(0x75E9A0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009EF92; /* je: equal / zero */

loc_0009EF84: ;
    MEM8(0x75E9A0) = 0;
    MEM8(0x863D11) = 0;

loc_0009EF92: ;
    if (CMP_NE(MEM32(0x863D04), ebp)) goto loc_0009EFA3; /* jne: not equal / not zero */

loc_0009EF9A: ;
    SET_LO8(eax, MEM8(0x75E9A2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009EFB0; /* je: equal / zero */

loc_0009EFA3: ;
    MEM8(0x75E9A2) = 0;
    MEM32(0x863D04) = ebp;

loc_0009EFB0: ;
    SET_LO8(eax, MEM8(0x76EC82));
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(esi + 0x59E9AA));
    ebx = ebx & 0xFFF;
    if (CMP_NE(edi, 0x1A)) goto loc_0009F011; /* jne: not equal / not zero */

loc_0009EFC9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F05A; /* jne: not equal / not zero */

loc_0009EFD1: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebp)) goto loc_0009EFE3; /* je: equal / zero */

loc_0009EFDA: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_0009EFE3: ;
    SET_LO8(eax, MEM8(0x771130));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F05A; /* jne: not equal / not zero */

loc_0009EFEC: ;
    eax = 2;
    MEM32(0x7FA1E8) = 3;
    MEM32(0x7FA1E4) = eax;
    MEM32(0x7FA1F4) = 0x1A;
    MEM8(0x7819D6) = LO8(eax);
    goto loc_0009F04D;

loc_0009F011: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F05A; /* jne: not equal / not zero */

loc_0009F015: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebp)) goto loc_0009F027; /* je: equal / zero */

loc_0009F01E: ;
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_0009F027: ;
    SET_LO8(eax, MEM8(0x771130));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F05A; /* jne: not equal / not zero */

loc_0009F030: ;
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebp;
    MEM32(0x7FA1F4) = edi;
    MEM8(0x7819D6) = 2;

loc_0009F04D: ;
    MEM16(0x800400) = LO16(ebp);
    MEM8(0x771B9C) = LO8(ebx);

loc_0009F05A: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_0009F05F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x776574) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F070
 * Original: 0x0009F070 - 0x0009F1F3 (387 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F070: ;
    SET_LO8(eax, MEM8(0x84725D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009F1F2; /* je: equal / zero */

loc_0009F07D: ;
    SET_LO8(eax, MEM8(0x863AF8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F1F2; /* jne: not equal / not zero */

loc_0009F08A: ;
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_000257B0(); /* call 0x000257B0 */

loc_0009F098: ;
    eax = MEM32(0x847104);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(0x847269), LO8(ebx))) goto loc_0009F0D7; /* je: equal / zero */

loc_0009F0AD: ;
    (void)0; /* test HI8(ecx), 0x20 - flags set for next jcc */
    ecx = MEM32(0x84726C);
    if (TEST_Z(HI8(ecx), 0x20)) goto loc_0009F0D1; /* je: equal / zero */

loc_0009F0B8: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0009F0C9; /* je: equal / zero */

loc_0009F0BC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0009F0C3: ;
    MEM32(0x84726C) = ebx;

loc_0009F0C9: ;
    MEM8(0x847269) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009F0D1: ;
    eax = MEM32(ecx);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_0009F0D7: ;
    if (TEST_Z(HI8(edx), 0x20)) goto loc_0009F113; /* je: equal / zero */

loc_0009F0DC: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_0009F113; /* je: equal / zero */

loc_0009F0E1: ;
    PUSH32(esp, 0); sub_0029EB50(); /* call 0x0029EB50 */

loc_0009F0E6: ;
    PUSH32(esp, 0); sub_0029EC10(); /* call 0x0029EC10 */

loc_0009F0EB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x657B90);
    ecx = eax;
    MEM32(0x84726C) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0009F10A: ;
    MEM8(0x847269) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009F113: ;
    if (CMP_EQ(MEM8(0x84725C), LO8(ebx))) goto loc_0009F123; /* je: equal / zero */

loc_0009F11B: ;
    MEM8(0x84725C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009F123: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM32(0x8472A0), ebx)) goto loc_0009F1F0; /* jne: not equal / not zero */

loc_0009F132: ;
    if (CMP_NE(MEM16(0x847258), LO16(ebx))) goto loc_0009F181; /* jne: not equal / not zero */

loc_0009F13B: ;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0009F173; /* je: equal / zero */

loc_0009F140: ;
    if (((int32_t)(HI8(edx) & HI8(edx)) >= 0)) goto loc_0009F158; /* jns: not sign (positive) */

loc_0009F144: ;
    MEM16(0x847278) = MEM16(0x847278) - 1;
    if (((int32_t)MEM16(0x847278) >= 0)) goto loc_0009F173; /* jns: not sign (positive) */

loc_0009F14D: ;
    MEM16(0x847278) = 0x19;
    goto loc_0009F173;

loc_0009F158: ;
    SET_LO16(eax, MEM16(0x847278));
    SET_LO16(eax, LO16(eax) + 1);
    (void)0; /* cmp LO16(eax), 0x1A - flags set for next jcc */
    MEM16(0x847278) = LO16(eax);
    if (CMP_L(LO16(eax), 0x1A)) goto loc_0009F173; /* jl: less (signed <) */

loc_0009F16C: ;
    MEM16(0x847278) = LO16(ebx);

loc_0009F173: ;
    PUSH32(esp, 0); sub_0009B0C0(); /* call 0x0009B0C0 */

loc_0009F178: ;
    if (CMP_EQ(MEM16(0x847258), LO16(ebx))) goto loc_0009F1C4; /* je: equal / zero */

loc_0009F181: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(0x776574) = ebx;
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_0009F19A: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0009E6E0(); /* call 0x0009E6E0 */

loc_0009F1A6: ;
    esp = esp + 8;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0009F1B8; /* jne: not equal / not zero */

loc_0009F1AE: ;
    POP32(esp, esi);
    MEM16(0x847258) = LO16(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009F1B8: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) goto loc_0009F1F0; /* je: equal / zero */

loc_0009F1BD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0009EEE0(); return; /* tail jmp 0x0009EEE0 */

loc_0009F1C4: ;
    if (TEST_Z(MEM8(esi + 8), 8)) goto loc_0009F1E4; /* je: equal / zero */

loc_0009F1CA: ;
    if (CMP_NE(MEM8(0x84725C), LO8(ebx))) goto loc_0009F1E4; /* jne: not equal / not zero */

loc_0009F1D2: ;
    PUSH32(esp, 0); sub_002A6470(); /* call 0x002A6470 */

loc_0009F1D7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009F1E4; /* je: equal / zero */

loc_0009F1DB: ;
    MEM16(0x847258) = 1;

loc_0009F1E4: ;
    MEM8(0x84725C) = LO8(ebx);
    MEM8(0x84728B) = LO8(ebx);

loc_0009F1F0: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0009F1F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F200
 * Original: 0x0009F200 - 0x0009F242 (66 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F200: ;
    eax = MEM32(0x7FA008);
    ecx = MEM32(0x875628);
    if (CMP_LE(eax, ecx)) goto loc_0009F217; /* jle: less or equal (signed <=) */

loc_0009F20F: ;
    ecx = eax;
    MEM32(0x875628) = ecx;

loc_0009F217: ;
    if (CMP_BE(ecx, 0x493E0)) goto loc_0009F229; /* jbe: below or equal (unsigned <=) */

loc_0009F21F: ;
    MEM32(0x875628) = 0;

loc_0009F229: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649754); /* mulss */
    MEMF(0x771150) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000A5BE0(); return; /* tail jmp 0x000A5BE0 */

}

/**
 * sub_0009F250
 * Original: 0x0009F250 - 0x0009F2CE (126 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F250: ;
    esp = esp - 0x88;
    eax = MEM32(0x8086E8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = 0x5F1764;
    MEM32(esp + 8) = 0x5F1750;
    MEM32(esp + 0xC) = 0x5F1740;
    MEM32(esp + 0x10) = 0x5F172C;
    MEM32(esp + 0x14) = 0x5F1710;
    MEM32(esp + 0x18) = 0x5F16F8;
    MEM32(esp + 0x1C) = 0x5F16D8;
    MEM32(esp + 0x20) = 0x5F16B0;
    MEM32(esp + 0x24) = 0x5F16A0;
    MEM32(esp + 0x28) = 0x5F1694;
    MEM32(esp + 0x2C) = 0x5F167C;
    MEM32(esp + 0x30) = 0x5F1668;
    MEM32(esp + 0x34) = 0x5F1648;
    if (TEST_NZ(eax, eax)) { sub_0009F2CE(); return; } /* jne: not equal / not zero */

loc_0009F2C7: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009F2CC: ;
    g_seh_ebp = ebp; sub_0009F2D3(); return; /* tail jmp 0x0009F2D3 */

}

/**
 * sub_0009F470
 * Original: 0x0009F470 - 0x0009F612 (418 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F470: ;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x875624));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0009F609; /* jne: not equal / not zero */

loc_0009F489: ;
    PUSH32(esp, 0x1B6);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5F15D0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_000A1710(); /* call 0x000A1710 */

loc_0009F4A4: ;
    PUSH32(esp, 0); sub_000A2550(); /* call 0x000A2550 */

loc_0009F4A9: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + eax + 0x4C);
    eax = esp + eax + 0x44;
    SET_LO8(edx, LO8(edx) & 6);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = ~edx;
    if (TEST_Z(eax, edx)) goto loc_0009F4D3; /* je: equal / zero */

loc_0009F4C5: ;
    PUSH32(esp, 0x75A0F4);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_0009AC70(); /* call 0x0009AC70 */

loc_0009F4D3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    /* nop */

loc_0009F4E0: ;
    edi = MEM32(esp + 0x4C);
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + eax + 0x54);
    eax = esp + eax + 0x4C;
    SET_LO8(ecx, LO8(ecx) & 6);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    if (TEST_Z(eax, ecx)) goto loc_0009F5C6; /* je: equal / zero */

loc_0009F500: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    MEM32(esp + 0x30) = 7;
    MEM32(esp + 0x2C) = ebx;
    MEM16(esp + 0x1C) = LO16(ebx);
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0); sub_0009AC70(); /* call 0x0009AC70 */

loc_0009F52B: ;
    ecx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_000A1690(); /* call 0x000A1690 */

loc_0009F536: ;
    eax = MEM32(esp + 0x40);
    if (CMP_EQ(eax, ebx)) goto loc_0009F584; /* je: equal / zero */

loc_0009F53E: ;
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000A3D60(); /* call 0x000A3D60 */

loc_0009F548: ;
    eax = MEM32(esp + 0x44);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = eax;
    if (TEST_Z(eax, eax)) goto loc_0009F582; /* je: equal / zero */

loc_0009F555: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0009F55B: ;
    if (TEST_NZ(eax, eax)) goto loc_0009F582; /* jne: not equal / not zero */

loc_0009F55F: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0009F57F: ;
    esp = esp + 4;

loc_0009F582: ;
    ebx = 0; /* xor self */

loc_0009F584: ;
    (void)0; /* cmp MEM32(esp + 0x2C), 8 - flags set for next jcc */
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    if (CMP_B(MEM32(esp + 0x2C), 8)) goto loc_0009F5B0; /* jb: below (unsigned <) */

loc_0009F597: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0009F5B0; /* je: equal / zero */

loc_0009F5A3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009F5AD: ;
    esp = esp + 4;

loc_0009F5B0: ;
    MEM32(esp + 0x2C) = 7;
    MEM32(esp + 0x28) = ebx;
    MEM16(esp + 0x18) = LO16(ebx);
    goto loc_0009F4E0;

loc_0009F5C6: ;
    ecx = MEM32(edi + 4);
    MEM32(esp + ecx + 0x4C) = 0x5F118C;
    ecx = esp + 0x54;
    MEM8(0x875624) = 1;
    PUSH32(esp, 0); sub_000A1800(); /* call 0x000A1800 */

loc_0009F5E1: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(edx + 4);
    MEM32(esp + eax + 0x4C) = 0x5F110C;
    ecx = esp + 0xB0;
    MEM32(esp + 0xB0) = 0x5F1144;
    PUSH32(esp, 0); sub_0046DB9B(); /* call 0x0046DB9B */

loc_0009F607: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0009F609: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F620
 * Original: 0x0009F620 - 0x0009F6EE (206 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F620: ;
    esp = esp - 0x2C;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x38) = 7;
    MEM32(esp + 0x34) = ebp;
    MEM16(esp + 0x24) = LO16(ebp);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0009F666: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esi;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_000A2DA0(); /* call 0x000A2DA0 */

loc_0009F675: ;
    esi = MEM32(edi + 8);
    ebx = MEM32(edi + 4);
    if (CMP_EQ(ebx, esi)) goto loc_0009F698; /* je: equal / zero */

loc_0009F67F: ;
    /* nop */

loc_0009F680: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0009AFF0(); /* call 0x0009AFF0 */

loc_0009F68A: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F698; /* jne: not equal / not zero */

loc_0009F691: ;
    ebx = ebx + 0x38;
    if (CMP_NE(ebx, esi)) goto loc_0009F680; /* jne: not equal / not zero */

loc_0009F698: ;
    if (CMP_B(MEM32(esp + 0x34), 8)) goto loc_0009F6B8; /* jb: below (unsigned <) */

loc_0009F69F: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_0009F6B8; /* je: equal / zero */

loc_0009F6AB: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009F6B5: ;
    esp = esp + 4;

loc_0009F6B8: ;
    (void)0; /* cmp ebx, MEM32(edi + 8) - flags set for next jcc */
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x34) = 7;
    MEM32(esp + 0x30) = ebp;
    MEM16(esp + 0x20) = LO16(ebp);
    edx = eax;
    if (CMP_EQ(ebx, MEM32(edi + 8))) { sub_0009F6EE(); return; } /* je: equal / zero */

loc_0009F6D4: ;
    ebx = ebx + 0x1C;
    ecx = MEM32(ebx);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + 4);
    POP32(esp, esi);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebx + 8);
    POP32(esp, ebp);
    MEM32(edx + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F710
 * Original: 0x0009F710 - 0x0009F831 (289 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F710: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    edi = ecx;
    MEM32(esp + 0x30) = 7;
    MEM32(esp + 0x2C) = ebp;
    MEM16(esp + 0x1C) = LO16(ebp);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0009F734: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esi;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000A2DA0(); /* call 0x000A2DA0 */

loc_0009F743: ;
    esi = MEM32(edi + 8);
    ebx = MEM32(edi + 4);
    if (CMP_EQ(ebx, esi)) goto loc_0009F768; /* je: equal / zero */

loc_0009F74D: ;
    /* nop */

loc_0009F750: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0009AFF0(); /* call 0x0009AFF0 */

loc_0009F75A: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F768; /* jne: not equal / not zero */

loc_0009F761: ;
    ebx = ebx + 0x38;
    if (CMP_NE(ebx, esi)) goto loc_0009F750; /* jne: not equal / not zero */

loc_0009F768: ;
    if (CMP_B(MEM32(esp + 0x2C), 8)) goto loc_0009F788; /* jb: below (unsigned <) */

loc_0009F76F: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_0009F788; /* je: equal / zero */

loc_0009F77B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009F785: ;
    esp = esp + 4;

loc_0009F788: ;
    (void)0; /* cmp ebx, MEM32(edi + 8) - flags set for next jcc */
    MEM32(esp + 0x2C) = 7;
    MEM32(esp + 0x28) = ebp;
    MEM16(esp + 0x18) = LO16(ebp);
    if (CMP_EQ(ebx, MEM32(edi + 8))) { sub_0009F831(); return; } /* je: equal / zero */

loc_0009F7A2: ;
    eax = MEM32(0x75A120);
    if (CMP_NE(eax, ebp)) goto loc_0009F7AF; /* jne: not equal / not zero */

loc_0009F7AB: ;
    eax = 0; /* xor self */
    goto loc_0009F7CA;

loc_0009F7AF: ;
    ecx = MEM32(0x75A124);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0009F7CA: ;
    PUSH32(esp, eax);
    edi = 0x75A0F4;
    PUSH32(esp, 0); sub_0009AE90(); /* call 0x0009AE90 */

loc_0009F7D5: ;
    edx = MEM32(esp + 0x34);
    MEM32(edx) = eax;
    eax = MEM32(0x75A120);
    if (CMP_NE(eax, ebp)) goto loc_0009F7FE; /* jne: not equal / not zero */

loc_0009F7E4: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_0009AE90(); /* call 0x0009AE90 */

loc_0009F7EE: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0009F7FE: ;
    ecx = MEM32(0x75A124);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    edi = ebx;
    PUSH32(esp, 0); sub_0009AE90(); /* call 0x0009AE90 */

loc_0009F821: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F840
 * Original: 0x0009F840 - 0x0009F994 (340 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F840: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = 7;
    MEM32(esp + 0x28) = ebx;
    MEM16(esp + 0x18) = LO16(ebx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0009F866: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esi;
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000A2DA0(); /* call 0x000A2DA0 */

loc_0009F875: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 4);
    if (CMP_EQ(edi, esi)) goto loc_0009F89C; /* je: equal / zero */

loc_0009F87F: ;
    /* nop */

loc_0009F880: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebx = edi;
    PUSH32(esp, 0); sub_0009AFF0(); /* call 0x0009AFF0 */

loc_0009F88C: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0009F89A; /* jne: not equal / not zero */

loc_0009F893: ;
    edi = edi + 0x38;
    if (CMP_NE(edi, esi)) goto loc_0009F880; /* jne: not equal / not zero */

loc_0009F89A: ;
    ebx = 0; /* xor self */

loc_0009F89C: ;
    if (CMP_B(MEM32(esp + 0x28), 8)) goto loc_0009F8BC; /* jb: below (unsigned <) */

loc_0009F8A3: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x4C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0009F8BC; /* je: equal / zero */

loc_0009F8AF: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0009F8B9: ;
    esp = esp + 4;

loc_0009F8BC: ;
    (void)0; /* cmp edi, MEM32(ebp + 8) - flags set for next jcc */
    eax = 7;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ebx;
    MEM16(esp + 0x14) = LO16(ebx);
    if (CMP_EQ(edi, MEM32(ebp + 8))) goto loc_0009F98A; /* je: equal / zero */

loc_0009F8D7: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    esp = esp - 0x1C;
    esi = esp;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = eax;
    MEM16(esi + 4) = LO16(ebx);
    ebx = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0009F8F5: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_000A2DA0(); /* call 0x000A2DA0 */

loc_0009F902: ;
    ebx = 0x75A0F4;
    PUSH32(esp, 0); sub_0009AEF0(); /* call 0x0009AEF0 */

loc_0009F90C: ;
    SET_LO8(ecx, MEM8(esp + 0x4C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0009F98A; /* je: equal / zero */

loc_0009F914: ;
    ebx = esp + 0x4C;
    PUSH32(esp, 0); sub_0009AFA0(); /* call 0x0009AFA0 */

loc_0009F91D: ;
    esi = eax;
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = 7;
    MEM32(esp + 0x44) = ebx;
    MEM16(esp + 0x34) = LO16(ebx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0009F938: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = esi;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_000A2DA0(); /* call 0x000A2DA0 */

loc_0009F947: ;
    if (CMP_EQ(MEM8(esp + 0x4C), LO8(ebx))) goto loc_0009F981; /* je: equal / zero */

loc_0009F94D: ;
    (void)0; /* cmp MEM32(esp + 0x44), 8 - flags set for next jcc */
    eax = MEM32(esp + 0x30);
    if (CMP_AE(MEM32(esp + 0x44), 8)) goto loc_0009F95C; /* jae: above or equal (unsigned >=) */

loc_0009F958: ;
    eax = esp + 0x30;

loc_0009F95C: ;
    eax = ZX16(MEM16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F552(); /* call 0x0046F552 */

loc_0009F965: ;
    esp = esp + 4;
    (void)0; /* cmp eax, 0x59 - flags set for next jcc */
    esi = esp + 0x2C;
    SET_LO8(ebx, (CMP_EQ(eax, 0x59)) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_000A3F20(); /* call 0x000A3F20 */

loc_0009F977: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0009F981: ;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_000A3F20(); /* call 0x000A3F20 */

loc_0009F98A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F9A0
 * Original: 0x0009F9A0 - 0x0009F9BA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F9A0: ;
    eax = MEM32(0x8086E8);
    esp = esp - 0x12C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, ebx)) { sub_0009F9BA(); return; } /* jne: not equal / not zero */

loc_0009F9B3: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0009F9B8: ;
    g_seh_ebp = ebp; sub_0009F9BF(); return; /* tail jmp 0x0009F9BF */

}

/**
 * sub_0009FCB0
 * Original: 0x0009FCB0 - 0x0009FE0C (348 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FCB0(void)
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

loc_0009FCB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x34;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0009FCFB; /* je: equal / zero */

loc_0009FCC3: ;
    eax = MEM32(0x847104);
    eax = MEM32(eax + 8);
    if (TEST_Z(HI8(eax), 0x20)) goto loc_0009FCE6; /* je: equal / zero */

loc_0009FCD0: ;
    eax = MEM32(0x875620);
    if (TEST_NZ(eax, eax)) goto loc_0009FCDE; /* jne: not equal / not zero */

loc_0009FCD9: ;
    eax = 4;

loc_0009FCDE: ;
    eax--;
    MEM32(0x875620) = eax;
    goto loc_0009FD05;

loc_0009FCE6: ;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0009FD05; /* je: equal / zero */

loc_0009FCEB: ;
    eax = MEM32(0x875620);
    eax++;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(0x875620) = eax;
    if (CMP_NE(eax, 4)) goto loc_0009FD05; /* jne: not equal / not zero */

loc_0009FCFB: ;
    MEM32(0x875620) = 0;

loc_0009FD05: ;
    eax = MEM32(0x84A188);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(eax, eax)) goto loc_0009FD84; /* je: equal / zero */

loc_0009FD1C: ;
    esi = eax + 0x28;
    ecx = 9;
    edi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = edx + ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = eax;
    esi = ecx + eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0009FD4E; /* jge: greater or equal (signed >=) */

loc_0009FD48: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0009FD4E: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0009FD59: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(esi & esi, 0)) goto loc_0009FD6F; /* jge: greater or equal (signed >=) */

loc_0009FD69: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0009FD6F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0009FD7A: ;
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    edi = eax;

loc_0009FD84: ;
    eax = MEM32(0x84A184);
    if (TEST_Z(eax, eax)) goto loc_0009FDD1; /* je: equal / zero */

loc_0009FD8D: ;
    esi = eax + 0x28;
    ecx = 9;
    edi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    eax = eax + edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0009FDB7; /* jge: greater or equal (signed >=) */

loc_0009FDB1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0009FDB7: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0009FDC2: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    ebx = 0x80000;
    ebx = ebx - eax;

loc_0009FDD1: ;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = edi + ebx + 0x1C00001;
    edx = esi + ebx + 0x1C00001;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM8(0x807667) = 0x80;
    MEM8(0x807664) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0009FE0C(); return; } /* je: equal / zero */

loc_0009FDFC: ;
    MEM8(0x807665) = 0xFF;
    MEM8(0x807666) = 0;
    g_seh_ebp = ebp; sub_0009FE18(); return; /* tail jmp 0x0009FE18 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000A0160
 * Original: 0x000A0160 - 0x000A02D9 (377 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000A0160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x1F18;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_000A0170: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x46 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 1;
    SET_LO8(ebx, 1);
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_000A024C; /* jne: not equal / not zero */

loc_000A0188: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x649228); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A01B3; /* je: equal / zero */

loc_000A01A3: ;
    xmm0 = MEMF(0x648F58); /* movss */

loc_000A01AB: ;
    MEMF(0x77615C) = xmm0; /* movss */

loc_000A01B3: ;
    eax = MEM32(0x776158);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x776140) = ebp;
    if (TEST_S(eax, eax)) goto loc_000A01EE; /* jl: less (signed <) */

loc_000A01C2: ;
    if (CMP_GE(eax, 2)) goto loc_000A01EE; /* jge: greater or equal (signed >=) */

loc_000A01C7: ;
    ecx = MEM32(0x6BAF28);
    eax = eax + eax * 2;
    xmm0 = MEMF(ecx + eax * 8 + 4); /* movss */
    eax = ecx + eax * 8;
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_000A01EE: ;
    PUSH32(esp, 0x5F13F0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0xFF;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000A021A: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0xC;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x24) = 0x55;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000A0276; /* je: equal / zero */

loc_000A022E: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A029A; /* je: equal / zero */

loc_000A0242: ;
    xmm0 = MEMF(0x648D10); /* movss */
    goto loc_000A0292;

loc_000A024C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A01B3; /* je: equal / zero */

loc_000A0269: ;
    xmm0 = MEMF(0x64A70C); /* movss */
    goto loc_000A01AB;

loc_000A0276: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A029A; /* je: equal / zero */

loc_000A028A: ;
    xmm0 = MEMF(0x64A70C); /* movss */

loc_000A0292: ;
    MEMF(0x77615C) = xmm0; /* movss */

loc_000A029A: ;
    eax = MEM32(0x863D04);
    ebx = 3;
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0x32B) = 0;
    if (CMP_EQ(eax, ebx)) goto loc_000A02BC; /* je: equal / zero */

loc_000A02B3: ;
    if (CMP_EQ(eax, 2)) goto loc_000A02BC; /* je: equal / zero */

loc_000A02B8: ;
    if (CMP_NE(eax, ebp)) { sub_000A02D9(); return; } /* jne: not equal / not zero */

loc_000A02BC: ;
    if (CMP_EQ(MEM32(0x862C44), edi)) { sub_000A02D9(); return; } /* je: equal / zero */

loc_000A02C4: ;
    ecx = 0; /* xor self */
    esi = esp + 0x22C;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_000A02D2: ;
    eax = MEM32(0x863D04);
    g_seh_ebp = ebp; sub_000A02E1(); return; /* tail jmp 0x000A02E1 */

}

/**
 * sub_000A1430
 * Original: 0x000A1430 - 0x000A14D5 (165 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000A1430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x208;
    xmm0 = MEMF(0x8497DC); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    PUSH32(esp, edi);
    MEM32(0x776158) = ebp;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A1481; /* je: equal / zero */

loc_000A1471: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_000A1481: ;
    PUSH32(esp, 0x5F1264);
    SET_LO8(ebx, 0xFF);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x64);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = LO8(ebx);
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = LO8(ebx);
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000A14AB: ;
    esp = esp + 0xC;
    edi = 0x8C;
    eax = ebp;
    eax = eax - 0;
    if ((eax == 0)) { sub_000A14D5(); return; } /* je: equal / zero */

loc_000A14BA: ;
    eax--;
    if ((eax == 0)) goto loc_000A14CE; /* je: equal / zero */

loc_000A14BD: ;
    eax--;
    if ((eax == 0)) goto loc_000A14C7; /* je: equal / zero */

loc_000A14C0: ;
    eax = 0x5F122C;
    g_seh_ebp = ebp; sub_000A14DA(); return; /* tail jmp 0x000A14DA */

loc_000A14C7: ;
    eax = 0x5F123C;
    g_seh_ebp = ebp; sub_000A14DA(); return; /* tail jmp 0x000A14DA */

loc_000A14CE: ;
    eax = 0x5F1248;
    g_seh_ebp = ebp; sub_000A14DA(); return; /* tail jmp 0x000A14DA */

}

/**
 * sub_000A15E0
 * Original: 0x000A15E0 - 0x000A15E8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A15E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A15E0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_000A15E8(); return; } /* jne: not equal / not zero */

loc_000A15E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1610
 * Original: 0x000A1610 - 0x000A1622 (18 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = MEM32(edi + 4);
    if (TEST_NZ(ebp, ebp)) { sub_000A1622(); return; } /* jne: not equal / not zero */

loc_000A161E: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A163A(); return; /* tail jmp 0x000A163A */

}

/**
 * sub_000A1690
 * Original: 0x000A1690 - 0x000A16A2 (18 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = MEM32(edi + 4);
    if (TEST_NZ(ebp, ebp)) { sub_000A16A2(); return; } /* jne: not equal / not zero */

loc_000A169E: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A16BA(); return; /* tail jmp 0x000A16BA */

}

/**
 * sub_000A1710
 * Original: 0x000A1710 - 0x000A17FB (235 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1710: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_000A172E; /* je: equal / zero */

loc_000A1720: ;
    MEM32(ebp) = 0x5F1184;
    MEM32(ebp + 0x64) = 0x5F1144;

loc_000A172E: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    MEM32(ecx + ebp) = 0x5F110C;
    edx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 4) = ebx;
    edi = MEM32(edx + 4);
    edi = edi + ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_0046DDA6(); /* call 0x0046DDA6 */

loc_000A174F: ;
    esi = ebp + 8;
    PUSH32(esp, 0x20);
    eax = edi;
    MEM32(edi + 0x28) = esi;
    MEM32(edi + 0x2C) = ebx;
    PUSH32(esp, 0); sub_000A3270(); /* call 0x000A3270 */

loc_000A1761: ;
    MEM8(edi + 0x30) = LO8(eax);
    if (CMP_NE(MEM32(edi + 0x28), ebx)) goto loc_000A1778; /* jne: not equal / not zero */

loc_000A1769: ;
    eax = MEM32(edi + 8);
    eax = eax | 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0046DC85(); /* call 0x0046DC85 */

loc_000A1778: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    ebx = esi;
    MEM32(ecx + ebp) = 0x5F118C;
    PUSH32(esp, 0); sub_000A2950(); /* call 0x000A2950 */

loc_000A178F: ;
    ebx = 0; /* xor self */
    eax = esi;
    MEM32(esi) = 0x5F11B0;
    MEM32(esi + 0x48) = ebx;
    MEM8(esi + 0x54) = LO8(ebx);
    MEM8(esi + 0x4C) = LO8(ebx);
    PUSH32(esp, 0); sub_000A2A00(); /* call 0x000A2A00 */

loc_000A17A7: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(0x876AD8);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    ecx = ecx | 1;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0); sub_000A25C0(); /* call 0x000A25C0 */

loc_000A17CD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_000A17F4; /* jne: not equal / not zero */

loc_000A17D3: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + ebp + 8);
    edx = MEM32(ecx + ebp + 0x28);
    ecx = ecx + ebp;
    eax = eax | 2;
    if (CMP_NE(edx, ebx)) goto loc_000A17ED; /* jne: not equal / not zero */

loc_000A17EA: ;
    eax = eax | 4;

loc_000A17ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DC85(); /* call 0x0046DC85 */

loc_000A17F4: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A1800
 * Original: 0x000A1800 - 0x000A1892 (146 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1800(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x54));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi) = 0x5F11B0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A1819; /* je: equal / zero */

loc_000A1812: ;
    eax = edi;
    PUSH32(esp, 0); sub_000A2680(); /* call 0x000A2680 */

loc_000A1819: ;
    esi = MEM32(edi + 0x48);
    if (TEST_Z(esi, esi)) goto loc_000A1861; /* je: equal / zero */

loc_000A1820: ;
    if (CMP_B(MEM32(esi + 0x18), 0x10)) goto loc_000A183E; /* jb: below (unsigned <) */

loc_000A1826: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_000A183E; /* je: equal / zero */

loc_000A1831: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A183B: ;
    esp = esp + 4;

loc_000A183E: ;
    ecx = esp + 8;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, ecx);
    MEM8(esi + 4) = 0;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A185E: ;
    esp = esp + 4;

loc_000A1861: ;
    esi = MEM32(edi + 0x38);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi) = 0x5F1110;
    if (TEST_Z(esi, esi)) goto loc_000A1886; /* je: equal / zero */

loc_000A186E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000A4E40(); /* call 0x000A4E40 */

loc_000A1875: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A1883: ;
    esp = esp + 4;

loc_000A1886: ;
    ecx = edi + 4;
    PUSH32(esp, 0); sub_0046DE04(); /* call 0x0046DE04 */

loc_000A188E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A18A0
 * Original: 0x000A18A0 - 0x000A18BA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A18A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A18A0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) { sub_000A18BA(); return; } /* jne: not equal / not zero */

loc_000A18B0: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1A90
 * Original: 0x000A1A90 - 0x000A1ACF (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1A90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1A90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_000A1ACF(); return; } /* je: equal / zero */

loc_000A1AA1: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_AE(MEM32(ecx), eax)) { sub_000A1ACF(); return; } /* jae: above or equal (unsigned >=) */

loc_000A1AA8: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_000A1AB5; /* je: equal / zero */

loc_000A1AAD: ;
    edx = ZX8(MEM8(eax + -1));
    if (CMP_NE(edx, ebx)) { sub_000A1ACF(); return; } /* jne: not equal / not zero */

loc_000A1AB5: ;
    eax = MEM32(esi + 0x30);
    MEM32(eax) = MEM32(eax) + 1;
    esi = MEM32(esi + 0x20);
    MEM32(esi) = MEM32(esi) - 1;
    eax = 0; /* xor self */
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ebx, 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    eax--;
    eax = eax & ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1B30
 * Original: 0x000A1B30 - 0x000A1B50 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) { sub_000A1B50(); return; } /* je: equal / zero */

loc_000A1B3C: ;
    edx = eax;
    eax = MEM32(edx);
    edx = MEM32(esi + 0x30);
    edx = MEM32(edx);
    edx = edx + eax;
    if (CMP_AE(eax, edx)) { sub_000A1B50(); return; } /* jae: above or equal (unsigned >=) */

loc_000A1B4B: ;
    eax = ZX8(MEM8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1B80
 * Original: 0x000A1B80 - 0x000A1BAF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1B80: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x20);
    if (CMP_EQ(MEM32(ecx), 0)) { sub_000A1BAF(); return; } /* je: equal / zero */

loc_000A1B8E: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    edx = edx + ecx;
    if (CMP_AE(ecx, edx)) { sub_000A1BAF(); return; } /* jae: above or equal (unsigned >=) */

loc_000A1B9B: ;
    MEM32(eax) = MEM32(eax) - 1;
    edi = MEM32(edi + 0x20);
    eax = MEM32(edi);
    ecx = eax + 1;
    MEM32(edi) = ecx;
    eax = ZX8(MEM8(eax));
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1D40
 * Original: 0x000A1D40 - 0x000A1E4D (269 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1D40: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(edi + 0x30);
    eax = MEM32(ecx);
    edx = MEM32(edx);
    edx = edx + eax;
    if (CMP_BE(edx, eax)) goto loc_000A1DBD; /* jbe: below or equal (unsigned <=) */

loc_000A1D5B: ;
    edx = MEM32(ecx);
    eax = edi + 0x44;
    if (CMP_NE(edx, eax)) goto loc_000A1DBD; /* jne: not equal / not zero */

loc_000A1D64: ;
    if (CMP_NE(ebp, 1)) goto loc_000A1DBD; /* jne: not equal / not zero */

loc_000A1D69: ;
    eax = MEM32(edi + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_000A1D76; /* jne: not equal / not zero */

loc_000A1D70: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    goto loc_000A1DBD;

loc_000A1D76: ;
    ecx = MEM32(edi + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    if (CMP_LE(esi & esi, 0)) goto loc_000A1DAA; /* jle: less or equal (signed <=) */

loc_000A1D81: ;
    eax = MEM32(edi + 0x48);
    ecx = MEM32(eax + 0x18);
    esi--;
    if (CMP_B(ecx, 0x10)) goto loc_000A1D92; /* jb: below (unsigned <) */

loc_000A1D8D: ;
    eax = MEM32(eax + 4);
    goto loc_000A1D95;

loc_000A1D92: ;
    eax = eax + 4;

loc_000A1D95: ;
    edx = MEM32(edi + 0x58);
    eax = (uint32_t)(int32_t)SMEM8(eax + esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F869(); /* call 0x0046F869 */

loc_000A1DA3: ;
    esp = esp + 8;
    if (CMP_G(esi & esi, 0)) goto loc_000A1D81; /* jg: greater (signed >) */

loc_000A1DAA: ;
    ecx = MEM32(edi + 0x48);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000145A0(); /* call 0x000145A0 */

loc_000A1DB6: ;
    ecx = MEM32(edi + 0x40);
    MEM32(edi + 0x50) = ecx;
    POP32(esp, esi);

loc_000A1DBD: ;
    eax = MEM32(edi + 0x58);
    if (TEST_Z(eax, eax)) { sub_000A1E4D(); return; } /* je: equal / zero */

loc_000A1DC8: ;
    PUSH32(esp, 0); sub_000A26D0(); /* call 0x000A26D0 */

loc_000A1DCD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000A1E4D(); return; } /* je: equal / zero */

loc_000A1DD1: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_000A1DDE; /* jne: not equal / not zero */

loc_000A1DD9: ;
    if (CMP_EQ(ebp, 1)) goto loc_000A1DF0; /* je: equal / zero */

loc_000A1DDE: ;
    edx = MEM32(edi + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F481(); /* call 0x0046F481 */

loc_000A1DE9: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) { sub_000A1E4D(); return; } /* jne: not equal / not zero */

loc_000A1DF0: ;
    ecx = MEM32(edi + 0x58);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F8AE(); /* call 0x0046F8AE */

loc_000A1DFE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000A1E4D(); return; } /* jne: not equal / not zero */

loc_000A1E05: ;
    edx = MEM32(edi + 0x20);
    ecx = MEM32(edx);
    eax = edi + 0x44;
    if (CMP_NE(ecx, eax)) goto loc_000A1E27; /* jne: not equal / not zero */

loc_000A1E11: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx) = eax;
    edx = MEM32(edi + 0x20);
    ecx = edi;
    MEM32(edx) = eax;
    edx = MEM32(edi + 0x30);
    ecx = ecx - eax;
    ecx = ecx + 0x44;
    MEM32(edx) = ecx;

loc_000A1E27: ;
    edi = MEM32(edi + 0x50);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = edi;
    POP32(esp, edi);
    MEM32(eax) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A1E80
 * Original: 0x000A1E80 - 0x000A1F54 (212 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1E80: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 4) = eax;
    eax = MEM32(edi + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (TEST_Z(eax, eax)) { sub_000A1F54(); return; } /* je: equal / zero */

loc_000A1EA1: ;
    PUSH32(esp, 0); sub_000A26D0(); /* call 0x000A26D0 */

loc_000A1EA6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000A1F54(); return; } /* je: equal / zero */

loc_000A1EAE: ;
    eax = MEM32(edi + 0x58);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F8D0(); /* call 0x0046F8D0 */

loc_000A1EBC: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000A1F54(); return; } /* jne: not equal / not zero */

loc_000A1EC7: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000A1EE2; /* je: equal / zero */

loc_000A1ECF: ;
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F481(); /* call 0x0046F481 */

loc_000A1EDB: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) { sub_000A1F54(); return; } /* jne: not equal / not zero */

loc_000A1EE2: ;
    eax = MEM32(edi + 0x58);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F8AE(); /* call 0x0046F8AE */

loc_000A1EF0: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000A1F54(); return; } /* jne: not equal / not zero */

loc_000A1EF7: ;
    ecx = MEM32(edi + 0x48);
    if (TEST_Z(ecx, ecx)) goto loc_000A1F0D; /* je: equal / zero */

loc_000A1EFE: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    MEM32(edi + 0x50) = edx;
    PUSH32(esp, 0); sub_000145A0(); /* call 0x000145A0 */

loc_000A1F0D: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx);
    eax = edi + 0x44;
    if (CMP_NE(edx, eax)) goto loc_000A1F2F; /* jne: not equal / not zero */

loc_000A1F19: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx) = eax;
    ecx = MEM32(edi + 0x20);
    edx = edi;
    edx = edx - eax;
    MEM32(ecx) = eax;
    eax = MEM32(edi + 0x30);
    edx = edx + 0x44;
    MEM32(eax) = edx;

loc_000A1F2F: ;
    edi = MEM32(edi + 0x50);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x10) = edi;
    MEM32(eax) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000A1F90
 * Original: 0x000A1F90 - 0x000A1FCB (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1F90: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x58);
    if (TEST_Z(ecx, ecx)) { sub_000A1FCB(); return; } /* je: equal / zero */

loc_000A1F9A: ;
    edx = MEM32(esp + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(edx, edx)) goto loc_000A1FB2; /* jne: not equal / not zero */

loc_000A1FA7: ;
    if (TEST_NZ(esi, esi)) goto loc_000A1FB2; /* jne: not equal / not zero */

loc_000A1FAB: ;
    eax = 4;
    goto loc_000A1FB4;

loc_000A1FB2: ;
    eax = 0; /* xor self */

loc_000A1FB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F8E8(); /* call 0x0046F8E8 */

loc_000A1FBD: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_000A1FCB(); return; } /* jne: not equal / not zero */

loc_000A1FC5: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1FE0
 * Original: 0x000A1FE0 - 0x000A200B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A1FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x58);
    if (TEST_Z(eax, eax)) { sub_000A200B(); return; } /* je: equal / zero */

loc_000A1FEA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000A1FF1: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_000A200B(); return; } /* je: equal / zero */

loc_000A1FF6: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FB24(); /* call 0x0046FB24 */

loc_000A1FFF: ;
    esp = esp + 4;
    if (CMP_GE(eax & eax, 0)) { sub_000A200B(); return; } /* jge: greater or equal (signed >=) */

loc_000A2006: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2010
 * Original: 0x000A2010 - 0x000A202A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2010(void)
{

loc_000A2010: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_000A3610(); /* call 0x000A3610 */

loc_000A201D: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A2800(); /* call 0x000A2800 */

loc_000A2026: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2030
 * Original: 0x000A2030 - 0x000A2091 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2030(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A2030: ;
    PUSH32(esp, ebx);
    ebx = ecx + -100;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ebx + 0x64;
    PUSH32(esp, edi);
    MEM32(ecx + esi + -100) = 0x5F118C;
    edi = esi + -92;
    ecx = edi;
    PUSH32(esp, 0); sub_000A1800(); /* call 0x000A1800 */

loc_000A2050: ;
    edx = MEM32(edi + -8);
    eax = MEM32(edx + 4);
    MEM32(eax + edi + -8) = 0x5F110C;
    ecx = esi;
    MEM32(esi) = 0x5F1144;
    PUSH32(esp, 0); sub_0046DB9B(); /* call 0x0046DB9B */

loc_000A206B: ;
    (void)0; /* test MEM8(esp + 0x10), 1 - flags set for next jcc */
    eax = ebx;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_000A208B; /* je: equal / zero */

loc_000A2074: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_000A2089; /* je: equal / zero */

loc_000A207C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A2086: ;
    esp = esp + 4;

loc_000A2089: ;
    eax = ebx;

loc_000A208B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A20A0
 * Original: 0x000A20A0 - 0x000A20CA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A20A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A20A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000A1800(); /* call 0x000A1800 */

loc_000A20A8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000A20C4; /* je: equal / zero */

loc_000A20AF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000A20C4; /* je: equal / zero */

loc_000A20B7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A20C1: ;
    esp = esp + 4;

loc_000A20C4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A20D0
 * Original: 0x000A20D0 - 0x000A2198 (200 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A20D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A20D0: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax | 0xFFFFFFFFu;
    eax = eax - edx;
    if (CMP_A(eax, edi)) goto loc_000A20E6; /* ja: above (unsigned >) */

loc_000A20DF: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DAF7(); /* call 0x0046DAF7 */

loc_000A20E6: ;
    if (CMP_BE(edi & edi, 0)) goto loc_000A2192; /* jbe: below or equal (unsigned <=) */

loc_000A20EE: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x14);
    ebp = ebp + edi;
    if (CMP_BE(ebp, 0xFFFFFFFEu)) goto loc_000A2100; /* jbe: below or equal (unsigned <=) */

loc_000A20F9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DAF7(); /* call 0x0046DAF7 */

loc_000A2100: ;
    eax = MEM32(esi + 0x18);
    if (CMP_AE(eax, ebp)) goto loc_000A2122; /* jae: above or equal (unsigned >=) */

loc_000A2107: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_00014620(); /* call 0x00014620 */

loc_000A2113: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */

loc_000A2115: ;
    if (CMP_BE(ebp & ebp, 0)) goto loc_000A2191; /* jbe: below or equal (unsigned <=) */

loc_000A2117: ;
    if (CMP_B(MEM32(esi + 0x18), 0x10)) goto loc_000A2148; /* jb: below (unsigned <) */

loc_000A211D: ;
    edx = MEM32(esi + 4);
    goto loc_000A214B;

loc_000A2122: ;
    if (TEST_NZ(ebp, ebp)) goto loc_000A2115; /* jne: not equal / not zero */

loc_000A2126: ;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    MEM32(esi + 0x14) = ebp;
    if (CMP_B(eax, 0x10)) goto loc_000A213B; /* jb: below (unsigned <) */

loc_000A212E: ;
    eax = MEM32(esi + 4);
    POP32(esp, ebp);
    MEM8(eax) = 0;
    eax = esi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000A213B: ;
    eax = esi + 4;
    POP32(esp, ebp);
    MEM8(eax) = 0;
    eax = esi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000A2148: ;
    edx = esi + 4;

loc_000A214B: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0xC);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    ecx = edi;
    edi = MEM32(esi + 0x14);
    edi = edi + edx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = ebx;
    eax = eax << 0x10;
    SET_LO16(eax, LO16(ebx));
    POP32(esp, ebx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    (void)0; /* cmp MEM32(esi + 0x18), 0x10 - flags set for next jcc */
    MEM32(esi + 0x14) = ebp;
    if (CMP_B(MEM32(esi + 0x18), 0x10)) goto loc_000A218A; /* jb: below (unsigned <) */

loc_000A217C: ;
    eax = MEM32(esi + 4);
    MEM8(eax + ebp) = 0;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000A218A: ;
    eax = esi + 4;
    MEM8(eax + ebp) = 0;

loc_000A2191: ;
    POP32(esp, ebp);

loc_000A2192: ;
    eax = esi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A21A0
 * Original: 0x000A21A0 - 0x000A21F5 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A21A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A21A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F760);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 8);
    edi = 0; /* xor self */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -24) = edi;
    MEM32(esi + 4) = edi;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + esi + 0x28);
    if (CMP_EQ(eax, edi)) goto loc_000A21E4; /* je: equal / zero */

loc_000A21DC: ;
    ecx = eax + 4;
    PUSH32(esp, 0); sub_0046DE19(); /* call 0x0046DE19 */

loc_000A21E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A4F00(); /* call 0x000A4F00 */

loc_000A21EC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000A21F5(); return; } /* jne: not equal / not zero */

loc_000A21F0: ;
    ebx = ebx | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_000A225A(); return; /* tail jmp 0x000A225A */

}

/**
 * sub_000A22B0
 * Original: 0x000A22B0 - 0x000A22E4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A22B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A22B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_000A22E0; /* je: equal / zero */

loc_000A22C2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_000A22E4(); return; } /* jne: not equal / not zero */

loc_000A22E0: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A22FB(); return; /* tail jmp 0x000A22FB */

}

/**
 * sub_000A2320
 * Original: 0x000A2320 - 0x000A2367 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2320(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A2320: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_000A2350; /* je: equal / zero */

loc_000A2328: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A3D60(); /* call 0x000A3D60 */

loc_000A2335: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_000A2350; /* je: equal / zero */

loc_000A2344: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A234D: ;
    esp = esp + 4;

loc_000A2350: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2370
 * Original: 0x000A2370 - 0x000A238E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2370(void)
{

loc_000A2370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000A3C00(); /* call 0x000A3C00 */

loc_000A2381: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2390
 * Original: 0x000A2390 - 0x000A244C (188 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2390: ;
    edx = MEM32(esi + 0x14);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = eax - edx;
    if (CMP_A(eax, ebp)) goto loc_000A23A8; /* ja: above (unsigned >) */

loc_000A23A1: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DAF7(); /* call 0x0046DAF7 */

loc_000A23A8: ;
    if (CMP_BE(ebp & ebp, 0)) goto loc_000A2446; /* jbe: below or equal (unsigned <=) */

loc_000A23B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x14);
    ebx = ebx + ebp;
    if (CMP_BE(ebx, 0x7FFFFFFE)) goto loc_000A23C5; /* jbe: below or equal (unsigned <=) */

loc_000A23BE: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DAF7(); /* call 0x0046DAF7 */

loc_000A23C5: ;
    eax = MEM32(esi + 0x18);
    if (CMP_AE(eax, ebx)) goto loc_000A23E8; /* jae: above or equal (unsigned >=) */

loc_000A23CC: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A3490(); /* call 0x000A3490 */

loc_000A23D7: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */

loc_000A23D9: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_000A2445; /* jbe: below or equal (unsigned <=) */

loc_000A23DB: ;
    (void)0; /* cmp MEM32(esi + 0x18), 8 - flags set for next jcc */
    edx = esi + 4;
    if (CMP_B(MEM32(esi + 0x18), 8)) goto loc_000A2410; /* jb: below (unsigned <) */

loc_000A23E4: ;
    eax = MEM32(edx);
    goto loc_000A2412;

loc_000A23E8: ;
    if (TEST_NZ(ebx, ebx)) goto loc_000A23D9; /* jne: not equal / not zero */

loc_000A23EC: ;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(esi + 0x14) = ebx;
    if (CMP_B(eax, 8)) goto loc_000A2401; /* jb: below (unsigned <) */

loc_000A23F4: ;
    eax = MEM32(esi + 4);
    MEM16(eax) = LO16(ebx);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000A2401: ;
    eax = esi + 4;
    POP32(esp, ebx);
    MEM16(eax) = 0;
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000A2410: ;
    eax = edx;

loc_000A2412: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = eax + ecx * 2;
    eax = MEM32(esp + 0x14);
    ecx = ebp;
    SET_LO16(ebp, LO16(eax));
    ebp = ebp << 0x10;
    SET_LO16(ebp, LO16(eax));
    ecx = ecx >> 1;
    eax = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */
    (void)0; /* cmp MEM32(esi + 0x18), 8 - flags set for next jcc */
    MEM32(esi + 0x14) = ebx;
    POP32(esp, edi);
    if (CMP_B(MEM32(esi + 0x18), 8)) goto loc_000A243F; /* jb: below (unsigned <) */

loc_000A243D: ;
    edx = MEM32(edx);

loc_000A243F: ;
    MEM16(edx + ebx * 2) = 0;

loc_000A2445: ;
    POP32(esp, ebx);

loc_000A2446: ;
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2450
 * Original: 0x000A2450 - 0x000A2462 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM32(esi + 0x18), 8 - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = esi + 4;
    if (CMP_B(MEM32(esi + 0x18), 8)) { sub_000A2462(); return; } /* jb: below (unsigned <) */

loc_000A245E: ;
    eax = MEM32(ebx);
    g_seh_ebp = ebp; sub_000A2464(); return; /* tail jmp 0x000A2464 */

}

/**
 * sub_000A24B0
 * Original: 0x000A24B0 - 0x000A24B8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A24B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A24B0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_000A24B8(); return; } /* jne: not equal / not zero */

loc_000A24B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A24E0
 * Original: 0x000A24E0 - 0x000A2514 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A24E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A24E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_000A2510; /* je: equal / zero */

loc_000A24F2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_000A2514(); return; } /* jne: not equal / not zero */

loc_000A2510: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A252B(); return; /* tail jmp 0x000A252B */

}

/**
 * sub_000A2550
 * Original: 0x000A2550 - 0x000A2596 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2550(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A2550: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_000A257F; /* je: equal / zero */

loc_000A2558: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A3DE0(); /* call 0x000A3DE0 */

loc_000A2566: ;
    eax = MEM32(esi + 4);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_000A257F; /* je: equal / zero */

loc_000A2573: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A257C: ;
    esp = esp + 4;

loc_000A257F: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A25A0
 * Original: 0x000A25A0 - 0x000A25BE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25A0(void)
{

loc_000A25A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000A3C90(); /* call 0x000A3C90 */

loc_000A25B1: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A25C0
 * Original: 0x000A25C0 - 0x000A266E (174 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A25C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_000A266E(); return; } /* jne: not equal / not zero */

loc_000A25CD: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DE2B(); /* call 0x0046DE2B */

loc_000A25D9: ;
    edi = eax;
    esp = esp + 0xC;
    if (TEST_Z(edi, edi)) { sub_000A266E(); return; } /* je: equal / zero */

loc_000A25E6: ;
    eax = esi;
    MEM8(esi + 0x54) = 1;
    MEM8(esi + 0x4C) = 0;
    PUSH32(esp, 0); sub_000A2A00(); /* call 0x000A2A00 */

loc_000A25F5: ;
    eax = edi + 8;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = edi + 4;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(0x876AD8);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x3C) = 0;
    edi = MEM32(eax);
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A2636: ;
    eax = MEM32(edi + 4);
    if (CMP_AE(eax, 0xFFFFFFFFu)) goto loc_000A2642; /* jae: above or equal (unsigned >=) */

loc_000A263E: ;
    eax++;
    MEM32(edi + 4) = eax;

loc_000A2642: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A264B: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A3610(); /* call 0x000A3610 */

loc_000A2655: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A2800(); /* call 0x000A2800 */

loc_000A265E: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_000A4E40(); /* call 0x000A4E40 */

loc_000A2667: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2680
 * Original: 0x000A2680 - 0x000A26C9 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2680(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A2680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x58);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_000A26C9(); return; } /* je: equal / zero */

loc_000A268D: ;
    PUSH32(esp, 0); sub_000A26D0(); /* call 0x000A26D0 */

loc_000A2692: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000A26C9(); return; } /* je: equal / zero */

loc_000A2696: ;
    eax = MEM32(edi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F3A1(); /* call 0x0046F3A1 */

loc_000A269F: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_000A26C9(); return; } /* jne: not equal / not zero */

loc_000A26A6: ;
    eax = edi;
    MEM8(edi + 0x54) = LO8(ebx);
    MEM8(edi + 0x4C) = LO8(ebx);
    PUSH32(esp, 0); sub_000A2A00(); /* call 0x000A2A00 */

loc_000A26B3: ;
    eax = MEM32(0x876AD8);
    MEM32(edi + 0x50) = eax;
    MEM32(edi + 0x40) = eax;
    MEM32(edi + 0x58) = ebx;
    MEM32(edi + 0x3C) = ebx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A26D0
 * Original: 0x000A26D0 - 0x000A27EB (283 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A26D0: ;
    eax = MEM32(edi + 0x3C);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_000A27EB(); return; } /* je: equal / zero */

loc_000A26E1: ;
    if (CMP_EQ(MEM8(edi + 0x4C), LO8(ebx))) { sub_000A27EB(); return; } /* je: equal / zero */

loc_000A26EA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000A26F3: ;
    edx = 0; /* xor self */
    eax = 0xF;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    ecx = edx;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = 8;
    if (CMP_AE(eax, 0x10)) goto loc_000A271D; /* jae: above or equal (unsigned >=) */

loc_000A2719: ;
    ecx = esp + 0xC;

loc_000A271D: ;
    PUSH32(esp, ebp);
    MEM8(ecx + 8) = LO8(ebx);
    ebp = edi + 0x50;
    PUSH32(esp, esi);

loc_000A2725: ;
    ecx = MEM32(esp + 0x28);
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    edx = eax;
    if (CMP_AE(ecx, 0x10)) goto loc_000A273A; /* jae: above or equal (unsigned >=) */

loc_000A2734: ;
    edx = esp + 0x14;
    eax = edx;

loc_000A273A: ;
    ecx = MEM32(edi + 0x3C);
    esi = MEM32(ecx);
    ebx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x18), _icall_esp); /* indirect call */
    }

loc_000A2750: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_000A276F; /* je: equal / zero */

loc_000A2755: ;
    eax--;
    if ((eax == 0)) goto loc_000A2773; /* je: equal / zero */

loc_000A2758: ;
    eax = eax - 2;
    ecx = esp + 0x10;
    if ((eax == 0)) goto loc_000A27DD; /* je: equal / zero */

loc_000A2761: ;
    PUSH32(esp, 0); sub_00014900(); /* call 0x00014900 */

loc_000A2766: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_000A276F: ;
    MEM8(edi + 0x4C) = 0;

loc_000A2773: ;
    edx = MEM32(esp + 0x28);
    (void)0; /* cmp edx, 0x10 - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    if (CMP_AE(edx, 0x10)) goto loc_000A2786; /* jae: above or equal (unsigned >=) */

loc_000A2782: ;
    ecx = esp + 0x14;

loc_000A2786: ;
    esi = MEM32(esp + 0xC);
    esi = esi - ecx;
    if ((esi == 0)) goto loc_000A27AB; /* je: equal / zero */

loc_000A278E: ;
    if (CMP_AE(edx, 0x10)) goto loc_000A2797; /* jae: above or equal (unsigned >=) */

loc_000A2793: ;
    eax = esp + 0x14;

loc_000A2797: ;
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F761(); /* call 0x0046F761 */

loc_000A27A4: ;
    esp = esp + 0x10;
    if (CMP_NE(esi, eax)) goto loc_000A27C7; /* jne: not equal / not zero */

loc_000A27AB: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A27D9; /* je: equal / zero */

loc_000A27B2: ;
    PUSH32(esp, 0);
    eax = 8;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_000A20D0(); /* call 0x000A20D0 */

loc_000A27C2: ;
    goto loc_000A2725;

loc_000A27C7: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00014900(); /* call 0x00014900 */

loc_000A27D0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_000A27D9: ;
    ecx = esp + 0x10;

loc_000A27DD: ;
    PUSH32(esp, 0); sub_00014900(); /* call 0x00014900 */

loc_000A27E2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2800
 * Original: 0x000A2800 - 0x000A281F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2800: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000A280F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000A281F(); return; } /* je: equal / zero */

loc_000A2813: ;
    POP32(esp, esi);
    MEM32(ebp + 0x3C) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A28E0
 * Original: 0x000A28E0 - 0x000A28FC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A28E0(void)
{

loc_000A28E0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = 3;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000A2900
 * Original: 0x000A2900 - 0x000A2908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2900(void)
{

loc_000A2900: ;
    eax = 3;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A2910
 * Original: 0x000A2910 - 0x000A2927 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2910(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A2910: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    eax = eax - ecx;
    ecx = MEM32(esp + 0x10);
    if (CMP_AE(ecx, eax)) goto loc_000A2924; /* jae: above or equal (unsigned >=) */

loc_000A2922: ;
    eax = ecx;

loc_000A2924: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A2930
 * Original: 0x000A2930 - 0x000A2942 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2930(void)
{

loc_000A2930: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x18) = 0xF;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 4) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2950
 * Original: 0x000A2950 - 0x000A29ED (157 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2950(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A2950: ;
    ecx = ebx + 4;
    MEM32(ebx) = 0x5F1110;
    PUSH32(esp, 0); sub_0046DDEC(); /* call 0x0046DDEC */

loc_000A295E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000A296C; /* jne: not equal / not zero */

loc_000A2967: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000A296C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000A29B6; /* je: equal / zero */

loc_000A2994: ;
    if (CMP_B(MEM32(esi + 0x80), 4)) goto loc_000A29B6; /* jb: below (unsigned <) */

loc_000A299D: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000A29A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000A29AF: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000A29D7; /* jne: not equal / not zero */

loc_000A29B6: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000A29C8: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000A29D0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_000A29ED(); return; } /* je: equal / zero */

loc_000A29D7: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0046E26E(); /* call 0x0046E26E */

loc_000A29DE: ;
    MEM32(ebx + 0x38) = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_000A2A00(); /* call 0x000A2A00 */

loc_000A29E8: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A00
 * Original: 0x000A2A00 - 0x000A2A58 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A00(void)
{

loc_000A2A00: ;
    edx = eax + 0x18;
    MEM32(eax + 0x20) = edx;
    edx = eax + 0x1C;
    MEM32(eax + 0x24) = edx;
    ecx = eax + 8;
    MEM32(eax + 0x10) = ecx;
    edx = eax + 0x28;
    MEM32(eax + 0x30) = edx;
    ecx = eax + 0xC;
    MEM32(eax + 0x14) = ecx;
    edx = eax + 0x2C;
    MEM32(eax + 0x34) = edx;
    MEM32(ecx) = 0;
    ecx = MEM32(eax + 0x24);
    MEM32(ecx) = 0;
    edx = MEM32(eax + 0x34);
    MEM32(edx) = 0;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx) = 0;
    edx = MEM32(eax + 0x20);
    MEM32(edx) = 0;
    eax = MEM32(eax + 0x30);
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A60
 * Original: 0x000A2A60 - 0x000A2AAB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A2A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FA00);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    MEM32(ebp + -72) = 7;
    edi = 0; /* xor self */
    MEM32(ebp + -76) = edi;
    MEM16(ebp + -92) = LO16(edi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    ebx = ebp + -96;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A2A9D: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 4);
    if (CMP_NE(ecx, edi)) { sub_000A2AAB(); return; } /* jne: not equal / not zero */

loc_000A2AA7: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A2AC3(); return; /* tail jmp 0x000A2AC3 */

}

/**
 * sub_000A2DA0
 * Original: 0x000A2DA0 - 0x000A2DB7 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2DA0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    ebp = ebx + 4;
    if (CMP_B(ecx, 8)) { sub_000A2DB7(); return; } /* jb: below (unsigned <) */

loc_000A2DB2: ;
    eax = MEM32(ebp);
    g_seh_ebp = ebp; sub_000A2DB9(); return; /* tail jmp 0x000A2DB9 */

}

/**
 * sub_000A2E80
 * Original: 0x000A2E80 - 0x000A2EF7 (119 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2E80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_AE(MEM32(esi + 0x14), ebp)) goto loc_000A2E94; /* jae: above or equal (unsigned >=) */

loc_000A2E8D: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_000A2E94: ;
    eax = MEM32(esi + 0x14);
    eax = eax - ebp;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    if (CMP_B(eax, edi)) edi = eax; /* cmovb */
    if (CMP_BE(edi & edi, 0)) goto loc_000A2EF0; /* jbe: below or equal (unsigned <=) */

loc_000A2EA2: ;
    ecx = MEM32(esi + 0x18);
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = esi + 4;
    if (CMP_B(ecx, 8)) goto loc_000A2EB2; /* jb: below (unsigned <) */

loc_000A2EAE: ;
    edx = MEM32(ebx);
    goto loc_000A2EB4;

loc_000A2EB2: ;
    edx = ebx;

loc_000A2EB4: ;
    if (CMP_B(ecx, 8)) goto loc_000A2EBD; /* jb: below (unsigned <) */

loc_000A2EB9: ;
    ecx = MEM32(ebx);
    goto loc_000A2EBF;

loc_000A2EBD: ;
    ecx = ebx;

loc_000A2EBF: ;
    eax = eax - edi;
    eax = eax << 1;
    PUSH32(esp, eax);
    eax = edi + ebp;
    edx = edx + eax * 2;
    PUSH32(esp, edx);
    eax = ecx + ebp * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_000A2ED4: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    eax = eax - edi;
    esp = esp + 0xC;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (CMP_B(ecx, 8)) goto loc_000A2EE9; /* jb: below (unsigned <) */

loc_000A2EE7: ;
    ebx = MEM32(ebx);

loc_000A2EE9: ;
    MEM16(ebx + eax * 2) = 0;
    POP32(esp, ebx);

loc_000A2EF0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2F00
 * Original: 0x000A2F00 - 0x000A2F6D (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A2F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE60);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    MEM32(ebp + -100) = 7;
    edi = 0; /* xor self */
    MEM32(ebp + -104) = edi;
    MEM16(ebp + -120) = LO16(edi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    ebx = ebp + -124;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A2F3F: ;
    eax = esi + 0x1C;
    ecx = MEM32(eax);
    MEM32(ebp + -96) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -92) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -88) = eax;
    ecx = esi + 0x28;
    edx = ebp + -84;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000A32D0(); /* call 0x000A32D0 */

loc_000A2F5F: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 4);
    if (CMP_NE(ecx, edi)) { sub_000A2F6D(); return; } /* jne: not equal / not zero */

loc_000A2F69: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A2F85(); return; /* tail jmp 0x000A2F85 */

}

/**
 * sub_000A3270
 * Original: 0x000A3270 - 0x000A32C8 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3270(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3270: ;
    esp = esp - 8;
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A3288: ;
    eax = MEM32(esi + 4);
    if (CMP_AE(eax, 0xFFFFFFFFu)) goto loc_000A3294; /* jae: above or equal (unsigned >=) */

loc_000A3290: ;
    eax++;
    MEM32(esi + 4) = eax;

loc_000A3294: ;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A329D: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000A49D0(); /* call 0x000A49D0 */

loc_000A32A7: ;
    esp = esp + 4;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0); sub_000A4E40(); /* call 0x000A4E40 */

loc_000A32B5: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_000A32C1: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A32D0
 * Original: 0x000A32D0 - 0x000A3362 (146 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A32D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A32D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FBC0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_000A3315; /* je: equal / zero */

loc_000A32FD: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_000A3315: ;
    PUSH32(esp, 0); sub_0022E0C0(); /* call 0x0022E0C0 */

loc_000A331A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A3346; /* je: equal / zero */

loc_000A331E: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    edi = MEM32(edi + 4);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_000A37E0(); /* call 0x000A37E0 */

loc_000A3343: ;
    MEM32(esi + 8) = eax;

loc_000A3346: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3380
 * Original: 0x000A3380 - 0x000A33CB (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3380: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    edi = eax;
    eax = MEM32(esp + 0x10);
    if (CMP_AE(ecx, eax)) goto loc_000A3399; /* jae: above or equal (unsigned >=) */

loc_000A3392: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_000A3399: ;
    ebp = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x10);
    ebp = ebp - eax;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    if (CMP_B(edi, ebp)) ebp = edi; /* cmovb */
    if (CMP_NE(ebx, esi)) { sub_000A33CB(); return; } /* jne: not equal / not zero */

loc_000A33AB: ;
    ebp = ebp + eax;
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    esi = ebx;
    PUSH32(esp, 0); sub_000A2E80(); /* call 0x000A2E80 */

loc_000A33B8: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000A2E80(); /* call 0x000A2E80 */

loc_000A33C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3490
 * Original: 0x000A3490 - 0x000A34C8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A3490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F690);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    ebx = eax;
    ebx = ebx | 7;
    esi = MEM32(ebp + 8);
    if (CMP_BE(ebx, 0x7FFFFFFE)) { sub_000A34C8(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A34C4: ;
    ebx = eax;
    g_seh_ebp = ebp; sub_000A34EA(); return; /* tail jmp 0x000A34EA */

}

/**
 * sub_000A35F0
 * Original: 0x000A35F0 - 0x000A3609 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A35F0(void)
{

loc_000A35F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    ecx = eax + eax;
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000A3605: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3610
 * Original: 0x000A3610 - 0x000A36E2 (210 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3610(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3610: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A3620: ;
    eax = MEM32(0x87C924);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(0x875618);
    MEM32(esp + 8) = edi;
    if (TEST_NZ(eax, eax)) goto loc_000A3660; /* jne: not equal / not zero */

loc_000A3633: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A363E: ;
    eax = MEM32(0x87C924);
    if (TEST_NZ(eax, eax)) goto loc_000A3657; /* jne: not equal / not zero */

loc_000A3647: ;
    eax = MEM32(0x75F6EC);
    eax++;
    MEM32(0x75F6EC) = eax;
    MEM32(0x87C924) = eax;

loc_000A3657: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A3660: ;
    eax = MEM32(0x87C924);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DF46(); /* call 0x0046DF46 */

loc_000A366F: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_000A36D1; /* jne: not equal / not zero */

loc_000A3675: ;
    if (TEST_Z(edi, edi)) goto loc_000A368C; /* je: equal / zero */

loc_000A3679: ;
    ecx = esp + 0x10;
    esi = edi;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A3684: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000A368C: ;
    PUSH32(esp, ebx);
    ebx = esp + 0xC;
    PUSH32(esp, 0); sub_000A39B0(); /* call 0x000A39B0 */

loc_000A3696: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000A36B9; /* jne: not equal / not zero */

loc_000A369C: ;
    PUSH32(esp, 0x5F1174);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_0046E5F9(); /* call 0x0046E5F9 */

loc_000A36AA: ;
    PUSH32(esp, 0x64B6B4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_000A36B9: ;
    esi = MEM32(esp + 8);
    ecx = esi;
    MEM32(0x875618) = esi;
    PUSH32(esp, 0); sub_000A4970(); /* call 0x000A4970 */

loc_000A36CA: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DFBE(); /* call 0x0046DFBE */

loc_000A36D1: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A36DA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000A36F0
 * Original: 0x000A36F0 - 0x000A370B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A36F0(void)
{

loc_000A36F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A4320(); /* call 0x000A4320 */

loc_000A3705: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3710
 * Original: 0x000A3710 - 0x000A372C (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3710(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3710: ;
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_EQ(ebx, esi)) goto loc_000A372A; /* je: equal / zero */

loc_000A3717: ;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A3723: ;
    ebx = ebx + 0x1C;
    if (CMP_NE(ebx, esi)) goto loc_000A3717; /* jne: not equal / not zero */

loc_000A372A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3730
 * Original: 0x000A3730 - 0x000A374C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3730(void)
{

loc_000A3730: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A43B0(); /* call 0x000A43B0 */

loc_000A3746: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3750
 * Original: 0x000A3750 - 0x000A379A (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3750: ;
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_EQ(ebx, MEM32(esp + 8))) goto loc_000A3798; /* je: equal / zero */

loc_000A3759: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebp = esi + 0x28;

loc_000A3761: ;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A376D: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = ebx + 0x1C;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, ebp);
    eax = ebx + 0x28;
    PUSH32(esp, 0); sub_000A3800(); /* call 0x000A3800 */

loc_000A378B: ;
    eax = MEM32(esp + 0x10);
    ebx = ebx + 0x38;
    if (CMP_NE(ebx, eax)) goto loc_000A3761; /* jne: not equal / not zero */

loc_000A3796: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000A3798: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A37A0
 * Original: 0x000A37A0 - 0x000A37B6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A37A0(void)
{

loc_000A37A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_000913D0(); /* call 0x000913D0 */

loc_000A37B0: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A37C0
 * Original: 0x000A37C0 - 0x000A37D8 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A37C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A37C0: ;
    if (CMP_EQ(eax, edx)) goto loc_000A37D7; /* je: equal / zero */

loc_000A37C4: ;
    PUSH32(esp, esi);

loc_000A37C5: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    eax = eax + 8;
    if (CMP_NE(eax, edx)) goto loc_000A37C5; /* jne: not equal / not zero */

loc_000A37D6: ;
    POP32(esp, esi);

loc_000A37D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A37E0
 * Original: 0x000A37E0 - 0x000A37FC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A37E0(void)
{

loc_000A37E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A4490(); /* call 0x000A4490 */

loc_000A37F6: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3800
 * Original: 0x000A3800 - 0x000A39AD (429 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_000A39A6; /* je: equal / zero */

loc_000A3810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_000A3839; /* je: equal / zero */

loc_000A3819: ;
    edi = MEM32(eax + 8);
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    MEM32(esp + 0xC) = edi;
    if ((ecx != 0)) goto loc_000A3847; /* jne: not equal / not zero */

loc_000A3839: ;
    PUSH32(esp, 0); sub_000A2320(); /* call 0x000A2320 */

loc_000A383E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A3847: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    if (TEST_NZ(ebp, ebp)) goto loc_000A3853; /* jne: not equal / not zero */

loc_000A384F: ;
    eax = 0; /* xor self */
    goto loc_000A386F;

loc_000A3853: ;
    edi = MEM32(esi + 8);
    edi = edi - ebp;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + edi;
    edi = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_000A386F: ;
    if (CMP_A(ecx, eax)) goto loc_000A38DE; /* ja: above (unsigned >) */

loc_000A3873: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_000A4520(); /* call 0x000A4520 */

loc_000A3881: ;
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A3D60(); /* call 0x000A3D60 */

loc_000A388E: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx + 4);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000A38B1; /* jne: not equal / not zero */

loc_000A389C: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A38B1: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A38DE: ;
    if (TEST_NZ(ebp, ebp)) goto loc_000A38E6; /* jne: not equal / not zero */

loc_000A38E2: ;
    eax = 0; /* xor self */
    goto loc_000A38FE;

loc_000A38E6: ;
    edi = MEM32(esi + 0xC);
    edi = edi - ebp;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + edi;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_000A38FE: ;
    if (CMP_A(ecx, eax)) goto loc_000A3945; /* ja: above (unsigned >) */

loc_000A3902: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000A15E0(); /* call 0x000A15E0 */

loc_000A3909: ;
    edx = MEM32(esp + 0x18);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    edi = edi + ebx;
    PUSH32(esp, edx);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_000A4520(); /* call 0x000A4520 */

loc_000A391E: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000A4320(); /* call 0x000A4320 */

loc_000A3935: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A3945: ;
    if (TEST_Z(ebp, ebp)) goto loc_000A397A; /* je: equal / zero */

loc_000A3949: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_000A3D60(); /* call 0x000A3D60 */

loc_000A3958: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    esp = esp + 4;
    eax = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_000A397A: ;
    edi = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0); sub_000A15E0(); /* call 0x000A15E0 */

loc_000A3985: ;
    PUSH32(esp, 0); sub_0022E0C0(); /* call 0x0022E0C0 */

loc_000A398A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A39A3; /* je: equal / zero */

loc_000A398E: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_000A36F0(); /* call 0x000A36F0 */

loc_000A39A0: ;
    MEM32(esi + 8) = eax;

loc_000A39A3: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000A39A6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A39B0
 * Original: 0x000A39B0 - 0x000A3A5B (171 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A39B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A39B0: ;
    if (TEST_Z(ebx, ebx)) goto loc_000A3A55; /* je: equal / zero */

loc_000A39B8: ;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_000A3A55; /* jne: not equal / not zero */

loc_000A39C1: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000A39CF; /* jne: not equal / not zero */

loc_000A39CA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000A39CF: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000A3A1B; /* je: equal / zero */

loc_000A39F7: ;
    if (CMP_B(MEM32(esi + 0x80), 8)) goto loc_000A3A1B; /* jb: below (unsigned <) */

loc_000A3A00: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000A3A0A: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000A3A12: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_000A3A3E; /* jne: not equal / not zero */

loc_000A3A1B: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000A3A2D: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000A3A35: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000A3A4F; /* je: equal / zero */

loc_000A3A3E: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000A3AE0(); /* call 0x000A3AE0 */

loc_000A3A45: ;
    POP32(esp, edi);
    MEM32(ebx) = eax;
    POP32(esp, esi);
    eax = 2;
    esp += 4; return; /* ret */

loc_000A3A4F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(ebx) = eax;
    POP32(esp, esi);

loc_000A3A55: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3A60
 * Original: 0x000A3A60 - 0x000A3AE0 (128 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3A60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = eax;
    if (CMP_AE(MEM32(esi + 0x14), edi)) goto loc_000A3A75; /* jae: above or equal (unsigned >=) */

loc_000A3A70: ;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_000A3A75: ;
    eax = MEM32(esi + 0x14);
    eax = eax - edi;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_B(eax, ebx)) ebx = eax; /* cmovb */
    if (TEST_Z(ebx, ebx)) goto loc_000A3AC6; /* je: equal / zero */

loc_000A3A83: ;
    eax = MEM32(esi + 0x18);
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    edx = ebx;
    if (CMP_AE(ebx, ebp)) edx = ebp; /* cmovae */
    if (CMP_B(eax, 8)) goto loc_000A3A97; /* jb: below (unsigned <) */

loc_000A3A92: ;
    eax = MEM32(esi + 4);
    goto loc_000A3A9A;

loc_000A3A97: ;
    eax = esi + 4;

loc_000A3A9A: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 0x10);
    eax = eax + edi * 2;
    if (CMP_BE(edx & edx, 0)) goto loc_000A3AC6; /* jbe: below or equal (unsigned <=) */

loc_000A3AA5: ;
    SET_LO16(esi, MEM16(eax));
    if (CMP_NE(LO16(esi), MEM16(ecx))) goto loc_000A3AB8; /* jne: not equal / not zero */

loc_000A3AAD: ;
    eax = eax + 2;
    ecx = ecx + 2;
    edx--;
    if ((edx != 0)) goto loc_000A3AA5; /* jne: not equal / not zero */

loc_000A3AB6: ;
    goto loc_000A3AC6;

loc_000A3AB8: ;
    eax = ZX16(MEM16(eax));
    (void)0; /* cmp LO16(eax), MEM16(ecx) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax++;
    if ((eax != 0)) goto loc_000A3ADA; /* jne: not equal / not zero */

loc_000A3AC6: ;
    if (CMP_AE(ebx, ebp)) goto loc_000A3AD3; /* jae: above or equal (unsigned >=) */

loc_000A3ACA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A3AD3: ;
    eax = 0; /* xor self */
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ebx, ebp)) ? 1 : 0); /* setne */

loc_000A3ADA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3AE0
 * Original: 0x000A3AE0 - 0x000A3B08 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3AE0(void)
{

loc_000A3AE0: ;
    esp = esp - 0x74;
    PUSH32(esp, 0x5F1180);
    ecx = esp + 4;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x5F1190;
    PUSH32(esp, 0); sub_0046E142(); /* call 0x0046E142 */

loc_000A3AFA: ;
    ecx = esp;
    PUSH32(esp, 0); sub_0046E07F(); /* call 0x0046E07F */

loc_000A3B02: ;
    eax = esi;
    esp = esp + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3B10
 * Original: 0x000A3B10 - 0x000A3BC3 (179 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3B10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x20)) goto loc_000A3BA7; /* jle: less or equal (signed <=) */

loc_000A3B2B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_000A3B30: ;
    if (CMP_LE(esi & esi, 0)) { sub_000A3BC3(); return; } /* jle: less or equal (signed <=) */

loc_000A3B38: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A3FA0(); /* call 0x000A3FA0 */

loc_000A3B49: ;
    ebx = MEM32(esp + 0x24);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    eax = MEM32(esp + 0x20);
    edx = edi;
    ecx = eax;
    edx = edx - ebx;
    ecx = ecx - ebp;
    edx = edx & 0xFFFFFFF8u;
    ecx = ecx & 0xFFFFFFF8u;
    esp = esp + 0x10;
    if (CMP_GE(ecx, edx)) goto loc_000A3B87; /* jge: greater or equal (signed >=) */

loc_000A3B76: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000A3B10(); /* call 0x000A3B10 */

loc_000A3B83: ;
    ebp = ebx;
    goto loc_000A3B98;

loc_000A3B87: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000A3B10(); /* call 0x000A3B10 */

loc_000A3B94: ;
    edi = MEM32(esp + 0x20);

loc_000A3B98: ;
    eax = edi;
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0x10;
    if (CMP_G(eax, 0x20)) goto loc_000A3B30; /* jg: greater (signed >) */

loc_000A3BA7: ;
    if (CMP_LE(eax, 1)) goto loc_000A3BBB; /* jle: less or equal (signed <=) */

loc_000A3BAC: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000A4260(); /* call 0x000A4260 */

loc_000A3BB8: ;
    esp = esp + 0xC;

loc_000A3BBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3C00
 * Original: 0x000A3C00 - 0x000A3C4C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A3C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F7C0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_000A3C33: ;
    if (CMP_BE(edi & edi, 0)) { sub_000A3C4C(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A3C37: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_000A3EF0(); /* call 0x000A3EF0 */

loc_000A3C40: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x1C;
    MEM32(ebp + 8) = esi;
    goto loc_000A3C33;

}

/**
 * sub_000A3C90
 * Original: 0x000A3C90 - 0x000A3D22 (146 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A3C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FD60);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -20) = ebx;
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    edi = edi;

loc_000A3CC0: ;
    if (CMP_BE(MEM32(ebp + 0xC), edi)) { sub_000A3D22(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A3CC5: ;
    MEM32(ebp + -24) = ebx;
    if (CMP_EQ(ebx, edi)) goto loc_000A3D17; /* je: equal / zero */

loc_000A3CCC: ;
    MEM32(ebx + 0x18) = 7;
    MEM32(ebp + -28) = edi;
    MEM32(ebx + 0x14) = edi;
    if (CMP_B(MEM32(ebx + 0x18), 8)) goto loc_000A3CE4; /* jb: below (unsigned <) */

loc_000A3CDF: ;
    eax = MEM32(ebx + 4);
    goto loc_000A3CE7;

loc_000A3CE4: ;
    eax = ebx + 4;

loc_000A3CE7: ;
    MEM16(eax) = LO16(edi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A3CF5: ;
    eax = esi + 0x1C;
    ecx = ebx + 0x1C;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = esi + 0x28;
    edx = ebx + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000A32D0(); /* call 0x000A32D0 */

loc_000A3D17: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    ebx = ebx + 0x38;
    MEM32(ebp + 8) = ebx;
    goto loc_000A3CC0;

}

/**
 * sub_000A3D60
 * Original: 0x000A3D60 - 0x000A3DA7 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3D60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_000A3DA4; /* je: equal / zero */

loc_000A3D68: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    goto loc_000A3D70;

    /* nop */

loc_000A3D70: ;
    if (CMP_B(MEM32(esi + 0x18), 8)) goto loc_000A3D8E; /* jb: below (unsigned <) */

loc_000A3D76: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(eax, edi)) goto loc_000A3D8E; /* je: equal / zero */

loc_000A3D81: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A3D8B: ;
    esp = esp + 4;

loc_000A3D8E: ;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = edi;
    MEM16(esi + 4) = LO16(edi);
    esi = esi + 0x1C;
    if (CMP_NE(esi, ebx)) goto loc_000A3D70; /* jne: not equal / not zero */

loc_000A3DA3: ;
    POP32(esp, edi);

loc_000A3DA4: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3DB0
 * Original: 0x000A3DB0 - 0x000A3DDB (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(edi, esi)) goto loc_000A3DD6; /* je: equal / zero */

loc_000A3DBA: ;
    /* nop */

loc_000A3DC0: ;
    esi = esi - 0x1C;
    ebx = ebx - 0x1C;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A3DD2: ;
    if (CMP_NE(esi, edi)) goto loc_000A3DC0; /* jne: not equal / not zero */

loc_000A3DD6: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3DE0
 * Original: 0x000A3DE0 - 0x000A3E9D (189 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3DE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_000A3E9A; /* je: equal / zero */

loc_000A3DF2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = esi + 0x2C;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    /* nop */

loc_000A3E00: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_000A3E49; /* je: equal / zero */

loc_000A3E06: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A3D60(); /* call 0x000A3D60 */

loc_000A3E13: ;
    edi = MEM32(esi);
    esp = esp + 4;
    if (CMP_EQ(edi, ebp)) goto loc_000A3E49; /* je: equal / zero */

loc_000A3E1C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000A3E22: ;
    if (TEST_NZ(eax, eax)) goto loc_000A3E49; /* jne: not equal / not zero */

loc_000A3E26: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000A3E46: ;
    esp = esp + 4;

loc_000A3E49: ;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    if (CMP_B(MEM32(esi + -20), 8)) goto loc_000A3E6F; /* jb: below (unsigned <) */

loc_000A3E57: ;
    eax = MEM32(esi + -40);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_000A3E6F; /* je: equal / zero */

loc_000A3E62: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A3E6C: ;
    esp = esp + 4;

loc_000A3E6F: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + -20) = 7;
    MEM32(esi + -24) = ebp;
    eax = eax + 0x38;
    MEM16(esi + -40) = LO16(ebp);
    esi = esi + 0x38;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(eax, ecx)) goto loc_000A3E00; /* jne: not equal / not zero */

loc_000A3E97: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A3E9A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3EA0
 * Original: 0x000A3EA0 - 0x000A3EED (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(edi, esi)) goto loc_000A3EE8; /* je: equal / zero */

loc_000A3EAA: ;
    /* nop */

loc_000A3EB0: ;
    esi = esi - 0x38;
    ebx = ebx - 0x38;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A3EC2: ;
    eax = esi + 0x1C;
    edx = MEM32(eax);
    ecx = ebx + 0x1C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    eax = ebx + 0x28;
    PUSH32(esp, 0); sub_000A3800(); /* call 0x000A3800 */

loc_000A3EE4: ;
    if (CMP_NE(esi, edi)) goto loc_000A3EB0; /* jne: not equal / not zero */

loc_000A3EE8: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3EF0
 * Original: 0x000A3EF0 - 0x000A3F12 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3EF0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    if (CMP_EQ(ebx, eax)) goto loc_000A3F10; /* je: equal / zero */

loc_000A3EF9: ;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x18) = 7;
    MEM16(ebx + 4) = LO16(eax);
    PUSH32(esp, eax);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A3F10: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F20
 * Original: 0x000A3F20 - 0x000A3F53 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3F20: ;
    PUSH32(esp, ecx);
    if (CMP_B(MEM32(esi + 0x18), 8)) goto loc_000A3F3D; /* jb: below (unsigned <) */

loc_000A3F27: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_000A3F3D; /* je: equal / zero */

loc_000A3F31: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A3F3A: ;
    esp = esp + 4;

loc_000A3F3D: ;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = 0;
    MEM16(esi + 4) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F60
 * Original: 0x000A3F60 - 0x000A3F9D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A3F60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edi + 0x28;
    PUSH32(esp, 0); sub_000A2320(); /* call 0x000A2320 */

loc_000A3F6A: ;
    eax = MEM32(edi + 0x18);
    esi = 0; /* xor self */
    if (CMP_B(eax, 8)) goto loc_000A3F8C; /* jb: below (unsigned <) */

loc_000A3F74: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(eax, esi)) goto loc_000A3F8C; /* je: equal / zero */

loc_000A3F7F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A3F89: ;
    esp = esp + 4;

loc_000A3F8C: ;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0x18) = 7;
    MEM16(edi + 4) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3FA0
 * Original: 0x000A3FA0 - 0x000A41F7 (599 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3FA0: ;
    ecx = MEM32(esp + 0xC);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    eax = ecx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = edi + eax * 8;
    eax = ecx + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000A4550(); /* call 0x000A4550 */

loc_000A3FCD: ;
    esp = esp + 0xC;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ebp = esi + 8;
    if (CMP_AE(edi, esi)) goto loc_000A400E; /* jae: above or equal (unsigned >=) */

loc_000A3FD7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    edx = MEM32(esi + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_000A3FE8: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A400E; /* jne: not equal / not zero */

loc_000A3FEF: ;
    ecx = MEM32(esi + -4);
    edx = MEM32(esi + -8);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_000A4000: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A400E; /* jne: not equal / not zero */

loc_000A4007: ;
    esi = esi + 0xFFFFFFF8u;
    if (CMP_B(edi, esi)) goto loc_000A3FD7; /* jb: below (unsigned <) */

loc_000A400E: ;
    edi = MEM32(esp + 0x38);
    if (CMP_AE(ebp, edi)) goto loc_000A404D; /* jae: above or equal (unsigned >=) */

loc_000A4016: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(ebp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_000A4027: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A404D; /* jne: not equal / not zero */

loc_000A402E: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    edx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_000A403F: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A404D; /* jne: not equal / not zero */

loc_000A4046: ;
    ebp = ebp + 8;
    if (CMP_B(ebp, edi)) goto loc_000A4016; /* jb: below (unsigned <) */

loc_000A404D: ;
    ebx = esi;
    edi = ebp;
    MEM32(esp + 0x10) = ebx;

loc_000A4055: ;
    if (CMP_AE(edi, MEM32(esp + 0x38))) goto loc_000A40BE; /* jae: above or equal (unsigned >=) */

loc_000A405B: ;
    goto loc_000A4060;

    /* nop */

loc_000A4060: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x4C), _icall_esp); /* indirect call */
    }

loc_000A4072: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A40B3; /* jne: not equal / not zero */

loc_000A4079: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x4C), _icall_esp); /* indirect call */
    }

loc_000A408B: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A40BE; /* jne: not equal / not zero */

loc_000A4092: ;
    eax = ebp;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x20);
    ebp = ebp + 8;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = eax;

loc_000A40B3: ;
    eax = MEM32(esp + 0x38);
    edi = edi + 8;
    if (CMP_B(edi, eax)) goto loc_000A4060; /* jb: below (unsigned <) */

loc_000A40BE: ;
    if (CMP_BE(ebx, MEM32(esp + 0x34))) goto loc_000A412F; /* jbe: below or equal (unsigned <=) */

loc_000A40C4: ;
    ebx = ebx + 0xFFFFFFF8u;

loc_000A40C7: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x4C), _icall_esp); /* indirect call */
    }

loc_000A40D9: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A4111; /* jne: not equal / not zero */

loc_000A40E0: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x4C), _icall_esp); /* indirect call */
    }

loc_000A40F2: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A4127; /* jne: not equal / not zero */

loc_000A40F9: ;
    edx = MEM32(ebx);
    eax = MEM32(esi + -8);
    ecx = MEM32(esi + -4);
    esi = esi - 8;
    MEM32(esi) = edx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 4) = edx;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;

loc_000A4111: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x34);
    eax = eax - 8;
    ebx = ebx - 8;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(ecx, eax)) goto loc_000A40C7; /* jb: below (unsigned <) */

loc_000A4127: ;
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, MEM32(esp + 0x34) - flags set for next jcc */

loc_000A412F: ;
    eax = MEM32(esp + 0x38);
    if (CMP_NE(ebx, MEM32(esp + 0x34))) goto loc_000A418D; /* jne: not equal / not zero */

loc_000A4135: ;
    if (CMP_EQ(edi, eax)) { sub_000A41F7(); return; } /* je: equal / zero */

loc_000A413D: ;
    if (CMP_EQ(ebp, edi)) goto loc_000A4157; /* je: equal / zero */

loc_000A4141: ;
    edx = MEM32(ebp);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esi) = edx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 4) = edx;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;

loc_000A4157: ;
    ecx = esi;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    eax = edi;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    ebp = ebp + 8;
    edi = edi + 8;
    esi = esi + 8;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    goto loc_000A4055;

loc_000A418D: ;
    ebx = ebx - 8;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(edi, eax)) goto loc_000A41D1; /* jne: not equal / not zero */

loc_000A4198: ;
    esi = esi - 8;
    if (CMP_EQ(ebx, esi)) goto loc_000A41B3; /* je: equal / zero */

loc_000A419F: ;
    edx = MEM32(esi);
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(ebx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ebx + 4) = edx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;

loc_000A41B3: ;
    edx = MEM32(ebp + -8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    ebp = ebp - 8;
    MEM32(esi) = edx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 4) = edx;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;
    goto loc_000A4055;

loc_000A41D1: ;
    eax = edi;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ebx);
    MEM32(eax) = edx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x28);
    edi = edi + 8;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = eax;
    goto loc_000A4055;

}

/**
 * sub_000A4210
 * Original: 0x000A4210 - 0x000A4260 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4210(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi - edi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 1)) goto loc_000A425D; /* jle: less or equal (signed <=) */

loc_000A4226: ;
    ecx = MEM32(edi + esi + -4);
    eax = MEM32(edi + esi + -8);
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + -8;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, eax);
    MEM32(edi + esi + -8) = edx;
    edx = MEM32(edi + 4);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(edi + esi + -4) = edx;
    PUSH32(esp, 0); sub_000A46E0(); /* call 0x000A46E0 */

loc_000A424D: ;
    esi = esi - 8;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0x14;
    if (CMP_G(eax, 1)) goto loc_000A4226; /* jg: greater (signed >) */

loc_000A425D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4260
 * Original: 0x000A4260 - 0x000A431B (187 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4260: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(ebx, eax)) goto loc_000A4318; /* je: equal / zero */

loc_000A4276: ;
    PUSH32(esp, esi);
    esi = ebx + 8;
    if (CMP_EQ(esi, eax)) goto loc_000A4317; /* je: equal / zero */

loc_000A4282: ;
    PUSH32(esp, edi);

loc_000A4283: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    edx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_000A4293: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A42B2; /* je: equal / zero */

loc_000A429A: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    eax = esi + 8;
    if (CMP_EQ(ebx, esi)) goto loc_000A4307; /* je: equal / zero */

loc_000A42A1: ;
    if (CMP_EQ(esi, eax)) goto loc_000A4307; /* je: equal / zero */

loc_000A42A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00279F00(); /* call 0x00279F00 */

loc_000A42AD: ;
    esp = esp + 0xC;
    goto loc_000A4307;

loc_000A42B2: ;
    ecx = MEM32(esi + -4);
    edx = MEM32(esi + -8);
    eax = MEM32(esi + 4);
    edi = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_000A42C6: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A4307; /* je: equal / zero */

loc_000A42CD: ;
    /* nop */

loc_000A42D0: ;
    edx = MEM32(edi + -4);
    eax = MEM32(edi + -8);
    ecx = MEM32(esi + 4);
    ebx = edi;
    edi = edi - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_000A42E6: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A42D0; /* jne: not equal / not zero */

loc_000A42ED: ;
    if (CMP_EQ(ebx, esi)) goto loc_000A4303; /* je: equal / zero */

loc_000A42F1: ;
    eax = esi + 8;
    if (CMP_EQ(esi, eax)) goto loc_000A4303; /* je: equal / zero */

loc_000A42F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00279F00(); /* call 0x00279F00 */

loc_000A4300: ;
    esp = esp + 0xC;

loc_000A4303: ;
    ebx = MEM32(esp + 0x14);

loc_000A4307: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 8;
    if (CMP_NE(esi, eax)) goto loc_000A4283; /* jne: not equal / not zero */

loc_000A4316: ;
    POP32(esp, edi);

loc_000A4317: ;
    POP32(esp, esi);

loc_000A4318: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4320
 * Original: 0x000A4320 - 0x000A436E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A4320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F9F0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_000A4353: ;
    if (CMP_EQ(esi, ebx)) { sub_000A436E(); return; } /* je: equal / zero */

loc_000A4357: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_000A3EF0(); /* call 0x000A3EF0 */

loc_000A4360: ;
    edi = edi + 0x1C;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x1C;
    MEM32(ebp + 8) = esi;
    goto loc_000A4353;

}

/**
 * sub_000A43B0
 * Original: 0x000A43B0 - 0x000A4445 (149 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A43B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A43B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE50);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = ebx;
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    /* nop */

loc_000A43E0: ;
    if (CMP_EQ(esi, MEM32(ebp + 0xC))) { sub_000A4445(); return; } /* je: equal / zero */

loc_000A43E5: ;
    MEM32(ebp + -24) = ebx;
    if (CMP_EQ(ebx, edi)) goto loc_000A4437; /* je: equal / zero */

loc_000A43EC: ;
    MEM32(ebx + 0x18) = 7;
    MEM32(ebp + -28) = edi;
    MEM32(ebx + 0x14) = edi;
    if (CMP_B(MEM32(ebx + 0x18), 8)) goto loc_000A4404; /* jb: below (unsigned <) */

loc_000A43FF: ;
    eax = MEM32(ebx + 4);
    goto loc_000A4407;

loc_000A4404: ;
    eax = ebx + 4;

loc_000A4407: ;
    MEM16(eax) = LO16(edi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A4415: ;
    eax = esi + 0x1C;
    ecx = ebx + 0x1C;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = esi + 0x28;
    edx = ebx + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000A32D0(); /* call 0x000A32D0 */

loc_000A4437: ;
    ebx = ebx + 0x38;
    MEM32(ebp + 0x10) = ebx;
    esi = esi + 0x38;
    MEM32(ebp + 8) = esi;
    goto loc_000A43E0;

}

/**
 * sub_000A4490
 * Original: 0x000A4490 - 0x000A44DF (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A4490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F9E0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);

loc_000A44C4: ;
    if (CMP_EQ(esi, ebx)) { sub_000A44DF(); return; } /* je: equal / zero */

loc_000A44C8: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_000A3EF0(); /* call 0x000A3EF0 */

loc_000A44D1: ;
    edi = edi + 0x1C;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0x1C;
    MEM32(ebp + 8) = esi;
    goto loc_000A44C4;

}

/**
 * sub_000A4520
 * Original: 0x000A4520 - 0x000A454B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4520(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(esi, edi)) goto loc_000A4546; /* je: equal / zero */

loc_000A452A: ;
    /* nop */

loc_000A4530: ;
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    ecx = esi;
    PUSH32(esp, 0); sub_000A3380(); /* call 0x000A3380 */

loc_000A453C: ;
    esi = esi + 0x1C;
    ebx = ebx + 0x1C;
    if (CMP_NE(esi, edi)) goto loc_000A4530; /* jne: not equal / not zero */

loc_000A4546: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4550
 * Original: 0x000A4550 - 0x000A45D5 (133 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4550: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    eax = edx;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x28)) { sub_000A45D5(); return; } /* jle: less or equal (signed <=) */

loc_000A4564: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebp);
    edx = edx & 7;
    PUSH32(esp, esi);
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, edi);
    esi = eax;
    esi = esi << 4;
    PUSH32(esp, ebx);
    edx = esi + ecx;
    edi = eax * 8;
    eax = edi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_000A4640(); /* call 0x000A4640 */

loc_000A4590: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    ecx = edi + ebp;
    PUSH32(esp, ecx);
    eax = ebp;
    eax = eax - edi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A4640(); /* call 0x000A4640 */

loc_000A45A4: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    ecx = edx;
    ecx = ecx - edi;
    PUSH32(esp, edx);
    eax = edx;
    eax = eax - esi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0); sub_000A4640(); /* call 0x000A4640 */

loc_000A45BD: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000A4640(); /* call 0x000A4640 */

loc_000A45CE: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A45F0
 * Original: 0x000A45F0 - 0x000A4638 (72 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A45F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ebx - ebp;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_000A4634; /* jle: less or equal (signed <=) */

loc_000A460D: ;
    PUSH32(esp, edi);
    edi = ebp + esi * 8;

loc_000A4612: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(edi + -4);
    edx = MEM32(edi + -8);
    PUSH32(esp, eax);
    edi = edi - 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi--;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_000A46E0(); /* call 0x000A46E0 */

loc_000A462C: ;
    esp = esp + 0x14;
    if (CMP_G(esi & esi, 0)) goto loc_000A4612; /* jg: greater (signed >) */

loc_000A4633: ;
    POP32(esp, edi);

loc_000A4634: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4640
 * Original: 0x000A4640 - 0x000A46DA (154 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4640: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_000A4660: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A467B; /* je: equal / zero */

loc_000A4667: ;
    edx = MEM32(edi);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esi) = edx;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = edx;
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;

loc_000A467B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_000A468F: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A46AA; /* je: equal / zero */

loc_000A4696: ;
    edx = MEM32(esi);
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(ebx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ebx + 4) = edx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;

loc_000A46AA: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    edx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_000A46BA: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A46D5; /* je: equal / zero */

loc_000A46C1: ;
    edx = MEM32(edi);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esi) = edx;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = edx;
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;

loc_000A46D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A46E0
 * Original: 0x000A46E0 - 0x000A476F (143 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A46E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A46E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = eax;
    PUSH32(esp, esi);
    esi = ebx + ebx + 2;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(esi, ebp)) goto loc_000A4737; /* jge: greater or equal (signed >=) */

loc_000A46FA: ;
    /* nop */

loc_000A4700: ;
    eax = MEM32(edi + esi * 8 + -4);
    ecx = MEM32(edi + esi * 8 + -8);
    edx = MEM32(edi + esi * 8 + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + esi * 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x34), _icall_esp); /* indirect call */
    }

loc_000A4717: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A471F; /* je: equal / zero */

loc_000A471E: ;
    esi--;

loc_000A471F: ;
    ecx = MEM32(edi + esi * 8);
    MEM32(edi + ebx * 8) = ecx;
    edx = MEM32(edi + esi * 8 + 4);
    MEM32(edi + ebx * 8 + 4) = edx;
    ebx = esi;
    esi = esi + esi + 2;
    if (CMP_L(esi, ebp)) goto loc_000A4700; /* jl: less (signed <) */

loc_000A4737: ;
    if (CMP_NE(esi, ebp)) goto loc_000A474B; /* jne: not equal / not zero */

loc_000A4739: ;
    eax = MEM32(edi + ebp * 8 + -8);
    MEM32(edi + ebx * 8) = eax;
    ecx = MEM32(edi + ebp * 8 + -4);
    MEM32(edi + ebx * 8 + 4) = ecx;
    ebx = ebp + -1;

loc_000A474B: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_000A4770(); /* call 0x000A4770 */

loc_000A4767: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4770
 * Original: 0x000A4770 - 0x000A47E0 (112 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4770: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = ebx + -1;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_GE(ebp, ebx)) goto loc_000A47CC; /* jge: greater or equal (signed >=) */

loc_000A478C: ;
    /* nop */

loc_000A4790: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(edi + esi * 8 + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + esi * 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x34), _icall_esp); /* indirect call */
    }

loc_000A47A7: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A47CC; /* je: equal / zero */

loc_000A47AE: ;
    ecx = MEM32(edi + esi * 8);
    MEM32(edi + ebx * 8) = ecx;
    edx = MEM32(edi + esi * 8 + 4);
    eax = esi + -1;
    MEM32(edi + ebx * 8 + 4) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_L(ebp, ebx)) goto loc_000A4790; /* jl: less (signed <) */

loc_000A47CC: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(edi + ebx * 8) = eax;
    MEM32(edi + ebx * 8 + 4) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4890
 * Original: 0x000A4890 - 0x000A492D (157 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = ecx;
    MEM32(esp + 8) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_000A4927; /* jle: less or equal (signed <=) */

loc_000A48A7: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    /* nop */

loc_000A48B0: ;
    eax = MEM32(ebx + 0x20);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_000A48FF; /* je: equal / zero */

loc_000A48B9: ;
    ecx = MEM32(ebx + 0x30);
    eax = MEM32(ecx);
    if (CMP_LE(eax & eax, 0)) goto loc_000A48FF; /* jle: less or equal (signed <=) */

loc_000A48C2: ;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    if (CMP_L(edi, eax)) eax = edi; /* cmovl */
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);
    ecx = ecx + eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebx + 0x30);
    MEM32(ecx) = MEM32(ecx) - eax;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx);
    edi = edi - eax;
    ebp = ebp + eax;
    edx = edx + eax;
    MEM32(esp + 0x1C) = edi;
    MEM32(ecx) = edx;
    goto loc_000A491D;

loc_000A48FF: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_000A4906: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000A4921; /* je: equal / zero */

loc_000A490B: ;
    ecx = MEM32(esp + 0x10);
    MEM8(ebp) = LO8(eax);
    ebp++;
    ecx++;
    edi--;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edi;

loc_000A491D: ;
    if (CMP_G(edi & edi, 0)) goto loc_000A48B0; /* jg: greater (signed >) */

loc_000A4921: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000A4927: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4930
 * Original: 0x000A4930 - 0x000A4957 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4930(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4930: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F114C;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000A4951; /* je: equal / zero */

loc_000A4940: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A494E: ;
    esp = esp + 4;

loc_000A4951: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4960
 * Original: 0x000A4960 - 0x000A4967 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4960(void)
{

loc_000A4960: ;
    MEM32(ecx) = 0x5F114C;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4970
 * Original: 0x000A4970 - 0x000A4997 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4970(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4970: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A497F: ;
    eax = MEM32(esi + 4);
    if (CMP_AE(eax, 0xFFFFFFFFu)) goto loc_000A498B; /* jae: above or equal (unsigned >=) */

loc_000A4987: ;
    eax++;
    MEM32(esi + 4) = eax;

loc_000A498B: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A4994: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A49A0
 * Original: 0x000A49A0 - 0x000A49CE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A49A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A49A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(edi) = esi;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A49B4: ;
    eax = MEM32(esi + 4);
    if (CMP_AE(eax, 0xFFFFFFFFu)) goto loc_000A49C0; /* jae: above or equal (unsigned >=) */

loc_000A49BC: ;
    eax++;
    MEM32(esi + 4) = eax;

loc_000A49C0: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A49C9: ;
    eax = edi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A49D0
 * Original: 0x000A49D0 - 0x000A4AA2 (210 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A49D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A49D0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A49E0: ;
    eax = MEM32(0x75F6F4);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(0x87561C);
    MEM32(esp + 8) = edi;
    if (TEST_NZ(eax, eax)) goto loc_000A4A20; /* jne: not equal / not zero */

loc_000A49F3: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A49FE: ;
    eax = MEM32(0x75F6F4);
    if (TEST_NZ(eax, eax)) goto loc_000A4A17; /* jne: not equal / not zero */

loc_000A4A07: ;
    eax = MEM32(0x75F6EC);
    eax++;
    MEM32(0x75F6EC) = eax;
    MEM32(0x75F6F4) = eax;

loc_000A4A17: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A4A20: ;
    eax = MEM32(0x75F6F4);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DF46(); /* call 0x0046DF46 */

loc_000A4A2F: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_000A4A91; /* jne: not equal / not zero */

loc_000A4A35: ;
    if (TEST_Z(edi, edi)) goto loc_000A4A4C; /* je: equal / zero */

loc_000A4A39: ;
    ecx = esp + 0x10;
    esi = edi;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A4A44: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000A4A4C: ;
    PUSH32(esp, ebx);
    ebx = esp + 0xC;
    PUSH32(esp, 0); sub_000A4AB0(); /* call 0x000A4AB0 */

loc_000A4A56: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000A4A79; /* jne: not equal / not zero */

loc_000A4A5C: ;
    PUSH32(esp, 0x5F1174);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_0046E5F9(); /* call 0x0046E5F9 */

loc_000A4A6A: ;
    PUSH32(esp, 0x64B6B4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_000A4A79: ;
    esi = MEM32(esp + 8);
    ecx = esi;
    MEM32(0x87561C) = esi;
    PUSH32(esp, 0); sub_000A4970(); /* call 0x000A4970 */

loc_000A4A8A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DFBE(); /* call 0x0046DFBE */

loc_000A4A91: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A4A9A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4AB0
 * Original: 0x000A4AB0 - 0x000A4BB0 (256 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4AB0: ;
    esp = esp - 0x84;
    if (TEST_Z(ebx, ebx)) goto loc_000A4BA4; /* je: equal / zero */

loc_000A4ABE: ;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_000A4BA4; /* jne: not equal / not zero */

loc_000A4AC7: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000A4AD5; /* jne: not equal / not zero */

loc_000A4AD0: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000A4AD5: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000A4B21; /* je: equal / zero */

loc_000A4AFD: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_000A4B21; /* jb: below (unsigned <) */

loc_000A4B06: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000A4B10: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000A4B18: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_000A4B44; /* jne: not equal / not zero */

loc_000A4B21: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000A4B33: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000A4B3B: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000A4B9E; /* je: equal / zero */

loc_000A4B44: ;
    PUSH32(esp, 0x5F1180);
    ecx = esp + 0x1C;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5F1150;
    PUSH32(esp, 0); sub_0046E142(); /* call 0x0046E142 */

loc_000A4B5F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E2C3(); /* call 0x0046E2C3 */

loc_000A4B69: ;
    edx = MEM32(eax);
    ecx = esi + 8;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp = esp + 4;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_0046E07F(); /* call 0x0046E07F */

loc_000A4B8E: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = 2;
    esp = esp + 0x84;
    esp += 4; return; /* ret */

loc_000A4B9E: ;
    esi = 0; /* xor self */
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);

loc_000A4BA4: ;
    eax = 2;
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4C00
 * Original: 0x000A4C00 - 0x000A4C2E (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4C00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(esi, ebx)) goto loc_000A4C27; /* je: equal / zero */

loc_000A4C0E: ;
    PUSH32(esp, edi);
    edi = ecx + 8;

loc_000A4C12: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E287(); /* call 0x0046E287 */

loc_000A4C1C: ;
    esp = esp + 8;
    MEM8(esi) = LO8(eax);
    esi++;
    if (CMP_NE(esi, ebx)) goto loc_000A4C12; /* jne: not equal / not zero */

loc_000A4C26: ;
    POP32(esp, edi);

loc_000A4C27: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4C30
 * Original: 0x000A4C30 - 0x000A4C45 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4C30(void)
{

loc_000A4C30: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E287(); /* call 0x0046E287 */

loc_000A4C3F: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4C50
 * Original: 0x000A4C50 - 0x000A4C7E (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4C50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(esi, ebx)) goto loc_000A4C77; /* je: equal / zero */

loc_000A4C5E: ;
    PUSH32(esp, edi);
    edi = ecx + 8;

loc_000A4C62: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E334(); /* call 0x0046E334 */

loc_000A4C6C: ;
    esp = esp + 8;
    MEM8(esi) = LO8(eax);
    esi++;
    if (CMP_NE(esi, ebx)) goto loc_000A4C62; /* jne: not equal / not zero */

loc_000A4C76: ;
    POP32(esp, edi);

loc_000A4C77: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4C80
 * Original: 0x000A4C80 - 0x000A4C95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4C80(void)
{

loc_000A4C80: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E334(); /* call 0x0046E334 */

loc_000A4C8F: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4CA0
 * Original: 0x000A4CA0 - 0x000A4CC5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CA0(void)
{

loc_000A4CA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx - esi;
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A4CD0
 * Original: 0x000A4CD0 - 0x000A4CD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CD0(void)
{

loc_000A4CD0: ;
    SET_LO8(eax, MEM8(esp + 4));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4CE0
 * Original: 0x000A4CE0 - 0x000A4D05 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CE0(void)
{

loc_000A4CE0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx - esi;
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A4D10
 * Original: 0x000A4D10 - 0x000A4D17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D10(void)
{

loc_000A4D10: ;
    SET_LO8(eax, MEM8(esp + 4));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4D20
 * Original: 0x000A4D20 - 0x000A4D72 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4D20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x38);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0x5F1110;
    if (TEST_Z(edi, edi)) goto loc_000A4D4A; /* je: equal / zero */

loc_000A4D32: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000A4E40(); /* call 0x000A4E40 */

loc_000A4D39: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A4D47: ;
    esp = esp + 4;

loc_000A4D4A: ;
    ecx = esi + 4;
    PUSH32(esp, 0); sub_0046DE04(); /* call 0x0046DE04 */

loc_000A4D52: ;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_000A4D6A; /* je: equal / zero */

loc_000A4D59: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A4D67: ;
    esp = esp + 4;

loc_000A4D6A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4D80
 * Original: 0x000A4D80 - 0x000A4D86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D80(void)
{

loc_000A4D80: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4D90
 * Original: 0x000A4D90 - 0x000A4D94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D90(void)
{

loc_000A4D90: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4DA0
 * Original: 0x000A4DA0 - 0x000A4DB1 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4DA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_000A4DA8: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_000A4DB1(); return; } /* jne: not equal / not zero */

loc_000A4DAD: ;
    eax = eax | eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4DD0
 * Original: 0x000A4DD0 - 0x000A4DFA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4DD0(void)
{

loc_000A4DD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x586170);
    edx = MEM32(0x75F6A0);
    MEM32(eax) = ecx;
    ecx = MEM32(0x75F6A4);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x875E04);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A4E00
 * Original: 0x000A4E00 - 0x000A4E2A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E00(void)
{

loc_000A4E00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x586170);
    edx = MEM32(0x75F6A0);
    MEM32(eax) = ecx;
    ecx = MEM32(0x75F6A4);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x875E04);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000A4E30
 * Original: 0x000A4E30 - 0x000A4E35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E30(void)
{

loc_000A4E30: ;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4E40
 * Original: 0x000A4E40 - 0x000A4E88 (72 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4E40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (TEST_Z(esi, esi)) goto loc_000A4E85; /* je: equal / zero */

loc_000A4E48: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A4E53: ;
    eax = MEM32(esi + 4);
    if (CMP_BE(eax & eax, 0)) goto loc_000A4E63; /* jbe: below or equal (unsigned <=) */

loc_000A4E5A: ;
    if (CMP_AE(eax, 0xFFFFFFFFu)) goto loc_000A4E63; /* jae: above or equal (unsigned >=) */

loc_000A4E5F: ;
    eax--;
    MEM32(esi + 4) = eax;

loc_000A4E63: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    ecx = esp + 4;
    eax--;
    esi = esi & eax;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A4E79: ;
    if (TEST_Z(esi, esi)) goto loc_000A4E85; /* je: equal / zero */

loc_000A4E7D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000A4E85: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4E90
 * Original: 0x000A4E90 - 0x000A4ECA (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4E90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_000A4E9F: ;
    eax = MEM32(esi + 4);
    if (CMP_BE(eax & eax, 0)) goto loc_000A4EAF; /* jbe: below or equal (unsigned <=) */

loc_000A4EA6: ;
    if (CMP_AE(eax, 0xFFFFFFFFu)) goto loc_000A4EAF; /* jae: above or equal (unsigned >=) */

loc_000A4EAB: ;
    eax--;
    MEM32(esi + 4) = eax;

loc_000A4EAF: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    ecx = esp + 4;
    eax--;
    esi = esi & eax;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_000A4EC5: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4ED0
 * Original: 0x000A4ED0 - 0x000A4EFA (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A4ED0: ;
    eax = MEM32(ecx + 0x20);
    if (CMP_EQ(MEM32(eax), 0)) { sub_000A4EFA(); return; } /* je: equal / zero */

loc_000A4ED8: ;
    edx = eax;
    eax = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    edx = MEM32(edx);
    edx = edx + eax;
    if (CMP_AE(eax, edx)) { sub_000A4EFA(); return; } /* jae: above or equal (unsigned >=) */

loc_000A4EE7: ;
    eax = MEM32(ecx + 0x30);
    MEM32(eax) = MEM32(eax) - 1;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    edx = eax + 1;
    MEM32(ecx) = edx;
    eax = ZX8(MEM8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_000A4F00
 * Original: 0x000A4F00 - 0x000A5031 (305 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000A4F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F750);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    ecx = MEM32(eax + 4);
    ecx = ecx + ebx;
    eax = MEM32(ecx + 8);
    if (TEST_NZ(eax, eax)) { sub_000A5031(); return; } /* jne: not equal / not zero */

loc_000A4F36: ;
    ecx = MEM32(ecx + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_000A4F44; /* je: equal / zero */

loc_000A4F3D: ;
    esi = ecx;
    PUSH32(esp, 0); sub_000A5060(); /* call 0x000A5060 */

loc_000A4F44: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A5006; /* jne: not equal / not zero */

loc_000A4F4F: ;
    eax = MEM32(ebx);
    edx = MEM32(eax + 4);
    ecx = MEM32(edx + ebx + 0x10);
    if (TEST_Z(LO8(ecx), 1)) goto loc_000A5006; /* je: equal / zero */

loc_000A4F61: ;
    eax = edx;
    eax = eax + ebx;
    edi = ebp + -20;
    PUSH32(esp, 0); sub_000A49A0(); /* call 0x000A49A0 */

loc_000A4F6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A49D0(); /* call 0x000A49D0 */

loc_000A4F73: ;
    esp = esp + 4;
    edi = eax;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_000A4E40(); /* call 0x000A4E40 */

loc_000A4F80: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + ebx + 0x28);
    MEM32(ebp + -28) = ecx;
    PUSH32(esp, 0); sub_000A50B0(); /* call 0x000A50B0 */

loc_000A4F98: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = 0xFFFFFFFFu;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000A4FBC; /* jne: not equal / not zero */

loc_000A4FA7: ;
    PUSH32(esp, 0);
    edx = MEM32(ebx);
    ecx = MEM32(edx + 4);
    ecx = ecx + ebx;
    edx = 1;
    PUSH32(esp, 0); sub_000A5210(); /* call 0x000A5210 */

loc_000A4FBA: ;
    goto loc_000A5006;

loc_000A4FBC: ;
    eax = ZX8(LO8(eax));
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(MEM8(ecx + eax * 2), 0x48)) goto loc_000A5006; /* je: equal / zero */

loc_000A4FC8: ;
    edx = MEM32(ebx);
    eax = MEM32(edx + 4);
    esi = MEM32(eax + ebx + 0x28);
    MEM32(ebp + -36) = esi;
    PUSH32(esp, 0); sub_000A50E0(); /* call 0x000A50E0 */

loc_000A4FD9: ;
    goto loc_000A4F98;

    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    ecx = ecx + eax;
    eax = MEM32(ecx + 8);
    eax = eax | 4;
    edx = MEM32(ecx + 0x28);
    if (TEST_NZ(edx, edx)) goto loc_000A4FF5; /* jne: not equal / not zero */

loc_000A4FF2: ;
    eax = eax | 4;

loc_000A4FF5: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DC85(); /* call 0x0046DC85 */

loc_000A4FFD: ;
    eax = 0xA5003;
    esp += 4; return; /* ret */

loc_000A5006: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    edx = MEM32(ebx);
    eax = MEM32(edx + 4);
    ecx = eax + ebx;
    eax = MEM32(ecx + 8);
    if (TEST_NZ(eax, eax)) { sub_000A5031(); return; } /* jne: not equal / not zero */

loc_000A501C: ;
    SET_LO8(eax, 1);
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A5060
 * Original: 0x000A5060 - 0x000A50AD (77 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5060(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A5060: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    eax = ecx + esi;
    SET_LO8(ecx, MEM8(eax + 8));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_NZ(LO8(ecx), 6)) goto loc_000A5087; /* jne: not equal / not zero */

loc_000A5073: ;
    eax = MEM32(eax + 0x28);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x2C), _icall_esp); /* indirect call */
    }

loc_000A507D: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000A5087; /* jne: not equal / not zero */

loc_000A5082: ;
    edi = 4;

loc_000A5087: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    ecx = ecx + esi;
    if (TEST_Z(edi, edi)) goto loc_000A50A9; /* je: equal / zero */

loc_000A5092: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x28);
    eax = eax | edi;
    if (TEST_NZ(edx, edx)) goto loc_000A50A1; /* jne: not equal / not zero */

loc_000A509E: ;
    eax = eax | 4;

loc_000A50A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DC85(); /* call 0x0046DC85 */

loc_000A50A9: ;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A50B0
 * Original: 0x000A50B0 - 0x000A50CC (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A50B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A50B0: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) { sub_000A50CC(); return; } /* je: equal / zero */

loc_000A50B9: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x30);
    esi = MEM32(esi);
    esi = esi + eax;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_AE(eax, esi)) { sub_000A50CC(); return; } /* jae: above or equal (unsigned >=) */

loc_000A50C8: ;
    eax = ZX8(MEM8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_000A50E0
 * Original: 0x000A50E0 - 0x000A510A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A50E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A50E0: ;
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(MEM32(eax), 0)) { sub_000A510A(); return; } /* je: equal / zero */

loc_000A50E8: ;
    edx = MEM32(esi + 0x30);
    ecx = eax;
    eax = MEM32(ecx);
    ecx = MEM32(edx);
    ecx = ecx + eax;
    if (CMP_AE(eax, ecx)) { sub_000A510A(); return; } /* jae: above or equal (unsigned >=) */

loc_000A50F7: ;
    eax = edx;
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    edx = ecx + 1;
    MEM32(eax) = edx;
    eax = ZX8(MEM8(ecx));
    g_seh_ebp = ebp; sub_000A5111(); return; /* tail jmp 0x000A5111 */

}

/**
 * sub_000A5190
 * Original: 0x000A5190 - 0x000A51BC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5190(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A5190: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F1144;
    PUSH32(esp, 0); sub_0046DB9B(); /* call 0x0046DB9B */

loc_000A519E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000A51B6; /* je: equal / zero */

loc_000A51A5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A51B3: ;
    esp = esp + 4;

loc_000A51B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A51C0
 * Original: 0x000A51C0 - 0x000A51EA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A51C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A51C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0046DB9B(); /* call 0x0046DB9B */

loc_000A51C8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000A51E4; /* je: equal / zero */

loc_000A51CF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000A51E4; /* je: equal / zero */

loc_000A51D7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A51E1: ;
    esp = esp + 4;

loc_000A51E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A51F0
 * Original: 0x000A51F0 - 0x000A5208 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A51F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A51F0: ;
    ecx = SX8(LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F5F2(); /* call 0x0046F5F2 */

loc_000A51FA: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_000A5210
 * Original: 0x000A5210 - 0x000A5231 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5210(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A5210: ;
    if (TEST_Z(edx, edx)) goto loc_000A522E; /* je: equal / zero */

loc_000A5214: ;
    eax = MEM32(ecx + 8);
    eax = eax | edx;
    edx = MEM32(ecx + 0x28);
    if (TEST_NZ(edx, edx)) goto loc_000A5223; /* jne: not equal / not zero */

loc_000A5220: ;
    eax = eax | 4;

loc_000A5223: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DC85(); /* call 0x0046DC85 */

loc_000A522E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5240
 * Original: 0x000A5240 - 0x000A53F6 (438 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5240(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A5240: ;
    edx = (uint32_t)(int32_t)SMEM8(0x771121);
    SET_LO8(eax, MEM8(edx + 0x74CD68));
    ecx = ZX8(MEM8(0x771122));
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(0x771123) = LO8(eax);
    PUSH32(esp, edi);
    esi = esp + 0x10;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_0035DEF0(); /* call 0x0035DEF0 */

loc_000A526C: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(0x771124) = LO8(ecx);
    PUSH32(esp, 0); sub_0035DF40(); /* call 0x0035DF40 */

loc_000A527B: ;
    eax = ZX8(MEM8(0x771124));
    PUSH32(esp, 0); sub_0035DDD0(); /* call 0x0035DDD0 */

loc_000A5287: ;
    eax = ZX8(MEM8(0x771124));
    edx = eax + eax * 4;
    eax = MEM32(edx * 4 + 0x59E9AC);
    PUSH32(esp, 0x35DD30);
    PUSH32(esp, 0); sub_0035DE10(); /* call 0x0035DE10 */

loc_000A52A2: ;
    eax = ZX8(MEM8(0x771124));
    edi = MEM32(esp + 0x14);
    eax = eax + eax * 4;
    ebx = ZX16(MEM16(eax * 4 + 0x59E9A8));
    PUSH32(esp, 0xA);
    eax = edi;
    esi = 0; /* xor self */
    MEM32(0x7FA1F4) = ebx;
    MEM8(0x77111E) = LO8(ebx);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_000A52CF: ;
    eax = ZX8(MEM8(0x771124));
    ecx = eax + eax * 4;
    eax = MEM32(0x84B118);
    SET_LO8(edx, MEM8(ecx * 4 + 0x59E9AA));
    esp = esp + 8;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x84B24C) = edi;
    MEM8(0x771B9C) = LO8(edx);
    MEM16(0x849818) = LO16(esi);
    if (CMP_EQ(eax, esi)) goto loc_000A5306; /* je: equal / zero */

loc_000A52FF: ;
    MEM8(eax + 0x2B8) = 1;

loc_000A5306: ;
    eax = 0; /* xor self */
    MEM32(0x84B118) = esi;
    MEM32(0x776574) = esi;
    MEM8(0x77656C) = 1;
    MEM8(0x6BCFEB) = 1;
    MEM8(0x6BCFEC) = 1;
    MEM8(0x6BCFED) = 1;
    MEM8(0x7819D4) = 1;
    MEM8(0x74A4D8) = 6;
    PUSH32(esp, 0); sub_0032D1E0(); /* call 0x0032D1E0 */

loc_000A5343: ;
    eax = ZX8(MEM8(0x771124));
    SET_LO8(ecx, MEM8(0x76EC82));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 4 + 0x59E9AA));
    eax = eax & 0xFFF;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x7FCB47) = 0;
    MEM8(0x776566) = 1;
    MEM8(0x801A33) = 1;
    MEM8(0x771130) = 0;
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000A53CD; /* jne: not equal / not zero */

loc_000A5384: ;
    ecx = MEM32(0x847024);
    if (CMP_EQ(ecx, esi)) goto loc_000A53A4; /* je: equal / zero */

loc_000A538E: ;
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_000A5397: ;
    SET_LO8(eax, MEM8(0x771130));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A53CD; /* jne: not equal / not zero */

loc_000A53A0: ;
    eax = MEM32(esp + 0x10);

loc_000A53A4: ;
    MEM16(0x800400) = LO16(esi);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = esi;
    MEM32(0x7FA1F4) = ebx;
    MEM8(0x771B9C) = LO8(eax);
    MEM8(0x7819D6) = 2;

loc_000A53CD: ;
    (void)0; /* cmp MEM32(0x84B300), esi - flags set for next jcc */
    MEM8(0x771130) = 1;
    if (CMP_EQ(MEM32(0x84B300), esi)) goto loc_000A53EF; /* je: equal / zero */

loc_000A53DC: ;
    PUSH32(esp, 0x84B300);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000A53E6: ;
    esp = esp + 4;
    MEM32(0x84B300) = esi;

loc_000A53EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5400
 * Original: 0x000A5400 - 0x000A541D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5400(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A5400: ;
    eax = MEM32(0x84729C);
    if (TEST_Z(eax, eax)) { sub_000A541D(); return; } /* je: equal / zero */

loc_000A5409: ;
    SET_LO8(ecx, MEM8(eax * 4 + 0x6A7FFC));
    eax++;
    MEM8(0x77111E) = LO8(ecx);
    MEM32(0x84729C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A54B0
 * Original: 0x000A54B0 - 0x000A5B8E (1758 bytes, 377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A54B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A54B0: ;
    eax = ZX8(MEM8(0x77111C));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    eax = eax - ebp;
    PUSH32(esp, esi);
    SET_LO8(ebx, 0xFF);
    if ((eax == 0)) goto loc_000A559B; /* je: equal / zero */

loc_000A54C6: ;
    eax--;
    if ((eax != 0)) goto loc_000A55C8; /* jne: not equal / not zero */

loc_000A54CD: ;
    ecx = MEM32(0x771118);
    eax = 0; /* xor self */
    MEM32(0x77111C) = eax;
    MEM32(0x771120) = eax;
    MEM32(0x771124) = eax;
    MEM32(0x771128) = eax;
    MEM32(0x77112C) = eax;
    MEM32(0x771130) = eax;
    MEM32(0x771134) = eax;
    MEM32(0x771138) = eax;
    MEM32(0x77113C) = eax;
    MEM8(0x77111D) = LO8(eax);
    MEM8(0x77111E) = LO8(eax);
    MEM8(0x77111F) = LO8(eax);
    eax = MEM32(0x6A7FF8);
    MEM8(0x77111C) = LO8(eax);
    eax = eax - 2;
    MEM8(0x771131) = 1;
    MEM8(0x771121) = LO8(ebx);
    MEM8(0x771120) = 1;
    MEM8(0x771125) = LO8(ebx);
    MEM8(0x771130) = 1;
    MEM32(0x771138) = ecx;
    if ((eax == 0)) goto loc_000A5574; /* je: equal / zero */

loc_000A5547: ;
    eax--;
    if ((eax == 0)) goto loc_000A5564; /* je: equal / zero */

loc_000A554A: ;
    eax--;
    if ((eax != 0)) goto loc_000A557E; /* jne: not equal / not zero */

loc_000A554D: ;
    SET_LO8(eax, MEM8(0x6A7FFC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x771120) = LO8(eax);
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_000A557E; /* ja: above (unsigned >) */

loc_000A555B: ;
    MEM8(0x771120) = 1;
    goto loc_000A557E;

loc_000A5564: ;
    SET_LO8(edx, MEM8(0x847290));
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(0x771121) = LO8(edx);
    goto loc_000A557E;

loc_000A5574: ;
    SET_LO8(eax, MEM8(0x84728C));
    MEM8(0x77111E) = LO8(eax);

loc_000A557E: ;
    SET_LO8(eax, MEM8(0x6BCFEE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A558E; /* je: equal / zero */

loc_000A5587: ;
    MEM8(0x84980E) = 1;

loc_000A558E: ;
    MEM32(0x776574) = ebp;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_000A5599: ;
    goto loc_000A55C8;

loc_000A559B: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_000A55AA; /* je: equal / zero */

loc_000A55A5: ;
    if (CMP_NE(eax, 0x46)) goto loc_000A55C8; /* jne: not equal / not zero */

loc_000A55AA: ;
    ecx = MEM32(0x847104);
    edx = MEM32(ecx + 8);
    edx = edx & 0xD000;
    if (CMP_NE(edx, 0xD000)) goto loc_000A55C8; /* jne: not equal / not zero */

loc_000A55C1: ;
    MEM8(0x77111C) = 1;

loc_000A55C8: ;
    eax = ZX8(MEM8(0x77111C));
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 3)) goto loc_000A5962; /* ja: above (unsigned >) */

loc_000A55DB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA5B90); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000A55E2u) goto loc_000A55E2;
    if (_jt == 0x000A56D8u) goto loc_000A56D8;
    if (_jt == 0x000A57A8u) goto loc_000A57A8;
    if (_jt == 0x000A5949u) goto loc_000A5949;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A55E2: ;
    eax = ZX8(MEM8(0x77111D));
    eax = eax - ebp;
    if ((eax == 0)) goto loc_000A565C; /* je: equal / zero */

loc_000A55ED: ;
    eax--;
    if ((eax != 0)) goto loc_000A5962; /* jne: not equal / not zero */

loc_000A55F4: ;
    SET_LO16(eax, MEM16(0x771136));
    SET_LO16(eax, LO16(eax) + MEM16(0x7FA20C));
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = ZX16(LO16(eax));
    ecx = ecx + ecx * 4;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM16(0x771136) = LO16(eax);
    if (CMP_LE(edx, ecx)) goto loc_000A5962; /* jle: less or equal (signed <=) */

loc_000A561D: ;
    PUSH32(esp, 0); sub_000A5400(); /* call 0x000A5400 */

loc_000A5622: ;
    (void)0; /* cmp MEM8(0x77111E), 0x4B - flags set for next jcc */
    MEM8(0x77111D) = 0;
    if (CMP_L(MEM8(0x77111E), 0x4B)) goto loc_000A5962; /* jl: less (signed <) */

loc_000A5636: ;
    SET_LO8(eax, MEM8(0x77111C));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x771131) = 2;
    MEM8(0x77111C) = LO8(eax);
    MEM16(0x771136) = LO16(ebp);
    MEM8(0x771132) = 1;
    goto loc_000A5962;

loc_000A565C: ;
    SET_LO8(eax, MEM8(0x76EC82));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = (uint32_t)(int32_t)SMEM8(0x77111E);
    MEM8(0x771130) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A56B9; /* jne: not equal / not zero */

loc_000A5673: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebp)) goto loc_000A568E; /* je: equal / zero */

loc_000A567C: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_000A5685: ;
    SET_LO8(eax, MEM8(0x771130));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A56B9; /* jne: not equal / not zero */

loc_000A568E: ;
    MEM16(0x800400) = LO16(ebp);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebp;
    MEM32(0x7FA1F4) = esi;
    MEM8(0x771B9C) = 0;
    MEM8(0x7819D6) = 2;

loc_000A56B9: ;
    SET_LO8(eax, MEM8(0x77111D));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x771130) = 1;
    MEM8(0x77111D) = LO8(eax);
    MEM16(0x771136) = LO16(ebp);
    goto loc_000A5962;

loc_000A56D8: ;
    eax = ZX8(MEM8(0x77111D));
    eax = eax - ebp;
    if ((eax == 0)) goto loc_000A5746; /* je: equal / zero */

loc_000A56E3: ;
    eax--;
    if ((eax != 0)) goto loc_000A5962; /* jne: not equal / not zero */

loc_000A56EA: ;
    SET_LO16(eax, MEM16(0x771136));

loc_000A56F0: ;
    SET_LO8(ecx, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000A5707; /* jne: not equal / not zero */

loc_000A56FA: ;
    SET_LO16(eax, LO16(eax) + MEM16(0x7FA20C));
    MEM16(0x771136) = LO16(eax);

loc_000A5707: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = ZX16(LO16(eax));
    ecx = ecx + ecx * 4;
    if (CMP_LE(edx, ecx)) goto loc_000A5962; /* jle: less or equal (signed <=) */

loc_000A571D: ;
    SET_LO8(eax, MEM8(0x771122));
    SET_LO8(ecx, MEM8(0x771123));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM16(0x771136) = LO16(ebp);
    MEM8(0x771122) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(ecx))) goto loc_000A579E; /* jb: below (unsigned <) */

loc_000A573A: ;
    MEM8(0x77111D) = 0;
    goto loc_000A5962;

loc_000A5746: ;
    SET_LO8(eax, MEM8(0x771121));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), 9 - flags set for next jcc */
    MEM8(0x771121) = LO8(eax);
    MEM8(0x771122) = 0;
    if (CMP_L(LO8(eax), 9)) goto loc_000A5784; /* jl: less (signed <) */

loc_000A575D: ;
    MEM8(0x77111C) = MEM8(0x77111C) + 1;
    SET_LO16(eax, 0); /* xor self */
    MEM8(0x771132) = 2;
    MEM16(0x771136) = LO16(eax);
    MEM8(0x771133) = 1;
    MEM8(0x77111D) = LO8(eax);
    goto loc_000A56F0;

loc_000A5784: ;
    PUSH32(esp, 0); sub_000A5240(); /* call 0x000A5240 */

loc_000A5789: ;
    SET_LO16(eax, 0); /* xor self */
    MEM8(0x77111D) = 1;
    MEM16(0x771136) = LO16(eax);
    goto loc_000A56F0;

loc_000A579E: ;
    PUSH32(esp, 0); sub_000A5240(); /* call 0x000A5240 */

loc_000A57A3: ;
    goto loc_000A5962;

loc_000A57A8: ;
    eax = ZX8(MEM8(0x77111D));
    eax = eax - ebp;
    if ((eax == 0)) goto loc_000A5805; /* je: equal / zero */

loc_000A57B3: ;
    eax--;
    if ((eax != 0)) goto loc_000A5962; /* jne: not equal / not zero */

loc_000A57BA: ;
    SET_LO16(eax, MEM16(0x771136));

loc_000A57C0: ;
    SET_LO8(ecx, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000A57D7; /* jne: not equal / not zero */

loc_000A57CA: ;
    SET_LO16(eax, LO16(eax) + MEM16(0x7FA20C));
    MEM16(0x771136) = LO16(eax);

loc_000A57D7: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = ZX16(LO16(eax));
    edx = ecx + ecx * 4;
    if (CMP_LE(eax, edx)) goto loc_000A5962; /* jle: less or equal (signed <=) */

loc_000A57ED: ;
    SET_LO8(eax, MEM8(0x771120));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x77111D) = 0;
    MEM8(0x771120) = LO8(eax);
    goto loc_000A5962;

loc_000A5805: ;
    PUSH32(esp, 0); sub_0035DF40(); /* call 0x0035DF40 */

loc_000A580A: ;
    PUSH32(esp, 0); sub_0035DFC0(); /* call 0x0035DFC0 */

loc_000A580F: ;
    esi = ZX8(MEM8(0x771120));
    PUSH32(esp, 0); sub_0035DBD0(); /* call 0x0035DBD0 */

loc_000A581B: ;
    (void)0; /* cmp LO8(eax), 0xEE - flags set for next jcc */
    MEM8(0x77111F) = LO8(eax);
    if (CMP_B(LO8(eax), 0xEE)) goto loc_000A5851; /* jb: below (unsigned <) */

loc_000A5824: ;
    MEM8(0x77111C) = MEM8(0x77111C) + 1;
    SET_LO16(eax, 0); /* xor self */
    MEM8(0x771133) = 2;
    MEM16(0x771136) = LO16(eax);
    MEM8(0x771134) = 1;
    MEM8(0x77111D) = LO8(eax);
    MEM8(0x77111E) = LO8(ebx);
    goto loc_000A57C0;

loc_000A5851: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0); sub_0035DD10(); /* call 0x0035DD10 */

loc_000A5859: ;
    eax = ZX8(MEM8(0x77111F));
    PUSH32(esp, 0); sub_0035DDD0(); /* call 0x0035DDD0 */

loc_000A5865: ;
    PUSH32(esp, 0); sub_0034FBB0(); /* call 0x0034FBB0 */

loc_000A586A: ;
    eax = ZX8(MEM8(0x77111F));
    edx = MEM32(0x84A5F8);
    eax = eax + eax * 4;
    eax = eax << 2;
    ecx = ZX16(MEM16(eax + 0x59E9A8));
    SET_LO8(eax, MEM8(eax + 0x59E9AA));
    MEM8(0x771B9C) = LO8(eax);
    MEM8(0x77111E) = LO8(ecx);
    edx = MEM32(edx + 0x568);
    MEM8(edx + 0x1FC) = LO8(eax);
    eax = ZX8(MEM8(0x77111F));
    eax = eax + eax * 4;
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(eax * 4 + 0x59E9AA));
    SET_LO8(eax, MEM8(0x76EC82));
    MEM32(0x7FA1F4) = ecx;
    MEM8(0x7FA275) = 0;
    MEM8(0x801A33) = 1;
    MEM8(0x801A31) = 1;
    MEM8(0x771130) = 0;
    ebx = ebx & 0xFFF;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A592D; /* jne: not equal / not zero */

loc_000A58E8: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebp)) goto loc_000A5903; /* je: equal / zero */

loc_000A58F1: ;
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_000A58FA: ;
    SET_LO8(eax, MEM8(0x771130));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A592D; /* jne: not equal / not zero */

loc_000A5903: ;
    MEM16(0x800400) = LO16(ebp);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebp;
    MEM32(0x7FA1F4) = esi;
    MEM8(0x771B9C) = LO8(ebx);
    MEM8(0x7819D6) = 2;

loc_000A592D: ;
    SET_LO16(eax, 0); /* xor self */
    MEM8(0x771130) = 1;
    MEM8(0x77111D) = 1;
    MEM16(0x771136) = LO16(eax);
    goto loc_000A57C0;

loc_000A5949: ;
    eax = MEM32(0x771118);
    eax++;
    MEM8(0x771130) = 0;
    MEM32(0x771118) = eax;
    MEM8(0x77111C) = 1;

loc_000A5962: ;
    ecx = MEM32(0x847104);
    if (TEST_Z(MEM8(ecx + 8), 0x20)) goto loc_000A597C; /* je: equal / zero */

loc_000A596E: ;
    SET_LO8(eax, MEM8(0x77113C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x77113C) = (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0; /* sete */

loc_000A597C: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A5B8A; /* je: equal / zero */

loc_000A5989: ;
    SET_LO8(eax, MEM8(0x77113C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A5B8A; /* jne: not equal / not zero */

loc_000A5996: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0xFF);
    edi = 0x1E;
    MEM8(0x776162) = 0x80;
    MEM8(0x776171) = 0;
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = LO8(ebx);
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = LO16(edi);
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A59F6; /* je: equal / zero */

loc_000A59E6: ;
    xmm0 = MEMF(0x64A70C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_000A59F6: ;
    PUSH32(esp, 0x5F244C);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5A00: ;
    eax = ZX8(MEM8(0x77111C));
    esp = esp + 4;
    eax = eax - 2;
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = 0x2D;
    MEM8(0x776171) = LO8(ebx);
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = LO8(ebx);
    MEM8(0x77616E) = LO8(ebx);
    if ((eax == 0)) goto loc_000A5B12; /* je: equal / zero */

loc_000A5A3B: ;
    eax--;
    if ((eax == 0)) goto loc_000A5AB8; /* je: equal / zero */

loc_000A5A3E: ;
    eax--;
    if ((eax != 0)) goto loc_000A5B52; /* jne: not equal / not zero */

loc_000A5A45: ;
    esi = ZX8(MEM8(0x771120));
    PUSH32(esp, 0); sub_0035DBD0(); /* call 0x0035DBD0 */

loc_000A5A51: ;
    edx = eax + eax * 4;
    esi = MEM32(edx * 4 + 0x59E9A0);
    PUSH32(esp, 0x5F2324);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5A65: ;
    eax = ZX8(MEM8(0x771120));
    ecx = ZX8(MEM8(0x77111F));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F22E0);
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = 0x3C;
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5A8F: ;
    esp = esp + 0x10;

loc_000A5A92: ;
    if (CMP_EQ(esi, ebp)) goto loc_000A5B52; /* je: equal / zero */

loc_000A5A9A: ;
    PUSH32(esp, esi);
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = 0x4B;
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5AB0: ;
    esp = esp + 4;
    goto loc_000A5B52;

loc_000A5AB8: ;
    eax = ZX8(MEM8(0x771124));
    edx = eax + eax * 4;
    esi = MEM32(edx * 4 + 0x59E9A0);
    PUSH32(esp, 0x5F23B8);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5AD3: ;
    eax = ZX8(MEM8(0x771124));
    ecx = ZX8(MEM8(0x771123));
    edx = ZX8(MEM8(0x771122));
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(0x771121);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F2360);
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = 0x3C;
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5B0D: ;
    esp = esp + 0x18;
    goto loc_000A5A92;

loc_000A5B12: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77111E);
    PUSH32(esp, 0x4B);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F23F8);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5B26: ;
    edx = (uint32_t)(int32_t)SMEM8(0x77111E);
    eax = MEM32(edx * 4 + 0x69CF90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = 0x3C;
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5B4F: ;
    esp = esp + 0x14;

loc_000A5B52: ;
    eax = MEM32(0x771138);
    if (CMP_EQ(eax, ebp)) goto loc_000A5B89; /* je: equal / zero */

loc_000A5B5B: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM16(0x776168) = LO16(edi);
    MEM16(0x776164) = 0x1A4;
    ecx = 0x587BE4;
    if (CMP_EQ(eax, 1)) goto loc_000A5B7A; /* je: equal / zero */

loc_000A5B75: ;
    ecx = 0x5E0638;

loc_000A5B7A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F2288);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_000A5B86: ;
    esp = esp + 0xC;

loc_000A5B89: ;
    POP32(esp, edi);

loc_000A5B8A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5BA0
 * Original: 0x000A5BA0 - 0x000A5BDB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5BA0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000A5BA0: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A5BDA; /* je: equal / zero */

loc_000A5BA9: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_000A5BC1; /* jne: not equal / not zero */

loc_000A5BAD: ;
    SET_LO8(eax, MEM8(0x771120));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x77111D) = 0;
    MEM8(0x771120) = LO8(eax);
    esp += 4; return; /* ret */

loc_000A5BC1: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_000A5BDA; /* jne: not equal / not zero */

loc_000A5BC5: ;
    fp_push(MEMF(0x7F9F5C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000A5BD0: ;
    eax = eax + eax * 4 + 1;
    MEM16(0x771136) = LO16(eax);

loc_000A5BDA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000A5BE0
 * Original: 0x000A5BE0 - 0x000A5C41 (97 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5BE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000A5BE0: ;
    xmm0 = MEMF(0x771150); /* movss */
    xmm1 = MEMF(0x771144); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000A5BF8; /* ja: above (unsigned >) */

loc_000A5BF5: ;
    xmm0 = xmm1; /* movaps */

loc_000A5BF8: ;
    eax = MEM32(0x6A8048);
    xmm0 = xmm0 * MEMF(0x649280); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000A5C2C; /* jbe: below or equal (unsigned <=) */

loc_000A5C16: ;
    if (CMP_EQ(eax, 7)) goto loc_000A5C2C; /* je: equal / zero */

loc_000A5C1B: ;
    eax = eax + 2;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM32(0x6A8048) = eax;
    if ((xmm0 > xmm1)) goto loc_000A5C16; /* ja: above (unsigned >) */

loc_000A5C2C: ;
    MEM32(0x771158) = 0x28;
    MEM32(0x771154) = 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5C50
 * Original: 0x000A5C50 - 0x000A5FBF (879 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5C50(void)
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

loc_000A5C50: ;
    esp = esp - 0x10C;
    xmm2 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    xmm2 = xmm2 - MEMF(esi + 4); /* subss */
    xmm3 = xmm3 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    MEMF(esp + 8) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000A5FB6; /* jnp: not parity */

loc_000A5CB1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm5 = MEMF(0x648D14); /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(edx), LO8(ebx))) ? 1 : 0); /* setne */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edi, ebx)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    edx = esi;
    xmm0 = xmm5; /* movaps */
    ecx = ecx & 2;
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(esp + 0x34) = LO8(eax);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 / MEMF(esp + 0xC); /* divss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    MEMF(esp + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5D29: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5D3C: ;
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A410); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A5D57: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000A5D68; /* je: equal / zero */

loc_000A5D5B: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */

loc_000A5D68: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5D6D: ;
    xmm0 = xmm0 * MEMF(0x649004); /* mulss */
    xmm0 = xmm0 + MEMF(0x6498C4); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5D88: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = MEMF(esp + 0x12C); /* movss */
    /* FPU: fcos  */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5DD0: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5DE3: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5DF6: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    xmm1 = MEMF(esp + 0x114); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x124); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEMF(esp + 0x88) = xmm7; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5E68: ;
    xmm5 = MEMF(0x64ACAC); /* movss */
    xmm6 = MEMF(0x64ACA8); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A5E9A: ;
    eax = MEM32(esp + 0x120);
    MEM32(esp + 0xA8) = eax;
    eax = 0xFF;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm7; /* movss */
    MEM32(esp + 0xA0) = 0x14900;
    MEM32(esp + 0xA4) = 0x12C;
    MEM8(esp + 0xAC) = 8;
    MEM32(esp + 0xB0) = ebx;
    MEM8(esp + 0xB4) = LO8(eax);
    MEM32(esp + 0xB8) = 0xA5FC0;
    MEM32(esp + 0xBC) = 0xA60F0;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = 0x13E6E0;
    MEM32(esp + 0xD4) = 0x13EC40;
    MEM32(esp + 0xD8) = ebx;
    MEM8(esp + 0xDC) = 2;
    MEM32(esp + 0xE0) = ebx;
    MEM8(esp + 0xE4) = LO8(ebx);
    MEM16(esp + 0xE6) = 1;
    MEM16(esp + 0xE8) = LO16(eax);
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = eax | 0xFFFFFFFFu;
    edx = esp + 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x120) = edi;
    MEM32(esp + 0x124) = eax;
    MEM32(esp + 0x128) = eax;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000A5F9D: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_000A5FB6; /* je: equal / zero */

loc_000A5FA5: ;
    ecx = 0xA;
    esi = esp + 0xC;
    edi = eax + 0x290;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000A5FB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000A5FC0
 * Original: 0x000A5FC0 - 0x000A5FF1 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000A5FC0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x290); /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp - 8;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(eax + 0x290) = xmm0; /* movss */
    if ((xmm2 < xmm0)) { sub_000A5FF1(); return; } /* jb: below (unsigned <) */

loc_000A5FEB: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000A60F0
 * Original: 0x000A60F0 - 0x000A6233 (323 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A60F0(void)
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

loc_000A60F0: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x648E84); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    (void)0; /* test MEM8(esi + 0x2B4), 3 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x2B4), 3)) goto loc_000A618E; /* je: equal / zero */

loc_000A610F: ;
    eax = MEM32(0x8470DC);
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x330); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x334); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x338); /* subss */
    eax = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x1C) = eax;
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_000A618E: ;
    if (TEST_Z(MEM8(esi + 0x2B4), 1)) goto loc_000A61EA; /* je: equal / zero */

loc_000A6197: ;
    xmm1 = MEMF(0x5A0060); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000A61AD; /* jbe: below or equal (unsigned <=) */

loc_000A61A4: ;
    MEM8(esi + 0xA8) = 0;
    goto loc_000A61EA;

loc_000A61AD: ;
    xmm1 = MEMF(0x649444); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000A61E3; /* jbe: below or equal (unsigned <=) */

loc_000A61BA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000A61D5: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEM8(esi + 0xA8) = LO8(eax);
    goto loc_000A61EA;

loc_000A61E3: ;
    MEM8(esi + 0xA8) = 0xFF;

loc_000A61EA: ;
    SET_LO8(eax, MEM8(esi + 0x2B4));
    if (TEST_Z(LO8(eax), 2)) goto loc_000A6229; /* je: equal / zero */

loc_000A61F4: ;
    if (TEST_NZ(LO8(eax), 4)) goto loc_000A6229; /* jne: not equal / not zero */

loc_000A61F8: ;
    xmm1 = MEMF(0x648F08); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000A6229; /* jbe: below or equal (unsigned <=) */

loc_000A6205: ;
    ecx = MEM32(esi + 0xF4);
    edx = MEM32(0x847024);
    eax = esi + 0x60;
    MEM32(esi + 0xFC) = ecx;
    edx = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_000A6223: ;
    MEM32(esi + 0xF8) = eax;

loc_000A6229: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000A6240
 * Original: 0x000A6240 - 0x000A6261 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6240(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A6240: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x4E - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x4E)) { sub_000A6261(); return; } /* jne: not equal / not zero */

loc_000A624E: ;
    MEM32(esi + 0xAC) = 0;
    MEM8(esi + 0x2B4) = MEM8(esi + 0x2B4) | 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A62A0
 * Original: 0x000A62A0 - 0x000A631A (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A62A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000A62A0: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x11) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000A62C1: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_000A6316; /* je: equal / zero */

loc_000A62CA: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x56;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000A6316: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6320
 * Original: 0x000A6320 - 0x000A65A4 (644 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6320: ;
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(ebp + 0x54));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000A6341; /* je: equal / zero */

loc_000A632F: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x58E8D0), _icall_esp); /* indirect call */
    }

loc_000A6339: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A659F; /* je: equal / zero */

loc_000A6341: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A6346: ;
    xmm0 = xmm0 * MEMF(0x64AE34); /* mulss */
    xmm0 = xmm0 + MEMF(0x6495B8); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_000A659F; /* jbe: below or equal (unsigned <=) */

loc_000A6375: ;
    eax = MEM32(ebp + 0x4C);
    ecx = ZX8(MEM8(eax + 0x2A8));
    xmm0 = MEMF(eax + 0x3BC); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    edx = MEM32(0x8470DC);
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = (int32_t)xmm0; /* cvttss2si */
    edi = ecx + edx + 0x330;
    ecx = eax + 0x15;
    eax = eax + 0xFFFFFFEBu;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_000A63C0: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A63CF: ;
    ecx = MEM32(esp + 0x18);
    xmm5 = MEMF(0x64AE30); /* movss */
    xmm6 = MEMF(0x64A620); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    PUSH32(esp, ecx);
    xmm2 = xmm2 + xmm6; /* addss */
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000A63F4: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A63FC: ;
    xmm7 = MEMF(0x64AE2C); /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x64AE28); /* subss */
    xmm0 = xmm0 + MEMF(edi + 4); /* addss */
    edx = esp + 0x30;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A644B: ;
    ecx = MEM32(esp + 0x1C);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    PUSH32(esp, ecx);
    xmm2 = xmm2 + xmm6; /* addss */
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000A6460: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A6468: ;
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x64AE28); /* subss */
    xmm0 = xmm0 + MEMF(edi + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A64A5: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000A64D9; /* je: equal / zero */

loc_000A64A9: ;
    esi = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;

loc_000A64D9: ;
    eax = ZX8(MEM8(ebp + 0x55));
    ebx = eax + eax * 2;
    ebx = ebx * 4 + 0x58E8B8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A64EC: ;
    ecx = ZX8(MEM8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x38) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A64FB: ;
    esi = ZX8(MEM8(esp + 0x38));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE4); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    esi = esi << 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A6527: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x6496F4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 8;
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(eax + esi); /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(edx + esi);
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = xmm0 / xmm5; /* divss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(edx, 0); /* xor self */
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_000A5C50(); /* call 0x000A5C50 */

loc_000A657A: ;
    xmm0 = MEMF(ebp + 0x50); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x18;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000A63C0; /* ja: above (unsigned >) */

loc_000A659C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000A659F: ;
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000A65B0
 * Original: 0x000A65B0 - 0x000A65C7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A65B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A65B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0x3D;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) { sub_000A65C7(); return; } /* jns: not sign (positive) */

loc_000A65C0: ;
    ecx = 0x87;
    g_seh_ebp = ebp; sub_000A65D0(); return; /* tail jmp 0x000A65D0 */

}

/**
 * sub_000A6720
 * Original: 0x000A6720 - 0x000A67CD (173 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6720(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A6720: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_000A677F; /* jl: less (signed <) */

loc_000A672D: ;
    esi = ebx + 0xB8;

loc_000A6733: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_000A6772; /* je: equal / zero */

loc_000A6739: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000A673F: ;
    if (TEST_NZ(eax, eax)) goto loc_000A6772; /* jne: not equal / not zero */

loc_000A6743: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_000A6772; /* je: equal / zero */

loc_000A6749: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000A6769: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_000A6772: ;
    eax = MEM32(0x84A144);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, eax)) goto loc_000A6733; /* jle: less or equal (signed <=) */

loc_000A677F: ;
    eax = MEM32(ebx + 0xC8);
    if (TEST_Z(eax, eax)) goto loc_000A67CA; /* je: equal / zero */

loc_000A6789: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000A678F: ;
    if (TEST_NZ(eax, eax)) goto loc_000A67CA; /* jne: not equal / not zero */

loc_000A6793: ;
    eax = MEM32(ebx + 0xC8);
    if (TEST_Z(eax, eax)) goto loc_000A67CA; /* je: equal / zero */

loc_000A679D: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000A67BD: ;
    esp = esp + 4;
    MEM32(ebx + 0xC8) = 0;

loc_000A67CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A67D0
 * Original: 0x000A67D0 - 0x000A6822 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A67D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A67D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ebp;
    PUSH32(esp, 0); sub_000A6720(); /* call 0x000A6720 */

loc_000A67DE: ;
    esi = MEM32(ebp + 0x64);
    PUSH32(esp, 0); sub_00087490(); /* call 0x00087490 */

loc_000A67E6: ;
    eax = MEM32(ebp + 0xD0);
    eax = MEM32(eax + 0x24);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000A6808; /* je: equal / zero */

loc_000A67F5: ;
    edx = MEM32(eax + 8);
    ecx = ebp + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_000A6805: ;
    esp = esp + 8;

loc_000A6808: ;
    esi = MEM32(ebp + 0xD0);
    (void)0; /* cmp MEM8(esi + 0xC), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) { sub_000A6822(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A6819: ;
    eax--;
    MEM32(esi + 8) = eax;
    g_seh_ebp = ebp; sub_000A68B9(); return; /* tail jmp 0x000A68B9 */

}

/**
 * sub_000A6920
 * Original: 0x000A6920 - 0x000A698F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6920: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ebp;
    PUSH32(esp, 0); sub_000A6720(); /* call 0x000A6720 */

loc_000A692E: ;
    esi = MEM32(ebp + 0x64);
    PUSH32(esp, 0); sub_00087490(); /* call 0x00087490 */

loc_000A6936: ;
    eax = MEM32(ebp + 0xD8);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000A6955; /* je: equal / zero */

loc_000A6942: ;
    ebx = eax;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_000A6949: ;
    MEM32(ebp + 0xD8) = 0;
    ebx = 0; /* xor self */

loc_000A6955: ;
    eax = MEM32(ebp + 0xD0);
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, ebx)) goto loc_000A6975; /* je: equal / zero */

loc_000A6962: ;
    edx = MEM32(eax + 8);
    ecx = ebp + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_000A6972: ;
    esp = esp + 8;

loc_000A6975: ;
    esi = MEM32(ebp + 0xD0);
    (void)0; /* cmp MEM8(esi + 0xC), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) { sub_000A698F(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A6986: ;
    eax--;
    MEM32(esi + 8) = eax;
    g_seh_ebp = ebp; sub_000A6A26(); return; /* tail jmp 0x000A6A26 */

}

/**
 * sub_000A6AA0
 * Original: 0x000A6AA0 - 0x000A6B7E (222 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x2C));
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_000A6AC4; /* je: equal / zero */

loc_000A6AAF: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x32) = MEM16(esi + 0x32) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x32), 0)) { sub_000A6B7E(); return; } /* jl: less (signed <) */

loc_000A6AC4: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000A6ADF; /* je: equal / zero */

loc_000A6ACB: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x58E8E0), _icall_esp); /* indirect call */
    }

loc_000A6AD6: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A6ADF; /* jne: not equal / not zero */

loc_000A6ADD: ;
    SET_LO8(ebx, 1);

loc_000A6ADF: ;
    SET_LO8(eax, MEM8(esi + 0x2E));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000A6AFC; /* je: equal / zero */

loc_000A6AE6: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x58E8F0), _icall_esp); /* indirect call */
    }

loc_000A6AF1: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000A6B7E(); return; } /* je: equal / zero */

loc_000A6AFC: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_000A6B7E(); return; } /* jne: not equal / not zero */

loc_000A6B00: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    ebx = MEM32(edi + 4);
    if (TEST_Z(ebx, ebx)) goto loc_000A6B4A; /* je: equal / zero */

loc_000A6B0B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    if (TEST_Z(ebp, ebp)) goto loc_000A6B45; /* je: equal / zero */

loc_000A6B12: ;
    eax = MEM32(0x7FA21C);
    MEM32(esp + 0x14) = eax;
    ebp = ebp + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_000A6B25: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00035FD0(); /* call 0x00035FD0 */

loc_000A6B30: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_000A6B42: ;
    esp = esp + 0x20;

loc_000A6B45: ;
    MEM8(edi + 8) = 1;
    POP32(esp, ebp);

loc_000A6B4A: ;
    eax = esi + 0xD8;
    PUSH32(esp, 0); sub_000869C0(); /* call 0x000869C0 */

loc_000A6B55: ;
    (void)0; /* test MEM8(esi + 0x2C), 0x20 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(MEM8(esi + 0x2C), 0x20)) goto loc_000A6B7B; /* je: equal / zero */

loc_000A6B5C: ;
    SET_LO16(ecx, MEM16(esi + 0x32));
    if (CMP_GE(LO16(ecx), MEM16(esi + 0x60))) goto loc_000A6B7B; /* jge: greater or equal (signed >=) */

loc_000A6B66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x62);
    edx = SX16(LO16(ecx));
    ecx = ZX8(MEM8(esi + 0x3F));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    if (CMP_LE(ecx, eax)) goto loc_000A6B7B; /* jle: less or equal (signed <=) */

loc_000A6B78: ;
    MEM8(esi + 0x3F) = LO8(eax);

loc_000A6B7B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A70A0
 * Original: 0x000A70A0 - 0x000A70A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A70A0: ;
    g_seh_ebp = ebp; sub_000D95F0(); return; /* tail jmp 0x000D95F0 */

}

/**
 * sub_000A70D0
 * Original: 0x000A70D0 - 0x000A721B (331 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70D0(void)
{
    float xmm0, xmm1, xmm5;

loc_000A70D0: ;
    edx = MEM32(esp + 4);
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0xE8); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xE4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xE0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    esi = edx + 0x70;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000A7136: ;
    eax = MEM32(edx + 0x50);
    xmm0 = MEMF(edx + 0x58); /* movss */
    xmm1 = MEMF(edx + 0x54); /* movss */
    MEM32(esi + 0x30) = eax;
    MEMF(esi + 0x34) = xmm1; /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0xEC); /* mulss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x74); /* mulss */
    MEMF(edx + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x78); /* mulss */
    MEMF(edx + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x80); /* mulss */
    MEMF(edx + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x84); /* mulss */
    MEMF(edx + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x88); /* mulss */
    MEMF(edx + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x90); /* mulss */
    MEMF(edx + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x94); /* mulss */
    MEMF(edx + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xEC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x98); /* mulss */
    esp = esp + 0x24;
    MEMF(edx + 0x98) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7220
 * Original: 0x000A7220 - 0x000A73C6 (422 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7220(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_000A7220: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x7FA24C); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x110));
    if (TEST_Z(LO8(ebx), 1)) goto loc_000A7362; /* je: equal / zero */

loc_000A723F: ;
    (void)0; /* test LO8(ebx), 8 - flags set for next jcc */
    ecx = eax + 0xF0;
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    POP32(esp, esi);
    if (TEST_Z(LO8(ebx), 8)) goto loc_000A72A3; /* je: equal / zero */

loc_000A7262: ;
    edx = MEM32(0x7FA20C);
    if (TEST_Z(edx, edx)) goto loc_000A72A3; /* je: equal / zero */

loc_000A726C: ;
    xmm3 = MEMF(eax + 0x10C); /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm2 = MEMF(eax + 0xF8); /* movss */

loc_000A7280: ;
    edx--;
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm4; /* movaps */
    if ((edx != 0)) goto loc_000A7280; /* jne: not equal / not zero */

loc_000A7297: ;
    MEMF(ecx) = xmm1; /* movss */
    MEMF(eax + 0xF8) = xmm2; /* movss */

loc_000A72A3: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_000A72CE; /* je: equal / zero */

loc_000A72A8: ;
    xmm1 = MEMF(eax + 0x108); /* movss */
    xmm6 = MEMF(eax + 0x108); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xF4); /* addss */
    MEMF(eax + 0xF4) = xmm1; /* movss */
    goto loc_000A72D1;

loc_000A72CE: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_000A72D1: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm2 = MEMF(eax + 0xF8); /* movss */
    xmm3 = MEMF(esp + 4); /* movss */
    xmm4 = MEMF(0x7FA248); /* movss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 8); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x50); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x58); /* addss */
    MEMF(eax + 0x50) = xmm4; /* movss */
    MEMF(eax + 0x58) = xmm3; /* movss */

loc_000A7362: ;
    (void)0; /* test MEM8(eax + 0x110), 2 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(MEM8(eax + 0x110), 2)) goto loc_000A73C0; /* je: equal / zero */

loc_000A736C: ;
    xmm1 = MEMF(eax + 0xFC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xE0); /* addss */
    MEMF(eax + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x100); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xE4); /* addss */
    MEMF(eax + 0xE4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x104); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xE8); /* addss */
    MEMF(eax + 0xE8) = xmm1; /* movss */

loc_000A73C0: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A73D0
 * Original: 0x000A73D0 - 0x000A73EE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73D0(void)
{

loc_000A73D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = eax + 0x4C;
    ecx = eax + 0x48;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_000A73E9: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A73F0
 * Original: 0x000A73F0 - 0x000A7404 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73F0(void)
{

loc_000A73F0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = edx + 0xE0;
    PUSH32(esp, 0); sub_000A7410(); /* call 0x000A7410 */

loc_000A7400: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7410
 * Original: 0x000A7410 - 0x000A7530 (288 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7410(void)
{
    float xmm0, xmm1, xmm5;

loc_000A7410: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    edi = edx + 0x70;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000A7468: ;
    xmm0 = MEMF(edx + 0x58); /* movss */
    eax = MEM32(edx + 0x50);
    xmm1 = MEMF(edx + 0x54); /* movss */
    MEM32(edi + 0x30) = eax;
    MEMF(edi + 0x34) = xmm1; /* movss */
    MEMF(edi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x74); /* mulss */
    MEMF(edx + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x78); /* mulss */
    MEMF(edx + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x80); /* mulss */
    MEMF(edx + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x84); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    MEMF(edx + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x88); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    MEMF(edx + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x90); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    MEMF(edx + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x94); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    MEMF(edx + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x98); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    esp = esp + 0x24;
    MEMF(edx + 0x98) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7540
 * Original: 0x000A7540 - 0x000A75D7 (151 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7540(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;

loc_000A7540: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A144);
    SET_LO8(edx, 0); /* xor self */
    esi++;
    if (CMP_LE(esi & esi, 0)) goto loc_000A75D4; /* jle: less or equal (signed <=) */

loc_000A7553: ;
    PUSH32(esp, edi);
    edi = MEM32(0x84A13C);
    eax = 0; /* xor self */
    /* nop */

loc_000A7560: ;
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm1 = MEMF(ecx + edi + 0x1F8); /* movss */
    xmm6 = MEMF(ecx + edi + 0x1F4); /* movss */
    ecx = ecx + edi;
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x469C4000);
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    xmm2 = xmm0; /* movaps */
    eax = eax << 6;
    PUSH32(esp, ecx);
    xmm2 = xmm2 - xmm1; /* subss */
    eax = eax + 0x771160;
    MEMF(esp) = xmm2; /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    PUSH32(esp, 0); sub_0029C850(); /* call 0x0029C850 */

loc_000A75C7: ;
    esp = esp + 0x14;
    SET_LO8(edx, LO8(edx) + 1);
    eax = ZX8(LO8(edx));
    if (CMP_L(eax, esi)) goto loc_000A7560; /* jl: less (signed <) */

loc_000A75D3: ;
    POP32(esp, edi);

loc_000A75D4: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A75E0
 * Original: 0x000A75E0 - 0x000A7621 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A75E0(void)
{

loc_000A75E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ebx + 5;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_000A75EE: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    MEM32(eax) = 0x417FC;
    eax = MEM32(edi);
    eax = eax + 4;
    MEM32(edi) = eax;
    MEM32(eax) = ecx;
    esi = MEM32(edi);
    esi = esi + 4;
    ebx = ebx << 0x12;
    MEM32(edi) = esi;
    eax = esi;
    ebx = ebx + 0x40001818;
    MEM32(eax) = ebx;
    eax = MEM32(edi);
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(edi) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7630
 * Original: 0x000A7630 - 0x000A7659 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7630(void)
{

loc_000A7630: ;
    ecx = MEM32(eax);
    MEM32(ecx) = 0x417FC;
    edx = MEM32(eax);
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    edx = MEM32(0x5499E8);
    MEM32(ecx) = 0;
    ecx = MEM32(eax);
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    eax = ecx;
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7660
 * Original: 0x000A7660 - 0x000A76C3 (99 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7660(void)
{
    float xmm0;

loc_000A7660: ;
    ecx = MEM32(eax);
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 4); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x14); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    MEM32(eax) = MEM32(eax) + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000A76D0
 * Original: 0x000A76D0 - 0x000A76FF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A76D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A76D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x3C);
    eax = eax + eax + 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    eax = eax + edx + 0xBC;
    PUSH32(esp, 0x47);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000A76F3: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) { sub_000A76FF(); return; } /* jne: not equal / not zero */

loc_000A76FC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7820
 * Original: 0x000A7820 - 0x000A7834 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000A7834(); return; } /* je: equal / zero */

loc_000A782C: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AA2B0(); return; /* tail jmp 0x000AA2B0 */

}

/**
 * sub_000A79C0
 * Original: 0x000A79C0 - 0x000A7C43 (643 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A79C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A79C0: ;
    esp = esp - 0x18;
    eax = MEM32(esi + 0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm4 = MEMF(esi + 0x98); /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEM32(esp + 4) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_000A7C3F; /* jle: less or equal (signed <=) */

loc_000A79E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0xC4;

loc_000A79ED: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(0x648D20); /* movss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(edi + -8) = xmm4; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(0x649278); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm5 = xmm5 * MEMF(0x648D20); /* mulss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm5 = MEMF(esi + 0x4C); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(0x649030); /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm3 = xmm3 + MEMF(0x648D20); /* addss */
    xmm6 = xmm6 * xmm4; /* mulss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm3 = MEMF(0x6490F4); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(0x649278); /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm7 = MEMF(esi + 0x34); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esi + 0x58); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0xC); /* movss */
    xmm7 = xmm7 * MEMF(esi + 0x40); /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    MEMF(edi + -4) = xmm5; /* movss */
    xmm7 = MEMF(esi + 0x50); /* movss */
    xmm5 = MEMF(esi + 0x38); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esi + 0x5C); /* movss */
    xmm5 = xmm5 * xmm6; /* mulss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm6 = MEMF(esi + 0x44); /* movss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    MEMF(edi) = xmm7; /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x54); /* mulss */
    xmm6 = MEMF(esi + 0x60); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x14); /* mulss */
    xmm7 = MEMF(esi + 0x48); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x3C); /* mulss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm5 = MEMF(esi + 0x4C); /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm2 = xmm2 * MEMF(0x64927C); /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esi + 0x58); /* movss */
    ecx = edi + 8;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esi + 0x40); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(ecx) = xmm5; /* movss */
    xmm5 = MEMF(esi + 0x50); /* movss */
    xmm6 = MEMF(esi + 0x38); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x5C); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x44); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(edi + 0xC) = xmm5; /* movss */
    xmm5 = MEMF(esi + 0x60); /* movss */
    xmm3 = xmm3 * MEMF(esi + 0x54); /* mulss */
    xmm2 = xmm2 * MEMF(esi + 0x3C); /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm5 = xmm5 + xmm3; /* addss */
    ebx = edi + 0x20;
    ebp = edi + 0x14;
    xmm5 = xmm5 + xmm2; /* addss */
    PUSH32(esp, ebx);
    edx = ebp;
    MEMF(edi + 0x10) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00111D50(); /* call 0x00111D50 */

loc_000A7BF8: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A7C1F; /* jne: not equal / not zero */

loc_000A7BFF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    MEMF(edi + 0x1C) = xmm0; /* movss */
    MEMF(ebx) = xmm0; /* movss */
    MEMF(edi + 0x24) = xmm0; /* movss */
    MEMF(edi + 0x28) = xmm0; /* movss */

loc_000A7C1F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x68);
    xmm4 = xmm4 + MEMF(esp + 0x20); /* addss */
    eax++;
    edi = edi + 0x34;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_000A79ED; /* jl: less (signed <) */

loc_000A7C3C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A7C3F: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7C50
 * Original: 0x000A7C50 - 0x000A7E9C (588 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7C50: ;
    esp = esp - 0x1C;
    eax = MEM32(esi + 0x68);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax + esi + 0xBC;
    PUSH32(esp, edi);
    edi = esi + 0x34;
    edx = edi;
    eax = MEM32(edx);
    ecx = ebx + 0x10;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x68);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    edx = ecx + ebx + 0x44;
    eax = esi + 0x58;
    ecx = eax;
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x2C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000A7DA3; /* je: equal / zero */

loc_000A7CAA: ;
    edx = esp + 0x1C;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esi + 0x68);
    edx = 1;
    ecx++;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    if (CMP_LE(ecx, edx)) goto loc_000A7DA3; /* jle: less or equal (signed <=) */

loc_000A7CF6: ;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = ebx + 0x40;
    /* nop */

loc_000A7D00: ;
    (void)0; /* cmp MEM8(esp + 0x30), 0 - flags set for next jcc */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edi); /* addss */
    MEMF(eax + -8) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    ecx = eax + -8;
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edi + 4); /* addss */
    MEMF(eax + -4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edi + 8); /* addss */
    MEMF(eax) = xmm2; /* movss */
    if (CMP_EQ(MEM8(esp + 0x30), 0)) goto loc_000A7D8F; /* je: equal / zero */

loc_000A7D50: ;
    ebx = ecx;
    ebp = MEM32(ebx);
    edx = eax + 4;
    MEM32(edx) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = ebx;
    ebx = MEM32(ecx);
    edx = eax + 0x10;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x2C);
    MEMF(eax + 0x1C) = xmm1; /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEMF(eax + 0x24) = xmm1; /* movss */

loc_000A7D8F: ;
    ecx = MEM32(esi + 0x68);
    edx++;
    eax = eax + 0x34;
    ecx++;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(edx, ecx)) goto loc_000A7D00; /* jl: less (signed <) */

loc_000A7DA3: ;
    edx = MEM32(esi + 0x68);
    ebp = 1;
    edx++;
    if (CMP_LE(edx, ebp)) goto loc_000A7E95; /* jle: less or equal (signed <=) */

loc_000A7DB4: ;
    xmm6 = MEMF(0x648E64); /* movss */
    xmm7 = MEMF(0x648CE0); /* movss */
    ebx = ebx + 0x34;

loc_000A7DC7: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000A7DD7; /* je: equal / zero */

loc_000A7DCE: ;
    if (CMP_EQ(MEM8(ebx), 0)) goto loc_000A7E85; /* je: equal / zero */

loc_000A7DD7: ;
    xmm5 = MEMF(esi + 0x6C); /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A7DE1: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_000A7DEA; /* jbe: below or equal (unsigned <=) */

loc_000A7DE6: ;
    xmm5 = xmm5 * xmm7; /* mulss */

loc_000A7DEA: ;
    eax = MEM32(esi + 0x68);
    eax++;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A7E11: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A7E2A: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A7E35: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x28;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000A7E44: ;
    eax = ebx + 4;
    ecx = eax + 0x18;
    edx = edi;
    esp = esp + 0xC;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM8(ebx) = 0;

loc_000A7E85: ;
    eax = MEM32(esi + 0x68);
    ebp++;
    ebx = ebx + 0x34;
    eax++;
    if (CMP_L(ebp, eax)) goto loc_000A7DC7; /* jl: less (signed <) */

loc_000A7E95: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7EA0
 * Original: 0x000A7EA0 - 0x000A814D (685 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7EA0: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_000A7EBC; /* je: equal / zero */

loc_000A7EB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000A7EB6: ;
    MEM32(0x771760) = esi;

loc_000A7EBC: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000A7ED5; /* je: equal / zero */

loc_000A7EC8: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000A7ECF: ;
    MEM32(0x77175C) = ebx;

loc_000A7ED5: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000A7EF8: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000A7F11: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_000A7F2B; /* je: equal / zero */

loc_000A7F1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000A7F25: ;
    MEM32(0x77182C) = esi;

loc_000A7F2B: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_000A7F3F; /* je: equal / zero */

loc_000A7F33: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000A7F39: ;
    MEM32(0x771828) = ebx;

loc_000A7F3F: ;
    eax = MEM32(0x771824);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_000A7F66; /* je: equal / zero */

loc_000A7F4E: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000A7F5A: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_000A7F66: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_000A7F86; /* je: equal / zero */

loc_000A7F6E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000A7F7A: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_000A7F86: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_000A7F9A; /* je: equal / zero */

loc_000A7F8E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000A7F94: ;
    MEM32(0x77181C) = edi;

loc_000A7F9A: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_000A7FC0; /* je: equal / zero */

loc_000A7FA8: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000A7FB4: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_000A7FC0: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_000A7FE0; /* je: equal / zero */

loc_000A7FC8: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000A7FD4: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_000A7FE0: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_000A8006; /* je: equal / zero */

loc_000A7FEE: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000A7FFA: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_000A8006: ;
    if (CMP_EQ(MEM32(0x771808), edi)) goto loc_000A8026; /* je: equal / zero */

loc_000A800E: ;
    edx = edi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000A801A: ;
    MEM32(0x549AF4) = edi;
    MEM32(0x771808) = edi;

loc_000A8026: ;
    eax = MEM32(0x7717E4);
    edx = 4;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, edx)) goto loc_000A804A; /* je: equal / zero */

loc_000A8039: ;
    eax = eax | 0x800;
    MEM32(0x547360) = edx;
    MEM32(0x7717E4) = edx;

loc_000A804A: ;
    if (CMP_EQ(MEM32(0x7717C4), ebx)) goto loc_000A8063; /* je: equal / zero */

loc_000A8052: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_000A8063: ;
    esi = MEM32(0x7717B4);
    ecx = 2;
    if (CMP_EQ(esi, ecx)) goto loc_000A8083; /* je: equal / zero */

loc_000A8072: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ecx;
    MEM32(0x7717B4) = ecx;

loc_000A8083: ;
    if (CMP_EQ(MEM32(0x7717A4), edx)) goto loc_000A809C; /* je: equal / zero */

loc_000A808B: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_000A809C: ;
    if (CMP_EQ(MEM32(0x771784), ebx)) goto loc_000A80B5; /* je: equal / zero */

loc_000A80A4: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ebx;
    MEM32(0x771784) = ebx;

loc_000A80B5: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_000A80CE; /* je: equal / zero */

loc_000A80BD: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_000A80CE: ;
    eax = eax | 0x401;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000A80F2: ;
    if (CMP_EQ(MEM32(0x7717E8), edi)) goto loc_000A8110; /* je: equal / zero */

loc_000A80FA: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_000A8110: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_000A812E; /* je: equal / zero */

loc_000A8118: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_000A812E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_000A8139: ;
    SET_LO8(eax, MEM8(0x75BAB4));
    esp = esp + 8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_A(LO8(eax), LO8(ebx))) { sub_000A814D(); return; } /* ja: above (unsigned >) */

loc_000A8146: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_000A81DD(); return; /* tail jmp 0x000A81DD */

}

/**
 * sub_000A8210
 * Original: 0x000A8210 - 0x000A83C3 (435 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8210: ;
    esp = esp - 0x6C;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x74);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = eax + ecx + 0x330;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x7C);
    eax = MEM32(edi + 0x68);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ebx = eax + edi + 0xBC;
    eax = ebx + 0x44;
    esi = ebx + 0x10;
    ecx = esp + 0x48;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x7C) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x80) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x7C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x80);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x54;
    MEM32(esp + 0x7C) = esi;
    MEM32(esp + 0x80) = edx;
    ecx = MEM32(esp + 0x7C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x80);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x5C); /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x6C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x54); /* movss */
    eax = MEM32(esp + 0x6C);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    ecx = MEM32(esp + 0x70);
    MEMF(esp + 0x74) = xmm0; /* movss */
    edx = MEM32(esp + 0x74);
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x3C;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x80) = eax;
    edx = MEM32(esp + 0x80);
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
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x7C); /* movss */
    /* comiss xmm1, MEMF(0x648D54) - sets EFLAGS */
    xmm3 = 0.0f; /* xorps self = zero */
    if ((xmm1 <= MEMF(0x648D54))) { sub_000A83C3(); return; } /* jbe: below or equal (unsigned <=) */

loc_000A8388: ;
    xmm0 = MEMF(edi + 0x70); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_000A83D5(); return; /* tail jmp 0x000A83D5 */

}

/**
 * sub_000A8A10
 * Original: 0x000A8A10 - 0x000A8AC0 (176 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8A10: ;
    eax = ZX8(MEM8(edi + 0x65));
    eax = MEM32(eax * 4 + 0x58E950);
    if (TEST_Z(eax, eax)) goto loc_000A8A25; /* je: equal / zero */

loc_000A8A1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000A8A22: ;
    esp = esp + 4;

loc_000A8A25: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xA0);
    if (TEST_Z(esi, esi)) goto loc_000A8A68; /* je: equal / zero */

loc_000A8A30: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A8A68; /* jne: not equal / not zero */

loc_000A8A39: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000A8A40: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000A8A68; /* jl: less (signed <) */

loc_000A8A47: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000A8A5C; /* je: equal / zero */

loc_000A8A54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000A8A57: ;
    esp = esp + 4;
    goto loc_000A8A68;

loc_000A8A5C: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000A8A68: ;
    esi = MEM32(edi + 0xA4);
    if (TEST_Z(esi, esi)) goto loc_000A8AB4; /* je: equal / zero */

loc_000A8A72: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A8AB4; /* jne: not equal / not zero */

loc_000A8A7B: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000A8A82: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000A8AB4; /* jl: less (signed <) */

loc_000A8A89: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000A8AA8; /* je: equal / zero */

loc_000A8A96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000A8A99: ;
    esp = esp + 4;
    eax = edi + 0xA8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001126F0(); return; /* tail jmp 0x001126F0 */

loc_000A8AA8: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000A8AB4: ;
    eax = edi + 0xA8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001126F0(); return; /* tail jmp 0x001126F0 */

}

/**
 * sub_000A8AF0
 * Original: 0x000A8AF0 - 0x000A8B05 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8AF0(void)
{

loc_000A8AF0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000A8A10(); /* call 0x000A8A10 */

loc_000A8AFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000A8B00: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8B10
 * Original: 0x000A8B10 - 0x000A8B29 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8B10: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x65));
    eax = MEM32(eax * 4 + 0x58E96C);
    if (TEST_Z(eax, eax)) { sub_000A8B29(); return; } /* je: equal / zero */

loc_000A8B23: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_000A8B30
 * Original: 0x000A8B30 - 0x000A8B88 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8B30: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    eax = 1;
    eax = eax << LO8(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    eax++;
    MEM32(esp + 0xC) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = eax;
    ecx = 0xC;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ebx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x68));
    PUSH32(esp, edx);
    eax = ebx + ebx * 2 + 0x24;
    eax = eax << 2;
    PUSH32(esp, 0x2A);
    MEM8(esp + 0x58) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000A8B77: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_NZ(ebp, ebp)) { sub_000A8B88(); return; } /* jne: not equal / not zero */

loc_000A8B80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8C20
 * Original: 0x000A8C20 - 0x000A8D3F (287 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8C20: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    ecx = LO16(ebp);
    esi = eax;
    esi = esi - ecx;
    ebx = ebx + 0x4C;
    if (CMP_L(esi, 2)) goto loc_000A8D38; /* jl: less (signed <) */

loc_000A8C46: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    edx = eax + eax * 2;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edx = edx << 2;
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_000A8C80;

loc_000A8C7C: ;
    edx = MEM32(esp + 0x24);

loc_000A8C80: ;
    eax = MEM32(ebx + 0xC);
    xmm5 = MEMF(edx + eax); /* movss */
    xmm6 = MEMF(edx + eax + 4); /* movss */
    xmm7 = MEMF(edx + eax + 8); /* movss */
    ecx = LO16(ebp);
    ecx = ecx + ecx * 2;
    xmm5 = xmm5 - MEMF(eax + ecx * 4); /* subss */
    xmm6 = xmm6 - MEMF(eax + ecx * 4 + 4); /* subss */
    xmm7 = xmm7 - MEMF(eax + ecx * 4 + 8); /* subss */
    edi = eax + ecx * 4;
    esi = (uint32_t)((int32_t)esi >> 1);
    esi = esi + ebp;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A8CB7: ;
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    edx = MEM32(ebx + 0xC);
    eax = SX16(LO16(esi));
    MEM32(esp + 0x18) = eax;
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(eax + edx) = xmm1; /* movss */
    ecx = MEM32(ebx + 0xC);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(eax + ecx + 4) = xmm1; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    edi = MEM32(esp + 0x20);
    MEMF(eax + edx + 8) = xmm0; /* movss */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000A8C20(); /* call 0x000A8C20 */

loc_000A8D1B: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    eax = eax - MEM32(esp + 0x28);
    ebp = esi;
    esi = eax;
    esp = esp + 0x10;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    ebx = edi + 0x4C;
    if (CMP_GE(esi, 2)) goto loc_000A8C7C; /* jge: greater or equal (signed >=) */

loc_000A8D37: ;
    POP32(esp, edi);

loc_000A8D38: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8D40
 * Original: 0x000A8D40 - 0x000A8F86 (582 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8D40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000A8D40: ;
    esp = esp - 0x74;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x7C);
    eax = MEM32(esi + 0x54);
    if (TEST_NZ(eax, eax)) goto loc_000A8F81; /* jne: not equal / not zero */

loc_000A8D53: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x50);
    eax--;
    if (CMP_L(ecx, eax)) goto loc_000A8D78; /* jl: less (signed <) */

loc_000A8D5E: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, esi);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

loc_000A8D78: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x1A) = 1;
    MEM8(esp + 0x4C) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A8D88: ;
    SET_LO16(ecx, MEM16(esi + 0x72));
    eax = MEM32(esi + 0x50);
    SET_LO16(edx, MEM16(esi + 0x74));
    xmm0 = xmm0 * MEMF(esi + 0x60); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    SET_LO16(edi, MEM16(esi + 0x70));
    MEM16(esp + 0x5C) = LO16(ecx);
    ecx = MEM32(esi + 0x58);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    MEM16(esp + 0x5E) = LO16(edx);
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    eax = eax + 0xC;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x64); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A8DF7: ;
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x68); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8E0C: ;
    ecx = SX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) >> 1));
    edx = edx - edi;
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8E21: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000A8E30: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    SET_LO16(edi, MEM16(esi + 0x70));
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000A8E6F: ;
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x68); /* addss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8E86: ;
    ecx = SX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) >> 1));
    edx = edx - edi;
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8E9B: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000A8EAA: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    SET_LO8(edx, MEM8(esi + 0x84));
    SET_LO8(eax, MEM8(esi + 0x85));
    SET_LO8(ecx, MEM8(esi + 0x86));
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM8(esp + 0x82) = LO8(edx);
    MEM8(esp + 0x81) = LO8(eax);
    MEM8(esp + 0x80) = LO8(ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8F0C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x78);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x76));
    MEM16(esp + 0x24) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8F22: ;
    ecx = ZX8(MEM8(esi + 0x88));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esi + 0x87));
    MEM8(esp + 0x59) = 1;
    SET_LO8(edx, LO8(edx) + LO8(eax));
    MEM8(esp + 0x83) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000A8F46: ;
    ecx = MEM32(esi + 0x80);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x7C);
    SET_LO8(ecx, MEM8(esi + 4));
    edx = edx + eax;
    MEM32(esp + 0x5C) = edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = 4;
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_000A8F6B: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x54) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000A8F7E; /* je: equal / zero */

loc_000A8F76: ;
    eax = MEM32(eax + 0x94);
    MEM32(eax) = esi;

loc_000A8F7E: ;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1;

loc_000A8F81: ;
    POP32(esp, esi);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8F90
 * Original: 0x000A8F90 - 0x000A8FA4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8F90(void)
{

loc_000A8F90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x94);
    edx = MEM32(ecx);
    MEM32(edx + 0x54) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8FB0
 * Original: 0x000A8FB0 - 0x000A900D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A8FB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x94);
    esi = MEM32(edi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_000A900A; /* je: equal / zero */

loc_000A8FC3: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A9003; /* jne: not equal / not zero */

loc_000A8FCC: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000A8FD3: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000A9003; /* jl: less (signed <) */

loc_000A8FDA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000A8FF7; /* je: equal / zero */

loc_000A8FE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000A8FEA: ;
    esp = esp + 4;
    MEM32(edi + 0x14) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A8FF7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000A9003: ;
    MEM32(edi + 0x14) = 0;

loc_000A900A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9010
 * Original: 0x000A9010 - 0x000A9074 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x54);
    if (TEST_Z(esi, esi)) goto loc_000A9055; /* je: equal / zero */

loc_000A901D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A9055; /* jne: not equal / not zero */

loc_000A9026: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000A902D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000A9055; /* jl: less (signed <) */

loc_000A9034: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000A9049; /* je: equal / zero */

loc_000A9041: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000A9044: ;
    esp = esp + 4;
    goto loc_000A9055;

loc_000A9049: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000A9055: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000A905D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000A9074(); return; } /* jne: not equal / not zero */

loc_000A9066: ;
    eax = edi;
    POP32(esp, edi);
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000A9080
 * Original: 0x000A9080 - 0x000A90EB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9080(void)
{
    int _flags = 0; /* fallback flag var */

loc_000A9080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x54);
    if (TEST_Z(esi, esi)) goto loc_000A90D7; /* je: equal / zero */

loc_000A908D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000A90D7; /* jne: not equal / not zero */

loc_000A9096: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000A909D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000A90D7; /* jl: less (signed <) */

loc_000A90A4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000A90CB; /* je: equal / zero */

loc_000A90B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000A90B4: ;
    esp = esp + 4;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000A90BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000A90C5: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A90CB: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000A90D7: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000A90DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000A90E5: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A90F0
 * Original: 0x000A90F0 - 0x000A910C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A90F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A90F0: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x8C));
    eax = MEM32(eax * 4 + 0x58E988);
    if (TEST_Z(eax, eax)) { sub_000A910C(); return; } /* je: equal / zero */

loc_000A9106: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_000A9110
 * Original: 0x000A9110 - 0x000A9273 (355 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000A9110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A0;
    edx = MEM32(esi + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_000A926D; /* je: equal / zero */

loc_000A912A: ;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(edx, MEM8(esi + 0x10B));
    MEM8(esp + 0x18) = LO8(edx);
    MEM16(esp + 0x1A) = LO16(edi);
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM16(esp + 0x24) = 0x12C;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000A9150; /* je: equal / zero */

loc_000A914B: ;
    MEM16(esp + 0x24) = LO16(eax);

loc_000A9150: ;
    SET_LO16(edx, MEM16(ebp + 0x14));
    xmm0 = MEMF(ebp + 0xC); /* movss */
    SET_LO8(eax, (CMP_NE(LO16(eax), 0xFFFF)) ? 1 : 0); /* setne */
    MEM8(esp + 0x26) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(esp + 0x68) = LO16(edx);
    edx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEM16(esp + 0x6A) = LO16(eax);
    eax = MEM32(edx);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x94;
    PUSH32(esp, edx);
    MEM32(esp + 0x84) = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM8(esp + 0x6C) = 0;
    MEM8(esp + 0x6D) = 2;
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000A9500(); /* call 0x000A9500 */

loc_000A91E9: ;
    ecx = esp + 0xA8;
    edx = esp + 0x3C;
    eax = esp + 0x9C;
    esp = esp + 0x14;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002D1EE0(); /* call 0x002D1EE0 */

loc_000A925F: ;
    eax = MEM32(esp + 0x1B4);
    esp = esp + 0x30;
    if (TEST_NZ(eax, eax)) { sub_000A9273(); return; } /* jne: not equal / not zero */

loc_000A926D: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
