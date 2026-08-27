/**
 * Burnout 3 - Recompiled code chunk 16
 * Functions: 250 (0x001685E0 - 0x0017D9C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001685E0
 * Original: 0x001685E0 - 0x0016861F (63 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001685E0(void)
{

loc_001685E0: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x774C32) = LO8(eax);
    MEM8(0x774C33) = LO8(eax);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0x774C14) = eax;
    MEM32(0x774C24) = ecx;
    MEM32(0x774C18) = eax;
    MEM32(0x774C28) = ecx;
    MEM32(0x774C1C) = eax;
    MEM32(0x774C2C) = ecx;
    MEM16(0x774C20) = LO16(eax);
    MEM16(0x774C30) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00168620
 * Original: 0x00168620 - 0x00168679 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168620(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168620: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0x18;
    MEM8(esp + 0x11) = 0x19;
    MEM8(esp + 0x12) = 0x1A;
    MEM8(esp + 0x13) = 0x1B;
    MEM8(esp + 0x14) = 0xD;
    MEM8(esp + 0x15) = 0x30;
    MEM8(esp + 0x16) = 0x31;
    MEM8(esp + 0x17) = 0x32;
    MEM8(esp + 0x18) = 0xF6;
    MEM8(esp + 0x19) = 0xF3;
    MEM8(esp + 0x1A) = 0xF0;
    MEM8(esp + 0x1B) = 0xED;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM8(esp + 0x1E) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(ebx);
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_00168680(); return; /* tail jmp 0x00168680 */

}

/**
 * sub_001686E0
 * Original: 0x001686E0 - 0x001687F6 (278 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001686E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001686E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0xC7));
    SET_LO8(ecx, LO8(ecx) & 3);
    if (CMP_NE(LO8(ecx), 3)) goto loc_001687F5; /* jne: not equal / not zero */

loc_001686F6: ;
    edx = MEM32(0x7FA20C);
    xmm0 = MEMF(eax + 0xB4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F60); /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 4) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_0016872C; /* jbe: below or equal (unsigned <=) */

loc_00168726: ;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00168735;

loc_0016872C: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0016873A; /* jb: below (unsigned <) */

loc_00168731: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_00168735: ;
    MEMF(eax + 4) = xmm0; /* movss */

loc_0016873A: ;
    xmm0 = MEMF(eax + 0xB8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 8); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 8) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_0016875B; /* jbe: below or equal (unsigned <=) */

loc_00168755: ;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00168764;

loc_0016875B: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00168769; /* jb: below (unsigned <) */

loc_00168760: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_00168764: ;
    MEMF(eax + 8) = xmm0; /* movss */

loc_00168769: ;
    xmm0 = MEMF(eax + 0xBC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0xC); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 0xC) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_0016878A; /* jbe: below or equal (unsigned <=) */

loc_00168784: ;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00168793;

loc_0016878A: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00168798; /* jb: below (unsigned <) */

loc_0016878F: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_00168793: ;
    MEMF(eax + 0xC) = xmm0; /* movss */

loc_00168798: ;
    SET_LO16(ecx, MEM16(eax + 0x8C));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx)));
    MEM16(eax + 0xAE) = MEM16(eax + 0xAE) - LO16(ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0xAE));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0xAC));
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) * (int32_t)LO16(edx)));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) + LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xB0));
    MEM16(eax + 0x14) = MEM16(eax + 0x14) + LO16(esi);
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx)));
    MEM16(eax + 0x18) = MEM16(eax + 0x18) + LO16(ecx);
    ecx = ZX8(MEM8(eax + 0xEE));
    ecx = ecx - edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_001687EE; /* jle: less or equal (signed <=) */

loc_001687E7: ;
    MEM8(eax + 0xEE) = LO8(ecx);
    esp += 4; return; /* ret */

loc_001687EE: ;
    MEM8(eax + 0xC2) = 1;

loc_001687F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00168800
 * Original: 0x00168800 - 0x0016885A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168800: ;
    ecx = MEM32(esp + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xD8);
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    SET_LO8(eax, LO8(eax) - 0x40);
    (void)0; /* cmp LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax), 0x40)) { sub_0016885A(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016881B: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_00168844; /* jbe: below or equal (unsigned <=) */

loc_0016881F: ;
    (void)0; /* cmp LO8(eax), 0xC0 - flags set for next jcc */
    eax = ZX8(LO8(eax));
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_00168836; /* jbe: below or equal (unsigned <=) */

loc_00168826: ;
    eax = eax << 2;
    edx = 0x743490;
    edx = edx - eax;
    xmm0 = MEMF(edx); /* movss */
    g_seh_ebp = ebp; sub_00168866(); return; /* tail jmp 0x00168866 */

loc_00168836: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x742E90); /* subss */
    g_seh_ebp = ebp; sub_00168866(); return; /* tail jmp 0x00168866 */

loc_00168844: ;
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743290;
    eax = eax - edx;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    g_seh_ebp = ebp; sub_00168866(); return; /* tail jmp 0x00168866 */

}

/**
 * sub_00168980
 * Original: 0x00168980 - 0x00168CB1 (817 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168980(void)
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

loc_00168980: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    esp = esp - 0x158;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x164);
    MEM16(ebp + 0x4C) = MEM16(ebp + 0x4C) - LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x4C));
    ebx = 0; /* xor self */
    if (CMP_GE(LO16(eax), LO16(ebx))) goto loc_00168CA8; /* jge: greater or equal (signed >=) */

loc_001689A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001689B3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEM32(esp + 0x9C) = 0x303;
    MEM32(esp + 0x14) = 0xBE;
    MEM32(esp + 0x18) = 0xBF;
    MEM8(esp + 0xA4) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001689E7: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_001689F3; /* jns: not sign (positive) */

loc_001689EE: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_001689F3: ;
    ecx = MEM32(esp + eax * 4 + 0x14);
    esi = MEM32(ebp + 0x50);
    edi = esp + 0x60;
    MEM32(esp + 0xA8) = ecx;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_00168A0A: ;
    esi = MEM32(ebp + 0x54);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_00168A16: ;
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm7 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x64); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x60); /* subss */
    xmm7 = xmm7 - MEMF(esp + 0x68); /* subss */
    ecx = esp + 0x14;
    edi = esp + 0x10;
    esi = esp + 0x2C;
    edx = esp + 0x20;
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm7; /* movss */
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_00168A61: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00168A66: ;
    (void)0; /* cmp MEM32(esp + 0xA8), 0xBF - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    if (CMP_NE(MEM32(esp + 0xA8), 0xBF)) goto loc_00168A8B; /* jne: not equal / not zero */

loc_00168A83: ;
    xmm0 = xmm0 * MEMF(0x649E68); /* mulss */

loc_00168A8B: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm1 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x48) = xmm6; /* movss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00168B2B; /* jnp: not parity */

loc_00168B01: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */

loc_00168B2B: ;
    eax = 2;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = 4;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = eax;
    MEM16(esp + 0x56) = 0x12C;
    MEMF(esp + 0xAC) = xmm5; /* movss */
    MEMF(esp + 0xB0) = xmm5; /* movss */
    MEM32(esp + 0xD4) = ebx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00168BA8: ;
    edx = MEM32(0x595D14);
    eax = MEM32(0x595D18);
    ecx = MEM32(0x595D1C);
    MEM32(esp + 0x6C) = edx;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    MEM32(esp + 0x70) = eax;
    eax = 0xFF;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x649F88); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x26);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(esp + 0xB8) = LO8(eax);
    MEM8(esp + 0xB9) = LO8(eax);
    MEM8(esp + 0xBA) = LO8(eax);
    MEM8(esp + 0xBB) = LO8(eax);
    MEM8(esp + 0xAC) = LO8(eax);
    MEM16(esp + 0xB6) = LO16(eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x597978);
    eax = esp + 0x7C;
    MEM32(esp + 0x9C) = ecx;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEM32(esp + 0xAC) = 0x6400000;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM16(esp + 0xBC) = 1;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00168C77: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, ebx)) goto loc_00168C8F; /* je: equal / zero */

loc_00168C7E: ;
    edi = eax + 0x310;
    ecx = 0xA;
    esi = esp + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00168C8F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00168C94: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, esi);
    edx = edx + 0xC8;
    MEM16(ebp + 0x4C) = LO16(edx);

loc_00168CA8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x158;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00168CC0
 * Original: 0x00168CC0 - 0x00168D2D (109 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168CC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00168CC0: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(eax + 0x310); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x314); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x318); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x31C); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 0x31C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00168D2D(); return; } /* jbe: below or equal (unsigned <=) */

loc_00168D2A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00168D40
 * Original: 0x00168D40 - 0x00168D7A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00168D40: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A144);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = MEM32(eax + ecx + 4);
    xmm0 = MEMF(edx + 0x34); /* movss */
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00168D68: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, MEMF(esp) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp))) { sub_00168D7A(); return; } /* jbe: below or equal (unsigned <=) */

loc_00168D76: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00168DA0
 * Original: 0x00168DA0 - 0x00168DAA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168DA0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168DA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(esp + 4) = LO8(ebx);
    g_seh_ebp = ebp; sub_00168DB0(); return; /* tail jmp 0x00168DB0 */

}

/**
 * sub_00168DD0
 * Original: 0x00168DD0 - 0x00168E34 (100 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168DD0(void)
{

loc_00168DD0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x10));
    esi = esi << 2;
    SET_LO8(eax, MEM8(esi + 0x5F46C0));
    ecx = esp + 4;
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    eax = 0x3C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00168DFF: ;
    SET_LO8(edx, MEM8(esi + 0x5F46A0));
    PUSH32(esp, 0x22);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x24;
    MEM32(esp + 0x20) = 0x71;
    MEM8(esp + 0x28) = LO8(edx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00168E2C: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00168E40
 * Original: 0x00168E40 - 0x00168F23 (227 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00168E40: ;
    esp = esp - 0xC;
    eax = MEM32(0x84B4A0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x21C0;
    edi = eax + 0x2238;
    PUSH32(esp, 0xFF);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEM32(0x771260) = 0x168620;
    MEM16(esp + 0x14) = LO16(ebx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00168E79: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00168EC3; /* je: equal / zero */

loc_00168E80: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x5E;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = LO8(ebx);
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;

loc_00168EC3: ;
    edx = MEM32(0x84B290);
    if (TEST_Z(MEM8(edx + 0x12), 0x40)) goto loc_00168F1C; /* je: equal / zero */

loc_00168ECF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x4C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00168EE0: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00168F1C; /* je: equal / zero */

loc_00168EE7: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 9;
    MEM8(eax + 0x39) = 0xFF;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = LO8(ebx);
    ecx = 0; /* xor self */
    eax = eax + 0x3C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;

loc_00168F1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00168F30
 * Original: 0x00168F30 - 0x00168FCF (159 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168F30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_00168FCD; /* jne: not equal / not zero */

loc_00168F3F: ;
    SET_LO8(eax, MEM8(0x774C96));
    SET_LO8(eax, LO8(eax) + MEM8(0x7FA20C));
    (void)0; /* cmp LO8(eax), 5 - flags set for next jcc */
    MEM8(0x774C96) = LO8(eax);
    if (CMP_BE(LO8(eax), 5)) goto loc_00168F6F; /* jbe: below or equal (unsigned <=) */

loc_00168F53: ;
    SET_LO8(eax, MEM8(0x774C97));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), 4 - flags set for next jcc */
    MEM8(0x774C97) = LO8(eax);
    if (CMP_B(LO8(eax), 4)) goto loc_00168F69; /* jb: below (unsigned <) */

loc_00168F63: ;
    MEM8(0x774C97) = LO8(ebx);

loc_00168F69: ;
    MEM8(0x774C96) = LO8(ebx);

loc_00168F6F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8472A0);
    eax = 6;
    esi = 3;
    ebp = 2;

loc_00168F87: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00168FAF; /* je: equal / zero */

loc_00168F8B: ;
    ecx = MEM32(0x84A5F8);
    edx = 0; /* xor self */

loc_00168F93: ;
    if (CMP_EQ(MEM32(ecx + 0x64), ebx)) goto loc_00168FA0; /* je: equal / zero */

loc_00168F98: ;
    if (CMP_EQ(MEM8(ecx + 0x10B), LO8(eax))) { sub_00168FCF(); return; } /* je: equal / zero */

loc_00168FA0: ;
    ecx = ecx + 0x6D0;
    edx++;
    if (CMP_L(edx, 0x81)) goto loc_00168F93; /* jl: less (signed <) */

loc_00168FAF: ;
    ebx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_003C67F0(); /* call 0x003C67F0 */

loc_00168FBB: ;
    ebx = 0; /* xor self */
    ebp--;
    eax = 7;
    esi = 4;
    if ((ebp != 0)) goto loc_00168F87; /* jne: not equal / not zero */

loc_00168FCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00168FCD: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00169100
 * Original: 0x00169100 - 0x00169171 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169100(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00169100: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    xmm0 = MEMF(esi + 0x78); /* movss */
    eax = MEM32(edx + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6495DC); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F47CC;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00169150: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00169171(); return; } /* je: equal / zero */

loc_00169157: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_00169171(); return; } /* je: equal / zero */

loc_0016915F: ;
    edx = MEM32(eax + 8);
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_002F79B0(); /* call 0x002F79B0 */

loc_0016916B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00169190
 * Original: 0x00169190 - 0x001691DE (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169190(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00169190: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x534);
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, ecx)) goto loc_001691D4; /* je: equal / zero */

loc_001691A0: ;
    edx = MEM32(esp + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    MEM8(edx + 0x1B) = 2;
    xmm0 = MEMF(eax + 0x520); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 0x520) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001691DB; /* jbe: below or equal (unsigned <=) */

loc_001691C8: ;
    MEM32(eax + 0x534) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

loc_001691D4: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x1B) = LO8(ecx);

loc_001691DB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001691E0
 * Original: 0x001691E0 - 0x001693E0 (512 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001691E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001691E0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x4C);
    eax = MEM32(esi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(eax, eax)) goto loc_001693CD; /* je: equal / zero */

loc_001691FB: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebp + 0x50))) goto loc_001693CD; /* jne: not equal / not zero */

loc_0016920A: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(ebp + 0x52) = MEM16(ebp + 0x52) - LO16(ecx);
    SET_LO16(eax, MEM16(ebp + 0x52));
    if (((int32_t)MEM16(ebp + 0x52) >= 0)) goto loc_00169298; /* jns: not sign (positive) */

loc_0016921B: ;
    MEM8(esp + 8) = 3;
    MEM8(esp + 9) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016922A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0xE) = 0;
    edx = edx + 5;
    MEM16(esp + 0xA) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016925D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x79;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esi + 0x78;
    edx = edx + 0x32;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x24;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_00169281: ;
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169289: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x45;
    MEM16(ebp + 0x52) = LO16(edx);

loc_00169298: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(ebp + 0x54) = MEM16(ebp + 0x54) - LO16(edx);
    SET_LO16(eax, MEM16(ebp + 0x54));
    if (((int32_t)MEM16(ebp + 0x54) >= 0)) goto loc_00169381; /* jns: not sign (positive) */

loc_001692AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001692B4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x22) = 0xAE;
    MEM8(esp + 0x21) = 0xD2;
    MEM8(esp + 0x20) = 0xFF;
    ebx = edx;
    SET_LO8(ebx, LO8(ebx) + 2);

loc_001692D0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001692D5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x20;
    SET_LO8(edx, LO8(edx) - 0x6A);
    MEM8(esp + 0x23) = LO8(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001692F8: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016931D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0xA;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016932F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x81;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    eax = eax - 0x3F;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169345: ;
    edi = eax;
    eax = esi;
    esi = MEM32(esp + 0x2C);
    ecx = esi;
    esi = MEM32(esp + 0x34);
    edi = edi & 0xFF;
    PUSH32(esp, 0); sub_000A9110(); /* call 0x000A9110 */

loc_0016935E: ;
    esp = esp + 0x1C;
    SET_LO8(ebx, LO8(ebx) - 1);
    if (CMP_G(LO8(ebx) & LO8(ebx), 0)) goto loc_001692D0; /* jg: greater (signed >) */

loc_0016936B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169370: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x8D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, ebx);
    edx = edx + 0x19;
    MEM16(ebp + 0x54) = LO16(edx);

loc_00169381: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(ebp + 0x56) = MEM16(ebp + 0x56) - LO16(edx);
    if (CMP_GE(MEM16(ebp + 0x56), 0)) goto loc_001693DA; /* jge: greater or equal (signed >=) */

loc_00169393: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169398: ;
    eax = eax & 0x7F;
    eax = eax - 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001693A4: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A96D0(); /* call 0x000A96D0 */

loc_001693B0: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001693B8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    edx = edx + 0xF;
    MEM16(ebp + 0x56) = LO16(edx);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001693CD: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */

loc_001693DA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001693E0
 * Original: 0x001693E0 - 0x001696A1 (705 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001693E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001693E0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x849410));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00169692; /* jne: not equal / not zero */

loc_001693EE: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x76FE18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = 0x5F47B4;
    MEM8(0x849410) = 1;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00169417: ;
    edx = MEM32(0x76FE08);
    eax = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = 0x5F479C;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00169436: ;
    ecx = MEM32(0x76FE08);
    edx = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = 0x5F4784;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00169456: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = 0x5F476C;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00169475: ;
    edx = MEM32(0x76FE08);
    eax = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = 0x5F4754;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00169494: ;
    ecx = MEM32(0x76FE08);
    edx = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = 0x5F473C;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_001694B4: ;
    eax = MEM32(0x76FE08);
    ecx = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    esp = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = 0x5F4724;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_001694D6: ;
    edx = MEM32(0x76FE08);
    eax = MEM32(0x76FE00);
    esi = MEM32(0x76FE18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = 0x5F470C;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_001694F5: ;
    ecx = MEM32(0x76FE00);
    edi = MEM32(ecx + 0x14);
    esi = MEM32(0x76FE08);
    esp = esp + 0x18;
    if (TEST_Z(edi, edi)) goto loc_00169545; /* je: equal / zero */

loc_0016950B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F46FC);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_0016951A: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00169545; /* je: equal / zero */

loc_00169526: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(esi + 0xC);
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    eax = eax >> 3;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);

loc_00169545: ;
    PUSH32(esp, 1);
    ebx = 0x5F46FC;
    PUSH32(esp, 0); sub_00066D60(); /* call 0x00066D60 */

loc_00169551: ;
    eax = MEM32(0x76FE00);
    edi = MEM32(eax + 0x14);
    esi = MEM32(0x76FE08);
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_001695A7; /* je: equal / zero */

loc_00169566: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F46E8);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_00169575: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001695A7; /* je: equal / zero */

loc_00169581: ;
    esi = MEM32(esi + 0xC);
    edx = eax + eax * 4;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + edx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);

loc_001695A7: ;
    PUSH32(esp, 0);
    ebx = 0x5F46E8;
    PUSH32(esp, 0); sub_00066D60(); /* call 0x00066D60 */

loc_001695B3: ;
    ecx = MEM32(0x76FD10);
    esp = esp + 4;
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001695E3; /* jle: less or equal (signed <=) */

loc_001695C2: ;
    edx = MEM32(0x8471B8);
    eax = edx + 0xC6;
    edi = edi;

loc_001695D0: ;
    if (CMP_EQ(MEM8(eax), 0xFD)) goto loc_00169694; /* je: equal / zero */

loc_001695D9: ;
    edi++;
    eax = eax + 0x150;
    if (CMP_L(edi, ecx)) goto loc_001695D0; /* jl: less (signed <) */

loc_001695E3: ;
    edi = 0; /* xor self */

loc_001695E5: ;
    eax = MEM32(edi + 0x64);
    ecx = MEM32(edi + 0x60);
    edx = MEM32(ecx + 0x24);
    esi = MEM32(edi + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = 0x5F47B4;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_00169602: ;
    edx = MEM32(edi + 0x60);
    ecx = MEM32(edi + 0x64);
    eax = MEM32(edx + 0x24);
    esi = MEM32(edi + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = 0x5F479C;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_0016961F: ;
    edx = MEM32(0x76FD10);
    esp = esp + 0x18;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00169650; /* jle: less or equal (signed <=) */

loc_0016962E: ;
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;
    /* nop */

loc_00169640: ;
    if (CMP_EQ(MEM8(ecx), 0xFC)) { sub_001696A1(); return; } /* je: equal / zero */

loc_00169645: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_00169640; /* jl: less (signed <) */

loc_00169650: ;
    edi = 0; /* xor self */
    edx = MEM32(edi + 0x64);
    eax = MEM32(edi + 0x60);
    ecx = MEM32(eax + 0x24);
    esi = MEM32(edi + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = 0x5F47B4;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_0016966F: ;
    eax = MEM32(edi + 0x64);
    ecx = MEM32(edi + 0x60);
    edx = MEM32(ecx + 0x24);
    esi = MEM32(edi + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = 0x5F479C;
    PUSH32(esp, 0); sub_00073A70(); /* call 0x00073A70 */

loc_0016968C: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00169692: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00169694: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x150);
    edi = edi + edx;
    goto loc_001695E5;

}

/**
 * sub_001696B0
 * Original: 0x001696B0 - 0x00169734 (132 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001696B0(void)
{
    float xmm0;

loc_001696B0: ;
    esp = esp - 0x30;
    SET_LO8(edx, MEM8(eax + 0x10B));
    xmm0 = MEMF(0x648D20); /* movss */
    ecx = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x595D14);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x595D1C);
    PUSH32(esp, ecx);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM8(esp + 0x14) = LO8(ecx);
    MEM8(esp + 0x31) = LO8(ecx);
    MEM8(esp + 0xC) = LO8(edx);
    edx = MEM32(0x595D18);
    ecx = esp + 4;
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(esp + 0x38));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x30) = 0x12C;
    MEM8(esp + 0x32) = 0x1B;
    MEM8(esp + 0x33) = 0xB;
    MEM8(esp + 0x34) = 0xFF;
    PUSH32(esp, 0); sub_000B0070(); /* call 0x000B0070 */

loc_00169730: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00169740
 * Original: 0x00169740 - 0x001698BB (379 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169740(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00169740: ;
    esp = esp - 0x24;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016976D: ;
    xmm0 = xmm0 * MEMF(0x64A400); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169780: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x41;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169791: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_001697A0: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001697A8: ;
    edx = MEM32(esp + 0x44);
    xmm5 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7FA248); /* movss */
    xmm0 = xmm0 * MEMF(0x64A3FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A3F8); /* addss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 4));
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x38); /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm3; /* movss */
    PUSH32(esp, eax);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x40); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x44); /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    PUSH32(esp, 0xFFFFFFFFu);
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    PUSH32(esp, 0);
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x14); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169847: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x19);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169858: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00169869: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00169884: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x64A1EC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    edx = esp + 0x30;
    xmm0 = MEMF(0x64A3F4); /* movss */
    PUSH32(esp, edx);
    eax = 0x14;
    ecx = edi;
    edx = esp + 0x40;
    PUSH32(esp, 0); sub_00102920(); /* call 0x00102920 */

loc_001698B3: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001698C0
 * Original: 0x001698C0 - 0x00169934 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001698C0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001698C0: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    ecx = MEM32(0x8470DC);
    MEM32(esp + 4) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    fp_push(MEMF(ecx + 0x338)); /* fld float */
    /* FPU: fisub dword ptr [esp + 4] */
    MEM32(esp + 4) = edx;
    fp_push(MEMF(ecx + 0x334)); /* fld float */
    /* FPU: fisub dword ptr [esp + 4] */
    fp_push(MEMF(ecx + 0x330)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    MEM32(esp + 4) = ecx;
    /* FPU: fisub dword ptr [esp + 4] */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x6495D8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) { sub_00169934(); return; } /* jb: below (unsigned <) */

loc_00169928: ;
    ecx = 0xFF;
    MEM8(eax + 0xEE) = LO8(ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00169980
 * Original: 0x00169980 - 0x00169ABB (315 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00169980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00169AB4; /* je: equal / zero */

loc_0016999C: ;
    edi = ZX8(MEM8(ebp + 8));
    edx = MEM32(0x6B7520);
    edi = edi + edi * 2;
    edi = edi << 2;
    eax = edi + 0x5983DC;
    ecx = esp + 0x30;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001699CD: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_001699E5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001699EA: ;
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001699FD: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    xmm0 = xmm0 * MEMF(0x649240); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FF0); /* addss */
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(0x6B7520);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00169A36: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_00169A4A; /* je: equal / zero */

loc_00169A3D: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00169A4A; /* je: equal / zero */

loc_00169A45: ;
    ebx = MEM32(eax + 8);
    goto loc_00169A4C;

loc_00169A4A: ;
    ebx = 0; /* xor self */

loc_00169A4C: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00169A63: ;
    xmm0 = xmm0 * MEMF(0x64925C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169A7E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00169A8F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x3C);
    eax = edi + 0x5983F4;
    edx = edx + 4;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_00169AB1: ;
    esp = esp + 0x2C;

loc_00169AB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00169AC0
 * Original: 0x00169AC0 - 0x00169B37 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169AC0: ;
    edx = MEM32(0x76FD10);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM8(0x774C36) = LO8(ebx);
    MEM8(0x774C35) = LO8(ebx);
    MEM8(0x774C34) = LO8(ebx);
    if (CMP_LE(edx, ebx)) goto loc_00169B1F; /* jle: less or equal (signed <=) */

loc_00169AE1: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;
    edi = edi;

loc_00169AF0: ;
    if (CMP_EQ(MEM8(ecx), 0xF6)) goto loc_00169B02; /* je: equal / zero */

loc_00169AF5: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_00169AF0; /* jl: less (signed <) */

loc_00169B00: ;
    goto loc_00169B1E;

loc_00169B02: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    if (CMP_EQ(eax, ebx)) goto loc_00169B1E; /* je: equal / zero */

loc_00169B0E: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */

loc_00169B1E: ;
    POP32(esp, esi);

loc_00169B1F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x64);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x849410) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) { sub_00169B37(); return; } /* je: equal / zero */

loc_00169B32: ;
    eax = MEM32(eax + 0x24);
    g_seh_ebp = ebp; sub_00169B39(); return; /* tail jmp 0x00169B39 */

}

/**
 * sub_00169B60
 * Original: 0x00169B60 - 0x00169BEB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169B60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00169B60: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esi + 0x10B));
    ebx = 0; /* xor self */
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEM16(esp + 0x16) = LO16(ebx);
    MEM16(esp + 0x18) = LO16(ebx);
    MEM16(esp + 0x1A) = LO16(ebx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00169B95: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00169BE5; /* je: equal / zero */

loc_00169B9C: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x50;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = 0x3D;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00169BE5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00169BF0
 * Original: 0x00169BF0 - 0x00169C91 (161 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169BF0(void)
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

loc_00169BF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4C);
    fp_push(MEMF(ecx + eax + 0x100)); /* fld float */
    eax = ecx + eax + 0x100;
    /* FPU: fsin  */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= xmm1)) goto loc_00169C49; /* jbe: below or equal (unsigned <=) */

loc_00169C3A: ;
    /* nop */

loc_00169C40: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00169C40; /* ja: above (unsigned >) */

loc_00169C49: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00169C5A; /* jbe: below or equal (unsigned <=) */

loc_00169C51: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00169C51; /* ja: above (unsigned >) */

loc_00169C5A: ;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00169C7A; /* jbe: below or equal (unsigned <=) */

loc_00169C71: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00169C71; /* ja: above (unsigned >) */

loc_00169C7A: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00169C89; /* jbe: below or equal (unsigned <=) */

loc_00169C7F: ;
    /* nop */

loc_00169C80: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00169C80; /* ja: above (unsigned >) */

loc_00169C89: ;
    MEMF(eax + 4) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00169CA0
 * Original: 0x00169CA0 - 0x00169D2A (138 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169CA0(void)
{
    float xmm0, xmm1, xmm5;

loc_00169CA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4C);
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(ecx + eax + 0x128); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    edx = ecx + eax + 0x100;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx + 2;
    ecx = ecx << 6;
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x24); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    esi = ecx + eax;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00169D09: ;
    xmm0 = MEMF(edx + 0x20); /* movss */
    xmm1 = MEMF(edx + 0x1C); /* movss */
    edx = MEM32(edx + 0x18);
    esp = esp + 0x24;
    MEM32(esi + 0x30) = edx;
    MEMF(esi + 0x34) = xmm1; /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00169D30
 * Original: 0x00169D30 - 0x00169E23 (243 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169D30(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm5;

loc_00169D30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    xmm0 = MEMF(0x648D20); /* movss */
    xmm1 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x38);
    xmm2 = MEMF(eax + 0x44); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x3C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00169D9A: ;
    eax = MEM32(esi + 0x38);
    xmm0 = MEMF(eax + 0x68); /* movss */
    xmm1 = MEMF(eax + 0x64); /* movss */
    xmm2 = MEMF(eax + 0x60); /* movss */
    esp = esp + 0x24;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x6495CC); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00169DF2: ;
    ecx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    edx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    eax = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00169E30
 * Original: 0x00169E30 - 0x00169E35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169E30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169E30: ;
    g_seh_ebp = ebp; sub_000C4570(); return; /* tail jmp 0x000C4570 */

}

/**
 * sub_00169E70
 * Original: 0x00169E70 - 0x00169FA1 (305 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00169E70: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0xC7));
    SET_LO8(ecx, LO8(ecx) & 3);
    if (CMP_NE(LO8(ecx), 3)) goto loc_00169FA0; /* jne: not equal / not zero */

loc_00169E86: ;
    ecx = MEM32(0x7FA20C);
    xmm0 = MEMF(eax + 0xB4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F60); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 4) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_00169EBC; /* jbe: below or equal (unsigned <=) */

loc_00169EB6: ;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00169EC5;

loc_00169EBC: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00169ECA; /* jb: below (unsigned <) */

loc_00169EC1: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_00169EC5: ;
    MEMF(eax + 4) = xmm0; /* movss */

loc_00169ECA: ;
    xmm0 = MEMF(eax + 0xB8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 8); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 8) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_00169EEB; /* jbe: below or equal (unsigned <=) */

loc_00169EE5: ;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00169EF4;

loc_00169EEB: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00169EF9; /* jb: below (unsigned <) */

loc_00169EF0: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_00169EF4: ;
    MEMF(eax + 8) = xmm0; /* movss */

loc_00169EF9: ;
    xmm0 = MEMF(eax + 0xBC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0xC); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 0xC) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_00169F1A; /* jbe: below or equal (unsigned <=) */

loc_00169F14: ;
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00169F23;

loc_00169F1A: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00169F28; /* jb: below (unsigned <) */

loc_00169F1F: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_00169F23: ;
    MEMF(eax + 0xC) = xmm0; /* movss */

loc_00169F28: ;
    SET_LO16(edx, MEM16(eax + 0x8C));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)LO16(ecx)));
    MEM16(eax + 0xAE) = MEM16(eax + 0xAE) - LO16(edx);
    SET_LO16(edx, MEM16(eax + 0xAE));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0xAC));
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) * (int32_t)LO16(ecx)));
    MEM16(eax + 0x14) = MEM16(eax + 0x14) + LO16(esi);
    esi = MEM32(eax + 0xD8);
    edx = SX16(LO16(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    esi = esi + edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    MEM16(eax + 0x16) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0xB0));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)LO16(ecx)));
    MEM16(eax + 0x18) = MEM16(eax + 0x18) + LO16(edx);
    edx = ecx * 4;
    ecx = ZX8(MEM8(eax + 0xEE));
    ecx = ecx - edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0xD8) = esi;
    POP32(esp, esi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00169F99; /* jle: less or equal (signed <=) */

loc_00169F92: ;
    MEM8(eax + 0xEE) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00169F99: ;
    MEM8(eax + 0xC2) = 1;

loc_00169FA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00169FB0
 * Original: 0x00169FB0 - 0x0016A0D9 (297 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169FB0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x77127C) = 0x169E40;
    MEM32(esp + 0x10) = 0x23;
    MEM32(esp + 0x14) = 0x2D;
    MEM32(esp + 0x18) = 0x2E;
    MEM32(esp + 0x1C) = 0x2F;
    esi = 0; /* xor self */

loc_00169FE2: ;
    SET_LO8(ecx, MEM8(esp + esi * 4 + 0x10));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016A050; /* je: equal / zero */

loc_00169FEA: ;
    edi = MEM32(0x84A5F8);
    eax = 0; /* xor self */

loc_00169FF2: ;
    edx = MEM32(edi + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0016A001; /* je: equal / zero */

loc_00169FF9: ;
    if (CMP_EQ(MEM8(edi + 0x10B), LO8(ecx))) goto loc_0016A011; /* je: equal / zero */

loc_0016A001: ;
    edi = edi + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_00169FF2; /* jl: less (signed <) */

loc_0016A00F: ;
    goto loc_0016A050;

loc_0016A011: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F47D4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_0016A01D: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016A050; /* je: equal / zero */

loc_0016A02A: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_0016A050; /* je: equal / zero */

loc_0016A034: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_0016A050; /* je: equal / zero */

loc_0016A03B: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F47D4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_0016A04D: ;
    esp = esp + 4;

loc_0016A050: ;
    esi++;
    if (CMP_B(esi, 4)) goto loc_00169FE2; /* jb: below (unsigned <) */

loc_0016A056: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A05B: ;
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x50;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016A082: ;
    ebx = 0; /* xor self */
    esp = esp + 8;
    edx = edx | 0xFFFFFFFFu;
    if (CMP_EQ(eax, ebx)) goto loc_0016A0C7; /* je: equal / zero */

loc_0016A08E: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = LO8(edx);
    MEM8(eax + 0x39) = 0x68;
    MEM8(eax + 0x3A) = LO8(edx);
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = LO8(ebx);
    ecx = 0; /* xor self */
    esi = eax + 0x3C;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x4C) = ecx;

loc_0016A0C7: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x64);
    if (CMP_EQ(eax, ebx)) { sub_0016A0D9(); return; } /* je: equal / zero */

loc_0016A0D4: ;
    eax = MEM32(eax + 0x20);
    g_seh_ebp = ebp; sub_0016A0DB(); return; /* tail jmp 0x0016A0DB */

}

/**
 * sub_0016A100
 * Original: 0x0016A100 - 0x0016A454 (852 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A100: ;
    xmm5 = 0.0f; /* xorps self = zero */
    esp = esp - 0x54;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    xmm0 = MEMF(ebp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x4C) = xmm0; /* movss */
    if ((xmm5 <= xmm0)) goto loc_0016A44F; /* jbe: below or equal (unsigned <=) */

loc_0016A126: ;
    xmm0 = MEMF(0x6491F0); /* movss */
    PUSH32(esp, ebx);
    MEM16(esp + 0x16) = 0x12C;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x14) = 2;
    MEM8(esp + 0x15) = 0x19;
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A15C: ;
    xmm1 = MEMF(0x59D948); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A177: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A18A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fcos  */
    xmm0 = xmm0 * MEMF(0x649F84); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    eax = esp + 0x1C;
    ecx = esp + 0x28;
    edx = esp + 0x34;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0xC) = edx;
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEMF(esp + 0x40) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A206: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A22F: ;
    xmm0 = xmm0 * MEMF(0x649F80); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F7C); /* addss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    xmm5 = xmm5 - MEMF(esp + 0x24); /* subss */
    eax = esp + 0x4C;
    ebx = eax;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0016A27A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A27F: ;
    xmm5 = MEMF(0x648D3C); /* movss */
    xmm6 = MEMF(0x648EB0); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A2A8: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A2C1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A2DA: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 + MEMF(0x648CF0); /* addss */
    xmm0 = xmm0 / MEMF(esp + 0x48); /* divss */
    eax = ebx;
    ecx = ebx;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x60) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x60);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A33D: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    POP32(esp, ebx);
    if ((xmm1 <= xmm0)) goto loc_0016A36D; /* jbe: below or equal (unsigned <=) */

loc_0016A34B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A350: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A363: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    goto loc_0016A39A;

loc_0016A36D: ;
    xmm1 = MEMF(0x648E64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0016A3AF; /* jbe: below or equal (unsigned <=) */

loc_0016A37A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A37F: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A392: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */

loc_0016A39A: ;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A3A5: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    goto loc_0016A3E2;

loc_0016A3AF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A3B4: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A3C7: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A3DA: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */

loc_0016A3E2: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    MEMF(esp + 0x5C) = xmm0; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0016A416: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0016A42F; /* je: equal / zero */

loc_0016A41D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x38;
    ecx = 7;
    esi = esp + 0x44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0016A42F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A434: ;
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F10); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x44); /* addss */
    MEMF(ebp + 0x4C) = xmm0; /* movss */

loc_0016A44F: ;
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0016A460
 * Original: 0x0016A460 - 0x0016A483 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A460(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_0016A460: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm3 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm0, MEMF(eax + 0x40) - sets EFLAGS */
    MEMF(eax + 0x38) = xmm0; /* movss */
    if ((xmm0 < MEMF(eax + 0x40))) { sub_0016A483(); return; } /* jb: below (unsigned <) */

loc_0016A480: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0016A520
 * Original: 0x0016A520 - 0x0016A56A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A520(void)
{
    float xmm0;

loc_0016A520: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    edx = MEM32(esp + 0x18);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0016A570(); /* call 0x0016A570 */

loc_0016A566: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0016A570
 * Original: 0x0016A570 - 0x0016A5E6 (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    SET_LO8(ecx, 9);
    edi = edi;

loc_0016A580: ;
    esi = MEM32(ebp + 0x64);
    if (TEST_Z(esi, esi)) goto loc_0016A58F; /* je: equal / zero */

loc_0016A587: ;
    if (CMP_EQ(MEM8(ebp + 0x10B), LO8(ecx))) { sub_0016A5E6(); return; } /* je: equal / zero */

loc_0016A58F: ;
    ebp = ebp + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_0016A580; /* jl: less (signed <) */

loc_0016A59D: ;
    ecx = MEM32(0x84B4A0);
    SET_LO8(eax, MEM8(ecx + 0x23B4));
    ecx = ecx + 0x23A0;
    ebx = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0016A5DF; /* je: equal / zero */

loc_0016A5B8: ;
    if (TEST_NZ(MEM8(ecx + 0x15), 3)) goto loc_0016A5DF; /* jne: not equal / not zero */

loc_0016A5BE: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_003C8610(); /* call 0x003C8610 */

loc_0016A5CC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0016A5DF; /* je: equal / zero */

loc_0016A5D3: ;
    ecx = MEM32(0x84B4A0);
    MEM32(ecx + 0x23B8) = ebx;

loc_0016A5DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016A6B0
 * Original: 0x0016A6B0 - 0x0016A933 (643 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A6B0(void)
{
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

loc_0016A6B0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xC7));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 3);
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0016A92E; /* je: equal / zero */

loc_0016A6CC: ;
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0016A8ED; /* je: equal / zero */

loc_0016A6D5: ;
    (void)0; /* test MEM8(esi + 0x9F), 4 - flags set for next jcc */
    xmm7 = 0.0f; /* xorps self = zero */
    if (TEST_Z(MEM8(esi + 0x9F), 4)) goto loc_0016A7B2; /* je: equal / zero */

loc_0016A6E5: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(ecx + 0x568);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x6F));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0016A736; /* je: equal / zero */

loc_0016A6FA: ;
    xmm0 = MEMF(0x648D10); /* movss */
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | 2);
    MEMF(esi + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEM8(esi + 0xC7) = LO8(eax);
    MEM32(esi + 0x8C) = 0;
    MEMF(esi + 0xDC) = xmm0; /* movss */
    MEMF(esi + 0xE0) = xmm7; /* movss */

loc_0016A736: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    xmm3 = MEMF(0x64A2E8); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x64A2E8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0016A7A0; /* ja: above (unsigned >) */

loc_0016A79A: ;
    xmm3 = MEMF(esp + 0x10); /* movss */

loc_0016A7A0: ;
    xmm3 = xmm3 * MEMF(0x64B020); /* mulss */
    xmm3 = xmm3 - MEMF(0x6490B8); /* subss */
    goto loc_0016A7BA;

loc_0016A7B2: ;
    xmm3 = MEMF(0x6497E0); /* movss */

loc_0016A7BA: ;
    xmm0 = MEMF(esi + 0xDC); /* movss */
    xmm5 = MEMF(esi + 0xE0); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0016A7EB; /* jp: parity */

loc_0016A7DE: ;
    /* ucomiss xmm5, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0016A929; /* jnp: not parity */

loc_0016A7EB: ;
    xmm1 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm6 = MEMF(0x648F60); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm1, MEMF(0x648E6C) - sets EFLAGS */
    xmm2 = xmm3; /* movaps */
    xmm4 = xmm0; /* movaps */
    if ((xmm1 < MEMF(0x648E6C))) goto loc_0016A81F; /* jb: below (unsigned <) */

loc_0016A819: ;
    xmm4 = xmm4 - xmm6; /* subss */
    goto loc_0016A836;

loc_0016A81F: ;
    xmm7 = MEMF(0x648F64); /* movss */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    xmm7 = 0.0f; /* xorps self = zero */
    if ((xmm7 < xmm1)) goto loc_0016A836; /* jb: below (unsigned <) */

loc_0016A82F: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */

loc_0016A836: ;
    xmm2 = xmm2 - xmm4; /* subss */
    /* comiss xmm2, xmm7 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm2 <= xmm7)) goto loc_0016A863; /* jbe: below or equal (unsigned <=) */

loc_0016A857: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    goto loc_0016A86C;

loc_0016A863: ;
    xmm5 = xmm5 - MEMF(esp + 0x10); /* subss */
    xmm1 = xmm5; /* movaps */

loc_0016A86C: ;
    xmm2 = MEMF(esi + 0xD8); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(0x648E54); /* movss */
    /* comiss xmm2, MEMF(esp + 4) - sets EFLAGS */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if ((xmm2 <= MEMF(esp + 4))) goto loc_0016A8B7; /* jbe: below or equal (unsigned <=) */

loc_0016A88D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0016A8B7; /* jbe: below or equal (unsigned <=) */

loc_0016A89F: ;
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm7; /* movaps */
    MEMF(esi + 0xE0) = xmm1; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0016A8B7: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_0016A8D2; /* jbe: below or equal (unsigned <=) */

loc_0016A8BC: ;
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esi + 0xE0) = xmm1; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0016A8D2: ;
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 < xmm6)) goto loc_0016A8DB; /* jb: below (unsigned <) */

loc_0016A8D7: ;
    xmm0 = xmm0 - xmm6; /* subss */

loc_0016A8DB: ;
    MEMF(esi + 0xE0) = xmm1; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0016A8ED: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0006EAF0(); /* call 0x0006EAF0 */

loc_0016A901: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    esp = esp + 4;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0016A92E; /* jp: parity */

loc_0016A918: ;
    SET_LO8(eax, MEM8(esi + 0xC7));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, LO8(eax) | 3);
    MEM8(esi + 0xC7) = LO8(eax);

loc_0016A929: ;
    MEMF(esi + 4) = xmm0; /* movss */

loc_0016A92E: ;
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
 * sub_0016A940
 * Original: 0x0016A940 - 0x0016AC44 (772 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A940: ;
    esp = esp - 0xD8;
    SET_LO8(ecx, MEM8(0x7FA200));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = 0; /* xor self */
    SET_LO8(edx, 2);
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_0016A95B: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A965: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    SET_LO8(edx, LO8(edx) | 0xFF);
    eax = 0x598484;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0016A990: ;
    PUSH32(esp, 0xFF);
    eax = 0x598478;
    PUSH32(esp, 0); sub_0019B6C0(); /* call 0x0019B6C0 */

loc_0016A99F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x598478);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0016A9AE: ;
    esp = esp + 0x14;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016A9BB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016A9D8: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x648EA8); /* addss */
    xmm0 = MEMF(0x64B008); /* movss */
    esi = 0x598478;
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_0016AA00: ;
    xmm0 = MEMF(0x649278); /* movss */
    eax = MEM32(0x595D18);
    edx = MEM32(0x595D14);
    ecx = MEM32(0x595D1C);
    ebx = 0; /* xor self */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B01C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(esp + 0x7C) = 0x29E9;
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    MEM8(esp + 0x90) = 0xFF;
    MEM32(esp + 0xB4) = 0xCF570;
    MEM32(esp + 0x94) = 0x13EDB0;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = 0x13F6A0;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = 0x13E6E0;
    MEM32(esp + 0xB0) = 0x13EC40;
    MEM8(esp + 0xB8) = 2;
    MEM32(esp + 0xBC) = ebx;
    MEM8(esp + 0xC0) = LO8(ebx);
    MEM16(esp + 0xC2) = 0x19;
    MEM16(esp + 0xC4) = 0xA;
    MEM32(esp + 0xDC) = ebx;
    eax = eax | 0xFFFFFFFFu;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xE4) = eax;
    MEMF(esp + 0x70) = xmm0; /* movss */
    ebp = 0x5984C0;
    esi = 0x598490;
    MEM32(esp + 0x10) = 4;

loc_0016AB32: ;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016AB4D: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016AB68: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0016AB74; /* jns: not sign (positive) */

loc_0016AB6F: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0016AB74: ;
    eax = eax - 0x19;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016AB7D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x68;
    edx = edx + 0x2D;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0016AB92: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016AB97: ;
    xmm5 = MEMF(0x64B018); /* movss */
    xmm6 = MEMF(0x64B014); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016ABBA: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016ABD0: ;
    xmm0 = xmm0 * MEMF(0x64B010); /* mulss */
    xmm0 = xmm0 - MEMF(0x64B00C); /* subss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016ABEE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = edx + 0x32;
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(ebp);
    MEM32(esp + 0xB0) = edx;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0016AC21: ;
    eax = MEM32(esp + 0x3C);
    esp = esp + 0x2C;
    esi = esi + 0xC;
    ebp = ebp + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0016AB32; /* jne: not equal / not zero */

loc_0016AC39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AC50
 * Original: 0x0016AC50 - 0x0016ADA0 (336 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_0016AC50: ;
    esp = esp - 0x20;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, esi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, 0x43FA0000);
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016AC9E: ;
    xmm0 = xmm0 * MEMF(0x6492E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    SET_LO8(edx, LO8(ebx));
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_0016ACC7: ;
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016ACD1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x35) = 0xFF;
    MEM8(esp + 0x34) = 1;
    edx = edx + 0xF;
    MEM16(esp + 0x2A) = LO16(edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0016AD07: ;
    esp = esp + 0x14;
    SET_LO8(eax, LO8(ebx));
    esi = 0; /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_0016AD17: ;
    edi = 2;
    /* nop */

loc_0016AD20: ;
    eax = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0016AD2B: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0019B6C0(); /* call 0x0019B6C0 */

loc_0016AD35: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016AD3E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016AD5B: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x648EA8); /* addss */
    xmm0 = MEMF(0x64B008); /* movss */
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_0016AD82: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    esp = esp + 8;
    edi--;
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((edi != 0)) goto loc_0016AD20; /* jne: not equal / not zero */

loc_0016AD9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ADB0
 * Original: 0x0016ADB0 - 0x0016AECE (286 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ADB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ADB0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016ADBD: ;
    xmm0 = xmm0 * MEMF(0x649F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F74); /* addss */
    xmm0 = xmm0 * MEMF(ebp + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x58); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0016AEC9; /* jbe: below or equal (unsigned <=) */

loc_0016ADF1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, edi);
    /* nop */

loc_0016AE00: ;
    esi = MEM32(ebp + 0x4C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edi = esp + 0x24;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_001102D0(); /* call 0x001102D0 */

loc_0016AE1A: ;
    SET_LO8(edx, MEM8(ebp + 4));
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016AE26: ;
    eax = MEM32(esp + 0x34);
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016AE4D: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0016AEA7; /* je: equal / zero */

loc_0016AE54: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x5A;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_0016AEA7: ;
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0016AE00; /* ja: above (unsigned >) */

loc_0016AEC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0016AEC9: ;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AED0
 * Original: 0x0016AED0 - 0x0016B1A3 (723 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AED0: ;
    esp = esp - 0x94;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, edi);
    edi = esi + 0x4C;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016AEE7: ;
    xmm0 = xmm0 * MEMF(0x649F70); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F6C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D54); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xC); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0016B19A; /* jbe: below or equal (unsigned <=) */

loc_0016AF1E: ;
    xmm0 = MEMF(0x649F68); /* movss */
    xmm1 = MEMF(0x649F64); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = 0x46;
    MEM8(esp + 0x99) = LO8(eax);
    MEM8(esp + 0x9A) = LO8(eax);
    eax = MEM32(edi);
    MEM16(esp + 0x54) = LO16(ecx);
    MEM16(esp + 0x58) = LO16(ecx);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    MEM32(esp + 0x50) = 0x303;
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = LO8(ebx);
    MEM32(esp + 0x54) = 0x6C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM16(esp + 0x5A) = 3;
    ebp = 0x80DE07;
    MEM8(esp + 0x9C) = 0x16;
    MEM8(esp + 0x9F) = LO8(ebx);
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEM8(esp + 0x34) = 0xC0;
    MEM8(esp + 0x35) = 0x49;
    MEM8(esp + 0x36) = LO8(ebx);
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */

loc_0016AFF1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016AFF6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x12) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B00A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x13) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016B01E: ;
    xmm5 = MEMF(0x64912C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016B035: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016B044: ;
    xmm0 = xmm0 * MEMF(0x649F60); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F5C); /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B062: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B06E: ;
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    ebp = ebp & 0xFFFFFF3Fu;
    ebp = ebp | edi;
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B08A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x37) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B09E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x50;
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016B0B3: ;
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x6499B4); /* addss */
    SET_LO8(edx, MEM8(esi + 4));
    eax = 2;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x48) = eax;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = 4;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x24) = LO8(edx);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_0016B179; /* jge: greater or equal (signed >=) */

loc_0016B103: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x32);
    eax = 0x184;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016B114: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0016B179; /* je: equal / zero */

loc_0016B11B: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xA8);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    MEM8(eax + 0x154) = LO8(ebx);
    MEM8(eax + 0x160) = LO8(ebx);
    ecx++;
    eax = eax + 0x170;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;

loc_0016B179: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x58) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0016AFF1; /* ja: above (unsigned >) */

loc_0016B198: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0016B19A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B1B0
 * Original: 0x0016B1B0 - 0x0016B1F2 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B1B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B1B0: ;
    esp = esp - 0xC;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm1 = MEMF(0x648D34); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esp + 4) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esp + 5) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(esp + 6) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(esp + 7) = LO8(eax);
    MEM8(esp + 8) = LO8(ecx);
    MEM8(esp + 9) = LO8(edx);
    if (1 /* jp after test - parity */) { sub_0016B1F2(); return; } /* jp: parity */

loc_0016B1EE: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0016B1F7(); return; /* tail jmp 0x0016B1F7 */

}

/**
 * sub_0016B250
 * Original: 0x0016B250 - 0x0016B26E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B250(void)
{

loc_0016B250: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = eax + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_0016B269: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B270
 * Original: 0x0016B270 - 0x0016B2DF (111 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B270: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x4C);
    eax = MEM32(edx + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_0016B2DF(); return; } /* je: equal / zero */

loc_0016B27F: ;
    SET_LO8(eax, MEM8(edx + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ecx + 0x50))) { sub_0016B2DF(); return; } /* jne: not equal / not zero */

loc_0016B28A: ;
    ebx = ZX8(MEM8(ecx + 0x55));
    eax = ZX8(MEM8(ecx + 0x54));
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(ecx + 0x51));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x53));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ecx + 0x52));
    SET_LO8(ecx, MEM8(edx + 0x1AC));
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0016B2D3; /* je: equal / zero */

loc_0016B2AC: ;
    if (CMP_EQ(LO8(ecx), 7)) goto loc_0016B2D3; /* je: equal / zero */

loc_0016B2B1: ;
    eax = eax << 8;
    eax = eax | ebp;
    eax = eax << 8;
    eax = eax | edi;
    eax = eax << 8;
    eax = eax | esi;
    MEM8(edx + 0x1AD) = 0;
    MEM32(edx + 0x1A8) = eax;
    MEM8(edx + 0x1AE) = LO8(ebx);

loc_0016B2D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0x1AC) = 6;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B2F0
 * Original: 0x0016B2F0 - 0x0016B31D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2F0(void)
{
    float xmm0;

loc_0016B2F0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00138DE0(); /* call 0x00138DE0 */

loc_0016B2F8: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    SET_LO8(edx, LO8(edx) | 0xFF);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_0016B1B0(); /* call 0x0016B1B0 */

loc_0016B318: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B320
 * Original: 0x0016B320 - 0x0016B333 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B320(void)
{

loc_0016B320: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    SET_LO8(eax, 1);
    ecx = ecx & 3;
    MEM32(esp + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B340
 * Original: 0x0016B340 - 0x0016B375 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B340(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016B340: ;
    ecx = MEM32(eax + 0x52C);
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(edx, 0); /* xor self */
    ebx = ebx & 3;
    (void)0; /* cmp LO8(ebx), 3 - flags set for next jcc */
    MEM8(eax + 0x139) = LO8(edx);
    MEM8(eax + 0x13A) = LO8(edx);
    POP32(esp, ebx);
    if (CMP_NE(LO8(ebx), 3)) goto loc_0016B366; /* jne: not equal / not zero */

loc_0016B360: ;
    MEM8(eax + 0x13A) = LO8(edx);

loc_0016B366: ;
    ecx = ecx & 0xC;
    if (CMP_NE(LO8(ecx), 0xC)) goto loc_0016B374; /* jne: not equal / not zero */

loc_0016B36E: ;
    MEM8(eax + 0x13A) = LO8(edx);

loc_0016B374: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B380
 * Original: 0x0016B380 - 0x0016B697 (791 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B380(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;

loc_0016B380: ;
    esp = esp - 0x54;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_0016B692; /* je: equal / zero */

loc_0016B390: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x447D4000);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0016B3FA: ;
    xmm2 = MEMF(0x64A59C); /* movss */
    xmm1 = MEMF(0x64A598); /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_0016B41E: ;
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0019B6C0(); /* call 0x0019B6C0 */

loc_0016B428: ;
    eax = MEM32(0x847024);
    esi = MEM32(eax + 0x40);
    esp = esp + 0x1C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B438: ;
    eax = eax & 8;
    eax = eax + 0x2B6;
    if ((eax == 0)) goto loc_0016B46A; /* je: equal / zero */

loc_0016B442: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0016B46A: ;
    edx = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0016B475: ;
    esp = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B47E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016B49B: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x648EA8); /* addss */
    xmm0 = MEMF(0x64B008); /* movss */
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_0016B4C2: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64B004); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64B000); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, 3);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0x5F47F4);
    MEM32(esp + 0x58) = edx;
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = esp + 0x50;
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFFC); /* movss */
    PUSH32(esp, 0x5F4800);
    esi = 0xFFFFFFC0u;
    PUSH32(esp, edx);
    MEM32(esp + 0x58) = 3;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM16(esp + 0x6C) = 0;
    MEM16(esp + 0x6E) = 0xFF;
    MEM16(esp + 0x70) = LO16(esi);
    MEM16(esp + 0x72) = 0x2C;
    MEM16(esp + 0x84) = 0x3C;
    MEM16(esp + 0x86) = 0x14;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEM32(esp + 0x98) = 0x13F6A0;
    PUSH32(esp, 0); sub_000F3460(); /* call 0x000F3460 */

loc_0016B5BF: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    esp = esp + 0x40;
    MEM32(esp + 0x18) = 5;
    MEM32(esp + 0x1C) = 3;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM16(esp + 0x2C) = 0;
    MEM16(esp + 0x2E) = 0xFF;
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFF8); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AB00); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A14C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64A890); /* movss */
    PUSH32(esp, 2);
    MEM16(esp + 0x3C) = LO16(esi);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFF4); /* movss */
    PUSH32(esp, 0x5F47E4);
    PUSH32(esp, 0x5F47EC);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x2C;
    MEM16(esp + 0x46) = 0x1E;
    MEM16(esp + 0x58) = 0x46;
    MEM16(esp + 0x5A) = 0x14;
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_0016B68E: ;
    esp = esp + 0x14;
    POP32(esp, esi);

loc_0016B692: ;
    POP32(esp, edi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B6A0
 * Original: 0x0016B6A0 - 0x0016B6C6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B6A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016B6A0: ;
    SET_LO8(eax, MEM8(0x774C10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016B6C5; /* je: equal / zero */

loc_0016B6A9: ;
    ecx = MEM32(0x7FA20C);
    edx = ZX8(LO8(eax));
    if (CMP_LE(edx, ecx)) goto loc_0016B6BE; /* jle: less or equal (signed <=) */

loc_0016B6B6: ;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(0x774C10) = LO8(eax);
    esp += 4; return; /* ret */

loc_0016B6BE: ;
    MEM8(0x774C10) = 0;

loc_0016B6C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B6D0
 * Original: 0x0016B6D0 - 0x0016B765 (149 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;

loc_0016B6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0016B75F; /* je: equal / zero */

loc_0016B6E7: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_0016B75F; /* je: equal / zero */

loc_0016B6F3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016B717: ;
    xmm2 = MEMF(0x648EA4); /* movss */
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_0016B72A: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F47DC);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0016B739: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0016B74D: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    edi = esp + 0x38;
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_0016B75C: ;
    esp = esp + 0x24;

loc_0016B75F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B770
 * Original: 0x0016B770 - 0x0016BBA2 (1074 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B770: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0016BB9D; /* je: equal / zero */

loc_0016B788: ;
    ecx = MEM32(eax + 0x204);
    if (TEST_NZ(ecx, ecx)) goto loc_0016BB9D; /* jne: not equal / not zero */

loc_0016B796: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8471B4);
    PUSH32(esp, edi);
    edi = MEM32(0x8471B8);
    ebx = 0; /* xor self */

loc_0016B7A7: ;
    SET_LO8(edx, 0xFA);
    SET_LO8(edx, LO8(edx) - LO8(ebx));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_0016B7B0: ;
    ecx = eax;
    ecx = ecx - edi;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (TEST_NZ(MEM8(ebp + eax * 4), 1)) goto loc_0016B7D7; /* jne: not equal / not zero */

loc_0016B7CC: ;
    ebx++;
    if (CMP_L(ebx, 2)) goto loc_0016B7A7; /* jl: less (signed <) */

loc_0016B7D2: ;
    goto loc_0016BB69;

loc_0016B7D7: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016B7FE; /* je: equal / zero */

loc_0016B7E1: ;
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    PUSH32(esp, 1);
    edx = ecx + esi + -1744;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0016B7FB: ;
    esp = esp + 0xC;

loc_0016B7FE: ;
    ebx = 0xFF;
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(esi + 0x3AE) = LO16(edi);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_0016B817: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 0x14;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x627);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0016B835: ;
    eax = esi;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_0016B83C: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, edi)) goto loc_0016BB69; /* je: equal / zero */

loc_0016B84A: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_0016BB69; /* jge: greater or equal (signed >=) */

loc_0016B861: ;
    SET_LO8(ecx, MEM8(eax + 0x2BC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016B87E; /* je: equal / zero */

loc_0016B86B: ;
    MEM8(eax + 0x2BC) = 0;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = edi;

loc_0016B87E: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), edi)) goto loc_0016BB69; /* jne: not equal / not zero */

loc_0016B890: ;
    MEM32(eax + 0x208) = 6;
    eax = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_0016B8A7: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0016B8C8: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    ebp = ebp | 0xFFFFFFFFu;
    esp = esp + 0xC;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edi = ebp;
    MEM8(0x7FCB46) = 0;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016B8EE; /* je: equal / zero */

loc_0016B8E7: ;
    MEM8(0x7FCB46) = 2;

loc_0016B8EE: ;
    ecx = MEM32(esi + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_0016B90E; /* je: equal / zero */

loc_0016B8F6: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_0016B90E; /* je: equal / zero */

loc_0016B8FB: ;
    if (CMP_EQ(MEM8(esi + 0xA1), 3)) goto loc_0016B90E; /* je: equal / zero */

loc_0016B904: ;
    SET_LO8(ecx, MEM8(esi + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016B913; /* je: equal / zero */

loc_0016B90E: ;
    edi = 0x170;

loc_0016B913: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_0016B92D; /* jne: not equal / not zero */

loc_0016B91C: ;
    SET_LO8(ecx, MEM8(esi + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016B92D; /* je: equal / zero */

loc_0016B926: ;
    MEM8(esi + 0x135) = 0;

loc_0016B92D: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_0016B943; /* je: equal / zero */

loc_0016B937: ;
    ecx = MEM32(esi + 0x3D8);
    if (TEST_Z(ecx, ecx)) goto loc_0016B943; /* je: equal / zero */

loc_0016B941: ;
    edi = ebp;

loc_0016B943: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016B972; /* je: equal / zero */

loc_0016B94D: ;
    if (TEST_Z(eax, eax)) goto loc_0016B972; /* je: equal / zero */

loc_0016B951: ;
    ecx = MEM32(eax + 0x648);
    if (TEST_Z(ecx, ecx)) goto loc_0016B972; /* je: equal / zero */

loc_0016B95B: ;
    edx = MEM32(eax + 0xBC);
    if (TEST_NZ(edx, edx)) goto loc_0016B972; /* jne: not equal / not zero */

loc_0016B965: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_0016B96D: ;
    ebx = 0xFF;

loc_0016B972: ;
    if (CMP_EQ(edi, ebp)) goto loc_0016B9CB; /* je: equal / zero */

loc_0016B976: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, 0);
    MEM32(eax + 0x474) = ebp;
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ecx + 0x478) = ebp;
    edx = MEM32(esi + 0x568);
    PUSH32(esp, 0x40400000);
    MEM32(edx + 0x3DC) = ebp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0016B9B2: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016B9CB; /* je: equal / zero */

loc_0016B9BE: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_0016B9CB: ;
    edi = MEM32(esi + 0x200);
    edx = MEM32(esi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM16(esi + 0x3AE) = LO16(ecx);
    MEM8(esi + 0x234) = LO8(ebx);
    MEM8(esi + 0x20C) = LO8(ebx);
    MEM8(esi + 0x180) = LO8(ebx);
    edi = edi | 0x200;
    MEM32(esi + 0x200) = edi;
    MEMF(esi + 0x110) = xmm0; /* movss */
    MEM16(esi + 0x1EC) = LO16(ecx);
    MEM16(esi + 0x1EE) = LO16(ecx);
    MEM16(edx + 0x5E) = LO16(ecx);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2D2) = LO8(ecx);
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x30C) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x70) = LO8(ecx);
    eax = MEM32(esi + 0x564);
    if (CMP_EQ(eax, ecx)) goto loc_0016BA5C; /* je: equal / zero */

loc_0016BA48: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016BA5C; /* je: equal / zero */

loc_0016BA52: ;
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x8CF) = 0;

loc_0016BA5C: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016BA6B; /* je: equal / zero */

loc_0016BA66: ;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_0016BA6B: ;
    ebx = esi;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_0016BA72: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_0016BA78: ;
    PUSH32(esp, 6);
    eax = 0x78;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_0016BA84: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0016BA9D; /* jne: not equal / not zero */

loc_0016BA90: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_0016BB1E; /* jne: not equal / not zero */

loc_0016BA9D: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0016BACC; /* jne: not equal / not zero */

loc_0016BAAC: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x5F4) = xmm0; /* movss */

loc_0016BACC: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0016BB0C; /* jne: not equal / not zero */

loc_0016BADC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0016BAE3: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_0016BAF1: ;
    eax = MEM32(esi + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_0016BB01: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_0016BB09: ;
    esp = esp + 8;

loc_0016BB0C: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    edi = MEM32(edx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_0016BB1E: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_0016BB69; /* jne: not equal / not zero */

loc_0016BB26: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_0016BB69; /* jne: not equal / not zero */

loc_0016BB2F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016BB39: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016BB54: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_0016BB66: ;
    esp = esp + 8;

loc_0016BB69: ;
    eax = MEM32(0x84A5F8);
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = 0; /* xor self */
    eax = eax + 0x10B;
    POP32(esp, ebx);
    goto loc_0016BB80;

    /* nop */

loc_0016BB80: ;
    edx = MEM32(eax + -167);
    if (TEST_Z(edx, edx)) goto loc_0016BB8F; /* je: equal / zero */

loc_0016BB8A: ;
    if (CMP_EQ(MEM8(eax), 0xE)) goto loc_0016BB9D; /* je: equal / zero */

loc_0016BB8F: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_0016BB80; /* jl: less (signed <) */

loc_0016BB9D: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0016BBB0
 * Original: 0x0016BBB0 - 0x0016BC43 (147 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BBB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016BBB0: ;
    esp = esp - 0x10;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEM8(esp + 0x11) = 0;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016BBE6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016BC3E; /* je: equal / zero */

loc_0016BBED: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x5C;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x44;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_0016BC3E: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0016BC50
 * Original: 0x0016BC50 - 0x0016BDD9 (393 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BC50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016BC50: ;
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0016BDD7; /* je: equal / zero */

loc_0016BC62: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x4C);
    eax = MEM32(ebx + 0x64);
    if (TEST_Z(eax, eax)) { sub_0016BDD9(); return; } /* je: equal / zero */

loc_0016BC71: ;
    SET_LO8(eax, MEM8(ebx + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebp + 0x50))) { sub_0016BDD9(); return; } /* jne: not equal / not zero */

loc_0016BC80: ;
    SET_LO8(eax, MEM8(ebx + 0x42E));
    if (CMP_EQ(MEM8(ebp + 0x51), LO8(eax))) goto loc_0016BC9B; /* je: equal / zero */

loc_0016BC8B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016BC9B; /* je: equal / zero */

loc_0016BC8F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    MEM8(ebp + 0x58) = 4;

loc_0016BC9B: ;
    SET_LO8(ecx, MEM8(ebx + 0x42E));
    MEM8(ebp + 0x51) = LO8(ecx);
    SET_LO8(eax, MEM8(ebx + 0x42E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016BCF0; /* je: equal / zero */

loc_0016BCAF: ;
    esi = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(ecx, MEM8(eax + esi + 0x1AC));
    eax = eax + esi;
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0016BCE9; /* je: equal / zero */

loc_0016BCCC: ;
    if (CMP_EQ(LO8(ecx), 7)) goto loc_0016BCE9; /* je: equal / zero */

loc_0016BCD1: ;
    MEM8(eax + 0x1AD) = 0;
    MEM32(eax + 0x1A8) = 0x50FF0000;
    MEM8(eax + 0x1AE) = 0xF;

loc_0016BCE9: ;
    MEM8(eax + 0x1AC) = 6;

loc_0016BCF0: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0016BDD5; /* je: equal / zero */

loc_0016BCFE: ;
    SET_LO8(eax, MEM8(ebp + 0x58));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0016BDD5; /* jle: less or equal (signed <=) */

loc_0016BD09: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0016BDD5; /* jbe: below or equal (unsigned <=) */

loc_0016BD30: ;
    esi = ebx + 0x78;
    PUSH32(esp, edi);

loc_0016BD34: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD2);
    PUSH32(esp, 0xD2);
    PUSH32(esp, 0xD2);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x2CD);
    PUSH32(esp, 0x2B0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F266666);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_0016BD7F: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_0016BDA9; /* je: equal / zero */

loc_0016BD86: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x104) = ebx;
    MEM8(eax + 0x100) = 0x16;
    MEM8(eax + 0x101) = 0x16;
    MEM8(eax + 0x102) = 0x16;
    MEMF(eax + 0x48) = xmm0; /* movss */

loc_0016BDA9: ;
    SET_LO8(eax, MEM8(ebp + 0x58));
    xmm0 = MEMF(ebp + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, LO8(eax) - 1);
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(ebp + 0x58) = LO8(eax);
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0016BDD4; /* jbe: below or equal (unsigned <=) */

loc_0016BDCC: ;
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_0016BD34; /* jg: greater (signed >) */

loc_0016BDD4: ;
    POP32(esp, edi);

loc_0016BDD5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0016BDD7: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016BDF0
 * Original: 0x0016BDF0 - 0x0016BE11 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BDF0(void)
{

loc_0016BDF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = eax + 0x310;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_0016BE0C: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016BE20
 * Original: 0x0016BE20 - 0x0016BEE4 (196 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BE20(void)
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

loc_0016BE20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x310);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_0016BEE4(); return; } /* je: equal / zero */

loc_0016BE3F: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x314))) { sub_0016BEE4(); return; } /* jne: not equal / not zero */

loc_0016BE51: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_0016BEE4(); return; } /* je: equal / zero */

loc_0016BE5F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F367C);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0016BE6E: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x598528);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0016BE81: ;
    fp_push(MEMF(edi + 0x318)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    esp = esp + 0x14;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(edi + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0x328)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [edi + 0x324] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0016BEB5: ;
    MEM8(edi + 0x7B) = LO8(eax);
    xmm0 = MEMF(edi + 0x318); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA24C); /* addss */
    /* comiss xmm0, MEMF(edi + 0x31C) - sets EFLAGS */
    MEMF(edi + 0x318) = xmm0; /* movss */
    if ((xmm0 > MEMF(edi + 0x31C))) { sub_0016BEE4(); return; } /* ja: above (unsigned >) */

loc_0016BED9: ;
    eax = 1;
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
 * sub_0016BEF0
 * Original: 0x0016BEF0 - 0x0016BF05 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BEF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016BEF0: ;
    ecx = MEM32(esp + 4);
    edx = ecx + 0x338;
    eax = ecx + 0x32C;
    g_seh_ebp = ebp; sub_00153160(); return; /* tail jmp 0x00153160 */

}

/**
 * sub_0016BF50
 * Original: 0x0016BF50 - 0x0016BF62 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016BF50: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x64);
    if (TEST_Z(eax, eax)) { sub_0016BF62(); return; } /* je: equal / zero */

loc_0016BF5D: ;
    eax = MEM32(eax + 0x10);
    g_seh_ebp = ebp; sub_0016BF64(); return; /* tail jmp 0x0016BF64 */

}

/**
 * sub_0016BF90
 * Original: 0x0016BF90 - 0x0016BF98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BF90(void)
{

loc_0016BF90: ;
    MEM8(0x849411) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0016BFA0
 * Original: 0x0016BFA0 - 0x0016BFB3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016BFA0: ;
    SET_LO8(eax, MEM8(0x849411));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0016BFB3(); return; } /* je: equal / zero */

loc_0016BFA9: ;
    MEM8(0x849411) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0016BFC0
 * Original: 0x0016BFC0 - 0x0016C2A8 (744 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BFC0(void)
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

loc_0016BFC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x330); /* movss */
    eax = eax + ecx;
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x334); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x338); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x44) = xmm0; /* movss */
    ebx = 0x6B7558;
    /* nop */

loc_0016C010: ;
    edx = ebx + 4;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x3C);
    xmm1 = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm2 = MEMF(esp + 0x34); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x44);
    xmm3 = MEMF(esp + 0x38); /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = edx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x6491E4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0016C292; /* jbe: below or equal (unsigned <=) */

loc_0016C0CB: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(0x64909C); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_0016C0E3; /* jbe: below or equal (unsigned <=) */

loc_0016C0E0: ;
    xmm0 = xmm4; /* movaps */

loc_0016C0E3: ;
    xmm4 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm4, MEMF(0x59D944) - sets EFLAGS */
    if ((xmm4 <= MEMF(0x59D944))) goto loc_0016C10D; /* jbe: below or equal (unsigned <=) */

loc_0016C0F2: ;
    xmm5 = MEMF(0x6491E4); /* movss */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 * MEMF(0x6493B8); /* mulss */
    xmm0 = xmm5; /* movaps */

loc_0016C10D: ;
    xmm0 = xmm0 * MEMF(ebx); /* mulss */
    PUSH32(esp, 0x1030000);
    PUSH32(esp, 0x191380);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEMF(esp + 0xBC) = xmm1; /* movss */
    xmm1 = MEMF(0x648E40); /* movss */
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    eax = esp + 0x74;
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = ebx + 0x18;
    PUSH32(esp, ecx);
    edx = ebx + 0x10;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    MEMF(esp + 0xE0) = xmm2; /* movss */
    xmm2 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0xE4) = xmm3; /* movss */
    xmm3 = MEMF(0x6492EC); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(0x648EF8); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(0x6B7A10) = xmm0; /* movss */
    MEMF(0x6B7A18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0xA8;
    MEMF(esp + 0x88) = xmm2; /* movss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A0C) = xmm3; /* movss */
    MEMF(0x6B7A14) = xmm1; /* movss */
    MEMF(0x6B7A1C) = xmm1; /* movss */
    MEMF(0x6B7A20) = xmm2; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0016C28F: ;
    esp = esp + 0x30;

loc_0016C292: ;
    ebx = ebx + 0x28;
    if (CMP_L(ebx, 0x6B75A8)) goto loc_0016C010; /* jl: less (signed <) */

loc_0016C2A1: ;
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
 * sub_0016C2B0
 * Original: 0x0016C2B0 - 0x0016C2B9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C2B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C2B0: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0016BFC0(); return; /* tail jmp 0x0016BFC0 */

}

/**
 * sub_0016C440
 * Original: 0x0016C440 - 0x0016C445 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C440(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C440: ;
    g_seh_ebp = ebp; sub_001885F0(); return; /* tail jmp 0x001885F0 */

}

/**
 * sub_0016C710
 * Original: 0x0016C710 - 0x0016C732 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C710(void)
{

loc_0016C710: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016C72E: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C740
 * Original: 0x0016C740 - 0x0016C79C (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C740(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016C740: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x42 - flags set for next jcc */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (CMP_NE(eax, 0x42)) goto loc_0016C781; /* jne: not equal / not zero */

loc_0016C74E: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edx + 0x50));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_0016C79A; /* jne: not equal / not zero */

loc_0016C75A: ;
    eax = edx + 0x58;
    ecx = 7;

loc_0016C762: ;
    esi = MEM32(eax);
    eax = eax + 4;
    ecx--;
    MEM8(esi + 0xC2) = 1;
    if ((ecx != 0)) goto loc_0016C762; /* jne: not equal / not zero */

loc_0016C771: ;
    eax = MEM32(edx + 0x74);
    MEM8(eax + 0xC2) = 0;
    MEM8(edx + 0x54) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016C781: ;
    if (CMP_NE(eax, 0x3F)) goto loc_0016C79A; /* jne: not equal / not zero */

loc_0016C786: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0x4C);
    if (CMP_NE(ecx, MEM32(eax))) goto loc_0016C79A; /* jne: not equal / not zero */

loc_0016C791: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0016C7A0(); /* call 0x0016C7A0 */

loc_0016C797: ;
    esp = esp + 4;

loc_0016C79A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C7A0
 * Original: 0x0016C7A0 - 0x0016D0CD (2349 bytes, 539 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C7A0: ;
    eax = MEM32(0x84A5F8);
    esp = esp - 0xF8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x104);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    PUSH32(esp, edi);
    edx = eax + 0x42E;
    ecx = eax + 0xA4;
    edi = 0; /* xor self */
    eax = eax + 0x68;
    esi++;
    ebx = 0x20;

loc_0016C7D3: ;
    if (CMP_EQ(MEM8(esi + -1), 0)) goto loc_0016C7EF; /* je: equal / zero */

loc_0016C7D9: ;
    if (CMP_NE(MEM32(eax), 0x98)) goto loc_0016C7EF; /* jne: not equal / not zero */

loc_0016C7E1: ;
    if (CMP_NE(MEM32(ecx), 0x1EB)) goto loc_0016C7EF; /* jne: not equal / not zero */

loc_0016C7E9: ;
    if (CMP_NE(MEM8(edx), 0)) goto loc_0016C7EF; /* jne: not equal / not zero */

loc_0016C7EE: ;
    edi++;

loc_0016C7EF: ;
    eax = eax + 0x6D0;
    ecx = ecx + 0x6D0;
    edx = edx + 0x6D0;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0016C81B; /* je: equal / zero */

loc_0016C805: ;
    if (CMP_NE(MEM32(eax), 0x98)) goto loc_0016C81B; /* jne: not equal / not zero */

loc_0016C80D: ;
    if (CMP_NE(MEM32(ecx), 0x1EB)) goto loc_0016C81B; /* jne: not equal / not zero */

loc_0016C815: ;
    if (CMP_NE(MEM8(edx), 0)) goto loc_0016C81B; /* jne: not equal / not zero */

loc_0016C81A: ;
    edi++;

loc_0016C81B: ;
    eax = eax + 0x6D0;
    ecx = ecx + 0x6D0;
    edx = edx + 0x6D0;
    if (CMP_EQ(MEM8(esi + 1), 0)) goto loc_0016C848; /* je: equal / zero */

loc_0016C832: ;
    if (CMP_NE(MEM32(eax), 0x98)) goto loc_0016C848; /* jne: not equal / not zero */

loc_0016C83A: ;
    if (CMP_NE(MEM32(ecx), 0x1EB)) goto loc_0016C848; /* jne: not equal / not zero */

loc_0016C842: ;
    if (CMP_NE(MEM8(edx), 0)) goto loc_0016C848; /* jne: not equal / not zero */

loc_0016C847: ;
    edi++;

loc_0016C848: ;
    eax = eax + 0x6D0;
    ecx = ecx + 0x6D0;
    edx = edx + 0x6D0;
    if (CMP_EQ(MEM8(esi + 2), 0)) goto loc_0016C875; /* je: equal / zero */

loc_0016C85F: ;
    if (CMP_NE(MEM32(eax), 0x98)) goto loc_0016C875; /* jne: not equal / not zero */

loc_0016C867: ;
    if (CMP_NE(MEM32(ecx), 0x1EB)) goto loc_0016C875; /* jne: not equal / not zero */

loc_0016C86F: ;
    if (CMP_NE(MEM8(edx), 0)) goto loc_0016C875; /* jne: not equal / not zero */

loc_0016C874: ;
    edi++;

loc_0016C875: ;
    eax = eax + 0x6D0;
    ecx = ecx + 0x6D0;
    edx = edx + 0x6D0;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_0016C7D3; /* jne: not equal / not zero */

loc_0016C890: ;
    esi = 0; /* xor self */
    if (CMP_EQ(edi, esi)) goto loc_0016D0C2; /* je: equal / zero */

loc_0016C89A: ;
    SET_LO8(eax, MEM8(ebp + 0x54));
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_AE(LO8(eax), 7)) goto loc_0016C9B7; /* jae: above or equal (unsigned >=) */

loc_0016C8A8: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x7FA20C));
    MEM16(ebp + 0x52) = MEM16(ebp + 0x52) - LO16(ecx);
    if (CMP_GE(MEM16(ebp + 0x52), LO16(esi))) goto loc_0016C9B7; /* jge: greater or equal (signed >=) */

loc_0016C8BF: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(ebp + edx * 4 + 0x58);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016C8FE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x2B3;
    if ((edx == 0)) goto loc_0016C933; /* je: equal / zero */

loc_0016C90E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBF800000u);
    ecx = edx;
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, esi);
    edx = ebx;
    eax = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0016C933: ;
    ecx = ZX8(MEM8(ebp + 0x54));
    edx = MEM32(ebp + ecx * 4 + 0x58);
    MEM8(edx + 0xC2) = 1;
    SET_LO8(ecx, MEM8(ebp + 0x54));
    SET_LO8(ecx, LO8(ecx) + 1);
    eax = ZX8(LO8(ecx));
    MEM8(ebp + 0x54) = LO8(ecx);
    ecx = MEM32(ebp + eax * 4 + 0x58);
    MEM8(ecx + 0xC2) = 0;
    SET_LO8(eax, MEM8(ebp + 4));
    esi = 0; /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(edx, 7);
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_0016C966: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    eax = esp + 0x1C;
    MEM8(esp + 0x1C) = 1;
    MEM16(esp + 0x1E) = 0x19;
    MEM8(esp + 0x28) = 1;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(esp + 0x35) = LO8(ebx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0016C9A0: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016C9A8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x64;
    MEM16(ebp + 0x52) = LO16(edx);

loc_0016C9B7: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x7FA20C));
    MEM16(ebp + 0x88) = MEM16(ebp + 0x88) - LO16(edx);
    SET_LO16(eax, MEM16(ebp + 0x88));
    if (CMP_GE(LO16(eax), LO16(esi))) goto loc_0016CACE; /* jge: greater or equal (signed >=) */

loc_0016C9D7: ;
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016C9E1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x28) = 1;
    edx = edx + 0xA;
    MEM16(esp + 0x1E) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016C9FB: ;
    xmm5 = MEMF(0x649B80); /* movss */
    xmm6 = MEMF(0x648D38); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CA1E: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    eax = esp + 0x1C;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esp + 0x29) = LO8(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0016CA41: ;
    ecx = ZX8(MEM8(ebp + 0x54));
    eax = MEM32(ebp + ecx * 4 + 0x58);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    eax = MEM32(0x847024);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    esi = MEM32(eax + 0x40);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CA83: ;
    eax = eax & 3;
    eax = eax + 0x6D6;
    if ((eax == 0)) goto loc_0016CAB2; /* je: equal / zero */

loc_0016CA8D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, esi);
    edx = ebx;
    eax = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0016CAB2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CAB7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x97;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x96;
    MEM16(ebp + 0x88) = LO16(edx);
    esi = 0; /* xor self */

loc_0016CACE: ;
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CADD: ;
    xmm0 = xmm0 * MEMF(0x648EF4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A1EC); /* addss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x84); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x84) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_0016CBE5; /* jbe: below or equal (unsigned <=) */

loc_0016CB1D: ;
    SET_LO8(edx, MEM8(ebp + 0x51));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0xFFFFFFFEu;
    edx++;
    esi = edx;
    /* nop */

loc_0016CB30: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CB35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x7E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(ebp + 0x94); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = edx - 0xDC;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_0016CB5E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CB63: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 4));
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x8C); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x90); /* addss */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edi = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_0016CBB2: ;
    xmm0 = MEMF(ebp + 0x84); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x10;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x84) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0016CB30; /* ja: above (unsigned >) */

loc_0016CBDA: ;
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm5 = xmm1; /* movaps */
    esi = 0; /* xor self */

loc_0016CBE5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CBEA: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x6496A8); /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x80); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x80) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_0016CF17; /* jbe: below or equal (unsigned <=) */

loc_0016CC22: ;
    SET_LO8(eax, MEM8(ebp + 0x51));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEM32(esp + 0x9C) = 0x39E8;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax++;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0xA4) = 0x86;
    MEM8(esp + 0xA8) = 0;
    MEM32(esp + 0xAC) = esi;
    MEM8(esp + 0xB0) = 0xFF;
    MEM32(esp + 0xD4) = 0xCF570;
    MEM32(esp + 0xB4) = 0x157100;
    MEM32(esp + 0xB8) = esi;
    MEM32(esp + 0xBC) = esi;
    MEM32(esp + 0xC0) = esi;
    MEM32(esp + 0xC4) = esi;
    MEM32(esp + 0xC8) = esi;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13E8F0;
    MEM8(esp + 0xD8) = 2;
    MEM32(esp + 0xDC) = esi;
    MEM8(esp + 0xE0) = 0;
    MEM16(esp + 0xE2) = 0x14;
    MEM16(esp + 0xE4) = 0xC;
    MEM32(esp + 0xFC) = esi;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = ebx;
    MEMF(esp + 0x90) = xmm0; /* movss */
    /* nop */

loc_0016CD20: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CD25: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edi = edi + 9;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CD37: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x7E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(ebp + 0x94); /* movss */
    eax = esp + 0x68;
    esi = edx;
    esi = esi - 0xDC;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x30));
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_0016CD64: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CD6C: ;
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x8C); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x90); /* addss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    if (CMP_LE(LO16(edi) & LO16(edi), 0)) goto loc_0016CEFA; /* jle: less or equal (signed <=) */

loc_0016CDB3: ;
    ebx = ZX16(LO16(edi));

loc_0016CDB6: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CDBB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x50;
    MEM32(esp + 0xA0) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CDD2: ;
    xmm0 = xmm0 * MEMF(0x64AD5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AD58); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CDF3: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CE0A: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CE19: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CE28: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CE43: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x25;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x3F;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CE54: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x88;
    edx = edx + esi + -17;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0016CE6D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CE72: ;
    xmm5 = MEMF(0x64AAF0); /* movss */
    xmm6 = MEMF(0x64AD54); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CE98: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CEAE: ;
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 - MEMF(0x649B50); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    eax = esp + 0x58;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEMF(esp + 0xC4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0016CEE2: ;
    esp = esp + 0x2C;
    ebx--;
    if ((ebx != 0)) goto loc_0016CDB6; /* jne: not equal / not zero */

loc_0016CEEC: ;
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */

loc_0016CEFA: ;
    xmm0 = MEMF(ebp + 0x80); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x80) = xmm0; /* movss */
    if ((xmm0 > xmm5)) goto loc_0016CD20; /* ja: above (unsigned >) */

loc_0016CF17: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CF1C: ;
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    xmm6 = xmm6 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x78); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_0016D0C2; /* jbe: below or equal (unsigned <=) */

loc_0016CF4B: ;
    SET_LO8(ebx, MEM8(ebp + 0x51));
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0xFFFFFFFEu;
    ebx++;
    /* nop */

loc_0016CF60: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CF65: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x7E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(ebp + 0x94); /* movss */
    eax = esp + 0x10;
    esi = edx;
    esi = esi - 0xDC;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_0016CF90: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CF95: ;
    xmm6 = MEMF(0x648EC8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x8C); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x90); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016CFDC: ;
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016CFF9: ;
    eax = eax & 0x80000007u;
    if (((int32_t)eax >= 0)) goto loc_0016D005; /* jns: not sign (positive) */

loc_0016D000: ;
    eax--;
    eax = eax | 0xFFFFFFF8u;
    eax++;

loc_0016D005: ;
    eax = eax - 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016D00E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x24;
    edx = edx + esi + -4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0016D024: ;
    esp = esp + 0xC;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016D037: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016D048: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x23;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016D059: ;
    xmm0 = xmm0 * MEMF(0x64AD50); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AD4C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F834196);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016D079: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD48); /* movss */
    PUSH32(esp, 8);
    eax = edi;
    ecx = esp + 0x38;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_0016D0A0: ;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x28;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0016CF60; /* ja: above (unsigned >) */

loc_0016D0C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D0D0
 * Original: 0x0016D0D0 - 0x0016D125 (85 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D0D0(void)
{

loc_0016D0D0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, 0x42);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    esi = esi << 1;
    SET_LO8(eax, MEM8(esi + 0x5985F8));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x14) = 0;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016D100: ;
    SET_LO8(edx, MEM8(esi + 0x5985F9));
    PUSH32(esp, 0x42);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x28) = LO8(edx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016D11D: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D130
 * Original: 0x0016D130 - 0x0016D25B (299 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016D130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0016D254; /* je: equal / zero */

loc_0016D14C: ;
    edx = MEM32(0x6B75A8);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = 0x598600;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0016D16D: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0016D185: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016D18A: ;
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016D19D: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    xmm0 = xmm0 * MEMF(0x649240); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FF0); /* addss */
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(0x6B75A8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0016D1D6: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0016D1EA; /* je: equal / zero */

loc_0016D1DD: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0016D1EA; /* je: equal / zero */

loc_0016D1E5: ;
    edi = MEM32(eax + 8);
    goto loc_0016D1EC;

loc_0016D1EA: ;
    edi = 0; /* xor self */

loc_0016D1EC: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016D203: ;
    xmm0 = xmm0 * MEMF(0x64925C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016D21E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016D22F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0x59860C;
    ecx = 0x598600;
    edx = edx + 4;
    PUSH32(esp, edx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_0016D251: ;
    esp = esp + 0x2C;

loc_0016D254: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D260
 * Original: 0x0016D260 - 0x0016D371 (273 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D260: ;
    esp = esp - 0x78;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x80);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0); sub_0019DE80(); /* call 0x0019DE80 */

loc_0016D273: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0016D36B; /* je: equal / zero */

loc_0016D27D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    edi = esp + 0x30;
    ebx = esp + 0x3C;
    PUSH32(esp, 0); sub_0019E1F0(); /* call 0x0019E1F0 */

loc_0016D29D: ;
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016D369; /* je: equal / zero */

loc_0016D2A8: ;
    ebx = MEM32(esp + 0x90);
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_0016D2BA: ;
    eax = ZX16(MEM16(esi + 4));
    edx = MEM32(ebp + 0x3C8);
    eax = eax << 6;
    PUSH32(esp, ebx);
    esi = edi;
    PUSH32(esp, ebp);
    eax = eax + edx;
    edi = esp + 0x38;
    PUSH32(esp, 0); sub_0019A570(); /* call 0x0019A570 */

loc_0016D2D6: ;
    eax = MEM32(ebp + 0x564);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0016D357; /* je: equal / zero */

loc_0016D2E3: ;
    eax = MEM32(ebp + 0x298);
    eax = eax & 0x1F;
    if (CMP_EQ(eax, 0xD)) goto loc_0016D300; /* je: equal / zero */

loc_0016D2F1: ;
    if (CMP_EQ(eax, 0x12)) goto loc_0016D300; /* je: equal / zero */

loc_0016D2F6: ;
    if (CMP_EQ(eax, 2)) goto loc_0016D300; /* je: equal / zero */

loc_0016D2FB: ;
    if (CMP_NE(eax, 9)) goto loc_0016D357; /* jne: not equal / not zero */

loc_0016D300: ;
    ecx = MEM32(0x847024);
    edi = MEM32(ecx + 0x40);
    esi = ebp;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0016D310: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0016D357; /* je: equal / zero */

loc_0016D314: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0016D331; /* je: equal / zero */

loc_0016D31E: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0016D337;

loc_0016D331: ;
    eax = MEM32(ebp + 0x580);

loc_0016D337: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ebp = ebp + 0x78;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0xBD8;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0016D357: ;
    eax = esp + 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0019E050(); /* call 0x0019E050 */

loc_0016D366: ;
    esp = esp + 8;

loc_0016D369: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0016D36B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D380
 * Original: 0x0016D380 - 0x0016D467 (231 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D380(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016D380: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x11;
    MEM32(esp + 0x14) = 6;
    MEM32(esp + 0x18) = 7;
    MEM32(esp + 0x1C) = 8;
    MEM32(esp + 0x20) = 9;
    MEM32(esp + 0x24) = 0xA;
    MEM32(esp + 0x28) = 0xB;
    MEM32(esp + 0x2C) = 0xC;
    MEM32(esp + 0x30) = 0xD;
    MEM32(esp + 0x34) = 0xE;
    MEM32(esp + 0x38) = 0xF;
    MEM32(esp + 0x3C) = 0x10;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = 0x12;
    MEM32(esp + 0x48) = 0x13;
    MEM32(esp + 0x4C) = 0x14;
    MEM32(esp + 0x50) = 0x15;
    MEM32(esp + 0x54) = 0x16;
    esi = esp + 0x14;
    SET_LO8(ebx, 1);

loc_0016D415: ;
    eax = MEM32(esi);
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + ecx;
    PUSH32(esp, 0x3A);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x1C) = eax;
    MEM8(esp + 0x20) = LO8(ebx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016D43D: ;
    esp = esp + 0x10;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0016D415; /* jne: not equal / not zero */

loc_0016D446: ;
    eax = MEM32(0x8493A4);
    if (TEST_Z(eax, eax)) goto loc_0016D460; /* je: equal / zero */

loc_0016D44F: ;
    /* nop */

loc_0016D450: ;
    if (CMP_NE(MEM8(eax + 0x5C), 9)) goto loc_0016D459; /* jne: not equal / not zero */

loc_0016D456: ;
    MEM8(eax + 0x5A) = LO8(ebx);

loc_0016D459: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0016D450; /* jne: not equal / not zero */

loc_0016D460: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D470
 * Original: 0x0016D470 - 0x0016D475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D470(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D470: ;
    g_seh_ebp = ebp; sub_00116D20(); return; /* tail jmp 0x00116D20 */

}

/**
 * sub_0016D4B0
 * Original: 0x0016D4B0 - 0x0016D50E (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D4B0: ;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x13;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016D4D0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0xD8);
    ebp = MEM32(0x76FD10);
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax + 0x1C));
    MEM8(esp + 0x14) = LO8(eax);
    edi = esp + 0x1C;
    ebx = 8;
    edx = edx + 0x64;
    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    MEM16(esp + 0x16) = LO16(edx);
    SET_LO8(edx, (CMP_A(LO8(eax), 3)) ? 1 : 0); /* seta */
    MEM8(esp + 0x15) = LO8(edx);
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0016D512(); return; /* tail jmp 0x0016D512 */

}

/**
 * sub_0016D660
 * Original: 0x0016D660 - 0x0016D7DD (381 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D660(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0016D660: ;
    xmm0 = MEMF(0x649114); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x649110); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64910C); /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    xmm3 = MEMF(0x649104); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    xmm4 = MEMF(0x6490F8); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649108); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    MEM8(esi + 0x14) = 0;
    MEMF(esi + 0x24) = xmm2; /* movss */
    MEM32(esi + 0x2C) = 0;
    MEMF(esi + 0x30) = xmm1; /* movss */
    eax = 1;
    MEM8(esi + 0x15) = LO8(eax);
    MEM32(esi + 0x34) = eax;
    MEMF(esi + 0x18) = xmm3; /* movss */
    xmm3 = MEMF(0x649100); /* movss */
    MEMF(esi + 0x1C) = xmm3; /* movss */
    xmm3 = MEMF(0x6490FC); /* movss */
    MEMF(esi + 0x20) = xmm3; /* movss */
    xmm3 = MEMF(0x648D80); /* movss */
    MEMF(esi + 0x38) = xmm3; /* movss */
    MEMF(esi + 0x54) = xmm4; /* movss */
    MEM32(esi + 0x58) = 0x1E;
    MEM32(esi + 0x5C) = 0x64;
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    PUSH32(esp, 0x7F);
    MEMF(esi + 0x48) = xmm1; /* movss */
    MEMF(esi + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0x5F485C);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    MEMF(esi + 0x60) = xmm0; /* movss */
    MEMF(esi + 0x64) = xmm3; /* movss */
    MEMF(esi + 0x80) = xmm1; /* movss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    MEMF(esi + 0x88) = xmm2; /* movss */
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0016D78A: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F4850);
    ecx = esi + 0x10D;
    PUSH32(esp, ecx);
    MEM8(esi + 0x10C) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0016D7A4: ;
    xmm1 = MEMF(0x648D34); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x6492E4); /* movss */
    MEMF(esi + 0x68) = xmm1; /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    MEMF(esi + 0x70) = xmm2; /* movss */
    MEMF(esi + 0x74) = xmm1; /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    MEMF(esi + 0x7C) = xmm2; /* movss */
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D7E0
 * Original: 0x0016D7E0 - 0x0016DE53 (1651 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D7E0: ;
    esp = esp - 0x18C;
    ecx = MEM32(esp + 0x194);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x19C);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x64;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016D813: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, ebx)) goto loc_0016DDDB; /* je: equal / zero */

loc_0016D820: ;
    xmm0 = MEMF(0x6490B4); /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    MEMF(ebp + 0x34) = xmm0; /* movss */
    MEM8(ebp + 0x38) = 0xFF;
    MEM8(ebp + 0x39) = 0x4D;
    MEM8(ebp + 0x3A) = 0xFF;
    MEM8(ebp + 0x2C) = 1;
    MEM8(ebp + 0x3B) = 0x33;
    edx = 0; /* xor self */
    eax = ebp + 0x3C;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    eax = ebp + 0x4C;
    ecx = eax;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = ebx;
    eax = 0; /* xor self */
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = esp + 0x88;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0016D87E: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x648EF8); /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A3F0); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x649F44); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x649124); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x64A3EC); /* movss */
    edi = 2;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0xD0) = 0x303;
    MEM8(esp + 0x80) = LO8(ebx);
    MEM32(esp + 0x28) = esi;
    MEM8(esp + 0x2C) = LO8(eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEM32(esp + 0x78) = ebp;
    MEM8(esp + 0xD8) = 1;
    MEM32(esp + 0xDC) = 0x2BF;
    MEM8(esp + 0x88) = 8;
    MEM32(esp + 0xE8) = edi;
    MEM32(esp + 0xF0) = edi;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = 4;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = edi;
    MEM16(esp + 0x8A) = 0x12C;
    eax = MEM32(0x595D14);
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEM32(esp + 0x108) = ebx;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = edx;
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xB4) = xmm1; /* movss */
    MEM32(esp + 0xB8) = 0x40E00000;
    MEM8(esp + 0xCC) = 0xFF;
    MEM8(esp + 0xCD) = 0xFF;
    MEM8(esp + 0xCE) = 0xFF;
    MEM8(esp + 0xCF) = LO8(ebx);
    MEM32(esp + 0xBC) = ebx;
    MEM8(esp + 0x2D) = LO8(ebx);

loc_0016DAA6: ;
    ecx = MEM32(esp + 0x1A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016DAB7: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x25);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x597978);
    eax = esp + 0xB0;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_0016DAD5: ;
    edx = ZX8(MEM8(esp + 0x55));
    esp = esp + 0x28;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = ebp + 0x4C;
    MEM32(ecx + edx * 4 + 8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0016DB05; /* je: equal / zero */

loc_0016DAE8: ;
    edi = eax + 0x310;
    ecx = 0x17;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x1A0);
    edi = 2;

loc_0016DB05: ;
    SET_LO8(eax, MEM8(esp + 0x2D));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM8(esp + 0x2D) = LO8(eax);
    if (CMP_B(LO8(eax), 2)) goto loc_0016DAA6; /* jb: below (unsigned <) */

loc_0016DB13: ;
    eax = esp + 0x88;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0016DB1F: ;
    xmm2 = MEMF(0x64A340); /* movss */
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(0x64A33C); /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(0x648D80); /* movss */
    MEM8(esp + 0x24) = LO8(eax);
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(0x648D40); /* movss */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x68) = eax;
    eax = MEM32(0x595D14);
    MEMF(esp + 0xD4) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(0x649284); /* movss */
    MEMF(esp + 0xE0) = xmm1; /* movss */
    MEMF(esp + 0xE4) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    MEM32(esp + 0xD0) = 0x303;
    MEM16(esp + 0x10) = LO16(ebx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEM32(esp + 0x6C) = ebx;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM16(esp + 0x74) = LO16(ebx);
    MEM16(esp + 0x76) = LO16(ebx);
    MEM16(esp + 0x78) = LO16(ebx);
    MEM16(esp + 0x7A) = LO16(ebx);
    MEM8(esp + 0x7C) = LO8(ebx);
    MEM8(esp + 0x7D) = LO8(ebx);
    MEM8(esp + 0x7E) = LO8(ebx);
    MEM8(esp + 0x7F) = LO8(ebx);
    MEM8(esp + 0x80) = 0xF;
    MEM8(esp + 0x81) = 0xFF;
    MEM32(esp + 0xDC) = 0x60;
    MEM8(esp + 0xD8) = 1;
    MEM32(esp + 0xE8) = edi;
    MEM32(esp + 0xF0) = edi;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = 4;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = edi;
    MEM16(esp + 0x8A) = 0x12C;
    MEM32(esp + 0x108) = ebx;
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = edx;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEM32(esp + 0xB8) = 0xC12002;
    MEM8(esp + 0xCC) = 0xFF;
    MEM8(esp + 0xCD) = 0xFF;
    MEM8(esp + 0xCE) = 0xFF;
    MEM8(esp + 0xCF) = 0xFF;
    MEM32(esp + 0xBC) = ebx;
    MEM8(esp + 0xC0) = 0xFF;
    MEM8(esp + 0x1C) = LO8(ebx);

loc_0016DD24: ;
    MEM32(esp + 0xB8) = MEM32(esp + 0xB8) | 0x40400000;
    ecx = MEM32(esp + 0x1A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x597978);
    eax = esp + 0xB0;
    MEM8(esp + 0xB0) = 3;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_0016DD5B: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, ebx)) goto loc_0016DD92; /* je: equal / zero */

loc_0016DD62: ;
    edx = eax + 0x310;
    ecx = 0x1D;
    esi = esp + 0x28;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x774A90);
    esi = MEM32(esp + 0x1A0);
    ecx++;
    MEM8(edx + 0x59) = 0xFF;
    MEM32(edx + 0x44) = ebx;
    MEM32(0x774A90) = ecx;
    goto loc_0016DD94;

loc_0016DD92: ;
    eax = 0; /* xor self */

loc_0016DD94: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, MEM8(esp + 0x1C));
    edi = ZX8(LO8(edx));
    ecx = ebp + 0x4C;
    MEM32(ecx + edi * 4 + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0016DDCC; /* je: equal / zero */

loc_0016DDA6: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x36C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = ecx;

loc_0016DDCC: ;
    SET_LO8(edx, LO8(edx) + 1);
    (void)0; /* cmp LO8(edx), 2 - flags set for next jcc */
    MEM8(esp + 0x1C) = LO8(edx);
    if (CMP_B(LO8(edx), 2)) goto loc_0016DD24; /* jb: below (unsigned <) */

loc_0016DDDB: ;
    edi = MEM32(esp + 0x1A4);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM8(esp + 0x1C) = 1;
    MEM16(esp + 0x1E) = 0x46;
    MEM8(esp + 0x28) = 1;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esp + 0x29) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0016DE18: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ebx = 0x5D58D8;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0016DE3C: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) { sub_0016DE53(); return; } /* je: equal / zero */

loc_0016DE43: ;
    eax = MEM32(esp + 0x84);
    if (TEST_Z(eax, eax)) { sub_0016DE53(); return; } /* je: equal / zero */

loc_0016DE4E: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0016DE55(); return; /* tail jmp 0x0016DE55 */

}

/**
 * sub_0016DEA0
 * Original: 0x0016DEA0 - 0x0016E648 (1960 bytes, 463 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DEA0(void)
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

loc_0016DEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    eax = MEM32(esi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(eax, eax)) { sub_0016E648(); return; } /* je: equal / zero */

loc_0016DEC4: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) { sub_0016E648(); return; } /* jne: not equal / not zero */

loc_0016DED3: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0016E596; /* je: equal / zero */

loc_0016DEE1: ;
    edx = esp + 0x9C;
    MEM32(esp + 0xC4) = edx;
    ecx = esp + 0x90;
    edx = esp + 0x110;
    MEM32(esp + 0xC0) = ecx;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    ecx = esp + 0xB8;
    PUSH32(esp, 0x5D58D8);
    MEM32(esp + 0x50) = 0x598654;
    MEM32(esp + 0x54) = 0x598660;
    MEM32(esp + 0x58) = 0x59866C;
    MEM32(esp + 0x5C) = 0x598678;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = ecx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0016DF4B: ;
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    eax = 4;
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0016DF69: ;
    ecx = ebx + 0x5C;
    esp = esp + 0x10;
    MEM32(esp + 0x80) = ecx;
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = 2;

loc_0016DF80: ;
    eax = MEM32(ecx + -8);
    if (TEST_Z(eax, eax)) goto loc_0016DFC5; /* je: equal / zero */

loc_0016DF87: ;
    MEM8(eax + 0x368) = MEM8(eax + 0x368) | 1;
    esi = eax + 0x40;
    edx = esp + edi + 0x90;
    ebx = MEM32(edx);
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    ebx = MEM32(ebp + 8);
    MEM32(esi + 8) = edx;
    edx = esp + edi + 0xA8;
    esi = MEM32(edx);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0016DFC5: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0016E00E; /* je: equal / zero */

loc_0016DFCB: ;
    edx = MEM32(eax + 0x64);
    edx = edx & 0xFFFFFFFBu;
    edx = edx | 2;
    MEM32(eax + 0x64) = edx;
    esi = eax + 0x40;
    edx = esp + edi + 0x90;
    ebx = MEM32(edx);
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    ebx = MEM32(ebp + 8);
    MEM32(esi + 8) = edx;
    edx = esp + edi + 0xA8;
    esi = MEM32(edx);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0016E00E: ;
    xmm0 = MEMF(ebx + 0x30); /* movss */
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE4))) goto loc_0016E2E7; /* jbe: below or equal (unsigned <=) */

loc_0016E020: ;
    ecx = esp + edi + 0x90;
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x50) = eax;
    eax = esp + 0xC0;
    MEM32(esp + 0x4C) = edx;
    edx = esp + edi + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_0016E051: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x68) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x6C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x70) = eax;
    eax = esp + 0x68;
    esp = esp + 4;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0016E073: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x7C) = 0x1E;
    goto loc_0016E0A0;

    /* nop */

loc_0016E0A0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E0A5: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E0C6: ;
    ecx = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(0x649030); /* addss */
    MEM32(esp + 0x28) = ecx;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = edx;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = eax;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x84);
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x3C) = ecx;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esp + 0x90);
    PUSH32(esp, 0);
    MEM32(esp + 0x44) = edx;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    edx = MEM32(esp + 0x48);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    PUSH32(esp, 0);
    MEM32(esp + 0x80) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x80); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x54) = xmm1; /* movss */
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x88) = edx;
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x70); /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM32(esp + 0x90) = eax;
    xmm0 = MEMF(esp + 0x90); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x78); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E23D: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm1 = MEMF(0x648CE0); /* movss */
    xmm0 = xmm0 + MEMF(0x649428); /* addss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016E268: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x7C;
    ecx = esp + 0x6C;
    SET_LO8(edx, LO8(edx) + 0x16);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_0016E287: ;
    esi = eax;
    esp = esp + 0x34;
    if (TEST_Z(esi, esi)) goto loc_0016E2D3; /* je: equal / zero */

loc_0016E290: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016E295: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0016E2AE: ;
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    eax = 8;
    MEM32(esi + 0x3C) = 4;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x3A) = LO8(ebx);
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x5C) = LO16(eax);
    MEM16(esi + 0x5E) = 0x1F;

loc_0016E2D3: ;
    MEM32(esp + 0x7C) = MEM32(esp + 0x7C) - 1;
    if ((MEM32(esp + 0x7C) != 0)) goto loc_0016E0A0; /* jne: not equal / not zero */

loc_0016E2DD: ;
    ecx = MEM32(esp + 0x80);
    ebx = MEM32(ebp + 8);

loc_0016E2E7: ;
    eax = MEM32(esp + 0x10);
    ecx = ecx + 4;
    edi = edi + 0xC;
    eax--;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0016DF80; /* jne: not equal / not zero */

loc_0016E303: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58D8;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0016E329: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0016E33D; /* je: equal / zero */

loc_0016E330: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0016E33D; /* je: equal / zero */

loc_0016E338: ;
    edx = MEM32(eax + 8);
    goto loc_0016E33F;

loc_0016E33D: ;
    edx = 0; /* xor self */

loc_0016E33F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0016E350: ;
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x598648);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0016E362: ;
    eax = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x780AB0) = 0x5F4814;
    MEM32(0x6C0210) = 0x2EA;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_0016E3DE: ;
    ecx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    esp = esp + 0x38;
    MEM32(0x780AB0) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = 0;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edi = 0x2D;

loc_0016E423: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E428: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E449: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm3 = MEMF(0x649030); /* movss */
    xmm5 = MEMF(0x648D20); /* movss */
    PUSH32(esp, 0xFF);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x50) = xmm2; /* movss */
    PUSH32(esp, 0);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x64912C); /* mulss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, 0);
    xmm4 = xmm2; /* movaps */
    PUSH32(esp, 1);
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = MEMF(0x648F08); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x2C); /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x38); /* addss */
    PUSH32(esp, 0);
    xmm5 = xmm5 - xmm0; /* subss */
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEMF(esp + 0x98) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E4F5: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA0); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016E514: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0016E520; /* jns: not sign (positive) */

loc_0016E51B: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0016E520: ;
    eax = eax + 0x23;
    MEM32(esp + 0x68) = eax;
    fp_push((double)SMEM32(esp + 0x68)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0016E53A: ;
    ecx = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_0016E551: ;
    esi = eax;
    esp = esp + 0x34;
    if (TEST_Z(esi, esi)) goto loc_0016E58A; /* je: equal / zero */

loc_0016E55A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016E55F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0016E578: ;
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    MEM32(esi + 0x3C) = 4;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x3A) = LO8(ebx);

loc_0016E58A: ;
    edi--;
    if ((edi != 0)) goto loc_0016E423; /* jne: not equal / not zero */

loc_0016E591: ;
    ebx = MEM32(ebp + 8);
    goto loc_0016E5C0;

loc_0016E596: ;
    eax = ebx + 0x5C;
    edx = 2;
    esi = 0xFFFFFFFDu;

loc_0016E5A3: ;
    ecx = MEM32(eax + -8);
    if (TEST_Z(ecx, ecx)) goto loc_0016E5B1; /* je: equal / zero */

loc_0016E5AA: ;
    MEM8(ecx + 0x368) = MEM8(ecx + 0x368) & 0xFE;

loc_0016E5B1: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0016E5BA; /* je: equal / zero */

loc_0016E5B7: ;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) & esi;

loc_0016E5BA: ;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0016E5A3; /* jne: not equal / not zero */

loc_0016E5C0: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    xmm1 = MEMF(0x64A8E4); /* movss */
    ecx = ebx + 0x5C;
    edx = 2;

loc_0016E5D8: ;
    eax = MEM32(ecx + -8);
    if (TEST_Z(eax, eax)) goto loc_0016E612; /* je: equal / zero */

loc_0016E5DF: ;
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm2, MEMF(ebx + 0x30) - sets EFLAGS */
    if ((xmm2 <= MEMF(ebx + 0x30))) goto loc_0016E5FA; /* jbe: below or equal (unsigned <=) */

loc_0016E5ED: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x358) = xmm2; /* movss */
    goto loc_0016E60A;

loc_0016E5FA: ;
    xmm2 = MEMF(0x648F38); /* movss */
    MEMF(eax + 0x358) = xmm0; /* movss */

loc_0016E60A: ;
    MEMF(eax + 0x35C) = xmm2; /* movss */

loc_0016E612: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0016E63B; /* je: equal / zero */

loc_0016E618: ;
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm2, MEMF(ebx + 0x30) - sets EFLAGS */
    if ((xmm2 <= MEMF(ebx + 0x30))) goto loc_0016E633; /* jbe: below or equal (unsigned <=) */

loc_0016E626: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x370) = xmm2; /* movss */
    goto loc_0016E63B;

loc_0016E633: ;
    MEMF(eax + 0x370) = xmm1; /* movss */

loc_0016E63B: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0016E5D8; /* jne: not equal / not zero */

loc_0016E641: ;
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
 * sub_0016E660
 * Original: 0x0016E660 - 0x0016E6E7 (135 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E660(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016E660: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, 0x4C)) goto loc_0016E682; /* jne: not equal / not zero */

loc_0016E669: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x773CD0));
    MEM8(eax + 0x39) = 0xFF;
    SET_LO8(eax, 0xFF);
    if (CMP_A(LO8(ecx), LO8(eax))) goto loc_0016E6E6; /* ja: above (unsigned >) */

loc_0016E67D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_0016E6BF;

loc_0016E682: ;
    if (CMP_NE(eax, 0x4D)) goto loc_0016E690; /* jne: not equal / not zero */

loc_0016E687: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x39) = 0x1E;
    esp += 4; return; /* ret */

loc_0016E690: ;
    if (CMP_NE(eax, 0x4E)) goto loc_0016E69E; /* jne: not equal / not zero */

loc_0016E695: ;
    edx = MEM32(esp + 4);
    MEM8(edx + 0x39) = 0xFF;
    esp += 4; return; /* ret */

loc_0016E69E: ;
    if (CMP_NE(eax, 0x4F)) goto loc_0016E6E6; /* jne: not equal / not zero */

loc_0016E6A3: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x773CD0));
    MEM8(eax + 0x39) = 0xFF;
    SET_LO8(eax, 0xFF);
    if (CMP_A(LO8(ecx), LO8(eax))) goto loc_0016E6E6; /* ja: above (unsigned >) */

loc_0016E6B7: ;
    xmm0 = MEMF(0x648EEC); /* movss */

loc_0016E6BF: ;
    MEMF(0x773CC4) = xmm0; /* movss */
    MEMF(0x773CC8) = xmm0; /* movss */
    MEMF(0x773CCC) = xmm0; /* movss */
    MEM32(0x773C68) = 1;
    MEM8(0x773CD0) = LO8(eax);

loc_0016E6E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E6F0
 * Original: 0x0016E6F0 - 0x0016E787 (151 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E6F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016E6F0: ;
    SET_LO8(eax, MEM8(0x849413));
    esp = esp - 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0016E783; /* jne: not equal / not zero */

loc_0016E700: ;
    eax = MEM32(0x84B4A0);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x1068;
    edi = eax + 0xFF0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016E72D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016E781; /* je: equal / zero */

loc_0016E734: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x57;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x46;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM8(0x849413) = 1;
    MEM32(eax + 8) = ecx;

loc_0016E781: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0016E783: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E790
 * Original: 0x0016E790 - 0x0016E8D1 (321 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E790(void)
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

loc_0016E790: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E79D: ;
    xmm0 = xmm0 * MEMF(0x649E68); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A410); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0016E8CC; /* jbe: below or equal (unsigned <=) */

loc_0016E7CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0016E7D0: ;
    esi = MEM32(ebp + 0x4C);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_0016E7DC: ;
    esi = MEM32(ebp + 0x50);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_0016E7E8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016E7ED: ;
    ebx = eax;
    ebx = ebx & 0x8000000Fu;
    if (((int32_t)ebx >= 0)) goto loc_0016E7FC; /* jns: not sign (positive) */

loc_0016E7F7: ;
    ebx--;
    ebx = ebx | 0xFFFFFFF0u;
    ebx++;

loc_0016E7FC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E801: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 4));
    esi = ZX8(LO8(ebx));
    MEMF(esp + 0x30) = xmm0; /* movss */
    esi = esi << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016E828: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edi = edi + 0xD96;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016E83D: ;
    edx = MEM32(0x58E8CC);
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    fp_push(MEMF(esi + edx)); /* fld float */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0016E859: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    edx = MEM32(0x58E8C8);
    ecx = MEM32(esp + 0x34);
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi + edx);
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x3C); /* divss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = edi;
    SET_LO8(edx, 1);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000A5C50(); /* call 0x000A5C50 */

loc_0016E8A7: ;
    xmm0 = MEMF(ebp + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x18;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0016E7D0; /* ja: above (unsigned >) */

loc_0016E8C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0016E8CC: ;
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
 * sub_0016E8E0
 * Original: 0x0016E8E0 - 0x0016E91F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E8E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016E8E0: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, 0x4E)) goto loc_0016E8EE; /* je: equal / zero */

loc_0016E8E9: ;
    if (CMP_NE(eax, 0x4F)) goto loc_0016E91E; /* jne: not equal / not zero */

loc_0016E8EE: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0016E91E; /* jne: not equal / not zero */

loc_0016E8F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0016E903: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0016E91D; /* jl: less (signed <) */

loc_0016E90A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0016E91F(); return; } /* je: equal / zero */

loc_0016E917: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0016E91A: ;
    esp = esp + 4;

loc_0016E91D: ;
    POP32(esp, esi);

loc_0016E91E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E930
 * Original: 0x0016E930 - 0x0016E99C (108 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E930(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016E930: ;
    eax = MEM32(0x8493A4);
    if (TEST_Z(eax, eax)) goto loc_0016E950; /* je: equal / zero */

loc_0016E939: ;
    SET_LO8(ecx, 8);
    goto loc_0016E940;

    /* nop */

loc_0016E940: ;
    if (CMP_NE(MEM8(eax + 0x5C), LO8(ecx))) goto loc_0016E949; /* jne: not equal / not zero */

loc_0016E945: ;
    MEM8(eax + 0x5A) = 0;

loc_0016E949: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0016E940; /* jne: not equal / not zero */

loc_0016E950: ;
    eax = MEM32(0x8493A4);
    if (TEST_Z(eax, eax)) goto loc_0016E96F; /* je: equal / zero */

loc_0016E959: ;
    SET_LO8(edx, 0xB);
    SET_LO8(ecx, 1);
    /* nop */

loc_0016E960: ;
    if (CMP_NE(MEM8(eax + 0x5C), LO8(edx))) goto loc_0016E968; /* jne: not equal / not zero */

loc_0016E965: ;
    MEM8(eax + 0x5A) = LO8(ecx);

loc_0016E968: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0016E960; /* jne: not equal / not zero */

loc_0016E96F: ;
    eax = MEM32(0x84B4A0);
    PUSH32(esp, 0x30);
    eax = eax + 0xBB8;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016E988: ;
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016E998: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E9A0
 * Original: 0x0016E9A0 - 0x0016EA0D (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E9A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016E9A0: ;
    eax = MEM32(0x8493A4);
    if (TEST_Z(eax, eax)) goto loc_0016E9BF; /* je: equal / zero */

loc_0016E9A9: ;
    SET_LO8(edx, 8);
    SET_LO8(ecx, 1);
    /* nop */

loc_0016E9B0: ;
    if (CMP_NE(MEM8(eax + 0x5C), LO8(edx))) goto loc_0016E9B8; /* jne: not equal / not zero */

loc_0016E9B5: ;
    MEM8(eax + 0x5A) = LO8(ecx);

loc_0016E9B8: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0016E9B0; /* jne: not equal / not zero */

loc_0016E9BF: ;
    eax = MEM32(0x8493A4);
    if (TEST_Z(eax, eax)) goto loc_0016E9E0; /* je: equal / zero */

loc_0016E9C8: ;
    SET_LO8(ecx, 7);
    /* nop */

loc_0016E9D0: ;
    if (CMP_NE(MEM8(eax + 0x5C), LO8(ecx))) goto loc_0016E9D9; /* jne: not equal / not zero */

loc_0016E9D5: ;
    MEM8(eax + 0x5A) = 0;

loc_0016E9D9: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0016E9D0; /* jne: not equal / not zero */

loc_0016E9E0: ;
    eax = MEM32(0x84B4A0);
    PUSH32(esp, 0x31);
    eax = eax + 0xBB8;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016E9F9: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016EA09: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EA10
 * Original: 0x0016EA10 - 0x0016EA22 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016EA10: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, 0x53)) { sub_0016EA22(); return; } /* jne: not equal / not zero */

loc_0016EA19: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EA30
 * Original: 0x0016EA30 - 0x0016EBE9 (441 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EA30: ;
    esp = esp - 0x188;
    eax = MEM32(0x595D14);
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x194));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x1A0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    SET_LO8(ebx, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    edi = 0xA;
    esi = 0x19;
    PUSH32(esp, 0x5F4354);
    eax = esp + 0x28;
    MEM8(esp + 0x40) = 0;
    MEM8(esp + 0x28) = 0x61;
    MEM8(esp + 0x29) = 3;
    MEM8(esp + 0x2A) = 4;
    MEM8(esp + 0x2B) = 2;
    MEM8(esp + 0x2C) = 0;
    MEM16(esp + 0x2E) = LO16(ebp);
    MEM32(esp + 0x30) = 0xA5;
    MEM32(esp + 0x34) = 0x17;
    MEM8(esp + 0x3A) = LO8(ebx);
    MEM8(esp + 0x39) = LO8(ebx);
    MEM8(esp + 0x38) = LO8(ebx);
    MEM8(esp + 0x3B) = LO8(ebx);
    MEM8(esp + 0x3E) = LO8(ebx);
    MEM8(esp + 0x3D) = LO8(ebx);
    MEM8(esp + 0x3C) = LO8(ebx);
    MEM8(esp + 0x3F) = LO8(ebx);
    MEM32(esp + 0x44) = 0;
    MEM8(esp + 0x48) = 0;
    MEM8(esp + 0x49) = 1;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    MEM16(esp + 0x5C) = LO16(edi);
    MEM16(esp + 0x5E) = LO16(esi);
    PUSH32(esp, 0); sub_000A65B0(); /* call 0x000A65B0 */

loc_0016EAFB: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0016EB09; /* je: equal / zero */

loc_0016EB02: ;
    MEM16(eax + 0xE0) = LO16(ebp);

loc_0016EB09: ;
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_0016EB12: ;
    xmm0 = MEMF(0x64A608); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    ecx = LO16(ebp);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    eax = 0xC4;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x6B) = LO8(ebx);
    MEM8(esp + 0x6A) = LO8(ebx);
    MEM8(esp + 0x69) = LO8(ebx);
    MEM8(esp + 0x6C) = LO8(ebx);
    MEM8(esp + 0x6F) = LO8(ebx);
    MEM8(esp + 0x6E) = LO8(ebx);
    MEM8(esp + 0x6D) = LO8(ebx);
    MEM8(esp + 0x70) = LO8(ebx);
    MEM8(esp + 0x71) = LO8(ebx);
    MEM32(esp + 0x10) = 0xCE;
    MEM32(esp + 0x14) = 0xC5;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x84) = 1;
    MEM32(esp + 0x5C) = 0x29;
    MEM16(esp + 0x60) = LO16(edi);
    MEM16(esp + 0x62) = LO16(esi);
    MEM8(esp + 0x68) = 0;
    MEM8(esp + 0x72) = 0;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0016EBF0(); return; /* tail jmp 0x0016EBF0 */

}

/**
 * sub_0016ED30
 * Original: 0x0016ED30 - 0x0016EE2E (254 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0016ED30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x228;
    eax = MEM32(0x849414);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ecx + 0x50) = 0;
    if (TEST_NZ(eax, eax)) { sub_0016EE2E(); return; } /* jne: not equal / not zero */

loc_0016ED5A: ;
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0016EE2E(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016ED68: ;
    esi = esp + 0xA0;
    PUSH32(esp, 0); sub_0016D660(); /* call 0x0016D660 */

loc_0016ED74: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0xB4) = 1;
    if (TEST_NZ(eax, eax)) goto loc_0016ED8A; /* jne: not equal / not zero */

loc_0016ED85: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0016ED8A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0016EDD3; /* je: equal / zero */

loc_0016EDB0: ;
    eax = MEM32(esi + 0x80);
    ecx = 4;
    if (CMP_B(eax, ecx)) goto loc_0016EDD3; /* jb: below (unsigned <) */

loc_0016EDBF: ;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0016EDC4: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0016EDCC: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0016EDF4; /* jne: not equal / not zero */

loc_0016EDD3: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0016EDE5: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0016EDED: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016EE17; /* je: equal / zero */

loc_0016EDF4: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E9C0(); /* call 0x0024E9C0 */

loc_0016EE02: ;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    MEM32(0x849414) = eax;
    PUSH32(esp, 0); sub_0024D2E0(); /* call 0x0024D2E0 */

loc_0016EE0F: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0016EE17: ;
    eax = 0; /* xor self */
    edx = MEM32(eax);
    PUSH32(esp, edx);
    MEM32(0x849414) = eax;
    PUSH32(esp, 0); sub_0024D2E0(); /* call 0x0024D2E0 */

loc_0016EE26: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EF60
 * Original: 0x0016EF60 - 0x0016EFA2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EF60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EF60: ;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x7C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58C4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0016EF8E: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0016EFA2(); return; } /* je: equal / zero */

loc_0016EF95: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0016EFA2(); return; } /* je: equal / zero */

loc_0016EF9D: ;
    ebx = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0016EFA4(); return; /* tail jmp 0x0016EFA4 */

}

/**
 * sub_0016F190
 * Original: 0x0016F190 - 0x0016F1A6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F190(void)
{

loc_0016F190: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x50));
    edx = MEM32(eax + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00307CA0(); /* call 0x00307CA0 */

loc_0016F1A2: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F1B0
 * Original: 0x0016F1B0 - 0x0016F214 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F1B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016F1B0: ;
    xmm0 = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016F1C9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016F213; /* je: equal / zero */

loc_0016F1D0: ;
    xmm0 = MEMF(esp + 8); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x6C;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(eax + 0x4C) = ecx;
    MEM8(eax + 0x50) = LO8(edx);

loc_0016F213: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F220
 * Original: 0x0016F220 - 0x0016F2D9 (185 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F220(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0016F220: ;
    esp = esp - 0x24;
    xmm0 = MEMF(0x649F58); /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    SET_LO16(eax, MEM16(esp + 0x28));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F99999A);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649F54); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, 0x48F42400);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648F8C); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x28;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0x20) = 0;
    MEM8(esp + 0x21) = 1;
    MEM16(esp + 0x22) = LO16(eax);
    MEM8(esp + 0x26) = 5;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0016F2B0: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0016F2D5; /* je: equal / zero */

loc_0016F2B7: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x38;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_0016F2D5: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F2E0
 * Original: 0x0016F2E0 - 0x0016F38A (170 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F2E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016F2E0: ;
    esp = esp - 0x20;
    xmm0 = MEMF(0x649F50); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649F4C); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x6C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016F336: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016F386; /* je: equal / zero */

loc_0016F33D: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x1E;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x41;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 8;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0016F386: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F390
 * Original: 0x0016F390 - 0x0016F40A (122 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F390: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1E4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1E4);
    edx = ecx + esi;
    ebx = 0; /* xor self */
    edx = edx + eax;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ebp, ebx)) { sub_0016F40A(); return; } /* je: equal / zero */

loc_0016F3B3: ;
    if (CMP_NE(ebp, 2)) goto loc_0016F3D1; /* jne: not equal / not zero */

loc_0016F3B8: ;
    edi = 0x80;
    MEM16(esp + 0x44) = LO16(edi);
    MEM16(esp + 0x46) = LO16(edi);
    MEM32(esp + 0x14) = 0x58DF24;
    goto loc_0016F3F4;

loc_0016F3D1: ;
    (void)0; /* cmp ebp, 1 - flags set for next jcc */
    MEM16(esp + 0x44) = 0x80;
    MEM16(esp + 0x46) = 0x40;
    MEM32(esp + 0x14) = 0x58DF14;
    if (CMP_EQ(ebp, 1)) goto loc_0016F3F4; /* je: equal / zero */

loc_0016F3EC: ;
    MEM32(esp + 0x14) = 0x58DF1C;

loc_0016F3F4: ;
    MEM8(esp + 0x48) = 9;
    MEM8(esp + 0x51) = 0x10;
    MEM16(esp + 0x40) = LO16(ebx);
    MEM16(esp + 0x42) = LO16(ebx);
    g_seh_ebp = ebp; sub_0016F43A(); return; /* tail jmp 0x0016F43A */

}

/**
 * sub_0016F610
 * Original: 0x0016F610 - 0x0016F632 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F610(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F610: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_LO16(eax, 0x400);
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 0x40));
    MEM32(esp + 4) = ecx;
    eax = eax << 2;
    MEM16(ecx + 0x58) = LO16(eax);
    MEM16(ecx + 0x5A) = LO16(eax);
    g_seh_ebp = ebp; sub_0016F640(); return; /* tail jmp 0x0016F640 */

}

/**
 * sub_0016F640
 * Original: 0x0016F640 - 0x0016F69D (93 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0016F640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0x34);
    eax = MEM32(edi + 0x38);
    ebx = ecx;
    ecx = ecx & 0xFFFF;
    esi = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x849418);
    eax = (uint32_t)((int32_t)eax >> 0x10);
    esi = esi & 0xFFFF;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(ecx, ecx)) { sub_0016F69D(); return; } /* je: equal / zero */

loc_0016F680: ;
    edx = MEM32(0x84941C);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edx, 2)) ? 1 : 0); /* setne */
    eax--;
    eax = eax & 0xFFFFFFECu;
    eax = eax + 0xB4;
    MEM32(esp + 0x1C) = eax;
    g_seh_ebp = ebp; sub_0016F6A5(); return; /* tail jmp 0x0016F6A5 */

}

/**
 * sub_0016F870
 * Original: 0x0016F870 - 0x0016F877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F870(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F870: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_001BD230(); return; /* tail jmp 0x001BD230 */

}

/**
 * sub_0016FA80
 * Original: 0x0016FA80 - 0x0016FAEF (111 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FA80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0016FA80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x3C4);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_0016FA95: ;
    if (TEST_Z(esi, esi)) goto loc_0016FAEA; /* je: equal / zero */

loc_0016FA99: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0xB0);
    eax = eax - 0;
    edx = 5;
    if ((eax == 0)) goto loc_0016FAB0; /* je: equal / zero */

loc_0016FAAD: ;
    eax--;
    goto loc_0016FAC2;

loc_0016FAB0: ;
    if (CMP_NE(MEM32(edi + 0xA4), edx)) goto loc_0016FAEA; /* jne: not equal / not zero */

loc_0016FAB8: ;
    MEM32(ecx + 0xB0) = 1;

loc_0016FAC2: ;
    if (CMP_NE(MEM32(edi + 0xA4), edx)) goto loc_0016FAEA; /* jne: not equal / not zero */

loc_0016FACA: ;
    xmm1 = MEMF(0x649A78); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0016FAEA; /* ja: above (unsigned >) */

loc_0016FAD7: ;
    /* comiss xmm0, MEMF(0x6498F8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6498F8))) goto loc_0016FAEA; /* jbe: below or equal (unsigned <=) */

loc_0016FAE0: ;
    MEM32(ecx + 0xB0) = 2;

loc_0016FAEA: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016FAF0
 * Original: 0x0016FAF0 - 0x0016FB72 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FAF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0016FAF0: ;
    esp = esp - 0x10;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = SX16(LO16(ecx));
    PUSH32(esp, edx);
    MEM8(esp + 0xC) = LO8(eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016FB20: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0016FB6E; /* je: equal / zero */

loc_0016FB27: ;
    xmm0 = MEMF(esp); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x51;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x3E;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_0016FB6E: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0016FB80
 * Original: 0x0016FB80 - 0x0016FEF1 (881 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FB80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_0016FB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x64);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0016FEDD; /* je: equal / zero */

loc_0016FBA2: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) goto loc_0016FEDD; /* jne: not equal / not zero */

loc_0016FBB1: ;
    if (CMP_EQ(MEM32(esi + 0x3C8), ebx)) goto loc_0016FEEA; /* je: equal / zero */

loc_0016FBBD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016FBC2: ;
    xmm0 = xmm0 * MEMF(0x649F48); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F44); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0016FEEA; /* jbe: below or equal (unsigned <=) */

loc_0016FBF1: ;
    SET_LO8(eax, 0xB4);
    MEM8(esp + 0x4C) = LO8(eax);
    MEM8(esp + 0x4D) = LO8(eax);
    MEM8(esp + 0x4E) = LO8(eax);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    edx = esp + 0x38;
    PUSH32(esp, 0x5F0678);
    MEM32(esp + 0x70) = 0x303;
    MEM32(esp + 0x1C) = 0x5986CC;
    MEM32(esp + 0x20) = 0x5986D8;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0016FC39: ;
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    edi = 2;
    PUSH32(esp, edx);
    eax = edi;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0016FC56: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    eax = MEM32(0x595D14);
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm7 = MEMF(esp + 0x48); /* movss */
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    xmm6 = xmm6 - MEMF(esp + 0x38); /* subss */
    xmm7 = xmm7 - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649F40); /* movss */
    esp = esp + 0x10;
    MEM32(esp + 0x90) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649F3C); /* movss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    MEM32(esp + 0x6C) = 0x6C;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    esi = 0x84CE07;
    MEM8(esp + 0xB4) = 0x10;
    MEM8(esp + 0xB5) = LO8(eax);
    MEM8(esp + 0xB6) = LO8(eax);
    MEM8(esp + 0xB7) = LO8(ebx);
    MEM32(esp + 0xB0) = ebx;
    MEM8(esp + 0xB8) = 0xFF;
    MEMF(esp + 0x78) = xmm0; /* movss */
    goto loc_0016FD30;

loc_0016FD1D: ;
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    /* nop */

loc_0016FD30: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016FD35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0xFF;
    edx = edx + 0x14;
    MEM16(esp + 0x40) = LO16(edx);
    MEM16(esp + 0x74) = LO16(edx);
    MEM16(esp + 0x70) = LO16(edx);
    ecx = SX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esp + 0x72) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016FD64: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 8);
    MEM8(esp + 0x4F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016FD78: ;
    xmm0 = xmm0 * MEMF(0x6490B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F38); /* addss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016FD9C: ;
    xmm0 = xmm0 * MEMF(0x649F34); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F30); /* addss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016FDBA: ;
    xmm0 = xmm0 * MEMF(0x649F2C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F28); /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = xmm0; /* movaps */
    MEMF(esp + 0x9C) = xmm5; /* movss */
    MEMF(esp + 0xA0) = xmm6; /* movss */
    MEMF(esp + 0xA4) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016FE01: ;
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x2C); /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016FE4D: ;
    ebx = eax;
    ebx = ebx & 1;
    ebx = ebx << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016FE59: ;
    eax = eax & 1;
    ebx = ebx | eax;
    ebx = ebx << 6;
    esi = esi & 0xFFFFFF3Fu;
    esi = esi | ebx;
    ebx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    eax = 0; /* xor self */
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0xAC) = esi;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x70) = 4;
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0016FEA6: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0016FEB7; /* je: equal / zero */

loc_0016FEAD: ;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x170) = ecx;

loc_0016FEB7: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0016FD1D; /* ja: above (unsigned >) */

loc_0016FED6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0016FEDD: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_0016FEEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016FF00
 * Original: 0x0016FF00 - 0x0017020F (783 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0016FF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x64);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001701FB; /* je: equal / zero */

loc_0016FF22: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) goto loc_001701FB; /* jne: not equal / not zero */

loc_0016FF31: ;
    if (CMP_EQ(MEM32(esi + 0x3C8), ebx)) goto loc_001701B1; /* je: equal / zero */

loc_0016FF3D: ;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    edx = esp + 0xA8;
    PUSH32(esp, 0x5D5828);
    MEM32(esp + 0xA4) = 0x5986E4;
    MEM32(esp + 0xA8) = 0x5986F0;
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xA0) = edx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0016FF7E: ;
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = 2;
    ecx = esp + 0xAC;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0016FF9F: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x28);
    ecx = 3;
    MEM32(esp + 0x3C) = eax;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 - MEMF(0x648CE4); /* subss */
    eax = MEM32(esp + 0x2C);
    MEM16(esp + 0x6E) = LO16(ecx);
    MEM32(esp + 0x64) = ecx;
    MEM8(esp + 0x74) = LO8(ecx);
    SET_LO8(ecx, 0xB4);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    edx = 4;
    esi = 1;
    MEM32(esp + 0x40) = eax;
    eax = 0xFF;
    MEM8(esp + 0x77) = LO8(ecx);
    MEM8(esp + 0x76) = LO8(ecx);
    SET_LO8(ecx, 0x28);
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM16(esp + 0x6C) = 6;
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM16(esp + 0x5E) = LO16(eax);
    MEM16(esp + 0x60) = LO16(ebx);
    MEM16(esp + 0x62) = 0x32;
    MEM32(esp + 0x68) = esi;
    MEM16(esp + 0x70) = LO16(esi);
    MEM8(esp + 0x72) = LO8(edx);
    MEM8(esp + 0x73) = 2;
    MEM8(esp + 0x75) = LO8(eax);
    MEM8(esp + 0x78) = LO8(eax);
    MEM8(esp + 0x7B) = LO8(ecx);
    MEM8(esp + 0x7A) = LO8(ecx);
    MEM8(esp + 0x79) = LO8(ebx);
    MEM8(esp + 0x7C) = LO8(ebx);
    MEM8(esp + 0x7F) = LO8(eax);
    MEM8(esp + 0x7E) = LO8(eax);
    MEM8(esp + 0x7D) = 0xAA;
    MEM8(esp + 0x80) = LO8(eax);
    MEM8(esp + 0x83) = LO8(ebx);
    MEM8(esp + 0x82) = LO8(ebx);
    MEM8(esp + 0x81) = LO8(ebx);
    MEM8(esp + 0x84) = LO8(ebx);
    MEM8(esp + 0x85) = LO8(eax);
    MEM8(esp + 0x86) = LO8(ebx);
    MEM32(esp + 0x88) = 0x205;
    MEM32(esp + 0x8C) = 0x63000;
    MEM16(esp + 0x90) = 8;
    MEM16(esp + 0x92) = 0x1F;
    MEM16(esp + 0x94) = LO16(esi);
    MEM8(esp + 0x96) = LO8(ebx);
    MEMF(esp + 0x98) = xmm0; /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    SET_LO8(eax, LO8(eax) | 0xFF);
    edx = esp + 0x30;
    MEM8(esp + 0x9C) = LO8(eax);
    MEM8(esp + 0x9D) = LO8(ebx);
    MEM8(esp + 0x9E) = LO8(eax);
    MEM8(esp + 0x9F) = LO8(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_00170139: ;
    eax = MEM32(edi + 0x54);
    esp = esp + 0x18;
    if (CMP_EQ(eax, ebx)) goto loc_00170181; /* je: equal / zero */

loc_00170143: ;
    MEM8(eax + 0x368) = MEM8(eax + 0x368) | 1;
    edx = MEM32(esp + 0x14);
    ecx = eax + 0x40;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xA4);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0xA8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0xAC);
    MEM32(eax + 8) = ecx;

loc_00170181: ;
    eax = MEM32(edi + 0x58);
    if (CMP_EQ(eax, ebx)) goto loc_001701CD; /* je: equal / zero */

loc_00170188: ;
    eax = MEM32(eax + 0x34);
    MEM8(eax + 0x5A) = LO8(ebx);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    goto loc_001701CD;

loc_001701B1: ;
    eax = MEM32(edi + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_001701BF; /* je: equal / zero */

loc_001701B8: ;
    MEM8(eax + 0x368) = MEM8(eax + 0x368) & 0xFE;

loc_001701BF: ;
    eax = MEM32(edi + 0x58);
    if (CMP_EQ(eax, ebx)) goto loc_001701CD; /* je: equal / zero */

loc_001701C6: ;
    edx = MEM32(eax + 0x34);
    MEM8(edx + 0x5A) = 1;

loc_001701CD: ;
    edi = MEM32(edi + 0x54);
    if (CMP_EQ(edi, ebx)) goto loc_00170208; /* je: equal / zero */

loc_001701D4: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(edi + 0x358) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(edi + 0x35C) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001701FB: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_00170208: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00170210
 * Original: 0x00170210 - 0x00170283 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170210(void)
{
    int _flags = 0; /* fallback flag var */

loc_00170210: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x54);
    if (TEST_Z(esi, esi)) goto loc_00170250; /* je: equal / zero */

loc_00170218: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00170250; /* jne: not equal / not zero */

loc_00170221: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00170228: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00170250; /* jl: less (signed <) */

loc_0017022F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00170244; /* je: equal / zero */

loc_0017023C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017023F: ;
    esp = esp + 4;
    goto loc_00170250;

loc_00170244: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00170250: ;
    esi = MEM32(edi + 0x58);
    if (TEST_Z(esi, esi)) goto loc_00170281; /* je: equal / zero */

loc_00170257: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00170281; /* jne: not equal / not zero */

loc_00170260: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00170267: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00170281; /* jl: less (signed <) */

loc_0017026E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00170283(); return; } /* je: equal / zero */

loc_0017027B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017027E: ;
    esp = esp + 4;

loc_00170281: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001702C0
 * Original: 0x001702C0 - 0x001702DD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001702C0(void)
{

loc_001702C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00170210(); /* call 0x00170210 */

loc_001702CA: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001702D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001702D8: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001702E0
 * Original: 0x001702E0 - 0x00170311 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001702E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001702E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x360);
    if (TEST_Z(eax, eax)) goto loc_001702F6; /* je: equal / zero */

loc_001702EF: ;
    MEM32(eax + 0x54) = 0;

loc_001702F6: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_001702FB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00170311(); return; } /* jne: not equal / not zero */

loc_00170304: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00170320
 * Original: 0x00170320 - 0x00170346 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00170320: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x360);
    if (TEST_Z(eax, eax)) goto loc_00170336; /* je: equal / zero */

loc_0017032F: ;
    MEM32(eax + 0x54) = 0;

loc_00170336: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0017033B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00170341: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00170350
 * Original: 0x00170350 - 0x00170563 (531 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00170350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0017054F; /* je: equal / zero */

loc_0017036D: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) goto loc_0017054F; /* jne: not equal / not zero */

loc_0017037C: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0017055C; /* je: equal / zero */

loc_0017038A: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(edi + 0x52) = MEM16(edi + 0x52) - LO16(ecx);
    if (CMP_GE(MEM16(edi + 0x52), 0)) goto loc_0017055C; /* jge: greater or equal (signed >=) */

loc_001703A0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x679;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001703CC: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001703D1: ;
    ebx = eax;
    ebx = ebx & 0x80000001u;
    if (((int32_t)ebx >= 0)) goto loc_001703E0; /* jns: not sign (positive) */

loc_001703DB: ;
    ebx--;
    ebx = ebx | 0xFFFFFFFEu;
    ebx++;

loc_001703E0: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D5828);
    SET_LO8(ebx, LO8(ebx) + 2);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001703F2: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5986FC);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00170406: ;
    esp = esp + 0x14;
    MEM8(esp + 0xC) = 3;
    MEM8(esp + 0xD) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00170418: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x12) = 0;
    edx = edx + 5;
    MEM16(esp + 0xE) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017044B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x7531;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    edx = edx + 0x2710;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x28;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_00170473: ;
    SET_LO8(eax, 0xA0);
    esp = esp + 0x20;
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = 0xFF;
    goto loc_00170490;

loc_00170487: ;
    edi = MEM32(ebp + 8);
    /* nop */

loc_00170490: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00170495: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 4);
    eax = esp + 0x10;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x13) = LO8(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001704B9: ;
    xmm0 = xmm0 * MEMF(0x648D50); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001704D6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edi = edi + 5;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001704E8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2B;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x32;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001704F9: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5986FC);
    PUSH32(esp, 0x5D5828);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00170510: ;
    xmm0 = MEMF(0x648CFC); /* movss */
    ecx = eax;
    esp = esp + 4;
    eax = edi;
    PUSH32(esp, 0); sub_000A9900(); /* call 0x000A9900 */

loc_00170524: ;
    esp = esp + 0x28;
    SET_LO8(ebx, LO8(ebx) - 1);
    if (CMP_G(LO8(ebx) & LO8(ebx), 0)) goto loc_00170487; /* jg: greater (signed >) */

loc_00170531: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00170536: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x22;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + 8);
    edx = edx + 0x14;
    MEM16(eax + 0x52) = LO16(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0017054F: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_0017055C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00170570
 * Original: 0x00170570 - 0x001705CE (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170570: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x77 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi + 0x4C;
    if (CMP_NE(edx, 0x77)) goto loc_001705BA; /* jne: not equal / not zero */

loc_00170581: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001705CC; /* jne: not equal / not zero */

loc_0017058A: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00170591: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001705CC; /* jl: less (signed <) */

loc_00170598: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001705AD; /* je: equal / zero */

loc_001705A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001705A8: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001705AD: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001705BA: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_001705C8: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_001705CC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001705D0
 * Original: 0x001705D0 - 0x00170618 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001705D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001705D0: ;
    esp = esp - 0x44;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    edx = MEM32(eax + 0x4B0);
    MEM32(esp + 8) = eax;
    eax = MEM32(edx + 0x24);
    PUSH32(esp, ebx);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM8(esp + 0xC) = LO8(ecx);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58CC;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00170604: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00170618(); return; } /* je: equal / zero */

loc_0017060B: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_00170618(); return; } /* je: equal / zero */

loc_00170613: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0017061A(); return; /* tail jmp 0x0017061A */

}

/**
 * sub_001706C0
 * Original: 0x001706C0 - 0x00170749 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001706C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_001706C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x18);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x3C;
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_000B3030(); /* call 0x000B3030 */

loc_0017070B: ;
    esp = esp + 0x24;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00170713: ;
    xmm6 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00170730: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) { sub_00170749(); return; } /* jbe: below or equal (unsigned <=) */

loc_00170735: ;
    edx = MEM32(esi + 0x38);
    SET_LO8(ebx, 1);
    eax = esp + 0x50;
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00170747: ;
    g_seh_ebp = ebp; sub_00170786(); return; /* tail jmp 0x00170786 */

}

/**
 * sub_00170890
 * Original: 0x00170890 - 0x00170B98 (776 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170890: ;
    esp = esp - 0x180;
    ecx = MEM32(esp + 0x184);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x10B));
    PUSH32(esp, ecx);
    MEM8(esp + 0x70) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001708BB: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_00170B8E; /* je: equal / zero */

loc_001708C8: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esi + 0x38) = LO8(eax);
    MEM8(esi + 0x3A) = LO8(eax);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    MEM8(esi + 0x39) = 0x54;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM8(esi + 0x3B) = 0x34;
    edx = 0; /* xor self */
    eax = esi + 0x3C;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, ebp);
    ebp = esi + 0x4C;
    ecx = ebp;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edx;
    eax = 0; /* xor self */
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = eax;
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0017091D: ;
    xmm1 = MEMF(0x649278); /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    SET_LO8(eax, MEM8(edi + 0x10B));
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648F98); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649E30); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649F24); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648EAC); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x649F20); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x649428); /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x649024); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x649F1C); /* movss */
    MEM8(esp + 0x14) = LO8(eax);
    eax = 2;
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0xC4) = 0x303;
    MEM8(esp + 0x68) = LO8(ebx);
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0xD0) = 0x2BF;
    MEM8(esp + 0x7C) = 9;
    MEM8(esp + 0xCC) = 1;
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = ebx;
    MEM32(esp + 0xEC) = 4;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = eax;
    MEM16(esp + 0x7E) = 0x12C;
    ecx = MEM32(0x595D18);
    eax = MEM32(0x595D14);
    edx = MEM32(0x595D1C);
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0x98) = ecx;
    ecx = MEM32(esp + 0x194);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5C);
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x9C) = eax;
    SET_LO8(eax, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    MEM32(esp + 0x10C) = ebx;
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xAC) = edx;
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xB4) = xmm1; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEM32(esp + 0xBC) = 0x40E00000;
    MEM8(esp + 0xD0) = LO8(eax);
    MEM8(esp + 0xD1) = LO8(eax);
    MEM8(esp + 0xD2) = LO8(eax);
    MEM8(esp + 0xD3) = LO8(ebx);
    MEM32(esp + 0xC0) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00170B48: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x25);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x597978);
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00170B66: ;
    esp = esp + 0x28;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00170B81; /* je: equal / zero */

loc_00170B70: ;
    edi = eax + 0x310;
    ecx = 0x17;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00170B81: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x40)) goto loc_00170B8D; /* je: equal / zero */

loc_00170B8A: ;
    MEM32(ebp + 0xC) = ebx;

loc_00170B8D: ;
    POP32(esp, ebp);

loc_00170B8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x180;
    esp += 4; return; /* ret */

}

/**
 * sub_00170BA0
 * Original: 0x00170BA0 - 0x00170C0D (109 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170BA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00170BA0: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, ecx);
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    MEM16(esp + 0xE) = 0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00170BC1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00170C09; /* je: equal / zero */

loc_00170BC8: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x55;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x42;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x50) = edx;

loc_00170C09: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00170C10
 * Original: 0x00170C10 - 0x00170C7A (106 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170C10: ;
    xmm2 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm1 = MEMF(esi + 0x17C); /* movss */
    xmm0 = MEMF(esi + 0x174); /* movss */
    /* comiss xmm1, MEMF(esi + 0x170) - sets EFLAGS */
    xmm0 = xmm0 - MEMF(esi + 0x170); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    if ((xmm1 > MEMF(esi + 0x170))) { sub_00170C7A(); return; } /* ja: above (unsigned >) */

loc_00170C41: ;
    xmm3 = MEMF(esi + 0x17C); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) { sub_00170C7A(); return; } /* ja: above (unsigned >) */

loc_00170C4E: ;
    xmm3 = MEMF(esi + 0x178); /* movss */
    /* comiss xmm3, MEMF(esi + 0x170) - sets EFLAGS */
    if ((xmm3 > MEMF(esi + 0x170))) goto loc_00170C6B; /* ja: above (unsigned >) */

loc_00170C5F: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_00170C6B; /* ja: above (unsigned >) */

loc_00170C64: ;
    MEMF(esi + 0x30) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00170C7F(); return; /* tail jmp 0x00170C7F */

loc_00170C6B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00170C7F(); return; /* tail jmp 0x00170C7F */

}

/**
 * sub_00170D70
 * Original: 0x00170D70 - 0x00170E5C (236 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170D70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00170D70: ;
    esp = esp - 0x10;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BC05(); /* call 0x0042BC05 */

loc_00170D7C: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0xE0);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x7F9F5C); /* movss */
    if (TEST_NZ(eax, eax)) goto loc_00170DC3; /* jne: not equal / not zero */

loc_00170D92: ;
    eax = MEM32(0x84B24C);
    if (TEST_Z(eax, eax)) goto loc_00170DC3; /* je: equal / zero */

loc_00170D9B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    esi = 0xA8C0;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(ecx + 0xE0) = 1;
    POP32(esp, esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(ecx + 0x8C) = edx;

loc_00170DC3: ;
    edx = MEM32(0x7FA20C);
    eax = MEM32(ecx + 0x8C);
    eax = eax + edx;
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xA8C0);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ecx + 0x8C) = eax;
    if (CMP_L(eax, edx)) goto loc_00170DED; /* jl: less (signed <) */

loc_00170DE5: ;
    eax = eax - edx;
    MEM32(ecx + 0x8C) = eax;

loc_00170DED: ;
    eax = ZX16(MEM16(esp + 0xA));
    xmm2 = MEMF(0x648D1C); /* movss */
    edx = ZX16(MEM16(esp + 8));
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0xBC) = xmm2; /* movss */
    MEMF(ecx + 0x20C) = xmm2; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm3 = xmm3 * MEMF(0x6490F4); /* mulss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648E5C); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(ecx + 0xC) = xmm4; /* movss */
    MEMF(ecx + 0x15C) = xmm1; /* movss */
    MEM8(ecx + 0x1EE) = 0;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00170E60
 * Original: 0x00170E60 - 0x00170F16 (182 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170E60(void)
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

loc_00170E60: ;
    eax = MEM32(esp + 4);
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm1 = MEMF(0x648D88); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm0 = xmm0 + MEMF(eax + 0xDC); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(eax + 0xD8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    /* FPU: fcos  */
    MEMF(eax + 0xDC) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0xB4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(ecx, ecx)) goto loc_00170EE2; /* jne: not equal / not zero */

loc_00170EC2: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00170F15; /* jb: below (unsigned <) */

loc_00170EC7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4CA);
    PUSH32(esp, eax);
    MEM32(eax + 0xD8) = 1;
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_00170EDE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00170EE2: ;
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00170F15; /* jb: below (unsigned <) */

loc_00170EEF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4CB);
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, eax);
    MEMF(eax + 0xDC) = xmm0; /* movss */
    MEM32(eax + 0xD8) = 0;
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_00170F12: ;
    esp = esp + 0xC;

loc_00170F15: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00170F20
 * Original: 0x00170F20 - 0x00170FB8 (152 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170F20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00170F20: ;
    eax = MEM32(0x8493A4);
    esp = esp - 0xC;
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_EQ(eax, edx)) goto loc_00170F40; /* je: equal / zero */

loc_00170F31: ;
    if (CMP_NE(MEM8(eax + 0x5C), LO8(ebx))) goto loc_00170F39; /* jne: not equal / not zero */

loc_00170F36: ;
    MEM8(eax + 0x5A) = LO8(edx);

loc_00170F39: ;
    eax = MEM32(eax + 4);
    if (CMP_NE(eax, edx)) goto loc_00170F31; /* jne: not equal / not zero */

loc_00170F40: ;
    eax = MEM32(0x8493A4);
    if (CMP_EQ(eax, edx)) goto loc_00170F5F; /* je: equal / zero */

loc_00170F49: ;
    SET_LO8(ecx, 2);
    goto loc_00170F50;

    /* nop */

loc_00170F50: ;
    if (CMP_NE(MEM8(eax + 0x5C), LO8(ecx))) goto loc_00170F58; /* jne: not equal / not zero */

loc_00170F55: ;
    MEM8(eax + 0x5A) = LO8(ebx);

loc_00170F58: ;
    eax = MEM32(eax + 4);
    if (CMP_NE(eax, edx)) goto loc_00170F50; /* jne: not equal / not zero */

loc_00170F5F: ;
    ecx = MEM32(0x847024);
    xmm0 = MEMF(0x64AA94); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x40);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649124); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64936C); /* movss */
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x4D;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00170FB3: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00170FC0
 * Original: 0x00170FC0 - 0x00171098 (216 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00170FC0: ;
    esp = esp - 0x40;
    xmm1 = MEMF(0x64A3E8); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    edx = ecx + esi;
    edx = edx + eax;
    eax = eax << 0x10;
    eax = eax | edx;
    MEM32(esp + 0x14) = eax;
    eax = 0xFF;
    ebx = 0; /* xor self */
    ecx = ecx << 0x10;
    PUSH32(esp, eax);
    ecx = ecx | esi;
    MEM8(esp + 0x42) = LO8(eax);
    MEM8(esp + 0x43) = LO8(eax);
    MEM8(esp + 0x44) = LO8(eax);
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A3E4); /* movss */
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    MEM32(esp + 0x10) = 0x58DE3C;
    MEM8(esp + 0x44) = 0xA;
    MEM16(esp + 0x40) = 0x40;
    MEM16(esp + 0x42) = 0x20;
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM16(esp + 0x3C) = 0x18FC;
    MEM16(esp + 0x3E) = 0x1A12;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = 0x2710;
    MEM16(esp + 0x24) = LO16(edx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x38) = LO16(ebx);
    MEM16(esp + 0x3A) = LO16(ebx);
    MEM8(esp + 0x45) = 1;
    MEM8(esp + 0x49) = LO8(ebx);
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017107B: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00171092; /* je: equal / zero */

loc_00171082: ;
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_00171092: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_001710A0
 * Original: 0x001710A0 - 0x00171230 (400 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001710A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001710A0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00171230(); /* call 0x00171230 */

loc_001710AB: ;
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00171230(); /* call 0x00171230 */

loc_001710B2: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_00171230(); /* call 0x00171230 */

loc_001710B9: ;
    xmm0 = MEMF(0x64AFE4); /* movss */
    ecx = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFE0); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFDC); /* movss */
    PUSH32(esp, 0x3F4CCCCD);
    MEMF(esp + 0x24) = xmm0; /* movss */
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = 0x2D;
    ecx = 0x2B8;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00171112: ;
    xmm0 = MEMF(0x64AFD8); /* movss */
    ecx = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFD4); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFD0); /* movss */
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x24) = xmm0; /* movss */
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x2B7;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00171168: ;
    xmm0 = MEMF(0x64AFCC); /* movss */
    edx = MEM32(0x847024);
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFC8); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFC4); /* movss */
    PUSH32(esp, 0x40000000);
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = eax << 1;
    edx = 0; /* xor self */
    ecx = 0x2B6;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001711C6: ;
    edx = MEM32(0x84A144);
    ebx = 0; /* xor self */
    edx++;
    if (CMP_LE(edx & edx, 0)) goto loc_001711ED; /* jle: less or equal (signed <=) */

loc_001711D3: ;
    PUSH32(esp, esi);

loc_001711D4: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(edx, 4);
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_001711E1: ;
    eax = MEM32(0x84A144);
    ebx++;
    eax++;
    if (CMP_L(ebx, eax)) goto loc_001711D4; /* jl: less (signed <) */

loc_001711EC: ;
    POP32(esp, esi);

loc_001711ED: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    ecx = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(esp + 0x1C) = 1;
    MEM16(esp + 0x1E) = 0x64;
    MEM8(esp + 0x28) = 0xF;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esp + 0x29) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_00171228: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00171230
 * Original: 0x00171230 - 0x0017149F (623 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00171230: ;
    esp = esp - 0x68;
    if (CMP_A(LO8(eax), 2)) goto loc_0017149B; /* ja: above (unsigned >) */

loc_0017123B: ;
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(eax));
    ebp = ebp << 2;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x774C80);
    if (TEST_Z(edi, edi)) goto loc_00171499; /* je: equal / zero */

loc_00171251: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 8);
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, ebx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017129A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001712B7: ;
    xmm6 = MEMF(0x64AFC0); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x648EA8); /* addss */
    xmm0 = MEMF(0x64AFBC); /* movss */
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_001712E3: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001712EB: ;
    ebx = eax;
    ebx = ebx & 0x80000001u;
    if (((int32_t)ebx >= 0)) goto loc_001712FA; /* jns: not sign (positive) */

loc_001712F5: ;
    ebx--;
    ebx = ebx | 0xFFFFFFFEu;
    ebx++;

loc_001712FA: ;
    ebx = ebx + 3;
    if (CMP_LE(LO16(ebx) & LO16(ebx), 0)) goto loc_00171497; /* jle: less or equal (signed <=) */

loc_00171306: ;
    xmm0 = MEMF(0x64AFB8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD9C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFB4); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFB0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E3C); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFAC); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D74); /* movss */
    eax = 0xC;
    ecx = 0x64;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFA8); /* movss */
    MEM16(esp + 0x1E) = 0x50;
    MEM16(esp + 0x20) = 0xFFE0;
    MEM16(esp + 0x22) = 0x2B;
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = 8;
    MEM32(esp + 0x50) = 3;
    MEM32(esp + 0x54) = 2;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM16(esp + 0x68) = LO16(eax);
    MEM16(esp + 0x6A) = 0x32;
    MEM16(esp + 0x6C) = LO16(ecx);
    MEM16(esp + 0x6E) = LO16(ecx);
    MEM16(esp + 0x70) = LO16(eax);
    MEM16(esp + 0x72) = LO16(eax);
    MEM8(esp + 0x74) = 0xFF;

loc_001713F6: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001713FB: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x598776);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(ebp + 0x598774));
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO16(eax, ZX8(LO8(edx)));
    edx = eax + -40;
    MEM16(esp + 0x20) = LO16(edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_00171432: ;
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017145E: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 8);
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, 0xFF);
    esi = esp + 0x2C;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F2EA0(); /* call 0x000F2EA0 */

loc_0017148A: ;
    esp = esp + 0x10;
    ebx--;
    if (CMP_G(LO16(ebx) & LO16(ebx), 0)) goto loc_001713F6; /* jg: greater (signed >) */

loc_00171497: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00171499: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0017149B: ;
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_001714A0
 * Original: 0x001714A0 - 0x001714B6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001714A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001714A0: ;
    eax = MEM32(0x774C80);
    esp = esp - 0x10;
    if (TEST_NZ(eax, eax)) { sub_001714B6(); return; } /* jne: not equal / not zero */

loc_001714AC: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00171510
 * Original: 0x00171510 - 0x00171A7E (1390 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_00171510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2F4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp MEM8(ebx + 0xB4), 0xFF - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(MEM8(ebx + 0xB4), 0xFF)) goto loc_00171A77; /* jb: below (unsigned <) */

loc_0017152F: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    edx = ebx;
    eax = esp + 0x250;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00171575: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC61C4000u);
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x28;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00171589: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001715A0; /* je: equal / zero */

loc_00171590: ;
    xmm0 = MEMF(esp + 0x250); /* movss */
    MEM8(esp + 0xF) = 1;
    goto loc_001715AA;

loc_001715A0: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    MEM8(esp + 0xF) = 0;

loc_001715AA: ;
    PUSH32(esp, 0x3F800000);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x174));
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x39);
    PUSH32(esp, ebx);
    eax = ebx;
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001715CF: ;
    esp = esp + 0x1C;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001715DB: ;
    xmm0 = MEMF(0x648E38); /* movss */
    SET_LO8(ecx, MEM8(ebx + 0x10B));
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x158) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEM32(esp + 0x80) = 0x303;
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEM32(esp + 0x150) = ebx;
    MEM8(esp + 0x154) = LO8(ecx);
    MEMF(esp + 0x15C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017162D: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x160) = xmm0; /* movss */
    xmm0 = MEMF(0x64B358); /* movss */
    MEM8(esp + 0x240) = 0;
    MEMF(esp + 0x164) = xmm0; /* movss */
    MEMF(esp + 0x168) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00171669: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x16C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017167B: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x17C) = esi;
    MEM32(esp + 0x180) = esi;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x178) = xmm0; /* movss */
    MEMF(esp + 0x184) = xmm6; /* movss */
    ecx = 0x2C;
    esi = esp + 0x258;
    edi = esp + 0x188;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x248) = ecx;
    MEM32(esp + 0x24C) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x69E;
    MEM32(esp + 0x254) = 0x69E;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001716F9: ;
    MEM32(esp + 0x230) = eax;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 2;
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    MEM8(esp + 0x241) = LO8(edx);
    MEM8(esp + 0x88) = 1;
    MEM32(esp + 0x8C) = 0x59;
    MEM8(esp + 0x38) = 0xB;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = 4;
    MEM32(esp + 0xB0) = ebx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x6493C8); /* movss */
    MEM32(esp + 0xB4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(0x595D14);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2B);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x595D18);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(0x595D1C);
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x598780);
    eax = esp + 0x60;
    MEM16(esp + 0x62) = 0x12C;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEM32(esp + 0xE0) = ebx;
    MEM8(esp + 0xA4) = 0xFF;
    MEM8(esp + 0xA5) = 0xFF;
    MEM8(esp + 0xA6) = 0xFF;
    MEM8(esp + 0xA7) = 0xFF;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = edx;
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEM32(esp + 0x90) = 0x4E00008;
    MEM32(esp + 0x94) = ebx;
    MEM8(esp + 0x98) = 0xFF;
    MEM32(esp + 0x9C) = ebx;
    MEM16(esp + 0xA0) = 1;
    MEM16(esp + 0xA2) = 0xFF;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00171862: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, ebx)) goto loc_00171A77; /* je: equal / zero */

loc_0017186D: ;
    edi = eax + 0x310;
    MEM32(esp + 0x28) = edi;
    ecx = 0x40;
    esi = esp + 0x150;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0xC);
    ecx = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x17);
    ecx = esp + 0x4C;
    MEM8(esp + 0x3C) = 2;
    MEM8(esp + 0x3D) = 2;
    MEM16(esp + 0x3E) = 0x12C;
    MEM8(esp + 0x42) = 6;
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, 0); sub_00120000(); /* call 0x00120000 */

loc_001718D8: ;
    esi = MEM32(esp + 0x48);
    MEM32(esi + 0x24) = eax;
    SET_LO8(eax, MEM8(esp + 0x2F));
    esp = esp + 0x20;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00171A77; /* je: equal / zero */

loc_001718EE: ;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001718F7: ;
    edx = MEM32(0x595D14);
    xmm1 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, edi);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ecx = MEM32(0x595D1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x64) = edx;
    edx = esp + 0x274;
    PUSH32(esp, edx);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, ebx);
    eax = 2;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(0x595D18);
    PUSH32(esp, ebx);
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 + MEMF(0x648D1C); /* addss */
    MEM32(esp + 0x80) = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x68;
    PUSH32(esp, ebx);
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, eax);
    eax = 0x597978;
    MEM32(esp + 0xB8) = 0x303;
    MEM32(esp + 0xC4) = 3;
    MEM8(esp + 0x70) = LO8(ebx);
    MEM32(esp + 0xDC) = ebx;
    MEM32(esp + 0xE0) = 4;
    MEM32(esp + 0xE8) = ebx;
    MEM16(esp + 0x72) = 0x12C;
    MEM32(esp + 0xF0) = ebx;
    MEM8(esp + 0xB4) = 0xFF;
    MEM8(esp + 0xB5) = 0xFF;
    MEM8(esp + 0xB6) = 0xFF;
    MEM8(esp + 0xB7) = 0xFF;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEM32(esp + 0x90) = ecx;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEM32(esp + 0xA0) = 0x4E00008;
    MEM32(esp + 0xA4) = ebx;
    MEM8(esp + 0xA8) = 0xFF;
    MEM32(esp + 0xAC) = ebx;
    MEM16(esp + 0xB0) = 1;
    MEM16(esp + 0xB2) = 0xFF;
    PUSH32(esp, 0); sub_00150820(); /* call 0x00150820 */

loc_00171A71: ;
    esp = esp + 0x38;
    MEM32(esi + 0x28) = eax;

loc_00171A77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00171A80
 * Original: 0x00171A80 - 0x00171BDE (350 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00171A80: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = MEM32(edi + 0x310);
    if (TEST_Z(esi, esi)) goto loc_00171BC6; /* je: equal / zero */

loc_00171A97: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00171BB8; /* je: equal / zero */

loc_00171AA2: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x314))) goto loc_00171BB8; /* jne: not equal / not zero */

loc_00171AB4: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    SET_LO8(eax, MEM8(esi + 0x1AC));
    (void)0; /* cmp LO8(eax), 6 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 6)) goto loc_00171AF3; /* je: equal / zero */

loc_00171AD7: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_00171AF3; /* je: equal / zero */

loc_00171ADB: ;
    MEM8(esi + 0x1AD) = 0;
    MEM32(esi + 0x1A8) = 0xFFFF0000u;
    MEM8(esi + 0x1AE) = 4;

loc_00171AF3: ;
    MEM8(esi + 0x1AC) = 6;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00171AFF: ;
    xmm0 = xmm0 * MEMF(0x649574); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A6E0); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x33C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0x33C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00171B7D; /* jbe: below or equal (unsigned <=) */

loc_00171B30: ;
    ecx = edi + 4;
    MEM32(esp + 0x24) = ecx;

loc_00171B37: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00171B3C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x3F;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00171B4D: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A96D0(); /* call 0x000A96D0 */

loc_00171B59: ;
    xmm0 = MEMF(edi + 0x33C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0xC;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x33C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00171B37; /* ja: above (unsigned >) */

loc_00171B7D: ;
    xmm0 = MEMF(edi + 0x31C); /* movss */
    /* comiss xmm0, MEMF(0x64908C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64908C))) { sub_00171BDE(); return; } /* jbe: below or equal (unsigned <=) */

loc_00171B8E: ;
    xmm0 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x31C); /* subss */
    xmm0 = xmm0 * MEMF(0x6497D0); /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x318); /* mulss */
    MEMF(edi + 0x38) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00171D95(); return; /* tail jmp 0x00171D95 */

loc_00171BB8: ;
    MEM32(edi + 0x310) = 0;
    esi = 0; /* xor self */
    goto loc_00171B7D;

loc_00171BC6: ;
    xmm0 = MEMF(edi + 0x40); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x48); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_00171B7D;

}

/**
 * sub_00171F90
 * Original: 0x00171F90 - 0x00172001 (113 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00171F90: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, 0x2D - flags set for next jcc */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (CMP_NE(ecx, 0x2D)) goto loc_00171FD8; /* jne: not equal / not zero */

loc_00171F9E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x310);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_00171FC2; /* jne: not equal / not zero */

loc_00171FAE: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x310) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x314) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00171FC2: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_00171FFF; /* jne: not equal / not zero */

loc_00171FC7: ;
    MEM32(eax + 0x310) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 0x314) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00171FD8: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00171FFF; /* jne: not equal / not zero */

loc_00171FDC: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(eax + 0x310))) goto loc_00171FF5; /* je: equal / zero */

loc_00171FEA: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x314))) goto loc_00171FFF; /* jne: not equal / not zero */

loc_00171FF5: ;
    MEM32(eax + 0x310) = 0;

loc_00171FFF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172010
 * Original: 0x00172010 - 0x0017207B (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172010(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00172010: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_001521A0(); /* call 0x001521A0 */

loc_00172022: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00172079; /* je: equal / zero */

loc_00172029: ;
    ecx = (int32_t)MEMF(esi + 0x324); /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    ecx = (int32_t)MEMF(esi + 0x328); /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    ecx = (int32_t)MEMF(esi + 0x328); /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    ecx = (int32_t)MEMF(esi + 0x324); /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x64) = xmm0; /* movss */

loc_00172079: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172080
 * Original: 0x00172080 - 0x00172154 (212 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00172080: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x334);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_001720C4; /* je: equal / zero */

loc_0017208C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001720C4; /* jne: not equal / not zero */

loc_00172095: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0017209C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001720C4; /* jl: less (signed <) */

loc_001720A3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001720B8; /* je: equal / zero */

loc_001720B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001720B3: ;
    esp = esp + 4;
    goto loc_001720C4;

loc_001720B8: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001720C4: ;
    esi = MEM32(ebx + 0x338);
    if (TEST_Z(esi, esi)) goto loc_00172106; /* je: equal / zero */

loc_001720CE: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00172106; /* jne: not equal / not zero */

loc_001720D7: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001720DE: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00172106; /* jl: less (signed <) */

loc_001720E5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001720FA; /* je: equal / zero */

loc_001720F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001720F5: ;
    esp = esp + 4;
    goto loc_00172106;

loc_001720FA: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00172106: ;
    eax = MEM32(ebx + 0x3F0);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = ebx + 0x3F0;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0017212B; /* je: equal / zero */

loc_00172117: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x3F4);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0017212B: ;
    eax = MEM32(ebx + 0x3F8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = ebx + 0x3F8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00172151; /* je: equal / zero */

loc_0017213C: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(ebx + 0x3FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00172151: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172160
 * Original: 0x00172160 - 0x00172185 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172160: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00172080(); /* call 0x00172080 */

loc_0017216A: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0017216F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00172185(); return; } /* jne: not equal / not zero */

loc_00172178: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00172190
 * Original: 0x00172190 - 0x001721AA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172190(void)
{

loc_00172190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00172080(); /* call 0x00172080 */

loc_0017219A: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0017219F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001721A5: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001721B0
 * Original: 0x001721B0 - 0x001721C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001721B0(void)
{

loc_001721B0: ;
    eax = 0; /* xor self */
    MEM32(0x774C80) = eax;
    MEM32(0x774C84) = eax;
    MEM32(0x774C88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001721D0
 * Original: 0x001721D0 - 0x00172239 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001721D0(void)
{
    float xmm0;

loc_001721D0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x649F18); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x452F0000);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649F14); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649F10); /* movss */
    PUSH32(esp, 0);
    SET_LO8(ebx, 1);
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0011C7F0(); /* call 0x0011C7F0 */

loc_00172231: ;
    esp = esp + 0x28;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00172240
 * Original: 0x00172240 - 0x00172316 (214 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00172240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x24;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(esp + 0x10) = 9;
    MEM8(esp + 0x11) = 0xA;
    MEM8(esp + 0x12) = 0xB;
    MEM8(esp + 0x13) = 0xC;
    MEM8(esp + 0x14) = 0xD;
    if (CMP_NE(eax, edi)) goto loc_0017230F; /* jne: not equal / not zero */

loc_00172272: ;
    MEM8(0x774C97) = MEM8(0x774C97) + 1;
    esi = 0; /* xor self */
    /* nop */

loc_00172280: ;
    SET_LO8(ebx, MEM8(esi + 0x774C8C));
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x23;
    ebx = ebx + 0x23;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00172295: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_GE(edx, ebx)) goto loc_00172305; /* jge: greater or equal (signed >=) */

loc_001722A1: ;
    MEM8(esi + 0x774C8C) = MEM8(esi + 0x774C8C) ^ 1;
    if ((MEM8(esi + 0x774C8C) == 0)) goto loc_001722CC; /* je: equal / zero */

loc_001722AA: ;
    SET_LO8(edx, MEM8(esp + esi + 0x10));
    eax = esp + 0x18;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    eax = 0x3C;
    MEM8(esp + 0x20) = LO8(edx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_001722C7: ;
    esp = esp + 8;
    goto loc_00172305;

loc_001722CC: ;
    SET_LO8(ebx, MEM8(esp + esi + 0x10));
    ecx = esp + 0x20;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ecx);
    eax = 0x3C;
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_001722E9: ;
    edx = esp + 0x30;
    PUSH32(esp, 0x17);
    PUSH32(esp, edx);
    eax = 0x3C;
    MEM8(esp + 0x38) = LO8(ebx);
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00172302: ;
    esp = esp + 0x10;

loc_00172305: ;
    esi++;
    if (CMP_L(esi, 5)) goto loc_00172280; /* jl: less (signed <) */

loc_0017230F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00172320
 * Original: 0x00172320 - 0x0017232D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172320(void)
{

loc_00172320: ;
    eax = 0; /* xor self */
    MEM32(0x774C8C) = eax;
    MEM8(0x774C90) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00172330
 * Original: 0x00172330 - 0x0017241C (236 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172330(void)
{
    float xmm0;

loc_00172330: ;
    esp = esp - 0x44;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = MEM32(eax + 4);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    ecx = 2;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFA4); /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFA0); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF9C); /* movss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 1);
    edx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A6EC); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF98); /* movss */
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    esi = esp + 0x20;
    MEM32(esp + 0x1C) = 0xE2;
    MEM16(esp + 0x34) = 0;
    MEM16(esp + 0x36) = 0xFF;
    MEM16(esp + 0x38) = 0xFFC0;
    MEM16(esp + 0x3A) = 0x5D;
    MEM16(esp + 0x4C) = 0x14;
    MEM16(esp + 0x4E) = 0xA;
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_00172414: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00172420
 * Original: 0x00172420 - 0x0017258A (362 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172420(void)
{
    float xmm0;

loc_00172420: ;
    esp = esp - 0x54;
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5C);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    PUSH32(esp, 0x43FA0000);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00172482: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CFC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    SET_LO8(edx, LO8(ebx));
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_001724AB: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x649824); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF08); /* movss */
    PUSH32(esp, 0x42200000);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF94); /* movss */
    PUSH32(esp, 1);
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF00); /* movss */
    PUSH32(esp, 0x648D14);
    PUSH32(esp, 0x5F4AB4);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x3C;
    MEM32(esp + 0x3C) = 0xF;
    MEM32(esp + 0x40) = 8;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEM16(esp + 0x50) = 0;
    MEM16(esp + 0x52) = 0xFF;
    MEM16(esp + 0x54) = 0xFFC0;
    MEM16(esp + 0x56) = 0x29;
    MEM16(esp + 0x68) = 0x27;
    MEM16(esp + 0x6A) = 0x14;
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_00172574: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00172581: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00172590
 * Original: 0x00172590 - 0x00172713 (387 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172590: ;
    esp = esp - 0x10;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = ecx - MEM32(0x8471B8);
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x8471B4);
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, ebp);
    eax = eax + edx;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4);
    ebp = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (TEST_Z(edi, edi)) goto loc_0017269B; /* je: equal / zero */

loc_001725C8: ;
    edx = MEM32(0x84A5F8);
    ebx = MEM32(0x84A5FC);
    eax = 0; /* xor self */
    edx = edx + 0xDA0;
    PUSH32(esp, esi);
    /* nop */

loc_001725E0: ;
    if (TEST_NZ(ebp, ebp)) goto loc_0017269A; /* jne: not equal / not zero */

loc_001725E8: ;
    SET_LO8(ecx, MEM8(ebx + eax));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = eax + 1;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00172617; /* je: equal / zero */

loc_001725F2: ;
    ebp = 1;
    ecx = eax;
    ebp = ebp << LO8(ecx);
    if (TEST_Z(edi, ebp)) goto loc_00172617; /* je: equal / zero */

loc_001725FF: ;
    ecx = edx + -3488;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebp = edx + -3488;
    MEM32(esp + 0x10) = ebp;
    if (TEST_NZ(ecx, ecx)) goto loc_0017269A; /* jne: not equal / not zero */

loc_00172617: ;
    SET_LO8(ecx, MEM8(ebx + eax + 1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00172640; /* je: equal / zero */

loc_0017261F: ;
    ebp = 1;
    ecx = esi;
    ebp = ebp << LO8(ecx);
    if (TEST_Z(edi, ebp)) goto loc_00172640; /* je: equal / zero */

loc_0017262C: ;
    ecx = edx + -1744;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebp = edx + -1744;
    MEM32(esp + 0x10) = ebp;
    if (TEST_NZ(ecx, ecx)) goto loc_0017269A; /* jne: not equal / not zero */

loc_00172640: ;
    SET_LO8(ecx, MEM8(ebx + eax + 2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00172660; /* je: equal / zero */

loc_00172648: ;
    ecx = esi + 1;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    if (TEST_Z(edi, ebp)) goto loc_00172660; /* je: equal / zero */

loc_00172656: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ebp = edx;
    MEM32(esp + 0x10) = ebp;
    if (TEST_NZ(edx, edx)) goto loc_0017269A; /* jne: not equal / not zero */

loc_00172660: ;
    SET_LO8(ecx, MEM8(ebx + eax + 3));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00172682; /* je: equal / zero */

loc_00172668: ;
    ecx = esi + 2;
    esi = 1;
    esi = esi << LO8(ecx);
    if (TEST_Z(edi, esi)) goto loc_00172682; /* je: equal / zero */

loc_00172676: ;
    ebp = edx + 0x6D0;
    MEM32(esp + 0x10) = ebp;
    goto loc_00172686;

loc_00172682: ;
    ebp = MEM32(esp + 0x10);

loc_00172686: ;
    eax = eax + 4;
    edx = edx + 0x1B40;
    if (CMP_L(eax, 0x80)) goto loc_001725E0; /* jl: less (signed <) */

loc_0017269A: ;
    POP32(esp, esi);

loc_0017269B: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(edx + 0xC6));
    if (CMP_EQ(LO8(eax), 0xF9)) goto loc_001726C2; /* je: equal / zero */

loc_001726A9: ;
    if (CMP_EQ(LO8(eax), 0xF8)) goto loc_001726C2; /* je: equal / zero */

loc_001726AD: ;
    if (CMP_EQ(LO8(eax), 0xF7)) goto loc_001726C2; /* je: equal / zero */

loc_001726B1: ;
    if (CMP_NE(LO8(eax), 0xF6)) goto loc_0017270C; /* jne: not equal / not zero */

loc_001726B5: ;
    PUSH32(esp, 0x38);
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, eax);
    goto loc_001726FD;

loc_001726C2: ;
    (void)0; /* cmp LO8(eax), 0xF9 - flags set for next jcc */
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(LO8(eax), 0xF9)) goto loc_001726D4; /* jne: not equal / not zero */

loc_001726CA: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = ecx;
    goto loc_001726EE;

loc_001726D4: ;
    if (CMP_NE(LO8(eax), 0xF8)) goto loc_001726E2; /* jne: not equal / not zero */

loc_001726D8: ;
    edx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    goto loc_001726EE;

loc_001726E2: ;
    if (CMP_NE(LO8(eax), 0xF7)) goto loc_001726F6; /* jne: not equal / not zero */

loc_001726E6: ;
    eax = esp + 0x10;
    MEM32(esp + 0x14) = eax;

loc_001726EE: ;
    MEM32(esp + 0x10) = 9;

loc_001726F6: ;
    PUSH32(esp, 0x35);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

loc_001726FD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00172709: ;
    esp = esp + 0x10;

loc_0017270C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00172720
 * Original: 0x00172720 - 0x00172A2E (782 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00172720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x54));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_00172A27; /* jl: less (signed <) */

loc_00172741: ;
    eax = eax - MEM32(0x7FA20C);
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(ebx + 0x54) = LO16(eax);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00172765; /* jge: greater or equal (signed >=) */

loc_00172750: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00172765: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017276A: ;
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649620); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x50); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x50) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00172A27; /* jbe: below or equal (unsigned <=) */

loc_0017279D: ;
    xmm0 = MEMF(ebx + 0x68); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x5C); /* addss */
    xmm2 = MEMF(0x6490B0); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    xmm2 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x68) = xmm2; /* movss */
    xmm2 = MEMF(ebx + 0x58); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(ebx + 0x60); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM8(esp + 0x28) = 0;
    MEM8(esp + 0x2E) = 1;
    MEM8(esp + 0x60) = 0xFF;
    MEM16(esp + 0x70) = 3;
    MEM16(esp + 0x72) = 4;
    MEM8(esp + 0x61) = 0;
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEM8(esp + 0x8A) = 0x61;
    MEM8(esp + 0x89) = 0xF2;
    MEM8(esp + 0x88) = 0xFF;
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    esi = ebx + 0x6C;
    goto loc_00172880;

loc_00172871: ;
    xmm5 = MEMF(0x648D10); /* movss */
    /* nop */

loc_00172880: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017288F: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 * MEMF(ebx + 0x64); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001728A4: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_001728AF: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x58); /* addss */
    ecx = MEM32(ebx + 0x5C);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edi = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_001728E2: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00172A08; /* je: equal / zero */

loc_001728ED: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001728FC: ;
    xmm5 = MEMF(0x64A004); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00172910: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_0017291B: ;
    esp = esp + 0xC;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017292D: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00172939: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_00172944: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x58); /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001729BB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xD;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 8;
    MEM16(esp + 0x38) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001729D0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x97) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001729E7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = edx + 5;
    MEM32(esp + 0x70) = edx;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_00172A05: ;
    esp = esp + 0x10;

loc_00172A08: ;
    xmm0 = MEMF(ebx + 0x50); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x50) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00172871; /* ja: above (unsigned >) */

loc_00172A27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00172A30
 * Original: 0x00172A30 - 0x00172ACB (155 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172A30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00172A30: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0xC;
    (void)0; /* cmp eax, 0x38 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(eax, 0x38)) goto loc_00172AC6; /* jne: not equal / not zero */

loc_00172A45: ;
    eax = MEM32(esi + 0x4C);
    if (CMP_NE(MEM8(eax + 0x14), 1)) goto loc_00172AC6; /* jne: not equal / not zero */

loc_00172A4E: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = MEM32(0x847024);
    ecx = ecx + ecx * 4;
    MEM16(esi + 0x54) = LO16(ecx);
    ecx = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00172A70: ;
    eax = MEM32(esi + 0x4C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    ecx = 0x236;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00172AC6: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00172AD0
 * Original: 0x00172AD0 - 0x00172AEE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172AD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00172AD0: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    ebx = 0; /* xor self */
    if (CMP_GE(MEM16(esi + 0x50), LO16(ebx))) { sub_00172AEE(); return; } /* jge: greater or equal (signed >=) */

loc_00172AE1: ;
    eax = MEM32(esi + 0x4C);
    POP32(esp, esi);
    MEM8(eax + 0x14) = 1;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00172D30
 * Original: 0x00172D30 - 0x00172D68 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00172D30: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x4B)) goto loc_00172D67; /* jne: not equal / not zero */

loc_00172D37: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00172D67; /* jne: not equal / not zero */

loc_00172D40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00172D4C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00172D66; /* jl: less (signed <) */

loc_00172D53: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00172D68(); return; } /* je: equal / zero */

loc_00172D60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00172D63: ;
    esp = esp + 4;

loc_00172D66: ;
    POP32(esp, esi);

loc_00172D67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00172DB0
 * Original: 0x00172DB0 - 0x00172FAB (507 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00172DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x468);
    ecx = MEM32(eax + 0x238);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ebx + 0x360;
    PUSH32(esp, 0); sub_00185DB0(); /* call 0x00185DB0 */

loc_00172DE3: ;
    eax = MEM32(ebx + 0x450);
    eax = eax & 0x1F;
    esp = esp + 0xC;
    if (CMP_NE(LO8(eax), 9)) goto loc_00172E26; /* jne: not equal / not zero */

loc_00172DF3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00172DF8: ;
    xmm1 = MEMF(0x648EA8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00172FA4; /* jbe: below or equal (unsigned <=) */

loc_00172E09: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    edi = ebx + 0x368;
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_00172E1C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00172E26: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00172E2B: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00172E4E; /* jbe: below or equal (unsigned <=) */

loc_00172E38: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    edi = ebx + 0x368;
    eax = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_00172E4B: ;
    esp = esp + 4;

loc_00172E4E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00172E53: ;
    xmm1 = MEMF(0x648EA8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00172FA4; /* jbe: below or equal (unsigned <=) */

loc_00172E64: ;
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ebx + 0x398); /* subss */
    eax = ebx + 0x368;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(ebx + 0x3A0); /* subss */
    xmm1 = xmm1 - MEMF(ebx + 0x39C); /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF90); /* movss */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = 3;
    MEMF(esp + 0x38) = xmm1; /* movss */
    esi = ebx + 0x3B0;
    ecx = 0x24;
    edi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF8C); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    MEMF(esp + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(0x649588); /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF88); /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF84); /* movss */
    PUSH32(esp, ecx);
    eax = 0xF;
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(0x6496A8); /* movss */
    PUSH32(esp, 1);
    edx = esp + 0x24;
    MEM16(esp + 0xEC) = LO16(eax);
    MEM16(esp + 0xEE) = LO16(eax);
    PUSH32(esp, edx);
    MEMF(esp + 0xF4) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF80); /* movss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEMF(esp + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF7C); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x85;
    MEMF(esp + 0x104) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4160(); /* call 0x000F4160 */

loc_00172FA1: ;
    esp = esp + 0x14;

loc_00172FA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00172FB0
 * Original: 0x00172FB0 - 0x00172FD1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00172FB0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x38 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x38)) { sub_00172FD1(); return; } /* jne: not equal / not zero */

loc_00172FBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00172FE0(); /* call 0x00172FE0 */

loc_00172FC4: ;
    SET_LO8(eax, MEM8(esi + 0x58));
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x58) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00172FE0
 * Original: 0x00172FE0 - 0x001731E1 (513 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172FE0: ;
    esp = esp - 0x64;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00172FED: ;
    xmm0 = xmm0 * MEMF(0x649F0C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F08); /* addss */
    xmm0 = xmm0 * MEMF(ebp + 0x50); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001731DC; /* jbe: below or equal (unsigned <=) */

loc_00173019: ;
    SET_LO8(eax, 0xFF);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(esp + 0x43) = LO8(eax);
    MEM8(esp + 0x49) = LO8(eax);
    MEM8(esp + 0x48) = LO8(eax);
    MEM8(esp + 0x47) = LO8(eax);
    MEM8(esp + 0x4A) = LO8(eax);
    MEM8(esp + 0x4B) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    MEM8(esp + 0x5E) = LO8(eax);
    MEM8(esp + 0x65) = LO8(eax);
    eax = MEM32(ebp + 0x4C);
    MEM8(esp + 0x20) = LO8(ecx);
    MEM8(esp + 0x64) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM16(esp + 0x22) = 0x15;
    MEM8(esp + 0x48) = 4;
    MEM8(esp + 0x49) = 2;
    MEM8(esp + 0x4A) = 3;
    MEM8(esp + 0x4D) = 0x61;
    MEM8(esp + 0x4C) = 0xF2;
    MEM32(esp + 0x58) = 0x205;
    MEM32(esp + 0x5C) = 0x63000;
    MEM16(esp + 0x60) = 0x14;
    MEM16(esp + 0x62) = 0xC;
    MEM16(esp + 0x64) = 1;
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, edi);

loc_001730A7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001730AC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x52) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001730BF: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001730CB; /* jns: not sign (positive) */

loc_001730C6: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001730CB: ;
    esi = MEM32(ebp + 0x4C);
    SET_LO8(eax, LO8(eax) + 3);
    edx = esp + 0x10;
    MEM8(esp + 0x2D) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_001102D0(); /* call 0x001102D0 */

loc_001730EB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001730F0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    MEM16(esp + 0x2C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173105: ;
    xmm0 = xmm0 * MEMF(0x649F04); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F00); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173120: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    esp = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017313D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x16;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x36;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017314E: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x48;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0017315D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173162: ;
    xmm0 = xmm0 * MEMF(0x649EFC); /* mulss */
    xmm0 = xmm0 - MEMF(0x649EF8); /* subss */
    SET_LO8(edx, MEM8(ebp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    eax = esp + 0x3C;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = 0x3C;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM32(esp + 0x54) = 0xA;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_001731A0: ;
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_001731B8; /* je: equal / zero */

loc_001731A7: ;
    edi = MEM32(eax + 0x144);
    ecx = 0xF;
    esi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001731B8: ;
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x78) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001730A7; /* ja: above (unsigned >) */

loc_001731D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001731DC: ;
    POP32(esp, ebp);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_001731F0
 * Original: 0x001731F0 - 0x00173230 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001731F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001731F0: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0x58), 1)) goto loc_0017322F; /* je: equal / zero */

loc_001731FA: ;
    eax = MEM32(eax + 0x4C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, 0x43FA0000);
    esp = esp - 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0); sub_00376550(); /* call 0x00376550 */

loc_0017322C: ;
    esp = esp + 0xC;

loc_0017322F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173230
 * Original: 0x00173230 - 0x0017326C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00173230: ;
    PUSH32(esp, ebx);
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(ebx, 0x2E);

loc_00173235: ;
    eax = ZX8(LO8(ecx));
    eax = MEM32(eax * 4 + 0x6B3F84);
    eax = MEM32(eax * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_00173261; /* je: equal / zero */

loc_0017324A: ;
    /* nop */

loc_00173250: ;
    if (CMP_NE(MEM8(eax + 0x3B), LO8(ebx))) goto loc_0017325A; /* jne: not equal / not zero */

loc_00173255: ;
    if (CMP_EQ(MEM32(eax + 0x4C), edx)) goto loc_0017326A; /* je: equal / zero */

loc_0017325A: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00173250; /* jne: not equal / not zero */

loc_00173261: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_B(LO8(ecx), 2)) goto loc_00173235; /* jb: below (unsigned <) */

loc_00173268: ;
    eax = 0; /* xor self */

loc_0017326A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00173270
 * Original: 0x00173270 - 0x001732A3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00173270: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x36)) goto loc_001732A2; /* jne: not equal / not zero */

loc_00173277: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax));
    eax--;
    if ((eax == 0)) goto loc_00173295; /* je: equal / zero */

loc_00173281: ;
    eax--;
    if ((eax == 0)) goto loc_00173295; /* je: equal / zero */

loc_00173284: ;
    eax--;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);
    if ((eax == 0)) goto loc_0017329C; /* je: equal / zero */

loc_0017328E: ;
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x64) = ecx;
    esp += 4; return; /* ret */

loc_00173295: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);

loc_0017329C: ;
    ecx = ecx | 2;
    MEM32(eax + 0x64) = ecx;

loc_001732A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001732B0
 * Original: 0x001732B0 - 0x001732EC (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001732B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001732B0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x36)) goto loc_001732EB; /* jne: not equal / not zero */

loc_001732B7: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax));
    eax--;
    if ((eax == 0)) goto loc_001732DE; /* je: equal / zero */

loc_001732C1: ;
    eax--;
    if ((eax == 0)) goto loc_001732D5; /* je: equal / zero */

loc_001732C4: ;
    eax--;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);
    if ((eax != 0)) goto loc_001732E5; /* jne: not equal / not zero */

loc_001732CE: ;
    ecx = ecx | 2;
    MEM32(eax + 0x64) = ecx;
    esp += 4; return; /* ret */

loc_001732D5: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 2;
    esp += 4; return; /* ret */

loc_001732DE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);

loc_001732E5: ;
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x64) = ecx;

loc_001732EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001732F0
 * Original: 0x001732F0 - 0x00173323 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001732F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001732F0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x36)) goto loc_00173322; /* jne: not equal / not zero */

loc_001732F7: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax));
    eax--;
    if ((eax == 0)) goto loc_00173315; /* je: equal / zero */

loc_00173301: ;
    eax--;
    if ((eax == 0)) goto loc_00173315; /* je: equal / zero */

loc_00173304: ;
    eax--;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);
    if ((eax != 0)) goto loc_0017331C; /* jne: not equal / not zero */

loc_0017330E: ;
    ecx = ecx | 2;
    MEM32(eax + 0x64) = ecx;
    esp += 4; return; /* ret */

loc_00173315: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);

loc_0017331C: ;
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x64) = ecx;

loc_00173322: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173330
 * Original: 0x00173330 - 0x00173348 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00173330: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) goto loc_00173347; /* jne: not equal / not zero */

loc_00173338: ;
    eax = MEM32(0x7FA20C);
    eax = eax << 6;
    MEM16(0x774C94) = MEM16(0x774C94) + LO16(eax);

loc_00173347: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173350
 * Original: 0x00173350 - 0x00173439 (233 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00173350: ;
    eax = 0; /* xor self */
    MEM32(0x771740) = eax;
    MEM32(0x771744) = eax;
    MEM32(0x771748) = eax;
    MEM32(0x77174C) = eax;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(0x771750) = eax;
    MEM32(0x771834) = ebx;
    MEM8(0x771758) = 0xFF;
    MEM32(0x771754) = eax;
    MEM8(0x774C98) = 0xFF;
    MEM8(0x774C97) = LO8(ebx);
    MEM8(0x774C96) = LO8(ebx);
    MEM32(0x771264) = ebx;
    MEM32(0x771260) = ebx;
    MEM32(0x77127C) = ebx;
    MEM8(0x849420) = LO8(ebx);
    MEM8(0x849413) = LO8(ebx);
    MEM32(0x8493F8) = ebx;
    PUSH32(esp, 0); sub_00144E40(); /* call 0x00144E40 */

loc_001733BC: ;
    MEM8(0x774A70) = LO8(eax);
    PUSH32(esp, 0); sub_000A7540(); /* call 0x000A7540 */

loc_001733C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0010A440(); /* call 0x0010A440 */

loc_001733CC: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_00088000(); /* call 0x00088000 */

loc_001733D4: ;
    MEM32(0x774FBC) = ebx;
    MEM32(0x774FC0) = ebx;
    MEM32(0x774FB4) = ebx;
    MEM32(0x774FB8) = ebx;
    MEM32(0x774FB0) = 0xFFFFFFFEu;
    PUSH32(esp, 0); sub_001BD090(); /* call 0x001BD090 */

loc_001733FB: ;
    PUSH32(esp, 0); sub_0010F290(); /* call 0x0010F290 */

loc_00173400: ;
    PUSH32(esp, 0); sub_00173440(); /* call 0x00173440 */

loc_00173405: ;
    ecx = MEM32(0x8471A4);
    SET_LO8(eax, MEM8(ecx + 5));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0017341C; /* je: equal / zero */

loc_00173412: ;
    edx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B7640), _icall_esp); /* indirect call */
    }

loc_0017341C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001E73B0(); /* call 0x001E73B0 */

loc_00173422: ;
    esp = esp + 4;
    MEM32(0x8493E0) = ebx;
    MEM8(0x774A6A) = LO8(ebx);
    MEM8(0x774A69) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00173440
 * Original: 0x00173440 - 0x001734FD (189 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173440(void)
{

loc_00173440: ;
    PUSH32(esp, 0); sub_00181CA0(); /* call 0x00181CA0 */

loc_00173445: ;
    PUSH32(esp, 0); sub_000FB630(); /* call 0x000FB630 */

loc_0017344A: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(0x774C14) = ecx;
    MEM32(0x771450) = eax;
    edx = 0; /* xor self */
    MEM32(0x774C18) = ecx;
    MEM32(0x771454) = eax;
    MEM32(0x774C24) = edx;
    MEM32(0x774C1C) = ecx;
    MEM32(0x771458) = eax;
    MEM32(0x77145C) = eax;
    MEM32(0x774C28) = edx;
    MEM16(0x774C20) = LO16(ecx);
    MEM32(0x774C2C) = edx;
    MEM32(0x774C8C) = ecx;
    MEM32(0x771460) = eax;
    MEM8(0x774C32) = LO8(eax);
    MEM8(0x774C33) = LO8(eax);
    MEM16(0x774C30) = LO16(edx);
    MEM8(0x774B20) = LO8(eax);
    MEM32(0x8493F4) = eax;
    MEM32(0x774B4C) = eax;
    MEM32(0x774B50) = eax;
    MEM32(0x774B54) = eax;
    MEM32(0x774B58) = eax;
    MEM32(0x8493E4) = eax;
    MEM8(0x774C90) = LO8(ecx);
    MEM8(0x774C36) = LO8(eax);
    MEM8(0x774C35) = LO8(eax);
    MEM8(0x774C34) = LO8(eax);
    MEM8(0x849410) = LO8(eax);
    MEM32(0x774C80) = eax;
    MEM32(0x774C84) = eax;
    MEM32(0x774C88) = eax;
    MEM8(0x849411) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00173500
 * Original: 0x00173500 - 0x001735C7 (199 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00173500: ;
    eax = MEM32(0x84A144);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    SET_LO8(edx, 1);
    SET_LO8(ecx, 2);
    if (CMP_A(eax, 3)) goto loc_0017355C; /* ja: above (unsigned >) */

loc_00173526: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1735D8); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0017352Du) goto loc_0017352D;
    if (_jt == 0x0017353Eu) goto loc_0017353E;
    if (_jt == 0x0017354Eu) goto loc_0017354E;
    if (_jt == 0x00173579u) goto loc_00173579;
    if (_jt == 0x00173588u) goto loc_00173588;
    if (_jt == 0x00173597u) goto loc_00173597;
    if (_jt == 0x001735AFu) goto loc_001735AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0017352D: ;
    MEM8(0x773774) = 0;
    MEMF(0x773770) = xmm2; /* movss */
    goto loc_0017355C;

loc_0017353E: ;
    MEM8(0x773774) = LO8(edx);
    MEMF(0x773770) = xmm0; /* movss */
    goto loc_0017355C;

loc_0017354E: ;
    MEM8(0x773774) = LO8(ecx);
    MEMF(0x773770) = xmm1; /* movss */

loc_0017355C: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 0xE)) { sub_001735C7(); return; } /* ja: above (unsigned >) */

loc_0017356B: ;
    eax = ZX8(MEM8(eax + 0x1735F8));
    { uint32_t _jt = MEM32(eax * 4 + 0x1735E8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00173579u) goto loc_00173579;
    if (_jt == 0x00173588u) goto loc_00173588;
    if (_jt == 0x00173597u) goto loc_00173597;
    if (_jt == 0x001735AFu) goto loc_001735AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00173579: ;
    MEM8(0x77376C) = LO8(edx);
    MEMF(0x773768) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00173588: ;
    MEM8(0x77376C) = LO8(ecx);
    MEMF(0x773768) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_00173597: ;
    xmm0 = MEMF(0x648D38); /* movss */
    MEM8(0x77376C) = 3;
    MEMF(0x773768) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_001735AF: ;
    xmm0 = MEMF(0x648D44); /* movss */
    MEM8(0x77376C) = 4;
    MEMF(0x773768) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00173610
 * Original: 0x00173610 - 0x00173D7B (1899 bytes, 428 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00173610: ;
    eax = MEM32(0x7FA1F8);
    xmm2 = MEMF(0x648D1C); /* movss */
    esp = esp - 0x118;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    if (CMP_EQ(eax, 2)) goto loc_0017368B; /* je: equal / zero */

loc_00173635: ;
    if (CMP_EQ(eax, 0x41)) goto loc_0017368B; /* je: equal / zero */

loc_0017363A: ;
    eax = MEM32(0x84A144);
    xmm0 = MEMF(0x648CE4); /* movss */
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00173650; /* je: equal / zero */

loc_0017364D: ;
    xmm0 = xmm2; /* movaps */

loc_00173650: ;
    xmm1 = (float)(int32_t)MEM32(0x774A4C); /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_00173680; /* jae: above or equal (unsigned >=) */

loc_00173669: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm1; /* mulss */
    edx = (int32_t)xmm3; /* cvttss2si */
    if (CMP_NE(edx, ebx)) goto loc_00173695; /* jne: not equal / not zero */

loc_00173680: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

loc_0017368B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ebx = 0; /* xor self */

loc_00173695: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x35;
    edi = esp + 0x2C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp);
    MEM8(esp + 0xA0) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    MEM32(esp + 0x98) = eax;
    SET_LO8(eax, MEM8(ebp + 0x60));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEM32(esp + 0xCC) = 0xCF570;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x9C) = ecx;
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEMF(esp + 0x88) = xmm5; /* movss */
    MEM32(esp + 0xA4) = ebx;
    MEM8(esp + 0xA8) = 0xFF;
    MEM32(esp + 0xAC) = 0x13EF80;
    MEM32(esp + 0xB0) = 0x173D90;
    MEM32(esp + 0xB4) = 0x173E30;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = 0x174260;
    MEM32(esp + 0xC4) = 0x173DC0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00173780; /* jne: not equal / not zero */

loc_00173775: ;
    MEM32(esp + 0xC4) = 0x13E6E0;

loc_00173780: ;
    SET_LO8(ecx, MEM8(ebp + 0x59));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM8(esp + 0x20) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x5C));
    MEM16(esp + 0x22) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x62));
    MEM32(esp + 0xC8) = 0x13E8F0;
    MEM8(esp + 0xD0) = 0;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10;
    eax = eax | 0x1021E9;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 0x94) = eax;
    SET_LO8(eax, MEM8(ebp + 0x58));
    MEM8(esp + 0x14) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x5A));
    MEM8(esp + 0x21) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x5E));
    MEM32(esp + 0xD4) = ebx;
    MEM8(esp + 0xD8) = 0;
    MEM16(esp + 0xDA) = 0x20;
    MEM16(esp + 0xDC) = 7;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEM16(esp + 0x24) = LO16(eax);
    MEM16(esp + 0x26) = LO16(ecx);
    if (CMP_EQ(edx, ebx)) goto loc_00173D6F; /* je: equal / zero */

loc_00173807: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = edx;
    goto loc_00173811;

loc_0017380E: ;
    xmm5 = 0.0f; /* xorps self = zero */

loc_00173811: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00173816: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(ebp + 0x1C));
    ebx = edx;
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017382A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x22);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x20));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00173850; /* je: equal / zero */

loc_00173844: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_00173855;

loc_00173850: ;
    eax = eax & 0x3F;
    esi = eax;

loc_00173855: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0017386C; /* je: equal / zero */

loc_00173859: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0017386C; /* je: equal / zero */

loc_0017385E: ;
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00173875;

loc_0017386C: ;
    xmm7 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00173875: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0017388B; /* je: equal / zero */

loc_0017387F: ;
    ebx = ebx & 0x3F;
    eax = 0x40;
    eax = eax - ebx;
    goto loc_00173890;

loc_0017388B: ;
    ebx = ebx & 0x3F;
    eax = ebx;

loc_00173890: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001738A7; /* je: equal / zero */

loc_00173894: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001738A7; /* je: equal / zero */

loc_00173899: ;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_001738B0;

loc_001738A7: ;
    xmm6 = MEMF(eax * 4 + 0x743090); /* movss */

loc_001738B0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001738CB; /* je: equal / zero */

loc_001738BF: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_001738D0;

loc_001738CB: ;
    eax = eax & 0x3F;
    esi = eax;

loc_001738D0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001738E7; /* je: equal / zero */

loc_001738D4: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001738E7; /* je: equal / zero */

loc_001738D9: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_001738F0;

loc_001738E7: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_001738F0: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(edx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(edx), 0x40)) goto loc_0017390C; /* je: equal / zero */

loc_00173900: ;
    edx = edx & 0x3F;
    eax = 0x40;
    eax = eax - edx;
    goto loc_00173911;

loc_0017390C: ;
    edx = edx & 0x3F;
    eax = edx;

loc_00173911: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00173923; /* je: equal / zero */

loc_00173915: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm5 = xmm5 - MEMF(eax * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_0017392C; /* jne: not equal / not zero */

loc_00173923: ;
    xmm5 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0017392C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173931: ;
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    eax = ZX8(MEM8(esp + 0x130));
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 8); /* addss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0xC); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x10); /* addss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    if (CMP_A(eax, 4)) goto loc_00173B06; /* ja: above (unsigned >) */

loc_00173984: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x173D7C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0017398Bu) goto loc_0017398B;
    if (_jt == 0x001739D4u) goto loc_001739D4;
    if (_jt == 0x00173A1Fu) goto loc_00173A1F;
    if (_jt == 0x00173A41u) goto loc_00173A41;
    if (_jt == 0x00173A88u) goto loc_00173A88;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0017398B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173990: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0x28); /* mulss */
    xmm5 = xmm5 + MEMF(ebp + 0x24); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001739A2: ;
    xmm0 = xmm0 * MEMF(ebp + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x2C); /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm5 = xmm5 * xmm6; /* mulss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm5; /* movss */
    goto loc_00173B06;

loc_001739D4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001739D9: ;
    xmm0 = xmm0 * MEMF(ebp + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x24); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 * xmm6; /* mulss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    goto loc_00173B06;

loc_00173A1F: ;
    edx = ebp + 0x34;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x84) = edx;
    goto loc_00173B06;

loc_00173A41: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173A46: ;
    xmm0 = xmm0 * MEMF(ebp + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x24); /* addss */
    xmm1 = MEMF(ebp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    goto loc_00173B06;

loc_00173A88: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173A8D: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0x28); /* mulss */
    xmm5 = xmm5 + MEMF(ebp + 0x24); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173A9F: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(ebp + 0x28); /* mulss */
    xmm6 = xmm6 + MEMF(ebp + 0x24); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00173AB1: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00173ABD; /* je: equal / zero */

loc_00173AB5: ;
    MEMF(esp + 0x7C) = xmm5; /* movss */
    goto loc_00173ACA;

loc_00173ABD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0x7C) = xmm0; /* movss */

loc_00173ACA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173ACF: ;
    xmm0 = xmm0 * MEMF(ebp + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x2C); /* addss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00173AE7: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00173AF6; /* je: equal / zero */

loc_00173AEB: ;
    MEMF(esp + 0x84) = xmm6; /* movss */
    goto loc_00173B06;

loc_00173AF6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x84) = xmm0; /* movss */

loc_00173B06: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173B0B: ;
    xmm0 = xmm0 * MEMF(ebp + 0x44); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x40); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173B2C: ;
    xmm0 = xmm0 * MEMF(ebp + 0x4C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x48); /* addss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173B44: ;
    xmm0 = xmm0 * MEMF(ebp + 0x54); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00173B5C: ;
    eax = MEM32(esp + 0x134);
    xmm0 = xmm0 * MEMF(ebp + 0x54); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00173BA2: ;
    ebx = eax;
    esp = esp + 0x20;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x2C) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_00173D64; /* je: equal / zero */

loc_00173BB3: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edi = ebx + 0x290;
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = eax;
    SET_LO8(eax, MEM8(ebp + 0x58));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00173D5D; /* je: equal / zero */

loc_00173BE8: ;
    xmm0 = MEMF(0x648EB0); /* movss */
    ecx = esp + 0x104;
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10C) = 0x1B9530;
    MEM32(esp + 0x110) = 0x1076D0;
    MEM32(esp + 0x114) = 0x108250;
    MEM32(esp + 0x118) = 0x108310;
    MEM32(esp + 0x11C) = 0xD0;
    MEM32(esp + 0x120) = 1;
    MEMF(esp + 0x124) = xmm0; /* movss */
    MEM32(esp + 0x128) = 0x19;
    MEM8(esp + 0x12C) = 1;
    PUSH32(esp, 0); sub_00106EC0(); /* call 0x00106EC0 */

loc_00173C5D: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(esi, eax)) goto loc_00173D58; /* je: equal / zero */

loc_00173C6C: ;
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esi + 0xAC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xA4) = 2;
    MEM32(esi + 0xA8) = ebx;
    MEMF(esi + 0xB0) = xmm0; /* movss */
    MEM32(esi + 0xB4) = eax;
    eax = MEM32(esi + 0x40);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    xmm1 = (float)(int32_t)MEM32(esi + 0x70); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x649418); /* mulss */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00173CC0; /* je: equal / zero */

loc_00173CB2: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) goto loc_00173CC0; /* je: equal / zero */

loc_00173CB7: ;
    SET_LO8(eax, MEM8(eax * 8 + 0x75B954));
    goto loc_00173CC2;

loc_00173CC0: ;
    SET_LO8(eax, 0); /* xor self */

loc_00173CC2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    edx = ZX8(LO8(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(0x648EB8); /* mulss */
    MEMF(esi + 0xC0) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esi + 0xB8) = xmm1; /* movss */
    xmm1 = MEMF(0x6490B0); /* movss */
    MEMF(esi + 0xBC) = xmm1; /* movss */
    MEMF(esi + 0xC4) = xmm0; /* movss */
    edi = MEM32(esi + 0x70);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x5F4864);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00173D29: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_00173D4A; /* je: equal / zero */

loc_00173D32: ;
    ecx = edi;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ebx = MEM32(esp + 0x2C);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_00173D4A: ;
    MEM32(esi + 0xC8) = edx;
    MEM32(ebx + 0x298) = esi;
    goto loc_00173D64;

loc_00173D58: ;
    MEM32(edi + 8) = eax;
    goto loc_00173D64;

loc_00173D5D: ;
    MEM32(edi + 8) = 0;

loc_00173D64: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_0017380E; /* jne: not equal / not zero */

loc_00173D6E: ;
    POP32(esp, esi);

loc_00173D6F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_00173DC0
 * Original: 0x00173DC0 - 0x00173E21 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173DC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00173DC0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x2A2);
    edx = MEM32(eax + 0x98);
    esp = esp - 8;
    if (CMP_GE(edx, ecx)) goto loc_00173E18; /* jge: greater or equal (signed >=) */

loc_00173DD8: ;
    eax = eax + 0x54;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_00173E18: ;
    eax = 1;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00173E30
 * Original: 0x00173E30 - 0x00174058 (552 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173E30(void)
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

loc_00173E30: ;
    esp = esp - 0x6C;
    eax = MEM32(esp + 0x70);
    PUSH32(esp, esi);
    esi = eax + 0x78;
    MEM32(esp + 0x74) = esi;
    edx = MEM32(esp + 0x74);
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
    xmm0 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 4))) goto loc_00173F1A; /* jbe: below or equal (unsigned <=) */

loc_00173E7F: ;
    ecx = MEM32(eax + 0x298);
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_00173E97; /* je: equal / zero */

loc_00173E8B: ;
    MEM32(ecx + 0xA8) = edx;
    MEM32(eax + 0x298) = edx;

loc_00173E97: ;
    ecx = MEM32(eax + 0x94);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx & 0xFFFFFF90u;
    MEMF(esi) = xmm0; /* movss */
    esi = MEM32(eax + 0x98);
    MEM32(eax + 0x94) = ecx;
    ecx = 0x20;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    if (CMP_LE(esi, ecx)) goto loc_00173ECF; /* jle: less or equal (signed <=) */

loc_00173EC9: ;
    MEM32(eax + 0x98) = ecx;

loc_00173ECF: ;
    if (CMP_EQ(MEM8(eax + 0x29C), LO8(edx))) goto loc_0017404E; /* je: equal / zero */

loc_00173EDB: ;
    (void)0; /* cmp MEM8(eax + 0x29D), LO8(edx) - flags set for next jcc */
    MEM8(esp + 0x74) = LO8(edx);
    if (CMP_EQ(MEM8(eax + 0x29D), LO8(edx))) goto loc_00173EEC; /* je: equal / zero */

loc_00173EE7: ;
    MEM8(esp + 0x74) = 1;

loc_00173EEC: ;
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00173EFE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    eax = eax + 2;
    PUSH32(esp, 0); sub_001040E0(); /* call 0x001040E0 */

loc_00173F10: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

loc_00173F1A: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x41)) goto loc_0017404E; /* je: equal / zero */

loc_00173F28: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    xmm0 = MEMF(esp + 0x78); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648E98); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if (CMP_NE(eax, 2)) goto loc_00173F82; /* jne: not equal / not zero */

loc_00173F70: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    MEM32(esp + 0x40) = 5;
    goto loc_00173F92;

loc_00173F82: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    MEM32(esp + 0x40) = 0xA;

loc_00173F92: ;
    xmm1 = MEMF(0x648D34); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    edx = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xC;
    esi = esp + 0x30;
    MEM32(esp + 0x50) = 0x105;
    MEM8(esp + 0x64) = LO8(edx);
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_0017404B: ;
    esp = esp + 4;

loc_0017404E: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00174060
 * Original: 0x00174060 - 0x001741B4 (340 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174060(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00174060: ;
    esp = esp - 0x24;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    xmm5 = MEMF(esi + 0x60); /* movss */
    xmm5 = xmm5 * MEMF(0x648F94); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017409D: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x7FA248); /* movss */
    xmm0 = xmm0 * MEMF(0x64A3E0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649428); /* addss */
    xmm6 = MEMF(0x648D2C); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm4 = xmm4 * xmm0; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x44); /* mulss */
    PUSH32(esp, 0xFFFFFFFFu);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = xmm1; /* movaps */
    PUSH32(esp, 0);
    xmm3 = xmm3 - xmm2; /* subss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    PUSH32(esp, 0xF);
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174132: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174143: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0xF;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174154: ;
    xmm0 = xmm0 * MEMF(0x5A0060); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EBC); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174173: ;
    xmm0 = xmm0 * MEMF(0x64A3DC); /* mulss */
    xmm0 = xmm0 - MEMF(0x648F8C); /* subss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = 0x14;
    ecx = esp + 0x34;
    edx = esp + 0x40;
    PUSH32(esp, 0); sub_00102920(); /* call 0x00102920 */

loc_001741AC: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001741C0
 * Original: 0x001741C0 - 0x00174217 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001741C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001741C0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x54));
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x6C))) goto loc_001741D6; /* jge: greater or equal (signed >=) */

loc_001741CE: ;
    SET_LO8(eax, MEM8(ecx + 0x6E));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_001741D6: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x70))) goto loc_001741F0; /* jge: greater or equal (signed >=) */

loc_001741DC: ;
    SET_LO16(eax, MEM16(ecx + 0x72));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(0x7FA20C)));
    MEM16(ecx + 0x50) = MEM16(ecx + 0x50) + LO16(eax);
    MEM16(ecx + 0x52) = MEM16(ecx + 0x52) + LO16(eax);

loc_001741F0: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x68))) goto loc_00174216; /* jge: greater or equal (signed >=) */

loc_001741F6: ;
    MEM16(ecx + 0x60) = MEM16(ecx + 0x60) | 0x201;
    MEM8(ecx + 0x4B) = 0x15;
    SET_LO8(eax, MEM8(ecx + 0x6A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5E) = LO8(eax);
    MEM8(ecx + 0x5D) = LO8(eax);
    MEM8(ecx + 0x5C) = LO8(eax);
    MEM32(ecx + 0x30) = 0;

loc_00174216: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00174220
 * Original: 0x00174220 - 0x00174260 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00174220: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x54));
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x6C))) goto loc_00174236; /* jge: greater or equal (signed >=) */

loc_0017422E: ;
    SET_LO8(eax, MEM8(ecx + 0x6E));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_00174236: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x70))) goto loc_00174250; /* jge: greater or equal (signed >=) */

loc_0017423C: ;
    SET_LO16(eax, MEM16(ecx + 0x72));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(0x7FA20C)));
    MEM16(ecx + 0x50) = MEM16(ecx + 0x50) + LO16(eax);
    MEM16(ecx + 0x52) = MEM16(ecx + 0x52) + LO16(eax);

loc_00174250: ;
    SET_LO8(eax, MEM8(ecx + 0x6A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5E) = LO8(eax);
    MEM8(ecx + 0x5D) = LO8(eax);
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00174280
 * Original: 0x00174280 - 0x001742FB (123 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00174280: ;
    if (TEST_Z(edx, edx)) goto loc_001742FA; /* je: equal / zero */

loc_00174284: ;
    eax = MEM32(edx + 0x68);
    if (CMP_A(eax, 0x111)) goto loc_001742A1; /* ja: above (unsigned >) */

loc_0017428E: ;
    if (CMP_EQ(eax, 0x111)) goto loc_001742A8; /* je: equal / zero */

loc_00174290: ;
    if (CMP_BE(eax, 4)) goto loc_001742A8; /* jbe: below or equal (unsigned <=) */

loc_00174295: ;
    if (CMP_NE(eax, 0x53)) goto loc_001742FA; /* jne: not equal / not zero */

loc_0017429A: ;
    ecx = 1;
    goto loc_001742AA;

loc_001742A1: ;
    if (CMP_NE(eax, 0x114)) goto loc_001742FA; /* jne: not equal / not zero */

loc_001742A8: ;
    ecx = 0; /* xor self */

loc_001742AA: ;
    eax = MEM32(edx + 0x298);
    eax = eax & 0x1F;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001742E3; /* je: equal / zero */

loc_001742B8: ;
    eax = eax - 9;
    if ((eax == 0)) goto loc_001742DC; /* je: equal / zero */

loc_001742BD: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001742C9; /* je: equal / zero */

loc_001742C2: ;
    eax = 1;
    goto loc_001742E8;

loc_001742C9: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, 0x14 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(esi, 0x14)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    eax++;
    goto loc_001742E8;

loc_001742DC: ;
    eax = 4;
    goto loc_001742E8;

loc_001742E3: ;
    eax = 3;

loc_001742E8: ;
    ecx = MEM32(ecx * 4 + 0x6B7704);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_001742FA; /* je: equal / zero */

loc_001742F6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001742F9: ;
    POP32(esp, ecx);

loc_001742FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00174300
 * Original: 0x00174300 - 0x0017449E (414 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174300(void)
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

loc_00174300: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    esi = ecx;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00174496; /* jne: not equal / not zero */

loc_0017431E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174323: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    eax = MEM32(0x84A5F8);
    ecx = esi + eax;
    if (CMP_NE(MEM8(ecx + 0x1B5), LO8(ebx))) goto loc_00174496; /* jne: not equal / not zero */

loc_0017433D: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00174496; /* jp: parity */

loc_00174356: ;
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    esi = MEM32(esp + 0x54);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = MEMF(ecx + 0x7C); /* movss */
    xmm2 = xmm2 + MEMF(0x648D1C); /* addss */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [ecx + 0x78] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [ecx + 0x80] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(esi, ebx)) goto loc_001743C0; /* je: equal / zero */

loc_0017439A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017439F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001743B1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    goto loc_001743CC;

loc_001743C0: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */

loc_001743CC: ;
    esi = MEM32(esp + 0x5C);
    if (CMP_EQ(esi, ebx)) goto loc_001743DE; /* je: equal / zero */

loc_001743D4: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001743D9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebp = ebp + edx;

loc_001743DE: ;
    ecx = MEM32(esp + 0x60);
    eax = (int32_t)xmm2; /* cvttss2si */
    MEM16(esp + 0x2A) = LO16(eax);
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x44) = LO8(eax);
    MEM8(esp + 0x45) = LO8(eax);
    MEM8(esp + 0x46) = LO8(eax);
    MEM8(esp + 0x47) = LO8(eax);
    eax = MEM32(esp + 0x68);
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    MEM16(esp + 0x2C) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x68));
    MEM32(esp + 0x24) = ecx;
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 8);
    eax = 0x68;
    MEM32(esp + 0x20) = 0x58DBB4;
    MEM32(esp + 0x24) = ebp;
    MEM16(esp + 0x2C) = LO16(ebx);
    MEM16(esp + 0x2E) = 0x100;
    MEM16(esp + 0x34) = LO16(ecx);
    MEM16(esp + 0x36) = LO16(ebx);
    MEM16(esp + 0x38) = LO16(ebx);
    MEM16(esp + 0x3A) = LO16(ebx);
    MEM8(esp + 0x3F) = 5;
    MEM16(esp + 0x40) = LO16(edx);
    MEM16(esp + 0x42) = LO16(ebx);
    MEM16(esp + 0x44) = LO16(edi);
    MEM16(esp + 0x46) = LO16(edi);
    MEM16(esp + 0x48) = 0x200;
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x4B) = LO8(ebx);
    MEM16(esp + 0x54) = LO16(ebx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017447D: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00174496; /* je: equal / zero */

loc_00174484: ;
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x64) = 0xFF;

loc_00174496: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001744A0
 * Original: 0x001744A0 - 0x001744C9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001744A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001744A0: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x5B));
    if (CMP_LE(eax, 0xC8)) goto loc_001744B4; /* jle: less or equal (signed <=) */

loc_001744AF: ;
    eax = 0xC8;

loc_001744B4: ;
    edx = MEM32(ecx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x7FA20C));
    eax = eax - edx;
    if (((int32_t)eax >= 0)) { sub_001744C9(); return; } /* jns: not sign (positive) */

loc_001744C2: ;
    MEM16(ecx + 0x54) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00174500
 * Original: 0x00174500 - 0x00174586 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174500(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00174500: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_00174581; /* je: equal / zero */

loc_0017450C: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00174530: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00174581; /* je: equal / zero */

loc_00174537: ;
    xmm0 = MEMF(0x648E38); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x15;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x11;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00174581: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00174590
 * Original: 0x00174590 - 0x001748FF (879 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_00174590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001745A7: ;
    xmm0 = xmm0 * MEMF(0x64A3D8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A3D4); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x54); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001748F8; /* jbe: below or equal (unsigned <=) */

loc_001745E2: ;
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_001748DF; /* je: equal / zero */

loc_001745F3: ;
    xmm0 = MEMF(0x649C4C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x100;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    PUSH32(esp, 0x5E7494);
    MEM32(esp + 0x58) = 0x303;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00174632: ;
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0017464C: ;
    xmm0 = MEMF(0x649C4C); /* movss */
    esi = MEM32(edi + 0x4C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    PUSH32(esp, 0x5E7494);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00174686: ;
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001746A0: ;
    xmm0 = MEMF(0x64A3D0); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3CC); /* movss */
    esp = esp + 0x28;
    MEM32(esp + 0x54) = 0x29;
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEM8(esp + 0x34) = 0xB0;
    MEM8(esp + 0x35) = 0xA0;
    MEM8(esp + 0x36) = 0x2A;
    MEMF(esp + 0x90) = xmm5; /* movss */
    MEM32(esp + 0x94) = 0xE05;
    MEM8(esp + 0x9C) = 0xA;
    MEM8(esp + 0x9D) = 0xFF;
    MEM16(esp + 0x58) = 0x1E;
    MEM16(esp + 0x5A) = 8;
    MEM16(esp + 0x5C) = 0x32;
    MEMF(esp + 0x20) = xmm0; /* movss */
    goto loc_00174726;

loc_00174723: ;
    xmm5 = 0.0f; /* xorps self = zero */

loc_00174726: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017472B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174740: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x37) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174754: ;
    xmm0 = xmm0 * MEMF(0x64A0DC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A080); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174775: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    esi = esp + 0xA8;
    if (TEST_NZ(LO8(eax), 1)) goto loc_00174787; /* jne: not equal / not zero */

loc_00174780: ;
    esi = esp + 0xB4;

loc_00174787: ;
    edx = MEM32(edi + 0x4C);
    SET_LO8(ebx, MEM8(edx + 0x175));
    SET_LO8(ebx, LO8(ebx) + 0x40);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174798: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(0x648F00); /* movss */
    SET_LO16(eax, ZX8(LO8(ebx)));
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ebx = edx + eax + -49;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_001747C0: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    esp = esp + 0xC;
    eax = esp + 0x8C;
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x74); /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174804: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x64A3C8); /* mulss */
    xmm2 = xmm2 + MEMF(0x64A3C4); /* addss */
    xmm2 = xmm2 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_00174825: ;
    edx = MEM32(esp + 0xA0);
    edx = edx & 0xFFFFFF3Fu;
    esp = esp + 0xC;
    MEMF(esp + 0x88) = xmm5; /* movss */
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017484A: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00174856; /* je: equal / zero */

loc_0017484E: ;
    MEM32(esp + 0x94) = MEM32(esp + 0x94) | 0x40;

loc_00174856: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017485B: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0017486A; /* je: equal / zero */

loc_0017485F: ;
    MEM32(esp + 0x94) = MEM32(esp + 0x94) | 0x80;

loc_0017486A: ;
    SET_LO8(edx, MEM8(edi + 4));
    eax = 2;
    MEM8(esp + 0x24) = LO8(edx);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x58) = 4;
    MEM32(esp + 0x60) = esi;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001748A8: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, esi)) goto loc_001748B9; /* je: equal / zero */

loc_001748AF: ;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x170) = edx;

loc_001748B9: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00174723; /* ja: above (unsigned >) */

loc_001748D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001748DF: ;
    xmm2 = MEMF(edi + 0x54); /* movss */

loc_001748E4: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_001748E4; /* ja: above (unsigned >) */

loc_001748F3: ;
    MEMF(edi + 0x54) = xmm2; /* movss */

loc_001748F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00174900
 * Original: 0x00174900 - 0x00174986 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174900(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00174900: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_00174981; /* je: equal / zero */

loc_0017490C: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00174930: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00174981; /* je: equal / zero */

loc_00174937: ;
    xmm0 = MEMF(0x64908C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x14;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x10;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00174981: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00174990
 * Original: 0x00174990 - 0x001749F2 (98 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174990(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00174990: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017499A: ;
    xmm0 = xmm0 * MEMF(0x64A68C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A688); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001749F0; /* jbe: below or equal (unsigned <=) */

loc_001749CD: ;
    esi = MEM32(esi + 0x4C);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_001749DC: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001749F0; /* je: equal / zero */

loc_001749E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00119F50(); /* call 0x00119F50 */

loc_001749ED: ;
    esp = esp + 0xC;

loc_001749F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00174A00
 * Original: 0x00174A00 - 0x00174A41 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174A00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00174A00: ;
    esp = esp - 0x10;
    if (TEST_Z(esi, esi)) goto loc_00174A3B; /* je: equal / zero */

loc_00174A07: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = SX16(LO16(ecx));
    PUSH32(esp, edx);
    MEM8(esp + 0xC) = LO8(eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00174A34: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00174A41(); return; } /* jne: not equal / not zero */

loc_00174A3B: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00174A90
 * Original: 0x00174A90 - 0x00174D96 (774 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_00174A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174AA4: ;
    xmm0 = xmm0 * MEMF(0x64A3C0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A3BC); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    ebx = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00174D8F; /* jbe: below or equal (unsigned <=) */

loc_00174ADE: ;
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00174D8F; /* je: equal / zero */

loc_00174AEF: ;
    xmm0 = MEMF(0x649E48); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x58) = 0x303;
    SET_LO16(edi, ZX8(MEM8(eax + 0x175)));
    eax = 0xA;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3B8); /* movss */
    MEM32(esp + 0x5C) = 0x29;
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEM8(esp + 0x3C) = 0xB0;
    MEM8(esp + 0x3D) = 0xA0;
    edi = edi + 0x40;
    MEM32(esp + 0x18) = edi;
    MEM8(esp + 0x3E) = 0x2A;
    MEMF(esp + 0x98) = xmm5; /* movss */
    MEM32(esp + 0x9C) = 0xE05;
    MEM8(esp + 0xA4) = LO8(eax);
    MEM8(esp + 0xA5) = 0xFF;
    MEM16(esp + 0x60) = 0x19;
    MEM16(esp + 0x62) = LO16(eax);
    MEM16(esp + 0x64) = 0x23;
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_00174B90;

loc_00174B85: ;
    xmm5 = 0.0f; /* xorps self = zero */
    edi = MEM32(esp + 0x18);
    ebx = MEM32(ebp + 8);
    /* nop */

loc_00174B90: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174B95: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi - 0x82;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174BAA: ;
    xmm6 = MEMF(0x64908C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174BC9: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174BE6: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00174BFA; /* je: equal / zero */

loc_00174BEA: ;
    xmm5 = xmm5 - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    esi = esi + edi;
    goto loc_00174BFE;

loc_00174BFA: ;
    edi = edi - esi;
    esi = edi;

loc_00174BFE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174C03: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    MEM16(esp + 0x30) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174C18: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x3F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174C2C: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    edi = MEM32(ebx + 0x4C);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    edx = MEM32(edi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58D8;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00174C6D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00174C81; /* je: equal / zero */

loc_00174C74: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00174C81; /* je: equal / zero */

loc_00174C7C: ;
    edx = MEM32(eax + 8);
    goto loc_00174C83;

loc_00174C81: ;
    edx = 0; /* xor self */

loc_00174C83: ;
    PUSH32(esp, edi);
    eax = esp + 0xB4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_00174C90: ;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00174CA0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174CA5: ;
    xmm0 = xmm0 * MEMF(0x64A3B4); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    esp = esp + 0xC;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174CC2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x90;
    edx = edx - 0x19;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00174CDB: ;
    edx = MEM32(esp + 0xA8);
    edx = edx & 0xFFFFFF3Fu;
    esp = esp + 0xC;
    MEM32(esp + 0x9C) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174CF7: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00174D03; /* je: equal / zero */

loc_00174CFB: ;
    MEM32(esp + 0x9C) = MEM32(esp + 0x9C) | 0x40;

loc_00174D03: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174D08: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00174D17; /* je: equal / zero */

loc_00174D0C: ;
    MEM32(esp + 0x9C) = MEM32(esp + 0x9C) | 0x80;

loc_00174D17: ;
    esi = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(esi + 4));
    ecx = 2;
    MEM8(esp + 0x28) = LO8(edx);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    eax = 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00174D5F: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00174D70; /* je: equal / zero */

loc_00174D66: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x170) = ecx;

loc_00174D70: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00174B85; /* ja: above (unsigned >) */

loc_00174D8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00174DA0
 * Original: 0x00174DA0 - 0x00174DF7 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00174DA0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x2D)) goto loc_00174DD9; /* jne: not equal / not zero */

loc_00174DAE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00174DC9; /* jne: not equal / not zero */

loc_00174DBB: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x50) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00174DC9: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00174DF5; /* jne: not equal / not zero */

loc_00174DCE: ;
    MEM32(esi + 0x4C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x50) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00174DD9: ;
    if (TEST_NZ(eax, eax)) goto loc_00174DF5; /* jne: not equal / not zero */

loc_00174DDD: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x4C))) goto loc_00174DF0; /* je: equal / zero */

loc_00174DE8: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x50))) goto loc_00174DF5; /* jne: not equal / not zero */

loc_00174DF0: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00174DF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00174E00
 * Original: 0x00174E00 - 0x0017504C (588 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174E00: ;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    esi = 0xFF;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00174E1B: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648F8C); /* mulss */
    xmm1 = xmm1 + MEMF(0x649EC8); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174E33: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00174E43: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ebp;
    edx = edx + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001864C0(); /* call 0x001864C0 */

loc_00174E56: ;
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0x10;
    (void)0; /* cmp eax, 0x22 - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(eax, 0x22)) goto loc_00174F01; /* jne: not equal / not zero */

loc_00174E7D: ;
    if (CMP_NE(MEM8(0x76F0DC), 2)) { sub_0017504C(); return; } /* jne: not equal / not zero */

loc_00174E8A: ;
    if (CMP_GE(MEM32(0x76F0F8), 0x3E8)) { sub_0017504C(); return; } /* jge: greater or equal (signed >=) */

loc_00174E9A: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x24) = 0x64;
    MEM16(esp + 0x30) = 0x14;
    MEM16(esp + 0x32) = 0x1E;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001750C3(); return; /* tail jmp 0x001750C3 */

loc_00174F01: ;
    if (CMP_NE(eax, 0x41)) goto loc_00174FA1; /* jne: not equal / not zero */

loc_00174F0A: ;
    if (CMP_EQ(MEM8(0x76F0DC), 2)) { sub_0017504C(); return; } /* je: equal / zero */

loc_00174F17: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0x24) = 0x96;
    MEM16(esp + 0x14) = 0xFFAB;
    MEM16(esp + 0x16) = 0x46;
    MEM16(esp + 0x30) = 0x1E;
    MEM16(esp + 0x32) = 0x32;
    g_seh_ebp = ebp; sub_001750D1(); return; /* tail jmp 0x001750D1 */

loc_00174FA1: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3B0); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3AC); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64913C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3A8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    eax = 0x3C;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0x24) = 0xC;
    MEM16(esp + 0x26) = 7;
    ebx = 0; /* xor self */
    MEM16(esp + 0x14) = 0xFFC0;
    MEM16(esp + 0x16) = LO16(eax);
    MEM16(esp + 0x30) = 0x24;
    MEM16(esp + 0x32) = LO16(eax);
    MEM8(esp + 0x3C) = 0xC8;
    MEM8(esp + 0x3D) = 0x37;
    MEM8(esp + 0x50) = 1;
    g_seh_ebp = ebp; sub_001750E5(); return; /* tail jmp 0x001750E5 */

}

/**
 * sub_00175160
 * Original: 0x00175160 - 0x0017526A (266 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175160(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00175160: ;
    esp = esp - 0x2C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    esi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00175179; /* je: equal / zero */

loc_0017516F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00174E00(); /* call 0x00174E00 */

loc_00175176: ;
    esp = esp + 8;

loc_00175179: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x3C));
    MEM32(esp + 0xC) = ecx;
    SET_LO8(ecx, MEM8(0x76F518));
    MEM8(esp + 0x18) = LO8(eax);
    eax = MEM32(0x8470DC);
    MEM8(esp + 0x19) = LO8(ecx);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x44);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x8493BC);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x30) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001751CC; /* je: equal / zero */

loc_001751C7: ;
    eax = eax + 0x10C;

loc_001751CC: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_001751D6; /* je: equal / zero */

loc_001751D1: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_001751D6: ;
    edx = ZX8(MEM8(eax + 0xF));
    ecx = ZX8(MEM8(eax + 0xE));
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = ZX8(MEM8(eax + 0xD));
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    eax = 0x78;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017521B: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00175264; /* je: equal / zero */

loc_00175222: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xA;
    MEM8(eax + 0x39) = 0x5B;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xB;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00175264: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00175270
 * Original: 0x00175270 - 0x00175383 (275 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175270(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00175270: ;
    esp = esp - 0x30;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    esi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00175289; /* je: equal / zero */

loc_0017527F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00174E00(); /* call 0x00174E00 */

loc_00175286: ;
    esp = esp + 8;

loc_00175289: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esi + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x44));
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(0x76F518));
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x4C);
    MEM8(esp + 0x1C) = LO8(ecx);
    ecx = MEM32(0x8470DC);
    MEM8(esp + 0x1D) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(edx + 0x8C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x8493BC);
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001752E5; /* je: equal / zero */

loc_001752E0: ;
    eax = eax + 0x10C;

loc_001752E5: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_001752EF; /* je: equal / zero */

loc_001752EA: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_001752EF: ;
    ecx = ZX8(MEM8(eax + 0xF));
    edx = ZX8(MEM8(eax + 0xE));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    eax = ZX8(MEM8(eax + 0xD));
    MEM32(esp + 0x28) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x7C;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00175334: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0017537D; /* je: equal / zero */

loc_0017533B: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xB;
    MEM8(eax + 0x39) = 0x66;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edi = eax + 0x4C;
    ecx = 0xC;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0017537D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00175390
 * Original: 0x00175390 - 0x00175990 (1536 bytes, 323 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175390(void)
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

loc_00175390: ;
    eax = MEM32(0x84A144);
    esp = esp - 0xC8;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xD8);
    ebp = edi + 0x4C;
    if (TEST_NZ(eax, eax)) goto loc_00175531; /* jne: not equal / not zero */

loc_001753B0: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x78;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_001753BF: ;
    xmm1 = MEMF(0x648EC0); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001754DA; /* jbe: below or equal (unsigned <=) */

loc_001753D3: ;
    xmm1 = MEMF(0x64925C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001753FD; /* jbe: below or equal (unsigned <=) */

loc_001753E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x649294); /* movss */
    MEMF(0x771CE8) = xmm0; /* movss */
    MEMF(0x771CE4) = xmm1; /* movss */
    goto loc_0017545A;

loc_001753FD: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00175416; /* jbe: below or equal (unsigned <=) */

loc_00175411: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00175426;

loc_00175416: ;
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00175426; /* jbe: below or equal (unsigned <=) */

loc_00175423: ;
    xmm0 = xmm2; /* movaps */

loc_00175426: ;
    xmm0 = xmm0 * MEMF(0x6493C0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649294); /* addss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00175447; /* jp: parity */

loc_0017543F: ;
    xmm0 = MEMF(0x648D2C); /* movss */

loc_00175447: ;
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x771CE8) = xmm1; /* movss */

loc_0017545A: ;
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    eax = 0x32;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    PUSH32(esp, 0xFF);
    esi = esp + 0x24;
    MEM32(0x771CE0) = eax;
    MEM32(0x771CDC) = eax;
    MEM32(0x771CD8) = eax;
    MEM8(0x76F518) = 1;
    MEM16(esp + 0x24) = 0;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEM8(esp + 0x2C) = 0x7D;
    MEM8(esp + 0x2D) = 1;
    MEM8(esp + 0x2E) = 0;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C6580(); /* call 0x000C6580 */

loc_001754D5: ;
    esp = esp + 4;
    goto loc_00175531;

loc_001754DA: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000C69F0(); /* call 0x000C69F0 */

loc_001754E1: ;
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm1 = MEMF(ebp + 0x14); /* movss */
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 0x1C);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00175508; /* jp: parity */

loc_001754FD: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_00175508: ;
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    MEM32(0x771CE0) = esi;
    MEM32(0x771CDC) = edx;
    MEM32(0x771CD8) = ecx;
    MEM8(0x76F518) = 0;

loc_00175531: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175536: ;
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EAC); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    xmm7 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(ebp + 0xC) = xmm0; /* movss */
    if ((xmm0 <= xmm7)) goto loc_0017595D; /* jbe: below or equal (unsigned <=) */

loc_00175569: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x6490A0); /* movss */
    eax = 0x29;
    MEM32(esp + 0x84) = eax;
    MEM8(esp + 0xCC) = LO8(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0xCD) = LO8(eax);
    MEM8(esp + 0xCE) = LO8(eax);
    eax = 2;
    ecx = 0; /* xor self */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649EF4); /* movss */
    PUSH32(esp, ebx);
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x25) = 0;
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEM16(esp + 0x8C) = 0x1E;
    MEM16(esp + 0x8E) = 8;
    ebx = 0x80DE07;
    MEM8(esp + 0xD3) = 0;
    MEM16(esp + 0x90) = 0x78;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm6; /* movss */
    MEMF(esp + 0xB0) = xmm6; /* movss */
    MEMF(esp + 0xB4) = xmm6; /* movss */
    MEMF(esp + 0xB8) = xmm6; /* movss */
    MEMF(esp + 0xBC) = xmm6; /* movss */
    MEMF(esp + 0xC0) = xmm6; /* movss */
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = 4;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = ecx;
    goto loc_00175660;

loc_0017564E: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    /* nop */

loc_00175660: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175665: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x26) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175679: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x27) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017568D: ;
    xmm5 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001756A4: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001756B3: ;
    xmm0 = xmm0 * MEMF(0x649EF0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649EEC); /* addss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001756D1: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001756DD: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    ebx = ebx & 0xFFFFFF3Fu;
    ebx = ebx | esi;
    MEM32(esp + 0xC8) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001756F9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x97;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x6B) = LO8(edx);
    edx = ZX8(LO8(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017571A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x64;
    MEM16(esp + 0x5C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017572F: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 + MEMF(0x649EE8); /* addss */
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x30); /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x34); /* divss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648F38); /* mulss */
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = edx;
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x58)); /* sqrtss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    /* comiss xmm6, xmm5 - sets EFLAGS */
    if ((xmm6 <= xmm5)) goto loc_001757AB; /* jbe: below or equal (unsigned <=) */

loc_001757A6: ;
    xmm5 = xmm6; /* movaps */
    goto loc_001757B3;

loc_001757AB: ;
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 <= xmm7)) goto loc_001757B3; /* jbe: below or equal (unsigned <=) */

loc_001757B0: ;
    xmm5 = xmm7; /* movaps */

loc_001757B3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001757B8: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5 = xmm5 * MEMF(0x648EC0); /* mulss */
    xmm2 = MEMF(esp + 0xA0); /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0x303;
    MEM8(esp + 0x68) = 0x32;
    MEM8(esp + 0x69) = 0x32;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175836: ;
    MEMF(esp + 0x50) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0017584B: ;
    SET_LO8(ecx, 0x32);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    SET_LO8(eax, MEM8(ebp + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x6A) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001758B2; /* je: equal / zero */

loc_0017585A: ;
    MEM8(esp + 0x14) = 0x30;
    MEM8(esp + 0x15) = 0x30;
    MEM8(esp + 0x16) = 0x30;
    MEM8(esp + 0x17) = 0x9A;
    MEM8(esp + 0x18) = 0x69;
    MEM8(esp + 0x19) = 0xD2;
    MEM8(esp + 0x1A) = 0xD5;
    MEM8(esp + 0x1B) = 0x83;
    MEM8(esp + 0x1C) = 0x91;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017588C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(esp + eax + 0x14));
    SET_LO8(ecx, MEM8(esp + eax + 0x15));
    MEM8(esp + 0x68) = LO8(edx);
    SET_LO8(edx, MEM8(esp + eax + 0x16));
    MEM8(esp + 0x69) = LO8(ecx);
    MEM8(esp + 0x6A) = LO8(edx);

loc_001758B2: ;
    SET_LO8(eax, MEM8(edi + 4));
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_0017593D; /* jge: greater or equal (signed >=) */

loc_001758C5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6C);
    eax = 0x184;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001758D6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0017593D; /* je: equal / zero */

loc_001758DD: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x5C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(edx, MEM16(edx));
    ecx = MEM32(0x771CD0);
    edi = MEM32(esp + 0xDC);
    MEM16(eax + 0x2E) = LO16(edx);
    edx = MEM32(esp + 0x28);
    ecx++;
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;

loc_0017593D: ;
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0xC) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0017564E; /* ja: above (unsigned >) */

loc_0017595C: ;
    POP32(esp, ebx);

loc_0017595D: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp);
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(0x648EC0); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_00175990(); return; } /* jne: not equal / not zero */

loc_00175989: ;
    esi = 0x870ED8;
    g_seh_ebp = ebp; sub_001759BE(); return; /* tail jmp 0x001759BE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00175A50
 * Original: 0x00175A50 - 0x0017604B (1531 bytes, 323 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175A50(void)
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

loc_00175A50: ;
    eax = MEM32(0x84A144);
    esp = esp - 0xC8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xD4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_00175BF8; /* jne: not equal / not zero */

loc_00175A70: ;
    ecx = MEM32(0x84A5F8);
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00175A83: ;
    xmm1 = MEMF(0x648EC0); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00175BA1; /* jbe: below or equal (unsigned <=) */

loc_00175A97: ;
    xmm1 = MEMF(0x64925C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00175AC1; /* jbe: below or equal (unsigned <=) */

loc_00175AA4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x5A0060); /* movss */
    MEMF(0x771CE8) = xmm0; /* movss */
    MEMF(0x771CE4) = xmm1; /* movss */
    goto loc_00175B1E;

loc_00175AC1: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00175ADA; /* jbe: below or equal (unsigned <=) */

loc_00175AD5: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00175AEA;

loc_00175ADA: ;
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00175AEA; /* jbe: below or equal (unsigned <=) */

loc_00175AE7: ;
    xmm0 = xmm2; /* movaps */

loc_00175AEA: ;
    xmm0 = xmm0 * MEMF(0x6493C0); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00175B0B; /* jp: parity */

loc_00175B03: ;
    xmm0 = MEMF(0x648D2C); /* movss */

loc_00175B0B: ;
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x771CE8) = xmm1; /* movss */

loc_00175B1E: ;
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    eax = 0xC8;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    PUSH32(esp, 0xFF);
    esi = esp + 0x28;
    MEM32(0x771CE0) = eax;
    MEM32(0x771CDC) = eax;
    MEM32(0x771CD8) = 0xF;
    MEM8(0x76F518) = 1;
    MEM16(esp + 0x28) = LO16(edi);
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM8(esp + 0x30) = 0x7D;
    MEM8(esp + 0x31) = 1;
    MEM8(esp + 0x32) = 0;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C6580(); /* call 0x000C6580 */

loc_00175B9C: ;
    esp = esp + 4;
    goto loc_00175BF8;

loc_00175BA1: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000C69F0(); /* call 0x000C69F0 */

loc_00175BA8: ;
    xmm0 = MEMF(ebp + 0x68); /* movss */
    xmm1 = MEMF(ebp + 0x64); /* movss */
    ecx = MEM32(ebp + 0x74);
    edx = MEM32(ebp + 0x70);
    esi = MEM32(ebp + 0x6C);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00175BCF; /* jp: parity */

loc_00175BC4: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_00175BCF: ;
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    MEM32(0x771CE0) = esi;
    MEM32(0x771CDC) = edx;
    MEM32(0x771CD8) = ecx;
    MEM8(0x76F518) = 0;

loc_00175BF8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175BFD: ;
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EAC); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x5C); /* addss */
    xmm7 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= xmm7)) goto loc_00176016; /* jbe: below or equal (unsigned <=) */

loc_00175C30: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x6490A0); /* movss */
    eax = 0x29;
    MEM32(esp + 0x88) = eax;
    MEM8(esp + 0xD0) = LO8(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0xD1) = LO8(eax);
    MEM8(esp + 0xD2) = LO8(eax);
    ecx = 4;
    eax = 2;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x649EF4); /* movss */
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x25) = 0;
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEM16(esp + 0x8C) = 0x1E;
    MEM16(esp + 0x8E) = 8;
    ebx = 0x80DE07;
    MEM8(esp + 0xD3) = 0;
    MEM16(esp + 0x90) = 0x78;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm6; /* movss */
    MEMF(esp + 0xB0) = xmm6; /* movss */
    MEMF(esp + 0xB4) = xmm6; /* movss */
    MEMF(esp + 0xB8) = xmm6; /* movss */
    MEMF(esp + 0xBC) = xmm6; /* movss */
    MEMF(esp + 0xC0) = xmm6; /* movss */
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = edi;
    goto loc_00175D20;

loc_00175D13: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    edi = edi;

loc_00175D20: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175D25: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x26) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175D39: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x27) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175D4D: ;
    xmm5 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175D64: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175D73: ;
    xmm0 = xmm0 * MEMF(0x649EF0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649EEC); /* addss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175D91: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175D9D: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    ebx = ebx & 0xFFFFFF3Fu;
    ebx = ebx | esi;
    MEM32(esp + 0xC8) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175DB9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x97;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x32);
    MEM8(esp + 0x6B) = LO8(edx);
    edx = ZX8(LO8(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175DDA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x64;
    MEM16(esp + 0x5C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175DEF: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 + MEMF(0x649EE8); /* addss */
    eax = ebp + 0x50;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x30); /* movss */
    xmm0 = xmm0 / MEMF(ebp + 0x34); /* divss */
    MEM32(esp + 0xA0) = edx;
    edx = MEM32(eax + 8);
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648F38); /* mulss */
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = edx;
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x58)); /* sqrtss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    /* comiss xmm6, xmm5 - sets EFLAGS */
    if ((xmm6 <= xmm5)) goto loc_00175E6C; /* jbe: below or equal (unsigned <=) */

loc_00175E67: ;
    xmm5 = xmm6; /* movaps */
    goto loc_00175E74;

loc_00175E6C: ;
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 <= xmm7)) goto loc_00175E74; /* jbe: below or equal (unsigned <=) */

loc_00175E71: ;
    xmm5 = xmm7; /* movaps */

loc_00175E74: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175E79: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5 = xmm5 * MEMF(0x648EC0); /* mulss */
    xmm2 = MEMF(esp + 0xA0); /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0x303;
    MEM8(esp + 0x68) = 0xC8;
    MEM8(esp + 0x69) = 0xC8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00175EF7: ;
    MEMF(esp + 0x50) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00175F0C: ;
    SET_LO8(ecx, 0xF);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    SET_LO8(eax, MEM8(ebp + 0x60));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x6A) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00175F73; /* je: equal / zero */

loc_00175F1B: ;
    MEM8(esp + 0x14) = 0x30;
    MEM8(esp + 0x15) = 0x30;
    MEM8(esp + 0x16) = 0x30;
    MEM8(esp + 0x17) = 0x9A;
    MEM8(esp + 0x18) = 0x69;
    MEM8(esp + 0x19) = 0xD2;
    MEM8(esp + 0x1A) = 0xD5;
    MEM8(esp + 0x1B) = 0x83;
    MEM8(esp + 0x1C) = 0x91;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00175F4D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(esp + eax + 0x14));
    SET_LO8(ecx, MEM8(esp + eax + 0x15));
    MEM8(esp + 0x68) = LO8(edx);
    SET_LO8(edx, MEM8(esp + eax + 0x16));
    MEM8(esp + 0x69) = LO8(ecx);
    MEM8(esp + 0x6A) = LO8(edx);

loc_00175F73: ;
    SET_LO8(eax, MEM8(ebp + 4));
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_00175FF7; /* jge: greater or equal (signed >=) */

loc_00175F86: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6C);
    eax = 0x184;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00175F97: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00175FF7; /* je: equal / zero */

loc_00175F9E: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x5C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(edx, MEM16(edx));
    ecx = MEM32(0x771CD0);
    MEM16(eax + 0x2E) = LO16(edx);
    edx = MEM32(esp + 0x28);
    ecx++;
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;

loc_00175FF7: ;
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00175D13; /* ja: above (unsigned >) */

loc_00176016: ;
    xmm0 = MEMF(0x648EC0); /* movss */
    edx = ebp + 0x50;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_0017604B(); return; } /* jne: not equal / not zero */

loc_00176044: ;
    eax = 0x870ED8;
    g_seh_ebp = ebp; sub_0017607B(); return; /* tail jmp 0x0017607B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00176140
 * Original: 0x00176140 - 0x00176199 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176140(void)
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

loc_00176140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x2E));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x2C));
    if (CMP_GE(LO16(eax), 0x14)) goto loc_00176195; /* jge: greater or equal (signed >=) */

loc_00176153: ;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0017617D; /* ja: above (unsigned >) */

loc_00176170: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00176183; /* jbe: below or equal (unsigned <=) */

loc_0017617D: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_00176183: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00176192: ;
    MEM8(esi + 0x3B) = LO8(eax);

loc_00176195: ;
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
 * sub_001761A0
 * Original: 0x001761A0 - 0x00176256 (182 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001761A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001761A0: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00176206; /* jne: not equal / not zero */

loc_001761AF: ;
    xmm0 = MEMF(edi + 0x64); /* movss */
    xmm1 = MEMF(edi + 0x60); /* movss */
    ecx = MEM32(edi + 0x70);
    edx = MEM32(edi + 0x6C);
    esi = MEM32(edi + 0x68);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001761D6; /* jp: parity */

loc_001761CB: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_001761D6: ;
    eax = 0; /* xor self */
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    MEM32(0x771CE0) = esi;
    MEM32(0x771CDC) = edx;
    MEM32(0x771CD8) = ecx;
    MEM8(0x76F518) = 0;
    PUSH32(esp, 0); sub_000C69F0(); /* call 0x000C69F0 */

loc_00176206: ;
    if (CMP_EQ(MEM32(edi + 0x74), 0xFFFFFFFFu)) goto loc_00176253; /* je: equal / zero */

loc_0017620C: ;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x40);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00176230; /* je: equal / zero */

loc_0017621F: ;
    eax = MEM32(edi + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0017622D: ;
    esp = esp + 8;

loc_00176230: ;
    eax = MEM32(edi + 0x74);
    if (TEST_S(eax, eax)) goto loc_00176244; /* jl: less (signed <) */

loc_00176237: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00176244: ;
    MEM32(edi + 0x74) = 0xFFFFFFFFu;
    MEM32(edi + 0x74) = 0xFFFFFFFFu;
    POP32(esp, ebx);

loc_00176253: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176260
 * Original: 0x00176260 - 0x00176316 (182 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00176260: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_001762C6; /* jne: not equal / not zero */

loc_0017626F: ;
    xmm0 = MEMF(edi + 0x68); /* movss */
    xmm1 = MEMF(edi + 0x64); /* movss */
    ecx = MEM32(edi + 0x74);
    edx = MEM32(edi + 0x70);
    esi = MEM32(edi + 0x6C);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00176296; /* jp: parity */

loc_0017628B: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_00176296: ;
    eax = 0; /* xor self */
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    MEM32(0x771CE0) = esi;
    MEM32(0x771CDC) = edx;
    MEM32(0x771CD8) = ecx;
    MEM8(0x76F518) = 0;
    PUSH32(esp, 0); sub_000C69F0(); /* call 0x000C69F0 */

loc_001762C6: ;
    if (CMP_EQ(MEM32(edi + 0x78), 0xFFFFFFFFu)) goto loc_00176313; /* je: equal / zero */

loc_001762CC: ;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x40);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001762F0; /* je: equal / zero */

loc_001762DF: ;
    eax = MEM32(edi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_001762ED: ;
    esp = esp + 8;

loc_001762F0: ;
    eax = MEM32(edi + 0x78);
    if (TEST_S(eax, eax)) goto loc_00176304; /* jl: less (signed <) */

loc_001762F7: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00176304: ;
    MEM32(edi + 0x78) = 0xFFFFFFFFu;
    MEM32(edi + 0x78) = 0xFFFFFFFFu;
    POP32(esp, ebx);

loc_00176313: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176320
 * Original: 0x00176320 - 0x00176469 (329 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176320: ;
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00174E00(); /* call 0x00174E00 */

loc_00176333: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x28) = ecx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    esp = esp + 8;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    ebp = 0x3C;

loc_00176363: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00176368: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm5 = MEMF(0x648F24); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001763A1: ;
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, 0);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001763DB: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001763F6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x5A);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00176407: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x50;
    ecx = esp + 0x44;
    edx = edx + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00176424: ;
    esi = eax;
    esp = esp + 0x34;
    if (TEST_Z(esi, esi)) goto loc_0017645B; /* je: equal / zero */

loc_0017642D: ;
    MEM32(esi + 0x3C) = 4;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00176439: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0017644E: ;
    SET_LO8(ecx, 0x1E);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esi + 0x38) = LO8(ecx);
    MEM8(esi + 0x39) = LO8(ecx);
    MEM8(esi + 0x3A) = LO8(ecx);

loc_0017645B: ;
    ebp--;
    if ((ebp != 0)) goto loc_00176363; /* jne: not equal / not zero */

loc_00176462: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00176470
 * Original: 0x00176470 - 0x001764F9 (137 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176470(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00176470: ;
    esp = esp - 0x18;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    ecx = ecx + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0x34));
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(esp + 0x18) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    PUSH32(esp, 0x42);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    esi = 0; /* xor self */
    MEM8(esp + 0x25) = 0;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F17F0(); /* call 0x000F17F0 */

loc_001764C5: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_001764F4; /* je: equal / zero */

loc_001764CC: ;
    edx = MEM32(esp + 8);
    ecx = eax + 0x4C;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x14) = edx;

loc_001764F4: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00176500
 * Original: 0x00176500 - 0x0017661E (286 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176500: ;
    esp = esp - 0x50;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D38); /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = eax;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x14);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    edx = esp + 0x2C;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0xC) = edx;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE4))) { sub_0017661E(); return; } /* jbe: below or equal (unsigned <=) */

loc_0017661A: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00176623(); return; /* tail jmp 0x00176623 */

}

/**
 * sub_001767B0
 * Original: 0x001767B0 - 0x00176808 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001767B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001767B0: ;
    esp = esp - 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    SET_LO8(ebx, MEM8(esi + 0x51));
    PUSH32(esp, edi);
    edi = esi + 0x54;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = ZX8(MEM8(esi + 0x50));
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5988A0), _icall_esp); /* indirect call */
    }

loc_001767E5: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00176808(); return; } /* jne: not equal / not zero */

loc_001767EC: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001768B0
 * Original: 0x001768B0 - 0x001768C9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001768B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001768B0: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x50));
    eax = MEM32(eax * 4 + 0x5988A4);
    if (TEST_Z(eax, eax)) { sub_001768C9(); return; } /* je: equal / zero */

loc_001768C3: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_001768D0
 * Original: 0x001768D0 - 0x0017692F (95 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001768D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001768D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_00176911; /* je: equal / zero */

loc_001768DC: ;
    ecx = MEM32(eax + 0x144);
    MEM8(eax + 0x50) = 0;
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) & 0xFD;
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 8;
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 1;
    eax = MEM32(esi + 0x4C);
    MEM16(eax + 0x38) = 0x14;
    MEM32(ecx) = 0;
    MEM32(esi + 0x4C) = 0;

loc_00176911: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00176919: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0017692F(); return; } /* jne: not equal / not zero */

loc_00176922: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00176940
 * Original: 0x00176940 - 0x0017698D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00176940: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x4C);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0017697A; /* je: equal / zero */

loc_0017694E: ;
    ecx = MEM32(eax + 0x144);
    MEM8(eax + 0x50) = LO8(edx);
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) & 0xFD;
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 8;
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 1;
    eax = MEM32(esi + 0x4C);
    MEM16(eax + 0x38) = 0x14;
    MEM32(ecx) = edx;
    MEM32(esi + 0x4C) = edx;

loc_0017697A: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00176982: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00176988: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176990
 * Original: 0x00176990 - 0x001769B8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176990(void)
{

loc_00176990: ;
    esp = esp - 8;
    PUSH32(esp, 0x3D);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001769B4: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001769C0
 * Original: 0x001769C0 - 0x00176A07 (71 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001769C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001769C0: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 4) = LO8(eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM8(esp + 9) = LO8(ecx);
    MEM8(esp + 0xA) = LO8(edx);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x12C);
    ecx = 8;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_00176470(); /* call 0x00176470 */

loc_001769F2: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00176A03; /* je: equal / zero */

loc_001769F9: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x68) = ecx;

loc_00176A03: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00176A10
 * Original: 0x00176A10 - 0x00176A7E (110 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176A10: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x3D - flags set for next jcc */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x64;
    if (CMP_NE(edx, 0x3D)) goto loc_00176A6F; /* jne: not equal / not zero */

loc_00176A26: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_00176A34; /* je: equal / zero */

loc_00176A2C: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_00176A7B; /* jne: not equal / not zero */

loc_00176A34: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00176A7B; /* jne: not equal / not zero */

loc_00176A3D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00176A44: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00176A7B; /* jl: less (signed <) */

loc_00176A4B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00176A61; /* je: equal / zero */

loc_00176A58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00176A5B: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00176A61: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_00176A6F: ;
    PUSH32(esp, esi);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_00176A78: ;
    esp = esp + 4;

loc_00176A7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176A80
 * Original: 0x00176A80 - 0x00176B97 (279 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00176A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x64);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_00176B97(); return; } /* je: equal / zero */

loc_00176A9D: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x68))) { sub_00176B97(); return; } /* jne: not equal / not zero */

loc_00176AAC: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_00176AC3; /* jne: not equal / not zero */

loc_00176AB6: ;
    MEM8(edi + 0x51) = MEM8(edi + 0x51) & 0xFE;

loc_00176ABA: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00176AC3: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00176AE1; /* je: equal / zero */

loc_00176ACD: ;
    ecx = MEM32(eax + 0x2B0);
    if (TEST_Z(ecx, ecx)) goto loc_00176AE1; /* je: equal / zero */

loc_00176AD7: ;
    eax = MEM32(esi + 0x564);
    if (TEST_NZ(eax, eax)) goto loc_00176AB6; /* jne: not equal / not zero */

loc_00176AE1: ;
    if (CMP_NE(MEM8(esi + 0xB4), 0xFF)) goto loc_00176AB6; /* jne: not equal / not zero */

loc_00176AEA: ;
    edx = ZX8(MEM8(edi + 0x69));
    eax = MEM32(edx * 4 + 0x6B770C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00176B00: ;
    ebx = ZX8(MEM8(edi + 0x69));
    esp = esp + 8;
    if (CMP_NE(ebx, 3)) goto loc_00176B57; /* jne: not equal / not zero */

loc_00176B0C: ;
    PUSH32(esp, 0x5F48A0);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_00176B16: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00176B57; /* je: equal / zero */

loc_00176B1D: ;
    xmm0 = MEMF(0x6498EC); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    PUSH32(esp, ecx);
    edx = edi + 0x54;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6495F0); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, eax);
    goto loc_00176B6B;

loc_00176B57: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = edi + 0x54;
    eax = ebx + ebx * 2;
    PUSH32(esp, edx);
    ecx = eax * 4 + 0x5988A8;
    PUSH32(esp, ecx);

loc_00176B6B: ;
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00176B70: ;
    MEM8(edi + 0x51) = MEM8(edi + 0x51) | 1;
    SET_LO8(eax, MEM8(edi + 0x6A));
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00176ABA; /* je: equal / zero */

loc_00176B82: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x5988FC), _icall_esp); /* indirect call */
    }

loc_00176B8D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00176BE0
 * Original: 0x00176BE0 - 0x00176BF8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176BE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00176BE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);
    edx = MEM32(ecx + 0xA4);
    if (TEST_NZ(edx, edx)) goto loc_00176BF5; /* jne: not equal / not zero */

loc_00176BF1: ;
    MEM8(eax + 0x51) = MEM8(eax + 0x51) & 0xFE;

loc_00176BF5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00176C00
 * Original: 0x00176C00 - 0x00176C18 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00176C00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);
    SET_LO8(edx, MEM8(ecx + 0x1B5));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00176C15; /* je: equal / zero */

loc_00176C11: ;
    MEM8(eax + 0x51) = MEM8(eax + 0x51) & 0xFE;

loc_00176C15: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00176C20
 * Original: 0x00176C20 - 0x00176C5D (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176C20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00176C20: ;
    ecx = MEM32(eax + 0x4C);
    if (TEST_Z(ecx, ecx)) goto loc_00176C5C; /* je: equal / zero */

loc_00176C27: ;
    edx = MEM32(ecx + 0x144);
    MEM8(ecx + 0x50) = 0;
    ecx = MEM32(eax + 0x4C);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) & 0xFD;
    ecx = MEM32(eax + 0x4C);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 8;
    ecx = MEM32(eax + 0x4C);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 1;
    ecx = MEM32(eax + 0x4C);
    MEM16(ecx + 0x38) = 0x14;
    MEM32(edx) = 0;
    MEM32(eax + 0x4C) = 0;

loc_00176C5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00176C60
 * Original: 0x00176C60 - 0x00176D14 (180 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176C60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00176C60: ;
    esp = esp - 0x3C;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ebx + 0x54;
    PUSH32(esp, 0);
    ecx = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0xD);
    eax = esp + 0x34;
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x40) = edx;
    SET_LO8(edx, MEM8(ebx + 4));
    PUSH32(esp, eax);
    eax = 0x1C;
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM8(esp + 0x51) = 0x19;
    MEM32(esp + 0x40) = ecx;
    MEM16(esp + 0x48) = 0x12C;
    MEM16(esp + 0x4A) = 0x36;
    MEM32(esp + 0x4C) = 0x12;
    MEM8(esp + 0x50) = 4;
    MEM32(esp + 0x54) = 0;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00176CF1: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_00176D10; /* je: equal / zero */

loc_00176CF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    ecx = 7;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    MEM32(ebx + 0x4C) = eax;
    POP32(esp, esi);

loc_00176D10: ;
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00176D20
 * Original: 0x00176D20 - 0x00176D3B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00176D20: ;
    edx = MEM32(esp + 4);
    (void)0; /* cmp MEM8(edx + 0x4C), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x140);
    if (CMP_GE(MEM8(edx + 0x4C), 2)) { sub_00176D3B(); return; } /* jge: greater or equal (signed >=) */

loc_00176D31: ;
    if (TEST_Z(MEM8(edx + 0x3A), 8)) { sub_00176D3B(); return; } /* je: equal / zero */

loc_00176D37: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176E00
 * Original: 0x00176E00 - 0x00176E2A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176E00: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x140);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x144);
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x51));
    eax = eax + 0x4C;
    if (TEST_NZ(LO8(edx), 1)) { sub_00176E2A(); return; } /* jne: not equal / not zero */

loc_00176E22: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00177010
 * Original: 0x00177010 - 0x00177342 (818 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177010(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177010: ;
    esp = esp - 0x20;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    (void)0; /* cmp MEM8(esi + 0x4C), 1 - flags set for next jcc */
    edx = MEM32(esi + 0x140);
    ebp = MEM32(esi + 0x144);
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = edx;
    xmm3 = xmm7; /* movaps */
    if (CMP_LE(MEM8(esi + 0x4C), 1)) goto loc_00177335; /* jle: less or equal (signed <=) */

loc_00177043: ;
    (void)0; /* test MEM8(esi + 0x3A), 2 - flags set for next jcc */
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    if (TEST_Z(MEM8(esi + 0x3A), 2)) goto loc_00177052; /* je: equal / zero */

loc_0017704D: ;
    eax = esi + 0x2C;
    goto loc_00177061;

loc_00177052: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_0017705A; /* jns: not sign (positive) */

loc_00177055: ;
    edi = ZX8(MEM8(esi + 0x41));
    edi--;

loc_0017705A: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + edx;

loc_00177061: ;
    xmm4 = MEMF(0x6493A8); /* movss */
    ecx = esp + 0x24;
    MEM32(esp + 0x18) = ecx;
    SET_LO8(ebx, 0); /* xor self */

loc_00177073: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_0017707B; /* jns: not sign (positive) */

loc_00177076: ;
    edi = ZX8(MEM8(esi + 0x41));
    edi--;

loc_0017707B: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    xmm0 = MEMF(ecx + edx); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    ecx = ecx + edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    MEMF(ecx + 0x10) = xmm1; /* movss */
    if ((xmm3 <= xmm4)) goto loc_00177193; /* jbe: below or equal (unsigned <=) */

loc_001770FC: ;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00177167; /* jnp: not parity */

loc_00177105: ;
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = MEMF(ecx); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(ecx) = xmm3; /* movss */
    xmm3 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x28); /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(ecx + 4) = xmm3; /* movss */
    xmm3 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x2C); /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 8) = xmm3; /* movss */
    MEMF(ecx + 0x10) = xmm2; /* movss */

loc_00177167: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(edi, edx)) goto loc_00177190; /* je: equal / zero */

loc_0017716F: ;
    eax = ZX8(MEM8(esi + 0x41));

loc_00177173: ;
    SET_LO8(edx, MEM8(esi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_00177185; /* jne: not equal / not zero */

loc_00177182: ;
    MEM8(esi + 0x4D) = LO8(ebx);

loc_00177185: ;
    MEM8(esi + 0x4C) = MEM8(esi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(edi, edx)) goto loc_00177173; /* jne: not equal / not zero */

loc_00177190: ;
    xmm3 = xmm4; /* movaps */

loc_00177193: ;
    edx = MEM32(esp + 0x34);
    eax = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(edi, ecx)) goto loc_00177073; /* jne: not equal / not zero */

loc_001771A5: ;
    if (CMP_LE(MEM8(esi + 0x4C), 1)) goto loc_00177335; /* jle: less or equal (signed <=) */

loc_001771AF: ;
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm1 * MEMF(0x6498E8); /* mulss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm2 = MEMF(0x6498E4); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm1 = MEMF(0x649724); /* movss */
    MEMF(ebp + 0x18) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_001771EB; /* jbe: below or equal (unsigned <=) */

loc_001771E2: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_001771E2; /* ja: above (unsigned >) */

loc_001771EB: ;
    xmm5 = MEMF(0x6498E0); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00177209; /* jbe: below or equal (unsigned <=) */

loc_001771F8: ;
    goto loc_00177200;

    /* nop */

loc_00177200: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_00177200; /* ja: above (unsigned >) */

loc_00177209: ;
    MEMF(ebp + 0x18) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    xmm4 = xmm7; /* movaps */
    xmm7 = MEMF(0x6498DC); /* movss */
    /* nop */

loc_00177220: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00177228; /* jns: not sign (positive) */

loc_00177223: ;
    ecx = ZX8(MEM8(esi + 0x41));
    ecx--;

loc_00177228: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm0 = MEMF(eax + edx + 0x10); /* movss */
    eax = eax + edx;
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x18); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00177259; /* jbe: below or equal (unsigned <=) */

loc_0017724A: ;
    /* nop */

loc_00177250: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00177250; /* ja: above (unsigned >) */

loc_00177259: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00177269; /* jbe: below or equal (unsigned <=) */

loc_0017725E: ;
    edi = edi;

loc_00177260: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_00177260; /* ja: above (unsigned >) */

loc_00177269: ;
    MEMF(eax + 0x18) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ecx, eax)) goto loc_00177220; /* jne: not equal / not zero */

loc_00177276: ;
    (void)0; /* cmp MEM8(esi + 0x4C), 1 - flags set for next jcc */
    xmm7 = 0.0f; /* xorps self = zero */
    if (CMP_LE(MEM8(esi + 0x4C), 1)) goto loc_00177335; /* jle: less or equal (signed <=) */

loc_00177283: ;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(0x6498D8); /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm6 = xmm6 / xmm3; /* divss */
    xmm1 = xmm7; /* movaps */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    SET_LO8(ebx, 0x3C);
    goto loc_001772C0;

loc_001772B9: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* nop */

loc_001772C0: ;
    ebp--;
    if (((int32_t)ebp >= 0)) goto loc_001772C8; /* jns: not sign (positive) */

loc_001772C3: ;
    ebp = ZX8(MEM8(esi + 0x41));
    ebp--;

loc_001772C8: ;
    edi = ebp;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    edi = edi + edx;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0017731B; /* jbe: below or equal (unsigned <=) */

loc_001772D4: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm1 <= xmm3)) goto loc_001772E9; /* jbe: below or equal (unsigned <=) */

loc_001772E3: ;
    MEMF(esp + 0x14) = xmm3; /* movss */

loc_001772E9: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00177300: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x34);
    MEM8(edi + 0x14) = LO8(eax);
    goto loc_0017731E;

loc_0017731B: ;
    MEM8(edi + 0x14) = LO8(ebx);

loc_0017731E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    xmm2 = MEMF(edi + 0x10); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if (CMP_NE(ebp, ecx)) goto loc_001772B9; /* jne: not equal / not zero */

loc_00177335: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00177350
 * Original: 0x00177350 - 0x00177888 (1336 bytes, 369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177350: ;
    esp = esp - 0x40;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    if (CMP_L(MEM8(edi + 0x4C), 2)) goto loc_00177883; /* jl: less (signed <) */

loc_00177362: ;
    eax = MEM32(edi + 0x144);
    ecx = MEM32(edi + 0x140);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(edi + 0x41));
    ebx = ebx << 2;
    esi = esi + 5;
    MEM32(esp + 0x24) = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    eax = MEM32(ebx + edi + 0x130);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001773B9; /* jne: not equal / not zero */

loc_00177395: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    edx = esi + esi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001773A7: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + edi + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_00177881; /* je: equal / zero */

loc_001773B9: ;
    SET_LO8(ecx, MEM8(0x7FA230));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(ebx + edi + 0x130);
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    eax--;
    eax = eax & esi;
    eax = eax + ecx;
    ebp = eax;
    if ((eax == 0)) goto loc_00177880; /* je: equal / zero */

loc_001773DB: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_001773E2: ;
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(0x75BA4C));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0017748F; /* jbe: below or equal (unsigned <=) */

loc_001773F3: ;
    esi = MEM32(0x75BA48);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00177428; /* jne: not equal / not zero */

loc_00177400: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00177411: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00177419: ;
    edx = MEM32(0x75BA48);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x75BA48);

loc_00177428: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00177454; /* jne: not equal / not zero */

loc_0017742F: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00177437: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BA48);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00177454; /* jne: not equal / not zero */

loc_00177447: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BA48);

loc_00177454: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00177481; /* jne: not equal / not zero */

loc_0017745C: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00177478; /* jne: not equal / not zero */

loc_00177466: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0017746F: ;
    esi = MEM32(0x75BA48);
    esp = esp + 8;

loc_00177478: ;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x14) = ecx;
    goto loc_00177497;

loc_00177481: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00177486: ;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    goto loc_00177497;

loc_0017748F: ;
    MEM32(esp + 0x14) = 0;

loc_00177497: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(MEM32(esi + 0x3838), eax)) goto loc_001774B8; /* je: equal / zero */

loc_001774A7: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_001774AC: ;
    ecx = MEM32(esp + 0x14);
    edx = esi;
    MEM32(edx + 0x3838) = ecx;

loc_001774B8: ;
    SET_LO16(edx, MEM16(edi + 0x3A));
    (void)0; /* test LO8(edx), 2 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    if (TEST_Z(LO8(edx), 2)) goto loc_001774F8; /* je: equal / zero */

loc_001774C5: ;
    eax--;
    MEM32(esp + 0x14) = eax;
    if (((int32_t)eax >= 0)) goto loc_001774D5; /* jns: not sign (positive) */

loc_001774CC: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;

loc_001774D5: ;
    ecx = edi + 0x2C;
    esi = MEM32(ecx);
    MEM32(esp + 0x38) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx + 0x18); /* movss */
    MEM8(esp + 0x13) = 0;
    goto loc_00177540;

loc_001774F8: ;
    eax--;
    if (((int32_t)eax >= 0)) goto loc_00177500; /* jns: not sign (positive) */

loc_001774FB: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_00177500: ;
    ecx = eax + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00177514; /* jge: greater or equal (signed >=) */

loc_0017750B: ;
    ecx = ZX8(MEM8(edi + 0x41));
    ecx--;
    MEM32(esp + 0x14) = ecx;

loc_00177514: ;
    ecx = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm0 = MEMF(eax + ecx + 0x18); /* movss */
    eax = eax + ecx;
    ecx = eax;
    esi = MEM32(ecx);
    MEM32(esp + 0x38) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x14));
    eax = MEM32(esp + 0x14);
    MEM8(esp + 0x13) = LO8(ecx);

loc_00177540: ;
    ecx = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm2 = MEMF(ebx + 0x77148C); /* movss */
    xmm3 = MEMF(ebx + 0x77149C); /* movss */
    eax = eax + ecx;
    (void)0; /* test LO8(edx), 8 - flags set for next jcc */
    MEM32(esp + 0x3C) = esi;
    ecx = eax;
    esi = MEM32(ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEM32(esp + 0x44) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2C0); /* movss */
    MEM32(esp + 0x4C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x14));
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    ebx = 0xFF;
    if (TEST_Z(LO8(edx), 8)) goto loc_001775B6; /* je: equal / zero */

loc_001775AD: ;
    SET_LO8(eax, MEM8(edi + 0x38));
    SET_LO8(edx, 0xC);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    goto loc_001775B8;

loc_001775B6: ;
    SET_LO8(eax, LO8(ebx));

loc_001775B8: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm6 = MEMF(0x649924); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm2; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x3C); /* cvttss2si */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    edx = SX16(LO16(edx));
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0x13));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    edx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    MEMF(ebp + 8) = xmm5; /* movss */
    MEMF(ebp + 4) = xmm4; /* movss */
    MEMF(ebp + 0x14) = xmm6; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    xmm0 = xmm0 - xmm2; /* subss */
    esi = (int32_t)xmm0; /* cvttss2si */
    ebp = ebp + 0x1C;
    esi = SX16(LO16(esi));
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -12) = xmm5; /* movss */
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(ebp + -13) = LO8(eax);
    edx = 0; /* xor self */
    MEM16(ebp + -4) = LO16(edx);
    xmm1 = xmm1 + xmm3; /* addss */
    esi = (int32_t)xmm1; /* cvttss2si */
    esi = SX16(LO16(esi));
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 4) = xmm4; /* movss */
    MEMF(ebp + 0x10) = xmm5; /* movss */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    MEM8(ebp + 0xF) = LO8(eax);
    MEM16(ebp + 0x18) = LO16(edx);
    ebp = ebp + 0x1C;
    MEM32(esp + 0x34) = edi;
    esi = ebp + -56;
    goto loc_001776B0;

loc_0017769C: ;
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    edi = MEM32(esp + 0x34);
    edx = 0; /* xor self */
    edi = edi;

loc_001776B0: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    eax = ZX8(LO8(ecx));
    xmm1 = xmm0; /* movaps */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    xmm1 = xmm1 + xmm2; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    ecx = SX16(LO16(ecx));
    xmm6 = MEMF(0x649924); /* movss */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    MEMF(ebp + 8) = xmm5; /* movss */
    edi = MEM32(esp + 0x1C);
    ecx = SX16(LO16(ecx));
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM16(ebp + 0x18) = LO16(edx);
    MEMF(ebp + 4) = xmm4; /* movss */
    MEMF(ebp + 0x10) = xmm5; /* movss */
    MEMF(ebp + 0x14) = xmm6; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    xmm0 = xmm0 - xmm2; /* subss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    ebp = ebp + 0x1C;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(ebp + -13) = LO8(eax);
    xmm1 = xmm1 + xmm3; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(ebp + 0xF) = LO8(eax);
    MEM16(ebp + 0x18) = LO16(edx);
    MEMF(ebp + 4) = xmm4; /* movss */
    MEMF(ebp + 0x10) = xmm5; /* movss */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    ebp = ebp + 0x1C;
    esi = esi + 0x1C;
    PUSH32(esp, ebx);
    edx = ebp + -112;
    esi = esi + 0x1C;
    PUSH32(esp, edx);
    eax = 4;
    ecx = edi;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_001777A3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_001777B0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_001777BD: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x28))) goto loc_0017780D; /* jbe: below or equal (unsigned <=) */

loc_001777CA: ;
    xmm1 = MEMF(ebp + -40); /* movss */
    xmm0 = MEMF(0x64930C); /* movss */
    eax = MEM32(esp + 0x20);
    edi = ebp;
    ecx = 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + -40) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -12); /* movss */
    ebp = ebp + 0x1C;
    xmm1 = xmm1 - xmm0; /* subss */
    eax = eax + 0x1C;
    MEMF(ebp + -40) = xmm1; /* movss */
    ebp = ebp + 0x1C;
    eax = eax + 0x1C;
    MEM32(esp + 0x20) = eax;
    esi = eax;

loc_0017780D: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;
    eax--;
    MEM32(esp + 0x14) = eax;
    if (((int32_t)eax >= 0)) goto loc_00177829; /* jns: not sign (positive) */

loc_0017781C: ;
    eax = MEM32(esp + 0x54);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;

loc_00177829: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = ecx + edx;
    ecx = eax;
    edi = MEM32(ecx);
    MEM32(esp + 0x44) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = edi;
    edi = MEM32(esp + 0x20);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    xmm0 = MEMF(edi + edx + 0x18); /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x4C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x14));
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x4D);
    (void)0; /* cmp MEM32(esp + 0x20), eax - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_NE(MEM32(esp + 0x20), eax)) goto loc_0017769C; /* jne: not equal / not zero */

loc_00177880: ;
    POP32(esp, ebp);

loc_00177881: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00177883: ;
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00177890
 * Original: 0x00177890 - 0x001778CE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177890: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_001778A8; /* je: equal / zero */

loc_001778A1: ;
    MEM32(eax + 0x4C) = 0;

loc_001778A8: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001778B3: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_001778B8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001778CE(); return; } /* jne: not equal / not zero */

loc_001778C1: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00177910
 * Original: 0x00177910 - 0x00177A84 (372 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177910: ;
    eax = MEM32(esp + 8);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00177A7F; /* jle: less or equal (signed <=) */

loc_00177922: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_00177924: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017793F: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00177964: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017797C: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00177994: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0x50);
    (void)0; /* cmp ebx, 0x14 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebx, 0x14)) ? 1 : 0); /* setge */
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0xFF);
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    eax = MEM32(esp + 0x28);
    ecx--;
    ecx = ecx & 0xC;
    ebp = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x186);
    PUSH32(esp, 0x299);
    PUSH32(esp, 0x29A);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = ebp;
    edx = (uint32_t)(-(int32_t)edx);
    PUSH32(esp, 0x3DCCCCCD);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, ecx);
    edx = edx & 0xB;
    PUSH32(esp, edx);
    edi = esp + 0x58;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00177A01: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_00177A70; /* je: equal / zero */

loc_00177A08: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x649B34); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    MEM8(eax + 0x100) = 0x32;
    MEM8(eax + 0x101) = 0x64;
    MEM8(eax + 0x102) = 0x32;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00177A70; /* jle: less or equal (signed <=) */

loc_00177A41: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    MEMF(eax + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(eax + 0x108) = 6;
    MEMF(eax + 0x10C) = xmm0; /* movss */

loc_00177A70: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00177924; /* jl: less (signed <) */

loc_00177A7D: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00177A7F: ;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00177A90
 * Original: 0x00177A90 - 0x00177BD6 (326 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177A90(void)
{
    float xmm0, xmm1;

loc_00177A90: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x649EE4); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649EE0); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x44960000);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648F8C); /* movss */
    PUSH32(esp, 0x42200000);
    eax = esp + 0x10;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    PUSH32(esp, 0x3C);
    PUSH32(esp, eax);
    esi = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00177910(); /* call 0x00177910 */

loc_00177B02: ;
    xmm0 = MEMF(0x649EE4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649EDC); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x44FA0000);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F8C); /* movss */
    PUSH32(esp, 0x42480000);
    ecx = esp + 0x24;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6491DC); /* movss */
    PUSH32(esp, 0x78);
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00177910(); /* call 0x00177910 */

loc_00177B6C: ;
    xmm0 = MEMF(0x649ED8); /* movss */
    xmm1 = MEMF(0x649D60); /* movss */
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x44FA0000);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648F5C); /* movss */
    PUSH32(esp, 0x41F00000);
    edx = esp + 0x38;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x6491EC); /* movss */
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00177910(); /* call 0x00177910 */

loc_00177BCE: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00177BE0
 * Original: 0x00177BE0 - 0x00177C24 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177BE0(void)
{
    float xmm0, xmm1;

loc_00177BE0: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x64925C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x44610000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x46);
    PUSH32(esp, eax);
    esi = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00177910(); /* call 0x00177910 */

loc_00177C1C: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00177C30
 * Original: 0x00177C30 - 0x00177D8B (347 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C30(void)
{
    float xmm0, xmm5;

loc_00177C30: ;
    esp = esp - 0x6C;
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm5 = MEMF(esp + 0x80); /* movss */
    xmm5 = xmm5 + MEMF(0x648F38); /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00177C61: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = MEMF(0x5A005C); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    xmm5 = xmm5 * MEMF(0x64A3A4); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649B78); /* movss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = 0xFFFFFFC0u;
    edx = edx - ecx;
    esi = 0x15;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6495F0); /* movss */
    MEM16(esp + 0x2A) = LO16(eax);
    MEM16(esp + 0x30) = LO16(eax);
    MEM16(esp + 0x32) = LO16(eax);
    ecx = 3;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM8(esp + 0x5E) = LO8(eax);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0xAC);
    MEM16(esp + 0x2C) = LO16(edx);
    SET_LO8(edx, 0xFF);
    MEM16(esp + 0x3A) = LO16(esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x6A) = LO16(esi);
    PUSH32(esp, eax);
    esi = esp + 8;
    MEM16(esp + 0x2C) = 1;
    MEM16(esp + 0x32) = 9;
    MEM16(esp + 0x38) = LO16(ecx);
    MEM16(esp + 0x3A) = LO16(ecx);
    MEM16(esp + 0x3C) = 0x28;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x40) = 0xB;
    MEM8(esp + 0x44) = 1;
    MEM8(esp + 0x45) = 8;
    MEM32(esp + 0x48) = 1;
    MEM32(esp + 0x4C) = 4;
    MEM8(esp + 0x60) = LO8(edx);
    MEM8(esp + 0x61) = LO8(edx);
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = 0x7F;
    MEM16(esp + 0x6C) = 0xC;
    PUSH32(esp, 0); sub_000F3E60(); /* call 0x000F3E60 */

loc_00177D7E: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00177D90
 * Original: 0x00177D90 - 0x00177E8D (253 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D90(void)
{
    float xmm0;

loc_00177D90: ;
    esp = esp - 0x48;
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3A0); /* movss */
    eax = 0x64;
    PUSH32(esp, esi);
    MEM16(esp + 0x24) = LO16(eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A39C); /* movss */
    MEM8(esp + 0x31) = LO8(eax);
    eax = MEM32(esp + 0x88);
    ecx = 6;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A398); /* movss */
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM8(esp + 0x41) = LO8(ecx);
    ecx = esp + 8;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    esi = esp + 0x18;
    MEM16(esp + 0x26) = 5;
    MEM16(esp + 0x10) = 0x6B;
    MEM16(esp + 0x12) = 0x46;
    MEM16(esp + 0x14) = 0xFFE1;
    MEM16(esp + 0x16) = 0x2E;
    MEM16(esp + 0x32) = 0;
    MEM8(esp + 0x3C) = 0x9B;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM8(esp + 0x48) = 1;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM8(esp + 0x50) = 1;
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F3000(); /* call 0x000F3000 */

loc_00177E80: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00177E90
 * Original: 0x00177E90 - 0x00177EEF (95 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177E90(void)
{
    float xmm0;

loc_00177E90: ;
    esp = esp - 0x20;
    xmm0 = MEMF(0x649B30); /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp) = eax;
    SET_LO16(eax, MEM16(esp + 0x28));
    MEM32(esp + 4) = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649B2C); /* movss */
    MEM16(esp + 0x14) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x2C));
    PUSH32(esp, 0);
    ecx = esp + 4;
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x1A) = 5;
    MEM8(esp + 0x1B) = 6;
    MEM8(esp + 0x1C) = 3;
    MEM8(esp + 0x1D) = 0xFF;
    PUSH32(esp, 0); sub_000B0630(); /* call 0x000B0630 */

loc_00177EEB: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00177EF0
 * Original: 0x00177EF0 - 0x00177FFE (270 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00177EF0: ;
    esp = esp - 0x18;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00177F1C: ;
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

loc_00177F95: ;
    xmm0 = xmm0 * MEMF(0x649A80); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A394); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00177FB0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00177FC0: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00177FCC; /* jns: not sign (positive) */

loc_00177FC7: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00177FCC: ;
    eax = eax + 0x19;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00177FD5: ;
    xmm0 = xmm0 * MEMF(0x64946C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A208); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 6);
    eax = esp + 0x34;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00177FFA: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00178000
 * Original: 0x00178000 - 0x00178036 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178000(void)
{
    int _flags = 0; /* fallback flag var */

loc_00178000: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax - edi;
    if ((eax == 0)) goto loc_00178012; /* je: equal / zero */

loc_0017800A: ;
    eax--;
    ecx = 0x6D;
    if ((eax == 0)) goto loc_00178017; /* je: equal / zero */

loc_00178012: ;
    ecx = 0x34;

loc_00178017: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    eax = eax + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017802B: ;
    esp = esp + 8;
    if (CMP_NE(eax, edi)) { sub_00178036(); return; } /* jne: not equal / not zero */

loc_00178032: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001781B0
 * Original: 0x001781B0 - 0x0017826F (191 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001781B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001781B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x5C));
    if (TEST_Z(LO8(eax), 1)) goto loc_001781D1; /* je: equal / zero */

loc_001781BC: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(esi + 0x5E) = MEM16(esi + 0x5E) - LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x5E));
    if (((int32_t)MEM16(esi + 0x5E) < 0)) { sub_0017826F(); return; } /* js: sign (negative) */

loc_001781D1: ;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x2C); /* addss */
    MEMF(esi + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x30); /* addss */
    MEMF(esi + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x34); /* addss */
    MEMF(esi + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x44); /* addss */
    MEMF(esi + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x54); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x48); /* addss */
    MEMF(esi + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x4C); /* addss */
    MEMF(esi + 0x4C) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 8)) goto loc_0017826D; /* je: equal / zero */

loc_0017824F: ;
    SET_LO16(ecx, MEM16(esi + 0x5E));
    if (CMP_GE(LO16(ecx), MEM16(esi + 0x6A))) goto loc_0017826D; /* jge: greater or equal (signed >=) */

loc_00178259: ;
    SET_LO16(eax, MEM16(esi + 0x6C));
    edx = ZX8(MEM8(esi + 0x68));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(ecx)));
    if (CMP_GE(LO16(eax), LO16(edx))) goto loc_0017826D; /* jge: greater or equal (signed >=) */

loc_0017826A: ;
    MEM8(esi + 0x68) = LO8(eax);

loc_0017826D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178520
 * Original: 0x00178520 - 0x0017875E (574 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178520(void)
{
    float xmm0;

loc_00178520: ;
    esp = esp - 0x7C;
    PUSH32(esp, edi);
    SET_LO16(eax, MEM16(esi + 0xC));
    SET_LO16(ecx, MEM16(esi + 0xE));
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEM16(esp + 4) = LO16(eax);
    MEM16(esp + 6) = LO16(ecx);
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 8) = eax;
    SET_LO16(eax, MEM16(esi + 0x10));
    MEM32(esp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x14));
    MEM32(esp + 0x10) = edx;
    SET_LO16(edx, MEM16(esi + 0x12));
    MEM16(esp + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x16));
    MEM16(esp + 0x18) = LO16(ecx);
    SET_LO8(ecx, MEM8(esi + 0x28));
    MEM16(esp + 0x16) = LO16(edx);
    SET_LO8(edx, MEM8(esi + 0x29));
    MEM16(esp + 0x1A) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0x2A));
    MEM8(esp + 0x2C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x2B));
    MEM8(esp + 0x2D) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x2C));
    MEM8(esp + 0x2E) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x2D));
    MEM8(esp + 0x2F) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x2E));
    MEM8(esp + 0x30) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x2F));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEM8(esp + 0x31) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x30));
    MEM8(esp + 0x32) = LO8(ecx);
    SET_LO16(ecx, MEM16(esi + 0x32));
    MEM8(esp + 0x33) = LO8(edx);
    SET_LO16(edx, MEM16(esi + 0x34));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x24); /* movss */
    MEM8(esp + 0x34) = LO8(eax);
    SET_LO16(eax, MEM16(esi + 0x36));
    MEM16(esp + 0x36) = LO16(ecx);
    SET_LO8(ecx, MEM8(esi + 0x40));
    MEM16(esp + 0x38) = LO16(edx);
    SET_LO8(edx, MEM8(esi + 0x41));
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    MEM16(esp + 0x3A) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x42));
    MEM8(esp + 0x44) = LO8(ecx);
    SET_LO16(ecx, MEM16(esi + 0x44));
    MEM8(esp + 0x45) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x46));
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    PUSH32(esp, ebx);
    edi = esp + 8;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM16(esp + 0x4A) = LO16(eax);
    MEM16(esp + 0x4C) = LO16(ecx);
    MEM8(esp + 0x4E) = LO8(edx);
    PUSH32(esp, 0); sub_000F57B0(); /* call 0x000F57B0 */

loc_0017863D: ;
    eax = MEM32(esi + 0x48);
    xmm0 = (float)(int32_t)MEM32(esi + 0x5C); /* cvtsi2ss */
    SET_LO8(ecx, MEM8(esi + 0x68));
    SET_LO8(edx, MEM8(esi + 0x69));
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x60); /* movss */
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(esi + 0x6A));
    MEM32(esp + 0x30) = 0x303;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0x14) = LO8(ecx);
    MEM8(esp + 0x15) = LO8(edx);
    MEM8(esp + 0x16) = LO8(eax);
    xmm0 = MEMF(esi + 0x80); /* movss */
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x50) = eax;
    SET_LO8(eax, MEM8(esi + 0x6B));
    MEM8(esp + 0x17) = LO8(eax);
    SET_LO16(eax, MEM16(esi + 0x78));
    MEM16(esp + 0x38) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x58));
    MEM32(esp + 0x54) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x8A));
    MEM16(esp + 8) = LO16(eax);
    eax = 0; /* xor self */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esi + 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esp + 0x84) = LO8(ecx);
    SET_LO16(ecx, MEM16(esi + 0x7A));
    PUSH32(esp, eax);
    MEM32(esp + 0x80) = edx;
    SET_LO8(edx, MEM8(esi + 0x8B));
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x38) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x8C));
    MEM16(esp + 0x46) = LO16(ecx);
    ecx = MEM32(esi + 0x70);
    MEM8(esp + 0x89) = LO8(edx);
    SET_LO16(edx, MEM16(esi + 0x7C));
    MEM32(esp + 0x50) = ecx;
    MEM16(esp + 0x48) = LO16(edx);
    edx = MEM32(esi + 0x74);
    ecx = 2;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x54) = edx;
    edx = 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00178756: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00178760
 * Original: 0x00178760 - 0x00178888 (296 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178760(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00178760: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM16(edi + 0x50) = MEM16(edi + 0x50) - LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x50));
    if (((int32_t)MEM16(edi + 0x50) >= 0)) goto loc_00178883; /* jns: not sign (positive) */

loc_0017877C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178782: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178791: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esi + esi * 4;
    ecx = edx + eax * 2;
    ecx = ecx << 4;
    xmm1 = MEMF(ecx + 0x774CA8); /* movss */
    esi = ecx + 0x774CA8;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0017886D; /* jnp: not parity */

loc_001787C0: ;
    xmm1 = MEMF(ecx + 0x774CAC); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0017886D; /* jnp: not parity */

loc_001787D5: ;
    xmm1 = MEMF(ecx + 0x774CB0); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0017886D; /* jnp: not parity */

loc_001787EA: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    eax = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001788E0(); /* call 0x001788E0 */

loc_001787FF: ;
    esp = esp + 4;
    MEM8(esp + 8) = 3;
    MEM8(esp + 9) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178811: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0xE) = 0;
    edx = edx + 5;
    MEM16(esp + 0xA) = LO16(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178844: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x493E1;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esi;
    edx = edx + 0xF4240;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x24;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0017886A: ;
    esp = esp + 0x20;

loc_0017886D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178872: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x4E);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    SET_LO16(edx, LO16(edx) + MEM16(edi + 0x4C));
    MEM16(edi + 0x50) = LO16(edx);

loc_00178883: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00178890
 * Original: 0x00178890 - 0x001788C8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00178890: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x78)) goto loc_001788C7; /* jne: not equal / not zero */

loc_00178897: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001788C7; /* jne: not equal / not zero */

loc_001788A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001788AC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001788C6; /* jl: less (signed <) */

loc_001788B3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001788C8(); return; } /* je: equal / zero */

loc_001788C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001788C3: ;
    esp = esp + 4;

loc_001788C6: ;
    POP32(esp, esi);

loc_001788C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001788E0
 * Original: 0x001788E0 - 0x00178B0C (556 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001788E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001788E0: ;
    esp = esp - 0x94;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A684); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x64A680); /* mulss */
    xmm1 = xmm1 * MEMF(0x64A67C); /* mulss */
    PUSH32(esp, ebx);
    ebx = 0xFF;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A678); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    eax = 0xA;
    esi = 0; /* xor self */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A674); /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM16(esp + 0x14) = LO16(eax);
    MEM16(esp + 0x16) = 0x1E;
    MEM16(esp + 0x18) = LO16(esi);
    MEM16(esp + 0x1A) = 0xFFC1;
    MEM16(esp + 0x1C) = LO16(ebx);
    MEM16(esp + 0x1E) = 0x80;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM8(esp + 0x70) = LO8(ebx);
    MEM8(esp + 0x30) = LO8(ebx);
    MEM8(esp + 0x96) = LO8(ebx);
    MEM8(esp + 0x71) = LO8(ebx);
    MEM8(esp + 0x31) = LO8(ebx);
    MEM8(esp + 0x97) = LO8(ebx);
    MEM8(esp + 0x72) = LO8(ebx);
    MEM8(esp + 0x32) = LO8(ebx);
    MEM8(esp + 0x98) = LO8(ebx);
    MEM8(esp + 0x33) = LO8(ebx);
    MEM8(esp + 0x34) = LO8(ebx);
    MEM8(esp + 0x35) = LO8(ebx);
    MEM8(esp + 0x36) = LO8(ebx);
    MEM8(esp + 0x37) = LO8(ebx);
    MEM8(esp + 0x38) = 9;
    MEM16(esp + 0x3A) = 5;
    MEM16(esp + 0x3C) = LO16(eax);
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM8(esp + 0x48) = 0x64;
    MEM8(esp + 0x49) = 0x9B;
    MEM16(esp + 0x4A) = 4;
    MEM16(esp + 0x4C) = 0x3F;
    MEM8(esp + 0x4E) = 0;
    MEM32(esp + 0x50) = 0x2B;
    MEM32(esp + 0x58) = 0x205;
    MEM32(esp + 0x5C) = esi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178A06: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x64) = esi;
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM8(esp + 0x6C) = LO8(ebx);
    MEM8(esp + 0x6D) = LO8(ebx);
    MEM8(esp + 0x6E) = LO8(ebx);
    MEM8(esp + 0x6F) = LO8(ebx);
    edx = edx + 7;
    MEM16(esp + 0x60) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178A38: ;
    MEM8(esp + 0x73) = LO8(ebx);
    MEM8(esp + 0x74) = LO8(ebx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00178A45: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A670); /* addss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x648F10); /* movss */
    MEM16(esp + 0x80) = 4;
    MEM16(esp + 0x82) = 0x3F;
    MEM16(esp + 0x84) = 0x16;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x8C) = 0xE01;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178AA0: ;
    SET_LO8(ebx, 1);
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00178AB1; /* je: equal / zero */

loc_00178AA6: ;
    MEM32(esp + 0x8C) = 0xE41;

loc_00178AB1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178AB6: ;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00178AC5; /* je: equal / zero */

loc_00178ABA: ;
    MEM32(esp + 0x8C) = MEM32(esp + 0x8C) | 0x80;

loc_00178AC5: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x94) = LO8(ebx);
    MEM8(esp + 0x95) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xA0));
    esi = esp + 8;
    MEM8(esp + 0x90) = 4;
    MEM8(esp + 0x91) = 4;
    MEM8(esp + 0x92) = LO8(eax);
    MEM8(esp + 0x93) = LO8(eax);
    PUSH32(esp, 0); sub_00178520(); /* call 0x00178520 */

loc_00178B03: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_00178B10
 * Original: 0x00178B10 - 0x00178BF6 (230 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00178B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0xC));
    SET_LO8(eax, 0x96);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x12) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    MEM8(esp + 0x10) = 0xFF;
    MEM8(esp + 0x13) = 0xFF;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178B4F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 2;
    if (CMP_LE(edx & edx, 0)) goto loc_00178BEF; /* jle: less or equal (signed <=) */

loc_00178B62: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00178B74: ;
    xmm0 = xmm0 * MEMF(0x648D50); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178B91: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 5;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178BA3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x2A;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178BB4: ;
    xmm0 = MEMF(0x64908C); /* movss */
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edx = esp + 0x38;
    eax = esi;
    esi = MEM32(ebp + 8);
    PUSH32(esp, edx);
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, 0); sub_000A9900(); /* call 0x000A9900 */

loc_00178BD3: ;
    esp = esp + 0x28;
    edi++;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00178BDC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 2;
    if (CMP_L(edi, edx)) goto loc_00178B62; /* jl: less (signed <) */

loc_00178BEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00178C00
 * Original: 0x00178C00 - 0x00178D22 (290 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00178C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x5F48D0);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_00178C16: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00178C45; /* je: equal / zero */

loc_00178C1D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00178C22: ;
    xmm1 = MEMF(0x648EB0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00178C45; /* jbe: below or equal (unsigned <=) */

loc_00178C2F: ;
    PUSH32(esp, 0x5F3658);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00178C3B: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00178B10(); /* call 0x00178B10 */

loc_00178C42: ;
    esp = esp + 0xC;

loc_00178C45: ;
    PUSH32(esp, 0x5F48C4);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_00178C4F: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00178C7E; /* je: equal / zero */

loc_00178C56: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00178C5B: ;
    xmm1 = MEMF(0x648EB0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00178C7E; /* jbe: below or equal (unsigned <=) */

loc_00178C68: ;
    PUSH32(esp, 0x5F3650);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00178C74: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00178B10(); /* call 0x00178B10 */

loc_00178C7B: ;
    esp = esp + 0xC;

loc_00178C7E: ;
    PUSH32(esp, 0x5F48B8);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_00178C88: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00178D1D; /* je: equal / zero */

loc_00178C93: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00178C98: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00178D1D; /* jbe: below or equal (unsigned <=) */

loc_00178CA5: ;
    PUSH32(esp, 0x5F0C74);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00178CB1: ;
    esi = MEM32(esi + 0x3C4);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x34);
    edx = eax + eax * 8;
    xmm1 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm0 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    ecx = ecx + edx * 4;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    eax = eax << 6;
    eax = eax + edx;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_00178CE3: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001788E0(); /* call 0x001788E0 */

loc_00178D1A: ;
    esp = esp + 0xC;

loc_00178D1D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00178D30
 * Original: 0x00178D30 - 0x00178D56 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0xC4;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00178D40: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00178D56(); return; } /* jne: not equal / not zero */

loc_00178D49: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00178D60
 * Original: 0x00178D60 - 0x00178D7B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178D60(void)
{

loc_00178D60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0xC4;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00178D70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00178D76: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00178D80
 * Original: 0x00178D80 - 0x00178D9D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00178D80(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00178D80: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x774CAC;
    ebp = 0x597740;
    edi = eax;
    MEM32(esp + 0x10) = 0xA;
    g_seh_ebp = ebp; sub_00178DA0(); return; /* tail jmp 0x00178DA0 */

}

/**
 * sub_00179070
 * Original: 0x00179070 - 0x00179170 (256 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179070(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179070: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = LO16(ebp);
    esi = SX16(LO16(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017908A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = (uint32_t)((int32_t)esi >> 1);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x6C);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    edx = edx - esi;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    MEM32(esp + 0x70) = edx;
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_001790CC; /* jne: not equal / not zero */

loc_001790C7: ;
    ebx = 1;

loc_001790CC: ;
    esi = SX16(LO16(ebx));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001790D4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = (uint32_t)((int32_t)esi >> 1);
    edx = edx - esi;
    esi = MEM32(esp + 0x5C);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x74);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    ebx = (int32_t)xmm2; /* cvttss2si */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(esp + 0x54);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    eax = (int32_t)xmm3; /* cvttss2si */
    ecx = ecx + eax;
    MEM32(esp + 0x54) = ecx;
    xmm0 = xmm0 * xmm2; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    esi = esi + ecx;
    MEM32(esp + 0x5C) = esi;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x68);
    ebp++;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179141: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    esi = (uint32_t)((int32_t)esi >> 1);
    edx = edx - esi;
    esi = MEM32(esp + 0x50);
    edx = edx + eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x7C);
    ecx = esi;
    ecx = ecx - 2;
    if ((ecx == 0)) { sub_00179170(); return; } /* je: equal / zero */

loc_0017915F: ;
    MEM8(esp + 0x68) = 0xFF;
    MEM8(esp + 0x74) = 0xFF;
    MEM8(esp + 0x6C) = 0xFF;
    g_seh_ebp = ebp; sub_0017917F(); return; /* tail jmp 0x0017917F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00179270
 * Original: 0x00179270 - 0x001792FA (138 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179270: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    if (CMP_NE(edi, 1)) { sub_001792FA(); return; } /* jne: not equal / not zero */

loc_00179282: ;
    SET_LO8(eax, MEM8(0x7FA20C));
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x46);
    SET_LO8(ecx, 6);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) + MEM8(esi + 0x57));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649408); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 0x46) = LO16(eax);
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, LO8(ebx));
    MEM8(esi + 0x57) = LO8(ebx);
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_001792B9: ;
    xmm2 = MEMF(0x648D20); /* movss */
    xmm3 = MEMF(0x648F94); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    SET_LO8(eax, LO8(ebx));
    MEM16(esi + 0x50) = LO16(ecx);
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_001792E4: ;
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 0x52) = LO16(edx);
    g_seh_ebp = ebp; sub_00179337(); return; /* tail jmp 0x00179337 */

}

/**
 * sub_00179460
 * Original: 0x00179460 - 0x001794F1 (145 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00179460: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    eax = 0x48;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00179471: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001794F0; /* je: equal / zero */

loc_00179478: ;
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x30) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM8(eax + 0x31) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 0x32) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM16(eax + 0x36) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x1C));
    MEM16(eax + 0x38) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x20));
    MEM16(eax + 0x3A) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x24));
    MEM16(eax + 0x3C) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x28));
    MEM16(eax + 0x3E) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x2C));
    MEM16(eax + 0x40) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x30));
    MEM16(eax + 0x42) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x34));
    MEM16(eax + 0x44) = LO16(edx);
    edx = MEM32(esp + 0x38);
    MEM16(eax + 0x46) = LO16(ecx);
    MEM32(eax + 0x2C) = edx;

loc_001794F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00179500
 * Original: 0x00179500 - 0x0017951D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_0017951D(); return; } /* jne: not equal / not zero */

loc_0017950F: ;
    SET_LO16(edi, MEM16(esi + 0x32));
    SET_LO16(ebx, MEM16(esi + 0x34));
    SET_LO16(ebp, MEM16(esi + 0x36));
    g_seh_ebp = ebp; sub_0017952B(); return; /* tail jmp 0x0017952B */

}

/**
 * sub_00179680
 * Original: 0x00179680 - 0x00179B33 (1203 bytes, 262 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179680: ;
    esp = esp - 0x118;
    xmm0 = MEMF(0x648EA8); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADCC); /* movss */
    MEM32(esp + 0xB8) = 4;
    MEMF(esp + 0xA8) = xmm5; /* movss */
    MEM32(esp + 0xB0) = 0x29E8;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM8(esp + 0xBC) = 0;
    MEM32(esp + 0xC0) = edi;
    MEM8(esp + 0xC4) = 0xFF;
    MEM32(esp + 0xC8) = 0x13E180;
    MEM32(esp + 0xCC) = edi;
    MEM32(esp + 0xD0) = edi;
    MEM32(esp + 0xD4) = edi;
    MEM32(esp + 0xD8) = edi;
    MEM32(esp + 0xDC) = edi;
    MEM32(esp + 0xE0) = 0x13E6E0;
    MEM32(esp + 0xE4) = 0x13E8F0;
    MEM8(esp + 0xEC) = 2;
    MEM32(esp + 0xF0) = edi;
    MEM8(esp + 0xF4) = 0;
    MEM16(esp + 0xF6) = 0x4000;
    MEM16(esp + 0xF8) = LO16(edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017976D: ;
    eax = eax & 7;
    eax = eax + 3;
    if (CMP_LE(eax, edi)) goto loc_00179A2D; /* jle: less or equal (signed <=) */

loc_0017977B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    goto loc_00179785;

loc_00179782: ;
    xmm5 = 0.0f; /* xorps self = zero */

loc_00179785: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017978A: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x648D40); /* mulss */
    xmm6 = xmm6 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001797A2: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001797A9: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    SET_LO8(eax, 0xF0);
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001797BB: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CE4); /* mulss */
    xmm7 = xmm7 + MEMF(0x648D1C); /* addss */
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001797E9; /* je: equal / zero */

loc_001797DD: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_001797EE;

loc_001797E9: ;
    eax = eax & 0x3F;
    edx = eax;

loc_001797EE: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00179805; /* je: equal / zero */

loc_001797F2: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00179805; /* je: equal / zero */

loc_001797F7: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_0017980E;

loc_00179805: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_0017980E: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0017982A; /* je: equal / zero */

loc_0017981E: ;
    ebx = ebx & 0x3F;
    eax = 0x40;
    eax = eax - ebx;
    goto loc_0017982F;

loc_0017982A: ;
    ebx = ebx & 0x3F;
    eax = ebx;

loc_0017982F: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00179846; /* je: equal / zero */

loc_00179833: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00179846; /* je: equal / zero */

loc_00179838: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_0017984F;

loc_00179846: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0017984F: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00179874; /* je: equal / zero */

loc_00179868: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_00179879;

loc_00179874: ;
    eax = eax & 0x3F;
    esi = eax;

loc_00179879: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00179890; /* je: equal / zero */

loc_0017987D: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00179890; /* je: equal / zero */

loc_00179882: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00179899;

loc_00179890: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00179899: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(ecx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001798B5; /* je: equal / zero */

loc_001798A9: ;
    ecx = ecx & 0x3F;
    eax = 0x40;
    eax = eax - ecx;
    goto loc_001798BA;

loc_001798B5: ;
    ecx = ecx & 0x3F;
    eax = ecx;

loc_001798BA: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001798CC; /* je: equal / zero */

loc_001798BE: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm5 = xmm5 - MEMF(eax * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_001798D5; /* jne: not equal / not zero */

loc_001798CC: ;
    xmm5 = MEMF(eax * 4 + 0x743090); /* movss */

loc_001798D5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001798DA: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x12C); /* addss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x130); /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x134); /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm5 = xmm5 * xmm7; /* mulss */
    MEMF(esp + 0xA4) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179973: ;
    eax = eax & 0x1F;
    eax = eax + 0x14;
    MEM32(esp + 0xC0) = eax;
    MEMF(esp + 0x54) = xmm6; /* movss */
    MEMF(esp + 0x5C) = xmm6; /* movss */
    MEMF(esp + 0x60) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00179997: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001799AE: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001799BD: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001799CC: ;
    xmm5 = MEMF(0x648F08); /* movss */
    xmm6 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001799F5: ;
    edx = MEM32(esp + 0x138);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x6C;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, edi);
    xmm6 = xmm6 - xmm0; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0xD0) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00179A20: ;
    esp = esp + 0x20;
    ebp--;
    if ((ebp != 0)) goto loc_00179782; /* jne: not equal / not zero */

loc_00179A2A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00179A2D: ;
    xmm0 = MEMF(esp + 0x120); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x124); /* movss */
    eax = 0x1F4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x128); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM16(esp + 0x2A) = LO16(eax);
    MEM16(esp + 0x2C) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179A6E: ;
    eax = eax & 0xF;
    eax = eax + 0x32;
    MEM16(esp + 0x2E) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179A7E: ;
    eax = eax & 0xF;
    eax = eax + 0x32;
    MEM16(esp + 0x30) = LO16(eax);
    MEM16(esp + 0x32) = LO16(edi);
    MEM16(esp + 0x34) = LO16(edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179A98: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esp + 0x38) = LO16(edi);
    MEM16(esp + 0x3A) = 0x258;
    edx = edx + 0x12C;
    MEM16(esp + 0x36) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179ABC: ;
    eax = eax & 3;
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B42BC));
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x6B42BD));
    MEM8(esp + 0x3C) = LO8(edx);
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B42BE));
    MEM8(esp + 0x3D) = LO8(ecx);
    MEM8(esp + 0x3E) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179AE5: ;
    eax = eax & 3;
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x6B42BC));
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B42BD));
    SET_LO8(eax, MEM8(eax + eax * 2 + 0x6B42BE));
    MEM8(esp + 0x41) = LO8(eax);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    MEM8(esp + 0x43) = LO8(ecx);
    MEM8(esp + 0x44) = LO8(edx);
    MEM8(esp + 0x46) = 0xFF;
    MEM8(esp + 0x47) = 0xFF;
    MEM8(esp + 0x48) = 0xA;
    MEM8(esp + 0x49) = 0;
    PUSH32(esp, 0); sub_0014F2B0(); /* call 0x0014F2B0 */

loc_00179B28: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_00179B40
 * Original: 0x00179B40 - 0x00179BE5 (165 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00179B40: ;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(esp + 0x34) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esp + 0x74));
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    MEM8(esp + 0x10) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x7C));
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x54) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x78));
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x58) = edx;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM8(esp + 0x12) = 1;
    MEM8(esp + 0x13) = 1;
    MEM16(esp + 0x14) = LO16(ecx);
    if (CMP_NE(LO8(eax), 2)) { sub_00179BE5(); return; } /* jne: not equal / not zero */

loc_00179BC7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00179BCC: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00179BD8; /* jns: not sign (positive) */

loc_00179BD3: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00179BD8: ;
    SET_LO8(edx, MEM8(eax * 4 + 0x75DE4C));
    MEM8(esp + 0x16) = LO8(edx);
    g_seh_ebp = ebp; sub_00179C23(); return; /* tail jmp 0x00179C23 */

}

/**
 * sub_00179CE0
 * Original: 0x00179CE0 - 0x00179E9D (445 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179CE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00179CE0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x30));
    esp = esp - 0xC;
    if (CMP_LE(MEM16(eax + 0xF0), LO16(ecx))) goto loc_00179D09; /* jle: less or equal (signed <=) */

loc_00179CF4: ;
    edx = ZX8(MEM8(eax + 0x36));
    ecx = SX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0xF4));
    if (CMP_GE(ecx, edx)) goto loc_00179D09; /* jge: greater or equal (signed >=) */

loc_00179D06: ;
    MEM8(eax + 0x36) = LO8(ecx);

loc_00179D09: ;
    xmm3 = MEMF(eax + 0x120); /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    ecx = eax + 0x108;
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x7FA20C);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x10C); /* addss */
    MEM32(esp + 8) = esi;
    MEMF(eax + 0x10C) = xmm3; /* movss */
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_00179D9F; /* je: equal / zero */

loc_00179D55: ;
    xmm1 = MEMF(eax + 0x124); /* movss */
    xmm2 = MEMF(ecx); /* movss */
    xmm4 = MEMF(eax + 0x110); /* movss */
    /* nop */

loc_00179D70: ;
    edx--;
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm4 = xmm5; /* movaps */
    if ((edx != 0)) goto loc_00179D70; /* jne: not equal / not zero */

loc_00179D8B: ;
    MEMF(eax + 0x10C) = xmm3; /* movss */
    MEMF(ecx) = xmm2; /* movss */
    MEMF(eax + 0x110) = xmm4; /* movss */

loc_00179D9F: ;
    xmm2 = MEMF(eax + 0x10C); /* movss */
    xmm3 = MEMF(eax + 0x110); /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm4 = MEMF(0x7FA248); /* movss */
    xmm5 = MEMF(esp); /* movss */
    xmm6 = MEMF(esp + 4); /* movss */
    xmm7 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm4; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm4; /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm2; /* movss */
    xmm1 = MEMF(eax + 0x114); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xF8); /* addss */
    MEMF(eax + 0xF8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x118); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xFC); /* addss */
    MEMF(eax + 0xFC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x11C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x100); /* addss */
    MEMF(eax + 0x100) = xmm1; /* movss */
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00179EA0
 * Original: 0x00179EA0 - 0x00179FC8 (296 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179EA0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00179EA0: ;
    xmm0 = MEMF(0x648E18); /* movss */
    edx = MEM32(esp + 4);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm1 = MEMF(esi + 0x100); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xFC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xF8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00179F07: ;
    eax = MEM32(esi + 0x44);
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm3 = MEMF(edx); /* movss */
    MEMF(edx + 0x34) = xmm1; /* movss */
    MEM32(edx + 0x30) = eax;
    MEMF(edx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x104); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(edx) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(edx + 4); /* mulss */
    xmm1 = xmm0; /* movaps */
    MEMF(edx + 4) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0xC); /* mulss */
    xmm3 = xmm3 * MEMF(edx + 8); /* mulss */
    MEMF(edx + 0xC) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x10); /* mulss */
    MEMF(edx + 0x10) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x14); /* mulss */
    MEMF(edx + 0x14) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x1C); /* mulss */
    xmm2 = xmm2 * MEMF(edx + 0x18); /* mulss */
    MEMF(edx + 0x1C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x20); /* mulss */
    MEMF(edx + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x24); /* mulss */
    MEMF(edx + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x28); /* mulss */
    xmm0 = xmm0 * MEMF(edx + 0x2C); /* mulss */
    esp = esp + 0x24;
    MEMF(edx + 8) = xmm3; /* movss */
    MEMF(edx + 0x18) = xmm2; /* movss */
    MEMF(edx + 0x28) = xmm1; /* movss */
    MEMF(edx + 0x2C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00179FD0
 * Original: 0x00179FD0 - 0x0017A064 (148 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00179FD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00179FD0: ;
    esp = esp - 0x10;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 8) = LO8(eax);
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00179FEB: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 * MEMF(0x648CDC); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017A012: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0017A060; /* je: equal / zero */

loc_0017A019: ;
    xmm0 = MEMF(esp); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x52;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x3F;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0017A060: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A070
 * Original: 0x0017A070 - 0x0017A2E9 (633 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A070: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x4C);
    eax = MEM32(ebp + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0017A2D6; /* je: equal / zero */

loc_0017A087: ;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) goto loc_0017A2D6; /* jne: not equal / not zero */

loc_0017A096: ;
    eax = MEM32(ebp + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0017A2E3; /* je: equal / zero */

loc_0017A0A4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A0A9: ;
    xmm0 = xmm0 * MEMF(0x64A38C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A388); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0017A2E3; /* jbe: below or equal (unsigned <=) */

loc_0017A0D8: ;
    xmm0 = MEMF(ebp + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x14;
    edi = esp + 0x58;
    ecx = esp + 0x24;
    eax = ebp;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_0017A10B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x58);
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_0017A118: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017A11E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x32;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017A12F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x169;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0017A141: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0x1F8); /* mulss */
    xmm5 = MEMF(esp + 0x24); /* movss */
    xmm7 = MEMF(esp + 0x2C); /* movss */
    xmm6 = MEMF(esp + 0x34); /* movss */
    xmm5 = xmm5 + MEMF(esp + 0x30); /* addss */
    xmm7 = xmm7 + MEMF(esp + 0x38); /* addss */
    xmm6 = xmm6 + xmm0; /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A18B: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A19E: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A1B1: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A1C4: ;
    xmm0 = xmm0 * MEMF(0x64A384); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A380); /* addss */
    xmm5 = xmm5 - MEMF(esp + 0x24); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x28); /* subss */
    xmm7 = xmm7 - MEMF(esp + 0x2C); /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A209: ;
    xmm5 = MEMF(0x64A37C); /* movss */
    xmm6 = MEMF(0x64A378); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A22C: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017A249: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x3F71E1F4);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A261: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x6499F0); /* mulss */
    xmm5 = xmm5 - MEMF(0x64A374); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017A279: ;
    xmm0 = xmm0 * MEMF(0x6490E8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64909C); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    edx = edi;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    ecx = esp + 0x5C;
    edx = esp + 0x68;
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_00179B40(); /* call 0x00179B40 */

loc_0017A2AC: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x20;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0017A118; /* ja: above (unsigned >) */

loc_0017A2CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0017A2D6: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */

loc_0017A2E3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A2F0
 * Original: 0x0017A2F0 - 0x0017A3F4 (260 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A2F0: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0017A3F2; /* jnp: not parity */

loc_0017A30C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(MEM8(esi + 0x3A), 1)) goto loc_0017A326; /* je: equal / zero */

loc_0017A317: ;
    MEM16(esi + 0x38) = MEM16(esi + 0x38) - 1;
    if (CMP_GE(MEM16(esi + 0x38), LO16(edi))) goto loc_0017A326; /* jge: greater or equal (signed >=) */

loc_0017A321: ;
    edi = 1;

loc_0017A326: ;
    SET_LO8(eax, MEM8(esi + 0x4F));
    if (CMP_B(LO8(eax), 0x13)) goto loc_0017A370; /* jb: below (unsigned <) */

loc_0017A32D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017A3F1; /* jne: not equal / not zero */

loc_0017A33A: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0017A341: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0017A3F1; /* jl: less (signed <) */

loc_0017A34C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0017A362; /* je: equal / zero */

loc_0017A359: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017A35C: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0017A362: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0017A370: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017A38F; /* je: equal / zero */

loc_0017A374: ;
    if (TEST_NZ(edi, edi)) goto loc_0017A38F; /* jne: not equal / not zero */

loc_0017A378: ;
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x598978), _icall_esp); /* indirect call */
    }

loc_0017A383: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0017A38F; /* jne: not equal / not zero */

loc_0017A38A: ;
    edi = 1;

loc_0017A38F: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    if (CMP_AE(LO8(eax), 0x17)) goto loc_0017A3EC; /* jae: above or equal (unsigned >=) */

loc_0017A396: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017A3B5; /* je: equal / zero */

loc_0017A39A: ;
    if (TEST_NZ(edi, edi)) goto loc_0017A3B5; /* jne: not equal / not zero */

loc_0017A39E: ;
    ecx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5989C8), _icall_esp); /* indirect call */
    }

loc_0017A3A9: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0017A3B5; /* jne: not equal / not zero */

loc_0017A3B0: ;
    edi = 1;

loc_0017A3B5: ;
    if (TEST_Z(MEM8(esi + 0x3A), 0x10)) goto loc_0017A3E8; /* je: equal / zero */

loc_0017A3BB: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    if (CMP_L(LO8(eax), 0xFF)) goto loc_0017A3EC; /* jl: less (signed <) */

loc_0017A3C2: ;
    if (CMP_GE(LO8(eax), 0xB)) goto loc_0017A3EC; /* jge: greater or equal (signed >=) */

loc_0017A3C6: ;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0017A3E8; /* je: equal / zero */

loc_0017A3CA: ;
    if (TEST_NZ(edi, edi)) goto loc_0017A3EC; /* jne: not equal / not zero */

loc_0017A3CE: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x598A24), _icall_esp); /* indirect call */
    }

loc_0017A3D9: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0017A3F1; /* jne: not equal / not zero */

loc_0017A3E0: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0017A3E5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0017A3E8: ;
    if (TEST_Z(edi, edi)) goto loc_0017A3F1; /* je: equal / zero */

loc_0017A3EC: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0017A3F1: ;
    POP32(esp, esi);

loc_0017A3F2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017A400
 * Original: 0x0017A400 - 0x0017A42B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A400: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0017A410: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_0017A415: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0017A42B(); return; } /* jne: not equal / not zero */

loc_0017A41E: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0017A430
 * Original: 0x0017A430 - 0x0017A450 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A430(void)
{

loc_0017A430: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0017A440: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_0017A445: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0017A44B: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017A450
 * Original: 0x0017A450 - 0x0017A4F1 (161 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A450(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A450: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_0017A4AC; /* jl: less (signed <) */

loc_0017A45D: ;
    esi = ebx + 0x5C;

loc_0017A460: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0017A49F; /* je: equal / zero */

loc_0017A466: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0017A46C: ;
    if (TEST_NZ(eax, eax)) goto loc_0017A49F; /* jne: not equal / not zero */

loc_0017A470: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0017A49F; /* je: equal / zero */

loc_0017A476: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0017A496: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0017A49F: ;
    eax = MEM32(0x84A144);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, eax)) goto loc_0017A460; /* jle: less or equal (signed <=) */

loc_0017A4AC: ;
    eax = MEM32(ebx + 0x6C);
    if (TEST_Z(eax, eax)) goto loc_0017A4EE; /* je: equal / zero */

loc_0017A4B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0017A4B9: ;
    if (TEST_NZ(eax, eax)) goto loc_0017A4EE; /* jne: not equal / not zero */

loc_0017A4BD: ;
    eax = MEM32(ebx + 0x6C);
    if (TEST_Z(eax, eax)) goto loc_0017A4EE; /* je: equal / zero */

loc_0017A4C4: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0017A4E4: ;
    esp = esp + 4;
    MEM32(ebx + 0x6C) = 0;

loc_0017A4EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017A500
 * Original: 0x0017A500 - 0x0017A535 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A500(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A500: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x3C);
    if (TEST_S(eax, eax)) goto loc_0017A510; /* jl: less (signed <) */

loc_0017A50B: ;
    if (CMP_L(eax, 0x18)) goto loc_0017A512; /* jl: less (signed <) */

loc_0017A510: ;
    eax = 0; /* xor self */

loc_0017A512: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x598AA8), _icall_esp); /* indirect call */
    }

loc_0017A51A: ;
    eax = MEM32(0x774E88);
    esp = esp + 4;
    eax--;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx--;
    ecx = ecx & eax;
    MEM32(0x774E88) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A540
 * Original: 0x0017A540 - 0x0017A575 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A540(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A540: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x3C);
    if (TEST_S(eax, eax)) goto loc_0017A550; /* jl: less (signed <) */

loc_0017A54B: ;
    if (CMP_L(eax, 0x18)) goto loc_0017A552; /* jl: less (signed <) */

loc_0017A550: ;
    eax = 0; /* xor self */

loc_0017A552: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x598B08), _icall_esp); /* indirect call */
    }

loc_0017A55A: ;
    eax = MEM32(0x774E88);
    esp = esp + 4;
    eax--;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx--;
    ecx = ecx & eax;
    MEM32(0x774E88) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A580
 * Original: 0x0017A580 - 0x0017A59F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A580(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A580: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_L(MEM32(0x774E88), 0x96)) { sub_0017A59F(); return; } /* jl: less (signed <) */

loc_0017A597: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A740
 * Original: 0x0017A740 - 0x0017A75F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A740(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A740: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x51));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017A75E; /* je: equal / zero */

loc_0017A74B: ;
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x598A50), _icall_esp); /* indirect call */
    }

loc_0017A75B: ;
    esp = esp + 8;

loc_0017A75E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017A760
 * Original: 0x0017A760 - 0x0017A765 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A760(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017A760: ;
    g_seh_ebp = ebp; sub_000DB8E0(); return; /* tail jmp 0x000DB8E0 */

}

/**
 * sub_0017A790
 * Original: 0x0017A790 - 0x0017AA3F (687 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017A790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017A790: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0017A7AD; /* je: equal / zero */

loc_0017A7A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0017A7A7: ;
    MEM32(0x771760) = esi;

loc_0017A7AD: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0017A7D0: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0017A7E9: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0017A803; /* je: equal / zero */

loc_0017A7F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0017A7FD: ;
    MEM32(0x77182C) = esi;

loc_0017A803: ;
    eax = MEM32(0x771828);
    esi = 0x901;
    if (CMP_EQ(eax, esi)) goto loc_0017A81D; /* je: equal / zero */

loc_0017A811: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0017A817: ;
    MEM32(0x771828) = esi;

loc_0017A81D: ;
    eax = MEM32(0x771824);
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_0017A844; /* je: equal / zero */

loc_0017A82C: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017A838: ;
    MEM32(0x549AE4) = ebx;
    MEM32(0x771824) = ebx;

loc_0017A844: ;
    eax = MEM32(0x771820);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0017A867; /* je: equal / zero */

loc_0017A84F: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017A85B: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_0017A867: ;
    if (CMP_EQ(MEM32(0x77181C), ebx)) goto loc_0017A87B; /* je: equal / zero */

loc_0017A86F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0017A875: ;
    MEM32(0x77181C) = ebx;

loc_0017A87B: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_0017A8A1; /* je: equal / zero */

loc_0017A889: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017A895: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_0017A8A1: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_0017A8C1; /* je: equal / zero */

loc_0017A8A9: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017A8B5: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_0017A8C1: ;
    (void)0; /* cmp MEM32(0x771810), edi - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_0017A8DF; /* je: equal / zero */

loc_0017A8CE: ;
    eax = eax | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_0017A8DF: ;
    edx = MEM32(0x7717E4);
    ecx = 4;
    if (CMP_EQ(edx, ecx)) goto loc_0017A8FF; /* je: equal / zero */

loc_0017A8EE: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_0017A8FF: ;
    esi = MEM32(0x7717C4);
    edx = 2;
    if (CMP_EQ(esi, edx)) goto loc_0017A91F; /* je: equal / zero */

loc_0017A90E: ;
    eax = eax | 0x800;
    MEM32(0x547368) = edx;
    MEM32(0x7717C4) = edx;

loc_0017A91F: ;
    if (CMP_EQ(MEM32(0x7717B4), edi)) goto loc_0017A938; /* je: equal / zero */

loc_0017A927: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = edi;
    MEM32(0x7717B4) = edi;

loc_0017A938: ;
    if (CMP_EQ(MEM32(0x7717A4), ecx)) goto loc_0017A951; /* je: equal / zero */

loc_0017A940: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_0017A951: ;
    if (CMP_EQ(MEM32(0x771784), edi)) goto loc_0017A96A; /* je: equal / zero */

loc_0017A959: ;
    eax = eax | 0x800;
    MEM32(0x547378) = edi;
    MEM32(0x771784) = edi;

loc_0017A96A: ;
    if (CMP_EQ(MEM32(0x771774), edx)) goto loc_0017A983; /* je: equal / zero */

loc_0017A972: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = edx;
    MEM32(0x771774) = edx;

loc_0017A983: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_0017A9B1; /* je: equal / zero */

loc_0017A9A0: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ebx;
    MEM32(0x7717E8) = ebx;

loc_0017A9B1: ;
    if (CMP_EQ(MEM32(0x7717A8), ebx)) goto loc_0017A9CA; /* je: equal / zero */

loc_0017A9B9: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ebx;
    MEM32(0x7717A8) = ebx;

loc_0017A9CA: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = edi;
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_0017AA01; /* je: equal / zero */

loc_0017A9E9: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017A9F5: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0017AA01: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_0017AA27; /* je: equal / zero */

loc_0017AA0F: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017AA1B: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_0017AA27: ;
    if (CMP_EQ(MEM32(0x77175C), edi)) goto loc_0017AA3C; /* je: equal / zero */

loc_0017AA2F: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0017AA36: ;
    MEM32(0x77175C) = edi;

loc_0017AA3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017AA40
 * Original: 0x0017AA40 - 0x0017AA77 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AA40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017AA40: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0x38));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    eax = eax + 0x34;
    PUSH32(esp, ecx);
    MEM32(ecx + 0x10) = 1;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_0017AA6F: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) { sub_0017AA77(); return; } /* jne: not equal / not zero */

loc_0017AA76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017AAE0
 * Original: 0x0017AAE0 - 0x0017ABA8 (200 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017AAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017AAE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x144);
    SET_LO8(eax, MEM8(esi + 0x2C));
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AB0D; /* je: equal / zero */

loc_0017AAF6: ;
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B7730), _icall_esp); /* indirect call */
    }

loc_0017AB01: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0017AB0D; /* jne: not equal / not zero */

loc_0017AB08: ;
    ebx = 1;

loc_0017AB0D: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AB2F; /* je: equal / zero */

loc_0017AB14: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0017AB2F; /* jne: not equal / not zero */

loc_0017AB18: ;
    ecx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B7750), _icall_esp); /* indirect call */
    }

loc_0017AB23: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0017AB2F; /* jne: not equal / not zero */

loc_0017AB2A: ;
    ebx = 1;

loc_0017AB2F: ;
    if (TEST_Z(MEM8(esi + 0x18), 0x40)) goto loc_0017AB5A; /* je: equal / zero */

loc_0017AB35: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0017AB5E; /* jne: not equal / not zero */

loc_0017AB39: ;
    SET_LO16(ecx, MEM16(edi + 0x38));
    if (CMP_GE(LO16(ecx), MEM16(esi + 0x22))) goto loc_0017AB73; /* jge: greater or equal (signed >=) */

loc_0017AB43: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    edx = SX16(LO16(ecx));
    ecx = ZX8(MEM8(esi + 0x21));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    if (CMP_LE(ecx, eax)) goto loc_0017AB73; /* jle: less or equal (signed <=) */

loc_0017AB55: ;
    MEM8(esi + 0x21) = LO8(eax);
    goto loc_0017AB73;

loc_0017AB5A: ;
    if (TEST_Z(ebx, ebx)) goto loc_0017AB73; /* je: equal / zero */

loc_0017AB5E: ;
    SET_LO8(eax, MEM8(esi + 0x2E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AB73; /* je: equal / zero */

loc_0017AB65: ;
    edx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x849424), _icall_esp); /* indirect call */
    }

loc_0017AB70: ;
    esp = esp + 4;

loc_0017AB73: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) { sub_0017ABA8(); return; } /* jle: less or equal (signed <=) */

loc_0017AB7A: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    ecx = MEM32(edi + 0x140);
    eax = eax + eax * 4;
    edx = ecx + eax * 4;
    eax = MEM32(edx);
    edi = edi + 0x74;
    MEM32(edi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_Z(ebx, ebx)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017ABD0
 * Original: 0x0017ABD0 - 0x0017B2A1 (1745 bytes, 451 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017ABD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017ABD0: ;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    SET_LO8(eax, MEM8(esi + 0x4C));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    ecx = 1;
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(LO8(eax), LO8(ecx))) goto loc_0017B26F; /* jle: less or equal (signed <=) */

loc_0017ABF3: ;
    eax = MEM32(edi + 0x18);
    eax = eax >> 5;
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499F0);
    MEM8(esp + 0xF) = LO8(eax);
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    eax = ZX8(MEM8(edi + 0x1C));
    eax = MEM32(eax * 4 + 0x6A3858);
    ebx = ebx | ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    MEM32(0x5499F0) = ebx;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0017AC2F: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_NZ(ebx, ebx)) goto loc_0017AC46; /* jne: not equal / not zero */

loc_0017AC38: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0017AC3E: ;
    MEM32(0x771764) = ebx;
    goto loc_0017AC5D;

loc_0017AC46: ;
    if (CMP_EQ(MEM32(0x771764), ebx)) goto loc_0017AC5D; /* je: equal / zero */

loc_0017AC4E: ;
    eax = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0017AC57: ;
    MEM32(0x771764) = ebx;

loc_0017AC5D: ;
    SET_LO8(eax, MEM8(esi + 0x52));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AC6D; /* je: equal / zero */

loc_0017AC64: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_0017AC6D; /* jne: not equal / not zero */

loc_0017AC68: ;
    PUSH32(esp, 0); sub_0013C8F0(); /* call 0x0013C8F0 */

loc_0017AC6D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x84);
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    ebp--;
    eax = ecx + edx + 0x330;
    ecx = MEM32(esi + 0x140);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    if (((int32_t)ebp >= 0)) goto loc_0017ACA2; /* jns: not sign (positive) */

loc_0017AC9D: ;
    ebp = ZX8(MEM8(esi + 0x41));
    ebp--;

loc_0017ACA2: ;
    ebx = ebp + -1;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0017ACB8; /* jge: greater or equal (signed >=) */

loc_0017ACAD: ;
    eax = ZX8(MEM8(esi + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;
    ebx = eax;

loc_0017ACB8: ;
    edx = MEM32(edi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_0017ACC3: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4C);
    edi = eax + eax * 2;
    edi = edi << 4;
    edi = edi >> 2;
    esp = esp + 8;
    esi = edi + 5;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_0017ACDB: ;
    esi = eax;
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    edi = edi << 0x12;
    MEM32(esi) = 6;
    edi = edi + 0x40001818;
    esi = esi + 4;
    MEM32(esi) = edi;
    edi = MEM32(esp + 0x28);
    eax = ebp + ebp * 4;
    ecx = edi + eax * 4;
    edx = ebx + ebx * 4;
    edi = edi + edx * 4;
    eax = esp + 0x64;
    esi = esi + 4;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x2C) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x64;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0017AD50: ;
    ecx = esp + 0x58;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x58;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0017AD8A: ;
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm3 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x58); /* movss */
    edx = MEM32(esp + 0x70);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    eax = MEM32(esp + 0x74);
    MEMF(esp + 0x78) = xmm0; /* movss */
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x4C) = edx;
    edx = esp + 0x4C;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x2C);
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
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0017AE6C; /* jp: parity */

loc_0017AE49: ;
    ecx = MEM32(0x5A02D0);
    eax = MEM32(0x5A02CC);
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x54) = edx;
    goto loc_0017AEB1;

loc_0017AE6C: ;
    ecx = MEM32(esp + 0x20);
    xmm1 = MEMF(ecx); /* movss */
    eax = esp + 0x4C;
    edx = eax;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = edx;
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0017AEB1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = xmm3; /* movaps */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017AEC7; /* je: equal / zero */

loc_0017AEC4: ;
    xmm2 = xmm4; /* movaps */

loc_0017AEC7: ;
    edx = ZX8(MEM8(ecx + 0x1F));
    xmm5 = MEMF(esp + 0x4C); /* movss */
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(ecx + 0x21));
    esi = esi + 4;
    esi = esi + 4;
    esi = esi + 4;
    esi = esi + 4;
    esi = esi + 4;
    esi = esi + 4;
    SET_LO8(eax, MEM8(ecx + 0x1E));
    ecx = ZX8(MEM8(ecx + 0x20));
    esi = esi + 4;
    esi = esi + 4;
    esi = esi + 4;
    eax = eax << 8;
    eax = eax | edx;
    eax = eax << 8;
    ecx = ecx | eax;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x50); /* addss */
    xmm5 = xmm5 + MEMF(eax); /* addss */
    MEMF(esi + -36) = xmm5; /* movss */
    MEMF(esi + -32) = xmm1; /* movss */
    MEMF(esi + -28) = xmm0; /* movss */
    MEM32(esi + -24) = ecx;
    MEMF(esi + -20) = xmm4; /* movss */
    MEMF(esi + -16) = xmm2; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(eax); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x54); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x50); /* subss */
    xmm4 = xmm4 - MEMF(esp + 0x4C); /* subss */
    MEMF(esi + -12) = xmm4; /* movss */
    MEMF(esi + -8) = xmm1; /* movss */
    MEMF(esi + -4) = xmm0; /* movss */
    MEM32(esi) = ecx;
    esi = esi + 4;
    MEMF(esi) = xmm3; /* movss */
    esi = esi + 4;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x80);
    MEMF(esi) = xmm2; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    esi = esi + 4;
    eax++;
    edx = edx - eax;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM32(esp + 0x40) = eax;
    xmm0 = xmm3; /* movaps */
    eax = esp + 0x64;
    ecx = esp + 0x58;
    edx = esp + 0x4C;
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x2C) = edx;

loc_0017AFC1: ;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x34);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x64;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0017B01A: ;
    eax = esp + 0x58;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0017B025: ;
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm3 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x58); /* movss */
    eax = MEM32(esp + 0x70);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    ecx = MEM32(esp + 0x74);
    MEMF(esp + 0x78) = xmm0; /* movss */
    edx = MEM32(esp + 0x78);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x2C);
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
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0017B0FB; /* jp: parity */

loc_0017B0DC: ;
    eax = MEM32(0x5A02CC);
    ecx = MEM32(0x5A02D0);
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    goto loc_0017B140;

loc_0017B0FB: ;
    eax = MEM32(esp + 0x20);
    xmm1 = MEMF(eax); /* movss */
    ecx = esp + 0x4C;
    edx = ecx;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0017B140: ;
    ecx = MEM32(esp + 0x40);
    SET_LO8(eax, MEM8(esp + 0x13));
    ebp = ebp - ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(esp + 0x44); /* mulss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017B167; /* je: equal / zero */

loc_0017B158: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = xmm0; /* movaps */

loc_0017B167: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    xmm4 = MEMF(edi); /* movss */
    xmm4 = xmm4 + MEMF(esp + 0x4C); /* addss */
    MEMF(esi) = xmm4; /* movss */
    eax = MEM32(esp + 0x48);
    MEMF(esi + 4) = xmm1; /* movss */
    esi = esi + 4;
    MEMF(esi + 4) = xmm0; /* movss */
    esi = esi + 4;
    MEM32(esi + 4) = eax;
    esi = esi + 4;
    MEMF(esi + 4) = xmm3; /* movss */
    esi = esi + 4;
    MEMF(esi + 4) = xmm2; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm3 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x54); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x50); /* subss */
    xmm3 = xmm3 - MEMF(esp + 0x4C); /* subss */
    esi = esi + 4;
    MEMF(esi + 4) = xmm3; /* movss */
    esi = esi + 4;
    esi = esi + 4;
    MEMF(esi) = xmm1; /* movss */
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esi = esi + 4;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    esi = esi + 4;
    MEMF(esi) = xmm0; /* movss */
    esi = esi + 4;
    MEMF(esi) = xmm2; /* movss */
    esi = esi + 4;
    ebp = eax;
    eax--;
    MEM32(esp + 0x14) = eax;
    if (((int32_t)eax >= 0)) goto loc_0017B226; /* jns: not sign (positive) */

loc_0017B216: ;
    eax = MEM32(esp + 0x80);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;

loc_0017B226: ;
    edi = MEM32(esp + 0x28);
    ecx = ebp + ebp * 4;
    edx = edi + ecx * 4;
    ecx = MEM32(esp + 0x80);
    MEM32(esp + 0x18) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    eax = eax + eax * 4;
    edi = edi + eax * 4;
    MEM32(esp + 0x1C) = edi;
    if (CMP_NE(ebp, edx)) goto loc_0017AFC1; /* jne: not equal / not zero */

loc_0017B252: ;
    eax = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    esi = esi + 4;
    MEM32(esi) = 0;
    esi = esi + 4;
    POP32(esp, ebp);
    MEM32(eax) = esi;
    esi = ecx;
    POP32(esp, ebx);

loc_0017B26F: ;
    SET_LO8(eax, MEM8(esi + 0x52));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017B281; /* je: equal / zero */

loc_0017B278: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_0017B281; /* jne: not equal / not zero */

loc_0017B27C: ;
    PUSH32(esp, 0); sub_0013C7E0(); /* call 0x0013C7E0 */

loc_0017B281: ;
    eax = MEM32(0x771764);
    if (TEST_Z(eax, eax)) goto loc_0017B29D; /* je: equal / zero */

loc_0017B28A: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0017B293: ;
    MEM32(0x771764) = 0;

loc_0017B29D: ;
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B2B0
 * Original: 0x0017B2B0 - 0x0017B487 (471 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B2B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    xmm0 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x140);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x144);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(edx, eax)) goto loc_0017B347; /* je: equal / zero */

loc_0017B2DD: ;
    /* nop */

loc_0017B2E0: ;
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = edx + edx * 4;
    xmm2 = MEMF(ebp + eax * 4 + 0xC); /* movss */
    eax = ebp + eax * 4;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0xC) = xmm2; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    eax = ZX8(MEM8(ecx + 0x41));
    edx++;
    if (CMP_NE(edx, eax)) goto loc_0017B33F; /* jne: not equal / not zero */

loc_0017B33D: ;
    edx = 0; /* xor self */

loc_0017B33F: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    if (CMP_NE(edx, eax)) goto loc_0017B2E0; /* jne: not equal / not zero */

loc_0017B347: ;
    SET_LO8(ebx, MEM8(ecx + 0x4C));
    edx = ZX8(MEM8(ecx + 0x41));
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x148); /* addss */
    eax = SX8(LO8(ebx));
    edx--;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEMF(ecx + 0x148) = xmm0; /* movss */
    if (CMP_GE(eax, edx)) goto loc_0017B442; /* jge: greater or equal (signed >=) */

loc_0017B372: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0017B47C; /* ja: above (unsigned >) */

loc_0017B383: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ecx + 0x148) = xmm0; /* movss */
    edi = ZX8(MEM8(esi + 0x18));
    edi = edi & 0x20;
    edi = edi << 7;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0017B3B8; /* je: equal / zero */

loc_0017B3A5: ;
    eax = 0x1000;
    ebp = SX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;

loc_0017B3B8: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(ecx + 0x4C) = LO8(ebx);
    edx = edx + edx * 4;
    edx = ebp + edx * 4;
    eax = ecx + 0x2C;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    eax = MEM32(esi + 8);
    edx = edx + edx * 4;
    MEM32(ebp + edx * 4 + 0xC) = eax;
    SET_LO8(eax, MEM8(ecx + 0x4E));
    edx = ZX8(MEM8(ecx + 0x41));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx + 0x4E) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, edx)) goto loc_0017B400; /* jne: not equal / not zero */

loc_0017B3FC: ;
    MEM8(ecx + 0x4E) = 0;

loc_0017B400: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    if (CMP_EQ(edx, eax)) goto loc_0017B47C; /* je: equal / zero */

loc_0017B40C: ;
    eax = MEM32(esp + 0x18);

loc_0017B410: ;
    ebx = edx + edx * 4;
    MEM16(ebp + ebx * 4 + 0x10) = LO16(edi);
    if (TEST_Z(MEM8(esi + 0x18), 0x20)) goto loc_0017B422; /* je: equal / zero */

loc_0017B41E: ;
    edi = edi - eax;
    goto loc_0017B424;

loc_0017B422: ;
    edi = edi + eax;

loc_0017B424: ;
    ebx = ZX8(MEM8(ecx + 0x41));
    edx++;
    if (CMP_NE(edx, ebx)) goto loc_0017B42F; /* jne: not equal / not zero */

loc_0017B42D: ;
    edx = 0; /* xor self */

loc_0017B42F: ;
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    if (CMP_NE(edx, ebx)) goto loc_0017B410; /* jne: not equal / not zero */

loc_0017B437: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017B442: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(LO8(eax), 0x17)) goto loc_0017B458; /* je: equal / zero */

loc_0017B449: ;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = 3;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017B458: ;
    if (TEST_Z(HI8(eax), 1)) goto loc_0017B46C; /* je: equal / zero */

loc_0017B45D: ;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = 6;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017B46C: ;
    eax = eax & 0x200;
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) & 5);
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esi + 0x2C) = LO8(eax);

loc_0017B47C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017B490
 * Original: 0x0017B490 - 0x0017B51A (138 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B490(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0017B490: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x144);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x140);
    edi = edi;

loc_0017B4B0: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_0017B4B8; /* jns: not sign (positive) */

loc_0017B4B3: ;
    ecx = ZX8(MEM8(esi + 0x41));
    ecx--;

loc_0017B4B8: ;
    eax = ecx + ecx * 4;
    xmm2 = MEMF(edi + eax * 4 + 0xC); /* movss */
    eax = edi + eax * 4;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edx + 0x10); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0xC) = xmm2; /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ecx, eax)) goto loc_0017B4B0; /* jne: not equal / not zero */

loc_0017B512: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017B520
 * Original: 0x0017B520 - 0x0017B70C (492 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B520: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = MEM32(ebp + 0x144);
    (void)0; /* test MEM8(ebx + 0x18), 7 - flags set for next jcc */
    edx = MEM32(ebp + 0x140);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(ebx + 0x18), 7)) goto loc_0017B55E; /* je: equal / zero */

loc_0017B540: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    esi = MEM32(eax);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;

loc_0017B55E: ;
    xmm0 = MEMF(0x7FA24C); /* movss */

loc_0017B566: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_0017B56E; /* jns: not sign (positive) */

loc_0017B569: ;
    ecx = ZX8(MEM8(ebp + 0x41));
    ecx--;

loc_0017B56E: ;
    eax = ecx + ecx * 4;
    xmm2 = MEMF(edx + eax * 4 + 0xC); /* movss */
    eax = edx + eax * 4;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebx + 0x10); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0xC) = xmm2; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    if (CMP_NE(ecx, eax)) goto loc_0017B566; /* jne: not equal / not zero */

loc_0017B5C8: ;
    if (TEST_Z(MEM8(ebx + 0x18), 0x17)) goto loc_0017B700; /* je: equal / zero */

loc_0017B5D2: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = eax + eax * 4;
    /* comiss xmm0, MEMF(edx + ecx * 4 + 4) - sets EFLAGS */
    ecx = edx + ecx * 4 + 4;
    if ((xmm0 <= MEMF(edx + ecx * 4 + 4))) goto loc_0017B700; /* jbe: below or equal (unsigned <=) */

loc_0017B5EE: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    eax = eax + eax * 4;
    xmm1 = MEMF(edx + eax * 4); /* movss */
    eax = edx + eax * 4;
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    esi = ebp + 0x80;
    PUSH32(esp, 0);
    edi = esp + 0x28;
    MEM32(0x780AB0) = 0x5F490C;
    MEM32(0x6C0210) = 0x287;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_0017B650: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    MEM8(0x84B538) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017B6F4; /* je: equal / zero */

loc_0017B66D: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;
    if (CMP_NE(MEM8(ebp + 0x125), 3)) goto loc_0017B6BB; /* jne: not equal / not zero */

loc_0017B682: ;
    SET_LO8(ebx, MEM8(ebx + 0x30));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0017B700; /* je: equal / zero */

loc_0017B689: ;
    ecx = MEM32(esi);
    eax = ebp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = ZX8(LO8(ebx));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B77AC), _icall_esp); /* indirect call */
    }

loc_0017B6AD: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0017B700; /* jne: not equal / not zero */

loc_0017B6B4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0017B6BB: ;
    SET_LO8(ebx, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0017B700; /* je: equal / zero */

loc_0017B6C2: ;
    eax = MEM32(esi);
    edx = ebp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B7788), _icall_esp); /* indirect call */
    }

loc_0017B6E6: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0017B700; /* jne: not equal / not zero */

loc_0017B6ED: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0017B6F4: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;

loc_0017B700: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B710
 * Original: 0x0017B710 - 0x0017B913 (515 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B710: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    edx = MEM32(ebp + 0x140);
    ebx = MEM32(ebp + 0x144);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;

loc_0017B750: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_0017B758; /* jns: not sign (positive) */

loc_0017B753: ;
    ecx = ZX8(MEM8(ebp + 0x41));
    ecx--;

loc_0017B758: ;
    xmm1 = MEMF(ebx + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = ecx + ecx * 4;
    xmm2 = MEMF(edx + eax * 4 + 0xC); /* movss */
    eax = edx + eax * 4;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0xC) = xmm2; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    if (CMP_NE(ecx, eax)) goto loc_0017B750; /* jne: not equal / not zero */

loc_0017B7B3: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x14) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x14))) goto loc_0017B907; /* jbe: below or equal (unsigned <=) */

loc_0017B7C3: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    xmm1 = MEMF(ebx + 0x14); /* movss */
    ecx = eax + eax * 4;
    /* comiss xmm1, MEMF(edx + ecx * 4 + 4) - sets EFLAGS */
    ecx = edx + ecx * 4 + 4;
    if ((xmm1 < MEMF(edx + ecx * 4 + 4))) goto loc_0017B907; /* jb: below (unsigned <) */

loc_0017B7DE: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    eax = eax + eax * 4;
    xmm1 = MEMF(edx + eax * 4); /* movss */
    eax = edx + eax * 4;
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    esi = ebp + 0x80;
    PUSH32(esp, 0);
    edi = esp + 0x28;
    MEM32(0x780AB0) = 0x5F490C;
    MEM32(0x6C0210) = 0x2E3;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_0017B857: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    MEM8(0x84B538) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017B8FB; /* je: equal / zero */

loc_0017B874: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;
    if (CMP_NE(MEM8(ebp + 0x125), 3)) goto loc_0017B8C2; /* jne: not equal / not zero */

loc_0017B889: ;
    SET_LO8(ebx, MEM8(ebx + 0x30));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0017B907; /* je: equal / zero */

loc_0017B890: ;
    eax = MEM32(esi);
    edx = ebp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B77AC), _icall_esp); /* indirect call */
    }

loc_0017B8B4: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0017B907; /* jne: not equal / not zero */

loc_0017B8BB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0017B8C2: ;
    SET_LO8(ebx, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0017B907; /* je: equal / zero */

loc_0017B8C9: ;
    edx = MEM32(esi);
    ecx = ebp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B7788), _icall_esp); /* indirect call */
    }

loc_0017B8ED: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0017B907; /* jne: not equal / not zero */

loc_0017B8F4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0017B8FB: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;

loc_0017B907: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0017B920
 * Original: 0x0017B920 - 0x0017B961 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017B920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017B920: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    edx = MEM32(esi + 0x140);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    if (TEST_Z(MEM8(edi + 0x18), 7)) { sub_0017B961(); return; } /* je: equal / zero */

loc_0017B941: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    ebx = MEM32(eax);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = eax;
    g_seh_ebp = ebp; sub_0017B965(); return; /* tail jmp 0x0017B965 */

}

/**
 * sub_0017BB40
 * Original: 0x0017BB40 - 0x0017BBC4 (132 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017BB40: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x4C));
    if (CMP_LE(LO8(eax), 2)) { sub_0017BBC4(); return; } /* jle: less or equal (signed <=) */

loc_0017BB4B: ;
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ecx + 0x4C) = LO8(eax);
    ebx = SX8(LO8(eax));
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x140);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    eax = 0x1000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO8(ebx, MEM8(ecx + 0x4E));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x144);
    edx = ZX8(MEM8(edi + 0x18));
    edx = edx & 0x20;
    edx = edx << 7;
    SET_LO8(ebx, LO8(ebx) - 1);
    MEM8(ecx + 0x4E) = LO8(ebx);
    if (((int32_t)LO8(ebx) >= 0)) goto loc_0017BB8B; /* jns: not sign (positive) */

loc_0017BB83: ;
    SET_LO8(ebx, MEM8(ecx + 0x41));
    SET_LO8(ebx, LO8(ebx) - 1);
    MEM8(ecx + 0x4E) = LO8(ebx);

loc_0017BB8B: ;
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    if (CMP_EQ(esi, ebx)) goto loc_0017BBBA; /* je: equal / zero */

loc_0017BB93: ;
    ebx = esi + esi * 4;
    MEM16(ebp + ebx * 4 + 0x10) = LO16(edx);
    if (TEST_Z(MEM8(edi + 0x18), 0x20)) goto loc_0017BBA5; /* je: equal / zero */

loc_0017BBA1: ;
    edx = edx - eax;
    goto loc_0017BBA7;

loc_0017BBA5: ;
    edx = edx + eax;

loc_0017BBA7: ;
    ebx = ZX8(MEM8(ecx + 0x41));
    esi++;
    if (CMP_NE(esi, ebx)) goto loc_0017BBB2; /* jne: not equal / not zero */

loc_0017BBB0: ;
    esi = 0; /* xor self */

loc_0017BBB2: ;
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    if (CMP_NE(esi, ebx)) goto loc_0017BB93; /* jne: not equal / not zero */

loc_0017BBBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017BBD0
 * Original: 0x0017BBD0 - 0x0017BBE4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BBD0(void)
{

loc_0017BBD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    MEM8(ecx + 0x2C) = 4;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0017BBF0
 * Original: 0x0017BBF0 - 0x0017BC1F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017BBF0: ;
    esp = esp - 0x4C;
    SET_LO8(eax, MEM8(esp + 0x64));
    xmm2 = 0.0f; /* xorps self = zero */
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x64));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    PUSH32(esp, esi);
    MEMF(esp + 0x50) = xmm2; /* movss */
    edx = edx & 0x3F;
    if (TEST_Z(LO8(eax), 0x40)) { sub_0017BC1F(); return; } /* je: equal / zero */

loc_0017BC16: ;
    esi = 0x40;
    esi = esi - edx;
    g_seh_ebp = ebp; sub_0017BC21(); return; /* tail jmp 0x0017BC21 */

}

/**
 * sub_0017BDF0
 * Original: 0x0017BDF0 - 0x0017BE32 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017BDF0: ;
    eax = MEM32(0x849428);
    eax--;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx--;
    ecx = ecx & eax;
    eax = ebx + 0x130;
    MEM32(0x849428) = ecx;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0017BE17: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_0017BE1C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0017BE32(); return; } /* jne: not equal / not zero */

loc_0017BE25: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0017BE40
 * Original: 0x0017BE40 - 0x0017BE70 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BE40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017BE40: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x144);
    if (TEST_Z(ecx, ecx)) goto loc_0017BE58; /* je: equal / zero */

loc_0017BE53: ;
    if (CMP_NE(ecx, 3)) goto loc_0017BE6E; /* jne: not equal / not zero */

loc_0017BE58: ;
    if (CMP_NE(MEM8(eax + 0x2D), 0xD)) goto loc_0017BE6E; /* jne: not equal / not zero */

loc_0017BE5E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(eax + 0x40))) goto loc_0017BE6E; /* jne: not equal / not zero */

loc_0017BE69: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0017BE6E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017BE70
 * Original: 0x0017BE70 - 0x0017BEA5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BE70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0017BE70: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648E5C); /* movss */
    if (TEST_Z(eax, eax)) goto loc_0017BE89; /* je: equal / zero */

loc_0017BE81: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_0017BE89: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) { sub_0017BEA5(); return; } /* jb: below (unsigned <) */

loc_0017BEA2: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0017BEC0
 * Original: 0x0017BEC0 - 0x0017BFBD (253 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BEC0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;

loc_0017BEC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esi + 0x4C));
    edx = MEM32(esi + 0x144);
    ebx = MEM32(esi + 0x140);
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0017BF71; /* je: equal / zero */

loc_0017BEDF: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(edi, ecx)) goto loc_0017BF70; /* je: equal / zero */

loc_0017BEF0: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */

loc_0017BF00: ;
    xmm2 = MEMF(edx + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    ecx = edi;
    ecx = ecx << 4;
    xmm2 = xmm2 + MEMF(ecx + ebx); /* addss */
    ecx = ecx + ebx;
    MEMF(ecx) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x10); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0xC); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0xC); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(edx + 0x10); /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0xC); /* addss */
    MEMF(ecx + 0xC) = xmm2; /* movss */
    ecx = ZX8(MEM8(esi + 0x41));
    edi++;
    if (CMP_NE(edi, ecx)) goto loc_0017BF68; /* jne: not equal / not zero */

loc_0017BF66: ;
    edi = 0; /* xor self */

loc_0017BF68: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    if (CMP_NE(edi, ecx)) goto loc_0017BF00; /* jne: not equal / not zero */

loc_0017BF70: ;
    POP32(esp, edi);

loc_0017BF71: ;
    SET_LO8(ecx, MEM8(edx + 0x38));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0017BF8E; /* je: equal / zero */

loc_0017BF79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = SX8(LO8(ecx));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x84942C), _icall_esp); /* indirect call */
    }

loc_0017BF85: ;
    esp = esp + 8;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);

loc_0017BF8E: ;
    SET_LO8(ecx, MEM8(esi + 0x4C));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) { sub_0017BFBD(); return; } /* jle: less or equal (signed <=) */

loc_0017BF95: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    ecx = ecx << 4;
    ecx = ecx + ebx;
    edx = MEM32(ecx);
    esi = esi + 0x74;
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0017BFE0
 * Original: 0x0017BFE0 - 0x0017C079 (153 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017BFE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;

loc_0017BFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x144);
    SET_LO8(eax, MEM8(esi + 0x39));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0017C00E; /* je: equal / zero */

loc_0017BFF3: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B77C4), _icall_esp); /* indirect call */
    }

loc_0017BFFF: ;
    esp = esp + 8;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 0xC) = LO8(eax);
    if ((LO8(eax) != 0)) { sub_0017C079(); return; } /* jne: not equal / not zero */

loc_0017C00E: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    if (TEST_Z(LO8(edx), 4)) goto loc_0017C035; /* je: equal / zero */

loc_0017C016: ;
    SET_LO16(ecx, MEM16(edi + 0x38));
    if (CMP_GE(LO16(ecx), MEM16(esi + 0x2C))) goto loc_0017C035; /* jge: greater or equal (signed >=) */

loc_0017C020: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX8(MEM8(esi + 0x1A));
    if (CMP_GE(eax, ecx)) goto loc_0017C035; /* jge: greater or equal (signed >=) */

loc_0017C032: ;
    MEM8(esi + 0x1A) = LO8(eax);

loc_0017C035: ;
    if (TEST_Z(LO8(edx), 8)) goto loc_0017C071; /* je: equal / zero */

loc_0017C03A: ;
    SET_LO16(edx, MEM16(edi + 0x38));
    if (CMP_GE(LO16(edx), MEM16(esi + 0x30))) goto loc_0017C071; /* jge: greater or equal (signed >=) */

loc_0017C044: ;
    SET_LO8(eax, MEM8(esi + 0x32));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017C071; /* jne: not equal / not zero */

loc_0017C04B: ;
    eax = MEM32(0x7FA20C);
    if (TEST_Z(eax, eax)) goto loc_0017C071; /* je: equal / zero */

loc_0017C054: ;
    xmm1 = MEMF(esi + 0x34); /* movss */
    xmm0 = MEMF(esi); /* movss */
    /* nop */

loc_0017C060: ;
    eax--;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    if ((eax != 0)) goto loc_0017C060; /* jne: not equal / not zero */

loc_0017C06D: ;
    MEMF(esi) = xmm0; /* movss */

loc_0017C071: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017C080
 * Original: 0x0017C080 - 0x0017C8ED (2157 bytes, 548 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C080(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017C080: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_0017C8E3; /* jle: less or equal (signed <=) */

loc_0017C092: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x144);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x60);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = eax + ecx + 0x330;
    eax = MEM32(ebx + 0x140);
    ecx = MEM32(0x771760);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    edi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_0017C0E0; /* je: equal / zero */

loc_0017C0D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0017C0DA: ;
    MEM32(0x771760) = edi;

loc_0017C0E0: ;
    eax = MEM32(0x77175C);
    if (TEST_Z(eax, eax)) goto loc_0017C0FA; /* je: equal / zero */

loc_0017C0E9: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0017C0F0: ;
    MEM32(0x77175C) = 0;

loc_0017C0FA: ;
    SET_LO8(eax, MEM8(0x75BB64));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0017C19D; /* jbe: below or equal (unsigned <=) */

loc_0017C107: ;
    edi = MEM32(0x75BB60);
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) goto loc_0017C13C; /* jne: not equal / not zero */

loc_0017C114: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0017C125: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0017C12D: ;
    edx = MEM32(0x75BB60);
    MEM32(edx + 8) = eax;
    edi = MEM32(0x75BB60);

loc_0017C13C: ;
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0017C168; /* jne: not equal / not zero */

loc_0017C143: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0017C14B: ;
    MEM32(edi + 0x10) = eax;
    edi = MEM32(0x75BB60);
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0017C168; /* jne: not equal / not zero */

loc_0017C15B: ;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    edi = MEM32(0x75BB60);

loc_0017C168: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0017C191; /* jne: not equal / not zero */

loc_0017C170: ;
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0017C18C; /* jne: not equal / not zero */

loc_0017C17A: ;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0017C183: ;
    edi = MEM32(0x75BB60);
    esp = esp + 8;

loc_0017C18C: ;
    edi = MEM32(edi + 4);
    goto loc_0017C199;

loc_0017C191: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0017C196: ;
    edi = MEM32(eax + 4);

loc_0017C199: ;
    if (TEST_NZ(edi, edi)) goto loc_0017C1B2; /* jne: not equal / not zero */

loc_0017C19D: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0017C1A6: ;
    MEM32(0x771764) = 0;
    goto loc_0017C1C9;

loc_0017C1B2: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_0017C1C9; /* je: equal / zero */

loc_0017C1BA: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0017C1C3: ;
    MEM32(0x771764) = edi;

loc_0017C1C9: ;
    ecx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    edx = esi + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0017C1E8: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = esi + edx + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0017C201: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0017C21B; /* je: equal / zero */

loc_0017C20F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0017C215: ;
    MEM32(0x77182C) = esi;

loc_0017C21B: ;
    eax = MEM32(0x771828);
    esi = 0x901;
    if (CMP_EQ(eax, esi)) goto loc_0017C235; /* je: equal / zero */

loc_0017C229: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0017C22F: ;
    MEM32(0x771828) = esi;

loc_0017C235: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_0017C25B; /* je: equal / zero */

loc_0017C243: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017C24F: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_0017C25B: ;
    eax = MEM32(0x771820);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0017C27E; /* je: equal / zero */

loc_0017C266: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017C272: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_0017C27E: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_0017C292; /* je: equal / zero */

loc_0017C286: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0017C28C: ;
    MEM32(0x77181C) = edi;

loc_0017C292: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_0017C2B8; /* je: equal / zero */

loc_0017C2A0: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017C2AC: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_0017C2B8: ;
    eax = MEM32(0x771814);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0017C2DB; /* je: equal / zero */

loc_0017C2C3: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017C2CF: ;
    MEM32(0x549AF8) = esi;
    MEM32(0x771814) = esi;

loc_0017C2DB: ;
    if (CMP_EQ(MEM32(0x771810), esi)) goto loc_0017C2F9; /* je: equal / zero */

loc_0017C2E3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = esi;
    MEM32(0x771810) = esi;

loc_0017C2F9: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0017C301: ;
    eax = MEM32(0x7717E4);
    ecx = 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_0017C325; /* je: equal / zero */

loc_0017C314: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_0017C325: ;
    edx = MEM32(0x7717C4);
    esi = 0; /* xor self */
    if (CMP_EQ(edx, esi)) goto loc_0017C342; /* je: equal / zero */

loc_0017C331: ;
    eax = eax | 0x800;
    MEM32(0x547368) = esi;
    MEM32(0x7717C4) = esi;

loc_0017C342: ;
    edx = 2;
    if (CMP_EQ(MEM32(0x7717B4), edx)) goto loc_0017C360; /* je: equal / zero */

loc_0017C34F: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = edx;
    MEM32(0x7717B4) = edx;

loc_0017C360: ;
    if (CMP_EQ(MEM32(0x7717A4), ecx)) goto loc_0017C379; /* je: equal / zero */

loc_0017C368: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_0017C379: ;
    if (CMP_EQ(MEM32(0x771784), esi)) goto loc_0017C392; /* je: equal / zero */

loc_0017C381: ;
    eax = eax | 0x800;
    MEM32(0x547378) = esi;
    MEM32(0x771784) = esi;

loc_0017C392: ;
    if (CMP_EQ(MEM32(0x771774), edx)) goto loc_0017C3AB; /* je: equal / zero */

loc_0017C39A: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = edx;
    MEM32(0x771774) = edx;

loc_0017C3AB: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_0017C3D9; /* je: equal / zero */

loc_0017C3C8: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_0017C3D9: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_0017C3F2; /* je: equal / zero */

loc_0017C3E1: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_0017C3F2: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    MEM32(0x547384) = esi;
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_0017C428; /* je: equal / zero */

loc_0017C410: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017C41C: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0017C428: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_0017C44E; /* je: equal / zero */

loc_0017C436: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0017C442: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_0017C44E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_0017C45A: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    esp = esp + 8;
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0017C469; /* jns: not sign (positive) */

loc_0017C464: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_0017C469: ;
    esi = eax + -1;
    if (CMP_GE(esi & esi, 0)) goto loc_0017C475; /* jge: greater or equal (signed >=) */

loc_0017C470: ;
    esi = ZX8(MEM8(ebx + 0x41));
    esi--;

loc_0017C475: ;
    ecx = MEM32(esp + 0x24);
    eax = eax << 4;
    eax = eax + ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    edx = esi;
    edx = edx << 4;
    edx = edx + ecx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x44) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4C);
    MEM32(esp + 0x48) = ecx;
    ecx = eax + -1;
    MEM32(esp + 0x4C) = edx;
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - MEMF(esp + 0x48); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(esp + 0x44); /* subss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 - MEMF(esp + 0x4C); /* subss */
    ebx = eax;
    eax = MEM32(esp + 0x1C);
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x28) = ebx;
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0017C596; /* jp: parity */

loc_0017C582: ;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    goto loc_0017C5BB;

loc_0017C596: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [ebp] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */

loc_0017C5BB: ;
    eax = MEM32(esp + 0x60);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x4C);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    ecx = ecx >> 2;
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    edi = esp + 0x18;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0017C5E0: ;
    eax = ZX8(MEM8(ebp + 0x17));
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x48); /* addss */
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ebp + 0x19));
    esp = esp + 8;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    esp = esp - 8;
    SET_LO8(edx, MEM8(ebp + 0x18));
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x4C); /* addss */
    edx = edx << 8;
    edx = edx | eax;
    eax = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_0017C63D: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x48); /* subss */
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_0017C682: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x14;
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = ebx;
    goto loc_0017C6A0;

loc_0017C699: ;
    ebx = MEM32(esp + 0x28);
    /* nop */

loc_0017C6A0: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0x54) = xmm4; /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x54); /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0017C778; /* jp: parity */

loc_0017C76A: ;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    goto loc_0017C7A9;

loc_0017C778: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [ebp] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x34); /* movss */

loc_0017C7A9: ;
    eax = ZX8(MEM8(ebp + 0x1A));
    edi = ZX8(MEM8(ebp + 0x19));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    eax = (uint32_t)((int32_t)eax >> 8);
    xmm7 = MEMF(0x648D14); /* movss */
    eax = eax << 8;
    eax = eax | edi;
    edi = ZX8(MEM8(ebp + 0x18));
    ecx = ecx + 4;
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    eax = eax << 8;
    ecx = ecx + 4;
    eax = eax | edi;
    edi = ZX8(MEM8(ebp + 0x17));
    MEMF(ecx + -8) = xmm2; /* movss */
    ecx = ecx + 4;
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 + xmm6; /* addss */
    MEMF(ecx + -8) = xmm2; /* movss */
    ecx = ecx + 4;
    eax = eax << 8;
    eax = eax | edi;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(ecx + -8) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    MEM32(ecx + -4) = eax;
    MEMF(ecx) = xmm2; /* movss */
    MEMF(ecx + 4) = xmm7; /* movss */
    ecx = ecx + 4;
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = ecx + 4;
    ecx = ecx + 4;
    ecx = ecx + 4;
    xmm6 = xmm6 - xmm4; /* subss */
    MEMF(ecx + -4) = xmm6; /* movss */
    ecx = ecx + 4;
    xmm5 = xmm5 - xmm3; /* subss */
    MEMF(ecx + -4) = xmm5; /* movss */
    MEM32(ecx) = eax;
    ecx = ecx + 4;
    MEMF(ecx) = xmm2; /* movss */
    ecx = ecx + 4;
    MEMF(ecx) = xmm1; /* movss */
    ecx = ecx + 4;
    edx = edx + ebx;
    eax = esi;
    esi--;
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (((int32_t)esi >= 0)) goto loc_0017C880; /* jns: not sign (positive) */

loc_0017C877: ;
    esi = MEM32(esp + 0x60);
    esi = ZX8(MEM8(esi + 0x41));
    esi--;

loc_0017C880: ;
    edi = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x24);
    MEM32(esp + 0x38) = edi;
    edi = MEM32(esp + 0x48);
    MEM32(esp + 0x3C) = edi;
    edi = MEM32(esp + 0x4C);
    MEM32(esp + 0x40) = edi;
    edi = esi;
    edi = edi << 4;
    edi = edi + ebx;
    ebx = MEM32(edi);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x4C) = edi;
    edi = MEM32(esp + 0x60);
    edi = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x48) = ebx;
    if (CMP_NE(eax, edi)) goto loc_0017C699; /* jne: not equal / not zero */

loc_0017C8C7: ;
    eax = MEM32(0x5499E8);
    MEM32(ecx) = 0x417FC;
    ecx = ecx + 4;
    POP32(esp, edi);
    MEM32(ecx) = 0;
    ecx = ecx + 4;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);

loc_0017C8E3: ;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_0017C8E8: ;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0017C8F0
 * Original: 0x0017C8F0 - 0x0017C966 (118 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017C8F0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x4C));
    edx = ZX8(MEM8(eax + 0x41));
    PUSH32(esp, esi);
    esi = SX8(LO8(ecx));
    edx--;
    if (CMP_GE(esi, edx)) goto loc_0017C95A; /* jge: greater or equal (signed >=) */

loc_0017C904: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x4E);
    edx = MEM32(eax + 0x140);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x4C) = LO8(ecx);
    esi = esi << 4;
    esi = esi + edx;
    PUSH32(esp, edi);
    ecx = eax + 0x2C;
    edi = MEM32(ecx);
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4E);
    esi = MEM32(esp + 0x10);
    esi = MEM32(esi + 8);
    ecx = ecx << 4;
    MEM32(ecx + edx + 0xC) = esi;
    SET_LO8(ecx, MEM8(eax + 0x4E));
    SET_LO8(ecx, LO8(ecx) + 1);
    edx = SX8(LO8(ecx));
    MEM8(eax + 0x4E) = LO8(ecx);
    ecx = ZX8(MEM8(eax + 0x41));
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(edx, ecx)) goto loc_0017C962; /* jne: not equal / not zero */

loc_0017C952: ;
    MEM8(eax + 0x4E) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017C95A: ;
    edx = MEM32(esp + 0xC);
    MEM8(edx + 0x39) = 0xFF;

loc_0017C962: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017C970
 * Original: 0x0017C970 - 0x0017C994 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C970(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017C970: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x4C));
    (void)0; /* cmp LO8(edx), 2 - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_LE(LO8(edx), 2)) goto loc_0017C991; /* jle: less or equal (signed <=) */

loc_0017C97E: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(ecx + 0x4C) = LO8(edx);
    MEM8(ecx + 0x4E) = MEM8(ecx + 0x4E) - 1;
    if (((int32_t)MEM8(ecx + 0x4E) >= 0)) goto loc_0017C993; /* jns: not sign (positive) */

loc_0017C988: ;
    SET_LO8(edx, MEM8(ecx + 0x41));
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(ecx + 0x4E) = LO8(edx);
    esp += 4; return; /* ret */

loc_0017C991: ;
    SET_LO8(eax, 0); /* xor self */

loc_0017C993: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017C9A0
 * Original: 0x0017C9A0 - 0x0017CA24 (132 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017C9A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0017C9A0: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    esp = esp - 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0017CA24(); return; } /* jne: not equal / not zero */

loc_0017C9AA: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_A(LO8(eax), 1)) { sub_0017CA24(); return; } /* ja: above (unsigned >) */

loc_0017C9B5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017C9CF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0017CA24(); return; } /* je: equal / zero */

loc_0017C9D6: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x11;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0xD;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esp + 4);
    ecx = eax + 0x4C;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0017CA30
 * Original: 0x0017CA30 - 0x0017CC58 (552 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CA30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017CA30: ;
    esp = esp - 0x70;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebp + 0x54));
    esi = esi << 6;
    esi = esi + 0x598BE0;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017CA4B: ;
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0017CC52; /* jbe: below or equal (unsigned <=) */

loc_0017CA6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    /* nop */

loc_0017CA70: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    xmm0 = MEMF(esi + 0x10); /* movss */
    edx = MEM32(esi + 0x28);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x2C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEM32(esp + 0x14) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x30));
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    MEM32(esp + 0x48) = eax;
    SET_LO16(eax, MEM16(esi + 0x34));
    MEM16(esp + 0x4C) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x36));
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEM16(esp + 0x70) = LO16(eax);
    eax = MEM32(ebp + 0x4C);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x24); /* movss */
    MEM32(esp + 0x44) = edx;
    SET_LO16(edx, MEM16(esi + 0x32));
    MEM16(esp + 0x72) = LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    MEM16(esp + 0x4E) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 0x38));
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM16(esp + 0x40) = LO16(ebx);
    MEM16(esp + 0x42) = 0xFF;
    MEM16(esp + 0x44) = 0xFFC1;
    MEM16(esp + 0x46) = 0x50;
    MEM16(esp + 0x54) = 1;
    MEM8(esp + 0x56) = 0xC;
    MEM8(esp + 0x57) = 2;
    MEM8(esp + 0x58) = 3;
    MEM8(esp + 0x5B) = 0xB4;
    MEM8(esp + 0x5A) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM8(esp + 0x5C) = 0x9B;
    MEM8(esp + 0x5F) = 0x32;
    MEM8(esp + 0x5E) = 0x64;
    MEM8(esp + 0x5D) = LO8(ebx);
    MEM8(esp + 0x60) = 0x64;
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
    MEM16(esp + 0x78) = LO16(edx);
    MEM8(esp + 0x7A) = LO8(ebx);
    MEM8(esp + 0x80) = 0xFF;
    MEM8(esp + 0x81) = LO8(ebx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017CBC1: ;
    eax = eax & 0x7F;
    edx = 0x40;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017CBD1: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0017CBE0: ;
    eax = MEM32(ebp + 0x4C);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = esp + 0x1C;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_0017CC2E: ;
    xmm1 = MEMF(ebp + 0x50); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x14;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x50) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_0017CA70; /* ja: above (unsigned >) */

loc_0017CC50: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0017CC52: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0017CC60
 * Original: 0x0017CC60 - 0x0017CFA0 (832 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017CC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017CC60: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x4C));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41);
    eax = 0x5C;
    edi = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017CC80: ;
    ecx = eax;
    ebp = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(ecx, ebp)) goto loc_0017CF98; /* je: equal / zero */

loc_0017CC8F: ;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0xFFFFFF74u;
    esi = esi + 0x118;
    if (CMP_EQ(edi, ebp)) goto loc_0017CCAF; /* je: equal / zero */

loc_0017CCA3: ;
    MEM32(ecx + 0x2C) = edi;
    MEM32(ecx + 0x30) = 0x80000000u;
    goto loc_0017CCCE;

loc_0017CCAF: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x64);
    edx = edx << 0x10;
    eax = eax & 0xFFFF;
    edx = edx | eax;
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(esp + 0x68);
    edx = edx << 0x10;
    MEM32(ecx + 0x30) = edx;

loc_0017CCCE: ;
    eax = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    edi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x38) = edx;
    eax = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(edx, MEM8(esp + 0x5C));
    MEM16(ecx + 0x54) = LO16(ebp);
    MEM8(ecx + 0x59) = LO8(ebx);
    MEM8(ecx + 0x58) = LO8(edx);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = 0x58DCE4;
    MEM16(esp + 0x32) = LO16(ebp);
    MEM16(esp + 0x34) = LO16(ebp);
    MEM16(esp + 0x36) = LO16(ebp);
    MEM8(esp + 0x3B) = 6;
    MEM16(esp + 0x3C) = LO16(ebp);
    MEM16(esp + 0x3E) = LO16(ebp);
    MEM16(esp + 0x40) = LO16(esi);
    MEM16(esp + 0x42) = LO16(esi);
    MEM8(esp + 0x46) = 0;
    MEM8(esp + 0x48) = 0xFF;
    MEM8(esp + 0x49) = 0xFF;
    MEM8(esp + 0x4A) = 0xFF;
    MEM8(esp + 0x4B) = 0xFF;
    MEM16(esp + 0x50) = LO16(ebp);
    MEM32(esp + 0x14) = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x640);
    MEM16(ecx + 0x56) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x74));
    MEM8(ecx + 0x5B) = LO8(eax);
    eax = 0xFFFFFFFFu;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    SET_LO16(ecx, MEM16(esp + 0x6C));
    eax = ZX8(LO8(ebx));
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM16(esp + 0x44) = LO16(ecx);
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(eax, ebp)) goto loc_0017CF98; /* jle: less or equal (signed <=) */

loc_0017CD8C: ;
    ebx = MEM32(esp + 0x18);

loc_0017CD90: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017CD95: ;
    eax = eax & 0xFF;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    if (CMP_BE(LO8(ecx), 0x40)) goto loc_0017CDE5; /* jbe: below or equal (unsigned <=) */

loc_0017CDA4: ;
    if (CMP_BE(LO8(ecx), 0x80)) goto loc_0017CDCF; /* jbe: below or equal (unsigned <=) */

loc_0017CDA9: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    edx = ZX8(LO8(ecx));
    if (CMP_BE(LO8(ecx), 0xC0)) goto loc_0017CDC1; /* jbe: below or equal (unsigned <=) */

loc_0017CDB1: ;
    edx = edx << 2;
    ecx = 0x743490;
    ecx = ecx - edx;
    xmm2 = MEMF(ecx); /* movss */
    goto loc_0017CDF1;

loc_0017CDC1: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_0017CDF1;

loc_0017CDCF: ;
    xmm2 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    edx = 0x743290;
    edx = edx - ecx;
    xmm2 = xmm2 - MEMF(edx); /* subss */
    goto loc_0017CDF1;

loc_0017CDE5: ;
    ecx = ZX8(LO8(ecx));
    xmm2 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0017CDF1: ;
    if (CMP_BE(LO8(eax), 0x40)) goto loc_0017CE37; /* jbe: below or equal (unsigned <=) */

loc_0017CDF5: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_0017CE21; /* jbe: below or equal (unsigned <=) */

loc_0017CDF9: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_0017CE10; /* jbe: below or equal (unsigned <=) */

loc_0017CDFD: ;
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743490;
    eax = eax - edx;
    xmm1 = MEMF(eax); /* movss */
    goto loc_0017CE43;

loc_0017CE10: ;
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(eax));
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x742E90); /* subss */
    goto loc_0017CE43;

loc_0017CE21: ;
    xmm1 = 0.0f; /* xorps self = zero */
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743290;
    eax = eax - edx;
    xmm1 = xmm1 - MEMF(eax); /* subss */
    goto loc_0017CE43;

loc_0017CE37: ;
    ecx = ZX8(LO8(eax));
    xmm1 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0017CE43: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017CE48: ;
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017CE66: ;
    edx = MEM32(esp + 0x64);
    eax = eax & 0xFF;
    esi = eax + edx + -78;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017CE78: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x70);
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(eax, LO8(eax) + 7);
    MEM8(esp + 0x47) = LO8(eax);
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    eax = eax + ecx;
    MEM16(esp + 0x2C) = LO16(eax);
    eax = MEM32(esp + 0x68);
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x42);
    eax = 0x68;
    MEM16(esp + 0x30) = LO16(ebp);
    MEM16(esp + 0x32) = LO16(ebp);
    MEM16(esp + 0x36) = LO16(esi);
    MEM16(esp + 0x38) = LO16(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017CEC6: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_0017CF98; /* je: equal / zero */

loc_0017CED1: ;
    edx = MEM32(0x7FA1F8);
    (void)0; /* cmp edx, 0xC - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x64) = 0xFF;
    if (CMP_EQ(edx, 0xC)) goto loc_0017CEF7; /* je: equal / zero */

loc_0017CEEE: ;
    if (CMP_NE(edx, 6)) goto loc_0017CF83; /* jne: not equal / not zero */

loc_0017CEF7: ;
    ecx = 0; /* xor self */
    /* nop */

loc_0017CF00: ;
    if (CMP_EQ(MEM32(ecx * 8 + 0x774E90), ebp)) goto loc_0017CF2B; /* je: equal / zero */

loc_0017CF09: ;
    ecx++;
    if (CMP_B(ecx, 0x24)) goto loc_0017CF00; /* jb: below (unsigned <) */

loc_0017CF0F: ;
    esi = esi | 0xFFFFFFFFu;

loc_0017CF12: ;
    if (CMP_EQ(edx, 6)) goto loc_0017CF36; /* je: equal / zero */

loc_0017CF17: ;
    if (CMP_NE(edx, 0xC)) goto loc_0017CF43; /* jne: not equal / not zero */

loc_0017CF1C: ;
    ebx = 0x35;
    MEM32(esp + 0x10) = 0x24;
    goto loc_0017CF43;

loc_0017CF2B: ;
    MEM32(ecx * 8 + 0x774E94) = eax;
    esi = ecx;
    goto loc_0017CF12;

loc_0017CF36: ;
    ebx = 0x3D;
    MEM32(esp + 0x10) = 0xC;

loc_0017CF43: ;
    if (CMP_AE(esi, MEM32(esp + 0x10))) goto loc_0017CF83; /* jae: above or equal (unsigned >=) */

loc_0017CF49: ;
    ecx = MEM32(0x84A1AC);
    eax = ebx + esi + -1;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_0017CF62: ;
    esp = esp + 0xC;
    if (CMP_BE(eax, ebp)) goto loc_0017CF83; /* jbe: below or equal (unsigned <=) */

loc_0017CF69: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + -1744;
    MEM32(esi * 8 + 0x774E90) = edx;

loc_0017CF83: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_0017CD90; /* jl: less (signed <) */

loc_0017CF98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0017D390
 * Original: 0x0017D390 - 0x0017D3DA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017D390: ;
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    SET_LO16(eax, MEM16(ebp + 0x34));
    SET_LO16(ecx, MEM16(ebp + 0x38));
    SET_LO16(edx, MEM16(ebp + 0x3C));
    MEM16(ebp + 0x44) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x32);
    (void)0; /* cmp LO16(eax), 0x8000 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM16(ebp + 0x46) = LO16(ecx);
    MEM16(ebp + 0x48) = LO16(edx);
    if (CMP_NE(LO16(eax), 0x8000)) { sub_0017D3DA(); return; } /* jne: not equal / not zero */

loc_0017D3BB: ;
    eax = MEM32(ebp + 0x2C);
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    g_seh_ebp = ebp; sub_0017D3FD(); return; /* tail jmp 0x0017D3FD */

}

/**
 * sub_0017D750
 * Original: 0x0017D750 - 0x0017D785 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D750(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017D750: ;
    eax = MEM32(0x7715E4);
    if (TEST_Z(eax, eax)) goto loc_0017D784; /* je: equal / zero */

loc_0017D759: ;
    /* nop */

loc_0017D760: ;
    if (CMP_EQ(MEM8(eax + 0x58), LO8(ecx))) goto loc_0017D76D; /* je: equal / zero */

loc_0017D765: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0017D760; /* jne: not equal / not zero */

loc_0017D76C: ;
    esp += 4; return; /* ret */

loc_0017D76D: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = 0x80000000u;
    MEM16(eax + 0x54) = LO16(edx);

loc_0017D784: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017D790
 * Original: 0x0017D790 - 0x0017D7D0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017D790: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x7715E4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0017D7CD; /* je: equal / zero */

loc_0017D7A1: ;
    if (CMP_EQ(MEM8(eax + 0x58), LO8(edx))) goto loc_0017D7B0; /* je: equal / zero */

loc_0017D7A6: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0017D7A1; /* jne: not equal / not zero */

loc_0017D7AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017D7B0: ;
    ecx = ecx << 0x10;
    edi = edi & 0xFFFF;
    ecx = ecx | edi;
    MEM32(eax + 0x2C) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x10));
    esi = esi << 0x10;
    MEM32(eax + 0x30) = esi;
    MEM16(eax + 0x54) = LO16(ecx);

loc_0017D7CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D860
 * Original: 0x0017D860 - 0x0017D944 (228 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017D860: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x7715E8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    edi = esi + 0x4C;
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0017D882: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(ebp, ebx)) goto loc_0017D936; /* je: equal / zero */

loc_0017D88C: ;
    /* nop */

loc_0017D890: ;
    (void)0; /* cmp esi, MEM32(ebp + 0x30) - flags set for next jcc */
    edi = MEM32(ebp + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 0x30))) goto loc_0017D928; /* jne: not equal / not zero */

loc_0017D89C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_0017D8A0: ;
    if (CMP_EQ(MEM32(esi * 8 + 0x774E94), ebp)) goto loc_0017D8B1; /* je: equal / zero */

loc_0017D8A9: ;
    esi++;
    if (CMP_B(esi, 0x24)) goto loc_0017D8A0; /* jb: below (unsigned <) */

loc_0017D8AF: ;
    goto loc_0017D8D6;

loc_0017D8B1: ;
    eax = MEM32(esi * 8 + 0x774E90);
    if (CMP_EQ(eax, ebx)) goto loc_0017D8C8; /* je: equal / zero */

loc_0017D8BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0017D8C5: ;
    esp = esp + 0xC;

loc_0017D8C8: ;
    MEM32(esi * 8 + 0x774E90) = ebx;
    MEM32(esi * 8 + 0x774E94) = ebx;

loc_0017D8D6: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0017D928; /* jne: not equal / not zero */

loc_0017D8DE: ;
    SET_LO8(ecx, MEM8(0x771758));
    if (CMP_LE(LO8(ecx), LO8(ebx))) goto loc_0017D8FF; /* jle: less or equal (signed <=) */

loc_0017D8E8: ;
    eax = 0x771740;
    ecx = ZX8(LO8(ecx));

loc_0017D8F0: ;
    if (CMP_NE(MEM32(eax), ebp)) goto loc_0017D8F9; /* jne: not equal / not zero */

loc_0017D8F4: ;
    edx = MEM32(ebp + 0xC);
    MEM32(eax) = edx;

loc_0017D8F9: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0017D8F0; /* jne: not equal / not zero */

loc_0017D8FF: ;
    eax = MEM32(ebp);
    if (CMP_L(eax, 2)) goto loc_0017D928; /* jl: less (signed <) */

loc_0017D907: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0017D91C; /* je: equal / zero */

loc_0017D914: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017D917: ;
    esp = esp + 4;
    goto loc_0017D928;

loc_0017D91C: ;
    edx = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0017D928: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    ebp = edi;
    if (CMP_NE(edi, ebx)) goto loc_0017D890; /* jne: not equal / not zero */

loc_0017D936: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0017D93C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D950
 * Original: 0x0017D950 - 0x0017D97A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D950(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017D950: ;
    eax = MEM32(esi * 8 + 0x774E90);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0017D96A; /* je: equal / zero */

loc_0017D95E: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0017D967: ;
    esp = esp + 0xC;

loc_0017D96A: ;
    MEM32(esi * 8 + 0x774E90) = edi;
    MEM32(esi * 8 + 0x774E94) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D980
 * Original: 0x0017D980 - 0x0017D9B6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D980(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017D980: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */

loc_0017D986: ;
    eax = MEM32(esi + 0x774E90);
    if (CMP_EQ(eax, edi)) goto loc_0017D99C; /* je: equal / zero */

loc_0017D990: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0017D999: ;
    esp = esp + 0xC;

loc_0017D99C: ;
    MEM32(esi + 0x774E90) = edi;
    MEM32(esi + 0x774E94) = edi;
    esi = esi + 8;
    if (CMP_B(esi, 0x120)) goto loc_0017D986; /* jb: below (unsigned <) */

loc_0017D9B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017D9C0
 * Original: 0x0017D9C0 - 0x0017DBE5 (549 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017D9C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_0017D9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(eax + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0017DBD1; /* je: equal / zero */

loc_0017D9E4: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(ebx + 0x50))) goto loc_0017DBD1; /* jne: not equal / not zero */

loc_0017D9F3: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0017DBDE; /* je: equal / zero */

loc_0017DA01: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017DA06: ;
    xmm0 = xmm0 * MEMF(0x64A370); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E68); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    eax = MEM32(esp + 0x18);
    esi = esp + 0x14;
    edi = esp + 0x10;
    ecx = esp + 0x28;
    MEMF(ebx + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_0017DA3D: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    edx = MEM32(esp + 0x18);
    eax = esp + 0x40;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0017DA64: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0017DBDE; /* jbe: below or equal (unsigned <=) */

loc_0017DA76: ;
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm6 = xmm6 - MEMF(0x648CDC); /* subss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    goto loc_0017DA92;

loc_0017DA8C: ;
    xmm6 = MEMF(esp + 0x14); /* movss */

loc_0017DA92: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017DA97: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    SET_LO16(esi, ZX8(LO8(eax)));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017DAA5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x20;
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0017DABB: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017DAF0: ;
    xmm0 = xmm0 * MEMF(0x64A36C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A368); /* addss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017DB0D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x36;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x38;
    edx = edx - 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0017DB23: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    esp = esp + 0xC;
    eax = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017DB48: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017DB63: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017DB74: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0xF;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017DB85: ;
    xmm0 = xmm0 * MEMF(0x64A364); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E2C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 5);
    eax = edi;
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_0017DBA8: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x34;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0017DA8C; /* ja: above (unsigned >) */

loc_0017DBCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0017DBD1: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */

loc_0017DBDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
