/**
 * Burnout 3 - Recompiled code chunk 9
 * Functions: 250 (0x000C7580 - 0x000E02D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000C7580
 * Original: 0x000C7580 - 0x000C75AC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7580(void)
{

loc_000C7580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x34);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_000C759A: ;
    esp = esp + 0x10;
    MEM16(edi + 0x3A) = 0x80;
    MEM8(edi + 0x3D) = 0xFF;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C75B0
 * Original: 0x000C75B0 - 0x000C75DC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C75B0(void)
{

loc_000C75B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x34);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_000C75CA: ;
    esp = esp + 0x10;
    MEM16(edi + 0x3A) = 0x80;
    MEM8(edi + 0x3D) = 0xFF;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C75E0
 * Original: 0x000C75E0 - 0x000C76F4 (276 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C75E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C75E0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x40); /* subss */
    eax = eax << 2;
    xmm2 = MEMF(eax + 0x77148C); /* movss */
    xmm1 = MEMF(eax + 0x77149C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x54); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x48); /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x7FA248); /* mulss */
    eax = eax | 0xFFFFFFFFu;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, edi);
    edi = esi + 0x294;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000C7659; /* jbe: below or equal (unsigned <=) */

loc_000C764A: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    eax = 0; /* xor self */

loc_000C7659: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648DE0)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000C7687; /* jbe: below or equal (unsigned <=) */

loc_000C7679: ;
    xmm0 = MEMF(0x648DE0); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000C7687: ;
    if (TEST_Z(eax, eax)) goto loc_000C7697; /* je: equal / zero */

loc_000C768B: ;
    xmm1 = xmm1 - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_000C7697: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C76A6: ;
    xmm5 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    if (CMP_BE(LO8(ecx), 0x40)) { sub_000C76F4(); return; } /* jbe: below or equal (unsigned <=) */

loc_000C76B3: ;
    if (CMP_BE(LO8(ecx), 0x80)) goto loc_000C76DE; /* jbe: below or equal (unsigned <=) */

loc_000C76B8: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    if (CMP_BE(LO8(ecx), 0xC0)) goto loc_000C76D0; /* jbe: below or equal (unsigned <=) */

loc_000C76C0: ;
    ecx = ecx << 2;
    edx = 0x743490;
    edx = edx - ecx;
    xmm4 = MEMF(edx); /* movss */
    g_seh_ebp = ebp; sub_000C7700(); return; /* tail jmp 0x000C7700 */

loc_000C76D0: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - MEMF(ecx * 4 + 0x742E90); /* subss */
    g_seh_ebp = ebp; sub_000C7700(); return; /* tail jmp 0x000C7700 */

loc_000C76DE: ;
    xmm4 = 0.0f; /* xorps self = zero */
    edx = ZX8(LO8(ecx));
    edx = edx << 2;
    ecx = 0x743290;
    ecx = ecx - edx;
    xmm4 = xmm4 - MEMF(ecx); /* subss */
    g_seh_ebp = ebp; sub_000C7700(); return; /* tail jmp 0x000C7700 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C7900
 * Original: 0x000C7900 - 0x000C7A03 (259 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7900(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000C7900: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x34C); /* movss */
    xmm1 = MEMF(eax + 0x340); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x350); /* mulss */
    xmm2 = MEMF(eax + 0x350); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x348); /* mulss */
    xmm3 = MEMF(0x7FA24C); /* movss */
    MEMF(eax + 0x340) = xmm1; /* movss */
    MEMF(eax + 0x348) = xmm2; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x344); /* addss */
    MEMF(eax + 0x344) = xmm0; /* movss */
    xmm4 = MEMF(eax + 0x44); /* movss */
    xmm5 = MEMF(eax + 0x48); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(eax + 0x40); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(eax + 0x4C); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x50); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm2 = MEMF(eax + 0x54); /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    xmm2 = xmm2 + xmm7; /* addss */
    MEMF(eax + 0x54) = xmm2; /* movss */
    MEMF(eax + 0x40) = xmm3; /* movss */
    xmm4 = xmm4 + xmm6; /* addss */
    MEMF(eax + 0x44) = xmm4; /* movss */
    xmm5 = xmm5 + xmm7; /* addss */
    MEMF(eax + 0x48) = xmm5; /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * MEMF(eax + 0x35C); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm1 = xmm1 * MEMF(eax + 0x35C); /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 * MEMF(eax + 0x35C); /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(eax + 0x54) = xmm2; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7A10
 * Original: 0x000C7A10 - 0x000C7ACE (190 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7A10(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_000C7A10: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x340); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x350); /* mulss */
    xmm0 = MEMF(eax + 0x34C); /* movss */
    xmm2 = MEMF(eax + 0x350); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x348); /* mulss */
    xmm3 = MEMF(0x7FA24C); /* movss */
    MEMF(eax + 0x340) = xmm1; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x344); /* addss */
    MEMF(eax + 0x344) = xmm0; /* movss */
    MEMF(eax + 0x348) = xmm2; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(eax + 0x40); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + 0x40) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x44); /* movss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(eax + 0x44) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x48); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(eax + 0x48) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x4C); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x50); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(eax + 0x54); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(eax + 0x4C) = xmm3; /* movss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7AD0
 * Original: 0x000C7AD0 - 0x000C7B29 (89 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7AD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C7AD0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x354); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x3C); /* mulss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    SET_LO16(eax, MEM16(ecx + 0x36));
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x354); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm1 = MEMF(ecx + 0x38); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    if (CMP_GE(LO16(eax), MEM16(ecx + 0x358))) goto loc_000C7B23; /* jge: greater or equal (signed >=) */

loc_000C7B17: ;
    SET_LO8(eax, MEM8(ecx + 0x35A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x36);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x7B) = LO8(eax);

loc_000C7B23: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7B30
 * Original: 0x000C7B30 - 0x000C7B6E (62 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7B30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C7B30: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x354); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x3C); /* mulss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    SET_LO16(eax, MEM16(ecx + 0x36));
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    if (CMP_GE(LO16(eax), MEM16(ecx + 0x358))) goto loc_000C7B68; /* jge: greater or equal (signed >=) */

loc_000C7B5C: ;
    SET_LO8(eax, MEM8(ecx + 0x35A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x36);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x7B) = LO8(eax);

loc_000C7B68: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7B70
 * Original: 0x000C7B70 - 0x000C7D07 (407 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7B70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C7B70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    MEM16(esi + 0x32E) = MEM16(esi + 0x32E) - LO16(edi);
    SET_LO16(eax, MEM16(esi + 0x32E));
    if (((int32_t)MEM16(esi + 0x32E) >= 0)) goto loc_000C7BF5; /* jns: not sign (positive) */

loc_000C7B8C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C7B91: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x32E) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C7BA5: ;
    if (TEST_Z(LO8(eax), 3)) goto loc_000C7BCC; /* je: equal / zero */

loc_000C7BA9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C7BAE: ;
    xmm1 = MEMF(esi + 0x31C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x320); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x320); /* addss */
    goto loc_000C7BED;

loc_000C7BCC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C7BD1: ;
    xmm1 = MEMF(esi + 0x324); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x31C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x31C); /* addss */

loc_000C7BED: ;
    MEMF(esi + 0x328) = xmm0; /* movss */

loc_000C7BF5: ;
    xmm0 = MEMF(esi + 0x328); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(0x6496B4); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM16(esi + 0x32C) = MEM16(esi + 0x32C) - LO16(edi);
    if (CMP_GE(MEM16(esi + 0x32C), 0)) goto loc_000C7C62; /* jge: greater or equal (signed >=) */

loc_000C7C25: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C7C2A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x11;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x32C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C7C3E: ;
    xmm1 = MEMF(esi + 0x310); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x314); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x314); /* addss */
    MEMF(esi + 0x318) = xmm0; /* movss */

loc_000C7C62: ;
    xmm0 = MEMF(esi + 0x318); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(0x6496B0); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEM16(esi + 0x33C) = MEM16(esi + 0x33C) - LO16(edi);
    if (CMP_GE(MEM16(esi + 0x33C), 0)) goto loc_000C7CCF; /* jge: greater or equal (signed >=) */

loc_000C7C92: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C7C97: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x33C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C7CAB: ;
    xmm1 = MEMF(esi + 0x330); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x334); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x334); /* addss */
    MEMF(esi + 0x338) = xmm0; /* movss */

loc_000C7CCF: ;
    xmm0 = MEMF(esi + 0x338); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x8C); /* subss */
    xmm0 = xmm0 * MEMF(0x6496AC); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x8C); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x8C) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7D10
 * Original: 0x000C7D10 - 0x000C7DD2 (194 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7D10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000C7D10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM16(esi + 0x32C), 0)) goto loc_000C7D51; /* jne: not equal / not zero */

loc_000C7D1F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C7D24: ;
    xmm1 = MEMF(esi + 0x310); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x314); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x314); /* addss */
    MEMF(esi + 0x318) = xmm0; /* movss */
    MEM16(esi + 0x32C) = 1;

loc_000C7D51: ;
    if (CMP_NE(MEM16(esi + 0x32E), 0)) goto loc_000C7D8D; /* jne: not equal / not zero */

loc_000C7D5B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C7D60: ;
    xmm1 = MEMF(esi + 0x31C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x320); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x320); /* addss */
    MEMF(esi + 0x328) = xmm0; /* movss */
    MEM16(esi + 0x32E) = 1;

loc_000C7D8D: ;
    xmm0 = MEMF(esi + 0x328); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(0x6496B4); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x318); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(0x6496B0); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7DE0
 * Original: 0x000C7DE0 - 0x000C7DFB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7DE0(void)
{

loc_000C7DE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0x29;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000C7DF7: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7E00
 * Original: 0x000C7E00 - 0x000C7E68 (104 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C7E00: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x34;
    edi = esi + 0x38;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_000C7E1D: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 4;
    if (CMP_NE(eax, 0x49)) goto loc_000C7E64; /* jne: not equal / not zero */

loc_000C7E29: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_000C7E3A; /* je: equal / zero */

loc_000C7E33: ;
    SET_LO8(edx, MEM8(edi));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_000C7E64; /* jne: not equal / not zero */

loc_000C7E3A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C7E64; /* jne: not equal / not zero */

loc_000C7E43: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C7E4A: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C7E64; /* jl: less (signed <) */

loc_000C7E51: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000C7E68(); return; } /* je: equal / zero */

loc_000C7E5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C7E61: ;
    esp = esp + 4;

loc_000C7E64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7E80
 * Original: 0x000C7E80 - 0x000C7EA0 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C7E80: ;
    PUSH32(esp, ecx);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    if (TEST_Z(esi, esi)) goto loc_000C7E9B; /* je: equal / zero */

loc_000C7E8A: ;
    SET_LO8(ecx, LO8(ebx));
    edx = esp + 7;
    eax = esi;
    PUSH32(esp, 0); sub_000C8470(); /* call 0x000C8470 */

loc_000C7E97: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000C7EA0(); return; } /* jne: not equal / not zero */

loc_000C7E9B: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7F10
 * Original: 0x000C7F10 - 0x000C8069 (345 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7F10: ;
    esp = esp - 0x6C;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x80);
    PUSH32(esp, edi);
    ecx = 0x14;
    edi = esp + 0x24;
    MEMF(esp + 0x20) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(esp + 0x8C));
    MEM8(esp + 0x78) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x10B));
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(esp + 0x88);
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM8(esp + 0x79) = LO8(ecx);
    MEM8(esp + 0x7A) = LO8(edx);
    MEM32(esp + 0x10) = ebp;
    MEM16(esp + 0x16) = 0x12C;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_000C7F70; /* je: equal / zero */

loc_000C7F6B: ;
    MEM16(esp + 0x16) = LO16(eax);

loc_000C7F70: ;
    edx = MEM32(esp + 0x94);
    SET_LO8(eax, MEM8(esp + 0x98));
    SET_LO8(ecx, (CMP_NE(LO16(eax), 0xFFFF)) ? 1 : 0); /* setne */
    edx = edx + 0x5C;
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM8(esp + 0x1D) = 0;
    MEM8(esp + 0x1E) = 0;
    MEM8(esp + 0x1F) = 0;
    MEM8(esp + 0x20) = 0;
    MEM8(esp + 0x21) = 1;
    PUSH32(esp, 0); sub_000D79D0(); /* call 0x000D79D0 */

loc_000C7FAB: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_000C805F; /* je: equal / zero */

loc_000C7FB8: ;
    SET_LO8(eax, MEM8(esp + 0x90));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    edx = ebx + 0x48;
    ecx = 0x17;
    esi = esp + 0x20;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000C7FF3; /* je: equal / zero */

loc_000C7FD3: ;
    SET_LO8(edx, MEM8(esp + 0x98));
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000C89D0(); /* call 0x000C89D0 */

loc_000C7FE8: ;
    esp = esp + 8;
    MEM32(ebx + 0x9C) = eax;
    goto loc_000C7FFA;

loc_000C7FF3: ;
    MEM32(edx + 0x54) = 0;

loc_000C7FFA: ;
    edi = MEM32(ebx + 0x90);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000D75D0(); /* call 0x000D75D0 */

loc_000C8006: ;
    eax = MEM32(0x847024);
    edi = MEM32(eax + 0x40);
    esp = esp + 4;
    esi = ebp;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000C8018: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000C805F; /* je: equal / zero */

loc_000C801C: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_000C8039; /* je: equal / zero */

loc_000C8026: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_000C803F;

loc_000C8039: ;
    eax = MEM32(ebp + 0x580);

loc_000C803F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = ebp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = ebp;
    eax = ebx;
    ecx = 0x4D;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000C805F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8070
 * Original: 0x000C8070 - 0x000C809C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C8070: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C80E0(); /* call 0x000C80E0 */

loc_000C8082: ;
    SET_LO8(eax, MEM8(esi + 0xA0));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_000C809C(); return; } /* je: equal / zero */

loc_000C808C: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x58FF08), _icall_esp); /* indirect call */
    }

loc_000C8097: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C80C0
 * Original: 0x000C80C0 - 0x000C80D4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C80C0(void)
{
    float xmm0;

loc_000C80C0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C80E0(); /* call 0x000C80E0 */

loc_000C80D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C80E0
 * Original: 0x000C80E0 - 0x000C82C9 (489 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C80E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;

loc_000C80E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    eax = MEM32(esi + 0x2C);
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if ((xmm0 <= xmm1)) goto loc_000C82C3; /* jbe: below or equal (unsigned <=) */

loc_000C810B: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000C82B5; /* je: equal / zero */

loc_000C8119: ;
    SET_LO8(eax, MEM8(eax + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_000C82B5; /* je: equal / zero */

loc_000C8129: ;
    /* nop */

loc_000C8130: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    if (CMP_GE(ecx, MEM32(esi + 0x74))) goto loc_000C8298; /* jge: greater or equal (signed >=) */

loc_000C813D: ;
    ebx = MEM32(esi + 0x90);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C8148: ;
    ecx = ZX16(MEM16(ebx * 2 + 0x84ED88));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edx = MEM32(ebx * 4 + 0x6B3E08);
    edi = edi << 4;
    edi = edi + edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8166: ;
    xmm0 = xmm0 * MEMF(esi + 0x64); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C817B: ;
    eax = MEM32(esp + 0x10);
    xmm0 = xmm0 * MEMF(esi + 0x68); /* mulss */
    edx = ZX8(MEM8(edi));
    xmm0 = xmm0 + MEMF(esi + 0x60); /* addss */
    PUSH32(esp, eax);
    eax = esp + 0x54;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000C819C: ;
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ebx = edi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000C81AD: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    esp = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C81C4: ;
    ecx = MEM32(esi + 0x98);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x595D14);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C81EC: ;
    ecx = ZX8(MEM8(esi + 0x6D));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esi + 0x6C));
    ecx = esp + 0x50;
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_00104590(); /* call 0x00104590 */

loc_000C8209: ;
    esp = esp + 0x38;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_000C8290; /* je: equal / zero */

loc_000C8214: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(eax + 0x10B));
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebx);
    MEM8(esp + 0x30) = LO8(edx);
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(edi));
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM8(esp + 0x40) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C8245: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x70);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x50) = eax;
    SET_LO8(eax, MEM8(esi + 4));
    MEM8(esp + 0x4C) = 1;
    MEM8(esp + 0x4E) = 0;
    MEM32(esp + 0x54) = esi;
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x6E));
    MEM16(esp + 0x4A) = LO16(edx);
    SET_LO8(edx, MEM8(esi + 0x94));
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esp + 0x4D) = LO8(edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000D7670(); /* call 0x000D7670 */

loc_000C828D: ;
    esp = esp + 0xC;

loc_000C8290: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_000C8298: ;
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x48) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000C8130; /* ja: above (unsigned >) */

loc_000C82AF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C82B5: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000C82B5; /* ja: above (unsigned >) */

loc_000C82BE: ;
    MEMF(esi + 0x48) = xmm0; /* movss */

loc_000C82C3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C82D0
 * Original: 0x000C82D0 - 0x000C82F8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C82D0(void)
{

loc_000C82D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx + 0x40;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0); sub_001048B0(); /* call 0x001048B0 */

loc_000C82F4: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8300
 * Original: 0x000C8300 - 0x000C8344 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8300(void)
{
    float xmm0;

loc_000C8300: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x48);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = eax + 0x40;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = ecx;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    xmm0 = MEMF(eax + 0x44); /* movss */
    edx = MEM32(eax + 0x48);
    ecx = MEM32(ecx);
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    POP32(esp, edi);
    MEM32(eax + 0x4C) = ecx;
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEM32(eax + 0x54) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8350
 * Original: 0x000C8350 - 0x000C8469 (281 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x4C);
    if (TEST_NZ(edi, edi)) goto loc_000C83A3; /* jne: not equal / not zero */

loc_000C8360: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C8466; /* jne: not equal / not zero */

loc_000C836D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C8374: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C8466; /* jl: less (signed <) */

loc_000C837F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000C8395; /* je: equal / zero */

loc_000C838C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C838F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8395: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000C83A3: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x50); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x78); /* mulss */
    MEMF(esi + 0x348) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x54); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x78); /* mulss */
    MEMF(esi + 0x34C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x58); /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x78); /* mulss */
    MEMF(esi + 0x350) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C83F0: ;
    xmm0 = xmm0 * MEMF(edi + 0x80); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    MEMF(esi + 0x354) = xmm0; /* movss */
    eax = MEM32(edi + 0x84);
    MEM32(esi + 0x358) = eax;
    SET_LO16(ecx, MEM16(edi + 0x88));
    MEM16(esi + 0x74) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 0x8A));
    MEM16(esi + 0x76) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C842C: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x8E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x64);
    SET_LO16(edx, LO16(edx) + MEM16(edi + 0x8C));
    MEM16(esi + 0x36) = LO16(edx);
    SET_LO8(edx, MEM8(edi + 0x94));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, LO8(edx) | 0x20);
    eax = eax | 0x8000001;
    MEM8(esi + 0x148) = LO8(edx);
    MEM8(esi + 0x149) = 0x24;
    MEM32(esi + 0x64) = eax;

loc_000C8466: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8470
 * Original: 0x000C8470 - 0x000C8570 (256 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8470: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x68);
    if (CMP_A(esi, 0x90)) goto loc_000C84DA; /* ja: above (unsigned >) */

loc_000C847C: ;
    if (CMP_EQ(esi, 0x90)) goto loc_000C84CF; /* je: equal / zero */

loc_000C847E: ;
    if (CMP_A(esi, 0x88)) { sub_000C8570(); return; } /* ja: above (unsigned >) */

loc_000C848A: ;
    esi = ZX8(MEM8(esi + 0xC85D8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(esi * 4 + 0xC85AC)); return; /* indirect tail jmp */

    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    MEM8(edx) = 0x11;
    SET_LO8(eax, (CMP_B(LO8(ecx), 1)) ? 1 : 0); /* setb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C84CF: ;
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    MEM8(edx) = 8;
    SET_LO8(eax, (CMP_B(LO8(ecx), 1)) ? 1 : 0); /* setb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C84DA: ;
    esi = esi - 0x96;
    if (CMP_A(esi, 0x7E)) { sub_000C8570(); return; } /* ja: above (unsigned >) */

loc_000C84E9: ;
    esi = ZX8(MEM8(esi + 0xC8694));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(esi * 4 + 0xC8664)); return; /* indirect tail jmp */

    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    MEM8(edx) = 0xD;
    SET_LO8(eax, (CMP_B(LO8(ecx), 1)) ? 1 : 0); /* setb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8720
 * Original: 0x000C8720 - 0x000C882D (269 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8720: ;
    eax = MEM32(edx + 0x68);
    if (CMP_A(eax, 0x90)) goto loc_000C878D; /* ja: above (unsigned >) */

loc_000C872A: ;
    if (CMP_EQ(eax, 0x90)) goto loc_000C8781; /* je: equal / zero */

loc_000C872C: ;
    if (CMP_A(eax, 0x88)) { sub_000C882D(); return; } /* ja: above (unsigned >) */

loc_000C8737: ;
    eax = ZX8(MEM8(eax + 0xC8888));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0xC885C)); return; /* indirect tail jmp */

    eax = 0x58FF21;
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

loc_000C8781: ;
    eax = 0x58FF18;
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

loc_000C878D: ;
    eax = eax - 0x96;
    if (CMP_A(eax, 0x7E)) { sub_000C882D(); return; } /* ja: above (unsigned >) */

loc_000C879B: ;
    eax = ZX8(MEM8(eax + 0xC8944));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0xC8914)); return; /* indirect tail jmp */

    eax = 0x58FF1D;
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C89D0
 * Original: 0x000C89D0 - 0x000C89E3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C89D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C89D0: ;
    esp = esp - 0x30;
    (void)0; /* cmp LO8(eax), 0x18 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    if (CMP_B(LO8(eax), 0x18)) { sub_000C89E3(); return; } /* jb: below (unsigned <) */

loc_000C89DC: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8AD0
 * Original: 0x000C8AD0 - 0x000C8B8E (190 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8AD0(void)
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

loc_000C8AD0: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, edi);
    edi = esi + 0x38;
    MEMF(esi + 0x50) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000C8B4C; /* jbe: below or equal (unsigned <=) */

loc_000C8AF3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8AF8: ;
    xmm0 = xmm0 * MEMF(esi + 0x54); /* mulss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C8B07: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000C8B13; /* jns: not sign (positive) */

loc_000C8B0E: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000C8B13: ;
    if ((eax == 0)) goto loc_000C8B2F; /* je: equal / zero */

loc_000C8B15: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8B1A: ;
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x44); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x44); /* addss */
    goto loc_000C8B47;

loc_000C8B2F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8B34: ;
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x40); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x40); /* addss */

loc_000C8B47: ;
    MEMF(esi + 0x4C) = xmm0; /* movss */

loc_000C8B4C: ;
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x5C); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x58); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000C8B74: ;
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    ecx = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00120B30(); return; /* tail jmp 0x00120B30 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000C8C20
 * Original: 0x000C8C20 - 0x000C8C3A (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8C20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8C20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x60);
    MEM32(ecx + 0x9C) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_000C8CB0
 * Original: 0x000C8CB0 - 0x000C8CD4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8CB0(void)
{

loc_000C8CB0: ;
    esp = esp - 8;
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    ecx = esp;
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x2A);
    PUSH32(esp, ecx);
    eax = 0x45;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_000C8CD0: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8CE0
 * Original: 0x000C8CE0 - 0x000C8D19 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C8CE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(edi, 0x2A)) goto loc_000C8CFB; /* jne: not equal / not zero */

loc_000C8CF4: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000D7D60(); /* call 0x000D7D60 */

loc_000C8CFB: ;
    eax = ZX8(MEM8(esi + 0xA2));
    eax = MEM32(eax * 4 + 0x58FF24);
    if (TEST_Z(eax, eax)) goto loc_000C8D15; /* je: equal / zero */

loc_000C8D0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C8D12: ;
    esp = esp + 0xC;

loc_000C8D15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8D20
 * Original: 0x000C8D20 - 0x000C8DB0 (144 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C8D20: ;
    eax = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0xA8);
    ecx = MEM32(esi + 0xA4);
    edx = edx + eax;
    eax = edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0xA8) = edx;
    if (CMP_L(eax, ecx)) goto loc_000C8D8F; /* jl: less (signed <) */

loc_000C8D44: ;
    goto loc_000C8D50;

    /* nop */
    /* nop */

loc_000C8D50: ;
    ecx = MEM32(esi + 0xAC);
    edx = ZX16(MEM16(ecx + 0x60));
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60021);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_000C8D74: ;
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(esi + 0xA8);
    ecx = ecx - eax;
    esp = esp + 0x1C;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esi + 0xA8) = ecx;
    if (CMP_GE(ecx, eax)) goto loc_000C8D50; /* jge: greater or equal (signed >=) */

loc_000C8D8F: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000C8DAD; /* je: equal / zero */

loc_000C8D9D: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_000C8DAD; /* jne: not equal / not zero */

loc_000C8DA7: ;
    MEM16(eax + 0x5E) = 0x3E8;

loc_000C8DAD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8DD0
 * Original: 0x000C8DD0 - 0x000C8E04 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C8DD0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esp + 0xC), 0x2D)) goto loc_000C8E02; /* jne: not equal / not zero */

loc_000C8DDC: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(edx);
    if (CMP_NE(eax, ecx)) goto loc_000C8DF7; /* jne: not equal / not zero */

loc_000C8DEC: ;
    eax = MEM32(edx + 4);
    MEM32(esi + 0xAC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8DF7: ;
    if (CMP_NE(eax, MEM32(edx + 4))) goto loc_000C8E02; /* jne: not equal / not zero */

loc_000C8DFC: ;
    MEM32(esi + 0xAC) = ecx;

loc_000C8E02: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8E10
 * Original: 0x000C8E10 - 0x000C8E5B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8E10(void)
{

loc_000C8E10: ;
    esp = esp - 0xC;
    PUSH32(esp, 0x2A);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    edx = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(eax);
    MEM32(esp + 0x10) = 0x45;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000C8E3C: ;
    PUSH32(esp, 0x49);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = 0x29;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000C8E57: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8E60
 * Original: 0x000C8E60 - 0x000C908A (554 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8E60: ;
    esp = esp - 0x7C;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x84);
    eax = MEM32(edi + 0x4C);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_000C9078; /* je: equal / zero */

loc_000C8E78: ;
    eax = ZX8(MEM8(eax + 0x10B));
    if (CMP_NE(eax, MEM32(edi + 0x50))) goto loc_000C9078; /* jne: not equal / not zero */

loc_000C8E88: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    /* comiss xmm0, MEMF(edi + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x30))) goto loc_000C9085; /* jbe: below or equal (unsigned <=) */

loc_000C8E97: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D18); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ebx = 0xFF;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(esp + 0x84) = LO8(eax);
    MEM8(esp + 0x85) = LO8(eax);
    MEM8(esp + 0x86) = LO8(eax);
    eax = 4;
    esi = 2;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x3C) = 0x134;
    MEM16(esp + 0x10) = 0x1E;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM8(esp + 0x1E) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(ebx);
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEM16(esp + 0x40) = 0xA;
    MEM16(esp + 0x42) = 0x19;
    MEM16(esp + 0x44) = 1;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM8(esp + 0x87) = LO8(ecx);
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = ecx;
    goto loc_000C8F70;

    /* nop */

loc_000C8F70: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8F75: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8F93: ;
    ecx = MEM32(edi + 0x4C);
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64925C); /* addss */
    ecx = ecx + 0x78;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8FCE: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x648EA4); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C8FF7: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x58); /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C901B: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C9034: ;
    ebp = eax;
    ebp = ebp & 1;
    ebp = ebp << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C9040: ;
    PUSH32(esp, ebx);
    eax = eax & 1;
    PUSH32(esp, 0);
    ebp = ebp | eax;
    PUSH32(esp, 0);
    ebp = ebp << 6;
    edx = esp + 0x1C;
    PUSH32(esp, 1);
    ebp = ebp | 0x844205;
    PUSH32(esp, edx);
    MEM32(esp + 0x90) = ebp;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000C9066: ;
    esp = esp + 0x14;
    esi--;
    if ((esi != 0)) goto loc_000C8F70; /* jne: not equal / not zero */

loc_000C9070: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_000C9078: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_000C9085: ;
    POP32(esp, edi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9090
 * Original: 0x000C9090 - 0x000C9116 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9090(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C9090: ;
    SET_LO8(eax, MEM8(esi + 0x21C));
    esp = esp - 0xC;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000C9112; /* je: equal / zero */

loc_000C909D: ;
    xmm0 = MEMF(0x64A1B4); /* movss */
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0x10B));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C90C4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000C9111; /* je: equal / zero */

loc_000C90CB: ;
    xmm0 = MEMF(0x6494C4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x6D;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;

loc_000C9111: ;
    POP32(esp, edi);

loc_000C9112: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9120
 * Original: 0x000C9120 - 0x000C94EB (971 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9120: ;
    esp = esp - 0xA8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xB0);
    eax = MEM32(esi + 0x4C);
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_000C94E3; /* je: equal / zero */

loc_000C9143: ;
    xmm0 = MEMF(esi + 0x90); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x94); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x94) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_000C94E3; /* jb: below (unsigned <) */

loc_000C9174: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 4;
    eax = 2;
    edx = 0; /* xor self */
    edi = 1;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = 0x134;
    MEM16(esp + 0x30) = 0x32;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x3F) = 0xFF;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM16(esp + 0x60) = 0x10;
    MEM16(esp + 0x62) = 0xF;
    MEM16(esp + 0x64) = LO16(edi);
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEM8(esp + 0xA4) = 0x2F;
    MEM8(esp + 0xA5) = 0xFF;
    MEM8(esp + 0xA6) = 0xFF;
    MEM8(esp + 0xA7) = 0xC;
    MEM8(esp + 0xA8) = 0xFF;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C9246: ;
    ebx = eax;
    ebx = ebx & edi;
    ebx = ebx << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C9251: ;
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x54);
    eax = eax & edi;
    ebx = ebx | eax;
    eax = MEM32(esi + 0x50);
    ebx = ebx << 6;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x58);
    ebx = ebx | 0x845205;
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;

loc_000C9281: ;
    eax = MEM32(esi + 0x5C);
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = eax;
    edi = edi + 1;
    ebp = edx;
    ebp = ebp + 0 + _cf; /* adc */
    if (CMP_NE(edi, 1)) goto loc_000C929D; /* jne: not equal / not zero */

loc_000C9295: ;
    if (TEST_NZ(ebp, ebp)) goto loc_000C929D; /* jne: not equal / not zero */

loc_000C9299: ;
    edi = 0; /* xor self */
    goto loc_000C92AE;

loc_000C929D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C92A2: ;
    PUSH32(esp, ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_000C92AC: ;
    edi = eax;

loc_000C92AE: ;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(eax + 0x3C8);
    eax = MEM32(eax + 0x4B0);
    edx = MEM32(eax + 0x24);
    eax = MEM32(edx + 8);
    ecx = MEM32(esi + edi * 4 + 0x60);
    ebp = MEM32(esi + 0x58);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) { sub_000C94EB(); return; } /* je: equal / zero */

loc_000C92D4: ;
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, edx)) { sub_000C94EB(); return; } /* je: equal / zero */

loc_000C92DF: ;
    if (CMP_L(ecx, edx)) { sub_000C94EB(); return; } /* jl: less (signed <) */

loc_000C92E7: ;
    if (CMP_AE(ecx, MEM32(eax))) goto loc_000C92FD; /* jae: above or equal (unsigned >=) */

loc_000C92EB: ;
    eax = MEM32(eax + 4);
    ecx = ecx + ecx * 2;
    eax = eax + ecx * 4;
    MEM32(esp + 0x14) = eax;
    g_seh_ebp = ebp; sub_000C94EF(); return; /* tail jmp 0x000C94EF */

loc_000C92FD: ;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, edx)) goto loc_000C93AB; /* je: equal / zero */

loc_000C930D: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000C93AB; /* je: equal / zero */

loc_000C9335: ;
    if (CMP_EQ(ebx, edx)) goto loc_000C93AB; /* je: equal / zero */

loc_000C9339: ;
    if (CMP_EQ(ebp, edx)) goto loc_000C93AB; /* je: equal / zero */

loc_000C933D: ;
    eax = ecx;
    edx = ecx;
    ecx = esp + 0xAC;
    edx = edx << 6;
    PUSH32(esp, ecx);
    eax = eax + eax * 8;
    edx = edx + ebx;
    PUSH32(esp, edx);
    eax = ebp + eax * 4;
    PUSH32(esp, 0); sub_00428CA0(); /* call 0x00428CA0 */

loc_000C935B: ;
    esp = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000C936C: ;
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xAC); /* addss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xB4); /* addss */
    MEMF(esp + 0x7C) = xmm0; /* movss */

loc_000C93AB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000C93B0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(esp + 0x3D) = LO8(edx);
    MEM8(esp + 0x3E) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C93CB: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FD8); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C93E6: ;
    xmm0 = xmm0 * MEMF(0x649020); /* mulss */
    xmm0 = xmm0 + MEMF(0x649550); /* addss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C9407: ;
    xmm7 = MEMF(0x648D50); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x648CDC); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C9423: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x648CDC); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C9437: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648CDC); /* subss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEMF(esp + 0x88) = xmm5; /* movss */
    edi = MEM32(esi + edi * 4 + 0x60);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000C9467: ;
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000C948A: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000C94BB; /* je: equal / zero */

loc_000C9491: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ecx;

loc_000C94BB: ;
    xmm0 = MEMF(esi + 0x94); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x94) = xmm0; /* movss */
    if ((xmm0 >= xmm1)) goto loc_000C9281; /* jae: above or equal (unsigned >=) */

loc_000C94E0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000C94E3: ;
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_000C95E0
 * Original: 0x000C95E0 - 0x000C9629 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C95E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C95E0: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_000C9628; /* jne: not equal / not zero */

loc_000C95E8: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x170);
    if (CMP_NE(eax, edx)) goto loc_000C9627; /* jne: not equal / not zero */

loc_000C95FD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C9627; /* jne: not equal / not zero */

loc_000C9606: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C960D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C9627; /* jl: less (signed <) */

loc_000C9614: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000C9629(); return; } /* je: equal / zero */

loc_000C9621: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C9624: ;
    esp = esp + 4;

loc_000C9627: ;
    POP32(esp, esi);

loc_000C9628: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9640
 * Original: 0x000C9640 - 0x000C9791 (337 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9640(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C9640: ;
    esp = esp - 0x50;
    eax = MEM32(ebx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, edi);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000C9666: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_000C9672: ;
    xmm0 = MEMF(0x649FB0); /* movss */
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x13;
    edi = esp + 0x1C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x34);
    edi = MEM32(esp + 0x2C);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F34F8);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x38) = ecx;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000C96CB: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_000C96FB; /* je: equal / zero */

loc_000C96D2: ;
    eax = MEM32(esp + 8);
    MEM32(esp + edi * 4 + 0x20) = eax;
    edi = MEM32(esp + 0x1C);
    edi++;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F34F8);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_000C96F4: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_000C96D2; /* jne: not equal / not zero */

loc_000C96FB: ;
    if (TEST_Z(edi, edi)) goto loc_000C978B; /* je: equal / zero */

loc_000C9703: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x98;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000C9714: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000C978B; /* je: equal / zero */

loc_000C971B: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    PUSH32(esp, 0xFF);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x6F;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x4E;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    PUSH32(esp, 0x3DCCCCCD);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F6CCCCD);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0x47927C00);
    edi = eax + 0x4C;
    ecx = 0x13;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    ecx = 0x2328;
    esi = ebx;
    PUSH32(esp, 0); sub_0011F960(); /* call 0x0011F960 */

loc_000C9788: ;
    esp = esp + 0x1C;

loc_000C978B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_000C97A0
 * Original: 0x000C97A0 - 0x000C9E44 (1700 bytes, 538 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C97A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000C97A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x3C8);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_000C9E3D; /* je: equal / zero */

loc_000C97C2: ;
    edx = ZX8(MEM8(edi + 0x31));
    esi = MEM32(0x8472C4);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000C97D6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = edi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000C97E5: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    esp = esp + 0x10;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE0);
    eax = eax + edi + 0x4C;
    MEM32(esp + 0x10) = eax;
    ecx = 0x6AC1D4;
    goto loc_000C9810;

    /* nop */
    goto loc_000C9810;

    /* nop */

loc_000C9810: ;
    xmm0 = MEMF(ecx + -4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0x18) = LO16(ebx);
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM8(eax + 0xC) = 0xFF;
    MEM8(eax + 0xD) = LO8(ebx);
    MEM8(eax + 0xE) = LO8(ebx);
    MEM8(eax + 0xF) = 0xFF;
    ecx = ecx + 0xC;
    eax = eax + 0x1C;
    if (CMP_L(ecx, 0x6AC234)) goto loc_000C9810; /* jl: less (signed <) */

loc_000C988C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 8;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000C98A2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98AE: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98BA: ;
    PUSH32(esp, 6);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98C7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98D4: ;
    PUSH32(esp, 7);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98E1: ;
    PUSH32(esp, 6);
    PUSH32(esp, 7);
    PUSH32(esp, 5);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98EE: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C98FA: ;
    PUSH32(esp, 7);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C9907: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C9914: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C9920: ;
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C992D: ;
    PUSH32(esp, 7);
    PUSH32(esp, 6);
    PUSH32(esp, 3);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C993A: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    xmm1 = MEMF(edi + 0x40); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE0);
    xmm2 = MEMF(edi + 0x44); /* movss */
    xmm3 = MEMF(edi + 0x48); /* movss */
    edi = ecx + edi + 0x20C;
    eax = edi;
    ecx = 0x6AC1D4;
    goto loc_000C9970;

    /* nop */
    /* nop */

loc_000C9970: ;
    xmm0 = MEMF(ecx + -4); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0x18) = LO16(ebx);
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM8(eax + 0xC) = LO8(ebx);
    MEM8(eax + 0xD) = LO8(ebx);
    MEM8(eax + 0xE) = 0xFF;
    MEM8(eax + 0xF) = 0xC8;
    ecx = ecx + 0xC;
    eax = eax + 0x1C;
    if (CMP_L(ecx, 0x6AC234)) goto loc_000C9970; /* jl: less (signed <) */

loc_000C99E5: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    eax = 8;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000C99F7: ;
    eax = MEM32(esi + 0x24);
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    edi = 0x1FF;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9A0E; /* jge: greater or equal (signed >=) */

loc_000C9A09: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9A13; /* jl: less (signed <) */

loc_000C9A0E: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9A13: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, MEM16(esi + 0x30));
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9A65; /* jge: greater or equal (signed >=) */

loc_000C9A60: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9A6A; /* jl: less (signed <) */

loc_000C9A65: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9A6A: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x30));
    MEM16(ecx + eax * 2) = LO16(edx);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
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
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9ABE; /* jge: greater or equal (signed >=) */

loc_000C9AB9: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9AC3; /* jl: less (signed <) */

loc_000C9ABE: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9AC3: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 5);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 6);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9B19; /* jge: greater or equal (signed >=) */

loc_000C9B14: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9B1E; /* jl: less (signed <) */

loc_000C9B19: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9B1E: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 6);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9B74; /* jge: greater or equal (signed >=) */

loc_000C9B6F: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9B79; /* jl: less (signed <) */

loc_000C9B74: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9B79: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 5);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 4);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 7);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9BD1; /* jge: greater or equal (signed >=) */

loc_000C9BCC: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9BD6; /* jl: less (signed <) */

loc_000C9BD1: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9BD6: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 5);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 7);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 6);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9C2E; /* jge: greater or equal (signed >=) */

loc_000C9C29: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9C33; /* jl: less (signed <) */

loc_000C9C2E: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9C33: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 4);
    MEM16(edx + ecx * 2) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    SET_LO16(edx, MEM16(esi + 0x30));
    ecx++;
    MEM32(esi + 0x24) = ecx;
    eax = ecx;
    ecx = MEM32(esi + 0x28);
    MEM16(ecx + eax * 2) = LO16(edx);
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
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9C87; /* jge: greater or equal (signed >=) */

loc_000C9C82: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9C8C; /* jl: less (signed <) */

loc_000C9C87: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9C8C: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 4);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 3);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 7);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9CE4; /* jge: greater or equal (signed >=) */

loc_000C9CDF: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9CE9; /* jl: less (signed <) */

loc_000C9CE4: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9CE9: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 4);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 5);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9D3F; /* jge: greater or equal (signed >=) */

loc_000C9D3A: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9D44; /* jl: less (signed <) */

loc_000C9D3F: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9D44: ;
    ecx = MEM32(esi + 0x24);
    SET_LO16(eax, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 4);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    MEM32(esi + 0x24) = ebx;
    SET_LO16(ecx, LO16(ecx) + 1);
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    SET_LO16(edx, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x28);
    ebx++;
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(ecx + eax * 2) = LO16(edx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9D98; /* jge: greater or equal (signed >=) */

loc_000C9D93: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9D9D; /* jl: less (signed <) */

loc_000C9D98: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9D9D: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 3);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 6);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_000C9DF5; /* jge: greater or equal (signed >=) */

loc_000C9DF0: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_000C9DFA; /* jl: less (signed <) */

loc_000C9DF5: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000C9DFA: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 3);
    MEM16(edx + ecx * 2) = LO16(eax);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 6);
    MEM16(edx + eax * 2) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    edi++;
    MEM32(esi + 0x24) = edi;
    eax = edi;
    SET_LO16(ecx, LO16(ecx) + 7);
    MEM16(edx + eax * 2) = LO16(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_000C9E3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9E50
 * Original: 0x000C9E50 - 0x000C9E9C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_000C9E50: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_000C9E9B; /* jne: not equal / not zero */

loc_000C9E58: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(ecx, MEM32(esi + 0x2C))) goto loc_000C9E70; /* je: equal / zero */

loc_000C9E68: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x30))) goto loc_000C9E9A; /* jne: not equal / not zero */

loc_000C9E70: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000C9E9A; /* jne: not equal / not zero */

loc_000C9E79: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000C9E80: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000C9E9A; /* jl: less (signed <) */

loc_000C9E87: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000C9E9C(); return; } /* je: equal / zero */

loc_000C9E94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000C9E97: ;
    esp = esp + 4;

loc_000C9E9A: ;
    POP32(esp, esi);

loc_000C9E9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9EB0
 * Original: 0x000C9EB0 - 0x000CA0E6 (566 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000C9EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000CA0DF; /* je: equal / zero */

loc_000C9ED0: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    esi = MEM32(0x8472C4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    ebx = ecx + edi + 0xD0;
    edx = edi + 0x38;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = edx;
    /* nop */

loc_000C9F00: ;
    eax = MEM32(esp + 0x18);
    edx = ZX8(MEM8(edi + eax + 0x33));
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000C9F16: ;
    ecx = MEM32(esp + 0x20);
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000C9F28: ;
    edx = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x3C); /* cvttss2si */
    MEMF(ebx) = xmm0; /* movss */
    edx = SX16(LO16(ecx));
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebx + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(ebx + 0x18) = 0;
    MEMF(ebx + 0x10) = xmm0; /* movss */
    MEMF(ebx + 0x14) = xmm0; /* movss */
    SET_LO8(edx, MEM8(edi + 0xC0));
    MEM8(ebx + 0xC) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0xC2));
    MEM8(ebx + 0xD) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0xC4));
    eax = MEM32(esp + 0x28);
    MEM8(ebx + 0xE) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0xC6));
    MEM8(ebx + 0xF) = LO8(edx);
    edx = MEM32(esp + 0x2C);
    esp = esp + 0x10;
    ebx = ebx + 0x1C;
    eax++;
    edx = edx + 0xC;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(eax, 3)) goto loc_000C9F00; /* jl: less (signed <) */

loc_000C9FB7: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 3;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000C9FCD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000C9FDA: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = ecx + edi + 0x178;
    MEM32(esp + 0x20) = eax;
    ecx = edi + 0x60;
    edx = 3;
    goto loc_000CA000;

    /* nop */

loc_000CA000: ;
    ebx = (int32_t)MEMF(ecx + -4); /* cvttss2si */
    ebx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    ebx = (int32_t)MEMF(ecx); /* cvttss2si */
    ebx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm0; /* movss */
    ebx = (int32_t)MEMF(ecx + 4); /* cvttss2si */
    ebx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0x18) = 0;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    SET_LO8(ebx, MEM8(edi + 0xC8));
    MEM8(eax + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(edi + 0xCA));
    MEM8(eax + 0xD) = LO8(ebx);
    SET_LO8(ebx, MEM8(edi + 0xCC));
    MEM8(eax + 0xE) = LO8(ebx);
    SET_LO8(ebx, MEM8(edi + 0xCE));
    MEM8(eax + 0xF) = LO8(ebx);
    eax = eax + 0x1C;
    ecx = ecx + 0xC;
    edx--;
    if ((edx != 0)) goto loc_000CA000; /* jne: not equal / not zero */

loc_000CA071: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    eax = 3;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000CA087: ;
    eax = MEM32(esi + 0x24);
    eax = eax + 3;
    if (CMP_GE(eax, 0x3FF)) goto loc_000CA09D; /* jge: greater or equal (signed >=) */

loc_000CA094: ;
    if (CMP_L(MEM32(esi + 0x20), 0x1FF)) goto loc_000CA0A2; /* jl: less (signed <) */

loc_000CA09D: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000CA0A2: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, MEM16(esi + 0x30));
    MEM16(edx + ecx * 2) = LO16(eax);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(edx + eax * 2) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    edi++;
    MEM32(esi + 0x24) = edi;
    eax = edi;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM16(edx + eax * 2) = LO16(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_000CA0DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA0F0
 * Original: 0x000CA0F0 - 0x000CA175 (133 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA0F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CA0F0: ;
    eax = MEM32(eax + 0x224);
    if (TEST_Z(eax, eax)) goto loc_000CA174; /* je: equal / zero */

loc_000CA0FA: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_000CA110;

    /* nop */
    /* nop */

loc_000CA110: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0x3CC);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000CA16B; /* jne: not equal / not zero */

loc_000CA120: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000CA13F; /* jle: less or equal (signed <=) */

loc_000CA124: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    /* nop */

loc_000CA130: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_000CA139; /* jne: not equal / not zero */

loc_000CA134: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_000CA139: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000CA130; /* jne: not equal / not zero */

loc_000CA13F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000CA16B; /* jl: less (signed <) */

loc_000CA146: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_000CA161; /* je: equal / zero */

loc_000CA153: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000CA156: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_000CA16B;

loc_000CA161: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000CA16B: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_000CA110; /* jne: not equal / not zero */

loc_000CA171: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000CA174: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CA180
 * Original: 0x000CA180 - 0x000CA1A2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000CA0F0(); /* call 0x000CA0F0 */

loc_000CA18C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000CA1A2(); return; } /* jne: not equal / not zero */

loc_000CA195: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000CA1B0
 * Original: 0x000CA1B0 - 0x000CA1C7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA1B0(void)
{

loc_000CA1B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000CA0F0(); /* call 0x000CA0F0 */

loc_000CA1BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000CA1C2: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA1D0
 * Original: 0x000CA1D0 - 0x000CA245 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CA1D0: ;
    eax = MEM32(eax + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_000CA244; /* je: equal / zero */

loc_000CA1D7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000CA1E0: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0x22C);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000CA23B; /* jne: not equal / not zero */

loc_000CA1F0: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000CA20F; /* jle: less or equal (signed <=) */

loc_000CA1F4: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    /* nop */

loc_000CA200: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_000CA209; /* jne: not equal / not zero */

loc_000CA204: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_000CA209: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000CA200; /* jne: not equal / not zero */

loc_000CA20F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000CA23B; /* jl: less (signed <) */

loc_000CA216: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_000CA231; /* je: equal / zero */

loc_000CA223: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000CA226: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_000CA23B;

loc_000CA231: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000CA23B: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_000CA1E0; /* jne: not equal / not zero */

loc_000CA241: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000CA244: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CA250
 * Original: 0x000CA250 - 0x000CA272 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000CA1D0(); /* call 0x000CA1D0 */

loc_000CA25C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000CA272(); return; } /* jne: not equal / not zero */

loc_000CA265: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000CA280
 * Original: 0x000CA280 - 0x000CA297 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA280(void)
{

loc_000CA280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000CA1D0(); /* call 0x000CA1D0 */

loc_000CA28C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000CA292: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA2A0
 * Original: 0x000CA2A0 - 0x000CA2B4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CA2A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x33));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x34))) { sub_000CA2B4(); return; } /* jne: not equal / not zero */

loc_000CA2AC: ;
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x35))) { sub_000CA2B4(); return; } /* jne: not equal / not zero */

loc_000CA2B1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA2C0
 * Original: 0x000CA2C0 - 0x000CA2FD (61 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA2C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000CA2C0: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0x31), 1)) { sub_000CA2FD(); return; } /* je: equal / zero */

loc_000CA2CA: ;
    xmm1 = MEMF(eax + 0xBC); /* movss */
    xmm1 = xmm1 + MEMF(eax + 0xB4); /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(eax + 0xB8); /* movss */
    xmm2 = xmm2 * MEMF(0x648EA4); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_000CA2FD(); return; } /* jbe: below or equal (unsigned <=) */

loc_000CA2FA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA410
 * Original: 0x000CA410 - 0x000CA480 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA410(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CA410: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7713C0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000CA47C; /* jne: not equal / not zero */

loc_000CA41A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM8(0x7713C0) = 1;
    esi = 0; /* xor self */
    /* nop */

loc_000CA430: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    ebx = MEM32(esi * 4 + 0x6AC318);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000CA457: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000CA46B; /* je: equal / zero */

loc_000CA45E: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_000CA46B; /* je: equal / zero */

loc_000CA466: ;
    eax = MEM32(eax + 8);
    goto loc_000CA46D;

loc_000CA46B: ;
    eax = 0; /* xor self */

loc_000CA46D: ;
    MEM8(esi + 0x7713C4) = LO8(eax);
    esi++;
    if (CMP_L(esi, 4)) goto loc_000CA430; /* jl: less (signed <) */

loc_000CA479: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000CA47C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA4E0
 * Original: 0x000CA4E0 - 0x000CA532 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CA4E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x144);
    SET_LO8(eax, MEM8(esi + 0x65));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000CA501; /* je: equal / zero */

loc_000CA4F3: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5902C8), _icall_esp); /* indirect call */
    }

loc_000CA4FE: ;
    esp = esp + 4;

loc_000CA501: ;
    SET_LO8(eax, MEM8(esi + 0x62));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000CA516; /* je: equal / zero */

loc_000CA508: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5902BC), _icall_esp); /* indirect call */
    }

loc_000CA513: ;
    esp = esp + 4;

loc_000CA516: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000CA521: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_000CA526: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000CA52C: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA540
 * Original: 0x000CA540 - 0x000CA566 (38 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000CA540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000CA55D; /* je: equal / zero */

loc_000CA553: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_NZ(edx, edx)) { sub_000CA566(); return; } /* jne: not equal / not zero */

loc_000CA55D: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA880
 * Original: 0x000CA880 - 0x000CAAC8 (584 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x140);
    ebp = MEM32(edi + 0x144);
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(MEM8(edi + 0x4C), 2)) goto loc_000CA8A7; /* jge: greater or equal (signed >=) */

loc_000CA89D: ;
    if (TEST_NZ(MEM8(ebp + 6), 1)) goto loc_000CAAC2; /* jne: not equal / not zero */

loc_000CA8A7: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ebx, ecx)) goto loc_000CA9D0; /* je: equal / zero */

loc_000CA8B9: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    ecx = MEM32(0x7FA20C);

loc_000CA8C7: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000CA8CF; /* jns: not sign (positive) */

loc_000CA8CA: ;
    ebx = ZX8(MEM8(edi + 0x41));
    ebx--;

loc_000CA8CF: ;
    xmm1 = MEMF(ebp + 0x40); /* movss */
    eax = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = ebx + ebx * 8;
    xmm1 = xmm1 + MEMF(eax + edx * 4 + 0x10); /* addss */
    esi = eax + edx * 4;
    SET_LO8(eax, MEM8(esi + 0x1E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esi + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm1; /* movss */
    MEM8(esi + 0x1F) = 0xFF;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_000CA936; /* jle: less or equal (signed <=) */

loc_000CA92F: ;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(esi + 0x1E) = LO8(eax);
    goto loc_000CA942;

loc_000CA936: ;
    SET_LO16(edx, ZX8(MEM8(ebp + 0x52)));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM16(esi + 0x1C) = MEM16(esi + 0x1C) - LO16(edx);

loc_000CA942: ;
    eax = ZX8(MEM8(ebp + 0x72));
    if (CMP_GE(MEM16(esi + 0x1C), LO16(eax))) goto loc_000CA96A; /* jge: greater or equal (signed >=) */

loc_000CA94C: ;
    SET_LO8(eax, MEM8(esi + 0x21));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000CA96A; /* jne: not equal / not zero */

loc_000CA953: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_000CBDC0(); /* call 0x000CBDC0 */

loc_000CA95C: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    ecx = MEM32(0x7FA20C);

loc_000CA96A: ;
    (void)0; /* cmp MEM16(esi + 0x1C), 0 - flags set for next jcc */
    xmm1 = MEMF(ebp + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x18); /* addss */
    MEMF(esi + 0x18) = xmm1; /* movss */
    if (CMP_GE(MEM16(esi + 0x1C), 0)) goto loc_000CA9C4; /* jge: greater or equal (signed >=) */

loc_000CA984: ;
    MEM8(ebp + 6) = MEM8(ebp + 6) & 0xFD;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_EQ(edx, ebx)) goto loc_000CA9B2; /* je: equal / zero */

loc_000CA990: ;
    eax = ZX8(MEM8(edi + 0x41));

loc_000CA994: ;
    SET_LO8(edx, MEM8(edi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(edi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_000CA9A7; /* jne: not equal / not zero */

loc_000CA9A3: ;
    MEM8(edi + 0x4D) = 0;

loc_000CA9A7: ;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(edx, ebx)) goto loc_000CA994; /* jne: not equal / not zero */

loc_000CA9B2: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    edx = MEM32(esp + 0x18);
    eax = eax + eax * 8;
    MEM16(edx + eax * 4 + 0x1C) = 0;

loc_000CA9C4: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ebx, eax)) goto loc_000CA8C7; /* jne: not equal / not zero */

loc_000CA9D0: ;
    if (TEST_Z(MEM8(ebp + 6), 2)) goto loc_000CAA16; /* je: equal / zero */

loc_000CA9D6: ;
    SET_LO16(edx, ZX8(MEM8(ebp + 0x94)));
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    esi = MEM32(esp + 0x18);
    SET_LO8(ecx, 0); /* xor self */
    goto loc_000CA9F0;

    /* nop */

loc_000CA9F0: ;
    ebx = eax + eax * 8;
    MEM8(esi + ebx * 4 + 0x1F) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0x95));
    ebx = ZX8(MEM8(edi + 0x41));
    eax++;
    if (CMP_NE(eax, ebx)) goto loc_000CAA08; /* jne: not equal / not zero */

loc_000CAA06: ;
    eax = 0; /* xor self */

loc_000CAA08: ;
    edx--;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_000CAA16; /* je: equal / zero */

loc_000CAA0E: ;
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    if (CMP_NE(eax, ebx)) goto loc_000CA9F0; /* jne: not equal / not zero */

loc_000CAA16: ;
    if (TEST_Z(MEM8(ebp + 6), 4)) goto loc_000CAA7D; /* je: equal / zero */

loc_000CAA1C: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    SET_LO16(edx, ZX8(MEM8(ebp + 0x96)));
    SET_LO8(ecx, 0); /* xor self */
    eax--;
    MEM16(esp + 0x10) = LO16(edx);
    if (((int32_t)eax >= 0)) goto loc_000CAA40; /* jns: not sign (positive) */

loc_000CAA32: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;
    goto loc_000CAA40;

    /* nop */

loc_000CAA40: ;
    esi = MEM32(esp + 0x18);
    edx = eax + eax * 8;
    esi = esi + edx * 4 + 0x1F;
    edx = ZX8(MEM8(esi));
    ebx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(esi) = LO8(edx);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0x97));
    eax--;
    if (((int32_t)eax >= 0)) goto loc_000CAA67; /* jns: not sign (positive) */

loc_000CAA62: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_000CAA67: ;
    edx = MEM32(esp + 0x10);
    edx--;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_000CAA7D; /* je: equal / zero */

loc_000CAA75: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    if (CMP_NE(eax, edx)) goto loc_000CAA40; /* jne: not equal / not zero */

loc_000CAA7D: ;
    SET_LO8(eax, MEM8(ebp + 0x64));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000CAA94; /* je: equal / zero */

loc_000CAA86: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5902C4), _icall_esp); /* indirect call */
    }

loc_000CAA91: ;
    esp = esp + 4;

loc_000CAA94: ;
    SET_LO8(eax, MEM8(ebp + 0x70));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000CAAA9; /* je: equal / zero */

loc_000CAA9B: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5902CC), _icall_esp); /* indirect call */
    }

loc_000CAAA6: ;
    esp = esp + 4;

loc_000CAAA9: ;
    SET_LO8(eax, MEM8(ebp + 0x61));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_000CAAC8(); return; } /* je: equal / zero */

loc_000CAAB0: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x5902B0), _icall_esp); /* indirect call */
    }

loc_000CAABB: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000CAAC8(); return; } /* jne: not equal / not zero */

loc_000CAAC2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CAB20
 * Original: 0x000CAB20 - 0x000CAB53 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000CAB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x144);
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x140);
    if (TEST_NZ(ecx, ecx)) { sub_000CAB53(); return; } /* jne: not equal / not zero */

loc_000CAB4A: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB040
 * Original: 0x000CB040 - 0x000CB74B (1803 bytes, 476 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB040(void)
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

loc_000CB040: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000CB746; /* jle: less or equal (signed <=) */

loc_000CB052: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x6C);
    eax = MEM32(ebx + esi * 4 + 0x130);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x41));
    edi = edi + 5;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    if (TEST_NZ(eax, eax)) goto loc_000CB092; /* jne: not equal / not zero */

loc_000CB06E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = edi + edi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000CB080: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + esi * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_000CB744; /* je: equal / zero */

loc_000CB092: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + esi * 4 + 0x130);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ecx--;
    ecx = ecx & edi;
    ecx = ecx + eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_000CB743; /* je: equal / zero */

loc_000CB0B3: ;
    edx = MEM32(ebx + 0x144);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    eax = MEM32(0x8470DC);
    ecx = esi + eax + 0x330;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebx + 0x140);
    SET_LO8(eax, 2);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_000CB0EC: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    ecx = 0; /* xor self */
    edi = 0; /* xor self */
    esi = esp + 0x24;
    MEM32(esp + 0x24) = 0x6A38B4;
    MEM8(esp + 0x28) = 1;
    PUSH32(esp, 0); sub_00110160(); /* call 0x00110160 */

loc_000CB11C: ;
    SET_LO8(eax, MEM8(ebx + 0x3A));
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    if (TEST_Z(LO8(eax), 2)) goto loc_000CB187; /* je: equal / zero */

loc_000CB12A: ;
    eax--;
    MEM32(esp + 0x14) = eax;
    if (((int32_t)eax >= 0)) goto loc_000CB13A; /* jns: not sign (positive) */

loc_000CB131: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;

loc_000CB13A: ;
    ebx = ebx + 0x2C;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x4C) = edx;
    edx = eax + eax * 8;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x50) = ecx;
    ecx = eax + edx * 4;
    edx = ecx;
    eax = MEM32(edx);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(esp + 0x12) = LO8(eax);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(eax + 0x5C); /* movss */
    MEM32(esp + 0x44) = edx;
    goto loc_000CB1F5;

loc_000CB187: ;
    eax--;
    if (((int32_t)eax >= 0)) goto loc_000CB18F; /* jns: not sign (positive) */

loc_000CB18A: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_000CB18F: ;
    edx = eax + -1;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_GE(edx & edx, 0)) goto loc_000CB1A5; /* jge: greater or equal (signed >=) */

loc_000CB19A: ;
    ecx = ZX8(MEM8(ebx + 0x41));
    ecx--;
    MEM32(esp + 0x14) = ecx;
    edx = ecx;

loc_000CB1A5: ;
    ecx = MEM32(esp + 0x20);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    esi = eax;
    edi = MEM32(esi);
    SET_LO8(eax, MEM8(eax + 0x20));
    edx = edx + edx * 8;
    xmm0 = MEMF(ecx + edx * 4 + 0x18); /* movss */
    ecx = ecx + edx * 4;
    MEM32(esp + 0x48) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(esp + 0x50) = esi;
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 0x3C) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x44) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x40) = esi;
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x12) = LO8(edx);

loc_000CB1F5: ;
    xmm2 = MEMF(esp + 0x48); /* movss */
    eax = MEM32(esp + 0x28);
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm6 = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm5; /* subss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - MEMF(eax); /* subss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x68) = xmm7; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm7 = xmm7 * xmm4; /* mulss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x1C) = xmm7; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x5C); /* mulss */
    xmm3 = xmm3 * MEMF(esp + 0x54); /* mulss */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x5C); /* mulss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x68); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x54); /* mulss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x1C); /* movss */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x58); /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEMF(esp + 0x34) = xmm7; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000CB314; /* jp: parity */

loc_000CB306: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm7 = xmm4; /* movaps */
    MEMF(esp + 0x34) = xmm4; /* movss */
    goto loc_000CB33E;

loc_000CB314: ;
    xmm4 = MEMF(esp + 0x24); /* movss */
    xmm4 = xmm4 / MEMF(esp + 0x1C); /* divss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x30); /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x34) = xmm3; /* movss */

loc_000CB33E: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x1C));
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    ebp = ebp + 0x1C;
    ebx = 0xFF;
    MEM8(ebp + -16) = LO8(ebx);
    MEM8(ebp + -15) = LO8(ebx);
    MEM8(ebp + -14) = LO8(ebx);
    edi = 0; /* xor self */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -28) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    edx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -24) = xmm3; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    edx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(esp + 0x13));
    MEMF(ebp + -20) = xmm3; /* movss */
    edx = edx + 0x100;
    edx = edx << 6;
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -12) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm3 = MEMF(0x64B27C); /* movss */
    MEMF(ebp + -8) = xmm3; /* movss */
    MEM16(ebp + -4) = LO16(edi);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - xmm7; /* subss */
    edx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(ebp + -13) = LO8(eax);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp) = xmm3; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x34); /* subss */
    edx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm4; /* subss */
    edx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    MEMF(ebp + 0x10) = xmm3; /* movss */
    xmm3 = MEMF(0x649130); /* movss */
    MEMF(ebp + 0x14) = xmm3; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    MEM8(ebp + 0xF) = LO8(eax);
    MEM16(ebp + 0x18) = LO16(edi);
    ebp = ebp + 0x1C;
    esi = ebp + -56;
    goto loc_000CB471;

loc_000CB451: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm6 = MEMF(esp + 0x40); /* movss */
    edi = 0; /* xor self */

loc_000CB471: ;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(esp + 0x28);
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm7 = xmm0; /* movaps */
    MEMF(esp + 0x58) = xmm4; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x58); /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm2 = xmm2 * xmm7; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEMF(esp + 0x30) = xmm3; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000CB538; /* jp: parity */

loc_000CB52D: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    goto loc_000CB555;

loc_000CB538: ;
    xmm1 = MEMF(ecx + 0x18); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x1C); /* divss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */

loc_000CB555: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1C);
    xmm0 = MEMF(esp + 0x3C); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 + xmm0; /* addss */
    edx = (int32_t)xmm4; /* cvttss2si */
    ecx = SX16(LO16(edx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp) = xmm4; /* movss */
    xmm7 = MEMF(0x64B27C); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 + xmm6; /* addss */
    edx = (int32_t)xmm4; /* cvttss2si */
    ecx = SX16(LO16(edx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 + xmm5; /* addss */
    edx = (int32_t)xmm4; /* cvttss2si */
    ecx = SX16(LO16(edx));
    edx = ZX8(MEM8(esp + 0x12));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm4; /* movss */
    edx = edx + 0x100;
    MEM16(ebp + 0x18) = LO16(edi);
    edx = edx << 6;
    MEMF(ebp + 0x14) = xmm7; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    xmm0 = xmm0 - xmm2; /* subss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 0x10) = xmm4; /* movss */
    edx = SX16(LO16(ecx));
    ebp = ebp + 0x1C;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(ebp + -13) = LO8(eax);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm3; /* subss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm5 - xmm1; /* subss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649130); /* movss */
    MEM8(ebp + 0xF) = LO8(eax);
    MEM16(ebp + 0x18) = LO16(edi);
    edi = MEM32(esp + 0x2C);
    MEMF(ebp + 0x10) = xmm4; /* movss */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    MEM8(ebp + 0xC) = LO8(ebx);
    MEM8(ebp + 0xD) = LO8(ebx);
    MEM8(ebp + 0xE) = LO8(ebx);
    ebp = ebp + 0x1C;
    PUSH32(esp, ebx);
    eax = ebp + -112;
    esi = esi + 0x1C;
    PUSH32(esp, eax);
    esi = esi + 0x1C;
    eax = 4;
    ecx = edi;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000CB665: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000CB672: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000CB67F: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    if (CMP_BE(LO8(ecx), MEM8(esp + 0x13))) goto loc_000CB6CC; /* jbe: below or equal (unsigned <=) */

loc_000CB689: ;
    xmm1 = MEMF(ebp + -40); /* movss */
    xmm0 = MEMF(0x649130); /* movss */
    eax = MEM32(esp + 0x1C);
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
    MEM32(esp + 0x1C) = eax;
    esi = eax;

loc_000CB6CC: ;
    eax = MEM32(esp + 0x14);
    edi = eax;
    eax--;
    MEM32(esp + 0x14) = eax;
    if (((int32_t)eax >= 0)) goto loc_000CB6E6; /* jns: not sign (positive) */

loc_000CB6D9: ;
    edx = MEM32(esp + 0x70);
    eax = ZX8(MEM8(edx + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;

loc_000CB6E6: ;
    edx = MEM32(esp + 0x20);
    ecx = edi + edi * 8;
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x4C) = edx;
    edx = eax + eax * 8;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x50) = ecx;
    ecx = eax + edx * 4;
    edx = ecx;
    eax = MEM32(edx);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(esp + 0x12));
    MEM32(esp + 0x44) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x70);
    MEM8(esp + 0x12) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    if (CMP_NE(edi, edx)) goto loc_000CB451; /* jne: not equal / not zero */

loc_000CB743: ;
    POP32(esp, ebp);

loc_000CB744: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000CB746: ;
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
 * sub_000CB750
 * Original: 0x000CB750 - 0x000CB757 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB750(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000CB750: ;
    fp_push(MEMF(0x64923C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000CB760
 * Original: 0x000CB760 - 0x000CB7CB (107 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB760(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000CB760: ;
    esp = esp - 0x18;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_000CB768: ;
    MEM32(eax + 0x8004) = 5;
    eax = MEM32(0x801EE8);
    if (TEST_NZ(eax, eax)) goto loc_000CB7BB; /* jne: not equal / not zero */

loc_000CB77B: ;
    MEM32(0x801EE8) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_000CB78A: ;
    if (CMP_GE(MEM32(eax + 0x8004), 6)) goto loc_000CB7AD; /* jge: greater or equal (signed >=) */

loc_000CB793: ;
    MEM32(0x801F38) = 0xFA;
    fp_push((double)SMEM32(0x801F38)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000CB7AD: ;
    eax = MEM32(esp + 0x14);
    MEM32(0x801F38) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_000CB7BB: ;
    fp_push((double)SMEM32(0x801F38)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000CB7D0
 * Original: 0x000CB7D0 - 0x000CB7D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB7D0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000CB7D0: ;
    fp_push(MEMF(0x649238)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000CB7E0
 * Original: 0x000CB7E0 - 0x000CB80F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB7E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CB7E0: ;
    esp = esp - 8;
    if (TEST_Z(eax, eax)) goto loc_000CB80B; /* je: equal / zero */

loc_000CB7E7: ;
    PUSH32(esp, 8);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000CB808: ;
    esp = esp + 0x10;

loc_000CB80B: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB810
 * Original: 0x000CB810 - 0x000CB92F (287 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB810(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_000CB810: ;
    eax = MEM32(esp + 4);
    xmm2 = MEMF(eax + 0x358); /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(eax + 0x340); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x35C); /* mulss */
    MEMF(eax + 0x340) = xmm0; /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + MEMF(eax + 0x344); /* addss */
    MEMF(eax + 0x344) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x35C); /* movss */
    xmm3 = xmm3 * MEMF(eax + 0x348); /* mulss */
    MEMF(eax + 0x348) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x34C); /* movss */
    xmm3 = xmm3 * MEMF(eax + 0x360); /* mulss */
    MEMF(eax + 0x34C) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x354); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x360); /* mulss */
    MEMF(eax + 0x350) = xmm3; /* movss */
    MEMF(eax + 0x354) = xmm2; /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(eax + 0x344); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(eax + 0x348); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x354); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB930
 * Original: 0x000CB930 - 0x000CB989 (89 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB930(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000CB930: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x364); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x3C); /* mulss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    SET_LO16(eax, MEM16(ecx + 0x36));
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x364); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm1 = MEMF(ecx + 0x38); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    if (CMP_GE(LO16(eax), MEM16(ecx + 0x368))) goto loc_000CB983; /* jge: greater or equal (signed >=) */

loc_000CB977: ;
    SET_LO8(eax, MEM8(ecx + 0x36A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x36);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x7B) = LO8(eax);

loc_000CB983: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB990
 * Original: 0x000CB990 - 0x000CBAE6 (342 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB990: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = xmm0 - MEMF(ecx + 0x40); /* subss */
    xmm3 = MEMF(ecx + 0x3C); /* movss */
    xmm2 = MEMF(ecx + 0x54); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x48); /* subss */
    xmm5 = MEMF(ecx + 0x3C); /* movss */
    xmm1 = MEMF(ecx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x44); /* subss */
    xmm4 = MEMF(ecx + 0x3C); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(ecx + 0x40); /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(ecx + 0x44); /* addss */
    xmm1 = MEMF(ecx + 0x40); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(ecx + 0x48); /* addss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    esi = MEM32(0x8470DC);
    xmm2 = xmm2 - MEMF(eax + esi + 0x338); /* subss */
    xmm1 = xmm1 - MEMF(eax + esi + 0x330); /* subss */
    esi = eax + esi + 0x330;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(ecx + 0x40); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(ecx + 0x48); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    xmm7 = xmm2; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 - MEMF(ecx + 0x44); /* subss */
    xmm7 = xmm7 * xmm6; /* mulss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm6 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0xC) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm6 = xmm6 - xmm2; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    edx = ecx + 0x294;
    ebx = edx;
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (1 /* jp after test - parity */) { sub_000CBAE6(); return; } /* jp: parity */

loc_000CBAD5: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_000CBB11(); return; /* tail jmp 0x000CBB11 */

}

/**
 * sub_000CBDC0
 * Original: 0x000CBDC0 - 0x000CC284 (1220 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBDC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBDC0: ;
    esp = esp - 0x180;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x144);
    edx = ZX8(MEM8(ebx + 0x71));
    xmm0 = MEMF(ebx + 0x74); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x78); /* addss */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx + edx * 2;
    edx = ecx + ecx * 8;
    edx = ebp + edx * 4;
    MEMF(ebx + 0x78) = xmm0; /* movss */
    esi = ecx + 1;
    MEM8(edx + 0x21) = 1;
    ecx = ZX8(MEM8(eax + 0x41));
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    edi = edi * 4 + 0x58FF6C;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(esi, ecx)) goto loc_000CBE17; /* jne: not equal / not zero */

loc_000CBE15: ;
    esi = 0; /* xor self */

loc_000CBE17: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_000CC279; /* jbe: below or equal (unsigned <=) */

loc_000CBE29: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4E);
    if (CMP_EQ(esi, edx)) goto loc_000CC279; /* je: equal / zero */

loc_000CBE35: ;
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000CBE3E: ;
    xmm0 = MEMF(0x64A1B0); /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(0x64A1AC); /* mulss */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1A8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1A4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x40); /* movss */
    xmm4 = xmm4 * MEMF(0x64A1A0); /* mulss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64A19C); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A198); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x64A194); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(0x64A190); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x64A18C); /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * MEMF(0x64A188); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = 0; /* xor self */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC8) = xmm3; /* movss */
    MEM32(esp + 0xC4) = 0x303;
    MEMF(esp + 0xD4) = xmm3; /* movss */
    MEM16(esp + 0x4C) = LO16(eax);
    MEM32(esp + 0xFC) = eax;
    MEM16(esp + 0x78) = 8;
    MEM16(esp + 0x7A) = 0x20;
    MEM16(esp + 0x3C) = LO16(eax);
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEM16(esp + 0x3E) = LO16(eax);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm3; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEM32(esp + 0xAC) = 0x40000001;
    MEM8(esp + 0xC3) = 0xFF;
    MEM8(esp + 0xC0) = 0xFF;
    MEM8(esp + 0xC1) = 0xFF;
    MEM8(esp + 0xC2) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CBFCC: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM8(esp + 0xCC) = 1;
    MEM32(esp + 0xEC) = 4;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 0x14;
    MEM32(esp + 0xD0) = eax;
    eax = 2;
    ecx = 0; /* xor self */
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xF8) = eax;
    eax = esi + esi * 8;
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xF4) = ecx;
    ebp = ebp + eax * 4;
    ecx = ebp + 0xC;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 8);
    edx = edx + 0xC;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    goto loc_000CC057;

loc_000CC054: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_000CC057: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CC05C: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CC063: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000CC080; /* je: equal / zero */

loc_000CC074: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000CC085;

loc_000CC080: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000CC085: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC09C; /* je: equal / zero */

loc_000CC089: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CC09C; /* je: equal / zero */

loc_000CC08E: ;
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000CC0A5;

loc_000CC09C: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000CC0A5: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000CC0BB; /* je: equal / zero */

loc_000CC0AF: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_000CC0C0;

loc_000CC0BB: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_000CC0C0: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC0D7; /* je: equal / zero */

loc_000CC0C4: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CC0D7; /* je: equal / zero */

loc_000CC0C9: ;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000CC0E0;

loc_000CC0D7: ;
    xmm5 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000CC0E0: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000CC0FD; /* je: equal / zero */

loc_000CC0F1: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000CC102;

loc_000CC0FD: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000CC102: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC119; /* je: equal / zero */

loc_000CC106: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CC119; /* je: equal / zero */

loc_000CC10B: ;
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000CC122;

loc_000CC119: ;
    xmm4 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000CC122: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000CC137; /* je: equal / zero */

loc_000CC12B: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_000CC13C;

loc_000CC137: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_000CC13C: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC153; /* je: equal / zero */

loc_000CC140: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CC153; /* je: equal / zero */

loc_000CC145: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000CC15C;

loc_000CC153: ;
    xmm2 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000CC15C: ;
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x648E68); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CC16E: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x10);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(ebp); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    SET_LO16(edx, LO16(edx) + MEM16(edi + 8));
    MEM16(esp + 0x7E) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CC209: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x5C);
    SET_LO8(eax, LO8(eax) & 1);
    PUSH32(esp, 0);
    SET_LO8(eax, LO8(eax) | 2);
    PUSH32(esp, 0);
    MEM8(esp + 0x2C) = LO8(eax);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x597978);
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000CC23A: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_000CC256; /* je: equal / zero */

loc_000CC241: ;
    edi = eax + 0x310;
    ecx = 0x17;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x14);

loc_000CC256: ;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x78) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000CC054; /* ja: above (unsigned >) */

loc_000CC279: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x180;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC290
 * Original: 0x000CC290 - 0x000CC3F4 (356 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC290: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    eax = MEM32(edi + 0x140);
    ebx = MEM32(edi + 0x144);
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(ebp, ecx)) goto loc_000CC3EA; /* je: equal / zero */

loc_000CC2C1: ;
    ebp--;
    if (((int32_t)ebp >= 0)) goto loc_000CC2C9; /* jns: not sign (positive) */

loc_000CC2C4: ;
    ebp = ZX8(MEM8(edi + 0x41));
    ebp--;

loc_000CC2C9: ;
    eax = MEM32(esp + 0x20);
    edx = ebp + ebp * 8;
    ecx = eax + edx * 4;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1F0);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x78); /* subss */
    MEM32(esp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1EE);
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x80); /* subss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 + MEMF(esi + 0x7C); /* addss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 / xmm4; /* divss */
    xmm5 = xmm5 + MEMF(0x648D14); /* addss */
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_000CC3DE; /* jbe: below or equal (unsigned <=) */

loc_000CC375: ;
    edx = MEM32(ebx);
    eax = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, 0x3F800000);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x174));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x60006);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_000CC39C: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_000CC3AD: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    esp = esp + 0x2C;
    if (CMP_EQ(eax, ebp)) goto loc_000CC3DE; /* je: equal / zero */

loc_000CC3B8: ;
    eax = ZX8(MEM8(edi + 0x41));
    /* nop */

loc_000CC3C0: ;
    SET_LO8(ecx, MEM8(edi + 0x4D));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(edi + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_000CC3D3; /* jne: not equal / not zero */

loc_000CC3CF: ;
    MEM8(edi + 0x4D) = 0;

loc_000CC3D3: ;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(edx, ebp)) goto loc_000CC3C0; /* jne: not equal / not zero */

loc_000CC3DE: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ebp, eax)) goto loc_000CC2C1; /* jne: not equal / not zero */

loc_000CC3EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC400
 * Original: 0x000CC400 - 0x000CC57A (378 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC400: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x84A5F8);
    xmm4 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edx = edx + 0x10B;
    /* nop */

loc_000CC430: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(ecx + edi), 0)) goto loc_000CC55D; /* je: equal / zero */

loc_000CC440: ;
    SET_LO8(ecx, MEM8(edx + 0x2A));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000CC55D; /* jne: not equal / not zero */

loc_000CC44B: ;
    ecx = MEM32(eax + 0x144);
    ecx = MEM32(ecx);
    SET_LO8(ecx, MEM8(ecx + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(edx))) goto loc_000CC55D; /* je: equal / zero */

loc_000CC461: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4E);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    if (CMP_EQ(ecx, esi)) goto loc_000CC55D; /* je: equal / zero */

loc_000CC471: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_000CC479; /* jns: not sign (positive) */

loc_000CC474: ;
    ecx = ZX8(MEM8(eax + 0x41));
    ecx--;

loc_000CC479: ;
    esi = ecx + ecx * 8;
    esi = ebp + esi * 4;
    ebx = MEM32(esi);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(edx + -147); /* subss */
    MEM32(esp + 0x18) = esi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0xE1);
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 - MEMF(edx + -139); /* subss */
    xmm3 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0xE5);
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm6 = xmm6 + MEMF(edx + -143); /* addss */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0xE3);
    MEM32(esp + 0x14) = ebx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 / xmm6; /* divss */
    xmm7 = xmm7 + xmm4; /* addss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(0x649234); /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_000CC551; /* jbe: below or equal (unsigned <=) */

loc_000CC527: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    if (CMP_EQ(esi, ecx)) goto loc_000CC551; /* je: equal / zero */

loc_000CC52F: ;
    esi = ZX8(MEM8(eax + 0x41));

loc_000CC533: ;
    SET_LO8(ebx, MEM8(eax + 0x4D));
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(eax + 0x4D) = LO8(ebx);
    ebx = SX8(LO8(ebx));
    if (CMP_NE(ebx, esi)) goto loc_000CC546; /* jne: not equal / not zero */

loc_000CC542: ;
    MEM8(eax + 0x4D) = 0;

loc_000CC546: ;
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) - 1;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    if (CMP_NE(ebx, ecx)) goto loc_000CC533; /* jne: not equal / not zero */

loc_000CC551: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    if (CMP_NE(ecx, esi)) goto loc_000CC471; /* jne: not equal / not zero */

loc_000CC55D: ;
    edi++;
    edx = edx + 0x6D0;
    if (CMP_L(edi, 0x80)) goto loc_000CC430; /* jl: less (signed <) */

loc_000CC570: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC580
 * Original: 0x000CC580 - 0x000CC5CB (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC580: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    ecx = MEM32(ebx + 0x140);
    eax = MEM32(ebx + 0x144);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x568);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM8(esp + 0x34) = 0x18;
    MEM8(esp + 0x35) = 0x19;
    MEM8(esp + 0x36) = 0x1A;
    if (CMP_EQ(eax, ebp)) goto loc_000CC5C3; /* je: equal / zero */

loc_000CC5B6: ;
    if (CMP_EQ(MEM8(eax + 0x70), 1)) { sub_000CC5CB(); return; } /* je: equal / zero */

loc_000CC5BC: ;
    MEM8(ecx + 0x541) = MEM8(ecx + 0x541) & 0xFE;

loc_000CC5C3: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC840
 * Original: 0x000CC840 - 0x000CC871 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC840(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CC840: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x4C));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(ecx + 0x144);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC870; /* je: equal / zero */

loc_000CC851: ;
    ecx = MEM32(eax + 0x68);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax + 0x68;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000CC86F; /* je: equal / zero */

loc_000CC85D: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(eax + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000CC86F: ;
    POP32(esp, edi);

loc_000CC870: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC880
 * Original: 0x000CC880 - 0x000CCBCD (845 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC880: ;
    esp = esp - 0x58;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    ecx = MEM32(edi + 0x144);
    eax = ZX8(MEM8(ecx + 0x7C));
    ebp = eax + eax * 8;
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x51) = LO8(eax);
    MEM8(esp + 0x52) = LO8(eax);
    MEM8(esp + 0x53) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    eax = edi + 0x2C;
    edx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = (int32_t)MEMF(ecx + 0x84); /* cvttss2si */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    ebp = ebp * 4 + 0x58FF88;
    MEM16(esp + 0x22) = 1;
    MEM8(esp + 0x50) = 0xA;
    MEM32(esp + 0x4C) = 0x28;
    MEM8(esp + 0x55) = 0x82;
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_000CC90E; /* je: equal / zero */

loc_000CC906: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000CC90E: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_000CC937; /* jae: above or equal (unsigned >=) */

loc_000CC927: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */

loc_000CC937: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000CCBC7; /* jle: less or equal (signed <=) */

loc_000CC93F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    goto loc_000CC950;

loc_000CC947: ;
    xmm5 = 0.0f; /* xorps self = zero */
    /* nop */

loc_000CC950: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CC955: ;
    xmm0 = xmm0 * MEMF(ebp + 8); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 4); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CC96A: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CC971: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000CC98E; /* je: equal / zero */

loc_000CC982: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000CC993;

loc_000CC98E: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000CC993: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC9AA; /* je: equal / zero */

loc_000CC997: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CC9AA; /* je: equal / zero */

loc_000CC99C: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000CC9B3;

loc_000CC9AA: ;
    xmm4 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000CC9B3: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000CC9C9; /* je: equal / zero */

loc_000CC9BD: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_000CC9CE;

loc_000CC9C9: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_000CC9CE: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CC9E5; /* je: equal / zero */

loc_000CC9D2: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CC9E5; /* je: equal / zero */

loc_000CC9D7: ;
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000CC9EE;

loc_000CC9E5: ;
    xmm3 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000CC9EE: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000CCA0B; /* je: equal / zero */

loc_000CC9FF: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000CCA10;

loc_000CCA0B: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000CCA10: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CCA27; /* je: equal / zero */

loc_000CCA14: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CCA27; /* je: equal / zero */

loc_000CCA19: ;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000CCA30;

loc_000CCA27: ;
    xmm2 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000CCA30: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000CCA45; /* je: equal / zero */

loc_000CCA39: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_000CCA4A;

loc_000CCA45: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_000CCA4A: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000CCA61; /* je: equal / zero */

loc_000CCA4E: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000CCA61; /* je: equal / zero */

loc_000CCA53: ;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000CCA6A;

loc_000CCA61: ;
    xmm1 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000CCA6A: ;
    xmm0 = MEMF(ebp); /* movss */
    eax = MEM32(esp + 0x70);
    xmm6 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ebp); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 8); /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 + MEMF(eax); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm7 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CCAA5: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x22);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x20));
    MEM8(esp + 0x31) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CCAB9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x1C));
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CCACF: ;
    xmm0 = xmm0 * MEMF(ebp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CCAE4: ;
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x14); /* addss */
    xmm5 = xmm5 - MEMF(edi + 0x2C); /* subss */
    xmm6 = xmm6 - MEMF(edi + 0x30); /* subss */
    xmm7 = xmm7 - MEMF(edi + 0x34); /* subss */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x34;
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    eax = 0x34;
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm7; /* movss */
    MEM32(esp + 0x4C) = 1;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_000CCB4F: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_000CCB9F; /* je: equal / zero */

loc_000CCB56: ;
    eax = MEM32(eax + 0x144);
    edi = eax;
    ecx = 0xB;
    esi = esp + 0x3C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x6C);
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x2D) = 0;
    MEM8(eax + 0x2E) = 0;
    MEM8(eax + 0x2F) = 0;
    MEM8(eax + 0x30) = 0;
    MEM8(eax + 0x31) = 0;
    eax = MEM32(0x849428);
    eax++;
    (void)0; /* cmp eax, 0x1E - flags set for next jcc */
    MEM32(0x849428) = eax;
    if (CMP_LE(eax, 0x1E)) goto loc_000CCB9F; /* jle: less or equal (signed <=) */

loc_000CCB95: ;
    MEM32(0x849428) = 0x1E;

loc_000CCB9F: ;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax + 0x84); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_000CC947; /* jne: not equal / not zero */

loc_000CCBC5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000CCBC7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_000CCBD0
 * Original: 0x000CCBD0 - 0x000CCC6D (157 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCBD0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CCBD0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    eax = MEM32(edi + 0x144);
    ecx = (int32_t)MEMF(edi + 0x30); /* cvttss2si */
    edx = (int32_t)MEMF(edi + 0x34); /* cvttss2si */
    MEM32(esp + 0x14) = eax;
    eax = ZX8(MEM8(eax + 0x88));
    ebp = eax + eax * 2;
    eax = (int32_t)MEMF(edi + 0x2C); /* cvttss2si */
    MEM16(esp + 0x28) = LO16(eax);
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x44) = LO8(eax);
    MEM8(esp + 0x45) = LO8(eax);
    MEM8(esp + 0x46) = LO8(eax);
    MEM8(esp + 0x47) = LO8(eax);
    eax = 0; /* xor self */
    ebp = ebp * 8 + 0x58FFD0;
    MEM16(esp + 0x2A) = LO16(ecx);
    MEM16(esp + 0x2C) = LO16(edx);
    MEM8(esp + 0x34) = 0;
    MEM8(esp + 0x36) = 0;
    MEM8(esp + 0x35) = 0;
    MEM8(esp + 0x48) = 0;
    MEM8(esp + 0x49) = 0;
    MEM8(esp + 0x4A) = 0;
    MEM8(esp + 0x37) = 0xFF;
    MEM16(esp + 0x4C) = 0x12;
    MEM16(esp + 0x24) = LO16(eax);
    MEM16(esp + 0x26) = LO16(eax);
    MEM32(esp + 0x18) = 0x58DB9C;
    MEM16(esp + 0x40) = 0x12C;
    g_seh_ebp = ebp; sub_000CCC70(); return; /* tail jmp 0x000CCC70 */

}

/**
 * sub_000CCEA0
 * Original: 0x000CCEA0 - 0x000CCEC3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCEA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CCEA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    ecx = MEM32(ecx);
    SET_LO8(ecx, MEM8(ecx + 0x10B));
    eax = 0; /* xor self */

loc_000CCEB4: ;
    if (CMP_EQ(MEM8(eax + 0x5902D0), LO8(ecx))) { sub_000CCEC3(); return; } /* je: equal / zero */

loc_000CCEBC: ;
    eax++;
    if (CMP_L(eax, 6)) goto loc_000CCEB4; /* jl: less (signed <) */

loc_000CCEC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CCED0
 * Original: 0x000CCED0 - 0x000CCEF3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CCED0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    ecx = MEM32(ecx);
    SET_LO8(ecx, MEM8(ecx + 0x10B));
    eax = 0; /* xor self */

loc_000CCEE4: ;
    if (CMP_EQ(MEM8(eax + 0x5902D0), LO8(ecx))) { sub_000CCEF3(); return; } /* je: equal / zero */

loc_000CCEEC: ;
    eax++;
    if (CMP_L(eax, 6)) goto loc_000CCEE4; /* jl: less (signed <) */

loc_000CCEF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CCF00
 * Original: 0x000CCF00 - 0x000CCFE9 (233 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCF00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000CCF00: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x3C8);
    esp = esp - 0x28;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(0x8472AC) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_000CCFE3; /* je: equal / zero */

loc_000CCF1B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x59CA38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649020); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp) = 0x15;
    xmm0 = MEMF(eax + 0x84); /* movss */
    MEMF(0x7FCB64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x88); /* movss */
    MEMF(0x7FCB68) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8C); /* movss */
    MEMF(0x7FCB6C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD38); /* movss */
    MEMF(0x7FCB58) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD34); /* movss */
    MEMF(0x7FCB5C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD30); /* movss */
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_000CCFE3; /* je: equal / zero */

loc_000CCFD9: ;
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000CCFE0: ;
    esp = esp + 8;

loc_000CCFE3: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000CCFF0
 * Original: 0x000CCFF0 - 0x000CD03A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCFF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CCFF0: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x144);
    if (TEST_Z(ecx, ecx)) { sub_000CD03A(); return; } /* je: equal / zero */

loc_000CD003: ;
    if (CMP_EQ(ecx, 2)) { sub_000CD03A(); return; } /* je: equal / zero */

loc_000CD008: ;
    if (CMP_EQ(ecx, 0x26)) { sub_000CD03A(); return; } /* je: equal / zero */

loc_000CD00D: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_000CD029; /* jne: not equal / not zero */

loc_000CD012: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_000CD02B; /* jne: not equal / not zero */

loc_000CD01E: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 8) = LO8(ecx);

loc_000CD029: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CD02B: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_000CD029; /* jne: not equal / not zero */

loc_000CD030: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 8) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CD0D0
 * Original: 0x000CD0D0 - 0x000CD0F9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD0D0(void)
{

loc_000CD0D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_000CD100(); /* call 0x000CD100 */

loc_000CD0DB: ;
    eax = edi + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000CD0E6: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_000CD0ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000CD0F3: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CD100
 * Original: 0x000CD100 - 0x000CD167 (103 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD100(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CD100: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x144);
    SET_LO8(eax, MEM8(esi + 0x3D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000CD11C; /* je: equal / zero */

loc_000CD10E: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5902F4), _icall_esp); /* indirect call */
    }

loc_000CD119: ;
    esp = esp + 4;

loc_000CD11C: ;
    SET_LO8(eax, MEM8(esi + 0x3A));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000CD131; /* je: equal / zero */

loc_000CD123: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5902E8), _icall_esp); /* indirect call */
    }

loc_000CD12E: ;
    esp = esp + 4;

loc_000CD131: ;
    esi = MEM32(esi + 0x14C);
    if (TEST_Z(esi, esi)) goto loc_000CD165; /* je: equal / zero */

loc_000CD13B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000CD165; /* jne: not equal / not zero */

loc_000CD144: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000CD14B: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000CD165; /* jl: less (signed <) */

loc_000CD152: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000CD167(); return; } /* je: equal / zero */

loc_000CD15F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000CD162: ;
    esp = esp + 4;

loc_000CD165: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CD310
 * Original: 0x000CD310 - 0x000CE0AB (3483 bytes, 723 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD310(void)
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

loc_000CD310: ;
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x16C);
    eax = MEM32(ebx + 0x140);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x144);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (TEST_Z(eax, eax)) { sub_000CE0AB(); return; } /* je: equal / zero */

loc_000CD342: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(ebp + 8))) { sub_000CE0AB(); return; } /* jne: not equal / not zero */

loc_000CD351: ;
    SET_LO8(edx, MEM8(esi + 0x16E));
    SET_LO8(eax, MEM8(ebp + 0x150));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_NE(LO8(edx), 0xF)) goto loc_000CD369; /* jne: not equal / not zero */

loc_000CD365: ;
    SET_LO8(eax, LO8(eax) | 0x10);
    goto loc_000CD36B;

loc_000CD369: ;
    SET_LO8(eax, LO8(eax) & 0xEF);

loc_000CD36B: ;
    MEM8(ebp + 0x150) = LO8(eax);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000CD42A; /* je: equal / zero */

loc_000CD380: ;
    ecx = ebp + 0xC;
    MEM32(esp + 0x54) = ecx;
    ecx = ebp + 0x94;
    MEM32(esp + 0x5C) = ecx;
    ecx = esp + 0x24;
    MEM32(esp + 0x30) = ecx;
    edx = ebp + 0x18;
    MEM32(esp + 0x58) = edx;
    ecx = esp + 0x74;
    MEM32(esp + 0x38) = ecx;
    ecx = ZX8(MEM8(ebp + 9));
    edx = ebp + 0xD8;
    MEM32(esp + 0x60) = edx;
    edx = esp + 0x98;
    MEM32(esp + 0x34) = edx;
    ecx = ecx << 6;
    ecx = ecx + eax;
    edx = esp + 0x80;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = 4;
    ecx = esp + 0x5C;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_000CD3E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi;
    ebx = esp + 0x38;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_000CD3F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_000CD40F: ;
    SET_LO8(eax, MEM8(ebp + 0x150));
    esi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x198);
    esp = esp + 0x20;
    SET_LO8(eax, LO8(eax) & 0xFE);
    goto loc_000CD4B3;

loc_000CD42A: ;
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = esp + 0x60;
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_000CD43E: ;
    xmm2 = MEMF(esi + 0x78); /* movss */
    xmm1 = MEMF(0x64A184); /* movss */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x649FFC); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm3 = MEMF(esi + 0x80); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebp + 0x150));
    esp = esp + 0xC;
    SET_LO8(eax, LO8(eax) | 1);

loc_000CD4B3: ;
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    MEM8(ebp + 0x150) = LO8(eax);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = ebx + 0x2C;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    xmm0 = MEMF(ebp + 0x28); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x130); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x130) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_000CD875; /* jbe: below or equal (unsigned <=) */

loc_000CD502: ;
    xmm2 = MEMF(ebp + 0x12C); /* movss */
    xmm6 = MEMF(ebp + 0x114); /* movss */
    xmm7 = MEMF(ebp + 0x118); /* movss */
    eax = ebp + 0x114;
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 / xmm0; /* divss */
    xmm0 = MEMF(eax + 8); /* movss */
    edi = ebp + 0x120;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    ecx = esp + 0x24;
    edx = esp + 0x30;
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x4C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x98;
    ecx = esp + 0x54;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x30;
    eax = esp + 0x8C;
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x4C) = eax;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x54;
    edx = esp + 0x68;
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x4C) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    eax = esp + 0x40;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_000CD680: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    edx = MEM32(esp + 0x64);
    ecx = eax + eax * 4;
    ecx = edx + ecx * 8;
    edx = MEM32(esp + 0x14);
    eax = ecx;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    edi = ecx + 0xC;
    MEM32(eax + 8) = edx;
    MEM32(esp + 0x4C) = edi;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x144);
    MEM32(ecx + 0x24) = eax;
    SET_LO8(edx, MEM8(ebp + 0x3E));
    MEM8(ecx + 0x20) = LO8(edx);
    eax = MEM32(ebp + 0x30);
    MEM32(ecx + 0x18) = eax;
    xmm0 = MEMF(ebp + 0x24); /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xA4); /* addss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x34); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x18); /* addss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x4E));
    SET_LO8(eax, LO8(eax) + 1);
    SET_LO8(ecx, LO8(eax));
    MEM8(ebx + 0x4E) = LO8(eax);
    eax = ZX8(MEM8(ebx + 0x41));
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_000CD780; /* jne: not equal / not zero */

loc_000CD77C: ;
    MEM8(ebx + 0x4E) = 0;

loc_000CD780: ;
    SET_LO8(ecx, MEM8(ebx + 0x4C));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebx + 0x4C) = LO8(ecx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ecx, MEM8(ebx + 0x4D));
    if (CMP_NE(MEM8(ebx + 0x4E), LO8(ecx))) goto loc_000CD7A7; /* jne: not equal / not zero */

loc_000CD792: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebx + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_000CD7A2; /* jne: not equal / not zero */

loc_000CD79E: ;
    MEM8(ebx + 0x4D) = 0;

loc_000CD7A2: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(ebx + 0x4C) = LO8(edx);

loc_000CD7A7: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x94); /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x8C); /* addss */
    xmm7 = xmm7 + MEMF(esp + 0x90); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x6C); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x70); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x130); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    xmm2 = xmm2 - xmm4; /* subss */
    MEMF(ebp + 0x130) = xmm0; /* movss */
    if ((xmm0 > xmm5)) goto loc_000CD680; /* ja: above (unsigned >) */

loc_000CD831: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(ebp + 0x114) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(ebp + 0x118) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(ebp + 0x11C) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(ebp + 0x120) = edx;
    MEM32(ebp + 0x124) = eax;
    MEM32(ebp + 0x128) = ecx;
    MEMF(ebp + 0x12C) = xmm2; /* movss */

loc_000CD875: ;
    eax = MEM32(esi + 0x3C8);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_000CDBFB; /* je: equal / zero */

loc_000CD885: ;
    SET_LO8(edx, MEM8(esi + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_000CDBFB; /* je: equal / zero */

loc_000CD897: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CD89C: ;
    xmm0 = xmm0 * MEMF(ebp + 0xA4); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xA0); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x138); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x138) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_000CDBFB; /* jbe: below or equal (unsigned <=) */

loc_000CD8CD: ;
    eax = MEM32(ebp + 4);
    SET_LO16(ecx, MEM16(ebp + 0xD4));
    xmm1 = MEMF(0x648E60); /* movss */
    SET_LO16(edx, MEM16(ebp + 0xD6));
    xmm6 = 0.0f; /* xorps self = zero */
    (void)0; /* cmp eax, 0x13F - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, 0x13F)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(eax, LO8(eax) & 6);
    SET_LO8(eax, LO8(eax) + 0xA);
    MEM8(esp + 0xC8) = LO8(eax);
    MEM16(esp + 0xCE) = LO16(ecx);
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = esp + 0x10;
    MEMF(esp + 0xD4) = xmm6; /* movss */
    MEM16(esp + 0xE6) = 0x15;
    MEM32(esp + 0xE8) = 1;
    MEM8(esp + 0xEC) = 0xFF;
    MEMF(esp + 0xC0) = xmm1; /* movss */
    MEM32(esp + 0xC4) = 0x48;
    MEM8(esp + 0xC9) = 0xFF;
    MEM16(esp + 0xD0) = LO16(edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0017BE70(); /* call 0x0017BE70 */

loc_000CD961: ;
    eax = MEM32(esp + 0x10);
    if (CMP_LE(eax, edi)) goto loc_000CDBFE; /* jle: less or equal (signed <=) */

loc_000CD96D: ;
    edi = eax;
    /* nop */

loc_000CD970: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CD975: ;
    ecx = MEM32(ebp + 0xAC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0xA8));
    MEM8(esp + 0xED) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CD991: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xB2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0xB0));
    MEM16(esp + 0xE4) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CD9B0: ;
    xmm0 = xmm0 * MEMF(ebp + 0xB8); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xB4); /* addss */
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0xD8) = edx;
    edx = MEM32(esp + 0x74);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xD8); /* subss */
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(esp + 0x78);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0xE0) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xDC); /* subss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xE0); /* subss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esp + 0x58;
    ecx = esp + 0x18;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00111D50(); /* call 0x00111D50 */

loc_000CDA53: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000CDBDC; /* je: equal / zero */

loc_000CDA5E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDA63: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0xC0); /* mulss */
    xmm5 = xmm5 + MEMF(ebp + 0xBC); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDA85: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(ebp + 0xC4); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CDA95: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000CDAA0: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x3C); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x60); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x20); /* addss */
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0xBC) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x24); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x28); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0xC4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDB30: ;
    xmm0 = xmm0 * MEMF(ebp + 0xCC); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC8); /* addss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDB4E: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xD2);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xD0);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEM32(esp + 0x70) = edx;
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    /* FPU: fimul dword ptr [esp + 0x70] */
    MEM32(esp + 0x70) = eax;
    /* FPU: fiadd dword ptr [esp + 0x70] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000CDB81: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = esp + 0xB8;
    MEM8(esp + 0xD9) = LO8(eax);
    MEM8(esp + 0xD6) = 0xFF;
    MEM8(esp + 0xD7) = 0xFF;
    MEM8(esp + 0xD8) = 0xFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esp + 0x114;
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_000CDBCE: ;
    xmm5 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp + 0x3C;

loc_000CDBDC: ;
    edi--;
    xmm0 = MEMF(ebp + 0x138); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(ebp + 0x138) = xmm0; /* movss */
    if ((edi != 0)) goto loc_000CD970; /* jne: not equal / not zero */

loc_000CDBF7: ;
    edi = 0; /* xor self */
    goto loc_000CDBFE;

loc_000CDBFB: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_000CDBFE: ;
    if (CMP_EQ(MEM32(esi + 0x3C8), edi)) goto loc_000CDF96; /* je: equal / zero */

loc_000CDC0A: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_000CDF96; /* je: equal / zero */

loc_000CDC1A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDC1F: ;
    xmm0 = xmm0 * MEMF(ebp + 0xE8); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xE4); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x13C); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x13C) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_000CDF96; /* jbe: below or equal (unsigned <=) */

loc_000CDC50: ;
    (void)0; /* cmp MEM32(ebp + 4), 0x13F - flags set for next jcc */
    eax = 2;
    ecx = 4;
    MEM32(esp + 0x120) = 0x303;
    MEM32(esp + 0x114) = ecx;
    MEM32(esp + 0x118) = edi;
    MEM32(esp + 0x11C) = eax;
    MEM32(esp + 0x124) = 0x103;
    MEMF(esp + 0xFC) = xmm6; /* movss */
    MEMF(esp + 0x100) = xmm6; /* movss */
    MEM8(esp + 0x105) = 0xFF;
    MEM32(esp + 0x110) = edi;
    MEM32(esp + 0x10C) = eax;
    if (CMP_NE(MEM32(ebp + 4), 0x13F)) goto loc_000CDCCF; /* jne: not equal / not zero */

loc_000CDCB6: ;
    MEM32(esp + 0x108) = ecx;
    MEM8(esp + 0x104) = 0;
    MEM8(esp + 0x106) = 0;
    goto loc_000CDCE6;

loc_000CDCCF: ;
    MEM32(esp + 0x108) = eax;
    MEM8(esp + 0x104) = 0xFF;
    MEM8(esp + 0x106) = 0xFF;

loc_000CDCE6: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x13C) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x110));
    MEM32(esp + 0x140) = edx;
    SET_LO16(edx, MEM16(ebp + 0x112));
    MEM32(esp + 0x144) = eax;
    MEMF(esp + 0x148) = xmm6; /* movss */
    MEMF(esp + 0x14C) = xmm6; /* movss */
    MEMF(esp + 0x150) = xmm6; /* movss */
    MEM16(esp + 0x128) = LO16(ecx);
    MEM16(esp + 0x12A) = LO16(edx);
    MEM16(esp + 0x12C) = 1;
    MEMF(esp + 0x130) = xmm5; /* movss */
    MEM32(esp + 0x164) = 0xC207;
    MEM8(esp + 0x16C) = 0xFF;
    MEM8(esp + 0x16D) = 0xFF;
    MEM8(esp + 0x16E) = 0xFF;
    MEM8(esp + 0x16F) = 0;
    edi = edi;

loc_000CDD80: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CDD85: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xEE);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0xEC));
    MEM16(esp + 0xF8) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CDDA4: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xF2);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0xF0));
    MEM8(esp + 0x107) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDDC1: ;
    xmm0 = xmm0 * MEMF(ebp + 0xF8); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xF4); /* addss */
    edx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x88);
    MEMF(esp + 0x138) = xmm0; /* movss */
    MEMF(esp + 0x134) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x13C); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x140); /* subss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x144); /* subss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esp + 0x58;
    ecx = esp + 0x18;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00111D50(); /* call 0x00111D50 */

loc_000CDE55: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000CDF79; /* je: equal / zero */

loc_000CDE60: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDE65: ;
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0x100); /* mulss */
    xmm5 = xmm5 + MEMF(ebp + 0xFC); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDE8D: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(ebp + 0x104); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CDE9D: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000CDEA8: ;
    xmm0 = MEMF(esp + 0xB4); /* movss */
    xmm1 = MEMF(esp + 0xB0); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x3C); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x60); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x20); /* addss */
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x160) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x24); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x164) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x28); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x168) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CDF3E: ;
    xmm0 = xmm0 * MEMF(ebp + 0x10C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x108); /* addss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    eax = esp + 0x104;
    MEMF(esp + 0x16C) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000CDF6E: ;
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp + 0x20;

loc_000CDF79: ;
    xmm0 = MEMF(ebp + 0x13C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(ebp + 0x13C) = xmm0; /* movss */
    if ((xmm0 > xmm5)) goto loc_000CDD80; /* ja: above (unsigned >) */

loc_000CDF96: ;
    SET_LO8(eax, MEM8(ebp + 0x151));
    ecx = MEM32(0x7FA20C);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    edx = SX8(LO8(eax));
    MEM8(ebp + 0x151) = LO8(eax);
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    if (CMP_LE(edx, eax)) goto loc_000CDFDA; /* jle: less or equal (signed <=) */

loc_000CDFB9: ;
    eax = MEM32(ebp);
    if (CMP_EQ(eax, edi)) goto loc_000CDFD3; /* je: equal / zero */

loc_000CDFC0: ;
    edx = MEM32(eax + 0x568);
    if (CMP_EQ(edx, edi)) goto loc_000CDFD3; /* je: equal / zero */

loc_000CDFCA: ;
    eax = edx;
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;

loc_000CDFD3: ;
    MEM8(ebp + 0x151) = 0;

loc_000CDFDA: ;
    if (TEST_Z(MEM8(ebp + 0x150), 8)) goto loc_000CE09B; /* je: equal / zero */

loc_000CDFE7: ;
    if (CMP_EQ(MEM32(esi + 0x564), edi)) goto loc_000CE09B; /* je: equal / zero */

loc_000CDFF3: ;
    MEM16(ebp + 0x152) = MEM16(ebp + 0x152) - LO16(ecx);
    if (CMP_GE(MEM16(ebp + 0x152), LO16(edi))) goto loc_000CE09B; /* jge: greater or equal (signed >=) */

loc_000CE007: ;
    MEM8(esp + 0x30) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CE011: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    edx = edx + 0x14;
    MEM16(esp + 0x32) = LO16(edx);
    edx = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esp + 0x3C) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CE03A: ;
    xmm5 = MEMF(0x648F58); /* movss */
    xmm6 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000CE05D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = esp + 0x30;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM8(esp + 0x3D) = 0xFF;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_000CE081: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000CE089: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x78;
    MEM16(ebp + 0x152) = LO16(edx);

loc_000CE09B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x164;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000CE0C0
 * Original: 0x000CE0C0 - 0x000CE366 (678 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE0C0: ;
    esp = esp - 0x180;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x190);
    ebp = MEM32(esi + 0x144);
    (void)0; /* test MEM8(ebp + 0x150), 4 - flags set for next jcc */
    xmm6 = MEMF(ebp + 0x2C); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x140);
    MEM32(esp + 0x28) = edi;
    MEMF(esp + 0x14) = xmm6; /* movss */
    if (TEST_Z(MEM8(ebp + 0x150), 4)) goto loc_000CE1E7; /* je: equal / zero */

loc_000CE0F9: ;
    if (CMP_LE(MEM8(esi + 0x4C), 1)) { sub_000CE366(); return; } /* jle: less or equal (signed <=) */

loc_000CE103: ;
    (void)0; /* test MEM8(esi + 0x3A), 2 - flags set for next jcc */
    ecx = MEM32(ebp);
    if (TEST_Z(MEM8(esi + 0x3A), 2)) goto loc_000CE111; /* je: equal / zero */

loc_000CE10C: ;
    eax = esi + 0x2C;
    goto loc_000CE123;

loc_000CE111: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_000CE11D; /* jns: not sign (positive) */

loc_000CE118: ;
    eax = ZX8(MEM8(esi + 0x41));
    eax--;

loc_000CE11D: ;
    edx = eax + eax * 4;
    eax = edi + edx * 8;

loc_000CE123: ;
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    xmm1 = MEMF(ecx + 0x80); /* movss */
    xmm2 = MEMF(ecx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(0x6496BC); /* addss */
    ecx = esp + 0x34;
    edx = esp + 0x18;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(esp + 0x30);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000CE195: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000CE1C3: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_000CE1E1; /* je: equal / zero */

loc_000CE1CA: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000CE1E1; /* jbe: below or equal (unsigned <=) */

loc_000CE1DB: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000CE1E1: ;
    xmm6 = MEMF(esp + 0x14); /* movss */

loc_000CE1E7: ;
    if (CMP_LE(MEM8(esi + 0x4C), 1)) { sub_000CE366(); return; } /* jle: less or equal (signed <=) */

loc_000CE1F1: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x148) = xmm4; /* movss */
    if (TEST_Z(MEM8(esi + 0x3A), 2)) goto loc_000CE20B; /* je: equal / zero */

loc_000CE206: ;
    eax = esi + 0x2C;
    goto loc_000CE219;

loc_000CE20B: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000CE213; /* jns: not sign (positive) */

loc_000CE20E: ;
    ebx = ZX8(MEM8(esi + 0x41));
    ebx--;

loc_000CE213: ;
    edx = ebx + ebx * 4;
    eax = edi + edx * 8;

loc_000CE219: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x24) = ecx;

loc_000CE221: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000CE229; /* jns: not sign (positive) */

loc_000CE224: ;
    ebx = ZX8(MEM8(esi + 0x41));
    ebx--;

loc_000CE229: ;
    edx = ebx + ebx * 4;
    xmm0 = MEMF(edi + edx * 8); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    ecx = edi + edx * 8;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
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
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    MEMF(ecx + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(ebp + 0x148); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(ebp + 0x148) = xmm0; /* movss */
    if ((xmm0 <= xmm6)) goto loc_000CE356; /* jbe: below or equal (unsigned <=) */

loc_000CE2B3: ;
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000CE322; /* jnp: not parity */

loc_000CE2C1: ;
    xmm2 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(ecx) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(ecx + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(ecx + 0x1C); /* mulss */
    MEMF(ecx + 8) = xmm2; /* movss */
    MEMF(ecx + 0x1C) = xmm1; /* movss */

loc_000CE322: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(ebx, eax)) goto loc_000CE34E; /* je: equal / zero */

loc_000CE32A: ;
    eax = ZX8(MEM8(esi + 0x41));
    edi = edi;

loc_000CE330: ;
    SET_LO8(edx, MEM8(esi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_000CE343; /* jne: not equal / not zero */

loc_000CE33F: ;
    MEM8(esi + 0x4D) = 0;

loc_000CE343: ;
    MEM8(esi + 0x4C) = MEM8(esi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ebx, edx)) goto loc_000CE330; /* jne: not equal / not zero */

loc_000CE34E: ;
    MEMF(ebp + 0x148) = xmm6; /* movss */

loc_000CE356: ;
    eax = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ebx, ecx)) goto loc_000CE221; /* jne: not equal / not zero */

loc_000CE364: ;
    g_seh_ebp = ebp; sub_000CE369(); return; /* tail jmp 0x000CE369 */

}

/**
 * sub_000CEAE0
 * Original: 0x000CEAE0 - 0x000CF533 (2643 bytes, 668 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEAE0(void)
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

loc_000CEAE0: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    if (CMP_L(MEM8(ebx + 0x4C), 2)) goto loc_000CF52E; /* jl: less (signed <) */

loc_000CEAF2: ;
    edx = MEM32(ebx + 0x140);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x144);
    SET_LO8(eax, MEM8(esi + 0x150));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 8) = edx;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_000CEB23; /* je: equal / zero */

loc_000CEB11: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000CEB23; /* jne: not equal / not zero */

loc_000CEB1B: ;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_000CF52D; /* jne: not equal / not zero */

loc_000CEB23: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x6C));
    if (TEST_Z(LO8(eax), 1)) goto loc_000CEBFA; /* je: equal / zero */

loc_000CEB31: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    ecx--;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (((int32_t)ecx >= 0)) goto loc_000CEB41; /* jns: not sign (positive) */

loc_000CEB3C: ;
    ecx = ZX8(MEM8(ebx + 0x41));
    ecx--;

loc_000CEB41: ;
    ecx = ecx + ecx * 4;
    fp_push(MEMF(edx + ecx * 8)); /* fld float */
    ecx = edx + ecx * 8;
    eax = eax + eax * 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = edx + eax * 8;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fstp st(1) */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000CEB98; /* jbe: below or equal (unsigned <=) */

loc_000CEB8C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_000CEB98: ;
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 + MEMF(eax + 8); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, edx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    eax = LO16(ebp);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, 0); sub_0006B0F0(); /* call 0x0006B0F0 */

loc_000CEBE6: ;
    esp = esp + 0x10;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000CF52C; /* jnp: not parity */

loc_000CEBFA: ;
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x41));
    esi = LO16(ebp);
    eax = MEM32(ebx + esi * 4 + 0x130);
    edi = edi + 5;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    if (TEST_NZ(eax, eax)) goto loc_000CEC37; /* jne: not equal / not zero */

loc_000CEC13: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    ecx = edi + edi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000CEC25: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + esi * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_000CF52B; /* je: equal / zero */

loc_000CEC37: ;
    SET_LO8(eax, MEM8(0x7FA230));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + esi * 4 + 0x130);
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    edx--;
    edx = edx & edi;
    edx = edx + eax;
    ebp = edx;
    if ((edx == 0)) goto loc_000CF52B; /* je: equal / zero */

loc_000CEC57: ;
    ecx = MEM32(0x8470DC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = eax + ecx + 0x330;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    edi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_000CEC8B; /* je: equal / zero */

loc_000CEC7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000CEC85: ;
    MEM32(0x771760) = edi;

loc_000CEC8B: ;
    eax = MEM32(0x77175C);
    if (TEST_Z(eax, eax)) goto loc_000CECA5; /* je: equal / zero */

loc_000CEC94: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000CEC9B: ;
    MEM32(0x77175C) = 0;

loc_000CECA5: ;
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000CECC3: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000CECDC: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_000CECF6; /* je: equal / zero */

loc_000CECEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000CECF0: ;
    MEM32(0x77182C) = esi;

loc_000CECF6: ;
    eax = MEM32(0x771828);
    esi = 0x901;
    if (CMP_EQ(eax, esi)) goto loc_000CED10; /* je: equal / zero */

loc_000CED04: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000CED0A: ;
    MEM32(0x771828) = esi;

loc_000CED10: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_000CED36; /* je: equal / zero */

loc_000CED1E: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000CED2A: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_000CED36: ;
    eax = MEM32(0x771820);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_000CED59; /* je: equal / zero */

loc_000CED41: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000CED4D: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_000CED59: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_000CED6D; /* je: equal / zero */

loc_000CED61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000CED67: ;
    MEM32(0x77181C) = edi;

loc_000CED6D: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_000CED93; /* je: equal / zero */

loc_000CED7B: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000CED87: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_000CED93: ;
    eax = MEM32(0x771814);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_000CEDB6; /* je: equal / zero */

loc_000CED9E: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000CEDAA: ;
    MEM32(0x549AF8) = esi;
    MEM32(0x771814) = esi;

loc_000CEDB6: ;
    if (CMP_EQ(MEM32(0x771810), esi)) goto loc_000CEDD4; /* je: equal / zero */

loc_000CEDBE: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = esi;
    MEM32(0x771810) = esi;

loc_000CEDD4: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000CEDDC: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_000CEE00; /* je: equal / zero */

loc_000CEDEF: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_000CEE00: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_000CEE19; /* je: equal / zero */

loc_000CEE08: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_000CEE19: ;
    esi = MEM32(0x7717A4);
    edx = 4;
    if (CMP_EQ(esi, edx)) goto loc_000CEE39; /* je: equal / zero */

loc_000CEE28: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_000CEE39: ;
    esi = MEM32(0x771784);
    edx = 0; /* xor self */
    if (CMP_EQ(esi, edx)) goto loc_000CEE56; /* je: equal / zero */

loc_000CEE45: ;
    eax = eax | 0x800;
    MEM32(0x547378) = edx;
    MEM32(0x771784) = edx;

loc_000CEE56: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_000CEE6F; /* je: equal / zero */

loc_000CEE5E: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_000CEE6F: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_000CEE9D; /* je: equal / zero */

loc_000CEE8C: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_000CEE9D: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_000CEEB6; /* je: equal / zero */

loc_000CEEA5: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_000CEEB6: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = edx;
    if (CMP_EQ(eax, esi)) goto loc_000CEEEC; /* je: equal / zero */

loc_000CEED4: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000CEEE0: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_000CEEEC: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_000CEF12; /* je: equal / zero */

loc_000CEEFA: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000CEF06: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_000CEF12: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000CEF22: ;
    esp = esp + 4;
    edi = eax;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_000DB460(); /* call 0x000DB460 */

loc_000CEF2E: ;
    if (TEST_Z(MEM8(ebx + 0x3A), 2)) goto loc_000CEF7B; /* je: equal / zero */

loc_000CEF34: ;
    ebx = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000CEF44; /* jns: not sign (positive) */

loc_000CEF3B: ;
    eax = MEM32(esp + 0x6C);
    ebx = ZX8(MEM8(eax + 0x41));
    ebx--;

loc_000CEF44: ;
    ecx = MEM32(esp + 0x6C);
    ecx = ecx + 0x2C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(eax + 0x30); /* movss */
    MEM32(esp + 0x38) = edx;
    SET_LO8(edx, MEM8(eax + 0x3E));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x144); /* movss */
    MEM32(esp + 0x40) = ecx;
    goto loc_000CEFCB;

loc_000CEF7B: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_000CEF87; /* jns: not sign (positive) */

loc_000CEF82: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_000CEF87: ;
    ebx = eax + -1;
    if (CMP_GE(ebx & ebx, 0)) goto loc_000CEF97; /* jge: greater or equal (signed >=) */

loc_000CEF8E: ;
    edx = MEM32(esp + 0x6C);
    ebx = ZX8(MEM8(edx + 0x41));
    ebx--;

loc_000CEF97: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + eax * 4;
    xmm0 = MEMF(ecx + eax * 8 + 0x18); /* movss */
    eax = ecx + eax * 8;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = edx;
    SET_LO8(edx, MEM8(eax + 0x20));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    MEM32(esp + 0x3C) = ecx;

loc_000CEFCB: ;
    ecx = MEM32(esp + 0x10);
    xmm3 = MEMF(esp + 0x38); /* movss */
    edi = MEM32(esp + 0x24);
    xmm2 = MEMF(esp + 0x3C); /* movss */
    eax = ebx + ebx * 4;
    eax = ecx + eax * 8;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    ecx = eax;
    esi = MEM32(ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    MEM32(esp + 0x44) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x4C) = ecx;
    xmm5 = MEMF(esp + 0x4C); /* movss */
    SET_LO8(ecx, MEM8(eax + 0x20));
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm5; /* subss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - MEMF(edi); /* subss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    MEM32(esp + 0x48) = esi;
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x64) = xmm7; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm7 = xmm7 * xmm1; /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(edi + 4); /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x58); /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x50); /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x58); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x50); /* mulss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x54); /* mulss */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    xmm4 = xmm7; /* movaps */
    MEMF(esp + 0x30) = xmm7; /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 + xmm7; /* addss */
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000CF142; /* jnp: not parity */

loc_000CF114: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_000CF151;

loc_000CF142: ;
    xmm1 = xmm4; /* movaps */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */

loc_000CF151: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 + xmm3; /* addss */
    eax = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x30); /* movss */
    xmm7 = xmm7 + xmm2; /* addss */
    eax = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 + xmm0; /* addss */
    eax = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    MEMF(ebp + 8) = xmm7; /* movss */
    eax = SX16(LO16(eax));
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 0x10) = xmm7; /* movss */
    MEMF(esp + 0x1C) = xmm7; /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(edx);
    ebp = ebp + 0x1C;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    eax = 0; /* xor self */
    MEM16(ebp + -4) = LO16(eax);
    esi = (int32_t)xmm7; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    esi = (int32_t)xmm1; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x34); /* subss */
    esi = (int32_t)xmm1; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(ebp + 0x10) = xmm1; /* movss */
    MEMF(ebp + 0x14) = xmm4; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(edx);
    MEM16(ebp + 0x18) = LO16(eax);
    ebp = ebp + 0x1C;
    esi = ebp + -56;
    goto loc_000CF273;

loc_000CF24D: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm6 = MEMF(esp + 0x48); /* movss */
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x24);

loc_000CF273: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(edi); /* subss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0x50) = xmm3; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(edi + 8); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
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
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000CF352; /* jnp: not parity */

loc_000CF31E: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_000CF35E;

loc_000CF352: ;
    xmm3 = xmm1; /* movaps */
    xmm4 = xmm1; /* movaps */
    MEMF(esp + 0x34) = xmm1; /* movss */

loc_000CF35E: ;
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = xmm5 - MEMF(esp + 0x34); /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    eax = SX16(LO16(edx));
    MEMF(ebp + 0x14) = xmm7; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ecx);
    xmm2 = xmm2 - xmm3; /* subss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    ebp = ebp + 0x1C;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -12) = xmm0; /* movss */
    eax = 0; /* xor self */
    MEM16(ebp + -4) = LO16(eax);
    xmm6 = xmm6 - xmm4; /* subss */
    edx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(edx));
    MEMF(ebp) = xmm2; /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(edx));
    MEMF(ebp + 4) = xmm2; /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM16(ebp + 0x18) = LO16(eax);
    MEMF(ebp + 8) = xmm2; /* movss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm1; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ecx);
    PUSH32(esp, 0x1C);
    ebp = ebp + 0x1C;
    eax = ebp + -112;
    PUSH32(esp, eax);
    esi = esi + 0x1C;
    PUSH32(esp, 4);
    esi = esi + 0x1C;
    PUSH32(esp, 6);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_000CF45A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x20))) goto loc_000CF4A8; /* jbe: below or equal (unsigned <=) */

loc_000CF467: ;
    xmm1 = MEMF(ebp + -40); /* movss */
    xmm0 = MEMF(0x64930C); /* movss */
    eax = MEM32(esp + 0x1C);
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
    MEM32(esp + 0x1C) = eax;

loc_000CF4A8: ;
    edx = ebx;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000CF4B6; /* jns: not sign (positive) */

loc_000CF4AD: ;
    ecx = MEM32(esp + 0x6C);
    ebx = ZX8(MEM8(ecx + 0x41));
    ebx--;

loc_000CF4B6: ;
    ecx = MEM32(esp + 0x10);
    eax = edx + edx * 4;
    edi = ecx + eax * 8;
    eax = edi;
    ecx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x10);
    ecx = ebx + ebx * 4;
    xmm0 = MEMF(eax + ecx * 8 + 0x18); /* movss */
    eax = eax + ecx * 8;
    ecx = eax;
    esi = MEM32(ecx);
    MEM32(esp + 0x44) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    MEM32(esp + 0x4C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    eax = MEM32(esp + 0x6C);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_NE(edx, eax)) goto loc_000CF24D; /* jne: not equal / not zero */

loc_000CF52B: ;
    POP32(esp, edi);

loc_000CF52C: ;
    POP32(esp, ebp);

loc_000CF52D: ;
    POP32(esp, esi);

loc_000CF52E: ;
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
 * sub_000CF540
 * Original: 0x000CF540 - 0x000CF568 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF540(void)
{

loc_000CF540: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x1AA;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000CF567: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF570
 * Original: 0x000CF570 - 0x000CF571 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF570(void)
{

loc_000CF570: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF580
 * Original: 0x000CF580 - 0x000CF5B3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF580(void)
{
    int _flags = 0; /* fallback flag var */

loc_000CF580: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x144);
    ecx = MEM32(eax + 0x154);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax + 0x154;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000CF5B1; /* je: equal / zero */

loc_000CF59C: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(eax + 0x158);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000CF5B1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF5C0
 * Original: 0x000CF5C0 - 0x000CF5EB (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF5C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx + 0x144);
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(edx + 0x14C) = 0;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000CF5EB(); return; } /* jne: not equal / not zero */

loc_000CF5E1: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000CF5F0
 * Original: 0x000CF5F0 - 0x000CF610 (32 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF5F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx + 0x144);
    MEM32(edx + 0x14C) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_000CF990
 * Original: 0x000CF990 - 0x000CFAE6 (342 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF990(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000CF990: ;
    edx = MEM32(0x7FA20C);
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_L(edx, 4)) goto loc_000CFA82; /* jl: less (signed <) */

loc_000CF9A3: ;
    ecx = edx + -4;
    ecx = ecx >> 2;
    PUSH32(esp, esi);
    ecx++;
    esi = ecx;
    esi = (uint32_t)(-(int32_t)esi);
    edx = edx + esi * 4;
    POP32(esp, esi);

loc_000CF9B3: ;
    ecx--;
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    if ((ecx != 0)) goto loc_000CF9B3; /* jne: not equal / not zero */

loc_000CFA82: ;
    if (CMP_LE(edx & edx, 0)) goto loc_000CFABB; /* jle: less or equal (signed <=) */

loc_000CFA86: ;
    edx--;
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    if ((edx != 0)) goto loc_000CFA86; /* jne: not equal / not zero */

loc_000CFABB: ;
    SET_LO16(edx, MEM16(eax + 0x36));
    if (CMP_GE(LO16(edx), MEM16(eax + 0x338))) goto loc_000CFAE0; /* jge: greater or equal (signed >=) */

loc_000CFAC8: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x33A);
    edx = SX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX8(MEM8(eax + 0x7B));
    if (CMP_LE(edx, ecx)) goto loc_000CFAE0; /* jle: less or equal (signed <=) */

loc_000CFADD: ;
    MEM8(eax + 0x7B) = LO8(ecx);

loc_000CFAE0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFAF0
 * Original: 0x000CFAF0 - 0x000CFC85 (405 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFAF0(void)
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

loc_000CFAF0: ;
    esp = esp - 0x28;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x40); /* subss */
    xmm1 = MEMF(ebx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(ebx + 0x44); /* subss */
    xmm5 = MEMF(ebx + 0x3C); /* movss */
    xmm6 = MEMF(ebx + 0x3C); /* movss */
    xmm2 = MEMF(ebx + 0x54); /* movss */
    xmm2 = xmm2 - MEMF(ebx + 0x48); /* subss */
    PUSH32(esp, ebp);
    ebp = ebx + 0x40;
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(ebp); /* addss */
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + MEMF(ebx + 0x44); /* addss */
    PUSH32(esp, esi);
    eax = eax + ecx + 0x330;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    PUSH32(esp, edi);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x48); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM32(esp + 0x40) = eax;
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(ebx + 0x44); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - MEMF(ebx + 0x48); /* subss */
    PUSH32(esp, eax);
    edi = ebx + 0x294;
    eax = esp + 0x14;
    esi = esp + 0x18;
    ecx = esp + 0x24;
    edx = ebp;
    MEM32(esp + 0x40) = edi;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    PUSH32(esp, 0); sub_00111580(); /* call 0x00111580 */

loc_000CFBB0: ;
    eax = MEM32(esp + 0x44);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x28); /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) { sub_000CFC85(); return; } /* jnp: not parity */

loc_000CFC4C: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [ebx + 0x38] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x14); /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x18); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    g_seh_ebp = ebp; sub_000CFC8B(); return; /* tail jmp 0x000CFC8B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000CFDD0
 * Original: 0x000CFDD0 - 0x000CFDFA (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFDD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000CFDD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x568);
    xmm0 = MEMF(eax + 0x30C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_000CFDFA(); return; } /* jp: parity */

loc_000CFDF7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000CFE00
 * Original: 0x000CFE00 - 0x000CFE18 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE00(void)
{

loc_000CFE00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0); sub_000D07F0(); /* call 0x000D07F0 */

loc_000CFE11: ;
    esp = esp + 8;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFE20
 * Original: 0x000CFE20 - 0x000CFE38 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE20(void)
{

loc_000CFE20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0); sub_000D07F0(); /* call 0x000D07F0 */

loc_000CFE31: ;
    esp = esp + 8;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFE40
 * Original: 0x000CFE40 - 0x000CFE58 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE40(void)
{

loc_000CFE40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0); sub_000D07F0(); /* call 0x000D07F0 */

loc_000CFE51: ;
    esp = esp + 8;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFE60
 * Original: 0x000CFE60 - 0x000CFEC0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CFE60: ;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x130);
    eax = MEM32(ebp + 0x4C);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    edx = MEM32(eax + 0x4B0);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x24);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM8(esp + 0x1C) = LO8(ecx);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58C4;
    MEM32(esp + 0x20) = 0x6B;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000CFEAA: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_000CFEC0(); return; } /* je: equal / zero */

loc_000CFEB3: ;
    eax = MEM32(esp + 8);
    if (CMP_EQ(eax, ebx)) { sub_000CFEC0(); return; } /* je: equal / zero */

loc_000CFEBB: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_000CFEC2(); return; /* tail jmp 0x000CFEC2 */

}

/**
 * sub_000D0310
 * Original: 0x000D0310 - 0x000D0370 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0310: ;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x130);
    eax = MEM32(esi + 0x4C);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    edx = MEM32(eax + 0x4B0);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x24);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM8(esp + 0x1C) = LO8(ecx);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58C4;
    MEM32(esp + 0x20) = 0x13F;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000D035A: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_000D0370(); return; } /* je: equal / zero */

loc_000D0363: ;
    eax = MEM32(esp + 8);
    if (CMP_EQ(eax, ebx)) { sub_000D0370(); return; } /* je: equal / zero */

loc_000D036B: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_000D0372(); return; /* tail jmp 0x000D0372 */

}

/**
 * sub_000D07B0
 * Original: 0x000D07B0 - 0x000D07E8 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D07B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D07B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x4C);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_000D07D2; /* je: equal / zero */

loc_000D07BE: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) goto loc_000D07D2; /* je: equal / zero */

loc_000D07C7: ;
    SET_LO8(eax, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(eax), MEM8(ecx + 0x50))) goto loc_000D07E7; /* je: equal / zero */

loc_000D07D2: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(ecx + 0x30) = xmm0; /* movss */
    MEM8(ecx + 0x2C) = LO8(eax);

loc_000D07E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D07F0
 * Original: 0x000D07F0 - 0x000D091D (301 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D07F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D07F0: ;
    esp = esp - 0x1C;
    eax = MEM32(ebx + 0x140);
    MEM32(esp + 4) = eax;
    (void)0; /* cmp MEM8(ebx + 0x4C), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x144);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D0918; /* jle: less or equal (signed <=) */

loc_000D080E: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(ebp + 0x148); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax = ebx + 0x2C;
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_000D0840;

loc_000D0839: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    /* nop */

loc_000D0840: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_000D0848; /* jns: not sign (positive) */

loc_000D0843: ;
    edi = ZX8(MEM8(ebx + 0x41));
    edi--;

loc_000D0848: ;
    edx = MEM32(esp + 0x10);
    ecx = edi + edi * 4;
    xmm2 = xmm2 + MEMF(edx + ecx * 8 + 0x1C); /* addss */
    esi = edx + ecx * 8;
    xmm0 = xmm2; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_000D0908; /* jb: below (unsigned <) */

loc_000D086A: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    xmm0 = xmm0 / MEMF(esi + 0x1C); /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp);
    edx = ZX16(MEM16(eax + 0x60));
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x15);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x170));
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_000D08F0: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    esp = esp + 0x2C;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */

loc_000D0908: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    eax = esi;
    if (CMP_NE(edi, ecx)) goto loc_000D0839; /* jne: not equal / not zero */

loc_000D0916: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D0918: ;
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0920
 * Original: 0x000D0920 - 0x000D096B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0920: ;
    esp = esp - 0x148;
    ecx = MEM32(esi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = LO8(eax);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58C4;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000D0957: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_000D096B(); return; } /* je: equal / zero */

loc_000D095E: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_000D096B(); return; } /* je: equal / zero */

loc_000D0966: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_000D096D(); return; /* tail jmp 0x000D096D */

}

/**
 * sub_000D0E00
 * Original: 0x000D0E00 - 0x000D1105 (773 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000D0E00: ;
    esp = esp - 0xE8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xF4);
    eax = MEM32(edi + 0x568);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000D10FC; /* je: equal / zero */

loc_000D0E1F: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_000D1110(); /* call 0x000D1110 */

loc_000D0E2E: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D10FC; /* je: equal / zero */

loc_000D0E39: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    SET_LO8(edx, MEM8(edi + 0x10B));
    xmm1 = MEMF(0x64909C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0xA0) = esi;
    MEM32(esp + 0xAC) = esi;
    esi = MEM32(esp + 0xFC);
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    PUSH32(esp, 3);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xB0) = eax;
    eax = MEM32(esp + 0x4C);
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    PUSH32(esp, 0x13);
    MEM32(esp + 0xC0) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, 0x12);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0xB0) = ecx;
    MEM32(esp + 0xBC) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM8(esp + 0x74) = LO8(edx);
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xD4) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x24); /* movss */
    PUSH32(esp, 0xF);
    MEM32(esp + 0xCC) = ecx;
    MEMF(esp + 0xE8) = xmm1; /* movss */
    xmm1 = MEMF(0x649550); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    PUSH32(esp, 0x24);
    ecx = esp + 0x3C;
    MEM32(esp + 0xD4) = edx;
    MEM32(esp + 0x84) = eax;
    MEM8(esp + 0x101) = LO8(ebx);
    MEM8(esp + 0x100) = LO8(ebx);
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x80) = ebx;
    MEMF(esp + 0xF0) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEM8(esp + 0x51) = 0x64;
    MEM16(esp + 0x48) = 0x12C;
    MEM16(esp + 0x4A) = 0x36;
    MEM32(esp + 0x4C) = 0x14;
    MEM8(esp + 0x50) = 8;
    MEM32(esp + 0x54) = ebx;
    PUSH32(esp, ecx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    eax = 0x9C;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_000D100F: ;
    edi = eax;
    esp = esp + 0x20;
    if (CMP_EQ(edi, ebx)) goto loc_000D10FB; /* je: equal / zero */

loc_000D101C: ;
    esi = MEM32(esi);
    esi = esi - 0x14;
    MEM32(esp + 0xE8) = ebx;
    if ((esi == 0)) goto loc_000D1069; /* je: equal / zero */

loc_000D102A: ;
    esi--;
    if ((esi == 0)) goto loc_000D1048; /* je: equal / zero */

loc_000D102D: ;
    esi = esi - 0x40;
    if ((esi == 0)) goto loc_000D1048; /* je: equal / zero */

loc_000D1032: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    goto loc_000D1088;

loc_000D1048: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_000D1088;

loc_000D1069: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */

loc_000D1088: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, 0x47435000);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x40;
    MEM8(esp + 0x38) = 2;
    MEM8(esp + 0x39) = 0xFF;
    MEM16(esp + 0x3A) = 0xA;
    MEM8(esp + 0x3E) = LO8(ebx);
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000D10CF: ;
    xmm0 = MEMF(0x649C54); /* movss */
    edi = MEM32(edi + 0x144);
    ecx = 0x27;
    esi = esp + 0x78;
    MEM32(esp + 0x10C) = eax;
    MEMF(esp + 0x110) = xmm0; /* movss */
    esp = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000D10FB: ;
    POP32(esp, esi);

loc_000D10FC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xE8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1110
 * Original: 0x000D1110 - 0x000D116F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) { sub_000D116F(); return; } /* je: equal / zero */

loc_000D1122: ;
    if (CMP_NE(MEM32(eax + 0xBC), 2)) { sub_000D116F(); return; } /* jne: not equal / not zero */

loc_000D112B: ;
    ecx = MEM32(ebp + 0x3C8);
    if (TEST_NZ(ecx, ecx)) { sub_000D116F(); return; } /* jne: not equal / not zero */

loc_000D1135: ;
    eax = eax + 0x340;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(esp + 0x10);
    ecx = ecx + 0x334;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D11F0
 * Original: 0x000D11F0 - 0x000D1231 (65 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D11F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D11F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    (void)0; /* cmp MEM32(ebp), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp), 2)) { sub_000D1231(); return; } /* jne: not equal / not zero */

loc_000D1200: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_000D120E: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_000D1227: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1320
 * Original: 0x000D1320 - 0x000D15AB (651 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1320: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    esp = esp - 0xC4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xD0);
    if (TEST_Z(ecx, ecx)) goto loc_000D15A3; /* je: equal / zero */

loc_000D1340: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_000D1353: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D15A2; /* je: equal / zero */

loc_000D135E: ;
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_000D137D: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D15A0; /* je: equal / zero */

loc_000D1388: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0xD8);
    edx = MEM32(ebp);
    ecx = MEM32(esp + 0x1C);
    xmm1 = MEMF(0x64909C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    PUSH32(esp, 0x7F);
    MEM32(esp + 0x44) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    PUSH32(esp, 3);
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x1C); /* movss */
    PUSH32(esp, 0x13);
    MEM8(esp + 0x50) = LO8(eax);
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x20); /* movss */
    PUSH32(esp, 0x16);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x98) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x24); /* movss */
    PUSH32(esp, 0xF);
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0xA0) = ecx;
    ecx = esp + 0x30;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0xA4) = edx;
    MEMF(esp + 0xC8) = xmm1; /* movss */
    xmm1 = MEMF(0x649550); /* movss */
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xB8) = eax;
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    eax = 0x9C;
    MEM8(esp + 0xE5) = LO8(ebx);
    MEM8(esp + 0xE4) = LO8(ebx);
    MEM32(esp + 0x58) = 2;
    MEMF(esp + 0xD4) = xmm1; /* movss */
    MEM32(esp + 0x68) = 0x55;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM8(esp + 0x4D) = 0x64;
    MEM16(esp + 0x44) = 0x12C;
    MEM16(esp + 0x46) = 0x36;
    MEM32(esp + 0x48) = 0x14;
    MEM8(esp + 0x4C) = 8;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_000D1527: ;
    edi = eax;
    esp = esp + 0x20;
    if (CMP_EQ(edi, ebx)) goto loc_000D15A0; /* je: equal / zero */

loc_000D1530: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    edx = esp + 0x28;
    PUSH32(esp, 0x47435000);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x38;
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0x30) = 2;
    MEM8(esp + 0x31) = 0xFF;
    MEM16(esp + 0x32) = 0xA;
    MEM8(esp + 0x36) = LO8(ebx);
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000D1574: ;
    xmm0 = MEMF(0x649C54); /* movss */
    MEM32(esp + 0xEC) = eax;
    MEMF(esp + 0xF0) = xmm0; /* movss */
    edi = MEM32(edi + 0x144);
    ecx = 0x27;
    esi = esp + 0x58;
    esp = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000D15A0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D15A2: ;
    POP32(esp, ebx);

loc_000D15A3: ;
    POP32(esp, ebp);
    esp = esp + 0xC4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D15B0
 * Original: 0x000D15B0 - 0x000D15F3 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D15B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000D15B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58C4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000D15DF: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_000D15F3(); return; } /* je: equal / zero */

loc_000D15E6: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_000D15F3(); return; } /* je: equal / zero */

loc_000D15EE: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_000D15F5(); return; /* tail jmp 0x000D15F5 */

}

/**
 * sub_000D16D0
 * Original: 0x000D16D0 - 0x000D1705 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D16D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D16D0: ;
    esp = esp - 0xDC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE8);
    ebx = eax;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 1)) goto loc_000D16F2; /* je: equal / zero */

loc_000D16ED: ;
    if (CMP_NE(eax, 0xB)) { sub_000D1705(); return; } /* jne: not equal / not zero */

loc_000D16F2: ;
    PUSH32(esp, ebp);
    esi = esp + 0x3C;
    edi = esp + 0x48;
    PUSH32(esp, 0); sub_000D15B0(); /* call 0x000D15B0 */

loc_000D1700: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_000D171F(); return; /* tail jmp 0x000D171F */

}

/**
 * sub_000D1A80
 * Original: 0x000D1A80 - 0x000D1B01 (129 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A80(void)
{
    float xmm0, xmm1, xmm2;

loc_000D1A80: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648E1C); /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    MEM32(esp + 0xC) = edx;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEM32(esp + 8) = esi;
    xmm2 = MEMF(esp + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x649230); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1B10
 * Original: 0x000D1B10 - 0x000D1D99 (649 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1B10: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi + 0x140);
    ebp = MEM32(edi + 0x144);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) { sub_000D1D99(); return; } /* je: equal / zero */

loc_000D1B34: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) { sub_000D1D99(); return; } /* jne: not equal / not zero */

loc_000D1B3E: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_000D1D99(); return; } /* je: equal / zero */

loc_000D1B4C: ;
    if (CMP_GE(MEM8(edi + 0x4C), 2)) goto loc_000D1B5C; /* jge: greater or equal (signed >=) */

loc_000D1B52: ;
    if (TEST_NZ(MEM8(edi + 0x3A), 8)) { sub_000D1D99(); return; } /* jne: not equal / not zero */

loc_000D1B5C: ;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    /* ucomiss xmm0, MEMF(ebp + 0x7C) - sets EFLAGS */
    xmm6 = 0.0f; /* xorps self = zero */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    if (1 /* jp after test - parity */) goto loc_000D1C14; /* jp: parity */

loc_000D1B73: ;
    xmm0 = MEMF(ebp + 0x14); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 > xmm6)) goto loc_000D1B8B; /* ja: above (unsigned >) */

loc_000D1B7D: ;
    SET_LO8(eax, MEM8(ecx + 0x63C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D1C14; /* jne: not equal / not zero */

loc_000D1B8B: ;
    xmm1 = MEMF(ebp + 0x14); /* movss */
    xmm1 = xmm1 + MEMF(0x7FA21C); /* addss */
    /* comiss xmm1, MEMF(0x648F58) - sets EFLAGS */
    MEMF(ebp + 0x14) = xmm1; /* movss */
    if ((xmm1 <= MEMF(0x648F58))) goto loc_000D1BC8; /* jbe: below or equal (unsigned <=) */

loc_000D1BA6: ;
    esi = MEM32(ebp + 0x94);
    if (TEST_Z(esi, esi)) goto loc_000D1BBF; /* je: equal / zero */

loc_000D1BB0: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000D1BB5: ;
    MEM32(ebp + 0x94) = 0;

loc_000D1BBF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000D1BC8: ;
    xmm1 = xmm1 * MEMF(0x649950); /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(ebp + 0x94);
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EEC); /* mulss */
    MEMF(ebp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x98); /* movss */
    edx = MEM32(ecx + 0x34);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x4C) = xmm1; /* movss */
    eax = MEM32(ebp + 0x94);
    ecx = MEM32(eax + 0x34);
    MEMF(ecx + 0x24) = xmm1; /* movss */

loc_000D1C14: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_EQ(esi, edx)) goto loc_000D1D10; /* je: equal / zero */

loc_000D1C24: ;
    xmm2 = MEMF(0x7FA24C); /* movss */
    xmm5 = MEMF(0x649728); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * MEMF(0x648E1C); /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * MEMF(0x649230); /* mulss */
    PUSH32(esp, ebx);
    /* nop */

loc_000D1C50: ;
    esi--;
    if (((int32_t)esi >= 0)) goto loc_000D1C58; /* jns: not sign (positive) */

loc_000D1C53: ;
    esi = ZX8(MEM8(edi + 0x41));
    esi--;

loc_000D1C58: ;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ebp + 0x14); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    eax = esi + esi * 8;
    ecx = ecx + eax * 4;
    if ((xmm0 <= xmm6)) goto loc_000D1CA2; /* jbe: below or equal (unsigned <=) */

loc_000D1C6C: ;
    eax = ecx + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = xmm5; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_000D1CA2: ;
    eax = ecx + 0xC;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm0; /* movss */
    MEM32(esp + 0x20) = ebx;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(esi, eax)) goto loc_000D1C50; /* jne: not equal / not zero */

loc_000D1D0F: ;
    POP32(esp, ebx);

loc_000D1D10: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_000D1D3A; /* jle: less or equal (signed <=) */

loc_000D1D17: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    edx = MEM32(esp + 0x28);
    ecx = eax + eax * 8;
    eax = edx + ecx * 4;
    ecx = MEM32(eax);
    edi = edi + 0x74;
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 8) = eax;
    goto loc_000D1D49;

loc_000D1D3A: ;
    MEMF(edi + 0x74) = xmm6; /* movss */
    MEMF(edi + 0x78) = xmm6; /* movss */
    MEMF(edi + 0x7C) = xmm6; /* movss */

loc_000D1D49: ;
    SET_LO8(edx, MEM8(ebp + 0x8D));
    SET_LO8(ecx, MEM8(0x7FA20C));
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(ebp + 0x8D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_LE(edx, eax)) goto loc_000D1D8D; /* jle: less or equal (signed <=) */

loc_000D1D6C: ;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_000D1D86; /* je: equal / zero */

loc_000D1D73: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_000D1D86; /* je: equal / zero */

loc_000D1D7D: ;
    eax = ecx;
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;

loc_000D1D86: ;
    MEM8(ebp + 0x8D) = 0;

loc_000D1D8D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1DB0
 * Original: 0x000D1DB0 - 0x000D273B (2443 bytes, 564 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DB0(void)
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

loc_000D1DB0: ;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x130);
    eax = MEM32(ebp + 0x140);
    ebx = MEM32(ebp + 0x144);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0x568);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(ecx, ecx)) { sub_000D273B(); return; } /* je: equal / zero */

loc_000D1DE5: ;
    esi = MEM32(ecx + 0x444);
    if (TEST_Z(esi, esi)) { sub_000D273B(); return; } /* je: equal / zero */

loc_000D1DF3: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) { sub_000D273B(); return; } /* je: equal / zero */

loc_000D1DFE: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ebx + 8))) { sub_000D273B(); return; } /* jne: not equal / not zero */

loc_000D1E0D: ;
    edx = MEM32(ecx + 0xA0);
    PUSH32(esp, edi);
    edi = 0x5C;
    if (CMP_EQ(edx, edi)) goto loc_000D1E2A; /* je: equal / zero */

loc_000D1E1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 4; return; /* ret */

loc_000D1E2A: ;
    if (CMP_NE(MEM32(esi + 8), 3)) goto loc_000D1E1D; /* jne: not equal / not zero */

loc_000D1E30: ;
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_00319B10(); /* call 0x00319B10 */

loc_000D1E39: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D1E1D; /* je: equal / zero */

loc_000D1E3D: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 0x1C);
    if (CMP_NE(MEM32(ecx), 0xB)) goto loc_000D1E52; /* jne: not equal / not zero */

loc_000D1E49: ;
    edx = MEM32(esp + 0x30);
    if (CMP_EQ(edx, MEM32(ebx + 0x10))) goto loc_000D1E75; /* je: equal / zero */

loc_000D1E52: ;
    xmm0 = MEMF(ebx + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    eax = MEM32(esp + 0x14);
    MEMF(ebx + 0x14) = xmm0; /* movss */
    ecx = MEM32(eax + 0x568);
    MEM8(ecx + 0x30A) = 0;

loc_000D1E75: ;
    eax = MEM32(esp + 0x14);
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_000D1110(); /* call 0x000D1110 */

loc_000D1E8B: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D1E1D; /* je: equal / zero */

loc_000D1E92: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(ebp + 0x34) = xmm0; /* movss */
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000D1EF8; /* je: equal / zero */

loc_000D1EC0: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000D1ED3; /* je: equal / zero */

loc_000D1ECA: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 1)) goto loc_000D1EF8; /* je: equal / zero */

loc_000D1ED3: ;
    PUSH32(esp, 0);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_001A88B0(); /* call 0x001A88B0 */

loc_000D1EEC: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D1EFD; /* jne: not equal / not zero */

loc_000D1EF8: ;
    MEM8(esp + 0x13) = 0;

loc_000D1EFD: ;
    ecx = MEM32(ebx + 0x94);
    eax = MEM32(ecx + 0x34);
    xmm0 = MEMF(esp + 0x34); /* movss */
    eax = eax + 0xC;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x78) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x78))) goto loc_000D1F67; /* jbe: below or equal (unsigned <=) */

loc_000D1F34: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 * MEMF(0x648EC0); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x78); /* addss */
    /* comiss xmm0, MEMF(ebx + 0x7C) - sets EFLAGS */
    MEMF(ebx + 0x78) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ebx + 0x7C))) goto loc_000D1F59; /* jbe: below or equal (unsigned <=) */

loc_000D1F54: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */

loc_000D1F59: ;
    esi = MEM32(esp + 0x24);
    MEMF(ebx + 0x78) = xmm0; /* movss */
    goto loc_000D2543;

loc_000D1F67: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D1F6C: ;
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm7; /* movss */
    if ((xmm5 <= xmm7)) goto loc_000D1FA4; /* jbe: below or equal (unsigned <=) */

loc_000D1F99: ;
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm7 = xmm5; /* movaps */
    goto loc_000D1FB5;

loc_000D1FA4: ;
    xmm0 = MEMF(0x6496F0); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_000D2082; /* jbe: below or equal (unsigned <=) */

loc_000D1FB5: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    esi = MEM32(esp + 0x24);
    xmm4 = MEMF(0x5A005C); /* movss */
    edx = eax + eax * 8;
    xmm0 = MEMF(esi + edx * 4 + -36); /* movss */
    eax = esi + edx * 4;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + -32); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + -28); /* movss */
    eax = esp + 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CDDF0(); /* call 0x001CDDF0 */

loc_000D1FFE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D2086; /* je: equal / zero */

loc_000D2006: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = MEMF(0x648D10); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F866666);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000D206C: ;
    xmm7 = MEMF(esp + 0x5C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    esp = esp + 0x48;
    goto loc_000D2086;

loc_000D2082: ;
    esi = MEM32(esp + 0x24);

loc_000D2086: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_000D2205; /* jbe: below or equal (unsigned <=) */

loc_000D2097: ;
    SET_LO8(edx, MEM8(ebp + 0x4E));
    SET_LO8(eax, MEM8(ebp + 0x4D));
    if (CMP_LE(LO8(edx), LO8(eax))) goto loc_000D20B7; /* jle: less or equal (signed <=) */

loc_000D20A1: ;
    edi = SX8(LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D20A9: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    ecx = ecx - edi;
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + edi;
    goto loc_000D20C4;

loc_000D20B7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D20BC: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_000D20C4: ;
    ecx = MEM32(ebx + 0x10);
    xmm1 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(0x6491DC); /* movss */
    (void)0; /* cmp ecx, 0x14 - flags set for next jcc */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    SET_LO8(eax, (CMP_NE(ecx, 0x14)) ? 1 : 0); /* setne */
    ecx = edx + edx * 8;
    xmm0 = MEMF(esi + ecx * 4); /* movss */
    esi = esi + ecx * 4;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A7C0); /* movss */
    eax = eax + 0x104;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    MEM32(esp + 0x60) = eax;
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0xCC;
    esi = esp + 0x44;
    MEM32(esp + 0x58) = 0xF;
    MEM8(esp + 0x78) = 0;
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEMF(esp + 0x80) = xmm5; /* movss */
    MEMF(esp + 0x84) = xmm5; /* movss */
    MEMF(esp + 0xD0) = xmm1; /* movss */
    MEMF(esp + 0xD8) = xmm1; /* movss */
    MEMF(esp + 0xE0) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000D21ED: ;
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    esi = MEM32(esp + 0x28);
    esp = esp + 4;

loc_000D2205: ;
    xmm0 = MEMF(0x648E40); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_000D254E; /* jbe: below or equal (unsigned <=) */

loc_000D2216: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    xmm4 = MEMF(0x648CE4); /* movss */
    edx = eax + eax * 8;
    eax = esi + edx * 4;
    PUSH32(esp, 0); sub_001CDDF0(); /* call 0x001CDDF0 */

loc_000D222D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D254E; /* je: equal / zero */

loc_000D2235: ;
    xmm0 = MEMF(0x649224); /* movss */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    eax = 2;
    ecx = 0; /* xor self */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x64) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM32(esp + 0x50) = 3;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = 4;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x68) = 1;
    MEM32(esp + 0x6C) = 0x29;
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    MEM16(esp + 0x70) = 0x19;
    MEM16(esp + 0x72) = 0xA;
    MEM8(esp + 0xB4) = 0x2A;
    MEM8(esp + 0xB5) = LO8(eax);
    MEM8(esp + 0xB6) = LO8(eax);
    MEM8(esp + 0xB7) = LO8(ecx);
    MEM16(esp + 0x74) = 0x64;
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000D22C2: ;
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    MEM8(esp + 0x4C) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000D22CE: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    MEM8(esp + 0x4D) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000D22DA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEM8(esp + 0x4E) = LO8(eax);
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D2312: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D231E: ;
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    edi = edi | 0x80D017;
    MEM32(esp + 0xAC) = edi;
    MEM8(esp + 0x4F) = 0xFF;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x19) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D2347: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000D2353; /* jns: not sign (positive) */

loc_000D234E: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000D2353: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x1A) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D235E: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000D236A; /* jns: not sign (positive) */

loc_000D2365: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000D236A: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x1B) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D2375: ;
    xmm5 = MEMF(0x648D1C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D238C: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D239B: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE4); /* mulss */
    xmm6 = xmm6 - xmm5; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D23AF: ;
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CE4); /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D23C3: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm7; /* movss */
    MEMF(esp + 0xA4) = xmm6; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D2450; /* je: equal / zero */

loc_000D23F2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D23F7: ;
    xmm7 = MEMF(0x6490B8); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x64908C); /* subss */
    xmm5 = xmm5 + MEMF(esp + 0xC4); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D241C: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x64908C); /* subss */
    xmm6 = xmm6 + MEMF(esp + 0xC0); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D2439: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0xBC); /* addss */
    goto loc_000D24B7;

loc_000D2450: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D2455: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    xmm7 = MEMF(0x6490B8); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x64908C); /* subss */
    eax = eax + eax * 8;
    xmm5 = xmm5 + MEMF(esi + eax * 4 + 8); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D247E: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x64908C); /* subss */
    ecx = eax + eax * 8;
    xmm6 = xmm6 + MEMF(esi + ecx * 4 + 4); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D249F: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    edx = eax + eax * 8;
    xmm0 = xmm0 + MEMF(esi + edx * 4); /* addss */

loc_000D24B7: ;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm6; /* movss */
    MEMF(esp + 0x8C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000D24D7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x19;
    MEM16(esp + 0x40) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D24EC: ;
    xmm0 = xmm0 * MEMF(0x649D64); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EB8); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    edx = esp + 0x4C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000D2523: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000D2543; /* je: equal / zero */

loc_000D252A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000D2543: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */

loc_000D254E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x7FA24C); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D256B; /* jne: not equal / not zero */

loc_000D255E: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(ebx + 0x70); /* addss */
    MEMF(ebx + 0x70) = xmm1; /* movss */

loc_000D256B: ;
    xmm1 = MEMF(ebx + 0x70); /* movss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 < xmm6)) goto loc_000D272B; /* jb: below (unsigned <) */

loc_000D2579: ;
    xmm3 = MEMF(ebx + 0x64); /* movss */
    eax = ebx + 0x4C;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    edi = ebx + 0x58;
    ecx = edi;
    edx = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = edx;
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    xmm3 = xmm3 + xmm0; /* addss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm4 = xmm3; /* movaps */
    PUSH32(esp, eax);
    xmm4 = xmm4 * xmm2; /* mulss */
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_000D25D5: ;
    ecx = esp + 0x11C;
    PUSH32(esp, ecx);
    edx = esp + 0xFC;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_000D25EB: ;
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_000D2603: ;
    edx = esp + 0x118;
    PUSH32(esp, edx);
    eax = esp + 0x134;
    PUSH32(esp, eax);
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_000D261B: ;
    esp = esp + 0x28;
    goto loc_000D2624;

loc_000D2620: ;
    esi = MEM32(esp + 0x24);

loc_000D2624: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    ecx = eax + eax * 8;
    eax = MEM32(esp + 0x18);
    esi = esi + ecx * 4;
    edx = esi;
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x20);
    edi = esi + 0xC;
    ecx = esp + 0x28;
    PUSH32(esp, edi);
    MEM32(edx + 8) = eax;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_000D2657: ;
    esp = esp + 8;
    ecx = edi;
    eax = esi;
    MEMF(esi + 0x18) = xmm5; /* movss */
    MEM8(esi + 0x1C) = 0xFF;
    MEMF(esi + 0x20) = xmm5; /* movss */
    xmm0 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_000D1A80(); /* call 0x000D1A80 */

loc_000D2674: ;
    SET_LO8(edx, MEM8(ebp + 0x4E));
    eax = ZX8(MEM8(ebp + 0x41));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(ecx, LO8(edx));
    MEM8(ebp + 0x4E) = LO8(edx);
    edx = SX8(LO8(ecx));
    if (CMP_NE(edx, eax)) goto loc_000D268D; /* jne: not equal / not zero */

loc_000D2689: ;
    MEM8(ebp + 0x4E) = 0;

loc_000D268D: ;
    SET_LO8(ecx, MEM8(ebp + 0x4C));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebp + 0x4C) = LO8(ecx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x4D));
    if (CMP_NE(MEM8(ebp + 0x4E), LO8(ecx))) goto loc_000D26B4; /* jne: not equal / not zero */

loc_000D269F: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebp + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_000D26AF; /* jne: not equal / not zero */

loc_000D26AB: ;
    MEM8(ebp + 0x4D) = 0;

loc_000D26AF: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(ebp + 0x4C) = LO8(edx);

loc_000D26B4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x108;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_000D26C9: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x108;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_000D26DE: ;
    xmm0 = MEMF(ebx + 0x70); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    esp = esp + 0x18;
    /* comiss xmm0, xmm6 - sets EFLAGS */
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(ebx + 0x70) = xmm0; /* movss */
    if ((xmm0 > xmm6)) goto loc_000D2620; /* ja: above (unsigned >) */

loc_000D26FC: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(ebx + 0x4C) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebx + 0x50) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ebx + 0x54) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(ebx + 0x58) = edx;
    MEM32(ebx + 0x5C) = eax;
    MEM32(ebx + 0x60) = ecx;
    MEMF(ebx + 0x64) = xmm3; /* movss */

loc_000D272B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000D2750
 * Original: 0x000D2750 - 0x000D278D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2750: ;
    esp = esp - 0x140;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14C);
    ebx = MEM32(ebp + 0x144);
    xmm0 = MEMF(ebx + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x140);
    MEM32(esp + 0x7C) = esi;
    if ((xmm0 <= MEMF(0x648CF8))) { sub_000D278D(); return; } /* jbe: below or equal (unsigned <=) */

loc_000D277E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x140;
    esp += 4; return; /* ret */

}

/**
 * sub_000D30F0
 * Original: 0x000D30F0 - 0x000D3752 (1634 bytes, 427 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D30F0(void)
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

loc_000D30F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x144);
    eax = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x140);
    MEM32(esp + 0x1C) = eax;
    (void)0; /* cmp MEM8(ebx + 0x4C), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    xmm5 = xmm7; /* movaps */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x3C) = esi;
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D3746; /* jle: less or equal (signed <=) */

loc_000D312D: ;
    (void)0; /* test MEM8(ebx + 0x3A), 2 - flags set for next jcc */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    xmm4 = xmm7; /* movaps */
    if (TEST_Z(MEM8(ebx + 0x3A), 2)) goto loc_000D3150; /* je: equal / zero */

loc_000D313A: ;
    eax = ebx + 0x2C;
    edx = esp + 0x2C;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x38) = edx;
    goto loc_000D3181;

loc_000D3150: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_000D315E; /* jns: not sign (positive) */

loc_000D3153: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x18) = eax;
    ecx = eax;

loc_000D315E: ;
    edx = ecx + ecx * 8;
    eax = esi + edx * 4;
    edx = esp + 0x2C;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x38) = edx;
    goto loc_000D3181;

loc_000D3177: ;
    xmm4 = MEMF(esp + 0x24); /* movss */
    eax = MEM32(esp + 0x28);

loc_000D3181: ;
    xmm5 = MEMF(0x648F88); /* movss */
    ecx--;
    xmm3 = xmm5; /* movaps */
    MEM32(esp + 0x18) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_000D319C; /* jns: not sign (positive) */

loc_000D3193: ;
    ecx = ZX8(MEM8(ebx + 0x41));
    ecx--;
    MEM32(esp + 0x18) = ecx;

loc_000D319C: ;
    edx = ecx + ecx * 8;
    xmm0 = MEMF(esi + edx * 4); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    edi = esi + edx * 4;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEM32(esp + 0x1C) = edi;
    MEMF(esp + 0x34) = xmm0; /* movss */
    edx = MEM32(esp + 0x38);
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
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm2 = MEMF(0x64A100); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(edi + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_000D3304; /* jbe: below or equal (unsigned <=) */

loc_000D322B: ;
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000D32D1; /* jnp: not parity */

loc_000D3238: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    MEMF(esp + 0x48) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x34); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    MEMF(esp + 0x4C) = xmm6; /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm6 = MEMF(edi + 4); /* movss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm6 = MEMF(edi + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm4 = xmm4 * MEMF(edi + 0x18); /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    MEMF(edi + 8) = xmm6; /* movss */
    MEMF(edi + 0x18) = xmm4; /* movss */

loc_000D32D1: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_EQ(ecx, eax)) goto loc_000D32FE; /* je: equal / zero */

loc_000D32D9: ;
    eax = ZX8(MEM8(ebx + 0x41));
    /* nop */

loc_000D32E0: ;
    SET_LO8(edx, MEM8(ebx + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ebx + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_000D32F3; /* jne: not equal / not zero */

loc_000D32EF: ;
    MEM8(ebx + 0x4D) = 0;

loc_000D32F3: ;
    MEM8(ebx + 0x4C) = MEM8(ebx + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_NE(ecx, edx)) goto loc_000D32E0; /* jne: not equal / not zero */

loc_000D32FE: ;
    MEMF(esp + 0x24) = xmm2; /* movss */

loc_000D3304: ;
    xmm0 = MEMF(edi + 0x18); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000D3572; /* jnp: not parity */

loc_000D3316: ;
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000D335C; /* jp: parity */

loc_000D331F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x18); /* divss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */

loc_000D335C: ;
    eax = MEM32(0x7F9F60);
    eax = eax ^ ecx;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esp + 0x134) = 0;
    if (TEST_NZ(LO8(eax), 1)) goto loc_000D3572; /* jne: not equal / not zero */

loc_000D3376: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0x4100000);
    ecx = 0x602;
    eax = 0x5F36B8;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000D338E: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0x84;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000D33BE: ;
    ecx = MEM32(esp + 0x168);
    eax = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_000D3567; /* je: equal / zero */

loc_000D33EB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D3419; /* jne: not equal / not zero */

loc_000D33F3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D33F8: ;
    xmm1 = MEMF(0x648F58); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000D3419; /* jbe: below or equal (unsigned <=) */

loc_000D3405: ;
    PUSH32(esp, ebx);
    eax = esp + 0x48;
    ecx = esi;
    PUSH32(esp, 0); sub_000D5200(); /* call 0x000D5200 */

loc_000D3411: ;
    esp = esp + 4;
    MEM8(esp + 0x13) = 1;

loc_000D3419: ;
    esi = MEM32(esp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x14) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0x14))) goto loc_000D3567; /* jb: below (unsigned <) */

loc_000D342A: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0xBC);
    edx = 2;
    if (CMP_EQ(ecx, edx)) goto loc_000D34FF; /* je: equal / zero */

loc_000D3447: ;
    if (CMP_L(MEM32(esp + 0x134), edx)) goto loc_000D34FF; /* jl: less (signed <) */

loc_000D3454: ;
    if (CMP_NE(MEM32(esi + 0x10), 0x15)) goto loc_000D34A2; /* jne: not equal / not zero */

loc_000D345A: ;
    eax = MEM32(esp + 0x50);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_000D34FF; /* jne: not equal / not zero */

loc_000D3468: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000D34FF; /* jne: not equal / not zero */

loc_000D3476: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000D34FF; /* je: equal / zero */

loc_000D3480: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_000D34FF; /* je: equal / zero */

loc_000D348A: ;
    esi = 0x16;
    PUSH32(esp, 0); sub_002ED7A0(); /* call 0x002ED7A0 */

loc_000D3494: ;
    ecx = ZX8(MEM8(eax + 0x24));
    edx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D);
    goto loc_000D34E8;

loc_000D34A2: ;
    ecx = MEM32(esp + 0x50);
    if (CMP_NE(MEM32(ecx + 0x64), 1)) goto loc_000D34C0; /* jne: not equal / not zero */

loc_000D34AC: ;
    SET_LO8(eax, MEM8(ecx + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D34FF; /* jne: not equal / not zero */

loc_000D34B6: ;
    eax = MEM32(ecx + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    goto loc_000D34D0;

loc_000D34C0: ;
    eax = ecx;
    PUSH32(esp, 0); sub_002ED8C0(); /* call 0x002ED8C0 */

loc_000D34C7: ;
    MEM32(esi) = edx;
    if (CMP_EQ(ecx, MEM32(esi + 0xC))) goto loc_000D34FF; /* je: equal / zero */

loc_000D34CE: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_000D34D0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D34FF; /* je: equal / zero */

loc_000D34D2: ;
    esi = 0x15;
    PUSH32(esp, 0); sub_002ED7A0(); /* call 0x002ED7A0 */

loc_000D34DC: ;
    ecx = ZX8(MEM8(eax + 0x24));
    edx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E);

loc_000D34E8: ;
    eax = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x60);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_002F86B0(); /* call 0x002F86B0 */

loc_000D34F8: ;
    edi = MEM32(esp + 0x2C);
    esp = esp + 0x10;

loc_000D34FF: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x18); /* subss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    esi = MEM32(esp + 0x18);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(ecx + 4) = eax;
    MEMF(edi + 0x18) = xmm1; /* movss */
    MEM32(ecx + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (CMP_EQ(esi, eax)) goto loc_000D3567; /* je: equal / zero */

loc_000D3541: ;
    edx = ZX8(MEM8(ebx + 0x41));

loc_000D3545: ;
    SET_LO8(eax, MEM8(ebx + 0x4D));
    SET_LO8(eax, LO8(eax) + 1);
    ecx = SX8(LO8(eax));
    MEM8(ebx + 0x4D) = LO8(eax);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, edx)) ? 1 : 0); /* sete */
    eax--;
    eax = eax & ecx;
    MEM8(ebx + 0x4C) = MEM8(ebx + 0x4C) - 1;
    ecx = SX8(LO8(eax));
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    MEM8(ebx + 0x4D) = LO8(eax);
    if (CMP_NE(esi, ecx)) goto loc_000D3545; /* jne: not equal / not zero */

loc_000D3567: ;
    xmm7 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x3C);

loc_000D3572: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(ecx, edx)) goto loc_000D3177; /* jne: not equal / not zero */

loc_000D3582: ;
    (void)0; /* cmp MEM8(ebx + 0x4C), 1 - flags set for next jcc */
    xmm5 = MEMF(esp + 0x24); /* movss */
    edx = MEM32(esp + 0x14);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D3746; /* jle: less or equal (signed <=) */

loc_000D3596: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm0 = MEMF(edx + 0x74); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(edx + 0x74) = xmm0; /* movss */
    if ((xmm0 <= xmm7)) goto loc_000D35CD; /* jbe: below or equal (unsigned <=) */

loc_000D35B9: ;
    /* nop */

loc_000D35C0: ;
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 > xmm7)) goto loc_000D35C0; /* ja: above (unsigned >) */

loc_000D35CD: ;
    xmm4 = MEMF(0x648D34); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_000D35ED; /* jbe: below or equal (unsigned <=) */

loc_000D35DA: ;
    /* nop */

loc_000D35E0: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_000D35E0; /* ja: above (unsigned >) */

loc_000D35ED: ;
    xmm6 = MEMF(0x64A7BC); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(edx + 0x74) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    xmm3 = xmm7; /* movaps */
    /* nop */

loc_000D3610: ;
    eax--;
    if (((int32_t)eax >= 0)) goto loc_000D3618; /* jns: not sign (positive) */

loc_000D3613: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_000D3618: ;
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = eax + eax * 8;
    xmm0 = MEMF(esi + ecx * 4 + 0x18); /* movss */
    ecx = esi + ecx * 4;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edx + 0x74); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000D364A; /* jbe: below or equal (unsigned <=) */

loc_000D3641: ;
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000D3641; /* ja: above (unsigned >) */

loc_000D364A: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_000D3659; /* jbe: below or equal (unsigned <=) */

loc_000D364F: ;
    /* nop */

loc_000D3650: ;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_000D3650; /* ja: above (unsigned >) */

loc_000D3659: ;
    MEMF(ecx + 0x20) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_NE(eax, ecx)) goto loc_000D3610; /* jne: not equal / not zero */

loc_000D3666: ;
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D3746; /* jle: less or equal (signed <=) */

loc_000D3670: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(edx + 0x14); /* movss */
    xmm4 = xmm4 * MEMF(0x649950); /* mulss */
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x64A0FC); /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm1 = xmm5; /* movaps */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm1 = MEMF(0x648F58); /* movss */
    xmm1 = xmm1 - xmm4; /* subss */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm2 = xmm7; /* movaps */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm7 <= xmm1)) goto loc_000D36D6; /* jbe: below or equal (unsigned <=) */

loc_000D36CE: ;
    MEMF(esp + 0x14) = xmm7; /* movss */
    goto loc_000D36F3;

loc_000D36D6: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_000D36F3; /* jbe: below or equal (unsigned <=) */

loc_000D36DB: ;
    MEMF(esp + 0x14) = xmm3; /* movss */
    goto loc_000D36F3;

loc_000D36E3: ;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esi = MEM32(esp + 0x3C);

loc_000D36F3: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_000D36FB; /* jns: not sign (positive) */

loc_000D36F6: ;
    edi = ZX8(MEM8(ebx + 0x41));
    edi--;

loc_000D36FB: ;
    edx = edi + edi * 8;
    xmm1 = MEMF(esi + edx * 4 + 0x18); /* movss */
    esi = esi + edx * 4;
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000D372C; /* jbe: below or equal (unsigned <=) */

loc_000D3716: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x40] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_000D3730;

loc_000D372C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_000D3730: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000D373B: ;
    MEM8(esi + 0x1C) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_NE(edi, eax)) goto loc_000D36E3; /* jne: not equal / not zero */

loc_000D3746: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
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
 * sub_000D3760
 * Original: 0x000D3760 - 0x000D38C8 (360 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3760: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp MEM8(ebx + 0x4C), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x144);
    if (CMP_GE(MEM8(ebx + 0x4C), 2)) goto loc_000D3782; /* jge: greater or equal (signed >=) */

loc_000D377C: ;
    if (TEST_NZ(MEM8(ebx + 0x3A), 8)) goto loc_000D37C9; /* jne: not equal / not zero */

loc_000D3782: ;
    xmm0 = MEMF(edi + 0x14); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    xmm2 = MEMF(0x7FA21C); /* movss */
    if ((xmm0 <= xmm4)) goto loc_000D3806; /* jbe: below or equal (unsigned <=) */

loc_000D3797: ;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    if (CMP_EQ(eax, 1)) goto loc_000D37B2; /* je: equal / zero */

loc_000D37AD: ;
    if (CMP_NE(eax, 0xB)) goto loc_000D37BC; /* jne: not equal / not zero */

loc_000D37B2: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    goto loc_000D37C4;

loc_000D37BC: ;
    xmm0 = MEMF(0x648F58); /* movss */

loc_000D37C4: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000D37D2; /* jbe: below or equal (unsigned <=) */

loc_000D37C9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000D37D2: ;
    eax = MEM32(edi + 0x94);
    ecx = MEM32(eax + 0x34);
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x98); /* mulss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    edx = MEM32(edi + 0x94);
    eax = MEM32(edx + 0x34);
    MEMF(eax + 0x24) = xmm0; /* movss */

loc_000D3806: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    if (CMP_EQ(esi, ecx)) goto loc_000D38BB; /* je: equal / zero */

loc_000D3817: ;
    xmm3 = MEMF(0x649728); /* movss */
    /* nop */

loc_000D3820: ;
    esi--;
    if (((int32_t)esi >= 0)) goto loc_000D3828; /* jns: not sign (positive) */

loc_000D3823: ;
    esi = ZX8(MEM8(ebx + 0x41));
    esi--;

loc_000D3828: ;
    xmm0 = MEMF(edi + 0x14); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    edx = esi + esi * 8;
    ecx = ebp + edx * 4;
    if ((xmm0 <= xmm4)) goto loc_000D386F; /* jbe: below or equal (unsigned <=) */

loc_000D3839: ;
    eax = ecx + 0xC;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm3; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_000D386F: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_NE(esi, eax)) goto loc_000D3820; /* jne: not equal / not zero */

loc_000D38BB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D38D0
 * Original: 0x000D38D0 - 0x000D390D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D38D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D38D0: ;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x100);
    ebx = MEM32(ebp + 0x144);
    xmm0 = MEMF(ebx + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x140);
    MEM32(esp + 0xC) = esi;
    if ((xmm0 <= MEMF(0x648CF8))) { sub_000D390D(); return; } /* jbe: below or equal (unsigned <=) */

loc_000D38FE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xF4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4010
 * Original: 0x000D4010 - 0x000D4563 (1363 bytes, 367 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4010(void)
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

loc_000D4010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x144);
    edx = MEM32(eax + 4);
    ecx = MEM32(ebx + 0x140);
    MEM32(esp + 0x1C) = edx;
    (void)0; /* cmp MEM8(ebx + 0x4C), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0 = xmm4; /* movaps */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x4C) = ecx;
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D4463; /* jle: less or equal (signed <=) */

loc_000D404D: ;
    (void)0; /* test MEM8(ebx + 0x3A), 2 - flags set for next jcc */
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    xmm5 = xmm4; /* movaps */
    if (TEST_Z(MEM8(ebx + 0x3A), 2)) goto loc_000D4071; /* je: equal / zero */

loc_000D405A: ;
    ecx = esp + 0x2C;
    eax = ebx + 0x2C;
    edx = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x50) = edx;
    goto loc_000D40A0;

loc_000D4071: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_000D407F; /* jns: not sign (positive) */

loc_000D4074: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x1C) = eax;
    edi = eax;

loc_000D407F: ;
    edx = edi + edi * 8;
    eax = ecx + edx * 4;
    ecx = esp + 0x2C;
    edx = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x50) = edx;
    goto loc_000D40A0;

loc_000D4099: ;
    xmm5 = MEMF(esp + 0x20); /* movss */
    /* nop */

loc_000D40A0: ;
    xmm6 = MEMF(0x648F88); /* movss */
    edi--;
    xmm3 = xmm6; /* movaps */
    MEM32(esp + 0x1C) = edi;
    if (((int32_t)edi >= 0)) goto loc_000D40BD; /* jns: not sign (positive) */

loc_000D40B2: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x1C) = eax;
    edi = eax;

loc_000D40BD: ;
    ecx = MEM32(esp + 0x4C);
    eax = edi + edi * 8;
    esi = ecx + eax * 4;
    MEM32(esp + 0x28) = esi;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x50);
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
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(0x64A100); /* movss */
    xmm2 = xmm1; /* movaps */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    MEMF(esi + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    if ((xmm2 <= xmm5)) goto loc_000D4224; /* jbe: below or equal (unsigned <=) */

loc_000D414B: ;
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000D41F3; /* jnp: not parity */

loc_000D4158: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm3 = xmm7; /* movaps */
    edx = esp + 0x2C;
    eax = esp + 0x40;
    xmm3 = xmm3 / xmm0; /* divss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x5C) = eax;
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x5C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm7 = xmm7 * MEMF(esi + 0x18); /* mulss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0x18) = xmm7; /* movss */

loc_000D41F3: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_EQ(edi, ecx)) goto loc_000D421E; /* je: equal / zero */

loc_000D41FB: ;
    eax = ZX8(MEM8(ebx + 0x41));
    /* nop */

loc_000D4200: ;
    SET_LO8(edx, MEM8(ebx + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ebx + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_000D4213; /* jne: not equal / not zero */

loc_000D420F: ;
    MEM8(ebx + 0x4D) = 0;

loc_000D4213: ;
    MEM8(ebx + 0x4C) = MEM8(ebx + 0x4C) - 1;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_NE(edi, ecx)) goto loc_000D4200; /* jne: not equal / not zero */

loc_000D421E: ;
    MEMF(esp + 0x20) = xmm5; /* movss */

loc_000D4224: ;
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000D4449; /* jnp: not parity */

loc_000D4236: ;
    /* ucomiss xmm3, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000D427C; /* jp: parity */

loc_000D423F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x18); /* divss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */

loc_000D427C: ;
    edx = MEM32(esi + 0x18);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0x4100000);
    ecx = 0x68;
    eax = 0x637EEC;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000D429B: ;
    eax = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0x94;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000D42CC: ;
    ecx = MEM32(esp + 0x178);
    eax = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_000D4442; /* je: equal / zero */

loc_000D42F9: ;
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    ecx = esi;
    PUSH32(esp, 0); sub_000D5200(); /* call 0x000D5200 */

loc_000D4305: ;
    eax = MEM32(esp + 0x148);
    esp = esp + 4;
    if (CMP_L(eax, 2)) goto loc_000D43DA; /* jl: less (signed <) */

loc_000D4318: ;
    esi = MEM32(esp + 0x60);
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_000D43AE; /* jne: not equal / not zero */

loc_000D4326: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000D43DA; /* je: equal / zero */

loc_000D4334: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_000D43DA; /* je: equal / zero */

loc_000D4342: ;
    esi = 0x59;
    PUSH32(esp, 0); sub_002ED7A0(); /* call 0x002ED7A0 */

loc_000D434C: ;
    ecx = ZX8(MEM8(eax + 0x24));
    edx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    edi = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0); sub_002F86B0(); /* call 0x002F86B0 */

loc_000D436C: ;
    eax = MEM32(esp + 0x24);
    ecx = ZX8(MEM8(eax + 0x24));
    MEM32(esp + 0x24) = ecx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x5D5850;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000D4393: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_000D43A5: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    goto loc_000D43DA;

loc_000D43AE: ;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, 0); sub_000867A0(); /* call 0x000867A0 */

loc_000D43B6: ;
    if (CMP_NE(eax, 0x5A)) goto loc_000D43DA; /* jne: not equal / not zero */

loc_000D43BB: ;
    eax = 0x5D5850;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000D43C5: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_000D43D7: ;
    esp = esp + 0xC;

loc_000D43DA: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x68);
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x18); /* subss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x70);
    MEMF(eax + 0x18) = xmm1; /* movss */
    MEM32(ecx + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if (CMP_EQ(edi, eax)) goto loc_000D4442; /* je: equal / zero */

loc_000D441C: ;
    edx = ZX8(MEM8(ebx + 0x41));

loc_000D4420: ;
    SET_LO8(eax, MEM8(ebx + 0x4D));
    SET_LO8(eax, LO8(eax) + 1);
    ecx = SX8(LO8(eax));
    MEM8(ebx + 0x4D) = LO8(eax);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, edx)) ? 1 : 0); /* sete */
    eax--;
    eax = eax & ecx;
    MEM8(ebx + 0x4C) = MEM8(ebx + 0x4C) - 1;
    ecx = SX8(LO8(eax));
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM8(ebx + 0x4D) = LO8(eax);
    if (CMP_NE(edi, ecx)) goto loc_000D4420; /* jne: not equal / not zero */

loc_000D4442: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x28);

loc_000D4449: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(edi, edx)) goto loc_000D4099; /* jne: not equal / not zero */

loc_000D4459: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x18);

loc_000D4463: ;
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D4557; /* jle: less or equal (signed <=) */

loc_000D446D: ;
    xmm3 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x7FA1F8);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A0FC); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm2 = xmm4; /* movaps */
    if (CMP_EQ(ecx, 1)) goto loc_000D44B4; /* je: equal / zero */

loc_000D44AF: ;
    if (CMP_NE(ecx, 0xB)) goto loc_000D44BE; /* jne: not equal / not zero */

loc_000D44B4: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    goto loc_000D44C6;

loc_000D44BE: ;
    xmm0 = MEMF(0x648F58); /* movss */

loc_000D44C6: ;
    xmm5 = MEMF(eax + 0x14); /* movss */
    xmm5 = xmm5 / xmm0; /* divss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm4 <= xmm0)) goto loc_000D44E6; /* jbe: below or equal (unsigned <=) */

loc_000D44DE: ;
    MEMF(esp + 0x10) = xmm4; /* movss */
    goto loc_000D4500;

loc_000D44E6: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_000D4500; /* jbe: below or equal (unsigned <=) */

loc_000D44EB: ;
    MEMF(esp + 0x10) = xmm3; /* movss */
    goto loc_000D4500;

loc_000D44F3: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* nop */

loc_000D4500: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_000D4508; /* jns: not sign (positive) */

loc_000D4503: ;
    edi = ZX8(MEM8(ebx + 0x41));
    edi--;

loc_000D4508: ;
    ecx = MEM32(esp + 0x4C);
    eax = edi + edi * 8;
    xmm0 = MEMF(ecx + eax * 4 + 0x18); /* movss */
    esi = ecx + eax * 4;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000D453D; /* jbe: below or equal (unsigned <=) */

loc_000D4527: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x3c] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_000D4541;

loc_000D453D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_000D4541: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000D454C: ;
    MEM8(esi + 0x1C) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    if (CMP_NE(edi, edx)) goto loc_000D44F3; /* jne: not equal / not zero */

loc_000D4557: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
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
 * sub_000D4570
 * Original: 0x000D4570 - 0x000D466D (253 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4570: ;
    esp = esp - 0x58;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(0x771760);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x144);
    eax = MEM32(eax + 0x140);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_000D45A8; /* je: equal / zero */

loc_000D459C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000D45A2: ;
    MEM32(0x771760) = esi;

loc_000D45A8: ;
    eax = MEM32(0x77175C);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000D45C0; /* je: equal / zero */

loc_000D45B3: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000D45BA: ;
    MEM32(0x77175C) = ebx;

loc_000D45C0: ;
    SET_LO8(eax, MEM8(0x75C5FC));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000D465D; /* jbe: below or equal (unsigned <=) */

loc_000D45CD: ;
    esi = MEM32(0x75C5F8);
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_000D4600; /* jne: not equal / not zero */

loc_000D45D8: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000D45E9: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000D45F1: ;
    edx = MEM32(0x75C5F8);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x75C5F8);

loc_000D4600: ;
    if (CMP_NE(MEM32(esi + 0x10), ebx)) goto loc_000D4628; /* jne: not equal / not zero */

loc_000D4605: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_000D460D: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C5F8);
    if (CMP_NE(MEM32(esi + 0x10), ebx)) goto loc_000D4628; /* jne: not equal / not zero */

loc_000D461B: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C5F8);

loc_000D4628: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_000D4651; /* jne: not equal / not zero */

loc_000D4630: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = esi + 4;
    if (CMP_NE(ecx, ebx)) goto loc_000D464C; /* jne: not equal / not zero */

loc_000D463A: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000D4643: ;
    esi = MEM32(0x75C5F8);
    esp = esp + 8;

loc_000D464C: ;
    esi = MEM32(esi + 4);
    goto loc_000D4659;

loc_000D4651: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_000D4656: ;
    esi = MEM32(eax + 4);

loc_000D4659: ;
    if (CMP_NE(esi, ebx)) { sub_000D466D(); return; } /* jne: not equal / not zero */

loc_000D465D: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000D4665: ;
    MEM32(0x771764) = ebx;
    g_seh_ebp = ebp; sub_000D4684(); return; /* tail jmp 0x000D4684 */

}

/**
 * sub_000D4FD0
 * Original: 0x000D4FD0 - 0x000D508B (187 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4FD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000D4FD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x144);
    eax = MEM32(esi + 0x90);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000D501F; /* je: equal / zero */

loc_000D4FE6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    ecx = MEM32(esi + 0x90);
    MEMF(ecx + 0x38) = xmm1; /* movss */
    edx = MEM32(esi + 0x90);
    MEMF(edx + 0x48) = xmm0; /* movss */
    eax = MEM32(esi + 0x90);
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */

loc_000D501F: ;
    edi = MEM32(esi + 0x94);
    if (TEST_Z(edi, edi)) goto loc_000D506B; /* je: equal / zero */

loc_000D5029: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D5061; /* jne: not equal / not zero */

loc_000D5032: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D5039: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_000D5061; /* jl: less (signed <) */

loc_000D5040: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D5055; /* je: equal / zero */

loc_000D504D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D5050: ;
    esp = esp + 4;
    goto loc_000D5061;

loc_000D5055: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D5061: ;
    MEM32(esi + 0x94) = 0;

loc_000D506B: ;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = esi + 0x68;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000D5088; /* je: equal / zero */

loc_000D5076: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000D5088: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5090
 * Original: 0x000D5090 - 0x000D50C4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5090: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000D4FD0(); /* call 0x000D4FD0 */

loc_000D509B: ;
    esp = esp + 4;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000D50A9: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_000D50AE: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D50C4(); return; } /* jne: not equal / not zero */

loc_000D50B7: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D50D0
 * Original: 0x000D50D0 - 0x000D517E (174 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D50D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D50D0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x66 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    if (CMP_A(eax, 0x66)) goto loc_000D517B; /* ja: above (unsigned >) */

loc_000D50E9: ;
    eax = ZX8(MEM8(eax + 0xD5194));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0xD5180)); return; /* indirect tail jmp */

    eax = MEM32(esp + 0x10);
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(eax), edx)) goto loc_000D510A; /* je: equal / zero */

loc_000D5102: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (CMP_NE(LO8(ecx), MEM8(edi + 8))) goto loc_000D517B; /* jne: not equal / not zero */

loc_000D510A: ;
    PUSH32(esp, 0x5F36F8);
    PUSH32(esp, 0); sub_001DD710(); /* call 0x001DD710 */

loc_000D5114: ;
    xmm0 = MEMF(edi + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    esp = esp + 4;
    MEMF(edi + 0x14) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    if (CMP_NE(eax, MEM32(edi + 0xC))) goto loc_000D517B; /* jne: not equal / not zero */

loc_000D513E: ;
    goto loc_000D5169;

    eax = MEM32(esp + 0x10);
    edx = MEM32(edi + 4);
    if (CMP_NE(MEM32(eax), edx)) goto loc_000D517B; /* jne: not equal / not zero */

loc_000D514B: ;
    (void)0; /* cmp MEM32(eax + 4), 0xB - flags set for next jcc */
    goto loc_000D5167;

    eax = MEM32(esp + 0x10);
    edx = MEM32(edi + 4);
    if (CMP_NE(MEM32(eax), edx)) goto loc_000D517B; /* jne: not equal / not zero */

loc_000D515C: ;
    eax = MEM32(eax + 4);
    if (CMP_EQ(eax, 0x14)) goto loc_000D517B; /* je: equal / zero */

loc_000D5164: ;
    (void)0; /* cmp eax, 0x15 - flags set for next jcc */

loc_000D5167: ;
    if (CMP_EQ(eax, 0x15)) goto loc_000D517B; /* je: equal / zero */

loc_000D5169: ;
    PUSH32(esp, 0x5F36F8);
    PUSH32(esp, 0); sub_001DD710(); /* call 0x001DD710 */

loc_000D5173: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000D517B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5200
 * Original: 0x000D5200 - 0x000D5389 (393 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000D5200: ;
    xmm2 = MEMF(0x648FD8); /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 0x144);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x10); /* movss */
    ecx = MEM32(edx + 0x10);
    esp = esp - 0x68;
    (void)0; /* cmp ecx, 0x15 - flags set for next jcc */
    PUSH32(esp, esi);
    xmm2 = xmm2 - xmm3; /* subss */
    if (CMP_EQ(ecx, 0x15)) goto loc_000D5260; /* je: equal / zero */

loc_000D5253: ;
    (void)0; /* cmp ecx, 0x55 - flags set for next jcc */
    MEM32(esp + 0x48) = 0x104;
    if (CMP_NE(ecx, 0x55)) goto loc_000D5268; /* jne: not equal / not zero */

loc_000D5260: ;
    MEM32(esp + 0x48) = 0x105;

loc_000D5268: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x59D948); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648F20); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - MEMF(eax + 4); /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm2 = MEMF(0x648D40); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm3 = xmm3 - xmm1; /* subss */
    MEM8(esp + 0x5C) = 0;
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D5309: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x3C) = 2;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000D535C: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 - MEMF(0x649294); /* subss */
    esi = esp + 0x28;
    eax = esp + 4;
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000D5381: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5390
 * Original: 0x000D5390 - 0x000D54B6 (294 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D5390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x384);
    if (TEST_NZ(eax, eax)) goto loc_000D53C0; /* jne: not equal / not zero */

loc_000D53A7: ;
    SET_LO8(edx, MEM8(esi + 0x389));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_000D53B2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x384) = eax;
    if (TEST_Z(eax, eax)) { sub_000D54B6(); return; } /* je: equal / zero */

loc_000D53C0: ;
    eax = MEM32(esi + 0x384);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_000D54B6(); return; } /* je: equal / zero */

loc_000D53D1: ;
    SET_LO8(eax, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x389))) { sub_000D54B6(); return; } /* jne: not equal / not zero */

loc_000D53E3: ;
    SET_LO8(eax, MEM8(esi + 0x38A));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D5414; /* je: equal / zero */

loc_000D53ED: ;
    edx = esp + 0xF;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6AC328), _icall_esp); /* indirect call */
    }

loc_000D53FD: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000D54B6(); return; } /* je: equal / zero */

loc_000D5408: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D54AC; /* je: equal / zero */

loc_000D5414: ;
    eax = MEM32(esi + 0x384);
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000D54A8; /* je: equal / zero */

loc_000D5428: ;
    edx = ZX8(MEM8(esi + 0x388));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000D5439: ;
    xmm0 = MEMF(esi + 0x36C); /* movss */
    eax = esi + 0x48;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x374);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x370);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_000D5464: ;
    xmm0 = MEMF(esi + 0x378); /* movss */
    edx = esi + 0x54;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x380);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x37C);
    ecx = esi + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_000D548F: ;
    ecx = MEM32(esi + 0x64);
    ecx = ecx & 0xFFFFFFFBu;
    esp = esp + 0x2C;
    ecx = ecx | 2;
    MEM32(esi + 0x64) = ecx;
    eax = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D54A8: ;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0xFFFFFFFDu;

loc_000D54AC: ;
    eax = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D54C0
 * Original: 0x000D54C0 - 0x000D552A (106 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D54C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D54C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x384);
    ecx = ZX8(MEM8(ecx + 0x139));
    ecx = ecx - 0;
    if ((ecx == 0)) { sub_000D552A(); return; } /* je: equal / zero */

loc_000D54D6: ;
    ecx--;
    if ((ecx == 0)) goto loc_000D5508; /* je: equal / zero */

loc_000D54D9: ;
    ecx--;
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(eax + 0x32C) = xmm0; /* movss */
    MEMF(eax + 0x328) = xmm0; /* movss */
    if ((ecx == 0)) goto loc_000D54FE; /* je: equal / zero */

loc_000D54F4: ;
    edx = MEM32(esp + 8);
    MEM8(edx) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D54FE: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D5508: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x328) = xmm0; /* movss */
    MEMF(eax + 0x32C) = xmm0; /* movss */
    MEM8(ecx) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5540
 * Original: 0x000D5540 - 0x000D5567 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5540(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D5540: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x384);
    SET_LO8(edx, MEM8(ecx + 0x13B));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_000D5567(); return; } /* je: equal / zero */

loc_000D5554: ;
    ecx = MEM32(eax + 0x64);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x64) = ecx;
    MEM8(edx) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5580
 * Original: 0x000D5580 - 0x000D55A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5580(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D5580: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x384);
    SET_LO8(edx, MEM8(ecx + 0x140));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_000D55A7(); return; } /* jne: not equal / not zero */

loc_000D5594: ;
    ecx = MEM32(eax + 0x64);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(eax + 0x64) = ecx;
    MEM8(edx) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D55C0
 * Original: 0x000D55C0 - 0x000D5606 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D55C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D55C0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x2D - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x2D)) goto loc_000D5605; /* jne: not equal / not zero */

loc_000D55CB: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x384);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_NE(edx, esi)) goto loc_000D55F0; /* jne: not equal / not zero */

loc_000D55DC: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x384) = edx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(ecx + 0x389) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D55F0: ;
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_000D5604; /* jne: not equal / not zero */

loc_000D55F5: ;
    MEM32(ecx + 0x384) = esi;
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(ecx + 0x389) = LO8(edx);

loc_000D5604: ;
    POP32(esp, esi);

loc_000D5605: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5610
 * Original: 0x000D5610 - 0x000D565C (76 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D5610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x244;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0xD0;
    esi = ecx;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000D562F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x10), 0xFFFFFFFFu - flags set for next jcc */
    MEMF(esp + 0x11C) = xmm0; /* movss */
    MEM32(esp + 0x118) = 0x303;
    if (CMP_NE(MEM16(ebp + 0x10), 0xFFFFFFFFu)) { sub_000D565C(); return; } /* jne: not equal / not zero */

loc_000D564F: ;
    MEM8(esp + 0xF) = LO8(ebx);
    MEM32(ebp + 0x10) = 0x12C;
    g_seh_ebp = ebp; sub_000D5661(); return; /* tail jmp 0x000D5661 */

}

/**
 * sub_000D60C0
 * Original: 0x000D60C0 - 0x000D6211 (337 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D60C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D60C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x39C);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx + 0x39C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000D60EB; /* je: equal / zero */

loc_000D60D7: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x3A0);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000D60EB: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x338);
    if (TEST_Z(esi, esi)) goto loc_000D612E; /* je: equal / zero */

loc_000D60F6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D612E; /* jne: not equal / not zero */

loc_000D60FF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D6106: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D612E; /* jl: less (signed <) */

loc_000D610D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D6122; /* je: equal / zero */

loc_000D611A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D611D: ;
    esp = esp + 4;
    goto loc_000D612E;

loc_000D6122: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D612E: ;
    esi = MEM32(ebx + 0x334);
    if (TEST_Z(esi, esi)) goto loc_000D6170; /* je: equal / zero */

loc_000D6138: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D6170; /* jne: not equal / not zero */

loc_000D6141: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D6148: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D6170; /* jl: less (signed <) */

loc_000D614F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D6164; /* je: equal / zero */

loc_000D615C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D615F: ;
    esp = esp + 4;
    goto loc_000D6170;

loc_000D6164: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D6170: ;
    esi = MEM32(ebx + 0x33C);
    if (TEST_Z(esi, esi)) goto loc_000D61B2; /* je: equal / zero */

loc_000D617A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D61B2; /* jne: not equal / not zero */

loc_000D6183: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D618A: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D61B2; /* jl: less (signed <) */

loc_000D6191: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D61A6; /* je: equal / zero */

loc_000D619E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D61A1: ;
    esp = esp + 4;
    goto loc_000D61B2;

loc_000D61A6: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D61B2: ;
    esi = MEM32(ebx + 0x340);
    if (TEST_Z(esi, esi)) goto loc_000D61F4; /* je: equal / zero */

loc_000D61BC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D61F4; /* jne: not equal / not zero */

loc_000D61C5: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D61CC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D61F4; /* jl: less (signed <) */

loc_000D61D3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D61E8; /* je: equal / zero */

loc_000D61E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D61E3: ;
    esp = esp + 4;
    goto loc_000D61F4;

loc_000D61E8: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D61F4: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_000D61F9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D6211(); return; } /* jne: not equal / not zero */

loc_000D6204: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D6220
 * Original: 0x000D6220 - 0x000D6316 (246 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6220(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D6220: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx + 0x338);
    if (TEST_Z(edx, edx)) goto loc_000D6259; /* je: equal / zero */

loc_000D622F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D6259; /* jne: not equal / not zero */

loc_000D6238: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D623D: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_000D6251; /* je: equal / zero */

loc_000D624D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D624F: ;
    goto loc_000D6256;

loc_000D6251: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D6256: ;
    esp = esp + 4;

loc_000D6259: ;
    edx = MEM32(ebx + 0x334);
    if (TEST_Z(edx, edx)) goto loc_000D628D; /* je: equal / zero */

loc_000D6263: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D628D; /* jne: not equal / not zero */

loc_000D626C: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D6271: ;
    ecx = MEM32(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_000D6285; /* je: equal / zero */

loc_000D6281: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D6283: ;
    goto loc_000D628A;

loc_000D6285: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D628A: ;
    esp = esp + 4;

loc_000D628D: ;
    edx = MEM32(ebx + 0x33C);
    if (TEST_Z(edx, edx)) goto loc_000D62C1; /* je: equal / zero */

loc_000D6297: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D62C1; /* jne: not equal / not zero */

loc_000D62A0: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D62A5: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_000D62B9; /* je: equal / zero */

loc_000D62B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D62B7: ;
    goto loc_000D62BE;

loc_000D62B9: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D62BE: ;
    esp = esp + 4;

loc_000D62C1: ;
    edx = MEM32(ebx + 0x340);
    if (TEST_Z(edx, edx)) goto loc_000D6306; /* je: equal / zero */

loc_000D62CB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D6306; /* jne: not equal / not zero */

loc_000D62D4: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D62D9: ;
    ecx = MEM32(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_000D62FE; /* je: equal / zero */

loc_000D62E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D62EB: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_000D62F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D62F9: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D62FE: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D6303: ;
    esp = esp + 4;

loc_000D6306: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_000D630B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D6311: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6320
 * Original: 0x000D6320 - 0x000D6350 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6320: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x3B0);
    MEM32(eax + 0x338) = 0;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_000D633A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D6350(); return; } /* jne: not equal / not zero */

loc_000D6343: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D6360
 * Original: 0x000D6360 - 0x000D6385 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6360(void)
{

loc_000D6360: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x3B0);
    MEM32(eax + 0x338) = 0;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_000D637A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D6380: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6390
 * Original: 0x000D6390 - 0x000D63B8 (40 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6390: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x198);
    MEM32(ecx + 0x334) = 0;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000D63B8(); return; } /* jne: not equal / not zero */

loc_000D63AE: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D63C0
 * Original: 0x000D63C0 - 0x000D63DD (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D63C0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D63C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x198);
    MEM32(ecx + 0x334) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_000D6420
 * Original: 0x000D6420 - 0x000D6445 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6420(void)
{

loc_000D6420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x36C);
    MEM32(eax + 0x33C) = 0;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_000D643A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D6440: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6450
 * Original: 0x000D6450 - 0x000D6478 (40 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6450: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x170);
    MEM32(ecx + 0x340) = 0;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000D6478(); return; } /* jne: not equal / not zero */

loc_000D646E: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D6480
 * Original: 0x000D6480 - 0x000D649D (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6480(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6480: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x170);
    MEM32(ecx + 0x340) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_000D64A0
 * Original: 0x000D64A0 - 0x000D6AB2 (1554 bytes, 399 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D64A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000D64A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x310);
    eax = MEM32(ebx + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = ebx;
    if (TEST_Z(eax, eax)) { sub_000D6AB2(); return; } /* je: equal / zero */

loc_000D64CF: ;
    SET_LO8(eax, MEM8(ebx + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x314))) { sub_000D6AB2(); return; } /* jne: not equal / not zero */

loc_000D64E1: ;
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_000D6501; /* jne: not equal / not zero */

loc_000D64EF: ;
    SET_LO8(ecx, MEM8(ebx + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_000D6857; /* je: equal / zero */

loc_000D6501: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_000D659E; /* jne: not equal / not zero */

loc_000D650F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebx + 0x568);
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 0x34C;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    edx = MEM32(eax);
    edi = esi + 0x40;
    MEM32(edi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edi;
    MEM32(edi + 8) = edx;
    goto loc_000D65F4;

loc_000D659E: ;
    edx = ZX8(MEM8(esi + 0x330));
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000D65AF: ;
    PUSH32(esp, 0);
    edi = esi + 0x40;
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 4);
    ebx = edi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_000D65C5: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D65E1; /* jne: not equal / not zero */

loc_000D65CC: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi + 0x318;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000D65DE: ;
    esp = esp + 0xC;

loc_000D65E1: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x1C);

loc_000D65F4: ;
    eax = MEM32(ebx + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_000D661A; /* je: equal / zero */

loc_000D6603: ;
    edx = edi;
    ecx = MEM32(edx);
    eax = eax + 0x34C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_000D661A: ;
    if (TEST_Z(MEM8(esi + 0x333), 2)) goto loc_000D6751; /* je: equal / zero */

loc_000D6627: ;
    ecx = MEM32(ebx + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x1D4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x12) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D669D; /* je: equal / zero */

loc_000D663B: ;
    ecx = ecx + 0xF8;
    edi = MEM32(ecx);
    eax = esi + 0x4C;
    edx = eax;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(ebx + 0x568);
    ecx = MEM32(edx + 0xF4);
    MEM32(esi + 0x350) = ecx;
    esi = MEM32(ebx + 0x568);
    esi = esi + 0x140;
    ecx = 0x24;
    edi = esp + 0x80;
    edx = esp + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_000D6692: ;
    esi = MEM32(ebp + 8);
    esp = esp + 0xC;
    goto loc_000D6864;

loc_000D669D: ;
    xmm1 = MEMF(ecx + 0xF4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000D670A; /* jp: parity */

loc_000D66AE: ;
    xmm0 = MEMF(0x64909C); /* movss */
    MEMF(esi + 0x350) = xmm0; /* movss */
    ebx = MEM32(ebx + 0x568);
    xmm1 = MEMF(ebx + 0x128); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    ebx = ebx + 0x128;
    MEMF(esi + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(esi + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    MEMF(esi + 0x54) = xmm1; /* movss */
    goto loc_000D6864;

loc_000D670A: ;
    xmm0 = MEMF(0x649430); /* movss */
    MEMF(esi + 0x350) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = eax + 0x128;
    PUSH32(esp, eax);
    MEM8(esp + 0x1A) = 2;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_000D673A: ;
    ecx = esi + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_000D6749: ;
    esp = esp + 0x14;
    goto loc_000D6864;

loc_000D6751: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esi + 0x324;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000D6767: ;
    eax = esp + 0x2C;
    ecx = eax;
    esp = esp + 0xC;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000D67AE: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x568);
    xmm0 = MEMF(eax + 0x21C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x224); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    ecx = MEM32(eax + 0x228);
    PUSH32(esp, 0);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 0x22C);
    PUSH32(esp, 0);
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 0x230);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    edx = esi + 0x50;
    PUSH32(esp, edx);
    MEM32(edi + 8) = eax;
    ebx = esi + 0x4C;
    PUSH32(esp, ebx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000D6828: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_000D6857; /* je: equal / zero */

loc_000D682F: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM8(esp + 0x1E) = 1;
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_000D6840: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_000D684A: ;
    esp = esp + 0x10;
    MEMF(esi + 0x350) = xmm0; /* movss */
    goto loc_000D685C;

loc_000D6857: ;
    MEM8(esp + 0x12) = 0;

loc_000D685C: ;
    xmm2 = MEMF(0x648D14); /* movss */

loc_000D6864: ;
    SET_LO8(ebx, MEM8(esp + 0x12));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esi + 0x60) = xmm2; /* movss */
    MEMF(esi + 0x5C) = xmm2; /* movss */
    MEMF(esi + 0x58) = xmm2; /* movss */
    xmm0 = MEMF(esi + 0x350); /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    eax = MEM32(esi + 0x338);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000D6A5D; /* je: equal / zero */

loc_000D6897: ;
    SET_LO8(edx, MEM8(esi + 0x333));
    SET_LO8(edx, LO8(edx) | 1);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x333) = LO8(edx);
    SET_LO8(edx, 0xFE);
    if (TEST_Z(eax, eax)) goto loc_000D6975; /* je: equal / zero */

loc_000D68B0: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000D6967; /* je: equal / zero */

loc_000D68BC: ;
    xmm0 = MEMF(esi + 0x350); /* movss */
    /* comiss xmm0, MEMF(0x6490B8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6490B8))) goto loc_000D692F; /* jbe: below or equal (unsigned <=) */

loc_000D68CD: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm3 = MEMF(esi + 0x4C); /* movss */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = MEMF(0x64908C); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(eax + 0x40) = xmm3; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm3 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(eax + 0x44) = xmm3; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    goto loc_000D6945;

loc_000D692F: ;
    esi = esi + 0x4C;
    edi = MEM32(esi);
    ecx = eax + 0x40;
    MEM32(ecx) = edi;
    edi = MEM32(esi + 4);
    MEM32(ecx + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(ecx + 8) = esi;

loc_000D6945: ;
    edi = eax + 0x320;
    ecx = 0x24;
    esi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(eax + 0x310));
    esi = MEM32(ebp + 8);
    SET_LO8(ecx, LO8(ecx) | 1);
    goto loc_000D696F;

loc_000D6967: ;
    SET_LO8(ecx, MEM8(eax + 0x310));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));

loc_000D696F: ;
    MEM8(eax + 0x310) = LO8(ecx);

loc_000D6975: ;
    eax = MEM32(esi + 0x340);
    if (TEST_Z(eax, eax)) goto loc_000D69C0; /* je: equal / zero */

loc_000D697F: ;
    if (CMP_EQ(LO8(ebx), 2)) goto loc_000D6989; /* je: equal / zero */

loc_000D6984: ;
    if (CMP_NE(LO8(ebx), 3)) goto loc_000D69B2; /* jne: not equal / not zero */

loc_000D6989: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000D69B2; /* je: equal / zero */

loc_000D6991: ;
    edx = esi + 0x4C;
    edi = MEM32(edx);
    ecx = eax + 0x70;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    SET_LO8(ecx, MEM8(eax + 0x174));
    SET_LO8(ecx, LO8(ecx) | 1);
    goto loc_000D69BA;

loc_000D69B2: ;
    SET_LO8(ecx, MEM8(eax + 0x174));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));

loc_000D69BA: ;
    MEM8(eax + 0x174) = LO8(ecx);

loc_000D69C0: ;
    eax = MEM32(esi + 0x334);
    if (TEST_Z(eax, eax)) goto loc_000D6A11; /* je: equal / zero */

loc_000D69CA: ;
    ecx = esi + 0x40;
    edi = MEM32(ecx);
    edx = eax + 0x70;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    xmm0 = MEMF(eax + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x344); /* mulss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x174); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x344); /* mulss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEM8(eax + 0x19C) = MEM8(eax + 0x19C) | 1;

loc_000D6A11: ;
    eax = MEM32(esi + 0x33C);
    if (TEST_Z(eax, eax)) goto loc_000D6A52; /* je: equal / zero */

loc_000D6A1B: ;
    edx = esi + 0x40;
    edi = MEM32(edx);
    ecx = eax + 0x40;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    esi = esi + 0x4C;
    edx = MEM32(esi);
    ecx = eax + 0x4C;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 0x64) = MEM32(eax + 0x64) & 0xFFFFFFFBu;
    MEM8(eax + 0x370) = MEM8(eax + 0x370) | 1;

loc_000D6A52: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D6A5D: ;
    SET_LO8(ebx, MEM8(esi + 0x333));
    SET_LO8(edx, 0xFE);
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x333) = LO8(ebx);
    if (TEST_Z(eax, eax)) goto loc_000D6A77; /* je: equal / zero */

loc_000D6A71: ;
    MEM8(eax + 0x310) = MEM8(eax + 0x310) & LO8(edx);

loc_000D6A77: ;
    eax = MEM32(esi + 0x334);
    if (TEST_Z(eax, eax)) goto loc_000D6A87; /* je: equal / zero */

loc_000D6A81: ;
    MEM8(eax + 0x19C) = MEM8(eax + 0x19C) & LO8(edx);

loc_000D6A87: ;
    eax = MEM32(esi + 0x33C);
    if (TEST_Z(eax, eax)) goto loc_000D6A97; /* je: equal / zero */

loc_000D6A91: ;
    MEM8(eax + 0x370) = MEM8(eax + 0x370) & LO8(edx);

loc_000D6A97: ;
    esi = MEM32(esi + 0x340);
    if (TEST_Z(esi, esi)) goto loc_000D6A52; /* je: equal / zero */

loc_000D6AA1: ;
    MEM8(esi + 0x174) = MEM8(esi + 0x174) & LO8(edx);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6AC0
 * Original: 0x000D6AC0 - 0x000D6E4A (906 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6AC0(void)
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

loc_000D6AC0: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    ecx = ZX8(MEM8(ebx + 0x332));
    if (CMP_NE(ecx, eax)) goto loc_000D6AFA; /* jne: not equal / not zero */

loc_000D6AD8: ;
    ecx = MEM32(ebx + 0x310);
    if (TEST_Z(ecx, ecx)) { sub_000D6E4A(); return; } /* je: equal / zero */

loc_000D6AE6: ;
    edx = MEM32(ecx + 0x568);
    ecx = MEM32(edx + 0x2B0);
    if (TEST_NZ(ecx, ecx)) { sub_000D6E4A(); return; } /* jne: not equal / not zero */

loc_000D6AFA: ;
    if (TEST_Z(MEM8(ebx + 0x333), 1)) { sub_000D6E4A(); return; } /* je: equal / zero */

loc_000D6B07: ;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(ebx + 0x350); /* movss */
    PUSH32(esp, ebp);
    ebp = eax + ecx + 0x330;
    edx = ebx + 0x40;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    eax = ebx + 0x4C;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ecx;
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm5 = xmm5 - MEMF(esp + 0x20); /* subss */
    MEM32(esp + 0x30) = edx;
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0x24); /* subss */
    MEM32(esp + 0x34) = eax;
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 - MEMF(esp + 0x28); /* subss */
    PUSH32(esp, edi);
    edi = ebx + 0x294;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    esi = esp + 0x40;
    ecx = esp + 0x1C;
    edx = esp + 0x28;
    MEM32(esp + 0x18) = edi;
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00111580(); /* call 0x00111580 */

loc_000D6BAD: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 4); /* subss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm2 = xmm2 - MEMF(ebp + 8); /* subss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
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
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    esp = esp + 4;
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm1; /* addss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_000D6C47; /* jp: parity */

loc_000D6C3C: ;
    xmm2 = xmm3; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm3; /* movaps */
    goto loc_000D6C81;

loc_000D6C47: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [ebx + 0x344] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x18); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x20); /* movss */

loc_000D6C81: ;
    fp_push(MEMF(ebx + 0x35C)); /* fld float */
    xmm4 = MEMF(ebx + 0x364); /* movss */
    /* FPU: fsin  */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x30); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 + xmm4; /* addss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm6 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm7 = xmm0; /* movaps */
    edi = edi + 0x1C;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + -28) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm6 = xmm6 + xmm5; /* addss */
    eax = (int32_t)xmm6; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + -24) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm7 + xmm6; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    MEMF(edi + -8) = xmm3; /* movss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + -20) = xmm7; /* movss */
    eax = 0; /* xor self */
    MEM16(edi + -4) = LO16(eax);
    xmm5 = xmm5 - xmm1; /* subss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm6 = xmm6 - xmm0; /* subss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fst */
    ecx = (int32_t)xmm6; /* cvttss2si */
    xmm5 = MEMF(esp + 0x50); /* movss */
    MEMF(edi + -12) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi) = xmm4; /* movss */
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = SX16(LO16(ecx));
    SET_LO8(ecx, 0xA);
    MEM8(edi + 0xC) = LO8(ecx);
    MEM8(edi + 0xD) = LO8(ecx);
    MEMF(edi + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x24); /* movss */
    SET_LO8(ecx, 0xFF);
    MEMF(edi + 4) = xmm4; /* movss */
    MEM8(edi + 0xE) = LO8(ecx);
    MEM8(edi + 0xF) = LO8(ecx);
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - xmm2; /* subss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    MEMF(edi + 8) = xmm4; /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    edx = SX16(LO16(ecx));
    MEMF(edi + 0x14) = xmm4; /* movss */
    MEM16(edi + 0x18) = LO16(eax);
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edi = edi + 0x1C;
    MEMF(edi) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x28); /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    ecx = (int32_t)xmm7; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x2C); /* movss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    ecx = (int32_t)xmm7; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 + xmm5; /* addss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(edi + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm6; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEM16(edi + 0x18) = LO16(eax);
    MEMF(edi + 8) = xmm7; /* movss */
    MEMF(edi + 0x10) = xmm4; /* movss */
    edi = edi + 0x1C;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM16(edi + 0x18) = LO16(eax);
    eax = MEM32(esp + 0x14);
    MEMF(edi) = xmm2; /* movss */
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm3; /* movss */
    MEMF(edi + 0x10) = xmm4; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000D6E60
 * Original: 0x000D6E60 - 0x000D6E9F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D6E60: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    (void)0; /* test MEM8(esi + 0x310), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x294;
    if (TEST_Z(MEM8(esi + 0x310), 1)) goto loc_000D6E97; /* je: equal / zero */

loc_000D6E78: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x320;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_000D6E90: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D6E9F(); return; } /* jne: not equal / not zero */

loc_000D6E97: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000D73E0
 * Original: 0x000D73E0 - 0x000D73FD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D73E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D73E0: ;
    esp = esp - 0x10;
    xmm0 = MEMF(0x64908C); /* movss */
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(edi, ecx)) { sub_000D73FD(); return; } /* jne: not equal / not zero */

loc_000D73F7: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7510
 * Original: 0x000D7510 - 0x000D7538 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7510(void)
{

loc_000D7510: ;
    esp = esp - 8;
    PUSH32(esp, 0x1A);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000D7534: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7540
 * Original: 0x000D7540 - 0x000D7576 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7540(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7540: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x198);
    edx = ZX8(MEM8(eax + 0x332));
    eax = eax + 0x310;
    if (CMP_NE(LO16(edx), MEM16(esp + 8))) { sub_000D7576(); return; } /* jne: not equal / not zero */

loc_000D755D: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_000D7573; /* je: equal / zero */

loc_000D7563: ;
    eax = MEM32(eax + 0x568);
    edx = MEM32(eax + 0x2B0);
    if (TEST_Z(edx, edx)) { sub_000D7576(); return; } /* je: equal / zero */

loc_000D7573: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7580
 * Original: 0x000D7580 - 0x000D758D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7580(void)
{

loc_000D7580: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x174));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7590
 * Original: 0x000D7590 - 0x000D75C6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7590(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7590: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x36C);
    edx = ZX8(MEM8(eax + 0x332));
    eax = eax + 0x310;
    if (CMP_NE(LO16(edx), MEM16(esp + 8))) { sub_000D75C6(); return; } /* jne: not equal / not zero */

loc_000D75AD: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_000D75C3; /* je: equal / zero */

loc_000D75B3: ;
    eax = MEM32(eax + 0x568);
    edx = MEM32(eax + 0x2B0);
    if (TEST_Z(edx, edx)) { sub_000D75C6(); return; } /* je: equal / zero */

loc_000D75C3: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000D75D0
 * Original: 0x000D75D0 - 0x000D7664 (148 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D75D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D75D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x4B0);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_000D75F7: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_000D7603: ;
    edx = MEM32(eax + 0x30);
    eax = MEM32(edi * 4 + 0x6B3E08);
    esi = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp MEM16(edi * 2 + 0x84ED88), LO16(esi) - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_BE(MEM16(edi * 2 + 0x84ED88), LO16(esi))) goto loc_000D7661; /* jbe: below or equal (unsigned <=) */

loc_000D7620: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_000D7623: ;
    eax = ZX8(MEM8(ebx));
    if (CMP_L(eax, MEM32(esp + 0x10))) goto loc_000D7650; /* jl: less (signed <) */

loc_000D762C: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_000D7650; /* je: equal / zero */

loc_000D7636: ;
    if (CMP_L(eax, 0x205)) goto loc_000D7650; /* jl: less (signed <) */

loc_000D763D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000D764D: ;
    esp = esp + 0xC;

loc_000D7650: ;
    ecx = ZX16(MEM16(edi * 2 + 0x84ED88));
    esi++;
    ebx = ebx + 0x10;
    if (CMP_L(esi, ecx)) goto loc_000D7623; /* jl: less (signed <) */

loc_000D7660: ;
    POP32(esp, ebx);

loc_000D7661: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7670
 * Original: 0x000D7670 - 0x000D7691 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    eax = eax + 0x64;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000D7685: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) { sub_000D7691(); return; } /* jne: not equal / not zero */

loc_000D768E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D76D0
 * Original: 0x000D76D0 - 0x000D77C4 (244 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D76D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000D76D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_000D77C4(); return; } /* je: equal / zero */

loc_000D76EB: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) { sub_000D77C4(); return; } /* je: equal / zero */

loc_000D76F8: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x30))) { sub_000D77C4(); return; } /* jne: not equal / not zero */

loc_000D7707: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) { sub_000D77C4(); return; } /* je: equal / zero */

loc_000D7715: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) { sub_000D77C4(); return; } /* je: equal / zero */

loc_000D7727: ;
    edx = ZX8(MEM8(esi + 0x40));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000D7735: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000D7744: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), 1)) goto loc_000D778A; /* je: equal / zero */

loc_000D774E: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x42) = MEM16(esi + 0x42) - LO16(eax);
    if (CMP_GE(MEM16(esi + 0x42), 0)) goto loc_000D778A; /* jge: greater or equal (signed >=) */

loc_000D775F: ;
    SET_LO8(eax, MEM8(esi + 0x46));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D7779; /* je: equal / zero */

loc_000D7766: ;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x590400), _icall_esp); /* indirect call */
    }

loc_000D7776: ;
    esp = esp + 8;

loc_000D7779: ;
    MEM32(esi + 0x48) = 0;

loc_000D7780: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000D7785: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D778A: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D77A8; /* je: equal / zero */

loc_000D7791: ;
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5903F8), _icall_esp); /* indirect call */
    }

loc_000D77A1: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D7780; /* je: equal / zero */

loc_000D77A8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    esi = esi + 0x50;
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7810
 * Original: 0x000D7810 - 0x000D78A8 (152 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x4C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_000D784B; /* je: equal / zero */

loc_000D781D: ;
    eax = MEM32(esi + 0x60);
    if (TEST_Z(eax, eax)) goto loc_000D782C; /* je: equal / zero */

loc_000D7824: ;
    edx = MEM32(esi + 0x5C);
    MEM32(eax + 0x5C) = edx;
    goto loc_000D7832;

loc_000D782C: ;
    eax = MEM32(esi + 0x5C);
    MEM32(ecx + 0x40) = eax;

loc_000D7832: ;
    eax = MEM32(esi + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_000D7841; /* je: equal / zero */

loc_000D7839: ;
    edx = MEM32(esi + 0x60);
    MEM32(eax + 0x60) = edx;
    goto loc_000D7847;

loc_000D7841: ;
    eax = MEM32(esi + 0x60);
    MEM32(ecx + 0x44) = eax;

loc_000D7847: ;
    MEM16(ecx + 0x3C) = MEM16(ecx + 0x3C) - 1;

loc_000D784B: ;
    edi = MEM32(esi + 0x48);
    if (TEST_Z(edi, edi)) goto loc_000D787C; /* je: equal / zero */

loc_000D7852: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D78A8(); return; } /* jne: not equal / not zero */

loc_000D785B: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D7862: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_000D7885; /* jl: less (signed <) */

loc_000D7869: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D7893; /* je: equal / zero */

loc_000D7876: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D7879: ;
    esp = esp + 4;

loc_000D787C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D78A8(); return; } /* jne: not equal / not zero */

loc_000D7885: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000D7893: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D789F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D78B0
 * Original: 0x000D78B0 - 0x000D7932 (130 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D78B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D78B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x4C);
    if (TEST_Z(ecx, ecx)) goto loc_000D78EA; /* je: equal / zero */

loc_000D78BC: ;
    eax = MEM32(esi + 0x60);
    if (TEST_Z(eax, eax)) goto loc_000D78CB; /* je: equal / zero */

loc_000D78C3: ;
    edx = MEM32(esi + 0x5C);
    MEM32(eax + 0x5C) = edx;
    goto loc_000D78D1;

loc_000D78CB: ;
    eax = MEM32(esi + 0x5C);
    MEM32(ecx + 0x40) = eax;

loc_000D78D1: ;
    eax = MEM32(esi + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_000D78E0; /* je: equal / zero */

loc_000D78D8: ;
    edx = MEM32(esi + 0x60);
    MEM32(eax + 0x60) = edx;
    goto loc_000D78E6;

loc_000D78E0: ;
    eax = MEM32(esi + 0x60);
    MEM32(ecx + 0x44) = eax;

loc_000D78E6: ;
    MEM16(ecx + 0x3C) = MEM16(ecx + 0x3C) - 1;

loc_000D78EA: ;
    edx = MEM32(esi + 0x48);
    if (TEST_Z(edx, edx)) goto loc_000D7927; /* je: equal / zero */

loc_000D78F1: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D7927; /* jne: not equal / not zero */

loc_000D78FA: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D78FF: ;
    ecx = MEM32(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_000D791F; /* je: equal / zero */

loc_000D790F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D7911: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D791A: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D791F: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D7924: ;
    esp = esp + 4;

loc_000D7927: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D792D: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7940
 * Original: 0x000D7940 - 0x000D79CD (141 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7940: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_000D7999; /* jne: not equal / not zero */

loc_000D7949: ;
    esi = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x2C);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_000D7960; /* je: equal / zero */

loc_000D7958: ;
    SET_LO8(edx, MEM8(esi + 0x30));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_000D79CB; /* jne: not equal / not zero */

loc_000D7960: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D79CB; /* jne: not equal / not zero */

loc_000D7969: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D7970: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D79CB; /* jl: less (signed <) */

loc_000D7977: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D798C; /* je: equal / zero */

loc_000D7984: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D7987: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D798C: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000D7999: ;
    if (CMP_NE(eax, 0x2D)) goto loc_000D79CB; /* jne: not equal / not zero */

loc_000D799E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x2C);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_000D79BD; /* jne: not equal / not zero */

loc_000D79AF: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x2C) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x30) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D79BD: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_000D79CB; /* jne: not equal / not zero */

loc_000D79C2: ;
    MEM32(eax + 0x2C) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 0x30) = LO8(edx);

loc_000D79CB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D79D0
 * Original: 0x000D79D0 - 0x000D79EF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D79D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D79D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    eax = eax + 0x48;
    PUSH32(esp, 0x45);
    esi = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000D79E2: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) { sub_000D79EF(); return; } /* jne: not equal / not zero */

loc_000D79EB: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7A20
 * Original: 0x000D7A20 - 0x000D7AF3 (211 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x34));
    ecx = MEM32(esi + 0x2C);
    ebx = MEM32(ecx + 0x64);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 2);
    if (TEST_Z(ebx, ebx)) { sub_000D7AF3(); return; } /* je: equal / zero */

loc_000D7A3C: ;
    if (CMP_EQ(MEM32(ecx + 0x68), 0xFFFF)) { sub_000D7AF3(); return; } /* je: equal / zero */

loc_000D7A49: ;
    SET_LO8(ebx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(ebx), MEM8(esi + 0x30))) { sub_000D7AF3(); return; } /* jne: not equal / not zero */

loc_000D7A58: ;
    ebx = MEM32(ecx + 0x3C8);
    if (TEST_Z(ebx, ebx)) goto loc_000D7A74; /* je: equal / zero */

loc_000D7A62: ;
    SET_LO8(ecx, MEM8(ecx + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_000D7A74; /* je: equal / zero */

loc_000D7A70: ;
    SET_LO8(eax, LO8(eax) | 2);
    goto loc_000D7A76;

loc_000D7A74: ;
    SET_LO8(eax, LO8(eax) & 0xFD);

loc_000D7A76: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(esi + 0x34) = LO8(eax);
    if (TEST_Z(LO8(eax), 1)) goto loc_000D7AAC; /* je: equal / zero */

loc_000D7A7D: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(esi + 0x32) = MEM16(esi + 0x32) - LO16(ecx);
    if (CMP_GE(MEM16(esi + 0x32), 0)) goto loc_000D7AAC; /* jge: greater or equal (signed >=) */

loc_000D7A8F: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D7AA4; /* je: equal / zero */

loc_000D7A96: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x590410), _icall_esp); /* indirect call */
    }

loc_000D7AA1: ;
    esp = esp + 4;

loc_000D7AA4: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000D7AA9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D7AAC: ;
    SET_LO8(eax, LO8(eax) & 2);
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_000D7AD2; /* je: equal / zero */

loc_000D7AB2: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D7AC4; /* je: equal / zero */

loc_000D7AB7: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x36);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x590408), _icall_esp); /* indirect call */
    }

loc_000D7AC2: ;
    goto loc_000D7ACF;

loc_000D7AC4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x37);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x59040C), _icall_esp); /* indirect call */
    }

loc_000D7ACF: ;
    esp = esp + 4;

loc_000D7AD2: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D7AA9; /* je: equal / zero */

loc_000D7AD9: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x590404), _icall_esp); /* indirect call */
    }

loc_000D7AE4: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D7AA9; /* jne: not equal / not zero */

loc_000D7AEB: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000D7AF0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B30
 * Original: 0x000D7B30 - 0x000D7BDE (174 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ZX8(MEM8(ebp + 0x39));
    eax = MEM32(eax * 4 + 0x590414);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_000D7B4E; /* je: equal / zero */

loc_000D7B48: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D7B4B: ;
    esp = esp + 4;

loc_000D7B4E: ;
    esi = MEM32(ebp + 0x40);
    if (CMP_EQ(esi, ebx)) goto loc_000D7BCE; /* je: equal / zero */

loc_000D7B55: ;
    PUSH32(esp, edi);

loc_000D7B56: ;
    SET_LO8(eax, MEM8(esi + 0x46));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    edi = MEM32(esi + 0x5C);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D7B72; /* je: equal / zero */

loc_000D7B60: ;
    edx = esi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x590400), _icall_esp); /* indirect call */
    }

loc_000D7B6F: ;
    esp = esp + 8;

loc_000D7B72: ;
    (void)0; /* cmp MEM8(0x8472BD), LO8(ebx) - flags set for next jcc */
    MEM32(esi + 0x48) = ebx;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_000D7BC7; /* jne: not equal / not zero */

loc_000D7B7D: ;
    SET_LO8(ecx, MEM8(0x771758));
    if (CMP_LE(LO8(ecx), LO8(ebx))) goto loc_000D7B9F; /* jle: less or equal (signed <=) */

loc_000D7B87: ;
    eax = 0x771740;
    ecx = ZX8(LO8(ecx));
    /* nop */

loc_000D7B90: ;
    if (CMP_NE(MEM32(eax), esi)) goto loc_000D7B99; /* jne: not equal / not zero */

loc_000D7B94: ;
    edx = MEM32(esi + 0xC);
    MEM32(eax) = edx;

loc_000D7B99: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_000D7B90; /* jne: not equal / not zero */

loc_000D7B9F: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D7BC7; /* jl: less (signed <) */

loc_000D7BA6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_000D7BBB; /* je: equal / zero */

loc_000D7BB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D7BB6: ;
    esp = esp + 4;
    goto loc_000D7BC7;

loc_000D7BBB: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D7BC7: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = edi;
    if (CMP_NE(edi, ebx)) goto loc_000D7B56; /* jne: not equal / not zero */

loc_000D7BCD: ;
    POP32(esp, edi);

loc_000D7BCE: ;
    ebx = MEM32(ebp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_000D7BD7: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7BE0
 * Original: 0x000D7BE0 - 0x000D7C04 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7BE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000D7B30(); /* call 0x000D7B30 */

loc_000D7BEB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D7C04(); return; } /* jne: not equal / not zero */

loc_000D7BF7: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D7C10
 * Original: 0x000D7C10 - 0x000D7C26 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7C10(void)
{

loc_000D7C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000D7B30(); /* call 0x000D7B30 */

loc_000D7C1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D7C21: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7C30
 * Original: 0x000D7C30 - 0x000D7C4C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7C30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(ebx, ebx)) { sub_000D7C4C(); return; } /* jne: not equal / not zero */

loc_000D7C43: ;
    eax = edi;
    PUSH32(esp, 0); sub_000D7D60(); /* call 0x000D7D60 */

loc_000D7C4A: ;
    g_seh_ebp = ebp; sub_000D7C76(); return; /* tail jmp 0x000D7C76 */

}

/**
 * sub_000D7CA0
 * Original: 0x000D7CA0 - 0x000D7CDE (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7CA0: ;
    eax = MEM32(ecx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_000D7CDD; /* je: equal / zero */

loc_000D7CA7: ;
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 0x40);
    if (TEST_Z(edx, edx)) goto loc_000D7CC9; /* je: equal / zero */

loc_000D7CB4: ;
    MEM32(edx + 0x60) = ecx;
    MEM32(ecx + 0x60) = 0;
    MEM16(eax + 0x3C) = MEM16(eax + 0x3C) + 1;
    MEM32(eax + 0x40) = ecx;
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

loc_000D7CC9: ;
    MEM32(eax + 0x44) = ecx;
    MEM32(ecx + 0x60) = 0;
    MEM16(eax + 0x3C) = MEM16(eax + 0x3C) + 1;
    MEM32(eax + 0x40) = ecx;
    MEM32(ecx + 0x4C) = eax;

loc_000D7CDD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7CE0
 * Original: 0x000D7CE0 - 0x000D7D56 (118 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7CE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(MEM16(esi + 0x3C), 0)) goto loc_000D7D54; /* jle: less or equal (signed <=) */

loc_000D7CEC: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, edi);

loc_000D7CF4: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(esi + 0x40);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000D7D4B; /* jne: not equal / not zero */

loc_000D7D01: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000D7D1F; /* jle: less or equal (signed <=) */

loc_000D7D05: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    /* nop */

loc_000D7D10: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_000D7D19; /* jne: not equal / not zero */

loc_000D7D14: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_000D7D19: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000D7D10; /* jne: not equal / not zero */

loc_000D7D1F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000D7D4B; /* jl: less (signed <) */

loc_000D7D26: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_000D7D41; /* je: equal / zero */

loc_000D7D33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000D7D36: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_000D7D4B;

loc_000D7D41: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D7D4B: ;
    if (CMP_G(MEM16(esi + 0x3C), 0)) goto loc_000D7CF4; /* jg: greater (signed >) */

loc_000D7D52: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000D7D54: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7D60
 * Original: 0x000D7D60 - 0x000D7D9A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D7D60: ;
    ecx = MEM32(esi + 0x2C);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_000D7D6F; /* je: equal / zero */

loc_000D7D67: ;
    SET_LO8(edx, MEM8(esi + 0x30));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_000D7D99; /* jne: not equal / not zero */

loc_000D7D6F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D7D99; /* jne: not equal / not zero */

loc_000D7D78: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D7D7F: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D7D99; /* jl: less (signed <) */

loc_000D7D86: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000D7D9A(); return; } /* je: equal / zero */

loc_000D7D93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D7D96: ;
    esp = esp + 4;

loc_000D7D99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7E00
 * Original: 0x000D7E00 - 0x000D7E32 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7E00(void)
{

loc_000D7E00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x144);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_000D7E14: ;
    eax = esi + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000D7E1F: ;
    ebx = esi;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_000D7E26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D7E2C: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7E40
 * Original: 0x000D7E40 - 0x000D7E5A (26 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000D7E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_000D7E5A(); return; } /* jne: not equal / not zero */

loc_000D7E53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D80B0
 * Original: 0x000D80B0 - 0x000D80D3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D80B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D80B0: ;
    ecx = MEM32(esp + 4);
    (void)0; /* cmp MEM8(ecx + 0x4C), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x140);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x144);
    if (CMP_GE(MEM8(ecx + 0x4C), 2)) { sub_000D80D3(); return; } /* jge: greater or equal (signed >=) */

loc_000D80C8: ;
    if (TEST_Z(MEM8(esi + 6), 1)) { sub_000D80D3(); return; } /* je: equal / zero */

loc_000D80CE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8240
 * Original: 0x000D8240 - 0x000D8277 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8240: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    ebx = MEM32(ebp + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x144);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x3C) = ebx;
    if (TEST_Z(ecx, ecx)) goto loc_000D826E; /* je: equal / zero */

loc_000D8263: ;
    SET_LO8(eax, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(eax), MEM8(edi + 4))) { sub_000D8277(); return; } /* je: equal / zero */

loc_000D826E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D86F0
 * Original: 0x000D86F0 - 0x000D8D1C (1580 bytes, 438 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D86F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D86F0: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_000D8D17; /* jle: less or equal (signed <=) */

loc_000D8702: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebx + 0x41));
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    edi = edi << 2;
    eax = MEM32(edi + ebx + 0x130);
    esi = esi + 5;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = edi;
    if (TEST_NZ(eax, eax)) goto loc_000D8749; /* jne: not equal / not zero */

loc_000D8725: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = esi + esi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000D8737: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + ebx + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_000D8D15; /* je: equal / zero */

loc_000D8749: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(edi + ebx + 0x130);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ecx--;
    ecx = ecx & esi;
    ecx = ecx + eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_000D8D14; /* je: equal / zero */

loc_000D876A: ;
    eax = MEM32(ebx + 0x140);
    edx = MEM32(ebx + 0x144);
    MEM32(esp + 0x18) = eax;
    (void)0; /* test MEM8(edx + 6), 2 - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(MEM8(edx + 6), 2)) goto loc_000D87C7; /* je: equal / zero */

loc_000D8784: ;
    SET_LO16(edx, ZX8(MEM8(edx + 0x5C)));
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4D);
    SET_LO8(ecx, 0); /* xor self */
    MEM16(esp + 0x20) = LO16(edx);

loc_000D8794: ;
    esi = MEM32(esp + 0x18);
    edx = eax + eax * 8;
    MEM8(esi + edx * 4 + 0x20) = LO8(ecx);
    edx = MEM32(esp + 0x1C);
    SET_LO8(ecx, LO8(ecx) + MEM8(edx + 0x5D));
    esi = ZX8(MEM8(ebx + 0x41));
    eax++;
    if (CMP_NE(eax, esi)) goto loc_000D87B1; /* jne: not equal / not zero */

loc_000D87AF: ;
    eax = 0; /* xor self */

loc_000D87B1: ;
    esi = MEM32(esp + 0x20);
    esi--;
    (void)0; /* test LO16(esi), LO16(esi) - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_000D87C7; /* je: equal / zero */

loc_000D87BF: ;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    if (CMP_NE(eax, esi)) goto loc_000D8794; /* jne: not equal / not zero */

loc_000D87C7: ;
    if (TEST_Z(MEM8(edx + 6), 4)) goto loc_000D8836; /* je: equal / zero */

loc_000D87CD: ;
    SET_LO16(eax, ZX8(MEM8(edx + 0x5E)));
    MEM16(esp + 0x20) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    SET_LO8(ecx, 0); /* xor self */
    eax--;
    MEM8(esp + 0x13) = LO8(ecx);
    if (((int32_t)eax >= 0)) goto loc_000D87F0; /* jns: not sign (positive) */

loc_000D87E4: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    /* nop */

loc_000D87F0: ;
    esi = MEM32(esp + 0x18);
    edx = eax + eax * 8;
    esi = esi + edx * 4 + 0x20;
    edx = ZX8(MEM8(esi));
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = MEM32(esp + 0x1C);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esi) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(ecx, LO8(ecx) + MEM8(edx + 0x5F));
    eax--;
    MEM8(esp + 0x13) = LO8(ecx);
    if (((int32_t)eax >= 0)) goto loc_000D8820; /* jns: not sign (positive) */

loc_000D881B: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_000D8820: ;
    edx = MEM32(esp + 0x20);
    edx--;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_000D8836; /* je: equal / zero */

loc_000D882E: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    if (CMP_NE(eax, edx)) goto loc_000D87F0; /* jne: not equal / not zero */

loc_000D8836: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_000D883D: ;
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(0x75BA4C));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000D88EA; /* jbe: below or equal (unsigned <=) */

loc_000D884E: ;
    esi = MEM32(0x75BA48);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_000D8883; /* jne: not equal / not zero */

loc_000D885B: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000D886C: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000D8874: ;
    ecx = MEM32(0x75BA48);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75BA48);

loc_000D8883: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000D88AF; /* jne: not equal / not zero */

loc_000D888A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_000D8892: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BA48);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000D88AF; /* jne: not equal / not zero */

loc_000D88A2: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BA48);

loc_000D88AF: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_000D88DC; /* jne: not equal / not zero */

loc_000D88B7: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_000D88D3; /* jne: not equal / not zero */

loc_000D88C1: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000D88CA: ;
    esi = MEM32(0x75BA48);
    esp = esp + 8;

loc_000D88D3: ;
    eax = MEM32(esi + 4);
    MEM32(esp + 0x14) = eax;
    goto loc_000D88F2;

loc_000D88DC: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_000D88E1: ;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    goto loc_000D88F2;

loc_000D88EA: ;
    MEM32(esp + 0x14) = 0;

loc_000D88F2: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    if (CMP_EQ(MEM32(esi + 0x3838), edx)) goto loc_000D8913; /* je: equal / zero */

loc_000D8902: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000D8907: ;
    eax = MEM32(esp + 0x14);
    ecx = esi;
    MEM32(ecx + 0x3838) = eax;

loc_000D8913: ;
    if (TEST_Z(MEM8(ebx + 0x3A), 2)) goto loc_000D8952; /* je: equal / zero */

loc_000D8919: ;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    esi--;
    MEM32(esp + 0x14) = esi;
    if (((int32_t)esi >= 0)) goto loc_000D892F; /* jns: not sign (positive) */

loc_000D8924: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;
    esi = eax;

loc_000D892F: ;
    ebx = ebx + 0x2C;
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = edx;
    edx = esi + esi * 8;
    MEM32(esp + 0x3C) = ecx;
    eax = eax + edx * 4;
    goto loc_000D8996;

loc_000D8952: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_000D895E; /* jns: not sign (positive) */

loc_000D8959: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_000D895E: ;
    ecx = eax + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_000D8972; /* jge: greater or equal (signed >=) */

loc_000D8969: ;
    ecx = ZX8(MEM8(ebx + 0x41));
    ecx--;
    MEM32(esp + 0x14) = ecx;

loc_000D8972: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;

loc_000D8996: ;
    SET_LO8(ecx, MEM8(eax + 0x21));
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    xmm4 = MEMF(eax + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    MEM8(esp + 0x12) = LO8(ecx);
    ecx = ZX8(MEM8(eax + 0x20));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = MEM32(esp + 0x18);
    xmm5 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(edi + 0x77148C); /* mulss */
    xmm5 = xmm5 * MEMF(edi + 0x77149C); /* mulss */
    eax = esi + esi * 8;
    xmm0 = MEMF(edx + eax * 4 + 0x18); /* movss */
    xmm1 = MEMF(edx + eax * 4 + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x77148C); /* mulss */
    xmm1 = xmm1 * MEMF(edi + 0x77149C); /* mulss */
    eax = edx + eax * 4;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x48) = edx;
    SET_LO8(edx, MEM8(eax + 0x21));
    MEM8(esp + 0x13) = LO8(edx);
    MEM32(esp + 0x44) = ebx;
    ebx = ZX8(MEM8(eax + 0x20));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    xmm3 = xmm2; /* movaps */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    xmm3 = xmm3 + xmm4; /* addss */
    edx = (int32_t)xmm3; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    eax = SX16(LO16(edx));
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = ZX8(MEM8(esp + 0x12));
    edx = edx << 6;
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm7; /* movss */
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 - xmm4; /* subss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEMF(ebp + 0x10) = xmm7; /* movss */
    edx = SX16(LO16(edx));
    MEMF(ebp + 4) = xmm6; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(ebp + 0xF) = LO8(ecx);
    MEMF(esp + 0x20) = xmm7; /* movss */
    xmm7 = MEMF(0x649204); /* movss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    eax = 0; /* xor self */
    MEM16(ebp + 0x18) = LO16(eax);
    xmm3 = xmm3 + xmm5; /* addss */
    edx = (int32_t)xmm3; /* cvttss2si */
    ebx = (uint32_t)((int32_t)ebx >> 8);
    ebp = ebp + 0x1C;
    edx = SX16(LO16(edx));
    MEMF(ebp) = xmm2; /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEMF(ebp + 0x10) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(ebp + 4) = xmm6; /* movss */
    MEMF(ebp + 0x14) = xmm2; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ecx);
    MEM16(ebp + 0x18) = LO16(eax);
    ebp = ebp + 0x1C;
    edi = ebp + -56;
    goto loc_000D8B10;

loc_000D8B03: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* nop */

loc_000D8B10: ;
    xmm5 = MEMF(esp + 0x40); /* movss */
    edx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    xmm4 = MEMF(esp + 0x48); /* movss */
    xmm6 = MEMF(0x649204); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 + xmm0; /* addss */
    eax = (int32_t)xmm2; /* cvttss2si */
    ecx = SX16(LO16(eax));
    eax = SX16(LO16(edx));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp) = xmm2; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 0x13));
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    ecx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(ebp + 4) = xmm2; /* movss */
    MEMF(ebp + 0x14) = xmm6; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ebx);
    xmm5 = xmm5 - xmm0; /* subss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm3; /* movss */
    eax = eax << 6;
    ebp = ebp + 0x1C;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -12) = xmm3; /* movss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(ecx));
    eax = 0; /* xor self */
    MEM16(ebp + -4) = LO16(eax);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4 = xmm4 + xmm1; /* addss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x1C);
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(ebp + 0x18) = LO16(eax);
    MEMF(ebp + 4) = xmm2; /* movss */
    MEMF(ebp + 0x10) = xmm3; /* movss */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ebx);
    ebp = ebp + 0x1C;
    PUSH32(esp, 0xFF);
    eax = ebp + -112;
    edi = edi + 0x1C;
    PUSH32(esp, eax);
    edi = edi + 0x1C;
    eax = 4;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000D8C03: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000D8C12: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000D8C21: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    if (CMP_BE(LO8(edx), MEM8(esp + 0x12))) goto loc_000D8C74; /* jbe: below or equal (unsigned <=) */

loc_000D8C2B: ;
    xmm1 = MEMF(ebp + -40); /* movss */
    xmm0 = MEMF(0x649130); /* movss */
    eax = MEM32(esp + 0x20);
    esi = edi;
    edi = ebp;
    ecx = 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x14);
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
    edi = eax;

loc_000D8C74: ;
    ecx = esi;
    esi--;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x14) = esi;
    if (((int32_t)esi >= 0)) goto loc_000D8C90; /* jns: not sign (positive) */

loc_000D8C81: ;
    eax = MEM32(esp + 0x50);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;
    esi = eax;

loc_000D8C90: ;
    eax = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x4D);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_000D8D14; /* je: equal / zero */

loc_000D8CA0: ;
    eax = MEM32(esp + 0x18);
    ecx = esi + esi * 8;
    xmm0 = MEMF(eax + ecx * 4 + 0x18); /* movss */
    eax = eax + ecx * 4;
    ecx = eax;
    ebx = MEM32(ecx);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = xmm0 * MEMF(ecx + 0x77148C); /* mulss */
    MEM32(esp + 0x44) = ebx;
    ebx = ZX8(MEM8(eax + 0x20));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x77149C); /* mulss */
    ecx = MEM32(esp + 0x30);
    MEM8(esp + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x21));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = MEM32(esp + 0x20);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_000D8B03; /* jne: not equal / not zero */

loc_000D8D14: ;
    POP32(esp, ebp);

loc_000D8D15: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D8D17: ;
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8D20
 * Original: 0x000D8D20 - 0x000D8DAD (141 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D8D20: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    PUSH32(esp, esi);
    if (TEST_NZ(edx, edx)) goto loc_000D8D58; /* jne: not equal / not zero */

loc_000D8D33: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    if (CMP_EQ(edx, MEM32(eax))) goto loc_000D8D45; /* je: equal / zero */

loc_000D8D3D: ;
    SET_LO8(edx, MEM8(esi + 4));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_000D8DAB; /* jne: not equal / not zero */

loc_000D8D45: ;
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) & 0xFD;
    MEM8(ecx + 0x50) = 0;
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(ecx, LO8(ecx) | 5);
    MEM8(eax + 6) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8D58: ;
    if (CMP_NE(edx, 6)) goto loc_000D8D7B; /* jne: not equal / not zero */

loc_000D8D5D: ;
    SET_LO8(edx, MEM8(eax + 0x4C));
    esi = MEM32(esp + 0xC);
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_000D8DAB; /* jne: not equal / not zero */

loc_000D8D68: ;
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) & 0xFD;
    MEM8(ecx + 0x50) = 0;
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(ecx, LO8(ecx) | 5);
    MEM8(eax + 6) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8D7B: ;
    if (CMP_EQ(edx, 7)) goto loc_000D8D33; /* je: equal / zero */

loc_000D8D80: ;
    if (CMP_NE(edx, 0x2D)) goto loc_000D8DAB; /* jne: not equal / not zero */

loc_000D8D85: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_000D8D9E; /* jne: not equal / not zero */

loc_000D8D91: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8D9E: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_000D8DAB; /* jne: not equal / not zero */

loc_000D8DA3: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_000D8DAB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8DB0
 * Original: 0x000D8DB0 - 0x000D8DCF (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000D8DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x3C8);
    if (TEST_NZ(ecx, ecx)) { sub_000D8DCF(); return; } /* jne: not equal / not zero */

loc_000D8DC8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8E50
 * Original: 0x000D8E50 - 0x000D8EDC (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8E50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D8E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_000D9010(); /* call 0x000D9010 */

loc_000D8E5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43960000);
    ecx = 3;
    eax = edi;
    PUSH32(esp, 0); sub_000D7E40(); /* call 0x000D7E40 */

loc_000D8E6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43960000);
    ecx = 4;
    eax = edi;
    PUSH32(esp, 0); sub_000D7E40(); /* call 0x000D7E40 */

loc_000D8E82: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2A);
    eax = 0x4C;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000D8E9E: ;
    esp = esp + 0x20;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000D8EDB; /* je: equal / zero */

loc_000D8EA6: ;
    xmm0 = MEMF(esp + 4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 6;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 3;
    ecx = 0; /* xor self */
    eax = eax + 0x3C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;

loc_000D8EDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8EE0
 * Original: 0x000D8EE0 - 0x000D8F7B (155 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8EE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D8EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x4C);
    edx = MEM32(eax + 0x64);
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_NZ(edx, edx)) goto loc_000D8EF3; /* jne: not equal / not zero */

loc_000D8EF1: ;
    SET_LO8(ecx, 1);

loc_000D8EF3: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x50))) goto loc_000D8F64; /* jne: not equal / not zero */

loc_000D8EFE: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000D8F64; /* jne: not equal / not zero */

loc_000D8F02: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_000D8F79; /* je: equal / zero */

loc_000D8F0C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x2C));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    edx = edx & 0xFFFFFF01u;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0); sub_000D7E40(); /* call 0x000D7E40 */

loc_000D8F2A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000D8F64; /* je: equal / zero */

loc_000D8F31: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ecx = MEM32(edi + 0x538);
    SET_LO8(edx, 0); /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_000D8F63; /* je: equal / zero */

loc_000D8F41: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000D8F59; /* jne: not equal / not zero */

loc_000D8F45: ;
    if (CMP_NE(MEM32(ecx + 0x2C), esi)) goto loc_000D8F4E; /* jne: not equal / not zero */

loc_000D8F4A: ;
    SET_LO8(edx, 1);
    goto loc_000D8F51;

loc_000D8F4E: ;
    ecx = MEM32(ecx + 0x30);

loc_000D8F51: ;
    if (TEST_NZ(ecx, ecx)) goto loc_000D8F41; /* jne: not equal / not zero */

loc_000D8F55: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000D8F63; /* je: equal / zero */

loc_000D8F59: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_000D8F60: ;
    esp = esp + 4;

loc_000D8F63: ;
    POP32(esp, edi);

loc_000D8F64: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);

loc_000D8F79: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8F80
 * Original: 0x000D8F80 - 0x000D8FBE (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D8F80: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_000D8F8D; /* je: equal / zero */

loc_000D8F88: ;
    if (CMP_NE(eax, 9)) goto loc_000D8FBD; /* jne: not equal / not zero */

loc_000D8F8D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D8FBD; /* jne: not equal / not zero */

loc_000D8F96: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D8FA2: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D8FBC; /* jl: less (signed <) */

loc_000D8FA9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000D8FBE(); return; } /* je: equal / zero */

loc_000D8FB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D8FB9: ;
    esp = esp + 4;

loc_000D8FBC: ;
    POP32(esp, esi);

loc_000D8FBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9010
 * Original: 0x000D9010 - 0x000D9055 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9010(void)
{

loc_000D9010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    eax = esp + 7;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM8(esp + 0x13) = 3;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000D9029: ;
    PUSH32(esp, 6);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM8(esp + 0x23) = 4;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000D9041: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000D9051: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9060
 * Original: 0x000D9060 - 0x000D90EA (138 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9060(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D9060: ;
    esp = esp - 0xC;
    PUSH32(esp, 0); sub_000D9010(); /* call 0x000D9010 */

loc_000D9068: ;
    eax = MEM32(0x8472B0);
    if (TEST_NZ(eax, eax)) goto loc_000D90E6; /* jne: not equal / not zero */

loc_000D9071: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    PUSH32(esp, esi);
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000D908F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000D90CD; /* je: equal / zero */

loc_000D9096: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 9;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 4;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;

loc_000D90CD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x8472B0) = eax;
    if (TEST_Z(eax, eax)) goto loc_000D90E5; /* je: equal / zero */

loc_000D90D6: ;
    ecx = MEM32(esp + 8);
    eax = eax + 0x4C;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = esi;

loc_000D90E5: ;
    POP32(esp, esi);

loc_000D90E6: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000D90F0
 * Original: 0x000D90F0 - 0x000D9166 (118 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D90F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000D90F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ecx = MEM32(edi + 0x64);
    SET_LO8(eax, 0); /* xor self */
    if (TEST_NZ(ecx, ecx)) goto loc_000D9104; /* jne: not equal / not zero */

loc_000D9102: ;
    SET_LO8(eax, 1);

loc_000D9104: ;
    SET_LO8(ecx, MEM8(edi + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x50))) goto loc_000D9144; /* jne: not equal / not zero */

loc_000D910F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D9144; /* jne: not equal / not zero */

loc_000D9113: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(0x7FA20C);
    eax = eax + edx;
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(MEM32(edi + 0xA4), 0x7C)) goto loc_000D9163; /* je: equal / zero */

loc_000D912A: ;
    if (CMP_LE(eax, 0xC8)) goto loc_000D9144; /* jle: less or equal (signed <=) */

loc_000D9131: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0); sub_000D8E50(); /* call 0x000D8E50 */

loc_000D9141: ;
    esp = esp + 8;

loc_000D9144: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEM32(0x8472B0) = 0;
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);

loc_000D9163: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9170
 * Original: 0x000D9170 - 0x000D920E (158 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9170(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D9170: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_000D91DE; /* jne: not equal / not zero */

loc_000D917D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x4C))) goto loc_000D9190; /* je: equal / zero */

loc_000D9188: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x50))) goto loc_000D920C; /* jne: not equal / not zero */

loc_000D9190: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D91D2; /* jne: not equal / not zero */

loc_000D9199: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000D91A0: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000D91D2; /* jl: less (signed <) */

loc_000D91A7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000D91C6; /* je: equal / zero */

loc_000D91B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D91B7: ;
    esp = esp + 4;
    MEM32(0x8472B0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D91C6: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000D91D2: ;
    MEM32(0x8472B0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D91DE: ;
    if (CMP_NE(eax, 0x2D)) goto loc_000D920C; /* jne: not equal / not zero */

loc_000D91E3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_000D91FE; /* jne: not equal / not zero */

loc_000D91F0: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x50) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D91FE: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_000D920C; /* jne: not equal / not zero */

loc_000D9203: ;
    MEM32(esi + 0x4C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x50) = LO8(eax);

loc_000D920C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9210
 * Original: 0x000D9210 - 0x000D9241 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_000D921F: ;
    esp = esp + 4;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000D922A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D9241(); return; } /* jne: not equal / not zero */

loc_000D9233: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D9250
 * Original: 0x000D9250 - 0x000D9273 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9250(void)
{

loc_000D9250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_000D925F: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000D9267: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D926D: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9280
 * Original: 0x000D9280 - 0x000D92AD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x3C;
    MEM32(0x8472B0) = 0;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000D9297: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000D92AD(); return; } /* jne: not equal / not zero */

loc_000D92A0: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000D92B0
 * Original: 0x000D92B0 - 0x000D92D2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D92B0(void)
{

loc_000D92B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x3C;
    MEM32(0x8472B0) = 0;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000D92C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000D92CD: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D92E0
 * Original: 0x000D92E0 - 0x000D9317 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D92E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D92E0: ;
    SET_LO8(eax, MEM8(0x862D90));
    esp = esp - 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D92F5; /* je: equal / zero */

loc_000D92EC: ;
    SET_LO8(eax, MEM8(0x864EBD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D92FE; /* je: equal / zero */

loc_000D92F5: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D9310; /* je: equal / zero */

loc_000D92FE: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D9310; /* jne: not equal / not zero */

loc_000D9307: ;
    PUSH32(esp, 0); sub_001F7760(); /* call 0x001F7760 */

loc_000D930C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000D9317(); return; } /* je: equal / zero */

loc_000D9310: ;
    MEM8(esp + 3) = 0;
    g_seh_ebp = ebp; sub_000D935E(); return; /* tail jmp 0x000D935E */

}

/**
 * sub_000D93F0
 * Original: 0x000D93F0 - 0x000D9449 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D93F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D93F0: ;
    SET_LO8(edx, MEM8(0x771758));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x59069C;
    edi = 0x7714E0;

loc_000D9402: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_000D9438; /* je: equal / zero */

loc_000D9407: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_000D9438; /* je: equal / zero */

loc_000D940D: ;
    ecx = SX8(LO8(edx));
    ecx = ecx * 4 + 0x771740;

loc_000D9417: ;
    edx = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ecx) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi), _icall_esp); /* indirect call */
    }

loc_000D941F: ;
    SET_LO8(edx, MEM8(0x771758));
    eax = SX8(LO8(edx));
    ecx = eax * 4 + 0x771740;
    eax = MEM32(ecx);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_000D9417; /* jne: not equal / not zero */

loc_000D9438: ;
    edi = edi + 4;
    esi = esi + 0x70;
    if (CMP_L(edi, 0x771734)) goto loc_000D9402; /* jl: less (signed <) */

loc_000D9446: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9450
 * Original: 0x000D9450 - 0x000D953E (238 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9450(void)
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

loc_000D9450: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x84A144);
    xmm4 = MEMF(0x648F68); /* movss */
    xmm5 = MEMF(0x648F6C); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648F64); /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    xmm3 = MEMF(0x648E6C); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    edx++;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x8470DC);
    if (CMP_LE(edx & edx, 0)) goto loc_000D951E; /* jle: less or equal (signed <=) */

loc_000D9495: ;
    esi = edi + 4;
    goto loc_000D94A0;

    /* nop */

loc_000D94A0: ;
    ecx = MEM32(esi);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm4 > xmm0)) goto loc_000D94B7; /* ja: above (unsigned >) */

loc_000D94B2: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_000D94BF; /* jbe: below or equal (unsigned <=) */

loc_000D94B7: ;
    MEMF(esp + 8) = xmm6; /* movss */
    goto loc_000D94EF;

loc_000D94BF: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000D94D3; /* jbe: below or equal (unsigned <=) */

loc_000D94C4: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_000D94C4; /* ja: above (unsigned >) */

loc_000D94CD: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_000D94D3: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 < xmm3)) goto loc_000D94EF; /* jb: below (unsigned <) */

loc_000D94D8: ;
    goto loc_000D94E0;

    /* nop */

loc_000D94E0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 >= xmm3)) goto loc_000D94E0; /* jae: above or equal (unsigned >=) */

loc_000D94E9: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_000D94EF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax++;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esi = esi + 0x770;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(eax * 4 + 0x771498) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(eax * 4 + 0x771488) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, edx)) goto loc_000D94A0; /* jl: less (signed <) */

loc_000D951E: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(eax + 0x5C); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm4 > xmm0)) goto loc_000D9536; /* ja: above (unsigned >) */

loc_000D9531: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) { sub_000D953E(); return; } /* jbe: below or equal (unsigned <=) */

loc_000D9536: ;
    MEMF(esp + 8) = xmm6; /* movss */
    g_seh_ebp = ebp; sub_000D9566(); return; /* tail jmp 0x000D9566 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000D95F0
 * Original: 0x000D95F0 - 0x000D97D9 (489 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D95F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D95F0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D9606: ;
    PUSH32(esp, 0x1B02);
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000D961A: ;
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(0x77182C) = 0x1B02;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000D962C: ;
    esi = 1;
    edx = esi;
    ecx = 0x40304;
    MEM32(0x771828) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D9643: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = esi;
    MEM32(0x771824) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D965B: ;
    PUSH32(esp, esi);
    MEM32(0x549AE8) = ebp;
    MEM32(0x771820) = ebp;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000D966D: ;
    MEM32(0x77181C) = esi;
    esi = 0x203;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D9684: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D969C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    esi = 0x302;
    edx = esi;
    ecx = 0x40344;
    MEM32(0x549AF8) = ebp;
    MEM32(0x771814) = ebp;
    MEM32(0x549B90) = ebp;
    MEM32(0x771810) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D96CF: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;
    esi = 0x303;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D96EC: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;
    esi = 0x10101;
    edx = esi;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D9709: ;
    PUSH32(esp, ebp);
    MEM32(0x549B04) = esi;
    MEM32(0x771804) = esi;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000D971B: ;
    esi = 0x207;
    edx = esi;
    ecx = 0x40364;
    MEM32(0x771800) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D9732: ;
    edx = 0; /* xor self */
    ecx = 0x40368;
    MEM32(0x549B10) = esi;
    MEM32(0x7717FC) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D974A: ;
    esi = 0x1E01;
    edx = esi;
    ecx = 0x40378;
    MEM32(0x549B14) = ebp;
    MEM32(0x7717F8) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000D9767: ;
    MEM32(0x549B0C) = esi;
    MEM32(0x7717F4) = esi;
    esi = 0xF88;
    eax = 0x771764;
    eax = eax - esi;
    MEM32(esp + 0x1C) = eax;
    eax = 0x7717E4;
    eax = eax - esi;
    MEM32(esp + 0x20) = eax;
    eax = 0x7717C4;
    eax = eax - esi;
    MEM32(esp + 0x24) = eax;
    eax = 0x7717B4;
    eax = eax - esi;
    MEM32(esp + 0x28) = eax;
    eax = 0x7717A4;
    eax = eax - esi;
    MEM32(esp + 0x2C) = eax;
    eax = 0x771784;
    eax = eax - esi;
    MEM32(esp + 0x30) = eax;
    eax = 0x771774;
    edi = 0x41B0C;
    eax = eax - esi;
    MEM32(esp + 0x10) = ebp;
    ebx = 0x547368;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x34) = eax;
    g_seh_ebp = ebp; sub_000D97E0(); return; /* tail jmp 0x000D97E0 */

}

/**
 * sub_000D9910
 * Original: 0x000D9910 - 0x000D9938 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9910: ;
    eax = ZX8(LO8(eax));
    eax--;
    if (CMP_A(eax, 3)) { sub_000D9938(); return; } /* ja: above (unsigned >) */

loc_000D9919: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD993C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000D9920u) goto loc_000D9920;
    if (_jt == 0x000D9926u) goto loc_000D9926;
    if (_jt == 0x000D992Cu) goto loc_000D992C;
    if (_jt == 0x000D9932u) goto loc_000D9932;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D9920: ;
    eax = MEM32(0x8472C0);
    esp += 4; return; /* ret */

loc_000D9926: ;
    eax = MEM32(0x8472C4);
    esp += 4; return; /* ret */

loc_000D992C: ;
    eax = MEM32(0x8472CC);
    esp += 4; return; /* ret */

loc_000D9932: ;
    eax = MEM32(0x8472C8);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9950
 * Original: 0x000D9950 - 0x000D9987 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9950: ;
    SET_LO8(eax, MEM8(0x862D90));
    esp = esp - 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D9965; /* je: equal / zero */

loc_000D995C: ;
    SET_LO8(eax, MEM8(0x864EBD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D996E; /* je: equal / zero */

loc_000D9965: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D9980; /* je: equal / zero */

loc_000D996E: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000D9980; /* jne: not equal / not zero */

loc_000D9977: ;
    PUSH32(esp, 0); sub_001F7760(); /* call 0x001F7760 */

loc_000D997C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000D9987(); return; } /* je: equal / zero */

loc_000D9980: ;
    MEM8(esp + 3) = 0;
    g_seh_ebp = ebp; sub_000D99CE(); return; /* tail jmp 0x000D99CE */

}

/**
 * sub_000D9B60
 * Original: 0x000D9B60 - 0x000D9C43 (227 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x41B0C;
    ebx = 0xF88;
    edi = edi;

loc_000D9B70: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(ebx + esi);
    if (TEST_Z(edi, edi)) goto loc_000D9B9B; /* je: equal / zero */

loc_000D9B7D: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    MEM32(edi + 8) = eax;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_000D9B9B; /* jne: not equal / not zero */

loc_000D9B96: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_000D9B9B: ;
    MEM32(ebx + esi) = 0;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000D9BB8; /* jb: below (unsigned <) */

loc_000D9BA9: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000D9BB8: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(ebx + esi + -3964) = 0x80000000u;
    esi = MEM32(0x5499F0);
    esi = esi | 0x4800;
    ebx = ebx + 4;
    ebp = ebp + 0x40;
    (void)0; /* cmp ebx, 0xF98 - flags set for next jcc */
    MEM32(0x5499F0) = esi;
    if (CMP_L(ebx, 0xF98)) goto loc_000D9B70; /* jl: less (signed <) */

loc_000D9BF5: ;
    eax = MEM32(0x547160);
    if (TEST_Z(eax, eax)) goto loc_000D9C28; /* je: equal / zero */

loc_000D9BFE: ;
    edx = MEM32(0x5499E8);
    ecx = MEM32(edx + 0x2C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x547160);
    ecx = MEM32(eax);
    ecx = ecx + 0xFFF80000u;
    edi = eax;
    MEM32(eax) = ecx;
    if (TEST_NZ(MEM32(edi), 0x78FFFF)) goto loc_000D9C28; /* jne: not equal / not zero */

loc_000D9C23: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_000D9C28: ;
    ecx = MEM32(0x547158);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    ecx = MEM32(0x5499F0);
    POP32(esp, ebx);
    if (CMP_NE(ecx, eax)) { sub_000D9C43(); return; } /* jne: not equal / not zero */

loc_000D9C3E: ;
    ecx = ecx | 0x40;
    g_seh_ebp = ebp; sub_000D9C46(); return; /* tail jmp 0x000D9C46 */

}

/**
 * sub_000D9C60
 * Original: 0x000D9C60 - 0x000D9CF4 (148 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9C60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xE25);
    esi = eax;
    PUSH32(esp, 0x5F371C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000D9C7A: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_000D9CEF; /* je: equal / zero */

loc_000D9C83: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = esi;
    ecx = ecx >> 2;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(edx + 4) = LO8(eax);
    eax = edx + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(edx + 5) = 1;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000D9CCE; /* je: equal / zero */

loc_000D9CA9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x5F59F4;
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM8(eax + 0x18) = 0;
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM8(eax + 4) = 0;

loc_000D9CCE: ;
    eax = MEM32(ebp * 4 + 0x7714E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_000D9CDF; /* je: equal / zero */

loc_000D9CDC: ;
    MEM32(eax + 8) = edx;

loc_000D9CDF: ;
    MEM32(edx) = ebp;
    MEM32(edx + 8) = 0;
    MEM32(ebp * 4 + 0x7714E0) = edx;

loc_000D9CEF: ;
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9D00
 * Original: 0x000D9D00 - 0x000D9D3E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9D00(void)
{
    int _flags = 0; /* fallback flag var */

loc_000D9D00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    eax = 0x44;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000D9D0D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000D9D3D; /* je: equal / zero */

loc_000D9D14: ;
    edx = MEM32(esi);
    ecx = eax + 0x2C;
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
    MEM8(eax + 0x3F) = 0xFF;

loc_000D9D3D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9D40
 * Original: 0x000D9D40 - 0x000D9D87 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9D40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000D9D5A; /* je: equal / zero */

loc_000D9D4C: ;
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x594930), _icall_esp); /* indirect call */
    }

loc_000D9D57: ;
    esp = esp + 4;

loc_000D9D5A: ;
    SET_LO8(ecx, MEM8(esi + 0x3E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) { sub_000D9D87(); return; } /* jle: less or equal (signed <=) */

loc_000D9D62: ;
    SET_LO8(eax, MEM8(esi + 0x3F));
    edx = ZX8(LO8(eax));
    edi = SX8(LO8(ecx));
    if (CMP_LE(edx, edi)) goto loc_000D9D76; /* jle: less or equal (signed <=) */

loc_000D9D6F: ;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(esi + 0x3F) = LO8(eax);
    g_seh_ebp = ebp; sub_000D9DC6(); return; /* tail jmp 0x000D9DC6 */

loc_000D9D76: ;
    eax = MEM32(esi + 0x2C);
    SET_LO16(ecx, ZX8(MEM8(eax + 4)));
    ecx = ecx << 8;
    MEM16(esi + 0x30) = LO16(ecx);
    g_seh_ebp = ebp; sub_000D9DC6(); return; /* tail jmp 0x000D9DC6 */

}

/**
 * sub_000D9EF0
 * Original: 0x000D9EF0 - 0x000DA0D5 (485 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9EF0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x7FA20C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x54));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 0x7FFF - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_EQ(LO16(eax), 0x7FFF)) goto loc_000D9F25; /* je: equal / zero */

loc_000D9F11: ;
    eax = eax - edx;
    (void)0; /* cmp LO16(eax), LO16(ebx) - flags set for next jcc */
    MEM16(esi + 0x54) = LO16(eax);
    if (CMP_GE(LO16(eax), LO16(ebx))) goto loc_000D9F25; /* jge: greater or equal (signed >=) */

loc_000D9F1C: ;
    MEM16(esi + 0x54) = LO16(ebx);
    MEM8(esp + 0x13) = 1;

loc_000D9F25: ;
    SET_LO8(ecx, MEM8(esi + 0x56));
    if (CMP_LE(LO8(ecx), LO8(ebx))) goto loc_000D9F49; /* jle: less or equal (signed <=) */

loc_000D9F2C: ;
    SET_LO8(eax, MEM8(esi + 0x5B));
    edi = ZX8(LO8(eax));
    ebp = SX8(LO8(ecx));
    if (CMP_LE(edi, ebp)) goto loc_000D9F40; /* jle: less or equal (signed <=) */

loc_000D9F39: ;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(esi + 0x5B) = LO8(eax);
    goto loc_000D9F49;

loc_000D9F40: ;
    MEM16(esi + 0x54) = LO16(ebx);
    MEM8(esp + 0x13) = 1;

loc_000D9F49: ;
    SET_LO8(eax, MEM8(esi + 0x4B));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000D9F6A; /* je: equal / zero */

loc_000D9F50: ;
    eax = SX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x5948D8);
    if (CMP_EQ(eax, ebx)) goto loc_000D9F6A; /* je: equal / zero */

loc_000D9F5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000D9F61: ;
    edx = MEM32(0x7FA20C);
    esp = esp + 4;

loc_000D9F6A: ;
    if (CMP_EQ(MEM16(esi + 0x54), LO16(ebx))) goto loc_000DA091; /* je: equal / zero */

loc_000D9F74: ;
    SET_LO16(ecx, MEM16(esi + 0x4E));
    MEM16(esi + 0x4C) = MEM16(esi + 0x4C) + LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x4C));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    edi = ZX8(MEM8(esi + 0x4A));
    ecx = SX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax << 8;
    eax = eax | edi;
    eax = eax + ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM16(esi + 0x3E) = LO16(ecx);
    ecx = ZX8(MEM8(esi + 0x48));
    MEM8(esi + 0x4A) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    eax = eax << 8;
    eax = eax | ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x42);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax + ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esi + 0x48) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    MEM16(esi + 0x3C) = LO16(ecx);
    ecx = ZX8(MEM8(esi + 0x49));
    eax = eax << 8;
    eax = eax | ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax + ecx;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 0x3A));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    (void)0; /* cmp LO16(edi), LO16(ebx) - flags set for next jcc */
    MEM16(esi + 0x40) = LO16(ecx);
    MEM8(esi + 0x49) = LO8(eax);
    if (CMP_EQ(LO16(edi), LO16(ebx))) goto loc_000DA08B; /* je: equal / zero */

loc_000D9FF4: ;
    eax = MEM32(esi + 0x2C);
    ecx = ZX8(MEM8(eax + 4));
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    MEM16(esi + 0x38) = MEM16(esi + 0x38) + LO16(eax);
    SET_LO16(ebp, MEM16(esi + 0x38));
    ecx = ecx << 8;
    eax = LO16(ebp);
    ecx--;
    if (CMP_LE(eax, ecx)) goto loc_000DA051; /* jle: less or equal (signed <=) */

loc_000DA013: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    if (TEST_Z(LO8(edx), 0x20)) goto loc_000DA022; /* je: equal / zero */

loc_000DA01C: ;
    MEM16(esi + 0x54) = LO16(ebx);
    goto loc_000DA091;

loc_000DA022: ;
    edx = edx | 0x80;
    (void)0; /* test LO8(edx), 2 - flags set for next jcc */
    MEM16(esi + 0x60) = LO16(edx);
    if (TEST_Z(LO8(edx), 2)) goto loc_000DA042; /* je: equal / zero */

loc_000DA031: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ecx - edx;
    edi = (uint32_t)(-(int32_t)edi);
    MEM16(esi + 0x38) = LO16(ecx);
    MEM16(esi + 0x3A) = LO16(edi);
    goto loc_000DA08B;

loc_000DA042: ;
    ebp = ebp - ecx;
    edx = LO16(ebp);
    if (CMP_G(edx, ecx)) goto loc_000DA042; /* jg: greater (signed >) */

loc_000DA04B: ;
    MEM16(esi + 0x38) = LO16(ebp);
    goto loc_000DA08B;

loc_000DA051: ;
    if (CMP_GE(LO16(ebp), LO16(ebx))) goto loc_000DA08B; /* jge: greater or equal (signed >=) */

loc_000DA056: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000DA065; /* je: equal / zero */

loc_000DA05F: ;
    MEM16(esi + 0x54) = LO16(ebx);
    goto loc_000DA091;

loc_000DA065: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_000DA07B; /* je: equal / zero */

loc_000DA06A: ;
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = (uint32_t)(-(int32_t)edi);
    MEM16(esi + 0x3A) = LO16(edi);
    MEM16(esi + 0x38) = LO16(edx);
    goto loc_000DA08B;

loc_000DA07B: ;
    eax = ebp;
    /* nop */

loc_000DA080: ;
    eax = eax + ecx;
    if (CMP_L(LO16(eax), LO16(ebx))) goto loc_000DA080; /* jl: less (signed <) */

loc_000DA087: ;
    MEM16(esi + 0x38) = LO16(eax);

loc_000DA08B: ;
    if (CMP_EQ(MEM8(esp + 0x13), LO8(ebx))) goto loc_000DA0CF; /* je: equal / zero */

loc_000DA091: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000DA0A6; /* je: equal / zero */

loc_000DA098: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x594930), _icall_esp); /* indirect call */
    }

loc_000DA0A3: ;
    esp = esp + 4;

loc_000DA0A6: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_000DA0CF; /* jne: not equal / not zero */

loc_000DA0AE: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DA0B5: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DA0CF; /* jl: less (signed <) */

loc_000DA0BC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) { sub_000DA0D5(); return; } /* je: equal / zero */

loc_000DA0C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DA0CC: ;
    esp = esp + 4;

loc_000DA0CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA2D0
 * Original: 0x000DA2D0 - 0x000DA392 (194 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA2D0: ;
    eax = ZX8(MEM8(esi + 0x10C));
    ecx = MEM32(eax * 4 + 0x594960);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    esp = esp - 0xC;
    if (TEST_NZ(ecx, ecx)) goto loc_000DA300; /* jne: not equal / not zero */

loc_000DA2EA: ;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax + 4;
    if (TEST_NZ(edx, edx)) goto loc_000DA300; /* jne: not equal / not zero */

loc_000DA2F4: ;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000DA2FD: ;
    esp = esp + 8;

loc_000DA300: ;
    eax = ZX8(MEM8(esi + 0x10C));
    ecx = MEM32(eax * 4 + 0x594960);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0xC));
    eax = ZX16(MEM16(eax + 0xE));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = eax + 0x100;
    edx = 0x2000;
    edi = ecx + 0x100;
    ebp = ebp << 5;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = edx;
    edi = edi << 5;
    eax = esi + 0xC;
    MEM32(esp + 8) = 2;
    /* nop */

loc_000DA350: ;
    ecx = 4;

loc_000DA355: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x20));
    MEM16(eax + 0xC) = 0;
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = LO8(ebx);
    eax = eax + 0x1C;
    ecx--;
    if ((ecx != 0)) goto loc_000DA355; /* jne: not equal / not zero */

loc_000DA378: ;
    MEM32(esp + 8) = MEM32(esp + 8) - 1;
    if ((MEM32(esp + 8) != 0)) goto loc_000DA350; /* jne: not equal / not zero */

loc_000DA37E: ;
    SET_LO16(eax, MEM16(esi + 0xF8));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) { sub_000DA392(); return; } /* jns: not sign (positive) */

loc_000DA389: ;
    ecx = ebp;
    ebp = 0x2000;
    g_seh_ebp = ebp; sub_000DA396(); return; /* tail jmp 0x000DA396 */

}

/**
 * sub_000DA450
 * Original: 0x000DA450 - 0x000DA584 (308 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 0x116));
    if (TEST_Z(LO16(edi), LO16(edi))) goto loc_000DA52F; /* je: equal / zero */

loc_000DA466: ;
    eax = ZX8(MEM8(esi + 0x138));
    ecx = MEM32(eax * 4 + 0x594960);
    ecx = ZX8(MEM8(ecx + 4));
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x7FA20C));
    MEM16(esi + 0x114) = MEM16(esi + 0x114) + LO16(edx);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esi + 0x114));
    ecx = ecx << 8;
    eax = LO16(ebp);
    ecx--;
    if (CMP_LE(eax, ecx)) goto loc_000DA4E2; /* jle: less or equal (signed <=) */

loc_000DA49B: ;
    SET_LO16(edx, MEM16(esi + 0x124));
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000DA4BE; /* je: equal / zero */

loc_000DA4A7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ecx - edx;
    edi = (uint32_t)(-(int32_t)edi);
    MEM16(esi + 0x114) = LO16(ecx);
    MEM16(esi + 0x116) = LO16(edi);
    goto loc_000DA52E;

loc_000DA4BE: ;
    if (TEST_Z(LO8(edx), 4)) goto loc_000DA4D0; /* je: equal / zero */

loc_000DA4C3: ;
    MEM16(esi + 0x114) = 0xFFFF;
    goto loc_000DA52E;

    edi = edi;

loc_000DA4D0: ;
    ebp = ebp - ecx;
    eax = LO16(ebp);
    if (CMP_G(eax, ecx)) goto loc_000DA4D0; /* jg: greater (signed >) */

loc_000DA4D9: ;
    MEM16(esi + 0x114) = LO16(ebp);
    goto loc_000DA52E;

loc_000DA4E2: ;
    if (CMP_GE(LO16(ebp) & LO16(ebp), 0)) goto loc_000DA52E; /* jge: greater or equal (signed >=) */

loc_000DA4E7: ;
    SET_LO16(edx, MEM16(esi + 0x124));
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000DA50A; /* je: equal / zero */

loc_000DA4F3: ;
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = (uint32_t)(-(int32_t)edi);
    MEM16(esi + 0x116) = LO16(edi);
    MEM16(esi + 0x114) = LO16(edx);
    goto loc_000DA52E;

loc_000DA50A: ;
    if (TEST_Z(LO8(edx), 4)) goto loc_000DA51A; /* je: equal / zero */

loc_000DA50F: ;
    MEM16(esi + 0x114) = 0xFFFF;
    goto loc_000DA52E;

loc_000DA51A: ;
    eax = ebp;
    /* nop */

loc_000DA520: ;
    eax = eax + ecx;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_000DA520; /* jl: less (signed <) */

loc_000DA527: ;
    MEM16(esi + 0x114) = LO16(eax);

loc_000DA52E: ;
    POP32(esp, ebp);

loc_000DA52F: ;
    SET_LO8(eax, MEM8(esi + 0x140));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000DA54D; /* je: equal / zero */

loc_000DA539: ;
    ecx = SX8(LO8(eax));
    eax = MEM32(ecx * 4 + 0x5948D8);
    if (TEST_Z(eax, eax)) goto loc_000DA54D; /* je: equal / zero */

loc_000DA547: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DA54A: ;
    esp = esp + 4;

loc_000DA54D: ;
    if (CMP_NE(MEM16(esi + 0x114), 0xFFFFFFFFu)) goto loc_000DA581; /* jne: not equal / not zero */

loc_000DA557: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DA581; /* jne: not equal / not zero */

loc_000DA560: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DA567: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DA581; /* jl: less (signed <) */

loc_000DA56E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000DA584(); return; } /* je: equal / zero */

loc_000DA57B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DA57E: ;
    esp = esp + 4;

loc_000DA581: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA5B0
 * Original: 0x000DA5B0 - 0x000DA5E0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DA5B0: ;
    ecx = MEM32(eax);
    if (CMP_NE(eax, MEM32(ecx * 4 + 0x7714E0))) goto loc_000DA5C5; /* jne: not equal / not zero */

loc_000DA5BB: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx * 4 + 0x7714E0) = edx;

loc_000DA5C5: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_000DA5D2; /* je: equal / zero */

loc_000DA5CC: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_000DA5D2: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000DA5DF; /* je: equal / zero */

loc_000DA5D9: ;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;

loc_000DA5DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA5E0
 * Original: 0x000DA5E0 - 0x000DA633 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA5E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DA5E0: ;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    if (CMP_NE(eax, MEM32(ecx * 4 + 0x7714E0))) goto loc_000DA5F6; /* jne: not equal / not zero */

loc_000DA5EC: ;
    esi = MEM32(eax + 0xC);
    MEM32(ecx * 4 + 0x7714E0) = esi;

loc_000DA5F6: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_000DA603; /* je: equal / zero */

loc_000DA5FD: ;
    esi = MEM32(eax + 8);
    MEM32(ecx + 8) = esi;

loc_000DA603: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000DA610; /* je: equal / zero */

loc_000DA60A: ;
    esi = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = esi;

loc_000DA610: ;
    ecx = MEM32(edx * 4 + 0x7714E0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_000DA622; /* je: equal / zero */

loc_000DA61F: ;
    MEM32(ecx + 8) = eax;

loc_000DA622: ;
    MEM32(eax) = edx;
    MEM32(eax + 8) = 0;
    MEM32(edx * 4 + 0x7714E0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA640
 * Original: 0x000DA640 - 0x000DA6B5 (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA640(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DA640: ;
    eax = MEM32(edx * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_000DA6B4; /* je: equal / zero */

loc_000DA64B: ;
    PUSH32(esp, edi);
    /* nop */

loc_000DA650: ;
    eax = MEM32(edx * 4 + 0x7714E0);
    ecx = MEM32(eax);
    if (CMP_NE(eax, MEM32(ecx * 4 + 0x7714E0))) goto loc_000DA66C; /* jne: not equal / not zero */

loc_000DA662: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx * 4 + 0x7714E0) = edi;

loc_000DA66C: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_000DA679; /* je: equal / zero */

loc_000DA673: ;
    edi = MEM32(eax + 8);
    MEM32(ecx + 8) = edi;

loc_000DA679: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000DA686; /* je: equal / zero */

loc_000DA680: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edi;

loc_000DA686: ;
    ecx = MEM32(0x7714E4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_000DA696; /* je: equal / zero */

loc_000DA693: ;
    MEM32(ecx + 8) = eax;

loc_000DA696: ;
    MEM32(eax) = 1;
    MEM32(eax + 8) = 0;
    MEM32(0x7714E4) = eax;
    eax = MEM32(edx * 4 + 0x7714E0);
    if (TEST_NZ(eax, eax)) goto loc_000DA650; /* jne: not equal / not zero */

loc_000DA6B3: ;
    POP32(esp, edi);

loc_000DA6B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA6C0
 * Original: 0x000DA6C0 - 0x000DA6E8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DA6C0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x30));
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_000DA6E8(); return; } /* je: equal / zero */

loc_000DA6CF: ;
    ecx--;
    MEM16(eax + 0x30) = 0;
    edx = MEM32(eax + 0x30);
    ecx = ZX16(LO16(ecx));
    edx = edx | ecx;
    MEM16(eax + 0x54) = 0x1E;
    MEM32(eax + 0x30) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA710
 * Original: 0x000DA710 - 0x000DA72C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA710: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x104));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000DA72C(); return; } /* je: equal / zero */

loc_000DA71E: ;
    eax = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x594930)); return; /* indirect tail jmp */

}

/**
 * sub_000DA730
 * Original: 0x000DA730 - 0x000DA7B1 (129 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA730(void)
{
    float xmm1;

loc_000DA730: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xB8);
    ecx = MEM32(edi + 0xB4);
    edx = MEM32(edi + 0xB0);
    xmm1 = MEMF(edi + 0xC4); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xE8);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xE4);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xE0);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xBC);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, eax);
    edx = edx << 6;
    PUSH32(esp, ecx);
    esi = edx + edi + 0x30;
    PUSH32(esp, 0); sub_0029C650(); /* call 0x0029C650 */

loc_000DA789: ;
    SET_LO16(eax, ZX8(MEM8(edi + 0x105)));
    esp = esp + 0x20;
    MEM16(0x7714C4) = LO16(eax);
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM16(0x7714C8) = LO16(eax);
    MEM16(0x7714CC) = LO16(eax);
    MEM16(0x7714D0) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA7C0
 * Original: 0x000DA7C0 - 0x000DA852 (146 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA7C0: ;
    if (CMP_A(edx, 9)) goto loc_000DA851; /* ja: above (unsigned >) */

loc_000DA7C9: ;
    { uint32_t _jt = MEM32(edx * 4 + 0xDA854); /* switch: 10 entries, 10 targets */
    if (_jt == 0x000DA7D0u) goto loc_000DA7D0;
    if (_jt == 0x000DA7DDu) goto loc_000DA7DD;
    if (_jt == 0x000DA7EAu) goto loc_000DA7EA;
    if (_jt == 0x000DA7F7u) goto loc_000DA7F7;
    if (_jt == 0x000DA804u) goto loc_000DA804;
    if (_jt == 0x000DA811u) goto loc_000DA811;
    if (_jt == 0x000DA81Eu) goto loc_000DA81E;
    if (_jt == 0x000DA82Bu) goto loc_000DA82B;
    if (_jt == 0x000DA838u) goto loc_000DA838;
    if (_jt == 0x000DA845u) goto loc_000DA845;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DA7D0: ;
    MEM32(ecx) = 1;
    MEM32(eax) = 0x58;
    esp += 4; return; /* ret */

loc_000DA7DD: ;
    MEM32(ecx) = 0x59;
    MEM32(eax) = 0x68;
    esp += 4; return; /* ret */

loc_000DA7EA: ;
    MEM32(ecx) = 0x69;
    MEM32(eax) = 0x77;
    esp += 4; return; /* ret */

loc_000DA7F7: ;
    MEM32(ecx) = 0x78;
    MEM32(eax) = 0x7E;
    esp += 4; return; /* ret */

loc_000DA804: ;
    MEM32(ecx) = 0x7F;
    MEM32(eax) = 0x81;
    esp += 4; return; /* ret */

loc_000DA811: ;
    MEM32(ecx) = 0x82;
    MEM32(eax) = 0x88;
    esp += 4; return; /* ret */

loc_000DA81E: ;
    MEM32(ecx) = 0x89;
    MEM32(eax) = 0x8C;
    esp += 4; return; /* ret */

loc_000DA82B: ;
    MEM32(ecx) = 0x8D;
    MEM32(eax) = 0x8F;
    esp += 4; return; /* ret */

loc_000DA838: ;
    MEM32(ecx) = 0x90;
    MEM32(eax) = 0x92;
    esp += 4; return; /* ret */

loc_000DA845: ;
    MEM32(ecx) = 0x93;
    MEM32(eax) = 0x95;

loc_000DA851: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA880
 * Original: 0x000DA880 - 0x000DAA57 (471 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA880: ;
    ecx = MEM32(esp + 4);
    esp = esp - 8;
    if (CMP_LE(eax, ecx)) goto loc_000DA895; /* jle: less or equal (signed <=) */

loc_000DA88B: ;
    eax = eax ^ ecx;
    ecx = ecx ^ eax;
    MEM32(esp + 0xC) = ecx;
    eax = eax ^ ecx;

loc_000DA895: ;
    if (CMP_GE(eax, 2)) goto loc_000DA89F; /* jge: greater or equal (signed >=) */

loc_000DA89A: ;
    eax = 2;

loc_000DA89F: ;
    if (CMP_LE(ecx, 0x98)) goto loc_000DA8AF; /* jle: less or equal (signed <=) */

loc_000DA8A7: ;
    MEM32(esp + 0xC) = 0x98;

loc_000DA8AF: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(ecx, 0xF)) goto loc_000DA8C2; /* je: equal / zero */

loc_000DA8B8: ;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    MEM8(esp + 3) = 0;
    if (CMP_NE(ecx, 0x10)) goto loc_000DA8C7; /* jne: not equal / not zero */

loc_000DA8C2: ;
    MEM8(esp + 3) = 1;

loc_000DA8C7: ;
    (void)0; /* cmp eax, MEM32(esp + 0xC) - flags set for next jcc */
    ecx = eax;
    MEM8(0x8472BC) = 1;
    MEM32(esp + 4) = ecx;
    if (CMP_GE(eax, MEM32(esp + 0xC))) goto loc_000DAA53; /* jge: greater or equal (signed >=) */

loc_000DA8DE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = eax + 0x5906B0;
    PUSH32(esp, edi);
    ebp = eax;

loc_000DA8F2: ;
    SET_LO8(eax, MEM8(0x8472BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DAA4F; /* je: equal / zero */

loc_000DA8FF: ;
    if (CMP_EQ(MEM32(ebp), 0)) goto loc_000DA9B5; /* je: equal / zero */

loc_000DA909: ;
    esi = MEM32(ecx * 4 + 0x7714E0);
    if (TEST_Z(esi, esi)) goto loc_000DAA37; /* je: equal / zero */

loc_000DA918: ;
    goto loc_000DA920;

    /* nop */

loc_000DA920: ;
    SET_LO8(eax, MEM8(0x8472BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DAA37; /* je: equal / zero */

loc_000DA92D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DA98F; /* je: equal / zero */

loc_000DA938: ;
    ecx = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(esi + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx))) goto loc_000DA98F; /* jne: not equal / not zero */

loc_000DA943: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DA98F; /* jne: not equal / not zero */

loc_000DA94C: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000DA967; /* jle: less or equal (signed <=) */

loc_000DA950: ;
    eax = 0x771740;
    ecx = ZX8(LO8(ebx));

loc_000DA958: ;
    if (CMP_NE(MEM32(eax), esi)) goto loc_000DA961; /* jne: not equal / not zero */

loc_000DA95C: ;
    edx = MEM32(esi + 0xC);
    MEM32(eax) = edx;

loc_000DA961: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_000DA958; /* jne: not equal / not zero */

loc_000DA967: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DA98F; /* jl: less (signed <) */

loc_000DA96E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000DA983; /* je: equal / zero */

loc_000DA97B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DA97E: ;
    esp = esp + 4;
    goto loc_000DA98F;

loc_000DA983: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000DA98F: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp), _icall_esp); /* indirect call */
    }

loc_000DA99D: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_000DA920; /* jne: not equal / not zero */

loc_000DA9B0: ;
    goto loc_000DAA37;

loc_000DA9B5: ;
    eax = MEM32(ecx * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_000DAA37; /* je: equal / zero */

loc_000DA9C0: ;
    SET_LO8(ecx, MEM8(0x8472BC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000DAA37; /* je: equal / zero */

loc_000DA9CA: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000DAA31; /* je: equal / zero */

loc_000DA9D5: ;
    SET_LO8(edx, MEM8(eax + 4));
    ecx = MEM32(esp + 0x20);
    if (CMP_NE(LO8(edx), MEM8(ecx))) goto loc_000DAA31; /* jne: not equal / not zero */

loc_000DA9E0: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000DAA31; /* jne: not equal / not zero */

loc_000DA9EA: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000DAA05; /* jle: less or equal (signed <=) */

loc_000DA9EE: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));

loc_000DA9F6: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_000DA9FF; /* jne: not equal / not zero */

loc_000DA9FA: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_000DA9FF: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000DA9F6; /* jne: not equal / not zero */

loc_000DAA05: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000DAA31; /* jl: less (signed <) */

loc_000DAA0C: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_000DAA27; /* je: equal / zero */

loc_000DAA19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000DAA1C: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_000DAA31;

loc_000DAA27: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000DAA31: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_000DA9C0; /* jne: not equal / not zero */

loc_000DAA37: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ecx++;
    ebp = ebp + 0x70;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, eax)) goto loc_000DA8F2; /* jl: less (signed <) */

loc_000DAA4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000DAA53: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAA60
 * Original: 0x000DAA60 - 0x000DAC31 (465 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAA60: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 8;
    (void)0; /* cmp eax, 0xF - flags set for next jcc */
    MEM8(0x8472BC) = 1;
    if (CMP_EQ(eax, 0xF)) goto loc_000DAA7D; /* je: equal / zero */

loc_000DAA73: ;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    MEM8(esp + 3) = 0;
    if (CMP_NE(eax, 0x10)) goto loc_000DAA82; /* jne: not equal / not zero */

loc_000DAA7D: ;
    MEM8(esp + 3) = 1;

loc_000DAA82: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_000DAC2D; /* jle: less or equal (signed <=) */

loc_000DAA96: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_000DAAB0;

    /* nop */
    /* nop */

loc_000DAAB0: ;
    SET_LO8(eax, MEM8(0x8472BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DAC29; /* je: equal / zero */

loc_000DAABD: ;
    eax = MEM32(ebp);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = MEM32(ecx + 0x5906B0);
    if (TEST_Z(edx, edx)) goto loc_000DAB86; /* je: equal / zero */

loc_000DAAD3: ;
    esi = MEM32(eax * 4 + 0x7714E0);
    if (TEST_Z(esi, esi)) goto loc_000DAC11; /* je: equal / zero */

loc_000DAAE2: ;
    SET_LO8(eax, MEM8(0x8472BC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DAC11; /* je: equal / zero */

loc_000DAAEF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DAB57; /* je: equal / zero */

loc_000DAAFA: ;
    eax = MEM32(esp + 0x24);
    SET_LO8(edx, MEM8(esi + 4));
    if (CMP_NE(LO8(edx), MEM8(eax))) goto loc_000DAB57; /* jne: not equal / not zero */

loc_000DAB05: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DAB57; /* jne: not equal / not zero */

loc_000DAB0E: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000DAB2F; /* jle: less or equal (signed <=) */

loc_000DAB12: ;
    eax = 0x771740;
    ecx = ZX8(LO8(ebx));
    /* nop */

loc_000DAB20: ;
    if (CMP_NE(MEM32(eax), esi)) goto loc_000DAB29; /* jne: not equal / not zero */

loc_000DAB24: ;
    edx = MEM32(esi + 0xC);
    MEM32(eax) = edx;

loc_000DAB29: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_000DAB20; /* jne: not equal / not zero */

loc_000DAB2F: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DAB57; /* jl: less (signed <) */

loc_000DAB36: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000DAB4B; /* je: equal / zero */

loc_000DAB43: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DAB46: ;
    esp = esp + 4;
    goto loc_000DAB57;

loc_000DAB4B: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000DAB57: ;
    eax = MEM32(ebp);
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x5906B0), _icall_esp); /* indirect call */
    }

loc_000DAB6E: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_000DAAE2; /* jne: not equal / not zero */

loc_000DAB81: ;
    goto loc_000DAC11;

loc_000DAB86: ;
    eax = MEM32(eax * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_000DAC11; /* je: equal / zero */

loc_000DAB95: ;
    SET_LO8(ecx, MEM8(0x8472BC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000DAC11; /* je: equal / zero */

loc_000DAB9F: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000DAC0B; /* je: equal / zero */

loc_000DABAA: ;
    SET_LO8(ecx, MEM8(eax + 4));
    edx = MEM32(esp + 0x24);
    if (CMP_NE(LO8(ecx), MEM8(edx))) goto loc_000DAC0B; /* jne: not equal / not zero */

loc_000DABB5: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000DAC0B; /* jne: not equal / not zero */

loc_000DABBF: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000DABDF; /* jle: less or equal (signed <=) */

loc_000DABC3: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    goto loc_000DABD0;

    /* nop */

loc_000DABD0: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_000DABD9; /* jne: not equal / not zero */

loc_000DABD4: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_000DABD9: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000DABD0; /* jne: not equal / not zero */

loc_000DABDF: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000DAC0B; /* jl: less (signed <) */

loc_000DABE6: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_000DAC01; /* je: equal / zero */

loc_000DABF3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000DABF6: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_000DAC0B;

loc_000DAC01: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000DAC0B: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_000DAB95; /* jne: not equal / not zero */

loc_000DAC11: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax++;
    ebp = ebp + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_000DAAB0; /* jl: less (signed <) */

loc_000DAC29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000DAC2D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAC40
 * Original: 0x000DAC40 - 0x000DAC5B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAC40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAC40: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x8472BC) = 1;
    if (CMP_GE(eax, 2)) { sub_000DAC5B(); return; } /* jge: greater or equal (signed >=) */

loc_000DAC54: ;
    eax = 2;
    g_seh_ebp = ebp; sub_000DAC67(); return; /* tail jmp 0x000DAC67 */

}

/**
 * sub_000DAD80
 * Original: 0x000DAD80 - 0x000DAD88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAD80(void)
{

loc_000DAD80: ;
    MEM8(0x80174C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAD90
 * Original: 0x000DAD90 - 0x000DADC1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAD90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DAD90: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DADC0; /* jne: not equal / not zero */

loc_000DAD99: ;
    SET_LO8(ecx, MEM8(0x771758));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_000DADC0; /* jle: less or equal (signed <=) */

loc_000DADA3: ;
    eax = 0x771740;
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    /* nop */

loc_000DADB0: ;
    if (CMP_NE(MEM32(eax), edx)) goto loc_000DADB9; /* jne: not equal / not zero */

loc_000DADB4: ;
    esi = MEM32(edx + 0xC);
    MEM32(eax) = esi;

loc_000DADB9: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_000DADB0; /* jne: not equal / not zero */

loc_000DADBF: ;
    POP32(esp, esi);

loc_000DADC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DADD0
 * Original: 0x000DADD0 - 0x000DADFB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DADD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DADD0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DADFA; /* jne: not equal / not zero */

loc_000DADD9: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DADE0: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DADFA; /* jl: less (signed <) */

loc_000DADE7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000DADFB(); return; } /* je: equal / zero */

loc_000DADF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DADF7: ;
    esp = esp + 4;

loc_000DADFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAE40
 * Original: 0x000DAE40 - 0x000DAE91 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAE40(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DAE40: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DAE90; /* jne: not equal / not zero */

loc_000DAE49: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (CMP_NE(eax, MEM32(ecx * 4 + 0x7714E0))) goto loc_000DAE62; /* jne: not equal / not zero */

loc_000DAE58: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx * 4 + 0x7714E0) = edx;

loc_000DAE62: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_000DAE6F; /* je: equal / zero */

loc_000DAE69: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_000DAE6F: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000DAE7C; /* je: equal / zero */

loc_000DAE76: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_000DAE7C: ;
    ecx = eax + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000DAE85: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000DAE8F: ;
    POP32(esp, ecx);

loc_000DAE90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAEA0
 * Original: 0x000DAEA0 - 0x000DAF16 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAEA0: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(edx, edx)) goto loc_000DAEEF; /* jne: not equal / not zero */

loc_000DAEA9: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_000DAEB6; /* je: equal / zero */

loc_000DAEAF: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(edi))) goto loc_000DAF14; /* jne: not equal / not zero */

loc_000DAEB6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DAF14; /* jne: not equal / not zero */

loc_000DAEBF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DAEC6: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DAF14; /* jl: less (signed <) */

loc_000DAECD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000DAEE2; /* je: equal / zero */

loc_000DAEDA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DAEDD: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAEE2: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000DAEEF: ;
    if (CMP_NE(edx, 0x2D)) goto loc_000DAF14; /* jne: not equal / not zero */

loc_000DAEF4: ;
    esi = MEM32(ecx);
    edx = MEM32(eax);
    if (CMP_NE(esi, edx)) goto loc_000DAF08; /* jne: not equal / not zero */

loc_000DAEFC: ;
    edx = MEM32(eax + 4);
    MEM32(ecx) = edx;
    SET_LO8(eax, MEM8(eax + 9));
    POP32(esp, esi);
    MEM8(edi) = LO8(eax);
    esp += 4; return; /* ret */

loc_000DAF08: ;
    if (CMP_NE(esi, MEM32(eax + 4))) goto loc_000DAF14; /* jne: not equal / not zero */

loc_000DAF0D: ;
    MEM32(ecx) = edx;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(edi) = LO8(ecx);

loc_000DAF14: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DAF20
 * Original: 0x000DAF20 - 0x000DB00D (237 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAF20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x7714E0;
    /* nop */

loc_000DAF30: ;
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_000DAFF7; /* je: equal / zero */

loc_000DAF3C: ;
    /* nop */

loc_000DAF40: ;
    edx = MEM32(eax + 0xC);
    ecx = SX8(LO8(ebx));
    MEM32(ecx * 4 + 0x771740) = edx;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000DAFE5; /* jne: not equal / not zero */

loc_000DAF5B: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_000DAF76; /* jle: less or equal (signed <=) */

loc_000DAF5F: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));

loc_000DAF67: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_000DAF70; /* jne: not equal / not zero */

loc_000DAF6B: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_000DAF70: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_000DAF67; /* jne: not equal / not zero */

loc_000DAF76: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_000DAFE5; /* jl: less (signed <) */

loc_000DAF7D: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    edx = MEM32(edx + 0x5906BC);
    if (CMP_EQ(edx, ebp)) goto loc_000DAF9A; /* je: equal / zero */

loc_000DAF8C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_000DAF8F: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_000DAFE5;

loc_000DAF9A: ;
    if (CMP_NE(eax, MEM32(ecx * 4 + 0x7714E0))) goto loc_000DAFAD; /* jne: not equal / not zero */

loc_000DAFA3: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx * 4 + 0x7714E0) = edx;

loc_000DAFAD: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, ebp)) goto loc_000DAFBA; /* je: equal / zero */

loc_000DAFB4: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_000DAFBA: ;
    ecx = MEM32(eax + 8);
    if (CMP_EQ(ecx, ebp)) goto loc_000DAFC7; /* je: equal / zero */

loc_000DAFC1: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_000DAFC7: ;
    ecx = MEM32(0x7714E4);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 0xC) = ecx;
    if (CMP_EQ(ecx, ebp)) goto loc_000DAFD7; /* je: equal / zero */

loc_000DAFD4: ;
    MEM32(ecx + 8) = eax;

loc_000DAFD7: ;
    MEM32(eax) = 1;
    MEM32(eax + 8) = ebp;
    MEM32(0x7714E4) = eax;

loc_000DAFE5: ;
    edx = SX8(LO8(ebx));
    eax = MEM32(edx * 4 + 0x771740);
    if (CMP_NE(eax, ebp)) goto loc_000DAF40; /* jne: not equal / not zero */

loc_000DAFF7: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x771734)) goto loc_000DAF30; /* jl: less (signed <) */

loc_000DB006: ;
    edi = 0x7714E0;
    g_seh_ebp = ebp; sub_000DB010(); return; /* tail jmp 0x000DB010 */

}

/**
 * sub_000DB120
 * Original: 0x000DB120 - 0x000DB3A4 (644 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB120(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB120: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_EQ(edi, MEM32(ebx))) goto loc_000DB3A2; /* je: equal / zero */

loc_000DB12D: ;
    if (CMP_GE(esi, 0x5C)) goto loc_000DB14B; /* jge: greater or equal (signed >=) */

loc_000DB132: ;
    ecx = MEM32(esi * 4 + 0x5B1108);
    edx = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB140: ;
    MEM32(esi * 4 + 0x5499F8) = edi;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB14B: ;
    if (CMP_GE(esi, 0x88)) goto loc_000DB173; /* jge: greater or equal (signed >=) */

loc_000DB153: ;
    eax = MEM32(esi * 4 + 0x5B0EE8);
    ecx = MEM32(0x5499F0);
    ecx = ecx | eax;
    MEM32(esi * 4 + 0x5499F8) = edi;
    MEM32(ebx) = edi;
    MEM32(0x5499F0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB173: ;
    if ((ecx != 0)) goto loc_000DB19A; /* jne: not equal / not zero */

loc_000DB175: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(0x5499F0);
    MEM32(ecx + 0x790) = edi;
    eax = eax | 0x4000;
    MEM32(0x549C18) = edi;
    MEM32(ebx) = edi;
    MEM32(0x5499F0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB19A: ;
    if (CMP_NE(esi, 0x89)) goto loc_000DB1AC; /* jne: not equal / not zero */

loc_000DB1A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537910(); /* call 0x00537910 */

loc_000DB1A8: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB1AC: ;
    if (CMP_NE(esi, 0x8A)) goto loc_000DB1BE; /* jne: not equal / not zero */

loc_000DB1B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537010(); /* call 0x00537010 */

loc_000DB1BA: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB1BE: ;
    if (CMP_NE(esi, 0x8B)) goto loc_000DB1D0; /* jne: not equal / not zero */

loc_000DB1C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000DB1CC: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB1D0: ;
    if (CMP_NE(esi, 0x8C)) goto loc_000DB1E2; /* jne: not equal / not zero */

loc_000DB1D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537890(); /* call 0x00537890 */

loc_000DB1DE: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB1E2: ;
    if (CMP_NE(esi, 0x8D)) goto loc_000DB1F4; /* jne: not equal / not zero */

loc_000DB1EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005378B0(); /* call 0x005378B0 */

loc_000DB1F0: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB1F4: ;
    if (CMP_NE(esi, 0x8E)) goto loc_000DB206; /* jne: not equal / not zero */

loc_000DB1FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537140(); /* call 0x00537140 */

loc_000DB202: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB206: ;
    if (CMP_NE(esi, 0x8F)) goto loc_000DB218; /* jne: not equal / not zero */

loc_000DB20E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000DB214: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB218: ;
    if (CMP_NE(esi, 0x90)) goto loc_000DB22A; /* jne: not equal / not zero */

loc_000DB220: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000DB226: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB22A: ;
    if (CMP_NE(esi, 0x91)) goto loc_000DB23C; /* jne: not equal / not zero */

loc_000DB232: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005372E0(); /* call 0x005372E0 */

loc_000DB238: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB23C: ;
    if (CMP_NE(esi, 0x93)) goto loc_000DB24E; /* jne: not equal / not zero */

loc_000DB244: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000DB24A: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB24E: ;
    if (CMP_NE(esi, 0x92)) goto loc_000DB260; /* jne: not equal / not zero */

loc_000DB256: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005370F0(); /* call 0x005370F0 */

loc_000DB25C: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB260: ;
    if (CMP_NE(esi, 0x94)) goto loc_000DB272; /* jne: not equal / not zero */

loc_000DB268: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_000DB26E: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB272: ;
    if (CMP_NE(esi, 0x95)) goto loc_000DB284; /* jne: not equal / not zero */

loc_000DB27A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000DB280: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB284: ;
    if (CMP_NE(esi, 0x96)) goto loc_000DB296; /* jne: not equal / not zero */

loc_000DB28C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005377E0(); /* call 0x005377E0 */

loc_000DB292: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB296: ;
    if (CMP_NE(esi, 0x97)) goto loc_000DB2A8; /* jne: not equal / not zero */

loc_000DB29E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_000DB2A4: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB2A8: ;
    if (CMP_NE(esi, 0x98)) goto loc_000DB2BA; /* jne: not equal / not zero */

loc_000DB2B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537760(); /* call 0x00537760 */

loc_000DB2B6: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB2BA: ;
    if (CMP_NE(esi, 0x99)) goto loc_000DB2CC; /* jne: not equal / not zero */

loc_000DB2C2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005377A0(); /* call 0x005377A0 */

loc_000DB2C8: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB2CC: ;
    if (CMP_NE(esi, 0x9A)) goto loc_000DB2DE; /* jne: not equal / not zero */

loc_000DB2D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537700(); /* call 0x00537700 */

loc_000DB2DA: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB2DE: ;
    if (CMP_NE(esi, 0x9B)) goto loc_000DB2F0; /* jne: not equal / not zero */

loc_000DB2E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537730(); /* call 0x00537730 */

loc_000DB2EC: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB2F0: ;
    if (CMP_NE(esi, 0x9C)) goto loc_000DB302; /* jne: not equal / not zero */

loc_000DB2F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536FD0(); /* call 0x00536FD0 */

loc_000DB2FE: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB302: ;
    if (CMP_NE(esi, 0x9D)) goto loc_000DB314; /* jne: not equal / not zero */

loc_000DB30A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005373D0(); /* call 0x005373D0 */

loc_000DB310: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB314: ;
    if (CMP_NE(esi, 0x9E)) goto loc_000DB326; /* jne: not equal / not zero */

loc_000DB31C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005377C0(); /* call 0x005377C0 */

loc_000DB322: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB326: ;
    if (CMP_NE(esi, 0x9F)) goto loc_000DB338; /* jne: not equal / not zero */

loc_000DB32E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537440(); /* call 0x00537440 */

loc_000DB334: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB338: ;
    if (CMP_NE(esi, 0xA0)) goto loc_000DB34A; /* jne: not equal / not zero */

loc_000DB340: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005374D0(); /* call 0x005374D0 */

loc_000DB346: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB34A: ;
    if (CMP_NE(esi, 0xA1)) goto loc_000DB35C; /* jne: not equal / not zero */

loc_000DB352: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537510(); /* call 0x00537510 */

loc_000DB358: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB35C: ;
    if (CMP_NE(esi, 0xA2)) goto loc_000DB36E; /* jne: not equal / not zero */

loc_000DB364: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537580(); /* call 0x00537580 */

loc_000DB36A: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB36E: ;
    if (CMP_NE(esi, 0xA3)) goto loc_000DB380; /* jne: not equal / not zero */

loc_000DB376: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005375F0(); /* call 0x005375F0 */

loc_000DB37C: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB380: ;
    if (CMP_NE(esi, 0xA4)) goto loc_000DB392; /* jne: not equal / not zero */

loc_000DB388: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537610(); /* call 0x00537610 */

loc_000DB38E: ;
    MEM32(ebx) = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB392: ;
    if (CMP_NE(esi, 0xA5)) goto loc_000DB3A0; /* jne: not equal / not zero */

loc_000DB39A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537630(); /* call 0x00537630 */

loc_000DB3A0: ;
    MEM32(ebx) = edi;

loc_000DB3A2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB3B0
 * Original: 0x000DB3B0 - 0x000DB459 (169 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB3B0: ;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_EQ(ebx, ecx)) goto loc_000DB457; /* je: equal / zero */

loc_000DB3BF: ;
    (void)0; /* cmp edx, 0xC - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(edx, 0xC)) goto loc_000DB3ED; /* jge: greater or equal (signed >=) */

loc_000DB3C5: ;
    ecx = eax;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(0x5499F0);
    eax = eax << 5;
    ecx = ecx | esi;
    eax = eax + edx;
    MEM32(eax * 4 + 0x547330) = ebx;
    POP32(esp, esi);
    MEM32(edi) = ebx;
    MEM32(0x5499F0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB3ED: ;
    if (CMP_GE(edx, 0x16)) goto loc_000DB418; /* jge: greater or equal (signed >=) */

loc_000DB3F2: ;
    ecx = MEM32(edx * 4 + 0x5B1000);
    esi = MEM32(0x5499F0);
    esi = esi | ecx;
    eax = eax << 5;
    eax = eax + edx;
    MEM32(0x5499F0) = esi;
    MEM32(eax * 4 + 0x547330) = ebx;
    POP32(esp, esi);
    MEM32(edi) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB418: ;
    if (CMP_NE(edx, 0x1C)) goto loc_000DB42A; /* jne: not equal / not zero */

loc_000DB41D: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000DB425: ;
    POP32(esp, esi);
    MEM32(edi) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB42A: ;
    if (CMP_NE(edx, 0x1D)) goto loc_000DB439; /* jne: not equal / not zero */

loc_000DB42F: ;
    PUSH32(esp, 0); sub_00537B40(); /* call 0x00537B40 */

loc_000DB434: ;
    POP32(esp, esi);
    MEM32(edi) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB439: ;
    if (CMP_NE(edx, 0x1E)) goto loc_000DB448; /* jne: not equal / not zero */

loc_000DB43E: ;
    PUSH32(esp, 0); sub_00537B90(); /* call 0x00537B90 */

loc_000DB443: ;
    POP32(esp, esi);
    MEM32(edi) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB448: ;
    if (CMP_G(edx, 0x1B)) goto loc_000DB454; /* jg: greater (signed >) */

loc_000DB44D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_000DB454: ;
    MEM32(edi) = ebx;
    POP32(esp, esi);

loc_000DB457: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB460
 * Original: 0x000DB460 - 0x000DB48D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB460(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB460: ;
    if (TEST_NZ(edi, edi)) goto loc_000DB473; /* jne: not equal / not zero */

loc_000DB464: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000DB46C: ;
    MEM32(esi * 4 + 0x771764) = edi;

loc_000DB473: ;
    if (CMP_EQ(MEM32(esi * 4 + 0x771764), edi)) goto loc_000DB48C; /* je: equal / zero */

loc_000DB47C: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_000DB485: ;
    MEM32(esi * 4 + 0x771764) = edi;

loc_000DB48C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB490
 * Original: 0x000DB490 - 0x000DB4A5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB490(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB490: ;
    if (CMP_EQ(MEM32(0x771760), esi)) goto loc_000DB4A4; /* je: equal / zero */

loc_000DB498: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000DB49E: ;
    MEM32(0x771760) = esi;

loc_000DB4A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB4B0
 * Original: 0x000DB4B0 - 0x000DB4C6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB4B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB4B0: ;
    if (CMP_EQ(MEM32(0x77175C), esi)) goto loc_000DB4C5; /* je: equal / zero */

loc_000DB4B8: ;
    eax = esi;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000DB4BF: ;
    MEM32(0x77175C) = esi;

loc_000DB4C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB4D0
 * Original: 0x000DB4D0 - 0x000DB51F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB4D0: ;
    if (TEST_Z(ecx, ecx)) { sub_000DB51F(); return; } /* je: equal / zero */

loc_000DB4D4: ;
    eax = MEM32(ecx + 0x564);
    if (TEST_Z(eax, eax)) { sub_000DB51F(); return; } /* je: equal / zero */

loc_000DB4DE: ;
    edx = MEM32(ecx + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2B0);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) { sub_000DB51F(); return; } /* je: equal / zero */

loc_000DB4F0: ;
    eax = MEM32(eax + 0x2AC);
    if (CMP_EQ(eax, 0xC)) goto loc_000DB50A; /* je: equal / zero */

loc_000DB4FB: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x16)) goto loc_000DB50A; /* je: equal / zero */

loc_000DB505: ;
    if (CMP_NE(eax, 0x53)) { sub_000DB51F(); return; } /* jne: not equal / not zero */

loc_000DB50A: ;
    ecx = MEM32(ecx + 0x564);
    eax = MEM32(ecx + 0x2AC);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_001CE630(); return; /* tail jmp 0x001CE630 */

}

/**
 * sub_000DB520
 * Original: 0x000DB520 - 0x000DB61A (250 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB520(void)
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

loc_000DB520: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000DB527: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB536: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB54F: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEM32(0x549B0C) = 0x1E01;
    if ((xmm2 > xmm0)) goto loc_000DB616; /* ja: above (unsigned >) */

loc_000DB56B: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000DB609; /* jbe: below or equal (unsigned <=) */

loc_000DB57C: ;
    xmm0 = xmm1; /* movaps */

loc_000DB57F: ;
    xmm2 = MEMF(0x85E3FC); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 4) = xmm2; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000DB59E: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000DB5A5; /* je: equal / zero */

loc_000DB5A2: ;
    SET_LO8(eax, LO8(eax) << 4);

loc_000DB5A5: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    edx = esi;
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB5B5: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(0x549B14) = esi;
    POP32(esp, esi);
    ecx = 0x40358;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_000DB61A(); return; } /* je: equal / zero */

loc_000DB5C5: ;
    edx = 0x10101;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB5CF: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB5E8: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549B1C) = 0xFF;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB5FE: ;
    MEM32(0x549AE8) = 0;
    esp += 4; return; /* ret */

loc_000DB609: ;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000DB57F; /* jp: parity */

loc_000DB616: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000DB5A5;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000DB6A0
 * Original: 0x000DB6A0 - 0x000DB6EE (78 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB6A0(void)
{

loc_000DB6A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000DB6A7: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB6B6: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB6CC: ;
    edx = edx | 0xFFFFFFFFu;
    ecx = 0x40360;
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB6E3: ;
    MEM32(0x549B1C) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB6F0
 * Original: 0x000DB6F0 - 0x000DB8D7 (487 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB6F0(void)
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

loc_000DB6F0: ;
    eax = MEM32(0x771800);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_000DB711; /* je: equal / zero */

loc_000DB705: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000DB70B: ;
    MEM32(0x771800) = edi;

loc_000DB711: ;
    eax = MEM32(0x7717FC);
    esi = 0x207;
    if (CMP_EQ(eax, esi)) goto loc_000DB737; /* je: equal / zero */

loc_000DB71F: ;
    edx = esi;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB72B: ;
    MEM32(0x549B10) = esi;
    MEM32(0x7717FC) = esi;

loc_000DB737: ;
    eax = MEM32(0x7717F4);
    esi = 0x1E01;
    if (CMP_EQ(eax, esi)) goto loc_000DB75D; /* je: equal / zero */

loc_000DB745: ;
    edx = esi;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB751: ;
    MEM32(0x549B0C) = esi;
    MEM32(0x7717F4) = esi;

loc_000DB75D: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_000DB847; /* ja: above (unsigned >) */

loc_000DB76F: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000DB83A; /* jbe: below or equal (unsigned <=) */

loc_000DB780: ;
    xmm0 = xmm1; /* movaps */

loc_000DB783: ;
    xmm2 = MEMF(0x85E3FC); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000DB7A2: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000DB7A9; /* je: equal / zero */

loc_000DB7A6: ;
    SET_LO8(eax, LO8(eax) << 4);

loc_000DB7A9: ;
    esi = ZX8(LO8(eax));
    if (CMP_EQ(esi, MEM32(0x7717F8))) goto loc_000DB7CC; /* je: equal / zero */

loc_000DB7B4: ;
    edx = esi;
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB7C0: ;
    MEM32(0x549B14) = esi;
    MEM32(0x7717F8) = esi;

loc_000DB7CC: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    eax = MEM32(0x771804);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000DB84E; /* je: equal / zero */

loc_000DB7D5: ;
    esi = 0x10101;
    if (CMP_EQ(eax, esi)) goto loc_000DB7F6; /* je: equal / zero */

loc_000DB7DE: ;
    edx = esi;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB7EA: ;
    MEM32(0x549B04) = esi;
    MEM32(0x771804) = esi;

loc_000DB7F6: ;
    edx = 0xFF;
    ecx = 0x40360;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB805: ;
    eax = MEM32(0x771820);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x549B1C) = 0xFF;
    if (CMP_EQ(eax, esi)) goto loc_000DB8D3; /* je: equal / zero */

loc_000DB81E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB82A: ;
    POP32(esp, edi);
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DB83A: ;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000DB783; /* jp: parity */

loc_000DB847: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000DB7A9;

loc_000DB84E: ;
    esi = 0x1010101;
    if (CMP_EQ(eax, esi)) goto loc_000DB86F; /* je: equal / zero */

loc_000DB857: ;
    edx = esi;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB863: ;
    MEM32(0x549B04) = esi;
    MEM32(0x771804) = esi;

loc_000DB86F: ;
    edx = 0xF;
    ecx = 0x40360;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB87E: ;
    (void)0; /* cmp MEM32(0x771820), edi - flags set for next jcc */
    MEM32(0x549B1C) = 0xF;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_000DB8A8; /* je: equal / zero */

loc_000DB890: ;
    edx = edi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB89C: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_000DB8A8: ;
    edx = edi;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB8B4: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB8C9: ;
    MEM32(0x549AE0) = 0x206;

loc_000DB8D3: ;
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
 * sub_000DB8E0
 * Original: 0x000DB8E0 - 0x000DB96A (138 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB8E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB8E0: ;
    eax = MEM32(0x771800);
    if (TEST_Z(eax, eax)) goto loc_000DB8FA; /* je: equal / zero */

loc_000DB8E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000DB8F0: ;
    MEM32(0x771800) = 0;

loc_000DB8FA: ;
    if (CMP_EQ(MEM32(0x771804), 0x10101)) goto loc_000DB929; /* je: equal / zero */

loc_000DB906: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB915: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x771804) = 0x10101;

loc_000DB929: ;
    eax = MEM32(0x771820);
    if (TEST_Z(eax, eax)) goto loc_000DB952; /* je: equal / zero */

loc_000DB932: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB93E: ;
    MEM32(0x549AE8) = 0;
    MEM32(0x771820) = 0;

loc_000DB952: ;
    edx = edx | 0xFFFFFFFFu;
    ecx = 0x40360;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DB95F: ;
    MEM32(0x549B1C) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB970
 * Original: 0x000DB970 - 0x000DB9A5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB970(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DB970: ;
    if (TEST_Z(ecx, ecx)) goto loc_000DB978; /* je: equal / zero */

loc_000DB974: ;
    MEM8(ecx + 5) = 0;

loc_000DB978: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_000DB986; /* je: equal / zero */

loc_000DB984: ;
    MEM32(ecx) = edx;

loc_000DB986: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_000DB9A4; /* je: equal / zero */

loc_000DB9A2: ;
    MEM32(ecx) = eax;

loc_000DB9A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB9B0
 * Original: 0x000DB9B0 - 0x000DBA09 (89 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB9B0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB9B0: ;
    esp = esp - 0x1FC;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x18);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ebx);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = esp + 0x74;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x208);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = esp + 0x18;
    edx = ecx;
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = edx;
    esi = 0x594A9C;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000DBA10(); return; /* tail jmp 0x000DBA10 */

}

/**
 * sub_000DBD30
 * Original: 0x000DBD30 - 0x000DBD5D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBD30(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DBD30: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x7FA1F8);
    eax = eax - 2;
    if ((eax == 0)) goto loc_000DBD51; /* je: equal / zero */

loc_000DBD3D: ;
    eax = eax - 0xE;
    if ((eax != 0)) goto loc_000DBD5B; /* jne: not equal / not zero */

loc_000DBD42: ;
    PUSH32(esp, 0xA9);
    PUSH32(esp, 0); sub_000DB9B0(); /* call 0x000DB9B0 */

loc_000DBD4C: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000DBD51: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_000DB9B0(); /* call 0x000DB9B0 */

loc_000DBD58: ;
    esp = esp + 4;

loc_000DBD5B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DBD60
 * Original: 0x000DBD60 - 0x000DBD80 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBD60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DBD60: ;
    PUSH32(esp, esi);
    esi = 6;

loc_000DBD66: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DBD6B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DBD70: ;
    esi--;
    if ((esi != 0)) goto loc_000DBD66; /* jne: not equal / not zero */

loc_000DBD73: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 0xC2) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DBD80
 * Original: 0x000DBD80 - 0x000DBD9B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBD80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DBD80: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x33)) goto loc_000DBD8D; /* jne: not equal / not zero */

loc_000DBD86: ;
    edx = esi;
    PUSH32(esp, 0); sub_002B9BB0(); /* call 0x002B9BB0 */

loc_000DBD8D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_000DBD97: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000DBDA0
 * Original: 0x000DBDA0 - 0x000DBDFD (93 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBDA0(void)
{
    uint32_t ebp;
    float xmm0, xmm5, xmm6, xmm7;

loc_000DBDA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xEC;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = esi;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000DBDBB: ;
    xmm5 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * MEMF(0x6490B8); /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(0x648EC0); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    MEM32(esp + 0x10) = 0x1E;
    g_seh_ebp = ebp; sub_000DBE10(); return; /* tail jmp 0x000DBE10 */

}

/**
 * sub_000DBF20
 * Original: 0x000DBF20 - 0x000DC134 (532 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DBF20: ;
    esp = esp - 0x18;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    MEM8(esp + 4) = 0x45;
    MEM8(esp + 5) = 0x53;
    MEM8(esp + 6) = 0x68;
    if (TEST_Z(ecx, ecx)) goto loc_000DC12F; /* je: equal / zero */

loc_000DBF3D: ;
    eax = 0xFFFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_000DC12E; /* jle: less or equal (signed <=) */

loc_000DBF54: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x34); /* cvtsi2ss */
    eax = esi + esi * 2;
    SET_LO8(edx, MEM8(esp + eax + 0xA));
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(esp + eax + 9));
    SET_LO8(eax, MEM8(esp + eax + 8));
    PUSH32(esp, ebp);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0x18) = LO8(edx);
    MEM8(esp + 0x1C) = LO8(eax);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edi);

loc_000DBF81: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    if (CMP_BE(LO8(eax), 0x40)) goto loc_000DBFCD; /* jbe: below or equal (unsigned <=) */

loc_000DBF8E: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_000DBFB7; /* jbe: below or equal (unsigned <=) */

loc_000DBF92: ;
    (void)0; /* cmp LO8(eax), 0xC0 - flags set for next jcc */
    edx = ZX8(LO8(eax));
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_000DBFA9; /* jbe: below or equal (unsigned <=) */

loc_000DBF99: ;
    edx = edx << 2;
    eax = 0x743490;
    eax = eax - edx;
    xmm1 = MEMF(eax); /* movss */
    goto loc_000DBFD9;

loc_000DBFA9: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_000DBFD9;

loc_000DBFB7: ;
    xmm1 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    edx = 0x743290;
    edx = edx - eax;
    xmm1 = xmm1 - MEMF(edx); /* subss */
    goto loc_000DBFD9;

loc_000DBFCD: ;
    eax = ZX8(LO8(eax));
    xmm1 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000DBFD9: ;
    if (CMP_BE(LO8(ecx), 0x40)) goto loc_000DC022; /* jbe: below or equal (unsigned <=) */

loc_000DBFDE: ;
    if (CMP_BE(LO8(ecx), 0x80)) goto loc_000DC00C; /* jbe: below or equal (unsigned <=) */

loc_000DBFE3: ;
    if (CMP_BE(LO8(ecx), 0xC0)) goto loc_000DBFFB; /* jbe: below or equal (unsigned <=) */

loc_000DBFE8: ;
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    edx = 0x743490;
    edx = edx - ecx;
    xmm0 = MEMF(edx); /* movss */
    goto loc_000DC02E;

loc_000DBFFB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(ecx));
    xmm0 = xmm0 - MEMF(eax * 4 + 0x742E90); /* subss */
    goto loc_000DC02E;

loc_000DC00C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    edx = 0x743290;
    edx = edx - ecx;
    xmm0 = xmm0 - MEMF(edx); /* subss */
    goto loc_000DC02E;

loc_000DC022: ;
    eax = ZX8(LO8(ecx));
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000DC02E: ;
    xmm2 = MEMF(0x5A005C); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    esi = (int32_t)xmm3; /* cvttss2si */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    edi = (int32_t)xmm3; /* cvttss2si */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DC051: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648D48); /* mulss */
    xmm2 = xmm2 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DC06F: ;
    eax = eax & 0xFFFF;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x14); /* addss */
    ebp = (int32_t)xmm3; /* cvttss2si */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DC08D: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = eax & 0xF;
    eax = eax + 0xA;
    edx = (int32_t)xmm2; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    xmm2 = MEMF(esp + 0x6C); /* movss */
    edi = (uint32_t)((int32_t)edi >> 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = (uint32_t)((int32_t)esi >> 8);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x9C); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    eax = (int32_t)MEMF(esp + 0x9C); /* cvttss2si */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x98); /* addss */
    PUSH32(esp, eax);
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000DC480(); /* call 0x000DC480 */

loc_000DC10E: ;
    ecx = MEM32(esp + 0x98);
    eax = MEM32(esp + 0x84);
    esp = esp + 0x74;
    ebx = ebx + ecx;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000DBF81; /* jne: not equal / not zero */

loc_000DC12C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000DC12E: ;
    POP32(esp, ebx);

loc_000DC12F: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC140
 * Original: 0x000DC140 - 0x000DC18C (76 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC140(void)
{
    uint32_t ebp;
    float xmm0, xmm5, xmm7;

loc_000DC140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xEC;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = esi;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_000DC15B: ;
    xmm5 = MEMF(ebp + 0xC); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x648EC0); /* mulss */
    MEMF(esp + 0x1C) = xmm7; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 4) = 0x2D;
    g_seh_ebp = ebp; sub_000DC197(); return; /* tail jmp 0x000DC197 */

}

/**
 * sub_000DC2E0
 * Original: 0x000DC2E0 - 0x000DC376 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC2E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DC2E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x68);
    if (CMP_A(eax, 0x54)) goto loc_000DC374; /* ja: above (unsigned >) */

loc_000DC2EF: ;
    eax = ZX8(MEM8(eax + 0xDC38C));
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(eax * 4 + 0xDC378); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000DC2FEu) goto loc_000DC2FE;
    if (_jt == 0x000DC331u) goto loc_000DC331;
    if (_jt == 0x000DC353u) goto loc_000DC353;
    if (_jt == 0x000DC368u) goto loc_000DC368;
    if (_jt == 0x000DC373u) goto loc_000DC373;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DC2FE: ;
    PUSH32(esp, 0); sub_00116BB0(); /* call 0x00116BB0 */

loc_000DC303: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x69);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_000DC31C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DBDA0(); /* call 0x000DBDA0 */

loc_000DC32B: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC331: ;
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0011AB60(); /* call 0x0011AB60 */

loc_000DC33D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000DBDA0(); /* call 0x000DBDA0 */

loc_000DC34C: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC353: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DC140(); /* call 0x000DC140 */

loc_000DC362: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC368: ;
    SET_LO8(ebx, MEM8(esp + 0xC));
    eax = esi;
    PUSH32(esp, 0); sub_0011AEB0(); /* call 0x0011AEB0 */

loc_000DC373: ;
    POP32(esp, ebx);

loc_000DC374: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC480
 * Original: 0x000DC480 - 0x000DC57D (253 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC480(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000DC480: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x82;
    eax = eax + 0x15;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x54;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DC4A0: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, ecx)) goto loc_000DC57C; /* je: equal / zero */

loc_000DC4AD: ;
    SET_LO16(edx, MEM16(esp + 4));
    MEM16(eax + 0x2C) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(eax + 0x2E) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 0x30) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x38) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(eax + 0x39) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x3A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(eax + 0x3B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x20));
    MEM8(eax + 0x3C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x24));
    MEM8(eax + 0x3D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x28));
    MEM8(eax + 0x3E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2C));
    MEM8(eax + 0x3F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM8(eax + 0x40) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x34));
    MEM8(eax + 0x41) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0x60));
    MEM16(eax + 0x32) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x64));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x68));
    MEM8(eax + 0x42) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0x6C));
    MEM16(eax + 0x36) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x38));
    MEM8(eax + 0x44) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x3C));
    MEM8(eax + 0x45) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x40));
    MEM8(eax + 0x46) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x44));
    MEM8(eax + 0x47) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x48));
    MEM8(eax + 0x48) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x4C));
    MEM8(eax + 0x49) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x50));
    MEM8(eax + 0x4A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x54));
    MEM8(eax + 0x4B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x58));
    MEM8(eax + 0x4C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x5C));
    MEM8(eax + 0x43) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(edx);
    MEM32(eax + 0x50) = ecx;

loc_000DC57C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC580
 * Original: 0x000DC580 - 0x000DC61F (159 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DC580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x42));
    if (TEST_Z(eax, eax)) goto loc_000DC59A; /* je: equal / zero */

loc_000DC58D: ;
    eax = eax - MEM32(0x7FA20C);
    if (((int32_t)eax >= 0)) goto loc_000DC597; /* jns: not sign (positive) */

loc_000DC595: ;
    eax = 0; /* xor self */

loc_000DC597: ;
    MEM8(esi + 0x42) = LO8(eax);

loc_000DC59A: ;
    eax = ZX8(MEM8(esi + 0x41));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x594BCC), _icall_esp); /* indirect call */
    }

loc_000DC5A6: ;
    esp = esp + 4;
    if (CMP_NE(eax, 1)) goto loc_000DC5F7; /* jne: not equal / not zero */

loc_000DC5AE: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_000DC5BE; /* je: equal / zero */

loc_000DC5B5: ;
    MEM16(eax + 0x88) = 0;

loc_000DC5BE: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DC61D; /* jne: not equal / not zero */

loc_000DC5C7: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DC5CE: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DC61D; /* jl: less (signed <) */

loc_000DC5D5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000DC5EA; /* je: equal / zero */

loc_000DC5E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DC5E5: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC5EA: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000DC5F7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edx = ZX8(MEM8(esi + 0x43));
    ecx = ecx << 8;
    eax = eax + ecx;
    eax = eax + edx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM16(esi + 0x2E) = LO16(ecx);
    MEM8(esi + 0x43) = LO8(eax);

loc_000DC61D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC620
 * Original: 0x000DC620 - 0x000DC770 (336 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000DC620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ZX8(MEM8(ebx + 0x39));
    edx = ZX8(MEM8(ebx + 0x38));
    PUSH32(esp, esi);
    esi = MEM32(edx * 4 + 0x594960);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x100);
    eax = eax << 8;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    ecx = esp + 0x2C;
    edi = 2;
    MEM8(0x80174C) = 0;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_00110160(); /* call 0x00110160 */

loc_000DC673: ;
    eax = 1;
    esp = esp + 0x10;
    if (CMP_EQ(MEM16(0x7714D4), LO16(eax))) goto loc_000DC68A; /* je: equal / zero */

loc_000DC684: ;
    MEM16(0x7714D4) = LO16(eax);

loc_000DC68A: ;
    SET_LO16(eax, MEM16(ebx + 0x2C));
    SET_LO16(ecx, MEM16(ebx + 0x2E));
    SET_LO16(edx, MEM16(ebx + 0x30));
    esi = (uint32_t)(int32_t)SMEM16(0x7714C0);
    MEM16(esp + 0x1C) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x32));
    MEM16(esp + 0x22) = LO16(eax);
    SET_LO8(eax, MEM8(ebx + 0x3A));
    MEM16(esp + 0x1E) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx + 0x34));
    MEM16(esp + 0x20) = LO16(edx);
    SET_LO8(edx, MEM8(ebx + 0x3D));
    MEM8(0x80175A) = LO8(eax);
    eax = ZX8(MEM8(ebx + 0x3E));
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM16(esp + 0x24) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebx + 0x3B));
    MEM8(esp + 0x26) = LO8(edx);
    SET_LO8(edx, MEM8(ebx + 0x3C));
    MEM8(0x801759) = LO8(ecx);
    ecx = ZX8(MEM8(ebx + 0x3F));
    MEM8(0x801758) = LO8(edx);
    edx = ZX8(MEM8(ebx + 0x40));
    if (CMP_NE(esi, eax)) goto loc_000DC705; /* jne: not equal / not zero */

loc_000DC6EF: ;
    esi = (uint32_t)(int32_t)SMEM16(0x7714BC);
    if (CMP_NE(esi, ecx)) goto loc_000DC705; /* jne: not equal / not zero */

loc_000DC6FA: ;
    esi = (uint32_t)(int32_t)SMEM16(0x7714B8);
    if (CMP_EQ(esi, edx)) goto loc_000DC719; /* je: equal / zero */

loc_000DC705: ;
    MEM16(0x7714C0) = LO16(eax);
    MEM16(0x7714BC) = LO16(ecx);
    MEM16(0x7714B8) = LO16(edx);

loc_000DC719: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_000DC734; /* je: equal / zero */

loc_000DC728: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000DC72E: ;
    MEM32(0x771760) = esi;

loc_000DC734: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax);
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_000DC75A; /* jne: not equal / not zero */

loc_000DC74E: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000DC757: ;
    esp = esp + 8;

loc_000DC75A: ;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) { sub_000DC770(); return; } /* jne: not equal / not zero */

loc_000DC760: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000DC768: ;
    MEM32(0x771764) = esi;
    g_seh_ebp = ebp; sub_000DC787(); return; /* tail jmp 0x000DC787 */

}

/**
 * sub_000DCB80
 * Original: 0x000DCB80 - 0x000DCD62 (482 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCB80(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000DCB80: ;
    ecx = MEM32(esp + 0xC0);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x84));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xBC);
    eax = esi;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x82;
    eax = eax + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x68;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DCBB2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000DCD5F; /* je: equal / zero */

loc_000DCBBD: ;
    SET_LO16(edx, MEM16(esp + 0xC));
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x2C) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(eax + 0x2E) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x78));
    MEM16(eax + 0x30) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x7C));
    MEM16(eax + 0x32) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x80));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x84));
    MEM16(eax + 0x36) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM16(eax + 0x38) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(eax + 0x42) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x20));
    MEM8(eax + 0x43) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x24));
    MEM8(eax + 0x44) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x28));
    MEM8(eax + 0x45) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM8(eax + 0x46) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x34));
    MEM8(eax + 0x48) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x38));
    MEM8(eax + 0x49) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2C));
    MEM8(eax + 0x4A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x3C));
    MEM8(eax + 0x47) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x40));
    MEM8(eax + 0x4B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x44));
    MEM8(eax + 0x4C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x48));
    MEM8(eax + 0x4D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x4C));
    MEM8(eax + 0x4E) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x50));
    MEM8(eax + 0x4F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x54));
    MEM8(eax + 0x50) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x58));
    MEM8(eax + 0x51) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x5C));
    MEM8(eax + 0x52) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x60));
    MEM8(eax + 0x53) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x64));
    MEM8(eax + 0x54) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x68));
    MEM8(eax + 0x55) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x6C));
    MEM8(eax + 0x56) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x70));
    MEM8(eax + 0x57) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x74));
    MEM8(eax + 0x58) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x8C));
    MEM8(eax + 0x59) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x90));
    MEM8(eax + 0x5B) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x94));
    MEM8(eax + 0x5C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x98));
    MEM8(eax + 0x5D) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x9C));
    MEM8(eax + 0x5E) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0xA0));
    MEM16(eax + 0x3A) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xA4));
    MEM16(eax + 0x3C) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0xA8));
    MEM16(eax + 0x3E) = LO16(ebx);
    MEM8(eax + 0x5A) = LO8(ebx);
    MEM16(eax + 0x40) = LO16(ecx);
    MEM8(eax + 0x5F) = LO8(edx);
    MEM8(eax + 0x60) = 0;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0xAC));
    MEM8(eax + 0x61) = LO8(ecx);
    if (TEST_Z(esi, esi)) goto loc_000DCD2D; /* je: equal / zero */

loc_000DCD19: ;
    SET_LO8(edx, MEM8(esp + 0xB0));
    SET_LO8(ecx, 3);
    if (CMP_BE(LO8(edx), LO8(ecx))) goto loc_000DCD2D; /* jbe: below or equal (unsigned <=) */

loc_000DCD26: ;
    MEM8(esp + 0xB0) = LO8(ecx);

loc_000DCD2D: ;
    SET_LO8(edx, MEM8(esp + 0xB0));
    SET_LO8(ecx, MEM8(esp + 0xB4));
    MEM8(eax + 0x62) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xB8));
    MEM8(eax + 0x63) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC0));
    MEM8(eax + 0x64) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xC4));
    MEM8(eax + 0x65) = LO8(ecx);
    MEM8(eax + 0x66) = LO8(edx);

loc_000DCD5F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCD70
 * Original: 0x000DCD70 - 0x000DD7A8 (2616 bytes, 717 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCD70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000DCD70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, 0x14 - flags set for next jcc */
    ecx = ZX8(MEM8(ebx + 0x60));
    SET_LO8(eax, (CMP_NE(ecx, 0x14)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x5C) = eax;
    ecx = ecx - MEM32(0x7FA20C);
    MEM32(esp + 0x40) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_000DD724; /* jns: not sign (positive) */

loc_000DCDBA: ;
    /* nop */

loc_000DCDC0: ;
    SET_LO8(eax, MEM8(ebx + 0x5F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DCDD2; /* je: equal / zero */

loc_000DCDC7: ;
    edx = ZX8(LO8(eax));
    ecx = ecx + edx;
    MEM32(esp + 0x40) = ecx;
    goto loc_000DCDD6;

loc_000DCDD2: ;
    MEM32(esp + 0x40) = esi;

loc_000DCDD6: ;
    SET_LO8(eax, MEM8(ebx + 0x62));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x48) = esi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000DD718; /* jbe: below or equal (unsigned <=) */

loc_000DCDE5: ;
    SET_LO8(eax, MEM8(ebx + 0x61));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DCE25; /* je: equal / zero */

loc_000DCDEC: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DCDF1: ;
    SET_LO8(ecx, MEM8(ebx + 0x61));
    MEM8(esp + 0x2B) = LO8(eax);
    if (TEST_Z(MEM8(ebx + 0x40), 4)) goto loc_000DCE11; /* je: equal / zero */

loc_000DCDFE: ;
    eax = ZX16(MEM16(ebx + 0x3E));
    edi = ZX8(MEM8(ebx + 0x5A));
    edx = ZX8(LO8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    goto loc_000DCE14;

loc_000DCE11: ;
    eax = ZX8(LO8(ecx));

loc_000DCE14: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000DCE25; /* je: equal / zero */

loc_000DCE18: ;
    ecx = ZX8(MEM8(esp + 0x2B));
    if (CMP_GE(ecx, eax)) goto loc_000DD703; /* jge: greater or equal (signed >=) */

loc_000DCE25: ;
    SET_LO8(eax, MEM8(ebx + 0x5D));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_000DCEB1; /* jne: not equal / not zero */

loc_000DCE30: ;
    SET_LO16(eax, MEM16(ebx + 0x40));
    if (TEST_Z(LO8(eax), 0x10)) goto loc_000DCE63; /* je: equal / zero */

loc_000DCE38: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = ZX16(MEM16(ebx + 0x2E));
    eax = eax << 0x10;
    eax = eax | edx;
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(esi, MEM16(eax + 2));
    SET_LO16(edx, MEM16(eax + 4));
    SET_LO16(esi, LO16(esi) + MEM16(ebx + 0x30));
    MEM16(esp + 0x18) = LO16(ecx);
    MEM16(esp + 0x1C) = LO16(edx);
    goto loc_000DD2AE;

loc_000DCE63: ;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    xmm4 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_000DCE96; /* je: equal / zero */

loc_000DCE6A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = ZX16(MEM16(ebx + 0x2E));
    eax = eax << 0x10;
    eax = eax | ecx;
    edx = (int32_t)MEMF(eax); /* cvttss2si */
    esi = (int32_t)MEMF(eax + 4); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 8); /* cvttss2si */
    SET_LO16(esi, LO16(esi) + MEM16(ebx + 0x30));
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_000DD2B1;

loc_000DCE96: ;
    SET_LO16(ecx, MEM16(ebx + 0x2C));
    SET_LO16(edx, MEM16(ebx + 0x30));
    SET_LO16(esi, MEM16(ebx + 0x2E));
    MEM16(esp + 0x18) = LO16(ecx);
    MEM16(esp + 0x1C) = LO16(edx);
    goto loc_000DD2B1;

loc_000DCEB1: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    if (CMP_EQ(MEM32(eax + ecx + 0x3C8), esi)) goto loc_000DD703; /* je: equal / zero */

loc_000DCECD: ;
    SET_LO16(eax, MEM16(ebx + 0x2C));
    if (CMP_L(LO16(eax), LO16(esi))) goto loc_000DD747; /* jl: less (signed <) */

loc_000DCEDA: ;
    if (CMP_GE(LO16(eax), 6)) goto loc_000DD747; /* jge: greater or equal (signed >=) */

loc_000DCEE4: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    (void)0; /* cmp MEM16(eax + 0x594C2C), LO16(esi) - flags set for next jcc */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x594C20);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x594C22);
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x594C24);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x594C26);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x594C28);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x594C2A);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    if (CMP_EQ(MEM16(eax + 0x594C2C), LO16(esi))) goto loc_000DCF6D; /* je: equal / zero */

loc_000DCF4D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DCF52: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xE);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x594C2C);
    eax = eax & ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = xmm0; /* movaps */

loc_000DCF6D: ;
    eax = ZX8(MEM8(ebx + 0x5D));
    edi = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = ZX8(MEM8(eax + edi + 0x3A8));
    edx = ZX8(MEM8(ebx + 0x65));
    esi = MEM32(eax + edi + 0x3C8);
    eax = eax + edi;
    ecx = MEM32(eax + ecx * 4 + 0x4EC);
    MEM32(esp + 0x2C) = ecx;
    eax = MEM32(esp + 0x2C);
    ecx = edx;
    ecx = ecx << 6;
    esi = esi + ecx;
    ecx = 0x10;
    edi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x34);
    xmm0 = MEMF(esp + 0x90); /* movss */
    xmm1 = MEMF(esp + 0xB0); /* movss */
    xmm2 = MEMF(esp + 0xA4); /* movss */
    edx = edx + edx * 8;
    xmm5 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm3 = MEMF(ecx + edx * 4 + 0xC); /* movss */
    xmm4 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    eax = ecx + edx * 4;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xA0); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC0); /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x94); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0xB8); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0xC4); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0xA8); /* movss */
    edx = esp + 0x90;
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x98); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    eax = esp + 0x64;
    xmm2 = xmm2 + xmm5; /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    xmm2 = xmm2 + xmm4; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0xD0); /* addss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xD0) = xmm1; /* movss */
    MEMF(esp + 0xD4) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm7; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000DD0CC: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000DD10D: ;
    xmm2 = MEMF(esp + 0x6C); /* movss */
    xmm4 = MEMF(esp + 0x78); /* movss */
    xmm3 = MEMF(0x648CDC); /* movss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm2 = xmm2 * xmm3; /* mulss */
    eax = ZX8(MEM8(ebx + 0x5D));
    xmm0 = MEMF(esp + 0x70); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm5 = MEMF(esp + 0x7C); /* movss */
    ecx = MEM32(0x84A5F8);
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm6 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x34) = edx;
    edx = eax + ecx;
    SET_LO8(eax, MEM8(edx + 0x170));
    SET_LO8(ecx, 0x40);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    (void)0; /* cmp LO8(eax), 0x40 - flags set for next jcc */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    if (CMP_BE(LO8(eax), 0x40)) goto loc_000DD1C6; /* jbe: below or equal (unsigned <=) */

loc_000DD187: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_000DD1B0; /* jbe: below or equal (unsigned <=) */

loc_000DD18B: ;
    (void)0; /* cmp LO8(eax), 0xC0 - flags set for next jcc */
    eax = ZX8(LO8(eax));
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_000DD1A2; /* jbe: below or equal (unsigned <=) */

loc_000DD192: ;
    eax = eax << 2;
    esi = 0x743490;
    esi = esi - eax;
    xmm0 = MEMF(esi); /* movss */
    goto loc_000DD1D2;

loc_000DD1A2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x742E90); /* subss */
    goto loc_000DD1D2;

loc_000DD1B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    esi = 0x743290;
    esi = esi - eax;
    xmm0 = xmm0 - MEMF(esi); /* subss */
    goto loc_000DD1D2;

loc_000DD1C6: ;
    eax = ZX8(LO8(eax));
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000DD1D2: ;
    (void)0; /* cmp LO8(ecx), 0x40 - flags set for next jcc */
    xmm7 = MEMF(edx + 0x110); /* movss */
    xmm3 = MEMF(0x649244); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    if (CMP_BE(LO8(ecx), 0x40)) goto loc_000DD23A; /* jbe: below or equal (unsigned <=) */

loc_000DD1F9: ;
    if (CMP_BE(LO8(ecx), 0x80)) goto loc_000DD224; /* jbe: below or equal (unsigned <=) */

loc_000DD1FE: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    if (CMP_BE(LO8(ecx), 0xC0)) goto loc_000DD216; /* jbe: below or equal (unsigned <=) */

loc_000DD206: ;
    ecx = ecx << 2;
    eax = 0x743490;
    eax = eax - ecx;
    xmm0 = MEMF(eax); /* movss */
    goto loc_000DD246;

loc_000DD216: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x742E90); /* subss */
    goto loc_000DD246;

loc_000DD224: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(ecx));
    eax = eax << 2;
    ecx = 0x743290;
    ecx = ecx - eax;
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    goto loc_000DD246;

loc_000DD23A: ;
    eax = ZX8(LO8(ecx));
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000DD246: ;
    xmm7 = MEMF(edx + 0x110); /* movss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = ecx;
    edx = edx >> 0x10;
    edx = ZX8(LO8(edx));
    xmm7 = xmm7 * xmm0; /* mulss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = edx;
    eax = ecx;
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = ecx;
    edx = edx >> 0x10;
    eax = eax >> 0x18;
    edx = ZX8(LO8(edx));
    MEM32(esp + 0x30) = eax;
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = edx;
    eax = eax >> 0x18;
    ecx = (int32_t)xmm4; /* cvttss2si */
    edx = (int32_t)xmm6; /* cvttss2si */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    esi = (int32_t)xmm5; /* cvttss2si */
    MEM32(esp + 0x1C) = edx;

loc_000DD2AE: ;
    xmm4 = 0.0f; /* xorps self = zero */

loc_000DD2B1: ;
    SET_LO16(eax, MEM16(ebx + 0x40));
    if (TEST_Z(LO8(eax), 8)) goto loc_000DD39C; /* je: equal / zero */

loc_000DD2BD: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    edx = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DE900(); /* call 0x000DE900 */

loc_000DD2D5: ;
    ecx = ZX8(MEM8(ebx + 0x64));
    eax = ZX8(MEM8(ebx + 0x63));
    xmm3 = MEMF(esp + 0x4C); /* movss */
    eax = eax << 4;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    esp = esp + 0x10;
    esi = esi + edx;
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD318: ;
    xmm2 = MEMF(esp + 0x44); /* movss */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    ecx = (int32_t)xmm3; /* cvttss2si */
    xmm3 = MEMF(esp + 0x38); /* movss */
    edx = edx + ecx;
    MEM32(esp + 0x18) = edx;
    xmm1 = xmm1 * xmm3; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = eax + edx;
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x1C) = eax;
    xmm1 = xmm1 * xmm2; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ZX8(LO8(ecx));
    xmm0 = xmm0 * xmm3; /* mulss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = ecx;
    edx = eax;
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = edx >> 0x18;
    ecx = eax;
    ecx = ecx >> 0x10;
    MEM32(esp + 0x30) = edx;
    ecx = ZX8(LO8(ecx));
    edx = eax;
    edx = edx >> 0x18;
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = edx;

loc_000DD39C: ;
    SET_LO8(eax, MEM8(ebx + 0x5B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DD496; /* je: equal / zero */

loc_000DD3A7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD3AC: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    if (CMP_BE(LO8(ecx), 0x40)) goto loc_000DD3F7; /* jbe: below or equal (unsigned <=) */

loc_000DD3B6: ;
    if (CMP_BE(LO8(ecx), 0x80)) goto loc_000DD3E1; /* jbe: below or equal (unsigned <=) */

loc_000DD3BB: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    ecx = ZX8(LO8(ecx));
    if (CMP_BE(LO8(ecx), 0xC0)) goto loc_000DD3D3; /* jbe: below or equal (unsigned <=) */

loc_000DD3C3: ;
    ecx = ecx << 2;
    edx = 0x743490;
    edx = edx - ecx;
    xmm1 = MEMF(edx); /* movss */
    goto loc_000DD403;

loc_000DD3D3: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x742E90); /* subss */
    goto loc_000DD403;

loc_000DD3E1: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 2;
    ecx = 0x743290;
    ecx = ecx - edx;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    goto loc_000DD403;

loc_000DD3F7: ;
    edx = ZX8(LO8(ecx));
    xmm1 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000DD403: ;
    if (CMP_BE(LO8(eax), 0x40)) goto loc_000DD449; /* jbe: below or equal (unsigned <=) */

loc_000DD407: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_000DD433; /* jbe: below or equal (unsigned <=) */

loc_000DD40B: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_000DD422; /* jbe: below or equal (unsigned <=) */

loc_000DD40F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = 0x743490;
    ecx = ecx - eax;
    xmm0 = MEMF(ecx); /* movss */
    goto loc_000DD455;

loc_000DD422: ;
    edx = ZX8(LO8(eax));
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_000DD455;

loc_000DD433: ;
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = 0x743290;
    ecx = ecx - eax;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    goto loc_000DD455;

loc_000DD449: ;
    edx = ZX8(LO8(eax));
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000DD455: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD45A: ;
    ecx = ZX8(MEM8(ebx + 0x5B));
    edi = MEM32(esp + 0x18);
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esp + 0x1C);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648D48); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edi = edi + edx;
    xmm0 = xmm0 * xmm2; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx + eax;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ecx;

loc_000DD496: ;
    SET_LO8(eax, MEM8(ebx + 0x5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DD521; /* je: equal / zero */

loc_000DD4A1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD4A6: ;
    SET_LO8(eax, LO8(eax) - 0x40);
    if (CMP_BE(LO8(eax), 0x40)) goto loc_000DD4EE; /* jbe: below or equal (unsigned <=) */

loc_000DD4AC: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_000DD4D8; /* jbe: below or equal (unsigned <=) */

loc_000DD4B0: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_000DD4C7; /* jbe: below or equal (unsigned <=) */

loc_000DD4B4: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 2;
    edx = 0x743490;
    edx = edx - ecx;
    xmm0 = MEMF(edx); /* movss */
    goto loc_000DD4FA;

loc_000DD4C7: ;
    eax = ZX8(LO8(eax));
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x742E90); /* subss */
    goto loc_000DD4FA;

loc_000DD4D8: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 2;
    edx = 0x743290;
    edx = edx - ecx;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(edx); /* subss */
    goto loc_000DD4FA;

loc_000DD4EE: ;
    eax = ZX8(LO8(eax));
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000DD4FA: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD4FF: ;
    ecx = ZX8(MEM8(ebx + 0x5C));
    eax = eax & 0xFFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648D48); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    esi = esi + edx;

loc_000DD521: ;
    (void)0; /* cmp MEM16(ebx + 0x36), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(ebx + 0x34));
    SET_LO16(edi, MEM16(ebx + 0x32));
    MEM16(esp + 0x2C) = LO16(eax);
    if (CMP_EQ(MEM16(ebx + 0x36), 0)) goto loc_000DD543; /* je: equal / zero */

loc_000DD535: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD53A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x36);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_000DD545;

loc_000DD543: ;
    edx = 0; /* xor self */

loc_000DD545: ;
    SET_LO8(eax, MEM8(ebx + 0x40));
    edi = edi + edx;
    if (TEST_NZ(LO8(eax), 1)) goto loc_000DD561; /* jne: not equal / not zero */

loc_000DD54E: ;
    if (CMP_EQ(MEM16(ebx + 0x38), 0)) goto loc_000DD565; /* je: equal / zero */

loc_000DD555: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD55A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x38);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_000DD561: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + edx;

loc_000DD565: ;
    if (TEST_NZ(MEM8(ebx + 0x40), 0x88)) goto loc_000DD65E; /* jne: not equal / not zero */

loc_000DD56F: ;
    (void)0; /* cmp MEM16(ebx + 0x3C), 0 - flags set for next jcc */
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x3A);
    MEM32(esp + 0x34) = edx;
    if (CMP_EQ(MEM16(ebx + 0x3C), 0)) goto loc_000DD58E; /* je: equal / zero */

loc_000DD57E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD583: ;
    ecx = ZX16(MEM16(ebx + 0x3C));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + edx;

loc_000DD58E: ;
    edx = ZX8(MEM8(ebx + 0x4C));
    SET_LO8(eax, MEM8(ebx + 0x56));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DD5C2; /* je: equal / zero */

loc_000DD59D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD5A2: ;
    ecx = ZX8(MEM8(ebx + 0x56));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x24);
    eax = eax + edx;
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(eax, 0xFF)) goto loc_000DD5C2; /* jle: less or equal (signed <=) */

loc_000DD5BA: ;
    MEM32(esp + 0x24) = 0xFF;

loc_000DD5C2: ;
    edx = ZX8(MEM8(ebx + 0x4D));
    SET_LO8(eax, MEM8(ebx + 0x57));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x30) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DD5F6; /* je: equal / zero */

loc_000DD5D1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD5D6: ;
    ecx = ZX8(MEM8(ebx + 0x57));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x30);
    eax = eax + edx;
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(eax, 0xFF)) goto loc_000DD5F6; /* jle: less or equal (signed <=) */

loc_000DD5EE: ;
    MEM32(esp + 0x30) = 0xFF;

loc_000DD5F6: ;
    edx = ZX8(MEM8(ebx + 0x4E));
    SET_LO8(eax, MEM8(ebx + 0x58));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DD62A; /* je: equal / zero */

loc_000DD605: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD60A: ;
    ecx = ZX8(MEM8(ebx + 0x58));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x20);
    eax = eax + edx;
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(eax, 0xFF)) goto loc_000DD62A; /* jle: less or equal (signed <=) */

loc_000DD622: ;
    MEM32(esp + 0x20) = 0xFF;

loc_000DD62A: ;
    edx = ZX8(MEM8(ebx + 0x4F));
    SET_LO8(eax, MEM8(ebx + 0x59));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DD65E; /* je: equal / zero */

loc_000DD639: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DD63E: ;
    ecx = ZX8(MEM8(ebx + 0x59));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x14);
    eax = eax + edx;
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(eax, 0xFF)) goto loc_000DD65E; /* jle: less or equal (signed <=) */

loc_000DD656: ;
    MEM32(esp + 0x14) = 0xFF;

loc_000DD65E: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x34);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x38);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x5E));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x55));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x54));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x53));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x52));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x51));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x50));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x4B));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x4A));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x49));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x48));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x47));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x46));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x45));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x44));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x43));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x42));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000DC480(); /* call 0x000DC480 */

loc_000DD6FE: ;
    esp = esp + 0x74;
    esi = 0; /* xor self */

loc_000DD703: ;
    eax = MEM32(esp + 0x48);
    edx = ZX8(MEM8(ebx + 0x62));
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x48) = eax;
    if (CMP_L(eax, edx)) goto loc_000DCDE5; /* jl: less (signed <) */

loc_000DD718: ;
    ecx = MEM32(esp + 0x40);
    if (CMP_L(ecx, esi)) goto loc_000DCDC0; /* jl: less (signed <) */

loc_000DD724: ;
    eax = ZX16(MEM16(ebx + 0x3E));
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM8(ebx + 0x60) = LO8(ecx);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_000DD7A1; /* je: equal / zero */

loc_000DD732: ;
    eax = eax - MEM32(0x7FA20C);
    if (CMP_LE(eax, esi)) goto loc_000DD749; /* jle: less or equal (signed <=) */

loc_000DD73C: ;
    MEM16(ebx + 0x3E) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DD747: ;
    goto loc_000DD747;

loc_000DD749: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DD781; /* jne: not equal / not zero */

loc_000DD752: ;
    edx = ebx;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DD759: ;
    eax = MEM32(ebx);
    if (CMP_L(eax, 2)) goto loc_000DD781; /* jl: less (signed <) */

loc_000DD760: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, esi)) goto loc_000DD775; /* je: equal / zero */

loc_000DD76D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DD770: ;
    esp = esp + 4;
    goto loc_000DD781;

loc_000DD775: ;
    edx = 1;
    eax = ebx;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000DD781: ;
    if (CMP_NE(MEM32(0x7FA1F8), 2)) goto loc_000DD7A1; /* jne: not equal / not zero */

loc_000DD78A: ;
    PUSH32(esp, 0x5F376C);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_000DD794: ;
    PUSH32(esp, 0x5F3760);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_000DD79E: ;
    esp = esp + 8;

loc_000DD7A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD7B0
 * Original: 0x000DD7B0 - 0x000DD906 (342 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DD7B0: ;
    (void)0; /* cmp LO8(edx), 2 - flags set for next jcc */
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(edx), 2)) goto loc_000DD867; /* jne: not equal / not zero */

loc_000DD7CA: ;
    if (CMP_NE(eax, 0xC)) goto loc_000DD870; /* jne: not equal / not zero */

loc_000DD7D3: ;
    ebx = 0x14;

loc_000DD7D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x135);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x3D8F5C29);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000DD820: ;
    esi = eax;
    esp = esp + 0x48;
    if (TEST_Z(esi, esi)) goto loc_000DD85B; /* je: equal / zero */

loc_000DD829: ;
    MEM8(esi + 0x100) = 0;
    MEM8(esi + 0x101) = 0;
    MEM8(esi + 0x102) = 0;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DD843: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esi + 0xFC) = xmm0; /* movss */

loc_000DD85B: ;
    ebx--;
    if ((ebx != 0)) goto loc_000DD7D8; /* jne: not equal / not zero */

loc_000DD862: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DD867: ;
    if (CMP_EQ(LO8(edx), 0x11)) { sub_000DD906(); return; } /* je: equal / zero */

loc_000DD870: ;
    if (CMP_EQ(eax, 0x13)) { sub_000DD906(); return; } /* je: equal / zero */

loc_000DD879: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x168);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x155);
    PUSH32(esp, 0x155);
    PUSH32(esp, 0x155);
    PUSH32(esp, 0x155);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = ebp >> 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000DCB80(); /* call 0x000DCB80 */

loc_000DD8FB: ;
    esp = esp + 0xC0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD9B0
 * Original: 0x000DD9B0 - 0x000DDA0B (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD9B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DD9B0: ;
    ecx = MEM32(0x7FA20C);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(edi + 0x42));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ZX8(MEM8(edi + 0x3D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000DD9E6; /* je: equal / zero */

loc_000DD9CA: ;
    if (CMP_EQ(eax, 0xFF)) goto loc_000DD9F8; /* je: equal / zero */

loc_000DD9D1: ;
    esi = ecx;
    esi = esi << 5;
    eax = eax + esi;
    if (CMP_LE(eax, 0xFF)) goto loc_000DD9F5; /* jle: less or equal (signed <=) */

loc_000DD9DF: ;
    eax = 0xFF;
    goto loc_000DD9F5;

loc_000DD9E6: ;
    if (TEST_Z(eax, eax)) goto loc_000DD9F8; /* je: equal / zero */

loc_000DD9EA: ;
    esi = ecx;
    esi = esi << 4;
    eax = eax - esi;
    if (((int32_t)eax >= 0)) goto loc_000DD9F5; /* jns: not sign (positive) */

loc_000DD9F3: ;
    eax = 0; /* xor self */

loc_000DD9F5: ;
    MEM8(edi + 0x3D) = LO8(eax);

loc_000DD9F8: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_000DDA0B(); return; } /* jne: not equal / not zero */

loc_000DD9FC: ;
    if (TEST_NZ(eax, eax)) { sub_000DDA0B(); return; } /* jne: not equal / not zero */

loc_000DDA00: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDB40
 * Original: 0x000DDB40 - 0x000DDB97 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DDB40: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x42));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ZX8(MEM8(ecx + 0x3D));
    PUSH32(esp, esi);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000DDB70; /* je: equal / zero */

loc_000DDB50: ;
    if (CMP_EQ(eax, 0xFF)) goto loc_000DDB88; /* je: equal / zero */

loc_000DDB57: ;
    esi = MEM32(0x7FA20C);
    esi = esi << 7;
    eax = eax + esi;
    if (CMP_LE(eax, 0xFF)) goto loc_000DDB85; /* jle: less or equal (signed <=) */

loc_000DDB69: ;
    eax = 0xFF;
    goto loc_000DDB85;

loc_000DDB70: ;
    if (TEST_Z(eax, eax)) goto loc_000DDB88; /* je: equal / zero */

loc_000DDB74: ;
    esi = ZX8(MEM8(ecx + 0x44));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x7FA20C));
    eax = eax - esi;
    if (((int32_t)eax >= 0)) goto loc_000DDB85; /* jns: not sign (positive) */

loc_000DDB83: ;
    eax = 0; /* xor self */

loc_000DDB85: ;
    MEM8(ecx + 0x3D) = LO8(eax);

loc_000DDB88: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_000DDB97(); return; } /* jne: not equal / not zero */

loc_000DDB8D: ;
    if (TEST_NZ(eax, eax)) { sub_000DDB97(); return; } /* jne: not equal / not zero */

loc_000DDB91: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDBB0
 * Original: 0x000DDBB0 - 0x000DDC87 (215 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DDBB0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    if (CMP_NE(MEM32(eax + 0x68), 0x3A)) goto loc_000DDC85; /* jne: not equal / not zero */

loc_000DDBCB: ;
    edx = MEM32(eax + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58CC;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000DDBEE: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_000DDC02; /* je: equal / zero */

loc_000DDBF6: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_000DDC02; /* je: equal / zero */

loc_000DDBFD: ;
    eax = MEM32(eax + 8);
    goto loc_000DDC04;

loc_000DDC02: ;
    eax = 0; /* xor self */

loc_000DDC04: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x81);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x124);
    PUSH32(esp, 0x124);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_000DCB80(); /* call 0x000DCB80 */

loc_000DDC7F: ;
    esp = esp + 0xC0;

loc_000DDC85: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDC90
 * Original: 0x000DDC90 - 0x000DDDC2 (306 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDC90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DDC90: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0xFA);
    MEM8(esp + 0x30) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    SET_LO8(ecx, 0xEB);
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x32) = LO8(ecx);
    MEM8(esp + 0x33) = LO8(ecx);
    SET_LO8(eax, 0xD2);
    SET_LO8(ecx, 0xDC);
    MEM8(esp + 0x37) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(eax);
    SET_LO8(eax, 7);
    MEM8(esp + 0x36) = LO8(ecx);
    MEM8(esp + 0x39) = LO8(ecx);
    SET_LO8(ecx, 8);
    SET_LO8(edx, 0x14);
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    SET_LO8(eax, 0x28);
    MEM8(esp + 0x29) = LO8(ecx);
    MEM8(esp + 0x18) = LO8(ecx);
    MEM8(esp + 0x1C) = LO8(ecx);
    SET_LO8(ecx, 0xA);
    esi = MEM32(esp + 0x40);
    MEM8(esp + 0x28) = LO8(edx);
    MEM8(esp + 0x2D) = LO8(edx);
    MEM8(esp + 0x2E) = LO8(edx);
    SET_LO8(edx, 0xC8);
    MEM8(esp + 0x2A) = LO8(eax);
    MEM8(esp + 0x2B) = LO8(eax);
    MEM8(esp + 0x2C) = LO8(eax);
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x1D) = LO8(ecx);
    MEM8(esp + 0x1F) = LO8(ecx);
    MEM8(esp + 0x22) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x42));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ebx, 0x78);
    MEM8(esp + 0x13) = LO8(edx);
    MEM8(esp + 0x16) = LO8(edx);
    SET_LO8(edx, 2);
    edi = ZX8(MEM8(esi + 0x4A));
    MEM8(esp + 0xC) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0x1E) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x3D));
    MEM8(esp + 0x24) = 0x50;
    MEM8(esp + 0xE) = 0x64;
    MEM8(esp + 0x10) = 0xBE;
    MEM8(esp + 0x11) = 0xAA;
    MEM8(esp + 0x12) = LO8(ebx);
    MEM8(esp + 0x14) = 0x3C;
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(edx);
    MEM8(esp + 0x1A) = 4;
    MEM8(esp + 0x1B) = 1;
    MEM8(esp + 0x20) = LO8(edx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000DDD95; /* je: equal / zero */

loc_000DDD7A: ;
    edx = ZX8(MEM8(esp + edi + 0xC));
    if (CMP_EQ(eax, edx)) goto loc_000DDDAE; /* je: equal / zero */

loc_000DDD83: ;
    ebx = MEM32(0x7FA20C);
    ebx = ebx << 4;
    eax = eax + ebx;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    if (CMP_G(eax, edx)) eax = edx; /* cmovg */
    goto loc_000DDDAB;

loc_000DDD95: ;
    if (TEST_Z(eax, eax)) goto loc_000DDDAE; /* je: equal / zero */

loc_000DDD99: ;
    edx = ZX8(MEM8(esp + edi + 0x18));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x7FA20C));
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_000DDDAB; /* jns: not sign (positive) */

loc_000DDDA9: ;
    eax = 0; /* xor self */

loc_000DDDAB: ;
    MEM8(esi + 0x3D) = LO8(eax);

loc_000DDDAE: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000DDDC2(); return; } /* jne: not equal / not zero */

loc_000DDDB2: ;
    if (TEST_NZ(eax, eax)) { sub_000DDDC2(); return; } /* jne: not equal / not zero */

loc_000DDDB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDE20
 * Original: 0x000DDE20 - 0x000DE07E (606 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_000DDE20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(esi + eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_000DE077; /* je: equal / zero */

loc_000DDE48: ;
    eax = MEM32(esi + eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D4CB4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000DDE6B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000DDE7F; /* je: equal / zero */

loc_000DDE72: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000DDE7F; /* je: equal / zero */

loc_000DDE7A: ;
    edx = MEM32(eax + 8);
    goto loc_000DDE81;

loc_000DDE7F: ;
    edx = 0; /* xor self */

loc_000DDE81: ;
    eax = MEM32(0x84A5F8);
    esi = esi + eax;
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000DDE92: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    ebx = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000DDEC1: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(0x6490B8); /* movss */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
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
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    eax = MEM32(esp + 0x30);
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x34) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x38) = edx;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x74); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x6493A8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    esi = 0x1E;
    /* nop */

loc_000DDFA0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DDFA5: ;
    xmm7 = MEMF(0x648D10); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 * MEMF(0x648E38); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DDFC1: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648E3C); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DDFD1: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0xFF);
    xmm1 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, 0xE6);
    xmm5 = xmm5 + MEMF(esp + 0x38); /* addss */
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x135);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x41A00000);
    xmm1 = xmm1 + xmm6; /* addss */
    PUSH32(esp, 0x3D8F5C29);
    ecx = esp + 0x68;
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, ebx);
    edi = esp + 0x7C;
    MEMF(esp + 0x80) = xmm5; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000DE057: ;
    esp = esp + 0x48;
    if (CMP_EQ(eax, ebx)) goto loc_000DE070; /* je: equal / zero */

loc_000DE05E: ;
    MEM8(eax + 0x100) = LO8(ebx);
    MEM8(eax + 0x101) = LO8(ebx);
    MEM8(eax + 0x102) = LO8(ebx);

loc_000DE070: ;
    esi--;
    if ((esi != 0)) goto loc_000DDFA0; /* jne: not equal / not zero */

loc_000DE077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE080
 * Original: 0x000DE080 - 0x000DE258 (472 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_000DE080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(esi + eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_000DE251; /* je: equal / zero */

loc_000DE0A8: ;
    eax = MEM32(esi + eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F071C;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000DE0CB: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000DE0DF; /* je: equal / zero */

loc_000DE0D2: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000DE0DF; /* je: equal / zero */

loc_000DE0DA: ;
    edx = MEM32(eax + 8);
    goto loc_000DE0E1;

loc_000DE0DF: ;
    edx = 0; /* xor self */

loc_000DE0E1: ;
    eax = MEM32(0x84A5F8);
    esi = esi + eax;
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000DE0F2: ;
    xmm0 = MEMF(esp + 0x74); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    ebx = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000DE145: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    esi = 0x1E;

loc_000DE182: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DE187: ;
    xmm7 = MEMF(0x648D10); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm5 = xmm5 * MEMF(0x6493A8); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DE1A3: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x648E3C); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000DE1B3: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xB4);
    xmm5 = xmm5 - MEMF(esp + 0x34); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x38); /* subss */
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x135);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x3D8F5C29);
    ecx = esp + 0x68;
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x64); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edi = esp + 0x7C;
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000DE231: ;
    esp = esp + 0x48;
    if (CMP_EQ(eax, ebx)) goto loc_000DE24A; /* je: equal / zero */

loc_000DE238: ;
    MEM8(eax + 0x100) = LO8(ebx);
    MEM8(eax + 0x101) = LO8(ebx);
    MEM8(eax + 0x102) = LO8(ebx);

loc_000DE24A: ;
    esi--;
    if ((esi != 0)) goto loc_000DE182; /* jne: not equal / not zero */

loc_000DE251: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE260
 * Original: 0x000DE260 - 0x000DE411 (433 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE260: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x24);
    eax = eax << 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFFF;
    eax = eax + edx;
    esi = eax;
    eax = MEM32(esp + 0x3C);
    eax = eax << 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = MEM32(esp + 0x34);
    edx = edx & 0xFFF;
    eax = eax + edx;
    edi = eax;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFF);
    edx = MEM32(esp + 0x78);
    PUSH32(esp, 0x14);
    PUSH32(esp, edx);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    ecx = MEM32(esp + 0x88);
    edx = MEM32(esp + 0x7C);
    esi = (uint32_t)((int32_t)esi >> 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x7C);
    edi = (uint32_t)((int32_t)edi >> 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000DCB80(); /* call 0x000DCB80 */

loc_000DE318: ;
    edx = MEM32(esp + 0x10C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC8);
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFF);
    ecx = MEM32(esp + 0x138);
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0x12C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x164);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = MEM32(esp + 0x160);
    PUSH32(esp, 0);
    edx = MEM32(esp + 0x15C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    esi = MEM32(esp + 0x170);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DCB80(); /* call 0x000DCB80 */

loc_000DE3AD: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0x180;
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    POP32(esp, edi);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    POP32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    POP32(esp, ebp);
    MEMF(esp + 0xC) = xmm0; /* movss */
    POP32(esp, ebx);
    if (CMP_EQ(eax, 0xE)) goto loc_000DE40D; /* je: equal / zero */

loc_000DE3DF: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    ecx = 7;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000DE40D: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE420
 * Original: 0x000DE420 - 0x000DE47F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE420(void)
{

loc_000DE420: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x44);
    edx = ZX8(MEM8(eax + 0x45));
    ecx = ecx << 8;
    ecx = ecx + edx;
    edx = MEM32(0x7FA20C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x2C);
    esi = esi << 8;
    ecx = ecx + esi;
    esi = ZX8(MEM8(eax + 0x48));
    ecx = ecx + esi;
    esi = ecx;
    MEM8(eax + 0x48) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x46);
    esi = (uint32_t)((int32_t)esi >> 8);
    MEM16(eax + 0x2C) = LO16(esi);
    esi = ZX8(MEM8(eax + 0x47));
    ecx = ecx << 8;
    ecx = ecx + esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    edx = edx << 8;
    ecx = ecx + edx;
    edx = ZX8(MEM8(eax + 0x49));
    ecx = ecx + edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM16(eax + 0x30) = LO16(edx);
    MEM8(eax + 0x49) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE480
 * Original: 0x000DE480 - 0x000DE4BD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE480(void)
{

loc_000DE480: ;
    edx = 0xFF;
    edx = edx - eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    edx = edx + eax;
    eax = 0xFF;
    eax = eax - edx;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x44);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x45));
    edx = edx << 8;
    edx = edx + esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ecx + 0x44) = LO8(edx);
    MEM8(ecx + 0x45) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE4C0
 * Original: 0x000DE4C0 - 0x000DE4FD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE4C0(void)
{

loc_000DE4C0: ;
    edx = 0xFF;
    edx = edx - eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    edx = edx + eax;
    eax = 0xFF;
    eax = eax - edx;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x46);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x47));
    edx = edx << 8;
    edx = edx + esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ecx + 0x46) = LO8(edx);
    MEM8(ecx + 0x47) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE500
 * Original: 0x000DE500 - 0x000DE55B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE500(void)
{

loc_000DE500: ;
    edx = 0xFF;
    edx = edx - eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ZX8(MEM8(ecx + 0x45));
    PUSH32(esp, esi);
    esi = 0xFF;
    esi = esi - eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x44);
    eax = eax << 8;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = eax;
    MEM8(ecx + 0x45) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x46);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ecx + 0x44) = LO8(edx);
    edx = ZX8(MEM8(ecx + 0x47));
    eax = eax << 8;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = (uint32_t)((int32_t)eax >> 8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ecx + 0x46) = LO8(edx);
    MEM8(ecx + 0x47) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE560
 * Original: 0x000DE560 - 0x000DE5C8 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE560(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DE560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi + 0x42));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ZX8(MEM8(esi + 0x3D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000DE593; /* je: equal / zero */

loc_000DE570: ;
    if (CMP_EQ(eax, 0xFF)) goto loc_000DE5B9; /* je: equal / zero */

loc_000DE577: ;
    ecx = MEM32(0x7FA20C);
    ecx = ecx << 4;
    eax = eax + ecx;
    if (CMP_LE(eax, 0xFF)) goto loc_000DE58E; /* jle: less or equal (signed <=) */

loc_000DE589: ;
    eax = 0xFF;

loc_000DE58E: ;
    MEM8(esi + 0x3D) = LO8(eax);
    goto loc_000DE5B9;

loc_000DE593: ;
    if (TEST_Z(eax, eax)) goto loc_000DE5A9; /* je: equal / zero */

loc_000DE597: ;
    ecx = MEM32(0x7FA20C);
    ecx = ecx << 3;
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_000DE5A6; /* jns: not sign (positive) */

loc_000DE5A4: ;
    eax = 0; /* xor self */

loc_000DE5A6: ;
    MEM8(esi + 0x3D) = LO8(eax);

loc_000DE5A9: ;
    ecx = eax;
    ecx = ecx << 9;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM16(esi + 0x34) = LO16(ecx);
    MEM16(esi + 0x32) = LO16(ecx);

loc_000DE5B9: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_000DE5C8(); return; } /* jne: not equal / not zero */

loc_000DE5BD: ;
    if (TEST_NZ(eax, eax)) { sub_000DE5C8(); return; } /* jne: not equal / not zero */

loc_000DE5C1: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE770
 * Original: 0x000DE770 - 0x000DE7EC (124 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE770: ;
    ecx = MEM32(0x84A5F8);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x64);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_NE(ecx, 1)) { sub_000DE7EC(); return; } /* jne: not equal / not zero */

loc_000DE797: ;
    edx = MEM32(eax + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebx = 0x5F0DBC;
    MEM32(esp + 0x20) = 4;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_000DE7C4: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000DE7E0; /* je: equal / zero */

loc_000DE7CB: ;
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, esi)) goto loc_000DE7E0; /* je: equal / zero */

loc_000DE7D3: ;
    edi = MEM32(eax + 8);
    MEM32(esp + 0x20) = 1;
    g_seh_ebp = ebp; sub_000DE809(); return; /* tail jmp 0x000DE809 */

loc_000DE7E0: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x20) = 1;
    g_seh_ebp = ebp; sub_000DE809(); return; /* tail jmp 0x000DE809 */

}

/**
 * sub_000DE900
 * Original: 0x000DE900 - 0x000DE95E (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE900: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    SET_LO8(eax, ~LO8(eax));
    esi = SX8(LO8(eax));
    esi = esi & 0x40;
    esi = esi | 0x3F;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DE915: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax & esi;
    (void)0; /* cmp LO8(eax), 0x40 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_BE(LO8(eax), 0x40)) { sub_000DE95E(); return; } /* jbe: below or equal (unsigned <=) */

loc_000DE91F: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_000DE948; /* jbe: below or equal (unsigned <=) */

loc_000DE923: ;
    (void)0; /* cmp LO8(eax), 0xC0 - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_000DE93A; /* jbe: below or equal (unsigned <=) */

loc_000DE92A: ;
    ecx = ecx << 2;
    edx = 0x743490;
    edx = edx - ecx;
    xmm1 = MEMF(edx); /* movss */
    g_seh_ebp = ebp; sub_000DE96A(); return; /* tail jmp 0x000DE96A */

loc_000DE93A: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x742E90); /* subss */
    g_seh_ebp = ebp; sub_000DE96A(); return; /* tail jmp 0x000DE96A */

loc_000DE948: ;
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    ecx = 0x743290;
    ecx = ecx - edx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    g_seh_ebp = ebp; sub_000DE96A(); return; /* tail jmp 0x000DE96A */

}

/**
 * sub_000DEA90
 * Original: 0x000DEA90 - 0x000DEB04 (116 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEA90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DEA90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x42));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = ZX8(MEM8(esi + 0x3D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DEADC; /* je: equal / zero */

loc_000DEAA1: ;
    if (TEST_NZ(ebx, ebx)) goto loc_000DEABA; /* jne: not equal / not zero */

loc_000DEAA5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DEAAA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x38);
    MEM8(esi + 0x42) = LO8(edx);
    goto loc_000DEAC2;

loc_000DEABA: ;
    if (CMP_EQ(ebx, 0xFE)) goto loc_000DEAF1; /* je: equal / zero */

loc_000DEAC2: ;
    edx = MEM32(0x7FA20C);
    edx = edx << 6;
    ebx = ebx + edx;
    if (CMP_LE(ebx, 0xFE)) goto loc_000DEAEE; /* jle: less or equal (signed <=) */

loc_000DEAD5: ;
    ebx = 0xFE;
    goto loc_000DEAEE;

loc_000DEADC: ;
    if (TEST_Z(ebx, ebx)) goto loc_000DEAF1; /* je: equal / zero */

loc_000DEAE0: ;
    eax = MEM32(0x7FA20C);
    eax = eax << 4;
    ebx = ebx - eax;
    if (((int32_t)ebx >= 0)) goto loc_000DEAEE; /* jns: not sign (positive) */

loc_000DEAEC: ;
    ebx = 0; /* xor self */

loc_000DEAEE: ;
    MEM8(esi + 0x3D) = LO8(ebx);

loc_000DEAF1: ;
    SET_LO8(eax, MEM8(esi + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000DEB04(); return; } /* jne: not equal / not zero */

loc_000DEAF8: ;
    if (TEST_NZ(ebx, ebx)) { sub_000DEB04(); return; } /* jne: not equal / not zero */

loc_000DEAFC: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEC20
 * Original: 0x000DEC20 - 0x000DED52 (306 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEC20: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    if (CMP_LE(eax, ebx)) goto loc_000DED4C; /* jle: less or equal (signed <=) */

loc_000DEC33: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    esi = 0x200;
    /* nop */

loc_000DEC40: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_000DE900(); /* call 0x000DE900 */

loc_000DEC56: ;
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x44);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm1 = xmm1 * xmm2; /* mulss */
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 0x15);
    eax = 0x54;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DECB5: ;
    esp = esp + 0x18;
    if (CMP_EQ(eax, ebx)) goto loc_000DED41; /* je: equal / zero */

loc_000DECC0: ;
    SET_LO16(ecx, MEM16(esp + 0x28));
    edx = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    MEM16(eax + 0x2C) = LO16(ecx);
    ecx = MEM32(esp + 0x1C);
    MEM16(eax + 0x36) = LO16(edx);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(eax + 0x45) = LO8(ecx);
    ecx = MEM32(esp + 0x20);
    MEM8(eax + 0x44) = LO8(edx);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM16(eax + 0x2E) = LO16(ebp);
    MEM16(eax + 0x30) = LO16(edi);
    MEM8(eax + 0x38) = 0x2F;
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x3B) = 0xFF;
    MEM8(eax + 0x3C) = 0xFF;
    MEM8(eax + 0x3D) = LO8(ebx);
    MEM8(eax + 0x3E) = 0xFF;
    MEM8(eax + 0x3F) = LO8(ebx);
    MEM8(eax + 0x40) = LO8(ebx);
    MEM8(eax + 0x41) = 7;
    MEM16(eax + 0x32) = LO16(esi);
    MEM16(eax + 0x34) = LO16(esi);
    MEM8(eax + 0x42) = 0x28;
    MEM8(eax + 0x43) = LO8(ebx);
    MEM8(eax + 0x46) = LO8(edx);
    MEM8(eax + 0x47) = LO8(ecx);
    MEM8(eax + 0x48) = LO8(ebx);
    MEM8(eax + 0x49) = LO8(ebx);
    MEM8(eax + 0x4A) = LO8(ebx);
    MEM8(eax + 0x4B) = LO8(ebx);
    MEM8(eax + 0x4C) = LO8(ebx);
    MEM8(eax + 0x4D) = LO8(ebx);
    MEM32(eax + 0x50) = ebx;

loc_000DED41: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_000DEC40; /* jne: not equal / not zero */

loc_000DED4B: ;
    POP32(esp, esi);

loc_000DED4C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000DED60
 * Original: 0x000DED60 - 0x000DED6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DED60(void)
{

loc_000DED60: ;
    MEM32(0x771838) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000DED70
 * Original: 0x000DED70 - 0x000DEEB9 (329 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DED70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DED70: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = 0x100;
    ebx = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DED89: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000DEEB2; /* je: equal / zero */

loc_000DED96: ;
    SET_LO16(ecx, MEM16(esp + 0x20));
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, edi);
    MEM8(esi + 0xF0) = 0xA;
    MEM16(esi + 0xF2) = LO16(ecx);
    MEM16(esi + 0xF4) = LO16(ebp);
    MEM16(esi + 0xF6) = LO16(ebx);
    MEMF(esi + 0xF8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DEDCB: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    ebp = MEM32(esp + 0x2C);
    edi = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    edi = edi & 0x7F;
    MEMF(esp + 0x18) = xmm0; /* movss */
    ebx = esi + 0x64;
    MEM32(esp + 0x1C) = 3;
    /* nop */

loc_000DEE00: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    if (1 /* jnp after test - parity */) goto loc_000DEE45; /* jnp: not parity */

loc_000DEE1B: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = ebx + -52;
    PUSH32(esp, 0); sub_0029C650(); /* call 0x0029C650 */

loc_000DEE40: ;
    esp = esp + 0x20;
    goto loc_000DEE93;

loc_000DEE45: ;
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = ebx + -52;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000DEE70: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ebx + -4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    esp = esp + 0x24;
    MEMF(ebx + 4) = xmm0; /* movss */

loc_000DEE93: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DEE98: ;
    eax = eax & 0x3F;
    edi = edi + eax + 0x5A;
    eax = MEM32(esp + 0x1C);
    ebx = ebx + 0x40;
    eax--;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_000DEE00; /* jne: not equal / not zero */

loc_000DEEB1: ;
    POP32(esp, edi);

loc_000DEEB2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000DEEC0
 * Original: 0x000DEEC0 - 0x000DF04B (395 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000DEEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(ebx + 0xF0));
    SET_LO8(edx, LO8(edx) - 1);
    SET_LO8(eax, LO8(edx));
    (void)0; /* cmp LO8(eax), 5 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebx + 0xF0) = LO8(edx);
    if (CMP_NE(LO8(eax), 5)) { sub_000DF04B(); return; } /* jne: not equal / not zero */

loc_000DEEEA: ;
    xmm0 = MEMF(ebx + 0xF8); /* movss */
    xmm0 = xmm0 * MEMF(0x649834); /* mulss */
    eax = 0; /* xor self */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x24) = eax;
    MEM16(esp + 0x2C) = LO16(eax);
    MEM16(esp + 0x36) = LO16(eax);
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    MEM16(esp + 0x40) = LO16(eax);
    MEM16(esp + 0x42) = LO16(eax);
    MEM16(esp + 0x44) = LO16(ecx);
    MEM16(esp + 0x46) = LO16(ecx);
    SET_LO8(ecx, 0xFF);
    MEM8(esp + 0x4A) = LO8(eax);
    MEM8(esp + 0x4B) = LO8(eax);
    MEM16(esp + 0x54) = LO16(eax);
    eax = ebx + 0x30;
    MEM32(esp + 0x20) = 0x58DBB4;
    MEM32(esp + 0x28) = 4;
    MEM8(esp + 0x3F) = LO8(edx);
    MEM16(esp + 0x48) = 0x200;
    MEM8(esp + 0x4C) = LO8(ecx);
    MEM8(esp + 0x4D) = LO8(ecx);
    MEM8(esp + 0x4E) = LO8(ecx);
    MEM8(esp + 0x4F) = LO8(ecx);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 3;
    goto loc_000DEF80;

    /* nop */
    edi = edi;

loc_000DEF80: ;
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x64A048); /* movss */
    ecx = 0x10;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000DEFC8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000DEFCD: ;
    ecx = (int32_t)MEMF(esp + 0x64); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x68); /* cvttss2si */
    eax = eax & 0x7F;
    MEM16(esp + 0x30) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebx + 4));
    eax = eax + 0x55;
    MEM8(esp + 0x1C) = LO8(ecx);
    MEM16(esp + 0x32) = LO16(edx);
    edx = MEM32(esp + 0x1C);
    MEM16(esp + 0x2E) = LO16(eax);
    eax = (int32_t)MEMF(esp + 0x6C); /* cvttss2si */
    PUSH32(esp, edx);
    MEM16(esp + 0x38) = LO16(eax);
    PUSH32(esp, 8);
    eax = 0x68;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DF011: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000DF02A; /* je: equal / zero */

loc_000DF018: ;
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x64) = 0xFF;

loc_000DF02A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = ecx + 0x40;
    eax--;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_000DEF80; /* jne: not equal / not zero */

loc_000DF044: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF0A0
 * Original: 0x000DF0A0 - 0x000DF0D3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF0A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF0A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x771478);
    PUSH32(esp, esi);
    esi = 0x58DBBC;
    MEM32(esp + 4) = eax;
    eax = MEM32(0x77147C);
    ecx = 0x771464;
    MEM32(0x8472B8) = esi;
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_000DF0C5: ;
    eax = 0x801860;
    POP32(esp, esi);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00356550(); return; /* tail jmp 0x00356550 */

}

/**
 * sub_000DF0E0
 * Original: 0x000DF0E0 - 0x000DF26A (394 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF0E0(void)
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

loc_000DF0E0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    eax = 0x120;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DF0F3: ;
    esi = eax;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(esi, ecx)) goto loc_000DF267; /* je: equal / zero */

loc_000DF102: ;
    if (CMP_NE(MEM32(esp + 0xC), 0xFFFFFFFFu)) goto loc_000DF151; /* jne: not equal / not zero */

loc_000DF109: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    eax = esi + 0x4C;
    edx = 2;
    goto loc_000DF120;

    /* nop */
    edi = edi;

loc_000DF120: ;
    MEMF(eax + -28) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM16(eax + -8) = LO16(ecx);
    MEM16(eax + 0x14) = LO16(ecx);
    MEM16(eax + 0x30) = LO16(ecx);
    MEM16(eax + 0x4C) = LO16(ecx);
    eax = eax + 0x70;
    edx--;
    if ((edx != 0)) goto loc_000DF120; /* jne: not equal / not zero */

loc_000DF149: ;
    MEM8(esi + 0x111) = LO8(ecx);
    goto loc_000DF18A;

loc_000DF151: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000DF16A: ;
    /* FPU: fcos  */
    MEM8(esi + 0x10D) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000DF17D: ;
    MEM8(esi + 0x10C) = LO8(eax);
    MEM8(esi + 0x111) = 1;

loc_000DF18A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    SET_LO16(ecx, MEM16(esp + 0x10));
    SET_LO16(edx, MEM16(esp + 0x14));
    SET_LO16(eax, MEM16(esp + 0x18));
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm1; /* movss */
    MEMF(esi + 0x58) = xmm2; /* movss */
    MEMF(esi + 0x5C) = xmm1; /* movss */
    MEMF(esi + 0x74) = xmm2; /* movss */
    MEMF(esi + 0x78) = xmm3; /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    MEMF(esi + 0x94) = xmm3; /* movss */
    MEMF(esi + 0xAC) = xmm0; /* movss */
    MEMF(esi + 0xB0) = xmm1; /* movss */
    MEMF(esi + 0xC8) = xmm2; /* movss */
    MEMF(esi + 0xCC) = xmm1; /* movss */
    MEMF(esi + 0xE4) = xmm2; /* movss */
    MEMF(esi + 0xE8) = xmm3; /* movss */
    MEMF(esi + 0x100) = xmm0; /* movss */
    MEMF(esi + 0x104) = xmm3; /* movss */
    MEM16(esi + 0x114) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x20));
    MEM16(esi + 0x118) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x24));
    MEM16(esi + 0x116) = LO16(edi);
    MEM16(esi + 0x11A) = 1;
    MEM8(esi + 0x10E) = LO8(ebx);
    MEM8(esi + 0x10F) = LO8(ebx);
    MEM16(esi + 0x112) = LO16(eax);
    MEM8(esi + 0x110) = LO8(ecx);
    MEM8(esi + 0x11E) = LO8(edx);

loc_000DF267: ;
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
 * sub_000DF270
 * Original: 0x000DF270 - 0x000DF37E (270 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF270(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000DF270: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    eax = 0x120;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000DF282: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000DF37C; /* je: equal / zero */

loc_000DF28D: ;
    xmm0 = MEMF(0x649610); /* movss */
    xmm1 = MEMF(0x649C50); /* movss */
    SET_LO16(ecx, MEM16(esp + 0x10));
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM8(eax + 0x111) = 2;
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x74) = xmm1; /* movss */
    MEMF(eax + 0x78) = xmm1; /* movss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEMF(eax + 0x94) = xmm1; /* movss */
    MEMF(eax + 0xAC) = xmm0; /* movss */
    MEMF(eax + 0xB0) = xmm0; /* movss */
    MEMF(eax + 0xC8) = xmm1; /* movss */
    MEMF(eax + 0xCC) = xmm0; /* movss */
    MEMF(eax + 0xE4) = xmm1; /* movss */
    MEMF(eax + 0xE8) = xmm1; /* movss */
    MEMF(eax + 0x100) = xmm0; /* movss */
    MEMF(eax + 0x104) = xmm1; /* movss */
    MEM16(eax + 0x114) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(eax + 0x116) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x1C));
    MEM16(eax + 0x118) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x24));
    MEM16(eax + 0x112) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + 0x110) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM16(eax + 0x11A) = 1;
    MEM8(eax + 0x10E) = LO8(ebx);
    MEM8(eax + 0x10F) = LO8(ebx);
    MEM8(eax + 0x11C) = LO8(edx);
    MEM8(eax + 0x11D) = LO8(ecx);
    MEM8(eax + 0x11E) = 0xFF;

loc_000DF37C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF380
 * Original: 0x000DF380 - 0x000DF3EB (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF380: ;
    ecx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x112));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(ecx)));
    MEM16(esi + 0x11A) = MEM16(esi + 0x11A) + LO16(eax);
    eax = ZX8(MEM8(esi + 0x10E));
    eax = eax - ecx;
    if (CMP_G(eax & eax, 0)) goto loc_000DF3E3; /* jg: greater (signed >) */

loc_000DF3AA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DF3E9; /* jne: not equal / not zero */

loc_000DF3B3: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000DF3BA: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000DF3E9; /* jl: less (signed <) */

loc_000DF3C1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000DF3D6; /* je: equal / zero */

loc_000DF3CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000DF3D1: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DF3D6: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000DF3E3: ;
    MEM8(esi + 0x10E) = LO8(eax);

loc_000DF3E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF3F0
 * Original: 0x000DF3F0 - 0x000DFA6A (1658 bytes, 384 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF3F0: ;
    esp = esp - 0x44;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    SET_LO8(eax, MEM8(edi + 0x10E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000DFA65; /* je: equal / zero */

loc_000DF406: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x114);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x118);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edi + 0x10F));
    MEM32(esp + 0x50) = eax;
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(edi + 0x116);
    eax = eax + edx;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x10E));
    SET_LO8(ebx, LO8(ebx) >> 1);
    esi = (uint32_t)((int32_t)esi >> 2);
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x11A);
    if (CMP_AE(LO8(eax), LO8(ebx))) goto loc_000DF483; /* jae: above or equal (unsigned >=) */

loc_000DF450: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x112);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xE);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    (void)0; /* cmp LO16(eax), 1 - flags set for next jcc */
    MEM16(edi + 0x112) = LO16(eax);
    if (CMP_GE(LO16(eax), 1)) goto loc_000DF483; /* jge: greater or equal (signed >=) */

loc_000DF47A: ;
    MEM16(edi + 0x112) = 1;

loc_000DF483: ;
    edx = ZX8(MEM8(edi + 0x10E));
    if (CMP_GE(edx, esi)) goto loc_000DF4A3; /* jge: greater or equal (signed >=) */

loc_000DF48E: ;
    eax = ZX8(MEM8(edi + 0x11E));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = eax;
    MEM32(esp + 0x14) = esi;
    goto loc_000DF4B0;

loc_000DF4A3: ;
    edx = ZX8(MEM8(edi + 0x11E));
    MEM32(esp + 0x14) = edx;
    esi = edx;

loc_000DF4B0: ;
    SET_LO8(eax, MEM8(edi + 0x111));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000DF51D; /* jne: not equal / not zero */

loc_000DF4BA: ;
    edx = MEM32(esp + 0x58);
    ebx = MEM32(esp + 0x10);
    eax = edx;
    eax = eax - ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + edi;
    MEMF(eax + 0x2C) = xmm0; /* movss */
    ebp = ebx;
    ebp = ebp - ecx;
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    edx = edx + ecx;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x48) = xmm2; /* movss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    MEMF(eax + 0x64) = xmm2; /* movss */
    ecx = ecx + ebx;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x6C) = xmm1; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x88) = xmm1; /* movss */
    goto loc_000DF8EE;

loc_000DF51D: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_000DF5EF; /* jne: not equal / not zero */

loc_000DF525: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x10C);
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x10D);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    eax = 0x81020409u;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 6);
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    eax = 0x81020409u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x58);
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 6);
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    eax = eax - esi;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = edx + edi;
    edx = ecx + ebp;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x10);
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    edx = edx - ebx;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x58);
    MEMF(eax + 0x34) = xmm2; /* movss */
    esi = esi + edx;
    edx = MEM32(esp + 0x10);
    xmm3 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(esp + 0x14);
    MEMF(eax + 0x48) = xmm3; /* movss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    ebx = ebx + edx;
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    MEMF(eax + 0x64) = xmm3; /* movss */
    ebp = ebp - ecx;
    xmm3 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(eax + 0x68) = xmm3; /* movss */
    MEMF(eax + 0x6C) = xmm1; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm3; /* movss */
    MEMF(eax + 0x88) = xmm2; /* movss */
    goto loc_000DF8EE;

loc_000DF5EF: ;
    SET_LO8(ebx, MEM8(edi + 0x11C));
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(eax, LO8(ebx));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm5 = xmm1; /* movaps */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000DF635: ;
    SET_LO8(eax, MEM8(edi + 0x11D));
    xmm7 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm7; /* movss */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000DF649: ;
    SET_LO8(eax, LO8(ebx));
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_000DF653: ;
    SET_LO8(eax, MEM8(edi + 0x11D));
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_000DF661: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    xmm6 = MEMF(esp + 0x24); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * MEMF(0x648CF8); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * MEMF(0x648CF8); /* mulss */
    xmm5 = xmm5 + xmm4; /* addss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    xmm7 = MEMF(esp + 0x1C); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x2C); /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x2C); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = (float)(int32_t)MEM32(esp + 0x58); /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    eax = ecx + edi;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(eax + 0x2C) = xmm6; /* movss */
    xmm6 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x28); /* addss */
    MEMF(eax + 0x30) = xmm6; /* movss */
    xmm6 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x2C); /* addss */
    MEMF(eax + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x38); /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x38); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x30); /* addss */
    MEMF(eax + 0x48) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x34); /* addss */
    MEMF(eax + 0x4C) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x38); /* addss */
    MEMF(eax + 0x50) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x3C); /* movss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x44); /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x44); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x3C); /* addss */
    MEMF(eax + 0x64) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x40); /* addss */
    MEMF(eax + 0x68) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x44); /* addss */
    MEMF(eax + 0x6C) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm5 = xmm5 + xmm4; /* addss */
    MEMF(eax + 0x80) = xmm5; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(eax + 0x88) = xmm0; /* movss */

loc_000DF8EE: ;
    esi = esi << 0x18;
    esi = esi | 0xFFFFFF;
    ebx = esi;
    esi = 0x1D;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_000DF903: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = eax + 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    MEM32(eax + 4) = 0x40601818;
    xmm0 = MEMF(edx + edi + 0x40); /* movss */
    xmm1 = MEMF(edx + edi + 0x3C); /* movss */
    xmm2 = MEMF(edx + edi + 0x34); /* movss */
    xmm3 = MEMF(edx + edi + 0x30); /* movss */
    eax = eax + 4;
    ecx = edx + edi;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    edx = MEM32(ecx + 0x48);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    xmm1 = MEMF(ecx + 0x58); /* movss */
    xmm2 = MEMF(ecx + 0x50); /* movss */
    xmm3 = MEMF(ecx + 0x4C); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm1 = MEMF(ecx + 0x74); /* movss */
    xmm2 = MEMF(ecx + 0x6C); /* movss */
    xmm3 = MEMF(ecx + 0x68); /* movss */
    edx = MEM32(ecx + 0x64);
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x94); /* movss */
    xmm1 = MEMF(ecx + 0x90); /* movss */
    xmm2 = MEMF(ecx + 0x88); /* movss */
    xmm3 = MEMF(ecx + 0x84); /* movss */
    ecx = MEM32(ecx + 0x80);
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = ebx;
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, ebp);
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_000DFA65: ;
    POP32(esp, edi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000DFA70
 * Original: 0x000DFA70 - 0x000DFD8B (795 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFA70(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DFA70: ;
    SET_LO16(ecx, MEM16(0x77183C));
    eax = SX16(LO16(ecx));
    SET_LO16(ecx, LO16(ecx) + 1);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(ecx), 5 - flags set for next jcc */
    MEM32(0x8472B8) = 0x58DB04;
    MEM32(0x77147C) = eax;
    MEM16(0x77183C) = LO16(ecx);
    if (CMP_L(LO16(ecx), 5)) goto loc_000DFAA2; /* jl: less (signed <) */

loc_000DFA9B: ;
    MEM16(0x77183C) = LO16(ebx);

loc_000DFAA2: ;
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    esi = esi << 2;
    ecx = MEM32(esi + 0x69E164);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = esi + 0x69E164;
    if (CMP_NE(ecx, ebx)) goto loc_000DFAC9; /* jne: not equal / not zero */

loc_000DFAB9: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x69E160);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000DFAC6: ;
    esp = esp + 8;

loc_000DFAC9: ;
    esi = MEM32(esi + 0x69E164);
    if (CMP_NE(esi, ebx)) goto loc_000DFAE1; /* jne: not equal / not zero */

loc_000DFAD3: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000DFADB: ;
    MEM32(0x771764) = ebx;

loc_000DFAE1: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_000DFAF8; /* je: equal / zero */

loc_000DFAE9: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_000DFAF2: ;
    MEM32(0x771764) = esi;

loc_000DFAF8: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_000DFB13; /* je: equal / zero */

loc_000DFB07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000DFB0D: ;
    MEM32(0x771760) = esi;

loc_000DFB13: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    ecx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    edx = esi + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000DFB37: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = esi + edx + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000DFB50: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_000DFB6A; /* je: equal / zero */

loc_000DFB5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000DFB64: ;
    MEM32(0x77182C) = esi;

loc_000DFB6A: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_000DFB7E; /* je: equal / zero */

loc_000DFB72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000DFB78: ;
    MEM32(0x771828) = ebx;

loc_000DFB7E: ;
    eax = MEM32(0x771824);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_000DFBA5; /* je: equal / zero */

loc_000DFB8D: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DFB99: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_000DFBA5: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_000DFBC5; /* je: equal / zero */

loc_000DFBAD: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DFBB9: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_000DFBC5: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_000DFBD9; /* je: equal / zero */

loc_000DFBCD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000DFBD3: ;
    MEM32(0x77181C) = edi;

loc_000DFBD9: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_000DFBFF; /* je: equal / zero */

loc_000DFBE7: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DFBF3: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_000DFBFF: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_000DFC1F; /* je: equal / zero */

loc_000DFC07: ;
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DFC13: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_000DFC1F: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_000DFC3D; /* je: equal / zero */

loc_000DFC27: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_000DFC3D: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000DFC45: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_000DFC69; /* je: equal / zero */

loc_000DFC58: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_000DFC69: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_000DFC82; /* je: equal / zero */

loc_000DFC71: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_000DFC82: ;
    esi = MEM32(0x7717A4);
    edx = 4;
    if (CMP_EQ(esi, edx)) goto loc_000DFCA2; /* je: equal / zero */

loc_000DFC91: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_000DFCA2: ;
    if (CMP_EQ(MEM32(0x771784), ecx)) goto loc_000DFCBB; /* je: equal / zero */

loc_000DFCAA: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_000DFCBB: ;
    if (CMP_EQ(MEM32(0x771774), ebx)) goto loc_000DFCD4; /* je: equal / zero */

loc_000DFCC3: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ebx;
    MEM32(0x771774) = ebx;

loc_000DFCD4: ;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_000DFCFD; /* je: equal / zero */

loc_000DFCEC: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_000DFCFD: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_000DFD16; /* je: equal / zero */

loc_000DFD05: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_000DFD16: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = ebx;
    POP32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_000DFD4D; /* je: equal / zero */

loc_000DFD35: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DFD41: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_000DFD4D: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_000DFD73; /* je: equal / zero */

loc_000DFD5B: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000DFD67: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_000DFD73: ;
    (void)0; /* cmp MEM32(0x77175C), ebx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_000DFD89; /* je: equal / zero */

loc_000DFD7C: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000DFD83: ;
    MEM32(0x77175C) = ebx;

loc_000DFD89: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DFD90
 * Original: 0x000DFD90 - 0x000DFDFD (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFD90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000DFDC2; /* je: equal / zero */

loc_000DFDA8: ;
    ecx = ebp;
    /* nop */

loc_000DFDB0: ;
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000DFDC2; /* je: equal / zero */

loc_000DFDB6: ;
    SET_LO16(eax, MEM16(ecx + 2));
    ecx = ecx + 2;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_000DFDB0; /* jne: not equal / not zero */

loc_000DFDC2: ;
    eax = MEM32(esp + 0x18);
    xmm0 = (float)(int32_t)MEM32(eax + 0x2044); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    edi = 0; /* xor self */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_000DFDFD(); return; } /* jbe: below or equal (unsigned <=) */

loc_000DFDF3: ;
    MEM32(esp + 0x14) = 0x14;
    g_seh_ebp = ebp; sub_000DFE15(); return; /* tail jmp 0x000DFE15 */

}

/**
 * sub_000DFEC0
 * Original: 0x000DFEC0 - 0x000DFF05 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFEC0(void)
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

loc_000DFEC0: ;
    PUSH32(esp, ecx);
    SET_LO16(eax, MEM16(ecx));
    edx = 0; /* xor self */
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000DFEE3; /* je: equal / zero */

loc_000DFECB: ;
    goto loc_000DFED0;

    /* nop */

loc_000DFED0: ;
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000DFEE3; /* je: equal / zero */

loc_000DFED6: ;
    SET_LO16(eax, MEM16(ecx + 2));
    ecx = ecx + 2;
    edx++;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_000DFED0; /* jne: not equal / not zero */

loc_000DFEE3: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_000DFEF3; /* jge: greater or equal (signed >=) */

loc_000DFEED: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000DFEF3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00471288(); return; /* tail jmp 0x00471288 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000DFF10
 * Original: 0x000DFF10 - 0x000DFF76 (102 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFF10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, 1);
    ecx = eax;
    if (CMP_A(eax, ebx)) goto loc_000DFF65; /* ja: above (unsigned >) */

loc_000DFF20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_000DFF30;

    /* nop */
    edi = edi;

loc_000DFF30: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    if (CMP_NE(LO16(eax), 0x3D)) goto loc_000DFF47; /* jne: not equal / not zero */

loc_000DFF3E: ;
    MEM16(edi) = 0;
    SET_LO8(edx, 0); /* xor self */
    goto loc_000DFF5F;

loc_000DFF47: ;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_000DFF5F; /* je: equal / zero */

loc_000DFF4D: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000DFF59; /* je: equal / zero */

loc_000DFF51: ;
    MEM16(edi) = LO16(eax);
    edi = edi + 2;
    goto loc_000DFF5F;

loc_000DFF59: ;
    MEM16(ebp + esi * 2) = LO16(eax);
    esi++;

loc_000DFF5F: ;
    ecx++;
    if (CMP_BE(ecx, ebx)) goto loc_000DFF30; /* jbe: below or equal (unsigned <=) */

loc_000DFF64: ;
    POP32(esp, edi);

loc_000DFF65: ;
    MEM16(ebp + esi * 2) = 0;
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DFF80
 * Original: 0x000DFF80 - 0x000E019C (540 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFF80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000DFF80: ;
    esp = esp - 0x500;
    PUSH32(esp, esi);
    eax = esp + 0x304;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50C);
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_000DFF10(); /* call 0x000DFF10 */

loc_000DFFA6: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E0194; /* je: equal / zero */

loc_000DFFB1: ;
    if (CMP_EQ(MEM16(esp + 0x304), LO16(esi))) goto loc_000DFFDF; /* je: equal / zero */

loc_000DFFBB: ;
    goto loc_000DFFC0;

    /* nop */

loc_000DFFC0: ;
    SET_LO8(eax, MEM8(esp + esi * 2 + 0x304));
    MEM8(esp + esi + 4) = LO8(eax);
    esi++;
    if (CMP_EQ(esi, 0xFF)) goto loc_000DFFDF; /* je: equal / zero */

loc_000DFFD4: ;
    if (CMP_NE(MEM16(esp + esi * 2 + 0x304), 0)) goto loc_000DFFC0; /* jne: not equal / not zero */

loc_000DFFDF: ;
    ecx = esp + 0x104;
    PUSH32(esp, 0x5F38C0);
    PUSH32(esp, ecx);
    MEM8(esp + esi + 0xC) = 0;
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000DFFF6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E0014; /* jne: not equal / not zero */

loc_000DFFFD: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E0007: ;
    esp = esp + 4;
    MEM32(edi) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E0014: ;
    eax = esp + 0x104;
    PUSH32(esp, 0x5F38B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E0026: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E0045; /* jne: not equal / not zero */

loc_000E002D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E0037: ;
    esp = esp + 4;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E0045: ;
    edx = esp + 0x104;
    PUSH32(esp, 0x5F38A4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E0057: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E0076; /* jne: not equal / not zero */

loc_000E005E: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E0068: ;
    esp = esp + 4;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E0076: ;
    ecx = esp + 0x104;
    PUSH32(esp, 0x5F3898);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E0088: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E00A7; /* jne: not equal / not zero */

loc_000E008F: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E0099: ;
    esp = esp + 4;
    MEM32(edi + 0xC) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E00A7: ;
    eax = esp + 0x104;
    PUSH32(esp, 0x5F388C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E00B9: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E00D8; /* jne: not equal / not zero */

loc_000E00C0: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E00CA: ;
    esp = esp + 4;
    MEM32(edi + 0x18) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E00D8: ;
    edx = esp + 0x104;
    PUSH32(esp, 0x5F3880);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E00EA: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E0109; /* jne: not equal / not zero */

loc_000E00F1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E00FB: ;
    esp = esp + 4;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E0109: ;
    ecx = esp + 0x104;
    PUSH32(esp, 0x5F3874);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E011B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E013A; /* jne: not equal / not zero */

loc_000E0122: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E012C: ;
    esp = esp + 4;
    MEM32(edi + 0x10) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E013A: ;
    eax = esp + 0x104;
    PUSH32(esp, 0x5F3868);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E014C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E016B; /* jne: not equal / not zero */

loc_000E0153: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E015D: ;
    esp = esp + 4;
    MEM32(edi + 0x14) = eax;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

loc_000E016B: ;
    edx = esp + 0x104;
    PUSH32(esp, 0x5F3854);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_000E017D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000E0194; /* jne: not equal / not zero */

loc_000E0184: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_000E018E: ;
    MEM32(edi + 0x20) = eax;
    esp = esp + 4;

loc_000E0194: ;
    POP32(esp, esi);
    esp = esp + 0x500;
    esp += 4; return; /* ret */

}

/**
 * sub_000E01A0
 * Original: 0x000E01A0 - 0x000E02BC (284 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E01A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E01A0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM16(esi), LO16(ebp) - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = eax;
    if (CMP_EQ(MEM16(esi), LO16(ebp))) goto loc_000E02A3; /* je: equal / zero */

loc_000E01DB: ;
    goto loc_000E01E0;

    /* nop */

loc_000E01E0: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + ebp * 2));
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000E02A3; /* je: equal / zero */

loc_000E01F0: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000E02A3; /* je: equal / zero */

loc_000E01F9: ;
    if (CMP_EQ(LO16(eax), 0x5B)) goto loc_000E0210; /* je: equal / zero */

loc_000E01FF: ;
    SET_LO16(eax, MEM16(esi + ebp * 2 + 2));
    ebp++;
    if (CMP_NE(LO16(eax), 0xBD)) goto loc_000E01F0; /* jne: not equal / not zero */

loc_000E020B: ;
    goto loc_000E02A3;

loc_000E0210: ;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_000E02A3; /* je: equal / zero */

loc_000E0219: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + ebp * 2));
    (void)0; /* cmp LO16(eax), 0xBD - flags set for next jcc */
    ecx = ebp;
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000E0242; /* je: equal / zero */

loc_000E0227: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000E0242; /* je: equal / zero */

loc_000E022C: ;
    if (CMP_EQ(LO16(eax), 0x5D)) { sub_000E02BC(); return; } /* je: equal / zero */

loc_000E0236: ;
    SET_LO16(eax, MEM16(esi + ecx * 2 + 2));
    ecx++;
    if (CMP_NE(LO16(eax), 0xBD)) goto loc_000E0227; /* jne: not equal / not zero */

loc_000E0242: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    ebx = MEM32(esp + 0x10);
    ecx = ebp + 1;
    ebx--;
    PUSH32(esp, ecx);
    edi = esp + 0x18;
    edx = esi;
    PUSH32(esp, 0); sub_000DFF80(); /* call 0x000DFF80 */

loc_000E025E: ;
    edx = MEM32(esp + 0x14);
    esp = esp + 4;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_000E0298; /* je: equal / zero */

loc_000E026A: ;
    SET_LO16(eax, MEM16(esi + edx * 2 + 2));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ecx = ebp;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000E0292; /* je: equal / zero */

loc_000E0276: ;
    edx = esi + edx * 2 + 2;
    /* nop */

loc_000E0280: ;
    MEM16(esi + ecx * 2) = LO16(eax);
    edx = edx + 2;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx));
    ecx++;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_000E0280; /* jne: not equal / not zero */

loc_000E0292: ;
    MEM16(esi + ecx * 2) = 0;

loc_000E0298: ;
    if (CMP_NE(MEM16(esi + ebp * 2), 0)) goto loc_000E01E0; /* jne: not equal / not zero */

loc_000E02A3: ;
    eax = MEM32(esp + 0x3C);
    esi = esp + 0x14;
    edi = eax;
    ecx = 9;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000E02D0
 * Original: 0x000E02D0 - 0x000E031F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E02D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E02D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = 0x5F3844;
    PUSH32(esp, 0); sub_001F5750(); /* call 0x001F5750 */

loc_000E02EC: ;
    ebx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F3828);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_000E0304: ;
    esp = esp + 0x18;
    esi = 0; /* xor self */
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_000E031F(); return; } /* jne: not equal / not zero */

loc_000E030E: ;
    PUSH32(esp, 0x5F3804);
    PUSH32(esp, 0x771AC0);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_000E031D: ;
    g_seh_ebp = ebp; sub_000E0335(); return; /* tail jmp 0x000E0335 */

}
