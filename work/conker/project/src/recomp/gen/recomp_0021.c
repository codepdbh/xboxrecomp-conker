/**
 * Burnout 3 - Recompiled code chunk 21
 * Functions: 250 (0x001E04E0 - 0x001F3E70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001E04E0
 * Original: 0x001E04E0 - 0x001E0560 (128 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E04E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E04E0: ;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x84);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0x1E1DD0;
    ecx = 0x1E1BB0;
    ebx = 0; /* xor self */
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x74) = eax;
    MEM32(edi + 4) = ebx;
    SET_LO8(eax, MEM8(esi + 0x148));
    edx = 0x1E1D20;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x7C) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x5C) = 0x1E1E80;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x6C) = 0x1E1C60;
    MEM32(esp + 0x70) = 0x1E1AF0;
    MEM32(esp + 0x78) = edx;
    if (TEST_Z(LO8(eax), 2)) { sub_001E0560(); return; } /* je: equal / zero */

loc_001E053F: ;
    eax = MEM32(esi + 0x14C);
    if (CMP_EQ(eax, ebx)) { sub_001E0560(); return; } /* je: equal / zero */

loc_001E0549: ;
    if (CMP_NE(MEM32(eax + 0x90), ebx)) goto loc_001E0559; /* jne: not equal / not zero */

loc_001E0551: ;
    if (CMP_EQ(MEM32(eax + 0x94), ebx)) { sub_001E0560(); return; } /* je: equal / zero */

loc_001E0559: ;
    eax = 1;
    g_seh_ebp = ebp; sub_001E0562(); return; /* tail jmp 0x001E0562 */

}

/**
 * sub_001E0800
 * Original: 0x001E0800 - 0x001E0868 (104 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0800(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001E0800: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E0866; /* jnp: not parity */

loc_001E0813: ;
    eax = MEM32(ecx);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(0x775DC4) = eax;
    edx = MEM32(ecx + 4);
    MEM32(0x775DC8) = edx;
    eax = MEM32(ecx + 8);
    xmm0 = xmm0 / MEMF(0x775DC8); /* divss */
    MEM32(0x775DCC) = eax;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = 0x775DC4;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = 0x775DC4;
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_001E0866: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E0870
 * Original: 0x001E0870 - 0x001E091B (171 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0870(void)
{
    float xmm0, xmm1;

loc_001E0870: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x775EAC); /* subss */
    ecx = esp + 8;
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp) = ecx;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = 0x775DC4;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    MEM32(esp + 4) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    eax = 1;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001E0920
 * Original: 0x001E0920 - 0x001E0D99 (1145 bytes, 289 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0920(void)
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

loc_001E0920: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    esi = MEM32(0x8496C8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(esi, esi)) goto loc_001E09D5; /* jne: not equal / not zero */

loc_001E0933: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E0941; /* jne: not equal / not zero */

loc_001E093C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E0941: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001E0991; /* je: equal / zero */

loc_001E0967: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E0991; /* jb: below (unsigned <) */

loc_001E0973: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E097D: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E0988: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E09B7; /* jne: not equal / not zero */

loc_001E0991: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E09A3: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E09AE: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E09CD; /* je: equal / zero */

loc_001E09B7: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E09C9: ;
    esi = eax;
    goto loc_001E09CF;

loc_001E09CD: ;
    esi = 0; /* xor self */

loc_001E09CF: ;
    MEM32(0x8496C8) = esi;

loc_001E09D5: ;
    eax = MEM32(esi + 0x16A4);
    if (TEST_Z(eax, eax)) { sub_001E0D99(); return; } /* je: equal / zero */

loc_001E09E3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    eax = esi + 0x1610;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = eax;
    MEM8(eax) = 1;
    eax = esi + 0x1660;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E0A08: ;
    xmm1 = MEMF(0x648D14); /* movss */
    ebp = MEM32(esi + 0x16A4);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(esi + 8); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x2C); /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = eax + edx;
    edx = MEM32(esi);
    edi = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    edi = edi & edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = eax >> 0xC;
    eax = eax & 0x7FFF;
    edi = edi + ebp;
    ebp = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0xC));
    ecx = esi + 0x16A8;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = eax;
    edx = edx & 0x7FFF;
    if (CMP_EQ(LO16(edx), LO16(ebp))) goto loc_001E0C0A; /* je: equal / zero */

loc_001E0A80: ;
    eax = eax >> 0xF;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001E0BF7; /* jne: not equal / not zero */

loc_001E0A8B: ;
    if (CMP_GE(MEM32(0x775E90), 0x80)) goto loc_001E0BF7; /* jge: greater or equal (signed >=) */

loc_001E0A9B: ;
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_001E0ACC: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E0AD1: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_001E0B05: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E0B0D: ;
    esi = MEM32(0x8496C8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEM8(edi + 0xD) = MEM8(edi + 0xD) | 0x80;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_NZ(esi, esi)) goto loc_001E0BE3; /* jne: not equal / not zero */

loc_001E0B41: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E0B4F; /* jne: not equal / not zero */

loc_001E0B4A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E0B4F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_001E0B9F; /* je: equal / zero */

loc_001E0B75: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E0B9F; /* jb: below (unsigned <) */

loc_001E0B81: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E0B8B: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E0B96: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E0BC5; /* jne: not equal / not zero */

loc_001E0B9F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E0BB1: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E0BBC: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E0BDB; /* je: equal / zero */

loc_001E0BC5: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E0BD7: ;
    esi = eax;
    goto loc_001E0BDD;

loc_001E0BDB: ;
    esi = 0; /* xor self */

loc_001E0BDD: ;
    MEM32(0x8496C8) = esi;

loc_001E0BE3: ;
    eax = ZX16(LO16(ebp));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_001E0090(); /* call 0x001E0090 */

loc_001E0BF1: ;
    MEM32(0x775E90) = MEM32(0x775E90) + 1;

loc_001E0BF7: ;
    edx = MEM32(esp + 0x20);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    MEM8(edx) = LO8(eax);
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_001E0C0A: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    eax = (uint32_t)(int32_t)SMEM16(edi + 6);
    xmm0 = MEMF(0x648FD4); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x3C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x40);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(0x75A138) = eax;
    eax = MEM32(esp + 0x44);
    xmm4 = MEMF(0x75A138); /* movss */
    MEM32(0x75A13C) = edx;
    edx = MEM32(esp + 0x48);
    xmm2 = MEMF(0x75A13C); /* movss */
    MEM32(0x75A140) = eax;
    xmm3 = MEMF(0x75A140); /* movss */
    MEM32(0x75A144) = edx;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(0x75A144); /* addss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001E0BF7; /* jbe: below or equal (unsigned <=) */

loc_001E0CCB: ;
    xmm5 = MEMF(ecx + 4); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 / xmm5; /* divss */
    eax = esp + 0x3C;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x1C) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x3C;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x50);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x54);
    edx = edi + 0x14;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x58);
    edi = edi + 0x20;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    edx = MEM32(esp + 0x20);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    MEM8(edx) = 0;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E0DB0
 * Original: 0x001E0DB0 - 0x001E0E1E (110 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001E0DB0: ;
    esp = esp - 0xC;
    xmm2 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A13C);
    esi = ecx;
    PUSH32(esp, eax);
    edi = edi + 0x148;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_001E0DD1: ;
    ecx = MEM32(0x8470DC);
    ecx = ecx + 0x330;
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    edi = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ecx + 8);
    edx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_001E0DFE: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(edi, edi)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x6494F8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001E0E20
 * Original: 0x001E0E20 - 0x001E0F81 (353 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001E0E20: ;
    esp = esp - 0x38;
    xmm0 = MEMF(0x6491EC); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 8) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x59D948); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x1C;
    eax = edx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x10;
    edx = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebx = esp + 0x2C;
    esi = esp + 0x38;
    eax = esp + 0x20;
    MEM32(0x780AB0) = 0x5F5C00;
    MEM32(0x6C0210) = 0x2C3;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_001E0F40: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001E0F81(); return; } /* je: equal / zero */

loc_001E0F53: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    eax = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    PUSH32(esp, 0); sub_0048D54F(); /* call 0x0048D54F */

loc_001E0F74: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048D4AB(); /* call 0x0048D4AB */

loc_001E0F7B: ;
    eax = edi;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_001E0FC0
 * Original: 0x001E0FC0 - 0x001E1085 (197 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E0FC0: ;
    esp = esp - 0x30;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x59D948); /* subss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ebx = esp + 0x30;
    esi = esp + 0x24;
    eax = esp + 0x18;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(0x780AB0) = 0x5F5C00;
    MEM32(0x6C0210) = 0x2D6;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_001E104F: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E1070; /* jne: not equal / not zero */

loc_001E1068: ;
    xmm0 = MEMF(0x648E70); /* movss */

loc_001E1070: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001E1090
 * Original: 0x001E1090 - 0x001E129C (524 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001E1090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    xmm0 = MEMF(0x649200); /* movss */
    MEMF(0x84C288) = xmm0; /* movss */
    MEMF(0x84C28C) = xmm0; /* movss */
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(0x84C278) = xmm0; /* movss */
    MEMF(0x84C27C) = xmm0; /* movss */
    MEMF(0x84C280) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(ebx + 1));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_001E1294; /* je: equal / zero */

loc_001E10EB: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    (void)0; /* cmp MEM32(ebx + 0x1C), eax - flags set for next jcc */
    MEMF(0x775EAC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    MEMF(0x775EA4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    MEMF(0x775EA0) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x14); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(0x775E9C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x18); /* movss */
    MEMF(0x775E98) = xmm1; /* movss */
    MEMF(0x775E94) = xmm0; /* movss */
    MEM32(0x8496CC) = eax;
    MEM32(0x775EA8) = eax;
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(MEM32(ebx + 0x1C), eax)) goto loc_001E1294; /* jle: less or equal (signed <=) */

loc_001E1157: ;
    eax = ebx + 0xA0;
    MEM32(esp + 0xC) = 0x85E428;
    edi = ebx + 0x20;
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_001E1170: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    esi = esp + 0x74;
    PUSH32(esp, 0); sub_00355350(); /* call 0x00355350 */

loc_001E1183: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E1272; /* je: equal / zero */

loc_001E118B: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E119C: ;
    xmm0 = MEMF(edi + 0xC); /* movss */
    esi = MEM32(esp + 0xC);
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E11D3: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E11E5: ;
    edx = esp + 0x10;
    eax = edx;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x28) = xmm1; /* movss */
    ecx = MEM32(0x775EA8);
    xmm0 = MEMF(esp + 0x28); /* movss */
    ecx++;
    MEMF(esi + 0xC) = xmm0; /* movss */
    esi = esi + 0x10;
    MEM32(0x775EA8) = ecx;
    MEM32(esp + 0xC) = esi;

loc_001E1272: ;
    eax = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    ecx = MEM32(ebx + 0x1C);
    eax++;
    esi = esi + 4;
    edi = edi + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = esi;
    if (CMP_L(eax, ecx)) goto loc_001E1170; /* jl: less (signed <) */

loc_001E1294: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E12A0
 * Original: 0x001E12A0 - 0x001E144A (426 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E12A0(void)
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

loc_001E12A0: ;
    esp = esp - 8;
    xmm0 = MEMF(0x775E9C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8496CC);
    ecx = ebx + ebx * 2;
    PUSH32(esp, ebp);
    ecx = ecx << 3;
    PUSH32(esp, esi);
    eax = ecx + 0x775DD8;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x1C);
    ebp = MEM32(0x8496C8);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = MEM32(esp + 0x20);
    MEM32(ecx + 0x775DD0) = edx;
    MEM32(ecx + 0x775DD4) = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_001E13BA; /* jne: not equal / not zero */

loc_001E1312: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E1320; /* jne: not equal / not zero */

loc_001E131B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E1320: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001E1370; /* je: equal / zero */

loc_001E1346: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E1370; /* jb: below (unsigned <) */

loc_001E1352: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E135C: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E1367: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E1396; /* jne: not equal / not zero */

loc_001E1370: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E1382: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E138D: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E13AC; /* je: equal / zero */

loc_001E1396: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E13A8: ;
    ebp = eax;
    goto loc_001E13AE;

loc_001E13AC: ;
    ebp = 0; /* xor self */

loc_001E13AE: ;
    ebx = MEM32(0x8496CC);
    MEM32(0x8496C8) = ebp;

loc_001E13BA: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    edi = ebx + ebx * 2;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    edi = edi << 3;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E13D6: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 4));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E13E7: ;
    edx = MEM32(ebp + 0x16A0);
    esi = esi + eax;
    eax = MEM32(ebp);
    eax = eax & esi;
    ecx = eax + eax * 4;
    /* TODO: prefetcht0 byte ptr [edx + ecx*4] */
    ebx++;
    (void)0; /* cmp ebx, 8 - flags set for next jcc */
    eax = edx + ecx * 4;
    MEM32(edi + 0x775DE4) = esi;
    MEM32(0x8496CC) = ebx;
    if (CMP_L(ebx, 8)) goto loc_001E1440; /* jl: less (signed <) */

loc_001E1410: ;
    esi = 0x775DE4;

loc_001E1415: ;
    ecx = MEM32(esi + -16);
    edx = MEM32(esi + -20);
    eax = esi + -12;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001E1560(); /* call 0x001E1560 */

loc_001E1428: ;
    esi = esi + 0x18;
    esp = esp + 0xC;
    if (CMP_L(esi, 0x775EA4)) goto loc_001E1415; /* jl: less (signed <) */

loc_001E1436: ;
    MEM32(0x8496CC) = 0;

loc_001E1440: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E1450
 * Original: 0x001E1450 - 0x001E1551 (257 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1450(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001E1450: ;
    esp = esp - 0x14;
    xmm2 = MEMF(0x775E9C); /* movss */
    ecx = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 8) = xmm2; /* movss */
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
    xmm1 = MEMF(ecx + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(0x775EAC); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x10))) { sub_001E1551(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E14CE: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(esi + 0x24) - sets EFLAGS */
    if ((xmm1 <= MEMF(esi + 0x24))) { sub_001E1551(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E14D7: ;
    xmm0 = xmm0 * MEMF(0x775E98); /* mulss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x775EA4); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x775EA0); /* movss */
    MEMF(esi + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x775E94); /* movss */
    MEMF(esi + 0x28) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + 0x2C); /* mulss */
    MEMF(ecx + 0x2C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + 0x14); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x18); /* mulss */
    MEMF(ecx + 0x14) = xmm1; /* movss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001E1560
 * Original: 0x001E1560 - 0x001E17E2 (642 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1560(void)
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

loc_001E1560: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    ebx = eax;
    eax = MEM32(0x8496C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_001E1619; /* jne: not equal / not zero */

loc_001E157A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E1588; /* jne: not equal / not zero */

loc_001E1583: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E1588: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001E15D8; /* je: equal / zero */

loc_001E15AE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E15D8; /* jb: below (unsigned <) */

loc_001E15BA: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E15C4: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E15CF: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E15FE; /* jne: not equal / not zero */

loc_001E15D8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E15EA: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E15F5: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E1612; /* je: equal / zero */

loc_001E15FE: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E1610: ;
    goto loc_001E1614;

loc_001E1612: ;
    eax = 0; /* xor self */

loc_001E1614: ;
    MEM32(0x8496C8) = eax;

loc_001E1619: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x16A0);
    xmm1 = MEMF(eax + 8); /* movss */
    ecx = ecx & ebx;
    ecx = ecx + ecx * 4;
    edi = edx + ecx * 4;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0xC));
    ebx = ebx >> 0xC;
    ebx = ebx & 0x7FFF;
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = eax;
    ecx = ecx & 0x7FFF;
    if (CMP_EQ(LO16(ecx), LO16(ebx))) { sub_001E17E2(); return; } /* je: equal / zero */

loc_001E1654: ;
    eax = eax >> 0xF;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001E17D8; /* jne: not equal / not zero */

loc_001E165F: ;
    if (CMP_GE(MEM32(0x775E90), 0x80)) goto loc_001E17D8; /* jge: greater or equal (signed >=) */

loc_001E166F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esi = MEM32(esp + 0x54);
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_001E16AF: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E16B4: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_001E16E7: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E16EF: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    esi = MEM32(0x8496C8);
    MEM8(edi + 0xD) = MEM8(edi + 0xD) | 0x80;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if (TEST_NZ(esi, esi)) goto loc_001E17C4; /* jne: not equal / not zero */

loc_001E1722: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E1730; /* jne: not equal / not zero */

loc_001E172B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E1730: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_001E1780; /* je: equal / zero */

loc_001E1756: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E1780; /* jb: below (unsigned <) */

loc_001E1762: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E176C: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E1777: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E17A6; /* jne: not equal / not zero */

loc_001E1780: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E1792: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E179D: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E17BC; /* je: equal / zero */

loc_001E17A6: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E17B8: ;
    esi = eax;
    goto loc_001E17BE;

loc_001E17BC: ;
    esi = 0; /* xor self */

loc_001E17BE: ;
    MEM32(0x8496C8) = esi;

loc_001E17C4: ;
    edx = ZX16(LO16(ebx));
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_001E0090(); /* call 0x001E0090 */

loc_001E17D2: ;
    MEM32(0x775E90) = MEM32(0x775E90) + 1;

loc_001E17D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E1AF0
 * Original: 0x001E1AF0 - 0x001E1BAB (187 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1AF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E1AF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E12A0(); /* call 0x001E12A0 */

loc_001E1B01: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E1B16; /* jne: not equal / not zero */

loc_001E1B08: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E1F20(); /* call 0x001E1F20 */

loc_001E1B0F: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E1B18; /* je: equal / zero */

loc_001E1B16: ;
    SET_LO8(eax, 1);

loc_001E1B18: ;
    xmm0 = MEMF(0x84C288); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 > MEMF(esi))) goto loc_001E1B29; /* ja: above (unsigned >) */

loc_001E1B25: ;
    xmm0 = MEMF(esi); /* movss */

loc_001E1B29: ;
    MEMF(0x84C288) = xmm0; /* movss */
    xmm0 = MEMF(0x84C28C); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_001E1B44; /* ja: above (unsigned >) */

loc_001E1B3F: ;
    xmm0 = MEMF(esi + 4); /* movss */

loc_001E1B44: ;
    MEMF(0x84C28C) = xmm0; /* movss */
    xmm0 = MEMF(0x84C290); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 8))) goto loc_001E1B5F; /* ja: above (unsigned >) */

loc_001E1B5A: ;
    xmm0 = MEMF(esi + 8); /* movss */

loc_001E1B5F: ;
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(0x84C278) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C278))) goto loc_001E1B7C; /* ja: above (unsigned >) */

loc_001E1B74: ;
    MEMF(0x84C278) = xmm0; /* movss */

loc_001E1B7C: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(0x84C27C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C27C))) goto loc_001E1B92; /* ja: above (unsigned >) */

loc_001E1B8A: ;
    MEMF(0x84C27C) = xmm0; /* movss */

loc_001E1B92: ;
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm0, MEMF(0x84C280) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C280))) goto loc_001E1BA8; /* ja: above (unsigned >) */

loc_001E1BA0: ;
    MEMF(0x84C280) = xmm0; /* movss */

loc_001E1BA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E1BB0
 * Original: 0x001E1BB0 - 0x001E1C55 (165 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1BB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E1BB0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E12A0(); /* call 0x001E12A0 */

loc_001E1BC0: ;
    xmm0 = MEMF(0x84C288); /* movss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 > MEMF(esi))) goto loc_001E1BD4; /* ja: above (unsigned >) */

loc_001E1BD0: ;
    xmm0 = MEMF(esi); /* movss */

loc_001E1BD4: ;
    MEMF(0x84C288) = xmm0; /* movss */
    xmm0 = MEMF(0x84C28C); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_001E1BEF; /* ja: above (unsigned >) */

loc_001E1BEA: ;
    xmm0 = MEMF(esi + 4); /* movss */

loc_001E1BEF: ;
    MEMF(0x84C28C) = xmm0; /* movss */
    xmm0 = MEMF(0x84C290); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 8))) goto loc_001E1C0A; /* ja: above (unsigned >) */

loc_001E1C05: ;
    xmm0 = MEMF(esi + 8); /* movss */

loc_001E1C0A: ;
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(0x84C278) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C278))) goto loc_001E1C27; /* ja: above (unsigned >) */

loc_001E1C1F: ;
    MEMF(0x84C278) = xmm0; /* movss */

loc_001E1C27: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(0x84C27C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C27C))) goto loc_001E1C3D; /* ja: above (unsigned >) */

loc_001E1C35: ;
    MEMF(0x84C27C) = xmm0; /* movss */

loc_001E1C3D: ;
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm0, MEMF(0x84C280) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C280))) goto loc_001E1C53; /* ja: above (unsigned >) */

loc_001E1C4B: ;
    MEMF(0x84C280) = xmm0; /* movss */

loc_001E1C53: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E1C60
 * Original: 0x001E1C60 - 0x001E1D1A (186 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1C60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E1C60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001E1450(); /* call 0x001E1450 */

loc_001E1C70: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E1C85; /* jne: not equal / not zero */

loc_001E1C77: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001E1F20(); /* call 0x001E1F20 */

loc_001E1C7E: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E1C87; /* je: equal / zero */

loc_001E1C85: ;
    SET_LO8(eax, 1);

loc_001E1C87: ;
    xmm0 = MEMF(0x84C288); /* movss */
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 > MEMF(edi))) goto loc_001E1C98; /* ja: above (unsigned >) */

loc_001E1C94: ;
    xmm0 = MEMF(edi); /* movss */

loc_001E1C98: ;
    MEMF(0x84C288) = xmm0; /* movss */
    xmm0 = MEMF(0x84C28C); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 4))) goto loc_001E1CB3; /* ja: above (unsigned >) */

loc_001E1CAE: ;
    xmm0 = MEMF(edi + 4); /* movss */

loc_001E1CB3: ;
    MEMF(0x84C28C) = xmm0; /* movss */
    xmm0 = MEMF(0x84C290); /* movss */
    /* comiss xmm0, MEMF(edi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 8))) goto loc_001E1CCE; /* ja: above (unsigned >) */

loc_001E1CC9: ;
    xmm0 = MEMF(edi + 8); /* movss */

loc_001E1CCE: ;
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(0x84C278) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C278))) goto loc_001E1CEB; /* ja: above (unsigned >) */

loc_001E1CE3: ;
    MEMF(0x84C278) = xmm0; /* movss */

loc_001E1CEB: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(0x84C27C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C27C))) goto loc_001E1D01; /* ja: above (unsigned >) */

loc_001E1CF9: ;
    MEMF(0x84C27C) = xmm0; /* movss */

loc_001E1D01: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, MEMF(0x84C280) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C280))) goto loc_001E1D17; /* ja: above (unsigned >) */

loc_001E1D0F: ;
    MEMF(0x84C280) = xmm0; /* movss */

loc_001E1D17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E1D20
 * Original: 0x001E1D20 - 0x001E1DC6 (166 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1D20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E1D20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001E1450(); /* call 0x001E1450 */

loc_001E1D30: ;
    xmm0 = MEMF(0x84C288); /* movss */
    esp = esp + 4;
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 > MEMF(edi))) goto loc_001E1D44; /* ja: above (unsigned >) */

loc_001E1D40: ;
    xmm0 = MEMF(edi); /* movss */

loc_001E1D44: ;
    MEMF(0x84C288) = xmm0; /* movss */
    xmm0 = MEMF(0x84C28C); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 4))) goto loc_001E1D5F; /* ja: above (unsigned >) */

loc_001E1D5A: ;
    xmm0 = MEMF(edi + 4); /* movss */

loc_001E1D5F: ;
    MEMF(0x84C28C) = xmm0; /* movss */
    xmm0 = MEMF(0x84C290); /* movss */
    /* comiss xmm0, MEMF(edi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 8))) goto loc_001E1D7A; /* ja: above (unsigned >) */

loc_001E1D75: ;
    xmm0 = MEMF(edi + 8); /* movss */

loc_001E1D7A: ;
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(0x84C278) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C278))) goto loc_001E1D97; /* ja: above (unsigned >) */

loc_001E1D8F: ;
    MEMF(0x84C278) = xmm0; /* movss */

loc_001E1D97: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(0x84C27C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C27C))) goto loc_001E1DAD; /* ja: above (unsigned >) */

loc_001E1DA5: ;
    MEMF(0x84C27C) = xmm0; /* movss */

loc_001E1DAD: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, MEMF(0x84C280) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C280))) goto loc_001E1DC3; /* ja: above (unsigned >) */

loc_001E1DBB: ;
    MEMF(0x84C280) = xmm0; /* movss */

loc_001E1DC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E1DD0
 * Original: 0x001E1DD0 - 0x001E1E75 (165 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1DD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E1DD0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E1F20(); /* call 0x001E1F20 */

loc_001E1DE0: ;
    xmm0 = MEMF(0x84C288); /* movss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 > MEMF(esi))) goto loc_001E1DF4; /* ja: above (unsigned >) */

loc_001E1DF0: ;
    xmm0 = MEMF(esi); /* movss */

loc_001E1DF4: ;
    MEMF(0x84C288) = xmm0; /* movss */
    xmm0 = MEMF(0x84C28C); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_001E1E0F; /* ja: above (unsigned >) */

loc_001E1E0A: ;
    xmm0 = MEMF(esi + 4); /* movss */

loc_001E1E0F: ;
    MEMF(0x84C28C) = xmm0; /* movss */
    xmm0 = MEMF(0x84C290); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 8))) goto loc_001E1E2A; /* ja: above (unsigned >) */

loc_001E1E25: ;
    xmm0 = MEMF(esi + 8); /* movss */

loc_001E1E2A: ;
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(0x84C278) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C278))) goto loc_001E1E47; /* ja: above (unsigned >) */

loc_001E1E3F: ;
    MEMF(0x84C278) = xmm0; /* movss */

loc_001E1E47: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(0x84C27C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C27C))) goto loc_001E1E5D; /* ja: above (unsigned >) */

loc_001E1E55: ;
    MEMF(0x84C27C) = xmm0; /* movss */

loc_001E1E5D: ;
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm0, MEMF(0x84C280) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C280))) goto loc_001E1E73; /* ja: above (unsigned >) */

loc_001E1E6B: ;
    MEMF(0x84C280) = xmm0; /* movss */

loc_001E1E73: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E1E80
 * Original: 0x001E1E80 - 0x001E1F17 (151 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1E80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E1E80: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x84C288); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 > MEMF(eax))) goto loc_001E1E95; /* ja: above (unsigned >) */

loc_001E1E91: ;
    xmm0 = MEMF(eax); /* movss */

loc_001E1E95: ;
    MEMF(0x84C288) = xmm0; /* movss */
    xmm0 = MEMF(0x84C28C); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 4))) goto loc_001E1EB0; /* ja: above (unsigned >) */

loc_001E1EAB: ;
    xmm0 = MEMF(eax + 4); /* movss */

loc_001E1EB0: ;
    MEMF(0x84C28C) = xmm0; /* movss */
    xmm0 = MEMF(0x84C290); /* movss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 8))) goto loc_001E1ECB; /* ja: above (unsigned >) */

loc_001E1EC6: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_001E1ECB: ;
    MEMF(0x84C290) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x84C278) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C278))) goto loc_001E1EE8; /* ja: above (unsigned >) */

loc_001E1EE0: ;
    MEMF(0x84C278) = xmm0; /* movss */

loc_001E1EE8: ;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(0x84C27C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C27C))) goto loc_001E1EFE; /* ja: above (unsigned >) */

loc_001E1EF6: ;
    MEMF(0x84C27C) = xmm0; /* movss */

loc_001E1EFE: ;
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(0x84C280) - sets EFLAGS */
    if ((xmm0 > MEMF(0x84C280))) goto loc_001E1F14; /* ja: above (unsigned >) */

loc_001E1F0C: ;
    MEMF(0x84C280) = xmm0; /* movss */

loc_001E1F14: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001E1F20
 * Original: 0x001E1F20 - 0x001E2225 (773 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1F20(void)
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

loc_001E1F20: ;
    esp = esp - 0x58;
    eax = MEM32(0x775EA8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    xmm1 = MEMF(ebp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_001E221D; /* jle: less or equal (signed <=) */

loc_001E1F5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x85E428;
    MEM32(esp + 0x14) = eax;

loc_001E1F67: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00123B70(); /* call 0x00123B70 */

loc_001E1F6E: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001E2209; /* jbe: below or equal (unsigned <=) */

loc_001E1F93: ;
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E2209; /* jnp: not parity */

loc_001E1FA3: ;
    eax = esp + 0x38;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x6C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    ecx = esp + 0x38;
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = MEM32(esp + 0x70);
    xmm2 = MEMF(edi + 0x28); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x40); /* mulss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    edi = edi + 0x20;
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_001E2209; /* jbe: below or equal (unsigned <=) */

loc_001E2051: ;
    xmm4 = xmm4 + MEMF(esi + 0xC); /* addss */
    eax = ecx;
    ecx = esp + 0x44;
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    eax = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x38;
    edx = esp + 0x50;
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = edx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x50;
    ecx = esp + 0x5C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm3 = xmm3 - MEMF(0x775EA4); /* subss */
    edx = esp + 0x50;
    eax = edx;
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x775EA0); /* movss */
    ecx = esp + 0x5C;
    edx = ecx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = edx;
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x50;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    SET_LO8(ebx, 1);

loc_001E2209: ;
    eax = MEM32(esp + 0x14);
    esi = esi + 0x10;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001E1F67; /* jne: not equal / not zero */

loc_001E221B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001E221D: ;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E2230
 * Original: 0x001E2230 - 0x001E2287 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2230(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2230: ;
    esp = esp - 0x30;
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm2 = 0.0f; /* xorps self = zero */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ebp);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ebp = MEM32(esp + 0x3C);
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, esi);
    fp_push(MEMF(0x649228)); /* fld float */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - MEMF(eax); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(eax + 8); /* subss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_001E2287(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E227A: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm2; /* movaps */
    g_seh_ebp = ebp; sub_001E2292(); return; /* tail jmp 0x001E2292 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E2410
 * Original: 0x001E2410 - 0x001E24E0 (208 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2410: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001E24E0(); return; } /* jne: not equal / not zero */

loc_001E241D: ;
    eax = MEM32(0x8496C8);
    if (TEST_NZ(eax, eax)) goto loc_001E24D9; /* jne: not equal / not zero */

loc_001E242A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E2438; /* jne: not equal / not zero */

loc_001E2433: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E2438: ;
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
    if (TEST_Z(esi, esi)) goto loc_001E248A; /* je: equal / zero */

loc_001E2460: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E248A; /* jb: below (unsigned <) */

loc_001E246C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E2476: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E2481: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E24B0; /* jne: not equal / not zero */

loc_001E248A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E249C: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E24A7: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E24D0; /* je: equal / zero */

loc_001E24B0: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E24C2: ;
    POP32(esp, edi);
    MEM32(0x8496C8) = eax;
    POP32(esp, esi);
    edx = eax;
    g_seh_ebp = ebp; sub_001E0190(); return; /* tail jmp 0x001E0190 */

loc_001E24D0: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x8496C8) = eax;
    POP32(esp, esi);

loc_001E24D9: ;
    edx = eax;
    g_seh_ebp = ebp; sub_001E0190(); return; /* tail jmp 0x001E0190 */

}

/**
 * sub_001E24F0
 * Original: 0x001E24F0 - 0x001E25C0 (208 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E24F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E24F0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E25BF; /* jne: not equal / not zero */

loc_001E24FD: ;
    eax = MEM32(0x8496C8);
    if (TEST_NZ(eax, eax)) goto loc_001E25B9; /* jne: not equal / not zero */

loc_001E250A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E2518; /* jne: not equal / not zero */

loc_001E2513: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E2518: ;
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
    if (TEST_Z(esi, esi)) goto loc_001E256A; /* je: equal / zero */

loc_001E2540: ;
    if (CMP_B(MEM32(esi + 0x80), 0x16C0)) goto loc_001E256A; /* jb: below (unsigned <) */

loc_001E254C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E2556: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E2561: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001E2590; /* jne: not equal / not zero */

loc_001E256A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E257C: ;
    PUSH32(esp, 0x16C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E2587: ;
    ecx = eax;
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_001E25B0; /* je: equal / zero */

loc_001E2590: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x1000;
    PUSH32(esp, 0); sub_001DFF90(); /* call 0x001DFF90 */

loc_001E25A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x8496C8) = eax;
    PUSH32(esp, 0); sub_001E02C0(); /* call 0x001E02C0 */

loc_001E25AF: ;
    esp += 4; return; /* ret */

loc_001E25B0: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x8496C8) = eax;
    POP32(esp, esi);

loc_001E25B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E02C0(); /* call 0x001E02C0 */

loc_001E25BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E25C0
 * Original: 0x001E25C0 - 0x001E2668 (168 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E25C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E25C0: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    ecx = esi;
    ecx = ecx - edi;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    ebp = edx;
    ebp = ebp >> 0x1F;
    ebp = ebp + edx;
    if (CMP_LE(ebp, 1)) goto loc_001E25F4; /* jle: less or equal (signed <=) */

loc_001E25E9: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001E26C0(); /* call 0x001E26C0 */

loc_001E25F1: ;
    esp = esp + 4;

loc_001E25F4: ;
    (void)0; /* cmp esi, MEM32(esp + 0x48) - flags set for next jcc */
    ebx = esi;
    if (CMP_AE(esi, MEM32(esp + 0x48))) goto loc_001E2657; /* jae: above or equal (unsigned >=) */

loc_001E25FC: ;
    /* nop */

loc_001E2600: ;
    xmm0 = MEMF(edi + 0x24); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x24))) goto loc_001E264C; /* jbe: below or equal (unsigned <=) */

loc_001E260B: ;
    edx = MEM32(esp + 0x40);
    ecx = 0xB;
    esi = ebx;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx;
    ecx = 0xB;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp - 0x2C;
    edi = esp;
    ecx = 0xB;
    esi = esp + 0x3C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    ecx = edx;
    PUSH32(esp, 0); sub_001E2730(); /* call 0x001E2730 */

loc_001E2641: ;
    esi = MEM32(esp + 0x74);
    edi = MEM32(esp + 0x70);
    esp = esp + 0x30;

loc_001E264C: ;
    eax = MEM32(esp + 0x48);
    ebx = ebx + 0x2C;
    if (CMP_B(ebx, eax)) goto loc_001E2600; /* jb: below (unsigned <) */

loc_001E2657: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_001E2670(); /* call 0x001E2670 */

loc_001E2660: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001E2670
 * Original: 0x001E2670 - 0x001E26B8 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2670(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E2670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = ecx;
    esi = edi;
    esi = esi - ebx;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 1)) goto loc_001E26B4; /* jle: less or equal (signed <=) */

loc_001E2691: ;
    eax = edi;
    PUSH32(esp, 0); sub_001E2830(); /* call 0x001E2830 */

loc_001E2698: ;
    esi = esi - 0x2C;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edi = edi - 0x2C;
    if (CMP_G(eax, 1)) goto loc_001E2691; /* jg: greater (signed >) */

loc_001E26B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E26C0
 * Original: 0x001E26C0 - 0x001E2725 (101 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E26C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E26C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = eax - edi;
    ecx = eax;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    ebp = edx;
    ebp = ebp >> 0x1F;
    ebp = ebp + edx;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    if (CMP_LE(ebx & ebx, 0)) goto loc_001E271F; /* jle: less or equal (signed <=) */

loc_001E26EB: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + edi;
    goto loc_001E26F8;

loc_001E26F4: ;
    esi = MEM32(esp + 0x10);

loc_001E26F8: ;
    esp = esp - 0x2C;
    esi = esi - 0x2C;
    edi = esp;
    ecx = 0xB;
    ebx--;
    MEM32(esp + 0x3C) = esi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_001E2730(); /* call 0x001E2730 */

loc_001E2718: ;
    esp = esp + 0x30;
    if (CMP_G(ebx & ebx, 0)) goto loc_001E26F4; /* jg: greater (signed >) */

loc_001E271F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E2730
 * Original: 0x001E2730 - 0x001E27C1 (145 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = eax + eax + 2;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(edx, ebp)) goto loc_001E2783; /* jge: greater or equal (signed >=) */

loc_001E2746: ;
    goto loc_001E2750;

    /* nop */
    /* nop */

loc_001E2750: ;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    xmm0 = MEMF(ecx + ebx + -8); /* movss */
    ecx = ecx + ebx;
    /* comiss xmm0, MEMF(ecx + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x24))) goto loc_001E2764; /* jbe: below or equal (unsigned <=) */

loc_001E2763: ;
    edx--;

loc_001E2764: ;
    esi = edx;
    edi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = edx;
    esi = esi + ebx;
    edi = edi + ebx;
    edx = edx + edx + 2;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    ecx = 0xB;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_L(edx, ebp)) goto loc_001E2750; /* jl: less (signed <) */

loc_001E2783: ;
    if (CMP_NE(edx, ebp)) goto loc_001E279F; /* jne: not equal / not zero */

loc_001E2785: ;
    edi = eax;
    edx = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    esi = edx + ebx + -44;
    edi = edi + ebx;
    ecx = 0xB;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ebp + -1;

loc_001E279F: ;
    esp = esp - 0x2C;
    edi = esp;
    ecx = 0xB;
    esi = esp + 0x44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001E27D0(); /* call 0x001E27D0 */

loc_001E27B9: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E27D0
 * Original: 0x001E27D0 - 0x001E282B (91 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E27D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E27D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(ebp, edi)) goto loc_001E2817; /* jge: greater or equal (signed >=) */

loc_001E27E5: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    goto loc_001E27F0;

    /* nop */

loc_001E27F0: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    /* comiss xmm0, MEMF(ecx + ebx + 0x24) - sets EFLAGS */
    esi = ecx + ebx;
    if ((xmm0 <= MEMF(ecx + ebx + 0x24))) goto loc_001E2817; /* jbe: below or equal (unsigned <=) */

loc_001E27FF: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    edi = edi + ebx;
    ecx = 0xB;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(ebp, edi)) goto loc_001E27F0; /* jl: less (signed <) */

loc_001E2817: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    edi = edi + ebx;
    ecx = 0xB;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001E2830
 * Original: 0x001E2830 - 0x001E288B (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2830(void)
{

loc_001E2830: ;
    edx = eax + -44;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    eax = eax - ebx;
    ecx = 0xB;
    edi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = edx;
    eax = eax - 0x2C;
    ecx = 0xB;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp - 0x2C;
    edi = esp;
    ecx = 0xB;
    esi = esp + 0x34;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_001E2730(); /* call 0x001E2730 */

loc_001E2882: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001E2890
 * Original: 0x001E2890 - 0x001E297E (238 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2890(void)
{
    float xmm0, xmm1, xmm2;

loc_001E2890: ;
    esp = esp - 0x14;
    eax = esp + 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(esp + 0x24);
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
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edx = ecx;
    eax = ecx;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 4) = edx;
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E2980
 * Original: 0x001E2980 - 0x001E29AF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2980(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E2980: ;
    PUSH32(esp, ecx);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp) = edi;
    if (TEST_Z(edi, edi)) goto loc_001E298B; /* je: equal / zero */

loc_001E2988: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_001E298B: ;
    eax = esp;
    PUSH32(esp, 0); sub_001E4CD0(); /* call 0x001E4CD0 */

loc_001E2993: ;
    if (TEST_Z(edi, edi)) goto loc_001E29AD; /* je: equal / zero */

loc_001E2997: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001E29AD; /* jne: not equal / not zero */

loc_001E29A4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001E29AD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E29B0
 * Original: 0x001E29B0 - 0x001E2AC7 (279 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E29B0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E29B0: ;
    eax = MEM32(0x8496B0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(ebp + 4) = 0;
    eax++;
    MEM32(ebp) = 0x5F5CEC;
    edi = ebp + 0x10;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x8496B0) = eax;
    eax = MEM32(esp + 0x18);
    edi = ebp + 0x50;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x7F);
    MEM32(ebp + 0x90) = eax;
    PUSH32(esp, edx);
    eax = ebp + 0xAC;
    MEMF(ebp + 0xA0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEM32(ebp + 0x94) = ecx;
    MEMF(ebp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001E2A28: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    SET_LO8(edx, MEM8(ebp + 0x148));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    ecx = 0; /* xor self */
    SET_LO8(ebx, LO8(ebx) << 2);
    MEM32(ebp + 0x13C) = ecx;
    MEM8(ebp + 0x140) = LO8(ecx);
    SET_LO8(edx, LO8(edx) & 0xF1);
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(ebp + 0x148) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x6B99FC));
    MEM32(ebp + 0x14C) = ecx;
    MEM8(ebp + 0x150) = LO8(ecx);
    MEMF(ebp + 0x144) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEM32(ebp + 0x12C) = 0xFFFFFFFFu;
    MEM8(ebp + 0x16C) = LO8(ecx);
    MEM8(ebp + 0x1EB) = LO8(ecx);
    SET_LO8(eax, MEM8(ebp + 0x148));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ebp + 0x141) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x148));
    SET_LO8(eax, LO8(eax) & 1);
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, esi);
    MEMF(ebp + 0x98) = xmm0; /* movss */
    MEMF(ebp + 0x9C) = xmm0; /* movss */
    MEM8(ebp + 0x148) = LO8(ecx);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001E2AD0
 * Original: 0x001E2AD0 - 0x001E2AD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2AD0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001E2AD0: ;
    fp_push(MEMF(ecx + 0xA0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E2AE0
 * Original: 0x001E2AE0 - 0x001E2AEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2AE0(void)
{

loc_001E2AE0: ;
    SET_LO8(eax, MEM8(ecx + 0x148));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001E2AF0
 * Original: 0x001E2AF0 - 0x001E2AFF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E2AF0: ;
    edx = MEM32(ecx + 0x94);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001E2B00
 * Original: 0x001E2B00 - 0x001E2B07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2B00(void)
{

loc_001E2B00: ;
    eax = ecx + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_001E2B10
 * Original: 0x001E2B10 - 0x001E2B90 (128 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2B10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001E2B10: ;
    xmm0 = xmm0 * MEMF(0x648FDC); /* mulss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 4));
    ecx = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    eax = ecx + 1;
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001E2B36; /* je: equal / zero */

loc_001E2B28: ;
    eax = eax & 0x8000007Fu;
    if (((int32_t)eax >= 0)) goto loc_001E2B40; /* jns: not sign (positive) */

loc_001E2B2F: ;
    eax--;
    eax = eax | 0xFFFFFF80u;
    eax++;
    goto loc_001E2B40;

loc_001E2B36: ;
    if (CMP_L(eax, 0x7F)) goto loc_001E2B40; /* jl: less (signed <) */

loc_001E2B3B: ;
    eax = 0x7F;

loc_001E2B40: ;
    edx = MEM32(edx);
    xmm2 = MEMF(0x648CEC); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = edx + ecx * 2;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(ecx + esi + 2));
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    edx = edx + eax * 2;
    eax = ZX8(MEM8(eax + edx + 2));
    xmm3 = xmm3 - xmm1; /* subss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E2B90
 * Original: 0x001E2B90 - 0x001E2BEA (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2B90(void)
{
    float xmm0;

loc_001E2B90: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 4) = 0;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(eax) = 0x5F5D08;
    edi = eax + 0x10;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x5C) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM32(eax + 0x60) = edx;
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x64) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(eax + 0x65) = LO8(edx);
    edx = MEM32(esp + 0x20);
    MEM8(eax + 0x66) = LO8(ecx);
    MEM32(eax + 0x68) = edx;
    POP32(esp, edi);
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E2BF0
 * Original: 0x001E2BF0 - 0x001E3188 (1432 bytes, 341 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E2BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E2BF0: ;
    esp = esp - 0x78;
    SET_LO8(eax, MEM8(0x8496E4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x5C);
    MEM32(esp + 0x10) = edi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E2C28; /* jne: not equal / not zero */

loc_001E2C09: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_001E2C28; /* jbe: below or equal (unsigned <=) */

loc_001E2C11: ;
    ecx = MEM32(edi + 4);

loc_001E2C14: ;
    esi = MEM32(ecx);
    if (CMP_EQ(MEM8(esi + 0x40), 7)) goto loc_001E3180; /* je: equal / zero */

loc_001E2C20: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_B(eax, edx)) goto loc_001E2C14; /* jb: below (unsigned <) */

loc_001E2C28: ;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_0040ACD0(); /* call 0x0040ACD0 */

loc_001E2C35: ;
    eax = MEM32(0x847194);
    ecx = MEM32(ebp + 0x60);
    MEM32(0x84B7D0) = eax;
    eax = MEM32(ecx + 0x64);
    esp = esp + 4;
    if (CMP_AE(eax, 0x100)) goto loc_001E2C83; /* jae: above or equal (unsigned >=) */

loc_001E2C4F: ;
    if (CMP_BE(eax & eax, 0)) goto loc_001E2C83; /* jbe: below or equal (unsigned <=) */

loc_001E2C53: ;
    esi = eax + -1;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_001E2C87; /* je: equal / zero */

loc_001E2C5B: ;
    eax = esi;
    PUSH32(esp, 0); sub_0012E360(); /* call 0x0012E360 */

loc_001E2C62: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E2C87; /* je: equal / zero */

loc_001E2C66: ;
    edx = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = esi + edx + 0x36C;
    PUSH32(esp, 0); sub_001E0800(); /* call 0x001E0800 */

loc_001E2C7E: ;
    goto loc_001E2D09;

loc_001E2C83: ;
    esi = 0; /* xor self */
    goto loc_001E2C5B;

loc_001E2C87: ;
    ebx = MEM32(0x8493C4);
    if (TEST_NZ(ebx, ebx)) goto loc_001E2CDF; /* jne: not equal / not zero */

loc_001E2C91: ;
    PUSH32(esp, 0x570);
    PUSH32(esp, 0); sub_00130BC0(); /* call 0x00130BC0 */

loc_001E2C9B: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_001E2CD7; /* je: equal / zero */

loc_001E2CA4: ;
    eax = 0; /* xor self */
    edi = ebx + 0xA0;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x330) = eax;
    MEM32(ebx + 0x334) = eax;
    MEM8(ebx + 0x338) = LO8(eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0012D020(); /* call 0x0012D020 */

loc_001E2CD1: ;
    edi = MEM32(esp + 0x10);
    goto loc_001E2CD9;

loc_001E2CD7: ;
    ebx = 0; /* xor self */

loc_001E2CD9: ;
    MEM32(0x8493C4) = ebx;

loc_001E2CDF: ;
    MEM32(0x85D5B4) = ebx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax);
    if (CMP_EQ(MEM8(ecx + 0x40), 7)) goto loc_001E2D09; /* je: equal / zero */

loc_001E2CF0: ;
    edx = MEM32(ebp + 0x58);
    eax = MEM32(ebp + 0x54);
    xmm0 = MEMF(ebp + 0x50); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_001E2D06: ;
    esp = esp + 0x10;

loc_001E2D09: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    if (CMP_EQ(MEM8(edx + 0x40), 7)) goto loc_001E2EF0; /* je: equal / zero */

loc_001E2D18: ;
    esi = MEM32(0x85D5B4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0012DCD0(); /* call 0x0012DCD0 */

loc_001E2D34: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    eax = esp + 0x3C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = eax;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = 0; /* xor self */

loc_001E2DA4: ;
    edx = esi + 0x6B9A08;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x30;
    ebx = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001E2DC9: ;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    eax = MEM32(0x85D5B4);
    xmm3 = xmm1; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    ecx = esp + esi + 0x48;
    eax = eax + 0x18;
    edx = 3;
    edi = edi;

loc_001E2E00: ;
    xmm4 = MEMF(eax + -4); /* movss */
    xmm5 = MEMF(eax + -8); /* movss */
    xmm6 = MEMF(eax); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + 4); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 * MEMF(0x649174); /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + 8); /* movss */
    xmm4 = xmm4 * MEMF(0x649164); /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 * MEMF(0x649170); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax + -24); /* movss */
    xmm6 = xmm6 * MEMF(0x64916C); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax); /* movss */
    xmm6 = xmm6 * MEMF(0x649168); /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = MEMF(eax + -20); /* movss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + -16); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax + -12); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * MEMF(0x649160); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(ecx) = xmm4; /* movss */
    ecx = ecx + 4;
    eax = eax + 0x30;
    edx--;
    if ((edx != 0)) goto loc_001E2E00; /* jne: not equal / not zero */

loc_001E2EC1: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + esi + 0x54) = xmm0; /* movss */
    esi = esi + 0x10;
    if (CMP_L(esi, 0x40)) goto loc_001E2DA4; /* jl: less (signed <) */

loc_001E2EDB: ;
    ecx = esp + 0x3C;
    edx = esp + 0x24;
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_0040B2F0(); /* call 0x0040B2F0 */

loc_001E2EEC: ;
    edi = MEM32(esp + 0x10);

loc_001E2EF0: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2F01: ;
    edx = 0x10;
    ecx = 0x40340;
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2F16: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = 0x10;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2F2F: ;
    MEM32(0x549AE0) = 0x206;
    SET_LO8(eax, MEM8(ebp + 0x64));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0x40358;
    edx = 0x1010101;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E3031; /* je: equal / zero */

loc_001E2F4E: ;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2F53: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2F6C: ;
    PUSH32(esp, ebx);
    MEM32(0x549B1C) = 0xF;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001E2F7C: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2F8B: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E2FA4: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(0x549B0C) = 0x1E01;
    eax = ZX8(MEM8(ebp + 0x64));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001E302D; /* ja: above (unsigned >) */

loc_001E2FCC: ;
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_001E3024; /* jbe: below or equal (unsigned <=) */

loc_001E2FD9: ;
    MEMF(esp + 0x10) = xmm2; /* movss */

loc_001E2FDF: ;
    fp_push(MEMF(0x85E3FC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E2FF4: ;
    esi = ZX8(LO8(eax));
    edx = esi;
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E3003: ;
    edx = 0x40;
    ecx = 0x40340;
    MEM32(0x549B14) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E3018: ;
    MEM32(0x549AEC) = 0x40;
    goto loc_001E3047;

loc_001E3024: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001E2FDF; /* jp: parity */

loc_001E302D: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001E2FF4;

loc_001E3031: ;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E3036: ;
    PUSH32(esp, 0);
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001E3047: ;
    SET_LO8(eax, MEM8(ebp + 0x66));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E3081; /* je: equal / zero */

loc_001E304E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001E3054: ;
    edx = ebx;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E3060: ;
    edx = 0x203;
    ecx = 0x40354;
    MEM32(0x549AF8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E3075: ;
    MEM32(0x549ADC) = 0x203;
    goto loc_001E3097;

loc_001E3081: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E308D: ;
    MEM32(0x549AF8) = 0;

loc_001E3097: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E30A3: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E30B8: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E30D1: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E30EA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_0040AE00(); /* call 0x0040AE00 */

loc_001E30FE: ;
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001E3108: ;
    edx = MEM32(0x5499F0);
    eax = MEM32(0x8493C4);
    edx = edx | 0x900;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x84BDFD) = 0;
    MEM32(0x5499F0) = edx;
    MEM32(0x549BD0) = 0;
    if (TEST_NZ(eax, eax)) goto loc_001E317B; /* jne: not equal / not zero */

loc_001E3134: ;
    PUSH32(esp, 0x570);
    PUSH32(esp, 0); sub_00130BC0(); /* call 0x00130BC0 */

loc_001E313E: ;
    ebp = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(ebp, eax)) goto loc_001E3176; /* je: equal / zero */

loc_001E3149: ;
    edi = ebp + 0xA0;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + 0x330) = eax;
    MEM32(ebp + 0x334) = eax;
    MEM8(ebp + 0x338) = LO8(eax);
    eax = ebp;
    PUSH32(esp, 0); sub_0012D020(); /* call 0x0012D020 */

loc_001E3174: ;
    eax = ebp;

loc_001E3176: ;
    MEM32(0x8493C4) = eax;

loc_001E317B: ;
    MEM32(0x85D5B4) = eax;

loc_001E3180: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E3190
 * Original: 0x001E3190 - 0x001E31D5 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3190(void)
{

loc_001E3190: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, edi);
    MEM32(eax) = 0x5F5CD8;
    edi = eax + 0x10;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(edx);
    ecx = eax + 0x50;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E31E0
 * Original: 0x001E31E0 - 0x001E31E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E31E0(void)
{

loc_001E31E0: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_001E31F0
 * Original: 0x001E31F0 - 0x001E3235 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E31F0(void)
{
    uint32_t ebp;

loc_001E31F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    MEM32(0x84BDC8) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E3217: ;
    PUSH32(esp, edx);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_0040AE00(); /* call 0x0040AE00 */

loc_001E3221: ;
    esp = esp + 4;
    MEM32(0x84BDC8) = 0;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E3240
 * Original: 0x001E3240 - 0x001E3245 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3240(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E3240: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_001E3250
 * Original: 0x001E3250 - 0x001E3296 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3250(void)
{
    uint32_t ebp;

loc_001E3250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    ebx = ecx;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001E326A: ;
    esi = eax;
    edi = ebx + 0x20;
    ecx = 0x30;
    eax = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001E327F: ;
    esi = MEM32(ebx + 0xF4);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0040B110(); /* call 0x0040B110 */

loc_001E328D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E32A0
 * Original: 0x001E32A0 - 0x001E32A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E32A0(void)
{

loc_001E32A0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001E32B0
 * Original: 0x001E32B0 - 0x001E336D (189 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E32B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001E32B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001E3303; /* jne: not equal / not zero */

loc_001E32BF: ;
    PUSH32(esp, 0x2E0);
    PUSH32(esp, 0); sub_001DD990(); /* call 0x001DD990 */

loc_001E32C9: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001E336D(); return; } /* je: equal / zero */

loc_001E32D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E3670(); /* call 0x001E3670 */

loc_001E32DC: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001E32F8; /* je: equal / zero */

loc_001E32E2: ;
    SET_LO8(eax, MEM8(esi + 0xE0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E32F8; /* je: equal / zero */

loc_001E32EC: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_001E32F8: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001E3303: ;
    xmm1 = MEMF(esi + 0xA8); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001E3324; /* jp: parity */

loc_001E3317: ;
    xmm1 = MEMF(esi + 0x144); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001E334C; /* jbe: below or equal (unsigned <=) */

loc_001E3324: ;
    eax = MEM32(esi + 0xA4);
    if (TEST_Z(eax, eax)) goto loc_001E334C; /* je: equal / zero */

loc_001E332E: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0); sub_001DD990(); /* call 0x001DD990 */

loc_001E3338: ;
    edx = eax;
    esp = esp + 4;
    if (TEST_Z(edx, edx)) { sub_001E336D(); return; } /* je: equal / zero */

loc_001E3341: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_001E4850(); /* call 0x001E4850 */

loc_001E334A: ;
    goto loc_001E32DC;

loc_001E334C: ;
    PUSH32(esp, 0x3C0);
    PUSH32(esp, 0); sub_001DD990(); /* call 0x001DD990 */

loc_001E3356: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001E336D(); return; } /* je: equal / zero */

loc_001E335D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_001E4290(); /* call 0x001E4290 */

loc_001E3367: ;
    POP32(esp, ebx);
    goto loc_001E32DC;

}

/**
 * sub_001E3380
 * Original: 0x001E3380 - 0x001E33CA (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E3380: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    edx = esi;
    PUSH32(esp, 0); sub_004098D0(); /* call 0x004098D0 */

loc_001E338D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ebp = eax;
    PUSH32(esp, 0x360);
    eax = ebp + 0x40;
    PUSH32(esp, 0x5F5D14);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    MEM32(edi + 0xF8) = ebx;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001E33B0: ;
    esp = esp + 0x10;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0xF4) = eax;
    if (CMP_NE(eax, ebx)) { sub_001E33CA(); return; } /* jne: not equal / not zero */

loc_001E33BD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 0xE0) = LO8(ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E34F0
 * Original: 0x001E34F0 - 0x001E351A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E34F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E34F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_001E3FB0(); /* call 0x001E3FB0 */

loc_001E34F8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001E3514; /* je: equal / zero */

loc_001E34FF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001E3514; /* je: equal / zero */

loc_001E3507: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001E3511: ;
    esp = esp + 4;

loc_001E3514: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E3520
 * Original: 0x001E3520 - 0x001E3541 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3520(void)
{
    float xmm0, xmm1;

loc_001E3520: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xF4);
    MEMF(ecx + 0x188) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0040B010(); /* call 0x0040B010 */

loc_001E353D: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E3550
 * Original: 0x001E3550 - 0x001E35B8 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3550(void)
{
    uint32_t ebp;
    float xmm0;

loc_001E3550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 8);
    edx = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_001E3572: ;
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    ecx = eax;
    PUSH32(esp, ecx);
    eax = edx + 0x140;
    PUSH32(esp, eax);
    ecx = edx + 0x100;
    PUSH32(esp, ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E35A7: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_001E35B2: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E35C0
 * Original: 0x001E35C0 - 0x001E3636 (118 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E35C0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001E35C0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001E35CA: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E35EB: ;
    edi = MEM32(esp + 0x20);
    MEM8(edi + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001E35F7: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esi = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00068950(); /* call 0x00068950 */

loc_001E362B: ;
    MEM32(edi + 0x10) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
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
 * sub_001E3640
 * Original: 0x001E3640 - 0x001E366C (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3640(void)
{
    float xmm0;

loc_001E3640: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001E3645: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    ecx = MEM32(esp + 8);
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(eax));
    MEM16(ecx + 0x38) = LO16(eax);
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001E3670
 * Original: 0x001E3670 - 0x001E3A61 (1009 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_001E3670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = 0; /* xor self */
    MEM32(ebx) = 0x5F5A80;
    MEM32(ebx + 0x10) = esi;
    eax = ebx + 0x20;
    edx = edi;
    MEM32(ebx + 0x14) = esi;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001E369A: ;
    SET_LO8(eax, MEM8(ebx + 0x184));
    xmm6 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x8496B4);
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(ebx + 0x184) = LO8(eax);
    MEM8(ebx + 0xE0) = 1;
    MEM32(ebx + 0xE4) = 0xF0;
    MEM32(ebx) = 0x5F5C70;
    MEMF(ebx + 0x198) = xmm6; /* movss */
    MEMF(ebx + 0x1A8) = xmm6; /* movss */
    MEM32(ebx + 0x2C0) = esi;
    esi = MEM32(ebp + 0xC);
    ecx++;
    eax = esi + 0x10;
    edx = edi + 0x70;
    PUSH32(esp, edx);
    MEM32(0x8496B4) = ecx;
    ecx = ebx + 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(0x84BDFC) = 0;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E3707: ;
    SET_LO8(eax, MEM8(esi + 0x148));
    SET_LO8(ecx, MEM8(ebx + 0x184));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 0x184) = LO8(ecx);
    SET_LO8(eax, MEM8(ebx + 0x184));
    MEMF(ebx + 0x1B0) = xmm6; /* movss */
    ecx = MEM32(esi + 0x90);
    MEM32(ebx + 0xF0) = ecx;
    MEMF(ebx + 0x180) = xmm6; /* movss */
    SET_LO8(eax, LO8(eax) & 0xFA);
    MEM8(ebx + 0x184) = LO8(eax);
    edx = MEM32(esi + 0x98);
    MEM32(ebx + 0x2C8) = edx;
    eax = MEM32(esi + 0x9C);
    MEM32(ebx + 0x2CC) = eax;
    xmm0 = MEMF(edi + 0x5C); /* movss */
    xmm1 = MEMF(ebx + 0x2C8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x2C8) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x2CC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x2CC) = xmm1; /* movss */
    SET_LO8(ecx, MEM8(esi + 0x148));
    SET_LO8(eax, MEM8(ebx + 0x184));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(ebx + 0x184) = LO8(edx);
    edx = MEM32(esi + 0xA0);
    MEM32(ebx + 0x1B0) = edx;
    SET_LO8(eax, MEM8(esi + 0x141));
    MEM8(ebx + 0x1B4) = LO8(eax);
    eax = MEM32(ebx + 0xF0);
    edi = ebx;
    PUSH32(esp, 0); sub_001E3380(); /* call 0x001E3380 */

loc_001E37D3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E3A56; /* je: equal / zero */

loc_001E37DB: ;
    SET_LO8(eax, MEM8(ebx + 0x184));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(ebx + 0x184) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    MEMF(ebx + 0x188) = xmm0; /* movss */
    esi = esi + 0x50;
    edi = ebx + 0x140;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x13C);
    MEM32(ebx + 0x1AC) = ecx;
    ecx = MEM32(eax + 0x14C);
    if (TEST_Z(ecx, ecx)) goto loc_001E382A; /* je: equal / zero */

loc_001E3822: ;
    ecx = MEM32(ecx + 0x98);
    goto loc_001E382C;

loc_001E382A: ;
    ecx = 0; /* xor self */

loc_001E382C: ;
    MEM32(ebx + 0x1B8) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x140));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001E386D; /* je: equal / zero */

loc_001E383C: ;
    esi = MEM32(ebx + 0xF4);
    ecx = MEM32(esi);
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_001E38BB; /* jbe: below or equal (unsigned <=) */

loc_001E384A: ;
    edi = 0x1E35C0;
    /* nop */

loc_001E3850: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edx * 4);
    ecx = MEM32(ecx + 0x54);
    if (CMP_NE(MEM8(ecx), 0)) goto loc_001E3864; /* jne: not equal / not zero */

loc_001E385E: ;
    MEM32(ecx + 0xA8) = edi;

loc_001E3864: ;
    ecx = MEM32(esi);
    edx++;
    if (CMP_B(edx, ecx)) goto loc_001E3850; /* jb: below (unsigned <) */

loc_001E386B: ;
    goto loc_001E38BB;

loc_001E386D: ;
    ecx = MEM32(eax + 0x14C);
    if (TEST_Z(ecx, ecx)) goto loc_001E38BB; /* je: equal / zero */

loc_001E3877: ;
    xmm0 = MEMF(ecx + 0xA4); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_001E38BB; /* jbe: below or equal (unsigned <=) */

loc_001E3888: ;
    esi = MEM32(ebx + 0xF4);
    ecx = MEM32(esi);
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_001E38BB; /* jbe: below or equal (unsigned <=) */

loc_001E3896: ;
    edi = 0x1E3640;
    goto loc_001E38A0;

    /* nop */

loc_001E38A0: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edx * 4);
    ecx = MEM32(ecx + 0x54);
    if (CMP_NE(MEM8(ecx), 0)) goto loc_001E38B4; /* jne: not equal / not zero */

loc_001E38AE: ;
    MEM32(ecx + 0xA8) = edi;

loc_001E38B4: ;
    ecx = MEM32(esi);
    edx++;
    if (CMP_B(edx, ecx)) goto loc_001E38A0; /* jb: below (unsigned <) */

loc_001E38BB: ;
    ecx = MEM32(eax + 0x14C);
    if (TEST_Z(ecx, ecx)) goto loc_001E38CD; /* je: equal / zero */

loc_001E38C5: ;
    SET_LO8(ecx, MEM8(ecx + 0xA8));
    goto loc_001E38CF;

loc_001E38CD: ;
    SET_LO8(ecx, 0); /* xor self */

loc_001E38CF: ;
    edx = MEM32(ebp + 0x10);
    MEM8(ebx + 0x1BC) = LO8(ecx);
    ecx = MEM32(ebx + 0xF4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edi = ebx + 0x1C0;
    PUSH32(esp, 0); sub_001E04E0(); /* call 0x001E04E0 */

loc_001E38EB: ;
    esi = MEM32(ebx + 0xF4);
    edx = MEM32(esi + 4);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + 0x24);
    if (CMP_EQ(MEM8(edx), 1)) goto loc_001E3975; /* je: equal / zero */

loc_001E3901: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(ebx + 0x2C8); /* divss */
    xmm1 = MEMF(ebx + 0x130); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x130) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x134); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x134) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x138); /* movss */
    edi = ebx + 0x100;
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    MEMF(ebx + 0x138) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0040A460(); /* call 0x0040A460 */

loc_001E395C: ;
    eax = MEM32(ebx + 0x2C8);
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_001E3973: ;
    goto loc_001E39A1;

loc_001E3975: ;
    eax = MEM32(ebx + 0x2C8);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_001E398B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = ebx + 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E39A1: ;
    eax = MEM32(ebx + 0x1B8);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM8(ebx + 0x2D0) = 0;
    MEM16(ebx + 0x2D2) = LO16(esi);
    if (CMP_NE(eax, 2)) goto loc_001E39C4; /* jne: not equal / not zero */

loc_001E39BC: ;
    edi = MEM32(ebx + 0x1AC);
    goto loc_001E39C6;

loc_001E39C4: ;
    edi = 0; /* xor self */

loc_001E39C6: ;
    if (CMP_NE(eax, 2)) goto loc_001E39DE; /* jne: not equal / not zero */

loc_001E39CB: ;
    (void)0; /* cmp MEM32(ebx + 0x1C4), 1 - flags set for next jcc */
    esi = 0x1E0870;
    if (CMP_EQ(MEM32(ebx + 0x1C4), 1)) goto loc_001E39DE; /* je: equal / zero */

loc_001E39D9: ;
    esi = 0x1E0920;

loc_001E39DE: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x115);
    PUSH32(esp, 0x5E9968);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001E39F1: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001E3A22; /* je: equal / zero */

loc_001E39F8: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x1BC));
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x1B4));
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xF4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5A0350);
    PUSH32(esp, edx);
    edx = ebx + 0x20;
    PUSH32(esp, 0); sub_001E2B90(); /* call 0x001E2B90 */

loc_001E3A20: ;
    goto loc_001E3A24;

loc_001E3A22: ;
    eax = 0; /* xor self */

loc_001E3A24: ;
    if (TEST_Z(eax, eax)) goto loc_001E3A2B; /* je: equal / zero */

loc_001E3A28: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_001E3A2B: ;
    ecx = MEM32(ebx + 0x2C0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebx + 0x2C0) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_001E3A4F; /* je: equal / zero */

loc_001E3A3B: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_001E3A4F; /* jne: not equal / not zero */

loc_001E3A48: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001E3A4F: ;
    MEM8(ebx + 0x2C4) = 0;

loc_001E3A56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E3A70
 * Original: 0x001E3A70 - 0x001E3A73 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3A70(void)
{

loc_001E3A70: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E3A80
 * Original: 0x001E3A80 - 0x001E3FAF (1327 bytes, 355 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001E3A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(0x8496DC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = esi;
    if (TEST_NZ(eax, eax)) goto loc_001E3AA6; /* jne: not equal / not zero */

loc_001E3AA1: ;
    xmm0 = MEMF(ebp + 8); /* movss */

loc_001E3AA6: ;
    xmm1 = MEMF(esi + 0x180); /* movss */
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0x180) = xmm1; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_001E3B28; /* jne: not equal / not zero */

loc_001E3AC3: ;
    if (TEST_Z(MEM8(esi + 0x184), 0x10)) goto loc_001E3B28; /* je: equal / zero */

loc_001E3ACC: ;
    eax = MEM32(0x84A13C);
    edx = esi + 0x18C;
    eax = eax + 0x148;
    edi = esi + 0x2C4;
    ecx = edx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E0DD0(); /* call 0x003E0DD0 */

loc_001E3AEB: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001E3B28; /* jne: not equal / not zero */

loc_001E3AF2: ;
    eax = 0xB21642C9u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 9;
    ecx = ZX8(LO8(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    /* comiss xmm0, MEMF(esi + 0x180) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x180))) goto loc_001E3FA6; /* ja: above (unsigned >) */

loc_001E3B28: ;
    SET_LO8(eax, MEM8(esi + 0x2D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E3B4D; /* je: equal / zero */

loc_001E3B32: ;
    SET_LO16(edx, MEM16(esi + 0x2D2));
    SET_LO16(eax, MEM16(esi + 0x2D4));
    MEM16(0x8496D4) = LO16(edx);
    MEM16(0x8496D8) = LO16(eax);

loc_001E3B4D: ;
    ecx = MEM32(0x8470DC);
    ecx = ecx + 0x330;
    edx = MEM32(ecx);
    MEM32(0x84BDD0) = edx;
    eax = MEM32(ecx + 4);
    MEM32(0x84BDD4) = eax;
    ecx = MEM32(ecx + 8);
    edx = esi + 0x280;
    PUSH32(esp, edx);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ebx = esi + 0x1C0;
    MEM32(0x84BDD8) = ecx;
    PUSH32(esp, 0); sub_001E1090(); /* call 0x001E1090 */

loc_001E3B88: ;
    ecx = MEM32(esi + 0x180);
    ebx = MEM32(esi + 0xF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0040A9D0(); /* call 0x0040A9D0 */

loc_001E3B9A: ;
    eax = MEM32(esi + 0xF4);
    edx = MEM32(eax + 4);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(edx + 0x24);
    SET_LO8(edx, MEM8(ecx));
    esp = esp + 4;
    if (CMP_EQ(LO8(edx), 1)) goto loc_001E3C4E; /* je: equal / zero */

loc_001E3BB9: ;
    SET_LO8(eax, MEM8(esi + 0x184));
    ebx = MEM32(esp + 0x2C);
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(esi + 0x184) = LO8(eax);
    eax = esi + 0x18C;
    ecx = 8;
    esi = 0x84C278;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(ebx + 0x19C); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    esi = ebx + 0x19C;
    MEM32(esp + 0x18) = eax;
    if ((xmm0 < MEMF(eax))) goto loc_001E3D61; /* jb: below (unsigned <) */

loc_001E3BFA: ;
    edi = ebx + 0x100;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E3C08: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E3C10: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E2890(); /* call 0x001E2890 */

loc_001E3C20: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(ebx + 0x184));
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM32(esp + 0x28) = edx;
    MEM8(ebx + 0x184) = LO8(eax);
    goto loc_001E3D5D;

loc_001E3C4E: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x44);
    eax = MEM32(edx + 0x24);
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    SET_LO8(edx, MEM8(ecx + 0x40));
    if (CMP_B(LO8(edx), 4)) goto loc_001E3CBC; /* jb: below (unsigned <) */

loc_001E3C8D: ;
    if (CMP_BE(LO8(edx), 5)) goto loc_001E3C97; /* jbe: below or equal (unsigned <=) */

loc_001E3C92: ;
    if (CMP_NE(LO8(edx), 7)) goto loc_001E3CBC; /* jne: not equal / not zero */

loc_001E3C97: ;
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x50) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x50))) goto loc_001E3CA4; /* jbe: below or equal (unsigned <=) */

loc_001E3CA2: ;
    goto loc_001E3CA9;

loc_001E3CA4: ;
    xmm0 = MEMF(ecx + 0x50); /* movss */

loc_001E3CA9: ;
    xmm2 = MEMF(eax + 0x14); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x30) = xmm2; /* movss */

loc_001E3CBC: ;
    edi = esi + 0x100;
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E3CD0: ;
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(esi + 0x114) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x114))) goto loc_001E3CDF; /* jbe: below or equal (unsigned <=) */

loc_001E3CDD: ;
    goto loc_001E3CE7;

loc_001E3CDF: ;
    xmm0 = MEMF(esi + 0x114); /* movss */

loc_001E3CE7: ;
    /* comiss xmm0, MEMF(esi + 0x128) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x128))) goto loc_001E3CF8; /* ja: above (unsigned >) */

loc_001E3CF0: ;
    xmm0 = MEMF(esi + 0x128); /* movss */

loc_001E3CF8: ;
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(esp + 0x30); /* movss */
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = edx;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = edx;
    SET_LO8(edx, MEM8(esi + 0x184));
    eax = esp + 0x1C;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    SET_LO8(edx, LO8(edx) | 0x10);
    PUSH32(esp, ecx);
    MEM8(esi + 0x184) = LO8(edx);
    PUSH32(esp, 0); sub_00099160(); /* call 0x00099160 */

loc_001E3D46: ;
    ebx = MEM32(esp + 0x2C);
    edi = esi + 0x18C;
    ecx = 8;
    esi = eax;
    MEM32(esp + 0x18) = edi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001E3D5D: ;
    eax = MEM32(esp + 0x18);

loc_001E3D61: ;
    if (TEST_Z(MEM8(ebx + 0x184), 0x10)) goto loc_001E3D97; /* je: equal / zero */

loc_001E3D6A: ;
    edx = ebx + 0x19C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E2890(); /* call 0x001E2890 */

loc_001E3D7C: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x28) = edx;

loc_001E3D97: ;
    eax = MEM32(0x84A13C);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    esi = ebx + 0x100;
    PUSH32(esp, esi);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E3DB1: ;
    eax = MEM32(0x84A13C);
    edx = MEM32(ebx);
    eax = eax + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001E3DC3: ;
    if (CMP_NE(MEM32(ebx + 0x1B8), 1)) goto loc_001E3E2A; /* jne: not equal / not zero */

loc_001E3DCC: ;
    eax = MEM32(ebx + 0x1AC);
    if (TEST_Z(eax, eax)) goto loc_001E3E2A; /* je: equal / zero */

loc_001E3DD6: ;
    if (TEST_Z(MEM8(ebx + 0x184), 0x10)) goto loc_001E3E2A; /* je: equal / zero */

loc_001E3DDF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x115);
    PUSH32(esp, 0x5E9968);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001E3DF2: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001E3E14; /* je: equal / zero */

loc_001E3DF9: ;
    ecx = MEM32(ebx + 0x1AC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xF4);
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, 0); sub_001E3190(); /* call 0x001E3190 */

loc_001E3E10: ;
    edi = eax;
    goto loc_001E3E16;

loc_001E3E14: ;
    edi = 0; /* xor self */

loc_001E3E16: ;
    esi = MEM32(ebx + 0x84);
    PUSH32(esp, 0); sub_00084360(); /* call 0x00084360 */

loc_001E3E21: ;
    ecx = esi;
    esi = eax;
    PUSH32(esp, 0); sub_001E2980(); /* call 0x001E2980 */

loc_001E3E2A: ;
    eax = MEM32(ebx + 0x84);
    (void)0; /* cmp eax, 0x100 - flags set for next jcc */
    esi = MEM32(0x84A5F8);
    if (CMP_AE(eax, 0x100)) goto loc_001E3F45; /* jae: above or equal (unsigned >=) */

loc_001E3E41: ;
    if (CMP_BE(eax & eax, 0)) goto loc_001E3F45; /* jbe: below or equal (unsigned <=) */

loc_001E3E49: ;
    eax--;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001E3E6E; /* je: equal / zero */

loc_001E3E4F: ;
    ecx = MEM32(0x84A144);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = edx + esi;
    (void)0; /* cmp MEM8(edx + ecx + 0xC7), 0 - flags set for next jcc */
    MEM8(esp + 0x17) = 0;
    if (CMP_BE(MEM8(edx + ecx + 0xC7), 0)) goto loc_001E3E73; /* jbe: below or equal (unsigned <=) */

loc_001E3E6E: ;
    MEM8(esp + 0x17) = 1;

loc_001E3E73: ;
    SET_LO8(ecx, MEM8(0x76EDF8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001E3EA1; /* je: equal / zero */

loc_001E3E7D: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001E3EA1; /* je: equal / zero */

loc_001E3E82: ;
    SET_LO8(ecx, MEM8(0x76F0D0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001E3EA1; /* jne: not equal / not zero */

loc_001E3E8C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + esi;
    PUSH32(esp, 0); sub_00054020(); /* call 0x00054020 */

loc_001E3E99: ;
    if (TEST_NZ(eax, eax)) goto loc_001E3EA1; /* jne: not equal / not zero */

loc_001E3E9D: ;
    MEM8(esp + 0x17) = LO8(eax);

loc_001E3EA1: ;
    if (TEST_Z(MEM8(ebx + 0x184), 0x10)) goto loc_001E3F9B; /* je: equal / zero */

loc_001E3EAE: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E3F9B; /* je: equal / zero */

loc_001E3EBA: ;
    eax = MEM32(0x84A13C);
    edx = MEM32(esp + 0x18);
    eax = eax + 0x148;
    edi = ebx + 0x2C4;
    ecx = edx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E0DD0(); /* call 0x003E0DD0 */

loc_001E3ED7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001E3F9B; /* je: equal / zero */

loc_001E3EE2: ;
    edi = MEM32(ebx + 0x2C0);
    edi = edi + 0x10;
    ecx = 0x10;
    esi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x2C0);
    edx = MEM32(esp + 0x1C);
    ecx = ecx + 0x50;
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x20);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebx + 0xF4);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    (void)0; /* cmp MEM8(edx + 0x40), 7 - flags set for next jcc */
    PUSH32(esp, ecx);
    ecx = esp;
    if (CMP_NE(MEM8(edx + 0x40), 7)) goto loc_001E3F4D; /* jne: not equal / not zero */

loc_001E3F27: ;
    eax = MEM32(ebx + 0x2C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_001E3F36; /* je: equal / zero */

loc_001E3F33: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_001E3F36: ;
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_001E3F3B: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_00084550(); /* call 0x00084550 */

loc_001E3F43: ;
    goto loc_001E3F9B;

loc_001E3F45: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_001E3E6E;

loc_001E3F4D: ;
    SET_LO8(eax, MEM8(ebx + 0x1BC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 0x2C0);
    MEM32(ecx) = eax;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E3F74; /* je: equal / zero */

loc_001E3F5F: ;
    if (TEST_Z(eax, eax)) goto loc_001E3F66; /* je: equal / zero */

loc_001E3F63: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_001E3F66: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0007E370(); /* call 0x0007E370 */

loc_001E3F6D: ;
    PUSH32(esp, 0); sub_00084510(); /* call 0x00084510 */

loc_001E3F72: ;
    goto loc_001E3F9B;

loc_001E3F74: ;
    if (TEST_Z(eax, eax)) goto loc_001E3F7B; /* je: equal / zero */

loc_001E3F78: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_001E3F7B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0007E370(); /* call 0x0007E370 */

loc_001E3F91: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00084480(); /* call 0x00084480 */

loc_001E3F9B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x180) = xmm0; /* movss */

loc_001E3FA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E3FB0
 * Original: 0x001E3FB0 - 0x001E4068 (184 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E3FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E3FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0xF4;
    MEM32(esi) = 0x5F5C70;
    if (TEST_Z(eax, eax)) goto loc_001E3FD9; /* je: equal / zero */

loc_001E3FCA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0040A090(); /* call 0x0040A090 */

loc_001E3FD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001E3FD6: ;
    esp = esp + 8;

loc_001E3FD9: ;
    ecx = MEM32(esi + 0xF8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0xF8;
    if (TEST_Z(ecx, ecx)) goto loc_001E3FF2; /* je: equal / zero */

loc_001E3FE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001E3FEF: ;
    esp = esp + 4;

loc_001E3FF2: ;
    SET_LO8(eax, MEM8(esi + 0x2D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E4030; /* je: equal / zero */

loc_001E3FFC: ;
    SET_LO16(eax, MEM16(esi + 0x2D2));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM8(esi + 0x2D0) = 0;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001E4030; /* je: equal / zero */

loc_001E4010: ;
    edx = MEM32(0x771B78);
    eax = ZX16(LO16(eax));
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx << 5;
    eax = eax & 0xFFF;
    ecx = ecx + edx;
    MEM8(eax + ecx + 0x61C) = 1;

loc_001E4030: ;
    eax = MEM32(esi + 0x2C0);
    if (TEST_Z(eax, eax)) goto loc_001E4055; /* je: equal / zero */

loc_001E403A: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 0x2C0);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001E4055; /* jne: not equal / not zero */

loc_001E404A: ;
    if (TEST_Z(ecx, ecx)) goto loc_001E4055; /* je: equal / zero */

loc_001E404E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001E4055: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C0) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001DB710(); return; /* tail jmp 0x001DB710 */

}

/**
 * sub_001E4290
 * Original: 0x001E4290 - 0x001E4304 (116 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E4290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001E3670(); /* call 0x001E3670 */

loc_001E42AC: ;
    esi = esi + 0x10;
    MEM32(ebx) = 0x5F5CA4;
    edi = ebx + 0x2F0;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0xC);
    MEM8(ebx + 0x3B1) = 1;
    eax = MEM32(esi + 0x94);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    ecx--;
    eax = eax & ecx;
    MEM32(ebx + 0x2E0) = eax;
    if (TEST_Z(MEM8(esi + 0x148), 1)) { sub_001E4304(); return; } /* je: equal / zero */

loc_001E42EC: ;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x98); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001E4312(); return; /* tail jmp 0x001E4312 */

}

/**
 * sub_001E45B0
 * Original: 0x001E45B0 - 0x001E46FD (333 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E45B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001E45B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x2E0);
    ebx = edi + 0x20;
    PUSH32(esp, eax);
    esi = esp + 0x34;
    edx = ebx;
    PUSH32(esp, 0); sub_00355350(); /* call 0x00355350 */

loc_001E45D3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E4685; /* je: equal / zero */

loc_001E45DB: ;
    ecx = esi;
    PUSH32(esp, ecx);
    edx = edi + 0x2F0;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E45ED: ;
    esi = edi + 0x370;
    eax = esi;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_0040A2C0(); /* call 0x0040A2C0 */

loc_001E45FE: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x3B4); /* divss */
    SET_LO8(eax, MEM8(ebp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x60); /* mulss */
    MEMF(edi + 0x3A0) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    MEMF(edi + 0x3A4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x68); /* mulss */
    MEMF(edi + 0x3A8) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E46E8; /* je: equal / zero */

loc_001E464C: ;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x380) = xmm0; /* movss */
    MEMF(edi + 0x390) = xmm0; /* movss */
    MEMF(edi + 0x374) = xmm0; /* movss */
    MEMF(edi + 0x394) = xmm0; /* movss */
    MEMF(edi + 0x378) = xmm0; /* movss */
    MEMF(edi + 0x388) = xmm0; /* movss */
    goto loc_001E46E8;

loc_001E4685: ;
    edx = MEM32(ebx + 0x60);
    ecx = ebx + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E4697: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    esi = edi + 0x370;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    edi = edi + 0x330;
    PUSH32(esp, edi);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    MEM32(esp + 0x28) = eax;
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, ecx);
    MEMF(esi + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E46E8: ;
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E4700
 * Original: 0x001E4700 - 0x001E4778 (120 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001E4700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x3B0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E4721; /* je: equal / zero */

loc_001E4718: ;
    if (CMP_NE(MEM8(ebx + 0x3B1), 1)) goto loc_001E4764; /* jne: not equal / not zero */

loc_001E4721: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x3B2));
    ecx = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_001E45B0(); /* call 0x001E45B0 */

loc_001E4736: ;
    esi = MEM32(ebx + 0xF4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0040A460(); /* call 0x0040A460 */

loc_001E4749: ;
    edi = ebx + 0x370;
    ecx = 0x10;
    esi = esp + 0x14;
    esp = esp + 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(ebx + 0x3B1) = 0;

loc_001E4764: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_001E3A80(); /* call 0x001E3A80 */

loc_001E476F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E4780
 * Original: 0x001E4780 - 0x001E4806 (134 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4780(void)
{
    float xmm0, xmm1;

loc_001E4780: ;
    esp = esp - 0x18;
    xmm0 = MEMF(eax + 0x3A0); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3A4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3A8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3B4); /* movss */
    eax = esp + 0xC;
    edx = eax;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
    MEM32(esp) = edx;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0xC);
    eax = ecx;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001E4810
 * Original: 0x001E4810 - 0x001E484A (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4810(void)
{
    float xmm0, xmm1;

loc_001E4810: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    eax = eax + 0x20;
    MEM32(esp + 0xC) = eax;
    MEM32(esp) = eax;
    ecx = MEM32(esp);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x775EB0;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E4850
 * Original: 0x001E4850 - 0x001E4950 (256 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4850(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E4850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ebx = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E4290(); /* call 0x001E4290 */

loc_001E485D: ;
    MEM32(ebx) = 0x5F5C3C;
    ecx = MEM32(esi + 0xA8);
    MEM32(ebx + 0x3C0) = ecx;
    eax = MEM32(0x5A02CC);
    edx = ebx + 0x3C4;
    MEM32(edx) = eax;
    ecx = MEM32(0x5A02D0);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x5A02D4);
    MEM32(edx + 8) = eax;
    edx = MEM32(0x5A02CC);
    ecx = ebx + 0x3D0;
    MEM32(ecx) = edx;
    eax = MEM32(0x5A02D0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 8) = edx;
    MEM32(ebx + 0x3DC) = 2;
    ecx = 0; /* xor self */
    MEM32(ebx + 0x3E0) = ecx;
    eax = MEM32(esi + 0x144);
    MEM32(ebx + 0x3EC) = eax;
    (void)0; /* cmp MEM32(esi + 0x12C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(esi + 0x12C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    MEM8(ebx + 0x3E8) = LO8(edx);
    eax = MEM32(esi + 0xA4);
    MEM32(ebx + 0x3F0) = eax;
    SET_LO8(eax, LO8(edx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E490B; /* je: equal / zero */

loc_001E48EC: ;
    eax = MEM32(esi + 0x138);
    esi = MEM32(esi + 0x12C);
    edx = esi + esi * 2;
    edx = edx << 7;
    edx = edx + eax;
    MEM32(0x7737A4) = eax;
    MEM32(ebx + 0x3E0) = edx;

loc_001E490B: ;
    xmm0 = MEMF(ebx + 0x3EC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E494B; /* jnp: not parity */

loc_001E4920: ;
    edx = MEM32(ebx + 0xF4);
    if (CMP_BE(MEM32(edx), ecx)) goto loc_001E494B; /* jbe: below or equal (unsigned <=) */

loc_001E492A: ;
    esi = 0x1E4810;
    /* nop */

loc_001E4930: ;
    eax = MEM32(edx + 4);
    eax = MEM32(eax + ecx * 4);
    eax = MEM32(eax + 0x54);
    if (CMP_NE(MEM8(eax), 0)) goto loc_001E4944; /* jne: not equal / not zero */

loc_001E493E: ;
    MEM32(eax + 0xA8) = esi;

loc_001E4944: ;
    eax = MEM32(edx);
    ecx++;
    if (CMP_B(ecx, eax)) goto loc_001E4930; /* jb: below (unsigned <) */

loc_001E494B: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E4980
 * Original: 0x001E4980 - 0x001E4A16 (150 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm3;

loc_001E4980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001E4A0D; /* jne: not equal / not zero */

loc_001E4997: ;
    PUSH32(esp, 0);
    edx = edi + 0x20;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00355350(); /* call 0x00355350 */

loc_001E49A5: ;
    ecx = MEM32(edi + 0x3DC);
    if (CMP_EQ(ecx, 1)) goto loc_001E49B4; /* je: equal / zero */

loc_001E49B0: ;
    if (CMP_G(ecx & ecx, 0)) goto loc_001E49C6; /* jg: greater (signed >) */

loc_001E49B4: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFFFFF7u;
    ecx = ecx + 0xA;
    MEM32(edi + 0x3DC) = ecx;

loc_001E49C6: ;
    edx = MEM32(edi + 0x3DC);
    edx--;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x3DC) = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E4A0D; /* jne: not equal / not zero */

loc_001E49D7: ;
    edi = MEM32(edi + 0xF4);
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001E4A0D; /* jbe: below or equal (unsigned <=) */

loc_001E49E5: ;
    xmm3 = 0.0f; /* xorps self = zero */
    goto loc_001E49F0;

    /* nop */

loc_001E49F0: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + ebx * 4);
    esi = MEM32(eax + 0x54);
    if (CMP_NE(MEM8(esi), 0)) goto loc_001E4A06; /* jne: not equal / not zero */

loc_001E49FE: ;
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0040B080(); /* call 0x0040B080 */

loc_001E4A06: ;
    eax = MEM32(edi);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_001E49F0; /* jb: below (unsigned <) */

loc_001E4A0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E4A20
 * Original: 0x001E4A20 - 0x001E4CA8 (648 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E4A20: ;
    esp = esp - 0x3C;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3DC);
    if (TEST_NZ(eax, eax)) goto loc_001E4C73; /* jne: not equal / not zero */

loc_001E4A34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    eax = edi;
    PUSH32(esp, 0); sub_001E4780(); /* call 0x001E4780 */

loc_001E4A42: ;
    eax = ecx;
    esi = edi + 0x3C4;
    ecx = esp + 0x1C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    (void)0; /* cmp MEM32(edi + 0x3F0), 2 - flags set for next jcc */
    MEM32(esi + 8) = ecx;
    if (CMP_NE(MEM32(edi + 0x3F0), 2)) goto loc_001E4AE1; /* jne: not equal / not zero */

loc_001E4A9E: ;
    edx = edi + 0x3D0;
    eax = esp + 0x1C;
    ecx = esp + 0x28;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_001E4AF9;

loc_001E4AE1: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;

loc_001E4AF9: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(edi + 0x3C0); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(esp + 0x50); /* movss */
    edx = edi + 0x3D0;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    MEM32(edx + 8) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E4BE0; /* jnp: not parity */

loc_001E4B31: ;
    /* ucomiss xmm5, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E4BE0; /* jnp: not parity */

loc_001E4B3E: ;
    xmm4 = MEMF(edi + 0x78); /* movss */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_001E4B4D: ;
    xmm4 = xmm4 * MEMF(edi + 0x3C0); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 / xmm4; /* divss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 / xmm0; /* divss */
    esp = esp + 4;
    xmm3 = xmm3 * xmm1; /* mulss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_001E4B85; /* jbe: below or equal (unsigned <=) */

loc_001E4B82: ;
    xmm3 = xmm4; /* movaps */

loc_001E4B85: ;
    SET_LO8(eax, MEM8(edi + 0x3E8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E4BB1; /* je: equal / zero */

loc_001E4B8F: ;
    edx = edi + 0x3E0;
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_001E2B10(); /* call 0x001E2B10 */

loc_001E4B9D: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm3 = xmm0; /* movaps */

loc_001E4BB1: ;
    ebp = MEM32(edi + 0xF4);
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001E4BE8; /* jbe: below or equal (unsigned <=) */

loc_001E4BC0: ;
    edx = MEM32(ebp + 4);
    eax = MEM32(edx + ebx * 4);
    esi = MEM32(eax + 0x54);
    if (CMP_NE(MEM8(esi), 0)) goto loc_001E4BD6; /* jne: not equal / not zero */

loc_001E4BCE: ;
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0040B080(); /* call 0x0040B080 */

loc_001E4BD6: ;
    eax = MEM32(ebp);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_001E4BC0; /* jb: below (unsigned <) */

loc_001E4BDE: ;
    goto loc_001E4BE8;

loc_001E4BE0: ;
    xmm4 = MEMF(0x648D14); /* movss */

loc_001E4BE8: ;
    xmm0 = MEMF(edi + 0x3EC); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    POP32(esp, esi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (1 /* jnp after test - parity */) goto loc_001E4C95; /* jnp: not parity */

loc_001E4C00: ;
    /* ucomiss xmm5, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E4C95; /* jnp: not parity */

loc_001E4C0D: ;
    xmm0 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x78); /* divss */
    xmm4 = xmm4 / xmm5; /* divss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x3EC); /* mulss */
    ecx = esp + 0x1C;
    edx = esp + 0x34;
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    goto loc_001E4C84;

loc_001E4C73: ;
    eax = MEM32(0x5A02CC);
    ecx = MEM32(0x5A02D0);
    edx = MEM32(0x5A02D4);

loc_001E4C84: ;
    MEM32(0x775EB0) = eax;
    MEM32(0x775EB4) = ecx;
    MEM32(0x775EB8) = edx;

loc_001E4C95: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_001E4700(); /* call 0x001E4700 */

loc_001E4CA1: ;
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E4CB0
 * Original: 0x001E4CB0 - 0x001E4CC3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4CB0(void)
{

loc_001E4CB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001E5840(); /* call 0x001E5840 */

loc_001E4CBF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001E4CD0
 * Original: 0x001E4CD0 - 0x001E4D2D (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E4CD0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_001E4CDD; /* je: equal / zero */

loc_001E4CDA: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_001E4CDD: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edi;
    if (TEST_Z(edi, edi)) goto loc_001E4D05; /* je: equal / zero */

loc_001E4CE9: ;
    edx = MEM32(edi + 4);
    edx++;
    ecx = edx;
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = edx;
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001E4D05; /* jne: not equal / not zero */

loc_001E4CFC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001E4D05: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_001E4D30(); /* call 0x001E4D30 */

loc_001E4D0E: ;
    if (TEST_Z(edi, edi)) goto loc_001E4D28; /* je: equal / zero */

loc_001E4D12: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001E4D28; /* jne: not equal / not zero */

loc_001E4D1F: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001E4D28: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001E4D30
 * Original: 0x001E4D30 - 0x001E4D3D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E4D30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_001E4D3D(); return; } /* jne: not equal / not zero */

loc_001E4D39: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_001E4D45(); return; /* tail jmp 0x001E4D45 */

}

/**
 * sub_001E4D90
 * Original: 0x001E4D90 - 0x001E4DD9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4D90(void)
{

loc_001E4D90: ;
    esp = esp - 0x18;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_001E4DA9: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    esp = esp + 4;
    eax = esp + 0x14;
    ecx = edi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_001E4DE0(); /* call 0x001E4DE0 */

loc_001E4DCF: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E4DE0
 * Original: 0x001E4DE0 - 0x001E4E97 (183 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E4DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0); sub_001DFF00(); /* call 0x001DFF00 */

loc_001E4DF9: ;
    SET_LO8(edx, 0); /* xor self */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001E4E12; /* jp: parity */

loc_001E4E08: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(edx, 1);

loc_001E4E12: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_001E4E26: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001E4E82; /* je: equal / zero */

loc_001E4E3C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ECE40(); /* call 0x003ECE40 */

loc_001E4E57: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x7C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_001E4E71: ;
    esp = esp + 0x1C;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E4E82: ;
    ecx = 0x10;
    esi = esp + 0x20;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001E4EA0
 * Original: 0x001E4EA0 - 0x001E4F36 (150 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4EA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E4EA0: ;
    SET_LO8(edx, MEM8(esp + 4));
    MEMF(esi + 0x154) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x158) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x15C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x160) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    esp = esp - 0x80;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esi + 0x164) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEM8(esi + 0x150) = LO8(ecx);
    MEM8(esi + 0x151) = LO8(edx);
    MEMF(esi + 0x168) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001E4F2D; /* je: equal / zero */

loc_001E4F0B: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001E4F18: ;
    eax = esi + 0x16C;
    edx = esp;
    edx = edx - eax;

loc_001E4F23: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001E4F23; /* jne: not equal / not zero */

loc_001E4F2D: ;
    esp = esp + 0x80;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001E4F40
 * Original: 0x001E4F40 - 0x001E50FF (447 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E4F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_001E4F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x38;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    MEM32(esp + 0x44) = 0x587BE4;
    MEM32(esp + 0x4C) = 0x5F5D54;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_001E4F74: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E50F6; /* je: equal / zero */

loc_001E4F7C: ;
    /* nop */

loc_001E4F80: ;
    eax = MEM32(esp + 0x4C);
    edx = eax + 1;

loc_001E4F87: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001E4F87; /* jne: not equal / not zero */

loc_001E4F8E: ;
    ecx = MEM32(esp + 0x44);
    eax = eax - edx;
    PUSH32(esp, 0x7F);
    edi = eax + ecx;
    PUSH32(esp, edi);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001E4FA7: ;
    PUSH32(esp, 5);
    eax = esp + 0xA4;
    PUSH32(esp, 0x5F5D4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_001E4FBB: ;
    esp = esp + 0xC;
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 0x24) = LO8(eax);
    if ((LO8(eax) == 0)) goto loc_001E4FCD; /* je: equal / zero */

loc_001E4FCA: ;
    edi = edi + 5;

loc_001E4FCD: ;
    esi = MEM32(esp + 0x40);
    if (TEST_Z(esi, esi)) goto loc_001E503C; /* je: equal / zero */

loc_001E4FD5: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001E503C; /* je: equal / zero */

loc_001E4FDC: ;
    ebx = MEM32(esp + 0x48);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001E4FEE: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001E503C; /* je: equal / zero */

loc_001E4FF5: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_001E5014; /* je: equal / zero */

loc_001E4FFD: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_001E500A; /* je: equal / zero */

loc_001E5004: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_001E5018;

loc_001E500A: ;
    MEM32(esp + 0x1C) = 0;
    goto loc_001E503C;

loc_001E5014: ;
    eax = MEM32(esp + 0x1C);

loc_001E5018: ;
    if (TEST_Z(eax, eax)) goto loc_001E503C; /* je: equal / zero */

loc_001E501C: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_001E503C: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    eax = esp + 0x54;
    ebx = esp + 0x60;
    ecx = esp + 0x38;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0); sub_001E4DE0(); /* call 0x001E4DE0 */

loc_001E5065: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001E50C4; /* je: equal / zero */

loc_001E5072: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001E50C4; /* je: equal / zero */

loc_001E5079: ;
    ebx = MEM32(esp + 0x48);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001E508B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001E50C4; /* je: equal / zero */

loc_001E5092: ;
    eax = MEM32(esp + 0x50);
    if (TEST_Z(eax, eax)) goto loc_001E50B1; /* je: equal / zero */

loc_001E509A: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_001E50A7; /* je: equal / zero */

loc_001E50A1: ;
    MEM32(esp + 0x18) = eax;
    goto loc_001E50B5;

loc_001E50A7: ;
    MEM32(esp + 0x18) = 0;
    goto loc_001E50C4;

loc_001E50B1: ;
    eax = MEM32(esp + 0x18);

loc_001E50B5: ;
    if (TEST_Z(eax, eax)) goto loc_001E50C4; /* je: equal / zero */

loc_001E50B9: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_001E50C4: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_001E5100(); /* call 0x001E5100 */

loc_001E50E5: ;
    esi = esp + 0x38;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_001E50EE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E4F80; /* jne: not equal / not zero */

loc_001E50F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E5100
 * Original: 0x001E5100 - 0x001E516C (108 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5100: ;
    esp = esp - 0x114;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x134);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0xC);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001E5120: ;
    esp = esp + 0xC;
    eax = esp + 8;
    MEM32(esp + 0x118) = 0xC;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_001E514F: ;
    /* nop */

loc_001E5150: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_001E516C(); return; } /* jl: less (signed <) */

loc_001E515E: ;
    if (CMP_G(eax, 0x3E5)) { sub_001E516C(); return; } /* jg: greater (signed >) */

loc_001E5165: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001E516A: ;
    goto loc_001E5150;

}

/**
 * sub_001E5280
 * Original: 0x001E5280 - 0x001E547E (510 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5280(void)
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

loc_001E5280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    ecx = MEM32(0x802324);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001E5475; /* jle: less or equal (signed <=) */

loc_001E52A3: ;
    eax = MEM32(0x84B4A0);
    eax = eax + 0x15;
    esi = ecx;
    /* nop */

loc_001E52B0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    if (CMP_NE(LO8(ecx), 0x78)) goto loc_001E52BB; /* jne: not equal / not zero */

loc_001E52BA: ;
    edx++;

loc_001E52BB: ;
    eax = eax + 0x78;
    esi--;
    if ((esi != 0)) goto loc_001E52B0; /* jne: not equal / not zero */

loc_001E52C1: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(edx, edx)) goto loc_001E5475; /* je: equal / zero */

loc_001E52CD: ;
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001E52D6: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_001E5475; /* je: equal / zero */

loc_001E52E3: ;
    edx = ebx;
    edi = 0x1E;
    PUSH32(esp, 0); sub_003C7CB0(); /* call 0x003C7CB0 */

loc_001E52EF: ;
    eax = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001E5464; /* jle: less or equal (signed <=) */

loc_001E52FD: ;
    /* nop */

loc_001E5300: ;
    ecx = MEM32(ebx + esi * 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(0x84B4B8);
    edx = MEM32(edx + 0xC);
    eax = MEM32(edx + eax * 4);
    edi = MEM32(ecx + 0x1C);
    MEM32(esp + 0x14) = eax;
    eax = ecx;
    edx = eax + 0x38;
    MEM32(esp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(edx, MEM8(eax + 0x17));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    (void)0; /* test edi, edi - flags set for next jcc */
    edi = MEM32(ebx + esi * 4);
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM8(esp + 0x24) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x20) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = edi;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(eax + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x74;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_001E53F7: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    SET_LO8(eax, 0x78);
    ecx = esp + 0xB8;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_001E540A: ;
    esp = esp + 8;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E541B: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001E542B: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0); sub_001E5100(); /* call 0x001E5100 */

loc_001E5457: ;
    eax = MEM32(esp + 0x18);
    esi++;
    if (CMP_L(esi, eax)) goto loc_001E5300; /* jl: less (signed <) */

loc_001E5464: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001E5472: ;
    esp = esp + 4;

loc_001E5475: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E5480
 * Original: 0x001E5480 - 0x001E54DE (94 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E5480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ebx, ebp)) goto loc_001E54D1; /* je: equal / zero */

loc_001E548E: ;
    PUSH32(esp, esi);
    /* nop */

loc_001E5490: ;
    esi = MEM32(ebx);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_001E549E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001E54C9; /* je: equal / zero */

loc_001E54A4: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001E54AF; /* je: equal / zero */

loc_001E54AB: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_001E54AF: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_001E54C9; /* jne: not equal / not zero */

loc_001E54B6: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_001E54BF: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_001E54C9: ;
    ebx = MEM32(ebx + 0xC);
    if (CMP_NE(ebx, ebp)) goto loc_001E5490; /* jne: not equal / not zero */

loc_001E54D0: ;
    POP32(esp, esi);

loc_001E54D1: ;
    edi = ebp;
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_001E54D8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E54E0
 * Original: 0x001E54E0 - 0x001E5528 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E54E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001E54E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x264;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = MEM32(edi + 8);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001E5502: ;
    SET_LO8(edx, MEM8(edi + 4));
    eax = esp + 0x18;
    PUSH32(esp, 0x7C);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = LO8(edx);
    PUSH32(esp, 0); sub_0046EC00(); /* call 0x0046EC00 */

loc_001E5515: ;
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_001E5528(); return; } /* je: equal / zero */

loc_001E551E: ;
    ecx = esp + 0x18;
    eax = eax - ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001E552B(); return; /* tail jmp 0x001E552B */

}

/**
 * sub_001E57D0
 * Original: 0x001E57D0 - 0x001E5838 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E57D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E57D0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E57E8; /* jne: not equal / not zero */

loc_001E57D9: ;
    eax = 0x2B;
    ecx = 4;
    PUSH32(esp, 0); sub_0040BE60(); /* call 0x0040BE60 */

loc_001E57E8: ;
    eax = MEM32(0x8496E0);
    if (TEST_NZ(eax, eax)) goto loc_001E581C; /* jne: not equal / not zero */

loc_001E57F1: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_001E5920(); /* call 0x001E5920 */

loc_001E57F8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001E5815; /* je: equal / zero */

loc_001E57FF: ;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    goto loc_001E5817;

loc_001E5815: ;
    eax = 0; /* xor self */

loc_001E5817: ;
    MEM32(0x8496E0) = eax;

loc_001E581C: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_001E4F40(); /* call 0x001E4F40 */

loc_001E5829: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E5280(); /* call 0x001E5280 */

loc_001E582F: ;
    MEM8(0x8496E4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E5840
 * Original: 0x001E5840 - 0x001E5899 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5840(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E5840: ;
    eax = MEM32(0x8496E0);
    if (TEST_NZ(eax, eax)) goto loc_001E5888; /* jne: not equal / not zero */

loc_001E5849: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_001E5920(); /* call 0x001E5920 */

loc_001E5850: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001E5881; /* je: equal / zero */

loc_001E5857: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    MEM32(0x8496E0) = eax;
    PUSH32(esp, 0); sub_001E54E0(); /* call 0x001E54E0 */

loc_001E5880: ;
    esp += 4; return; /* ret */

loc_001E5881: ;
    eax = 0; /* xor self */
    MEM32(0x8496E0) = eax;

loc_001E5888: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E54E0(); /* call 0x001E54E0 */

loc_001E5898: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E58A0
 * Original: 0x001E58A0 - 0x001E5919 (121 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E58A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E58A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BDE0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001E58BD; /* je: equal / zero */

loc_001E58AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E4), _icall_esp); /* indirect call */
    }

loc_001E58B4: ;
    esp = esp + 4;
    MEM32(0x84BDE0) = ebx;

loc_001E58BD: ;
    eax = MEM32(0x84BDE8);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x84BDDC) = LO8(ebx);
    MEM32(0x84BDEC) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_001E58DE; /* je: equal / zero */

loc_001E58D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001E58D8: ;
    MEM32(0x84BDE8) = ebx;

loc_001E58DE: ;
    eax = MEM32(0x8496E0);
    if (CMP_EQ(eax, ebx)) goto loc_001E5916; /* je: equal / zero */

loc_001E58E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = eax;
    PUSH32(esp, 0); sub_001E5480(); /* call 0x001E5480 */

loc_001E58F0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001E58FE: ;
    SET_LO8(eax, MEM8(0x8496E4));
    esp = esp + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x8496E0) = ebx;
    POP32(esp, esi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001E5916; /* je: equal / zero */

loc_001E5911: ;
    PUSH32(esp, 0); sub_00403C00(); /* call 0x00403C00 */

loc_001E5916: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E5920
 * Original: 0x001E5920 - 0x001E59A4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5920(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E5920: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001E59A4(); return; } /* je: equal / zero */

loc_001E593B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001E594F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E5984; /* je: equal / zero */

loc_001E595A: ;
    ecx = 0x75DF28;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001E5964: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001E5981: ;
    esp = esp + 0x14;

loc_001E5984: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001E599D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001E59D0
 * Original: 0x001E59D0 - 0x001E5A61 (145 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E59D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E59D0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001E59DE; /* jne: not equal / not zero */

loc_001E59D9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001E59DE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebx);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_001E5A28; /* je: equal / zero */

loc_001E5A06: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_001E5A28; /* jb: below (unsigned <) */

loc_001E5A0F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E5A19: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E5A21: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001E5A61(); return; } /* jne: not equal / not zero */

loc_001E5A28: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001E5A3A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001E5A42: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001E5A61(); return; } /* jne: not equal / not zero */

loc_001E5A49: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_001E5A59: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E5A90
 * Original: 0x001E5A90 - 0x001E5B18 (136 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E5A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x8496E4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E5B13; /* je: equal / zero */

loc_001E5AA8: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x80);
    edx = MEM32(eax + 0x7C);
    xmm0 = MEMF(eax + 0x78); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_001E5AC6: ;
    eax = MEM32(0x847194);
    ecx = esp + 0xA0;
    MEM32(0x84B7D0) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    edx = esp + 0x24;
    PUSH32(esp, 0); sub_0012F250(); /* call 0x0012F250 */

loc_001E5AE5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    edx = eax;
    PUSH32(esp, edx);
    edx = MEM32(0x84A13C);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    eax = esi + edx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004040E0(); /* call 0x004040E0 */

loc_001E5B0B: ;
    esp = esp + 0x24;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_001E5B13: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001E5B20
 * Original: 0x001E5B20 - 0x001E5D0A (490 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5B20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E5B20: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x57);
    eax = 0x484;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001E5B35: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001E5D05; /* je: equal / zero */

loc_001E5B42: ;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x2C) = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 8;
    MEM32(esi + 0x30) = edi;
    MEM8(esi + 0x39) = 0;
    ecx = MEM32(edi + 0xA4);
    PUSH32(esp, eax);
    eax = edi;
    MEM32(esi + 0x34) = ecx;
    PUSH32(esp, 0); sub_0030E770(); /* call 0x0030E770 */

loc_001E5B6A: ;
    esp = esp + 8;
    eax = esi + 0xA8;
    ecx = 0x1F;
    goto loc_001E5B80;

    /* nop */

loc_001E5B80: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + -4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    eax = eax + 0x18;
    ecx--;
    if ((ecx != 0)) goto loc_001E5B80; /* jne: not equal / not zero */

loc_001E5BC7: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x9C) = xmm0; /* movss */
    eax = MEM32(esi + 0x2C);
    eax--;
    xmm0 = MEMF(0x648D14); /* movss */
    if ((eax != 0)) goto loc_001E5CFD; /* jne: not equal / not zero */

loc_001E5CF5: ;
    xmm0 = MEMF(0x648EB0); /* movss */

loc_001E5CFD: ;
    MEMF(esi + 0x480) = xmm0; /* movss */

loc_001E5D05: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001E5D10
 * Original: 0x001E5D10 - 0x001E6111 (1025 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E5D10(void)
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

loc_001E5D10: ;
    esp = esp - 0xA4;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xAC);
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(eax + 0xA4);
    if (CMP_EQ(ecx, MEM32(ebp + 0x34))) goto loc_001E5D7B; /* je: equal / zero */

loc_001E5D2C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E6109; /* jne: not equal / not zero */

loc_001E5D39: ;
    edx = ebp;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001E5D40: ;
    eax = MEM32(ebp);
    if (CMP_L(eax, 2)) goto loc_001E6109; /* jl: less (signed <) */

loc_001E5D4C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001E5D67; /* je: equal / zero */

loc_001E5D59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001E5D5C: ;
    esp = esp + 4;
    POP32(esp, ebp);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

loc_001E5D67: ;
    edx = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001E5D73: ;
    POP32(esp, ebp);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

loc_001E5D7B: ;
    edx = MEM32(ebp + 0x4C);
    MEM32(ebp + 0x40) = edx;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x44) = eax;
    ecx = MEM32(ebp + 0x54);
    MEM32(ebp + 0x48) = ecx;
    edx = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x70) = edx;
    eax = MEM32(ebp + 0x80);
    MEM32(ebp + 0x74) = eax;
    ecx = MEM32(ebp + 0x84);
    MEM32(ebp + 0x78) = ecx;
    edx = MEM32(ebp + 0x58);
    MEM32(ebp + 0x4C) = edx;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x50) = eax;
    ecx = MEM32(ebp + 0x60);
    MEM32(ebp + 0x54) = ecx;
    edx = MEM32(ebp + 0x88);
    MEM32(ebp + 0x7C) = edx;
    eax = MEM32(ebp + 0x8C);
    MEM32(ebp + 0x80) = eax;
    ecx = MEM32(ebp + 0x90);
    MEM32(ebp + 0x84) = ecx;
    edx = MEM32(ebp + 0x64);
    MEM32(ebp + 0x58) = edx;
    eax = MEM32(ebp + 0x68);
    MEM32(ebp + 0x5C) = eax;
    ecx = MEM32(ebp + 0x6C);
    MEM32(ebp + 0x60) = ecx;
    edx = MEM32(ebp + 0x94);
    MEM32(ebp + 0x88) = edx;
    eax = MEM32(ebp + 0x98);
    MEM32(ebp + 0x8C) = eax;
    ecx = MEM32(ebp + 0x9C);
    MEM32(ebp + 0x90) = ecx;
    eax = ebp + 0x94;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x30);
    ecx = ebp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0030E770(); /* call 0x0030E770 */

loc_001E5E21: ;
    esp = esp + 8;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(esp + 0xF) = LO8(eax);
    PUSH32(esp, edi);
    /* nop */

loc_001E5E30: ;
    eax++;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax = ebp + 0x64;
    edx = esp + 0x58;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0048D01C(); /* call 0x0048D01C */

loc_001E5E62: ;
    PUSH32(esp, esi);
    eax = ebp + 0x94;
    PUSH32(esp, eax);
    eax = ebp + 0x88;
    PUSH32(esp, eax);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D01C(); /* call 0x0048D01C */

loc_001E5E83: ;
    esi = esp + 0x64;
    edi = esp + 0x58;
    ecx = ebp;
    PUSH32(esp, 0); sub_001E6670(); /* call 0x001E6670 */

loc_001E5E92: ;
    eax = MEM32(ebp + 0x2C);
    if (TEST_NZ(eax, eax)) goto loc_001E5EEB; /* jne: not equal / not zero */

loc_001E5E99: ;
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, 0x100000);
    ecx = 0x111;
    eax = 0x5F5D64;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_001E5EB0: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ebx = esp + 0x24;
    esi = esp + 0x30;
    eax = edi;
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_001E5EC4: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E5ED0; /* je: equal / zero */

loc_001E5ECB: ;
    MEM8(esp + 0x13) = 1;

loc_001E5ED0: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_001E5EEB: ;
    eax = MEM32(esp + 0x18);
    if (CMP_L(eax, 6)) goto loc_001E5E30; /* jl: less (signed <) */

loc_001E5EF8: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E60AF; /* je: equal / zero */

loc_001E5F04: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001E5F09: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D3C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001E6055; /* jbe: below or equal (unsigned <=) */

loc_001E5F1D: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(0x6493C8); /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(0x649234); /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(0x648F20); /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(0x648F58); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x98) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x38;
    esi = esp + 0x74;
    MEM32(esp + 0x88) = 5;
    MEM32(esp + 0x94) = 0x103;
    MEM8(esp + 0xA8) = 0;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_001E6052: ;
    esp = esp + 4;

loc_001E6055: ;
    edx = MEM32(0x847024);
    esi = MEM32(edx + 0x40);
    ebx = MEM32(ebp + 0x30);
    edi = MEM32(esi + 4);
    PUSH32(esp, 0xC87);
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_001E606E: ;
    if (CMP_GE(eax & eax, 0)) goto loc_001E60AF; /* jge: greater or equal (signed >=) */

loc_001E6072: ;
    if (TEST_Z(ebx, ebx)) goto loc_001E608F; /* je: equal / zero */

loc_001E6076: ;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001E608F; /* je: equal / zero */

loc_001E6080: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    goto loc_001E609E;

loc_001E608F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_001E609E: ;
    ecx = 0xC87;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001E60AF: ;
    eax = MEM32(ebp + 0x3C);
    eax = eax - 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    edi = 0; /* xor self */
    esi = (uint32_t)((int32_t)esi >> 1);
    edi = edi;

loc_001E60C0: ;
    if (CMP_GE(esi & esi, 0)) goto loc_001E60C9; /* jge: greater or equal (signed >=) */

loc_001E60C4: ;
    esi = 0x1D;

loc_001E60C9: ;
    eax = ZX8(MEM8(edi + 0x59AFA4));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E60E3: ;
    ecx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    edi++;
    MEMF(ebp + esi * 4 + 0x404) = xmm0; /* movss */
    esi--;
    if (CMP_L(edi, 0x1E)) goto loc_001E60C0; /* jl: less (signed <) */

loc_001E60FA: ;
    edx = MEM32(ebp + 0x404);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x47C) = edx;
    POP32(esp, ebx);

loc_001E6109: ;
    POP32(esp, ebp);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E6120
 * Original: 0x001E6120 - 0x001E630C (492 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6120(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E6120: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001E613C; /* je: equal / zero */

loc_001E6130: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001E6136: ;
    MEM32(0x771760) = esi;

loc_001E613C: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001E6155; /* je: equal / zero */

loc_001E6148: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001E614F: ;
    MEM32(0x77175C) = ebx;

loc_001E6155: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001E6178: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001E6191: ;
    ecx = MEM32(0x7717E8);
    esi = 1;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = 0x800;
    if (CMP_EQ(ecx, esi)) goto loc_001E61B7; /* je: equal / zero */

loc_001E61A5: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473E0) = esi;
    MEM32(0x7717E8) = esi;

loc_001E61B7: ;
    if (CMP_EQ(MEM32(0x7717A8), esi)) goto loc_001E61D1; /* je: equal / zero */

loc_001E61BF: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473F0) = esi;
    MEM32(0x7717A8) = esi;

loc_001E61D1: ;
    if (CMP_EQ(MEM32(0x77182C), 0x1B02)) goto loc_001E61F1; /* je: equal / zero */

loc_001E61DD: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001E61E7: ;
    MEM32(0x77182C) = 0x1B02;

loc_001E61F1: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_001E6205; /* je: equal / zero */

loc_001E61F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001E61FF: ;
    MEM32(0x771828) = ebx;

loc_001E6205: ;
    if (CMP_EQ(MEM32(0x771824), esi)) goto loc_001E6225; /* je: equal / zero */

loc_001E620D: ;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E6219: ;
    MEM32(0x549AE4) = esi;
    MEM32(0x771824) = esi;

loc_001E6225: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001E6245; /* je: equal / zero */

loc_001E622D: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E6239: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001E6245: ;
    if (CMP_EQ(MEM32(0x77181C), esi)) goto loc_001E6259; /* je: equal / zero */

loc_001E624D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001E6253: ;
    MEM32(0x77181C) = esi;

loc_001E6259: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001E627F; /* je: equal / zero */

loc_001E6267: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E6273: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001E627F: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_001E629F; /* je: equal / zero */

loc_001E6287: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E6293: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_001E629F: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001E62BD; /* je: equal / zero */

loc_001E62A7: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001E62BD: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_001E62E4; /* je: equal / zero */

loc_001E62CC: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E62D8: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001E62E4: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001E630A; /* je: equal / zero */

loc_001E62F2: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E62FE: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001E630A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E6310
 * Original: 0x001E6310 - 0x001E6581 (625 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6310(void)
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

loc_001E6310: ;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B9A48), _icall_esp); /* indirect call */
    }

loc_001E6326: ;
    eax = MEM32(edi + 0x3C);
    ebx = eax + eax * 2;
    ebx = ebx << 3;
    ebx = ebx >> 2;
    esp = esp + 4;
    esi = ebx + 5;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001E633D: ;
    esi = eax;
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 6;
    ebx = ebx << 0x12;
    esi = esi + 4;
    ebx = ebx + 0x40001818;
    MEM32(esi) = ebx;
    eax = MEM32(edi + 0x3C);
    esi = esi + 4;
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001E6423; /* jle: less or equal (signed <=) */

loc_001E636C: ;
    ecx = edi + 0xA4;
    MEM32(esp + 0x20) = ecx;

loc_001E6376: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649E2C); /* mulss */
    ebx = (uint32_t)((int32_t)ebx >> 1);
    fp_push(MEMF(edi + ebx * 4 + 0x404)); /* fld float */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E639D: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(edi + ebx * 4 + 0x388);
    ecx = ecx << 0x18;
    ecx = ecx | eax;
    ebx = ebx & 0x80000001u;
    if (((int32_t)ebx >= 0)) goto loc_001E63B9; /* jns: not sign (positive) */

loc_001E63B4: ;
    ebx--;
    ebx = ebx | 0xFFFFFFFEu;
    ebx++;

loc_001E63B9: ;
    xmm0 = MEMF(0x648D14); /* movss */
    if ((ebx == 0)) goto loc_001E63C6; /* je: equal / zero */

loc_001E63C3: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_001E63C6: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + -4);
    xmm1 = MEMF(eax); /* movss */
    esi = esi + 4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEM32(esi + -4) = edx;
    MEMF(esi) = xmm1; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    esi = esi + 4;
    esi = esi + 4;
    MEM32(esi) = ecx;
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    esi = esi + 4;
    eax = eax + 0xC;
    MEMF(esi) = xmm0; /* movss */
    esi = esi + 4;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x3C);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_001E6376; /* jl: less (signed <) */

loc_001E6423: ;
    ecx = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 0;
    esi = esi + 4;
    MEM32(ecx) = esi;
    SET_LO8(eax, MEM8(edi + 0x39));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E6579; /* je: equal / zero */

loc_001E6448: ;
    edx = MEM32(edi + 0x3C);
    eax = 0x3E;
    eax = eax - edx;
    ebx = eax + eax * 2;
    PUSH32(esp, 0);
    ebx = ebx << 3;
    PUSH32(esp, ecx);
    ebx = ebx >> 2;
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_001E6463: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edx = eax + ebx * 4 + 0x18;
    ecx = ecx + 0x200;
    if (CMP_B(edx, ecx)) goto loc_001E649D; /* jb: below (unsigned <) */

loc_001E647C: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    edx = ebx * 4 + 0x21C;
    ecx = ecx >> 1;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_A(edx, ecx)) ecx = edx; /* cmova */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, ecx);
    if (CMP_A(edx, eax)) eax = edx; /* cmova */
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001E649D: ;
    MEM32(eax) = 0x417FC;
    esi = eax + 4;
    MEM32(esi) = 6;
    ebx = ebx << 0x12;
    esi = esi + 4;
    ebx = ebx + 0x40001818;
    MEM32(esi) = ebx;
    ebx = MEM32(edi + 0x3C);
    esi = esi + 4;
    if (CMP_GE(ebx, 0x3E)) goto loc_001E6560; /* jge: greater or equal (signed >=) */

loc_001E64C9: ;
    edx = ebx + ebx * 2;
    eax = edi + edx * 4 + 0xA4;
    MEM32(esp + 0x20) = eax;

loc_001E64D7: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = eax;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649E2C); /* mulss */
    ebp = (uint32_t)((int32_t)ebp >> 1);
    fp_push(MEMF(edi + ebp * 4 + 0x404)); /* fld float */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E64FE: ;
    ecx = MEM32(edi + ebp * 4 + 0x388);
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx + 4); /* movss */
    edx = MEM32(ecx + -4);
    xmm1 = MEMF(ecx); /* movss */
    MEM32(esi) = edx;
    esi = esi + 4;
    MEMF(esi) = xmm1; /* movss */
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    esi = esi + 4;
    MEM32(esi) = eax;
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    esi = esi + 4;
    ebx++;
    ecx = ecx + 0xC;
    (void)0; /* cmp ebx, 0x3E - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(ebx, 0x3E)) goto loc_001E64D7; /* jl: less (signed <) */

loc_001E6560: ;
    eax = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 0;
    esi = esi + 4;
    MEM32(eax) = esi;

loc_001E6579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_001E6590
 * Original: 0x001E6590 - 0x001E65E7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6590: ;
    eax = MEM32(esp + 0xC);
    if (CMP_A(eax, 0x6B)) goto loc_001E65E6; /* ja: above (unsigned >) */

loc_001E6599: ;
    eax = ZX8(MEM8(eax + 0x1E65F8));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1E65E8)); return; /* indirect tail jmp */

    esi = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(ecx, MEM32(esi + 0x30))) goto loc_001E65E5; /* jne: not equal / not zero */

loc_001E65B5: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001E65BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001E65D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    MEM8(eax + 0x38) = 1;

loc_001E65E5: ;
    POP32(esp, esi);

loc_001E65E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E6670
 * Original: 0x001E6670 - 0x001E675B (235 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6670(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_001E6670: ;
    if (CMP_NE(MEM32(ecx + 0x3C), 0x3C)) goto loc_001E6681; /* jne: not equal / not zero */

loc_001E6676: ;
    MEM32(ecx + 0x3C) = 0;
    MEM8(ecx + 0x39) = 1;

loc_001E6681: ;
    eax = MEM32(ecx + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_001E66DB; /* jne: not equal / not zero */

loc_001E6688: ;
    SET_LO8(eax, MEM8(ecx + 0x39));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E66DB; /* je: equal / zero */

loc_001E668F: ;
    eax = MEM32(edi);
    MEM32(ecx + 0x370) = eax;
    edx = MEM32(edi + 4);
    MEM32(ecx + 0x374) = edx;
    eax = MEM32(edi + 8);
    MEM32(ecx + 0x378) = eax;
    edx = MEM32(esi);
    MEM32(ecx + 0x37C) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 0x380) = eax;
    edx = MEM32(esi + 8);
    MEM32(ecx + 0x384) = edx;
    eax = MEM32(ecx + 0x388);
    edx = MEM32(ecx + 0x404);
    MEM32(ecx + 0x400) = eax;
    MEM32(ecx + 0x47C) = edx;

loc_001E66DB: ;
    eax = MEM32(ecx + 0x3C);
    xmm0 = MEMF(0x648EB8); /* movss */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    SET_LO8(edx, MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax >> 1);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    MEMF(ecx + eax * 4 + 0x404) = xmm0; /* movss */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x317815;
    edx = edx + 0x649BFF;
    MEM32(ecx + eax * 4 + 0x388) = edx;
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(edi);
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 0xA0) = edx;
    edx = MEM32(edi + 4);
    MEM32(ecx + eax * 4 + 0xA4) = edx;
    edx = MEM32(edi + 8);
    eax = ecx + eax * 4 + 0xA0;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x3C);
    edx++;
    MEM32(ecx + 0x3C) = edx;
    eax = edx;
    edx = MEM32(esi);
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 0xA0;
    MEM32(eax) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001E6760
 * Original: 0x001E6760 - 0x001E6863 (259 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6760(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E6760: ;
    ecx = MEM32(0x7717E4);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    edx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_001E6784; /* je: equal / zero */

loc_001E6774: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001E6784: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7717C4);
    ecx = 0; /* xor self */
    if (CMP_EQ(esi, ecx)) goto loc_001E67A3; /* je: equal / zero */

loc_001E6791: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_001E67A3: ;
    if (CMP_EQ(MEM32(0x7717A4), eax)) goto loc_001E67BB; /* je: equal / zero */

loc_001E67AB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_001E67BB: ;
    if (CMP_EQ(MEM32(0x771784), ecx)) goto loc_001E67D5; /* je: equal / zero */

loc_001E67C3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_001E67D5: ;
    if (CMP_EQ(MEM32(0x771774), eax)) goto loc_001E67ED; /* je: equal / zero */

loc_001E67DD: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x54737C) = eax;
    MEM32(0x771774) = eax;

loc_001E67ED: ;
    esi = MEM32(0x7717E8);
    eax = 1;
    if (CMP_EQ(esi, eax)) goto loc_001E680C; /* je: equal / zero */

loc_001E67FC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473E0) = eax;
    MEM32(0x7717E8) = eax;

loc_001E680C: ;
    if (CMP_EQ(MEM32(0x7717A8), eax)) goto loc_001E6824; /* je: equal / zero */

loc_001E6814: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473F0) = eax;
    MEM32(0x7717A8) = eax;

loc_001E6824: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_001E682F: ;
    eax = MEM32(0x771808);
    esp = esp + 8;
    (void)0; /* cmp eax, 0x303 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, 0x303)) goto loc_001E6862; /* je: equal / zero */

loc_001E683F: ;
    edx = 0x303;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001E684E: ;
    MEM32(0x549AF4) = 0x303;
    MEM32(0x771808) = 0x303;

loc_001E6862: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E6870
 * Original: 0x001E6870 - 0x001E6948 (216 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6870: ;
    edx = MEM32(0x7717E4);
    eax = 2;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(edx, eax)) goto loc_001E6894; /* je: equal / zero */

loc_001E6884: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001E6894: ;
    if (CMP_EQ(MEM32(0x7717C4), eax)) goto loc_001E68AC; /* je: equal / zero */

loc_001E689C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_001E68AC: ;
    if (CMP_EQ(MEM32(0x7717A4), eax)) goto loc_001E68C4; /* je: equal / zero */

loc_001E68B4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_001E68C4: ;
    edx = MEM32(0x771784);
    if (TEST_Z(edx, edx)) goto loc_001E68E8; /* je: equal / zero */

loc_001E68CE: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547378) = 0;
    MEM32(0x771784) = 0;

loc_001E68E8: ;
    if (CMP_EQ(MEM32(0x771774), eax)) goto loc_001E6900; /* je: equal / zero */

loc_001E68F0: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54737C) = eax;
    MEM32(0x771774) = eax;

loc_001E6900: ;
    edx = MEM32(0x7717E8);
    eax = 1;
    if (CMP_EQ(edx, eax)) goto loc_001E691F; /* je: equal / zero */

loc_001E690F: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E0) = eax;
    MEM32(0x7717E8) = eax;

loc_001E691F: ;
    if (CMP_EQ(MEM32(0x7717A8), eax)) goto loc_001E6937; /* je: equal / zero */

loc_001E6927: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F0) = eax;
    MEM32(0x7717A8) = eax;

loc_001E6937: ;
    SET_LO8(eax, MEM8(0x75CE3C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(LO8(eax) & LO8(eax), 0)) { sub_001E6948(); return; } /* ja: above (unsigned >) */

loc_001E6941: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001E69DE(); return; /* tail jmp 0x001E69DE */

}

/**
 * sub_001E6A40
 * Original: 0x001E6A40 - 0x001E6A67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6A40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E6A40: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x75);
    eax = 0x38;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001E6A51: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001E6A66; /* je: equal / zero */

loc_001E6A58: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;

loc_001E6A66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E6A70
 * Original: 0x001E6A70 - 0x001E6AB4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6A70: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001E6A8C; /* je: equal / zero */

loc_001E6A80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001E6A86: ;
    MEM32(0x771760) = esi;

loc_001E6A8C: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001E6AA5; /* je: equal / zero */

loc_001E6A98: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001E6A9F: ;
    MEM32(0x77175C) = ebx;

loc_001E6AA5: ;
    if (CMP_A(MEM8(0x75C5FC), LO8(ebx))) { sub_001E6AB4(); return; } /* ja: above (unsigned >) */

loc_001E6AAD: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001E6B44(); return; /* tail jmp 0x001E6B44 */

}

/**
 * sub_001E6DB0
 * Original: 0x001E6DB0 - 0x001E6E41 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E6DB0: ;
    esp = esp - 0x24;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 + MEMF(ecx + 4); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5DEC);
    esi = esp + 0xC;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001E6E1F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) { sub_001E6E41(); return; } /* ja: above (unsigned >) */

loc_001E6E2E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1E6E94)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_001E6E43(); return; /* tail jmp 0x001E6E43 */

    eax = MEM32(eax + 0x1C);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_001E6E43(); return; /* tail jmp 0x001E6E43 */

}

/**
 * sub_001E6EB0
 * Original: 0x001E6EB0 - 0x001E6F22 (114 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6EB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E6EB0: ;
    eax = SX16(LO16(eax));
    esp = esp - 0x10;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001E6ED5; /* je: equal / zero */

loc_001E6EBB: ;
    eax--;
    if ((eax != 0)) goto loc_001E6EF0; /* jne: not equal / not zero */

loc_001E6EBE: ;
    xmm0 = MEMF(0x64ABEC); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64ABE8); /* movss */
    goto loc_001E6EEA;

loc_001E6ED5: ;
    xmm0 = MEMF(0x64ABEC); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64ABE4); /* movss */

loc_001E6EEA: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001E6EF0: ;
    xmm0 = MEMF(0x64ABE0); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64ABDC); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    ecx = esp + 4;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001E6DB0(); /* call 0x001E6DB0 */

loc_001E6F1E: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001E6F30
 * Original: 0x001E6F30 - 0x001E7248 (792 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E6F30(void)
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

loc_001E6F30: ;
    esp = esp - 0x30;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    eax = MEM32(ebp + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    if (TEST_Z(eax, eax)) goto loc_001E6F5E; /* je: equal / zero */

loc_001E6F44: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001E6F5E; /* je: equal / zero */

loc_001E6F4E: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    if (CMP_NE(LO16(eax), LO16(edi))) goto loc_001E7242; /* jne: not equal / not zero */

loc_001E6F5E: ;
    xmm0 = MEMF(0x7F9F58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    PUSH32(esp, esi);
    esi = SX16(LO16(edi));
    PUSH32(esp, esi);
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002200D0(); /* call 0x002200D0 */

loc_001E6F7E: ;
    xmm0 = MEMF(esi * 4 + 0x87BFF0); /* movss */
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E6F9C; /* je: equal / zero */

loc_001E6F8E: ;
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_001E6FAD;

loc_001E6F9C: ;
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_001E6FAD: ;
    if ((xmm1 > xmm0)) goto loc_001E6FB2; /* ja: above (unsigned >) */

loc_001E6FAF: ;
    xmm0 = xmm1; /* movaps */

loc_001E6FB2: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esi * 4 + 0x87BFF0) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_001E7013; /* jne: not equal / not zero */

loc_001E6FC4: ;
    xmm0 = MEMF(0x64AA50); /* movss */
    ecx = MEM32(esi * 4 + 0x87BFF0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A964); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649244); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    ecx = esp + 0x18;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001E6DB0(); /* call 0x001E6DB0 */

loc_001E7011: ;
    goto loc_001E7022;

loc_001E7013: ;
    edx = MEM32(esi * 4 + 0x87BFF0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_001E6EB0(); /* call 0x001E6EB0 */

loc_001E7022: ;
    eax = MEM32(ebp + 0x30);
    fp_push(MEMF(esi * 4 + 0x87BFF0)); /* fld float */
    ecx = MEM32(eax + 0xC84);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(ecx + 0x18); /* movss */
    esp = esp + 4;
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_001E7065; /* jp: parity */

loc_001E7053: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E7058: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0x64CDFF;
    goto loc_001E7075;

loc_001E7065: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E706A: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0xFFAF00;

loc_001E7075: ;
    ecx = MEM32(0x84A144);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_001E70BF; /* je: equal / zero */

loc_001E7080: ;
    ecx--;
    if ((ecx != 0)) goto loc_001E70E1; /* jne: not equal / not zero */

loc_001E7083: ;
    esi = esi - 0;
    if ((esi == 0)) goto loc_001E7095; /* je: equal / zero */

loc_001E7088: ;
    esi--;
    if ((esi != 0)) goto loc_001E709F; /* jne: not equal / not zero */

loc_001E708B: ;
    xmm2 = MEMF(0x648FCC); /* movss */
    goto loc_001E70A5;

loc_001E7095: ;
    xmm2 = MEMF(0x648FC8); /* movss */
    goto loc_001E70A5;

loc_001E709F: ;
    xmm2 = MEMF(esp + 0x40); /* movss */

loc_001E70A5: ;
    xmm4 = MEMF(0x648FC4); /* movss */
    xmm1 = MEMF(0x648FC0); /* movss */
    xmm3 = MEMF(0x648FBC); /* movss */
    goto loc_001E70F9;

loc_001E70BF: ;
    xmm2 = MEMF(0x648FB8); /* movss */
    xmm4 = MEMF(0x648CE4); /* movss */
    xmm1 = MEMF(0x648FB4); /* movss */
    xmm3 = MEMF(0x648EA4); /* movss */
    goto loc_001E70F9;

loc_001E70E1: ;
    xmm3 = MEMF(esp + 0x40); /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */

loc_001E70F9: ;
    SET_LO8(edx, MEM8(0x87BFEC));
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    ecx = 1;
    (void)0; /* test LO8(ecx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x2C) = 0x5F5DD8;
    MEM32(esp + 0x30) = 0x5F5DC4;
    MEM32(esp + 0x34) = 0x5F5DB0;
    MEM32(esp + 0x38) = 0x5F5D98;
    POP32(esp, esi);
    if (TEST_NZ(LO8(ecx), LO8(edx))) goto loc_001E7153; /* jne: not equal / not zero */

loc_001E712F: ;
    MEM32(0x87BFEC) = MEM32(0x87BFEC) | ecx;
    edx = esp + 0x28;
    MEM32(0x87BFE0) = edx;
    MEM32(0x87BFE4) = 4;
    MEM32(0x87BFE8) = 0;

loc_001E7153: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm3 = xmm3 + xmm1; /* addss */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 2;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001E71BE: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ecx + 0xC84);
    xmm0 = MEMF(edx + 0x10); /* movss */
    esp = esp + 0x2C;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_001E7226; /* jbe: below or equal (unsigned <=) */

loc_001E71D8: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x34); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax & 0x80000001u;
    MEMF(ebp + 0x34) = xmm0; /* movss */
    if (((int32_t)eax >= 0)) goto loc_001E7202; /* jns: not sign (positive) */

loc_001E71FD: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_001E7202: ;
    MEM8(0x77616E) = 0x96;
    if ((eax == 0)) goto loc_001E722D; /* je: equal / zero */

loc_001E720B: ;
    POP32(esp, edi);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0xAF;
    MEM8(0x77616F) = 0;
    POP32(esp, ebp);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_001E7226: ;
    MEM8(0x77616E) = 0x96;

loc_001E722D: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;

loc_001E7242: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E7250
 * Original: 0x001E7250 - 0x001E729B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7250(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E7250: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001E7272; /* je: equal / zero */

loc_001E7259: ;
    if (CMP_EQ(eax, 3)) goto loc_001E7272; /* je: equal / zero */

loc_001E725E: ;
    if (CMP_NE(eax, 0x5E)) goto loc_001E7299; /* jne: not equal / not zero */

loc_001E7263: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    esi = MEM32(esp + 8);
    (void)0; /* cmp ecx, MEM32(esi + 0x2C) - flags set for next jcc */
    goto loc_001E7292;

loc_001E7272: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    (void)0; /* cmp MEM32(eax + 0x64), 0x35 - flags set for next jcc */
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(eax + 0x64), 0x35)) goto loc_001E7287; /* je: equal / zero */

loc_001E7282: ;
    ecx = MEM32(esi + 0x2C);
    goto loc_001E7290;

loc_001E7287: ;
    eax = MEM32(eax + 0x570);
    ecx = MEM32(esi + 0x30);

loc_001E7290: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */

loc_001E7292: ;
    if (CMP_NE(eax, ecx)) goto loc_001E7299; /* jne: not equal / not zero */

loc_001E7294: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001E7299: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E72A0
 * Original: 0x001E72A0 - 0x001E7339 (153 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E72A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E72A0: ;
    esp = esp - 0x10;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    ecx = ebx;
    ecx = ecx << 4;
    edx = esp + 8;
    edi = ecx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000990E0(); /* call 0x000990E0 */

loc_001E72D6: ;
    xmm2 = MEMF(edi + 0xC); /* movss */
    ecx = MEM32(0x7F9F60);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_001E7318; /* jbe: below or equal (unsigned <=) */

loc_001E72F3: ;
    if (CMP_NE(MEM32(esi + ebx * 4 + 0x800), ebp)) goto loc_001E7318; /* jne: not equal / not zero */

loc_001E72FC: ;
    edx = MEM32(esi + ebx * 4 + 0xA00);
    eax = ecx + -1;
    if (CMP_NE(edx, eax)) goto loc_001E7318; /* jne: not equal / not zero */

loc_001E730A: ;
    eax = MEM32(esi + 0xC08);
    if (TEST_Z(eax, eax)) goto loc_001E7328; /* je: equal / zero */

loc_001E7314: ;
    if (TEST_NZ(ebp, ebp)) goto loc_001E7328; /* jne: not equal / not zero */

loc_001E7318: ;
    edx = MEM32(esi + 0xC00);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_NE(edx, MEM32(esi + 0xC04))) { sub_001E7339(); return; } /* jne: not equal / not zero */

loc_001E7328: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEM32(esi + ebx * 4 + 0xA00) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E7390
 * Original: 0x001E7390 - 0x001E73AA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7390(void)
{

loc_001E7390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x114);
    PUSH32(esp, 0x5F5E04);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001E73A6: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001E73B0
 * Original: 0x001E73B0 - 0x001E73D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E73B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E73B0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 0x46 - flags set for next jcc */
    MEM32(0x775F04) = ebp;
    if (CMP_NE(eax, 0x46)) { sub_001E73D0(); return; } /* jne: not equal / not zero */

loc_001E73C5: ;
    MEM32(0x775EF0) = ebp;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001E7820
 * Original: 0x001E7820 - 0x001E7A4A (554 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7820: ;
    ecx = MEM32(0x775EF0);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(ecx, ebp)) goto loc_001E7A48; /* je: equal / zero */

loc_001E7831: ;
    eax = MEM32(0x8496F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 0x28) = ecx;
    if (CMP_LE(ecx, ebp)) goto loc_001E789E; /* jle: less or equal (signed <=) */

loc_001E7842: ;
    ecx = MEM32(eax + 0x24);
    esi = MEM32(ecx + edi * 4);
    edx = MEM32(0x8496F4);
    ecx = MEM32(esi + edx + 0x70);
    esi = esi + edx;
    if (CMP_EQ(ecx, ebp)) goto loc_001E7896; /* je: equal / zero */

loc_001E7858: ;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001E7860: ;
    if (TEST_NZ(eax, eax)) goto loc_001E7891; /* jne: not equal / not zero */

loc_001E7864: ;
    eax = MEM32(esi + 0x70);
    if (CMP_EQ(eax, ebp)) goto loc_001E7891; /* je: equal / zero */

loc_001E786B: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001E788B: ;
    esp = esp + 4;
    MEM32(esi + 0x70) = ebp;

loc_001E7891: ;
    eax = MEM32(0x8496F0);

loc_001E7896: ;
    ecx = MEM32(eax + 0x28);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_001E7842; /* jl: less (signed <) */

loc_001E789E: ;
    ecx = MEM32(eax + 0x28);
    ebx = MEM32(0x8496F4);
    edi = eax + 0x28;
    esi = 0; /* xor self */
    if (CMP_LE(ecx, ebp)) goto loc_001E78D0; /* jle: less or equal (signed <=) */

loc_001E78B0: ;
    ebp = eax + 0x24;

loc_001E78B3: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + esi * 4);
    ecx = MEM32(eax + ebx + 0x60);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828424), _icall_esp); /* indirect call */
    }

loc_001E78C4: ;
    eax = MEM32(edi);
    esp = esp + 4;
    esi++;
    if (CMP_L(esi, eax)) goto loc_001E78B3; /* jl: less (signed <) */

loc_001E78CE: ;
    ebp = 0; /* xor self */

loc_001E78D0: ;
    edx = MEM32(0x8496F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001E78DC: ;
    if (TEST_NZ(eax, eax)) goto loc_001E7912; /* jne: not equal / not zero */

loc_001E78E0: ;
    eax = MEM32(0x8496F4);
    if (CMP_EQ(eax, ebp)) goto loc_001E7912; /* je: equal / zero */

loc_001E78E9: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001E7909: ;
    esp = esp + 4;
    MEM32(0x8496F4) = ebp;

loc_001E7912: ;
    eax = MEM32(0x775EF0);
    ebx = 0; /* xor self */
    if (CMP_LE(eax, ebp)) goto loc_001E796D; /* jle: less or equal (signed <=) */

loc_001E791D: ;
    edi = 0; /* xor self */
    /* nop */

loc_001E7920: ;
    eax = MEM32(0x8496F8);
    esi = edi + eax + 8;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001E7931: ;
    if (TEST_NZ(eax, eax)) goto loc_001E7960; /* jne: not equal / not zero */

loc_001E7935: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_001E7960; /* je: equal / zero */

loc_001E793B: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001E795B: ;
    esp = esp + 4;
    MEM32(esi) = ebp;

loc_001E7960: ;
    eax = MEM32(0x775EF0);
    ebx++;
    edi = edi + 0x38;
    if (CMP_L(ebx, eax)) goto loc_001E7920; /* jl: less (signed <) */

loc_001E796D: ;
    ebx = 0; /* xor self */
    if (CMP_LE(eax, ebp)) goto loc_001E79C6; /* jle: less or equal (signed <=) */

loc_001E7973: ;
    esi = 0; /* xor self */

loc_001E7975: ;
    ecx = MEM32(0x8496F8);
    edi = MEM32(esi + ecx);
    eax = MEM32(edi);
    edx = eax;
    edx = edx & 0xFFFF;
    if (CMP_NE(edx, 1)) goto loc_001E79B6; /* jne: not equal / not zero */

loc_001E798D: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001E79A6; /* jne: not equal / not zero */

loc_001E7999: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001E79A6; /* je: equal / zero */

loc_001E79A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001E79A6: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_001E79B6; /* jne: not equal / not zero */

loc_001E79AF: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_001E79B4: ;
    goto loc_001E79B9;

loc_001E79B6: ;
    eax--;
    MEM32(edi) = eax;

loc_001E79B9: ;
    eax = MEM32(0x775EF0);
    ebx++;
    esi = esi + 0x38;
    if (CMP_L(ebx, eax)) goto loc_001E7975; /* jl: less (signed <) */

loc_001E79C6: ;
    eax = MEM32(0x8496E8);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(eax, ebp)) goto loc_001E79FE; /* je: equal / zero */

loc_001E79D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001E79D7: ;
    if (TEST_NZ(eax, eax)) goto loc_001E79FE; /* jne: not equal / not zero */

loc_001E79DB: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001E79FB: ;
    esp = esp + 4;

loc_001E79FE: ;
    eax = MEM32(0x8496F8);
    PUSH32(esp, eax);
    MEM32(0x8496E8) = ebp;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001E7A0F: ;
    if (TEST_NZ(eax, eax)) goto loc_001E7A45; /* jne: not equal / not zero */

loc_001E7A13: ;
    eax = MEM32(0x8496F8);
    if (CMP_EQ(eax, ebp)) goto loc_001E7A45; /* je: equal / zero */

loc_001E7A1C: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001E7A3C: ;
    esp = esp + 4;
    MEM32(0x8496F8) = ebp;

loc_001E7A45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001E7A48: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001E7A50
 * Original: 0x001E7A50 - 0x001E7CBA (618 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7A50: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x74);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    edx = ZX16(MEM16(eax + 0xE));
    eax = MEM32(0x8496F8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ecx + 0x260); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    MEMF(esi + eax + 0x2C) = xmm0; /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x136));
    eax = eax & 7;
    if (CMP_A(eax, 4)) goto loc_001E7CB5; /* ja: above (unsigned >) */

loc_001E7A93: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1E7CBC); /* switch: 5 entries, 4 targets */
    if (_jt == 0x001E7A9Au) goto loc_001E7A9A;
    if (_jt == 0x001E7B23u) goto loc_001E7B23;
    if (_jt == 0x001E7BA1u) goto loc_001E7BA1;
    if (_jt == 0x001E7CB5u) goto loc_001E7CB5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001E7A9A: ;
    edx = MEM32(0x8496F8);
    xmm0 = MEMF(esi + edx + 0x2C); /* movss */
    xmm1 = MEMF(ecx + 0x80); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x7C); /* addss */
    eax = esi + edx;
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x14) = edx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x294); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001E7AE8; /* jp: parity */

loc_001E7AE3: ;
    xmm0 = MEMF(ecx + 0x7C); /* movss */

loc_001E7AE8: ;
    eax = MEM32(0x8496F8);
    xmm1 = MEMF(ecx + 0x80); /* movss */
    ecx = MEM32(ecx + 0x78);
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    eax = esi + eax + 0x20;
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    edx = MEM32(0x8496F8);
    MEM32(esi + edx + 0x30) = 2;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001E7B23: ;
    eax = MEM32(0x8496F8);
    edx = MEM32(ecx + 0x78);
    xmm0 = MEMF(eax + esi + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    eax = eax + esi;
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x7C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x80);
    MEM32(eax + 0x1C) = edx;
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x7C);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x80);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x10);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ecx + 0x264); /* mulss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEM32(eax + 0x30) = 2;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001E7BA1: ;
    eax = MEM32(ecx + 0x74);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    eax = MEM32(0x8496F8);
    xmm1 = MEMF(ecx + 0x80); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ecx + 0x264); /* mulss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x7C); /* addss */
    edx = MEM32(ecx + 0x78);
    MEMF(esi + eax + 0x24) = xmm0; /* movss */
    eax = esi + eax + 0x20;
    MEM32(eax) = edx;
    MEMF(eax + 8) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(ecx + 0x36C); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(ecx + 0x370); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = esp + 4;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(ecx + 0x374); /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_001E7C22: ;
    esp = esp + 4;
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001E7C55; /* jp: parity */

loc_001E7C2E: ;
    xmm0 = MEMF(0x6494D8); /* movss */
    eax = esp + 4;
    PUSH32(esp, ebx);
    ebx = eax;
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001E7C54: ;
    POP32(esp, ebx);

loc_001E7C55: ;
    ecx = MEM32(0x8496F8);
    xmm0 = MEMF(esi + ecx + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    eax = esi + ecx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    edx = MEM32(0x8496F8);
    MEM32(esi + edx + 0x30) = 0;

loc_001E7CB5: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001E7D30
 * Original: 0x001E7D30 - 0x001E7E9E (366 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7D30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001E7D30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8493BC);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_001E7DF4; /* je: equal / zero */

loc_001E7D43: ;
    SET_LO8(edx, MEM8(edi + 0x50));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E7DF4; /* je: equal / zero */

loc_001E7D53: ;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm0 = xmm0 * MEMF(0x648F24); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001E7D7D; /* ja: above (unsigned >) */

loc_001E7D77: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_001E7D7D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E7D86: ;
    eax = ZX8(LO8(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ebx;
    PUSH32(esp, 0); sub_001E7CD0(); /* call 0x001E7CD0 */

loc_001E7D94: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001E7DD5; /* jbe: below or equal (unsigned <=) */

loc_001E7D99: ;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm0 = xmm0 * MEMF(0x648F24); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001E7DC3; /* ja: above (unsigned >) */

loc_001E7DBD: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_001E7DC3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E7DCC: ;
    ecx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    goto loc_001E7DDC;

loc_001E7DD5: ;
    eax = ebx;
    PUSH32(esp, 0); sub_001E7CD0(); /* call 0x001E7CD0 */

loc_001E7DDC: ;
    xmm1 = MEMF(0x648EB8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001E7E9A; /* ja: above (unsigned >) */

loc_001E7DED: ;
    POP32(esp, edi);
    xmm0 = xmm1; /* movaps */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001E7DF4: ;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm0 = xmm0 * MEMF(0x648F24); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001E7E1E; /* ja: above (unsigned >) */

loc_001E7E18: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_001E7E1E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E7E27: ;
    edx = ZX8(LO8(eax));
    eax = ebx;
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 0); sub_001E7CD0(); /* call 0x001E7CD0 */

loc_001E7E35: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001E7E48; /* jp: parity */

loc_001E7E41: ;
    POP32(esp, edi);
    xmm0 = xmm2; /* movaps */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001E7E48: ;
    if (TEST_NZ(MEM8(ebx + 0x136), 0x20)) goto loc_001E7E92; /* jne: not equal / not zero */

loc_001E7E51: ;
    xmm4 = MEMF(ebx + 0xDC); /* movss */
    xmm1 = MEMF(0x5A0060); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_001E7E6B; /* jbe: below or equal (unsigned <=) */

loc_001E7E66: ;
    xmm1 = xmm2; /* movaps */
    goto loc_001E7E7F;

loc_001E7E6B: ;
    xmm1 = xmm1 - MEMF(ebx + 0xDC); /* subss */
    xmm1 = xmm1 * MEMF(0x649640); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */

loc_001E7E7F: ;
    xmm1 = xmm1 * MEMF(0x648EB8); /* mulss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    xmm0 = xmm1; /* movaps */

loc_001E7E92: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_001E7E9A; /* jbe: below or equal (unsigned <=) */

loc_001E7E97: ;
    xmm0 = xmm3; /* movaps */

loc_001E7E9A: ;
    POP32(esp, edi);
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
 * sub_001E7EA0
 * Original: 0x001E7EA0 - 0x001E7EC1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7EA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E7EA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0); sub_001E7D30(); /* call 0x001E7D30 */

loc_001E7EA9: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) { sub_001E7EC1(); return; } /* jp: parity */

loc_001E7EBC: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E7F00
 * Original: 0x001E7F00 - 0x001E7FAE (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E7F00: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(0x775F04);
    PUSH32(esp, edi);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_001E7A50(); /* call 0x001E7A50 */

loc_001E7F19: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    eax = MEM32(0x8496F8);
    xmm0 = MEMF(eax + esi + 0x20); /* movss */
    xmm2 = MEMF(eax + esi + 0x2C); /* movss */
    eax = eax + esi;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x28); /* movss */
    eax = MEM32(0x84A13C);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    edi = edx + eax + 0x148;
    esi = esp + 0x18;
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0x13) = 0;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_001E7F78: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001E7FA7; /* je: equal / zero */

loc_001E7F7F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_0006B180(); /* call 0x0006B180 */

loc_001E7F8E: ;
    esp = esp + 8;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E7FA7; /* jnp: not parity */

loc_001E7F9E: ;
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_001E7EA0(); /* call 0x001E7EA0 */

loc_001E7FA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001E7FB0
 * Original: 0x001E7FB0 - 0x001E7FC7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7FB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E7FB0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) { sub_001E7FC7(); return; } /* jbe: below or equal (unsigned <=) */

loc_001E7FC3: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001E7FE0
 * Original: 0x001E7FE0 - 0x001E800D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E7FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E7FE0: ;
    ecx = esi;
    eax = 0x11;
    eax = eax << LO8(ecx);
    if (TEST_NZ(MEM8(edx + 0x543), LO8(eax))) { sub_001E800D(); return; } /* jne: not equal / not zero */

loc_001E7FF1: ;
    if (TEST_NZ(MEM8(edx + 0x544), LO8(eax))) { sub_001E800D(); return; } /* jne: not equal / not zero */

loc_001E7FF9: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_NZ(MEM8(edx + 0x16E), LO8(eax))) { sub_001E800D(); return; } /* jne: not equal / not zero */

loc_001E800A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8010
 * Original: 0x001E8010 - 0x001E801D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8010(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E8010: ;
    eax = MEM32(0x84A5FC);
    SET_LO8(eax, MEM8(eax + ecx));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001E801D(); return; } /* jne: not equal / not zero */

loc_001E801C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E80B0
 * Original: 0x001E80B0 - 0x001E8112 (98 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E80B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E80B0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x8470DC);
    ecx = MEM32(0x84A13C);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    esi = esi + edx;
    edx = MEM32(eax + ecx + 0x144);
    eax = MEM32(esi + 0x3E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (TEST_Z(eax, eax)) goto loc_001E810E; /* je: equal / zero */

loc_001E80E6: ;
    if (CMP_EQ(MEM32(eax + 0x64), 5)) goto loc_001E810E; /* je: equal / zero */

loc_001E80EC: ;
    edx = eax;
    ecx = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001E8010(); /* call 0x001E8010 */

loc_001E80F8: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E810E; /* je: equal / zero */

loc_001E80FF: ;
    eax = MEM32(esi + 0x3E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E7F00(); /* call 0x001E7F00 */

loc_001E810B: ;
    esp = esp + 4;

loc_001E810E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8120
 * Original: 0x001E8120 - 0x001E819F (127 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8120(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E8120: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = eax + edx;
    edx = MEM32(0x84A13C);
    eax = MEM32(eax + 0x3E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ecx + edx + 0x144);
    MEM32(esp + 4) = ecx;
    if (TEST_Z(eax, eax)) goto loc_001E819C; /* je: equal / zero */

loc_001E8155: ;
    if (CMP_EQ(MEM32(eax + 0x64), 5)) goto loc_001E819C; /* je: equal / zero */

loc_001E815B: ;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E819C; /* je: equal / zero */

loc_001E8165: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = ZX16(MEM16(edx + eax + -1648));
    PUSH32(esp, esi);
    esi = edx + eax + -1744;
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0); sub_001E8010(); /* call 0x001E8010 */

loc_001E818B: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E819B; /* je: equal / zero */

loc_001E8192: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E7F00(); /* call 0x001E7F00 */

loc_001E8198: ;
    esp = esp + 4;

loc_001E819B: ;
    POP32(esp, esi);

loc_001E819C: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E81A0
 * Original: 0x001E81A0 - 0x001E8260 (192 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E81A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E81A0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(edi + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E825E; /* jne: not equal / not zero */

loc_001E81AC: ;
    eax = MEM32(edi);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = MEM32(eax + ecx + 0x144);
    (void)0; /* cmp MEM32(edi + 8), 0x80 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    if (CMP_GE(MEM32(edi + 8), 0x80)) goto loc_001E8257; /* jge: greater or equal (signed >=) */

loc_001E81D5: ;
    ebx = MEM32(0x84A5FC);
    ebp = MEM32(0x775F04);

loc_001E81E1: ;
    ecx = MEM32(edi + 8);
    if (CMP_NE(MEM8(ecx + ebx), 0)) goto loc_001E81F0; /* jne: not equal / not zero */

loc_001E81EA: ;
    ecx++;
    MEM32(edi + 8) = ecx;
    goto loc_001E824E;

loc_001E81F0: ;
    eax = MEM32(0x84A5F8);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + eax;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001E8010(); /* call 0x001E8010 */

loc_001E8209: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E824B; /* je: equal / zero */

loc_001E8210: ;
    if (TEST_Z(MEM8(esi + 0x136), 0x10)) goto loc_001E824B; /* je: equal / zero */

loc_001E8219: ;
    eax = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_001E8234; /* jle: less or equal (signed <=) */

loc_001E821F: ;
    ecx = MEM32(0x8496F8);
    ecx = ecx + 0x10;

loc_001E8228: ;
    if (CMP_EQ(esi, MEM32(ecx))) goto loc_001E824B; /* je: equal / zero */

loc_001E822C: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, ebp)) goto loc_001E8228; /* jl: less (signed <) */

loc_001E8234: ;
    ebx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E7F00(); /* call 0x001E7F00 */

loc_001E823C: ;
    eax = MEM32(edi + 8);
    esp = esp + 4;
    POP32(esp, esi);
    eax++;
    POP32(esp, ebp);
    MEM32(edi + 8) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001E824B: ;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;

loc_001E824E: ;
    if (CMP_L(MEM32(edi + 8), 0x80)) goto loc_001E81E1; /* jl: less (signed <) */

loc_001E8257: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 4) = 1;
    POP32(esp, ebx);

loc_001E825E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8260
 * Original: 0x001E8260 - 0x001E8267 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8260(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8260: ;
    esp = esp - 0x1C;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_001E8270(); return; /* tail jmp 0x001E8270 */

}

/**
 * sub_001E8450
 * Original: 0x001E8450 - 0x001E8511 (193 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8450(void)
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

loc_001E8450: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esi + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E850F; /* jne: not equal / not zero */

loc_001E845C: ;
    (void)0; /* cmp MEM32(esi + 8), 0x80 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_GE(MEM32(esi + 8), 0x80)) goto loc_001E84FD; /* jge: greater or equal (signed >=) */

loc_001E846C: ;
    ebp = MEM32(0x775F04);
    edi = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    goto loc_001E8480;

    /* nop */

loc_001E8480: ;
    ecx = MEM32(esi + 8);
    xmm0 = MEMF(esi + ecx * 8 + 0x10); /* movss */
    /* ucomiss xmm0, MEMF(0x648E94) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001E84F7; /* jnp: not parity */

loc_001E8496: ;
    ebx = MEM32(esi + ecx * 8 + 0xC);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_001E7A50(); /* call 0x001E7A50 */

loc_001E84A3: ;
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_001E7D30(); /* call 0x001E7D30 */

loc_001E84AA: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_001E84C1; /* jp: parity */

loc_001E84BD: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001E84E3;

loc_001E84C1: ;
    eax = MEM32(0x8496F8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(edi + eax + 0x10) = ebx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E84D3: ;
    ecx = MEM32(0x8496F8);
    MEM8(edi + ecx + 0x34) = LO8(eax);
    ebp++;
    edi = edi + 0x38;
    SET_LO8(eax, 1);

loc_001E84E3: ;
    edx = MEM32(esi + 8);
    edx++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 8) = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E8506; /* jne: not equal / not zero */

loc_001E84EE: ;
    eax = edx;
    if (CMP_L(eax, 0x80)) goto loc_001E8480; /* jl: less (signed <) */

loc_001E84F7: ;
    MEM32(0x775F04) = ebp;

loc_001E84FD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 4) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001E8506: ;
    POP32(esp, edi);
    MEM32(0x775F04) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001E850F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E8520
 * Original: 0x001E8520 - 0x001E862F (271 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8520: ;
    eax = 0x1478;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_001E852A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x775EF0);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_001E8601; /* je: equal / zero */

loc_001E853C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A144);
    PUSH32(esp, esi);
    ebp++;
    esi = 0; /* xor self */
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(0x775F04) = ebx;
    if (CMP_LE(ebp, ebx)) goto loc_001E8569; /* jle: less or equal (signed <=) */

loc_001E8551: ;
    eax = esi;
    PUSH32(esp, 0); sub_001E80B0(); /* call 0x001E80B0 */

loc_001E8558: ;
    if (CMP_EQ(MEM32(0x775F04), edi)) goto loc_001E85FF; /* je: equal / zero */

loc_001E8564: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_001E8551; /* jl: less (signed <) */

loc_001E8569: ;
    esi = 0; /* xor self */
    if (CMP_LE(ebp, ebx)) goto loc_001E8588; /* jle: less or equal (signed <=) */

loc_001E856F: ;
    /* nop */

loc_001E8570: ;
    eax = esi;
    PUSH32(esp, 0); sub_001E8120(); /* call 0x001E8120 */

loc_001E8577: ;
    if (CMP_EQ(MEM32(0x775F04), edi)) goto loc_001E85FF; /* je: equal / zero */

loc_001E8583: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_001E8570; /* jl: less (signed <) */

loc_001E8588: ;
    ecx = 0; /* xor self */
    if (CMP_LE(ebp, ebx)) goto loc_001E85A2; /* jle: less or equal (signed <=) */

loc_001E858E: ;
    eax = esp + 0x14;

loc_001E8592: ;
    MEM32(eax + -4) = ecx;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 4) = ebx;
    ecx++;
    eax = eax + 0xC;
    if (CMP_L(ecx, ebp)) goto loc_001E8592; /* jl: less (signed <) */

loc_001E85A2: ;
    eax = 0; /* xor self */
    if (CMP_LE(ebp, ebx)) goto loc_001E85BC; /* jle: less or equal (signed <=) */

loc_001E85A8: ;
    ecx = esp + 0x14;
    /* nop */

loc_001E85B0: ;
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) goto loc_001E860A; /* je: equal / zero */

loc_001E85B4: ;
    eax++;
    ecx = ecx + 0xC;
    if (CMP_L(eax, ebp)) goto loc_001E85B0; /* jl: less (signed <) */

loc_001E85BC: ;
    edi = 0; /* xor self */
    if (CMP_LE(ebp, ebx)) goto loc_001E85E6; /* jle: less or equal (signed <=) */

loc_001E85C2: ;
    esi = esp + 0x50;

loc_001E85C6: ;
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esi + -4) = edi;
    MEM8(esi) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_001E8260(); /* call 0x001E8260 */

loc_001E85D8: ;
    esp = esp + 8;
    edi++;
    esi = esi + 0x40C;
    if (CMP_L(edi, ebp)) goto loc_001E85C6; /* jl: less (signed <) */

loc_001E85E6: ;
    eax = 0; /* xor self */
    if (CMP_LE(ebp, ebx)) goto loc_001E85FF; /* jle: less or equal (signed <=) */

loc_001E85EC: ;
    ecx = esp + 0x50;

loc_001E85F0: ;
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) { sub_001E862F(); return; } /* je: equal / zero */

loc_001E85F4: ;
    eax++;
    ecx = ecx + 0x40C;
    if (CMP_L(eax, ebp)) goto loc_001E85F0; /* jl: less (signed <) */

loc_001E85FF: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001E8601: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x1478;
    esp += 4; return; /* ret */

loc_001E860A: ;
    esi = 0; /* xor self */
    edi = esp + 0x10;

loc_001E8610: ;
    PUSH32(esp, 0); sub_001E81A0(); /* call 0x001E81A0 */

loc_001E8615: ;
    eax = MEM32(0x775EF0);
    if (CMP_EQ(MEM32(0x775F04), eax)) goto loc_001E85FF; /* je: equal / zero */

loc_001E8622: ;
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, ebp)) goto loc_001E8610; /* jl: less (signed <) */

loc_001E862A: ;
    goto loc_001E85A2;

}

/**
 * sub_001E8660
 * Original: 0x001E8660 - 0x001E866D (13 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8660(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8660: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = eax;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001E8670(); return; /* tail jmp 0x001E8670 */

}

/**
 * sub_001E8720
 * Original: 0x001E8720 - 0x001E8869 (329 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8720(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001E8720: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    esi = ecx;
    if (CMP_GE(edi, 2)) goto loc_001E8863; /* jge: greater or equal (signed >=) */

loc_001E8732: ;
    eax = MEM32(esi + edi * 4 + 0x58C);
    if (TEST_Z(eax, eax)) goto loc_001E8819; /* je: equal / zero */

loc_001E8741: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x80);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    eax = eax + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_001E875E: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001E8800; /* jne: not equal / not zero */

loc_001E8769: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esi;
    MEM32(0x780AB0) = 0x5F5E04;
    MEM32(0x6C0210) = 0x4B7;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002E5BD0(); /* call 0x002E5BD0 */

loc_001E879C: ;
    edx = MEM32(esi + 0x88);
    ecx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x80);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(esi + edi * 4 + 0x58C);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = eax + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_001E87D8: ;
    esp = esp + 0x38;
    MEM32(0x780AB0) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = 0;

loc_001E8800: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001E88D0(); /* call 0x001E88D0 */

loc_001E8814: ;
    esp = esp + 0xC;
    goto loc_001E8823;

loc_001E8819: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001EAB60(); /* call 0x001EAB60 */

loc_001E8820: ;
    esp = esp + 8;

loc_001E8823: ;
    esi = MEM32(esi + edi * 4 + 0x58C);
    if (TEST_Z(esi, esi)) goto loc_001E8863; /* je: equal / zero */

loc_001E882E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001E8837: ;
    edx = MEM32(esi + 0xCC);
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    edx = edx & 0xFFFFFF;
    eax = eax | edx;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x114) = eax;

loc_001E8863: ;
    POP32(esp, edi);
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
 * sub_001E8870
 * Original: 0x001E8870 - 0x001E88CC (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8870(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E8870: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + edi * 4 + 0x58C);
    if (TEST_Z(esi, esi)) goto loc_001E88CA; /* je: equal / zero */

loc_001E887C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E88BF; /* jne: not equal / not zero */

loc_001E8885: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001E888C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001E88BF; /* jl: less (signed <) */

loc_001E8893: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001E88B3; /* je: equal / zero */

loc_001E88A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001E88A3: ;
    esp = esp + 4;
    MEM32(ebx + edi * 4 + 0x58C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001E88B3: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001E88BF: ;
    MEM32(ebx + edi * 4 + 0x58C) = 0;

loc_001E88CA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E88D0
 * Original: 0x001E88D0 - 0x001E88FA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E88D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E88D0: ;
    edx = MEM32(esi + edi * 4 + 0x58C);
    esp = esp - 0x20;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = edx + 0x30;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_001E88EF: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001E88FA(); return; } /* jne: not equal / not zero */

loc_001E88F6: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8BE0
 * Original: 0x001E8BE0 - 0x001E8C77 (151 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8BE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001E8BE0: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1EC);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(0x7819D5));
    esp = esp - 0x18;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esi) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001E8C73; /* jne: not equal / not zero */

loc_001E8BFC: ;
    if (CMP_NE(MEM16(eax + 0x60), 0)) goto loc_001E8C73; /* jne: not equal / not zero */

loc_001E8C03: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = eax + 0x84;
    ecx = MEM32(edx);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    eax = eax + 0x78;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edx;
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_001E8C50: ;
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    esp = esp + 8;
    MEMF(esi) = xmm0; /* movss */

loc_001E8C73: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8C80
 * Original: 0x001E8C80 - 0x001E8EE4 (612 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8C80: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x20);
    xmm0 = MEMF(ecx + edx + 4); /* movss */
    eax = ecx + edx + 4;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 8) = eax;
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
    MEMF(esp + 4) = xmm1; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001E8EDF; /* ja: above (unsigned >) */

loc_001E8D58: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001E8D60: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x44); /* movss */
    eax = MEM32(esi + 8);
    xmm4 = MEMF(esp + 0x18); /* movss */
    esi = MEM32(esp + 0x48);
    ebx = MEM32(esi + 0x18);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = edx;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = eax;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 + MEMF(esp + 0x38); /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEM32(esp + 0x28) = ecx;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    eax = 0; /* xor self */
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(ebx, eax)) goto loc_001E8EDB; /* jbe: below or equal (unsigned <=) */

loc_001E8E42: ;
    PUSH32(esp, ebp);
    ebp = ebx + ebx * 8;
    PUSH32(esp, edi);
    ebp = ebp << 4;
    MEM32(esp + 0x10) = eax;
    edi = edi;

loc_001E8E50: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x14);
    edi = ecx + edx;
    eax = 0; /* xor self */
    ecx = edi + 0x44;
    /* nop */

loc_001E8E60: ;
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm5 = MEMF(ecx + -4); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(ecx); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001E8EB9; /* ja: above (unsigned >) */

loc_001E8E87: ;
    eax++;
    ecx = ecx + 0xC;
    if (CMP_L(eax, 3)) goto loc_001E8E60; /* jl: less (signed <) */

loc_001E8E90: ;
    ebx--;
    ebp = ebp - 0x90;
    esi = edx + ebp;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    esi = MEM32(esp + 0x50);
    goto loc_001E8ECF;

loc_001E8EB9: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    ecx++;
    eax = eax + 0x90;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;

loc_001E8ECF: ;
    if (CMP_B(MEM32(esp + 0x14), ebx)) goto loc_001E8E50; /* jb: below (unsigned <) */

loc_001E8ED9: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001E8EDB: ;
    MEM32(esi + 0x18) = ebx;
    POP32(esp, ebx);

loc_001E8EDF: ;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001E8EF0
 * Original: 0x001E8EF0 - 0x001E8F8E (158 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E8EF0: ;
    eax = MEM32(0x775F04);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001E8F8C; /* je: equal / zero */

loc_001E8F00: ;
    edx = MEM32(0x5499F0);
    PUSH32(esp, ebx);
    edx = edx | 0x801;
    PUSH32(esp, esi);
    MEM32(0x547370) = 4;
    MEM32(0x547358) = esi;
    MEM32(0x5499F0) = edx;
    MEM32(0x547344) = 2;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001E8F33: ;
    PUSH32(esp, 0); sub_0010A2B0(); /* call 0x0010A2B0 */

loc_001E8F38: ;
    ebx = MEM32(0x8496F0);
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(0x8496F4);
    MEM32(eax + ecx + 0x18) = 0x10;
    edx = MEM32(0x8496F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00407800(); /* call 0x00407800 */

loc_001E8F5B: ;
    eax = MEM32(0x8496F0);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(0x5499F0);
    edx = MEM32(0x8496F4);
    esp = esp + 4;
    MEM32(ecx + edx + 0x18) = esi;
    eax = eax | 0x2000;
    MEM32(0x7502EC) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = esi;
    POP32(esp, ebx);

loc_001E8F8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8F90
 * Original: 0x001E8F90 - 0x001E96ED (1885 bytes, 486 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8F90: ;
    eax = MEM32(0x775EF0);
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001E96E8; /* je: equal / zero */

loc_001E8FA3: ;
    PUSH32(esp, edi);
    MEM32(0x775F08) = esi;
    MEM32(0x775F0C) = esi;
    PUSH32(esp, 0); sub_001E8520(); /* call 0x001E8520 */

loc_001E8FB5: ;
    eax = MEM32(0x84A144);
    edi = 0; /* xor self */
    if (CMP_L(eax, esi)) goto loc_001E8FD1; /* jl: less (signed <) */

loc_001E8FC0: ;
    eax = edi;
    PUSH32(esp, 0); sub_001E8660(); /* call 0x001E8660 */

loc_001E8FC7: ;
    eax = MEM32(0x84A144);
    edi++;
    if (CMP_LE(edi, eax)) goto loc_001E8FC0; /* jle: less or equal (signed <=) */

loc_001E8FD1: ;
    eax = MEM32(0x775F04);
    edi = MEM32(0x8496F0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(edi + 0x28) = eax;
    if (CMP_LE(eax, esi)) goto loc_001E90D5; /* jle: less or equal (signed <=) */

loc_001E8FEB: ;
    goto loc_001E8FF0;

    /* nop */

loc_001E8FF0: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(0x8496F4);
    MEM32(ecx + eax) = ebx;
    edx = MEM32(edi + 0x20);
    eax = MEM32(0x8496F4);
    xmm0 = MEMF(0x648E94); /* movss */
    MEMF(edx + eax + 0x10) = xmm0; /* movss */
    edx = MEM32(0x8496F8);
    eax = MEM32(esi + edx + 0x30);
    ecx = MEM32(edi + 0x20);
    edx = MEM32(0x8496F4);
    MEM32(ecx + edx + 0x14) = eax;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(0x8496F4);
    edx = MEM32(eax + ecx);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(0x8496F8);
    SET_LO8(ecx, MEM8(esi + ecx + 0x34));
    MEM8(edx + eax + 0x74) = LO8(ecx);
    edx = MEM32(0x8496F8);
    ecx = MEM32(edi + 0x20);
    eax = esi + edx + 0x14;
    edx = MEM32(0x8496F4);
    ecx = ecx + edx + 4;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x8496F4);
    eax = MEM32(edi + 0x20);
    eax = MEM32(edx + eax);
    ebp = MEM32(edi + 0x24);
    ecx = MEM32(0x8496F8);
    eax = MEM32(ebp + eax * 4);
    xmm0 = MEMF(ecx + esi + 0x2C); /* movss */
    eax = eax + edx;
    ecx = ecx + esi;
    MEM32(eax + 0x40) = 0x5A0350;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x48) = edx;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x4C) = ecx;
    MEMF(eax + 0x50) = xmm0; /* movss */
    eax = MEM32(0x8496F4);
    ecx = edi;
    PUSH32(esp, 0); sub_004079E0(); /* call 0x004079E0 */

loc_001E90BC: ;
    eax = MEM32(0x775F04);
    edi = MEM32(0x8496F0);
    ebx++;
    esi = esi + 0x38;
    if (CMP_L(ebx, eax)) goto loc_001E8FF0; /* jl: less (signed <) */

loc_001E90D3: ;
    esi = 0; /* xor self */

loc_001E90D5: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edx = MEM32(0x8496E8);
    MEM32(edx + 0xC00) = esi;
    if (CMP_LE(eax, esi)) goto loc_001E9103; /* jle: less or equal (signed <=) */

loc_001E90E5: ;
    ecx = MEM32(edi + 4);
    if (CMP_EQ(ecx, esi)) goto loc_001E9103; /* je: equal / zero */

loc_001E90EC: ;
    eax = MEM32(0x8496F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001E90F5: ;
    eax = MEM32(0x775F04);
    edi = MEM32(0x8496F0);
    esp = esp + 8;

loc_001E9103: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(eax, esi)) goto loc_001E96E5; /* jle: less or equal (signed <=) */

loc_001E910F: ;
    ecx = esp + 0x40;
    edx = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x28) = edx;
    ebp = 0; /* xor self */
    goto loc_001E9130;

loc_001E9121: ;
    esi = MEM32(esp + 0x18);
    goto loc_001E9130;

    /* nop */
    edi = edi;

loc_001E9130: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(0x8496F4);
    MEM32(ecx + eax) = esi;
    eax = MEM32(0x8496F8);
    ecx = MEM32(eax + ebp + 0x30);
    edx = MEM32(edi + 0x20);
    eax = MEM32(0x8496F4);
    MEM32(edx + eax + 0x14) = ecx;
    ecx = MEM32(0x8496F8);
    edx = MEM32(edi + 0x20);
    eax = ecx + ebp + 0x14;
    ecx = MEM32(0x8496F4);
    ecx = edx + ecx + 4;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x8496F8);
    edx = MEM32(eax + ebp + 0x10);
    ecx = eax + ebp + 0x14;
    edx = edx + 0x78;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x28);
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
    MEMF(esp + 0x2C) = xmm1; /* movss */
    eax = MEM32(0x8496F8);
    ecx = MEM32(eax + ebp + 0x10);
    if (TEST_Z(MEM8(ecx + 0x137), 2)) goto loc_001E9211; /* je: equal / zero */

loc_001E91F6: ;
    edx = MEM32(0x8496EC);
    eax = MEM32(0x775EE4);
    xmm0 = MEMF(0x648E94); /* movss */
    MEMF(eax + edx + 0x10) = xmm0; /* movss */
    goto loc_001E9247;

loc_001E9211: ;
    xmm0 = MEMF(eax + ebp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    xmm1 = MEMF(0x648E94); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001E9235; /* ja: above (unsigned >) */

loc_001E9232: ;
    xmm0 = xmm1; /* movaps */

loc_001E9235: ;
    ecx = MEM32(0x8496EC);
    edx = MEM32(0x775EE4);
    MEMF(edx + ecx + 0x10) = xmm0; /* movss */

loc_001E9247: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001E9D70(); /* call 0x001E9D70 */

loc_001E9271: ;
    edx = MEM32(0x8496F8);
    eax = MEM32(edx + ebp + 0x10);
    SET_LO16(eax, MEM16(eax + 0x60));
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_001E929B; /* jne: not equal / not zero */

loc_001E928D: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_001E929B: ;
    ebx = ZX16(LO16(eax));
    PUSH32(esp, esi);
    esi = MEM32(0x8496E8);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_001E72A0(); /* call 0x001E72A0 */

loc_001E92AE: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(0x8496F0);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001E96B3; /* jne: not equal / not zero */

loc_001E92BC: ;
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001E92D8; /* je: equal / zero */

loc_001E92C5: ;
    ecx = MEM32(0x8496F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001E92CF: ;
    edi = MEM32(0x8496F0);
    esp = esp + 8;

loc_001E92D8: ;
    eax = MEM32(0x8496F8);
    edx = MEM32(eax + ebp + 0x10);
    SET_LO8(ecx, MEM8(edx + 0x136));
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x6493AC); /* mulss */
    SET_LO8(ecx, LO8(ecx) & 7);
    (void)0; /* cmp LO8(ecx), 4 - flags set for next jcc */
    ecx = MEM32(0x76FE00);
    SET_LO8(edx, (CMP_EQ(LO8(ecx), 4)) ? 1 : 0); /* sete */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM32(0x775EC0) = ebx;
    MEM32(0x775EBC) = ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_001E9395; /* je: equal / zero */

loc_001E931E: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = eax + ebp + 0x20;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(0x76FE14);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x76FE0C);
    PUSH32(esp, 0x76FE20);
    MEM32(0x780AB0) = 0x5F5E04;
    MEM32(0x6C0210) = 0x663;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_001EA150(); /* call 0x001EA150 */

loc_001E9370: ;
    edi = MEM32(0x8496F0);
    esp = esp + 0x18;
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;

loc_001E9395: ;
    edx = MEM32(0x775EC0);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx++;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(0x870EE0);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x775EC0) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = edx;
    MEMF(esp + 0x58) = xmm0; /* movss */
    if (CMP_NE(eax, ebx)) goto loc_001E93D6; /* jne: not equal / not zero */

loc_001E93CF: ;
    esi = 0x870EE4;
    goto loc_001E9401;

loc_001E93D6: ;
    ecx = esp + 0x4C;
    MEM32(esp + 0x24) = ecx;
    (void)0; /* cmp MEM32(eax + 0x4C), ebx - flags set for next jcc */
    esi = eax + 0x58;
    if (CMP_EQ(MEM32(eax + 0x4C), ebx)) goto loc_001E93FB; /* je: equal / zero */

loc_001E93E6: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001EA650(); /* call 0x001EA650 */

loc_001E93F9: ;
    goto loc_001E93FF;

loc_001E93FB: ;
    eax = MEM32(esi);
    MEM32(eax) = ebx;

loc_001E93FF: ;
    esi = MEM32(esi);

loc_001E9401: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_001E94D3; /* je: equal / zero */

loc_001E940B: ;
    goto loc_001E9410;

    /* nop */

loc_001E9410: ;
    SET_LO8(ecx, MEM8(eax + 0xC2));
    esi = esi + 4;
    if (CMP_EQ(LO8(ecx), 1)) goto loc_001E94C9; /* je: equal / zero */

loc_001E9422: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_001E94C9; /* je: equal / zero */

loc_001E9434: ;
    if (CMP_EQ(LO8(ecx), 0x40)) goto loc_001E94C9; /* je: equal / zero */

loc_001E943D: ;
    ecx = MEM32(eax + 0x60);
    if (CMP_EQ(ecx, ebx)) goto loc_001E94C9; /* je: equal / zero */

loc_001E9448: ;
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    if (CMP_EQ(ecx, ebx)) goto loc_001E94C9; /* je: equal / zero */

loc_001E9455: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(0x8496F8);
    edx = edx + ebp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax + 0x20;
    eax = MEM32(eax + 0x140);
    PUSH32(esp, ecx);
    MEM32(0x780AB0) = 0x5F5E04;
    MEM32(0x6C0210) = 0x683;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_001EA150(); /* call 0x001EA150 */

loc_001E94A4: ;
    edi = MEM32(0x8496F0);
    esp = esp + 0x18;
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;

loc_001E94C9: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, ebx)) goto loc_001E9410; /* jne: not equal / not zero */

loc_001E94D3: ;
    edx = MEM32(0x775EC0);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx++;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x775EC0) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x64) = ecx;
    MEMF(esp + 0x68) = xmm0; /* movss */
    if (CMP_NE(eax, ebx)) goto loc_001E9517; /* jne: not equal / not zero */

loc_001E950D: ;
    MEM32(esp + 0x14) = 0x870ED8;
    goto loc_001E9543;

loc_001E9517: ;
    (void)0; /* cmp MEM32(eax + 0x4C), ebx - flags set for next jcc */
    edx = esp + 0x5C;
    esi = eax + 0x58;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi);
    if (CMP_EQ(MEM32(eax + 0x4C), ebx)) goto loc_001E953B; /* je: equal / zero */

loc_001E9529: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EF4C0(); /* call 0x000EF4C0 */

loc_001E9539: ;
    goto loc_001E953D;

loc_001E953B: ;
    MEM32(edx) = ebx;

loc_001E953D: ;
    eax = MEM32(esi);
    MEM32(esp + 0x14) = eax;

loc_001E9543: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    if (CMP_EQ(esi, ebx)) goto loc_001E9629; /* je: equal / zero */

loc_001E9551: ;
    edx = MEM32(esp + 0x14);
    edx = edx + 4;
    eax = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_001E9A80(); /* call 0x001E9A80 */

loc_001E9563: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E961B; /* je: equal / zero */

loc_001E956B: ;
    eax = MEM32(esi + 0x68);
    if (CMP_B(eax, 0x162)) goto loc_001E961B; /* jb: below (unsigned <) */

loc_001E9579: ;
    if (CMP_A(eax, 0x175)) goto loc_001E961B; /* ja: above (unsigned >) */

loc_001E9584: ;
    (void)0; /* cmp MEM8(esi + 0x3C1), LO8(ebx) - flags set for next jcc */
    MEM32(0x780AB0) = 0x5F5E04;
    MEM32(0x6C0210) = 0x6A6;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    if (CMP_NE(MEM8(esi + 0x3C1), LO8(ebx))) goto loc_001E95BE; /* jne: not equal / not zero */

loc_001E95B1: ;
    (void)0; /* cmp MEM32(esi + 0x3C4), ebx - flags set for next jcc */
    eax = 0x5A0350;
    if (CMP_NE(MEM32(esi + 0x3C4), ebx)) goto loc_001E95C0; /* jne: not equal / not zero */

loc_001E95BE: ;
    eax = esi;

loc_001E95C0: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(0x8496F8);
    PUSH32(esp, edx);
    edx = ecx + ebp + 0x20;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4B0);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5D4);
    PUSH32(esp, 0); sub_001EA150(); /* call 0x001EA150 */

loc_001E95F6: ;
    edi = MEM32(0x8496F0);
    esp = esp + 0x18;
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;

loc_001E961B: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax);
    if (CMP_NE(esi, ebx)) goto loc_001E9551; /* jne: not equal / not zero */

loc_001E9629: ;
    edx = MEM32(0x775EC0);
    eax = MEM32(edi + 0xC);
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x775EC0) = edx;
    MEM32(0x775EBC) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_001E9656; /* je: equal / zero */

loc_001E9643: ;
    ecx = MEM32(0x8496F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001E964D: ;
    edi = MEM32(0x8496F0);
    esp = esp + 8;

loc_001E9656: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(0x8496F4);
    ecx = MEM32(esp + 0x18);
    MEM32(eax + edx) = ecx;
    eax = MEM32(0x8496F4);
    edx = MEM32(edi + 0x20);
    ecx = MEM32(eax + edx);
    edx = MEM32(edi + 0x24);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(0x8496F8);
    ebx = MEM32(ecx + eax + 0x70);
    eax = MEM32(edx + ebp + 0x10);
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_001E8BE0(); /* call 0x001E8BE0 */

loc_001E968D: ;
    ecx = MEM32(0x8496F8);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(ecx + ebp + 0x10);
    edx = MEM32(0x8496F4);
    ebx = ebx + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x78;
    eax = edi;
    PUSH32(esp, 0); sub_001E8C80(); /* call 0x001E8C80 */

loc_001E96B0: ;
    esp = esp + 8;

loc_001E96B3: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x775F04);
    eax++;
    ebp = ebp + 0x38;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_001E9121; /* jl: less (signed <) */

loc_001E96CD: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001E96E5; /* jle: less or equal (signed <=) */

loc_001E96D1: ;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001E96E5; /* je: equal / zero */

loc_001E96D8: ;
    edx = MEM32(0x8496F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001E96E2: ;
    esp = esp + 8;

loc_001E96E5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);

loc_001E96E8: ;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_001E96F0
 * Original: 0x001E96F0 - 0x001E9716 (38 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E96F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001E96F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    eax = MEM32(0x775EF0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) { sub_001E9716(); return; } /* jne: not equal / not zero */

loc_001E9707: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001E8660(); /* call 0x001E8660 */

loc_001E970F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9A80
 * Original: 0x001E9A80 - 0x001E9AE1 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E9A80: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_001E9AE1(); return; } /* je: equal / zero */

loc_001E9A87: ;
    ecx = MEM32(eax + 0x258);
    if (TEST_Z(ecx, ecx)) goto loc_001E9A99; /* je: equal / zero */

loc_001E9A91: ;
    edx = MEM32(ecx + 0x28);
    if (TEST_NZ(HI8(edx), 0x40)) goto loc_001E9AA2; /* jne: not equal / not zero */

loc_001E9A99: ;
    if (TEST_Z(MEM8(eax + 0x1B4), 1)) { sub_001E9AE1(); return; } /* je: equal / zero */

loc_001E9AA2: ;
    ecx = MEM32(eax + 0x3C4);
    if (TEST_Z(ecx, ecx)) goto loc_001E9AB6; /* je: equal / zero */

loc_001E9AAC: ;
    SET_LO8(ecx, MEM8(eax + 0x3DC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_001E9AE1(); return; } /* je: equal / zero */

loc_001E9AB6: ;
    ecx = MEM32(eax + 0x4B0);
    if (TEST_Z(ecx, ecx)) { sub_001E9AE1(); return; } /* je: equal / zero */

loc_001E9AC0: ;
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    if (TEST_Z(ecx, ecx)) { sub_001E9AE1(); return; } /* je: equal / zero */

loc_001E9ACD: ;
    eax = MEM32(eax + 0x68);
    if (CMP_B(eax, 0x162)) { sub_001E9AE1(); return; } /* jb: below (unsigned <) */

loc_001E9AD7: ;
    if (CMP_A(eax, 0x175)) { sub_001E9AE1(); return; } /* ja: above (unsigned >) */

loc_001E9ADE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9AF0
 * Original: 0x001E9AF0 - 0x001E9B77 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9AF0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x20);
    edx = MEM32(edi + eax);
    ecx = MEM32(ecx + 0x24);
    esi = MEM32(ecx + edx * 4);
    edi = edi + eax;
    esi = esi + eax;
    eax = MEM32(esi + 0x40);
    if (TEST_Z(eax, eax)) { sub_001E9B77(); return; } /* je: equal / zero */

loc_001E9B12: ;
    PUSH32(esp, eax);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E9B21: ;
    ecx = MEM32(esi + 0x40);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_003E2D30(); /* call 0x003E2D30 */

loc_001E9B2D: ;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001E9B59; /* jbe: below or equal (unsigned <=) */

loc_001E9B3E: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001E9B64; /* ja: above (unsigned >) */

loc_001E9B49: ;
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_001E9B9E(); return; /* tail jmp 0x001E9B9E */

loc_001E9B59: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001E9B67; /* ja: above (unsigned >) */

loc_001E9B64: ;
    xmm0 = xmm1; /* movaps */

loc_001E9B67: ;
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_001E9B9E(); return; /* tail jmp 0x001E9B9E */

}

/**
 * sub_001E9D70
 * Original: 0x001E9D70 - 0x001EA10B (923 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9D70: ;
    esp = esp - 0x108;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8496F0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(0x8496F4);
    ecx = esi;
    PUSH32(esp, 0); sub_001E9AF0(); /* call 0x001E9AF0 */

loc_001E9D9E: ;
    edx = MEM32(0x8496F4);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = 0; /* xor self */
    ecx = 1;
    MEM32(0x819B24) = ecx;
    MEM8(esp + 0x1B) = LO8(eax);
    MEM8(0x84B538) = LO8(ecx);
    ecx = MEM32(esi + 0x20);
    MEM32(0x84B544) = eax;
    MEM32(0x84B55C) = eax;
    MEM32(0x84B548) = eax;
    MEM32(0x84B560) = eax;
    eax = ecx + edx + 4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ebx = esp + 0x5C;
    esi = esp + 0x24;
    eax = esp + 0x4C;
    MEM32(0x780AB0) = 0x5F5E04;
    MEM32(0x6C0210) = 0x82D;
    MEM32(0x74FA2C) = 0x4000;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_001E9E38: ;
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E9E5A; /* je: equal / zero */

loc_001E9E3F: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_001E9E51: ;
    esp = esp + 8;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001E9E5A: ;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    edx = esp + 0x40;
    edi = 0x870ED4;
    MEM32(esp + 0x68) = 0x5D4C44;
    MEM32(esp + 0xBC) = 1;
    MEM32(esp + 0x6C) = 5;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    PUSH32(esp, 0); sub_001EA490(); /* call 0x001EA490 */

loc_001E9E9B: ;
    esi = eax;
    ecx = MEM32(esi);
    if (CMP_EQ(ecx, ebx)) goto loc_001E9FCF; /* je: equal / zero */

loc_001E9EA7: ;
    goto loc_001E9EB0;

    /* nop */

loc_001E9EB0: ;
    edx = MEM32(ecx + 0x5D4);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x812A18) = edx;
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    SET_LO8(eax, MEM8(ecx + 0x3C1));
    esi = esi + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001E9EF2; /* jne: not equal / not zero */

loc_001E9EE5: ;
    (void)0; /* cmp MEM32(ecx + 0x3C4), ebx - flags set for next jcc */
    eax = 0x5A0350;
    if (CMP_NE(MEM32(ecx + 0x3C4), ebx)) goto loc_001E9EF4; /* jne: not equal / not zero */

loc_001E9EF2: ;
    eax = ecx;

loc_001E9EF4: ;
    ecx = MEM32(ecx + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_001E9F18: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001E9FC5; /* je: equal / zero */

loc_001E9F23: ;
    eax = esp + 0x24;
    ecx = esp + 0x4C;
    MEM8(esp + 0xF) = 1;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x60) = ecx;
    ecx = 0x76FC40;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x60);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x4C;
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
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001E9FC5; /* jbe: below or equal (unsigned <=) */

loc_001E9FA2: ;
    eax = MEM32(0x76FC40);
    ecx = MEM32(0x76FC44);
    edx = MEM32(0x76FC48);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_001E9FC5: ;
    ecx = MEM32(esi);
    if (CMP_NE(ecx, ebx)) goto loc_001E9EB0; /* jne: not equal / not zero */

loc_001E9FCF: ;
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    edx = esp + 0x40;
    edi = 0x870EE0;
    MEM32(esp + 0xC0) = 0x5D4C44;
    MEM32(esp + 0x114) = ebx;
    PUSH32(esp, 0); sub_001EA570(); /* call 0x001EA570 */

loc_001E9FFB: ;
    esi = eax;
    eax = MEM32(esi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001EA0B9; /* je: equal / zero */

loc_001EA008: ;
    goto loc_001EA010;

    /* nop */

loc_001EA010: ;
    ecx = MEM32(eax + 0x140);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x812A18) = ecx;
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    edx = MEM32(eax + 0x60);
    ecx = MEM32(edx + 0x24);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    esi = esi + 4;
    if (CMP_EQ(ecx, ebx)) goto loc_001EA0AF; /* je: equal / zero */

loc_001EA04B: ;
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    eax = eax + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_001EA063: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001EA0AF; /* je: equal / zero */

loc_001EA06A: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x76FC40);
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_001EA07E: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001EA0AF; /* jbe: below or equal (unsigned <=) */

loc_001EA08C: ;
    ecx = MEM32(0x76FC40);
    edx = MEM32(0x76FC44);
    eax = MEM32(0x76FC48);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;

loc_001EA0AF: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, ebx)) goto loc_001EA010; /* jne: not equal / not zero */

loc_001EA0B9: ;
    ecx = MEM32(0x8496F0);
    eax = MEM32(0x8496F4);
    esi = MEM32(ecx + 0x20);
    esi = esi + eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_001EA0F3: ;
    eax = MEM32(esi + 0x14);
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) { sub_001EA10B(); return; } /* jne: not equal / not zero */

loc_001EA0FD: ;
    xmm0 = xmm0 / MEMF(esp + 0x54); /* divss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    g_seh_ebp = ebp; sub_001EA111(); return; /* tail jmp 0x001EA111 */

}

/**
 * sub_001EA150
 * Original: 0x001EA150 - 0x001EA257 (263 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA150: ;
    ecx = MEM32(0x8496F4);
    MEM32(0x812A18) = eax;
    eax = MEM32(0x8496F0);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x24);
    edx = MEM32(ecx + edx);
    edx = MEM32(eax + edx * 4);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    eax = 1;
    PUSH32(esp, esi);
    esi = MEM32(edx + ecx + 0x70);
    ebx = 0; /* xor self */
    MEM32(0x84B548) = eax;
    MEM32(0x84B560) = eax;
    SET_LO8(eax, MEM8(esp + 0x40));
    esi = esi + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM32(0x84B56C) = ebx;
    MEM32(0x819B24) = 2;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_001EA257(); return; } /* je: equal / zero */

loc_001EA1BB: ;
    eax = esp + 0x14;
    MEM32(esp + 0x44) = eax;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001EA24A; /* jp: parity */

loc_001EA1FD: ;
    ecx = esp + 0x14;
    edx = esp + 0x20;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x44) = edx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_001EA245: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_001EA288(); return; /* tail jmp 0x001EA288 */

loc_001EA24A: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_seh_ebp = ebp; sub_001EA277(); return; /* tail jmp 0x001EA277 */

}

/**
 * sub_001EA310
 * Original: 0x001EA310 - 0x001EA389 (121 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001EA310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10;
    eax = MEM32(0x775F04);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001EA383; /* jle: less or equal (signed <=) */

loc_001EA326: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = 0; /* xor self */
    goto loc_001EA350;

    /* nop */

loc_001EA350: ;
    eax = MEM32(0x8496F8);
    eax = MEM32(esi + eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003EAFB0(); /* call 0x003EAFB0 */

loc_001EA373: ;
    eax = MEM32(0x775F04);
    esp = esp + 0x20;
    edi++;
    esi = esi + 0x38;
    if (CMP_L(edi, eax)) goto loc_001EA350; /* jl: less (signed <) */

loc_001EA383: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA390
 * Original: 0x001EA390 - 0x001EA414 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA390(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EA390: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001EA414(); return; } /* je: equal / zero */

loc_001EA3AB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001EA3BF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EA3F4; /* je: equal / zero */

loc_001EA3CA: ;
    ecx = 0x75DF48;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001EA3D4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001EA3F1: ;
    esp = esp + 0x14;

loc_001EA3F4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001EA40D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001EA440
 * Original: 0x001EA440 - 0x001EA48A (74 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA440: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_001EA45B; /* je: equal / zero */

loc_001EA450: ;
    if (CMP_EQ(MEM32(eax), ebp)) goto loc_001EA45B; /* je: equal / zero */

loc_001EA454: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_001EA450; /* jne: not equal / not zero */

loc_001EA45B: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(eax, ecx)) goto loc_001EA485; /* je: equal / zero */

loc_001EA461: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001EA46A: ;
    ecx = MEM32(edi + 8);
    eax = esi + 8;
    if (CMP_EQ(eax, ecx)) goto loc_001EA47F; /* je: equal / zero */

loc_001EA474: ;
    if (CMP_EQ(MEM32(eax), ebp)) goto loc_001EA47F; /* je: equal / zero */

loc_001EA478: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_001EA474; /* jne: not equal / not zero */

loc_001EA47F: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = eax;
    if (CMP_NE(eax, ecx)) goto loc_001EA461; /* jne: not equal / not zero */

loc_001EA485: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA490
 * Original: 0x001EA490 - 0x001EA4A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA490(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EA490: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_001EA4A2(); return; } /* jne: not equal / not zero */

loc_001EA499: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA570
 * Original: 0x001EA570 - 0x001EA582 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA570(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EA570: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_001EA582(); return; } /* jne: not equal / not zero */

loc_001EA579: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA650
 * Original: 0x001EA650 - 0x001EA89C (588 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA650: ;
    esp = esp - 0x454;
    eax = MEM32(esp + 0x460);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x460);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001EA679; /* je: equal / zero */

loc_001EA673: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001EA679: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_001EA686: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_001EA7AA; /* jne: not equal / not zero */

loc_001EA699: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001EA870; /* jbe: below or equal (unsigned <=) */

loc_001EA6A1: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;
    /* nop */

loc_001EA6C0: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x470);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x46C);
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_001EA795; /* jbe: below or equal (unsigned <=) */

loc_001EA75F: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001EA795; /* jne: not equal / not zero */

loc_001EA76B: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_001EA795; /* je: equal / zero */

loc_001EA779: ;
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001EA795; /* je: equal / zero */

loc_001EA780: ;
    edx = MEM32(eax + 0x24);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_001EA795; /* je: equal / zero */

loc_001EA78D: ;
    MEM32(esp + 0x470) = MEM32(esp + 0x470) + 4;

loc_001EA795: ;
    ecx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, ecx)) goto loc_001EA6C0; /* jl: less (signed <) */

loc_001EA7A5: ;
    goto loc_001EA870;

loc_001EA7AA: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001EA870; /* jbe: below or equal (unsigned <=) */

loc_001EA7B2: ;
    eax = esp + 0x58;
    edx = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_001EA7C8: ;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esp + 0x46C);
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_001EA860; /* jbe: below or equal (unsigned <=) */

loc_001EA85F: ;
    ebx++;

loc_001EA860: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_001EA7C8; /* jl: less (signed <) */

loc_001EA870: ;
    ebp = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_001EA686; /* jne: not equal / not zero */

loc_001EA87D: ;
    eax = MEM32(esp + 0x470);
    edx = MEM32(esp + 0x54);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EA8A0
 * Original: 0x001EA8A0 - 0x001EA9F2 (338 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA8A0: ;
    esp = esp - 0x428;
    eax = MEM32(esp + 0x434);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x434);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001EA8C9; /* je: equal / zero */

loc_001EA8C3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001EA8C9: ;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x10) = 1;
    /* nop */

loc_001EA8E0: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_001EA96B; /* jne: not equal / not zero */

loc_001EA8ED: ;
    ebx = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001EA9BE; /* jbe: below or equal (unsigned <=) */

loc_001EA8F7: ;
    esi = esi + 0x10;
    /* nop */

loc_001EA900: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x444);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x440);
    eax = esp + 0x18;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_001EA93D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EA95D; /* je: equal / zero */

loc_001EA941: ;
    edi = MEM32(esi);
    eax = MEM32(esp + 0x448);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002A3580(); /* call 0x002A3580 */

loc_001EA951: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001EA95D; /* jne: not equal / not zero */

loc_001EA955: ;
    MEM32(esp + 0x444) = MEM32(esp + 0x444) + 4;

loc_001EA95D: ;
    eax = ZX8(MEM8(ebp + 0x14));
    ebx++;
    esi = esi + 0x20;
    if (CMP_L(ebx, eax)) goto loc_001EA900; /* jl: less (signed <) */

loc_001EA969: ;
    goto loc_001EA9BE;

loc_001EA96B: ;
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001EA9BE; /* jbe: below or equal (unsigned <=) */

loc_001EA971: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + ecx * 4 + 0x38) = esi;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x440);
    edx = esp + 0x28;
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_001EA9AA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EA9B2; /* je: equal / zero */

loc_001EA9AE: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_001EA9B2: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_001EA971; /* jl: less (signed <) */

loc_001EA9BE: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + eax * 4 + 0x34);
    eax--;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_001EA8E0; /* jne: not equal / not zero */

loc_001EA9D3: ;
    eax = MEM32(esp + 0x444);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x428;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EAA00
 * Original: 0x001EAA00 - 0x001EAB52 (338 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAA00: ;
    esp = esp - 0x428;
    eax = MEM32(esp + 0x434);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x434);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001EAA29; /* je: equal / zero */

loc_001EAA23: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001EAA29: ;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x10) = 1;
    /* nop */

loc_001EAA40: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_001EAACB; /* jne: not equal / not zero */

loc_001EAA4D: ;
    ebx = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001EAB1E; /* jbe: below or equal (unsigned <=) */

loc_001EAA57: ;
    esi = esi + 0x10;
    /* nop */

loc_001EAA60: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x444);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x440);
    eax = esp + 0x18;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_001EAA9D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EAABD; /* je: equal / zero */

loc_001EAAA1: ;
    edi = MEM32(esi);
    eax = MEM32(esp + 0x448);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002A3580(); /* call 0x002A3580 */

loc_001EAAB1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001EAABD; /* jne: not equal / not zero */

loc_001EAAB5: ;
    MEM32(esp + 0x444) = MEM32(esp + 0x444) + 4;

loc_001EAABD: ;
    eax = ZX8(MEM8(ebp + 0x14));
    ebx++;
    esi = esi + 0x20;
    if (CMP_L(ebx, eax)) goto loc_001EAA60; /* jl: less (signed <) */

loc_001EAAC9: ;
    goto loc_001EAB1E;

loc_001EAACB: ;
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001EAB1E; /* jbe: below or equal (unsigned <=) */

loc_001EAAD1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + ecx * 4 + 0x38) = esi;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x440);
    edx = esp + 0x28;
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_001EAB0A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EAB12; /* je: equal / zero */

loc_001EAB0E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_001EAB12: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_001EAAD1; /* jl: less (signed <) */

loc_001EAB1E: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + eax * 4 + 0x34);
    eax--;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_001EAA40; /* jne: not equal / not zero */

loc_001EAB33: ;
    eax = MEM32(esp + 0x444);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x428;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EAB60
 * Original: 0x001EAB60 - 0x001EACE1 (385 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAB60: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x52);
    eax = 0x120;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001EAB7A: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001EACDB; /* je: equal / zero */

loc_001EAB87: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(ebp + edx * 4 + 0x58C) = esi;
    ecx = 0x24;
    edi = esi + 0x30;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    (void)0; /* test MEM32(ebp + 0x200), 0x4000000 - flags set for next jcc */
    MEM32(0x780AB0) = 0x5F5E38;
    MEM32(0x6C0210) = 0x2D;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    POP32(esp, edi);
    if (TEST_Z(MEM32(ebp + 0x200), 0x4000000)) goto loc_001EABF0; /* je: equal / zero */

loc_001EABD1: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_001EABEC; /* je: equal / zero */

loc_001EABDB: ;
    xmm0 = MEMF(eax + 0x644); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_001EABF0; /* ja: above (unsigned >) */

loc_001EABEC: ;
    SET_LO8(eax, 1);
    goto loc_001EABF2;

loc_001EABF0: ;
    SET_LO8(eax, 0); /* xor self */

loc_001EABF2: ;
    PUSH32(esp, 0);
    edx = MEM32(ebp + edx * 4 + 0x58C);
    PUSH32(esp, 0);
    eax = ZX8(LO8(eax));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x88);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x80);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x7C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = edx + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_001EAC37: ;
    eax = MEM32(0x590638);
    MEM32(esi + 0xD0) = eax;
    ecx = MEM32(0x59063C);
    MEM32(esi + 0xD4) = ecx;
    eax = 0xFF0F0F0Fu;
    MEM32(esi + 0xCC) = eax;
    edx = MEM32(0x590640);
    MEM32(esi + 0xE8) = edx;
    ecx = MEM32(0x590644);
    MEM32(esi + 0xEC) = ecx;
    MEM32(esi + 0xE4) = eax;
    edx = MEM32(0x590648);
    MEM32(esi + 0x100) = edx;
    ecx = MEM32(0x59064C);
    MEM32(esi + 0x104) = ecx;
    MEM32(esi + 0xFC) = eax;
    edx = MEM32(0x590650);
    MEM32(esi + 0x118) = edx;
    ecx = MEM32(0x590654);
    esp = esp + 0x38;
    MEM32(0x780AB0) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = 0;
    MEM32(esi + 0x11C) = ecx;
    MEM32(esi + 0x114) = eax;

loc_001EACDB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001EACF0
 * Original: 0x001EACF0 - 0x001EAEF7 (519 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EACF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EACF0: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001EAD0D; /* je: equal / zero */

loc_001EAD01: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001EAD07: ;
    MEM32(0x771760) = esi;

loc_001EAD0D: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001EAD30: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001EAD49: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001EAD63; /* je: equal / zero */

loc_001EAD57: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001EAD5D: ;
    MEM32(0x77182C) = esi;

loc_001EAD63: ;
    eax = MEM32(0x771828);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001EAD7A; /* je: equal / zero */

loc_001EAD6E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001EAD74: ;
    MEM32(0x771828) = ebx;

loc_001EAD7A: ;
    eax = MEM32(0x771824);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001EADA1; /* je: equal / zero */

loc_001EAD89: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EAD95: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001EADA1: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001EADC1; /* je: equal / zero */

loc_001EADA9: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EADB5: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001EADC1: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001EADD5; /* je: equal / zero */

loc_001EADC9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001EADCF: ;
    MEM32(0x77181C) = edi;

loc_001EADD5: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001EADFB; /* je: equal / zero */

loc_001EADE3: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EADEF: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001EADFB: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_001EAE1B; /* je: equal / zero */

loc_001EAE03: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EAE0F: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_001EAE1B: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001EAE39; /* je: equal / zero */

loc_001EAE23: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001EAE39: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001EAE41: ;
    (void)0; /* cmp MEM32(0x7717E8), edi - flags set for next jcc */
    eax = 0x800;
    if (CMP_EQ(MEM32(0x7717E8), edi)) goto loc_001EAE60; /* je: equal / zero */

loc_001EAE4E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001EAE60: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_001EAE7A; /* je: equal / zero */

loc_001EAE68: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_001EAE7A: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(0x77180C);
    ecx = ecx | 0x400;
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    MEM32(0x547384) = ebx;
    POP32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_001EAEB9; /* je: equal / zero */

loc_001EAEA1: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EAEAD: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001EAEB9: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001EAEDF; /* je: equal / zero */

loc_001EAEC7: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EAED3: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001EAEDF: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_001EAEF4; /* je: equal / zero */

loc_001EAEE7: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001EAEEE: ;
    MEM32(0x77175C) = ebx;

loc_001EAEF4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EAF00
 * Original: 0x001EAF00 - 0x001EAF15 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAF00: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x75C064));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(LO8(eax), LO8(ebx))) { sub_001EAF15(); return; } /* ja: above (unsigned >) */

loc_001EAF0E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001EAFA5(); return; /* tail jmp 0x001EAFA5 */

}

/**
 * sub_001EB210
 * Original: 0x001EB210 - 0x001EB4D0 (704 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB210(void)
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

loc_001EB210: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 0x4C;
    /* comiss xmm0, MEMF(0x64971C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x64971C))) goto loc_001EB4CC; /* ja: above (unsigned >) */

loc_001EB226: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    /* comiss xmm0, MEMF(0x649718) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649718))) goto loc_001EB4CC; /* ja: above (unsigned >) */

loc_001EB239: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 0x58) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x58))) goto loc_001EB4CC; /* ja: above (unsigned >) */

loc_001EB247: ;
    /* comiss xmm0, MEMF(esp + 0x5C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x5C))) goto loc_001EB4CC; /* ja: above (unsigned >) */

loc_001EB252: ;
    eax = MEM32(esp + 0x60);
    if (CMP_B(eax, 1)) goto loc_001EB4CC; /* jb: below (unsigned <) */

loc_001EB25F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x68);
    if (CMP_B(ebp, 1)) goto loc_001EB4CB; /* jb: below (unsigned <) */

loc_001EB26D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    PUSH32(esp, edi);
    if (CMP_GE(eax & eax, 0)) goto loc_001EB282; /* jge: greater or equal (signed >=) */

loc_001EB27C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001EB282: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    /* FPU: fdivr dword ptr [esp + 0x68] */
    MEM32(esp + 0x28) = ebp;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(ebp & ebp, 0)) goto loc_001EB29C; /* jge: greater or equal (signed >=) */

loc_001EB296: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001EB29C: ;
    /* FPU: fdivr dword ptr [esp + 0x6c] */
    eax = MEM32(0x5499E8);
    edi = MEM32(eax + 0x1A04);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(edi, edi)) goto loc_001EB2F3; /* je: equal / zero */

loc_001EB2CF: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001EB2F1; /* jne: not equal / not zero */

loc_001EB2D8: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001EB2F1; /* jne: not equal / not zero */

loc_001EB2E4: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001EB2F1; /* je: equal / zero */

loc_001EB2EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001EB2F1: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001EB2F3: ;
    esi = esp + 0x40;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001EB2FE: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = ecx;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = ecx;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = ecx;
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_001EB32D: ;
    edx = eax;
    eax = MEM32(esp + 0x60);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_001EB348: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    edx = 0x20;
    PUSH32(esp, 1);
    eax = edx;
    MEM32(esp + 0x4C) = 0x40001;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x50) = esi;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_001EB377: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001EB385: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001EB38F; /* jne: not equal / not zero */

loc_001EB38B: ;
    ebx = 0; /* xor self */
    goto loc_001EB3CE;

loc_001EB38F: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001EB39A: ;
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_001EB3AD; /* jne: not equal / not zero */

loc_001EB3A0: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001EB3AB: ;
    goto loc_001EB3CE;

loc_001EB3AD: ;
    edx = MEM32(esp + 0x1C);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = ebx;
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    ebx = esi;

loc_001EB3CE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_003EAF20(); /* call 0x003EAF20 */

loc_001EB3E0: ;
    esp = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001EB3E9: ;
    eax = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(ebp & ebp, 0)) goto loc_001EB4C2; /* jbe: below or equal (unsigned <=) */

loc_001EB3F7: ;
    ecx = MEM32(esp + 0x70);
    esi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_001EB4B5; /* jbe: below or equal (unsigned <=) */

loc_001EB405: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001EB417; /* jge: greater or equal (signed >=) */

loc_001EB411: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001EB417: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    ebp = MEM32(esp + 0x18);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x24);
    /* nop */

loc_001EB440: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_001EB452; /* jge: greater or equal (signed >=) */

loc_001EB44C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001EB452: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    ecx = MEM32(esp + 0x28);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00358970(); /* call 0x00358970 */

loc_001EB49E: ;
    eax = MEM32(esp + 0xA4);
    esp = esp + 0x34;
    esi++;
    if (CMP_B(esi, eax)) goto loc_001EB440; /* jb: below (unsigned <) */

loc_001EB4AD: ;
    ebp = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x1C);

loc_001EB4B5: ;
    eax++;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_B(eax, ebp)) goto loc_001EB3F7; /* jb: below (unsigned <) */

loc_001EB4C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001EB4C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001EB4CB: ;
    POP32(esp, ebp);

loc_001EB4CC: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001EB4D0
 * Original: 0x001EB4D0 - 0x001EB673 (419 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB4D0: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_001EB672; /* je: equal / zero */

loc_001EB4DD: ;
    eax = MEM32(0x849710);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_001EB505; /* jne: not equal / not zero */

loc_001EB4E7: ;
    edi = 0x849710;
    eax = 0x5F5F80;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB4F6: ;
    eax = MEM32(0x849710);
    ecx = 0x84972C;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB505: ;
    eax = MEM32(0x849714);
    if (TEST_NZ(eax, eax)) goto loc_001EB52C; /* jne: not equal / not zero */

loc_001EB50E: ;
    edi = 0x849714;
    eax = 0x5F5F54;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB51D: ;
    eax = MEM32(0x849714);
    ecx = 0x849730;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB52C: ;
    eax = MEM32(0x849718);
    if (TEST_NZ(eax, eax)) goto loc_001EB553; /* jne: not equal / not zero */

loc_001EB535: ;
    edi = 0x849718;
    eax = 0x5F5F28;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB544: ;
    eax = MEM32(0x849718);
    ecx = 0x849734;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB553: ;
    eax = MEM32(0x84971C);
    if (TEST_NZ(eax, eax)) goto loc_001EB57A; /* jne: not equal / not zero */

loc_001EB55C: ;
    edi = 0x84971C;
    eax = 0x5F5EFC;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB56B: ;
    eax = MEM32(0x84971C);
    ecx = 0x849738;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB57A: ;
    eax = MEM32(0x849720);
    if (TEST_NZ(eax, eax)) goto loc_001EB5A1; /* jne: not equal / not zero */

loc_001EB583: ;
    edi = 0x849720;
    eax = 0x5F5ED0;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB592: ;
    eax = MEM32(0x849720);
    ecx = 0x84973C;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB5A1: ;
    eax = MEM32(0x849724);
    if (TEST_NZ(eax, eax)) goto loc_001EB5C8; /* jne: not equal / not zero */

loc_001EB5AA: ;
    edi = 0x849724;
    eax = 0x5F5EA4;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB5B9: ;
    eax = MEM32(0x849724);
    ecx = 0x849740;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB5C8: ;
    eax = MEM32(0x849728);
    if (TEST_NZ(eax, eax)) goto loc_001EB5EF; /* jne: not equal / not zero */

loc_001EB5D1: ;
    edi = 0x849728;
    eax = 0x5F5E78;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_001EB5E0: ;
    eax = MEM32(0x849728);
    ecx = 0x849744;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001EB5EF: ;
    ecx = MEM32(0x84974C);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_A(ecx, 5)) goto loc_001EB62C; /* ja: above (unsigned >) */

loc_001EB5FD: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1EB674); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001EB604u) goto loc_001EB604;
    if (_jt == 0x001EB60Bu) goto loc_001EB60B;
    if (_jt == 0x001EB612u) goto loc_001EB612;
    if (_jt == 0x001EB619u) goto loc_001EB619;
    if (_jt == 0x001EB620u) goto loc_001EB620;
    if (_jt == 0x001EB627u) goto loc_001EB627;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001EB604: ;
    eax = MEM32(0x849730);
    goto loc_001EB62C;

loc_001EB60B: ;
    eax = MEM32(0x849734);
    goto loc_001EB62C;

loc_001EB612: ;
    eax = MEM32(0x849738);
    goto loc_001EB62C;

loc_001EB619: ;
    eax = MEM32(0x84973C);
    goto loc_001EB62C;

loc_001EB620: ;
    eax = MEM32(0x849740);
    goto loc_001EB62C;

loc_001EB627: ;
    eax = MEM32(0x849744);

loc_001EB62C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x43AF0000);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_001EB64B: ;
    eax = MEM32(0x84972C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x44048000);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_001EB66F: ;
    esp = esp + 0x30;

loc_001EB672: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB690
 * Original: 0x001EB690 - 0x001EB738 (168 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB690(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001EB690: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    xmm0 = MEMF(0x7F9F58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp - 8;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001EB6C2; /* je: equal / zero */

loc_001EB6B8: ;
    ecx = MEM32(0x849ACC);
    if (TEST_NZ(ecx, ecx)) goto loc_001EB6E2; /* jne: not equal / not zero */

loc_001EB6C2: ;
    SET_LO8(ecx, MEM8(0x862D08));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001EB6E2; /* jne: not equal / not zero */

loc_001EB6CC: ;
    xmm1 = MEMF(0x875674); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 > xmm1)) goto loc_001EB6F6; /* ja: above (unsigned >) */

loc_001EB6DD: ;
    xmm1 = xmm3; /* movaps */
    goto loc_001EB6F6;

loc_001EB6E2: ;
    xmm1 = MEMF(0x875674); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 > xmm2)) goto loc_001EB6F6; /* ja: above (unsigned >) */

loc_001EB6F3: ;
    xmm1 = xmm2; /* movaps */

loc_001EB6F6: ;
    xmm0 = MEMF(eax + 0x1018); /* movss */
    /* comiss xmm0, MEMF(eax + 0x1014) - sets EFLAGS */
    MEMF(0x875674) = xmm1; /* movss */
    xmm1 = xmm1 * MEMF(0x648EEC); /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    if ((xmm0 <= MEMF(eax + 0x1014))) { sub_001EB738(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EB71D: ;
    fp_push(MEMF(eax + 0x1014)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001EB732: ;
    MEM8(esi) = LO8(eax);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001EB7C0
 * Original: 0x001EB7C0 - 0x001EB851 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB7C0: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x9C);
    PUSH32(esp, esi);
    eax = edx;
    PUSH32(esp, edi);
    esi = eax + 1;
    ebx = 0; /* xor self */

loc_001EB7D8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_001EB7D8; /* jne: not equal / not zero */

loc_001EB7DF: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E4);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_001EB7F5: ;
    ecx = MEM32(0x7FA1F8);
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(ecx * 4 + 0x69CF90);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0); sub_001F5750(); /* call 0x001F5750 */

loc_001EB81B: ;
    esi = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x20);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_001EB837: ;
    esp = esp + 0x18;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, 0x800);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_001EB851(); return; } /* jne: not equal / not zero */

loc_001EB844: ;
    PUSH32(esp, 0x5F3804);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001EB84F: ;
    g_seh_ebp = ebp; sub_001EB863(); return; /* tail jmp 0x001EB863 */

}

/**
 * sub_001EB9E0
 * Original: 0x001EB9E0 - 0x001EBAA2 (194 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB9E0(void)
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

loc_001EB9E0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = esp + 0x30;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001EB9FC: ;
    eax = MEM32(esp + 0x30);
    MEM32(ebp) = 0;
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) goto loc_001EBA87; /* ja: above (unsigned >) */

loc_001EBA12: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1EBAA4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001EBA19u) goto loc_001EBA19;
    if (_jt == 0x001EBA21u) goto loc_001EBA21;
    if (_jt == 0x001EBA78u) goto loc_001EBA78;
    if (_jt == 0x001EBA80u) goto loc_001EBA80;
    if (_jt == 0x001EBA87u) goto loc_001EBA87;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001EBA19: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(ebp) = ecx;
    goto loc_001EBA27;

loc_001EBA21: ;
    edx = MEM32(eax + 0x1C);

loc_001EBA24: ;
    MEM32(ebp) = edx;

loc_001EBA27: ;
    edi = MEM32(ebp);
    if (TEST_Z(edi, edi)) goto loc_001EBA8E; /* je: equal / zero */

loc_001EBA2E: ;
    PUSH32(esp, ebx);
    esi = esp + 0x10;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001EBA3A: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    eax = MEM32(esp + 0x24);
    if (CMP_GE(eax & eax, 0)) goto loc_001EBA4C; /* jge: greater or equal (signed >=) */

loc_001EBA46: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001EBA4C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(ebp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001EBA67; /* jge: greater or equal (signed >=) */

loc_001EBA61: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001EBA67: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001EBA78: ;
    eax = MEM32(eax + 0x1C);
    MEM32(ebp) = eax;
    goto loc_001EBA27;

loc_001EBA80: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(ecx);
    goto loc_001EBA24;

loc_001EBA87: ;
    MEM32(ebp) = 0;

loc_001EBA8E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 8) = xmm0; /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001EBAC0
 * Original: 0x001EBAC0 - 0x001EBADF (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBAC0: ;
    ecx = MEM32(0x84A144);
    esp = esp - 0x20;
    if (TEST_NZ(ecx, ecx)) { sub_001EBADF(); return; } /* jne: not equal / not zero */

loc_001EBACD: ;
    xmm2 = MEMF(0x64A8B0); /* movss */
    xmm3 = MEMF(0x649420); /* movss */
    g_seh_ebp = ebp; sub_001EBAEF(); return; /* tail jmp 0x001EBAEF */

}

/**
 * sub_001EBB80
 * Original: 0x001EBB80 - 0x001EBCC7 (327 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB80(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBB80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = edi + 5;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001EBB91: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    xmm1 = MEMF(esp + 0x10); /* movss */
    eax = eax + 4;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x24); /* movss */
    eax = eax + 4;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    xmm5 = MEMF(esp + 0x14); /* movss */
    eax = eax + 4;
    edi = edi << 0x12;
    eax = eax + 4;
    edi = edi + 0x40001818;
    MEM32(eax + -24) = edi;
    MEMF(eax + -20) = xmm1; /* movss */
    MEMF(eax + -16) = xmm2; /* movss */
    MEMF(eax + -12) = xmm0; /* movss */
    ecx = MEM32(ebp);
    MEM32(eax + -8) = ecx;
    MEMF(eax + -4) = xmm3; /* movss */
    MEMF(eax) = xmm4; /* movss */
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    edx = MEM32(ebx);
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    ecx = MEM32(ebx);
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    edx = MEM32(ebp);
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBCD0
 * Original: 0x001EBCD0 - 0x001EBD18 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBCD0: ;
    ecx = MEM32(0x5499E8);
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1A04);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_001EBD0A; /* je: equal / zero */

loc_001EBCE6: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001EBD08; /* jne: not equal / not zero */

loc_001EBCEF: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001EBD08; /* jne: not equal / not zero */

loc_001EBCFB: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001EBD08; /* je: equal / zero */

loc_001EBD02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001EBD08: ;
    MEM32(esi) = MEM32(esi) + 1;

loc_001EBD0A: ;
    ecx = MEM32(ecx + 0x1A08);
    if (TEST_NZ(ecx, ecx)) { sub_001EBD18(); return; } /* jne: not equal / not zero */

loc_001EBD14: ;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_001EBD3E(); return; /* tail jmp 0x001EBD3E */

}

/**
 * sub_001EBF00
 * Original: 0x001EBF00 - 0x001EC23D (829 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBF00: ;
    eax = MEM32(0x771760);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x6B842C);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_001EBF22; /* je: equal / zero */

loc_001EBF16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001EBF1C: ;
    MEM32(0x771760) = esi;

loc_001EBF22: ;
    eax = MEM32(0x77175C);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001EBF3A; /* je: equal / zero */

loc_001EBF2D: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001EBF34: ;
    MEM32(0x77175C) = edi;

loc_001EBF3A: ;
    eax = MEM32(0x849750);
    (void)0; /* cmp MEM32(0x771764), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771764), eax)) goto loc_001EBF57; /* je: equal / zero */

loc_001EBF49: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001EBF51: ;
    MEM32(0x771764) = esi;

loc_001EBF57: ;
    eax = MEM32(0x771824);
    ebp = 1;
    if (CMP_EQ(eax, ebp)) goto loc_001EBF7D; /* je: equal / zero */

loc_001EBF65: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EBF71: ;
    MEM32(0x549AE4) = ebp;
    MEM32(0x771824) = ebp;

loc_001EBF7D: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_001EBF9D; /* je: equal / zero */

loc_001EBF85: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EBF91: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_001EBF9D: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(0x771804);
    ecx = ecx | 0x1000;
    esi = 0x1010101;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B9C) = ebp;
    if (CMP_EQ(eax, esi)) goto loc_001EBFDB; /* je: equal / zero */

loc_001EBFC3: ;
    edx = esi;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EBFCF: ;
    MEM32(0x549B04) = esi;
    MEM32(0x771804) = esi;

loc_001EBFDB: ;
    if (CMP_EQ(MEM32(0x771828), edi)) goto loc_001EBFEF; /* je: equal / zero */

loc_001EBFE3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001EBFE9: ;
    MEM32(0x771828) = edi;

loc_001EBFEF: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001EC015; /* je: equal / zero */

loc_001EBFFD: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EC009: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001EC015: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001EC02F; /* je: equal / zero */

loc_001EC023: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001EC029: ;
    MEM32(0x77182C) = esi;

loc_001EC02F: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_001EC04D; /* je: equal / zero */

loc_001EC037: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_001EC04D: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_001EC073; /* je: equal / zero */

loc_001EC05B: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EC067: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001EC073: ;
    if (CMP_EQ(MEM32(0x771800), edi)) goto loc_001EC087; /* je: equal / zero */

loc_001EC07B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001EC081: ;
    MEM32(0x771800) = edi;

loc_001EC087: ;
    (void)0; /* cmp MEM32(0x77181C), edi - flags set for next jcc */
    ebx = 2;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001EC112; /* je: equal / zero */

loc_001EC094: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001EC0B0; /* jb: below (unsigned <) */

loc_001EC0A1: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001EC0B0: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, ebx)) goto loc_001EC10C; /* jne: not equal / not zero */

loc_001EC0DD: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_001EC0E2: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_001EC0E7: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001EC0FD; /* jb: below (unsigned <) */

loc_001EC0EE: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001EC0FD: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_001EC105: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_001EC10A: ;
    MEM32(esi) = eax;

loc_001EC10C: ;
    MEM32(0x77181C) = edi;

loc_001EC112: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001EC132; /* je: equal / zero */

loc_001EC11A: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001EC126: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001EC132: ;
    edx = MEM32(0x7717E4);
    eax = 4;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(edx, eax)) goto loc_001EC156; /* je: equal / zero */

loc_001EC146: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001EC156: ;
    if (CMP_EQ(MEM32(0x7717C4), edi)) goto loc_001EC170; /* je: equal / zero */

loc_001EC15E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = edi;
    MEM32(0x7717C4) = edi;

loc_001EC170: ;
    if (CMP_EQ(MEM32(0x7717B4), ebx)) goto loc_001EC18A; /* je: equal / zero */

loc_001EC178: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54736C) = ebx;
    MEM32(0x7717B4) = ebx;

loc_001EC18A: ;
    if (CMP_EQ(MEM32(0x7717A4), eax)) goto loc_001EC1A2; /* je: equal / zero */

loc_001EC192: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_001EC1A2: ;
    if (CMP_EQ(MEM32(0x771784), edi)) goto loc_001EC1BC; /* je: equal / zero */

loc_001EC1AA: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547378) = edi;
    MEM32(0x771784) = edi;

loc_001EC1BC: ;
    if (CMP_EQ(MEM32(0x771774), ebx)) goto loc_001EC1D6; /* je: equal / zero */

loc_001EC1C4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54737C) = ebx;
    MEM32(0x771774) = ebx;

loc_001EC1D6: ;
    if (CMP_EQ(MEM32(0x7717E8), ebp)) goto loc_001EC1F0; /* je: equal / zero */

loc_001EC1DE: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E0) = ebp;
    MEM32(0x7717E8) = ebp;

loc_001EC1F0: ;
    if (CMP_EQ(MEM32(0x7717A8), ebp)) goto loc_001EC20A; /* je: equal / zero */

loc_001EC1F8: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F0) = ebp;
    MEM32(0x7717A8) = ebp;

loc_001EC20A: ;
    if (CMP_NE(MEM32(0x84A144), edi)) { sub_001EC23D(); return; } /* jne: not equal / not zero */

loc_001EC212: ;
    xmm0 = MEMF(0x64A818); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001EC225: ;
    if (CMP_NE(eax, ebx)) goto loc_001EC233; /* jne: not equal / not zero */

loc_001EC229: ;
    xmm0 = MEMF(0x64A6FC); /* movss */
    g_seh_ebp = ebp; sub_001EC264(); return; /* tail jmp 0x001EC264 */

loc_001EC233: ;
    xmm0 = MEMF(0x649248); /* movss */
    g_seh_ebp = ebp; sub_001EC264(); return; /* tail jmp 0x001EC264 */

}

/**
 * sub_001EC390
 * Original: 0x001EC390 - 0x001EC3B7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC390(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC390: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001EC3A4; /* jne: not equal / not zero */

loc_001EC39A: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001EC3A4: ;
    if (CMP_NE(MEM32(0x84975C), eax)) goto loc_001EC3B6; /* jne: not equal / not zero */

loc_001EC3AC: ;
    MEM32(0x84975C) = 0;

loc_001EC3B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC3C0
 * Original: 0x001EC3C0 - 0x001EC47F (191 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC3C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC3C0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_001EC47F(); return; } /* je: equal / zero */

loc_001EC3D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = 0x20;
    eax = 0x100;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_001EC3F7: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001EC405: ;
    esi = eax;
    if (CMP_NE(esi, ebx)) goto loc_001EC40F; /* jne: not equal / not zero */

loc_001EC40B: ;
    esi = 0; /* xor self */
    goto loc_001EC44C;

loc_001EC40F: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001EC41A: ;
    if (CMP_NE(eax, ebx)) goto loc_001EC42D; /* jne: not equal / not zero */

loc_001EC41E: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001EC429: ;
    esi = 0; /* xor self */
    goto loc_001EC44C;

loc_001EC42D: ;
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = ebx;

loc_001EC44C: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(esi, ebx)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(0x849750) = esi;
    POP32(esp, esi);
    ecx--;
    if (TEST_S(ecx, 0x8007000Eu)) { sub_001EC47F(); return; } /* jl: less (signed <) */

loc_001EC464: ;
    MEM32(0x849754) = 0x100;
    MEM32(0x849758) = 0x20;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC4A0
 * Original: 0x001EC4A0 - 0x001EC501 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC4A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC4A0: ;
    eax = MEM32(0x849750);
    if (TEST_Z(eax, eax)) { sub_001EC501(); return; } /* je: equal / zero */

loc_001EC4A9: ;
    if (TEST_Z(ebx, ebx)) { sub_001EC501(); return; } /* je: equal / zero */

loc_001EC4AD: ;
    if (TEST_Z(edi, edi)) { sub_001EC501(); return; } /* je: equal / zero */

loc_001EC4B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x83);
    eax = 0x1060;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001EC4C6: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001EC4D1; /* jne: not equal / not zero */

loc_001EC4CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EC4D1: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = ebx;
    MEM8(esi + 0x2C) = 0;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0); sub_001EB7C0(); /* call 0x001EB7C0 */

loc_001EC4EC: ;
    eax = esi + 0x1054;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_001EB9E0(); /* call 0x001EB9E0 */

loc_001EC4FA: ;
    esp = esp + 0xC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC510
 * Original: 0x001EC510 - 0x001EC579 (105 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC510(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001EC510: ;
    SET_LO8(ecx, MEM8(eax + 0x1004));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = MEMF(0x7FA21C); /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001EC559; /* je: equal / zero */

loc_001EC522: ;
    xmm0 = MEMF(eax + 0x1008); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(eax + 0x1008) = xmm0; /* movss */
    if ((xmm2 < xmm0)) { sub_001EC579(); return; } /* jb: below (unsigned <) */

loc_001EC53E: ;
    xmm2 = MEMF(eax + 0x1014); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEM8(eax + 0x1004) = 0;
    MEMF(eax + 0x1014) = xmm2; /* movss */

loc_001EC559: ;
    xmm0 = MEMF(eax + 0x1014); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(eax + 0x1010) - sets EFLAGS */
    MEMF(eax + 0x1014) = xmm0; /* movss */
    if ((xmm0 <= MEMF(eax + 0x1010))) { sub_001EC579(); return; } /* jbe: below or equal (unsigned <=) */

loc_001EC576: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001EC580
 * Original: 0x001EC580 - 0x001EC60F (143 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(esi), 1)) { sub_001EC60F(); return; } /* je: equal / zero */

loc_001EC58E: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001EC5FB; /* jne: not equal / not zero */

loc_001EC595: ;
    ecx = MEM32(esi + 0x30);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    eax = MEM32(0x84975C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001EC5E1; /* je: equal / zero */

loc_001EC5A2: ;
    if (TEST_Z(eax, eax)) goto loc_001EC5AF; /* je: equal / zero */

loc_001EC5A6: ;
    if (CMP_EQ(eax, esi)) goto loc_001EC5AF; /* je: equal / zero */

loc_001EC5AA: ;
    if (CMP_EQ(MEM32(eax + 0x30), ecx)) goto loc_001EC5F4; /* je: equal / zero */

loc_001EC5AF: ;
    if (TEST_Z(ecx, ecx)) goto loc_001EC5D4; /* je: equal / zero */

loc_001EC5B3: ;
    edx = MEM32(0x847024);
    edx = MEM32(edx + 0x40);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 4);
    ecx = MEM32(edx + ecx * 4);
    if (TEST_Z(ecx, ecx)) goto loc_001EC5D4; /* je: equal / zero */

loc_001EC5C9: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(edx, ecx)) goto loc_001EC5D4; /* je: equal / zero */

loc_001EC5D0: ;
    ecx = MEM32(edx);
    goto loc_001EC5D7;

loc_001EC5D4: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_001EC5D7: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(ecx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001EC5F4; /* je: equal / zero */

loc_001EC5E1: ;
    if (TEST_Z(eax, eax)) goto loc_001EC5EA; /* je: equal / zero */

loc_001EC5E5: ;
    PUSH32(esp, 0); sub_001EC390(); /* call 0x001EC390 */

loc_001EC5EA: ;
    MEM8(esi + 0x2C) = 1;
    MEM32(0x84975C) = esi;

loc_001EC5F4: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001EC60F(); return; } /* je: equal / zero */

loc_001EC5FB: ;
    eax = esi + 0x34;
    PUSH32(esp, 0); sub_001EC510(); /* call 0x001EC510 */

loc_001EC603: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001EC60F(); return; } /* jne: not equal / not zero */

loc_001EC607: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001EC390(); return; /* tail jmp 0x001EC390 */

}

/**
 * sub_001EC620
 * Original: 0x001EC620 - 0x001EC657 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC620(void)
{

loc_001EC620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = edi + 0x34;
    esi = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_001EB690(); /* call 0x001EB690 */

loc_001EC635: ;
    PUSH32(esp, 0); sub_001EBCD0(); /* call 0x001EBCD0 */

loc_001EC63A: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001EBF00(); /* call 0x001EBF00 */

loc_001EC644: ;
    PUSH32(esp, esi);
    eax = edi + 0x1054;
    PUSH32(esp, 0); sub_001EBAC0(); /* call 0x001EBAC0 */

loc_001EC650: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC660
 * Original: 0x001EC660 - 0x001EC68A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC660(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC660: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001EC677; /* jne: not equal / not zero */

loc_001EC66D: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001EC677: ;
    if (CMP_NE(MEM32(0x84975C), eax)) goto loc_001EC689; /* jne: not equal / not zero */

loc_001EC67F: ;
    MEM32(0x84975C) = 0;

loc_001EC689: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC690
 * Original: 0x001EC690 - 0x001EC69F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC690(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC690: ;
    SET_LO8(ecx, MEM8(eax + 0x11));
    if (CMP_G(LO8(ecx) & LO8(ecx), 0)) goto loc_001EC69B; /* jg: greater (signed >) */

loc_001EC697: ;
    MEM8(eax + 0x11) = 0x14;

loc_001EC69B: ;
    SET_LO8(eax, MEM8(eax + 0x11));
    esp += 4; return; /* ret */

}

/**
 * sub_001EC6A0
 * Original: 0x001EC6A0 - 0x001EC743 (163 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC6A0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001EC6A0: ;
    esp = esp - 0x20;
    xmm0 = MEMF(ecx); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm3 = MEMF(0x648CF0); /* movss */
    xmm4 = MEMF(0x64AD40); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    eax = eax & 0xFF000000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C7);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm3; /* addss */
    edx = esp + 0x34;
    xmm1 = xmm1 + xmm3; /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x40;
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 + xmm4; /* addss */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 4;
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001EC73F: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC750
 * Original: 0x001EC750 - 0x001EC7E5 (149 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC750(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_001EC750: ;
    esp = esp - 0x20;
    xmm0 = MEMF(eax); /* movss */
    xmm3 = MEMF(0x64AD40); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    xmm0 = xmm0 - xmm3; /* subss */
    PUSH32(esp, 2);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C7);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 4;
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001EC7E1: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC7F0
 * Original: 0x001EC7F0 - 0x001EC86B (123 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC7F0(void)
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

loc_001EC7F0: ;
    eax = MEM32(0x84A144);
    esp = esp - 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001EC817; /* je: equal / zero */

loc_001EC7FD: ;
    eax--;
    if ((eax != 0)) goto loc_001EC832; /* jne: not equal / not zero */

loc_001EC800: ;
    xmm0 = MEMF(0x64AED4); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x58BD48); /* movss */
    goto loc_001EC82C;

loc_001EC817: ;
    xmm0 = MEMF(0x64AED0); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64A780); /* movss */

loc_001EC82C: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001EC832: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001EC842: ;
    esi = ZX8(LO8(eax));
    esi = esi << 0x18;
    esi = esi | 0x64FF64;
    eax = esi;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_001EC6A0(); /* call 0x001EC6A0 */

loc_001EC859: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0); sub_001EC750(); /* call 0x001EC750 */

loc_001EC863: ;
    esp = esp + 4;
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
 * sub_001EC870
 * Original: 0x001EC870 - 0x001EC8EB (123 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC870(void)
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

loc_001EC870: ;
    eax = MEM32(0x84A144);
    esp = esp - 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001EC897; /* je: equal / zero */

loc_001EC87D: ;
    eax--;
    if ((eax != 0)) goto loc_001EC8B2; /* jne: not equal / not zero */

loc_001EC880: ;
    xmm0 = MEMF(0x64AECC); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x58BD48); /* movss */
    goto loc_001EC8AC;

loc_001EC897: ;
    xmm0 = MEMF(0x64ACB8); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64A780); /* movss */

loc_001EC8AC: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001EC8B2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001EC8C2: ;
    esi = ZX8(LO8(eax));
    esi = esi << 0x18;
    esi = esi | 0xFF6464;
    eax = esi;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_001EC6A0(); /* call 0x001EC6A0 */

loc_001EC8D9: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0); sub_001EC750(); /* call 0x001EC750 */

loc_001EC8E3: ;
    esp = esp + 4;
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
 * sub_001EC8F0
 * Original: 0x001EC8F0 - 0x001EC909 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC8F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x775F38);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, HI8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001EC909(); return; } /* jne: not equal / not zero */

loc_001EC8FD: ;
    if (TEST_NZ(HI8(eax), HI8(eax))) { sub_001EC909(); return; } /* jne: not equal / not zero */

loc_001EC901: ;
    MEM8(0x875684) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC9B0
 * Original: 0x001EC9B0 - 0x001ECA30 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC9B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001EC9B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x847265));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_001ECA30(); return; } /* jne: not equal / not zero */

loc_001EC9BF: ;
    if (CMP_EQ(esi, ebx)) { sub_001ECA30(); return; } /* je: equal / zero */

loc_001EC9C3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x82);
    eax = 0xC78;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001EC9D7: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_001ECA30(); return; } /* je: equal / zero */

loc_001EC9DE: ;
    xmm0 = MEMF(0x648D2C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEM32(eax + 0x2C) = esi;
    edx = eax + 0x3F;
    esi = eax + 0x50;
    ecx = eax + 0x44;
    edi = 3;
    goto loc_001ECA00;

    /* nop */

loc_001ECA00: ;
    MEMF(ecx + -20) = xmm0; /* movss */
    MEM8(edx + -3) = LO8(ebx);
    MEM8(edx) = LO8(ebx);
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 0xC0C) = xmm1; /* movss */
    MEM32(ecx + 0xC18) = ebx;
    ecx = ecx + 4;
    MEM16(esi) = LO16(ebx);
    edx++;
    esi = esi + 0x400;
    edi--;
    if ((edi != 0)) goto loc_001ECA00; /* jne: not equal / not zero */

loc_001ECA2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECA40
 * Original: 0x001ECA40 - 0x001ECBF6 (438 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECA40: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(ebp + 0x30); /* addss */
    MEMF(ebp + 0x30) = xmm1; /* movss */
    SET_LO8(eax, MEM8(ebp + 0x3C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ECA74; /* je: equal / zero */

loc_001ECA66: ;
    xmm1 = MEMF(ebp + 0x44); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x44) = xmm1; /* movss */

loc_001ECA74: ;
    xmm1 = MEMF(ebp + 0x34); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x34) = xmm1; /* movss */
    SET_LO8(eax, MEM8(ebp + 0x3D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ECA97; /* je: equal / zero */

loc_001ECA89: ;
    xmm1 = MEMF(ebp + 0x48); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x48) = xmm1; /* movss */

loc_001ECA97: ;
    xmm1 = MEMF(ebp + 0x38); /* movss */
    esi = ebp + 0x38;
    xmm1 = xmm1 + xmm0; /* addss */
    edi = ebp + 0x3E;
    MEMF(esi) = xmm1; /* movss */
    if (CMP_EQ(MEM8(edi), 0)) goto loc_001ECABD; /* je: equal / zero */

loc_001ECAAF: ;
    xmm1 = MEMF(ebp + 0x4C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x4C) = xmm1; /* movss */

loc_001ECABD: ;
    eax = MEM32(0x863AF0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(eax, eax)) goto loc_001ECBEF; /* je: equal / zero */

loc_001ECAD2: ;
    edx = MEM32(eax);
    xmm0 = MEMF(eax + 0xC); /* movss */
    ecx = eax + 0x10;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(eax + 8));
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM8(esp + 0x28) = LO8(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001ECBEF; /* je: equal / zero */

loc_001ECB00: ;
    edx = esp + 0x10;
    if (CMP_EQ(ecx, edx)) goto loc_001ECBEF; /* je: equal / zero */

loc_001ECB0C: ;
    xmm1 = MEMF(ebp + 0xC50); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001ECBEF; /* jnp: not parity */

loc_001ECB21: ;
    eax = ebp + 0x850;
    MEM32(esp + 0xC) = 2;
    PUSH32(esp, ebx);

loc_001ECB30: ;
    ecx = MEM32(esi + -4);
    MEM32(esi) = ecx;
    SET_LO8(edx, MEM8(edi + -1));
    SET_LO8(ecx, MEM8(edi + 2));
    ebx = eax + -1024;
    MEM8(edi) = LO8(edx);
    MEM8(edi + 3) = LO8(ecx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_001ECB53: ;
    eax = MEM32(esi + 0xC1C);
    ecx = MEM32(esi + 0xC28);
    edx = MEM32(esi + 0xC34);
    MEM32(esi + 0xC2C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xC20) = eax;
    MEM32(esi + 0xC38) = edx;
    SET_LO8(eax, MEM8(edi + 0xC37));
    esp = esp + 8;
    MEM8(edi + 0xC38) = LO8(eax);
    esi = esi + 0xFFFFFFFCu;
    edi--;
    ecx--;
    eax = ebx;
    MEM32(esp + 0x10) = ecx;
    if ((ecx != 0)) goto loc_001ECB30; /* jne: not equal / not zero */

loc_001ECB97: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = ebp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_001ECBA5: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    SET_LO8(edx, MEM8(esp + 0x34));
    esp = esp + 8;
    MEMF(ebp + 0xC50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D2C); /* movss */
    MEM32(ebp + 0xC5C) = eax;
    MEM32(ebp + 0xC68) = ecx;
    MEM8(ebp + 0xC74) = LO8(edx);
    MEMF(ebp + 0x30) = xmm0; /* movss */
    MEM8(ebp + 0x3C) = 0;
    MEM8(ebp + 0x3F) = 0;
    MEMF(ebp + 0x44) = xmm0; /* movss */
    POP32(esp, ebx);

loc_001ECBEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001ECC00
 * Original: 0x001ECC00 - 0x001ECC16 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001ECC00: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) { sub_001ECC16(); return; } /* je: equal / zero */

loc_001ECC0A: ;
    if (CMP_NE(MEM32(eax + 0x204), 2)) { sub_001ECC16(); return; } /* jne: not equal / not zero */

loc_001ECC13: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001ECC90
 * Original: 0x001ECC90 - 0x001ECD31 (161 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECC90: ;
    esp = esp - 8;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001ECCAA: ;
    xmm0 = MEMF(esi + edi * 4 + 0x44); /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    xmm4 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    ecx = edi;
    ecx = ecx << 0xA;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm1 = xmm1 - xmm0; /* subss */
    ebp = ecx + esi + 0x50;
    MEMF(esp + 0x14) = xmm1; /* movss */
    SET_LO8(ebx, LO8(eax));
    MEMF(esp + 0x20) = xmm2; /* movss */
    if ((xmm4 <= xmm0)) { sub_001ECD31(); return; } /* jbe: below or equal (unsigned <=) */

loc_001ECCE8: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001ECD15; /* jbe: below or equal (unsigned <=) */

loc_001ECCFE: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x20) = xmm1; /* movss */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_001ECD92(); return; /* tail jmp 0x001ECD92 */

loc_001ECD15: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_001ECD20; /* jbe: below or equal (unsigned <=) */

loc_001ECD1A: ;
    MEMF(esp + 0x20) = xmm2; /* movss */

loc_001ECD20: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_001ECD92(); return; /* tail jmp 0x001ECD92 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001ECEB0
 * Original: 0x001ECEB0 - 0x001ECF39 (137 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECEB0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_001ECEB0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x2C);
    PUSH32(esp, 0); sub_001ECC00(); /* call 0x001ECC00 */

loc_001ECEB9: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ECF38; /* je: equal / zero */

loc_001ECEBE: ;
    eax = 0; /* xor self */

loc_001ECEC0: ;
    SET_LO8(ecx, MEM8(edi + eax + 0x3C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001ECED0; /* jne: not equal / not zero */

loc_001ECEC8: ;
    eax++;
    if (CMP_L(eax, 3)) goto loc_001ECEC0; /* jl: less (signed <) */

loc_001ECECE: ;
    goto loc_001ECED7;

loc_001ECED0: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ecx = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001ECF12; /* jne: not equal / not zero */

loc_001ECED7: ;
    eax = 2;
    ecx = edi + 0xC64;

loc_001ECEE2: ;
    SET_LO8(edx, MEM8(edi + eax + 0x3F));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001ECEEF; /* jne: not equal / not zero */

loc_001ECEEA: ;
    if (CMP_EQ(MEM32(ecx), 5)) goto loc_001ECEF8; /* je: equal / zero */

loc_001ECEEF: ;
    eax--;
    ecx = ecx - 4;
    if (CMP_GE(eax & eax, 0)) goto loc_001ECEE2; /* jge: greater or equal (signed >=) */

loc_001ECEF7: ;
    esp += 4; return; /* ret */

loc_001ECEF8: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = MEMF(0x648D2C); /* movss */
    MEM8(eax + edi + 0x3C) = 1;
    MEMF(edi + eax * 4 + 0x44) = xmm0; /* movss */
    ecx = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001ECF38; /* je: equal / zero */

loc_001ECF12: ;
    eax = MEM32(0x84A144);
    edx = MEM32(esp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x46;
    eax = eax + 0x96;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_001ECC90(); /* call 0x001ECC90 */

loc_001ECF35: ;
    esp = esp + 0xC;

loc_001ECF38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ECF40
 * Original: 0x001ECF40 - 0x001EE23B (4859 bytes, 1142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECF40: ;
    ecx = MEM32(0x84A144);
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_001ECF77; /* je: equal / zero */

loc_001ECF53: ;
    eax = MEM32(esp + 0x214);
    eax = MEM32(eax + 0x2C);
    if (CMP_EQ(eax, ebx)) goto loc_001ECF77; /* je: equal / zero */

loc_001ECF61: ;
    if (CMP_EQ(MEM16(eax + 0x60), LO16(ebx))) goto loc_001ECF77; /* je: equal / zero */

loc_001ECF67: ;
    edx = MEM32(0x84A5F8);
    if (CMP_NE(MEM32(edx + 0x64), 0x42)) goto loc_001EE233; /* jne: not equal / not zero */

loc_001ECF77: ;
    xmm0 = MEMF(0x7F9F58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ecx, ebx)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax++;
    edi = eax;
    if (CMP_LE(edi, ebx)) goto loc_001ED029; /* jle: less or equal (signed <=) */

loc_001ECFA4: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ECFC1; /* je: equal / zero */

loc_001ECFAD: ;
    eax = MEM32(0x849ACC);
    if (CMP_NE(eax, ebx)) goto loc_001ECFDF; /* jne: not equal / not zero */

loc_001ECFB6: ;
    SET_LO8(eax, MEM8(esi * 2 + 0x849B60));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001ECFDF; /* jne: not equal / not zero */

loc_001ECFC1: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001ECFDF; /* jne: not equal / not zero */

loc_001ECFCA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001ECFD1: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x28);
    eax = eax + 0x28;
    if (CMP_EQ(MEM32(ecx + 0x1C), ebx)) goto loc_001ECFF6; /* je: equal / zero */

loc_001ECFDF: ;
    xmm0 = MEMF(esi * 4 + 0x875678); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_001ED010;

loc_001ECFF6: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esi * 4 + 0x875678); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_001ED010: ;
    if ((xmm1 > xmm0)) goto loc_001ED015; /* ja: above (unsigned >) */

loc_001ED012: ;
    xmm0 = xmm1; /* movaps */

loc_001ED015: ;
    MEMF(esi * 4 + 0x875678) = xmm0; /* movss */
    esi++;
    if (CMP_L(esi, edi)) goto loc_001ECFA4; /* jl: less (signed <) */

loc_001ED023: ;
    ecx = MEM32(0x84A144);

loc_001ED029: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edi = 1;
    if (CMP_EQ(ecx, ebx)) goto loc_001ED084; /* je: equal / zero */

loc_001ED032: ;
    xmm0 = MEMF(0x64AA48); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x546060); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64A20C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649B10); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x58BCCC); /* movss */
    ebp = edi;
    goto loc_001ED0BF;

loc_001ED084: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x649240); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649FFC); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x649D04); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    ebp = 0; /* xor self */

loc_001ED0BF: ;
    eax = MEM32(0x6B842C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001ED0E0; /* je: equal / zero */

loc_001ED0D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001ED0DA: ;
    MEM32(0x771760) = esi;

loc_001ED0E0: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_001ED0F5; /* je: equal / zero */

loc_001ED0E8: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001ED0EF: ;
    MEM32(0x77175C) = ebx;

loc_001ED0F5: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001ED10F; /* je: equal / zero */

loc_001ED103: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001ED109: ;
    MEM32(0x77182C) = esi;

loc_001ED10F: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_001ED123; /* je: equal / zero */

loc_001ED117: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001ED11D: ;
    MEM32(0x771828) = ebx;

loc_001ED123: ;
    if (CMP_EQ(MEM32(0x771824), edi)) goto loc_001ED143; /* je: equal / zero */

loc_001ED12B: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ED137: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001ED143: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001ED163; /* je: equal / zero */

loc_001ED14B: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ED157: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001ED163: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001ED177; /* je: equal / zero */

loc_001ED16B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001ED171: ;
    MEM32(0x77181C) = edi;

loc_001ED177: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001ED19D; /* je: equal / zero */

loc_001ED185: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ED191: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001ED19D: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_001ED1BD; /* je: equal / zero */

loc_001ED1A5: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ED1B1: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_001ED1BD: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001ED1DB; /* je: equal / zero */

loc_001ED1C5: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001ED1DB: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001ED1E3: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_001ED207; /* je: equal / zero */

loc_001ED1F6: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001ED207: ;
    if (CMP_EQ(MEM32(0x7717C4), ebx)) goto loc_001ED220; /* je: equal / zero */

loc_001ED20F: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_001ED220: ;
    edx = MEM32(0x7717A4);
    ebx = 4;
    if (CMP_EQ(edx, ebx)) goto loc_001ED240; /* je: equal / zero */

loc_001ED22F: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ebx;
    MEM32(0x7717A4) = ebx;

loc_001ED240: ;
    esi = MEM32(0x771784);
    edx = 0; /* xor self */
    if (CMP_EQ(esi, edx)) goto loc_001ED25D; /* je: equal / zero */

loc_001ED24C: ;
    eax = eax | 0x800;
    MEM32(0x547378) = edx;
    MEM32(0x771784) = edx;

loc_001ED25D: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_001ED276; /* je: equal / zero */

loc_001ED265: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001ED276: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_001ED2A4; /* je: equal / zero */

loc_001ED293: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001ED2A4: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_001ED2BD; /* je: equal / zero */

loc_001ED2AC: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_001ED2BD: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = edx;
    if (CMP_EQ(eax, esi)) goto loc_001ED2F3; /* je: equal / zero */

loc_001ED2DB: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ED2E7: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001ED2F3: ;
    PUSH32(esp, 0x771808);
    edi = 0x303;
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001ED307: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0xFF;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001ED315: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001ED32C; /* jne: not equal / not zero */

loc_001ED31E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001ED324: ;
    MEM32(0x771764) = esi;
    goto loc_001ED343;

loc_001ED32C: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001ED343; /* je: equal / zero */

loc_001ED334: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001ED33D: ;
    MEM32(0x771764) = esi;

loc_001ED343: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    (void)0; /* test MEM8(0x876758), 1 - flags set for next jcc */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    xmm1 = xmm1 + MEMF(0x648F38); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + MEMF(0x64B250); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_001ED3A2; /* jne: not equal / not zero */

loc_001ED391: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_001ED3A2: ;
    SET_LO8(eax, MEM8(0x876728));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED3B3; /* je: equal / zero */

loc_001ED3AB: ;
    xmm0 = MEMF(0x64A338); /* movss */

loc_001ED3B3: ;
    fp_push(MEMF(ebp * 4 + 0x875678)); /* fld float */
    xmm0 = xmm0 + xmm1; /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001ED3E0: ;
    edi = ZX8(LO8(eax));
    edi = edi << 0x18;
    esi = 0x1D;
    edi = edi | 0x64CDFF;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001ED3F6: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + ebx) = 8;
    eax = eax + ebx;
    MEM32(eax + ebx) = 0x40601818;
    xmm4 = MEMF(esp + 0x60); /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm4; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + ebx;
    MEM32(eax + ebx) = edi;
    xmm3 = MEMF(esp + 0x40); /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEM32(eax + ebx) = edi;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x5C); /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEM32(eax + ebx) = edi;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm4; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEM32(eax + ebx) = edi;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    eax = eax + ebx;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + ebx;
    MEM32(eax) = 0x417FC;
    eax = eax + ebx;
    MEM32(eax) = 0;
    eax = eax + ebx;
    MEM32(esp + 0x30) = eax;
    MEM32(edx) = eax;
    SET_LO8(eax, MEM8(0x862C95));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_001ED50E; /* jg: greater (signed >) */

loc_001ED507: ;
    SET_LO8(eax, 0x14);
    MEM8(0x862C95) = LO8(eax);

loc_001ED50E: ;
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_001ED51A; /* jns: not sign (positive) */

loc_001ED518: ;
    eax = 0; /* xor self */

loc_001ED51A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    esi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED54F; /* je: equal / zero */

loc_001ED53F: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001ED54F: ;
    fp_push(MEMF(ebp * 4 + 0x875678)); /* fld float */
    MEM8(0x776171) = 0x64;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001ED576: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    edx = ZX8(MEM8(0x776154));
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm0 = xmm0 + MEMF(0x648FD8); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x59A8D8); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x6490F4); /* addss */
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    PUSH32(esp, 0x5F5FE0);
    MEM8(0x77616E) = LO8(eax);
    eax = esp + 0x70;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    MEM32(0x776158) = 0;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x74) = edx;
    MEM8(0x776154) = 0;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001ED611: ;
    esi = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001ED62B: ;
    eax = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    PUSH32(esp, 0x5F5FDC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001ED63F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp + 0x28;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED66B; /* je: equal / zero */

loc_001ED65B: ;
    xmm0 = MEMF(0x64A70C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001ED66B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5FE0);
    ecx = esp + 0x70;
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001ED67D: ;
    eax = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001ED697: ;
    ebx = MEM32(0x876758);
    esp = esp + 0x1C;
    if (TEST_NZ(LO8(ebx), 1)) goto loc_001ED6B8; /* jne: not equal / not zero */

loc_001ED6A5: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_001ED6B8: ;
    SET_LO8(eax, MEM8(0x876728));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED8CC; /* je: equal / zero */

loc_001ED6C5: ;
    if (TEST_NZ(LO8(ebx), 1)) goto loc_001ED6DD; /* jne: not equal / not zero */

loc_001ED6CA: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_001ED6DD: ;
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    eax = (int32_t)MEMF(0x87672C); /* cvttss2si */
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm0 = xmm0 + MEMF(0x649538); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x649534); /* addss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    edi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED781; /* je: equal / zero */

loc_001ED771: ;
    xmm0 = MEMF(0x64A70C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001ED781: ;
    fp_push(MEMF(ebp * 4 + 0x875678)); /* fld float */
    MEM8(0x776171) = 0xFF;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(0x776170) = 0x80;
    MEM8(0x77616F) = 0;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001ED7A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5FE0);
    edx = esp + 0x70;
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    MEM8(0x77616E) = LO8(eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001ED7BF: ;
    esi = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001ED7D9: ;
    edx = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    PUSH32(esp, 0x5F5FDC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001ED7ED: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x649A9C); /* movss */
    esp = esp + 0x28;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED819; /* je: equal / zero */

loc_001ED809: ;
    xmm0 = MEMF(0x64B24C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001ED819: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F5FE0);
    eax = esp + 0x70;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001ED82B: ;
    edx = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    eax = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001ED845: ;
    SET_LO8(eax, MEM8(0x876758));
    esp = esp + 0x1C;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001ED862; /* jne: not equal / not zero */

loc_001ED851: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_001ED862: ;
    SET_LO8(eax, MEM8(0x876735));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001ED8CC; /* je: equal / zero */

loc_001ED86B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F5FB4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001ED879: ;
    PUSH32(esp, eax);
    ecx = esp + 0x188;
    PUSH32(esp, 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001ED889: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ebx = esp + 0x19C;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_001ED89B: ;
    SET_LO8(ecx, MEM8(0x876758));
    eax = 1;
    esp = esp + 0x20;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_001ED8C5; /* jne: not equal / not zero */

loc_001ED8AD: ;
    ecx = MEM32(0x876758);
    ecx = ecx | eax;
    eax = 0x8761E8;
    MEM32(0x876758) = ecx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_001ED8C5: ;
    MEM8(0x876735) = 0;

loc_001ED8CC: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    SET_LO8(edx, MEM8(esp + 0x64));
    ebp = MEM32(esp + 0x220);
    SET_LO8(eax, 0x32);
    SET_LO8(ecx, 0xB9);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEM8(esp + 0x4E) = LO8(eax);
    MEM8(esp + 0x4F) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x58) = LO8(eax);
    eax = MEM32(0x875678);
    MEM8(esp + 0x47) = LO8(ecx);
    MEM8(esp + 0x54) = LO8(ecx);
    MEM8(esp + 0x57) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edi = ebp;
    MEM8(0x776154) = LO8(edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x4C) = 0x64;
    MEM8(esp + 0x4D) = 0xCD;
    MEM8(esp + 0x4E) = 0xFF;
    MEM8(esp + 0x50) = 0;
    MEM8(esp + 0x51) = 0x82;
    MEM8(esp + 0x52) = 0;
    MEM8(esp + 0x53) = 0xE1;
    MEM8(esp + 0x54) = 0xA;
    MEM8(esp + 0x55) = 0xFF;
    MEM8(esp + 0x58) = 0xFF;
    MEM8(esp + 0x59) = 0xFF;
    MEM8(esp + 0x5A) = 0xFF;
    MEM8(esp + 0x5B) = 0xF0;
    PUSH32(esp, 0); sub_001ECEB0(); /* call 0x001ECEB0 */

loc_001ED988: ;
    esp = esp + 8;
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = ebp + 0x30;

loc_001ED992: ;
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 - MEMF(0x648D1C); /* subss */
    xmm1 = xmm1 * MEMF(0x648EA8); /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648EEC); /* mulss */
    xmm1 = MEMF(0x648E38); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001ED9DA; /* ja: above (unsigned >) */

loc_001ED9CD: ;
    xmm1 = MEMF(0x64B248); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001ED9E0; /* jbe: below or equal (unsigned <=) */

loc_001ED9DA: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_001ED9E0: ;
    fp_push(MEMF(0x875678)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001ED9EF: ;
    MEM8(esp + esi + 0x24) = LO8(eax);
    esi++;
    edi = edi + 4;
    if (CMP_L(esi, 3)) goto loc_001ED992; /* jl: less (signed <) */

loc_001ED9FC: ;
    ecx = 0; /* xor self */
    eax = ebp + 0xC68;
    edi = ebp + 0x50;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x34) = edi;

loc_001EDA13: ;
    if (CMP_EQ(MEM16(edi), LO16(ebx))) goto loc_001EE1DC; /* je: equal / zero */

loc_001EDA1C: ;
    esi = MEM32(eax + -12);
    edx = MEM32(eax);
    SET_LO8(eax, MEM8(ecx + ebp + 0xC74));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x10) = edx;
    MEM8(esp + 0x1F) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EDA59; /* je: equal / zero */

loc_001EDA38: ;
    if (CMP_NE(esi, 4)) goto loc_001EDA59; /* jne: not equal / not zero */

loc_001EDA3D: ;
    MEM8(esp + 0x1E) = 1;
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0x80;
    MEM8(0x77616F) = 0;
    goto loc_001EDA7E;

loc_001EDA59: ;
    eax = esi + esi * 2;
    SET_LO8(edx, MEM8(esp + eax + 0x44));
    MEM8(0x776171) = LO8(edx);
    SET_LO8(edx, MEM8(esp + eax + 0x45));
    SET_LO8(eax, MEM8(esp + eax + 0x46));
    MEM8(esp + 0x1E) = 0;
    MEM8(0x776170) = LO8(edx);
    MEM8(0x77616F) = LO8(eax);

loc_001EDA7E: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + ecx + 0x24));
    xmm0 = MEMF(0x648EA8); /* movss */
    MEM8(0x77616E) = LO8(ecx);
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EDAB1; /* je: equal / zero */

loc_001EDAA1: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001EDAB1: ;
    PUSH32(esp, 0x5F5FA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_001EDABC: ;
    ecx = MEM32(0x6BAF28);
    xmm0 = MEMF(ecx + 4); /* movss */
    esp = esp + 8;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x74) = eax;
    MEMF(esp + 0x64) = xmm0; /* movss */
    if (CMP_EQ(esi, 2)) goto loc_001EDAE7; /* je: equal / zero */

loc_001EDAD9: ;
    if (CMP_EQ(esi, 3)) goto loc_001EDAE7; /* je: equal / zero */

loc_001EDADE: ;
    if (CMP_NE(esi, 4)) goto loc_001EE16D; /* jne: not equal / not zero */

loc_001EDAE7: ;
    if (CMP_EQ(eax, ebx)) goto loc_001EE16D; /* je: equal / zero */

loc_001EDAEF: ;
    if (CMP_NE(MEM32(esp + 0x10), ebx)) goto loc_001EDAFD; /* jne: not equal / not zero */

loc_001EDAF5: ;
    MEM32(esp + 0x10) = 0xB;

loc_001EDAFD: ;
    esi = eax;
    PUSH32(esp, edi);
    esi = esi - edi;
    PUSH32(esp, 0x5F56AC);
    esi = (uint32_t)((int32_t)esi >> 1);
    edx = esp + 0x84;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001EDB17: ;
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    MEM16(esp + esi * 2 + 0x98) = LO16(ebx);
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001EDB43: ;
    eax = MEM32(0x6B842C);
    ecx = MEM32(0x771760);
    esp = esp + 0x1C;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001EDB63; /* je: equal / zero */

loc_001EDB57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001EDB5D: ;
    MEM32(0x771760) = esi;

loc_001EDB63: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_001EDB78; /* je: equal / zero */

loc_001EDB6B: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001EDB72: ;
    MEM32(0x77175C) = ebx;

loc_001EDB78: ;
    PUSH32(esp, 0x77182C);
    edi = 0x1B02;
    esi = 0x8B;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDB8C: ;
    eax = MEM32(0x771828);
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001EDBA4; /* je: equal / zero */

loc_001EDB98: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001EDB9E: ;
    MEM32(0x771828) = ebx;

loc_001EDBA4: ;
    ebp = 1;
    PUSH32(esp, 0x771824);
    edi = ebp;
    esi = 0x3B;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDBBA: ;
    PUSH32(esp, 0x771820);
    edi = 0; /* xor self */
    esi = 0x3C;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDBCB: ;
    eax = MEM32(0x77181C);
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_001EDBE3; /* je: equal / zero */

loc_001EDBD7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001EDBDD: ;
    MEM32(0x77181C) = ebp;

loc_001EDBE3: ;
    PUSH32(esp, 0x771818);
    edi = 0x203;
    esi = 0x39;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDBF7: ;
    PUSH32(esp, 0x771814);
    edi = 0; /* xor self */
    esi = 0x40;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDC08: ;
    PUSH32(esp, 0x771810);
    esi = 0x66;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDC17: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001EDC22: ;
    (void)0; /* cmp MEM32(0x7717E4), 2 - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x7717E4), 2)) goto loc_001EDC46; /* je: equal / zero */

loc_001EDC30: ;
    ecx = 2;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001EDC46: ;
    if (CMP_EQ(MEM32(0x7717C4), ebx)) goto loc_001EDC5F; /* je: equal / zero */

loc_001EDC4E: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_001EDC5F: ;
    edx = MEM32(0x7717A4);
    ecx = 4;
    if (CMP_EQ(edx, ecx)) goto loc_001EDC7F; /* je: equal / zero */

loc_001EDC6E: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_001EDC7F: ;
    if (CMP_EQ(MEM32(0x771784), ebx)) goto loc_001EDC98; /* je: equal / zero */

loc_001EDC87: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ebx;
    MEM32(0x771784) = ebx;

loc_001EDC98: ;
    edx = MEM32(0x771774);
    ecx = 2;
    if (CMP_EQ(edx, ecx)) goto loc_001EDCB8; /* je: equal / zero */

loc_001EDCA7: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001EDCB8: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_001EDCE6; /* je: equal / zero */

loc_001EDCD5: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ebp;
    MEM32(0x7717E8) = ebp;

loc_001EDCE6: ;
    if (CMP_EQ(MEM32(0x7717A8), ebp)) goto loc_001EDCFF; /* je: equal / zero */

loc_001EDCEE: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ebp;
    MEM32(0x7717A8) = ebp;

loc_001EDCFF: ;
    eax = eax | 0x400;
    PUSH32(esp, 0x77180C);
    edi = 0x302;
    esi = 0x3E;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDD23: ;
    PUSH32(esp, 0x771808);
    edi = 0x303;
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001EDD37: ;
    SET_LO8(eax, MEM8(esp + 0x27));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EDD49; /* je: equal / zero */

loc_001EDD42: ;
    eax = 0x2BA;
    goto loc_001EDD5E;

loc_001EDD49: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax * 4 + 0x6B9A50);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001EDD5E; /* jne: not equal / not zero */

loc_001EDD59: ;
    eax = 0x214;

loc_001EDD5E: ;
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001EDD66: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    esp = esp + 4;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0x8C;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_001EDDA3: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x74); /* divss */
    eax = MEM32(0x771764);
    esp = esp + 0x10;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_EQ(esi, ebx)) goto loc_001EDDF9; /* je: equal / zero */

loc_001EDDC1: ;
    if (CMP_EQ(eax, esi)) goto loc_001EDDDA; /* je: equal / zero */

loc_001EDDC5: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001EDDCE: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEM32(0x771764) = esi;

loc_001EDDDA: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EDDF3; /* je: equal / zero */

loc_001EDDE2: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001EDDEB: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    goto loc_001EDE16;

loc_001EDDF3: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    goto loc_001EDE16;

loc_001EDDF9: ;
    if (CMP_EQ(eax, ebx)) goto loc_001EDE11; /* je: equal / zero */

loc_001EDDFD: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001EDE05: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEM32(0x771764) = ebx;

loc_001EDE11: ;
    eax = 0x10;

loc_001EDE16: ;
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    xmm2 = MEMF(0x6493AC); /* movss */
    ecx = MEM32(0x7717E4);
    eax = ZX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    if (CMP_EQ(ecx, eax)) goto loc_001EDE78; /* je: equal / zero */

loc_001EDE64: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001EDE78: ;
    if (CMP_EQ(MEM32(0x7717C4), ebx)) goto loc_001EDE96; /* je: equal / zero */

loc_001EDE80: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_001EDE96: ;
    ecx = MEM32(esp + 0x2C);
    ebp = ZX8(MEM8(esp + ecx + 0x24));
    esi = ebp;
    PUSH32(esp, 8);
    esi = esi & 0xFFFFFFFEu;
    PUSH32(esp, 0x18);
    edi = esp + 0x38;
    esi = esi << 0x17;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_001EDEB4: ;
    xmm3 = MEMF(0x648CE0); /* movss */
    eax = MEM32(esp + 0x38);
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm4 = MEMF(0x648D1C); /* movss */
    eax = eax + 4;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    eax = eax + 4;
    xmm2 = MEMF(esp + 0x48); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(eax + -24) = xmm0; /* movss */
    eax = eax + 4;
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(eax + -24) = xmm1; /* movss */
    MEMF(eax + -20) = xmm4; /* movss */
    MEM32(eax + -16) = esi;
    MEMF(eax + -12) = xmm5; /* movss */
    MEMF(eax + -8) = xmm5; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(eax + -20) = xmm2; /* movss */
    MEMF(eax + -16) = xmm1; /* movss */
    MEMF(eax + -12) = xmm4; /* movss */
    MEM32(eax + -8) = esi;
    MEMF(eax + -4) = xmm6; /* movss */
    MEMF(eax) = xmm5; /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(eax + -12) = xmm1; /* movss */
    MEMF(eax + -8) = xmm4; /* movss */
    MEM32(eax + -4) = esi;
    MEMF(eax) = xmm6; /* movss */
    MEMF(eax + 4) = xmm6; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = esi;
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm6; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(esp + 0x38) = eax;
    MEM32(edx) = eax;
    SET_LO8(eax, MEM8(esp + 0x26));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EDFE5; /* je: equal / zero */

loc_001EDFD8: ;
    ebp = ebp << 0x18;
    ebp = ebp | 0xFF8000;
    esi = ebp;
    goto loc_001EE00A;

loc_001EDFE5: ;
    eax = MEM32(esp + 0x28);
    eax = eax + eax * 2;
    esi = ZX8(MEM8(esp + eax + 0x44));
    ecx = ZX8(MEM8(esp + eax + 0x45));
    edx = ZX8(MEM8(esp + eax + 0x46));
    ebp = ebp << 8;
    esi = esi | ebp;
    esi = esi << 8;
    esi = esi | ecx;
    esi = esi << 8;
    esi = esi | edx;

loc_001EE00A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    edi = esp + 0x38;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_001EE017: ;
    eax = MEM32(esp + 0x38);
    xmm3 = MEMF(esp + 0x68); /* movss */
    MEMF(eax) = xmm3; /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = esi;
    xmm4 = MEMF(esp + 0x48); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = esi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x64); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = esi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = esi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    PUSH32(esp, 0x5F5FA0);
    MEM32(esp + 0x3C) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_001EE124: ;
    edx = MEM32(esp + 0x80);
    eax = edx + eax * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F56AC);
    ecx = esp + 0x90;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001EE146: ;
    eax = MEM32(esp + 0x94);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = (int32_t)MEMF(esp + 0x64); /* cvttss2si */
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001EE164: ;
    edi = MEM32(esp + 0x5C);
    esp = esp + 0x28;
    goto loc_001EE1B7;

loc_001EE16D: ;
    PUSH32(esp, 0x5F5FA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_001EE178: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001EE1B7; /* jne: not equal / not zero */

loc_001EE17F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F56AC);
    edx = esp + 0x84;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001EE197: ;
    ecx = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001EE1B4: ;
    esp = esp + 0x1C;

loc_001EE1B7: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648D50); /* addss */
    ebp = MEM32(esp + 0x220);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebx = 0; /* xor self */

loc_001EE1DC: ;
    ecx++;
    eax = eax + 4;
    edi = edi + 0x400;
    (void)0; /* cmp ecx, 3 - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x34) = edi;
    if (CMP_L(ecx, 3)) goto loc_001EDA13; /* jl: less (signed <) */

loc_001EE1FB: ;
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_NE(MEM32(0x84A144), ebx)) goto loc_001EE226; /* jne: not equal / not zero */

loc_001EE206: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x218);
    ecx = MEM32(eax * 4 + 0x875678);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001EC8F0(); /* call 0x001EC8F0 */

loc_001EE21B: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

loc_001EE226: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001EC8F0(); /* call 0x001EC8F0 */

loc_001EE230: ;
    esp = esp + 4;

loc_001EE233: ;
    POP32(esp, ebx);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001EE240
 * Original: 0x001EE240 - 0x001EE2B8 (120 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE240(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001EE240: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x56);
    eax = 0x78;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001EE251: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001EE2B7; /* je: equal / zero */

loc_001EE258: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    ecx = MEM32(esp + 4);
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x648E54); /* movss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(eax + 0x2C) = 0;
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x70) = xmm1; /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */

loc_001EE2B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EE2C0
 * Original: 0x001EE2C0 - 0x001EE3D3 (275 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE2C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = ebp + 0x34;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_001EE2DA: ;
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebp + 0x40;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_001EE2F2: ;
    xmm7 = MEMF(0x7FA21C); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x2C));
    xmm1 = MEMF(0x6490F4); /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * MEMF(0x649DF0); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x64); /* addss */
    MEMF(ebp + 0x64) = xmm0; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * MEMF(0x649DEC); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x68); /* addss */
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EE36B; /* je: equal / zero */

loc_001EE34A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x4C) = xmm0; /* movss */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_001EE36B: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    edx = MEM32(ebp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ebp + 0x50;
    PUSH32(esp, edx);
    ecx = ebp + 0x54;
    edx = ebx;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001EE389: ;
    eax = MEM32(ebp + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + 0x5C;
    ecx = ebp + 0x60;
    PUSH32(esp, eax);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001EE39D: ;
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + 0x6C;
    ecx = ebp + 0x74;
    PUSH32(esp, eax);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001EE3B1: ;
    xmm1 = MEMF(edx); /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    esp = esp + 0x24;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_001EE3D3(); return; } /* jp: parity */

loc_001EE3C9: ;
    xmm0 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_001EE3E4(); return; /* tail jmp 0x001EE3E4 */

}

/**
 * sub_001EE420
 * Original: 0x001EE420 - 0x001EE508 (232 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE420: ;
    eax = MEM32(0x6B82DC);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001EE43C; /* je: equal / zero */

loc_001EE430: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001EE436: ;
    MEM32(0x771760) = esi;

loc_001EE43C: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001EE456; /* je: equal / zero */

loc_001EE449: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001EE450: ;
    MEM32(0x77175C) = ebx;

loc_001EE456: ;
    eax = MEM32(0x69DEE0);
    if (CMP_NE(eax, ebx)) goto loc_001EE477; /* jne: not equal / not zero */

loc_001EE45F: ;
    eax = MEM32(0x69DEDC);
    PUSH32(esp, 0x69DEE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001EE46F: ;
    eax = MEM32(0x69DEE0);
    esp = esp + 8;

loc_001EE477: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_NE(eax, ebx)) goto loc_001EE490; /* jne: not equal / not zero */

loc_001EE47D: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001EE485: ;
    eax = MEM32(0x69DEE0);
    MEM32(0x771764) = ebx;

loc_001EE490: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001EE4AC; /* je: equal / zero */

loc_001EE498: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001EE4A1: ;
    eax = MEM32(0x69DEE0);
    MEM32(0x771764) = esi;

loc_001EE4AC: ;
    if (CMP_NE(eax, ebx)) goto loc_001EE4C9; /* jne: not equal / not zero */

loc_001EE4B0: ;
    ecx = MEM32(0x69DEDC);
    PUSH32(esp, 0x69DEE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001EE4C1: ;
    eax = MEM32(0x69DEE0);
    esp = esp + 8;

loc_001EE4C9: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = eax;
    edi = 1;
    if (CMP_NE(eax, ebx)) goto loc_001EE4E2; /* jne: not equal / not zero */

loc_001EE4D4: ;
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001EE4DC: ;
    MEM32(0x771768) = ebx;

loc_001EE4E2: ;
    if (CMP_EQ(MEM32(0x771768), esi)) goto loc_001EE4F9; /* je: equal / zero */

loc_001EE4EA: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001EE4F3: ;
    MEM32(0x771768) = esi;

loc_001EE4F9: ;
    if (CMP_A(MEM8(0x75C2D4), LO8(ebx))) { sub_001EE508(); return; } /* ja: above (unsigned >) */

loc_001EE501: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001EE598(); return; /* tail jmp 0x001EE598 */

}

/**
 * sub_001EE790
 * Original: 0x001EE790 - 0x001EEC00 (1136 bytes, 244 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE790(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001EE790: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0x6C);
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm0 = MEMF(esi + 0x40); /* movss */
    xmm2 = MEMF(esi + 0x48); /* movss */
    xmm3 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm0 - MEMF(esi + 0x40); /* subss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    eax = MEM32(esp + 0x2C);
    xmm2 = MEMF(esi + 0x40); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x30) = xmm2; /* movss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0; /* movss */
    edx = MEM32(esp + 0x34);
    eax = esp + 0x14;
    ebx = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001EE840: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm4 = MEMF(esi + 0x40); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(esi + 0x44); /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esi + 0x48); /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = MEM32(esp + 0x38);
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esi + 0x48); /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x44); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x3C) = xmm3; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEMF(esp + 0x40) = xmm1; /* movss */
    edx = MEM32(esp + 0x40);
    eax = esp + 0x2C;
    ebx = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001EE8C2: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_001EE8EA: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 - MEMF(esp + 0x74); /* subss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 * xmm0; /* mulss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm1 = xmm1 + MEMF(esp + 0x2C); /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x64) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = MEMF(esi + 0x38); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    PUSH32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    SET_LO8(eax, 0); /* xor self */
    edi = esp + 0x50;
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001EEC00(); /* call 0x001EEC00 */

loc_001EE998: ;
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x38); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    MEMF(esp + 0x60) = xmm4; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001EEC00(); /* call 0x001EEC00 */

loc_001EEA57: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x24); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    MEMF(esp + 0x64) = xmm4; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001EEC00(); /* call 0x001EEC00 */

loc_001EEB15: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    xmm0 = MEMF(esi + 0x6C); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: fsubr dword ptr [0x648d14] */
    xmm0 = xmm0 * MEMF(esp + 0x80); /* mulss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x38); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 + xmm3; /* addss */
    PUSH32(esp, 0x3F59999A);
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm3; /* movss */
    MEMF(esp + 0x6C) = xmm4; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_001EEBE9: ;
    PUSH32(esp, esi);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_001EEC00(); /* call 0x001EEC00 */

loc_001EEBF1: ;
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_001EEBF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001EEC00
 * Original: 0x001EEC00 - 0x001EF0B1 (1201 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEC00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x7717E4);
    PUSH32(esp, esi);
    ecx = 2;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001EEDB2; /* je: equal / zero */

loc_001EEC19: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = 0x800;
    if (CMP_EQ(eax, ecx)) goto loc_001EEC34; /* je: equal / zero */

loc_001EEC22: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001EEC34: ;
    edx = MEM32(0x7717C4);
    eax = 0; /* xor self */
    if (CMP_EQ(edx, eax)) goto loc_001EEC50; /* je: equal / zero */

loc_001EEC40: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_001EEC50: ;
    edx = MEM32(0x7717A4);
    ebx = 4;
    if (CMP_EQ(edx, ebx)) goto loc_001EEC71; /* je: equal / zero */

loc_001EEC5F: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547370) = ebx;
    MEM32(0x7717A4) = ebx;

loc_001EEC71: ;
    if (CMP_EQ(MEM32(0x771784), eax)) goto loc_001EEC89; /* je: equal / zero */

loc_001EEC79: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_001EEC89: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_001EECA3; /* je: equal / zero */

loc_001EEC91: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001EECA3: ;
    if (CMP_EQ(MEM32(0x7717E8), ecx)) goto loc_001EECBD; /* je: equal / zero */

loc_001EECAB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x5473E0) = ecx;
    MEM32(0x7717E8) = ecx;

loc_001EECBD: ;
    edx = MEM32(0x7717C8);
    eax = 1;
    if (CMP_EQ(edx, eax)) goto loc_001EECDC; /* je: equal / zero */

loc_001EECCC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x5473E8) = eax;
    MEM32(0x7717C8) = eax;

loc_001EECDC: ;
    edx = 7;
    if (CMP_EQ(MEM32(0x7717A8), edx)) goto loc_001EED04; /* je: equal / zero */

loc_001EECE9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x5473F0) = edx;
    MEM32(0x7717A8) = edx;
    esi = 0x800;

loc_001EED04: ;
    if (CMP_EQ(MEM32(0x771788), eax)) goto loc_001EED1C; /* je: equal / zero */

loc_001EED0C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x5473F8) = eax;
    MEM32(0x771788) = eax;

loc_001EED1C: ;
    if (CMP_EQ(MEM32(0x771778), ecx)) goto loc_001EED36; /* je: equal / zero */

loc_001EED24: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x5473FC) = ecx;
    MEM32(0x771778) = ecx;

loc_001EED36: ;
    if (CMP_EQ(MEM32(0x7717EC), ecx)) goto loc_001EED50; /* je: equal / zero */

loc_001EED3E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547460) = ecx;
    MEM32(0x7717EC) = ecx;

loc_001EED50: ;
    if (CMP_EQ(MEM32(0x7717CC), eax)) goto loc_001EED68; /* je: equal / zero */

loc_001EED58: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547468) = eax;
    MEM32(0x7717CC) = eax;

loc_001EED68: ;
    if (CMP_EQ(MEM32(0x7717AC), ebx)) goto loc_001EED82; /* je: equal / zero */

loc_001EED70: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547470) = ebx;
    MEM32(0x7717AC) = ebx;

loc_001EED82: ;
    if (CMP_EQ(MEM32(0x77178C), eax)) goto loc_001EED9A; /* je: equal / zero */

loc_001EED8A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547478) = eax;
    MEM32(0x77178C) = eax;

loc_001EED9A: ;
    if (CMP_EQ(MEM32(0x77177C), ecx)) goto loc_001EEF45; /* je: equal / zero */

loc_001EEDA6: ;
    eax = MEM32(0x5499F0);
    eax = eax | esi;
    goto loc_001EEF34;

loc_001EEDB2: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = 0x800;
    if (CMP_EQ(eax, ecx)) goto loc_001EEDCD; /* je: equal / zero */

loc_001EEDBB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001EEDCD: ;
    esi = MEM32(0x7717C4);
    eax = 0; /* xor self */
    if (CMP_EQ(esi, eax)) goto loc_001EEDE9; /* je: equal / zero */

loc_001EEDD9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_001EEDE9: ;
    esi = MEM32(0x7717A4);
    ebx = 4;
    if (CMP_EQ(esi, ebx)) goto loc_001EEE0A; /* je: equal / zero */

loc_001EEDF8: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547370) = ebx;
    MEM32(0x7717A4) = ebx;

loc_001EEE0A: ;
    if (CMP_EQ(MEM32(0x771784), eax)) goto loc_001EEE22; /* je: equal / zero */

loc_001EEE12: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_001EEE22: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_001EEE3C; /* je: equal / zero */

loc_001EEE2A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001EEE3C: ;
    if (CMP_EQ(MEM32(0x7717E8), ecx)) goto loc_001EEE56; /* je: equal / zero */

loc_001EEE44: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473E0) = ecx;
    MEM32(0x7717E8) = ecx;

loc_001EEE56: ;
    esi = MEM32(0x7717C8);
    eax = 1;
    if (CMP_EQ(esi, eax)) goto loc_001EEE75; /* je: equal / zero */

loc_001EEE65: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473E8) = eax;
    MEM32(0x7717C8) = eax;

loc_001EEE75: ;
    if (CMP_EQ(MEM32(0x7717A8), ebx)) goto loc_001EEE8F; /* je: equal / zero */

loc_001EEE7D: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473F0) = ebx;
    MEM32(0x7717A8) = ebx;

loc_001EEE8F: ;
    if (CMP_EQ(MEM32(0x771788), eax)) goto loc_001EEEA7; /* je: equal / zero */

loc_001EEE97: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473F8) = eax;
    MEM32(0x771788) = eax;

loc_001EEEA7: ;
    if (CMP_EQ(MEM32(0x771778), ecx)) goto loc_001EEEC1; /* je: equal / zero */

loc_001EEEAF: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x5473FC) = ecx;
    MEM32(0x771778) = ecx;

loc_001EEEC1: ;
    if (CMP_EQ(MEM32(0x7717EC), ecx)) goto loc_001EEEDB; /* je: equal / zero */

loc_001EEEC9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547460) = ecx;
    MEM32(0x7717EC) = ecx;

loc_001EEEDB: ;
    if (CMP_EQ(MEM32(0x7717CC), eax)) goto loc_001EEEF3; /* je: equal / zero */

loc_001EEEE3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547468) = eax;
    MEM32(0x7717CC) = eax;

loc_001EEEF3: ;
    if (CMP_EQ(MEM32(0x7717AC), ebx)) goto loc_001EEF0D; /* je: equal / zero */

loc_001EEEFB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547470) = ebx;
    MEM32(0x7717AC) = ebx;

loc_001EEF0D: ;
    if (CMP_EQ(MEM32(0x77178C), eax)) goto loc_001EEF25; /* je: equal / zero */

loc_001EEF15: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(0x547478) = eax;
    MEM32(0x77178C) = eax;

loc_001EEF25: ;
    if (CMP_EQ(MEM32(0x77177C), ecx)) goto loc_001EEF45; /* je: equal / zero */

loc_001EEF2D: ;
    eax = MEM32(0x5499F0);
    eax = eax | edx;

loc_001EEF34: ;
    MEM32(0x5499F0) = eax;
    MEM32(0x54747C) = ecx;
    MEM32(0x77177C) = ecx;

loc_001EEF45: ;
    esi = 0x23;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001EEF4F: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + ebx) = 5;
    eax = eax + ebx;
    MEM32(eax + ebx) = 0x40781818;
    ecx = MEM32(edi);
    xmm0 = MEMF(ebp + 0x68); /* movss */
    xmm2 = MEMF(ebp + 0x64); /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm3 = MEMF(edi + 4); /* movss */
    eax = eax + ebx;
    MEM32(eax + ebx) = ecx;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + ebx;
    MEM32(eax + ebx) = 0xFFFA3232u;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    xmm2 = MEMF(ebp + 0x68); /* movss */
    xmm3 = MEMF(ebp + 0x64); /* movss */
    xmm0 = MEMF(edi + 0x14); /* movss */
    xmm4 = MEMF(edi + 0x10); /* movss */
    edx = MEM32(edi + 0xC);
    eax = eax + ebx;
    MEM32(eax + ebx) = edx;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm4; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + ebx;
    MEM32(eax + ebx) = 0xFFFA3232u;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm2; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm0; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x68); /* movss */
    xmm2 = MEMF(ebp + 0x64); /* movss */
    xmm3 = MEMF(edi + 0x20); /* movss */
    ecx = MEM32(edi + 0x18);
    xmm4 = MEMF(edi + 0x1C); /* movss */
    eax = eax + ebx;
    MEM32(eax + ebx) = ecx;
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm4; /* movss */
    eax = eax + ebx;
    MEMF(eax + ebx) = xmm3; /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    eax = eax + ebx;
    eax = eax + ebx;
    MEM32(eax) = 0xFFFA3232u;
    eax = eax + ebx;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + ebx;
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax) = xmm2; /* movss */
    eax = eax + ebx;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax) = xmm3; /* movss */
    edx = MEM32(0x5499E8);
    MEMF(eax + ebx) = xmm1; /* movss */
    eax = eax + ebx;
    eax = eax + ebx;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + ebx;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + ebx;
    MEM32(eax) = 0x417FC;
    eax = eax + ebx;
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, ebp);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF0C0
 * Original: 0x001EF0C0 - 0x001EF124 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF0C0: ;
    eax = MEM32(esp + 0xC);
    if (CMP_A(eax, 0x65)) goto loc_001EF123; /* ja: above (unsigned >) */

loc_001EF0C9: ;
    eax = ZX8(MEM8(eax + 0x1EF134));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1EF124)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    if (CMP_NE(edx, MEM32(eax + 0x30))) goto loc_001EF122; /* jne: not equal / not zero */

loc_001EF0E7: ;
    MEM8(eax + 0x2C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    if (CMP_EQ(MEM32(eax + 4), 0x42)) goto loc_001EF122; /* je: equal / zero */

loc_001EF102: ;
    MEM8(ecx + 0x2C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    if (CMP_EQ(MEM32(eax + 4), 0x42)) goto loc_001EF122; /* je: equal / zero */

loc_001EF11D: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001EF122: ;
    POP32(esp, esi);

loc_001EF123: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF1A0
 * Original: 0x001EF1A0 - 0x001EF1AD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF1A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EF1A0: ;
    esp = esp - 0x18;
    if (TEST_NZ(esi, esi)) { sub_001EF1AD(); return; } /* jne: not equal / not zero */

loc_001EF1A7: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF250
 * Original: 0x001EF250 - 0x001EF546 (758 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF250(void)
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

loc_001EF250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x4C);
    ecx = MEM32(esi + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001EF532; /* je: equal / zero */

loc_001EF270: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x50))) goto loc_001EF532; /* jne: not equal / not zero */

loc_001EF27F: ;
    xmm0 = MEMF(eax + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    (void)0; /* cmp MEM8(eax + 0x5D), 0xFF - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x649898); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    if (CMP_EQ(MEM8(eax + 0x5D), 0xFF)) goto loc_001EF4EF; /* je: equal / zero */

loc_001EF2A8: ;
    ecx = MEM32(esi + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_001EF4EF; /* je: equal / zero */

loc_001EF2B6: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001EF515; /* jbe: below or equal (unsigned <=) */

loc_001EF2C3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF2C8: ;
    xmm0 = xmm0 * MEMF(0x649898); /* mulss */
    edi = 0; /* xor self */
    /* comiss xmm0, MEMF(0x649894) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649894))) goto loc_001EF2F1; /* jbe: below or equal (unsigned <=) */

loc_001EF2DB: ;
    ecx = 0x59B08C;
    eax = ecx;

loc_001EF2E2: ;
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    eax = eax + 4;
    edi++;
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    ecx = eax;
    if ((xmm0 > MEMF(eax))) goto loc_001EF2E2; /* ja: above (unsigned >) */

loc_001EF2F1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF2F6: ;
    edi = edi + edi * 2;
    edi = edi << 2;
    xmm1 = MEMF(edi + 0x59B044); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x59B038); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x59B038); /* addss */
    eax = edi + 0x59B044;
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x59B048); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x59B03C); /* subss */
    ebx = edi + 0x59B038;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x59B03C); /* addss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x59B04C); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x59B040); /* subss */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x59B040); /* addss */
    PUSH32(esp, 0x5D4CB4);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001EF381: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001EF395: ;
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001EF3A5: ;
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001EF3BC: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = edi + 0x59B0A8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001EF3D5: ;
    esp = esp + 0x38;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF3DD: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x3C); /* subss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x40); /* subss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 - MEMF(esp + 0x44); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001EF4A1; /* jnp: not parity */

loc_001EF479: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */

loc_001EF4A1: ;
    edi = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x5D);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x59B0F4), _icall_esp); /* indirect call */
    }

loc_001EF4C9: ;
    xmm1 = MEMF(edi + 0x54); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_001EF2C3; /* ja: above (unsigned >) */

loc_001EF4EB: ;
    eax = edi;
    goto loc_001EF515;

loc_001EF4EF: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001EF515; /* jbe: below or equal (unsigned <=) */

loc_001EF4FC: ;
    xmm2 = MEMF(eax + 0x54); /* movss */

loc_001EF501: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_001EF501; /* ja: above (unsigned >) */

loc_001EF510: ;
    MEMF(eax + 0x54) = xmm2; /* movss */

loc_001EF515: ;
    SET_LO8(ecx, MEM8(eax + 0x5C));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001EF53F; /* je: equal / zero */

loc_001EF51D: ;
    ecx = SX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x59B0F0), _icall_esp); /* indirect call */
    }

loc_001EF528: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001EF532: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */

loc_001EF53F: ;
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
 * sub_001EF550
 * Original: 0x001EF550 - 0x001EF88B (827 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF550: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = 0x303;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF564: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64A280); /* mulss */
    xmm5 = xmm5 + MEMF(0x64A27C); /* addss */
    xmm5 = xmm5 * MEMF(0x648D2C); /* mulss */
    MEM32(esp + 0x3C) = 0x2B;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001EF58C: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_001EF598; /* jns: not sign (positive) */

loc_001EF593: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_001EF598: ;
    xmm6 = 0.0f; /* xorps self = zero */
    eax = eax + 0xA;
    MEM16(esp + 0x10) = LO16(eax);
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEM8(esp + 0x1C) = 0xFF;
    MEM8(esp + 0x1D) = 0xFF;
    MEM8(esp + 0x1E) = 0xFF;
    MEM8(esp + 0x1F) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF5C8: ;
    esi = MEM32(esp + 0x94);
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FD8); /* addss */
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0xA4);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ebp = 1;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = edx;
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x78) = xmm6; /* movss */
    MEM16(esp + 0x40) = 5;
    MEM16(esp + 0x42) = 0x33;
    MEM16(esp + 0x44) = LO16(ebp);
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001EF677: ;
    edi = eax;
    edi = edi & ebp;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001EF682: ;
    eax = eax & ebp;
    edi = edi | eax;
    edi = edi << 6;
    edi = edi | 0xC205;
    MEM32(esp + 0x7C) = edi;
    edi = MEM32(esp + 0x90);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    ebx = 0; /* xor self */
    eax = 2;
    edx = esp + 0x10;
    MEM8(esp + 0x84) = 0xFF;
    MEM8(esp + 0x85) = 0xFF;
    MEM8(esp + 0x86) = 0xFF;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM8(esp + 0x9B) = 4;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = 4;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001EF6F0: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = 4;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    xmm0 = MEMF(0x6492D8); /* movss */
    ecx = MEM32(esi + 8);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64A278); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A274); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A270); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(esp + 0x58) = eax;
    eax = 3;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEM32(esp + 0x5C) = eax;
    MEM8(esp + 0x68) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x3C) = ecx;
    MEM16(esp + 0x58) = LO16(ebx);
    MEM16(esp + 0x5A) = 0xFF;
    MEM16(esp + 0x5C) = 0xFFC0;
    MEM16(esp + 0x5E) = 0x2E;
    MEM16(esp + 0x68) = 0x14;
    MEM16(esp + 0x6A) = 0xF;
    MEM16(esp + 0x6C) = LO16(ebp);
    MEM8(esp + 0x6E) = 0xC;
    MEM8(esp + 0x6F) = 2;
    MEM8(esp + 0x73) = 0xFF;
    MEM8(esp + 0x72) = 0xFF;
    MEM8(esp + 0x71) = 0xFF;
    MEM8(esp + 0x74) = 0xFF;
    MEM8(esp + 0x77) = LO8(ebx);
    MEM8(esp + 0x76) = LO8(ebx);
    MEM8(esp + 0x75) = LO8(ebx);
    MEM8(esp + 0x78) = LO8(ebx);
    MEM8(esp + 0x7B) = 0xFF;
    MEM8(esp + 0x7A) = 0xFF;
    MEM8(esp + 0x79) = 0xFF;
    MEM8(esp + 0x7C) = 0xFF;
    MEM8(esp + 0x7F) = LO8(ebx);
    MEM8(esp + 0x7E) = LO8(ebx);
    MEM8(esp + 0x7D) = LO8(ebx);
    MEM8(esp + 0x80) = LO8(ebx);
    MEM8(esp + 0x81) = 0xFF;
    MEM8(esp + 0x82) = LO8(ebx);
    MEM32(esp + 0x84) = 0x205;
    MEM32(esp + 0x88) = 0x63000;
    MEM16(esp + 0x8C) = 0xA;
    MEM16(esp + 0x8E) = 0x19;
    MEM16(esp + 0x90) = LO16(ebp);
    MEM8(esp + 0x92) = LO8(ebx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM8(esp + 0x98) = 0xFF;
    MEM8(esp + 0x99) = LO8(ebx);
    MEM8(esp + 0x9A) = 0xFF;
    MEM8(esp + 0x9B) = 0xFF;
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_001EF880: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF890
 * Original: 0x001EF890 - 0x001EFAE8 (600 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF890(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm5, xmm6, xmm7;

loc_001EF890: ;
    esp = esp - 0xD4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xDC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF8A7: ;
    xmm6 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(0x648D2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64AEC8); /* mulss */
    xmm5 = xmm5 + MEMF(0x64AEC4); /* addss */
    xmm5 = xmm5 * xmm7; /* mulss */
    MEMF(esp + 8) = xmm6; /* movss */
    MEMF(esp + 0xC) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF8DF: ;
    xmm0 = xmm0 * MEMF(0x64AEC0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AEBC); /* addss */
    xmm0 = xmm0 * MEMF(0x649284); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF908: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF91B: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF92E: ;
    eax = MEM32(esp + 0xE4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    eax = MEM32(eax + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0xF4);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF9A1: ;
    xmm5 = MEMF(0x64AEB8); /* movss */
    xmm6 = MEMF(0x64AEB4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF9D1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EF9E8: ;
    xmm0 = xmm0 * MEMF(0x64A358); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AEB0); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x70) = 0x29E8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001EFA0F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x14;
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001EFA23: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 0x24;
    MEM32(esp + 0x78) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(esi + 0x3B), 0x1A - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM8(esi + 0x3B), 0x1A)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esp + 0xAC) = LO8(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, eax);
    MEM8(esp + 0x80) = LO8(eax);
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0xB4) = eax;
    PUSH32(esp, eax);
    MEM8(esp + 0xA0) = 0xFF;
    MEM32(esp + 0xA4) = 0x157100;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM32(esp + 0xCC) = edi;
    SET_LO8(ecx, MEM8(edi + 0x10B));
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM8(esp + 0xD4) = LO8(ecx);
    MEM16(esp + 0xD6) = 0xA;
    MEM16(esp + 0xD8) = 0x19;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001EFADC: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFAF0
 * Original: 0x001EFAF0 - 0x001EFAFD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFAF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EFAF0: ;
    esp = esp - 0x14;
    if (TEST_NZ(esi, esi)) { sub_001EFAFD(); return; } /* jne: not equal / not zero */

loc_001EFAF7: ;
    eax = 0; /* xor self */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFB90
 * Original: 0x001EFB90 - 0x001F0020 (1168 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB90(void)
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

loc_001EFB90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    (void)0; /* cmp MEM8(ebx + 0x59), 0xFF - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x649898); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x50); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(ebx + 0x50) = xmm0; /* movss */
    if (CMP_EQ(MEM8(ebx + 0x59), 0xFF)) goto loc_001EFFDE; /* je: equal / zero */

loc_001EFBCB: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001F0004; /* jbe: below or equal (unsigned <=) */

loc_001EFBD8: ;
    goto loc_001EFBE0;

    /* nop */

loc_001EFBE0: ;
    edx = MEM32(ebx + 0x4C);
    esi = esp + 0xB0;
    PUSH32(esp, 0); sub_0006AC90(); /* call 0x0006AC90 */

loc_001EFBEF: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x16);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x14);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(edx + 0x1C); /* addss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    MEMF(esp + 0xE8) = xmm1; /* movss */
    xmm0 = MEMF(edx + 0x7C); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0xF0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x84); /* movss */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0xF4;
    PUSH32(esp, edx);
    eax = ecx;
    MEMF(esp + 0x120) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x138) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001EFC93: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EFC98: ;
    xmm0 = xmm0 * MEMF(0x649898); /* mulss */
    esi = 0; /* xor self */
    /* comiss xmm0, MEMF(0x649894) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649894))) goto loc_001EFCC1; /* jbe: below or equal (unsigned <=) */

loc_001EFCAB: ;
    ecx = 0x59B08C;
    eax = ecx;

loc_001EFCB2: ;
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    eax = eax + 4;
    esi++;
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    ecx = eax;
    if ((xmm0 > MEMF(eax))) goto loc_001EFCB2; /* ja: above (unsigned >) */

loc_001EFCC1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EFCC6: ;
    esi = esi + esi * 2;
    esi = esi << 2;
    xmm1 = MEMF(esi + 0x59B10C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x59B100); /* subss */
    xmm2 = MEMF(esi + 0x59B110); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x59B104); /* subss */
    xmm3 = MEMF(esi + 0x59B114); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x59B108); /* subss */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x59B100); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x59B104); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(esi + 0x59B108); /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    MEMF(esp + 0x7C) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001EFD4C: ;
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xAC); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B100); /* movss */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B104); /* movss */
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B108); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001EFDC6: ;
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B10C); /* movss */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B110); /* movss */
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B114); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001EFE40: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B158); /* movss */
    ecx = esp + 0xB0;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B15C); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x59B160); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001EFEA5: ;
    xmm0 = MEMF(esp + 0x74); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001EFECE: ;
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm4 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x34); /* subss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x38); /* subss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 - MEMF(esp + 0x3C); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001EFF92; /* jnp: not parity */

loc_001EFF6A: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */

loc_001EFF92: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x59);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x59B0F4), _icall_esp); /* indirect call */
    }

loc_001EFFBA: ;
    xmm1 = MEMF(ebx + 0x50); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0x50) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_001EFBE0; /* ja: above (unsigned >) */

loc_001EFFDC: ;
    goto loc_001F0004;

loc_001EFFDE: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001F0004; /* jbe: below or equal (unsigned <=) */

loc_001EFFEB: ;
    xmm2 = MEMF(ebx + 0x50); /* movss */

loc_001EFFF0: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_001EFFF0; /* ja: above (unsigned >) */

loc_001EFFFF: ;
    MEMF(ebx + 0x50) = xmm2; /* movss */

loc_001F0004: ;
    SET_LO8(eax, MEM8(ebx + 0x58));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001F0019; /* je: equal / zero */

loc_001F000B: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x59B0F0), _icall_esp); /* indirect call */
    }

loc_001F0016: ;
    esp = esp + 4;

loc_001F0019: ;
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
 * sub_001F0020
 * Original: 0x001F0020 - 0x001F007D (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0020(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F0020: ;
    esp = esp - 0x18;
    if (TEST_Z(esi, esi)) goto loc_001F0077; /* je: equal / zero */

loc_001F0027: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649DE8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649DE4); /* movss */
    ecx = SX16(LO16(ecx));
    PUSH32(esp, edx);
    MEM8(esp + 0xC) = LO8(eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x60;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001F0070: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001F007D(); return; } /* jne: not equal / not zero */

loc_001F0077: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001F00E0
 * Original: 0x001F00E0 - 0x001F04AF (975 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_001F00E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_001F049B; /* je: equal / zero */

loc_001F0100: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) goto loc_001F049B; /* jne: not equal / not zero */

loc_001F010F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001F0114: ;
    xmm0 = xmm0 * MEMF(edi + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x58); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x54); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001F04A8; /* jbe: below or equal (unsigned <=) */

loc_001F0141: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_001F0478; /* je: equal / zero */

loc_001F014F: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D58C4);
    MEM32(esp + 0x80) = 0x303;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001F016C: ;
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x59B1A0);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001F0183: ;
    ecx = esp + 0xE4;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x59B1AC);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001F019A: ;
    eax = esp + 0xF0;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x59B1B8);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001F01B1: ;
    edx = esp + 0xFC;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x59B1C4);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001F01C8: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x70); /* subss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x74); /* subss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x78); /* subss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x7C); /* subss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x80); /* subss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x84); /* subss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    xmm0 = MEMF(0x64A26C); /* movss */
    esp = esp + 0x38;
    ecx = 0x19;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A268); /* movss */
    MEM32(esp + 0x7C) = 0x29;
    MEM16(esp + 0x80) = LO16(ecx);
    MEM16(esp + 0x82) = 0xA;
    ebx = 0xCE05;
    MEM8(esp + 0xC4) = 0x10;
    MEM8(esp + 0xC5) = LO8(eax);
    MEM8(esp + 0xC6) = LO8(eax);
    MEM8(esp + 0xC7) = 0;
    MEM16(esp + 0x84) = LO16(ecx);
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM8(esp + 0x5C) = 0x57;
    MEM8(esp + 0x5D) = 0x55;
    MEM8(esp + 0x5E) = 0x5A;
    MEM8(esp + 0x5F) = 0xFF;
    esi = 2;
    goto loc_001F0303;

loc_001F02FC: ;
    ebx = MEM32(esp + 0xBC);

loc_001F0303: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001F0308: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001F0311; /* je: equal / zero */

loc_001F030C: ;
    ebx = ebx | 0x40;
    goto loc_001F0314;

loc_001F0311: ;
    ebx = ebx & 0xFFFFFFBFu;

loc_001F0314: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001F0319: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001F0325; /* je: equal / zero */

loc_001F031D: ;
    ebx = ebx | 0x80;
    goto loc_001F032B;

loc_001F0325: ;
    ebx = ebx & 0xFFFFFF7Fu;

loc_001F032B: ;
    MEM32(esp + 0xBC) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001F0337: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001F0341: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64A264); /* mulss */
    xmm5 = xmm5 + MEMF(0x649548); /* addss */
    xmm5 = xmm5 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001F0361: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_001F036D; /* jns: not sign (positive) */

loc_001F0368: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_001F036D: ;
    eax = eax + 0x14;
    MEM16(esp + 0x50) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001F037A: ;
    xmm1 = MEMF(0x648E38); /* movss */
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    ecx = esp + eax + 0x38;
    edx = MEM32(ecx);
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esp + eax + 0x18); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEM32(esp + 0x94) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(esp + eax + 0x1C); /* movss */
    MEM32(esp + 0x98) = edx;
    SET_LO8(edx, MEM8(edi + 4));
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + eax + 0x20); /* movss */
    MEM8(esp + 0x34) = LO8(edx);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    MEM32(esp + 0xA8) = ecx;
    ecx = esp + 0x5C;
    PUSH32(esp, 1);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x80) = 4;
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x88) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001F0441: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebx)) goto loc_001F0452; /* je: equal / zero */

loc_001F0448: ;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x170) = edx;

loc_001F0452: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001F02FC; /* ja: above (unsigned >) */

loc_001F0471: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F0478: ;
    xmm2 = MEMF(edi + 0x54); /* movss */
    /* nop */

loc_001F0480: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_001F0480; /* ja: above (unsigned >) */

loc_001F048F: ;
    MEMF(edi + 0x54) = xmm2; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F049B: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_001F04A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F04B0
 * Original: 0x001F04B0 - 0x001F04E7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F04B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F04B0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x2D - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x2D)) goto loc_001F04E6; /* jne: not equal / not zero */

loc_001F04BB: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_NE(edx, esi)) goto loc_001F04D7; /* jne: not equal / not zero */

loc_001F04C9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x4C) = edx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(ecx + 0x50) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F04D7: ;
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_001F04E5; /* jne: not equal / not zero */

loc_001F04DC: ;
    MEM32(ecx + 0x4C) = esi;
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(ecx + 0x50) = LO8(edx);

loc_001F04E5: ;
    POP32(esp, esi);

loc_001F04E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F04F0
 * Original: 0x001F04F0 - 0x001F0572 (130 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F04F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F04F0: ;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    esi = MEM32(0x775F58);
    if (TEST_Z(esi, esi)) goto loc_001F0510; /* je: equal / zero */

loc_001F04FE: ;
    edi = edi;

loc_001F0500: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F1A10(); /* call 0x001F1A10 */

loc_001F0506: ;
    esi = MEM32(esi + 4);
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_001F0500; /* jne: not equal / not zero */

loc_001F0510: ;
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_001F0515: ;
    eax = MEM32(0x68C7DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D27C(); /* call 0x0042D27C */

loc_001F0520: ;
    ecx = MEM32(0x59B2D0);
    edx = MEM32(0x59B2E8);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1D0);
    PUSH32(esp, 0x276);
    PUSH32(esp, 8);
    PUSH32(esp, 5);
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_001F0970(); /* call 0x001F0970 */

loc_001F054A: ;
    eax = esp + 4;
    PUSH32(esp, 0); sub_001F0780(); /* call 0x001F0780 */

loc_001F0553: ;
    esi = MEM32(0x775F58);
    if (TEST_Z(esi, esi)) goto loc_001F0570; /* je: equal / zero */

loc_001F055D: ;
    /* nop */

loc_001F0560: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F1A10(); /* call 0x001F1A10 */

loc_001F0566: ;
    esi = MEM32(esi + 4);
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_001F0560; /* jne: not equal / not zero */

loc_001F0570: ;
    goto loc_001F0570;

}

/**
 * sub_001F0580
 * Original: 0x001F0580 - 0x001F05A2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0580(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F0580: ;
    PUSH32(esp, esi);
    esi = MEM32(0x775F58);
    if (TEST_Z(esi, esi)) goto loc_001F05A0; /* je: equal / zero */

loc_001F058B: ;
    goto loc_001F0590;

    /* nop */

loc_001F0590: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F1A10(); /* call 0x001F1A10 */

loc_001F0596: ;
    esi = MEM32(esi + 4);
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_001F0590; /* jne: not equal / not zero */

loc_001F05A0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F05B0
 * Original: 0x001F05B0 - 0x001F05C8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F05B0(void)
{

loc_001F05B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_001F05C4: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001F05D0
 * Original: 0x001F05D0 - 0x001F061E (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F05D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F05D0: ;
    esp = esp - 0xC;
    PUSH32(esp, 1);
    eax = 0x5F63E8;
    PUSH32(esp, 0); sub_0029CD50(); /* call 0x0029CD50 */

loc_001F05DF: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001F05F0; /* jne: not equal / not zero */

loc_001F05E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002A3830(); /* call 0x002A3830 */

loc_001F05ED: ;
    esp = esp + 4;

loc_001F05F0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000017u);
    MEM32(esp + 0x10) = 0x5F6404;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0); sub_0042DE55(); /* call 0x0042DE55 */

loc_001F061A: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0620
 * Original: 0x001F0620 - 0x001F06A4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0620(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F0620: ;
    esp = esp - 0x134;
    PUSH32(esp, 0x5F63E8);
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A0);
    eax = esp + 0x3C;
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F0644: ;
    esp = esp + 0x14;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEM8(esp + 0x13F) = 0;
    PUSH32(esp, 0); sub_0042D1FA(); /* call 0x0042D1FA */

loc_001F0660: ;
    if (TEST_NZ(eax, eax)) goto loc_001F066B; /* jne: not equal / not zero */

loc_001F0664: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002A3830(); /* call 0x002A3830 */

loc_001F066B: ;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x13C);
    edx = MEM32(esp + 0x140);
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000017u);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_0042DE55(); /* call 0x0042DE55 */

loc_001F069D: ;
    esp = esp + 0x134;
    esp += 4; return; /* ret */

}

/**
 * sub_001F06B0
 * Original: 0x001F06B0 - 0x001F06D6 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F06B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F06B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_001F06B9: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_001F06D6(); return; } /* je: equal / zero */

loc_001F06C2: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_001F06D1: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_001F06D8(); return; /* tail jmp 0x001F06D8 */

}

/**
 * sub_001F0780
 * Original: 0x001F0780 - 0x001F08F0 (368 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0780: ;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(0x59B2C8);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = 0x1E0;
    ecx = 0x280;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_001F0B00(); /* call 0x001F0B00 */

loc_001F07A4: ;
    PUSH32(esp, 0x5F63AC);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0042E055(); /* call 0x0042E055 */

loc_001F07B0: ;
    ebp = eax;
    if (CMP_NE(ebp, 0xFFFFFFFFu)) goto loc_001F07C0; /* jne: not equal / not zero */

loc_001F07B7: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F07BC: ;
    if (CMP_NE(eax, edi)) goto loc_001F07E4; /* jne: not equal / not zero */

loc_001F07C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042E0BC(); /* call 0x0042E0BC */

loc_001F07C6: ;
    ebx = eax;
    if (CMP_NE(ebx, edi)) goto loc_001F07D5; /* jne: not equal / not zero */

loc_001F07CC: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F07D1: ;
    if (CMP_NE(eax, edi)) goto loc_001F07E4; /* jne: not equal / not zero */

loc_001F07D5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042E131(); /* call 0x0042E131 */

loc_001F07DB: ;
    if (CMP_NE(eax, edi)) goto loc_001F07E4; /* jne: not equal / not zero */

loc_001F07DF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F07E4: ;
    eax = 0x20;
    ecx = 0x120;
    MEM16(esp + 0x14) = LO16(ecx);
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM16(esp + 0x24) = LO16(ecx);
    MEM16(esp + 0x2C) = LO16(ecx);
    MEM16(esp + 0x34) = LO16(ecx);
    MEM16(esp + 0x3C) = LO16(ecx);
    MEM16(esp + 0x44) = LO16(ecx);
    MEM16(esp + 0x4C) = LO16(ecx);
    MEM16(esp + 0x54) = LO16(ecx);
    MEM16(esp + 0x16) = LO16(eax);
    MEM16(esp + 0x1E) = LO16(eax);
    MEM16(esp + 0x26) = LO16(eax);
    MEM16(esp + 0x2E) = LO16(eax);
    MEM16(esp + 0x36) = LO16(eax);
    MEM16(esp + 0x3E) = LO16(eax);
    MEM16(esp + 0x46) = LO16(eax);
    MEM16(esp + 0x4A) = LO16(eax);
    MEM16(esp + 0x4E) = LO16(eax);
    MEM16(esp + 0x56) = LO16(eax);
    ecx = 0; /* xor self */
    edx = 0xE0;
    MEM16(esp + 0x2A) = LO16(edx);
    MEM16(esi + 0x62) = LO16(eax);
    eax = MEM32(0x7FA1DC);
    MEM16(esp + 0x10) = LO16(edi);
    MEM16(esp + 0x12) = 0x100;
    MEM16(esp + 0x18) = LO16(edi);
    MEM16(esp + 0x1A) = LO16(edi);
    MEM16(esp + 0x20) = LO16(edi);
    MEM16(esp + 0x22) = 0xC0;
    MEM16(esp + 0x28) = LO16(edi);
    MEM16(esp + 0x30) = LO16(edi);
    MEM16(esp + 0x32) = 0xA0;
    MEM16(esp + 0x38) = LO16(edi);
    MEM16(esp + 0x3A) = 0x80;
    MEM16(esp + 0x40) = LO16(edi);
    MEM16(esp + 0x42) = 0x40;
    MEM16(esp + 0x48) = LO16(edi);
    MEM16(esp + 0x50) = LO16(edi);
    MEM16(esp + 0x52) = 0x60;
    SET_LO16(ecx, MEM16(esp + eax * 8 + 0xE));
    MEM16(esi + 0x64) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esp + eax * 8 + 0xA));
    MEM8(esi + 0x60) = 1;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esp + eax * 8 + 0xC));
    SET_LO16(eax, MEM16(esp + eax * 8 + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_001F0C00(); /* call 0x001F0C00 */

loc_001F08E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0970
 * Original: 0x001F0970 - 0x001F0AF7 (391 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0970: ;
    eax = MEM32(0x849770);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(0x84A15C) = 1;
    if (CMP_NE(eax, ebx)) goto loc_001F0A96; /* jne: not equal / not zero */

loc_001F098B: ;
    eax = MEM32(0x5499E8);
    edi = MEM32(eax + 0x1A18);
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001F09B8; /* jne: not equal / not zero */

loc_001F099F: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001F09B8; /* jne: not equal / not zero */

loc_001F09AB: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_001F09B8; /* je: equal / zero */

loc_001F09B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001F09B8: ;
    MEM32(edi) = MEM32(edi) + 1;
    PUSH32(esp, ebp);
    eax = edi;
    MEM32(0x849764) = edi;
    PUSH32(esp, 0); sub_0053C570(); /* call 0x0053C570 */

loc_001F09C8: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_001F09E9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = eax | 0xF0000000u;
    PUSH32(esp, 0x5F6410);
    MEM32(0x849768) = ecx;
    MEM32(0x84976C) = eax;
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_0042E055(); /* call 0x0042E055 */

loc_001F0A0D: ;
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_001F0A1D; /* jne: not equal / not zero */

loc_001F0A14: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F0A19: ;
    if (CMP_NE(eax, ebx)) goto loc_001F0A41; /* jne: not equal / not zero */

loc_001F0A1D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042E0BC(); /* call 0x0042E0BC */

loc_001F0A23: ;
    ebp = eax;
    if (CMP_NE(ebp, ebx)) goto loc_001F0A32; /* jne: not equal / not zero */

loc_001F0A29: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F0A2E: ;
    if (CMP_NE(eax, ebx)) goto loc_001F0A41; /* jne: not equal / not zero */

loc_001F0A32: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042E131(); /* call 0x0042E131 */

loc_001F0A38: ;
    if (CMP_NE(eax, ebx)) goto loc_001F0A41; /* jne: not equal / not zero */

loc_001F0A3C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F0A41: ;
    (void)0; /* cmp MEM8(0x75DF68), LO8(ebx) - flags set for next jcc */
    MEM32(0x849774) = ebp;
    MEM16(0x849778) = 0xC;
    MEM16(0x84977C) = 0x10;
    POP32(esp, ebp);
    if (CMP_EQ(MEM8(0x75DF68), LO8(ebx))) goto loc_001F0A96; /* je: equal / zero */

loc_001F0A62: ;
    PUSH32(esp, ebx);
    MEM8(0x75DF68) = LO8(ebx);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_001F0A6E: ;
    edi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053D700(); /* call 0x0053D700 */

loc_001F0A77: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001F0A7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_001F0A85: ;
    edi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053D700(); /* call 0x0053D700 */

loc_001F0A8E: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001F0A96: ;
    SET_LO16(edx, MEM16(esp + 0x20));
    edi = MEM32(0x849770);
    SET_LO16(eax, MEM16(esp + 0x24));
    SET_LO16(ecx, MEM16(esp + 0x28));
    MEM16(esi + 0x50) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x2C));
    MEM16(esi + 0x56) = LO16(edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0x50);
    MEM16(esi + 0x52) = LO16(eax);
    eax = MEM32(esp + 0x34);
    MEM16(esi + 0x54) = LO16(ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edi++;
    PUSH32(esp, esi);
    MEM32(0x849770) = edi;
    MEM8(esi + 0x60) = LO8(ebx);
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = ecx;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001F0AE5: ;
    POP32(esp, edi);
    MEM16(esi + 0x62) = LO16(ebx);
    MEM16(esi + 0x64) = LO16(ebx);
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F0B00
 * Original: 0x001F0B00 - 0x001F0B47 (71 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0B00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    eax = eax + edi;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_AE(edi, eax)) goto loc_001F0B42; /* jae: above or equal (unsigned >=) */

loc_001F0B0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = esi + ecx;
    /* nop */

loc_001F0B20: ;
    if (CMP_AE(esi, ebx)) goto loc_001F0B3A; /* jae: above or equal (unsigned >=) */

loc_001F0B24: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_001F0B50(); /* call 0x001F0B50 */

loc_001F0B2D: ;
    esi++;
    if (CMP_B(esi, ebx)) goto loc_001F0B24; /* jb: below (unsigned <) */

loc_001F0B32: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x1C);

loc_001F0B3A: ;
    edi++;
    if (CMP_B(edi, eax)) goto loc_001F0B20; /* jb: below (unsigned <) */

loc_001F0B3F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F0B42: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0B50
 * Original: 0x001F0B50 - 0x001F0BFF (175 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B50(void)
{

loc_001F0B50: ;
    eax = MEM32(0x849768);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    PUSH32(esp, ebx);
    eax = eax + MEM32(0x84976C);
    edx = MEM32(eax + ecx * 4);
    ebx = MEM32(esp + 0xC);
    MEM32(esp + 8) = edx;
    edx = edx >> 0x10;
    edx = ZX8(LO8(edx));
    PUSH32(esp, esi);
    esi = eax + ecx * 4;
    eax = ZX8(MEM8(esp + 0x10));
    eax = eax - edx;
    ebx = ebx >> 0x10;
    ecx = ZX8(HI8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    eax = eax + edx;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = edx >> 0x10;
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = MEM32(esp + 0x10);
    MEM8(esp + 0xE) = LO8(edx);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    eax = ZX8(LO8(eax));
    edx = edx >> 8;
    edx = ZX8(LO8(edx));
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    eax = eax + edx;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = edx >> 8;
    SET_LO8(edx, LO8(edx) + LO8(eax));
    MEM8(esp + 0xD) = LO8(edx);
    edx = ZX8(MEM8(esp + 0xC));
    eax = ZX8(LO8(ebx));
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(esp + 0xC) = LO8(ecx);
    eax = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0C00
 * Original: 0x001F0C00 - 0x001F0C30 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0C00: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    SET_LO16(ebx, LO16(eax));
    eax = ZX16(MEM16(ecx + 0xA));
    eax = eax + ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x22);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x16);
    eax = eax << 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    ebp = eax;
    MEM32(esp + 0x20) = ebp;
    if (TEST_Z(LO16(ebx), LO16(ebx))) { sub_001F0C30(); return; } /* je: equal / zero */

loc_001F0C2B: ;
    ecx = ZX16(LO16(ebx));
    g_seh_ebp = ebp; sub_001F0C33(); return; /* tail jmp 0x001F0C33 */

}

/**
 * sub_001F0DD0
 * Original: 0x001F0DD0 - 0x001F0E3D (109 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F0DD0: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_001F0DF0; /* je: equal / zero */

loc_001F0DD6: ;
    if (CMP_EQ(MEM32(edi + 0x10), 0x26)) goto loc_001F0DE1; /* je: equal / zero */

loc_001F0DDC: ;
    PUSH32(esp, 0); sub_001F1490(); /* call 0x001F1490 */

loc_001F0DE1: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_001F0DE9: ;
    MEM32(edi) = 0;
    POP32(esp, esi);

loc_001F0DF0: ;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_001F0E07; /* je: equal / zero */

loc_001F0DF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001F0DFD: ;
    esp = esp + 4;
    MEM32(edi + 4) = 0;

loc_001F0E07: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F0E25; /* je: equal / zero */

loc_001F0E0E: ;
    eax = MEM32(edi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_001F0E25; /* je: equal / zero */

loc_001F0E15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001F0E1B: ;
    esp = esp + 4;
    MEM32(edi + 0x1C) = 0;

loc_001F0E25: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001F0E3C; /* je: equal / zero */

loc_001F0E2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001F0E32: ;
    esp = esp + 4;
    MEM32(edi + 0x14) = 0;

loc_001F0E3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0E40
 * Original: 0x001F0E40 - 0x001F0EB1 (113 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F0E40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(ebx);
    edi = esp + 8;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F0E50: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F0E72; /* jne: not equal / not zero */

loc_001F0E56: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_001F0E6B; /* jle: less or equal (signed <=) */

loc_001F0E63: ;
    ecx = ecx - edx;
    ecx = ecx + esi;
    esi = ecx;
    goto loc_001F0E6F;

loc_001F0E6B: ;
    if (((int32_t)ecx >= 0)) goto loc_001F0E6F; /* jge: greater or equal (signed >=) */

loc_001F0E6D: ;
    esi = esi - edx;

loc_001F0E6F: ;
    MEM32(ebx + 8) = esi;

loc_001F0E72: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx + 0x10) = edi;
    if (TEST_NZ(edi, edi)) goto loc_001F0E99; /* jne: not equal / not zero */

loc_001F0E79: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001F0E82: ;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0); sub_001F2130(); /* call 0x001F2130 */

loc_001F0E93: ;
    esp = esp + 0x14;
    MEM32(ebx + 0x10) = eax;

loc_001F0E99: ;
    eax = MEM32(ebx + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_001F0EAC; /* jne: not equal / not zero */

loc_001F0EA2: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F0EA9: ;
    MEM32(ebx + 0x10) = eax;

loc_001F0EAC: ;
    eax = MEM32(ebx + 0x10);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F0EC0
 * Original: 0x001F0EC0 - 0x001F0FF8 (312 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0EC0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    eax = esi;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F0ED5: ;
    if (CMP_NE(eax, ebp)) goto loc_001F0EF4; /* jne: not equal / not zero */

loc_001F0ED9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_001F0EE7: ;
    esp = esp + 4;
    if (CMP_NE(eax, ebp)) goto loc_001F0EF4; /* jne: not equal / not zero */

loc_001F0EEE: ;
    MEM32(esi + 0x11C) = ebp;

loc_001F0EF4: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (CMP_NE(eax, ebp)) goto loc_001F0F2F; /* jne: not equal / not zero */

loc_001F0EFB: ;
    eax = MEM32(ebx);
    esi = MEM32(ebx + 0xC);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F0F09: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F0F2C; /* jne: not equal / not zero */

loc_001F0F0F: ;
    ecx = MEM32(esp + 0x10);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_001F0F20; /* jle: less or equal (signed <=) */

loc_001F0F1C: ;
    esi = esi - edx;
    goto loc_001F0F26;

loc_001F0F20: ;
    if (CMP_GE((uint32_t)esi + (uint32_t)edx, (uint32_t)edx)) goto loc_001F0F26; /* jge: greater or equal (signed >=) */

loc_001F0F22: ;
    esi = esi - edx;
    esi = esi - ecx;

loc_001F0F26: ;
    MEM32(esp + 0xC) = esi;
    ebp = esi;

loc_001F0F2C: ;
    MEM32(ebx + 0x10) = edi;

loc_001F0F2F: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001F0FEC; /* jne: not equal / not zero */

loc_001F0F3A: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F2130(); /* call 0x001F2130 */

loc_001F0F4B: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001F0FEC; /* jne: not equal / not zero */

loc_001F0F59: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F0F60: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001F0FEC; /* jne: not equal / not zero */

loc_001F0F6B: ;
    if (CMP_BE(MEM32(ebx + 0xC), ebp)) goto loc_001F0FEC; /* jbe: below or equal (unsigned <=) */

loc_001F0F70: ;
    eax = MEM32(ebx);
    edi = esp + 0x10;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F0F83: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001F0F8D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebp = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001F2130(); /* call 0x001F2130 */

loc_001F0F9C: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001F0FB0; /* jne: not equal / not zero */

loc_001F0FA6: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F0FAD: ;
    MEM32(ebx + 0x10) = eax;

loc_001F0FB0: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F0FC3; /* je: equal / zero */

loc_001F0FB7: ;
    if (CMP_NE(eax, 0x26)) goto loc_001F0FE3; /* jne: not equal / not zero */

loc_001F0FBC: ;
    MEM32(ebx + 0x10) = 0;

loc_001F0FC3: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    ecx = ecx - eax;
    edi = eax + edx;
    eax = ecx;
    ecx = ecx >> 2;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_001F0FE3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001F0FE9: ;
    esp = esp + 4;

loc_001F0FEC: ;
    eax = MEM32(ebx + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1000
 * Original: 0x001F1000 - 0x001F10D1 (209 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1000: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 8) = esi;
    if (CMP_BE(esi & esi, 0)) goto loc_001F10C8; /* jbe: below or equal (unsigned <=) */

loc_001F1021: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001F1023: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001F1028: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_001F11E0(); /* call 0x001F11E0 */

loc_001F102F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_001F1042; /* je: equal / zero */

loc_001F1036: ;
    if (CMP_NE(eax, 0x26)) goto loc_001F10B6; /* jne: not equal / not zero */

loc_001F103B: ;
    SET_LO8(eax, MEM8(ebp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F10B6; /* je: equal / zero */

loc_001F1042: ;
    eax = MEM32(ebp + 0x18);
    eax = eax - MEM32(ebp + 0x2C);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ebx = esi;
    if (CMP_A(esi, eax)) ebx = eax; /* cmova */
    if (CMP_BE(ebx & ebx, 0)) goto loc_001F10B6; /* jbe: below or equal (unsigned <=) */

loc_001F1053: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001F1059: ;
    edi = MEM32(ebp + 0x2C);
    esi = MEM32(ebp + 0x14);
    esi = esi + edi;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(esp + 0x20);
    edi = edi + edx;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001F1095: ;
    edx = MEM32(ebp + 0x2C);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    edx = edx + ebx;
    ecx = ecx + ebx;
    esp = esp + 8;
    eax = eax - ebx;
    MEM32(ebp + 0x2C) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    esi = eax;

loc_001F10B6: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    if (CMP_B(eax, MEM32(ecx))) goto loc_001F1023; /* jb: below (unsigned <) */

loc_001F10C6: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F10C8: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F10E0
 * Original: 0x001F10E0 - 0x001F118F (175 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F10E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F10E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    esi = eax;
    eax = edi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F10FB: ;
    if (TEST_NZ(eax, eax)) goto loc_001F112B; /* jne: not equal / not zero */

loc_001F10FF: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_001F110D: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F112B; /* jne: not equal / not zero */

loc_001F1114: ;
    if (TEST_Z(ebp, ebp)) goto loc_001F1125; /* je: equal / zero */

loc_001F1118: ;
    if (CMP_EQ(ebp, MEM32(esp + 0xC))) goto loc_001F1125; /* je: equal / zero */

loc_001F111E: ;
    eax = 0x57;
    goto loc_001F112B;

loc_001F1125: ;
    MEM32(edi + 0x11C) = ebp;

loc_001F112B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001F1161; /* jne: not equal / not zero */

loc_001F1132: ;
    eax = MEM32(ebx);
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F113D: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F115E; /* jne: not equal / not zero */

loc_001F1143: ;
    ecx = MEM32(esp + 0xC);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_001F1154; /* jle: less or equal (signed <=) */

loc_001F1150: ;
    esi = esi - edx;
    goto loc_001F115A;

loc_001F1154: ;
    if (CMP_GE((uint32_t)esi + (uint32_t)edx, (uint32_t)edx)) goto loc_001F115A; /* jge: greater or equal (signed >=) */

loc_001F1156: ;
    esi = esi - edx;
    esi = esi - ecx;

loc_001F115A: ;
    MEM32(esp + 0x18) = esi;

loc_001F115E: ;
    MEM32(ebx + 0x10) = edi;

loc_001F1161: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001F1185; /* jne: not equal / not zero */

loc_001F1168: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    esi = MEM32(ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1F1190);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F2130(); /* call 0x001F2130 */

loc_001F117F: ;
    esp = esp + 0x10;
    MEM32(ebx + 0x10) = eax;

loc_001F1185: ;
    eax = MEM32(ebx + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F1190
 * Original: 0x001F1190 - 0x001F11D9 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1190: ;
    eax = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_001F11BA; /* jne: not equal / not zero */

loc_001F1198: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x3C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ecx + 0x38);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F11AB; /* je: equal / zero */

loc_001F11A6: ;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + eax;
    goto loc_001F11AE;

loc_001F11AB: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + eax;

loc_001F11AE: ;
    MEM32(ecx + 0x34) = MEM32(ecx + 0x34) + eax;
    MEM8(ecx + 0x3D) = 1;
    PUSH32(esp, 0); sub_001F11E0(); /* call 0x001F11E0 */

loc_001F11BA: ;
    if (CMP_G(eax, 0x26)) goto loc_001F11C6; /* jg: greater (signed >) */

loc_001F11BF: ;
    if (CMP_EQ(eax, 0x26)) goto loc_001F11C5; /* je: equal / zero */

loc_001F11C1: ;
    if (TEST_NZ(eax, eax)) goto loc_001F11D4; /* jne: not equal / not zero */

loc_001F11C5: ;
    esp += 4; return; /* ret */

loc_001F11C6: ;
    if (CMP_L(eax, 0x3E3)) goto loc_001F11D4; /* jl: less (signed <) */

loc_001F11CD: ;
    if (CMP_LE(eax, 0x3E5)) goto loc_001F11C5; /* jle: less or equal (signed <=) */

loc_001F11D4: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

}

/**
 * sub_001F11E0
 * Original: 0x001F11E0 - 0x001F1217 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F11E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F11E0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(edx, MEM8(ebx + 0x30));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(ebx + 0x10) = ebp;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001F1201; /* je: equal / zero */

loc_001F11F0: ;
    eax = MEM32(ebx + 0x28);
    if (CMP_B(MEM32(ebx + 0x18), eax)) goto loc_001F11FD; /* jb: below (unsigned <) */

loc_001F11F8: ;
    if (CMP_AE(MEM32(ebx + 0x20), eax)) goto loc_001F1209; /* jae: above or equal (unsigned >=) */

loc_001F11FD: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_001F1217(); return; } /* jne: not equal / not zero */

loc_001F1201: ;
    eax = MEM32(ebx + 0x28);
    if (CMP_B(MEM32(ebx + 0x18), eax)) { sub_001F1217(); return; } /* jb: below (unsigned <) */

loc_001F1209: ;
    if (CMP_AE(MEM32(ebx + 0x2C), eax)) { sub_001F1217(); return; } /* jae: above or equal (unsigned >=) */

loc_001F120E: ;
    POP32(esp, ebp);
    MEM8(ebx + 0x24) = 1;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F12E0
 * Original: 0x001F12E0 - 0x001F135A (122 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F12E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F12E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x775F48);
    if (TEST_Z(ebx, ebx)) goto loc_001F1358; /* je: equal / zero */

loc_001F12EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001F12F0: ;
    esi = ebx;
    eax = MEM32(esi + 8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = ebx + 4;
    ebx = MEM32(edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001F1321; /* je: equal / zero */

loc_001F12FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_001F1305: ;
    if (TEST_Z(eax, eax)) goto loc_001F131C; /* je: equal / zero */

loc_001F1309: ;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0x110) = 0;
    goto loc_001F1321;

loc_001F131C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1321: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001F132E; /* je: equal / zero */

loc_001F132C: ;
    MEM32(eax) = ecx;

loc_001F132E: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(edi) = 0;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F1345: ;
    ecx = MEM32(0x775F4C);
    ecx--;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x775F4C) = ecx;
    if (TEST_NZ(ebx, ebx)) goto loc_001F12F0; /* jne: not equal / not zero */

loc_001F1356: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F1358: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1360
 * Original: 0x001F1360 - 0x001F13C0 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1360(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1360: ;
    PUSH32(esp, edi);
    edi = MEM32(0x775F48);
    if (TEST_Z(edi, edi)) goto loc_001F13BE; /* je: equal / zero */

loc_001F136B: ;
    PUSH32(esp, esi);
    /* nop */

loc_001F1370: ;
    esi = edi;
    ecx = MEM32(esi + 0x110);
    ecx = ecx - 0;
    eax = edi + 4;
    edi = MEM32(eax);
    if ((ecx == 0)) goto loc_001F13B9; /* je: equal / zero */

loc_001F1382: ;
    ecx--;
    if ((ecx == 0)) goto loc_001F13B4; /* je: equal / zero */

loc_001F1385: ;
    ecx--;
    if ((ecx != 0)) goto loc_001F13B9; /* jne: not equal / not zero */

loc_001F1388: ;
    edx = MEM32(esi);
    ecx = edi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001F1395; /* je: equal / zero */

loc_001F1393: ;
    MEM32(ecx) = edx;

loc_001F1395: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(eax) = 0;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F13AC: ;
    MEM32(0x775F4C) = MEM32(0x775F4C) - 1;
    goto loc_001F13B9;

loc_001F13B4: ;
    PUSH32(esp, 0); sub_001F1500(); /* call 0x001F1500 */

loc_001F13B9: ;
    if (TEST_NZ(edi, edi)) goto loc_001F1370; /* jne: not equal / not zero */

loc_001F13BD: ;
    POP32(esp, esi);

loc_001F13BE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F13C0
 * Original: 0x001F13C0 - 0x001F1441 (129 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F13C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F13C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 0x134);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001F13D2: ;
    if (TEST_Z(eax, eax)) { sub_001F1441(); return; } /* je: equal / zero */

loc_001F13D6: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    edx = MEM32(0x775F48);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = 0x775F44;
    if (TEST_Z(edx, edx)) goto loc_001F13FE; /* je: equal / zero */

loc_001F13EB: ;
    edx = 0x775F48;
    PUSH32(esp, edi);

loc_001F13F1: ;
    ecx = MEM32(edx);
    edi = MEM32(ecx + 4);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = ecx + 4;
    if (TEST_NZ(edi, edi)) goto loc_001F13F1; /* jne: not equal / not zero */

loc_001F13FD: ;
    POP32(esp, edi);

loc_001F13FE: ;
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(0x775F4C) = MEM32(0x775F4C) + 1;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0x110) = 0;
    MEM8(eax + 0x130) = 0;
    edx = 0; /* xor self */
    eax = eax + 0x114;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1450
 * Original: 0x001F1450 - 0x001F1481 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1450(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1450: ;
    if (TEST_Z(eax, eax)) goto loc_001F1480; /* je: equal / zero */

loc_001F1454: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001F1462; /* je: equal / zero */

loc_001F1460: ;
    MEM32(ecx) = edx;

loc_001F1462: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, eax);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F147A: ;
    MEM32(0x775F4C) = MEM32(0x775F4C) - 1;

loc_001F1480: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1490
 * Original: 0x001F1490 - 0x001F14F1 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1490: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM32(esi + 0x114), 0x103)) goto loc_001F14CA; /* jne: not equal / not zero */

loc_001F149F: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E187(); /* call 0x0042E187 */

loc_001F14A9: ;
    edi = 0x9C4;
    edi = edi;

loc_001F14B0: ;
    if (TEST_Z(edi, edi)) goto loc_001F14C9; /* je: equal / zero */

loc_001F14B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_001F14BB: ;
    eax = MEM32(esi + 0x114);
    edi--;
    if (CMP_EQ(eax, 0x103)) goto loc_001F14B0; /* je: equal / zero */

loc_001F14C9: ;
    POP32(esp, edi);

loc_001F14CA: ;
    eax = MEM32(esi + 0x110);
    eax = eax - 0;
    MEM8(esi + 0x130) = 1;
    if ((eax == 0)) goto loc_001F14EF; /* je: equal / zero */

loc_001F14DC: ;
    eax--;
    if ((eax == 0)) goto loc_001F14EA; /* je: equal / zero */

loc_001F14DF: ;
    eax--;
    if ((eax != 0)) goto loc_001F14EF; /* jne: not equal / not zero */

loc_001F14E2: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001F1450(); return; /* tail jmp 0x001F1450 */

loc_001F14EA: ;
    PUSH32(esp, 0); sub_001F1500(); /* call 0x001F1500 */

loc_001F14EF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1500
 * Original: 0x001F1500 - 0x001F15AB (171 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1500(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1500: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C319(); /* call 0x0042C319 */

loc_001F151A: ;
    if (TEST_NZ(eax, eax)) goto loc_001F1545; /* jne: not equal / not zero */

loc_001F151E: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1523: ;
    edi = eax;
    if (CMP_L(edi, 0x3E4)) goto loc_001F153D; /* jl: less (signed <) */

loc_001F152D: ;
    if (CMP_G(edi, 0x3E5)) goto loc_001F153D; /* jg: greater (signed >) */

loc_001F1535: ;
    eax = 0x4DE;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F153D: ;
    MEM32(esp + 4) = 0;

loc_001F1545: ;
    SET_LO8(eax, MEM8(esi + 0x130));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F155C; /* je: equal / zero */

loc_001F154F: ;
    edi = 0x3E3;
    MEM32(esp + 4) = 0;

loc_001F155C: ;
    MEM32(0x775F50) = MEM32(0x775F50) - 1;
    eax = MEM32(esp + 4);
    edx = MEM32(esi + 0x11C);
    edx = edx + eax;
    eax = MEM32(esi + 0x128);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x110) = 0;
    MEM32(esi + 0x11C) = edx;
    if (TEST_Z(eax, eax)) goto loc_001F15A6; /* je: equal / zero */

loc_001F1588: ;
    ecx = MEM32(esi + 0x12C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F1593: ;
    eax = MEM32(esi + 0x110);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    eax = 0x4DE;
    if (CMP_EQ(eax, 1)) goto loc_001F15A8; /* je: equal / zero */

loc_001F15A6: ;
    eax = edi;

loc_001F15A8: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F15B0
 * Original: 0x001F15B0 - 0x001F1685 (213 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F15B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F15B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_001F15D1: ;
    if (TEST_NZ(eax, eax)) goto loc_001F15DC; /* jne: not equal / not zero */

loc_001F15D5: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F15DA: ;
    esi = eax;

loc_001F15DC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_001F15F9; /* jne: not equal / not zero */

loc_001F15E2: ;
    edx = MEM32(esp + 0x10);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(edx, edx)) goto loc_001F15FD; /* je: equal / zero */

loc_001F15F2: ;
    eax = 1;
    goto loc_001F15FD;

loc_001F15F9: ;
    ecx = MEM32(esp + 0x18);

loc_001F15FD: ;
    if (TEST_NZ(eax, eax)) goto loc_001F167F; /* jne: not equal / not zero */

loc_001F1601: ;
    if (CMP_BE(ecx, 0x20000)) goto loc_001F1612; /* jbe: below or equal (unsigned <=) */

loc_001F1609: ;
    ecx = 0x20000;
    MEM32(esp + 0x18) = ecx;

loc_001F1612: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_001F161E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F167F; /* jne: not equal / not zero */

loc_001F1625: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_001F1690(); /* call 0x001F1690 */

loc_001F1634: ;
    esi = MEM32(esp + 0x10);
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F166C; /* jne: not equal / not zero */

loc_001F163E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = ecx;
    PUSH32(esp, 0);
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, ebp);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0); sub_001F16E0(); /* call 0x001F16E0 */

loc_001F1663: ;
    edi = eax;
    esp = esp + 0xC;
    if (TEST_Z(edi, edi)) goto loc_001F167B; /* je: equal / zero */

loc_001F166C: ;
    if (TEST_Z(esi, esi)) goto loc_001F167B; /* je: equal / zero */

loc_001F1670: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F167B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F167F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1690
 * Original: 0x001F1690 - 0x001F16B0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1690(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1690: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20000000);
    eax = edi + 0x48;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001F16A1: ;
    if (CMP_NE(eax, esi)) { sub_001F16B0(); return; } /* jne: not equal / not zero */

loc_001F16A5: ;
    ecx = 8;
    MEM32(ebx) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F16E0
 * Original: 0x001F16E0 - 0x001F1768 (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F16E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F16E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F16ED: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_001F175D; /* jne: not equal / not zero */

loc_001F16F5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001F23E0(); /* call 0x001F23E0 */

loc_001F1701: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F175D; /* jne: not equal / not zero */

loc_001F1708: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    eax = esi;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F1712: ;
    if (TEST_NZ(eax, eax)) goto loc_001F1742; /* jne: not equal / not zero */

loc_001F1716: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_001F1724: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F1742; /* jne: not equal / not zero */

loc_001F172B: ;
    if (TEST_Z(ebx, ebx)) goto loc_001F173C; /* je: equal / zero */

loc_001F172F: ;
    if (CMP_EQ(ebx, MEM32(esp + 0x18))) goto loc_001F173C; /* je: equal / zero */

loc_001F1735: ;
    eax = 0x57;
    goto loc_001F1742;

loc_001F173C: ;
    MEM32(esi + 0x11C) = ebx;

loc_001F1742: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_001F175D; /* jne: not equal / not zero */

loc_001F1747: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1F1770);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F2130(); /* call 0x001F2130 */

loc_001F175A: ;
    esp = esp + 0x10;

loc_001F175D: ;
    ecx = MEM32(edi + 4);
    ecx = ecx - MEM32(edi);
    MEM32(edi + 0x10) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1770
 * Original: 0x001F1770 - 0x001F1798 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1770: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0x26 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ebx;
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_NE(eax, 0x26)) { sub_001F1798(); return; } /* jne: not equal / not zero */

loc_001F1791: ;
    MEM8(esp + 0xF) = 1;
    g_seh_ebp = ebp; sub_001F17A7(); return; /* tail jmp 0x001F17A7 */

}

/**
 * sub_001F18F0
 * Original: 0x001F18F0 - 0x001F18FE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F18F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F18F0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    if (CMP_NE(edx, 0xFFFFFFFFu)) { sub_001F18FE(); return; } /* jne: not equal / not zero */

loc_001F18FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1930
 * Original: 0x001F1930 - 0x001F1A01 (209 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1930: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = ecx;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_001F195B; /* jne: not equal / not zero */

loc_001F1949: ;
    ecx = edi;
    esi = ecx + 1;
    edi = edi;

loc_001F1950: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001F1950; /* jne: not equal / not zero */

loc_001F1957: ;
    ecx = ecx - esi;
    ebx = ecx;

loc_001F195B: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(ebx, ebx)) goto loc_001F19F9; /* je: equal / zero */

loc_001F1967: ;
    if (TEST_NZ(eax, eax)) goto loc_001F19F9; /* jne: not equal / not zero */

loc_001F196F: ;
    edx = MEM32(ebp + 0x10);
    edx = edx - MEM32(ebp + 0x1C);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    if (CMP_AE(edx, ebx)) edx = ebx; /* cmovae */
    if (TEST_Z(edx, edx)) goto loc_001F1985; /* je: equal / zero */

loc_001F197E: ;
    MEM32(ebp + 0x20) = 1;

loc_001F1985: ;
    edi = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x14);
    esi = MEM32(esp + 0x10);
    edi = edi + eax;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x1C);
    edi = MEM32(esp + 0x10);
    ecx = ecx + edx;
    edi = edi + edx;
    ebx = ebx - edx;
    edx = ecx;
    MEM32(ebp + 0x1C) = ecx;
    ecx = MEM32(ebp + 0x10);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(edx, ecx)) goto loc_001F19ED; /* jne: not equal / not zero */

loc_001F19BE: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 8);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, ecx);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + 0x1C) = edi;
    PUSH32(esp, 0); sub_001F21A0(); /* call 0x001F21A0 */

loc_001F19DD: ;
    esp = esp + 0x10;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(eax, edi)) goto loc_001F19F1; /* jne: not equal / not zero */

loc_001F19E8: ;
    MEM32(ebp + 0x20) = edi;
    goto loc_001F19F1;

loc_001F19ED: ;
    eax = MEM32(esp + 0x14);

loc_001F19F1: ;
    if (TEST_NZ(ebx, ebx)) goto loc_001F1967; /* jne: not equal / not zero */

loc_001F19F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1A10
 * Original: 0x001F1A10 - 0x001F1AA5 (149 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1A10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_001F1AA1; /* je: equal / zero */

loc_001F1A22: ;
    edx = MEM32(ebp + 0x24);
    if (TEST_NZ(edx, edx)) goto loc_001F1AA1; /* jne: not equal / not zero */

loc_001F1A29: ;
    edx = MEM32(ebp + 0x20);
    if (TEST_Z(edx, edx)) goto loc_001F1AA3; /* je: equal / zero */

loc_001F1A30: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F1A38: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx + 0x11C);
    if (TEST_NZ(eax, eax)) goto loc_001F1A9E; /* jne: not equal / not zero */

loc_001F1A45: ;
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    ecx = ecx - edx;
    edi = edi + edx;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F21A0(); /* call 0x001F21A0 */

loc_001F1A76: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001F1A9C; /* jne: not equal / not zero */

loc_001F1A7D: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F1A85: ;
    if (TEST_NZ(eax, eax)) goto loc_001F1A9C; /* jne: not equal / not zero */

loc_001F1A89: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F2430(); /* call 0x001F2430 */

loc_001F1A92: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F1A9C; /* jne: not equal / not zero */

loc_001F1A99: ;
    MEM32(ebp + 0x20) = eax;

loc_001F1A9C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F1A9E: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F1AA1: ;
    eax = 0; /* xor self */

loc_001F1AA3: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1AB0
 * Original: 0x001F1AB0 - 0x001F1B10 (96 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1AB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F1A10(); /* call 0x001F1A10 */

loc_001F1AB6: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F1B0F; /* jne: not equal / not zero */

loc_001F1ABD: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F1AC5: ;
    if (TEST_NZ(eax, eax)) goto loc_001F1B0F; /* jne: not equal / not zero */

loc_001F1AC9: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_001F1AD2: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001F1B0C; /* jne: not equal / not zero */

loc_001F1AD8: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(edi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001F1AE6; /* je: equal / zero */

loc_001F1AE4: ;
    MEM32(eax) = ecx;

loc_001F1AE6: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, eax);
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F1B01: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F1B0C: ;
    eax = esi;
    POP32(esp, esi);

loc_001F1B0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1B10
 * Original: 0x001F1B10 - 0x001F1BB0 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1B10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001F1B1B: ;
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */

loc_001F1B21: ;
    eax = MEM32(esi + 0x110);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001F1B5E; /* je: equal / zero */

loc_001F1B2C: ;
    eax--;
    if ((eax == 0)) goto loc_001F1B65; /* je: equal / zero */

loc_001F1B2F: ;
    eax--;
    if ((eax != 0)) goto loc_001F1B6C; /* jne: not equal / not zero */

loc_001F1B32: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001F1B40; /* je: equal / zero */

loc_001F1B3E: ;
    MEM32(eax) = ecx;

loc_001F1B40: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001F1B58: ;
    MEM32(0x775F4C) = MEM32(0x775F4C) - 1;

loc_001F1B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F1B65: ;
    PUSH32(esp, 0); sub_001F1500(); /* call 0x001F1500 */

loc_001F1B6A: ;
    edi = eax;

loc_001F1B6C: ;
    if (CMP_L(edi, 0x3E4)) { sub_001F1BB0(); return; } /* jl: less (signed <) */

loc_001F1B74: ;
    if (CMP_LE(edi, 0x3E5)) goto loc_001F1B84; /* jle: less or equal (signed <=) */

loc_001F1B7C: ;
    if (CMP_NE(edi, 0x4DE)) { sub_001F1BB0(); return; } /* jne: not equal / not zero */

loc_001F1B84: ;
    eax = MEM32(0x84978C);
    if (TEST_Z(eax, eax)) goto loc_001F1B21; /* je: equal / zero */

loc_001F1B8D: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001F1B92: ;
    ecx = MEM32(0x849790);
    eax = eax - ebx;
    if (CMP_B(eax, ecx)) goto loc_001F1B21; /* jb: below (unsigned <) */

loc_001F1B9E: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001F1BA3: ;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84978C), _icall_esp); /* indirect call */
    }

loc_001F1BAB: ;
    goto loc_001F1B21;

}

/**
 * sub_001F1BC0
 * Original: 0x001F1BC0 - 0x001F1C81 (193 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1BC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_001F13C0(); /* call 0x001F13C0 */

loc_001F1BDA: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_001F1BF6; /* jne: not equal / not zero */

loc_001F1BE7: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, ebp);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001F1BF6: ;
    if (TEST_Z(MEM32(esp + 0x1C), 0x40000000)) goto loc_001F1C17; /* je: equal / zero */

loc_001F1C00: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_001F1C17; /* jbe: below or equal (unsigned <=) */

loc_001F1C04: ;
    if (CMP_BE(ebx, 2)) goto loc_001F1C0E; /* jbe: below or equal (unsigned <=) */

loc_001F1C09: ;
    if (CMP_NE(ebx, 4)) goto loc_001F1C17; /* jne: not equal / not zero */

loc_001F1C0E: ;
    eax = ebp;
    PUSH32(esp, 0); sub_001F1E30(); /* call 0x001F1E30 */

loc_001F1C15: ;
    esi = eax;

loc_001F1C17: ;
    if (TEST_NZ(esi, esi)) goto loc_001F1C43; /* jne: not equal / not zero */

loc_001F1C1B: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_001F1C30: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_001F1C81(); return; } /* jne: not equal / not zero */

loc_001F1C38: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1C3D: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001F1C74; /* je: equal / zero */

loc_001F1C43: ;
    if (TEST_Z(edi, edi)) goto loc_001F1C67; /* je: equal / zero */

loc_001F1C47: ;
    eax = edi;
    MEM32(edi + 0x110) = 2;
    PUSH32(esp, 0); sub_001F1450(); /* call 0x001F1450 */

loc_001F1C58: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F1C67: ;
    edx = MEM32(esp + 0x14);
    MEM32(edx) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F1C74: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1C90
 * Original: 0x001F1C90 - 0x001F1CD9 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1C90: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001F1CCB; /* je: equal / zero */

loc_001F1C9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_001F1CA1: ;
    if (TEST_Z(eax, eax)) goto loc_001F1CC0; /* je: equal / zero */

loc_001F1CA5: ;
    MEM32(esi + 0x110) = edi;
    eax = edi;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0x110) = 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001F1CC0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1CC5: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F1CD5; /* jne: not equal / not zero */

loc_001F1CCB: ;
    MEM32(esi + 0x110) = 2;

loc_001F1CD5: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1CE0
 * Original: 0x001F1CE0 - 0x001F1D01 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1CE0: ;
    esp = esp - 0x144;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x150);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_001F1CF5: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_001F1D01(); return; } /* jne: not equal / not zero */

loc_001F1CFA: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1CFF: ;
    g_seh_ebp = ebp; sub_001F1D0C(); return; /* tail jmp 0x001F1D0C */

}

/**
 * sub_001F1E30
 * Original: 0x001F1E30 - 0x001F1E6E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1E30: ;
    esp = esp - 0x104;
    PUSH32(esp, 0x103);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001F1E46: ;
    edx = esp;
    PUSH32(esp, 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC00(); /* call 0x0046EC00 */

loc_001F1E51: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_001F1E6E(); return; } /* je: equal / zero */

loc_001F1E58: ;
    MEM8(eax) = 0;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F1E80(); /* call 0x001F1E80 */

loc_001F1E64: ;
    esp = esp + 4;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1E80
 * Original: 0x001F1E80 - 0x001F1EF5 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E80(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001F1E80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x5F643C;
    esi = ebx + 1;
    ecx = 2;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_001F1EEF; /* je: equal / zero */

loc_001F1E9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_001F1EA0: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001F1EAC; /* jne: not equal / not zero */

loc_001F1EA5: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1EAA: ;
    goto loc_001F1EBC;

loc_001F1EAC: ;
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFF49u;
    eax = eax + 0xB7;

loc_001F1EBC: ;
    if (CMP_NE(eax, 3)) goto loc_001F1EDE; /* jne: not equal / not zero */

loc_001F1EC1: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046EC00(); /* call 0x0046EC00 */

loc_001F1EC9: ;
    esi = eax;
    PUSH32(esp, ebx);
    MEM8(esi) = 0;
    PUSH32(esp, 0); sub_001F1E80(); /* call 0x001F1E80 */

loc_001F1ED4: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi) = 0x5C;
    if (TEST_Z(eax, eax)) goto loc_001F1EE3; /* je: equal / zero */

loc_001F1EDE: ;
    if (CMP_NE(eax, 2)) goto loc_001F1EF1; /* jne: not equal / not zero */

loc_001F1EE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C54D(); /* call 0x0042C54D */

loc_001F1EEB: ;
    if (TEST_Z(eax, eax)) { sub_001F1EF5(); return; } /* je: equal / zero */

loc_001F1EEF: ;
    eax = 0; /* xor self */

loc_001F1EF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1F00
 * Original: 0x001F1F00 - 0x001F1F41 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F1F00: ;
    edx = MEM32(ecx + 8);
    esp = esp - 8;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_001F1F14: ;
    if (TEST_NZ(eax, eax)) goto loc_001F1F1F; /* jne: not equal / not zero */

loc_001F1F18: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F1F1D: ;
    esi = eax;

loc_001F1F1F: ;
    if (TEST_NZ(esi, esi)) goto loc_001F1F3A; /* jne: not equal / not zero */

loc_001F1F23: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(eax, eax)) goto loc_001F1F3C; /* jne: not equal / not zero */

loc_001F1F3A: ;
    eax = esi;

loc_001F1F3C: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1F50
 * Original: 0x001F1F50 - 0x001F1F93 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1F50: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F1F66: ;
    ecx = MEM32(esp + 0x24);
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_001F1F93(); return; } /* jne: not equal / not zero */

loc_001F1F70: ;
    esi = MEM32(esp + 0x10);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = ecx;
    if (CMP_LE(edx & edx, 0)) goto loc_001F1F89; /* jle: less or equal (signed <=) */

loc_001F1F7F: ;
    esi = esi - edx;
    esi = esi + ecx;
    edi = esi;
    eax = edi;
    g_seh_ebp = ebp; sub_001F1F97(); return; /* tail jmp 0x001F1F97 */

loc_001F1F89: ;
    if (((int32_t)esi >= 0)) goto loc_001F1F8F; /* jge: greater or equal (signed >=) */

loc_001F1F8B: ;
    edi = ecx;
    edi = edi - edx;

loc_001F1F8F: ;
    eax = edi;
    g_seh_ebp = ebp; sub_001F1F97(); return; /* tail jmp 0x001F1F97 */

}

/**
 * sub_001F2040
 * Original: 0x001F2040 - 0x001F20C3 (131 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2040(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001F2040: ;
    edx = MEM32(ecx + 8);
    esp = esp - 0x10;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C08D(); /* call 0x0042C08D */

loc_001F2056: ;
    if (TEST_NZ(eax, eax)) goto loc_001F2061; /* jne: not equal / not zero */

loc_001F205A: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F205F: ;
    esi = eax;

loc_001F2061: ;
    if (TEST_NZ(esi, esi)) { sub_001F20C3(); return; } /* jne: not equal / not zero */

loc_001F2065: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C08D(); /* call 0x0042C08D */

loc_001F2079: ;
    if (TEST_NZ(eax, eax)) goto loc_001F2084; /* jne: not equal / not zero */

loc_001F207D: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F2082: ;
    esi = eax;

loc_001F2084: ;
    if (TEST_NZ(esi, esi)) { sub_001F20C3(); return; } /* jne: not equal / not zero */

loc_001F2088: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    ecx = ecx - eax;
    eax = MEM32(esp + 8);
    eax = eax - edx - _cf; /* sbb */
    if (CMP_L(eax, 0xFFFFFFFFu)) goto loc_001F20B9; /* jl: less (signed <) */

loc_001F20A1: ;
    if (CMP_G(eax, 0xFFFFFFFFu)) goto loc_001F20AB; /* jg: greater (signed >) */

loc_001F20A3: ;
    if (CMP_B(ecx, 0xFECED300u)) goto loc_001F20B9; /* jb: below (unsigned <) */

loc_001F20AB: ;
    if (TEST_S(eax, eax)) { sub_001F20C3(); return; } /* jl: less (signed <) */

loc_001F20AF: ;
    if (CMP_G(eax & eax, 0)) goto loc_001F20B9; /* jg: greater (signed >) */

loc_001F20B1: ;
    if (CMP_BE(ecx, 0x1312D00)) { sub_001F20C3(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F20B9: ;
    eax = 0x51A;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001F20D0
 * Original: 0x001F20D0 - 0x001F2102 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F20D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F20D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001F20E4: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (CMP_L(LO8(eax), 0x61)) goto loc_001F20EE; /* jl: less (signed <) */

loc_001F20EC: ;
    SET_LO8(eax, LO8(eax) + 0xE0);

loc_001F20EE: ;
    SET_LO8(eax, LO8(eax) - 0x41);
    if (CMP_B(LO8(eax), 0x1A)) { sub_001F2102(); return; } /* jb: below (unsigned <) */

loc_001F20F4: ;
    eax = 0x7B;
    MEM32(edi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F2130
 * Original: 0x001F2130 - 0x001F219C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2130(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F2130: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F2138: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F2198; /* jne: not equal / not zero */

loc_001F213E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = esi + 0x114;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(esi + 0x128) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x12C) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_001F216D: ;
    if (TEST_NZ(eax, eax)) goto loc_001F2188; /* jne: not equal / not zero */

loc_001F2171: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F2176: ;
    edi = eax;
    if (CMP_NE(edi, 0x3E5)) goto loc_001F2184; /* jne: not equal / not zero */

loc_001F2180: ;
    edi = 0; /* xor self */
    goto loc_001F2188;

loc_001F2184: ;
    if (TEST_NZ(edi, edi)) goto loc_001F2198; /* jne: not equal / not zero */

loc_001F2188: ;
    MEM32(0x775F50) = MEM32(0x775F50) + 1;
    MEM32(esi + 0x110) = 1;

loc_001F2198: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F21A0
 * Original: 0x001F21A0 - 0x001F220C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F21A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F21A0: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F21A8: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F2208; /* jne: not equal / not zero */

loc_001F21AE: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = esi + 0x114;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(esi + 0x128) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x12C) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_001F21DD: ;
    if (TEST_NZ(eax, eax)) goto loc_001F21F8; /* jne: not equal / not zero */

loc_001F21E1: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F21E6: ;
    edi = eax;
    if (CMP_NE(edi, 0x3E5)) goto loc_001F21F4; /* jne: not equal / not zero */

loc_001F21F0: ;
    edi = 0; /* xor self */
    goto loc_001F21F8;

loc_001F21F4: ;
    if (TEST_NZ(edi, edi)) goto loc_001F2208; /* jne: not equal / not zero */

loc_001F21F8: ;
    MEM32(0x775F50) = MEM32(0x775F50) + 1;
    MEM32(esi + 0x110) = 1;

loc_001F2208: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F2210
 * Original: 0x001F2210 - 0x001F22C0 (176 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2210(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F2210: ;
    eax = MEM32(0x875688);
    esp = esp - 0x5C;
    if (TEST_NZ(eax, eax)) goto loc_001F2269; /* jne: not equal / not zero */

loc_001F221C: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F6438);
    PUSH32(esp, 0); sub_0042CA40(); /* call 0x0042CA40 */

loc_001F2243: ;
    if (TEST_Z(eax, eax)) { sub_001F22C0(); return; } /* je: equal / zero */

loc_001F2247: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x5F6430;
    esi = esp + 0x14;
    ecx = 5;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_001F226D; /* jne: not equal / not zero */

loc_001F225D: ;
    eax = 2;
    POP32(esp, edi);
    MEM32(0x875688) = eax;
    POP32(esp, esi);

loc_001F2269: ;
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_001F226D: ;
    edi = 0x5F6428;
    esi = esp + 0x14;
    ecx = 5;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_001F2291; /* jne: not equal / not zero */

loc_001F2281: ;
    eax = 1;
    POP32(esp, edi);
    MEM32(0x875688) = eax;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_001F2291: ;
    edi = 0x5F6420;
    esi = esp + 0x14;
    ecx = 5;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_001F22B5; /* jne: not equal / not zero */

loc_001F22A5: ;
    eax = 3;
    POP32(esp, edi);
    MEM32(0x875688) = eax;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_001F22B5: ;
    eax = MEM32(0x875688);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_001F22D0
 * Original: 0x001F22D0 - 0x001F238B (187 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F22D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F22D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0042D075(); /* call 0x0042D075 */

loc_001F22E0: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001F22F5; /* jne: not equal / not zero */

loc_001F22E6: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F22EB: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_001F2382; /* jne: not equal / not zero */

loc_001F22F5: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C94C(); /* call 0x0042C94C */

loc_001F2307: ;
    if (TEST_NZ(eax, eax)) goto loc_001F2316; /* jne: not equal / not zero */

loc_001F230B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F2310: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_001F2382; /* jne: not equal / not zero */

loc_001F2316: ;
    edi = MEM32(esp + 0x24);
    if (TEST_Z(edi, edi)) goto loc_001F234C; /* je: equal / zero */

loc_001F231E: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_001F2332: ;
    if (CMP_A(edx & edx, 0)) goto loc_001F233D; /* ja: above (unsigned >) */

loc_001F2336: ;
    if (CMP_BE(eax, 0xC351)) goto loc_001F234A; /* jbe: below or equal (unsigned <=) */

loc_001F233D: ;
    eax = 0xC351;
    MEM32(esp + 0x10) = 0;

loc_001F234A: ;
    MEM32(edi) = eax;

loc_001F234C: ;
    edi = MEM32(esp + 0x20);
    if (TEST_Z(edi, edi)) goto loc_001F2382; /* je: equal / zero */

loc_001F2354: ;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_001F2368: ;
    if (CMP_A(edx & edx, 0)) goto loc_001F2373; /* ja: above (unsigned >) */

loc_001F236C: ;
    if (CMP_BE(eax, 0xC351)) goto loc_001F2380; /* jbe: below or equal (unsigned <=) */

loc_001F2373: ;
    eax = 0xC351;
    MEM32(esp + 0x10) = 0;

loc_001F2380: ;
    MEM32(edi) = eax;

loc_001F2382: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2390
 * Original: 0x001F2390 - 0x001F23D3 (67 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2390(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F2390: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 8;
    esi = ecx;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F239E: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F23CD; /* jne: not equal / not zero */

loc_001F23A4: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_001F23C3; /* jle: less or equal (signed <=) */

loc_001F23B1: ;
    eax = MEM32(esp + 0x10);
    ecx = ecx - edx;
    ecx = ecx + esi;
    esi = ecx;
    MEM32(eax) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F23C3: ;
    if (((int32_t)ecx >= 0)) goto loc_001F23C7; /* jge: greater or equal (signed >=) */

loc_001F23C5: ;
    esi = esi - edx;

loc_001F23C7: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;

loc_001F23CD: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F23E0
 * Original: 0x001F23E0 - 0x001F2421 (65 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F23E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F23E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 8;
    esi = ecx;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_001F23EE: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_001F241B; /* jne: not equal / not zero */

loc_001F23F4: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_001F240F; /* jle: less or equal (signed <=) */

loc_001F2401: ;
    eax = MEM32(esp + 0x10);
    esi = esi - edx;
    MEM32(eax) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F240F: ;
    if (CMP_GE((uint32_t)esi + (uint32_t)edx, (uint32_t)edx)) goto loc_001F2415; /* jge: greater or equal (signed >=) */

loc_001F2411: ;
    esi = esi - edx;
    esi = esi - ecx;

loc_001F2415: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;

loc_001F241B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F2430
 * Original: 0x001F2430 - 0x001F24A3 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2430(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F2430: ;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_001F1B10(); /* call 0x001F1B10 */

loc_001F2438: ;
    if (TEST_NZ(eax, eax)) goto loc_001F24A1; /* jne: not equal / not zero */

loc_001F243C: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_001F2496; /* je: equal / zero */

loc_001F2446: ;
    eax--;
    if ((eax == 0)) goto loc_001F248C; /* je: equal / zero */

loc_001F2449: ;
    eax--;
    if ((eax != 0)) goto loc_001F2496; /* jne: not equal / not zero */

loc_001F244C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_001F2458: ;
    esi = MEM32(esp + 8);
    esp = esp + 4;
    esi = esi - ebx;
    if (TEST_NZ(eax, eax)) goto loc_001F24A0; /* jne: not equal / not zero */

loc_001F2465: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_001F2473: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F24A0; /* jne: not equal / not zero */

loc_001F247A: ;
    if (TEST_Z(esi, esi)) goto loc_001F249A; /* je: equal / zero */

loc_001F247E: ;
    if (CMP_EQ(esi, MEM32(esp + 4))) goto loc_001F249A; /* je: equal / zero */

loc_001F2484: ;
    eax = 0x57;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F248C: ;
    esi = MEM32(edi + 0x11C);
    esi = esi + ebx;
    goto loc_001F2465;

loc_001F2496: ;
    esi = ebx;
    goto loc_001F2465;

loc_001F249A: ;
    MEM32(edi + 0x11C) = esi;

loc_001F24A0: ;
    POP32(esp, esi);

loc_001F24A1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F24B0
 * Original: 0x001F24B0 - 0x001F25E7 (311 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F24B0(void)
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

loc_001F24B0: ;
    esp = esp - 0x14;
    ecx = MEM32(esi + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_001F24CA: ;
    if (TEST_NZ(eax, eax)) goto loc_001F24DB; /* jne: not equal / not zero */

loc_001F24CE: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_001F24D3: ;
    if (TEST_NZ(eax, eax)) goto loc_001F25DE; /* jne: not equal / not zero */

loc_001F24DB: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_001F25DE; /* jne: not equal / not zero */

loc_001F24E7: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    SET_LO8(eax, LO8(eax) & 0xDF);
    if (CMP_NE(LO8(eax), 0x44)) goto loc_001F2502; /* jne: not equal / not zero */

loc_001F24F0: ;
    PUSH32(esp, 0); sub_001F2210(); /* call 0x001F2210 */

loc_001F24F5: ;
    edx = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    edx++;
    eax = edx;
    goto loc_001F2514;

loc_001F2502: ;
    if (CMP_L(LO8(eax), 0x46)) goto loc_001F250F; /* jl: less (signed <) */

loc_001F2506: ;
    (void)0; /* cmp LO8(eax), 0x4D - flags set for next jcc */
    eax = 3;
    if (CMP_LE(LO8(eax), 0x4D)) goto loc_001F2514; /* jle: less or equal (signed <=) */

loc_001F250F: ;
    eax = 1;

loc_001F2514: ;
    eax--;
    if ((eax == 0)) goto loc_001F257D; /* je: equal / zero */

loc_001F2517: ;
    eax--;
    if ((eax == 0)) goto loc_001F2530; /* je: equal / zero */

loc_001F251A: ;
    eax--;
    xmm0 = 0.0f; /* xorps self = zero */
    if ((eax == 0)) goto loc_001F2528; /* je: equal / zero */

loc_001F2520: ;
    fp_push(MEMD(0x648D08)); /* fld double */
    goto loc_001F258B;

loc_001F2528: ;
    fp_push(MEMD(0x649A68)); /* fld double */
    goto loc_001F258B;

loc_001F2530: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C1CA(); /* call 0x0042C1CA */

loc_001F2539: ;
    if (CMP_BE(eax, 0x1A2DAF)) goto loc_001F2549; /* jbe: below or equal (unsigned <=) */

loc_001F2540: ;
    ecx = 0x345B60;
    ecx = ecx - eax;
    eax = ecx;

loc_001F2549: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001F255B; /* jge: greater or equal (signed >=) */

loc_001F2555: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F255B: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x649A58); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_001F258B;

loc_001F257D: ;
    fp_push(MEMD(0x649A38)); /* fld double */
    xmm0 = MEMF(0x648D80); /* movss */

loc_001F258B: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x11C);
    eax = edx;
    eax = eax - ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_001F25A2; /* jne: not equal / not zero */

loc_001F259D: ;
    MEMF(esp) = xmm0; /* movss */

loc_001F25A2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001F25B4; /* jge: greater or equal (signed >=) */

loc_001F25AE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F25B4: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 4) = edx;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001F25D3; /* jge: greater or equal (signed >=) */

loc_001F25CD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F25D3: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */

loc_001F25DE: ;
    xmm0 = MEMF(esp); /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F25F0
 * Original: 0x001F25F0 - 0x001F26AD (189 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F25F0(void)
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

loc_001F25F0: ;
    eax = ZX8(MEM8(0x776154));
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax * 4 + 0x776144) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    if ((xmm0 >= MEMF(eax * 4 + 0x776144))) goto loc_001F26AB; /* jae: above or equal (unsigned >=) */

loc_001F260D: ;
    (void)0; /* cmp MEM16(ebx), 0 - flags set for next jcc */
    SET_LO16(edx, MEM16(esp + 8));
    SET_LO16(eax, MEM16(esp + 0xC));
    PUSH32(esp, edi);
    MEM8(0x776162) = LO8(ecx);
    MEM16(0x776168) = LO16(edx);
    MEM16(0x776164) = LO16(eax);
    edi = ebx;
    if (CMP_EQ(MEM16(ebx), 0)) goto loc_001F269C; /* je: equal / zero */

loc_001F2633: ;
    ecx = esp + 0x18;
    edx = esp + 0x14;
    ecx = ecx - 8;
    eax = 0x776100;
    PUSH32(esp, esi);

loc_001F2644: ;
    SET_LO16(esi, MEM16(edi));
    if (CMP_NE(LO16(esi), 0x25)) goto loc_001F2677; /* jne: not equal / not zero */

loc_001F264D: ;
    esi = ZX16(MEM16(edi + 2));
    edi = edi + 2;
    esi = esi + 0xFFFFFFBBu;
    if (CMP_A(esi, 0x22)) goto loc_001F267D; /* ja: above (unsigned >) */

loc_001F265C: ;
    esi = ZX8(MEM8(esi + 0x1F26B8));
    { uint32_t _jt = MEM32(esi * 4 + 0x1F26B0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x001F266Au) goto loc_001F266A;
    if (_jt == 0x001F267Du) goto loc_001F267D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F266A: ;
    fp_push(MEMD(ecx + 8)); /* fld double */
    ecx = ecx + 8;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx + 8;
    goto loc_001F2688;

loc_001F2677: ;
    if (CMP_NE(LO16(esi), 0x23)) goto loc_001F268B; /* jne: not equal / not zero */

loc_001F267D: ;
    esi = MEM32(edx + 4);
    ecx = ecx + 4;
    edx = edx + 4;
    MEM32(eax) = esi;

loc_001F2688: ;
    eax = eax + 4;

loc_001F268B: ;
    if (CMP_EQ(eax, 0x776140)) goto loc_001F269B; /* je: equal / zero */

loc_001F2692: ;
    edi = edi + 2;
    if (CMP_NE(MEM16(edi), 0)) goto loc_001F2644; /* jne: not equal / not zero */

loc_001F269B: ;
    POP32(esp, esi);

loc_001F269C: ;
    PUSH32(esp, 0x776100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F27B0(); /* call 0x001F27B0 */

loc_001F26A7: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_001F26AB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F26E0
 * Original: 0x001F26E0 - 0x001F2780 (160 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F26E0(void)
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

loc_001F26E0: ;
    eax = ZX8(MEM8(0x776154));
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax * 4 + 0x776144) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if ((xmm0 >= MEMF(eax * 4 + 0x776144))) goto loc_001F277E; /* jae: above or equal (unsigned >=) */

loc_001F26FD: ;
    (void)0; /* cmp MEM16(ebx), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_EQ(MEM16(ebx), 0)) goto loc_001F276F; /* je: equal / zero */

loc_001F2706: ;
    ecx = esp + 0x10;
    edx = esp + 0xC;
    ecx = ecx - 8;
    eax = 0x776100;
    PUSH32(esp, esi);

loc_001F2717: ;
    SET_LO16(esi, MEM16(edi));
    if (CMP_NE(LO16(esi), 0x25)) goto loc_001F274A; /* jne: not equal / not zero */

loc_001F2720: ;
    esi = ZX16(MEM16(edi + 2));
    edi = edi + 2;
    esi = esi + 0xFFFFFFBBu;
    if (CMP_A(esi, 0x22)) goto loc_001F2750; /* ja: above (unsigned >) */

loc_001F272F: ;
    esi = ZX8(MEM8(esi + 0x1F2788));
    { uint32_t _jt = MEM32(esi * 4 + 0x1F2780); /* switch: 2 entries, 2 targets */
    if (_jt == 0x001F273Du) goto loc_001F273D;
    if (_jt == 0x001F2750u) goto loc_001F2750;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F273D: ;
    fp_push(MEMD(ecx + 8)); /* fld double */
    ecx = ecx + 8;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx + 8;
    goto loc_001F275B;

loc_001F274A: ;
    if (CMP_NE(LO16(esi), 0x23)) goto loc_001F275E; /* jne: not equal / not zero */

loc_001F2750: ;
    esi = MEM32(edx + 4);
    ecx = ecx + 4;
    edx = edx + 4;
    MEM32(eax) = esi;

loc_001F275B: ;
    eax = eax + 4;

loc_001F275E: ;
    if (CMP_EQ(eax, 0x776140)) goto loc_001F276E; /* je: equal / zero */

loc_001F2765: ;
    edi = edi + 2;
    if (CMP_NE(MEM16(edi), 0)) goto loc_001F2717; /* jne: not equal / not zero */

loc_001F276E: ;
    POP32(esp, esi);

loc_001F276F: ;
    PUSH32(esp, 0x776100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F27B0(); /* call 0x001F27B0 */

loc_001F277A: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_001F277E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F27B0
 * Original: 0x001F27B0 - 0x001F2ABF (783 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F27B0(void)
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

loc_001F27B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x34;
    eax = ZX8(MEM8(0x776154));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* comiss xmm0, MEMF(eax * 4 + 0x776144) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if ((xmm0 >= MEMF(eax * 4 + 0x776144))) goto loc_001F2AB8; /* jae: above or equal (unsigned >=) */

loc_001F27DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1B2);
    PUSH32(esp, 0x5F6510);
    PUSH32(esp, 0x102C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001F27F0: ;
    edx = eax;
    esp = esp + 0x10;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(edx, ebx)) goto loc_001F2AB8; /* je: equal / zero */

loc_001F2801: ;
    eax = 0; /* xor self */
    ecx = 0x40B;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x8497AC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edx + 0x24) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_001F282E; /* jne: not equal / not zero */

loc_001F2818: ;
    eax = MEM32(0x849798);
    if (CMP_NE(eax, ebx)) goto loc_001F2829; /* jne: not equal / not zero */

loc_001F2821: ;
    MEM32(0x849794) = edx;
    goto loc_001F2835;

loc_001F2829: ;
    MEM32(eax + 0x24) = edx;
    goto loc_001F2835;

loc_001F282E: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x24) = ecx;
    MEM32(eax) = edx;

loc_001F2835: ;
    eax = MEM32(0x776158);
    edi = MEM32(ebp + 8);
    MEM8(edx + 0xD) = 0;
    MEM32(edx + 0x1028) = eax;
    SET_LO16(eax, MEM16(edi));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    esi = edx + 0x28;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001F2982; /* je: equal / zero */

loc_001F2856: ;
    if (CMP_NE(LO16(eax), 0x25)) goto loc_001F2940; /* jne: not equal / not zero */

loc_001F2860: ;
    MEM16(esp + 0x18) = LO16(eax);
    edi = edi + 2;
    eax = 1;
    /* nop */

loc_001F2870: ;
    SET_LO16(ecx, MEM16(edi));
    edx = ZX16(LO16(ecx));
    edx = edx + 0xFFFFFFDBu;
    (void)0; /* cmp edx, 0x53 - flags set for next jcc */
    MEM16(esp + eax * 2 + 0x18) = LO16(ecx);
    MEM16(esp + eax * 2 + 0x1A) = 0;
    if (CMP_A(edx, 0x53)) goto loc_001F2930; /* ja: above (unsigned >) */

loc_001F288E: ;
    edx = ZX8(MEM8(edx + 0x1F2AD4));
    { uint32_t _jt = MEM32(edx * 4 + 0x1F2AC0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001F289Cu) goto loc_001F289C;
    if (_jt == 0x001F28CBu) goto loc_001F28CB;
    if (_jt == 0x001F28FBu) goto loc_001F28FB;
    if (_jt == 0x001F2922u) goto loc_001F2922;
    if (_jt == 0x001F2930u) goto loc_001F2930;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F289C: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + ebx * 4);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_001F28AE: ;
    esp = esp + 0xC;
    ebx++;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_001F292D; /* je: equal / zero */

loc_001F28B8: ;
    goto loc_001F28C0;

    /* nop */

loc_001F28C0: ;
    esi = esi + 2;
    if (CMP_NE(MEM16(esi), 0)) goto loc_001F28C0; /* jne: not equal / not zero */

loc_001F28C9: ;
    goto loc_001F292D;

loc_001F28CB: ;
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    esp = esp - 8;
    eax = esp + 0x20;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_001F28E2: ;
    esp = esp + 0x10;
    ebx++;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_001F292D; /* je: equal / zero */

loc_001F28EC: ;
    /* nop */

loc_001F28F0: ;
    esi = esi + 2;
    if (CMP_NE(MEM16(esi), 0)) goto loc_001F28F0; /* jne: not equal / not zero */

loc_001F28F9: ;
    goto loc_001F292D;

loc_001F28FB: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + ebx * 4);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_001F290D: ;
    esp = esp + 0xC;
    ebx++;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_001F292D; /* je: equal / zero */

loc_001F2917: ;
    esi = esi + 2;
    if (CMP_NE(MEM16(esi), 0)) goto loc_001F2917; /* jne: not equal / not zero */

loc_001F2920: ;
    goto loc_001F292D;

loc_001F2922: ;
    MEM16(esi) = LO16(ecx);
    esi = esi + 2;
    MEM16(esi) = 0;

loc_001F292D: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F2930: ;
    edi = edi + 2;
    eax++;
    if ((eax != 0)) goto loc_001F2870; /* jne: not equal / not zero */

loc_001F293A: ;
    edx = MEM32(esp + 0x14);
    goto loc_001F296C;

loc_001F2940: ;
    if (CMP_NE(LO16(eax), 0x23)) goto loc_001F2955; /* jne: not equal / not zero */

loc_001F2946: ;
    eax = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(eax + ebx * 4));
    ebx++;
    MEM8(edx + 0xD) = LO8(ecx);
    edi = edi + 4;
    goto loc_001F296C;

loc_001F2955: ;
    MEM16(esi) = LO16(eax);
    eax = MEM32(esp + 0x10);
    esi = esi + 2;
    edi = edi + 2;
    eax++;
    MEM16(esi) = 0;
    MEM32(esp + 0x10) = eax;

loc_001F296C: ;
    if (CMP_GE(MEM32(esp + 0x10), 0x7FF)) goto loc_001F2982; /* jge: greater or equal (signed >=) */

loc_001F2976: ;
    SET_LO16(eax, MEM16(edi));
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_001F2856; /* jne: not equal / not zero */

loc_001F2982: ;
    esi = MEM32(0x84979C);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, MEM8(0x776162));
    SET_LO8(ecx, MEM8(0x776140));
    MEM8(edx + 0xC) = LO8(eax);
    MEM32(edx) = esi;
    MEM8(edx + 0xE) = LO8(ecx);
    if (TEST_Z(esi, esi)) goto loc_001F29CA; /* je: equal / zero */

loc_001F299F: ;
    SET_LO16(ecx, MEM16(0x776160));
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(edx + 0xC) = LO8(eax);
    (void)0; /* cmp MEM8(0x6BCFEC), 1 - flags set for next jcc */
    MEM16(edx + 0xA) = LO16(ecx);
    xmm0 = MEMF(0x77615C); /* movss */
    if (CMP_LE(MEM8(0x6BCFEC), 1)) goto loc_001F29E7; /* jle: less or equal (signed <=) */

loc_001F29C0: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    goto loc_001F29E7;

loc_001F29CA: ;
    SET_LO16(eax, MEM16(0x776168));
    SET_LO16(ecx, MEM16(0x776164));
    MEM16(edx + 8) = LO16(eax);
    MEM16(edx + 0xA) = LO16(ecx);
    xmm0 = MEMF(0x77615C); /* movss */

loc_001F29E7: ;
    SET_LO8(ecx, MEM8(0x776170));
    SET_LO8(eax, MEM8(0x776171));
    ebx = ZX8(MEM8(0x776154));
    MEM8(edx + 0x10) = LO8(ecx);
    ecx = ZX8(MEM8(0x77616E));
    MEM32(esp + 0x10) = ecx;
    MEM8(edx + 0xF) = LO8(eax);
    SET_LO8(eax, MEM8(0x77616F));
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(edx + 4) = xmm0; /* movss */
    MEM8(edx + 0x11) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001F2A27: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(0x77616D));
    SET_LO8(ecx, MEM8(0x77616B));
    MEM8(esi + 0x13) = LO8(edx);
    edx = ZX8(MEM8(0x77616A));
    MEM32(esp + 0x14) = edx;
    MEM8(esi + 0x12) = LO8(eax);
    SET_LO8(eax, MEM8(0x77616C));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = LO8(ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001F2A63: ;
    MEM8(esi + 0x16) = LO8(eax);
    eax = MEM32(0x8497AC);
    if (TEST_NZ(eax, eax)) goto loc_001F2A75; /* jne: not equal / not zero */

loc_001F2A6F: ;
    MEM32(0x849798) = esi;

loc_001F2A75: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F2A87; /* je: equal / zero */

loc_001F2A7C: ;
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0xF) = LO8(eax);
    MEM8(esi + 0x10) = LO8(eax);
    MEM8(esi + 0x11) = LO8(eax);

loc_001F2A87: ;
    xmm0 = MEMF(0x8497A0); /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x8497A4); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x8497A8); /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    MEM32(0x84979C) = 0;

loc_001F2AB8: ;
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
 * sub_001F2B30
 * Original: 0x001F2B30 - 0x001F2B52 (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2B30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F2B30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F2B51; /* je: equal / zero */

loc_001F2B41: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001F2B51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2B60
 * Original: 0x001F2B60 - 0x001F2B96 (54 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2B60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F2B60: ;
    eax = MEM32(0x776158);
    if (TEST_S(eax, eax)) goto loc_001F2B95; /* jl: less (signed <) */

loc_001F2B69: ;
    if (CMP_GE(eax, 2)) goto loc_001F2B95; /* jge: greater or equal (signed >=) */

loc_001F2B6E: ;
    ecx = MEM32(0x6BAF28);
    eax = eax + eax * 2;
    xmm0 = MEMF(ecx + eax * 8 + 4); /* movss */
    eax = ecx + eax * 8;
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001F2B95: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2BA0
 * Original: 0x001F2BA0 - 0x001F2BBF (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2BA0(void)
{

loc_001F2BA0: ;
    SET_LO8(edx, MEM8(esp + 4));
    MEM8(0x776171) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(edx);
    MEM8(0x77616E) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001F2BC0
 * Original: 0x001F2BC0 - 0x001F2FE9 (1065 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F2BC0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84B868);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001F2FE3; /* je: equal / zero */

loc_001F2BD5: ;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_001F2BDA: ;
    eax = MEM32(0x776184);
    if (CMP_EQ(eax, 0x8072F4)) goto loc_001F2BF4; /* je: equal / zero */

loc_001F2BE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_001F2BF1: ;
    esp = esp + 8;

loc_001F2BF4: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    (void)0; /* cmp MEM32(0x8086E8), ebx - flags set for next jcc */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    MEM32(0x776180) = ebx;
    MEMF(0x84B508) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x8086E8), ebx)) goto loc_001F2C52; /* jne: not equal / not zero */

loc_001F2C4B: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_001F2C50: ;
    goto loc_001F2C57;

loc_001F2C52: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_001F2C57: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648CF4); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    MEMF(0x80768C) = xmm0; /* movss */
    MEMF(0x807690) = xmm0; /* movss */
    MEM32(0x807668) = ebx;
    MEM8(0x8086C4) = 1;
    MEM8(0x8086C8) = 1;
    MEM8(0x8086C6) = 1;
    MEMF(0x80761C) = xmm7; /* movss */
    MEMF(0x807620) = xmm7; /* movss */
    MEMF(0x807624) = xmm7; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm4 = xmm7; /* movaps */
    xmm3 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003D3AA0(); /* call 0x003D3AA0 */

loc_001F2CBB: ;
    xmm4 = xmm6; /* movaps */
    xmm3 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003D3B30(); /* call 0x003D3B30 */

loc_001F2CC6: ;
    eax = MEM32(0x776180);
    ecx = MEM32(0x6BAF28);
    esi = MEM32(0x849794);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    MEM8(0x807694) = LO8(ebx);
    MEM8(0x807695) = LO8(ebx);
    MEM8(0x807696) = LO8(ebx);
    MEM8(0x807697) = 0xFF;
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (CMP_EQ(esi, ebx)) goto loc_001F2FD0; /* je: equal / zero */

loc_001F2D20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_001F2D22: ;
    edx = ZX8(MEM8(esi + 0xE));
    if (CMP_NE(edx, MEM32(esp + 0x30))) goto loc_001F2FC3; /* jne: not equal / not zero */

loc_001F2D30: ;
    if (CMP_NE(MEM8(esi + 0xD), LO8(ebx))) goto loc_001F2FC3; /* jne: not equal / not zero */

loc_001F2D39: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    SET_LO16(ebp, MEM16(esi + 8));
    SET_LO16(edi, MEM16(esi + 0xA));
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_001F2D6E; /* jne: not equal / not zero */

loc_001F2D48: ;
    ecx = LO16(ebp);
    edx = SX16(LO16(edi));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6BCFF8); /* mulss */
    ebp = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6BCFFC); /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */

loc_001F2D6E: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx >> 7;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001F2DAA; /* je: equal / zero */

loc_001F2D7C: ;
    eax = LO16(ebp);
    ecx = SX16(LO16(edi));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64A760); /* mulss */
    ebp = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(0x649278); /* subss */
    xmm0 = xmm0 * MEMF(0x64A75C); /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */

loc_001F2DAA: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_001F2E09; /* je: equal / zero */

loc_001F2DB0: ;
    PUSH32(esp, 0x46EA6000);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x80);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, edx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(eax + 0x7C); /* addss */
    PUSH32(esp, ecx);
    MEM32(0x84A148) = ebx;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    edi = esp + 0x2C;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_001F2DF0: ;
    esp = esp + 0x14;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001F2FC3; /* je: equal / zero */

loc_001F2DFD: ;
    ebp = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    edi = (int32_t)MEMF(esp + 0x18); /* cvttss2si */

loc_001F2E09: ;
    edx = MEM32(esp + 0x10);
    (void)0; /* cmp edx, MEM32(esi + 0x1028) - flags set for next jcc */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(edx, MEM32(esi + 0x1028))) goto loc_001F2E51; /* je: equal / zero */

loc_001F2E20: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001F2E28: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    eax = MEM32(esi + 0x1028);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001F6230(); /* call 0x001F6230 */

loc_001F2E3D: ;
    if (CMP_NE(MEM32(0x8086E8), ebx)) goto loc_001F2E4C; /* jne: not equal / not zero */

loc_001F2E45: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_001F2E4A: ;
    goto loc_001F2E51;

loc_001F2E4C: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_001F2E51: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(edx, MEM8(esi + 0xF));
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM8(0x807665) = LO8(ecx);
    MEM8(0x807664) = LO8(edx);
    MEM8(0x807666) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x12));
    MEM8(0x807667) = LO8(eax);
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0xC));
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_Z(LO8(eax), 8)) goto loc_001F2EAD; /* je: equal / zero */

loc_001F2E92: ;
    xmm2 = MEMF(esi + 0x1C); /* movss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    goto loc_001F2EDE;

loc_001F2EAD: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_001F2ECB; /* je: equal / zero */

loc_001F2EB1: ;
    xmm0 = MEMF(0x649394); /* movss */
    xmm1 = MEMF(0x6496BC); /* movss */
    xmm2 = MEMF(0x64A8D0); /* movss */
    goto loc_001F2EDE;

loc_001F2ECB: ;
    xmm0 = MEMF(0x64994C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x64971C); /* movss */

loc_001F2EDE: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    edx = LO16(ebp);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    if (TEST_Z(LO8(eax), 1)) goto loc_001F2F21; /* je: equal / zero */

loc_001F2EE9: ;
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 + xmm0; /* addss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 > xmm4)) goto loc_001F2F61; /* ja: above (unsigned >) */

loc_001F2EF5: ;
    xmm3 = xmm3 - xmm0; /* subss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 > xmm2)) goto loc_001F2F61; /* ja: above (unsigned >) */

loc_001F2EFE: ;
    eax = SX16(LO16(edi));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x8076A4) = xmm4; /* movss */
    MEM32(0x8076B0) = 1;
    goto loc_001F2F4F;

loc_001F2F21: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001F2F61; /* ja: above (unsigned >) */

loc_001F2F2D: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 > xmm2)) goto loc_001F2F61; /* ja: above (unsigned >) */

loc_001F2F32: ;
    eax = SX16(LO16(edi));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM32(0x8076B0) = ebx;

loc_001F2F4F: ;
    MEMF(0x807650) = xmm3; /* movss */
    MEMF(0x807658) = xmm3; /* movss */
    goto loc_001F2F63;

loc_001F2F61: ;
    SET_LO8(ecx, 1);

loc_001F2F63: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEMF(0x807684) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x12));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001F2FC3; /* je: equal / zero */

loc_001F2F77: ;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_001F2FC3; /* jne: not equal / not zero */

loc_001F2F7B: ;
    (void)0; /* cmp MEM32(esp + 0x20), ebx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(MEM32(esp + 0x20), ebx)) goto loc_001F2F9F; /* je: equal / zero */

loc_001F2F82: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    MEM8(0x807697) = LO8(eax);
    MEM8(0x8086D5) = 1;
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_001F2F97: ;
    MEM8(0x8086D5) = LO8(ebx);
    goto loc_001F2FC0;

loc_001F2F9F: ;
    SET_LO8(edx, MEM8(esi + 0xC));
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO8(edx, ~LO8(edx));
    eax = esi + 0x28;
    SET_LO8(edx, LO8(edx) & 1);
    PUSH32(esp, eax);
    MEM8(0x8086CA) = LO8(edx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_001F2FB9: ;
    MEM8(0x8086CA) = 1;

loc_001F2FC0: ;
    esp = esp + 8;

loc_001F2FC3: ;
    esi = MEM32(esi + 0x24);
    if (CMP_NE(esi, ebx)) goto loc_001F2D22; /* jne: not equal / not zero */

loc_001F2FCE: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001F2FD0: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001F2FD8: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_001F2FE3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2FF0
 * Original: 0x001F2FF0 - 0x001F30B2 (194 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F2FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849794);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001F3035; /* je: equal / zero */

loc_001F2FFE: ;
    PUSH32(esp, edi);
    /* nop */

loc_001F3000: ;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001F3009: ;
    if (TEST_NZ(eax, eax)) goto loc_001F302E; /* jne: not equal / not zero */

loc_001F300D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001F302B: ;
    esp = esp + 4;

loc_001F302E: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = edi;
    if (CMP_NE(edi, ebx)) goto loc_001F3000; /* jne: not equal / not zero */

loc_001F3034: ;
    POP32(esp, edi);

loc_001F3035: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    eax = 0xA;
    POP32(esp, esi);
    MEM8(0x77616D) = LO8(ebx);
    MEM8(0x77616C) = LO8(ebx);
    MEM8(0x77616B) = LO8(ebx);
    MEM8(0x776162) = LO8(ebx);
    MEM32(0x849794) = ebx;
    MEM32(0x849798) = ebx;
    MEM32(0x84979C) = ebx;
    MEM32(0x776158) = ebx;
    MEM32(0x776140) = ebx;
    MEM8(0x776154) = LO8(ebx);
    MEM8(0x77616A) = 0x80;
    MEM16(0x776168) = LO16(eax);
    MEM16(0x776164) = LO16(eax);
    MEMF(0x77615C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F30C0
 * Original: 0x001F30C0 - 0x001F3107 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F30C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F30C0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001F3105; /* je: equal / zero */

loc_001F30C7: ;
    PUSH32(esp, edi);
    goto loc_001F30D0;

    /* nop */

loc_001F30D0: ;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001F30D9: ;
    if (TEST_NZ(eax, eax)) goto loc_001F30FE; /* jne: not equal / not zero */

loc_001F30DD: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001F30FB: ;
    esp = esp + 4;

loc_001F30FE: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_001F30D0; /* jne: not equal / not zero */

loc_001F3104: ;
    POP32(esp, edi);

loc_001F3105: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3110
 * Original: 0x001F3110 - 0x001F31AE (158 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3110: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_001F311D: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_001F31AC; /* je: equal / zero */

loc_001F312A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_001F3130: ;
    ebp = edi + 2;
    PUSH32(esp, 0x7D);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_001F313B: ;
    esi = eax;
    esp = esp + 8;
    MEM16(esi) = 0;
    ebx = 0; /* xor self */

loc_001F3147: ;
    ecx = MEM32(ebx * 4 + 0x6B9D98);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_001F3155: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001F3162; /* je: equal / zero */

loc_001F315C: ;
    ebx++;
    if (CMP_L(ebx, 0x23)) goto loc_001F3147; /* jl: less (signed <) */

loc_001F3162: ;
    SET_LO16(edx, MEM16(ebx * 2 + 0x6B9E28));
    esi = esi + 2;
    MEM16(edi) = LO16(edx);
    PUSH32(esp, esi);
    edi = ebp;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_001F3178: ;
    esp = esp + 4;
    if (CMP_LE(eax & eax, 0)) goto loc_001F318F; /* jle: less or equal (signed <=) */

loc_001F317F: ;
    /* nop */

loc_001F3180: ;
    SET_LO16(ecx, MEM16(esi));
    MEM16(edi) = LO16(ecx);
    edi = edi + 2;
    esi = esi + 2;
    eax--;
    if ((eax != 0)) goto loc_001F3180; /* jne: not equal / not zero */

loc_001F318F: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7B);
    PUSH32(esp, edx);
    MEM16(edi) = 0;
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_001F31A0: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_001F3130; /* jne: not equal / not zero */

loc_001F31A9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F31AC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F31B0
 * Original: 0x001F31B0 - 0x001F3249 (153 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F31B0(void)
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

loc_001F31B0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(edx, MEM8(esp + 0x10));
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(0x8497B6) = LO8(eax);
    MEM8(0x8497B2) = LO8(eax);
    SET_LO8(eax, MEM8(0x776175));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    MEM8(0x8497B5) = LO8(edx);
    MEM8(0x8497B7) = LO8(ecx);
    MEM8(0x8497B1) = LO8(edx);
    MEM8(0x8497B3) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F3223; /* je: equal / zero */

loc_001F31ED: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = ZX8(LO8(ebx));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 4) = eax;
    /* FPU: fimul dword ptr [esp + 4] */
    fp_push(MEMF(0x8497BC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001F3217: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x20));
    if (CMP_BE(LO8(ebx), LO8(eax))) goto loc_001F3223; /* jbe: below or equal (unsigned <=) */

loc_001F3221: ;
    SET_LO8(ebx, LO8(eax));

loc_001F3223: ;
    SET_LO8(eax, MEM8(0x776173));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x8497B8) = LO8(ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F3239; /* je: equal / zero */

loc_001F3232: ;
    MEM8(0x8497C0) = MEM8(0x8497C0) + 0x4E;

loc_001F3239: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_001F3249(); return; } /* jne: not equal / not zero */

loc_001F3242: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_001F3247: ;
    g_seh_ebp = ebp; sub_001F324E(); return; /* tail jmp 0x001F324E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F3340
 * Original: 0x001F3340 - 0x001F33DC (156 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3340(void)
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

loc_001F3340: ;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(esp + 0x10));
    SET_LO8(ecx, MEM8(esp + 0x14));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x20));
    MEM8(0x8497B6) = LO8(eax);
    MEM8(0x8497B2) = LO8(eax);
    SET_LO8(eax, MEM8(0x776175));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x8497B5) = LO8(edx);
    MEM8(0x8497B7) = LO8(ecx);
    MEM8(0x8497B1) = LO8(edx);
    MEM8(0x8497B3) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F33B6; /* je: equal / zero */

loc_001F3380: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = ZX8(LO8(ebx));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 8) = eax;
    /* FPU: fimul dword ptr [esp + 8] */
    fp_push(MEMF(0x8497BC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001F33AA: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x24));
    if (CMP_BE(LO8(ebx), LO8(eax))) goto loc_001F33B6; /* jbe: below or equal (unsigned <=) */

loc_001F33B4: ;
    SET_LO8(ebx, LO8(eax));

loc_001F33B6: ;
    SET_LO8(eax, MEM8(0x776173));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x8497B8) = LO8(ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F33CC; /* je: equal / zero */

loc_001F33C5: ;
    MEM8(0x8497C0) = MEM8(0x8497C0) + 0x4E;

loc_001F33CC: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_001F33DC(); return; } /* jne: not equal / not zero */

loc_001F33D5: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_001F33DA: ;
    g_seh_ebp = ebp; sub_001F33E1(); return; /* tail jmp 0x001F33E1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F3600
 * Original: 0x001F3600 - 0x001F39A5 (933 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3600(void)
{

loc_001F3600: ;
    PUSH32(esp, esi);
    esi = 0x1F4610;
    edx = 0xFFA1;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3610: ;
    esi = 0x1F4650;
    edx = 0xFFA2;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F361F: ;
    esi = 0x1F4680;
    edx = 0xFFA3;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F362E: ;
    esi = 0x1F46B0;
    edx = 0xFFA4;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F363D: ;
    esi = 0x1F46E0;
    edx = 0xFFA5;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F364C: ;
    esi = 0x1F4710;
    edx = 0xFFA6;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F365B: ;
    esi = 0xCF570;
    edx = 0xFFA7;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F366A: ;
    esi = 0x1F4760;
    edx = 0xFFA8;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3679: ;
    esi = 0x1F4780;
    edx = 0xFFA9;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3688: ;
    esi = 0x1F47C0;
    edx = 0xFFAF;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3697: ;
    esi = 0x1F4840;
    edx = 0xFFB0;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F36A6: ;
    esi = 0x1F47A0;
    edx = 0xFFAE;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F36B5: ;
    esi = 0x1F4890;
    edx = 0xFFAA;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F36C4: ;
    esi = 0x1F48B0;
    edx = 0xFFAB;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F36D3: ;
    esi = 0x1F48D0;
    edx = 0xFFAC;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F36E2: ;
    esi = 0x1F48F0;
    edx = 0xFFAD;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F36F1: ;
    esi = 0x1F4910;
    edx = 0xFFB2;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3700: ;
    esi = 0x1F4940;
    edx = 0xFFB4;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F370F: ;
    esi = 0x1F49A0;
    edx = 0xFFB5;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F371E: ;
    esi = 0x1F4970;
    edx = 0xFFB3;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F372D: ;
    esi = 0x1F4A50;
    edx = 0xFFBA;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F373C: ;
    esi = 0x1F49D0;
    edx = 0xFFB6;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F374B: ;
    esi = 0x1F4A10;
    edx = 0xFFB8;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F375A: ;
    esi = 0x1F4A30;
    edx = 0xFFB9;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3769: ;
    esi = 0x1F49F0;
    edx = 0xFFB7;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3778: ;
    esi = 0x1F4A70;
    edx = 0xFFBB;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3787: ;
    esi = 0x1F4AA0;
    edx = 0xFFB1;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F3796: ;
    esi = 0xCF570;
    edx = 0x3E8;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F37A5: ;
    esi = 0x1F4B40;
    edx = 0xFFBC;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F37B4: ;
    esi = 0x1F4B60;
    edx = 0xFFBD;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F37C3: ;
    esi = 0x1F4B80;
    edx = 0xFFBE;
    PUSH32(esp, 0); sub_003D3BC0(); /* call 0x003D3BC0 */

loc_001F37D2: ;
    esi = 0x1F44B0;
    edx = 0xFFA1;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F37E1: ;
    esi = 0x1F44B0;
    edx = 0xFFA2;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F37F0: ;
    esi = 0x1F44B0;
    edx = 0xFFA3;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F37FF: ;
    esi = 0x1F44B0;
    edx = 0xFFA4;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F380E: ;
    esi = 0x1F44B0;
    edx = 0xFFA5;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F381D: ;
    esi = 0x1F44B0;
    edx = 0xFFA6;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F382C: ;
    esi = 0x1F44B0;
    edx = 0xFFA7;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F383B: ;
    esi = 0x1F3B10;
    edx = 0xFFA8;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F384A: ;
    esi = 0x1F3B90;
    edx = 0xFFA9;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3859: ;
    esi = 0x1F3C90;
    edx = 0xFFAF;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3868: ;
    esi = 0x1F3D10;
    edx = 0xFFB0;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3877: ;
    esi = 0x1F3C10;
    edx = 0xFFAE;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3886: ;
    esi = 0x1F3D70;
    edx = 0xFFAA;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3895: ;
    esi = 0x1F3DF0;
    edx = 0xFFAB;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38A4: ;
    esi = 0x1F3E70;
    edx = 0xFFAC;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38B3: ;
    esi = 0x1F3EF0;
    edx = 0xFFAD;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38C2: ;
    esi = 0x1F3F70;
    edx = 0xFFB2;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38D1: ;
    esi = 0x1F3FF0;
    edx = 0xFFB4;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38E0: ;
    esi = 0x1F40F0;
    edx = 0xFFB5;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38EF: ;
    esi = 0x1F4070;
    edx = 0xFFB3;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F38FE: ;
    esi = 0x1F4370;
    edx = 0xFFBA;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F390D: ;
    esi = 0x1F4170;
    edx = 0xFFB6;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F391C: ;
    esi = 0x1F4270;
    edx = 0xFFB8;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F392B: ;
    esi = 0x1F42F0;
    edx = 0xFFB9;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F393A: ;
    esi = 0x1F41F0;
    edx = 0xFFB7;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3949: ;
    esi = 0x1F43F0;
    edx = 0xFFBB;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3958: ;
    esi = 0x1F4470;
    edx = 0xFFB1;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3967: ;
    esi = 0x1F44B0;
    edx = 0x3E8;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3976: ;
    esi = 0x1F44D0;
    edx = 0xFFBC;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3985: ;
    esi = 0x1F4550;
    edx = 0xFFBD;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F3994: ;
    esi = 0x1F45D0;
    edx = 0xFFBE;
    PUSH32(esp, 0); sub_003D3C60(); /* call 0x003D3C60 */

loc_001F39A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F39B0
 * Original: 0x001F39B0 - 0x001F39C0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F39B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F39B0: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_001F39C0(); return; } /* jne: not equal / not zero */

loc_001F39B9: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_001F39BE: ;
    g_seh_ebp = ebp; sub_001F39C5(); return; /* tail jmp 0x001F39C5 */

}

/**
 * sub_001F3A50
 * Original: 0x001F3A50 - 0x001F3AA2 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A50(void)
{
    float xmm0;

loc_001F3A50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8076AC);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    MEM8(0x8086C5) = 1;
    MEMF(0x8086BC) = xmm0; /* movss */
    MEM32(0x8076AC) = 2;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_001F3A85: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x8076AC) = esi;
    esp = esp + 0x10;
    MEMF(edx) = xmm0; /* movss */
    MEM8(0x8086C5) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3AB0
 * Original: 0x001F3AB0 - 0x001F3AE7 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3AB0: ;
    SET_LO8(eax, MEM8(ebx + 4));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) { sub_001F3AE7(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F3ABB: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edi = edi;

loc_001F3AC0: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = esi + eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_001F3AD6; /* jne: not equal / not zero */

loc_001F3ACE: ;
    eax = MEM32(esi + eax);
    PUSH32(esp, 0); sub_00075F90(); /* call 0x00075F90 */

loc_001F3AD6: ;
    eax = ZX8(MEM8(ebx + 4));
    edi = MEM32(edi);
    ebp++;
    esi = esi + 0x14;
    if (CMP_B(ebp, eax)) goto loc_001F3AC0; /* jb: below (unsigned <) */

loc_001F3AE4: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001F3AEB(); return; /* tail jmp 0x001F3AEB */

}

/**
 * sub_001F3B10
 * Original: 0x001F3B10 - 0x001F3B85 (117 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B10(void)
{
    float xmm0;

loc_001F3B10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = 0x58DC24;
    PUSH32(esp, 0); sub_001F3AB0(); /* call 0x001F3AB0 */

loc_001F3B28: ;
    edx = MEM32(0x84A148);
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x84A13C);
    esp = esp + 8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(edx + ecx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    eax = ZX16(MEM16(esp + 8));
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B90
 * Original: 0x001F3B90 - 0x001F3C05 (117 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B90(void)
{
    float xmm0;

loc_001F3B90: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = 0x58DC2C;
    PUSH32(esp, 0); sub_001F3AB0(); /* call 0x001F3AB0 */

loc_001F3BA8: ;
    edx = MEM32(0x84A148);
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x84A13C);
    esp = esp + 8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(edx + ecx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    eax = ZX16(MEM16(esp + 8));
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3C10
 * Original: 0x001F3C10 - 0x001F3C87 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F3C10: ;
    eax = MEM32(0x69E5A8);
    if (TEST_NZ(eax, eax)) goto loc_001F3C31; /* jne: not equal / not zero */

loc_001F3C19: ;
    eax = MEM32(0x69E5A4);
    PUSH32(esp, 0x69E5A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F3C29: ;
    eax = MEM32(0x69E5A8);
    esp = esp + 8;

loc_001F3C31: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3C90
 * Original: 0x001F3C90 - 0x001F3CCD (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3C90: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001F3C99: ;
    eax = eax - 4;
    if ((eax == 0)) { sub_001F3CCD(); return; } /* je: equal / zero */

loc_001F3C9E: ;
    eax--;
    if ((eax == 0)) goto loc_001F3CBC; /* je: equal / zero */

loc_001F3CA1: ;
    eax--;
    if ((eax == 0)) goto loc_001F3CAB; /* je: equal / zero */

loc_001F3CA4: ;
    ebx = 0x58DDF4;
    g_seh_ebp = ebp; sub_001F3CD2(); return; /* tail jmp 0x001F3CD2 */

loc_001F3CAB: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebx = 0x58DE14;
    g_seh_ebp = ebp; sub_001F3CDC(); return; /* tail jmp 0x001F3CDC */

loc_001F3CBC: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ebx = 0x58DE1C;
    g_seh_ebp = ebp; sub_001F3CDC(); return; /* tail jmp 0x001F3CDC */

}

/**
 * sub_001F3D10
 * Original: 0x001F3D10 - 0x001F3D34 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3D10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001F3D19: ;
    if (CMP_B(eax, 4)) { sub_001F3D34(); return; } /* jb: below (unsigned <) */

loc_001F3D1E: ;
    if (CMP_A(eax, 6)) { sub_001F3D34(); return; } /* ja: above (unsigned >) */

loc_001F3D23: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ebx = 0x58DE0C;
    g_seh_ebp = ebp; sub_001F3D43(); return; /* tail jmp 0x001F3D43 */

}

/**
 * sub_001F3DF0
 * Original: 0x001F3DF0 - 0x001F3E67 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F3DF0: ;
    eax = MEM32(0x69E5F8);
    if (TEST_NZ(eax, eax)) goto loc_001F3E11; /* jne: not equal / not zero */

loc_001F3DF9: ;
    eax = MEM32(0x69E5F4);
    PUSH32(esp, 0x69E5F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F3E09: ;
    eax = MEM32(0x69E5F8);
    esp = esp + 8;

loc_001F3E11: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3E70
 * Original: 0x001F3E70 - 0x001F3EE7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F3E70: ;
    eax = MEM32(0x69E60C);
    if (TEST_NZ(eax, eax)) goto loc_001F3E91; /* jne: not equal / not zero */

loc_001F3E79: ;
    eax = MEM32(0x69E608);
    PUSH32(esp, 0x69E60C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F3E89: ;
    eax = MEM32(0x69E60C);
    esp = esp + 8;

loc_001F3E91: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}
