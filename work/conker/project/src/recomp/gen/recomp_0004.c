/**
 * Burnout 3 - Recompiled code chunk 4
 * Functions: 250 (0x0004E570 - 0x000655C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0004E570
 * Original: 0x0004E570 - 0x0004E5F4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E570(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E570: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0004E5F4(); return; } /* je: equal / zero */

loc_0004E58B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0004E59F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004E5D4; /* je: equal / zero */

loc_0004E5AA: ;
    ecx = 0x75DAA8;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_0004E5B4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0004E5D1: ;
    esp = esp + 0x14;

loc_0004E5D4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004E5ED: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E620
 * Original: 0x0004E620 - 0x0004E63D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E620(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0004E620: ;
    edx = MEM32(ecx);
    if (CMP_NE(edx, 3)) { sub_0004E63D(); return; } /* jne: not equal / not zero */

loc_0004E627: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEM8(ecx + 9) = 0;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E730
 * Original: 0x0004E730 - 0x0004E858 (296 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E730(void)
{
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

loc_0004E730: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 8); /* movss */
    esp = esp - 8;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0004E758; /* jp: parity */

loc_0004E74B: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0004E852; /* jnp: not parity */

loc_0004E758: ;
    if (TEST_Z(edx, edx)) goto loc_0004E852; /* je: equal / zero */

loc_0004E760: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    /* comiss xmm0, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm0 >= MEMF(esp + 4))) goto loc_0004E852; /* jae: above or equal (unsigned >=) */

loc_0004E795: ;
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    xmm5 = MEMF(0x648D88); /* movss */
    xmm0 = xmm5; /* movaps */
    if (CMP_LE(edx, 2)) goto loc_0004E7AD; /* jle: less or equal (signed <=) */

loc_0004E7A5: ;
    xmm0 = MEMF(0x649084); /* movss */

loc_0004E7AD: ;
    if (CMP_NE(edx, 1)) goto loc_0004E7BF; /* jne: not equal / not zero */

loc_0004E7B2: ;
    xmm3 = MEMF(0x648DE0); /* movss */
    xmm4 = xmm2; /* movaps */
    goto loc_0004E7E0;

loc_0004E7BF: ;
    xmm4 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648DE0); /* addss */
    eax = edx + -1;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 / xmm1; /* divss */
    xmm3 = xmm0; /* movaps */

loc_0004E7E0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0004E7EF: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm0 = xmm0 - xmm3; /* subss */
    if (CMP_LE(edx & edx, 0)) goto loc_0004E852; /* jle: less or equal (signed <=) */

loc_0004E7FC: ;
    xmm3 = MEMF(0x648D84); /* movss */
    xmm2 = MEMF(0x648D30); /* movss */
    /* nop */

loc_0004E810: ;
    xmm1 = xmm0; /* movaps */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm3 < xmm1)) goto loc_0004E828; /* jb: below (unsigned <) */

loc_0004E81E: ;
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_0004E828: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 < xmm5)) goto loc_0004E837; /* jb: below (unsigned <) */

loc_0004E82D: ;
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_0004E837: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648EA8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_0004E858(); return; } /* ja: above (unsigned >) */

loc_0004E849: ;
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    xmm0 = xmm0 + xmm4; /* addss */
    if (CMP_L(eax, edx)) goto loc_0004E810; /* jl: less (signed <) */

loc_0004E852: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0004E870
 * Original: 0x0004E870 - 0x0004E9A8 (312 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E870: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x76EF28));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ecx * 4 + 0x76F0E8) = ebx;
    MEM32(0x76F0E4) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004E9A5; /* je: equal / zero */

loc_0004E88F: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    (void)0; /* cmp MEM16(edx + 0x76EFB8), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 8) = edx;
    if (CMP_BE(MEM16(edx + 0x76EFB8), 3)) goto loc_0004E8C1; /* jbe: below or equal (unsigned <=) */

loc_0004E8A3: ;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    esi = MEM32(esi + 0x76EA70);
    SET_LO16(esi, MEM16(esi + 0x12));
    if (CMP_EQ(LO16(esi), 0xD8F1)) goto loc_0004E8C1; /* je: equal / zero */

loc_0004E8B9: ;
    eax = SX16(LO16(esi));
    goto loc_0004E972;

loc_0004E8C1: ;
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(eax));
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ebp, ebx)) goto loc_0004E920; /* jle: less or equal (signed <=) */

loc_0004E8CA: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    edi = edx;
    eax = eax + 0x76EA70;
    edx = ebp;
    goto loc_0004E8E0;

    /* nop */

loc_0004E8E0: ;
    if (CMP_EQ(MEM16(edi + 0x76F030), 0)) goto loc_0004E90F; /* je: equal / zero */

loc_0004E8EA: ;
    if (CMP_EQ(MEM16(edi + 0x76EFB8), 0)) goto loc_0004E90F; /* je: equal / zero */

loc_0004E8F4: ;
    esi = MEM32(eax);
    esi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    if (CMP_GE(MEM32(ecx * 4 + 0x76F0E8), esi)) goto loc_0004E90F; /* jge: greater or equal (signed >=) */

loc_0004E903: ;
    MEM32(ecx * 4 + 0x76F0E8) = esi;
    ebx = 1;

loc_0004E90F: ;
    edi = edi + 2;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0004E8E0; /* jne: not equal / not zero */

loc_0004E918: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0004E969; /* jne: not equal / not zero */

loc_0004E91C: ;
    edx = MEM32(esp + 0x10);

loc_0004E920: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0004E969; /* jle: less or equal (signed <=) */

loc_0004E924: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + 0x76E980;
    edi = edi;

loc_0004E930: ;
    if (CMP_EQ(MEM16(edx + 0x76F030), 0)) goto loc_0004E960; /* je: equal / zero */

loc_0004E93A: ;
    SET_LO16(esi, MEM16(edx + 0x76EF40));
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_0004E960; /* je: equal / zero */

loc_0004E946: ;
    edi = MEM32(eax);
    esi = ZX16(LO16(esi));
    esi = (uint32_t)(int32_t)SMEM16(edi + esi * 8 + -2);
    if (CMP_GE(MEM32(ecx * 4 + 0x76F0E8), esi)) goto loc_0004E960; /* jge: greater or equal (signed >=) */

loc_0004E959: ;
    MEM32(ecx * 4 + 0x76F0E8) = esi;

loc_0004E960: ;
    edx = edx + 2;
    eax = eax + 4;
    ebp--;
    if ((ebp != 0)) goto loc_0004E930; /* jne: not equal / not zero */

loc_0004E969: ;
    eax = MEM32(ecx * 4 + 0x76F0E8);
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0004E972: ;
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    MEM32(0x76F0E4) = eax;
    eax = eax << 8;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    esi = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(ecx * 4 + 0x76F0E8) = eax;
    POP32(esp, esi);

loc_0004E9A5: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E9B0
 * Original: 0x0004E9B0 - 0x0004E9D4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E9B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E9B0: ;
    edx = ZX8(MEM8(ecx + 0x76EF28));
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0004E9D3; /* jle: less or equal (signed <=) */

loc_0004E9BD: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ecx = ecx + 0x76EFB8;
    PUSH32(esp, esi);

loc_0004E9C7: ;
    esi = ZX16(MEM16(ecx));
    eax = eax + esi;
    ecx = ecx + 2;
    edx--;
    if ((edx != 0)) goto loc_0004E9C7; /* jne: not equal / not zero */

loc_0004E9D2: ;
    POP32(esp, esi);

loc_0004E9D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E9E0
 * Original: 0x0004E9E0 - 0x0004EA31 (81 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E9E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D34); /* movss */
    edx = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(eax * 4 + 0x76F0F0) = 0xFFFFFF9Cu;
    MEM32(eax * 4 + 0x76F0F8) = edx;
    MEMF(0x847118) = xmm0; /* movss */
    MEMF(0x84711C) = xmm1; /* movss */
    MEM8(eax + 0x76F0D8) = LO8(edx);
    MEM16(0x7655F4) = LO16(edx);
    MEM32(0x76F0A8) = ecx;
    if (CMP_EQ(eax, edx)) { sub_0004EA31(); return; } /* je: equal / zero */

loc_0004EA29: ;
    MEM8(eax + 0x76EF28) = LO8(edx);
    g_seh_ebp = ebp; sub_0004EA38(); return; /* tail jmp 0x0004EA38 */

}

/**
 * sub_0004EB30
 * Original: 0x0004EB30 - 0x0004EB8C (92 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004EB30: ;
    esp = esp - 0x114;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0004EB49: ;
    MEM32(esp + 0x120) = esi;
    esi = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 4) = esi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0004EB6A: ;
    /* nop */

loc_0004EB70: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_0004EB8C(); return; } /* jl: less (signed <) */

loc_0004EB7E: ;
    if (CMP_G(eax, 0x3E5)) { sub_0004EB8C(); return; } /* jg: greater (signed >) */

loc_0004EB85: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0004EB8A: ;
    goto loc_0004EB70;

}

/**
 * sub_0004EBE0
 * Original: 0x0004EBE0 - 0x0004EC10 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EBE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004EBE0: ;
    SET_LO8(eax, MEM8(0x7655E9));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004EC0F; /* jne: not equal / not zero */

loc_0004EBEE: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_0004EBF5: ;
    eax = eax & MEM32(esi * 8 + 0x765608);
    edx = edx & MEM32(esi * 8 + 0x76560C);
    eax = eax | edx;
    if ((eax == 0)) goto loc_0004EC0D; /* je: equal / zero */

loc_0004EC07: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0004EC0D: ;
    eax = 0; /* xor self */

loc_0004EC0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004EC10
 * Original: 0x0004EC10 - 0x0004F87A (3178 bytes, 914 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EC10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004EC10: ;
    esp = esp - 0x128;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x8472F4);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) goto loc_0004EC3D; /* je: equal / zero */

loc_0004EC26: ;
    MEM32(0x8472F8) = ebx;
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_0004EC31: ;
    MEM32(0x849360) = ebx;
    MEM32(0x8472F4) = ebx;

loc_0004EC3D: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x568);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(0x76F0B4) = 0;
    if (CMP_EQ(ecx, ebx)) goto loc_0004EC5A; /* je: equal / zero */

loc_0004EC53: ;
    MEM8(ecx + 0x8D) = 0;

loc_0004EC5A: ;
    ebp = MEM32(esp + 0x13C);
    (void)0; /* cmp ebp, 0x25 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ebp, 0x25)) ? 1 : 0); /* sete */
    MEM8(0x847134) = LO8(ecx);
    ecx = MEM32(eax + 0x568);
    if (CMP_EQ(ecx, ebx)) goto loc_0004EC95; /* je: equal / zero */

loc_0004EC77: ;
    SET_LO8(edx, MEM8(ecx + 0xD));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004EC95; /* je: equal / zero */

loc_0004EC7E: ;
    MEM32(ecx + 0xA0) = ebx;
    edx = MEM32(eax + 0x568);
    MEM8(edx + 0xD) = 0;
    MEM8(eax + 0x17D) = 0;

loc_0004EC95: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0004ECE8; /* je: equal / zero */

loc_0004EC9F: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    if (CMP_NE(MEM32(ecx + eax + -1640), 0x28)) goto loc_0004ECE8; /* jne: not equal / not zero */

loc_0004ECB2: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0004ECC1: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebx);
    eax = 0x2C2;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_0004ECE5: ;
    esp = esp + 0x18;

loc_0004ECE8: ;
    if (CMP_NE(ebp, 0x1D)) goto loc_0004ED30; /* jne: not equal / not zero */

loc_0004ECED: ;
    if (CMP_NE(MEM32(0x7FA1F8), ebp)) goto loc_0004ED30; /* jne: not equal / not zero */

loc_0004ECF5: ;
    eax = MEM32(esp + 0x140);
    eax--;
    if (CMP_A(eax, 7)) goto loc_0004ED30; /* ja: above (unsigned >) */

loc_0004ED02: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4F87C); /* switch: 8 entries, 3 targets */
    if (_jt == 0x0004ED09u) goto loc_0004ED09;
    if (_jt == 0x0004ED15u) goto loc_0004ED15;
    if (_jt == 0x0004ED21u) goto loc_0004ED21;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004ED09: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_0004ED0E: ;
    esi = 0x5D51B8;
    goto loc_0004ED2B;

loc_0004ED15: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_0004ED1A: ;
    esi = 0x5D51A4;
    goto loc_0004ED2B;

loc_0004ED21: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_0004ED26: ;
    esi = 0x5D51C4;

loc_0004ED2B: ;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_0004ED30: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004ED43; /* je: equal / zero */

loc_0004ED39: ;
    edx = 0x7C;
    PUSH32(esp, 0); sub_000DA640(); /* call 0x000DA640 */

loc_0004ED43: ;
    edi = MEM32(esp + 0x144);
    if (CMP_EQ(MEM8(edi + 0x76F0E0), 1)) goto loc_0004F86F; /* je: equal / zero */

loc_0004ED57: ;
    SET_LO8(eax, MEM8(0x76F0B6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004F86F; /* jne: not equal / not zero */

loc_0004ED64: ;
    eax = MEM32(esp + 0x14C);
    SET_LO8(edx, MEM8(esp + 0x148));
    MEM32(0x7655EC) = eax;
    (void)0; /* cmp ebp, MEM32(0x7FA1F8) - flags set for next jcc */
    MEM8(0x7655F0) = LO8(edx);
    if (CMP_EQ(ebp, MEM32(0x7FA1F8))) goto loc_0004EDD4; /* je: equal / zero */

loc_0004ED85: ;
    if (CMP_NE(MEM32(0x776574), 3)) goto loc_0004ED9B; /* jne: not equal / not zero */

loc_0004ED8E: ;
    if (CMP_EQ(MEM8(0x7819D6), 2)) goto loc_0004F86F; /* je: equal / zero */

loc_0004ED9B: ;
    SET_LO8(eax, MEM8(esp + 0x140));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    esi = ebp;
    MEM8(0x76F0B6) = LO8(eax);
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_0004EDB5: ;
    SET_LO8(eax, MEM8(edi + 0x76F0E0));
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    MEM8(0x76F0B5) = LO8(ecx);
    POP32(esp, ebx);
    esp = esp + 0x128;
    esp += 4; return; /* ret */

loc_0004EDD4: ;
    if (CMP_EQ(MEM32(0x847138), ebx)) goto loc_0004EDE9; /* je: equal / zero */

loc_0004EDDC: ;
    PUSH32(esp, 0x847138);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004EDE6: ;
    esp = esp + 4;

loc_0004EDE9: ;
    (void)0; /* cmp MEM8(edi + 0x76F0E0), 2 - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0x140));
    MEM8(edi + 0x76F0DC) = LO8(eax);
    if (CMP_EQ(MEM8(edi + 0x76F0E0), 2)) goto loc_0004EE10; /* je: equal / zero */

loc_0004EDFF: ;
    SET_LO8(edx, MEM8(0x7FA1F8));
    MEM8(0x7655FB) = LO8(edx);
    MEM8(0x7655FA) = LO8(eax);

loc_0004EE10: ;
    eax = edi;
    PUSH32(esp, 0); sub_0004E9E0(); /* call 0x0004E9E0 */

loc_0004EE17: ;
    if (CMP_EQ(MEM8(0x76EC82), 1)) goto loc_0004F54B; /* je: equal / zero */

loc_0004EE24: ;
    eax = MEM32(esp + 0x140);
    ecx = MEM32(esp + 0x13C);
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_00055790(); /* call 0x00055790 */

loc_0004EE3B: ;
    ebp = MEM32(esp + 0x144);
    ecx = eax;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_0004EB30(); /* call 0x0004EB30 */

loc_0004EE4C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0004F86F; /* je: equal / zero */

loc_0004EE57: ;
    edx = MEM32(ebp * 4 + 0x76F100);
    ebx = MEM32(edx);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebx), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(MEM16(ebx), LO16(ecx))) goto loc_0004EE96; /* jbe: below or equal (unsigned <=) */

loc_0004EE6F: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + 0x76F030;
    edx = edx + 0xC;
    /* nop */

loc_0004EE80: ;
    esi = MEM32(edx);
    esi = esi >> 3;
    MEM16(eax) = LO16(esi);
    esi = ZX16(MEM16(ebx));
    ecx++;
    edx = edx + 8;
    eax = eax + 2;
    if (CMP_L(ecx, esi)) goto loc_0004EE80; /* jl: less (signed <) */

loc_0004EE96: ;
    ecx = ZX16(MEM16(ebx));
    eax = ZX16(MEM16(ebx + 2));
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_G(ecx, eax)) eax = ecx; /* cmovg */
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3C);
    ecx = eax + eax;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi + 0x76EF40;
    MEM32(esp + 0x28) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(ebx));
    eax = ZX16(MEM16(ebx + 4));
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_G(ecx, eax)) eax = ecx; /* cmovg */
    ecx = eax + eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esi + 0x76EFB8;
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    SET_LO16(eax, MEM16(ebx + 6));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004EF1C; /* je: equal / zero */

loc_0004EEFA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x3B0);
    eax = eax << 2;
    PUSH32(esp, 0x5D517C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004EF12: ;
    esp = esp + 0x10;
    MEM32(ebp * 4 + 0x76F0AC) = eax;

loc_0004EF1C: ;
    SET_LO16(eax, MEM16(ebx));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004EF46; /* je: equal / zero */

loc_0004EF24: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ZX16(LO16(eax));
    PUSH32(esp, 0x3B7);
    ecx = ecx << 6;
    PUSH32(esp, 0x5D517C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004EF3C: ;
    esp = esp + 0x10;
    MEM32(ebp * 4 + 0x76EF34) = eax;

loc_0004EF46: ;
    (void)0; /* cmp MEM16(ebx), 0 - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(MEM16(ebx), 0)) goto loc_0004F04D; /* jbe: below or equal (unsigned <=) */

loc_0004EF58: ;
    esi = esi + 0x76F030;
    ebp = 0; /* xor self */
    MEM32(esp + 0x18) = esi;

loc_0004EF64: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004F02B; /* je: equal / zero */

loc_0004EF70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ZX16(LO16(eax));
    PUSH32(esp, 0x3C3);
    edx = edx << 2;
    PUSH32(esp, 0x5D517C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004EF88: ;
    ecx = MEM32(esp + 0x154);
    edx = MEM32(ecx * 4 + 0x76EF34);
    MEM32(edx + ebp + 4) = eax;
    eax = MEM32(0x84A19C);
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0004EFAB; /* jne: not equal / not zero */

loc_0004EFA6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0004EFAB: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0004EFF9; /* je: equal / zero */

loc_0004EFD1: ;
    if (CMP_B(MEM32(esi + 0x80), 0x194)) goto loc_0004EFF9; /* jb: below (unsigned <) */

loc_0004EFDD: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0004EFE7: ;
    PUSH32(esp, 0x194);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004EFF2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0004F019; /* jne: not equal / not zero */

loc_0004EFF9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0004F00B: ;
    PUSH32(esp, 0x194);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F016: ;
    esp = esp + 8;

loc_0004F019: ;
    ecx = MEM32(esp + 0x144);
    edx = MEM32(ecx * 4 + 0x76EF34);
    MEM32(edx + ebp + 0x38) = eax;

loc_0004F02B: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    ecx = ZX16(MEM16(ebx));
    eax++;
    esi = esi + 2;
    ebp = ebp + 0x40;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(eax, ecx)) goto loc_0004EF64; /* jl: less (signed <) */

loc_0004F04D: ;
    SET_LO16(eax, MEM16(ebx));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004F07E; /* je: equal / zero */

loc_0004F055: ;
    edx = ZX16(LO16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3D1);
    PUSH32(esp, 0x5D517C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004F06D: ;
    ecx = MEM32(esp + 0x154);
    esp = esp + 0x10;
    MEM32(ecx * 4 + 0x76E884) = eax;

loc_0004F07E: ;
    edx = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(edx), LO16(esi))) goto loc_0004F12A; /* jbe: below or equal (unsigned <=) */

loc_0004F08F: ;
    ebp = MEM32(esp + 0x144);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    ebp = ebp + 0x76EE38;
    /* nop */

loc_0004F0A0: ;
    if (CMP_NE(MEM32(0x84A19C), esi)) goto loc_0004F0AD; /* jne: not equal / not zero */

loc_0004F0A8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0004F0AD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0004F0F5; /* je: equal / zero */

loc_0004F0D3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0004F0F5; /* jb: below (unsigned <) */

loc_0004F0DC: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0004F0E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F0EE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0004F112; /* jne: not equal / not zero */

loc_0004F0F5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0004F107: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F10F: ;
    esp = esp + 8;

loc_0004F112: ;
    edx = MEM32(esp + 0x20);
    MEM32(ebp) = eax;
    eax = ZX16(MEM16(edx));
    ebx++;
    ebp = ebp + 4;
    esi = 0; /* xor self */
    if (CMP_L(ebx, eax)) goto loc_0004F0A0; /* jl: less (signed <) */

loc_0004F12A: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(edx), LO16(esi))) goto loc_0004F167; /* jbe: below or equal (unsigned <=) */

loc_0004F131: ;
    eax = MEM32(esp + 0x10);
    goto loc_0004F140;

    /* nop */
    edi = edi;

loc_0004F140: ;
    MEM8(ecx + 0x76EC84) = 0;
    MEM16(eax + 0x76EFB8) = LO16(esi);
    MEM16(eax + 0x76EF40) = LO16(esi);
    MEM16(eax + 0x76F030) = LO16(esi);
    edi = ZX16(MEM16(edx));
    ecx++;
    eax = eax + 2;
    if (CMP_L(ecx, edi)) goto loc_0004F140; /* jl: less (signed <) */

loc_0004F167: ;
    SET_LO8(ecx, MEM8(edx));
    eax = MEM32(esp + 0x144);
    MEM8(eax + 0x76EF28) = LO8(ecx);
    (void)0; /* cmp MEM16(edx), LO16(esi) - flags set for next jcc */
    MEM32(esp + 0x1C) = 1;
    if (CMP_BE(MEM16(edx), LO16(esi))) goto loc_0004F31B; /* jbe: below or equal (unsigned <=) */

loc_0004F187: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x30);
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    ecx = ecx + 0xC;
    eax = edx + 0x76F030;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = ecx;
    ebp = ebp + 0x76E890;
    MEM32(esp + 0x10) = eax;

loc_0004F1B3: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0x10);
    eax = eax >> 3;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(edx) = LO16(eax);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004F2DA; /* je: equal / zero */

loc_0004F1CC: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ecx);
    if (TEST_NZ(eax, eax)) goto loc_0004F1DC; /* jne: not equal / not zero */

loc_0004F1D7: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0004F1DC: ;
    edi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    (void)0; /* cmp ebx, 0x20 - flags set for next jcc */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0xFFFFFFF4u;
    esi = esi + 0x10;
    edi++;
    edx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FA494) = edi;
    MEM32(0x7FA4B4) = edx;
    edi = eax;
    if (TEST_Z(eax, eax)) goto loc_0004F267; /* je: equal / zero */

loc_0004F20C: ;
    edx = MEM32(eax + 0x80);
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    ecx = ebx;
    if (CMP_BE(ebx, esi)) ecx = esi; /* cmovbe */
    if (CMP_A(ecx, edx)) goto loc_0004F267; /* ja: above (unsigned >) */

loc_0004F21D: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0004F234; /* je: equal / zero */

loc_0004F22B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0004F22F: ;
    esp = esp + 8;
    goto loc_0004F259;

loc_0004F234: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(LO16(esi), 1)) goto loc_0004F254; /* jbe: below or equal (unsigned <=) */

loc_0004F240: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO16(ecx, MEM16(esp + 0x2C));

loc_0004F247: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0004F247; /* ja: above (unsigned >) */

loc_0004F252: ;
    MEM8(eax) = LO8(edx);

loc_0004F254: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + 0x75) = LO8(edx);

loc_0004F259: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F260: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0004F2BC; /* jne: not equal / not zero */

loc_0004F267: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = eax;
    MEM32(esp + 0x2C) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0004F285; /* je: equal / zero */

loc_0004F27C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0004F280: ;
    esp = esp + 8;
    goto loc_0004F2B2;

loc_0004F285: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(LO16(esi), 1)) goto loc_0004F2AD; /* jbe: below or equal (unsigned <=) */

loc_0004F291: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO16(ecx, MEM16(esp + 0x2C));
    goto loc_0004F2A0;

    /* nop */

loc_0004F2A0: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0004F2A0; /* ja: above (unsigned >) */

loc_0004F2AB: ;
    MEM8(eax) = LO8(edx);

loc_0004F2AD: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + 0x75) = LO8(edx);

loc_0004F2B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F2B9: ;
    esp = esp + 8;

loc_0004F2BC: ;
    edx = MEM32(esp + 0x14);
    MEM32(ebp) = eax;
    ecx = MEM32(edx);
    esi = MEM32(edx + -4);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_0004F2E1;

loc_0004F2DA: ;
    MEM32(ebp) = 0;

loc_0004F2E1: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    edx = ZX16(MEM16(ecx));
    eax++;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    ebx = ebx + 2;
    esi = esi + 8;
    ebp = ebp + 4;
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, edx)) goto loc_0004F1B3; /* jl: less (signed <) */

loc_0004F31B: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x30);
    ecx = MEM32(edi + eax * 8);
    ebp = MEM32(esp + 0x144);
    ebx = MEM32(esp + 0x20);
    MEM32(ebp * 4 + 0x76EF2C) = ecx;
    edx = ZX16(MEM16(ebx));
    eax = eax + edx;
    (void)0; /* cmp MEM16(ebx + 2), 0 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(MEM16(ebx + 2), 0)) goto loc_0004F4DE; /* jbe: below or equal (unsigned <=) */

loc_0004F354: ;
    ecx = MEM32(esp + 0x28);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    eax = edi + eax * 8 + 4;
    ebp = ebp + 0x76E980;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_0004F370: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0x18);
    eax = eax >> 3;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(edx) = LO16(eax);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004F48F; /* je: equal / zero */

loc_0004F389: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ecx);
    if (TEST_NZ(eax, eax)) goto loc_0004F399; /* jne: not equal / not zero */

loc_0004F394: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0004F399: ;
    edi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    (void)0; /* cmp ebx, 0x20 - flags set for next jcc */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0xFFFFFFF4u;
    esi = esi + 0x10;
    edi++;
    edx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FA494) = edi;
    MEM32(0x7FA4B4) = edx;
    edi = eax;
    if (TEST_Z(eax, eax)) goto loc_0004F424; /* je: equal / zero */

loc_0004F3C9: ;
    edx = MEM32(eax + 0x80);
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    ecx = ebx;
    if (CMP_BE(ebx, esi)) ecx = esi; /* cmovbe */
    if (CMP_A(ecx, edx)) goto loc_0004F424; /* ja: above (unsigned >) */

loc_0004F3DA: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x28) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0004F3F1; /* je: equal / zero */

loc_0004F3E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0004F3EC: ;
    esp = esp + 8;
    goto loc_0004F416;

loc_0004F3F1: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(LO16(esi), 1)) goto loc_0004F411; /* jbe: below or equal (unsigned <=) */

loc_0004F3FD: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO16(ecx, MEM16(esp + 0x28));

loc_0004F404: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0004F404; /* ja: above (unsigned >) */

loc_0004F40F: ;
    MEM8(eax) = LO8(edx);

loc_0004F411: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + 0x75) = LO8(edx);

loc_0004F416: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F41D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0004F471; /* jne: not equal / not zero */

loc_0004F424: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = eax;
    MEM32(esp + 0x28) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0004F442; /* je: equal / zero */

loc_0004F439: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0004F43D: ;
    esp = esp + 8;
    goto loc_0004F467;

loc_0004F442: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(LO16(esi), 1)) goto loc_0004F462; /* jbe: below or equal (unsigned <=) */

loc_0004F44E: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO16(ecx, MEM16(esp + 0x28));

loc_0004F455: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0004F455; /* ja: above (unsigned >) */

loc_0004F460: ;
    MEM8(eax) = LO8(edx);

loc_0004F462: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + 0x75) = LO8(edx);

loc_0004F467: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F46E: ;
    esp = esp + 8;

loc_0004F471: ;
    edx = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    ecx = MEM32(edx);
    esi = MEM32(edx + -4);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_0004F496;

loc_0004F48F: ;
    MEM32(ebp) = 0;

loc_0004F496: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);
    edx = ZX16(MEM16(ecx + 2));
    eax++;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x14);
    ebx = ebx + 8;
    eax++;
    esi = esi + 2;
    ebp = ebp + 4;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(eax, edx)) goto loc_0004F370; /* jl: less (signed <) */

loc_0004F4D1: ;
    edi = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x144);
    ebx = ecx;

loc_0004F4DE: ;
    esi = MEM32(esp + 0x1C);
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 4), LO16(edx))) goto loc_0004F526; /* jbe: below or equal (unsigned <=) */

loc_0004F4EA: ;
    ecx = MEM32(esp + 0x24);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + 0x76EA70;
    goto loc_0004F500;

    /* nop */

loc_0004F500: ;
    ebp = MEM32(edi + esi * 8 + 4);
    ebp = ebp >> 3;
    MEM16(ecx) = LO16(ebp);
    ebp = MEM32(edi + esi * 8);
    MEM32(eax) = ebp;
    ebp = ZX16(MEM16(ebx + 4));
    esi++;
    edx++;
    ecx = ecx + 2;
    eax = eax + 4;
    if (CMP_L(edx, ebp)) goto loc_0004F500; /* jl: less (signed <) */

loc_0004F51F: ;
    ebp = MEM32(esp + 0x144);

loc_0004F526: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 6), LO16(eax))) goto loc_0004F54B; /* jbe: below or equal (unsigned <=) */

loc_0004F52E: ;
    edx = ebp * 4 + 0x76F0AC;
    ecx = edi + esi * 8;

loc_0004F538: ;
    esi = MEM32(edx);
    edi = MEM32(ecx);
    MEM32(esi + eax * 4) = edi;
    esi = ZX16(MEM16(ebx + 6));
    ecx = ecx + 8;
    eax++;
    if (CMP_L(eax, esi)) goto loc_0004F538; /* jl: less (signed <) */

loc_0004F54B: ;
    eax = MEM32(esp + 0x148);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(esp + 0x144);
    if (TEST_Z(eax, eax)) goto loc_0004F580; /* je: equal / zero */

loc_0004F55D: ;
    ecx = MEM32(esp + 0x14C);
    edx = MEM32(esp + 0x140);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x140);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x68C34C), _icall_esp); /* indirect call */
    }

loc_0004F57D: ;
    esp = esp + 0x10;

loc_0004F580: ;
    SET_LO8(eax, MEM8(ebp + 0x76EF28));
    ecx = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0004F5AB; /* jbe: below or equal (unsigned <=) */

loc_0004F58C: ;
    edx = ZX8(MEM8(ebp + 0x76EF28));
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + 0x76EFB8;
    /* nop */

loc_0004F5A0: ;
    esi = ZX16(MEM16(eax));
    ecx = ecx + esi;
    eax = eax + 2;
    edx--;
    if ((edx != 0)) goto loc_0004F5A0; /* jne: not equal / not zero */

loc_0004F5AB: ;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM16(0x76E860) = LO16(ecx);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0004F6B2; /* je: equal / zero */

loc_0004F5BB: ;
    eax = ZX16(LO16(ecx));
    edi = eax + eax * 2;
    eax = MEM32(0x84A19C);
    edi = edi << 2;
    if (TEST_NZ(eax, eax)) goto loc_0004F5D2; /* jne: not equal / not zero */

loc_0004F5CD: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0004F5D2: ;
    ebx = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    (void)0; /* cmp edi, 0x20 - flags set for next jcc */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0xFFFFFFF4u;
    esi = esi + 0x10;
    ebx++;
    edx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FA494) = ebx;
    MEM32(0x7FA4B4) = edx;
    ebx = eax;
    if (TEST_Z(eax, eax)) goto loc_0004F660; /* je: equal / zero */

loc_0004F602: ;
    edx = MEM32(eax + 0x80);
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ecx = edi;
    if (CMP_BE(edi, esi)) ecx = esi; /* cmovbe */
    if (CMP_A(ecx, edx)) goto loc_0004F660; /* ja: above (unsigned >) */

loc_0004F613: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0004F62A; /* je: equal / zero */

loc_0004F621: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0004F625: ;
    esp = esp + 8;
    goto loc_0004F652;

loc_0004F62A: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(LO16(esi), 1)) goto loc_0004F64D; /* jbe: below or equal (unsigned <=) */

loc_0004F636: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO16(ecx, MEM16(esp + 0x24));
    /* nop */

loc_0004F640: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0004F640; /* ja: above (unsigned >) */

loc_0004F64B: ;
    MEM8(eax) = LO8(edx);

loc_0004F64D: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx + 0x75) = LO8(eax);

loc_0004F652: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F659: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0004F6AD; /* jne: not equal / not zero */

loc_0004F660: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = eax;
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0004F67E; /* je: equal / zero */

loc_0004F675: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0004F679: ;
    esp = esp + 8;
    goto loc_0004F6A3;

loc_0004F67E: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(LO16(esi), 1)) goto loc_0004F69E; /* jbe: below or equal (unsigned <=) */

loc_0004F68A: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO16(ecx, MEM16(esp + 0x24));

loc_0004F691: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0004F691; /* ja: above (unsigned >) */

loc_0004F69C: ;
    MEM8(eax) = LO8(edx);

loc_0004F69E: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ebx + 0x75) = LO8(edx);

loc_0004F6A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004F6AA: ;
    esp = esp + 8;

loc_0004F6AD: ;
    MEM32(0x847138) = eax;

loc_0004F6B2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x76EB64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x847118) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(ebp * 4 + 0x76F0F8) = 0;
    MEMF(0x84711C) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0004F713; /* jle: less or equal (signed <=) */

loc_0004F6E1: ;
    MEM32(ebp * 4 + 0x76F0F8) = eax;
    ecx = MEM32(ebp * 4 + 0x76F0F8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx--;
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(0x847118) = xmm0; /* movss */
    MEM32(ebp * 4 + 0x76F0F0) = ecx;

loc_0004F713: ;
    SET_LO8(eax, MEM8(ebp + 0x76EF28));
    edx = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0004F74D; /* jbe: below or equal (unsigned <=) */

loc_0004F71F: ;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    ecx = ecx + 0x76EE38;
    /* nop */

loc_0004F730: ;
    eax = 0; /* xor self */

loc_0004F732: ;
    esi = MEM32(ecx);
    MEM8(eax + esi) = 0xFF;
    eax++;
    if (CMP_L(eax, 0x10)) goto loc_0004F732; /* jl: less (signed <) */

loc_0004F73E: ;
    eax = ZX8(MEM8(ebp + 0x76EF28));
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, eax)) goto loc_0004F730; /* jl: less (signed <) */

loc_0004F74D: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0004E870(); /* call 0x0004E870 */

loc_0004F754: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00054120(); /* call 0x00054120 */

loc_0004F75A: ;
    SET_LO8(eax, MEM8(ebp + 0x76EF28));
    esp = esp + 4;
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0004F787; /* jbe: below or equal (unsigned <=) */

loc_0004F769: ;
    /* nop */

loc_0004F770: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_00052250(); /* call 0x00052250 */

loc_0004F778: ;
    ecx = ZX8(MEM8(ebp + 0x76EF28));
    esp = esp + 4;
    esi++;
    if (CMP_L(esi, ecx)) goto loc_0004F770; /* jl: less (signed <) */

loc_0004F787: ;
    SET_LO8(eax, MEM8(0x76EC82));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x76F0E0) = 1;
    MEM8(0x76EDF8) = 1;
    MEM8(ebp + 0x76EDE8) = 0;
    MEM8(ebp + 0x76ECE0) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004F7BF; /* jne: not equal / not zero */

loc_0004F7AC: ;
    SET_LO8(eax, MEM8(ebp + 0x76EF28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004F7BF; /* jne: not equal / not zero */

loc_0004F7B6: ;
    ecx = ebp;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000507A0(); /* call 0x000507A0 */

loc_0004F7BF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_0004F7C7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00050D10(); /* call 0x00050D10 */

loc_0004F7CD: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00053ED0(); /* call 0x00053ED0 */

loc_0004F7D4: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00053DD0(); /* call 0x00053DD0 */

loc_0004F7DB: ;
    edi = ebp;
    PUSH32(esp, 0); sub_00053D10(); /* call 0x00053D10 */

loc_0004F7E2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00052B50(); /* call 0x00052B50 */

loc_0004F7E8: ;
    eax = MEM32(0x8470DC);
    MEM8(0x762E40) = 4;
    MEM32(eax + 0x420) = MEM32(eax + 0x420) | 4;
    SET_LO8(eax, MEM8(0x76EC82));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004F80E; /* je: equal / zero */

loc_0004F807: ;
    eax = ebp;
    PUSH32(esp, 0); sub_000554E0(); /* call 0x000554E0 */

loc_0004F80E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0004F8A0(); /* call 0x0004F8A0 */

loc_0004F814: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0004F81C: ;
    MEM32(0x76EB60) = eax;
    eax = MEM32(0x7FA1F8);
    if (CMP_NE(eax, 0x35)) goto loc_0004F845; /* jne: not equal / not zero */

loc_0004F82B: ;
    if (CMP_NE(MEM32(esp + 0x140), 6)) goto loc_0004F86F; /* jne: not equal / not zero */

loc_0004F835: ;
    PUSH32(esp, 0); sub_0014EE20(); /* call 0x0014EE20 */

loc_0004F83A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x128;
    esp += 4; return; /* ret */

loc_0004F845: ;
    if (CMP_NE(eax, 0x40)) goto loc_0004F86F; /* jne: not equal / not zero */

loc_0004F84A: ;
    if (CMP_NE(MEM32(esp + 0x140), 5)) goto loc_0004F86F; /* jne: not equal / not zero */

loc_0004F854: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0);
    eax = 0x3C;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0004F862: ;
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0); sub_0016F220(); /* call 0x0016F220 */

loc_0004F86C: ;
    esp = esp + 0xC;

loc_0004F86F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x128;
    esp += 4; return; /* ret */

}

/**
 * sub_0004F8A0
 * Original: 0x0004F8A0 - 0x0004FCE1 (1089 bytes, 345 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004F8A0: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = ZX8(MEM8(edi + 0x76EF28));
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM8(0x7655F9) = 0;
    MEM8(0x7655F8) = 0;
    MEM8(0x7655F7) = 0;
    MEM8(0x7655F6) = 0;
    MEM16(0x7655F4) = LO16(ecx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(eax, ecx)) goto loc_0004FCB6; /* jle: less or equal (signed <=) */

loc_0004F8F4: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    PUSH32(esp, ebx);
    edx = edx + 0x76EFB8;
    eax = eax + 0x76EA70;
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, esi);

loc_0004F914: ;
    ebp = MEM32(eax);
    if (TEST_Z(ebp, ebp)) goto loc_0004FC88; /* je: equal / zero */

loc_0004F91E: ;
    SET_LO16(esi, MEM16(edx));
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_0004FC88; /* je: equal / zero */

loc_0004F92A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ebx = ebp + 0x18;
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0004F94F: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0004F961; /* je: equal / zero */

loc_0004F95A: ;
    MEM8(0x7655F9) = 1;

loc_0004F961: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0004F987: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0004F999; /* je: equal / zero */

loc_0004F992: ;
    MEM8(0x7655F7) = 1;

loc_0004F999: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x68);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0004F9BF: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0004F9D1; /* je: equal / zero */

loc_0004F9CA: ;
    MEM8(0x7655F6) = 1;

loc_0004F9D1: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0004F9F7: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0004FA09; /* je: equal / zero */

loc_0004FA02: ;
    MEM8(0x7655F8) = 1;

loc_0004FA09: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x77);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0004FA2F: ;
    ecx = MEM32(esp + 0x38);
    esp = esp + 0x28;
    if (TEST_Z(ecx, ecx)) goto loc_0004FA40; /* je: equal / zero */

loc_0004FA3A: ;
    MEM16(0x7655F4) = LO16(eax);

loc_0004FA40: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - ebp;
    edi = ZX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_AE(ecx, edi)) goto loc_0004FB0B; /* jae: above or equal (unsigned >=) */

loc_0004FA5F: ;
    /* nop */

loc_0004FA60: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004FA71; /* jne: not equal / not zero */

loc_0004FA67: ;
    if (CMP_NE(MEM8(eax), LO8(ecx))) goto loc_0004FA71; /* jne: not equal / not zero */

loc_0004FA6B: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0004FACC;

loc_0004FA71: ;
    if (CMP_BE(eax, ebx)) goto loc_0004FA87; /* jbe: below or equal (unsigned <=) */

loc_0004FA75: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0004FA87; /* jne: not equal / not zero */

loc_0004FA7A: ;
    if (CMP_NE(MEM16(eax + 2), 0x5F)) goto loc_0004FA87; /* jne: not equal / not zero */

loc_0004FA81: ;
    if (CMP_EQ(MEM8(eax + 4), 0x18)) goto loc_0004FADC; /* je: equal / zero */

loc_0004FA87: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004FAC6; /* jne: not equal / not zero */

loc_0004FA8B: ;
    ecx = eax;
    ecx = ecx - ebp;
    /* nop */

loc_0004FA90: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0004FAC2; /* je: equal / zero */

loc_0004FA95: ;
    ecx = ecx + 8;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 3);
    eax = eax + 8;
    if (CMP_AE(esi, edi)) goto loc_0004FAC6; /* jae: above or equal (unsigned >=) */

loc_0004FAA4: ;
    if (CMP_BE(eax, ebx)) goto loc_0004FABA; /* jbe: below or equal (unsigned <=) */

loc_0004FAA8: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0004FABA; /* jne: not equal / not zero */

loc_0004FAAD: ;
    if (CMP_NE(MEM16(eax + 2), 0x5F)) goto loc_0004FABA; /* jne: not equal / not zero */

loc_0004FAB4: ;
    if (CMP_EQ(MEM8(eax + 4), 0x18)) goto loc_0004FADC; /* je: equal / zero */

loc_0004FABA: ;
    if (CMP_EQ(MEM8(eax + 1), 0)) goto loc_0004FA90; /* je: equal / zero */

loc_0004FAC0: ;
    goto loc_0004FAC6;

loc_0004FAC2: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0004FAC6: ;
    ecx = ZX8(MEM8(eax + 1));
    edx = edx + ecx;

loc_0004FACC: ;
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - ebp;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_B(ecx, edi)) goto loc_0004FA60; /* jb: below (unsigned <) */

loc_0004FADA: ;
    goto loc_0004FB0B;

loc_0004FADC: ;
    edx = edx << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = edx;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    edx = MEM32(esp + 0x2C);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(edx * 4 + 0x76F0E8) = eax;

loc_0004FB0B: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax);
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = eax + 0x20;
    edx = ecx;
    edx = edx - ebp;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0004FC84; /* jae: above or equal (unsigned >=) */

loc_0004FB27: ;
    SET_LO8(eax, MEM8(ecx + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004FB39; /* jne: not equal / not zero */

loc_0004FB2E: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0004FB39; /* jne: not equal / not zero */

loc_0004FB33: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx + 2);
    goto loc_0004FB96;

loc_0004FB39: ;
    if (CMP_BE(ecx, ebx)) goto loc_0004FB50; /* jbe: below or equal (unsigned <=) */

loc_0004FB3D: ;
    if (CMP_NE(MEM8(ecx), 5)) goto loc_0004FB50; /* jne: not equal / not zero */

loc_0004FB42: ;
    if (CMP_NE(MEM16(ecx + 2), 1)) goto loc_0004FB50; /* jne: not equal / not zero */

loc_0004FB49: ;
    SET_LO8(edx, MEM8(ecx + 4));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004FBA9; /* je: equal / zero */

loc_0004FB50: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004FB90; /* jne: not equal / not zero */

loc_0004FB54: ;
    eax = ecx;
    eax = eax - ebp;

loc_0004FB58: ;
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0004FB8C; /* je: equal / zero */

loc_0004FB5D: ;
    eax = eax + 8;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 3);
    ecx = ecx + 8;
    if (CMP_AE(edx, edi)) goto loc_0004FB90; /* jae: above or equal (unsigned >=) */

loc_0004FB6C: ;
    if (CMP_BE(ecx, ebx)) goto loc_0004FB83; /* jbe: below or equal (unsigned <=) */

loc_0004FB70: ;
    if (CMP_NE(MEM8(ecx), 5)) goto loc_0004FB83; /* jne: not equal / not zero */

loc_0004FB75: ;
    if (CMP_NE(MEM16(ecx + 2), 1)) goto loc_0004FB83; /* jne: not equal / not zero */

loc_0004FB7C: ;
    SET_LO8(edx, MEM8(ecx + 4));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004FBB5; /* je: equal / zero */

loc_0004FB83: ;
    SET_LO8(edx, MEM8(ecx + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004FB58; /* je: equal / zero */

loc_0004FB8A: ;
    goto loc_0004FB90;

loc_0004FB8C: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx + 2);

loc_0004FB90: ;
    eax = ZX8(MEM8(ecx + 1));
    esi = esi + eax;

loc_0004FB96: ;
    ecx = ecx + 8;
    edx = ecx;
    edx = edx - ebp;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0004FB27; /* jb: below (unsigned <) */

loc_0004FBA4: ;
    goto loc_0004FC84;

loc_0004FBA9: ;
    esi = esi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    goto loc_0004FBBF;

loc_0004FBB5: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);

loc_0004FBBF: ;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax >> 8);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0004FBE6; /* je: equal / zero */

loc_0004FBDE: ;
    if (CMP_GE(eax, edx)) goto loc_0004FC84; /* jge: greater or equal (signed >=) */

loc_0004FBE6: ;
    edi = MEM32(0x771C50);
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 5);
    edx = ZX8(MEM8(eax + eax * 2 + 0x68C485));
    esi = 1;
    (void)0; /* cmp MEM16(ecx + 6), LO16(esi) - flags set for next jcc */
    ecx = ZX8(MEM8(eax + eax * 2 + 0x68C486));
    eax = ZX8(MEM8(eax + eax * 2 + 0x68C484));
    if (CMP_NE(MEM16(ecx + 6), LO16(esi))) goto loc_0004FC3D; /* jne: not equal / not zero */

loc_0004FC17: ;
    if (CMP_NE(edi, esi)) goto loc_0004FC33; /* jne: not equal / not zero */

loc_0004FC1B: ;
    edi = MEM32(0x771C5C);
    if (CMP_LE(MEM32(0x771C60), edi)) goto loc_0004FC33; /* jle: less or equal (signed <=) */

loc_0004FC29: ;
    SET_LO8(ebx, MEM8(0x771C64));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0004FC84; /* je: equal / zero */

loc_0004FC33: ;
    MEM32(0x771C50) = esi;
    esi = 0; /* xor self */
    goto loc_0004FC61;

loc_0004FC3D: ;
    esi = 0; /* xor self */
    if (CMP_NE(edi, esi)) goto loc_0004FC5B; /* jne: not equal / not zero */

loc_0004FC43: ;
    edi = MEM32(0x771C5C);
    if (CMP_LE(MEM32(0x771C60), edi)) goto loc_0004FC5B; /* jle: less or equal (signed <=) */

loc_0004FC51: ;
    SET_LO8(ebx, MEM8(0x771C64));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0004FC84; /* je: equal / zero */

loc_0004FC5B: ;
    MEM32(0x771C50) = esi;

loc_0004FC61: ;
    MEM32(0x771C54) = esi;
    MEM8(0x771C58) = LO8(eax);
    MEM8(0x771C59) = LO8(edx);
    MEM8(0x771C5A) = LO8(ecx);
    MEM32(0x771C5C) = esi;
    MEM32(0x771C60) = esi;

loc_0004FC84: ;
    edi = MEM32(esp + 0x2C);

loc_0004FC88: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);
    ecx++;
    eax = eax + 4;
    edx = edx + 2;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_L(ecx, esi)) goto loc_0004F914; /* jl: less (signed <) */

loc_0004FCB3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0004FCB6: ;
    eax = ZX16(MEM16(0x7655F4));
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(edi * 4 + 0x76F0F8) = eax;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(0x847118) = xmm1; /* movss */
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0004FCF0
 * Original: 0x0004FCF0 - 0x0004FDB6 (198 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004FCF0: ;
    eax = MEM32(ebx * 4 + 0x76F0E8);
    ecx = MEM32(0x7FA208);
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 0);
    xmm0 = xmm0 / xmm1; /* divss */
    PUSH32(esp, 1);
    MEM32(ebx * 4 + 0x76F0F8) = eax;
    MEMF(0x847118) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_0004FD2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00050D10(); /* call 0x00050D10 */

loc_0004FD35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_0004FD3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00052B50(); /* call 0x00052B50 */

loc_0004FD45: ;
    esp = esp + 0x18;
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    /* nop */

loc_0004FD50: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebp), 0)) goto loc_0004FD7C; /* je: equal / zero */

loc_0004FD5B: ;
    ecx = MEM32(0x84A5F8);
    esi = edi + ecx;
    eax = esi;
    PUSH32(esp, 0); sub_00054020(); /* call 0x00054020 */

loc_0004FD6B: ;
    if (TEST_Z(eax, eax)) goto loc_0004FD7C; /* je: equal / zero */

loc_0004FD6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_0004FD79: ;
    esp = esp + 8;

loc_0004FD7C: ;
    edi = edi + 0x6D0;
    ebp++;
    if (CMP_L(edi, 0x36800)) goto loc_0004FD50; /* jl: less (signed <) */

loc_0004FD8B: ;
    eax = MEM32(0x84A144);
    if (TEST_S(eax, eax)) goto loc_0004FDA7; /* jl: less (signed <) */

loc_0004FD94: ;
    ecx = eax + 1;
    eax = 0; /* xor self */
    ecx = ecx >> 1;
    edi = 0x771BD0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */

loc_0004FDA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    eax = 1;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000507A0(); return; /* tail jmp 0x000507A0 */

}

/**
 * sub_0004FDC0
 * Original: 0x0004FDC0 - 0x0004FF00 (320 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FDC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004FDC0: ;
    PUSH32(esp, 0); sub_0001B0F0(); /* call 0x0001B0F0 */

loc_0004FDC5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004FDCE; /* je: equal / zero */

loc_0004FDC9: ;
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_0004FDCE: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00308AA0(); /* call 0x00308AA0 */

loc_0004FDDB: ;
    if (TEST_Z(eax, eax)) goto loc_0004FDEB; /* je: equal / zero */

loc_0004FDDF: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0004FDE8: ;
    esp = esp + 0xC;

loc_0004FDEB: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7655F9));
    ebx = edi;
    PUSH32(esp, 0); sub_0004FCF0(); /* call 0x0004FCF0 */

loc_0004FDFA: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0004FE1C; /* je: equal / zero */

loc_0004FE00: ;
    if (CMP_NE(MEM8(0x76F0B6), LO8(ebx))) goto loc_0004FE1C; /* jne: not equal / not zero */

loc_0004FE08: ;
    esi = ZX8(MEM8(0x7655F9));
    ebx = edi;
    PUSH32(esp, 0); sub_0004FCF0(); /* call 0x0004FCF0 */

loc_0004FE16: ;
    ebx = 0; /* xor self */
    if (TEST_NZ(esi, esi)) goto loc_0004FE00; /* jne: not equal / not zero */

loc_0004FE1C: ;
    (void)0; /* cmp MEM8(0x7655F8), LO8(ebx) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM8(0x7655F8), LO8(ebx))) goto loc_0004FEA3; /* jne: not equal / not zero */

loc_0004FE25: ;
    if (CMP_EQ(MEM8(0x7655FF), 1)) goto loc_0004FEA3; /* je: equal / zero */

loc_0004FE2E: ;
    if (CMP_NE(MEM8(0x7655FC), LO8(ebx))) goto loc_0004FEA3; /* jne: not equal / not zero */

loc_0004FE36: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(0x771C50);
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    if (CMP_NE(ecx, ebx)) goto loc_0004FE7A; /* jne: not equal / not zero */

loc_0004FE64: ;
    ecx = MEM32(0x771C60);
    if (CMP_LE(ecx, MEM32(0x771C5C))) goto loc_0004FE7A; /* jle: less or equal (signed <=) */

loc_0004FE72: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_0004FEA3; /* je: equal / zero */

loc_0004FE7A: ;
    MEM32(0x771C50) = ebx;
    MEM32(0x771C54) = ebx;
    MEM8(0x771C58) = LO8(ebx);
    MEM8(0x771C59) = LO8(ebx);
    MEM8(0x771C5A) = LO8(ebx);
    MEM32(0x771C5C) = eax;
    MEM32(0x771C60) = ebx;

loc_0004FEA3: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(0x84A5FC);
    eax = 0; /* xor self */
    ecx = ecx + 0x1AC;

loc_0004FEB7: ;
    if (CMP_EQ(MEM8(edx + eax), LO8(ebx))) goto loc_0004FEBE; /* je: equal / zero */

loc_0004FEBC: ;
    MEM8(ecx) = LO8(ebx);

loc_0004FEBE: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_0004FEB7; /* jl: less (signed <) */

loc_0004FECC: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, eax);
    MEM8(0x76E868) = LO8(ebx);
    PUSH32(esp, 0); sub_0001F6D0(); /* call 0x0001F6D0 */

loc_0004FEE1: ;
    eax = MEM32(0x8470DC);
    ecx = 4;
    MEM8(0x762E40) = LO8(ecx);
    MEM32(eax + 0x420) = MEM32(eax + 0x420) | ecx;
    MEM8(0x7655E8) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004FF00
 * Original: 0x0004FF00 - 0x0004FFEB (235 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004FF00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004FF00: ;
    SET_LO8(edx, MEM8(0x6BCFEB));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(LO8(edx) & LO8(edx), 0)) ? 1 : 0); /* setg */
    PUSH32(esp, esi);
    esi = MEM32(0x7FA1F8);
    eax--;
    eax = eax & 0x14;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    if (CMP_NE(esi, 0x18)) goto loc_0004FF35; /* jne: not equal / not zero */

loc_0004FF28: ;
    if (CMP_EQ(MEM8(edi + 0x76F0DC), 1)) goto loc_0004FFE7; /* je: equal / zero */

loc_0004FF35: ;
    (void)0; /* test MEM32(0x7F9EEC), 0x40000 - flags set for next jcc */
    SET_LO8(ecx, MEM8(0x7655F7));
    if (TEST_Z(MEM32(0x7F9EEC), 0x40000)) goto loc_0004FF55; /* je: equal / zero */

loc_0004FF47: ;
    edx = MEM32(eax + 0xA0);
    if (TEST_Z(edx, edx)) goto loc_0004FF55; /* je: equal / zero */

loc_0004FF51: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0004FF6F; /* je: equal / zero */

loc_0004FF55: ;
    if (CMP_NE(esi, 0x1D)) { sub_0004FFEB(); return; } /* jne: not equal / not zero */

loc_0004FF5E: ;
    SET_LO8(edx, MEM8(0x8497F9));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004FF76; /* je: equal / zero */

loc_0004FF68: ;
    MEM8(0x8497F9) = 0;

loc_0004FF6F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004FF76: ;
    if (CMP_NE(MEM8(0x76F0DC), 5)) goto loc_0004FFE7; /* jne: not equal / not zero */

loc_0004FF7F: ;
    edx = MEM32(eax + 0xA0);
    if (TEST_Z(edx, edx)) goto loc_0004FFE7; /* je: equal / zero */

loc_0004FF89: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004FFE7; /* jne: not equal / not zero */

loc_0004FF8D: ;
    SET_LO8(eax, MEM8(0x801A33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004FF6F; /* jne: not equal / not zero */

loc_0004FF96: ;
    ecx = ZX8(MEM8(edi + 0x76F0DC));
    PUSH32(esp, 0); sub_0004EBE0(); /* call 0x0004EBE0 */

loc_0004FFA2: ;
    if (TEST_Z(eax, eax)) goto loc_0004FFE7; /* je: equal / zero */

loc_0004FFA6: ;
    SET_LO8(eax, MEM8(0x7655F9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004FF6F; /* jne: not equal / not zero */

loc_0004FFAF: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(edi * 4 + 0x76F0E8);
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(edi * 4 + 0x76F0F8);
    eax = (uint32_t)((int32_t)eax >> 8);
    eax = eax + edx;
    if (CMP_L(eax, ecx)) goto loc_0004FF6F; /* jl: less (signed <) */

loc_0004FFE7: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00050020
 * Original: 0x00050020 - 0x0005011B (251 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00050020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x765601));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_0005011B(); return; } /* jne: not equal / not zero */

loc_00050033: ;
    if (CMP_NE(MEM8(edi + 0x76F0E0), 1)) goto loc_00050118; /* jne: not equal / not zero */

loc_00050040: ;
    PUSH32(esp, 0); sub_0004FF00(); /* call 0x0004FF00 */

loc_00050045: ;
    if (TEST_Z(eax, eax)) goto loc_00050118; /* je: equal / zero */

loc_0005004D: ;
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(edi * 4 + 0x76F0E8);
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(edi * 4 + 0x76F0F8);
    eax = (uint32_t)((int32_t)eax >> 8);
    ecx = ecx - edx;
    edx = eax + esi;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM8(0x8497F9) = LO8(ebx);
    if (CMP_LE(ecx, edx)) goto loc_00050117; /* jle: less or equal (signed <=) */

loc_00050095: ;
    ecx = MEM32(0x771C50);
    esi = 1;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM8(0x765601) = 1;
    MEM8(0x765600) = LO8(eax);
    if (CMP_NE(ecx, esi)) goto loc_000500C6; /* jne: not equal / not zero */

loc_000500B0: ;
    ecx = MEM32(0x771C60);
    if (CMP_LE(ecx, MEM32(0x771C5C))) goto loc_000500C6; /* jle: less or equal (signed <=) */

loc_000500BE: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_000500EF; /* je: equal / zero */

loc_000500C6: ;
    MEM32(0x771C50) = esi;
    MEM32(0x771C54) = ebx;
    MEM8(0x771C58) = LO8(ebx);
    MEM8(0x771C59) = LO8(ebx);
    MEM8(0x771C5A) = LO8(ebx);
    MEM32(0x771C5C) = eax;
    MEM32(0x771C60) = ebx;

loc_000500EF: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001F6D0(); /* call 0x0001F6D0 */

loc_000500FE: ;
    PUSH32(esp, 0); sub_0001B140(); /* call 0x0001B140 */

loc_00050103: ;
    if (CMP_EQ(eax, esi)) goto loc_0005010C; /* je: equal / zero */

loc_00050107: ;
    if (CMP_NE(eax, 2)) goto loc_00050111; /* jne: not equal / not zero */

loc_0005010C: ;
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_00050111: ;
    MEM8(0x76F0B4) = LO8(ebx);

loc_00050117: ;
    POP32(esp, esi);

loc_00050118: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00050160
 * Original: 0x00050160 - 0x000501E4 (132 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050160(void)
{
    int _flags = 0; /* fallback flag var */

loc_00050160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x76F0E0));
    ebx = 1;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000501E1; /* jne: not equal / not zero */

loc_00050173: ;
    goto loc_00050180;

    /* nop */
    /* nop */

loc_00050180: ;
    eax = MEM32(esi * 4 + 0x76F0F8);
    if (CMP_L(eax, MEM32(esi * 4 + 0x76F0E8))) goto loc_000501E1; /* jl: less (signed <) */

loc_00050190: ;
    SET_LO8(eax, MEM8(0x7655FD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000501DA; /* jne: not equal / not zero */

loc_00050199: ;
    ecx = esi;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000507A0(); /* call 0x000507A0 */

loc_000501A2: ;
    if (CMP_NE(MEM8(esi + 0x76F0E0), LO8(ebx))) goto loc_000501E1; /* jne: not equal / not zero */

loc_000501AA: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_000501F0(); /* call 0x000501F0 */

loc_000501B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_000501B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00050D10(); /* call 0x00050D10 */

loc_000501BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_000501C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00052B50(); /* call 0x00052B50 */

loc_000501CB: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00050180; /* je: equal / zero */

loc_000501D7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000501DA: ;
    MEM8(0x7655FD) = 2;

loc_000501E1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000501F0
 * Original: 0x000501F0 - 0x000502FE (270 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000501F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000501F0: ;
    SET_LO8(eax, MEM8(0x76E862));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00050200; /* je: equal / zero */

loc_000501F9: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x76E862) = LO8(eax);

loc_00050200: ;
    eax = MEM32(esi * 4 + 0x76F0F8);
    xmm0 = MEMF(0x847118); /* movss */
    MEM32(esi * 4 + 0x76F0F0) = eax;
    (void)0; /* cmp MEM8(esi + 0x76F0E0), 1 - flags set for next jcc */
    MEMF(0x84711C) = xmm0; /* movss */
    if (CMP_NE(MEM8(esi + 0x76F0E0), 1)) { sub_000502FE(); return; } /* jne: not equal / not zero */

loc_0005022B: ;
    eax = esi;
    PUSH32(esp, 0); sub_00050020(); /* call 0x00050020 */

loc_00050232: ;
    if (TEST_NZ(esi, esi)) goto loc_0005023F; /* jne: not equal / not zero */

loc_00050236: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00050298; /* jne: not equal / not zero */

loc_0005023F: ;
    SET_LO8(eax, MEM8(0x76F0B4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00050277; /* jne: not equal / not zero */

loc_00050248: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x847118); /* addss */
    xmm1 = MEMF(0x7F9F5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEMF(0x847118) = xmm0; /* movss */
    MEM32(esi * 4 + 0x76F0F8) = ecx;

loc_00050277: ;
    eax = MEM32(esi * 4 + 0x76F0F8);
    if (TEST_NZ(eax, eax)) goto loc_00050298; /* jne: not equal / not zero */

loc_00050282: ;
    eax = MEM32(esi * 4 + 0x76F0F0);
    if (TEST_NZ(eax, eax)) goto loc_00050298; /* jne: not equal / not zero */

loc_0005028D: ;
    MEM32(esi * 4 + 0x76F0F8) = 1;

loc_00050298: ;
    SET_LO8(eax, MEM8(esi + 0x76F0D8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000502C6; /* jne: not equal / not zero */

loc_000502A2: ;
    eax = ZX16(MEM16(0x7655F4));
    if (CMP_NE(MEM32(esi * 4 + 0x76F0F0), eax)) goto loc_000502C6; /* jne: not equal / not zero */

loc_000502B2: ;
    if (CMP_EQ(MEM32(esi * 4 + 0x76F0F8), eax)) goto loc_000502C6; /* je: equal / zero */

loc_000502BB: ;
    MEM32(esi * 4 + 0x76F0F0) = 0xFFFFFFFFu;

loc_000502C6: ;
    eax = MEM32(esi * 4 + 0x76F0E8);
    if (CMP_L(MEM32(esi * 4 + 0x76F0F8), eax)) goto loc_000502DD; /* jl: less (signed <) */

loc_000502D6: ;
    MEM32(esi * 4 + 0x76F0F8) = eax;

loc_000502DD: ;
    edx = MEM32(0x68C324);
    eax = MEM32(0x7FA208);
    ecx = MEM32(esi * 4 + 0x76F0F8);
    eax = eax + edx;
    if (CMP_L(ecx, eax)) { sub_000502FE(); return; } /* jl: less (signed <) */

loc_000502F5: ;
    ecx = esi;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_000507A0(); return; /* tail jmp 0x000507A0 */

}

/**
 * sub_00050300
 * Original: 0x00050300 - 0x000506B6 (950 bytes, 288 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050300: ;
    SET_LO8(eax, MEM8(0x76EC82));
    esp = esp - 8;
    if (CMP_EQ(LO8(eax), 1)) goto loc_000506B2; /* je: equal / zero */

loc_00050310: ;
    eax = MEM32(esp + 0xC);
    ecx = eax * 4 + 0x76F100;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_000506B2; /* je: equal / zero */

loc_00050329: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM16(ecx), LO16(ebp) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(MEM16(ecx), LO16(ebp))) goto loc_000503A0; /* jbe: below or equal (unsigned <=) */

loc_0005033A: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    ebx = 0; /* xor self */
    esi = esi + 0x76E890;
    edi = edi + 0x76F030;

loc_00050352: ;
    if (CMP_EQ(MEM16(edi), 0)) goto loc_0005038B; /* je: equal / zero */

loc_00050358: ;
    eax = MEM32(eax * 4 + 0x76EF34);
    ecx = eax + ebx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00050369: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx * 4 + 0x76EF34);
    ecx = eax + ebx + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0005037E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00050384: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0xC;

loc_0005038B: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(ecx));
    ebp++;
    edi = edi + 2;
    esi = esi + 4;
    ebx = ebx + 0x40;
    if (CMP_L(ebp, edx)) goto loc_00050352; /* jl: less (signed <) */

loc_000503A0: ;
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(ecx + 2), LO16(ebx))) goto loc_00050418; /* jbe: below or equal (unsigned <=) */

loc_000503A8: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    esi = esi + 0x76E980;
    edi = edi + 0x76EF40;
    edi = edi;

loc_000503C0: ;
    if (CMP_EQ(MEM16(edi), 0)) goto loc_00050405; /* je: equal / zero */

loc_000503C6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000503CE: ;
    if (TEST_NZ(eax, eax)) goto loc_00050401; /* jne: not equal / not zero */

loc_000503D2: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00050401; /* je: equal / zero */

loc_000503D8: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000503F8: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00050401: ;
    eax = MEM32(esp + 0x1C);

loc_00050405: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(ecx + 2));
    ebx++;
    edi = edi + 2;
    esi = esi + 4;
    if (CMP_L(ebx, edx)) goto loc_000503C0; /* jl: less (signed <) */

loc_00050418: ;
    ecx = MEM32(eax * 4 + 0x76EF34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax * 4 + 0x76EF34;
    if (TEST_Z(ecx, ecx)) goto loc_0005046F; /* je: equal / zero */

loc_0005042A: ;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00050432: ;
    if (TEST_NZ(eax, eax)) goto loc_00050465; /* jne: not equal / not zero */

loc_00050436: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00050465; /* je: equal / zero */

loc_0005043C: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0005045C: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00050465: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi) = 0;

loc_0005046F: ;
    ecx = MEM32(eax * 4 + 0x76E884);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax * 4 + 0x76E884;
    if (TEST_Z(ecx, ecx)) goto loc_000504C6; /* je: equal / zero */

loc_00050481: ;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00050489: ;
    if (TEST_NZ(eax, eax)) goto loc_000504BC; /* jne: not equal / not zero */

loc_0005048D: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_000504BC; /* je: equal / zero */

loc_00050493: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000504B3: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_000504BC: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi) = 0;

loc_000504C6: ;
    ecx = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(ecx), LO16(edi))) goto loc_00050534; /* jbe: below or equal (unsigned <=) */

loc_000504D1: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    esi = esi + 0x76EE38;
    /* nop */

loc_000504E0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000504E8: ;
    if (TEST_NZ(eax, eax)) goto loc_0005051B; /* jne: not equal / not zero */

loc_000504EC: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0005051B; /* je: equal / zero */

loc_000504F2: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00050512: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0005051B: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    eax = ZX16(MEM16(edx));
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, eax)) goto loc_000504E0; /* jl: less (signed <) */

loc_00050530: ;
    eax = MEM32(esp + 0x1C);

loc_00050534: ;
    esi = eax * 4 + 0x76F0AC;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0005057A; /* je: equal / zero */

loc_00050541: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00050547: ;
    if (TEST_NZ(eax, eax)) goto loc_0005057A; /* jne: not equal / not zero */

loc_0005054B: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0005057A; /* je: equal / zero */

loc_00050551: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00050571: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0005057A: ;
    eax = MEM32(0x847138);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0;
    if (TEST_Z(eax, eax)) goto loc_000505C9; /* je: equal / zero */

loc_00050589: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0005058F: ;
    if (TEST_NZ(eax, eax)) goto loc_000505BF; /* jne: not equal / not zero */

loc_00050593: ;
    eax = MEM32(0x847138);
    if (TEST_Z(eax, eax)) goto loc_000505BF; /* je: equal / zero */

loc_0005059C: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000505BC: ;
    esp = esp + 4;

loc_000505BF: ;
    MEM32(0x847138) = 0;

loc_000505C9: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_000505FD; /* je: equal / zero */

loc_000505D3: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edx * 8 + 0x84D788);
    if (TEST_Z(edx, edx)) goto loc_000505FD; /* je: equal / zero */

loc_000505E8: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = edx + -28;
    if (CMP_EQ(eax, ecx)) { sub_000506B6(); return; } /* je: equal / zero */

loc_000505F6: ;
    edx = MEM32(edx + 4);
    if (TEST_NZ(edx, edx)) goto loc_000505E8; /* jne: not equal / not zero */

loc_000505FD: ;
    eax = MEM32(0x84DAB0);
    esi = MEM32(0x84DAB4);
    if (CMP_AE(eax, esi)) goto loc_00050622; /* jae: above or equal (unsigned >=) */

loc_0005060C: ;
    /* nop */

loc_00050610: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0005061B; /* je: equal / zero */

loc_00050616: ;
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_00050624; /* je: equal / zero */

loc_0005061B: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_00050610; /* jb: below (unsigned <) */

loc_00050622: ;
    edx = 0; /* xor self */

loc_00050624: ;
    edi = edx;
    if (TEST_Z(edi, edi)) goto loc_0005064D; /* je: equal / zero */

loc_0005062A: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00050635; /* je: equal / zero */

loc_00050631: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00050635: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0005064D; /* jne: not equal / not zero */

loc_0005063C: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00050643: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0005064D: ;
    esi = MEM32(0x849434);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = MEM32(esp + 0x14);
    MEM32(edx) = 0;
    if (TEST_Z(esi, esi)) goto loc_000506AE; /* je: equal / zero */

loc_00050661: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00050677; /* je: equal / zero */

loc_00050668: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0005066E: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00050677: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0005067D: ;
    if (TEST_NZ(eax, eax)) goto loc_000506A4; /* jne: not equal / not zero */

loc_00050681: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000506A1: ;
    esp = esp + 4;

loc_000506A4: ;
    MEM32(0x849434) = 0;

loc_000506AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000506B2: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00050710
 * Original: 0x00050710 - 0x0005079B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00050710: ;
    SET_LO8(eax, MEM8(edi + 0x76EF28));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax), LO8(ebx))) goto loc_00050798; /* jbe: below or equal (unsigned <=) */

loc_00050720: ;
    eax = MEM32(edi * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + esi * 8), 2 - flags set for next jcc */
    eax = eax + esi * 8;
    if (CMP_NE(MEM16(eax + esi * 8), 2)) goto loc_0005078C; /* jne: not equal / not zero */

loc_00050731: ;
    SET_LO8(edx, MEM8(eax + 2));
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0005078C; /* je: equal / zero */

loc_00050738: ;
    eax = MEM32(0x84A5F8);
    ecx = 0; /* xor self */
    /* nop */

loc_00050740: ;
    if (CMP_EQ(MEM32(eax + 0x64), ebx)) goto loc_0005074D; /* je: equal / zero */

loc_00050745: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(edx))) goto loc_0005075D; /* je: equal / zero */

loc_0005074D: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_00050740; /* jl: less (signed <) */

loc_0005075B: ;
    goto loc_0005078C;

loc_0005075D: ;
    if (CMP_B(MEM8(eax + 0x13D), 0xA)) goto loc_00050772; /* jb: below (unsigned <) */

loc_00050766: ;
    MEM8(eax + 0x13D) = LO8(ebx);
    MEM8(eax + 0x13B) = LO8(ebx);

loc_00050772: ;
    if (CMP_B(MEM8(eax + 0x13E), 0xA)) goto loc_00050787; /* jb: below (unsigned <) */

loc_0005077B: ;
    MEM8(eax + 0x13E) = LO8(ebx);
    MEM8(eax + 0x13C) = LO8(ebx);

loc_00050787: ;
    PUSH32(esp, 0); sub_002CF1C0(); /* call 0x002CF1C0 */

loc_0005078C: ;
    ecx = ZX8(MEM8(edi + 0x76EF28));
    esi++;
    if (CMP_L(esi, ecx)) goto loc_00050720; /* jl: less (signed <) */

loc_00050798: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000507A0
 * Original: 0x000507A0 - 0x00050AE7 (839 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000507A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000507A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8470DC);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = ecx;
    (void)0; /* cmp MEM8(edi + 0x76F0E0), LO8(ebx) - flags set for next jcc */
    MEM32(0x847154) = ebx;
    MEM32(0x76F508) = ebx;
    MEM32(0x849384) = ebx;
    if (CMP_EQ(MEM8(edi + 0x76F0E0), LO8(ebx))) goto loc_00050AE0; /* je: equal / zero */

loc_000507CE: ;
    SET_LO8(ecx, MEM8(edi + 0x76F0DC));
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 0x10;
    PUSH32(esp, eax);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM8(esp + 0x1B) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_000507F1: ;
    eax = MEM32(0x8493E0);
    esp = esp + 0xC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x774A6A) = LO8(ebx);
    MEM8(0x774A69) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0005080F; /* je: equal / zero */

loc_00050809: ;
    MEM32(0x8493E0) = ebx;

loc_0005080F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7FA1F8);
    if (CMP_NE(esi, 0x10)) goto loc_00050822; /* jne: not equal / not zero */

loc_0005081B: ;
    PUSH32(esp, 0x5D5174);
    goto loc_0005082C;

loc_00050822: ;
    if (CMP_NE(esi, 0x40)) goto loc_0005083A; /* jne: not equal / not zero */

loc_00050827: ;
    PUSH32(esp, 0x5D5168);

loc_0005082C: ;
    PUSH32(esp, 0); sub_001DD6D0(); /* call 0x001DD6D0 */

loc_00050831: ;
    esi = MEM32(0x7FA1F8);
    esp = esp + 4;

loc_0005083A: ;
    eax = ZX16(MEM16(0x7655F4));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM32(edi * 4 + 0x76F0F8) = eax;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    (void)0; /* cmp MEM8(0x7655E9), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 / xmm1; /* divss */
    MEM32(edi * 4 + 0x76F0F0) = 0xFFFFFF9Cu;
    MEMF(0x847118) = xmm0; /* movss */
    if (CMP_NE(MEM8(0x7655E9), LO8(ebx))) goto loc_000508AA; /* jne: not equal / not zero */

loc_00050877: ;
    ecx = ZX8(MEM8(edi + 0x76F0DC));
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_0005088A: ;
    ecx = MEM32(esi * 8 + 0x765608);
    ecx = ecx | eax;
    eax = MEM32(esi * 8 + 0x76560C);
    eax = eax | edx;
    MEM32(esi * 8 + 0x765608) = ecx;
    MEM32(esi * 8 + 0x76560C) = eax;

loc_000508AA: ;
    MEM8(edi + 0x76F0E0) = LO8(ebx);
    MEM8(0x76EDF8) = LO8(ebx);
    PUSH32(esp, 0); sub_00050710(); /* call 0x00050710 */

loc_000508BB: ;
    PUSH32(esp, 0); sub_00054660(); /* call 0x00054660 */

loc_000508C0: ;
    MEM8(0x76F0B9) = LO8(ebx);
    MEM8(0x7655D7) = LO8(ebx);
    MEM8(0x847124) = LO8(ebx);
    PUSH32(esp, 0); sub_00054800(); /* call 0x00054800 */

loc_000508D7: ;
    eax = edi;
    PUSH32(esp, 0); sub_00050AF0(); /* call 0x00050AF0 */

loc_000508DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00050300(); /* call 0x00050300 */

loc_000508E4: ;
    SET_LO8(eax, MEM8(0x76EC82));
    esp = esp + 4;
    if (CMP_EQ(LO8(eax), 1)) goto loc_000509DF; /* je: equal / zero */

loc_000508F4: ;
    eax = MEM32(ebp + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 / MEMF(eax + 0xFC); /* divss */
    xmm6 = xmm6 * MEMF(eax + 0xD0); /* mulss */
    PUSH32(esp, ebx);
    MEMF(0x76EDF4) = xmm0; /* movss */
    MEMF(0x76EDF0) = xmm0; /* movss */
    MEMF(0x76EDEC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xA8); /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00064330(); /* call 0x00064330 */

loc_00050958: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(0x76F5D0) = xmm6; /* movss */
    MEMF(0x76F5C8) = xmm7; /* movss */
    MEMF(0x76F5CC) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(eax + 0xA8); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 / MEMF(eax + 0xFC); /* divss */
    xmm6 = xmm6 * MEMF(eax + 0xD0); /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x2C) = xmm6; /* movss */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00064330(); /* call 0x00064330 */

loc_000509B7: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    esp = esp + 0x20;
    MEMF(0x76F5C8) = xmm7; /* movss */
    MEMF(0x76F5CC) = xmm0; /* movss */
    MEMF(0x76F5D0) = xmm6; /* movss */
    MEM8(0x76F5C4) = 1;

loc_000509DF: ;
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_00050A58; /* jne: not equal / not zero */

loc_000509E7: ;
    SET_LO8(edx, MEM8(0x76F0B8));
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_00050A58; /* je: equal / zero */

loc_000509F1: ;
    SET_LO8(ecx, MEM8(0x76F0B7));
    esi = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), 0x25 - flags set for next jcc */
    MEM8(edi + 0x76F0E0) = 2;
    eax = ZX8(LO8(ecx));
    if (CMP_NE(LO8(ecx), 0x25)) goto loc_00050A18; /* jne: not equal / not zero */

loc_00050A08: ;
    esi = MEM32(0x7FA1F8);
    eax = 0x25;
    MEM32(0x7FA1F8) = eax;

loc_00050A18: ;
    ecx = MEM32(0x7655EC);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(0x7655F0));
    PUSH32(esp, ecx);
    edx = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edx--;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(0x7655EA) = LO8(ebx);
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_00050A39: ;
    SET_LO8(eax, MEM8(0x76F0B7));
    esp = esp + 0x14;
    if (CMP_NE(LO8(eax), 0x25)) goto loc_00050A4B; /* jne: not equal / not zero */

loc_00050A45: ;
    MEM32(0x7FA1F8) = esi;

loc_00050A4B: ;
    PUSH32(esp, 0); sub_00054A00(); /* call 0x00054A00 */

loc_00050A50: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00050A58: ;
    if (CMP_EQ(MEM8(0x7655FE), LO8(ebx))) goto loc_00050ACD; /* je: equal / zero */

loc_00050A60: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E00);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(0x771C50);
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    if (CMP_NE(ecx, ebx)) goto loc_00050AA4; /* jne: not equal / not zero */

loc_00050A8E: ;
    ecx = MEM32(0x771C60);
    if (CMP_LE(ecx, MEM32(0x771C5C))) goto loc_00050AA4; /* jle: less or equal (signed <=) */

loc_00050A9C: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_00050ACD; /* je: equal / zero */

loc_00050AA4: ;
    MEM32(0x771C50) = ebx;
    MEM32(0x771C54) = ebx;
    MEM8(0x771C58) = LO8(ebx);
    MEM8(0x771C59) = LO8(ebx);
    MEM8(0x771C5A) = LO8(ebx);
    MEM32(0x771C5C) = eax;
    MEM32(0x771C60) = ebx;

loc_00050ACD: ;
    MEM8(0x8497F9) = LO8(ebx);
    MEM8(0x7655E9) = LO8(ebx);
    MEM8(0x7655EA) = LO8(ebx);
    POP32(esp, esi);

loc_00050AE0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00050AF0
 * Original: 0x00050AF0 - 0x00050D08 (536 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050AF0: ;
    PUSH32(esp, ecx);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8470DC);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(0x76EDFC) = 1;
    MEM32(0x76EE00) = edi;
    xmm0 = MEMF(esi + 0x330); /* movss */
    MEMF(0x76EE10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x334); /* movss */
    MEMF(0x76EE14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x338); /* movss */
    MEMF(0x76EE18) = xmm0; /* movss */
    MEMF(0x76EE1C) = xmm4; /* movss */
    eax = MEM32(esi + 4);
    xmm0 = MEMF(eax + 0x34); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00050B5E: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x76EE20) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00050B83: ;
    SET_LO8(ebx, MEM8(0x7655EA));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x76EE24) = xmm0; /* movss */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00050C14; /* jne: not equal / not zero */

loc_00050B9B: ;
    PUSH32(esp, 0x76EDFC);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_00050BA9: ;
    xmm1 = MEMF(0x7655E4); /* movss */
    xmm0 = MEMF(0x6492B0); /* movss */
    esp = esp + 8;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00050BDE; /* jnp: not parity */

loc_00050BC5: ;
    PUSH32(esp, 0x76EDFC);
    PUSH32(esp, 8);
    ecx = esi;
    MEMF(0x76EE08) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_00050BDB: ;
    esp = esp + 8;

loc_00050BDE: ;
    xmm1 = MEMF(0x7655E0); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00050C14; /* jnp: not parity */

loc_00050BEF: ;
    edx = MEM32(0x7655DC);
    PUSH32(esp, 0x76EDFC);
    PUSH32(esp, 0xA);
    ecx = esi;
    MEMF(0x76EE08) = xmm1; /* movss */
    MEM32(0x76EE0C) = edx;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_00050C11: ;
    esp = esp + 8;

loc_00050C14: ;
    SET_LO8(eax, MEM8(0x76F0B8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00050C40; /* jne: not equal / not zero */

loc_00050C1D: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00050C40; /* jne: not equal / not zero */

loc_00050C21: ;
    SET_LO8(eax, MEM8(0x7655DA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00050C39; /* jne: not equal / not zero */

loc_00050C2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_00050C34: ;
    esp = esp + 8;
    goto loc_00050C40;

loc_00050C39: ;
    MEM8(0x7655DA) = 0;

loc_00050C40: ;
    SET_LO8(eax, MEM8(edi + 0x76F0C8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00050C56; /* jne: not equal / not zero */

loc_00050C4A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00053F30(); /* call 0x00053F30 */

loc_00050C50: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_00050C56: ;
    PUSH32(esp, ebp);
    ebx = edi;
    PUSH32(esp, 0); sub_00053E50(); /* call 0x00053E50 */

loc_00050C5E: ;
    esi = MEM32(0x84A5F8);
    ebp = MEM32(0x84A5FC);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    esi = esi + 0x1C0;

loc_00050C74: ;
    if (CMP_EQ(MEM8(edi + ebp), LO8(ebx))) goto loc_00050C9A; /* je: equal / zero */

loc_00050C79: ;
    eax = esi + -448;
    PUSH32(esp, 0); sub_00054020(); /* call 0x00054020 */

loc_00050C84: ;
    if (TEST_Z(eax, eax)) goto loc_00050C9A; /* je: equal / zero */

loc_00050C88: ;
    MEM8(esi + -20) = LO8(ebx);
    MEMF(esi) = xmm4; /* movss */
    MEMF(esi + 0xC) = xmm4; /* movss */
    MEM8(esi + -241) = LO8(ebx);

loc_00050C9A: ;
    edi++;
    esi = esi + 0x6D0;
    if (CMP_L(edi, 0x80)) goto loc_00050C74; /* jl: less (signed <) */

loc_00050CA9: ;
    (void)0; /* cmp MEM8(0x76F0B8), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(MEM8(0x76F0B8), LO8(ebx))) goto loc_00050D03; /* jne: not equal / not zero */

loc_00050CB2: ;
    SET_LO16(eax, MEM16(0x76E870));
    SET_LO16(ecx, MEM16(0x76E872));
    SET_LO16(edx, MEM16(0x76E874));
    xmm0 = MEMF(0x76E86C); /* movss */
    MEM8(0x76E862) = 2;
    MEM32(0x76FFD8) = ebx;
    MEM32(0x847120) = ebx;
    MEM8(0x76E868) = LO8(ebx);
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87C) = LO16(eax);
    MEM16(0x76E87E) = LO16(ecx);
    MEM16(0x76E880) = LO16(edx);

loc_00050D03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00050D10
 * Original: 0x00050D10 - 0x00051B84 (3700 bytes, 812 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00050D10: ;
    SET_LO8(eax, MEM8(0x76EC82));
    ecx = MEM32(esp + 4);
    esp = esp - 0x224;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00050D30; /* je: equal / zero */

loc_00050D23: ;
    if (CMP_NE(MEM8(ecx + 0x76F0E0), 1)) goto loc_00051B7D; /* jne: not equal / not zero */

loc_00050D30: ;
    eax = MEM32(ecx * 4 + 0x76F0F8);
    (void)0; /* cmp eax, MEM32(ecx * 4 + 0x76F0E8) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_L(eax, MEM32(ecx * 4 + 0x76F0E8))) goto loc_00050D48; /* jl: less (signed <) */

loc_00050D41: ;
    eax = MEM32(0x76F0E4);
    goto loc_00050D5C;

loc_00050D48: ;
    esi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C00);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)((int32_t)eax >> 8);

loc_00050D5C: ;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(ecx + 0x76EF28));
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00051B75; /* jbe: below or equal (unsigned <=) */

loc_00050D74: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1E);
    MEM32(esp + 0x4C) = edi;

loc_00050D80: ;
    xmm2 = 0.0f; /* xorps self = zero */
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x44);
    edx = edi + esi;
    (void)0; /* cmp MEM16(edx * 2 + 0x76F030), 0 - flags set for next jcc */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(MEM16(edx * 2 + 0x76F030), 0)) goto loc_00050DF2; /* je: equal / zero */

loc_00050D9E: ;
    eax = MEM32(edx * 4 + 0x76E890);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax) = xmm0; /* movss */
    eax = MEM32(edx * 4 + 0x76E890);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 4) = xmm0; /* movss */
    eax = MEM32(edx * 4 + 0x76E890);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 8) = xmm0; /* movss */
    goto loc_00050E18;

loc_00050DF2: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 4) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 8) = xmm2; /* movss */

loc_00050E18: ;
    eax = MEM32(ecx * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + esi * 8), 4 - flags set for next jcc */
    eax = MEM32(ecx * 4 + 0x76E884);
    if (CMP_NE(MEM16(eax + esi * 8), 4)) goto loc_00050EE1; /* jne: not equal / not zero */

loc_00050E31: ;
    xmm0 = MEMF(0x649244); /* movss */
    xmm1 = MEMF(0x649988); /* movss */
    MEMF(ebx + eax + 0xC) = xmm0; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(ebx + eax + 0x10) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x14) = xmm0; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(ebx + eax + 0x18) = xmm0; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x1C) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm1 = MEMF(0x648F08); /* movss */
    MEMF(ebx + eax + 0x20) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm1 = MEMF(0x648F88); /* movss */
    MEMF(ebx + eax + 0x24) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x28) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x2C) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x34) = xmm2; /* movss */
    goto loc_00050F9F;

loc_00050EE1: ;
    MEMF(ebx + eax + 0xC) = xmm2; /* movss */
    SET_LO8(eax, MEM8(0x76EC82));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ecx * 4 + 0x76E884);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00050EFF; /* je: equal / zero */

loc_00050EF7: ;
    MEMF(ebx + eax + 0x10) = xmm2; /* movss */
    goto loc_00050F0D;

loc_00050EFF: ;
    xmm0 = MEMF(0x76E864); /* movss */
    MEMF(ebx + eax + 0x10) = xmm0; /* movss */

loc_00050F0D: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm1 = MEMF(0x648F88); /* movss */
    MEMF(ebx + eax + 0x14) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x18) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x1C) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(ebx + eax + 0x20) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x24) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x28) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x2C) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x3C) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x40) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x30) = xmm1; /* movss */

loc_00050F9F: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x38) = xmm2; /* movss */
    eax = MEM32(ecx * 4 + 0x76EF2C);
    SET_LO16(eax, MEM16(eax + esi * 8));
    if (CMP_NE(LO16(eax), 1)) goto loc_00050FD9; /* jne: not equal / not zero */

loc_00050FBD: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x34) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x24) = xmm1; /* movss */
    goto loc_0005104B;

loc_00050FD9: ;
    if (CMP_EQ(LO16(eax), 2)) goto loc_0005103E; /* je: equal / zero */

loc_00050FDF: ;
    if (CMP_NE(LO16(eax), 5)) goto loc_00051011; /* jne: not equal / not zero */

loc_00050FE5: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(0x59A8D8); /* movss */
    MEMF(ebx + eax + 0x18) = xmm0; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_0005103E;

loc_00051011: ;
    if (CMP_NE(LO16(eax), 3)) goto loc_0005104B; /* jne: not equal / not zero */

loc_00051017: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x18) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x1C) = xmm1; /* movss */
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x20) = xmm1; /* movss */

loc_0005103E: ;
    eax = MEM32(ecx * 4 + 0x76E884);
    MEMF(ebx + eax + 0x34) = xmm0; /* movss */

loc_0005104B: ;
    eax = MEM32(edx * 4 + 0x76E980);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00051B5E; /* je: equal / zero */

loc_0005105E: ;
    ecx = 0xC61C3C00u;
    MEM32(esp + 0x1BC) = ecx;
    MEM32(esp + 0x1C0) = ecx;
    MEM32(esp + 0x1C4) = ecx;
    MEM32(esp + 0x1C8) = ecx;
    MEM32(esp + 0x1CC) = ecx;
    MEM32(esp + 0x1D0) = ecx;
    MEM32(esp + 0x1D4) = ecx;
    MEM32(esp + 0x1D8) = ecx;
    MEM32(esp + 0x1DC) = ecx;
    MEM32(esp + 0x1E0) = ecx;
    MEM32(esp + 0x1E4) = ecx;
    MEM32(esp + 0x1E8) = ecx;
    MEM32(esp + 0x1EC) = ecx;
    MEM32(esp + 0x1F0) = ecx;
    eax = ecx;
    MEM32(esp + 0x1F4) = ecx;
    ecx = 0; /* xor self */
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xA8) = ecx;
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0xB0) = ecx;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xB4) = ecx;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0xBC) = ecx;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0x100) = eax;
    MEM32(esp + 0xC0) = ecx;
    MEM32(esp + 0xC4) = ecx;
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0xC8) = ecx;
    eax = 1;
    MEM32(esp + 0x180) = eax;
    MEM32(esp + 0x184) = eax;
    MEM32(esp + 0x188) = eax;
    MEM32(esp + 0x18C) = eax;
    MEM32(esp + 0x190) = eax;
    ecx = 0xFFFFD8F1u;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x194) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x198) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x19C) = eax;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x1A0) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x1A4) = eax;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x1A8) = eax;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x1AC) = eax;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x1B0) = eax;
    MEM32(esp + 0x1B4) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x1B8) = eax;
    MEM32(esp + 0x8C) = ecx;
    eax = ecx;
    MEM32(esp + 0x144) = eax;
    MEM32(esp + 0x148) = eax;
    MEM32(esp + 0x14C) = eax;
    MEM32(esp + 0x108) = ecx;
    MEM32(esp + 0x150) = eax;
    MEM32(esp + 0x10C) = ecx;
    MEM32(esp + 0x154) = eax;
    MEM32(esp + 0x110) = ecx;
    MEM32(esp + 0x158) = eax;
    MEM32(esp + 0x114) = ecx;
    MEM32(esp + 0x15C) = eax;
    MEM32(esp + 0x118) = ecx;
    MEM32(esp + 0x160) = eax;
    MEM32(esp + 0x11C) = ecx;
    MEM32(esp + 0x164) = eax;
    MEM32(esp + 0x120) = ecx;
    MEM32(esp + 0x168) = eax;
    MEM32(esp + 0x124) = ecx;
    MEM32(esp + 0x16C) = eax;
    MEM32(esp + 0x128) = ecx;
    MEM32(esp + 0x170) = eax;
    MEM32(esp + 0x12C) = ecx;
    MEM32(esp + 0x174) = eax;
    MEM32(esp + 0x130) = ecx;
    MEM32(esp + 0x178) = eax;
    MEM32(esp + 0x134) = ecx;
    MEM32(esp + 0x17C) = eax;
    eax = ZX16(MEM16(edx * 2 + 0x76EF40));
    MEM32(esp + 0x138) = ecx;
    MEM32(esp + 0x13C) = ecx;
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(esp + 0x140) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 4)) goto loc_00051534; /* jl: less (signed <) */

loc_00051348: ;
    edx = MEM32(esp + 0x28);
    edi = eax;
    edi = edi + 0xFFFFFFFCu;
    esi = edx + 6;
    edi = edi >> 2;
    edx = edx + 0xE;
    edi++;
    ebp = edi * 4;

loc_00051362: ;
    ecx = ZX8(MEM8(esi + -1));
    if (CMP_NE(MEM32(esp + ecx * 4 + 0x54), 0xFFFFD8F1u)) goto loc_000513A3; /* jne: not equal / not zero */

loc_00051370: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    if (CMP_L(eax, MEM32(esp + 0x20))) goto loc_0005138D; /* jl: less (signed <) */

loc_00051379: ;
    ebx = MEM32(esp + ecx * 4 + 0x90);
    MEM32(esp + ecx * 4 + 0x54) = ebx;
    MEM32(esp + ecx * 4 + 0x108) = eax;
    goto loc_0005139F;

loc_0005138D: ;
    ebx = ZX8(MEM8(esi + -2));
    MEM32(esp + ecx * 4 + 0x180) = ebx;
    MEM32(esp + ecx * 4 + 0x144) = eax;

loc_0005139F: ;
    ebx = MEM32(esp + 0x10);

loc_000513A3: ;
    eax = MEM32(esi + -6);
    xmm0 = MEMF(esp + ecx * 4 + 0xCC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + ecx * 4 + 0x1BC) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000513C9; /* jp: parity */

loc_000513BF: ;
    eax = MEM32(esi + -6);
    MEM32(esp + ecx * 4 + 0xCC) = eax;

loc_000513C9: ;
    eax = esp + ecx * 4 + 0x90;
    MEM32(eax) = MEM32(eax) + 1;
    ecx = ZX8(MEM8(edx + -1));
    if (CMP_NE(MEM32(esp + ecx * 4 + 0x54), 0xFFFFD8F1u)) goto loc_00051413; /* jne: not equal / not zero */

loc_000513E0: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    if (CMP_L(eax, MEM32(esp + 0x20))) goto loc_000513FD; /* jl: less (signed <) */

loc_000513E9: ;
    ebx = MEM32(esp + ecx * 4 + 0x90);
    MEM32(esp + ecx * 4 + 0x54) = ebx;
    MEM32(esp + ecx * 4 + 0x108) = eax;
    goto loc_0005140F;

loc_000513FD: ;
    ebx = ZX8(MEM8(edx + -2));
    MEM32(esp + ecx * 4 + 0x180) = ebx;
    MEM32(esp + ecx * 4 + 0x144) = eax;

loc_0005140F: ;
    ebx = MEM32(esp + 0x10);

loc_00051413: ;
    eax = MEM32(esi + 2);
    xmm0 = MEMF(esp + ecx * 4 + 0xCC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + ecx * 4 + 0x1BC) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00051439; /* jp: parity */

loc_0005142F: ;
    eax = MEM32(esi + 2);
    MEM32(esp + ecx * 4 + 0xCC) = eax;

loc_00051439: ;
    eax = esp + ecx * 4 + 0x90;
    MEM32(eax) = MEM32(eax) + 1;
    ecx = ZX8(MEM8(edx + 7));
    if (CMP_NE(MEM32(esp + ecx * 4 + 0x54), 0xFFFFD8F1u)) goto loc_00051484; /* jne: not equal / not zero */

loc_00051450: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 8);
    if (CMP_L(eax, MEM32(esp + 0x20))) goto loc_0005146E; /* jl: less (signed <) */

loc_0005145A: ;
    ebx = MEM32(esp + ecx * 4 + 0x90);
    MEM32(esp + ecx * 4 + 0x54) = ebx;
    MEM32(esp + ecx * 4 + 0x108) = eax;
    goto loc_00051480;

loc_0005146E: ;
    ebx = ZX8(MEM8(edx + 6));
    MEM32(esp + ecx * 4 + 0x180) = ebx;
    MEM32(esp + ecx * 4 + 0x144) = eax;

loc_00051480: ;
    ebx = MEM32(esp + 0x10);

loc_00051484: ;
    eax = MEM32(esi + 0xA);
    xmm0 = MEMF(esp + ecx * 4 + 0xCC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + ecx * 4 + 0x1BC) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000514AA; /* jp: parity */

loc_000514A0: ;
    eax = MEM32(esi + 0xA);
    MEM32(esp + ecx * 4 + 0xCC) = eax;

loc_000514AA: ;
    eax = esp + ecx * 4 + 0x90;
    MEM32(eax) = MEM32(eax) + 1;
    ecx = ZX8(MEM8(edx + 0xF));
    if (CMP_NE(MEM32(esp + ecx * 4 + 0x54), 0xFFFFD8F1u)) goto loc_000514F5; /* jne: not equal / not zero */

loc_000514C1: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x10);
    if (CMP_L(eax, MEM32(esp + 0x20))) goto loc_000514DF; /* jl: less (signed <) */

loc_000514CB: ;
    ebx = MEM32(esp + ecx * 4 + 0x90);
    MEM32(esp + ecx * 4 + 0x54) = ebx;
    MEM32(esp + ecx * 4 + 0x108) = eax;
    goto loc_000514F1;

loc_000514DF: ;
    ebx = ZX8(MEM8(edx + 0xE));
    MEM32(esp + ecx * 4 + 0x180) = ebx;
    MEM32(esp + ecx * 4 + 0x144) = eax;

loc_000514F1: ;
    ebx = MEM32(esp + 0x10);

loc_000514F5: ;
    eax = MEM32(esi + 0x12);
    xmm0 = MEMF(esp + ecx * 4 + 0xCC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + ecx * 4 + 0x1BC) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0005151B; /* jp: parity */

loc_00051511: ;
    eax = MEM32(esi + 0x12);
    MEM32(esp + ecx * 4 + 0xCC) = eax;

loc_0005151B: ;
    eax = esp + ecx * 4 + 0x90;
    ecx = MEM32(eax);
    ecx++;
    esi = esi + 0x20;
    edx = edx + 0x20;
    edi--;
    MEM32(eax) = ecx;
    if ((edi != 0)) goto loc_00051362; /* jne: not equal / not zero */

loc_00051534: ;
    esi = MEM32(esp + 0x1C);
    if (CMP_GE(ebp, esi)) goto loc_000515C7; /* jge: greater or equal (signed >=) */

loc_00051540: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    edx = ecx + ebp * 8;
    esi = esi - ebp;
    /* nop */

loc_00051550: ;
    ecx = ZX8(MEM8(edx + 5));
    if (CMP_NE(MEM32(esp + ecx * 4 + 0x54), 0xFFFFD8F1u)) goto loc_0005158C; /* jne: not equal / not zero */

loc_0005155E: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_L(eax, edi)) goto loc_0005157A; /* jl: less (signed <) */

loc_00051566: ;
    ebp = MEM32(esp + ecx * 4 + 0x90);
    MEM32(esp + ecx * 4 + 0x54) = ebp;
    MEM32(esp + ecx * 4 + 0x108) = eax;
    goto loc_0005158C;

loc_0005157A: ;
    ebp = ZX8(MEM8(edx + 4));
    MEM32(esp + ecx * 4 + 0x180) = ebp;
    MEM32(esp + ecx * 4 + 0x144) = eax;

loc_0005158C: ;
    eax = MEM32(edx);
    xmm0 = MEMF(esp + ecx * 4 + 0xCC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    MEM32(esp + ecx * 4 + 0x1BC) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000515B0; /* jp: parity */

loc_000515A7: ;
    eax = MEM32(edx);
    MEM32(esp + ecx * 4 + 0xCC) = eax;

loc_000515B0: ;
    ebp = MEM32(esp + ecx * 4 + 0x90);
    eax = esp + ecx * 4 + 0x90;
    ebp++;
    edx = edx + 8;
    esi--;
    MEM32(eax) = ebp;
    if ((esi != 0)) goto loc_00051550; /* jne: not equal / not zero */

loc_000515C7: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x18) = edi;
    /* nop */

loc_000515D0: ;
    ecx = MEM32(esp + edi * 4 + 0x144);
    (void)0; /* cmp ecx, 0xFFFFD8F1u - flags set for next jcc */
    edx = esp + edi * 4 + 0x1F8;
    MEM32(esp + 0x48) = edx;
    MEMF(edx) = xmm1; /* movss */
    if (CMP_NE(ecx, 0xFFFFD8F1u)) goto loc_0005160D; /* jne: not equal / not zero */

loc_000515EE: ;
    if (CMP_EQ(MEM32(esp + edi * 4 + 0x108), ecx)) goto loc_0005190D; /* je: equal / zero */

loc_000515FB: ;
    if (CMP_NE(ecx, ecx)) goto loc_0005160D; /* jne: not equal / not zero */

loc_000515FF: ;
    ecx = MEM32(esp + edi * 4 + 0xCC);
    MEM32(edx) = ecx;
    goto loc_0005190D;

loc_0005160D: ;
    eax = MEM32(esp + edi * 4 + 0x108);
    if (CMP_NE(eax, 0xFFFFD8F1u)) goto loc_00051629; /* jne: not equal / not zero */

loc_0005161B: ;
    eax = MEM32(esp + edi * 4 + 0x1BC);
    MEM32(edx) = eax;
    goto loc_0005190D;

loc_00051629: ;
    edx = MEM32(esp + 0x20);
    eax = eax - ecx;
    edx = edx - ecx;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + edi * 4 + 0x180);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm3; /* divss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0005189B; /* jne: not equal / not zero */

loc_00051652: ;
    edx = MEM32(esp + edi * 4 + 0x54);
    eax = edx + -2;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = 6;
    if (TEST_S(eax, eax)) goto loc_0005167E; /* jl: less (signed <) */

loc_00051665: ;
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = 7;
    eax = 3;
    ecx = 0; /* xor self */
    goto loc_0005168F;

loc_0005167E: ;
    eax = edx + -1;
    MEM32(esp + 0x24) = eax;
    eax = 2;
    ecx = 1;

loc_0005168F: ;
    esi = MEM32(esp + edi * 4 + 0x90);
    edx++;
    if (CMP_GE(edx, esi)) goto loc_000516A1; /* jge: greater or equal (signed >=) */

loc_0005169B: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) | 8;
    eax++;

loc_000516A1: ;
    edx = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(edx, 4)) goto loc_00051788; /* jl: less (signed <) */

loc_000516B6: ;
    ebp = MEM32(esp + 0x28);
    edx = ebp + 8;
    ebp = ebp + 0x15;

loc_000516C0: ;
    if (TEST_Z(eax, eax)) goto loc_000517D0; /* je: equal / zero */

loc_000516C8: ;
    edi = ZX8(MEM8(edx + -3));
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_000516EB; /* jne: not equal / not zero */

loc_000516D2: ;
    edi = MEM32(esp + 0x14);
    if (CMP_NE(edi, MEM32(esp + 0x24))) goto loc_000516E7; /* jne: not equal / not zero */

loc_000516DC: ;
    edi = MEM32(edx + -8);
    MEM32(esp + ecx * 4 + 0x34) = edi;
    ecx++;
    eax--;
    goto loc_000516EB;

loc_000516E7: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;

loc_000516EB: ;
    if (TEST_Z(eax, eax)) goto loc_000517CC; /* je: equal / zero */

loc_000516F3: ;
    edi = ZX8(MEM8(ebp + -8));
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_00051715; /* jne: not equal / not zero */

loc_000516FD: ;
    edi = MEM32(esp + 0x14);
    if (CMP_NE(edi, MEM32(esp + 0x24))) goto loc_00051711; /* jne: not equal / not zero */

loc_00051707: ;
    edi = MEM32(edx);
    MEM32(esp + ecx * 4 + 0x34) = edi;
    ecx++;
    eax--;
    goto loc_00051715;

loc_00051711: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;

loc_00051715: ;
    if (TEST_Z(eax, eax)) goto loc_000517CC; /* je: equal / zero */

loc_0005171D: ;
    edi = ZX8(MEM8(ebp));
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_00051740; /* jne: not equal / not zero */

loc_00051727: ;
    edi = MEM32(esp + 0x14);
    if (CMP_NE(edi, MEM32(esp + 0x24))) goto loc_0005173C; /* jne: not equal / not zero */

loc_00051731: ;
    edi = MEM32(edx + 8);
    MEM32(esp + ecx * 4 + 0x34) = edi;
    ecx++;
    eax--;
    goto loc_00051740;

loc_0005173C: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;

loc_00051740: ;
    if (TEST_Z(eax, eax)) goto loc_000517CC; /* je: equal / zero */

loc_00051748: ;
    edi = ZX8(MEM8(ebp + 8));
    (void)0; /* cmp edi, MEM32(esp + 0x18) - flags set for next jcc */
    edi = MEM32(esp + 0x14);
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_0005176C; /* jne: not equal / not zero */

loc_00051756: ;
    if (CMP_NE(edi, MEM32(esp + 0x24))) goto loc_00051767; /* jne: not equal / not zero */

loc_0005175C: ;
    ebx = MEM32(edx + 0x10);
    MEM32(esp + ecx * 4 + 0x34) = ebx;
    ecx++;
    eax--;
    goto loc_0005176C;

loc_00051767: ;
    edi++;
    MEM32(esp + 0x14) = edi;

loc_0005176C: ;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx + 0xFFFFFFFDu;
    esi = esi + 4;
    edx = edx + 0x20;
    ebp = ebp + 0x20;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    ebx = MEM32(esp + 0x10);
    if (CMP_L(esi, ebx)) goto loc_000516C0; /* jl: less (signed <) */

loc_00051788: ;
    if (CMP_GE(esi, MEM32(esp + 0x1C))) goto loc_000517D0; /* jge: greater or equal (signed >=) */

loc_0005178E: ;
    ebp = MEM32(esp + 0x18);
    edx = esp + ecx * 4 + 0x34;
    ecx = MEM32(esp + 0x28);
    ecx = ecx + esi * 8;
    goto loc_000517A3;

loc_0005179F: ;
    ebx = MEM32(esp + 0x10);

loc_000517A3: ;
    if (TEST_Z(eax, eax)) goto loc_000517D0; /* je: equal / zero */

loc_000517A7: ;
    ebx = ZX8(MEM8(ecx + 5));
    if (CMP_NE(ebx, ebp)) goto loc_000517C0; /* jne: not equal / not zero */

loc_000517AF: ;
    if (CMP_NE(edi, MEM32(esp + 0x24))) goto loc_000517BF; /* jne: not equal / not zero */

loc_000517B5: ;
    ebx = MEM32(ecx);
    MEM32(edx) = ebx;
    edx = edx + 4;
    eax--;
    goto loc_000517C0;

loc_000517BF: ;
    edi++;

loc_000517C0: ;
    ebx = MEM32(esp + 0x1C);
    esi++;
    ecx = ecx + 8;
    if (CMP_L(esi, ebx)) goto loc_0005179F; /* jl: less (signed <) */

loc_000517CC: ;
    ebx = MEM32(esp + 0x10);

loc_000517D0: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm3 = MEMF(esp + 0x38); /* movss */
    if (TEST_NZ(LO8(eax), 1)) goto loc_000517E4; /* jne: not equal / not zero */

loc_000517DE: ;
    MEMF(esp + 0x34) = xmm3; /* movss */

loc_000517E4: ;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    if (TEST_NZ(LO8(eax), 8)) goto loc_000517F4; /* jne: not equal / not zero */

loc_000517EE: ;
    MEMF(esp + 0x40) = xmm2; /* movss */

loc_000517F4: ;
    xmm4 = MEMF(0x648D10); /* movss */
    xmm5 = MEMF(0x648CF0); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    edx = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x18);
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x34); /* addss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x648F88); /* movss */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm7 = xmm7 + xmm3; /* addss */
    MEMF(edx) = xmm7; /* movss */
    goto loc_0005190D;

loc_0005189B: ;
    edx = MEM32(esp + 0x1C);
    ebp = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_000518E7; /* jle: less or equal (signed <=) */

loc_000518AC: ;
    edx = MEM32(esp + 0x28);
    edx = edx + 5;

loc_000518B3: ;
    edi = ZX8(MEM8(edx));
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_000518D3; /* jne: not equal / not zero */

loc_000518BC: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    edi = MEM32(esp + 0x18);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_000518E5; /* jne: not equal / not zero */

loc_000518C5: ;
    edi = MEM32(esp + edi * 4 + 0x54);
    edi--;
    if (CMP_NE(esi, edi)) goto loc_000518D2; /* jne: not equal / not zero */

loc_000518CE: ;
    ecx = eax;
    goto loc_000518D3;

loc_000518D2: ;
    esi++;

loc_000518D3: ;
    edi = MEM32(esp + 0x1C);
    eax++;
    edx = edx + 8;
    if (CMP_L(eax, edi)) goto loc_000518B3; /* jl: less (signed <) */

loc_000518DF: ;
    edi = MEM32(esp + 0x18);
    goto loc_000518E7;

loc_000518E5: ;
    ebp = eax;

loc_000518E7: ;
    eax = MEM32(esp + 0x44);
    eax = MEM32(eax * 4 + 0x76E980);
    xmm3 = MEMF(eax + ebp * 8); /* movss */
    xmm3 = xmm3 - MEMF(eax + ecx * 8); /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + ecx * 8); /* addss */
    ecx = MEM32(esp + 0x48);
    MEMF(ecx) = xmm3; /* movss */

loc_0005190D: ;
    edi++;
    (void)0; /* cmp edi, 0xF - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(edi, 0xF)) goto loc_000515D0; /* jl: less (signed <) */

loc_0005191B: ;
    xmm0 = MEMF(esp + 0x220); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00051939; /* jp: parity */

loc_0005192D: ;
    xmm0 = xmm2; /* movaps */
    MEMF(esp + 0x220) = xmm0; /* movss */

loc_00051939: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(edx * 4 + 0x76EE38);
    (void)0; /* cmp MEM8(eax), 0xFF - flags set for next jcc */
    esi = MEM32(esp + 0x238);
    if (CMP_EQ(MEM8(eax), 0xFF)) goto loc_00051974; /* je: equal / zero */

loc_00051950: ;
    ecx = MEM32(esi * 4 + 0x76E884);
    edx = ebx + ecx + 0x10;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00051FA0(); /* call 0x00051FA0 */

loc_00051967: ;
    xmm1 = MEMF(0x648F88); /* movss */
    esp = esp + 4;
    goto loc_00051993;

loc_00051974: ;
    xmm0 = MEMF(esp + 0x214); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051993; /* jnp: not parity */

loc_00051986: ;
    eax = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + eax + 0x10) = xmm0; /* movss */

loc_00051993: ;
    xmm0 = MEMF(esp + 0x218); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000519B2; /* jnp: not parity */

loc_000519A5: ;
    ecx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + ecx + 0xC) = xmm0; /* movss */

loc_000519B2: ;
    xmm0 = MEMF(esp + 0x210); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000519D1; /* jnp: not parity */

loc_000519C4: ;
    edx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + edx + 0x14) = xmm0; /* movss */

loc_000519D1: ;
    xmm0 = MEMF(esp + 0x20C); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000519F0; /* jnp: not parity */

loc_000519E3: ;
    eax = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + eax + 0x18) = xmm0; /* movss */

loc_000519F0: ;
    xmm0 = MEMF(esp + 0x208); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051A0F; /* jnp: not parity */

loc_00051A02: ;
    ecx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + ecx + 0x1C) = xmm0; /* movss */

loc_00051A0F: ;
    xmm0 = MEMF(esp + 0x204); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051A2E; /* jnp: not parity */

loc_00051A21: ;
    edx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + edx + 0x20) = xmm0; /* movss */

loc_00051A2E: ;
    xmm0 = MEMF(esp + 0x1FC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051A4D; /* jnp: not parity */

loc_00051A40: ;
    eax = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + eax + 0x24) = xmm0; /* movss */

loc_00051A4D: ;
    xmm0 = MEMF(esp + 0x200); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051A6C; /* jnp: not parity */

loc_00051A5F: ;
    ecx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + ecx + 0x28) = xmm0; /* movss */

loc_00051A6C: ;
    xmm0 = MEMF(esp + 0x1F8); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051A8B; /* jnp: not parity */

loc_00051A7E: ;
    edx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + edx + 0x2C) = xmm0; /* movss */

loc_00051A8B: ;
    xmm0 = MEMF(esp + 0x230); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051AAA; /* jnp: not parity */

loc_00051A9D: ;
    eax = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + eax + 0x30) = xmm0; /* movss */

loc_00051AAA: ;
    xmm0 = MEMF(esp + 0x21C); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051AC9; /* jnp: not parity */

loc_00051ABC: ;
    ecx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + ecx + 0x34) = xmm0; /* movss */

loc_00051AC9: ;
    xmm0 = MEMF(esp + 0x224); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051AE8; /* jnp: not parity */

loc_00051ADB: ;
    edx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + edx + 0x38) = xmm0; /* movss */

loc_00051AE8: ;
    xmm0 = MEMF(esp + 0x22C); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051B07; /* jnp: not parity */

loc_00051AFA: ;
    eax = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + eax + 0x3C) = xmm0; /* movss */

loc_00051B07: ;
    xmm0 = MEMF(esp + 0x228); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051B26; /* jnp: not parity */

loc_00051B19: ;
    ecx = MEM32(esi * 4 + 0x76E884);
    MEMF(ebx + ecx + 0x40) = xmm0; /* movss */

loc_00051B26: ;
    edi = MEM32(esp + 0x238);
    edx = MEM32(edi * 4 + 0x76E884);
    eax = ebx + edx;
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x22C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0); sub_00051E40(); /* call 0x00051E40 */

loc_00051B51: ;
    esi = MEM32(esp + 0x40);
    ecx = edi;
    edi = MEM32(esp + 0x5C);
    esp = esp + 0x10;

loc_00051B5E: ;
    edx = ZX8(MEM8(ecx + 0x76EF28));
    esi++;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(esp + 0x30) = esi;
    if (CMP_L(esi, edx)) goto loc_00050D80; /* jl: less (signed <) */

loc_00051B72: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00051B75: ;
    MEM8(0x76EDF8) = 1;
    POP32(esp, esi);

loc_00051B7D: ;
    esp = esp + 0x224;
    esp += 4; return; /* ret */

}

/**
 * sub_00051B90
 * Original: 0x00051B90 - 0x00051D98 (520 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00051B90: ;
    esp = esp - 0x34;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    eax = eax + edx;
    ecx = ZX16(MEM16(eax * 2 + 0x76F030));
    ebx = 0; /* xor self */
    ecx--;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    edi = ebx;
    if (((int32_t)ecx < 0)) goto loc_00051C9E; /* js: sign (negative) */

loc_00051BB9: ;
    eax = MEM32(esi * 4 + 0x76EF34);
    edx = edx << 6;
    ebp = MEM32(eax + edx + 4);
    goto loc_00051BD0;

    /* nop */

loc_00051BD0: ;
    xmm1 = MEMF(esp + 0x4C); /* movss */
    eax = edi + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    xmm0 = MEMF(ebp + ebx * 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00051BF0; /* jbe: below or equal (unsigned <=) */

loc_00051BEB: ;
    ecx = ebx + -1;
    goto loc_00051BF3;

loc_00051BF0: ;
    edi = ebx + 1;

loc_00051BF3: ;
    /* comiss xmm1, MEMF(ebp + ebx * 4) - sets EFLAGS */
    if ((xmm1 < MEMF(ebp + ebx * 4))) goto loc_00051C05; /* jb: below (unsigned <) */

loc_00051BFA: ;
    xmm0 = MEMF(ebp + ebx * 4 + 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_00051C09; /* jae: above or equal (unsigned >=) */

loc_00051C05: ;
    if (CMP_GE(ecx, edi)) goto loc_00051BD0; /* jge: greater or equal (signed >=) */

loc_00051C09: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x48);

loc_00051C11: ;
    ecx = MEM32(esp + 0x54);
    MEM32(ecx) = ebx;
    ecx = MEM32(esi * 4 + 0x76EF34);
    edi = edx;
    edi = edi << 6;
    ecx = ZX8(MEM8(edi + ecx + 0x3C));
    if (CMP_EQ(ecx, ebx)) goto loc_00051C40; /* je: equal / zero */

loc_00051C2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00052590(); /* call 0x00052590 */

loc_00051C33: ;
    xmm1 = MEMF(esp + 0x54); /* movss */
    eax = MEM32(esp + 0x18);
    esp = esp + 8;

loc_00051C40: ;
    ebp = MEM32(eax * 4 + 0x76E890);
    ecx = ZX16(MEM16(eax * 2 + 0x76F030));
    edx = esp + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_000520A0(); /* call 0x000520A0 */

loc_00051C5C: ;
    esp = esp + 8;
    if (CMP_NE(MEM16(ebp + ebx * 8 + 6), 0)) { sub_00051D98(); return; } /* jne: not equal / not zero */

loc_00051C6B: ;
    eax = MEM32(esi * 4 + 0x76EF34);
    edx = MEM32(edi + eax + 0x38);
    ebx = 0x64;
    ecx = 0; /* xor self */
    MEM32(esp + 0x48) = edx;

loc_00051C81: ;
    eax = ecx + ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = eax;
    eax = MEM32(esp + 0x48);
    ebp = (uint32_t)((int32_t)ebp >> 1);
    xmm0 = MEMF(eax + ebp * 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00051CA9; /* jbe: below or equal (unsigned <=) */

loc_00051C99: ;
    ebx = ebp + -1;
    goto loc_00051CAC;

loc_00051C9E: ;
    xmm1 = MEMF(esp + 0x4C); /* movss */
    goto loc_00051C11;

loc_00051CA9: ;
    ecx = ebp + 1;

loc_00051CAC: ;
    /* comiss xmm1, MEMF(eax + ebp * 4) - sets EFLAGS */
    if ((xmm1 < MEMF(eax + ebp * 4))) goto loc_00051CBD; /* jb: below (unsigned <) */

loc_00051CB2: ;
    xmm0 = MEMF(eax + ebp * 4 + 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_00051CC1; /* jae: above or equal (unsigned >=) */

loc_00051CBD: ;
    if (CMP_GE(ebx, ecx)) goto loc_00051C81; /* jge: greater or equal (signed >=) */

loc_00051CC1: ;
    xmm1 = MEMF(0x648E54); /* movss */
    MEM8(esp + 0x48) = 0;
    ebx = 0; /* xor self */

loc_00051CD0: ;
    ecx = MEM32(esi * 4 + 0x76EF34);
    xmm2 = MEMF(ecx + edi + 0x2C); /* movss */
    edx = ZX8(MEM8(esp + 0x48));
    ecx = ecx + edi;
    eax = ebx + ebp;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x50);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x20); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x14); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 8); /* addss */
    edx = edx + edx * 2;
    MEMF(eax + edx * 4) = xmm2; /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    xmm2 = MEMF(ecx + edi + 0x30); /* movss */
    edx = eax + edx * 4;
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + edi + 0x24); /* addss */
    ecx = ecx + edi;
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x18); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0xC); /* addss */
    MEMF(edx + 4) = xmm2; /* movss */
    eax = MEM32(esi * 4 + 0x76EF34);
    xmm2 = MEMF(edi + eax + 0x34); /* movss */
    ecx = edi + eax;
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x28); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x1C); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x10); /* addss */
    MEMF(edx + 8) = xmm2; /* movss */
    SET_LO8(edx, MEM8(esp + 0x48));
    SET_LO8(edx, LO8(edx) ^ 1);
    ebx++;
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    MEM8(esp + 0x48) = LO8(edx);
    if (CMP_L(ebx, 2)) goto loc_00051CD0; /* jl: less (signed <) */

loc_00051D8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00051E40
 * Original: 0x00051E40 - 0x00051F95 (341 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051E40(void)
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

loc_00051E40: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = ecx + eax;
    (void)0; /* cmp MEM16(ebx * 2 + 0x76F030), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    if (CMP_B(MEM16(ebx * 2 + 0x76F030), 2)) goto loc_00051F8F; /* jb: below (unsigned <) */

loc_00051E60: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00051E7B; /* ja: above (unsigned >) */

loc_00051E73: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00051E81; /* jbe: below or equal (unsigned <=) */

loc_00051E7B: ;
    MEMF(esp + 0x2C) = xmm1; /* movss */

loc_00051E81: ;
    edx = MEM32(edi * 4 + 0x76EF34);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 6;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00051B90(); /* call 0x00051B90 */

loc_00051EB6: ;
    edx = MEM32(ebx * 4 + 0x76E890);
    ecx = MEM32(esp + 0x20);
    esp = esp + 0x10;
    if (CMP_NE(MEM16(edx + ecx * 8 + 6), 0)) goto loc_00051F67; /* jne: not equal / not zero */

loc_00051ED0: ;
    edx = MEM32(edi * 4 + 0x76EF34);
    ecx = MEM32(edx + esi + 0x38);
    xmm1 = MEMF(ecx + eax * 4 + 4); /* movss */
    xmm1 = xmm1 - MEMF(ecx + eax * 4); /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx + eax * 4;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00051F03; /* jnp: not parity */

loc_00051EF5: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_00051F03: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(edx) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    POP32(esp, esi);
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(ebp) = xmm2; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00051F67: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, esi);

loc_00051F8F: ;
    POP32(esp, ebp);
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
 * sub_00051FA0
 * Original: 0x00051FA0 - 0x00052099 (249 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00051FA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00051FA0: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    esp = esp - 0x38;
    PUSH32(esp, esi);
    esi = edx + ecx;
    if (CMP_B(MEM16(esi * 2 + 0x76F030), 2)) goto loc_00052094; /* jb: below (unsigned <) */

loc_00051FBB: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00051FD0; /* ja: above (unsigned >) */

loc_00051FC8: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00051FD3; /* jbe: below or equal (unsigned <=) */

loc_00051FD0: ;
    xmm0 = xmm1; /* movaps */

loc_00051FD3: ;
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x76EF34);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx << 6;
    xmm1 = MEMF(edi + edx); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00051B90(); /* call 0x00051B90 */

loc_00052007: ;
    edx = MEM32(esi * 4 + 0x76E890);
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    (void)0; /* cmp MEM16(edx + eax * 8 + 6), 0 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(MEM16(edx + eax * 8 + 6), 0)) goto loc_00052038; /* jne: not equal / not zero */

loc_0005201E: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    goto loc_00052066;

loc_00052038: ;
    ecx = ZX16(MEM16(esi * 2 + 0x76F030));
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000520A0(); /* call 0x000520A0 */

loc_0005204B: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    esp = esp + 8;

loc_00052066: ;
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 4) = xmm0; /* movss */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00052081: ;
    edx = MEM32(esp + 0x48);
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(edx) = xmm0; /* movss */

loc_00052094: ;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000520A0
 * Original: 0x000520A0 - 0x000520CB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000520A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000520A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax + -1;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = 6;
    MEM32(esp + 0x10) = ebx;
    if (TEST_S(edi, edi)) { sub_000520CB(); return; } /* jl: less (signed <) */

loc_000520B9: ;
    ebx = 7;
    MEM32(esp + 0x10) = ebx;
    ebp = 3;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000520D7(); return; /* tail jmp 0x000520D7 */

}

/**
 * sub_00052250
 * Original: 0x00052250 - 0x0005258F (831 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052250(void)
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

loc_00052250: ;
    esp = esp - 0x84;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x8C);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    edx = ecx + eax;
    (void)0; /* cmp MEM16(edx * 2 + 0x76F030), 2 - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (CMP_B(MEM16(edx * 2 + 0x76F030), 2)) goto loc_00052587; /* jb: below (unsigned <) */

loc_00052279: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    eax = eax << 6;
    PUSH32(esp, ebp);
    ebp = eax;
    eax = MEM32(edi * 4 + 0x76EF34);
    MEM8(eax + ebp + 0x3C) = 0xFF;
    ecx = ZX16(MEM16(edx * 2 + 0x76F030));
    PUSH32(esp, esi);
    eax = ecx + -1;
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0005255C; /* jle: less or equal (signed <=) */

loc_000522AD: ;
    xmm2 = MEMF(0x648D10); /* movss */
    xmm3 = MEMF(0x648CF0); /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm5 = MEMF(0x648CF4); /* movss */
    goto loc_000522D3;

loc_000522CF: ;
    edx = MEM32(esp + 0x14);

loc_000522D3: ;
    eax = MEM32(edx * 4 + 0x76E890);
    edi = ZX16(MEM16(eax + esi * 8 + 6));
    PUSH32(esp, eax);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_000520A0(); /* call 0x000520A0 */

loc_000522EC: ;
    eax = MEM32(esp + 0xA0);
    ecx = MEM32(eax * 4 + 0x76EF34);
    edx = MEM32(ecx + ebp + 4);
    esp = esp + 8;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(edx + esi * 4) = xmm1; /* movss */
    if (TEST_NZ(edi, edi)) goto loc_000524F9; /* jne: not equal / not zero */

loc_0005230E: ;
    eax = 0; /* xor self */

loc_00052310: ;
    xmm0 = MEMF(esp + eax + 0x88); /* movss */
    xmm6 = MEMF(esp + eax + 0x7C); /* movss */
    xmm1 = MEMF(esp + eax + 0x64); /* movss */
    ecx = MEM32(esp + eax + 0x70);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(esp + eax + 0x70); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm6 = MEMF(esp + eax + 0x7C); /* movss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = MEMF(esp + eax + 0x70); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = MEMF(esp + eax + 0x7C); /* movss */
    xmm6 = xmm6 + MEMF(esp + eax + 0x64); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + eax + 0x34) = xmm7; /* movss */
    MEMF(esp + eax + 0x58) = xmm6; /* movss */
    MEMF(esp + eax + 0x40) = xmm0; /* movss */
    MEM32(esp + eax + 0x4C) = ecx;
    eax = eax + 4;
    if (CMP_L(eax, 0xC)) goto loc_00052310; /* jl: less (signed <) */

loc_000523A0: ;
    xmm4 = MEMF(esp + 0x4C); /* movss */
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm6 = MEMF(esp + 0x54); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    eax = eax + eax * 2;
    eax = eax << 2;
    MEMF(esp + eax + 0x1C) = xmm4; /* movss */
    MEMF(esp + eax + 0x20) = xmm5; /* movss */
    MEMF(esp + eax + 0x24) = xmm6; /* movss */
    /* nop */

loc_000523E0: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x60); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x5C); /* addss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x58); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x48); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x44); /* addss */
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm6; /* addss */
    MEMF(esp + eax + 0x24) = xmm2; /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    MEMF(esp + eax + 0x20) = xmm1; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp + eax + 0x1C) = xmm0; /* movss */
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm1 = xmm1 - MEMF(esp + eax + 0x20); /* subss */
    xmm2 = xmm2 - MEMF(esp + eax + 0x24); /* subss */
    xmm0 = xmm0 - MEMF(esp + eax + 0x1C); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* ucomiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000524BB; /* jnp: not parity */

loc_000524AD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */

loc_000524BB: ;
    xmm3 = xmm3 + MEMF(0x648E54); /* addss */
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, LO8(ebx) ^ 1);
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 >= xmm3)) goto loc_000523E0; /* jae: above or equal (unsigned >=) */

loc_000524D7: ;
    xmm5 = MEMF(0x648CF4); /* movss */
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648CF0); /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    goto loc_00052537;

loc_000524F9: ;
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
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
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */

loc_00052537: ;
    edx = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(edx * 2 + 0x76F030));
    xmm1 = MEMF(esp + 0x10); /* movss */
    esi++;
    eax = ecx + -1;
    if (CMP_L(esi, eax)) goto loc_000522CF; /* jl: less (signed <) */

loc_00052555: ;
    edi = MEM32(esp + 0x98);

loc_0005255C: ;
    ecx = MEM32(edi * 4 + 0x76EF34);
    edx = MEM32(ecx + ebp + 4);
    MEMF(edx + esi * 4) = xmm1; /* movss */
    eax = MEM32(edi * 4 + 0x76EF34);
    MEMF(eax + ebp) = xmm1; /* movss */
    ecx = MEM32(edi * 4 + 0x76EF34);
    POP32(esp, esi);
    MEM8(ecx + ebp + 0x3C) = 0xFF;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00052587: ;
    POP32(esp, edi);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00052590
 * Original: 0x00052590 - 0x00052B4B (1467 bytes, 310 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052590(void)
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

loc_00052590: ;
    esp = esp - 0x6C;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    ecx = eax + ebp;
    eax = ZX16(MEM16(ecx * 2 + 0x76F030));
    edx = eax + -1;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x78);
    if (CMP_GE(eax, edx)) goto loc_00052B46; /* jge: greater or equal (signed >=) */

loc_000525BB: ;
    edx = MEM32(esi * 4 + 0x76EF34);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ebp;
    edi = edi << 6;
    edx = MEM32(edx + edi + 4);
    xmm1 = MEMF(edx + eax * 4); /* movss */
    edx = edx + eax * 4;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx * 4 + 0x76E890);
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_000520A0(); /* call 0x000520A0 */

loc_000525FE: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x88);
    esp = esp + 8;
    if (CMP_NE(MEM16(edx + eax * 8 + 6), 0)) goto loc_000529CD; /* jne: not equal / not zero */

loc_00052618: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm3 = MEMF(0x648CF0); /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm5 = MEMF(esp + 0x6C); /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm7 = MEMF(esp + 0x64); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x54); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * MEMF(0x648CE0); /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x54); /* movss */
    xmm5 = xmm5 * MEMF(0x648CF4); /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x54); /* movss */
    xmm4 = xmm4 + MEMF(esp + 0x48); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x70); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    ebp = ebp << 4;
    eax = ebp;
    MEMF(ecx + eax * 4 + 8) = xmm5; /* movss */
    edx = MEM32(esi * 4 + 0x76EF34);
    xmm5 = MEMF(esp + 0x4C); /* movss */
    MEMF(edx + eax * 4 + 0x14) = xmm2; /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    xmm7 = xmm7 * xmm3; /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x58); /* movss */
    MEMF(ecx + eax * 4 + 0x20) = xmm4; /* movss */
    edx = MEM32(esi * 4 + 0x76EF34);
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x64); /* movss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x58); /* movss */
    xmm6 = xmm6 * MEMF(0x648CF4); /* mulss */
    MEMF(edx + eax * 4 + 0x2C) = xmm1; /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    MEMF(ecx + eax * 4 + 0xC) = xmm7; /* movss */
    edx = MEM32(esi * 4 + 0x76EF34);
    xmm7 = MEMF(esp + 0x50); /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x64); /* movss */
    xmm5 = xmm5 + MEMF(esp + 0x4C); /* addss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 - MEMF(esp + 0x10); /* subss */
    MEMF(edx + eax * 4 + 0x18) = xmm6; /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    xmm7 = xmm7 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x74); /* movss */
    MEMF(esp + 0xC) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x68); /* movss */
    MEMF(ecx + eax * 4 + 0x24) = xmm5; /* movss */
    edx = MEM32(esi * 4 + 0x76EF34);
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(edx + eax * 4 + 0x30) = xmm2; /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x5C); /* movss */
    xmm3 = xmm3 * MEMF(0x648CF4); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x68); /* movss */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - MEMF(esp + 0x10); /* subss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x68); /* movss */
    xmm6 = xmm6 + MEMF(esp + 0x50); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 - MEMF(esp + 0xC); /* subss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEMF(ecx + eax * 4 + 0x10) = xmm0; /* movss */
    edx = MEM32(esi * 4 + 0x76EF34);
    xmm7 = xmm3; /* movaps */
    xmm3 = MEMF(esp + 0x20); /* movss */
    MEMF(edx + eax * 4 + 0x1C) = xmm7; /* movss */
    ecx = MEM32(esi * 4 + 0x76EF34);
    MEMF(ecx + eax * 4 + 0x28) = xmm6; /* movss */
    edx = MEM32(esi * 4 + 0x76EF34);
    MEMF(edx + eax * 4 + 0x34) = xmm3; /* movss */
    eax = MEM32(esi * 4 + 0x76EF34);
    ecx = MEM32(eax + edi + 0x38);
    xmm3 = MEMF(esp + 0x7C); /* movss */
    MEMF(ecx) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    ecx = 4;
    goto loc_000528C0;

loc_000528A8: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm7 = MEMF(esp + 0x2C); /* movss */
    /* nop */

loc_000528C0: ;
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + eax + 0x38) = xmm2; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x58); /* addss */
    MEMF(esp + eax + 0x34) = xmm1; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    MEMF(esp + eax + 0x30) = xmm0; /* movss */
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm1 = xmm1 - MEMF(esp + eax + 0x34); /* subss */
    xmm2 = xmm2 - MEMF(esp + eax + 0x38); /* subss */
    xmm0 = xmm0 - MEMF(esp + eax + 0x30); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* ucomiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00052993; /* jnp: not parity */

loc_00052985: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */

loc_00052993: ;
    edx = MEM32(esi * 4 + 0x76EF34);
    eax = MEM32(edx + edi + 0x38);
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm3 = xmm3 + MEMF(0x648E54); /* addss */
    MEMF(ecx + eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, LO8(ebx) ^ 1);
    ecx = ecx + 4;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 >= xmm3)) goto loc_000528A8; /* jae: above or equal (unsigned >=) */

loc_000529C8: ;
    goto loc_00052B32;

loc_000529CD: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x6497B4); /* movss */
    edx = 0; /* xor self */
    ecx = 2;
    eax = 0xC;
    edi = edi;

loc_000529F0: ;
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + ebx + -12) = xmm2; /* movss */
    ebx = ecx + -1;
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + eax + -8) = xmm2; /* movss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + eax + -4) = xmm2; /* movss */
    ebx = ecx + 1;
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + ebx) = xmm2; /* movss */
    ebx = ecx + 2;
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + eax + 4) = xmm2; /* movss */
    ebx = ecx + 3;
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + eax + 8) = xmm2; /* movss */
    ebx = ecx + 4;
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + eax + 0xC) = xmm2; /* movss */
    ebx = ecx + 5;
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esi * 4 + 0x76EF34);
    ebx = MEM32(ebx + edi + 0x38);
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + eax + 0x10) = xmm2; /* movss */
    eax = eax + 0x20;
    edx = edx + 8;
    ecx = ecx + 8;
    if (CMP_L(eax, 0x184)) goto loc_000529F0; /* jl: less (signed <) */

loc_00052AFD: ;
    if (CMP_GE(edx, 0x65)) goto loc_00052B32; /* jge: greater or equal (signed >=) */

loc_00052B02: ;
    goto loc_00052B10;

    /* nop */
    goto loc_00052B10;

    /* nop */

loc_00052B10: ;
    eax = MEM32(esi * 4 + 0x76EF34);
    ecx = MEM32(eax + edi + 0x38);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + edx * 4) = xmm2; /* movss */
    edx++;
    if (CMP_L(edx, 0x65)) goto loc_00052B10; /* jl: less (signed <) */

loc_00052B32: ;
    edx = MEM32(esi * 4 + 0x76EF34);
    SET_LO8(eax, MEM8(esp + 0x80));
    MEM8(edx + edi + 0x3C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00052B46: ;
    POP32(esp, ebp);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00052B50
 * Original: 0x00052B50 - 0x000532CD (1917 bytes, 428 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00052B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00052B50: ;
    SET_LO8(eax, MEM8(0x76EC82));
    esp = esp - 0x18;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (CMP_EQ(LO8(eax), 1)) goto loc_00052B6E; /* je: equal / zero */

loc_00052B61: ;
    if (CMP_NE(MEM8(ebp + 0x76F0E0), 1)) goto loc_000532C8; /* jne: not equal / not zero */

loc_00052B6E: ;
    (void)0; /* cmp MEM8(0x76EE34), 0xFF - flags set for next jcc */
    MEM8(0x76EDF8) = 0;
    if (CMP_NE(MEM8(0x76EE34), 0xFF)) goto loc_00052B92; /* jne: not equal / not zero */

loc_00052B7E: ;
    eax = MEM32(0x76EB64);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00054530(); /* call 0x00054530 */

loc_00052B8A: ;
    esp = esp + 8;
    MEM8(0x76EE34) = LO8(eax);

loc_00052B92: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, edi);
    /* nop */

loc_00052BA0: ;
    SET_LO8(eax, MEM8(ebp + 0x76EF28));
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000532AC; /* jbe: below or equal (unsigned <=) */

loc_00052BB4: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    MEM32(esp + 0x24) = eax;
    edi = 0; /* xor self */
    eax = eax + eax;
    MEM32(esp + 0x20) = eax;
    goto loc_00052BD0;

    /* nop */
    edi = edi;

loc_00052BD0: ;
    if (CMP_EQ(MEM16(eax + 0x76EF40), 0)) goto loc_00053286; /* je: equal / zero */

loc_00052BDE: ;
    if (CMP_EQ(MEM16(eax + 0x76F030), 0)) goto loc_00053286; /* je: equal / zero */

loc_00052BEC: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_00052C0D; /* jne: not equal / not zero */

loc_00052BF4: ;
    ecx = MEM32(ebp * 4 + 0x76EF2C);
    eax = ecx + esi * 8;
    SET_LO16(ecx, MEM16(eax));
    if (CMP_EQ(LO16(ecx), 1)) goto loc_00053286; /* je: equal / zero */

loc_00052C0B: ;
    goto loc_00052C25;

loc_00052C0D: ;
    edx = MEM32(ebp * 4 + 0x76EF2C);
    SET_LO16(ecx, MEM16(edx + esi * 8));
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    eax = edx + esi * 8;
    if (CMP_NE(LO16(ecx), 1)) goto loc_00053286; /* jne: not equal / not zero */

loc_00052C25: ;
    if (CMP_NE(LO16(ecx), 1)) goto loc_00053103; /* jne: not equal / not zero */

loc_00052C2F: ;
    eax = ZX8(MEM8(0x76EE34));
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ebx = MEM32(0x8470DC);
    if (CMP_NE(eax, esi)) goto loc_00053286; /* jne: not equal / not zero */

loc_00052C44: ;
    eax = MEM32(0x8472A0);
    if (TEST_Z(eax, eax)) goto loc_00052C52; /* je: equal / zero */

loc_00052C4D: ;
    if (CMP_NE(eax, 0xD)) goto loc_00052C7C; /* jne: not equal / not zero */

loc_00052C52: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(ecx + edi + 0x24); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x84947C) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_00052C7C; /* ja: above (unsigned >) */

loc_00052C74: ;
    MEMF(0x84947C) = xmm0; /* movss */

loc_00052C7C: ;
    if (TEST_NZ(eax, eax)) goto loc_00053286; /* jne: not equal / not zero */

loc_00052C84: ;
    if (CMP_NE(MEM8(ebp + 0x76F0E0), 1)) goto loc_00053286; /* jne: not equal / not zero */

loc_00052C91: ;
    if (TEST_NZ(MEM32(ebx + 0xC0), 0x40000)) goto loc_00052CBC; /* jne: not equal / not zero */

loc_00052C9D: ;
    SET_LO8(eax, MEM8(0x7655EA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00052CB3; /* jne: not equal / not zero */

loc_00052CA6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_00052CB0: ;
    esp = esp + 8;

loc_00052CB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00043E50(); /* call 0x00043E50 */

loc_00052CB9: ;
    esp = esp + 4;

loc_00052CBC: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm0 = MEMF(edx + edi + 0x34); /* movss */
    xmm4 = MEMF(0x648F88); /* movss */
    xmm1 = MEMF(0x64938C); /* movss */
    xmm3 = MEMF(0x6490B8); /* movss */
    ecx = edx + edi + 0x34;
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00052CFB; /* jp: parity */

loc_00052CEE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x76EE04) = xmm0; /* movss */
    goto loc_00052D3A;

loc_00052CFB: ;
    /* comiss xmm1, MEMF(ecx) - sets EFLAGS */
    if ((xmm1 <= MEMF(ecx))) goto loc_00052D05; /* jbe: below or equal (unsigned <=) */

loc_00052D00: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00052D15;

loc_00052D05: ;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm0 = xmm3; /* movaps */
    if ((xmm0 > xmm3)) goto loc_00052D15; /* ja: above (unsigned >) */

loc_00052D11: ;
    xmm0 = MEMF(ecx); /* movss */

loc_00052D15: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    MEMF(eax + edi + 0x34) = xmm0; /* movss */
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm0 = MEMF(ecx + edi + 0x34); /* movss */
    MEMF(0x76EE04) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */

loc_00052D3A: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(edx + edi + 0x3C); /* movss */
    ecx = edx + edi + 0x3C;
    /* ucomiss xmm2, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00052D5C; /* jp: parity */

loc_00052D54: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_00052D96;

loc_00052D5C: ;
    /* comiss xmm1, MEMF(ecx) - sets EFLAGS */
    if ((xmm1 <= MEMF(ecx))) goto loc_00052D66; /* jbe: below or equal (unsigned <=) */

loc_00052D61: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00052D76;

loc_00052D66: ;
    xmm2 = MEMF(ecx); /* movss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    xmm2 = xmm3; /* movaps */
    if ((xmm2 > xmm3)) goto loc_00052D76; /* ja: above (unsigned >) */

loc_00052D72: ;
    xmm2 = MEMF(ecx); /* movss */

loc_00052D76: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    MEMF(eax + edi + 0x3C) = xmm2; /* movss */
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(ecx + edi + 0x3C); /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */

loc_00052D96: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(edx + edi + 0x40); /* movss */
    ecx = edx + edi + 0x40;
    /* ucomiss xmm2, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00052DB8; /* jp: parity */

loc_00052DB0: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_00052DED;

loc_00052DB8: ;
    /* comiss xmm1, MEMF(ecx) - sets EFLAGS */
    if ((xmm1 > MEMF(ecx))) goto loc_00052DCD; /* ja: above (unsigned >) */

loc_00052DBD: ;
    xmm1 = MEMF(ecx); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    xmm1 = xmm3; /* movaps */
    if ((xmm1 > xmm3)) goto loc_00052DCD; /* ja: above (unsigned >) */

loc_00052DC9: ;
    xmm1 = MEMF(ecx); /* movss */

loc_00052DCD: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    MEMF(eax + edi + 0x40) = xmm1; /* movss */
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm1 = MEMF(ecx + edi + 0x40); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_00052DED: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    eax = edx + edi;
    MEM32(0x76EE00) = ebp;
    xmm1 = MEMF(eax); /* movss */
    MEMF(0x76EE10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x76EE14) = xmm1; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp * 4 + 0x76EF2C);
    esi = eax + esi * 8;
    MEMF(0x76EE18) = xmm2; /* movss */
    SET_LO8(eax, MEM8(esi + 2));
    if (CMP_NE(LO8(eax), 1)) goto loc_00052EFD; /* jne: not equal / not zero */

loc_00052E38: ;
    SET_LO8(eax, MEM8(esi + 3));
    edx = MEM32(esp + 0x18);
    ecx = SX8(LO8(eax));
    if (CMP_EQ(ecx, edx)) goto loc_00053286; /* je: equal / zero */

loc_00052E4A: ;
    if (CMP_GE(LO8(eax), 0x1E)) goto loc_00053286; /* jge: greater or equal (signed >=) */

loc_00052E52: ;
    eax = MEM32(esp + 0x24);
    eax = eax + ecx;
    if (CMP_EQ(MEM16(eax * 2 + 0x76F030), 0)) goto loc_00053286; /* je: equal / zero */

loc_00052E67: ;
    ecx = MEM32(ebp * 4 + 0x76EF2C);
    eax = MEM32(ebp * 4 + 0x76E884);
    MEM32(0x76EDFC) = 0;
    ecx = ecx + edx * 8;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    xmm1 = MEMF(edx + eax); /* movss */
    MEMF(0x76EE1C) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(edx + eax + 4); /* addss */
    xmm1 = xmm1 + MEMF(eax + edi + 0x38); /* addss */
    MEMF(0x76EE20) = xmm1; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    xmm1 = MEMF(ecx + eax + 8); /* movss */
    MEMF(0x76EE24) = xmm1; /* movss */
    xmm0 = xmm0 - MEMF(eax + edi + 0x14); /* subss */

loc_00052ED4: ;
    MEMF(0x76EE28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(0x76EE2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(0x76EE30) = xmm0; /* movss */
    goto loc_000530E3;

loc_00052EFD: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00052F66; /* jne: not equal / not zero */

loc_00052F01: ;
    SET_LO8(edx, MEM8(esi + 3));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00052F09: ;
    if (TEST_Z(eax, eax)) goto loc_00053286; /* je: equal / zero */

loc_00052F11: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    MEM32(0x76EDFC) = 0;
    xmm1 = MEMF(eax + 0x78); /* movss */
    MEMF(0x76EE1C) = xmm1; /* movss */
    ecx = edx + edi;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    xmm1 = xmm1 + MEMF(eax + 0x7C); /* addss */
    MEMF(0x76EE20) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    MEMF(0x76EE24) = xmm1; /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x14); /* subss */
    goto loc_00052ED4;

loc_00052F66: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_00052FD3; /* jne: not equal / not zero */

loc_00052F6A: ;
    SET_LO8(edx, MEM8(esi + 3));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00052F72: ;
    if (TEST_Z(eax, eax)) goto loc_00053286; /* je: equal / zero */

loc_00052F7A: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    MEM32(0x76EDFC) = 0;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x76EE1C) = xmm1; /* movss */
    ecx = edx + edi;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    edx = edx + esi;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    MEMF(0x76EE20) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x76EE24) = xmm1; /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x14); /* subss */
    goto loc_00052ED4;

loc_00052FD3: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000530E3; /* jne: not equal / not zero */

loc_00052FDB: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    eax = ecx + edi;
    MEM32(0x76EDFC) = 1;
    xmm0 = xmm0 - MEMF(eax + 0x14); /* subss */
    MEMF(0x76EE1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x76EE20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x76EE24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    (void)0; /* cmp MEM32(0x7FA1F8), 7 - flags set for next jcc */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(0x76EE14) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x7FA1F8), 7)) goto loc_000530C7; /* jne: not equal / not zero */

loc_00053034: ;
    edx = MEM32(0x76EE18);
    eax = MEM32(0x76EE14);
    ecx = MEM32(0x76EE10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x780AB0) = 0x5D517C;
    MEM32(0x6C0210) = 0xD6D;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x10000;
    PUSH32(esp, 0); sub_00066AC0(); /* call 0x00066AC0 */

loc_00053072: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_0005307A: ;
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000530C7; /* jnp: not parity */

loc_00053087: ;
    xmm1 = MEMF(0x76EE14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000530AE; /* jbe: below or equal (unsigned <=) */

loc_0005309B: ;
    /* comiss xmm1, MEMF(0x64B0B8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x64B0B8))) goto loc_000530C7; /* jbe: below or equal (unsigned <=) */

loc_000530A4: ;
    xmm0 = xmm0 - MEMF(0x6496BC); /* subss */
    goto loc_000530BF;

loc_000530AE: ;
    xmm2 = MEMF(0x6496BC); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_000530C7; /* jbe: below or equal (unsigned <=) */

loc_000530BB: ;
    xmm0 = xmm0 + xmm2; /* addss */

loc_000530BF: ;
    MEMF(0x76EE14) = xmm0; /* movss */

loc_000530C7: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(0x76EE28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(0x76EE2C) = xmm0; /* movss */

loc_000530E3: ;
    SET_LO8(eax, MEM8(0x7655EA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00053286; /* jne: not equal / not zero */

loc_000530F0: ;
    PUSH32(esp, 0x76EDFC);
    PUSH32(esp, 7);
    ecx = ebx;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_000530FE: ;
    goto loc_00053283;

loc_00053103: ;
    if (CMP_NE(LO16(ecx), 3)) goto loc_0005326C; /* jne: not equal / not zero */

loc_0005310D: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00053115: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00053286; /* je: equal / zero */

loc_0005311F: ;
    SET_LO8(edx, MEM8(esi + 0xC3));
    MEM8(esi + 0x9E) = 0;
    SET_LO8(edx, LO8(edx) & 0x7F);
    MEM8(esi + 0xC3) = LO8(edx);
    edx = MEM32(ebp * 4 + 0x76E884);
    eax = (int32_t)MEMF(edx + edi); /* cvttss2si */
    MEM16(esi + 0x14) = LO16(eax);
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm0 = MEMF(ecx + edi + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(ecx + edi + 4); /* addss */
    eax = ecx + edi;
    xmm1 = MEMF(0x648F88); /* movss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 0x16) = LO16(edx);
    eax = MEM32(ebp * 4 + 0x76E884);
    ecx = (int32_t)MEMF(eax + edi + 8); /* cvttss2si */
    MEM16(esi + 0x18) = LO16(ecx);
    edx = MEM32(ebp * 4 + 0x76E884);
    eax = MEM32(edx + edi + 0xC);
    MEM32(esi + 4) = eax;
    ecx = MEM32(ebp * 4 + 0x76E884);
    edx = MEM32(ecx + edi + 0x10);
    MEM32(esi + 8) = edx;
    eax = MEM32(ebp * 4 + 0x76E884);
    ecx = MEM32(eax + edi + 0x14);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm0 = MEMF(edx + edi + 0x18); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    xmm0 = MEMF(0x648E54); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000531D5; /* jnp: not parity */

loc_000531C4: ;
    eax = edx;
    xmm2 = MEMF(eax + edi + 0x18); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esi + 0x7C) = xmm2; /* movss */

loc_000531D5: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(ecx + edi + 0x1C); /* movss */
    ecx = ecx + edi + 0x1C;
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000531FB; /* jnp: not parity */

loc_000531EF: ;
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esi + 0x80) = xmm2; /* movss */

loc_000531FB: ;
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(edx + edi + 0x20); /* movss */
    ecx = edx + edi + 0x20;
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00053224; /* jnp: not parity */

loc_00053215: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x84) = xmm1; /* movss */

loc_00053224: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    eax = (int32_t)MEMF(eax + edi + 0x34); /* cvttss2si */
    if (CMP_LE(eax, 0xFF)) goto loc_00053241; /* jle: less or equal (signed <=) */

loc_00053238: ;
    MEM8(esi + 0xEE) = 0xFF;
    goto loc_00053250;

loc_00053241: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    SET_LO8(ecx, LO8(ecx) - 1);
    ecx = ecx & eax;
    MEM8(esi + 0xEE) = LO8(ecx);

loc_00053250: ;
    PUSH32(esp, 0x870EE0);
    ebx = esi;
    PUSH32(esp, 0); sub_0006B4B0(); /* call 0x0006B4B0 */

loc_0005325C: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_00053267: ;
    esp = esp + 4;
    goto loc_00053286;

loc_0005326C: ;
    if (CMP_NE(LO16(ecx), 2)) goto loc_00053286; /* jne: not equal / not zero */

loc_00053272: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0005327B: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_00053283: ;
    esp = esp + 8;

loc_00053286: ;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(ebp + 0x76EF28));
    esi++;
    eax = eax + 2;
    edi = edi + 0x44;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x20) = eax;
    if (CMP_L(esi, ecx)) goto loc_00052BD0; /* jl: less (signed <) */

loc_000532AC: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 2)) goto loc_00052BA0; /* jl: less (signed <) */

loc_000532BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x76EDF8) = 1;
    POP32(esp, ebx);

loc_000532C8: ;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000532D0
 * Original: 0x000532D0 - 0x0005376B (1179 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000532D0(void)
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

loc_000532D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM8(0x76EC82), 1)) goto loc_000532EF; /* je: equal / zero */

loc_000532E2: ;
    if (CMP_NE(MEM8(ebp + 0x76F0E0), 1)) goto loc_00053767; /* jne: not equal / not zero */

loc_000532EF: ;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(0x76EDF8) = 0;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00053304; /* je: equal / zero */

loc_000532FB: ;
    eax = edi + 1;
    MEM32(esp + 8) = eax;
    goto loc_00053311;

loc_00053304: ;
    ecx = ZX8(MEM8(ebp + 0x76EF28));
    edi = 0; /* xor self */
    MEM32(esp + 8) = ecx;

loc_00053311: ;
    (void)0; /* cmp edi, MEM32(esp + 8) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_GE(edi, MEM32(esp + 8))) goto loc_0005375E; /* jge: greater or equal (signed >=) */

loc_0005331D: ;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    edx = edx + edi;
    ebx = edx * 2 + 0x76F030;
    goto loc_00053330;

    /* nop */

loc_00053330: ;
    if (CMP_EQ(MEM16(ebx), 0)) goto loc_0005336E; /* je: equal / zero */

loc_00053336: ;
    eax = MEM32(ebp * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + edi * 8), 2 - flags set for next jcc */
    eax = eax + edi * 8;
    if (CMP_NE(MEM16(eax + edi * 8), 2)) goto loc_0005336E; /* jne: not equal / not zero */

loc_00053347: ;
    ecx = MEM32(0x8472A0);
    if (TEST_NZ(ecx, ecx)) goto loc_0005335A; /* jne: not equal / not zero */

loc_00053351: ;
    if (CMP_NE(MEM8(ebp + 0x76F0E0), 1)) goto loc_0005336E; /* jne: not equal / not zero */

loc_0005335A: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00053362: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0005336E; /* je: equal / zero */

loc_00053368: ;
    if (CMP_EQ(esi, MEM32(esp + 0x18))) goto loc_00053387; /* je: equal / zero */

loc_0005336E: ;
    eax = MEM32(esp + 0x10);
    edi++;
    ebx = ebx + 2;
    if (CMP_L(edi, eax)) goto loc_00053330; /* jl: less (signed <) */

loc_0005337A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(0x76EDF8) = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00053387: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x44);
    edx = MEM32(edi + ecx);
    xmm2 = MEMF(esi + 0x78); /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEM32(esi + 0x78) = edx;
    eax = MEM32(ebp * 4 + 0x76E884);
    xmm1 = MEMF(eax + edi + 0x38); /* movss */
    xmm1 = xmm1 + MEMF(eax + edi + 4); /* addss */
    eax = eax + edi;
    MEMF(esi + 0x7C) = xmm1; /* movss */
    ecx = MEM32(ebp * 4 + 0x76E884);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(edi + ecx + 8);
    MEM32(esi + 0x3B8) = eax;
    SET_LO8(eax, MEM8(0x765601));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 0x80) = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00053430; /* jne: not equal / not zero */

loc_000533E1: ;
    xmm1 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0005343B; /* jnp: not parity */

loc_00053420: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x110) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0005343B;

loc_00053430: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x110) = xmm0; /* movss */

loc_0005343B: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00053459; /* je: equal / zero */

loc_00053445: ;
    xmm0 = MEMF(esi + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(eax) = xmm0; /* movss */

loc_00053459: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x2000);
    ecx = 0xEBE;
    eax = 0x5D517C;
    MEMF(esi + 0x128) = xmm0; /* movss */
    MEM16(esi + 0x1D4) = 0;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_00053481: ;
    ecx = MEM32(esi + 0x7C);
    edx = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ecx;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x298;
    PUSH32(esp, edx);
    ebx = esi + 0x228;
    PUSH32(esp, ebx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi + 0x2A0;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000534BD: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    eax = MEM32(esi + 0x64);
    xmm1 = MEMF(esi + 0x7C); /* movss */
    edx = 0; /* xor self */
    esp = esp + 0x3C;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(0x780AB0) = edx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(edx);
    MEM32(0x74FA2C) = edx;
    MEMF(esi + 0x294) = xmm0; /* movss */
    MEMF(esi + 0xDC) = xmm1; /* movss */
    MEM8(esi + 0x1D8) = LO8(edx);
    if (CMP_NE(eax, 1)) goto loc_00053539; /* jne: not equal / not zero */

loc_0005350B: ;
    xmm0 = MEMF(ebx); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0005352B; /* jnp: not parity */

loc_0005351C: ;
    /* comiss xmm0, MEMF(esi + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x7C))) goto loc_0005352B; /* jbe: below or equal (unsigned <=) */

loc_00053522: ;
    MEM8(esi + 0x1B5) = 1;
    goto loc_00053539;

loc_0005352B: ;
    MEM8(esi + 0x1B5) = 0;
    MEM16(esi + 0x1B8) = LO16(edx);

loc_00053539: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    xmm0 = MEMF(edi + eax + 0x18); /* movss */
    xmm1 = MEMF(0x648F88); /* movss */
    ecx = 0; /* xor self */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    xmm0 = MEMF(0x648E54); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00053598; /* jnp: not parity */

loc_00053561: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(edi + ecx + 0x18); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esi + 0x260) = xmm2; /* movss */
    eax = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(edi + eax + 0x18); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esi + 0x268) = xmm2; /* movss */
    ecx = 1;

loc_00053598: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    xmm2 = MEMF(edi + eax + 0x1C); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000535E2; /* jnp: not parity */

loc_000535AE: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    xmm1 = MEMF(edi + ecx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x264) = xmm1; /* movss */
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm1 = MEMF(edi + edx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x26C) = xmm1; /* movss */
    goto loc_000535E6;

loc_000535E2: ;
    if (CMP_EQ(ecx, edx)) goto loc_000535FD; /* je: equal / zero */

loc_000535E6: ;
    xmm0 = MEMF(esi + 0x264); /* movss */
    xmm1 = MEMF(esi + 0x260); /* movss */
    ecx = esi;
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_000535FD: ;
    eax = MEM32(ebp * 4 + 0x76E884);
    ecx = MEM32(edi + eax + 0xC);
    xmm1 = MEMF(0x648F60); /* movss */
    MEM32(esi + 0x1C0) = ecx;
    edx = MEM32(ebp * 4 + 0x76E884);
    xmm0 = MEMF(edi + edx + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_0005364F; /* jb: below (unsigned <) */

loc_00053636: ;
    goto loc_00053640;

    /* nop */
    /* nop */

loc_00053640: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm0 >= xmm1)) goto loc_00053640; /* jae: above or equal (unsigned >=) */

loc_0005364F: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0005366F; /* jbe: below or equal (unsigned <=) */

loc_00053657: ;
    goto loc_00053660;

loc_00053659: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* nop */

loc_00053660: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm2 > xmm0)) goto loc_00053659; /* ja: above (unsigned >) */

loc_0005366F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0005367E: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = 0xC000;
    MEMF(esi + 0x114) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx - eax;
    MEM16(esi + 0x172) = LO16(ecx);
    MEM16(esi + 0x174) = LO16(ecx);
    MEM16(esi + 0x170) = LO16(ecx);
    eax = MEM32(ebp * 4 + 0x76E884);
    ecx = MEM32(edi + eax + 0x14);
    MEM32(esi + 0x1CC) = ecx;
    edx = MEM32(ebp * 4 + 0x76E884);
    /* comiss xmm0, MEMF(edi + edx + 0x34) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + edx + 0x34))) goto loc_000536E6; /* ja: above (unsigned >) */

loc_000536CA: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    eax = edx;
    xmm1 = MEMF(edi + eax + 0x34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = edi + eax + 0x34;
    if ((xmm1 > xmm0)) goto loc_000536E6; /* ja: above (unsigned >) */

loc_000536E3: ;
    xmm0 = xmm1; /* movaps */

loc_000536E6: ;
    ecx = MEM32(ebp * 4 + 0x76E884);
    MEMF(edi + ecx + 0x34) = xmm0; /* movss */
    edx = MEM32(ebp * 4 + 0x76E884);
    fp_push(MEMF(edi + edx + 0x34)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00053703: ;
    if (CMP_A(MEM8(esi + 0xB7), 1)) goto loc_00053728; /* ja: above (unsigned >) */

loc_0005370C: ;
    edx = 0; /* xor self */
    ecx = esi;
    MEM8(esi + 0xB7) = 0;
    MEM8(esi + 0xB4) = LO8(eax);
    MEM8(esi + 0xB5) = LO8(eax);
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_00053728: ;
    ecx = MEM32(esi + 0x7C);
    eax = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x80);
    MEM32(esi + 0x88) = ecx;
    PUSH32(esp, 0x870ED4);
    ecx = esi;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x8C) = edx;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_00053752: ;
    PUSH32(esp, 0x870ED4);
    ecx = esi;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_0005375E: ;
    POP32(esp, esi);
    MEM8(0x76EDF8) = 1;
    POP32(esp, ebx);

loc_00053767: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00053770
 * Original: 0x00053770 - 0x0005378B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053770: ;
    (void)0; /* cmp MEM8(0x76EC82), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(MEM8(0x76EC82), 1)) { sub_0005378B(); return; } /* je: equal / zero */

loc_0005377E: ;
    if (CMP_EQ(MEM8(edx + 0x76F0E0), 1)) { sub_0005378B(); return; } /* je: equal / zero */

loc_00053787: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00053920
 * Original: 0x00053920 - 0x00053938 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00053920: ;
    SET_LO8(eax, MEM8(0x76EC82));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_00053938(); return; } /* je: equal / zero */

loc_0005392C: ;
    if (CMP_EQ(MEM8(esi + 0x76F0E0), LO8(ebx))) { sub_00053938(); return; } /* je: equal / zero */

loc_00053934: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00053A20
 * Original: 0x00053A20 - 0x00053A9C (124 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053A20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00053A20: ;
    SET_LO8(ecx, MEM8(esi + 0x76EDE8));
    eax = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00053A4B; /* jbe: below or equal (unsigned <=) */

loc_00053A2C: ;
    ecx = esi;
    ecx = ecx << 7;
    ecx = ecx + 0x76ECE8;

loc_00053A37: ;
    edx = ZX8(MEM8(ecx + eax));
    if (CMP_EQ(edx, ebx)) goto loc_00053A9B; /* je: equal / zero */

loc_00053A3F: ;
    edx = ZX8(MEM8(esi + 0x76EDE8));
    eax++;
    if (CMP_L(eax, edx)) goto loc_00053A37; /* jl: less (signed <) */

loc_00053A4B: ;
    ecx = MEM32(0x84A5F8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00053A7E; /* je: equal / zero */

loc_00053A64: ;
    if (CMP_L(eax, 0x205)) goto loc_00053A7E; /* jl: less (signed <) */

loc_00053A6B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00053A7B: ;
    esp = esp + 0xC;

loc_00053A7E: ;
    SET_LO8(eax, MEM8(esi + 0x76EDE8));
    edx = esi;
    ecx = ZX8(LO8(eax));
    edx = edx << 7;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edx + ecx + 0x76ECE8) = LO8(ebx);
    MEM8(esi + 0x76EDE8) = LO8(eax);

loc_00053A9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00053AA0
 * Original: 0x00053AA0 - 0x00053B9C (252 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053AA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00053AA0: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    PUSH32(esp, ebx);
    edx = edx + ecx;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM16(edx * 2 + 0x76F030), LO16(ebx))) goto loc_00053B9A; /* je: equal / zero */

loc_00053AB8: ;
    eax = MEM32(eax * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + ecx * 8), 2 - flags set for next jcc */
    eax = eax + ecx * 8;
    if (CMP_NE(MEM16(eax + ecx * 8), 2)) goto loc_00053B9A; /* jne: not equal / not zero */

loc_00053ACD: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00053AD6: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00053B99; /* je: equal / zero */

loc_00053AE0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    MEM8(edi + 0x13D) = LO8(ebx);
    MEM8(edi + 0x13E) = LO8(ebx);
    MEM8(edi + 0x13B) = LO8(ebx);
    MEM8(edi + 0x13C) = LO8(ebx);
    MEM16(edi + 0x480) = LO16(ebx);
    MEM16(edi + 0x478) = LO16(ebx);
    MEM16(edi + 0x47A) = LO16(ebx);
    MEM16(edi + 0x47C) = LO16(ebx);
    MEM16(edi + 0x47E) = LO16(ebx);
    PUSH32(esp, 0); sub_002CEFC0(); /* call 0x002CEFC0 */

loc_00053B2A: ;
    SET_LO8(eax, MEM8(edi + 0x141));
    esp = esp + 0x10;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00053B44; /* je: equal / zero */

loc_00053B37: ;
    eax = edi;
    MEM8(edi + 0x141) = LO8(ebx);
    PUSH32(esp, 0); sub_002CF1C0(); /* call 0x002CF1C0 */

loc_00053B44: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(edi + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(edi + 0x128) = xmm0; /* movss */
    MEMF(edi + 0x1CC) = xmm0; /* movss */
    MEMF(edi + 0x3BC) = xmm0; /* movss */
    MEMF(edi + 0x1C0) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00053B8C; /* je: equal / zero */

loc_00053B71: ;
    MEMF(eax + 0x14) = xmm0; /* movss */
    ecx = MEM32(edi + 0x568);
    if (CMP_NE(MEM32(ecx + 0xA0), 0x75)) goto loc_00053B8C; /* jne: not equal / not zero */

loc_00053B85: ;
    eax = edi;
    PUSH32(esp, 0); sub_0031AB10(); /* call 0x0031AB10 */

loc_00053B8C: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000FED10(); /* call 0x000FED10 */

loc_00053B96: ;
    esp = esp + 4;

loc_00053B99: ;
    POP32(esp, edi);

loc_00053B9A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00053BA0
 * Original: 0x00053BA0 - 0x00053D04 (356 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053BA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00053BA0: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    ecx = ecx + eax;
    if (CMP_EQ(MEM16(ecx * 2 + 0x76F030), 0)) goto loc_00053D03; /* je: equal / zero */

loc_00053BB6: ;
    edx = MEM32(edi * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(edx + eax * 8), 2 - flags set for next jcc */
    eax = edx + eax * 8;
    if (CMP_NE(MEM16(edx + eax * 8), 2)) goto loc_00053D03; /* jne: not equal / not zero */

loc_00053BCB: ;
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 2));
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x45)) goto loc_00053BEE; /* je: equal / zero */

loc_00053BDA: ;
    if (CMP_EQ(eax, 0x2D)) goto loc_00053BEE; /* je: equal / zero */

loc_00053BDF: ;
    if (CMP_EQ(eax, 0x30)) goto loc_00053BEE; /* je: equal / zero */

loc_00053BE4: ;
    if (CMP_EQ(eax, 0x2B)) goto loc_00053BEE; /* je: equal / zero */

loc_00053BE9: ;
    if (CMP_NE(eax, 0x1A)) goto loc_00053BF1; /* jne: not equal / not zero */

loc_00053BEE: ;
    ebx = ebx + 0x11;

loc_00053BF1: ;
    PUSH32(esp, esi);
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_00053BF9: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00053D01; /* je: equal / zero */

loc_00053C04: ;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00053C09: ;
    if (TEST_Z(eax, eax)) goto loc_00053C48; /* je: equal / zero */

loc_00053C0D: ;
    if (CMP_NE(MEM8(eax + 0xA1), 3)) goto loc_00053C26; /* jne: not equal / not zero */

loc_00053C16: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(edi, edi)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    ecx = ecx & 4;
    MEM8(eax + 0xA1) = LO8(ecx);

loc_00053C26: ;
    if (CMP_NE(ebx, 1)) goto loc_00053D01; /* jne: not equal / not zero */

loc_00053C2F: ;
    ecx = MEM32(eax + 0x1FC);
    ecx = ecx & 0xFFFFFFD5u;
    esi = eax;
    MEM32(eax + 0x1FC) = ecx;
    PUSH32(esp, 0); sub_003114C0(); /* call 0x003114C0 */

loc_00053C45: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00053C48: ;
    edx = ZX8(MEM8(0x7FAA9D));
    if (CMP_GE(esi, edx)) goto loc_00053D01; /* jge: greater or equal (signed >=) */

loc_00053C57: ;
    ebx = MEM32(0x84A1AC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    PUSH32(esp, 0);
    eax = eax + ebx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_00053C6F: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00053C77: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00053D01; /* je: equal / zero */

loc_00053C81: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00053CF6; /* je: equal / zero */

loc_00053C8B: ;
    if (CMP_GE(eax, 0x205)) goto loc_00053CF6; /* jge: greater or equal (signed >=) */

loc_00053C92: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00053CF6; /* je: equal / zero */

loc_00053C99: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_00053CF6; /* je: equal / zero */

loc_00053CA0: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_00053CF6; /* je: equal / zero */

loc_00053CA6: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00053CB9; /* je: equal / zero */

loc_00053CAE: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_00053CCC; /* ja: above (unsigned >) */

loc_00053CB9: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00053CBE: ;
    ebx = ZX16(MEM16(esi + 0x60));
    esi = edi;
    PUSH32(esp, 0); sub_00053A20(); /* call 0x00053A20 */

loc_00053CC9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00053CCC: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00053CF3: ;
    esp = esp + 0x20;

loc_00053CF6: ;
    ebx = ZX16(MEM16(esi + 0x60));
    esi = edi;
    PUSH32(esp, 0); sub_00053A20(); /* call 0x00053A20 */

loc_00053D01: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00053D03: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00053D10
 * Original: 0x00053D10 - 0x00053D72 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00053D10: ;
    SET_LO8(eax, MEM8(edi + 0x76EF28));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00053D70; /* jbe: below or equal (unsigned <=) */

loc_00053D1D: ;
    PUSH32(esp, ebx);
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3C);

loc_00053D23: ;
    if (CMP_EQ(MEM16(ebx + 0x76EF40), 0)) goto loc_00053D60; /* je: equal / zero */

loc_00053D2D: ;
    if (CMP_EQ(MEM16(ebx + 0x76F030), 0)) goto loc_00053D60; /* je: equal / zero */

loc_00053D37: ;
    eax = MEM32(edi * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + esi * 8), 2 - flags set for next jcc */
    eax = eax + esi * 8;
    if (CMP_NE(MEM16(eax + esi * 8), 2)) goto loc_00053D60; /* jne: not equal / not zero */

loc_00053D48: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00053D50: ;
    if (TEST_Z(eax, eax)) goto loc_00053D60; /* je: equal / zero */

loc_00053D54: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_00053D5D: ;
    esp = esp + 8;

loc_00053D60: ;
    ecx = ZX8(MEM8(edi + 0x76EF28));
    esi++;
    ebx = ebx + 2;
    if (CMP_L(esi, ecx)) goto loc_00053D23; /* jl: less (signed <) */

loc_00053D6F: ;
    POP32(esp, ebx);

loc_00053D70: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00053D80
 * Original: 0x00053D80 - 0x00053DCC (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053D80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053D80: ;
    SET_LO8(ecx, MEM8(esi + 0x76ECE0));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX8(LO8(ecx));
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00053DB4; /* jle: less or equal (signed <=) */

loc_00053D92: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1E);
    ebx = ebx + 0x76ECA4;
    /* nop */

loc_00053DA0: ;
    ebp = ZX8(MEM8(ebx + eax));
    if (CMP_EQ(ebp, edx)) goto loc_00053DC8; /* je: equal / zero */

loc_00053DA8: ;
    ebp = ZX8(MEM8(esi + 0x76ECE0));
    eax++;
    if (CMP_L(eax, ebp)) goto loc_00053DA0; /* jl: less (signed <) */

loc_00053DB4: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + edi + 0x76ECA4) = LO8(edx);
    MEM8(esi + 0x76ECE0) = LO8(ecx);

loc_00053DC8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00053DD0
 * Original: 0x00053DD0 - 0x00053E45 (117 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053DD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x76EF28));
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00053E42; /* jbe: below or equal (unsigned <=) */

loc_00053DE0: ;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3C);
    PUSH32(esp, edi);
    ebx = ebx + 0x76F030;
    /* nop */

loc_00053DF0: ;
    if (CMP_EQ(MEM16(ebx), 0)) goto loc_00053E31; /* je: equal / zero */

loc_00053DF6: ;
    eax = MEM32(esi * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + ebp * 8), 3 - flags set for next jcc */
    eax = eax + ebp * 8;
    if (CMP_NE(MEM16(eax + ebp * 8), 3)) goto loc_00053E31; /* jne: not equal / not zero */

loc_00053E07: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00053E0F: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00053E31; /* je: equal / zero */

loc_00053E15: ;
    if (CMP_NE(MEM8(edi + 0xC2), 1)) goto loc_00053E31; /* jne: not equal / not zero */

loc_00053E1E: ;
    edx = ZX8(MEM8(edi + 0xC6));
    PUSH32(esp, 0); sub_00053D80(); /* call 0x00053D80 */

loc_00053E2A: ;
    MEM8(edi + 0xC2) = 0;

loc_00053E31: ;
    ecx = ZX8(MEM8(esi + 0x76EF28));
    ebp++;
    ebx = ebx + 2;
    if (CMP_L(ebp, ecx)) goto loc_00053DF0; /* jl: less (signed <) */

loc_00053E40: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00053E42: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00053E50
 * Original: 0x00053E50 - 0x00053EBB (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053E50: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebx + 0x76ECE0));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00053EB8; /* jbe: below or equal (unsigned <=) */

loc_00053E5E: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    PUSH32(esp, ebp);
    ecx = eax + 0x76ECA4;
    PUSH32(esp, esi);
    esi = MEM32(0x76FD10);
    MEM32(esp + 0xC) = ecx;

loc_00053E75: ;
    edx = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(edx + edi));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00053EA3; /* je: equal / zero */

loc_00053E82: ;
    if (CMP_LE(esi & esi, 0)) goto loc_00053EA1; /* jle: less or equal (signed <=) */

loc_00053E86: ;
    ebp = MEM32(0x8471B8);
    ecx = ebp + 0xC6;

loc_00053E92: ;
    if (CMP_EQ(MEM8(ecx), LO8(edx))) { sub_00053EBB(); return; } /* je: equal / zero */

loc_00053E96: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, esi)) goto loc_00053E92; /* jl: less (signed <) */

loc_00053EA1: ;
    eax = 0; /* xor self */

loc_00053EA3: ;
    MEM8(eax + 0xC2) = 1;
    eax = ZX8(MEM8(ebx + 0x76ECE0));
    edi++;
    if (CMP_L(edi, eax)) goto loc_00053E75; /* jl: less (signed <) */

loc_00053EB6: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00053EB8: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00053ED0
 * Original: 0x00053ED0 - 0x00053F26 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00053ED0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM8(0x76EC82), 1)) goto loc_00053EE5; /* je: equal / zero */

loc_00053EDC: ;
    if (CMP_NE(MEM8(edi + 0x76F0E0), 1)) goto loc_00053F24; /* jne: not equal / not zero */

loc_00053EE5: ;
    SET_LO8(eax, MEM8(edi + 0x76EF28));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x76EDF8) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00053F1C; /* jbe: below or equal (unsigned <=) */

loc_00053EF9: ;
    /* nop */

loc_00053F00: ;
    eax = esi;
    PUSH32(esp, 0); sub_00053BA0(); /* call 0x00053BA0 */

loc_00053F07: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_00053AA0(); /* call 0x00053AA0 */

loc_00053F10: ;
    eax = ZX8(MEM8(edi + 0x76EF28));
    esi++;
    if (CMP_L(esi, eax)) goto loc_00053F00; /* jl: less (signed <) */

loc_00053F1C: ;
    MEM8(0x76EDF8) = 1;
    POP32(esp, esi);

loc_00053F24: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00053F30
 * Original: 0x00053F30 - 0x00053FAC (124 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053F30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0x76EDE8));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00053FA9; /* jbe: below or equal (unsigned <=) */

loc_00053F42: ;
    eax = ebp;
    PUSH32(esp, ebx);
    eax = eax << 7;
    PUSH32(esp, esi);
    ebx = eax + 0x76ECE8;
    /* nop */

loc_00053F50: ;
    esi = ZX8(MEM8(ebx + edi));
    ecx = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    eax = MEM32(esi + ecx + 0x64);
    esi = esi + ecx;
    if (TEST_Z(eax, eax)) goto loc_00053F9B; /* je: equal / zero */

loc_00053F6A: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00053F8E; /* je: equal / zero */

loc_00053F74: ;
    if (CMP_L(eax, 0x205)) goto loc_00053F8E; /* jl: less (signed <) */

loc_00053F7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00053F8B: ;
    esp = esp + 0xC;

loc_00053F8E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00053F98: ;
    esp = esp + 0xC;

loc_00053F9B: ;
    ecx = ZX8(MEM8(ebp + 0x76EDE8));
    edi++;
    if (CMP_L(edi, ecx)) goto loc_00053F50; /* jl: less (signed <) */

loc_00053FA7: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00053FA9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00053FB0
 * Original: 0x00053FB0 - 0x00053FDD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053FB0: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 0x1B)) goto loc_00053FBD; /* je: equal / zero */

loc_00053FB8: ;
    if (CMP_NE(eax, 4)) goto loc_00053FCE; /* jne: not equal / not zero */

loc_00053FBD: ;
    eax = MEM32(eax * 4 + 0x747630);
    if (TEST_Z(eax, eax)) goto loc_00053FCE; /* je: equal / zero */

loc_00053FC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00053FCB: ;
    esp = esp + 4;

loc_00053FCE: ;
    eax = MEM32(esi + 0x68);
    if (CMP_NE(eax, 0x4B)) { sub_00053FDD(); return; } /* jne: not equal / not zero */

loc_00053FD6: ;
    eax = esi;
    g_seh_ebp = ebp; sub_00178C00(); return; /* tail jmp 0x00178C00 */

}

/**
 * sub_00054020
 * Original: 0x00054020 - 0x00054032 (18 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00054020: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0005402E; /* je: equal / zero */

loc_00054027: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_NZ(ecx, ecx)) { sub_00054032(); return; } /* jne: not equal / not zero */

loc_0005402E: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000540C0
 * Original: 0x000540C0 - 0x00054113 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000540C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000540C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(edi + 0x76EF28));
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0005410D; /* jle: less or equal (signed <=) */

loc_000540D0: ;
    ebp = MEM32(0x8471B8);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ecx = ecx + 0x76F030;

loc_000540E1: ;
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_00054105; /* je: equal / zero */

loc_000540E7: ;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(edi * 4 + 0x76EF2C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x150);
    SET_LO8(edx, MEM8(edx + eax * 8 + 2));
    if (CMP_EQ(LO8(edx), MEM8(ebx + ebp + 0xC6))) { sub_00054113(); return; } /* je: equal / zero */

loc_00054105: ;
    eax++;
    ecx = ecx + 2;
    if (CMP_L(eax, esi)) goto loc_000540E1; /* jl: less (signed <) */

loc_0005410D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00054120
 * Original: 0x00054120 - 0x00054530 (1040 bytes, 273 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054120(void)
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

loc_00054120: ;
    SET_LO8(eax, MEM8(0x76EC82));
    esp = esp - 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005452B; /* jne: not equal / not zero */

loc_00054135: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebp + 0x76EF28));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00054529; /* jle: less or equal (signed <=) */

loc_00054148: ;
    PUSH32(esp, ebx);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3C);
    ecx = ebx + 0x76F030;
    MEM32(esp + 0x14) = ecx;

loc_00054158: ;
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_00054179; /* je: equal / zero */

loc_0005415E: ;
    eax = MEM32(ebp * 4 + 0x76EF2C);
    SET_LO16(eax, MEM16(eax + edi * 8));
    if (CMP_EQ(LO16(eax), 6)) goto loc_00054189; /* je: equal / zero */

loc_0005416F: ;
    if (CMP_EQ(LO16(eax), 7)) goto loc_000542ED; /* je: equal / zero */

loc_00054179: ;
    edi++;
    ecx = ecx + 2;
    if (CMP_L(edi, esi)) goto loc_00054158; /* jl: less (signed <) */

loc_00054181: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00054189: ;
    SET_LO8(eax, MEM8(0x76E868));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000541D1; /* jne: not equal / not zero */

loc_00054192: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    ecx = ecx + edi;
    eax = MEM32(ecx * 4 + 0x76E890);
    SET_LO16(ecx, MEM16(eax + 4));
    SET_LO16(edx, MEM16(eax + 2));
    SET_LO16(eax, MEM16(eax));
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87C) = LO16(eax);
    MEM16(0x76E87E) = LO16(edx);
    MEM16(0x76E880) = LO16(ecx);
    MEM8(0x76E868) = 1;

loc_000541D1: ;
    ecx = MEM32(ebp * 4 + 0x76EF2C);
    eax = ecx + edi * 8;
    SET_LO8(ecx, MEM8(eax + 2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00054206; /* jne: not equal / not zero */

loc_000541E2: ;
    SET_LO8(edx, MEM8(eax + 3));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_000541EA: ;
    if (TEST_Z(eax, eax)) goto loc_00054528; /* je: equal / zero */

loc_000541F2: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm2 = MEMF(eax + 0x80); /* movss */
    goto loc_00054237;

loc_00054206: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_00054528; /* jne: not equal / not zero */

loc_0005420F: ;
    SET_LO8(edx, MEM8(eax + 3));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00054217: ;
    if (TEST_Z(eax, eax)) goto loc_00054528; /* je: equal / zero */

loc_0005421F: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */

loc_00054237: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    eax = eax + edi;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(eax * 4 + 0x76E890);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(esi & esi, 0)) goto loc_00054528; /* jle: less or equal (signed <=) */

loc_00054278: ;
    esi = MEM32(esp + 0x14);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    ecx = ecx + 0x76E890;

loc_00054287: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(esi), LO16(eax))) goto loc_000542CB; /* jbe: below or equal (unsigned <=) */

loc_0005428E: ;
    edi = (int32_t)xmm0; /* cvttss2si */
    ebx = (int32_t)xmm1; /* cvttss2si */
    ebp = (int32_t)xmm2; /* cvttss2si */
    /* nop */

loc_000542A0: ;
    edx = MEM32(ecx);
    MEM16(edx + eax * 8) = MEM16(edx + eax * 8) + LO16(edi);
    edx = edx + eax * 8;
    edx = MEM32(ecx);
    MEM16(edx + eax * 8 + 2) = MEM16(edx + eax * 8 + 2) + LO16(ebx);
    edx = edx + eax * 8 + 2;
    edx = MEM32(ecx);
    MEM16(edx + eax * 8 + 4) = MEM16(edx + eax * 8 + 4) + LO16(ebp);
    edx = edx + eax * 8 + 4;
    edx = ZX16(MEM16(esi));
    eax++;
    if (CMP_L(eax, edx)) goto loc_000542A0; /* jl: less (signed <) */

loc_000542C7: ;
    ebp = MEM32(esp + 0x28);

loc_000542CB: ;
    eax = MEM32(esp + 0x10);
    edx = ZX8(MEM8(ebp + 0x76EF28));
    eax++;
    ecx = ecx + 4;
    esi = esi + 2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_00054287; /* jl: less (signed <) */

loc_000542E5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_000542ED: ;
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    ecx = ecx + edi;
    edx = ZX16(MEM16(ecx * 2 + 0x76EF40));
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00054324; /* jle: less or equal (signed <=) */

loc_00054305: ;
    edi = MEM32(ecx * 4 + 0x76E980);
    /* nop */

loc_00054310: ;
    if (CMP_EQ(MEM8(edi + 5), 7)) goto loc_00054320; /* je: equal / zero */

loc_00054316: ;
    eax++;
    edi = edi + 8;
    if (CMP_L(eax, edx)) goto loc_00054310; /* jl: less (signed <) */

loc_0005431E: ;
    goto loc_00054324;

loc_00054320: ;
    xmm1 = MEMF(edi); /* movss */

loc_00054324: ;
    SET_LO8(eax, MEM8(0x76E868));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00054367; /* jne: not equal / not zero */

loc_0005432D: ;
    eax = MEM32(ecx * 4 + 0x76E890);
    SET_LO16(edx, MEM16(eax + 4));
    SET_LO16(edi, MEM16(eax + 2));
    SET_LO16(eax, MEM16(eax));
    xmm0 = xmm1; /* movaps */
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87C) = LO16(eax);
    MEM16(0x76E87E) = LO16(edi);
    MEM16(0x76E880) = LO16(edx);
    MEM8(0x76E868) = 1;
    goto loc_0005436F;

loc_00054367: ;
    xmm0 = MEMF(0x76E878); /* movss */

loc_0005436F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648E18); /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(ecx * 4 + 0x76E890);
    /* FPU: fcos  */
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(0x76E87E);
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(0x76E864) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x10) = 0;
    /* FPU: fsin  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(esi & esi, 0)) goto loc_00054528; /* jle: less or equal (signed <=) */

loc_000543E9: ;
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    esi = ebx;
    /* nop */

loc_00054400: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x76F030), LO16(eax))) goto loc_000544B8; /* jbe: below or equal (unsigned <=) */

loc_0005440F: ;
    edi = (int32_t)xmm1; /* cvttss2si */

loc_00054413: ;
    ecx = MEM32(edx + 0x76E890);
    ebx = (uint32_t)(int32_t)SMEM16(ecx + eax * 8);
    ecx = ecx + eax * 8;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    xmm0 = xmm0 - xmm6; /* subss */
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = (uint32_t)(int32_t)SMEM16(0x76E87C);
    xmm3 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm2; /* addss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    MEM16(ecx) = LO16(ebx);
    ecx = MEM32(edx + 0x76E890);
    MEM16(ecx + eax * 8 + 2) = MEM16(ecx + eax * 8 + 2) + LO16(edi);
    ebx = MEM32(edx + 0x76E890);
    ecx = ecx + eax * 8 + 2;
    ecx = (uint32_t)(int32_t)SMEM16(0x76E880);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(ebx + eax * 8 + 4) = LO16(ecx);
    ecx = ZX16(MEM16(esi + 0x76F030));
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00054413; /* jl: less (signed <) */

loc_000544AC: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */

loc_000544B8: ;
    if (CMP_EQ(MEM16(esi + 0x76EFB8), 0)) goto loc_000544CE; /* je: equal / zero */

loc_000544C2: ;
    eax = MEM32(edx + 0x76EA70);
    if (CMP_EQ(MEM8(eax + 0x20), 7)) goto loc_0005450A; /* je: equal / zero */

loc_000544CE: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x76EF40), LO16(ecx))) goto loc_0005450A; /* jbe: below or equal (unsigned <=) */

loc_000544D9: ;
    /* nop */

loc_000544E0: ;
    eax = MEM32(edx + 0x76E980);
    SET_LO8(ebx, MEM8(eax + ecx * 8 + 5));
    (void)0; /* cmp LO8(ebx), 7 - flags set for next jcc */
    eax = eax + ecx * 8;
    if (CMP_NE(LO8(ebx), 7)) goto loc_000544FE; /* jne: not equal / not zero */

loc_000544F2: ;
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax) = xmm2; /* movss */

loc_000544FE: ;
    eax = ZX16(MEM16(esi + 0x76EF40));
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_000544E0; /* jl: less (signed <) */

loc_0005450A: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(ebp + 0x76EF28));
    eax++;
    edx = edx + 4;
    esi = esi + 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_00054400; /* jl: less (signed <) */

loc_00054528: ;
    POP32(esp, ebx);

loc_00054529: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0005452B: ;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00054530
 * Original: 0x00054530 - 0x0005465C (300 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054530: ;
    esp = esp - 0x20;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(edx + 0x76EF28));
    eax = eax | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = 0xFFFE7961u;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = 0x1869F;
    if (CMP_LE(edi & edi, 0)) goto loc_00054615; /* jle: less or equal (signed <=) */

loc_00054565: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3C);
    ebx = edx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    ebp = ebp + 0x76EFB8;
    ebx = ebx + 0x76EA70;
    /* nop */

loc_00054580: ;
    ecx = MEM32(ebx);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_00054600; /* je: equal / zero */

loc_00054588: ;
    if (CMP_EQ(MEM16(ebp), LO16(eax))) goto loc_00054600; /* je: equal / zero */

loc_0005458E: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    ecx--;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_000545BD: ;
    eax = MEM32(esp + 0x48);
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_000545DE; /* je: equal / zero */

loc_000545C8: ;
    ecx = MEM32(esp + 0x28);
    if (CMP_LE(ecx, MEM32(esp + 0x1C))) goto loc_000545DE; /* jle: less or equal (signed <=) */

loc_000545D2: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;

loc_000545DE: ;
    ecx = MEM32(esp + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_000545FC; /* je: equal / zero */

loc_000545E6: ;
    eax = MEM32(esp + 0x2C);
    if (CMP_GE(eax, MEM32(esp + 0x10))) goto loc_000545FC; /* jge: greater or equal (signed >=) */

loc_000545F0: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;

loc_000545FC: ;
    edx = MEM32(esp + 0x34);

loc_00054600: ;
    esi++;
    ebx = ebx + 4;
    ebp = ebp + 2;
    if (CMP_L(esi, edi)) goto loc_00054580; /* jl: less (signed <) */

loc_0005460F: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00054615: ;
    ecx = MEM32(esp + 8);
    if (CMP_EQ(ecx, MEM32(esp + 0x30))) goto loc_00054628; /* je: equal / zero */

loc_0005461F: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00054628; /* je: equal / zero */

loc_00054624: ;
    MEM32(esp + 0xC) = eax;

loc_00054628: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00054656; /* jne: not equal / not zero */

loc_00054631: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00054656; /* jle: less or equal (signed <=) */

loc_00054639: ;
    edx = MEM32(edx * 4 + 0x76EF2C);

loc_00054640: ;
    if (CMP_EQ(MEM16(edx), 1)) goto loc_00054654; /* je: equal / zero */

loc_00054646: ;
    ecx++;
    edx = edx + 8;
    if (CMP_L(ecx, edi)) goto loc_00054640; /* jl: less (signed <) */

loc_0005464E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00054654: ;
    eax = ecx;

loc_00054656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00054660
 * Original: 0x00054660 - 0x00054698 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054660(void)
{
    int _flags = 0; /* fallback flag var */

loc_00054660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x765860;

loc_00054667: ;
    if (CMP_EQ(MEM16(edi), 0)) goto loc_00054687; /* je: equal / zero */

loc_0005466D: ;
    esi = MEM32(edi + 0x205C);
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_00054678: ;
    MEM32(edi + 0x205C) = 0;
    MEM16(edi) = 0;

loc_00054687: ;
    edi = edi + 0x3000;
    if (CMP_L(edi, 0x76E860)) goto loc_00054667; /* jl: less (signed <) */

loc_00054695: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000546A0
 * Original: 0x000546A0 - 0x000546C1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000546A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000546A0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_000546C1(); return; } /* je: equal / zero */

loc_000546A5: ;
    esi = MEM32(edi + 0x205C);
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_000546B0: ;
    MEM32(edi + 0x205C) = 0;
    MEM16(edi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054700
 * Original: 0x00054700 - 0x0005471A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054700(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax++;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 0x765860;
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00054720(); return; /* tail jmp 0x00054720 */

}

/**
 * sub_00054800
 * Original: 0x00054800 - 0x000549F8 (504 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054800(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00054800: ;
    SET_LO8(eax, MEM8(0x7655F6));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    ecx = MEM32(esi + 0x468);
    ecx = ecx & 0xFFFFFDFFu;
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esi + 0x468) = ecx;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000549F5; /* jne: not equal / not zero */

loc_00054829: ;
    eax = 0; /* xor self */
    SET_LO8(ecx, 1);
    /* nop */

loc_00054830: ;
    if (CMP_EQ(MEM32(esi + 0x64), ebx)) goto loc_0005483D; /* je: equal / zero */

loc_00054835: ;
    if (CMP_EQ(MEM8(esi + 0x10B), LO8(ecx))) goto loc_0005484E; /* je: equal / zero */

loc_0005483D: ;
    esi = esi + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_00054830; /* jl: less (signed <) */

loc_0005484B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0005484E: ;
    eax = MEM32(esi + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x110) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00054867; /* je: equal / zero */

loc_00054863: ;
    MEMF(eax) = xmm0; /* movss */

loc_00054867: ;
    xmm2 = MEMF(esi + 0x228); /* movss */
    xmm1 = MEMF(0x648E60); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x128) = xmm0; /* movss */
    MEM16(esi + 0x1D4) = LO16(ebx);
    MEM8(esi + 0x1D8) = LO8(ebx);
    if (1 /* jnp after test - parity */) goto loc_0005490A; /* jnp: not parity */

loc_00054895: ;
    /* comiss xmm2, MEMF(esi + 0x294) - sets EFLAGS */
    if ((xmm2 <= MEMF(esi + 0x294))) goto loc_0005490A; /* jbe: below or equal (unsigned <=) */

loc_0005489E: ;
    xmm1 = xmm2; /* movaps */
    /* comiss xmm1, MEMF(esi + 0x7C) - sets EFLAGS */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    MEM8(esi + 0x1B5) = LO8(ecx);
    if ((xmm1 <= MEMF(esi + 0x7C))) goto loc_000548F2; /* jbe: below or equal (unsigned <=) */

loc_000548BD: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x38E);
    xmm1 = xmm1 - MEMF(0x648F08); /* subss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000548E4; /* ja: above (unsigned >) */

loc_000548D5: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00054951; /* je: equal / zero */

loc_000548DF: ;
    if (TEST_Z(MEM8(eax + 0x2C), LO8(ecx))) goto loc_00054951; /* je: equal / zero */

loc_000548E4: ;
    MEM16(esi + 0x1B8) = LO16(ebx);
    PUSH32(esp, 0); sub_003158B0(); /* call 0x003158B0 */

loc_000548F0: ;
    goto loc_00054951;

loc_000548F2: ;
    xmm0 = MEMF(esi + 0x228); /* movss */
    xmm0 = xmm0 - MEMF(0x648E38); /* subss */
    MEM8(0x849438) = LO8(ecx);
    goto loc_0005494C;

loc_0005490A: ;
    xmm0 = MEMF(0x6493F4); /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x294); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(esi + 0x1B5) = LO8(ebx);
    MEM16(esi + 0x1B8) = LO16(ebx);
    if ((xmm0 <= xmm1)) goto loc_00054951; /* jbe: below or equal (unsigned <=) */

loc_00054944: ;
    MEMF(esi + 0x3B8) = xmm0; /* movss */

loc_0005494C: ;
    MEMF(esi + 0x7C) = xmm0; /* movss */

loc_00054951: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x294); /* subss */
    PUSH32(esp, esi);
    MEMF(esi + 0xDC) = xmm0; /* movss */
    MEM8(esi + 0x17B) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    MEM8(esi + 0x180) = LO8(ebx);
    MEM8(esi + 0x181) = LO8(ebx);
    MEM8(esi + 0x20C) = LO8(ebx);
    MEM32(esi + 0xA4) = ebx;
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00054990: ;
    eax = MEM32(esi + 0x568);
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_000549A9; /* je: equal / zero */

loc_0005499D: ;
    MEM8(eax + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x45) = LO8(ebx);

loc_000549A9: ;
    eax = MEM32(esi + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esi + 0x474) = LO8(ebx);
    MEM16(esi + 0x480) = LO16(ebx);
    MEM8(esi + 0x485) = LO8(ebx);
    MEM8(esi + 0x484) = LO8(ebx);
    MEM8(esi + 0x483) = LO8(ebx);
    MEM8(esi + 0x482) = LO8(ebx);
    MEM16(esi + 0x476) = LO16(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_000549F5; /* je: equal / zero */

loc_000549DF: ;
    MEM8(eax + 0x74) = LO8(ebx);
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x75) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x72) = LO16(ebx);

loc_000549F5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00054A00
 * Original: 0x00054A00 - 0x00054A0E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054A00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054A00: ;
    SET_LO8(eax, MEM8(0x76F0D4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00054A0E(); return; } /* je: equal / zero */

loc_00054A09: ;
    g_seh_ebp = ebp; sub_002D3370(); return; /* tail jmp 0x002D3370 */

}

/**
 * sub_00054B10
 * Original: 0x00054B10 - 0x00054F32 (1058 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_00054B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    eax = MEM32(0x76F0F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00054530(); /* call 0x00054530 */

loc_00054B2C: ;
    edi = MEM32(0x76EF2C);
    esi = 0; /* xor self */
    esp = esp + 8;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = esi;
    ebx = 0; /* xor self */

loc_00054B41: ;
    if (CMP_BE(MEM16(esi * 2 + 0x76F030), 0)) goto loc_00054F1A; /* jbe: below or equal (unsigned <=) */

loc_00054B50: ;
    eax = MEM32(0x8472A0);
    if (CMP_NE(eax, 8)) goto loc_00054B74; /* jne: not equal / not zero */

loc_00054B5A: ;
    ecx = MEM32(0x8470FC);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 4);
    if (TEST_Z(HI8(eax), 0x40)) goto loc_00054B85; /* je: equal / zero */

loc_00054B6B: ;
    eax = ZX16(MEM16(0x76EC60));
    goto loc_00054B7D;

loc_00054B74: ;
    if (CMP_NE(eax, 0xD)) goto loc_00054B85; /* jne: not equal / not zero */

loc_00054B79: ;
    eax = MEM32(esp + 0x20);

loc_00054B7D: ;
    if (CMP_EQ(esi, eax)) goto loc_00054F1A; /* je: equal / zero */

loc_00054B85: ;
    xmm0 = 0.0f; /* xorps self = zero */
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
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    SET_LO16(eax, MEM16(edi + esi * 8));
    if (CMP_NE(LO16(eax), 1)) goto loc_00054E73; /* jne: not equal / not zero */

loc_00054BFE: ;
    SET_LO8(eax, MEM8(edi + esi * 8 + 2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00054C60; /* jne: not equal / not zero */

loc_00054C06: ;
    eax = MEM32(0x76E884);
    ecx = MEM32(ebx + eax + 8);
    xmm0 = MEMF(ebx + eax + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(ebx + eax + 4); /* addss */
    edx = MEM32(ebx + eax);
    xmm1 = MEMF(ebx + eax + 0x14); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(ebx + eax + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + eax + 0xC); /* movss */
    eax = esp + 0x58;
    goto loc_00054EF0;

loc_00054C60: ;
    SET_LO8(eax, MEM8(edi + esi * 8 + 2));
    if (CMP_NE(LO8(eax), 1)) goto loc_00054CF0; /* jne: not equal / not zero */

loc_00054C6C: ;
    SET_LO8(ecx, MEM8(edi + esi * 8 + 3));
    eax = edi + esi * 8 + 3;
    edx = SX8(LO8(ecx));
    if (CMP_EQ(edx, esi)) goto loc_00054F1A; /* je: equal / zero */

loc_00054C7F: ;
    if (CMP_GE(LO8(ecx), 0x1E)) goto loc_00054F1A; /* jge: greater or equal (signed >=) */

loc_00054C88: ;
    if (CMP_EQ(MEM16(edx * 2 + 0x76F030), 0)) goto loc_00054F1A; /* je: equal / zero */

loc_00054C97: ;
    edx = SX8(LO8(ecx));
    ecx = MEM32(0x76E884);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    xmm0 = MEMF(edx + ecx); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(eax);
    esi = (uint32_t)(int32_t)SMEM16(edi + esi * 8 + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x76E884);
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(esp + 0x24);
    xmm1 = xmm1 + MEMF(esi + edx + 4); /* addss */
    xmm1 = xmm1 + MEMF(ecx + ebx + 0x38); /* addss */
    ecx = ecx + ebx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    xmm1 = MEMF(eax + edx + 8); /* movss */
    goto loc_00054D8D;

loc_00054CF0: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00054D3B; /* jne: not equal / not zero */

loc_00054CF4: ;
    SET_LO8(edx, MEM8(edi + esi * 8 + 3));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00054CFD: ;
    if (TEST_Z(eax, eax)) goto loc_00054F1A; /* je: equal / zero */

loc_00054D05: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    ecx = MEM32(0x76E884);
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + esi * 8 + 4);
    ecx = ecx + ebx;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    xmm1 = xmm1 + MEMF(eax + 0x7C); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    goto loc_00054D8D;

loc_00054D3B: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_00054F1A; /* jne: not equal / not zero */

loc_00054D43: ;
    SET_LO8(edx, MEM8(edi + esi * 8 + 3));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00054D4C: ;
    if (TEST_Z(eax, eax)) goto loc_00054F1A; /* je: equal / zero */

loc_00054D54: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    edx = MEM32(0x76E884);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = ebx + edx;
    edx = (uint32_t)(int32_t)SMEM16(edi + esi * 8 + 4);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    edx = edx + esi;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(ecx + 0x38); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */

loc_00054D8D: ;
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm2 = MEMF(ecx); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00054DBC; /* jp: parity */

loc_00054DA0: ;
    xmm2 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00054DBC; /* jp: parity */

loc_00054DAE: ;
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00054DBC: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0x9C;
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00054DF8: ;
    eax = MEM32(0x76E884);
    xmm0 = MEMF(ebx + eax + 8); /* movss */
    xmm1 = MEMF(ebx + eax + 4); /* movss */
    xmm2 = MEMF(ebx + eax); /* movss */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    edi = esp + 0x60;
    esi = esp + 0x6C;
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E32F0(); /* call 0x003E32F0 */

loc_00054E54: ;
    esp = esp + 0x2C;
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00054E6A: ;
    esi = MEM32(esp + 0x1C);
    goto loc_00054F14;

loc_00054E73: ;
    (void)0; /* cmp LO16(eax), 4 - flags set for next jcc */
    eax = MEM32(0x76E884);
    if (CMP_NE(LO16(eax), 4)) goto loc_00054EA6; /* jne: not equal / not zero */

loc_00054E7E: ;
    ecx = MEM32(ebx + eax + 8);
    edx = MEM32(ebx + eax + 4);
    eax = MEM32(ebx + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    goto loc_00054F04;

loc_00054EA6: ;
    edx = MEM32(ebx + eax + 8);
    ecx = MEM32(ebx + eax + 4);
    xmm1 = MEMF(ebx + eax + 0x14); /* movss */
    xmm0 = MEMF(0x64928C); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(ebx + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(ebx + eax + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(0x648E18); /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + eax + 0xC); /* movss */
    eax = esp + 0x118;

loc_00054EF0: ;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, eax);

loc_00054F04: ;
    xmm5 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00054F11: ;
    esp = esp + 0x24;

loc_00054F14: ;
    edi = MEM32(0x76EF2C);

loc_00054F1A: ;
    esi++;
    ebx = ebx + 0x44;
    (void)0; /* cmp esi, 0x1E - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(esi, 0x1E)) goto loc_00054B41; /* jl: less (signed <) */

loc_00054F2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00054F40
 * Original: 0x00054F40 - 0x00055112 (466 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054F40(void)
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

loc_00054F40: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    esp = esp - 0x118;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0005510B; /* je: equal / zero */

loc_00054F53: ;
    SET_LO8(eax, MEM8(0x68C320));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005510B; /* je: equal / zero */

loc_00054F60: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) goto loc_00054F70; /* jne: not equal / not zero */

loc_00054F69: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_00054F6E: ;
    goto loc_00054F75;

loc_00054F70: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_00054F75: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(0x76EC60));
    (void)0; /* cmp MEM16(esi * 2 + 0x76F030), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM16(esi * 2 + 0x76F030), 0)) goto loc_00054FBC; /* jne: not equal / not zero */

loc_00054F8B: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x5D5154);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00054F9A: ;
    xmm1 = MEMF(0x64A438); /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_00054FB4: ;
    esp = esp + 0xC;
    goto loc_00055048;

loc_00054FBC: ;
    edx = ZX8(MEM8(esi + 0x76EC84));
    eax = MEM32(esi * 4 + 0x76E890);
    SET_LO16(ecx, MEM16(eax + edx * 8 + 6));
    (void)0; /* cmp LO16(ecx), 2 - flags set for next jcc */
    eax = eax + edx * 8 + 6;
    if (CMP_AE(LO16(ecx), 2)) goto loc_00054FE5; /* jae: above or equal (unsigned >=) */

loc_00054FD9: ;
    ecx = ZX16(LO16(ecx));
    edi = MEM32(ecx * 4 + 0x68C348);
    goto loc_00054FFB;

loc_00054FE5: ;
    MEM16(eax) = 0;
    PUSH32(esp, 0);
    eax = esi;
    edi = 0x5D5144;
    PUSH32(esp, 0); sub_00052250(); /* call 0x00052250 */

loc_00054FF8: ;
    esp = esp + 4;

loc_00054FFB: ;
    edx = ZX8(MEM8(esi + 0x76EC84));
    eax = MEM32(esi * 4 + 0x76E890);
    ecx = (uint32_t)(int32_t)SMEM16(eax + edx * 8 + 4);
    eax = eax + edx * 8;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x5D5138);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0005502B: ;
    xmm1 = MEMF(0x64A438); /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_00055045: ;
    esp = esp + 0x1C;

loc_00055048: ;
    eax = MEM32(0x76F0F8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x5D512C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0005505D: ;
    xmm1 = MEMF(0x64A438); /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_00055077: ;
    esi = ZX16(MEM16(0x76EC60));
    edi = MEM32(0x76EF2C);
    SET_LO16(ebx, MEM16(edi + esi * 8));
    SET_LO8(eax, MEM8(0x849480));
    ebp = ZX8(MEM8(edi + esi * 8 + 2));
    esp = esp + 0x10;
    (void)0; /* cmp LO16(ebx), 3 - flags set for next jcc */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x5D5128;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000550A7; /* jne: not equal / not zero */

loc_000550A2: ;
    eax = 0x5D5124;

loc_000550A7: ;
    fp_push(MEMF(0x84947C)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000550B3: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + esi * 8 + 3);
    PUSH32(esp, eax);
    ecx = ZX16(LO16(ebx));
    edx = MEM32(ecx * 4 + 0x68C328);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, 0x5D50FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000550D6: ;
    xmm1 = MEMF(0x64A964); /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F62D0(); /* call 0x001F62D0 */

loc_000550F0: ;
    esp = esp + 0x24;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000550FC: ;
    eax = MEM32(0x8072F0);
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    POP32(esp, ebp);
    MEM32(0x8072F0) = eax;
    POP32(esp, ebx);

loc_0005510B: ;
    esp = esp + 0x118;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00055120
 * Original: 0x00055120 - 0x00055440 (800 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055120(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00055120: ;
    ecx = ZX16(MEM16(ebx * 2 + 0x76F030));
    esp = esp - 0x50;
    PUSH32(esp, esi);
    eax = ecx + -1;
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0005543B; /* jle: less or equal (signed <=) */

loc_00055139: ;
    xmm7 = MEMF(0x648D80); /* movss */
    xmm1 = MEMF(0x648E2C); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(0x648D10); /* movss */
    xmm5 = MEMF(0x648CF0); /* movss */
    PUSH32(esp, edi);

loc_00055162: ;
    eax = MEM32(ebx * 4 + 0x76E890);
    edi = ZX16(MEM16(eax + esi * 8 + 6));
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_000520A0(); /* call 0x000520A0 */

loc_0005517B: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_00055188; /* je: equal / zero */

loc_00055185: ;
    xmm3 = xmm7; /* movaps */

loc_00055188: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00055426; /* jbe: below or equal (unsigned <=) */

loc_00055191: ;
    xmm6 = MEMF(esp + 0x40); /* movss */

loc_00055197: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    if ((xmm3 <= xmm2)) goto loc_000551B1; /* jbe: below or equal (unsigned <=) */

loc_000551AE: ;
    xmm3 = xmm2; /* movaps */

loc_000551B1: ;
    if (TEST_NZ(edi, edi)) goto loc_00055379; /* jne: not equal / not zero */

loc_000551B9: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x28); /* addss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x38); /* movss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 0xC) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x2C); /* addss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x3C); /* movss */
    xmm6 = xmm6 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x30); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x34); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    xmm6 = MEMF(esp + 0x40); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 - MEMF(esp + 8); /* subss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(0x648CF0); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    goto loc_000553B8;

loc_00055379: ;
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = xmm0 + xmm7; /* addss */

loc_000553B8: ;
    /* ucomiss xmm3, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000553EF; /* jnp: not parity */

loc_000553CB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00055440(); /* call 0x00055440 */

loc_000553DA: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;

loc_000553EF: ;
    xmm7 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648E2C); /* movss */
    xmm3 = xmm3 + xmm7; /* addss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((xmm1 > xmm3)) goto loc_00055197; /* ja: above (unsigned >) */

loc_00055426: ;
    ecx = ZX16(MEM16(ebx * 2 + 0x76F030));
    esi++;
    edx = ecx + -1;
    if (CMP_L(esi, edx)) goto loc_00055162; /* jl: less (signed <) */

loc_0005543A: ;
    POP32(esp, edi);

loc_0005543B: ;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00055440
 * Original: 0x00055440 - 0x000554DC (156 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055440(void)
{
    float xmm0, xmm1, xmm2;

loc_00055440: ;
    esp = esp - 0x1C;
    eax = esp + 0x10;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000554A0: ;
    eax = esp + 0xC;
    esp = esp + 8;
    MEM32(esp + 0x24) = eax;
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
    MEMF(esp + 0x20) = xmm1; /* movss */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000554E0
 * Original: 0x000554E0 - 0x00055661 (385 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000554E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000554E0: ;
    esp = esp - 0x10;
    ecx = ZX8(MEM8(eax + 0x76EF28));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_LE(ecx, edx)) goto loc_0005560E; /* jle: less or equal (signed <=) */

loc_00055500: ;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ecx = ecx + 0x76EFB8;
    eax = eax + 0x76EA70;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    goto loc_00055520;

loc_0005551D: ;
    edx = 0; /* xor self */
    /* nop */

loc_00055520: ;
    esi = MEM32(eax);
    if (CMP_EQ(esi, edx)) goto loc_000555E1; /* je: equal / zero */

loc_0005552A: ;
    SET_LO16(ecx, MEM16(ecx));
    if (CMP_EQ(LO16(ecx), LO16(edx))) goto loc_000555E1; /* je: equal / zero */

loc_00055536: ;
    eax = esi;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edx = ZX16(LO16(ecx));
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - esi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    ebp = esi + 0x18;
    if (CMP_AE(ecx, edx)) goto loc_000555E1; /* jae: above or equal (unsigned >=) */

loc_00055554: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00055566; /* jne: not equal / not zero */

loc_0005555B: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00055566; /* jne: not equal / not zero */

loc_00055560: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_000555C3;

loc_00055566: ;
    if (CMP_BE(eax, ebp)) goto loc_0005557D; /* jbe: below or equal (unsigned <=) */

loc_0005556A: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005557D; /* jne: not equal / not zero */

loc_0005556F: ;
    if (CMP_NE(MEM16(eax + 2), 1)) goto loc_0005557D; /* jne: not equal / not zero */

loc_00055576: ;
    SET_LO8(ebx, MEM8(eax + 4));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000555D3; /* je: equal / zero */

loc_0005557D: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000555BD; /* jne: not equal / not zero */

loc_00055581: ;
    ecx = eax;
    ecx = ecx - esi;

loc_00055585: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_000555B9; /* je: equal / zero */

loc_0005558A: ;
    ecx = ecx + 8;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    eax = eax + 8;
    if (CMP_AE(ebx, edx)) goto loc_000555BD; /* jae: above or equal (unsigned >=) */

loc_00055599: ;
    if (CMP_BE(eax, ebp)) goto loc_000555B0; /* jbe: below or equal (unsigned <=) */

loc_0005559D: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_000555B0; /* jne: not equal / not zero */

loc_000555A2: ;
    if (CMP_NE(MEM16(eax + 2), 1)) goto loc_000555B0; /* jne: not equal / not zero */

loc_000555A9: ;
    SET_LO8(ebx, MEM8(eax + 4));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000555D3; /* je: equal / zero */

loc_000555B0: ;
    SET_LO8(ebx, MEM8(eax + 1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00055585; /* je: equal / zero */

loc_000555B7: ;
    goto loc_000555BD;

loc_000555B9: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_000555BD: ;
    ecx = ZX8(MEM8(eax + 1));
    edi = edi + ecx;

loc_000555C3: ;
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - esi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_B(ecx, edx)) goto loc_00055554; /* jb: below (unsigned <) */

loc_000555D1: ;
    goto loc_000555E1;

loc_000555D3: ;
    SET_LO8(ecx, MEM8(0x68C321));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00055661(); return; } /* jne: not equal / not zero */

loc_000555E1: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    edx++;
    eax = eax + 4;
    ecx = ecx + 2;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(edx, esi)) goto loc_0005551D; /* jl: less (signed <) */

loc_0005560C: ;
    edx = 0; /* xor self */

loc_0005560E: ;
    if (CMP_NE(MEM32(0x771C50), edx)) goto loc_0005562B; /* jne: not equal / not zero */

loc_00055616: ;
    eax = MEM32(0x771C60);
    if (CMP_LE(eax, MEM32(0x771C5C))) goto loc_0005562B; /* jle: less or equal (signed <=) */

loc_00055623: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(edx))) goto loc_00055659; /* je: equal / zero */

loc_0005562B: ;
    MEM32(0x771C50) = edx;
    MEM32(0x771C54) = edx;
    MEM8(0x771C58) = LO8(edx);
    MEM8(0x771C59) = LO8(edx);
    MEM8(0x771C5A) = LO8(edx);
    MEM32(0x771C5C) = 1;
    MEM32(0x771C60) = edx;

loc_00055659: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000556C0
 * Original: 0x000556C0 - 0x000556F2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000556C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000556C0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    edx = ZX16(MEM16(eax + ecx));
    eax = eax + ecx;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 6));
    edx = esi + edx * 2;
    esi = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 2));
    edx = edx + esi;
    edx = edx + eax + 1;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_000556F0; /* jle: less or equal (signed <=) */

loc_000556E8: ;
    MEM32(ecx + eax * 8) = MEM32(ecx + eax * 8) + ecx;
    eax++;
    if (CMP_L(eax, edx)) goto loc_000556E8; /* jl: less (signed <) */

loc_000556F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055700
 * Original: 0x00055700 - 0x0005574F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00055700: ;
    eax = MEM32(ecx + 0x5DC);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_00055749; /* je: equal / zero */

loc_0005570D: ;
    xmm0 = MEMF(ecx + 0x9C); /* movss */
    PUSH32(esp, esi);
    edx = ecx + 0x90;
    esi = MEM32(edx);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    edi = esp + 0xC;
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00356170(); /* call 0x00356170 */

loc_00055747: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00055749: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055750
 * Original: 0x00055750 - 0x00055782 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00055750: ;
    if (CMP_NE(MEM32(esp + 4), 0xB)) goto loc_00055781; /* jne: not equal / not zero */

loc_00055757: ;
    if (CMP_NE(MEM32(esp + 8), 2)) goto loc_00055781; /* jne: not equal / not zero */

loc_0005575E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00055768: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00055781; /* je: equal / zero */

loc_0005576D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx * 4 + 0x76EF2C);
    SET_LO8(eax, MEM8(eax + 0x10B));
    MEM8(edx + 0x2A) = LO8(eax);

loc_00055781: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00055790
 * Original: 0x00055790 - 0x000557CA (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00055790: ;
    edx = MEM32(ecx * 4 + 0x68C358);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D5240);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000557A4: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000557B3: ;
    esp = esp + 0x1C;
    PUSH32(esp, 0x84D458);
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_000557C0: ;
    if (TEST_Z(eax, eax)) { sub_000557CA(); return; } /* je: equal / zero */

loc_000557C4: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_000557F0
 * Original: 0x000557F0 - 0x00055800 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000557F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000557F0: ;
    ecx = MEM32(eax + 8);
    if (CMP_L(ecx, MEM32(eax))) { sub_00055800(); return; } /* jl: less (signed <) */

loc_000557F7: ;
    xmm0 = MEMF(0x6492A8); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00055810
 * Original: 0x00055810 - 0x0005583A (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055810: ;
    eax = 0x4208;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0005581A: ;
    eax = MEM32(0x8497CC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4218);
    if (TEST_NZ(eax, eax)) { sub_0005583A(); return; } /* jne: not equal / not zero */

loc_0005582B: ;
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    esp = esp + 0x4208;
    esp += 4; return; /* ret */

}

/**
 * sub_00055980
 * Original: 0x00055980 - 0x00055A66 (230 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055980: ;
    esp = esp - 0xC;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = eax + ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp * 4 + 0x76EA70);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = edx;
    if (CMP_BE(ebx, 1)) goto loc_000559D1; /* jbe: below or equal (unsigned <=) */

loc_000559A4: ;
    eax = esi + 8;
    ecx = ebx + -1;
    /* nop */

loc_000559B0: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_000559C1; /* jne: not equal / not zero */

loc_000559B5: ;
    if (CMP_NE(MEM8(eax + 1), 0)) goto loc_000559C1; /* jne: not equal / not zero */

loc_000559BB: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_000559C7;

loc_000559C1: ;
    edi = ZX8(MEM8(eax + 1));
    edx = edx + edi;

loc_000559C7: ;
    eax = eax + 8;
    ecx--;
    if ((ecx != 0)) goto loc_000559B0; /* jne: not equal / not zero */

loc_000559CD: ;
    MEM32(esp + 0xC) = edx;

loc_000559D1: ;
    ecx = ZX16(MEM16(ebp * 2 + 0x76EFB8));
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    eax = edx;
    edi = ebx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_AE(ebx, ecx)) goto loc_00055A5D; /* jae: above or equal (unsigned >=) */

loc_000559E5: ;
    goto loc_000559F0;

loc_000559E7: ;
    ebp = MEM32(esp + 0x10);
    goto loc_000559F0;

    /* nop */

loc_000559F0: ;
    SET_LO8(ecx, MEM8(esi + edi * 8));
    if (CMP_EQ(LO8(ecx), 7)) goto loc_00055A0C; /* je: equal / zero */

loc_000559F8: ;
    if (CMP_EQ(LO8(ecx), 0xE)) goto loc_00055A0C; /* je: equal / zero */

loc_000559FD: ;
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_00055A0C; /* je: equal / zero */

loc_00055A02: ;
    if (CMP_EQ(LO8(ecx), 0x10)) goto loc_00055A0C; /* je: equal / zero */

loc_00055A07: ;
    if (CMP_NE(LO8(ecx), 0x12)) goto loc_00055A32; /* jne: not equal / not zero */

loc_00055A0C: ;
    if (CMP_EQ(MEM8(esi + edi * 8 + 4), 0)) goto loc_00055A32; /* je: equal / zero */

loc_00055A13: ;
    if (CMP_EQ(edi, ebx)) goto loc_00055A32; /* je: equal / zero */

loc_00055A17: ;
    edx = MEM32(ebp * 4 + 0x76EA70);
    SET_LO16(ebp, MEM16(edx + edi * 8 + 2));
    if (CMP_NE(LO16(ebp), MEM16(edx + ebx * 8 + 2))) goto loc_00055A2E; /* jne: not equal / not zero */

loc_00055A2A: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;

loc_00055A2E: ;
    edx = MEM32(esp + 0xC);

loc_00055A32: ;
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(ebp, ebp)) goto loc_00055A5D; /* je: equal / zero */

loc_00055A3A: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00055A4D; /* jne: not equal / not zero */

loc_00055A3E: ;
    SET_LO8(ecx, MEM8(esi + edi * 8 + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00055A4D; /* jne: not equal / not zero */

loc_00055A46: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + edi * 8 + 2);
    goto loc_00055A54;

loc_00055A4D: ;
    ecx = ZX8(MEM8(esi + edi * 8 + 1));
    eax = eax + ecx;

loc_00055A54: ;
    ecx = MEM32(esp + 0x14);
    edi++;
    if (CMP_B(edi, ecx)) goto loc_000559E7; /* jb: below (unsigned <) */

loc_00055A5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00055A70
 * Original: 0x00055A70 - 0x00055BEF (383 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055A70: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    PUSH32(esp, ebx);
    ecx = ecx + eax;
    ebx = MEM32(ecx * 4 + 0x76EA70);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_00055BBF; /* je: equal / zero */

loc_00055A90: ;
    edi = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    eax = ebx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    edx = eax;
    edx = edx - ebx;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_AE(ecx, edi)) goto loc_00055BBF; /* jae: above or equal (unsigned >=) */

loc_00055AB2: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00055AC6; /* jne: not equal / not zero */

loc_00055AB9: ;
    if (CMP_NE(MEM8(eax), LO8(ecx))) goto loc_00055AC6; /* jne: not equal / not zero */

loc_00055ABD: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_00055BAB;

loc_00055AC6: ;
    if (CMP_BE(eax, MEM32(esp + 0x14))) goto loc_00055B22; /* jbe: below or equal (unsigned <=) */

loc_00055ACC: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, MEM32(esp + 0x18))) goto loc_00055B22; /* jne: not equal / not zero */

loc_00055AD5: ;
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(ebx, ebx)) goto loc_00055AEC; /* je: equal / zero */

loc_00055ADD: ;
    if (CMP_NE(ebx, 1)) goto loc_00055B22; /* jne: not equal / not zero */

loc_00055AE2: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, MEM32(esp + 0x24))) goto loc_00055B22; /* jne: not equal / not zero */

loc_00055AEC: ;
    ebx = MEM32(esp + 0x28);
    if (TEST_Z(ebx, ebx)) goto loc_00055B03; /* je: equal / zero */

loc_00055AF4: ;
    if (CMP_NE(ebx, 1)) goto loc_00055B22; /* jne: not equal / not zero */

loc_00055AF9: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 4);
    if (CMP_NE(ebx, MEM32(esp + 0x2C))) goto loc_00055B22; /* jne: not equal / not zero */

loc_00055B03: ;
    ebx = MEM32(esp + 0x30);
    if (TEST_Z(ebx, ebx)) goto loc_00055BD9; /* je: equal / zero */

loc_00055B0F: ;
    if (CMP_NE(ebx, 1)) goto loc_00055B22; /* jne: not equal / not zero */

loc_00055B14: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebx, MEM32(esp + 0x34))) goto loc_00055BD9; /* je: equal / zero */

loc_00055B22: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00055BA1; /* jne: not equal / not zero */

loc_00055B26: ;
    ecx = MEM32(esp + 0x30);
    /* nop */

loc_00055B30: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00055B9D; /* je: equal / zero */

loc_00055B35: ;
    edx = edx + 8;
    ebx = edx;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    eax = eax + 8;
    if (CMP_AE(ebx, edi)) goto loc_00055BA1; /* jae: above or equal (unsigned >=) */

loc_00055B44: ;
    if (CMP_BE(eax, MEM32(esp + 0x14))) goto loc_00055B94; /* jbe: below or equal (unsigned <=) */

loc_00055B4A: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, MEM32(esp + 0x18))) goto loc_00055B94; /* jne: not equal / not zero */

loc_00055B53: ;
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(ebx, ebx)) goto loc_00055B6A; /* je: equal / zero */

loc_00055B5B: ;
    if (CMP_NE(ebx, 1)) goto loc_00055B94; /* jne: not equal / not zero */

loc_00055B60: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, MEM32(esp + 0x24))) goto loc_00055B94; /* jne: not equal / not zero */

loc_00055B6A: ;
    ebx = MEM32(esp + 0x28);
    if (TEST_Z(ebx, ebx)) goto loc_00055B81; /* je: equal / zero */

loc_00055B72: ;
    if (CMP_NE(ebx, 1)) goto loc_00055B94; /* jne: not equal / not zero */

loc_00055B77: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 4);
    if (CMP_NE(ebx, MEM32(esp + 0x2C))) goto loc_00055B94; /* jne: not equal / not zero */

loc_00055B81: ;
    if (TEST_Z(ecx, ecx)) { sub_00055BEF(); return; } /* je: equal / zero */

loc_00055B85: ;
    if (CMP_NE(ecx, 1)) goto loc_00055B94; /* jne: not equal / not zero */

loc_00055B8A: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebx, MEM32(esp + 0x34))) { sub_00055BEF(); return; } /* je: equal / zero */

loc_00055B94: ;
    SET_LO8(ebx, MEM8(eax + 1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00055B30; /* je: equal / zero */

loc_00055B9B: ;
    goto loc_00055BA1;

loc_00055B9D: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_00055BA1: ;
    edx = ZX8(MEM8(eax + 1));
    ebx = MEM32(esp + 0xC);
    esi = esi + edx;

loc_00055BAB: ;
    eax = eax + 8;
    edx = eax;
    edx = edx - ebx;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_B(ecx, edi)) goto loc_00055AB2; /* jb: below (unsigned <) */

loc_00055BBF: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = MEM32(ecx * 4 + 0x76F0E8);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00055BD9: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esi = esi << 8;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    g_seh_ebp = ebp; sub_00055C03(); return; /* tail jmp 0x00055C03 */

}

/**
 * sub_00055C20
 * Original: 0x00055C20 - 0x00055C94 (116 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055C20: ;
    eax = MEM32(esp + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00055C38; /* je: equal / zero */

loc_00055C32: ;
    MEM32(eax) = 0;

loc_00055C38: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    if (TEST_Z(ebp, ebp)) goto loc_00055C4D; /* je: equal / zero */

loc_00055C46: ;
    MEM32(ebp) = 0;

loc_00055C4D: ;
    edx = MEM32(ecx * 4 + 0x76F0E8);
    eax = MEM32(esp + 0x18);
    ebx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C00);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edx = MEM32(ecx * 4 + 0x76F0E8);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ecx * 4 + 0x76F0F8);
    if (CMP_L(eax, edx)) { sub_00055C94(); return; } /* jl: less (signed <) */

loc_00055C88: ;
    edx = MEM32(0x76F0E4);
    MEM32(esp + 0x14) = edx;
    g_seh_ebp = ebp; sub_00055CA4(); return; /* tail jmp 0x00055CA4 */

}

/**
 * sub_00055F20
 * Original: 0x00055F20 - 0x00055FAF (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055F20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00055F20: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x76F0A8);
    if (CMP_LE(eax & eax, 0)) goto loc_00055F73; /* jle: less or equal (signed <=) */

loc_00055F2D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(0x847138);
    edi = 0; /* xor self */

loc_00055F38: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00055F43; /* je: equal / zero */

loc_00055F3D: ;
    if (CMP_G(MEM32(edi + eax + 4), ecx)) goto loc_00055F6B; /* jg: greater (signed >) */

loc_00055F43: ;
    ecx = MEM32(edi + eax + 4);
    edx = ZX16(MEM16(edi + eax + 0xA));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(edi + eax + 8));
    PUSH32(esp, edx);
    edx = MEM32(edi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0005E240(); /* call 0x0005E240 */

loc_00055F5D: ;
    ecx = MEM32(0x76F0A8);
    eax = MEM32(0x847138);
    esp = esp + 0x10;

loc_00055F6B: ;
    edi = edi + 0xC;
    ebx--;
    if ((ebx != 0)) goto loc_00055F38; /* jne: not equal / not zero */

loc_00055F71: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00055F73: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00055FAD; /* je: equal / zero */

loc_00055F78: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(esi * 4 + 0x76F0F8) = ecx;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx--;
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(0x847118) = xmm0; /* movss */
    MEM32(esi * 4 + 0x76F0F0) = ecx;
    MEM32(0x76F0A8) = 0xFFFFFFFFu;

loc_00055FAD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055FB0
 * Original: 0x00055FB0 - 0x00055FD9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055FB0: ;
    ecx = ZX16(MEM16(0x76E860));
    eax = MEM32(esi);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (CMP_L(eax, ecx)) { sub_00055FD9(); return; } /* jl: less (signed <) */

loc_00055FC7: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_00055F20(); /* call 0x00055F20 */

loc_00055FD0: ;
    POP32(esp, ebp);
    MEM32(esi) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00056050
 * Original: 0x00056050 - 0x0005699C (2380 bytes, 713 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056050(void)
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

loc_00056050: ;
    SET_LO8(eax, MEM8(0x7655FD));
    esp = esp - 0x30;
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    if (CMP_EQ(LO8(eax), 2)) goto loc_00056997; /* je: equal / zero */

loc_00056065: ;
    if (CMP_EQ(MEM8(0x76EC82), 1)) goto loc_0005607B; /* je: equal / zero */

loc_0005606E: ;
    if (CMP_NE(MEM8(ebp + 0x76F0E0), 1)) goto loc_00056997; /* jne: not equal / not zero */

loc_0005607B: ;
    eax = MEM32(0x847138);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(eax, esi)) goto loc_000560C6; /* jne: not equal / not zero */

loc_00056087: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0004E9B0(); /* call 0x0004E9B0 */

loc_0005608E: ;
    (void)0; /* cmp LO16(eax), LO16(esi) - flags set for next jcc */
    MEM16(0x76E860) = LO16(eax);
    if (CMP_EQ(LO16(eax), LO16(esi))) goto loc_00056996; /* je: equal / zero */

loc_0005609D: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x473);
    eax = eax + eax * 2;
    eax = eax << 2;
    PUSH32(esp, 0x5D5934);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000560B8: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    MEM32(0x847138) = eax;
    POP32(esp, ebp);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_000560C6: ;
    if (CMP_EQ(MEM16(0x76E860), LO16(esi))) goto loc_00056996; /* je: equal / zero */

loc_000560D3: ;
    SET_LO8(eax, MEM8(ebp + 0x76EF28));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(0x76EDF8) = 0;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x28) = esi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0005684E; /* jbe: below or equal (unsigned <=) */

loc_000560F1: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + 0x76EFB8;
    MEM32(esp + 0x20) = eax;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + 0x76EA70;
    MEM32(esp + 0x1C) = eax;
    edi = esi;
    PUSH32(esp, ebx);

loc_00056110: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0005681B; /* je: equal / zero */

loc_00056120: ;
    edx = MEM32(esp + 0x24);
    if (CMP_EQ(MEM16(edx), LO16(esi))) goto loc_0005681B; /* je: equal / zero */

loc_0005612D: ;
    eax = MEM32(ebp * 4 + 0x76EF2C);
    (void)0; /* cmp MEM16(eax + edi * 8), 2 - flags set for next jcc */
    eax = eax + edi * 8;
    if (CMP_NE(MEM16(eax + edi * 8), 2)) goto loc_00056689; /* jne: not equal / not zero */

loc_00056142: ;
    SET_LO8(edx, MEM8(eax + 2));
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x34) = esi;
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00056156: ;
    ebx = eax;
    if (CMP_EQ(ebx, esi)) goto loc_00056689; /* je: equal / zero */

loc_00056160: ;
    esi = MEM32(ebp * 4 + 0x76F0F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_0005618D: ;
    eax = MEM32(esp + 0x40);
    esp = esp + 0x30;
    if (TEST_NZ(eax, eax)) goto loc_000561E2; /* jne: not equal / not zero */

loc_00056198: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_000564FA; /* je: equal / zero */

loc_000561A4: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_000561CF: ;
    eax = MEM32(esp + 0x40);
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(eax, eax)) goto loc_000564FA; /* je: equal / zero */

loc_000561E2: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_00056228; /* jne: not equal / not zero */

loc_000561E8: ;
    if (CMP_NE(MEM8(eax + 5), 1)) goto loc_000561F6; /* jne: not equal / not zero */

loc_000561EE: ;
    MEM32(esp + 0x34) = 1;

loc_000561F6: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx--;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_00056221: ;
    eax = MEM32(esp + 0x40);
    esp = esp + 0x30;

loc_00056228: ;
    if (TEST_Z(eax, eax)) goto loc_000564FA; /* je: equal / zero */

loc_00056230: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000564FA; /* jne: not equal / not zero */

loc_0005623B: ;
    edi = MEM32(ebx + 0x3C4);
    if (TEST_Z(edi, edi)) goto loc_000564FA; /* je: equal / zero */

loc_00056249: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    xmm2 = 0.0f; /* xorps self = zero */
    eax = eax - ecx;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    if ((xmm1 <= xmm2)) goto loc_000562F3; /* jbe: below or equal (unsigned <=) */

loc_00056269: ;
    esi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_0005627A: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    ecx = ecx & 0xFFFFFF00u;
    if (CMP_LE(ecx, 0x100)) goto loc_000562DE; /* jle: less or equal (signed <=) */

loc_000562A5: ;
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_000562AE: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    goto loc_000562F9;

loc_000562DE: ;
    eax = 1;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    goto loc_000562F9;

loc_000562F3: ;
    MEMF(esp + 0x30) = xmm2; /* movss */

loc_000562F9: ;
    SET_LO8(ecx, MEM8(0x76EC82));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00056315; /* je: equal / zero */

loc_0005630B: ;
    SET_LO8(ecx, MEM8(0x76EB69));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00056356; /* je: equal / zero */

loc_00056315: ;
    SET_LO16(eax, MEM16(eax + 6));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_0005633A; /* jle: less or equal (signed <=) */

loc_0005632C: ;
    ecx = SX16(LO16(eax));
    ecx--;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm0; /* movss */

loc_0005633A: ;
    edx = ZX16(MEM16(0x7655F4));
    if (CMP_G(MEM32(esp + 0x14), edx)) goto loc_0005634D; /* jg: greater (signed >) */

loc_00056347: ;
    MEMF(esp + 0x28) = xmm2; /* movss */

loc_0005634D: ;
    if (CMP_NE(MEM8(0x765601), 2)) goto loc_0005635C; /* jne: not equal / not zero */

loc_00056356: ;
    MEMF(esp + 0x28) = xmm2; /* movss */

loc_0005635C: ;
    if (CMP_EQ(MEM32(ebx + 0xA4), ebp)) goto loc_00056411; /* je: equal / zero */

loc_00056368: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0005637D: ;
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00056408; /* jbe: below or equal (unsigned <=) */

loc_0005638E: ;
    esi = MEM32(ebx + 0x3C4);
    edi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_000563A5: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    ecx = ecx & 0xFFFFFF00u;
    if (CMP_LE(ecx, 0x100)) goto loc_000563FB; /* jle: less or equal (signed <=) */

loc_000563D0: ;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_000563D9: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_00056400;

loc_000563FB: ;
    eax = 1;

loc_00056400: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_00056408: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_00056411: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx + 5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00056422; /* je: equal / zero */

loc_0005641C: ;
    MEMF(esp + 0x30) = xmm2; /* movss */

loc_00056422: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00056437: ;
    esi = MEM32(ebx + 0x3C4);
    edi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esp = esp + 0x18;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_00056451: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = eax & 0xFFFFFF00u;
    if (CMP_LE(eax, 0x100)) goto loc_000564A7; /* jle: less or equal (signed <=) */

loc_0005647A: ;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_00056483: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_000564AC;

loc_000564A7: ;
    eax = 1;

loc_000564AC: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x34);
    if (TEST_NZ(eax, eax)) goto loc_000564D3; /* jne: not equal / not zero */

loc_000564B8: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(edx * 4 + 0x76F0F8);
    eax = eax - MEM32(esp + 0x14);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    goto loc_000564D6;

loc_000564D3: ;
    xmm1 = xmm0; /* movaps */

loc_000564D6: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000564E9; /* jbe: below or equal (unsigned <=) */

loc_000564DB: ;
    goto loc_000564E0;

    /* nop */

loc_000564E0: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000564E0; /* ja: above (unsigned >) */

loc_000564E9: ;
    edx = 0; /* xor self */
    eax = esi;
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_000564F6: ;
    ebp = MEM32(esp + 0x48);

loc_000564FA: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00056689; /* je: equal / zero */

loc_00056507: ;
    SET_LO8(eax, MEM8(0x76EB69));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00056689; /* jne: not equal / not zero */

loc_00056514: ;
    (void)0; /* cmp MEM16(ebx + 0x144), 0 - flags set for next jcc */
    edi = MEM32(esp + 0x2C);
    if (CMP_NE(MEM16(ebx + 0x144), 0)) goto loc_00056689; /* jne: not equal / not zero */

loc_00056526: ;
    esi = MEM32(ebp * 4 + 0x76F0F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_00056553: ;
    ecx = MEM32(esp + 0x40);
    esp = esp + 0x30;
    if (TEST_Z(ecx, ecx)) goto loc_000565D3; /* je: equal / zero */

loc_0005655E: ;
    eax = MEM32(esp + 0x18);
    eax = eax - MEM32(esp + 0x14);
    xmm0 = MEMF(0x648EEC); /* movss */
    edx = ZX16(MEM16(ebx + 0x60));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00056580; /* jbe: below or equal (unsigned <=) */

loc_0005657B: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00056595;

loc_00056580: ;
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00056595; /* jp: parity */

loc_0005658D: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_00056595: ;
    esi = esi - MEM32(esp + 0x14);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000565B1; /* jbe: below or equal (unsigned <=) */

loc_000565AE: ;
    xmm0 = xmm1; /* movaps */

loc_000565B1: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_000565BF; /* je: equal / zero */

loc_000565B9: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_000565C3;

loc_000565BF: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);

loc_000565C3: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, 0); sub_000FF000(); /* call 0x000FF000 */

loc_000565D0: ;
    esp = esp + 8;

loc_000565D3: ;
    if (CMP_NE(MEM16(ebx + 0x144), 0)) goto loc_00056689; /* jne: not equal / not zero */

loc_000565E1: ;
    edx = MEM32(ebp * 4 + 0x76F0F8);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_0005660E: ;
    esi = MEM32(esp + 0x40);
    esp = esp + 0x30;
    if (TEST_Z(esi, esi)) goto loc_00056635; /* je: equal / zero */

loc_00056619: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_0029DD30(); /* call 0x0029DD30 */

loc_00056625: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 4);
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) + 0xA);
    MEM8(edx + ebx + 0x13D) = LO8(eax);

loc_00056635: ;
    eax = MEM32(ebp * 4 + 0x76F0F8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00055C20(); /* call 0x00055C20 */

loc_00056662: ;
    esi = MEM32(esp + 0x40);
    esp = esp + 0x30;
    if (TEST_Z(esi, esi)) goto loc_00056689; /* je: equal / zero */

loc_0005666D: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_0029DD30(); /* call 0x0029DD30 */

loc_00056679: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) + 0xA);
    MEM8(ecx + ebx + 0x13D) = LO8(eax);

loc_00056689: ;
    esi = MEM32(ebp * 4 + 0x76F0F8);
    ecx = MEM32(ebp * 4 + 0x76F0F0);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = ebp * 4 + 0x76F0F0;
    ebp = ebp * 4 + 0x76F0F8;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(ecx, esi)) goto loc_0005681B; /* je: equal / zero */

loc_000566B5: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ebx = MEM32(ecx);
    ecx = MEM32(esp + 0x24);
    edi = eax + 0x20;
    eax = edi;
    MEM32(esp + 0x1C) = edx;
    edx = ZX16(MEM16(ecx));
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_AE(eax, edx)) goto loc_0005681B; /* jae: above or equal (unsigned >=) */

loc_000566DE: ;
    edi = edi;

loc_000566E0: ;
    SET_LO8(eax, MEM8(edi + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000566F5; /* jne: not equal / not zero */

loc_000566E7: ;
    if (CMP_NE(MEM8(edi), 0)) goto loc_000566F5; /* jne: not equal / not zero */

loc_000566EC: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    goto loc_000567F8;

loc_000566F5: ;
    ecx = MEM32(esp + 0x1C);
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp >> 8);
    if (CMP_G(ebp, esi)) goto loc_000567AC; /* jg: greater (signed >) */

loc_00056727: ;
    ecx = MEM32(esp + 0x34);
    if (CMP_LE(ebp, MEM32(ecx))) goto loc_000567AC; /* jle: less or equal (signed <=) */

loc_0005672F: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(edx);
    ecx = MEM32(esp + 0x24);
    edx = ZX16(MEM16(ecx));
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_AE(eax, edx)) goto loc_000567AC; /* jae: above or equal (unsigned >=) */

loc_00056747: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x2C);
    /* nop */

loc_00056750: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0005675B; /* jne: not equal / not zero */

loc_00056754: ;
    if (CMP_NE(MEM8(edi), 0x11)) goto loc_00056765; /* jne: not equal / not zero */

loc_00056759: ;
    goto loc_00056785;

loc_0005675B: ;
    if (CMP_NE(ecx, 1)) goto loc_00056785; /* jne: not equal / not zero */

loc_00056760: ;
    if (CMP_NE(MEM8(edi), 0x11)) goto loc_00056785; /* jne: not equal / not zero */

loc_00056765: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(0x847138);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    esi = esp + 0x50;
    PUSH32(esp, 0); sub_00055FB0(); /* call 0x00055FB0 */

loc_0005677E: ;
    ecx = MEM32(esp + 0x5C);
    esp = esp + 0x18;

loc_00056785: ;
    SET_LO8(eax, MEM8(edi + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000567AC; /* jne: not equal / not zero */

loc_0005678C: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_000567AC; /* je: equal / zero */

loc_00056791: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(edx);
    edx = MEM32(esp + 0x24);
    edx = ZX16(MEM16(edx));
    edi = edi + 8;
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_B(eax, edx)) goto loc_00056750; /* jb: below (unsigned <) */

loc_000567AC: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    if (CMP_G(ebp, esi)) goto loc_0005681B; /* jg: greater (signed >) */

loc_000567B6: ;
    SET_LO8(eax, MEM8(edi + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000567EE; /* jne: not equal / not zero */

loc_000567BD: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);

loc_000567C5: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_000567E6; /* je: equal / zero */

loc_000567CA: ;
    ebp = MEM32(eax);
    ebx = ZX16(MEM16(ecx));
    edi = edi + 8;
    edx = edi;
    edx = edx - ebp;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, ebx)) goto loc_000567EE; /* jae: above or equal (unsigned >=) */

loc_000567DD: ;
    SET_LO8(edx, MEM8(edi + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000567C5; /* je: equal / zero */

loc_000567E4: ;
    goto loc_000567EE;

loc_000567E6: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    MEM32(esp + 0x1C) = eax;

loc_000567EE: ;
    ecx = ZX8(MEM8(edi + 1));
    eax = MEM32(esp + 0x1C);
    eax = eax + ecx;

loc_000567F8: ;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(eax);
    eax = ZX16(MEM16(ecx));
    edi = edi + 8;
    edx = edi;
    edx = edx - ebp;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, eax)) goto loc_000566E0; /* jb: below (unsigned <) */

loc_0005681B: ;
    ecx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x20);
    ecx = ecx + 2;
    MEM32(esp + 0x24) = ecx;
    ecx = ZX8(MEM8(ebp + 0x76EF28));
    edi++;
    edx = edx + 4;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x20) = edx;
    if (CMP_L(edi, ecx)) goto loc_00056110; /* jl: less (signed <) */

loc_0005684D: ;
    POP32(esp, ebx);

loc_0005684E: ;
    eax = MEM32(esp + 0x34);
    ecx = ebp;
    PUSH32(esp, 0); sub_00055F20(); /* call 0x00055F20 */

loc_00056859: ;
    eax = MEM32(esp + 0x40);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x76EDF8) = 1;
    if (TEST_NZ(eax, eax)) goto loc_0005686F; /* jne: not equal / not zero */

loc_00056868: ;
    MEM8(ebp + 0x76F0D8) = 1;

loc_0005686F: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x18)) goto loc_000568F0; /* jne: not equal / not zero */

loc_00056878: ;
    eax = MEM32(0x8470DC);
    xmm0 = MEMF(eax + 0x334); /* movss */
    /* comiss xmm0, MEMF(0x59D944) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x59D944))) goto loc_00056895; /* jbe: below or equal (unsigned <=) */

loc_0005688E: ;
    edi = 2;
    goto loc_000568AF;

loc_00056895: ;
    xmm0 = MEMF(0x64A048); /* movss */
    /* comiss xmm0, MEMF(eax + 0x334) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x334))) goto loc_000568AD; /* jbe: below or equal (unsigned <=) */

loc_000568A6: ;
    edi = 1;
    goto loc_000568AF;

loc_000568AD: ;
    edi = 0; /* xor self */

loc_000568AF: ;
    if (CMP_EQ(edi, MEM32(0x68C490))) goto loc_00056995; /* je: equal / zero */

loc_000568BB: ;
    eax = edi;
    eax--;
    if ((eax == 0)) goto loc_000568DB; /* je: equal / zero */

loc_000568C0: ;
    eax--;
    if ((eax == 0)) goto loc_000568CF; /* je: equal / zero */

loc_000568C3: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_000568C8: ;
    esi = 0x5D5928;
    goto loc_000568E5;

loc_000568CF: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_000568D4: ;
    esi = 0x5D58FC;
    goto loc_000568E5;

loc_000568DB: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_000568E0: ;
    esi = 0x5D590C;

loc_000568E5: ;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_000568EA: ;
    MEM32(0x68C490) = edi;

loc_000568F0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xC)) goto loc_00056995; /* jne: not equal / not zero */

loc_000568FD: ;
    SET_LO8(eax, MEM8(0x84713C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00056995; /* je: equal / zero */

loc_0005690A: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0005690F: ;
    edx = MEM32(0x68C48C);
    ecx = eax;
    MEM32(0x68C48C) = eax;
    SET_LO8(eax, MEM8(0x7FA275));
    ecx = ecx - edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00056995; /* jne: not equal / not zero */

loc_00056927: ;
    esi = MEM32(0x847140);
    esi = esi + ecx;
    SET_LO8(edx, 0xE1);
    MEM32(0x847140) = esi;
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_0005693C: ;
    fp_push((double)SMEM32(0x84714C)); /* fild */
    edx = MEM32(0x84714C);
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = eax;
    if (CMP_GE(edx & edx, 0)) goto loc_00056954; /* jge: greater or equal (signed >=) */

loc_0005694E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00056954: ;
    eax = MEM32(0x847148);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0005696E; /* jge: greater or equal (signed >=) */

loc_00056968: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0005696E: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0005697B: ;
    MEM16(edi + 0x16) = LO16(eax);
    if (CMP_B(esi, MEM32(0x847144))) goto loc_00056995; /* jb: below (unsigned <) */

loc_00056987: ;
    MEM8(edi + 0xC2) = 1;
    MEM8(0x84713C) = 0;

loc_00056995: ;
    POP32(esp, edi);

loc_00056996: ;
    POP32(esp, esi);

loc_00056997: ;
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
 * sub_000569A0
 * Original: 0x000569A0 - 0x0005993E (12190 bytes, 3949 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000569A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6, xmm7;

loc_000569A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    SET_LO8(edx, MEM8(0x77619E));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    ebx = eax;
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00056CDA; /* je: equal / zero */

loc_000569CA: ;
    SET_LO8(edx, MEM8(ebx));
    if (CMP_EQ(LO8(edx), 7)) goto loc_000569E9; /* je: equal / zero */

loc_000569D1: ;
    if (CMP_EQ(LO8(edx), 0xE)) goto loc_000569E9; /* je: equal / zero */

loc_000569D6: ;
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_000569E9; /* je: equal / zero */

loc_000569DB: ;
    if (CMP_EQ(LO8(edx), 0x10)) goto loc_000569E9; /* je: equal / zero */

loc_000569E0: ;
    if (CMP_NE(LO8(edx), 0x12)) goto loc_00056CDA; /* jne: not equal / not zero */

loc_000569E9: ;
    eax = 0x3C;
    MEM8(esp + 0x1E) = LO8(eax);
    MEM8(esp + 0x1F) = LO8(eax);
    MEM8(esp + 0x20) = LO8(eax);
    (void)0; /* cmp MEM8(edi + 0x76F0E0), 1 - flags set for next jcc */
    MEM8(esp + 0x18) = 0xFF;
    MEM8(esp + 0x19) = 0xFF;
    MEM8(esp + 0x1A) = 0xFF;
    MEM8(esp + 0x1B) = 0xFF;
    MEM8(esp + 0x1C) = 0xFF;
    MEM8(esp + 0x1D) = 0xA0;
    if (CMP_EQ(MEM8(edi + 0x76F0E0), 1)) goto loc_00056A3B; /* je: equal / zero */

loc_00056A21: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00059932; /* je: equal / zero */

loc_00056A2E: ;
    if (CMP_NE(MEM32(0x8472A0), 0xD)) goto loc_00059932; /* jne: not equal / not zero */

loc_00056A3B: ;
    SET_LO8(eax, MEM8(ebx + 4));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebp + 8);
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00054700(); /* call 0x00054700 */

loc_00056A4E: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00059932; /* je: equal / zero */

loc_00056A5B: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00056C25; /* jne: not equal / not zero */

loc_00056A66: ;
    SET_LO8(eax, MEM8(edi + 0x200C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00056A7B; /* je: equal / zero */

loc_00056A70: ;
    esi = MEM32(edi + 0x205C);
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_00056A7B: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    eax = MEM32(ebp + 0x14);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x76F0DC));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0); sub_00055810(); /* call 0x00055810 */

loc_00056A9D: ;
    eax = MEM32(esp + 0x44);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00056AD9; /* je: equal / zero */

loc_00056AA8: ;
    PUSH32(esp, eax);
    esi = edi + 0x2060;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00056AB5: ;
    SET_LO16(eax, MEM16(ebx + 6));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    esp = esp + 8;
    edx = edx & 0xFF;
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(HI8(eax), 1)) goto loc_00056AF0; /* je: equal / zero */

loc_00056ACF: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_00056AD4: ;
    if (CMP_NE(eax, 1)) goto loc_00056AF0; /* jne: not equal / not zero */

loc_00056AD9: ;
    esi = MEM32(edi + 0x205C);
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_00056AE4: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056AF0: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(LO16(eax), 0xBE)) goto loc_00056B07; /* jne: not equal / not zero */

loc_00056AF9: ;
    ecx = edi + 4;
    MEM32(ecx) = 0x8013;
    esi = esi + 2;
    goto loc_00056B47;

loc_00056B07: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(LO16(ecx), 1)) goto loc_00056B1C; /* jne: not equal / not zero */

loc_00056B11: ;
    ecx = edi + 4;
    MEM32(ecx) = 0x8013;
    goto loc_00056B47;

loc_00056B1C: ;
    if (CMP_NE(LO16(eax), 0xBF)) goto loc_00056B30; /* jne: not equal / not zero */

loc_00056B22: ;
    ecx = edi + 4;
    MEM32(ecx) = 0x8019;
    esi = esi + 2;
    goto loc_00056B47;

loc_00056B30: ;
    (void)0; /* cmp LO16(ecx), 2 - flags set for next jcc */
    ecx = edi + 4;
    if (CMP_NE(LO16(ecx), 2)) goto loc_00056B41; /* jne: not equal / not zero */

loc_00056B39: ;
    MEM32(ecx) = 0x8019;
    goto loc_00056B47;

loc_00056B41: ;
    MEM32(ecx) = 0x8011;

loc_00056B47: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    MEM32(edi + 8) = esi;
    MEM16(edi + 0x2032) = 0x64;
    MEM8(edi + 0x200C) = 1;
    MEM16(edi + 0x2030) = 0;
    esi = MEM32(edx * 4 + 0x76E884);
    esi = eax + esi + 0xC;
    MEM32(edi + 0x2024) = esi;
    esi = MEM32(edx * 4 + 0x76E884);
    esi = eax + esi + 0x10;
    MEM32(edi + 0x2028) = esi;
    MEM8(edi + 0x2037) = 1;
    edx = MEM32(edx * 4 + 0x76E884);
    eax = eax + edx + 0x14;
    MEM32(edi + 0x202C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = esp + eax + 0x18;
    SET_LO8(eax, MEM8(edx + eax * 2));
    MEM8(edi + 0x2034) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = esp + eax + 0x19;
    SET_LO8(eax, MEM8(edx + eax * 2));
    MEM8(edi + 0x2035) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = esp + eax + 0x1A;
    SET_LO8(eax, MEM8(edx + eax * 2));
    MEM8(edi + 0x2036) = LO8(eax);
    if (CMP_NE(MEM8(ebx + 5), 2)) goto loc_00056BE5; /* jne: not equal / not zero */

loc_00056BDF: ;
    MEM32(ecx) = MEM32(ecx) | 0x40000;

loc_00056BE5: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x14);
    MEM32(edi + 0x2040) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(edi + 0x203C) = edx;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(edi + 0x2044) = edx;
    PUSH32(esp, 0); sub_000E0850(); /* call 0x000E0850 */

loc_00056C10: ;
    MEM32(edi + 0x205C) = eax;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056C25: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00056C3E; /* jne: not equal / not zero */

loc_00056C29: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, 0); sub_000546A0(); /* call 0x000546A0 */

loc_00056C32: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056C3E: ;
    SET_LO8(eax, MEM8(ebx + 5));
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x2044) = eax;
    eax = MEM32(edi + 0x205C);
    MEM32(edi + 0x2040) = edx;
    MEM32(edi + 0x203C) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00056C6D; /* jne: not equal / not zero */

loc_00056C66: ;
    PUSH32(esp, 0); sub_000E3690(); /* call 0x000E3690 */

loc_00056C6B: ;
    goto loc_00056C72;

loc_00056C6D: ;
    PUSH32(esp, 0); sub_000E36B0(); /* call 0x000E36B0 */

loc_00056C72: ;
    MEM32(edi + 0x205C) = eax;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_00059932; /* je: equal / zero */

loc_00056C85: ;
    eax = SX16(LO16(ebx));
    eax--;
    ecx = eax + eax * 2;
    SET_LO8(edx, MEM8(esp + ecx + 0x18));
    MEM8(edi + 0x2034) = LO8(edx);
    SET_LO8(edx, MEM8(esp + ecx + 0x19));
    SET_LO8(ecx, MEM8(esp + ecx + 0x1A));
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    eax = MEM32(edi + 4);
    MEM8(edi + 0x2035) = LO8(edx);
    MEM8(edi + 0x2036) = LO8(ecx);
    if (CMP_NE(eax, 2)) goto loc_00056CC6; /* jne: not equal / not zero */

loc_00056CB2: ;
    eax = eax | 0x40000;
    MEM32(edi + 4) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056CC6: ;
    eax = eax & 0xFFFBFFFFu;
    MEM32(edi + 4) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056CDA: ;
    SET_LO8(edx, MEM8(ebx));
    if (CMP_NE(LO8(edx), 0xC)) goto loc_00056D7E; /* jne: not equal / not zero */

loc_00056CE5: ;
    SET_LO16(ecx, MEM16(ebx + 2));
    if (CMP_EQ(LO16(ecx), LO16(eax))) goto loc_00059932; /* je: equal / zero */

loc_00056CF2: ;
    if (CMP_EQ(MEM16(ebx + 6), 0)) goto loc_00056D24; /* je: equal / zero */

loc_00056CF9: ;
    edx = ZX8(MEM8(esi + 0x141));
    eax = SX16(LO16(ecx));
    if (CMP_EQ(eax, edx)) goto loc_00059932; /* je: equal / zero */

loc_00056D0B: ;
    MEM8(esi + 0x141) = LO8(eax);
    eax = esi;
    PUSH32(esp, 0); sub_002CF1C0(); /* call 0x002CF1C0 */

loc_00056D18: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056D24: ;
    SET_LO8(eax, MEM8(ebx + 5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00056D32; /* je: equal / zero */

loc_00056D2B: ;
    eax = 0xFFFF;
    goto loc_00056D5A;

loc_00056D32: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00056D52: ;
    ecx = MEM32(ebp + 0x10);
    esp = esp + 0x28;
    eax = eax - ecx;

loc_00056D5A: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 2));
    PUSH32(esp, 3);
    edi = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002CEFC0(); /* call 0x002CEFC0 */

loc_00056D6F: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056D7E: ;
    if (CMP_NE(LO8(edx), 0xD)) goto loc_00056E8D; /* jne: not equal / not zero */

loc_00056D87: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_00056D8F: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00056DC6; /* jne: not equal / not zero */

loc_00056D96: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    eax++;
    PUSH32(esp, 0); sub_002B4570(); /* call 0x002B4570 */

loc_00056DA0: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx++;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_00056DB7: ;
    esp = esp + 0x18;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056DC6: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_00056DE7; /* jne: not equal / not zero */

loc_00056DCB: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    edx++;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_00056DD8: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056DE7: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x43) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00059932; /* je: equal / zero */

loc_00056DFB: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00056E08: ;
    goto loc_00056E10;

loc_00056E0A: ;
    SET_LO8(ecx, MEM8(esp + 0x43));
    edi = edi;

loc_00056E10: ;
    (void)0; /* cmp MEM8(eax), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(ecx))) goto loc_00056E2C; /* jne: not equal / not zero */

loc_00056E1A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    edx = ZX16(MEM16(eax + 0xA));
    ecx++;
    if (CMP_NE(edx, ecx)) goto loc_00056E2C; /* jne: not equal / not zero */

loc_00056E27: ;
    if (TEST_Z(edi, edi)) goto loc_00056E3E; /* je: equal / zero */

loc_00056E2B: ;
    edi--;

loc_00056E2C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_00056E0A; /* jne: not equal / not zero */

loc_00056E32: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056E3E: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    if (CMP_NE(LO8(ecx), 2)) goto loc_00056E65; /* jne: not equal / not zero */

loc_00056E46: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ecx = ecx + ecx * 4;
    SET_LO16(edx, MEM16(ecx * 4 + 0x69D97C));
    MEM16(eax + 0x22) = LO16(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056E65: ;
    if (CMP_NE(LO8(ecx), 3)) goto loc_00059932; /* jne: not equal / not zero */

loc_00056E6E: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ecx = ecx + ecx * 4;
    SET_LO16(edx, MEM16(ecx * 4 + 0x69D97C));
    MEM16(eax + 0x24) = LO16(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056E8D: ;
    if (CMP_NE(LO8(edx), 4)) goto loc_00056EFC; /* jne: not equal / not zero */

loc_00056E92: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_00056E9A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00056EB4: ;
    eax = eax - MEM32(ebp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esp = esp + 0x28;
    if (CMP_LE(eax, 0xFF)) goto loc_00056ECD; /* jle: less or equal (signed <=) */

loc_00056EC6: ;
    eax = 0xFF;
    goto loc_00056ED6;

loc_00056ECD: ;
    if (TEST_NZ(eax, eax)) goto loc_00056ED6; /* jne: not equal / not zero */

loc_00056ED1: ;
    eax = 1;

loc_00056ED6: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00059932; /* jne: not equal / not zero */

loc_00056EE1: ;
    SET_LO8(ecx, MEM8(ebx + 2));
    MEM8(esi + 0x249) = LO8(eax);
    MEM8(esi + 0x248) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056EFC: ;
    if (CMP_NE(LO8(edx), 3)) goto loc_00056F5C; /* jne: not equal / not zero */

loc_00056F01: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    edx = ZX8(MEM8(edi + 0x76EF28));
    if (CMP_GE(eax, edx)) goto loc_00059932; /* jge: greater or equal (signed >=) */

loc_00056F14: ;
    ecx = MEM32(edi * 4 + 0x76EF2C);
    if (CMP_NE(MEM16(ecx + eax * 8), 1)) goto loc_00059932; /* jne: not equal / not zero */

loc_00056F26: ;
    edx = ZX8(MEM8(0x76EE34));
    if (CMP_EQ(edx, eax)) goto loc_00059932; /* je: equal / zero */

loc_00056F35: ;
    SET_LO8(eax, MEM8(ebx + 2));
    MEM8(0x76EE34) = LO8(eax);
    eax = MEM32(0x8470DC);
    MEM8(0x762E40) = 4;
    MEM32(eax + 0x420) = MEM32(eax + 0x420) | 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056F5C: ;
    if (CMP_NE(LO8(edx), 9)) goto loc_00056F91; /* jne: not equal / not zero */

loc_00056F61: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_00056F69: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0029DD30(); /* call 0x0029DD30 */

loc_00056F75: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) + 0xA);
    MEM8(edx + esi + 0x13D) = LO8(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056F91: ;
    if (CMP_NE(LO8(edx), 1)) goto loc_00056FDF; /* jne: not equal / not zero */

loc_00056F96: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_00056F9E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    if (CMP_NE(ecx, eax)) goto loc_00056FBD; /* jne: not equal / not zero */

loc_00056FA6: ;
    ecx = 0xFF;
    MEM8(esi + 0x3A9) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056FBD: ;
    eax = MEM32(esi + 0x68);
    eax = eax - 0x82;
    if ((eax == 0)) goto loc_00056FCC; /* je: equal / zero */

loc_00056FC7: ;
    eax = eax - 0x14;
    if ((eax != 0)) goto loc_00056FCD; /* jne: not equal / not zero */

loc_00056FCC: ;
    ecx++;

loc_00056FCD: ;
    MEM8(esi + 0x3A9) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056FDF: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_000590C0; /* jne: not equal / not zero */

loc_00056FE8: ;
    SET_LO16(edx, MEM16(ebx + 2));
    if (CMP_NE(LO16(edx), 0x3B)) goto loc_0005702A; /* jne: not equal / not zero */

loc_00056FF2: ;
    SET_LO8(edx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00057019; /* jne: not equal / not zero */

loc_00056FF9: ;
    eax = MEM32(edi * 4 + 0x76E884);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    ecx = eax + ecx + 0x28;
    MEM32(0x849384) = ecx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057019: ;
    MEM32(0x849384) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005702A: ;
    if (CMP_NE(LO16(edx), 8)) goto loc_0005704A; /* jne: not equal / not zero */

loc_00057030: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(edi + 0x76F0D0) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005704A: ;
    if (CMP_NE(LO16(edx), 9)) goto loc_0005706A; /* jne: not equal / not zero */

loc_00057050: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(edi + 0x76F0CC) = LO8(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005706A: ;
    if (CMP_NE(LO16(edx), 0xD)) goto loc_0005708A; /* jne: not equal / not zero */

loc_00057070: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(edi + 0x76F0D4) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005708A: ;
    if (CMP_NE(LO16(edx), 0x12)) goto loc_000570AA; /* jne: not equal / not zero */

loc_00057090: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(edi + 0x76F0C8) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000570AA: ;
    if (CMP_NE(LO16(edx), 0x13)) goto loc_000570C5; /* jne: not equal / not zero */

loc_000570B0: ;
    SET_LO8(eax, MEM8(ebx + 4));
    MEM8(edi + 0x76F0C4) = LO8(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000570C5: ;
    if (CMP_NE(LO16(edx), 0x15)) goto loc_000570E5; /* jne: not equal / not zero */

loc_000570CB: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(edi + 0x76F0C0) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000570E5: ;
    if (CMP_NE(LO16(edx), 0x14)) goto loc_00057134; /* jne: not equal / not zero */

loc_000570EB: ;
    SET_LO8(ecx, MEM8(0x68C321));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00059932; /* je: equal / zero */

loc_000570F9: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_00057101: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005711B; /* jne: not equal / not zero */

loc_00057108: ;
    eax = esi;
    PUSH32(esp, 0); sub_002DAF20(); /* call 0x002DAF20 */

loc_0005710F: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005711B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00057125: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057134: ;
    if (CMP_NE(LO16(edx), 0x41)) goto loc_000571DE; /* jne: not equal / not zero */

loc_0005713E: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM8(esp + 0x10) = 0xFF;
    MEM8(esp + 0x11) = 0;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x15) = 0;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_00057164: ;
    SET_LO8(edx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000571C5; /* jne: not equal / not zero */

loc_0005716B: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    edx = esp + eax + 0x10;
    SET_LO8(eax, MEM8(edx + eax * 2));
    MEM8(esi + 0x1AD) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = esp + eax + 0x11;
    SET_LO8(eax, MEM8(edx + eax * 2));
    MEM8(esi + 0x1AE) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = esp + eax + 0x12;
    SET_LO8(eax, MEM8(edx + eax * 2));
    MEM8(esi + 0x1AF) = LO8(eax);
    MEM8(esi + 0x1AC) = 1;
    edx = MEM32(edi * 4 + 0x76E884);
    eax = edx + ecx + 0x30;
    MEM32(esi + 0x1A8) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000571C5: ;
    MEM32(esi + 0x1A8) = eax;
    MEM8(esi + 0x1AC) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000571DE: ;
    if (CMP_NE(LO16(edx), 0x44)) goto loc_0005724F; /* jne: not equal / not zero */

loc_000571E4: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_000571F1: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00058B7C; /* jne: not equal / not zero */

loc_000571FE: ;
    SET_LO8(eax, MEM8(ebx + 5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005722C; /* je: equal / zero */

loc_00057205: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_0005721D: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005722C: ;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 4);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_00057240: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005724F: ;
    if (CMP_NE(LO16(edx), 0x17)) goto loc_0005729A; /* jne: not equal / not zero */

loc_00057255: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_0005725D: ;
    SET_LO8(edx, MEM8(ebx + 4));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x3FF) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005727A; /* je: equal / zero */

loc_0005726F: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(esi + 0x3FF) = LO8(ecx);

loc_0005727A: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00057285: ;
    SET_LO8(edx, MEM8(ebx + 6));
    MEM8(esi + 0x401) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005729A: ;
    if (CMP_NE(LO16(edx), 0x16)) goto loc_000572E5; /* jne: not equal / not zero */

loc_000572A0: ;
    if (CMP_EQ(esi, eax)) goto loc_00059932; /* je: equal / zero */

loc_000572A8: ;
    SET_LO8(edx, MEM8(ebx + 4));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x406) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000572C5; /* je: equal / zero */

loc_000572BA: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(esi + 0x406) = LO8(ecx);

loc_000572C5: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_000572D0: ;
    SET_LO8(edx, MEM8(ebx + 6));
    MEM8(esi + 0x408) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000572E5: ;
    if (CMP_EQ(LO16(edx), 0x18)) goto loc_00059932; /* je: equal / zero */

loc_000572EF: ;
    if (CMP_NE(LO16(edx), 0x1D)) goto loc_00057332; /* jne: not equal / not zero */

loc_000572F5: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax * 4 + 0x76EF2C);
    edx = MEM32(ebp + 8);
    if (CMP_NE(MEM16(ecx + edx * 8), 3)) goto loc_00059932; /* jne: not equal / not zero */

loc_0005730D: ;
    eax = MEM32(ebp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00057318: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(eax + 0xC2) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057332: ;
    if (CMP_NE(LO16(edx), 0x1E)) goto loc_00057372; /* jne: not equal / not zero */

loc_00057338: ;
    SET_LO8(edx, MEM8(ebx + 4));
    SET_LO8(ebx, MEM8(ebx + 5));
    SET_LO8(edx, LO8(edx) + 1);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(0x76F0B8) = LO8(edx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0005735C; /* je: equal / zero */

loc_0005734A: ;
    MEM8(0x76F0B7) = LO8(ebx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005735C: ;
    SET_LO8(eax, MEM8(0x7FA1F8));
    MEM8(0x76F0B7) = LO8(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057372: ;
    if (CMP_NE(LO16(edx), 3)) goto loc_000573C8; /* jne: not equal / not zero */

loc_00057378: ;
    SET_LO8(edx, MEM8(ebx + 6));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00057380: ;
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00057388: ;
    SET_LO8(ecx, MEM8(eax + 0xC7));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 0xC7) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 5));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000573B3; /* jne: not equal / not zero */

loc_0005739E: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(eax + 0xC7) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000573B3: ;
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0xC7) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000573C8: ;
    if (CMP_NE(LO16(edx), 0x6C)) goto loc_00057770; /* jne: not equal / not zero */

loc_000573D2: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    if (CMP_A(eax, 0x18)) goto loc_00059932; /* ja: above (unsigned >) */

loc_000573DF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x59940); /* switch: 29 entries, 29 targets */
    if (_jt == 0x000573E6u) goto loc_000573E6;
    if (_jt == 0x0005743Du) goto loc_0005743D;
    if (_jt == 0x0005749Fu) goto loc_0005749F;
    if (_jt == 0x000574C7u) goto loc_000574C7;
    if (_jt == 0x00057511u) goto loc_00057511;
    if (_jt == 0x0005752Bu) goto loc_0005752B;
    if (_jt == 0x00057540u) goto loc_00057540;
    if (_jt == 0x0005755Eu) goto loc_0005755E;
    if (_jt == 0x00057578u) goto loc_00057578;
    if (_jt == 0x000575CAu) goto loc_000575CA;
    if (_jt == 0x000575EEu) goto loc_000575EE;
    if (_jt == 0x00057609u) goto loc_00057609;
    if (_jt == 0x0005761Au) goto loc_0005761A;
    if (_jt == 0x0005762Bu) goto loc_0005762B;
    if (_jt == 0x0005763Cu) goto loc_0005763C;
    if (_jt == 0x00057662u) goto loc_00057662;
    if (_jt == 0x00057681u) goto loc_00057681;
    if (_jt == 0x00057685u) goto loc_00057685;
    if (_jt == 0x0005769Au) goto loc_0005769A;
    if (_jt == 0x000576B2u) goto loc_000576B2;
    if (_jt == 0x000576D9u) goto loc_000576D9;
    if (_jt == 0x000576E9u) goto loc_000576E9;
    if (_jt == 0x00057704u) goto loc_00057704;
    if (_jt == 0x00057737u) goto loc_00057737;
    if (_jt == 0x00057A30u) goto loc_00057A30;
    if (_jt == 0x00057A50u) goto loc_00057A50;
    if (_jt == 0x00057A70u) goto loc_00057A70;
    if (_jt == 0x00057A90u) goto loc_00057A90;
    if (_jt == 0x00059932u) goto loc_00059932;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000573E6: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    edx = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(eax + edx); /* movss */
    eax = eax + edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, 2);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = esp + 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F9620(); /* call 0x000F9620 */

loc_0005742E: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005743D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    edx = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(eax + edx); /* movss */
    eax = eax + edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0xC61C4000u);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    SET_LO8(eax, 1);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00113960(); /* call 0x00113960 */

loc_00057490: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005749F: ;
    SET_LO8(edx, MEM8(ebx + 5));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx + 0x2C;
    PUSH32(esp, edx);

loc_000574AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000574B8: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000574C7: ;
    SET_LO8(eax, MEM8(ebx + 5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000574F2; /* je: equal / zero */

loc_000574D3: ;
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_000574DA: ;
    SET_LO8(ecx, LO8(edx));
    edx = 2;
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_000574E6: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000574F2: ;
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_000574F9: ;
    SET_LO8(ecx, 0); /* xor self */
    edx = 2;
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_00057505: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057511: ;
    PUSH32(esp, 0x17);
    ecx = 0; /* xor self */
    SET_LO8(eax, 0x28);
    PUSH32(esp, 0); sub_0011F6D0(); /* call 0x0011F6D0 */

loc_0005751C: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005752B: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, 0); sub_0014A4D0(); /* call 0x0014A4D0 */

loc_00057534: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057540: ;
    SET_LO8(eax, MEM8(ebx + 5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    edx = 3;
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_00057552: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005755E: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 5));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0015E100(); /* call 0x0015E100 */

loc_00057569: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057578: ;
    MEM32(esp + 0x18) = 0x12;
    MEM32(esp + 0x1C) = 0x13;
    MEM32(esp + 0x20) = 0x14;
    MEM32(esp + 0x24) = 0x15;
    esi = esp + 0x18;
    edi = 4;

loc_000575A1: ;
    eax = MEM32(esi);
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_001C6A50(); /* call 0x001C6A50 */

loc_000575B5: ;
    esp = esp + 4;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_000575A1; /* jne: not equal / not zero */

loc_000575BE: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000575CA: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 8);
    esi = MEM32(0x8470DC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CEA40(); /* call 0x001CEA40 */

loc_000575DF: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000575EE: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_000575FD: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057609: ;
    PUSH32(esp, 0); sub_001693E0(); /* call 0x001693E0 */

loc_0005760E: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005761A: ;
    PUSH32(esp, 0); sub_0016E930(); /* call 0x0016E930 */

loc_0005761F: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005762B: ;
    PUSH32(esp, 0); sub_0016D380(); /* call 0x0016D380 */

loc_00057630: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005763C: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00059932; /* jne: not equal / not zero */

loc_00057649: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0016E6F0(); /* call 0x0016E6F0 */

loc_00057653: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057662: ;
    PUSH32(esp, 0x4E);

loc_00057664: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00057672: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057681: ;
    PUSH32(esp, 0x4F);
    goto loc_00057664;

loc_00057685: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, 0); sub_0014A500(); /* call 0x0014A500 */

loc_0005768E: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005769A: ;
    SET_LO8(ecx, 0); /* xor self */
    edx = 0xB;
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_000576A6: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000576B2: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_000576BA: ;
    eax = esi;
    PUSH32(esp, 0); sub_000C8CB0(); /* call 0x000C8CB0 */

loc_000576C1: ;
    eax = 0x49;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000C7DE0(); /* call 0x000C7DE0 */

loc_000576CD: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000576D9: ;
    SET_LO8(eax, MEM8(ebx + 5));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 0x56;
    PUSH32(esp, eax);
    goto loc_000574AA;

loc_000576E9: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_000576F1: ;
    eax = esi;
    PUSH32(esp, 0); sub_00140450(); /* call 0x00140450 */

loc_000576F8: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057704: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_0005770C: ;
    eax = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    esi = 0x50;
    edi = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0); sub_001A0DF0(); /* call 0x001A0DF0 */

loc_0005772B: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057737: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_0005773F: ;
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2C) = MEM8(eax + 0x2C) & 0xFB;
    eax = esi;
    PUSH32(esp, 0); sub_0031AB10(); /* call 0x0031AB10 */

loc_00057753: ;
    eax = 0x75;
    PUSH32(esp, 0); sub_0031AA60(); /* call 0x0031AA60 */

loc_0005775D: ;
    eax = esi;
    PUSH32(esp, 0); sub_0031AB10(); /* call 0x0031AB10 */

loc_00057764: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057770: ;
    if (CMP_NE(LO16(edx), 0x6E)) goto loc_000577C3; /* jne: not equal / not zero */

loc_00057776: ;
    ecx = esp + 0x10;
    edx = esi;
    PUSH32(esp, 0); sub_000C8720(); /* call 0x000C8720 */

loc_00057781: ;
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00057789: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    if (CMP_GE(ecx, MEM32(esp + 0x10))) goto loc_00059932; /* jge: greater or equal (signed >=) */

loc_00057797: ;
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + ecx));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C7E80(); /* call 0x000C7E80 */

loc_000577B4: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000577C3: ;
    if (CMP_NE(LO16(edx), 5)) goto loc_000579A5; /* jne: not equal / not zero */

loc_000577CD: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = 0xD;
    MEM32(esp + 0x1C) = 0xE;
    MEM32(esp + 0x20) = 0xF;
    MEM32(esp + 0x24) = 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_000577F8: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    eax = ecx;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(eax, 3)) goto loc_0005780F; /* jle: less or equal (signed <=) */

loc_00057807: ;
    MEM32(esp + 0x30) = 3;

loc_0005780F: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    edx = edx + eax;
    eax = MEM32(edx * 4 + 0x76EA70);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x44) = eax;
    if (TEST_Z(eax, eax)) goto loc_000578FD; /* je: equal / zero */

loc_0005782D: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edi = MEM32(esp + 0x44);
    eax = eax + 0x20;
    MEM32(esp + 0x28) = esi;
    esi = eax;
    esi = esi - edi;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(esp + 0x4C) = edi;
    if (CMP_AE(edx, edi)) goto loc_000578FD; /* jae: above or equal (unsigned >=) */

loc_00057859: ;
    /* nop */

loc_00057860: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00057875; /* jne: not equal / not zero */

loc_00057867: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_00057875; /* jne: not equal / not zero */

loc_0005786B: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x28) = edx;
    goto loc_000578E5;

loc_00057875: ;
    if (CMP_BE(eax, ebx)) goto loc_00057895; /* jbe: below or equal (unsigned <=) */

loc_00057879: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_00057895; /* jne: not equal / not zero */

loc_0005787E: ;
    if (CMP_NE(MEM16(eax + 2), 5)) goto loc_00057895; /* jne: not equal / not zero */

loc_00057885: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(edi, ecx)) goto loc_0005791D; /* je: equal / zero */

loc_00057891: ;
    edi = MEM32(esp + 0x4C);

loc_00057895: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000578DD; /* jne: not equal / not zero */

loc_00057899: ;
    /* nop */

loc_000578A0: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_000578D5; /* je: equal / zero */

loc_000578A5: ;
    esi = esi + 8;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, edi)) goto loc_000578DD; /* jae: above or equal (unsigned >=) */

loc_000578B4: ;
    if (CMP_BE(eax, ebx)) goto loc_000578CC; /* jbe: below or equal (unsigned <=) */

loc_000578B8: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_000578CC; /* jne: not equal / not zero */

loc_000578BD: ;
    if (CMP_NE(MEM16(eax + 2), 5)) goto loc_000578CC; /* jne: not equal / not zero */

loc_000578C4: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(edx, ecx)) goto loc_00057949; /* je: equal / zero */

loc_000578CC: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000578A0; /* je: equal / zero */

loc_000578D3: ;
    goto loc_000578DD;

loc_000578D5: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x28) = edx;

loc_000578DD: ;
    edx = ZX8(MEM8(eax + 1));
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + edx;

loc_000578E5: ;
    edx = MEM32(esp + 0x44);
    eax = eax + 8;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_00057860; /* jb: below (unsigned <) */

loc_000578FD: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx * 4 + 0x76F0E8);

loc_00057907: ;
    eax = eax - MEM32(ebp + 0x10);
    if (CMP_EQ(MEM16(ebx + 6), 0)) goto loc_00057973; /* je: equal / zero */

loc_00057911: ;
    eax = 0x3E7;
    MEM8(esp + 0x38) = 0xFF;
    goto loc_0005797A;

loc_0005791D: ;
    ecx = MEM32(esp + 0x28);
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_00057907;

loc_00057949: ;
    ecx = MEM32(esp + 0x28);
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = ecx << 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_00057907;

loc_00057973: ;
    SET_LO8(edx, MEM8(ebp + 0x24));
    MEM8(esp + 0x38) = LO8(edx);

loc_0005797A: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x30);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esp + edx * 4 + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_00057996: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000579A5: ;
    if (CMP_NE(LO16(edx), 0x36)) goto loc_00057A0E; /* jne: not equal / not zero */

loc_000579AB: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000579D5; /* jne: not equal / not zero */

loc_000579B2: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43960000);
    ecx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_000D7E40(); /* call 0x000D7E40 */

loc_000579C6: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000579D5: ;
    if (CMP_NE(LO8(ebx), 1)) goto loc_00059932; /* jne: not equal / not zero */

loc_000579DE: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    PUSH32(esp, 7);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x20) = esi;
    MEM8(esp + 0x24) = LO8(edx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000579FF: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057A0E: ;
    if (CMP_NE(LO16(edx), 0x30)) goto loc_00057AB0; /* jne: not equal / not zero */

loc_00057A18: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00057A20: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    if (CMP_A(eax, 3)) goto loc_00057A90; /* ja: above (unsigned >) */

loc_00057A29: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x599A4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00057A30u) goto loc_00057A30;
    if (_jt == 0x00057A50u) goto loc_00057A50;
    if (_jt == 0x00057A70u) goto loc_00057A70;
    if (_jt == 0x00057A90u) goto loc_00057A90;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00057A30: ;
    SET_LO8(eax, 4);
    ecx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    eax = esi;
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_00057A41: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057A50: ;
    SET_LO8(eax, 7);
    ecx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    eax = esi;
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_00057A61: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057A70: ;
    SET_LO8(eax, 0xA);
    ecx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    eax = esi;
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_00057A81: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057A90: ;
    SET_LO8(eax, 0xC);
    ecx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    eax = esi;
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_00057AA1: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057AB0: ;
    if (CMP_NE(LO16(edx), 0x46)) goto loc_00057AF1; /* jne: not equal / not zero */

loc_00057AB6: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0);
    eax = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00057AD9; /* je: equal / zero */

loc_00057AC1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_00057ACA: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057AD9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_00057AE2: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057AF1: ;
    if (CMP_NE(LO16(edx), 0x25)) goto loc_00057B32; /* jne: not equal / not zero */

loc_00057AF7: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00057B07; /* je: equal / zero */

loc_00057AFE: ;
    edx = SX8(LO8(ebx));
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    goto loc_00057B0F;

loc_00057B07: ;
    xmm7 = MEMF(0x76F7AC); /* movss */

loc_00057B0F: ;
    xmm6 = MEMF(0x76EDEC); /* movss */
    esi = 0; /* xor self */
    MEMF(0x76EDF0) = xmm7; /* movss */
    PUSH32(esp, 0); sub_000644E0(); /* call 0x000644E0 */

loc_00057B26: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057B32: ;
    if (CMP_NE(LO16(edx), 0x58)) goto loc_00057B7A; /* jne: not equal / not zero */

loc_00057B38: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_00057B4F; /* je: equal / zero */

loc_00057B41: ;
    eax = SX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = eax << 1;
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    goto loc_00057B57;

loc_00057B4F: ;
    xmm6 = MEMF(0x76F7B0); /* movss */

loc_00057B57: ;
    xmm7 = MEMF(0x76EDF0); /* movss */
    esi = 0; /* xor self */
    MEMF(0x76EDEC) = xmm6; /* movss */
    PUSH32(esp, 0); sub_000644E0(); /* call 0x000644E0 */

loc_00057B6E: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057B7A: ;
    eax = 0x3C;
    if (CMP_NE(LO16(edx), LO16(eax))) goto loc_00057CCC; /* jne: not equal / not zero */

loc_00057B88: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00057B90: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    SET_LO8(ebx, MEM8(ebx + 5));
    eax = eax << 0x10;
    eax = eax | ecx;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x44) = eax;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00057BC1; /* jne: not equal / not zero */

loc_00057BA8: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0029DC70(); /* call 0x0029DC70 */

loc_00057BB2: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057BC1: ;
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    edx = esi;
    if (CMP_NE(LO8(ebx), 1)) goto loc_00057C33; /* jne: not equal / not zero */

loc_00057BC8: ;
    eax = esp + 0x38;
    ecx = esp + 0x28;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_0029D8C0(); /* call 0x0029D8C0 */

loc_00057BDD: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00057BE9: ;
    eax = MEM32(esp + 0x38);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = 1;
    if (CMP_LE(eax & eax, 0)) goto loc_00059932; /* jle: less or equal (signed <=) */

loc_00057BFC: ;
    /* nop */

loc_00057C00: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + ebx * 4);
    if (TEST_Z(eax, eax)) goto loc_00057C1C; /* je: equal / zero */

loc_00057C0B: ;
    if (TEST_Z(MEM32(esp + 0x44), edi)) goto loc_00057C1C; /* je: equal / zero */

loc_00057C11: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00057C19: ;
    esp = esp + 4;

loc_00057C1C: ;
    eax = MEM32(esp + 0x38);
    edi = edi << 1;
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00057C00; /* jl: less (signed <) */

loc_00057C27: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057C33: ;
    eax = esp + 0x30;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_0029D8C0(); /* call 0x0029D8C0 */

loc_00057C48: ;
    edi = MEM32(esp + 0x38);
    if (TEST_Z(edi, edi)) goto loc_00059932; /* je: equal / zero */

loc_00057C54: ;
    eax = MEM32(esp + 0x30);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = 1;
    if (CMP_LE(eax & eax, 0)) goto loc_00059932; /* jle: less or equal (signed <=) */

loc_00057C6A: ;
    /* nop */

loc_00057C70: ;
    eax = MEM32(edi + ebx * 4);
    if (TEST_Z(eax, eax)) goto loc_00057CAD; /* je: equal / zero */

loc_00057C77: ;
    ecx = MEM32(esp + 0x28);
    if (TEST_Z(MEM32(esp + 0x44), ecx)) goto loc_00057CAD; /* je: equal / zero */

loc_00057C81: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00057C89: ;
    esp = esp + 4;
    if (CMP_NE(edi, 0x6BFF70)) goto loc_00057CAD; /* jne: not equal / not zero */

loc_00057C94: ;
    if (CMP_NE(ebx, 1)) goto loc_00057CAD; /* jne: not equal / not zero */

loc_00057C99: ;
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, 0xFF);
    SET_LO8(edx, 2);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_001769C0(); /* call 0x001769C0 */

loc_00057CAA: ;
    esp = esp + 4;

loc_00057CAD: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x30);
    edx = edx << 1;
    ebx++;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x28) = edx;
    if (CMP_L(ebx, eax)) goto loc_00057C70; /* jl: less (signed <) */

loc_00057CC0: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057CCC: ;
    if (CMP_NE(LO16(edx), 0x3D)) goto loc_00057D4A; /* jne: not equal / not zero */

loc_00057CD2: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00057CDA: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00057D37; /* jne: not equal / not zero */

loc_00057CE1: ;
    SET_LO8(edx, MEM8(ebx + 6));
    PUSH32(esp, 0); sub_002B3FB0(); /* call 0x002B3FB0 */

loc_00057CE9: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00059932; /* je: equal / zero */

loc_00057CF2: ;
    edi = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(edi + 0x209));
    SET_LO8(edx, LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(ecx, LO8(ecx) | 4);
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(edi + 0x209) = LO8(ecx);
    ecx = MEM32(0x84A5F8);
    MEM8(edi + 0x135) = LO8(edx);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 5);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_0029D800(); /* call 0x0029D800 */

loc_00057D25: ;
    MEM32(edi + 0x12C) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057D37: ;
    MEM8(esi + 0x135) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057D4A: ;
    if (CMP_NE(LO16(edx), 0x42)) goto loc_00057E32; /* jne: not equal / not zero */

loc_00057D54: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00057D6E; /* jne: not equal / not zero */

loc_00057D5B: ;
    MEM8(0x774B20) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057D6E: ;
    if (CMP_NE(LO8(ebx), 1)) goto loc_00057D86; /* jne: not equal / not zero */

loc_00057D73: ;
    MEM8(0x774B20) = 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057D86: ;
    if (CMP_NE(LO8(ebx), 3)) goto loc_00057D9E; /* jne: not equal / not zero */

loc_00057D8B: ;
    MEM8(0x774B20) = 2;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057D9E: ;
    if (CMP_NE(LO8(ebx), 4)) goto loc_00057DB6; /* jne: not equal / not zero */

loc_00057DA3: ;
    MEM8(0x774B20) = 5;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057DB6: ;
    if (CMP_NE(LO8(ebx), 5)) goto loc_00057DCE; /* jne: not equal / not zero */

loc_00057DBB: ;
    MEM8(0x774B20) = 6;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057DCE: ;
    if (CMP_NE(LO8(ebx), 6)) goto loc_00057DE6; /* jne: not equal / not zero */

loc_00057DD3: ;
    MEM8(0x774B20) = 7;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057DE6: ;
    if (CMP_NE(LO8(ebx), 7)) goto loc_00057DFE; /* jne: not equal / not zero */

loc_00057DEB: ;
    MEM8(0x774B20) = 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057DFE: ;
    if (CMP_NE(LO8(ebx), 8)) goto loc_00057E16; /* jne: not equal / not zero */

loc_00057E03: ;
    MEM8(0x774B20) = 9;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057E16: ;
    if (CMP_NE(LO8(ebx), 9)) goto loc_00059932; /* jne: not equal / not zero */

loc_00057E1F: ;
    MEM8(0x774B20) = 0xA;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057E32: ;
    if (CMP_NE(LO16(edx), 0x43)) goto loc_00057E9F; /* jne: not equal / not zero */

loc_00057E38: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00057E43: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    esi = MEM32(eax * 4 + 0x76E884);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    esi = esi + ecx;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = edx;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00057E77: ;
    ecx = (int32_t)MEMF(esi + 0x28); /* cvttss2si */
    edi = MEM32(ebp + 0x10);
    edx = (int32_t)MEMF(esi + 0x24); /* cvttss2si */
    esp = esp + 0x28;
    PUSH32(esp, ecx);
    eax = eax - edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015E950(); /* call 0x0015E950 */

loc_00057E90: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057E9F: ;
    if (CMP_NE(LO16(edx), 0x45)) goto loc_00057F02; /* jne: not equal / not zero */

loc_00057EA5: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00057EB0: ;
    eax = MEM32(0x7FA200);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x45);
    PUSH32(esp, 1);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00057EE3: ;
    esi = MEM32(ebp + 0x10);
    esp = esp + 0x28;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0015AA90(); /* call 0x0015AA90 */

loc_00057EF3: ;
    esp = esp + 0x20;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057F02: ;
    if (CMP_NE(LO16(edx), 0x49)) goto loc_00057F35; /* jne: not equal / not zero */

loc_00057F08: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00057F10: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (CMP_GE(LO8(eax), 3)) goto loc_00059932; /* jge: greater or equal (signed >=) */

loc_00057F1B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    edx = SX8(LO8(eax));
    MEM32(esi + edx * 4 + 0x52C) = ecx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057F35: ;
    if (CMP_NE(LO16(edx), 0x4B)) goto loc_00057F7C; /* jne: not equal / not zero */

loc_00057F3B: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00057F43: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 5));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx + 6));
    ecx = ecx << 8;
    PUSH32(esp, esi);
    eax = eax & 0xFF;
    eax = eax | ecx;
    eax = eax << 0x10;
    edx = edx & 0xFFFF;
    eax = eax | edx;
    PUSH32(esp, 0); sub_0029E490(); /* call 0x0029E490 */

loc_00057F6D: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00057F7C: ;
    if (CMP_NE(LO16(edx), 0x4A)) goto loc_000580D6; /* jne: not equal / not zero */

loc_00057F86: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00057FA2; /* je: equal / zero */

loc_00057F8F: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D58E0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00057F9F: ;
    esp = esp + 4;

loc_00057FA2: ;
    SET_LO8(eax, MEM8(ebx + 5));
    if (CMP_NE(LO8(eax), 3)) goto loc_0005805C; /* jne: not equal / not zero */

loc_00057FAD: ;
    ecx = MEM32(0x847010);
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(ecx + 0x1C);
    xmm1 = MEMF(edx + 4); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00057FF4; /* jne: not equal / not zero */

loc_00057FC2: ;
    xmm0 = MEMF(0x648E14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00057FD8; /* jnp: not parity */

loc_00057FD3: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_00057FD8: ;
    MEM8(edx + 9) = 0;
    eax = MEM32(ecx + 0x1C);
    SET_LO8(edx, MEM8(eax + 8));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00057FEA; /* jne: not equal / not zero */

loc_00057FE6: ;
    MEM8(eax + 8) = 1;

loc_00057FEA: ;
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_00058024;

loc_00057FF4: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0005800A; /* jnp: not parity */

loc_00058005: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_0005800A: ;
    MEM8(edx + 9) = 0;
    eax = MEM32(ecx + 0x1C);
    SET_LO8(edx, MEM8(eax + 8));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005801C; /* jne: not equal / not zero */

loc_00058018: ;
    MEM8(eax + 8) = 1;

loc_0005801C: ;
    xmm0 = MEMF(0x648D10); /* movss */

loc_00058024: ;
    edx = MEM32(ecx + 0x14);
    xmm1 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0005803A; /* jnp: not parity */

loc_00058035: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_0005803A: ;
    MEM8(edx + 9) = 0;
    ecx = MEM32(ecx + 0x14);
    SET_LO8(eax, MEM8(ecx + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_0005804C: ;
    MEM8(ecx + 8) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005805C: ;
    if (CMP_NE(LO8(eax), 7)) goto loc_00058090; /* jne: not equal / not zero */

loc_00058060: ;
    ebx = ZX16(MEM16(ebx + 6));
    SET_LO16(eax, ZX8(HI8(ebx)));
    ecx = ZX16(LO16(eax));
    edx = ebx;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    edx = edx & 0xFF;
    PUSH32(esp, 0); sub_00019A60(); /* call 0x00019A60 */

loc_00058084: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058090: ;
    if (CMP_NE(LO8(eax), 8)) goto loc_00059932; /* jne: not equal / not zero */

loc_00058098: ;
    ebx = ZX16(MEM16(ebx + 6));
    SET_LO16(edx, ZX8(HI8(ebx)));
    eax = ZX16(LO16(edx));
    PUSH32(esp, 0x40A00000);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, ecx);
    edx = ebx;
    edx = edx & 0xFF;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00015DD0(); /* call 0x00015DD0 */

loc_000580C7: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000580D6: ;
    if (CMP_NE(LO16(edx), 0x54)) goto loc_000580F6; /* jne: not equal / not zero */

loc_000580DC: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = MEM32(ebp + 0x14);
    SET_LO8(ecx, ~LO8(ecx));
    MEM8(edx + 0x76F0BC) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000580F6: ;
    if (CMP_NE(LO16(edx), 0x55)) goto loc_00058111; /* jne: not equal / not zero */

loc_000580FC: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    PUSH32(esp, 0); sub_00162B20(); /* call 0x00162B20 */

loc_00058105: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058111: ;
    if (CMP_NE(LO16(edx), 0x59)) goto loc_0005812A; /* jne: not equal / not zero */

loc_00058117: ;
    MEM8(0x7655FE) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005812A: ;
    if (CMP_NE(LO16(edx), 0x5A)) goto loc_00058209; /* jne: not equal / not zero */

loc_00058134: ;
    eax = MEM32(esi + 0x68);
    if (CMP_NE(eax, 0x53)) goto loc_00058187; /* jne: not equal / not zero */

loc_0005813C: ;
    eax = MEM32(0x84A5F8);
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_0005814C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x5D58D8);

loc_00058160: ;
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00058167: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x431C0000);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002DAA50(); /* call 0x002DAA50 */

loc_00058178: ;
    esp = esp + 0x24;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058187: ;
    if (CMP_NE(eax, 0x28)) goto loc_000581D7; /* jne: not equal / not zero */

loc_0005818C: ;
    eax = MEM32(0x84A5F8);
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_0005819C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x5D58D4);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_000581B7: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x43340000);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002DAA50(); /* call 0x002DAA50 */

loc_000581C8: ;
    esp = esp + 0x24;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000581D7: ;
    if (CMP_NE(eax, 0x21)) goto loc_00059932; /* jne: not equal / not zero */

loc_000581E0: ;
    eax = MEM32(0x84A5F8);
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_000581F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x5D58CC);
    goto loc_00058160;

loc_00058209: ;
    if (CMP_NE(LO16(edx), 0x71)) goto loc_00058265; /* jne: not equal / not zero */

loc_0005820F: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x568);
    MEM16(eax + 0x1D4) = 0;
    MEM8(ecx + 0x66) = 0;
    edx = MEM32(eax + 0x568);
    MEM8(eax + 0x135) = 0;
    MEM8(edx + 0x39) = 0;
    ecx = MEM32(eax + 0x200);
    ecx = ecx & 0xFEFFFFFFu;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(eax + 0x200) = ecx;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058252: ;
    MEM8(esi + 0x250) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058265: ;
    if (CMP_NE(LO16(edx), 0x37)) goto loc_00058322; /* jne: not equal / not zero */

loc_0005826F: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x37);
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    MEM8(esp + 0x40) = 0xFF;
    MEM8(esp + 0x41) = 0;
    MEM8(esp + 0x42) = 0;
    MEM8(esp + 0x43) = 0;
    MEM8(esp + 0x44) = 0x35;
    MEM8(esp + 0x45) = 0x46;
    MEM8(esp + 0x46) = 0xFF;
    MEM8(esp + 0x47) = 0xFF;
    MEM8(esp + 0x48) = 0xFF;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_000582BC: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(ecx, MEM8(ebx + 4));
    esp = esp + 0x28;
    eax = eax - edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005830D; /* jne: not equal / not zero */

loc_000582CB: ;
    SET_LO16(ecx, MEM16(ebx + 6));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    edx = SX16(LO16(ecx));
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_000582DC; /* jne: not equal / not zero */

loc_000582D7: ;
    edx = 0x7F;

loc_000582DC: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, eax);
    ecx = ecx + ecx * 2;
    eax = ZX8(MEM8(esp + ecx + 0x1D));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esp + ecx + 0x22));
    ecx = ZX8(MEM8(esp + ecx + 0x20));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000FCE00(); /* call 0x000FCE00 */

loc_000582FE: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005830D: ;
    MEM16(0x771BD0) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058322: ;
    if (CMP_NE(LO16(edx), 0x38)) goto loc_0005839C; /* jne: not equal / not zero */

loc_00058328: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00058348: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(ecx, MEM8(ebx + 4));
    esp = esp + 0x28;
    eax = eax - edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00058387; /* jne: not equal / not zero */

loc_00058357: ;
    SET_LO16(ecx, MEM16(ebx + 6));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    ecx = SX16(LO16(ecx));
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00058368; /* jne: not equal / not zero */

loc_00058363: ;
    ecx = 4;

loc_00058368: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000FCF30(); /* call 0x000FCF30 */

loc_00058378: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058387: ;
    MEM16(0x771BE0) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005839C: ;
    if (CMP_NE(LO16(edx), 0x5C)) goto loc_000587E6; /* jne: not equal / not zero */

loc_000583A6: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_000583B1: ;
    eax = MEM32(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(0x7F9F5C); /* movss */
    ecx = ecx + eax;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx * 4 + 0x76EA70);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x44) = edx;
    if (TEST_Z(edx, edx)) goto loc_000584B8; /* je: equal / zero */

loc_000583E3: ;
    ecx = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    eax = edx;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_AE(edx, ecx)) goto loc_000584B8; /* jae: above or equal (unsigned >=) */

loc_00058409: ;
    /* nop */

loc_00058410: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00058422; /* jne: not equal / not zero */

loc_00058417: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00058422; /* jne: not equal / not zero */

loc_0005841C: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_000584A0;

loc_00058422: ;
    if (CMP_BE(eax, ebx)) goto loc_0005844A; /* jbe: below or equal (unsigned <=) */

loc_00058426: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005844A; /* jne: not equal / not zero */

loc_0005842B: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005844A; /* jne: not equal / not zero */

loc_00058432: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_0005844A; /* jne: not equal / not zero */

loc_00058438: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x28))) goto loc_00058516; /* je: equal / zero */

loc_00058446: ;
    ecx = MEM32(esp + 0x4C);

loc_0005844A: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005849A; /* jne: not equal / not zero */

loc_00058451: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00058496; /* je: equal / zero */

loc_00058456: ;
    esi = esi + 8;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, ecx)) goto loc_0005849A; /* jae: above or equal (unsigned >=) */

loc_00058465: ;
    if (CMP_BE(eax, ebx)) goto loc_0005848D; /* jbe: below or equal (unsigned <=) */

loc_00058469: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005848D; /* jne: not equal / not zero */

loc_0005846E: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005848D; /* jne: not equal / not zero */

loc_00058475: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_0005848D; /* jne: not equal / not zero */

loc_0005847B: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x28))) goto loc_0005853C; /* je: equal / zero */

loc_00058489: ;
    ecx = MEM32(esp + 0x4C);

loc_0005848D: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00058451; /* je: equal / zero */

loc_00058494: ;
    goto loc_0005849A;

loc_00058496: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005849A: ;
    edx = ZX8(MEM8(eax + 1));
    edi = edi + edx;

loc_000584A0: ;
    edx = MEM32(esp + 0x44);
    eax = eax + 8;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, ecx)) goto loc_00058410; /* jb: below (unsigned <) */

loc_000584B8: ;
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ecx * 4 + 0x76F0E8);

loc_000584C2: ;
    edx = MEM32(esp + 0x44);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x30) = esi;
    if (TEST_Z(edx, edx)) goto loc_000585FF; /* je: equal / zero */

loc_000584D2: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx * 4 + 0x76EA70);
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    eax = eax + 0x20;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_AE(edx, ecx)) goto loc_000585FB; /* jae: above or equal (unsigned >=) */

loc_00058501: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00058565; /* jne: not equal / not zero */

loc_00058508: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00058565; /* jne: not equal / not zero */

loc_0005850D: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_000585E3;

loc_00058516: ;
    edi = edi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = edi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 8);
    goto loc_000584C2;

loc_0005853C: ;
    edi = edi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    ecx = edi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 8);
    goto loc_000584C2;

loc_00058565: ;
    if (CMP_BE(eax, ebx)) goto loc_0005858D; /* jbe: below or equal (unsigned <=) */

loc_00058569: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005858D; /* jne: not equal / not zero */

loc_0005856E: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005858D; /* jne: not equal / not zero */

loc_00058575: ;
    if (CMP_NE(MEM8(eax + 4), 2)) goto loc_0005858D; /* jne: not equal / not zero */

loc_0005857B: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x28))) goto loc_0005866A; /* je: equal / zero */

loc_00058589: ;
    ecx = MEM32(esp + 0x4C);

loc_0005858D: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000585DD; /* jne: not equal / not zero */

loc_00058594: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_000585D9; /* je: equal / zero */

loc_00058599: ;
    esi = esi + 8;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, ecx)) goto loc_000585DD; /* jae: above or equal (unsigned >=) */

loc_000585A8: ;
    if (CMP_BE(eax, ebx)) goto loc_000585D0; /* jbe: below or equal (unsigned <=) */

loc_000585AC: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_000585D0; /* jne: not equal / not zero */

loc_000585B1: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_000585D0; /* jne: not equal / not zero */

loc_000585B8: ;
    if (CMP_NE(MEM8(eax + 4), 2)) goto loc_000585D0; /* jne: not equal / not zero */

loc_000585BE: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x28))) goto loc_00058678; /* je: equal / zero */

loc_000585CC: ;
    ecx = MEM32(esp + 0x4C);

loc_000585D0: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00058594; /* je: equal / zero */

loc_000585D7: ;
    goto loc_000585DD;

loc_000585D9: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_000585DD: ;
    edx = ZX8(MEM8(eax + 1));
    edi = edi + edx;

loc_000585E3: ;
    edx = MEM32(esp + 0x44);
    eax = eax + 8;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, ecx)) goto loc_00058501; /* jb: below (unsigned <) */

loc_000585FB: ;
    esi = MEM32(esp + 0x30);

loc_000585FF: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx * 4 + 0x76F0E8);
    ecx = 0; /* xor self */

loc_0005860B: ;
    eax = eax - MEM32(ebp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_0005861A; /* jne: not equal / not zero */

loc_00058616: ;
    MEM32(esp + 0x38) = ecx;

loc_0005861A: ;
    edx = MEM32(esp + 0x44);
    if (TEST_Z(edx, edx)) goto loc_0005873D; /* je: equal / zero */

loc_00058626: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx * 4 + 0x76EA70);
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    eax = eax + 0x20;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_AE(edx, ecx)) goto loc_00058739; /* jae: above or equal (unsigned >=) */

loc_00058655: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000586A3; /* jne: not equal / not zero */

loc_0005865C: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_000586A3; /* jne: not equal / not zero */

loc_00058661: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_00058721;

loc_0005866A: ;
    ecx = eax;
    edi = edi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    goto loc_00058684;

loc_00058678: ;
    edi = edi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    ecx = eax;

loc_00058684: ;
    esi = MEM32(esp + 0x30);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + edi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005860B;

loc_000586A3: ;
    if (CMP_BE(eax, ebx)) goto loc_000586CB; /* jbe: below or equal (unsigned <=) */

loc_000586A7: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_000586CB; /* jne: not equal / not zero */

loc_000586AC: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_000586CB; /* jne: not equal / not zero */

loc_000586B3: ;
    if (CMP_NE(MEM8(eax + 4), 3)) goto loc_000586CB; /* jne: not equal / not zero */

loc_000586B9: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x28))) goto loc_00058785; /* je: equal / zero */

loc_000586C7: ;
    ecx = MEM32(esp + 0x4C);

loc_000586CB: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005871B; /* jne: not equal / not zero */

loc_000586D2: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00058717; /* je: equal / zero */

loc_000586D7: ;
    esi = esi + 8;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, ecx)) goto loc_0005871B; /* jae: above or equal (unsigned >=) */

loc_000586E6: ;
    if (CMP_BE(eax, ebx)) goto loc_0005870E; /* jbe: below or equal (unsigned <=) */

loc_000586EA: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005870E; /* jne: not equal / not zero */

loc_000586EF: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005870E; /* jne: not equal / not zero */

loc_000586F6: ;
    if (CMP_NE(MEM8(eax + 4), 3)) goto loc_0005870E; /* jne: not equal / not zero */

loc_000586FC: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x28))) goto loc_00058793; /* je: equal / zero */

loc_0005870A: ;
    ecx = MEM32(esp + 0x4C);

loc_0005870E: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000586D2; /* je: equal / zero */

loc_00058715: ;
    goto loc_0005871B;

loc_00058717: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005871B: ;
    edx = ZX8(MEM8(eax + 1));
    edi = edi + edx;

loc_00058721: ;
    edx = MEM32(esp + 0x44);
    eax = eax + 8;
    esi = eax;
    esi = esi - edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, ecx)) goto loc_00058655; /* jb: below (unsigned <) */

loc_00058739: ;
    esi = MEM32(esp + 0x30);

loc_0005873D: ;
    edx = MEM32(ebp + 0x14);
    edx = MEM32(edx * 4 + 0x76F0E8);
    ecx = 0; /* xor self */

loc_00058749: ;
    eax = esi;
    eax = eax - edx;
    if (TEST_NZ(ecx, ecx)) goto loc_00058753; /* jne: not equal / not zero */

loc_00058751: ;
    eax = 0; /* xor self */

loc_00058753: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_NE(ecx, 0x18)) goto loc_000587BB; /* jne: not equal / not zero */

loc_0005875E: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    esi = esi - eax;
    esi = esi - ecx;
    esi = esi - edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0016F390(); /* call 0x0016F390 */

loc_00058776: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058785: ;
    ecx = eax;
    edi = edi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    goto loc_0005879F;

loc_00058793: ;
    edi = edi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    ecx = eax;

loc_0005879F: ;
    esi = MEM32(esp + 0x30);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + edi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    edx = edx + eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    goto loc_00058749;

loc_000587BB: ;
    if (CMP_NE(ecx, 0x21)) goto loc_00059932; /* jne: not equal / not zero */

loc_000587C4: ;
    ecx = MEM32(esp + 0x38);
    edi = MEM32(ebp + 0x10);
    esi = esi - eax;
    esi = esi - ecx;
    esi = esi - edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00170FC0(); /* call 0x00170FC0 */

loc_000587D7: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000587E6: ;
    if (CMP_NE(LO16(edx), 0x62)) goto loc_00058802; /* jne: not equal / not zero */

loc_000587EC: ;
    edx = MEM32(0x8471A4);
    MEM8(edx + 3) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058802: ;
    if (CMP_NE(LO16(edx), 0x7C)) goto loc_00058821; /* jne: not equal / not zero */

loc_00058808: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(0x7655D9) = LO8(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058821: ;
    if (CMP_NE(LO16(edx), 0x84)) goto loc_00058842; /* jne: not equal / not zero */

loc_00058828: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(0x7655D8) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058842: ;
    if (CMP_NE(LO16(edx), 0x85)) goto loc_00058863; /* jne: not equal / not zero */

loc_00058849: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(0x7655D7) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058863: ;
    if (CMP_EQ(LO16(edx), 0x63)) goto loc_00059932; /* je: equal / zero */

loc_0005886D: ;
    if (CMP_NE(LO16(edx), 0x64)) goto loc_000588D9; /* jne: not equal / not zero */

loc_00058873: ;
    SET_LO8(eax, MEM8(0x68C321));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00059932; /* je: equal / zero */

loc_00058880: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000588C6; /* jne: not equal / not zero */

loc_00058887: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    edx = MEM32(ecx * 4 + 0x76E884);
    eax = eax + edx;
    ecx = eax + 0x28;
    edx = eax + 0x24;
    eax = eax + 0x2C;
    MEM32(0x849380) = eax;
    MEM8(0x771C38) = 1;
    MEM32(0x849378) = ecx;
    MEM32(0x84937C) = edx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000588C6: ;
    MEM8(0x771C38) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000588D9: ;
    if (CMP_EQ(LO16(edx), 0x66)) goto loc_00059932; /* je: equal / zero */

loc_000588E3: ;
    if (CMP_NE(LO16(edx), 0x67)) goto loc_00058914; /* jne: not equal / not zero */

loc_000588E9: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00058B7C; /* jne: not equal / not zero */

loc_000588F6: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00058903: ;
    PUSH32(esp, 0); sub_001F9CE0(); /* call 0x001F9CE0 */

loc_00058908: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058914: ;
    if (CMP_NE(LO16(edx), 0x73)) goto loc_00058945; /* jne: not equal / not zero */

loc_0005891A: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00058B7C; /* jne: not equal / not zero */

loc_00058927: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00058934: ;
    PUSH32(esp, 0); sub_001FC830(); /* call 0x001FC830 */

loc_00058939: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058945: ;
    if (CMP_NE(LO16(edx), 0x69)) goto loc_00058AA7; /* jne: not equal / not zero */

loc_0005894F: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058957: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0005898A; /* jne: not equal / not zero */

loc_0005895E: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005898A: ;
    if (CMP_NE(LO8(ebx), 1)) goto loc_000589AE; /* jne: not equal / not zero */

loc_0005898F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000589AE: ;
    if (CMP_NE(LO8(ebx), 2)) goto loc_000589D2; /* jne: not equal / not zero */

loc_000589B3: ;
    PUSH32(esp, 0x11);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_000589BC: ;
    esp = esp + 4;
    MEM8(esi + 0x1B1) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000589D2: ;
    if (CMP_NE(LO8(ebx), 3)) goto loc_00058A3F; /* jne: not equal / not zero */

loc_000589D7: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    eax = MEM32(0x84A5F8);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(eax + 0x568);
    SET_LO8(ecx, LO8(ecx) + 1);
    PUSH32(esp, 0);
    MEM8(eax + 0x250) = LO8(ecx);
    MEMF(eax + 0x110) = xmm0; /* movss */
    PUSH32(esp, esi);
    MEM16(edx + 0x24) = 0;
    PUSH32(esp, 0); sub_002E9BB0(); /* call 0x002E9BB0 */

loc_00058A06: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, 0x5D58C4);
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00058A15: ;
    MEM32(esi + 0x12C) = eax;
    SET_LO8(eax, MEM8(esi + 0x209));
    esp = esp + 0xC;
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x209) = LO8(eax);
    MEM8(esi + 0x135) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058A3F: ;
    if (CMP_NE(LO8(ebx), 4)) goto loc_00058A5F; /* jne: not equal / not zero */

loc_00058A44: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x568);
    MEM8(ecx + 0x23) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058A5F: ;
    if (CMP_NE(LO8(ebx), 5)) goto loc_00058A88; /* jne: not equal / not zero */

loc_00058A64: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30AE50);
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_00058A79: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058A88: ;
    if (CMP_NE(LO8(ebx), 6)) goto loc_00059932; /* jne: not equal / not zero */

loc_00058A91: ;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x66) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058AA7: ;
    if (CMP_NE(LO16(edx), 0x6A)) goto loc_00058AC9; /* jne: not equal / not zero */

loc_00058AAD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x7655E4) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058AC9: ;
    if (CMP_NE(LO16(edx), 0x7A)) goto loc_00058B00; /* jne: not equal / not zero */

loc_00058ACF: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM32(0x7655DC) = ecx;
    MEMF(0x7655E0) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058B00: ;
    if (CMP_EQ(LO16(edx), 0x6B)) goto loc_00059932; /* je: equal / zero */

loc_00058B0A: ;
    if (CMP_NE(LO16(edx), 0x6D)) goto loc_00058B2A; /* jne: not equal / not zero */

loc_00058B10: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(0x76F0B9) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058B2A: ;
    if (CMP_NE(LO16(edx), 0x74)) goto loc_00058B45; /* jne: not equal / not zero */

loc_00058B30: ;
    SET_LO8(edx, MEM8(ebx + 5));
    MEM8(0x7FA204) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058B45: ;
    if (CMP_NE(LO16(edx), 0x6F)) goto loc_00058B6D; /* jne: not equal / not zero */

loc_00058B4B: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058B53: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    SET_LO8(ecx, MEM8(ebx + 5));
    MEM8(eax + esi + 0x139) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058B6D: ;
    if (CMP_NE(LO16(edx), 0x70)) goto loc_00058BAD; /* jne: not equal / not zero */

loc_00058B73: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00058B8D; /* je: equal / zero */

loc_00058B7C: ;
    PUSH32(esp, 0); sub_000A5BA0(); /* call 0x000A5BA0 */

loc_00058B81: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058B8D: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00058B9A: ;
    MEM8(0x7655FD) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058BAD: ;
    if (CMP_NE(LO16(edx), 0x72)) goto loc_00058BDA; /* jne: not equal / not zero */

loc_00058BB3: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058BBB: ;
    edx = MEM32(esi + 0x74);
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x1D0) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058BDA: ;
    if (CMP_NE(LO16(edx), 0x78)) goto loc_00058C00; /* jne: not equal / not zero */

loc_00058BE0: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00058BED: ;
    MEM8(0x7655FC) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058C00: ;
    if (CMP_NE(LO16(edx), 0x79)) goto loc_00058C40; /* jne: not equal / not zero */

loc_00058C06: ;
    eax = MEM32(ebp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00058C11: ;
    ecx = 0; /* xor self */
    edi = edi | 0xFFFFFFFFu;
    MEM32(eax + 0xE0) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xE4) = edi;
    MEM32(eax + 0xE8) = edi;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058C40: ;
    if (CMP_NE(LO16(edx), 0x7B)) goto loc_00058C66; /* jne: not equal / not zero */

loc_00058C46: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) goto loc_00059932; /* jne: not equal / not zero */

loc_00058C53: ;
    MEM8(0x7655DA) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058C66: ;
    if (CMP_NE(LO16(edx), 0x7D)) goto loc_00058C92; /* jne: not equal / not zero */

loc_00058C6C: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058C74: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00058C7F: ;
    MEM8(esi + 0xA1) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058C92: ;
    if (CMP_NE(LO16(edx), 0x7E)) goto loc_00058CB5; /* jne: not equal / not zero */

loc_00058C98: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058CA0: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    MEM8(0x7FDC00) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058CB5: ;
    if (CMP_NE(LO16(edx), 0x7F)) goto loc_00058CCE; /* jne: not equal / not zero */

loc_00058CBB: ;
    MEM8(0x76F519) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058CCE: ;
    if (CMP_NE(LO16(edx), 0x80)) goto loc_00058CEA; /* jne: not equal / not zero */

loc_00058CD5: ;
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(0x7FA1FC) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058CEA: ;
    if (CMP_NE(LO16(edx), 0x81)) goto loc_00058D1D; /* jne: not equal / not zero */

loc_00058CF1: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    eax = eax ^ 1;
    PUSH32(esp, 0); sub_00318DD0(); /* call 0x00318DD0 */

loc_00058CFD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(0x7FFF98) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058D1D: ;
    if (CMP_NE(LO16(edx), 0x82)) goto loc_00058D49; /* jne: not equal / not zero */

loc_00058D24: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    (void)0; /* cmp LO8(ebx), 0x64 - flags set for next jcc */
    MEM8(0x7655D6) = LO8(ebx);
    if (CMP_BE(LO8(ebx), 0x64)) goto loc_00059932; /* jbe: below or equal (unsigned <=) */

loc_00058D36: ;
    MEM8(0x7655D6) = 0x64;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058D49: ;
    if (CMP_NE(LO16(edx), 0x83)) goto loc_00058D67; /* jne: not equal / not zero */

loc_00058D50: ;
    SET_LO16(edx, MEM16(ebx + 6));
    MEM16(0x7655D4) = LO16(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058D67: ;
    if (CMP_NE(LO16(edx), 0x86)) goto loc_00058D81; /* jne: not equal / not zero */

loc_00058D6E: ;
    MEM8(0x849480) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058D81: ;
    if (CMP_NE(LO16(edx), 0x87)) goto loc_00058D9B; /* jne: not equal / not zero */

loc_00058D88: ;
    MEM8(0x849480) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058D9B: ;
    if (CMP_NE(LO16(edx), 0x88)) goto loc_00058DF4; /* jne: not equal / not zero */

loc_00058DA2: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00058DB6: ;
    MEM32(eax + 0x1F8) = 2;
    ecx = MEM32(ecx + 0x568);
    eax = ZX8(MEM8(ecx + 0x97));
    edx = MEM32(ecx + 0xAC);
    eax = eax & 0xFFFFFF7Fu;
    if (TEST_Z(edx, edx)) goto loc_00058DE2; /* je: equal / zero */

loc_00058DDC: ;
    if (TEST_NZ(eax, eax)) goto loc_00058DE2; /* jne: not equal / not zero */

loc_00058DE0: ;
    eax = edx;

loc_00058DE2: ;
    MEM32(ecx + 0xA0) = eax;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058DF4: ;
    if (CMP_NE(LO16(edx), 0x89)) goto loc_00058E2F; /* jne: not equal / not zero */

loc_00058DFB: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00058E0F: ;
    edx = 0; /* xor self */
    MEM32(eax + 0x1F8) = edx;
    eax = MEM32(ecx + 0x568);
    MEM32(eax + 0xA0) = edx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058E2F: ;
    if (CMP_EQ(LO16(edx), 0x8A)) goto loc_000598FC; /* je: equal / zero */

loc_00058E3A: ;
    if (CMP_EQ(LO16(edx), 0x8B)) goto loc_000598FC; /* je: equal / zero */

loc_00058E45: ;
    if (CMP_NE(LO16(edx), 0x8C)) goto loc_00058E69; /* jne: not equal / not zero */

loc_00058E4C: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058E54: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    MEM8(esi + 0xCF) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058E69: ;
    if (CMP_NE(LO16(edx), 0x8D)) goto loc_00058EC9; /* jne: not equal / not zero */

loc_00058E70: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_00058E78: ;
    MEM8(esi + 0x136) = MEM8(esi + 0x136) & 0xF8;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    ecx = ecx - 0;
    SET_LO16(eax, MEM16(esi + 0x136));
    if ((ecx == 0)) goto loc_000597A3; /* je: equal / zero */

loc_00058E93: ;
    ecx--;
    if ((ecx == 0)) goto loc_00058EB3; /* je: equal / zero */

loc_00058E96: ;
    ecx--;
    if ((ecx != 0)) goto loc_00059932; /* jne: not equal / not zero */

loc_00058E9D: ;
    eax = eax | 2;
    MEM16(esi + 0x136) = LO16(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058EB3: ;
    eax = eax | 3;
    MEM16(esi + 0x136) = LO16(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058EC9: ;
    if (CMP_NE(LO16(edx), 0x90)) goto loc_00058F3A; /* jne: not equal / not zero */

loc_00058ED0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xC)) goto loc_00059932; /* jne: not equal / not zero */

loc_00058EDD: ;
    MEM8(0x84713C) = 1;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00058EE9: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    MEM32(0x68C48C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    MEM32(0x847144) = edx;
    SET_LO8(edx, 0xE1);
    MEM32(0x847140) = 0;
    MEM32(0x847148) = eax;
    MEM32(0x84714C) = ecx;
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00058F1F: ;
    MEM8(eax + 0xC2) = 0;
    SET_LO16(edx, MEM16(ebx + 6));
    MEM16(eax + 0x16) = LO16(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058F3A: ;
    if (CMP_NE(LO16(edx), 0x91)) goto loc_00058F7F; /* jne: not equal / not zero */

loc_00058F41: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    xmm1 = MEMF(0x649994); /* movss */
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, 0); sub_00064AD0(); /* call 0x00064AD0 */

loc_00058F70: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058F7F: ;
    if (CMP_NE(LO16(edx), 0x92)) goto loc_00059002; /* jne: not equal / not zero */

loc_00058F86: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00058FAC; /* jne: not equal / not zero */

loc_00058F8D: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00058FAC; /* jne: not equal / not zero */

loc_00058F94: ;
    if (CMP_NE(MEM16(ebx + 6), 0)) goto loc_00058FAC; /* jne: not equal / not zero */

loc_00058F9B: ;
    MEM8(0x847124) = LO8(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058FAC: ;
    xmm0 = MEMF(0x649508); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    edx = SX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x847128) = xmm1; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x84712C) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM8(0x847124) = 1;
    MEMF(0x847130) = xmm1; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059002: ;
    if (CMP_NE(LO16(edx), 0x93)) goto loc_00059076; /* jne: not equal / not zero */

loc_00059009: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00059063; /* je: equal / zero */

loc_00059010: ;
    eax = SX8(LO8(eax));
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ebx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    eax = eax + eax * 4;
    eax = eax << 1;
    MEM32(0x849704) = eax;
    eax = SX16(LO16(ebx));
    edx = edx << 1;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    eax = eax << 8;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(0x849700) = edx;
    edx = SX8(LO8(ecx));
    ecx = SX8(LO8(eax));
    MEM8(0x8496FC) = 1;
    MEM32(0x849708) = edx;
    MEM32(0x84970C) = ecx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059063: ;
    MEM8(0x8496FC) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059076: ;
    if (CMP_NE(LO16(edx), 0x94)) goto loc_00059096; /* jne: not equal / not zero */

loc_0005907D: ;
    (void)0; /* cmp MEM8(ebx + 4), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM8(ebx + 4), 1)) ? 1 : 0); /* sete */
    MEM8(0x847150) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059096: ;
    if (CMP_NE(LO16(edx), 0x95)) goto loc_0005912D; /* jne: not equal / not zero */

loc_000590A1: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_000590C0; /* je: equal / zero */

loc_000590AA: ;
    ecx = 0x28;
    /* nop */

loc_000590B0: ;
    if (CMP_EQ(MEM16(eax + 2), LO16(ecx))) goto loc_000590C9; /* je: equal / zero */

loc_000590B6: ;
    eax = MEM32(eax + 0xE0);
    if (TEST_NZ(eax, eax)) goto loc_000590B0; /* jne: not equal / not zero */

loc_000590C0: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000590C9: ;
    ecx = MEM32(eax + 0x54);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(eax + 0x58);
    if (TEST_Z(ecx, ecx)) goto loc_000590C0; /* je: equal / zero */

loc_000590D9: ;
    if (TEST_Z(eax, eax)) goto loc_000590C0; /* je: equal / zero */

loc_000590DD: ;
    SET_LO8(edx, MEM8(ebx + 4));
    ecx = MEM32(ecx + 0x14);
    esi = MEM32(eax + 0xC);
    (void)0; /* cmp LO8(edx), 1 - flags set for next jcc */
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 8);
    edx = 0x80;
    eax = ecx;
    if (CMP_NE(LO8(edx), 1)) goto loc_0005910F; /* jne: not equal / not zero */

loc_000590F8: ;
    ecx = ecx & 7;
    eax = eax >> 3;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(esi + eax) = MEM8(esi + eax) | LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005910F: ;
    ecx = ecx & 7;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005912D: ;
    if (CMP_NE(LO16(edx), 0x96)) goto loc_000591A7; /* jne: not equal / not zero */

loc_00059134: ;
    ecx = MEM32(0x76FE00);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx + 4);
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    (void)0; /* cmp MEM8(ebx + 4), 1 - flags set for next jcc */
    ecx = MEM32(eax + 8);
    if (CMP_NE(MEM8(ebx + 4), 1)) goto loc_00059181; /* jne: not equal / not zero */

loc_00059153: ;
    edx = MEM32(0x76FE08);
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
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059181: ;
    eax = MEM32(0x76FE08);
    esi = MEM32(eax + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    eax = eax >> 3;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000591A7: ;
    if (CMP_NE(LO16(edx), 0x97)) goto loc_0005923F; /* jne: not equal / not zero */

loc_000591B2: ;
    (void)0; /* cmp MEM8(ebx + 4), 1 - flags set for next jcc */
    eax = MEM32(0x847154);
    if (CMP_NE(MEM8(ebx + 4), 1)) goto loc_00059218; /* jne: not equal / not zero */

loc_000591BD: ;
    if (TEST_Z(eax, eax)) goto loc_000591D4; /* je: equal / zero */

loc_000591C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C08B0(); /* call 0x001C08B0 */

loc_000591C7: ;
    esp = esp + 4;
    MEM32(0x847154) = 0;

loc_000591D4: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000591F4; /* jbe: below or equal (unsigned <=) */

loc_000591E4: ;
    xmm0 = xmm0 * MEMF(0x649994); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_000591FA;

loc_000591F4: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_000591FA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001BDCF0(); /* call 0x001BDCF0 */

loc_00059204: ;
    MEM32(0x847154) = eax;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059218: ;
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00059220: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C08B0(); /* call 0x001C08B0 */

loc_00059226: ;
    esp = esp + 4;
    MEM32(0x847154) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005923F: ;
    if (CMP_NE(LO16(edx), 0x9C)) goto loc_000593F9; /* jne: not equal / not zero */

loc_0005924A: ;
    (void)0; /* cmp MEM8(ebx + 4), 1 - flags set for next jcc */
    eax = MEM32(0x76F508);
    if (CMP_NE(MEM8(ebx + 4), 1)) goto loc_000593D2; /* jne: not equal / not zero */

loc_00059259: ;
    if (TEST_Z(eax, eax)) goto loc_00059270; /* je: equal / zero */

loc_0005925D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001BCD30(); /* call 0x001BCD30 */

loc_00059263: ;
    esp = esp + 4;
    MEM32(0x76F508) = 0;

loc_00059270: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x18)) goto loc_00059288; /* jne: not equal / not zero */

loc_00059279: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_0005927E: ;
    esi = 0x5D590C;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_00059288: ;
    eax = MEM32(0x8493BC);
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_00059295: ;
    SET_LO8(edx, MEM8(eax + 0x190));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00059932; /* je: equal / zero */

loc_000592A8: ;
    edx = esp + 0x9B;
    PUSH32(esp, edx);
    eax = esp + 0x9E;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_0012BA90(); /* call 0x0012BA90 */

loc_000592C9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x18);
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACF8); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(0x6492EC); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACF4); /* movss */
    edx = esp + 0x80;
    PUSH32(esp, edx);
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACF0); /* movss */
    PUSH32(esp, 0x41700000);
    MEM8(esp + 0x88) = 0;
    MEM8(esp + 0x89) = 0;
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEM8(esp + 0xAC) = 0x80;
    MEM8(esp + 0xAD) = 0x80;
    MEM8(esp + 0xAE) = 0x64;
    MEM8(esp + 0xAF) = 0x64;
    MEM8(esp + 0xB0) = 0x96;
    MEM8(esp + 0xB1) = 0x96;
    MEMF(esp + 0xC0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001BBEA0(); /* call 0x001BBEA0 */

loc_000593BE: ;
    MEM32(0x76F508) = eax;
    esp = esp + 0x18;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000593D2: ;
    if (TEST_Z(eax, eax)) goto loc_00059932; /* je: equal / zero */

loc_000593DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001BCD30(); /* call 0x001BCD30 */

loc_000593E0: ;
    esp = esp + 4;
    MEM32(0x76F508) = 0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000593F9: ;
    if (CMP_NE(LO16(edx), 0x98)) goto loc_000594F0; /* jne: not equal / not zero */

loc_00059404: ;
    eax = MEM32(esi + 0x68);
    if (CMP_NE(eax, 0xB5)) goto loc_00059497; /* jne: not equal / not zero */

loc_00059412: ;
    xmm0 = MEMF(0x64B100); /* movss */
    eax = MEM32(ebp + 0x24);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649348); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649124); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x410B3333);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649824); /* movss */
    PUSH32(esp, 0x5D58C4);

loc_0005945B: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    eax = esi;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00059476: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_00146ED0(); /* call 0x00146ED0 */

loc_00059488: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059497: ;
    if (CMP_NE(eax, 0x8B)) goto loc_00059932; /* jne: not equal / not zero */

loc_000594A2: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    ecx = MEM32(ebp + 0x24);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649B78); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x4039999A);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, 0x5D58BC);
    goto loc_0005945B;

loc_000594F0: ;
    if (CMP_NE(LO16(edx), 0x9E)) goto loc_0005953F; /* jne: not equal / not zero */

loc_000594F7: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    (void)0; /* cmp MEM32(0x7FA1F8), 0x40 - flags set for next jcc */
    edx = SX8(LO8(ebx));
    MEM32(0x8496DC) = edx;
    if (CMP_NE(MEM32(0x7FA1F8), 0x40)) goto loc_00059932; /* jne: not equal / not zero */

loc_00059510: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00059932; /* je: equal / zero */

loc_00059518: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00059521: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_001C24A0(); /* call 0x001C24A0 */

loc_00059529: ;
    MEM32(0x847120) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005953F: ;
    if (CMP_NE(LO16(edx), 0x99)) goto loc_0005970D; /* jne: not equal / not zero */

loc_0005954A: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_0005956B; /* jle: less or equal (signed <=) */

loc_0005955C: ;
    eax = SX8(LO8(ebx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */

loc_0005956B: ;
    eax = MEM32(ebp + 0x20);
    xmm2 = MEMF(0x648F08); /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm4 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CDC); /* mulss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    xmm1 = MEMF(0x648FD8); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CF0); /* mulss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm2 = xmm2 * MEMF(0x648EB8); /* mulss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    xmm4 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x68) = xmm4; /* movss */
    xmm4 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x649ED4); /* movss */
    esi = 2;
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(0x6B7A20) = xmm3; /* movss */
    MEMF(0x6B7A24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_000596AF: ;
    PUSH32(esp, 0x1030002);
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_000596B9: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_000596FE: ;
    esp = esp + 0x30;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005970D: ;
    if (CMP_NE(LO16(edx), 0x9A)) goto loc_0005972B; /* jne: not equal / not zero */

loc_00059714: ;
    edi = MEM32(0x849430);
    PUSH32(esp, 0); sub_00137780(); /* call 0x00137780 */

loc_0005971F: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005972B: ;
    if (CMP_NE(LO16(edx), 0x9D)) goto loc_0005976F; /* jne: not equal / not zero */

loc_00059732: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_0005973A: ;
    (void)0; /* cmp MEM8(ebx + 4), 1 - flags set for next jcc */
    PUSH32(esp, 0x5D58AC);
    eax = esi;
    if (CMP_NE(MEM8(ebx + 4), 1)) goto loc_0005975B; /* jne: not equal / not zero */

loc_00059747: ;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0005974C: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005975B: ;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00059760: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005976F: ;
    if (CMP_NE(LO16(edx), 0x9F)) goto loc_000597B9; /* jne: not equal / not zero */

loc_00059776: ;
    if (TEST_Z(esi, esi)) goto loc_00059932; /* je: equal / zero */

loc_0005977E: ;
    MEM8(esi + 0x136) = MEM8(esi + 0x136) & 0xF8;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    ecx = ecx - 0;
    SET_LO16(eax, MEM16(esi + 0x136));
    if ((ecx == 0)) goto loc_00058EB3; /* je: equal / zero */

loc_00059799: ;
    ecx--;
    if ((ecx == 0)) goto loc_000597A6; /* je: equal / zero */

loc_0005979C: ;
    ecx--;
    if ((ecx != 0)) goto loc_00059932; /* jne: not equal / not zero */

loc_000597A3: ;
    eax = eax | 1;

loc_000597A6: ;
    MEM16(esi + 0x136) = LO16(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000597B9: ;
    if (CMP_NE(LO16(edx), 0xA0)) goto loc_00059801; /* jne: not equal / not zero */

loc_000597C0: ;
    eax = MEM32(ebp + 0x20);
    xmm0 = MEMF(eax); /* movss */
    edx = MEM32(ebp + 0x24);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00131BF0(); /* call 0x00131BF0 */

loc_000597F2: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059801: ;
    if (CMP_NE(LO16(edx), 0xA1)) goto loc_00059825; /* jne: not equal / not zero */

loc_00059808: ;
    PUSH32(esp, 0x77);
    PUSH32(esp, 0);
    eax = 0x2A;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00059816: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059825: ;
    if (CMP_NE(LO16(edx), 0xA2)) goto loc_00059861; /* jne: not equal / not zero */

loc_0005982C: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059932; /* jne: not equal / not zero */

loc_00059837: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x5D589C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_00059852: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059861: ;
    if (CMP_NE(LO16(edx), 0xA3)) goto loc_00059883; /* jne: not equal / not zero */

loc_00059868: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_0005986D: ;
    esi = 0x5D5888;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_00059877: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059883: ;
    if (CMP_NE(LO16(edx), 0xA6)) goto loc_000598DB; /* jne: not equal / not zero */

loc_0005988A: ;
    PUSH32(esp, 0); sub_0012B260(); /* call 0x0012B260 */

loc_0005988F: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    eax--;
    if ((eax == 0)) goto loc_000598C5; /* je: equal / zero */

loc_00059896: ;
    eax--;
    if ((eax == 0)) goto loc_000598AF; /* je: equal / zero */

loc_00059899: ;
    esi = 0x5D51B8;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_000598A3: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000598AF: ;
    esi = 0x5D51A4;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_000598B9: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000598C5: ;
    esi = 0x5D51C4;
    PUSH32(esp, 0); sub_0012B1D0(); /* call 0x0012B1D0 */

loc_000598CF: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000598DB: ;
    if (CMP_NE(LO16(edx), 0xA7)) goto loc_000590C0; /* jne: not equal / not zero */

loc_000598E6: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 4);
    MEM32(0x76FFD8) = ecx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000598FC: ;
    PUSH32(esp, esi);
    edi = esp + 0x74;
    PUSH32(esp, 0); sub_0007CB20(); /* call 0x0007CB20 */

loc_00059906: ;
    edi = eax;
    esp = esp + 4;
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00059932; /* jle: less or equal (signed <=) */

loc_00059911: ;
    ecx = MEM32(esp + esi * 4 + 0x70);
    edx = ZX16(MEM16(ecx + 2));
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    if (CMP_NE(eax, edx)) goto loc_0005992D; /* jne: not equal / not zero */

loc_00059921: ;
    (void)0; /* cmp MEM16(ebx + 2), 0x8A - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM16(ebx + 2), 0x8A)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x20) = LO8(edx);

loc_0005992D: ;
    esi++;
    if (CMP_L(esi, edi)) goto loc_00059911; /* jl: less (signed <) */

loc_00059932: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000599C0
 * Original: 0x000599C0 - 0x0005CB92 (12754 bytes, 3918 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000599C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000599C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x274;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(ebx));
    if (CMP_EQ(LO8(eax), 0xB)) goto loc_0005C9C5; /* je: equal / zero */

loc_000599E7: ;
    if (CMP_EQ(LO8(eax), 0x13)) goto loc_0005C9C5; /* je: equal / zero */

loc_000599EF: ;
    if (CMP_NE(LO8(eax), 0x11)) goto loc_00059A2C; /* jne: not equal / not zero */

loc_000599F3: ;
    SET_LO8(eax, MEM8(ebx + 4));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1E);
    edi = edi + esi;
    ecx = MEM32(edi * 4 + 0x76EE38);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00059A1C; /* je: equal / zero */

loc_00059A0A: ;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM8(eax + ecx) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059A1C: ;
    MEM8(eax + ecx) = 0xFF;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059A2C: ;
    if (CMP_NE(LO8(eax), 5)) goto loc_0005C9BC; /* jne: not equal / not zero */

loc_00059A34: ;
    SET_LO16(eax, MEM16(ebx + 2));
    if (CMP_NE(LO16(eax), 0x11)) goto loc_00059D0A; /* jne: not equal / not zero */

loc_00059A42: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x2C)) goto loc_00059B83; /* jne: not equal / not zero */

loc_00059A4F: ;
    eax = MEM32(ebp + 0x20);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(0x64AAE8); /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C8); /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A96C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x6497D4); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    esi = esp + 0xB4;
    MEM32(esp + 0xC8) = 0x14;
    MEM32(esp + 0xD4) = 0x105;
    MEM8(esp + 0xE8) = 0;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_00059B74: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059B83: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(esp + 0x50) = 0xFF;
    MEM8(esp + 0x51) = 0xFF;
    MEM8(esp + 0x52) = 0xFF;
    MEM8(esp + 0x53) = 0;
    MEM8(esp + 0x54) = 0xFF;
    MEM8(esp + 0x55) = 0xFF;
    MEM8(esp + 0x56) = 0xFF;
    MEM8(esp + 0x57) = 0xFF;
    MEM8(esp + 0x58) = 0xFF;
    MEM8(esp + 0x59) = 0;
    MEM8(esp + 0x5A) = 0xAB;
    MEM8(esp + 0x5B) = 0xFF;
    MEM8(esp + 0x5C) = 0xFF;
    MEM8(esp + 0x5D) = 0xFF;
    MEM8(esp + 0x5E) = 0xFF;
    MEM8(esp + 0x5F) = 0xFF;
    MEM8(esp + 0x60) = 0xFF;
    MEM8(esp + 0x61) = 0xFF;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00059BF9: ;
    eax = eax - MEM32(ebp + 0x14);
    MEM32(esp + 0x3C) = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp + 0x28;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_00059C0E: ;
    SET_LO16(eax, MEM16(ebx + 6));
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_00059C1E; /* jne: not equal / not zero */

loc_00059C17: ;
    esi = 0x1000;
    goto loc_00059C2C;

loc_00059C1E: ;
    (void)0; /* cmp LO16(eax), 0xC8 - flags set for next jcc */
    esi = SX16(LO16(eax));
    if (CMP_G(LO16(eax), 0xC8)) goto loc_00059C2C; /* jg: greater (signed >) */

loc_00059C27: ;
    esi = 0xC8;

loc_00059C2C: ;
    SET_LO8(ebx, MEM8(ebx + 5));
    if (CMP_L(LO8(ebx), 3)) goto loc_00059C38; /* jl: less (signed <) */

loc_00059C34: ;
    ecx = 0; /* xor self */
    goto loc_00059C3B;

loc_00059C38: ;
    ecx = SX8(LO8(ebx));

loc_00059C3B: ;
    eax = esi + esi * 4;
    eax = eax << 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFFF;
    eax = eax + edx;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xFF);
    eax = (uint32_t)((int32_t)eax >> 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    PUSH32(esp, edx);
    esi = (uint32_t)((int32_t)esi >> 0xB);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    PUSH32(esp, 1);
    ecx = ecx + ecx * 2;
    ecx = ecx << 1;
    SET_LO8(eax, MEM8(esp + ecx + 0xBD));
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esp + ecx + 0xC0));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + ecx + 0xC3));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esp + ecx + 0xC6));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + ecx + 0xC9));
    ecx = ZX8(MEM8(esp + ecx + 0xC8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax >> 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DCB80(); /* call 0x000DCB80 */

loc_00059CF8: ;
    esp = esp + 0xC0;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059D0A: ;
    if (CMP_EQ(LO16(eax), 0xA)) goto loc_0005CB86; /* je: equal / zero */

loc_00059D14: ;
    if (CMP_NE(LO16(eax), 0xB)) goto loc_00059D90; /* jne: not equal / not zero */

loc_00059D1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00059D36: ;
    edx = MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(ebx + 4));
    esp = esp + 0x28;
    eax = eax - edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_00059D49: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x800);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x4B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0); sub_00179460(); /* call 0x00179460 */

loc_00059D81: ;
    esp = esp + 0x3C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059D90: ;
    if (CMP_EQ(LO16(eax), 0xC)) goto loc_0005CB86; /* je: equal / zero */

loc_00059D9A: ;
    if (CMP_NE(LO16(eax), 0x19)) goto loc_00059EBE; /* jne: not equal / not zero */

loc_00059DA4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_00059DC0: ;
    edx = MEM32(ebp + 0x14);
    ecx = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp + 0x28;
    ecx = ecx - edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059E17; /* jne: not equal / not zero */

loc_00059DD1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    if (TEST_NZ(edx, edx)) goto loc_00059DDE; /* jne: not equal / not zero */

loc_00059DD9: ;
    edx = 0xC;

loc_00059DDE: ;
    esi = MEM32(ebp + 0x24);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    esi = (int32_t)MEMF(ecx + 8); /* cvttss2si */
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(ecx + 4); /* cvttss2si */
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(ecx); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0017CC60(); /* call 0x0017CC60 */

loc_00059E08: ;
    esp = esp + 0x20;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059E17: ;
    SET_LO8(ebx, MEM8(ebx + 5));
    if (CMP_NE(LO8(ebx), 1)) goto loc_00059EA4; /* jne: not equal / not zero */

loc_00059E23: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E2A: ;
    esi = 1;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E34: ;
    esi = 2;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E3E: ;
    esi = 3;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E48: ;
    esi = 4;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E52: ;
    esi = 5;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E5C: ;
    esi = 0x1E;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E66: ;
    esi = 0x1F;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E70: ;
    esi = 0x20;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E7A: ;
    esi = 0x21;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E84: ;
    esi = 0x22;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E8E: ;
    esi = 0x23;
    PUSH32(esp, 0); sub_0017D950(); /* call 0x0017D950 */

loc_00059E98: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059EA4: ;
    if (CMP_NE(LO8(ebx), 2)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_00059EAD: ;
    PUSH32(esp, 0); sub_0017D980(); /* call 0x0017D980 */

loc_00059EB2: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059EBE: ;
    if (CMP_NE(LO16(eax), 0x1A)) goto loc_0005A068; /* jne: not equal / not zero */

loc_00059EC8: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    eax--;
    if ((eax == 0)) goto loc_00059FE0; /* je: equal / zero */

loc_00059ED3: ;
    SET_LO8(eax, MEM8(ebx + 5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00059EEA; /* jne: not equal / not zero */

loc_00059EE2: ;
    MEM32(esp + 0x20) = 0x5D5870;

loc_00059EEA: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    ecx = ecx + esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    eax = MEM32(ecx * 4 + 0x76E890);
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax);
    eax = MEM32(edi * 4 + 0x76E884);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    esi = esi + eax;
    ecx = esp + 0x28;
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    xmm2 = MEMF(esi); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    MEMF(esp + 0xB0) = xmm2; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_00059F72: ;
    eax = esp + 0x34;
    esp = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00059F80: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0x24);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x40);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    ecx = ebx;
    PUSH32(esp, 0x457A0000);
    PUSH32(esp, ecx);
    eax = esp + 0x80;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000BF3B0(); /* call 0x000BF3B0 */

loc_00059FD1: ;
    esp = esp + 0x30;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00059FE0: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    edx = edx + esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    eax = MEM32(edx * 4 + 0x76E890);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi * 4 + 0x76E884);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ebp + 0x24);
    MEMF(esp + 0x60) = xmm0; /* movss */
    esi = esi + ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    ecx = esp + 0x60;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00165C50(); /* call 0x00165C50 */

loc_0005A059: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A068: ;
    if (CMP_NE(LO16(eax), 0x1C)) goto loc_0005A0DE; /* jne: not equal / not zero */

loc_0005A06E: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005A079: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0005A090; /* je: equal / zero */

loc_0005A082: ;
    eax--;
    if ((eax != 0)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005A089: ;
    PUSH32(esp, 0x5D5858);
    goto loc_0005A095;

loc_0005A090: ;
    PUSH32(esp, 0x5D5864);

loc_0005A095: ;
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0005A09C: ;
    eax = MEM32(ebp + 0x24);
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5A02CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x457A0000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000BEB70(); /* call 0x000BEB70 */

loc_0005A0CF: ;
    esp = esp + 0x40;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A0DE: ;
    if (CMP_NE(LO16(eax), 0x1B)) goto loc_0005A314; /* jne: not equal / not zero */

loc_0005A0E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005A104: ;
    ecx = MEM32(ebp + 0x14);
    edi = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp + 0x28;
    edi = edi - ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005A119: ;
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    PUSH32(esp, ecx);
    esi = 0x5D5168;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001DD550(); /* call 0x001DD550 */

loc_0005A137: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005A142: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    if (CMP_A(eax, 5)) goto loc_0005CB86; /* ja: above (unsigned >) */

loc_0005A14F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5CB94); /* switch: 74 entries, 70 targets */
    if (_jt == 0x0005A156u) goto loc_0005A156;
    if (_jt == 0x0005A177u) goto loc_0005A177;
    if (_jt == 0x0005A188u) goto loc_0005A188;
    if (_jt == 0x0005A2B5u) goto loc_0005A2B5;
    if (_jt == 0x0005A2D7u) goto loc_0005A2D7;
    if (_jt == 0x0005A2F9u) goto loc_0005A2F9;
    if (_jt == 0x0005A642u) goto loc_0005A642;
    if (_jt == 0x0005A661u) goto loc_0005A661;
    if (_jt == 0x0005A6C6u) goto loc_0005A6C6;
    if (_jt == 0x0005A851u) goto loc_0005A851;
    if (_jt == 0x0005A87Cu) goto loc_0005A87C;
    if (_jt == 0x0005A8A7u) goto loc_0005A8A7;
    if (_jt == 0x0005A8B6u) goto loc_0005A8B6;
    if (_jt == 0x0005A8E1u) goto loc_0005A8E1;
    if (_jt == 0x0005A8FCu) goto loc_0005A8FC;
    if (_jt == 0x0005A91Au) goto loc_0005A91A;
    if (_jt == 0x0005A979u) goto loc_0005A979;
    if (_jt == 0x0005AA18u) goto loc_0005AA18;
    if (_jt == 0x0005AA3Fu) goto loc_0005AA3F;
    if (_jt == 0x0005AAA3u) goto loc_0005AAA3;
    if (_jt == 0x0005AABEu) goto loc_0005AABE;
    if (_jt == 0x0005AAF5u) goto loc_0005AAF5;
    if (_jt == 0x0005AB5Fu) goto loc_0005AB5F;
    if (_jt == 0x0005AB8Bu) goto loc_0005AB8B;
    if (_jt == 0x0005ABD2u) goto loc_0005ABD2;
    if (_jt == 0x0005AC17u) goto loc_0005AC17;
    if (_jt == 0x0005AC41u) goto loc_0005AC41;
    if (_jt == 0x0005AC61u) goto loc_0005AC61;
    if (_jt == 0x0005ACA6u) goto loc_0005ACA6;
    if (_jt == 0x0005ACDDu) goto loc_0005ACDD;
    if (_jt == 0x0005ACFAu) goto loc_0005ACFA;
    if (_jt == 0x0005AE12u) goto loc_0005AE12;
    if (_jt == 0x0005AE8Eu) goto loc_0005AE8E;
    if (_jt == 0x0005AEDAu) goto loc_0005AEDA;
    if (_jt == 0x0005AF41u) goto loc_0005AF41;
    if (_jt == 0x0005B658u) goto loc_0005B658;
    if (_jt == 0x0005B6CEu) goto loc_0005B6CE;
    if (_jt == 0x0005B6DFu) goto loc_0005B6DF;
    if (_jt == 0x0005B707u) goto loc_0005B707;
    if (_jt == 0x0005B721u) goto loc_0005B721;
    if (_jt == 0x0005B741u) goto loc_0005B741;
    if (_jt == 0x0005B75Bu) goto loc_0005B75B;
    if (_jt == 0x0005B774u) goto loc_0005B774;
    if (_jt == 0x0005B792u) goto loc_0005B792;
    if (_jt == 0x0005B846u) goto loc_0005B846;
    if (_jt == 0x0005B898u) goto loc_0005B898;
    if (_jt == 0x0005B8B3u) goto loc_0005B8B3;
    if (_jt == 0x0005B935u) goto loc_0005B935;
    if (_jt == 0x0005B954u) goto loc_0005B954;
    if (_jt == 0x0005B970u) goto loc_0005B970;
    if (_jt == 0x0005B9E2u) goto loc_0005B9E2;
    if (_jt == 0x0005BA04u) goto loc_0005BA04;
    if (_jt == 0x0005BCEFu) goto loc_0005BCEF;
    if (_jt == 0x0005BD49u) goto loc_0005BD49;
    if (_jt == 0x0005BD78u) goto loc_0005BD78;
    if (_jt == 0x0005BD8Eu) goto loc_0005BD8E;
    if (_jt == 0x0005BE05u) goto loc_0005BE05;
    if (_jt == 0x0005BEBFu) goto loc_0005BEBF;
    if (_jt == 0x0005BEE6u) goto loc_0005BEE6;
    if (_jt == 0x0005BF2Fu) goto loc_0005BF2F;
    if (_jt == 0x0005BFDDu) goto loc_0005BFDD;
    if (_jt == 0x0005C1B9u) goto loc_0005C1B9;
    if (_jt == 0x0005C219u) goto loc_0005C219;
    if (_jt == 0x0005C244u) goto loc_0005C244;
    if (_jt == 0x0005C267u) goto loc_0005C267;
    if (_jt == 0x0005C2A0u) goto loc_0005C2A0;
    if (_jt == 0x0005C2BCu) goto loc_0005C2BC;
    if (_jt == 0x0005C2D8u) goto loc_0005C2D8;
    if (_jt == 0x0005C2E9u) goto loc_0005C2E9;
    if (_jt == 0x0005CB86u) goto loc_0005CB86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005A156: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(ebp + 0x24));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DD7B0(); /* call 0x000DD7B0 */

loc_0005A168: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A177: ;
    PUSH32(esp, 0); sub_0015FA90(); /* call 0x0015FA90 */

loc_0005A17C: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A188: ;
    eax = MEM32(ebp + 0x18);
    ebx = ZX8(MEM8(eax + 0x175));
    xmm4 = MEMF(eax + 0x78); /* movss */
    xmm5 = MEMF(eax + 0x7C); /* movss */
    xmm6 = MEMF(eax + 0x80); /* movss */
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_0005A1AB: ;
    xmm3 = xmm0; /* movaps */
    SET_LO8(eax, LO8(ebx));
    MEMF(esp + 0x20) = xmm3; /* movss */
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_0005A1BB: ;
    ecx = MEM32(ebp + 0x24);
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, 6);
    eax = (int32_t)xmm4; /* cvttss2si */
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xC8);
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649240); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    edx = (int32_t)xmm4; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0xB00);
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    ecx = (int32_t)xmm3; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = (int32_t)xmm6; /* cvttss2si */
    ebx = (int32_t)xmm5; /* cvttss2si */
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, esi);
    edx = ebx + 0x1DB;
    eax = eax + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x32;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_000DE260(); /* call 0x000DE260 */

loc_0005A23E: ;
    eax = MEM32(ebp + 0x24);
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(0x6498FC); /* mulss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, 7);
    PUSH32(esp, 6);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xC8);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * MEMF(0x64A588); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x90); /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x800);
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ebx + 0x1DC;
    eax = eax + 0xFFFFFFE8u;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0x32;
    PUSH32(esp, 0); sub_000DE260(); /* call 0x000DE260 */

loc_0005A2A6: ;
    esp = esp + 0x60;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A2B5: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00175160(); /* call 0x00175160 */

loc_0005A2C8: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A2D7: ;
    edx = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00175160(); /* call 0x00175160 */

loc_0005A2EA: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A2F9: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0); sub_00176320(); /* call 0x00176320 */

loc_0005A305: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A314: ;
    if (CMP_NE(LO16(eax), 0x1F)) goto loc_0005A33D; /* jne: not equal / not zero */

loc_0005A31A: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005A325: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00179FD0(); /* call 0x00179FD0 */

loc_0005A32E: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A33D: ;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_0005A365; /* jne: not equal / not zero */

loc_0005A342: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005A34D: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00139840(); /* call 0x00139840 */

loc_0005A356: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A365: ;
    if (CMP_NE(LO16(eax), 0x20)) goto loc_0005A3A2; /* jne: not equal / not zero */

loc_0005A36B: ;
    eax = MEM32(ebp + 0x20);
    ecx = (int32_t)MEMF(eax + 8); /* cvttss2si */
    edx = (int32_t)MEMF(eax); /* cvttss2si */
    edi = (int32_t)MEMF(eax + 4); /* cvttss2si */
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_000DF0E0(); /* call 0x000DF0E0 */

loc_0005A393: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A3A2: ;
    if (CMP_EQ(LO16(eax), 6)) goto loc_0005CB86; /* je: equal / zero */

loc_0005A3AC: ;
    if (CMP_NE(LO16(eax), 7)) goto loc_0005A3D1; /* jne: not equal / not zero */

loc_0005A3B2: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010E000(); /* call 0x0010E000 */

loc_0005A3C2: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A3D1: ;
    if (CMP_NE(LO16(eax), 0x21)) goto loc_0005A5C5; /* jne: not equal / not zero */

loc_0005A3DB: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005A3E6: ;
    SET_LO8(ebx, MEM8(ebx + 5));
    (void)0; /* cmp LO8(ebx), 0xA - flags set for next jcc */
    eax = MEM32(ebp + 0x20);
    if (CMP_NE(LO8(ebx), 0xA)) goto loc_0005A402; /* jne: not equal / not zero */

loc_0005A3F1: ;
    PUSH32(esp, 0); sub_000B8860(); /* call 0x000B8860 */

loc_0005A3F6: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A402: ;
    if (CMP_NE(LO8(ebx), 0xB)) goto loc_0005A41D; /* jne: not equal / not zero */

loc_0005A407: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B7090(); /* call 0x000B7090 */

loc_0005A40E: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A41D: ;
    if (CMP_NE(LO8(ebx), 0xC)) goto loc_0005A438; /* jne: not equal / not zero */

loc_0005A422: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_000B7090(); /* call 0x000B7090 */

loc_0005A429: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A438: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005A45D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edi = edi + 0xF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005A46F: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x1C - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490F4); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x7FA1F8), 0x1C)) goto loc_0005A4A8; /* jne: not equal / not zero */

loc_0005A48E: ;
    if (CMP_NE(MEM8(0x76F0DC), 7)) goto loc_0005A4A8; /* jne: not equal / not zero */

loc_0005A497: ;
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    edi = edi << 2;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0005A4A8: ;
    if (TEST_Z(edi, edi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005A4B0: ;
    esi = MEM32(esp + 0x20);

loc_0005A4B4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005A4B9: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005A4D5: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x648F10); /* mulss */
    xmm6 = xmm6 + MEMF(0x648E14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005A4ED: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = esp + 0x50;
    xmm0 = xmm0 - xmm7; /* subss */
    ebx = eax;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm6; /* movss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0005A516: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005A51B: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x6492E4); /* addss */
    edx = ebx;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_0005A536: ;
    eax = MEM32(ebp + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0005A548; /* je: equal / zero */

loc_0005A543: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */

loc_0005A548: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm0; /* movss */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005A578: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005A58E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x90;
    ecx = esp + 0x68;
    edx = edx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_0005A5AF: ;
    esp = esp + 0x48;
    edi--;
    if ((edi != 0)) goto loc_0005A4B4; /* jne: not equal / not zero */

loc_0005A5B9: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A5C5: ;
    if (CMP_NE(LO16(eax), 0x60)) goto loc_0005A617; /* jne: not equal / not zero */

loc_0005A5CB: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005A5D6: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005A5F6: ;
    edx = MEM32(ebp + 0x14);
    ecx = eax;
    eax = MEM32(ebp + 0x18);
    esp = esp + 0x28;
    ecx = ecx - edx;
    PUSH32(esp, 0); sub_00185210(); /* call 0x00185210 */

loc_0005A608: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A617: ;
    if (CMP_NE(LO16(eax), 0x65)) goto loc_0005B012; /* jne: not equal / not zero */

loc_0005A621: ;
    if (CMP_NE(MEM8(ebx + 4), 2)) goto loc_0005A6C6; /* jne: not equal / not zero */

loc_0005A62B: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    eax = eax + 0xFFFFFFEFu;
    if (CMP_A(eax, 4)) goto loc_0005A6C6; /* ja: above (unsigned >) */

loc_0005A63B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5CBAC); /* switch: 68 entries, 64 targets */
    if (_jt == 0x0005A642u) goto loc_0005A642;
    if (_jt == 0x0005A661u) goto loc_0005A661;
    if (_jt == 0x0005A6C6u) goto loc_0005A6C6;
    if (_jt == 0x0005A851u) goto loc_0005A851;
    if (_jt == 0x0005A87Cu) goto loc_0005A87C;
    if (_jt == 0x0005A8A7u) goto loc_0005A8A7;
    if (_jt == 0x0005A8B6u) goto loc_0005A8B6;
    if (_jt == 0x0005A8E1u) goto loc_0005A8E1;
    if (_jt == 0x0005A8FCu) goto loc_0005A8FC;
    if (_jt == 0x0005A91Au) goto loc_0005A91A;
    if (_jt == 0x0005A979u) goto loc_0005A979;
    if (_jt == 0x0005AA18u) goto loc_0005AA18;
    if (_jt == 0x0005AA3Fu) goto loc_0005AA3F;
    if (_jt == 0x0005AAA3u) goto loc_0005AAA3;
    if (_jt == 0x0005AABEu) goto loc_0005AABE;
    if (_jt == 0x0005AAF5u) goto loc_0005AAF5;
    if (_jt == 0x0005AB5Fu) goto loc_0005AB5F;
    if (_jt == 0x0005AB8Bu) goto loc_0005AB8B;
    if (_jt == 0x0005ABD2u) goto loc_0005ABD2;
    if (_jt == 0x0005AC17u) goto loc_0005AC17;
    if (_jt == 0x0005AC41u) goto loc_0005AC41;
    if (_jt == 0x0005AC61u) goto loc_0005AC61;
    if (_jt == 0x0005ACA6u) goto loc_0005ACA6;
    if (_jt == 0x0005ACDDu) goto loc_0005ACDD;
    if (_jt == 0x0005ACFAu) goto loc_0005ACFA;
    if (_jt == 0x0005AE12u) goto loc_0005AE12;
    if (_jt == 0x0005AE8Eu) goto loc_0005AE8E;
    if (_jt == 0x0005AEDAu) goto loc_0005AEDA;
    if (_jt == 0x0005AF41u) goto loc_0005AF41;
    if (_jt == 0x0005B658u) goto loc_0005B658;
    if (_jt == 0x0005B6CEu) goto loc_0005B6CE;
    if (_jt == 0x0005B6DFu) goto loc_0005B6DF;
    if (_jt == 0x0005B707u) goto loc_0005B707;
    if (_jt == 0x0005B721u) goto loc_0005B721;
    if (_jt == 0x0005B741u) goto loc_0005B741;
    if (_jt == 0x0005B75Bu) goto loc_0005B75B;
    if (_jt == 0x0005B774u) goto loc_0005B774;
    if (_jt == 0x0005B792u) goto loc_0005B792;
    if (_jt == 0x0005B846u) goto loc_0005B846;
    if (_jt == 0x0005B898u) goto loc_0005B898;
    if (_jt == 0x0005B8B3u) goto loc_0005B8B3;
    if (_jt == 0x0005B935u) goto loc_0005B935;
    if (_jt == 0x0005B954u) goto loc_0005B954;
    if (_jt == 0x0005B970u) goto loc_0005B970;
    if (_jt == 0x0005B9E2u) goto loc_0005B9E2;
    if (_jt == 0x0005BA04u) goto loc_0005BA04;
    if (_jt == 0x0005BCEFu) goto loc_0005BCEF;
    if (_jt == 0x0005BD49u) goto loc_0005BD49;
    if (_jt == 0x0005BD78u) goto loc_0005BD78;
    if (_jt == 0x0005BD8Eu) goto loc_0005BD8E;
    if (_jt == 0x0005BE05u) goto loc_0005BE05;
    if (_jt == 0x0005BEBFu) goto loc_0005BEBF;
    if (_jt == 0x0005BEE6u) goto loc_0005BEE6;
    if (_jt == 0x0005BF2Fu) goto loc_0005BF2F;
    if (_jt == 0x0005BFDDu) goto loc_0005BFDD;
    if (_jt == 0x0005C1B9u) goto loc_0005C1B9;
    if (_jt == 0x0005C219u) goto loc_0005C219;
    if (_jt == 0x0005C244u) goto loc_0005C244;
    if (_jt == 0x0005C267u) goto loc_0005C267;
    if (_jt == 0x0005C2A0u) goto loc_0005C2A0;
    if (_jt == 0x0005C2BCu) goto loc_0005C2BC;
    if (_jt == 0x0005C2D8u) goto loc_0005C2D8;
    if (_jt == 0x0005C2E9u) goto loc_0005C2E9;
    if (_jt == 0x0005CB86u) goto loc_0005CB86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005A642: ;
    SET_LO8(ecx, MEM8(ebx + 6));
    PUSH32(esp, 0x51);
    edx = esp + 0x2B;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x37) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0005A65C: ;
    esp = esp + 0x10;
    goto loc_0005A6C6;

loc_0005A661: ;
    if (CMP_NE(MEM32(0x7FA1DC), 1)) goto loc_0005A6C6; /* jne: not equal / not zero */

loc_0005A66A: ;
    eax = ZX16(MEM16(0x7F9ECC));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x849434);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0005A6C6; /* je: equal / zero */

loc_0005A684: ;
    PUSH32(esp, 0); sub_000557F0(); /* call 0x000557F0 */

loc_0005A689: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMD(0x64B388)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0005A6C6; /* jnp: not parity */

loc_0005A6A3: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, 0); sub_00164430(); /* call 0x00164430 */

loc_0005A6C6: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005A6D1: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    eax = ecx + esi;
    ecx = MEM32(eax * 4 + 0x76EA70);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    eax = eax * 4 + 0x76EA70;
    MEM32(esp + 0x20) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0005A7FE; /* je: equal / zero */

loc_0005A6F7: ;
    eax = ecx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x18) = edx;
    eax = eax + 0x20;
    edx = eax;
    edx = edx - ecx;
    ecx = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)((int32_t)edx >> 3);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_AE(edx, ecx)) goto loc_0005A7FE; /* jae: above or equal (unsigned >=) */

loc_0005A727: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005A740; /* jne: not equal / not zero */

loc_0005A72E: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0005A740; /* jne: not equal / not zero */

loc_0005A733: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x18) = edx;
    goto loc_0005A7E0;

loc_0005A740: ;
    if (CMP_BE(eax, ebx)) goto loc_0005A770; /* jbe: below or equal (unsigned <=) */

loc_0005A744: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    if (CMP_NE(edx, ecx)) goto loc_0005A770; /* jne: not equal / not zero */

loc_0005A74E: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    if (CMP_NE(edx, ecx)) goto loc_0005A770; /* jne: not equal / not zero */

loc_0005A75A: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_0005A770; /* jne: not equal / not zero */

loc_0005A760: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 5);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    if (CMP_EQ(edx, ecx)) goto loc_0005A825; /* je: equal / zero */

loc_0005A770: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005A7D8; /* jne: not equal / not zero */

loc_0005A777: ;
    ecx = MEM32(esp + 0x1C);
    goto loc_0005A781;

loc_0005A77D: ;
    ecx = MEM32(esp + 0x1C);

loc_0005A781: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005A7D0; /* je: equal / zero */

loc_0005A786: ;
    edx = MEM32(esp + 0x4C);
    ecx = ecx + 8;
    MEM32(esp + 0x1C) = ecx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    eax = eax + 8;
    if (CMP_AE(ecx, edx)) goto loc_0005A7D8; /* jae: above or equal (unsigned >=) */

loc_0005A79B: ;
    if (CMP_BE(eax, ebx)) goto loc_0005A7C7; /* jbe: below or equal (unsigned <=) */

loc_0005A79F: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    if (CMP_NE(edx, ecx)) goto loc_0005A7C7; /* jne: not equal / not zero */

loc_0005A7A9: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    if (CMP_NE(edx, ecx)) goto loc_0005A7C7; /* jne: not equal / not zero */

loc_0005A7B5: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_0005A7C7; /* jne: not equal / not zero */

loc_0005A7BB: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 5);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    if (CMP_EQ(edx, ecx)) goto loc_0005A825; /* je: equal / zero */

loc_0005A7C7: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005A77D; /* je: equal / zero */

loc_0005A7CE: ;
    goto loc_0005A7D8;

loc_0005A7D0: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x18) = ecx;

loc_0005A7D8: ;
    edx = ZX8(MEM8(eax + 1));
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + edx;

loc_0005A7E0: ;
    edx = MEM32(esp + 0x20);
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x1C) = ecx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_B(ecx, edx)) goto loc_0005A727; /* jb: below (unsigned <) */

loc_0005A7FE: ;
    eax = MEM32(edi * 4 + 0x76F0E8);

loc_0005A805: ;
    eax = eax - MEM32(ebp + 0x14);
    edx = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ecx = eax + -1;
    (void)0; /* cmp ecx, 0x1B - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_A(ecx, 0x1B)) goto loc_0005CB86; /* ja: above (unsigned >) */

loc_0005A81E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x5CBC0); /* switch: 63 entries, 61 targets */
    if (_jt == 0x0005A851u) goto loc_0005A851;
    if (_jt == 0x0005A87Cu) goto loc_0005A87C;
    if (_jt == 0x0005A8A7u) goto loc_0005A8A7;
    if (_jt == 0x0005A8B6u) goto loc_0005A8B6;
    if (_jt == 0x0005A8E1u) goto loc_0005A8E1;
    if (_jt == 0x0005A8FCu) goto loc_0005A8FC;
    if (_jt == 0x0005A91Au) goto loc_0005A91A;
    if (_jt == 0x0005A979u) goto loc_0005A979;
    if (_jt == 0x0005AA18u) goto loc_0005AA18;
    if (_jt == 0x0005AA3Fu) goto loc_0005AA3F;
    if (_jt == 0x0005AAA3u) goto loc_0005AAA3;
    if (_jt == 0x0005AABEu) goto loc_0005AABE;
    if (_jt == 0x0005AAF5u) goto loc_0005AAF5;
    if (_jt == 0x0005AB5Fu) goto loc_0005AB5F;
    if (_jt == 0x0005AB8Bu) goto loc_0005AB8B;
    if (_jt == 0x0005ABD2u) goto loc_0005ABD2;
    if (_jt == 0x0005AC17u) goto loc_0005AC17;
    if (_jt == 0x0005AC41u) goto loc_0005AC41;
    if (_jt == 0x0005AC61u) goto loc_0005AC61;
    if (_jt == 0x0005ACA6u) goto loc_0005ACA6;
    if (_jt == 0x0005ACDDu) goto loc_0005ACDD;
    if (_jt == 0x0005ACFAu) goto loc_0005ACFA;
    if (_jt == 0x0005AE12u) goto loc_0005AE12;
    if (_jt == 0x0005AE8Eu) goto loc_0005AE8E;
    if (_jt == 0x0005AEDAu) goto loc_0005AEDA;
    if (_jt == 0x0005AF41u) goto loc_0005AF41;
    if (_jt == 0x0005B658u) goto loc_0005B658;
    if (_jt == 0x0005B6CEu) goto loc_0005B6CE;
    if (_jt == 0x0005B6DFu) goto loc_0005B6DF;
    if (_jt == 0x0005B707u) goto loc_0005B707;
    if (_jt == 0x0005B721u) goto loc_0005B721;
    if (_jt == 0x0005B741u) goto loc_0005B741;
    if (_jt == 0x0005B75Bu) goto loc_0005B75B;
    if (_jt == 0x0005B774u) goto loc_0005B774;
    if (_jt == 0x0005B792u) goto loc_0005B792;
    if (_jt == 0x0005B846u) goto loc_0005B846;
    if (_jt == 0x0005B898u) goto loc_0005B898;
    if (_jt == 0x0005B8B3u) goto loc_0005B8B3;
    if (_jt == 0x0005B935u) goto loc_0005B935;
    if (_jt == 0x0005B954u) goto loc_0005B954;
    if (_jt == 0x0005B970u) goto loc_0005B970;
    if (_jt == 0x0005B9E2u) goto loc_0005B9E2;
    if (_jt == 0x0005BA04u) goto loc_0005BA04;
    if (_jt == 0x0005BCEFu) goto loc_0005BCEF;
    if (_jt == 0x0005BD49u) goto loc_0005BD49;
    if (_jt == 0x0005BD78u) goto loc_0005BD78;
    if (_jt == 0x0005BD8Eu) goto loc_0005BD8E;
    if (_jt == 0x0005BE05u) goto loc_0005BE05;
    if (_jt == 0x0005BEBFu) goto loc_0005BEBF;
    if (_jt == 0x0005BEE6u) goto loc_0005BEE6;
    if (_jt == 0x0005BF2Fu) goto loc_0005BF2F;
    if (_jt == 0x0005BFDDu) goto loc_0005BFDD;
    if (_jt == 0x0005C1B9u) goto loc_0005C1B9;
    if (_jt == 0x0005C219u) goto loc_0005C219;
    if (_jt == 0x0005C244u) goto loc_0005C244;
    if (_jt == 0x0005C267u) goto loc_0005C267;
    if (_jt == 0x0005C2A0u) goto loc_0005C2A0;
    if (_jt == 0x0005C2BCu) goto loc_0005C2BC;
    if (_jt == 0x0005C2D8u) goto loc_0005C2D8;
    if (_jt == 0x0005C2E9u) goto loc_0005C2E9;
    if (_jt == 0x0005CB86u) goto loc_0005CB86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005A825: ;
    eax = MEM32(esp + 0x18);
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = eax << 8;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005A805;

loc_0005A851: ;
    ecx = MEM32(ebp + 0x24);
    eax = MEM32(esp + 0x18);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A3A1F4B);
    PUSH32(esp, 0);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_001EF1A0(); /* call 0x001EF1A0 */

loc_0005A86D: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A87C: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(esp + 0x18);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3BC8B439);
    PUSH32(esp, 1);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_001EF1A0(); /* call 0x001EF1A0 */

loc_0005A898: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A8A7: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3BC8B439);
    PUSH32(esp, 0);
    goto loc_0005A8C3;

loc_0005A8B6: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3BC8B439);
    PUSH32(esp, 1);

loc_0005A8C3: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(ebp + 0x1C);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_001EFAF0(); /* call 0x001EFAF0 */

loc_0005A8D2: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A8E1: ;
    SET_LO8(edx, MEM8(ebp + 0x24));
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, 0); sub_001F0020(); /* call 0x001F0020 */

loc_0005A8F0: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A8FC: ;
    edx = MEM32(ebp + 0x24);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00141640(); /* call 0x00141640 */

loc_0005A90B: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A91A: ;
    ecx = MEM32(ebp + 0x24);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi * 4 + 0x76E884);
    xmm0 = MEMF(esi + eax); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esi + eax;
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0xC61C4000u);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    SET_LO8(eax, 1);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00113960(); /* call 0x00113960 */

loc_0005A96A: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A979: ;
    eax = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    MEM32(esp + 0x28) = eax;
    eax = MEM32(eax + 0x68);
    eax = eax - 0x57;
    MEM8(esp + 0x2C) = LO8(ecx);
    SET_LO8(ecx, 1);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x34) = LO8(ecx);
    MEM8(esp + 0x35) = LO8(ecx);
    if ((eax == 0)) goto loc_0005A9F6; /* je: equal / zero */

loc_0005A9A6: ;
    eax = eax - 0x1A;
    if ((eax == 0)) goto loc_0005A9F6; /* je: equal / zero */

loc_0005A9AB: ;
    eax = eax - 0x25;
    if ((eax == 0)) goto loc_0005A9D3; /* je: equal / zero */

loc_0005A9B0: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    MEM8(esp + 0x3E) = 0;
    PUSH32(esp, 0); sub_001A0580(); /* call 0x001A0580 */

loc_0005A9C4: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A9D3: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    MEM8(esp + 0x3E) = 3;
    PUSH32(esp, 0); sub_001A0580(); /* call 0x001A0580 */

loc_0005A9E7: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005A9F6: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    MEM8(esp + 0x3E) = LO8(ecx);
    PUSH32(esp, 0); sub_001A0580(); /* call 0x001A0580 */

loc_0005AA09: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AA18: ;
    eax = MEM32(ebp + 0x24);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esi + MEM32(edi * 4 + 0x76E884);
    PUSH32(esp, 0); sub_00138770(); /* call 0x00138770 */

loc_0005AA30: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AA3F: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005AA4C: ;
    esi = MEM32(esp + 0x18);
    SET_LO8(ebx, MEM8(ebp + 0x24));
    eax = esi + 0x64;
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, 0); sub_00164D70(); /* call 0x00164D70 */

loc_0005AA5D: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    SET_LO8(edx, LO8(ebx));
    MEM16(esp + 0x38) = LO16(edi);
    MEM16(esp + 0x3A) = LO16(edi);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F17F0(); /* call 0x000F17F0 */

loc_0005AA85: ;
    esp = esp + 0x1C;
    if (CMP_EQ(eax, edi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005AA90: ;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x4C) = edx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AAA3: ;
    SET_LO8(edx, MEM8(ebp + 0x24));
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, 0); sub_0016FAF0(); /* call 0x0016FAF0 */

loc_0005AAB2: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AABE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    if (CMP_L(eax, 0x12D)) goto loc_0005AACB; /* jl: less (signed <) */

loc_0005AAC9: ;
    eax = 0; /* xor self */

loc_0005AACB: ;
    ecx = MEM32(ebp + 0x24);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(edi * 4 + 0x76E884);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esi + ecx;
    PUSH32(esp, 0); sub_00556B90(); /* call 0x00556B90 */

loc_0005AAE6: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AAF5: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005AB00: ;
    if (CMP_LE(edx & edx, 0)) goto loc_0005CB86; /* jle: less or equal (signed <=) */

loc_0005AB08: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    ecx = MEM32(ebp + 0x24);
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, edx);
    MEM32(eax + 0x534) = 1;
    MEMF(eax + 0x520) = xmm0; /* movss */
    MEMF(eax + 0x524) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00161590(); /* call 0x00161590 */

loc_0005AB50: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AB5F: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005AB6A: ;
    if (CMP_LE(edx & edx, 0)) goto loc_0005CB86; /* jle: less or equal (signed <=) */

loc_0005AB72: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001705D0(); /* call 0x001705D0 */

loc_0005AB7C: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AB8B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    ecx = ZX8(MEM8(edi + 0x76F0DC));
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_00055810(); /* call 0x00055810 */

loc_0005ABAA: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 6));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00182560(); /* call 0x00182560 */

loc_0005ABC3: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005ABD2: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    edx = ZX8(MEM8(edi + 0x76F0DC));
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_00055810(); /* call 0x00055810 */

loc_0005ABF1: ;
    eax = MEM32(esp + 0x28);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 6));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0); sub_00182790(); /* call 0x00182790 */

loc_0005AC08: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AC17: ;
    if (CMP_NE(MEM32(0x7FA1DC), 1)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005AC24: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00163F80(); /* call 0x00163F80 */

loc_0005AC32: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AC41: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000E64B0(); /* call 0x000E64B0 */

loc_0005AC52: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AC61: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    edx = ZX8(MEM8(edi + 0x76F0DC));
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_00055810(); /* call 0x00055810 */

loc_0005AC80: ;
    eax = MEM32(esp + 0x28);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 6));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0); sub_00182930(); /* call 0x00182930 */

loc_0005AC97: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005ACA6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    if (CMP_L(eax, 0x2D2)) goto loc_0005ACB3; /* jl: less (signed <) */

loc_0005ACB1: ;
    eax = 0; /* xor self */

loc_0005ACB3: ;
    edx = MEM32(ebp + 0x24);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi * 4 + 0x76E884);
    PUSH32(esp, eax);
    esi = esi + ecx;
    PUSH32(esp, 0); sub_00556DC0(); /* call 0x00556DC0 */

loc_0005ACCE: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005ACDD: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0016EA30(); /* call 0x0016EA30 */

loc_0005ACEB: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005ACFA: ;
    ecx = MEM32(edi * 4 + 0x76E884);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    xmm1 = MEMF(ecx + esi); /* movss */
    xmm0 = MEMF(ecx + esi + 4); /* movss */
    xmm3 = MEMF(ecx + esi + 8); /* movss */
    xmm2 = MEMF(0x648EA4); /* movss */
    eax = ecx + esi;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    PUSH32(esp, 0);
    esi = esp + 0x13C;
    edi = esp + 0x34;
    MEMF(esp + 0x70) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0005AD6B: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005CB86; /* je: equal / zero */

loc_0005AD76: ;
    if (CMP_EQ(MEM8(esp + 0x1D5), 3)) goto loc_0005CB86; /* je: equal / zero */

loc_0005AD84: ;
    (void)0; /* cmp MEM16(ebx + 6), 0 - flags set for next jcc */
    xmm0 = MEMF(esp + 0x130); /* movss */
    SET_LO8(edx, (CMP_EQ(MEM16(ebx + 6), 0)) ? 1 : 0); /* sete */
    eax = esp + 0x5C;
    ecx = esp + 0x140;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005ADB8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005ADC8: ;
    xmm0 = xmm0 * MEMF(0x64B380); /* mulss */
    xmm0 = xmm0 + MEMF(0x64B37C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005ADE3: ;
    xmm0 = xmm0 * MEMF(0x64A1EC); /* mulss */
    xmm0 = xmm0 + MEMF(0x649578); /* addss */
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, ecx);
    SET_LO8(ecx, 1);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000B1F50(); /* call 0x000B1F50 */

loc_0005AE03: ;
    esp = esp + 0x20;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AE12: ;
    edx = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    eax = MEM32(edx * 4 + 0x76E890);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi * 4 + 0x76E884);
    esi = esi + ecx;
    ecx = (int32_t)MEMF(esi + 8); /* cvttss2si */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esi); /* cvttss2si */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esi + 4); /* cvttss2si */
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, esi);
    eax = esp + 0x30;
    ecx = esp + 0x64;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C2660(); /* call 0x000C2660 */

loc_0005AE7F: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AE8E: ;
    edx = MEM32(ebp + 0x24);
    SET_LO16(ecx, MEM16(esp + 0x18));
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 1);
    PUSH32(esp, edx);
    MEM8(esp + 0x2C) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM16(esp + 0x36) = LO16(ecx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0x41) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0005AECB: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005AEDA: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    if (CMP_LE(LO16(ebx) & LO16(ebx), 0)) goto loc_0005AEFA; /* jle: less or equal (signed <=) */

loc_0005AEEB: ;
    ecx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */

loc_0005AEFA: ;
    eax = MEM32(ebp + 0x20);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEM8(esp + 0x9F) = 0xC;
    goto loc_0005AFA6;

loc_0005AF41: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    if (CMP_LE(LO16(ebx) & LO16(ebx), 0)) goto loc_0005AF61; /* jle: less or equal (signed <=) */

loc_0005AF52: ;
    ecx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */

loc_0005AF61: ;
    eax = MEM32(ebp + 0x20);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEM8(esp + 0x9F) = 0xD;

loc_0005AFA6: ;
    SET_LO16(edx, MEM16(esp + 0x18));
    ecx = 0; /* xor self */
    eax = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = ecx;
    MEM8(esp + 0x84) = LO8(ecx);
    MEM32(esp + 0x88) = ecx;
    MEM8(esp + 0x8C) = LO8(ecx);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEM16(esp + 0xA4) = LO16(edx);
    MEM8(esp + 0xA6) = 0xE;
    MEM8(esp + 0xA8) = 0xFF;
    MEM8(esp + 0xA9) = LO8(ecx);
    PUSH32(esp, 0); sub_000B0070(); /* call 0x000B0070 */

loc_0005B003: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B012: ;
    if (CMP_NE(LO16(eax), 0x5B)) goto loc_0005B05B; /* jne: not equal / not zero */

loc_0005B018: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B023: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5B);
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B03F: ;
    edx = MEM32(ebp + 0x24);
    eax = eax - MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001847A0(); /* call 0x001847A0 */

loc_0005B04C: ;
    esp = esp + 0x30;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B05B: ;
    if (CMP_NE(LO16(eax), 0x5D)) goto loc_0005B0A9; /* jne: not equal / not zero */

loc_0005B061: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B06C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5D);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B088: ;
    SET_LO8(edx, MEM8(ebp + 0x24));
    esi = MEM32(ebp + 0x18);
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    esp = esp + 0x28;
    ecx = ecx - eax;
    PUSH32(esp, 0); sub_00174A00(); /* call 0x00174A00 */

loc_0005B09D: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B0A9: ;
    if (CMP_NE(LO16(eax), 0x5E)) goto loc_0005B127; /* jne: not equal / not zero */

loc_0005B0AF: ;
    if (CMP_NE(MEM8(ebx + 5), 1)) goto loc_0005B0D8; /* jne: not equal / not zero */

loc_0005B0B5: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x3E8;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000B79A0(); /* call 0x000B79A0 */

loc_0005B0C9: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B0D8: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B0E3: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E);
    PUSH32(esp, 1);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B103: ;
    edx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x14);
    ecx = eax;
    esp = esp + 0x28;
    ecx = ecx - edi;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000B79A0(); /* call 0x000B79A0 */

loc_0005B118: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B127: ;
    if (CMP_NE(LO16(eax), 0x4C)) goto loc_0005B1A2; /* jne: not equal / not zero */

loc_0005B12D: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B138: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B154: ;
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    edi = eax;
    eax = MEM32(esi + 0x68);
    esp = esp + 0x28;
    edi = edi - edx;
    if (CMP_EQ(eax, 0x49)) goto loc_0005B18F; /* je: equal / zero */

loc_0005B169: ;
    if (CMP_EQ(eax, 0x58)) goto loc_0005B18F; /* je: equal / zero */

loc_0005B16E: ;
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ebx + 5));
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_0005B180: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B18F: ;
    eax = 0x5D5850;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0005B199: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    goto loc_0005B362;

loc_0005B1A2: ;
    if (CMP_NE(LO16(eax), 0x53)) goto loc_0005B233; /* jne: not equal / not zero */

loc_0005B1AC: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B1B7: ;
    eax = MEM32(ebp + 0x20);
    xmm0 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x53);
    PUSH32(esp, 1);
    edx = esp + 0x30;
    ecx = eax + 4;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    eax = eax + 8;
    PUSH32(esp, 5);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B204: ;
    eax = eax - MEM32(ebp + 0x14);
    MEM16(esp + 0x64) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, 0);
    ecx = esp + 0x54;
    MEM8(esp + 0x6A) = 1;
    MEM8(esp + 0x6B) = 2;
    PUSH32(esp, 0); sub_000B0630(); /* call 0x000B0630 */

loc_0005B224: ;
    esp = esp + 0x2C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B233: ;
    if (CMP_NE(LO16(eax), 0x50)) goto loc_0005B2CD; /* jne: not equal / not zero */

loc_0005B23D: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B248: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B264: ;
    ecx = MEM32(ebp + 0x14);
    esi = eax;
    esi = esi - ecx;
    esp = esp + 0x28;
    if (CMP_L(esi, 0x258)) goto loc_0005B27B; /* jl: less (signed <) */

loc_0005B276: ;
    esi = 0x258;

loc_0005B27B: ;
    eax = 0x5D5840;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0005B285: ;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(ebp + 0x18);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_0005B2B5: ;
    esp = esp + 0xC;
    eax = 0x5D5830;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0005B2C2: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    goto loc_0005B362;

loc_0005B2CD: ;
    if (CMP_NE(LO16(eax), 0x51)) goto loc_0005B38C; /* jne: not equal / not zero */

loc_0005B2D7: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B2E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x51);
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B2FE: ;
    ecx = MEM32(ebp + 0x14);
    esi = eax;
    esi = esi - ecx;
    esp = esp + 0x28;
    if (CMP_L(esi, 0x258)) goto loc_0005B315; /* jl: less (signed <) */

loc_0005B310: ;
    esi = 0x258;

loc_0005B315: ;
    eax = 0x5D5840;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0005B31F: ;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(ebp + 0x18);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_0005B34F: ;
    esp = esp + 0xC;
    eax = 0x5D5830;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0005B35C: ;
    xmm0 = MEMF(esp + 0x14); /* movss */

loc_0005B362: ;
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    edx = esi;

loc_0005B377: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_0005B37D: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B38C: ;
    if (CMP_NE(LO16(eax), 0x48)) goto loc_0005B3B3; /* jne: not equal / not zero */

loc_0005B392: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B39D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_0005B3A4: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B3B3: ;
    if (CMP_NE(LO16(eax), 0xF)) goto loc_0005B3FE; /* jne: not equal / not zero */

loc_0005B3B9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 1);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B3D5: ;
    edx = MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(ebx + 4));
    esp = esp + 0x28;
    eax = eax - edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B3E8: ;
    esi = MEM32(ebp + 0x18);
    edi = eax;
    PUSH32(esp, 0); sub_000B93E0(); /* call 0x000B93E0 */

loc_0005B3F2: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B3FE: ;
    if (CMP_EQ(LO16(eax), 0x3E)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B408: ;
    if (CMP_EQ(LO16(eax), 0x3F)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B412: ;
    if (CMP_NE(LO16(eax), 0x32)) goto loc_0005B47F; /* jne: not equal / not zero */

loc_0005B418: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B434: ;
    edx = MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(ebx + 4));
    esp = esp + 0x28;
    eax = eax - edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B447: ;
    ecx = MEM32(edi * 4 + 0x76E884);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    edx = MEM32(ebp + 0x24);
    edi = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    esi = esi + ecx;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EA040(); /* call 0x000EA040 */

loc_0005B470: ;
    esp = esp + 0x18;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B47F: ;
    if (CMP_NE(LO16(eax), 0x34)) goto loc_0005B54D; /* jne: not equal / not zero */

loc_0005B489: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B4A5: ;
    eax = eax - MEM32(ebp + 0x14);
    MEM32(esp + 0x44) = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp + 0x28;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B4BA: ;
    SET_LO8(ebx, MEM8(ebx + 5));
    SET_LO8(eax, 0); /* xor self */
    if (CMP_GE(LO8(ebx), 1)) goto loc_0005B4C8; /* jge: greater or equal (signed >=) */

loc_0005B4C4: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0005B4CA; /* jne: not equal / not zero */

loc_0005B4C8: ;
    SET_LO8(eax, 0xD);

loc_0005B4CA: ;
    ecx = MEM32(ebp + 0x18);
    ebx = MEM32(ecx + 0x538);
    if (TEST_Z(ebx, ebx)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B4DB: ;
    ecx = ZX8(LO8(eax));
    MEM32(esp + 0x14) = ecx;
    goto loc_0005B4E8;

loc_0005B4E4: ;
    ecx = MEM32(esp + 0x14);

loc_0005B4E8: ;
    eax = MEM32(ebx + 0x38);
    if (CMP_EQ(eax, ecx)) goto loc_0005B507; /* je: equal / zero */

loc_0005B4EF: ;
    edx = MEM32(ecx * 4 + 0x59AC40);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C3420(); /* call 0x001C3420 */

loc_0005B500: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0005B53A; /* je: equal / zero */

loc_0005B507: ;
    edx = MEM32(edi * 4 + 0x76E884);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    eax = edx + ecx;
    edx = MEM32(ebx + 0x2C);
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, 0); sub_005569E0(); /* call 0x005569E0 */

loc_0005B531: ;
    ecx = MEM32(ebx + 0x2C);
    esp = esp + 0x14;
    MEM32(ecx + 0x4C) = eax;

loc_0005B53A: ;
    ebx = MEM32(ebx + 0x30);
    if (TEST_NZ(ebx, ebx)) goto loc_0005B4E4; /* jne: not equal / not zero */

loc_0005B541: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B54D: ;
    if (CMP_NE(LO16(eax), 0x23)) goto loc_0005B5A7; /* jne: not equal / not zero */

loc_0005B553: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B55E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    PUSH32(esp, 1);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B57A: ;
    eax = eax - MEM32(ebp + 0x14);
    MEM32(esp + 0x3C) = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp + 0x28;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B58F: ;
    eax = MEM32(ebp + 0x18);
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0); sub_000DE080(); /* call 0x000DE080 */

loc_0005B59B: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B5A7: ;
    if (CMP_NE(LO16(eax), 0x22)) goto loc_0005B601; /* jne: not equal / not zero */

loc_0005B5AD: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B5B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22);
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005B5D4: ;
    eax = eax - MEM32(ebp + 0x14);
    MEM32(esp + 0x3C) = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp + 0x28;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B5E9: ;
    edx = MEM32(ebp + 0x18);
    eax = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, 0); sub_000DDE20(); /* call 0x000DDE20 */

loc_0005B5F5: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B601: ;
    if (CMP_NE(LO16(eax), 0x52)) goto loc_0005B630; /* jne: not equal / not zero */

loc_0005B607: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B612: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000B1B80(); /* call 0x000B1B80 */

loc_0005B621: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B630: ;
    if (CMP_EQ(LO16(eax), 0x75)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B63A: ;
    if (CMP_NE(LO16(eax), 0x5F)) goto loc_0005C34B; /* jne: not equal / not zero */

loc_0005B644: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 4);
    if (CMP_A(eax, 0x1C)) goto loc_0005CB86; /* ja: above (unsigned >) */

loc_0005B651: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5CC30); /* switch: 35 entries, 35 targets */
    if (_jt == 0x0005B658u) goto loc_0005B658;
    if (_jt == 0x0005B6CEu) goto loc_0005B6CE;
    if (_jt == 0x0005B6DFu) goto loc_0005B6DF;
    if (_jt == 0x0005B707u) goto loc_0005B707;
    if (_jt == 0x0005B721u) goto loc_0005B721;
    if (_jt == 0x0005B741u) goto loc_0005B741;
    if (_jt == 0x0005B75Bu) goto loc_0005B75B;
    if (_jt == 0x0005B774u) goto loc_0005B774;
    if (_jt == 0x0005B792u) goto loc_0005B792;
    if (_jt == 0x0005B846u) goto loc_0005B846;
    if (_jt == 0x0005B898u) goto loc_0005B898;
    if (_jt == 0x0005B8B3u) goto loc_0005B8B3;
    if (_jt == 0x0005B935u) goto loc_0005B935;
    if (_jt == 0x0005B954u) goto loc_0005B954;
    if (_jt == 0x0005B970u) goto loc_0005B970;
    if (_jt == 0x0005B9E2u) goto loc_0005B9E2;
    if (_jt == 0x0005BA04u) goto loc_0005BA04;
    if (_jt == 0x0005BCEFu) goto loc_0005BCEF;
    if (_jt == 0x0005BD49u) goto loc_0005BD49;
    if (_jt == 0x0005BD78u) goto loc_0005BD78;
    if (_jt == 0x0005BD8Eu) goto loc_0005BD8E;
    if (_jt == 0x0005BE05u) goto loc_0005BE05;
    if (_jt == 0x0005BEBFu) goto loc_0005BEBF;
    if (_jt == 0x0005BEE6u) goto loc_0005BEE6;
    if (_jt == 0x0005BF2Fu) goto loc_0005BF2F;
    if (_jt == 0x0005BFDDu) goto loc_0005BFDD;
    if (_jt == 0x0005C1B9u) goto loc_0005C1B9;
    if (_jt == 0x0005C219u) goto loc_0005C219;
    if (_jt == 0x0005C244u) goto loc_0005C244;
    if (_jt == 0x0005C267u) goto loc_0005C267;
    if (_jt == 0x0005C2A0u) goto loc_0005C2A0;
    if (_jt == 0x0005C2BCu) goto loc_0005C2BC;
    if (_jt == 0x0005C2D8u) goto loc_0005C2D8;
    if (_jt == 0x0005C2E9u) goto loc_0005C2E9;
    if (_jt == 0x0005CB86u) goto loc_0005CB86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005B658: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B663: ;
    edx = esi;
    eax = esp + 0x130;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0005B671: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x64925C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0005B6BF: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B6CE: ;
    PUSH32(esp, 0); sub_00141680(); /* call 0x00141680 */

loc_0005B6D3: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B6DF: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B6EA: ;
    eax = MEM32(esi + 0x68);
    eax = eax + 0xFFFFFFB6u;
    if (CMP_A(eax, 0x4E)) goto loc_0005B792; /* ja: above (unsigned >) */

loc_0005B6F9: ;
    edx = ZX8(MEM8(eax + 0x5CCBC));
    { uint32_t _jt = MEM32(edx * 4 + 0x5CCA4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0005B707u) goto loc_0005B707;
    if (_jt == 0x0005B721u) goto loc_0005B721;
    if (_jt == 0x0005B741u) goto loc_0005B741;
    if (_jt == 0x0005B75Bu) goto loc_0005B75B;
    if (_jt == 0x0005B774u) goto loc_0005B774;
    if (_jt == 0x0005B792u) goto loc_0005B792;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005B707: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0016EF60(); /* call 0x0016EF60 */

loc_0005B712: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B721: ;
    ecx = MEM32(ebp + 0x24);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 5));
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00169980(); /* call 0x00169980 */

loc_0005B732: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B741: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0016D130(); /* call 0x0016D130 */

loc_0005B74C: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B75B: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0016D260(); /* call 0x0016D260 */

loc_0005B765: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B774: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x3DA3D70A);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_0005B783: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B792: ;
    eax = MEM32(esi + 0x70);
    if (CMP_EQ(eax, 0x75)) goto loc_0005B7A3; /* je: equal / zero */

loc_0005B79A: ;
    if (CMP_NE(eax, 0x5A)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005B7A3: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    edi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0005CB86; /* je: equal / zero */

loc_0005B7B3: ;
    ecx = MEM32(0x847200);
    if (TEST_Z(ecx, ecx)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B7C1: ;
    ebx = 0x46;

loc_0005B7C6: ;
    (void)0; /* cmp MEM8(ecx), LO8(edx) - flags set for next jcc */
    eax = MEM32(ecx + 0xE0);
    if (CMP_NE(MEM8(ecx), LO8(edx))) goto loc_0005B7DB; /* jne: not equal / not zero */

loc_0005B7D0: ;
    if (CMP_NE(MEM16(ecx + 0xA), LO16(ebx))) goto loc_0005B7DB; /* jne: not equal / not zero */

loc_0005B7D6: ;
    if (TEST_Z(edi, edi)) goto loc_0005B7ED; /* je: equal / zero */

loc_0005B7DA: ;
    edi--;

loc_0005B7DB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax;
    if (TEST_NZ(eax, eax)) goto loc_0005B7C6; /* jne: not equal / not zero */

loc_0005B7E1: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B7ED: ;
    edx = esp + 0x28;
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM32(esp + 0x2C) = 0x594D64;
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_0005B811: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005CB86; /* je: equal / zero */

loc_0005B81C: ;
    edi = MEM32(ebp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000E7230(); /* call 0x000E7230 */

loc_0005B82C: ;
    ecx = esp + 0x38;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000E72F0(); /* call 0x000E72F0 */

loc_0005B837: ;
    esp = esp + 0x18;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B846: ;
    edx = MEM32(edi * 4 + 0x76E884);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    xmm0 = MEMF(esi + edx); /* movss */
    eax = MEM32(esi + edx + 0x10);
    esi = esi + edx;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = esp + 0x38;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F9620(); /* call 0x000F9620 */

loc_0005B889: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B898: ;
    ecx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0014CA50(); /* call 0x0014CA50 */

loc_0005B8A4: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B8B3: ;
    ecx = MEM32(ebp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0005CB86; /* je: equal / zero */

loc_0005B8BE: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM16(ebx + 6), LO16(eax))) goto loc_0005B911; /* je: equal / zero */

loc_0005B8C6: ;
    SET_LO8(ecx, MEM8(ecx + 0x10B));
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x27) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005B90F; /* je: equal / zero */

loc_0005B8D6: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0005B90F; /* je: equal / zero */

loc_0005B8DF: ;
    goto loc_0005B8E5;

loc_0005B8E1: ;
    SET_LO8(ecx, MEM8(esp + 0x27));

loc_0005B8E5: ;
    (void)0; /* cmp MEM8(eax), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(ecx))) goto loc_0005B909; /* jne: not equal / not zero */

loc_0005B8EF: ;
    SET_LO8(edx, MEM8(ebx + 5));
    ecx = ZX16(MEM16(eax + 0xA));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx + 0xA5;
    if (CMP_NE(ecx, edx)) goto loc_0005B909; /* jne: not equal / not zero */

loc_0005B904: ;
    if (TEST_Z(edi, edi)) goto loc_0005B911; /* je: equal / zero */

loc_0005B908: ;
    edi--;

loc_0005B909: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_0005B8E1; /* jne: not equal / not zero */

loc_0005B90F: ;
    eax = 0; /* xor self */

loc_0005B911: ;
    edx = MEM32(ebp + 0x24);
    ebx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000E86C0(); /* call 0x000E86C0 */

loc_0005B926: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B935: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0010E6E0(); /* call 0x0010E6E0 */

loc_0005B945: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B954: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00181CF0(); /* call 0x00181CF0 */

loc_0005B961: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B970: ;
    xmm0 = MEMF(ecx); /* movss */
    SET_LO16(ebx, MEM16(ebx + 6));
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_0005B9A3; /* jne: not equal / not zero */

loc_0005B999: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    goto loc_0005B9AA;

loc_0005B9A3: ;
    ecx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */

loc_0005B9AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    MEMF(esp + 0x20) = xmm0; /* movss */
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0);
    esi = esp + 0x44;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_0005B9D3: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005B9E2: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_0005B9F5: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BA04: ;
    edi = MEM32(ebp + 0x18);
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005BA15: ;
    xmm0 = MEMF(0x64A610); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649240); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A8A8); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    xmm2 = MEMF(0x649368); /* movss */
    xmm1 = MEMF(0x649774); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    xmm5 = MEMF(0x64B378); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x64A608); /* movss */
    xmm3 = MEMF(0x649438); /* movss */
    xmm4 = MEMF(0x649B08); /* movss */
    xmm6 = MEMF(0x64A854); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x649DFC); /* movss */
    MEMF(esp + 0x100) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x108) = xmm0; /* movss */
    MEMF(esp + 0x110) = xmm0; /* movss */
    MEMF(esp + 0x130) = xmm0; /* movss */
    MEMF(esp + 0x144) = xmm0; /* movss */
    xmm0 = MEMF(0x64B374); /* movss */
    MEMF(esp + 0x148) = xmm0; /* movss */
    xmm0 = MEMF(0x649E08); /* movss */
    MEMF(esp + 0x14C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x154) = xmm0; /* movss */
    xmm0 = MEMF(0x6498A8); /* movss */
    MEMF(esp + 0x158) = xmm0; /* movss */
    MEMF(esp + 0x164) = xmm0; /* movss */
    xmm0 = MEMF(0x64A734); /* movss */
    MEMF(esp + 0x10C) = xmm1; /* movss */
    xmm1 = MEMF(0x64B370); /* movss */
    MEMF(esp + 0x168) = xmm0; /* movss */
    xmm0 = MEMF(0x64A4E4); /* movss */
    esi = 0; /* xor self */
    eax = eax - esi;
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x114) = xmm2; /* movss */
    MEMF(esp + 0x118) = xmm1; /* movss */
    xmm1 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x124) = xmm5; /* movss */
    xmm5 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x13C) = xmm2; /* movss */
    xmm2 = MEMF(0x64A6D8); /* movss */
    MEMF(esp + 0x170) = xmm0; /* movss */
    xmm0 = MEMF(0x6498B8); /* movss */
    MEMF(esp + 0x104) = xmm3; /* movss */
    MEMF(esp + 0x11C) = xmm4; /* movss */
    MEMF(esp + 0x120) = xmm1; /* movss */
    MEMF(esp + 0x128) = xmm5; /* movss */
    MEMF(esp + 0x12C) = xmm1; /* movss */
    MEMF(esp + 0x134) = xmm6; /* movss */
    MEMF(esp + 0x138) = xmm5; /* movss */
    MEMF(esp + 0x140) = xmm2; /* movss */
    MEMF(esp + 0x150) = xmm1; /* movss */
    MEMF(esp + 0x15C) = xmm1; /* movss */
    MEMF(esp + 0x160) = xmm3; /* movss */
    MEMF(esp + 0x16C) = xmm4; /* movss */
    MEMF(esp + 0x174) = xmm0; /* movss */
    MEM32(esp + 0x28) = 0x15;
    MEM32(esp + 0x2C) = 0x20;
    MEM32(esp + 0x30) = 3;
    if ((eax == 0)) goto loc_0005BC9C; /* je: equal / zero */

loc_0005BC60: ;
    eax--;
    if ((eax == 0)) goto loc_0005BC7F; /* je: equal / zero */

loc_0005BC63: ;
    eax--;
    if ((eax != 0)) goto loc_0005BCB0; /* jne: not equal / not zero */

loc_0005BC66: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BC6B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx + edx * 2;
    esi = esp + esi * 4 + 0x130;
    goto loc_0005BCB0;

loc_0005BC7F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BC84: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0005BC90; /* jns: not sign (positive) */

loc_0005BC8B: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0005BC90: ;
    esi = eax + eax * 2;
    esi = esp + esi * 4 + 0x100;
    goto loc_0005BCB0;

loc_0005BC9C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BCA1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx + edx * 2;
    esi = esp + esi * 4 + 0x74;

loc_0005BCB0: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = MEM32(esp + edx * 4 + 0x28);
    PUSH32(esp, edi);
    eax = esp + 0xB4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0005BCC5: ;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0005BCD1: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edi = esp + 0x70;
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_0005BCE0: ;
    esp = esp + 0x14;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BCEF: ;
    MEM32(esp + 0x28) = 6;
    MEM32(esp + 0x2C) = 7;
    MEM32(esp + 0x30) = 8;
    MEM32(esp + 0x34) = 9;
    esi = esp + 0x28;
    edi = 4;
    goto loc_0005BD20;

    /* nop */

loc_0005BD20: ;
    eax = MEM32(esi);
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + ecx;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001C6A50(); /* call 0x001C6A50 */

loc_0005BD34: ;
    esp = esp + 4;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0005BD20; /* jne: not equal / not zero */

loc_0005BD3D: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BD49: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BD4E: ;
    eax = eax & 0x7F;
    eax = eax - 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BD5A: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A96D0(); /* call 0x000A96D0 */

loc_0005BD69: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BD78: ;
    eax = MEM32(0x8470DC);
    PUSH32(esp, 0); sub_001D1C20(); /* call 0x001D1C20 */

loc_0005BD82: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BD8E: ;
    xmm0 = MEMF(ecx); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    (void)0; /* cmp eax, 0x12D - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if (CMP_L(eax, 0x12D)) goto loc_0005BDBB; /* jl: less (signed <) */

loc_0005BDB9: ;
    eax = 0; /* xor self */

loc_0005BDBB: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0005BDD5; /* je: equal / zero */

loc_0005BDC4: ;
    ecx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    goto loc_0005BDDD;

loc_0005BDD5: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_0005BDDD: ;
    edx = MEM32(ebp + 0x24);
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00556AA0(); /* call 0x00556AA0 */

loc_0005BDF6: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BE05: ;
    MEM8(esp + 0x4E) = 0x9A;
    MEM8(esp + 0x4D) = 0x96;
    MEM8(esp + 0x4C) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BE19: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x4F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0005BE2C: ;
    SET_LO8(eax, MEM8(ebx + 5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005BE57; /* je: equal / zero */

loc_0005BE49: ;
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0005BE57: ;
    edx = MEM32(ebp + 0x24);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BE78: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0x14;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BE8A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x81;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    ebx = ebx - 0x3F;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0005BE9C: ;
    edi = eax;
    eax = esi;
    esi = MEM32(ebp + 0x18);
    edi = edi & 0xFF;
    ecx = ebx;
    PUSH32(esp, 0); sub_000A9110(); /* call 0x000A9110 */

loc_0005BEB0: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BEBF: ;
    edx = MEM32(ebp + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 6));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 5));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0018C930(); /* call 0x0018C930 */

loc_0005BED7: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BEE6: ;
    edx = MEM32(ebp + 0x24);
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 1);
    PUSH32(esp, edx);
    MEM8(esp + 0x2C) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM16(esp + 0x36) = 0x32;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0x41) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0005BF20: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BF2F: ;
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005BF40: ;
    xmm0 = MEMF(0x649448); /* movss */
    xmm1 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x6490CC); /* movss */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x649278); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(0x649C24); /* movss */
    PUSH32(esp, 0x5D5828);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0005BF9E: ;
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ecx = eax + eax * 2;
    edx = esp + ecx * 4 + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0005BFBC: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F256042);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_001066F0(); /* call 0x001066F0 */

loc_0005BFCE: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005BFDD: ;
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005BFEE: ;
    xmm1 = MEMF(0x649B08); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    xmm2 = MEMF(0x648CFC); /* movss */
    MEMF(esp + 0x134) = xmm1; /* movss */
    MEMF(esp + 0x140) = xmm1; /* movss */
    MEMF(esp + 0x14C) = xmm1; /* movss */
    MEMF(esp + 0x158) = xmm1; /* movss */
    xmm1 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x130) = xmm0; /* movss */
    MEMF(esp + 0x13C) = xmm0; /* movss */
    MEMF(esp + 0x148) = xmm0; /* movss */
    MEMF(esp + 0x154) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    MEMF(esp + 0x164) = xmm1; /* movss */
    xmm1 = MEMF(0x58BD5C); /* movss */
    MEMF(esp + 0x160) = xmm0; /* movss */
    MEMF(esp + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(0x64A8BC); /* movss */
    MEMF(esp + 0x174) = xmm0; /* movss */
    xmm0 = MEMF(0x6493F4); /* movss */
    MEMF(esp + 0x16C) = xmm1; /* movss */
    xmm1 = MEMF(0x648FF0); /* movss */
    MEMF(esp + 0x178) = xmm0; /* movss */
    MEMF(esp + 0x180) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    ecx = esp + 0xB0;
    MEM32(esp + 0x28) = 0x5D581C;
    MEM32(esp + 0x2C) = 0x5D5810;
    MEM32(esp + 0x30) = 0x5D5804;
    MEM32(esp + 0x34) = 0x5D57F8;
    MEM32(esp + 0x38) = 0x5D57EC;
    MEM32(esp + 0x3C) = 0x5D57E0;
    MEM32(esp + 0x40) = 0x5D57D4;
    MEM32(esp + 0x44) = 0x5D57C8;
    eax = MEM32(esp + edx * 4 + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp + 0x174) = xmm1; /* movss */
    xmm1 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x188) = xmm0; /* movss */
    xmm0 = MEMF(0x546060); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x140) = xmm2; /* movss */
    MEMF(esp + 0x14C) = xmm2; /* movss */
    MEMF(esp + 0x158) = xmm2; /* movss */
    MEMF(esp + 0x164) = xmm2; /* movss */
    MEMF(esp + 0x184) = xmm1; /* movss */
    MEMF(esp + 0x190) = xmm1; /* movss */
    MEMF(esp + 0x194) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0005C177: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 5);
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    eax = eax + eax * 2;
    PUSH32(esp, edx);
    ecx = esp + eax * 4 + 0x140;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0005C198: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40DFAE15);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_001066F0(); /* call 0x001066F0 */

loc_0005C1AA: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C1B9: ;
    eax = esp + 0x130;
    PUSH32(esp, 0); sub_0005CD10(); /* call 0x0005CD10 */

loc_0005C1C5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    eax = MEM32(edi * 4 + 0x76E884);
    edx = (int32_t)MEMF(esi + eax + 4); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + eax); /* cvttss2si */
    esi = esi + eax;
    eax = (int32_t)MEMF(esi + 8); /* cvttss2si */
    edx = edx + 0x32;
    PUSH32(esp, 1);
    edi = esp + 0x134;
    MEM16(esp + 0x148) = LO16(ecx);
    MEM16(esp + 0x14A) = LO16(edx);
    MEM16(esp + 0x14C) = LO16(eax);
    PUSH32(esp, 0); sub_000DB9B0(); /* call 0x000DB9B0 */

loc_0005C20A: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C219: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C224: ;
    PUSH32(esp, 0); sub_002CE110(); /* call 0x002CE110 */

loc_0005C229: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B3CF0(); /* call 0x000B3CF0 */

loc_0005C235: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C244: ;
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(edi, edi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C24F: ;
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001402B0(); /* call 0x001402B0 */

loc_0005C258: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C267: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C272: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2C) = MEM8(eax + 0x2C) & 0xFB;
    eax = esi;
    PUSH32(esp, 0); sub_0031AB10(); /* call 0x0031AB10 */

loc_0005C283: ;
    eax = 0x75;
    PUSH32(esp, 0); sub_0031AA60(); /* call 0x0031AA60 */

loc_0005C28D: ;
    eax = esi;
    PUSH32(esp, 0); sub_0031AB10(); /* call 0x0031AB10 */

loc_0005C294: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C2A0: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x5D5174);
    PUSH32(esp, 0); sub_001DD710(); /* call 0x001DD710 */

loc_0005C2AD: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C2BC: ;
    eax = 0x5D57BC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0005C2C6: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    goto loc_0005B377;

loc_0005C2D8: ;
    PUSH32(esp, 0); sub_000F95D0(); /* call 0x000F95D0 */

loc_0005C2DD: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C2E9: ;
    ecx = MEM32(0x771C50);
    eax = 0; /* xor self */
    if (CMP_NE(ecx, eax)) goto loc_0005C311; /* jne: not equal / not zero */

loc_0005C2F5: ;
    ecx = MEM32(0x771C60);
    if (CMP_LE(ecx, MEM32(0x771C5C))) goto loc_0005C311; /* jle: less or equal (signed <=) */

loc_0005C303: ;
    SET_LO8(ecx, MEM8(0x771C64));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005CB86; /* je: equal / zero */

loc_0005C311: ;
    MEM32(0x771C50) = eax;
    MEM32(0x771C54) = eax;
    MEM32(0x771C60) = eax;
    MEM8(0x771C58) = 0;
    MEM8(0x771C59) = 0;
    MEM8(0x771C5A) = 0;
    MEM32(0x771C5C) = 0x1E;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C34B: ;
    if (CMP_NE(LO16(eax), 0x40)) goto loc_0005C392; /* jne: not equal / not zero */

loc_0005C351: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x41)) goto loc_0005C375; /* jne: not equal / not zero */

loc_0005C35A: ;
    edx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00140020(); /* call 0x00140020 */

loc_0005C366: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C375: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); sub_0013FBF0(); /* call 0x0013FBF0 */

loc_0005C383: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C392: ;
    if (CMP_EQ(LO16(eax), 0x4D)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C39C: ;
    if (CMP_EQ(LO16(eax), 0x4E)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C3A6: ;
    if (CMP_EQ(LO16(eax), 0x4F)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C3B0: ;
    if (CMP_NE(LO16(eax), 0x24)) goto loc_0005C419; /* jne: not equal / not zero */

loc_0005C3B6: ;
    xmm0 = MEMF(ecx); /* movss */
    SET_LO8(eax, MEM8(ebx + 4));
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = SX8(LO8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005C3E5; /* jne: not equal / not zero */

loc_0005C3E0: ;
    eax = 0xA;

loc_0005C3E5: ;
    ebx = (uint32_t)(int32_t)SMEM8(ebx + 5);
    edx = MEM32(ebp + 0x24);
    (void)0; /* cmp LO8(ebx), 0x11 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(LO8(ebx), 0x11)) ? 1 : 0); /* setge */
    SET_LO8(ecx, LO8(ecx) - 1);
    PUSH32(esp, edx);
    ecx = ecx & ebx;
    MEM8(esp + 0x18) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00144510(); /* call 0x00144510 */

loc_0005C40A: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C419: ;
    if (CMP_NE(LO16(eax), 0x10)) goto loc_0005C450; /* jne: not equal / not zero */

loc_0005C41F: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    (void)0; /* cmp LO8(ebx), 0x1C - flags set for next jcc */
    MEM8(esp + 0x14) = LO8(ebx);
    if (CMP_B(LO8(ebx), 0x1C)) goto loc_0005C430; /* jb: below (unsigned <) */

loc_0005C42B: ;
    MEM8(esp + 0x14) = 0;

loc_0005C430: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 0); sub_000B89A0(); /* call 0x000B89A0 */

loc_0005C441: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C450: ;
    if (CMP_NE(LO16(eax), 0x47)) goto loc_0005C473; /* jne: not equal / not zero */

loc_0005C456: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_000E64B0(); /* call 0x000E64B0 */

loc_0005C464: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C473: ;
    if (CMP_NE(LO16(eax), 0x2E)) goto loc_0005C48A; /* jne: not equal / not zero */

loc_0005C479: ;
    PUSH32(esp, 0); sub_00177A90(); /* call 0x00177A90 */

loc_0005C47E: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C48A: ;
    if (CMP_NE(LO16(eax), 0x31)) goto loc_0005C4AD; /* jne: not equal / not zero */

loc_0005C490: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_000E9A60(); /* call 0x000E9A60 */

loc_0005C49E: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C4AD: ;
    if (CMP_NE(LO16(eax), 0x33)) goto loc_0005C5A1; /* jne: not equal / not zero */

loc_0005C4B7: ;
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* cmp LO8(eax), 0x12 - flags set for next jcc */
    edx = 0x11;
    if (CMP_GE(LO8(eax), 0x12)) goto loc_0005C4C6; /* jge: greater or equal (signed >=) */

loc_0005C4C3: ;
    edx = SX8(LO8(eax));

loc_0005C4C6: ;
    eax = MEM32(edi * 4 + 0x76E884);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    xmm0 = MEMF(eax + esi + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    xmm1 = MEMF(eax + esi + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(0x648E6C); /* addss */
    SET_LO8(ebx, MEM8(ebx + 5));
    eax = eax + esi;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(0x649220); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esi = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D80); /* movss */
    edi = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D10); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0005C561; /* je: equal / zero */

loc_0005C55B: ;
    SET_LO16(eax, SX8(LO8(ebx)));
    goto loc_0005C566;

loc_0005C561: ;
    eax = 0x64;

loc_0005C566: ;
    ebx = MEM32(ebp + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    xmm4 = MEMF(eax); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0017BBF0(); /* call 0x0017BBF0 */

loc_0005C592: ;
    esp = esp + 0x2C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C5A1: ;
    if (CMP_NE(LO16(eax), 0x35)) goto loc_0005C5D2; /* jne: not equal / not zero */

loc_0005C5A7: ;
    SET_LO8(ebx, MEM8(ebx + 4));
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    ecx = 1;
    if (CMP_G(LO8(ebx), 1)) goto loc_0005C5B7; /* jg: greater (signed >) */

loc_0005C5B4: ;
    ecx = SX8(LO8(ebx));

loc_0005C5B7: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000E9260(); /* call 0x000E9260 */

loc_0005C5C3: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C5D2: ;
    if (CMP_NE(LO16(eax), 0x26)) goto loc_0005C62F; /* jne: not equal / not zero */

loc_0005C5D8: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C5E3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005C5FF: ;
    edx = MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(ebx + 4));
    esp = esp + 0x28;
    eax = eax - edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005C612: ;
    ecx = MEM32(ebp + 0x18);
    MEM16(ecx + 0x480) = LO16(eax);
    MEM8(ecx + 0x474) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C62F: ;
    if (CMP_NE(LO16(eax), 0x27)) goto loc_0005C6B1; /* jne: not equal / not zero */

loc_0005C639: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM32(esp + 0x14) = 1;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005C66B; /* je: equal / zero */

loc_0005C664: ;
    ecx = SX8(LO8(eax));
    MEM32(esp + 0x14) = ecx;

loc_0005C66B: ;
    SET_LO8(eax, MEM8(ebx + 5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005C687; /* je: equal / zero */

loc_0005C672: ;
    edx = SX8(LO8(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0005C687: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_S(LO16(ebx), LO16(ebx))) goto loc_0005C69D; /* jl: less (signed <) */

loc_0005C690: ;
    eax = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0005C69D: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0); sub_00159E80(); /* call 0x00159E80 */

loc_0005C6A5: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C6B1: ;
    if (CMP_NE(LO16(eax), 2)) goto loc_0005C743; /* jne: not equal / not zero */

loc_0005C6BB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, MEM8(ebx + 4));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    eax = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005C6E6; /* je: equal / zero */

loc_0005C6E3: ;
    eax = SX8(LO8(ecx));

loc_0005C6E6: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005C702; /* je: equal / zero */

loc_0005C6ED: ;
    ecx = SX8(LO8(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0005C702: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_S(LO16(ebx), LO16(ebx))) goto loc_0005C718; /* jl: less (signed <) */

loc_0005C70B: ;
    edx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_0005C718: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x1E;
    PUSH32(esp, 0); sub_00159EC0(); /* call 0x00159EC0 */

loc_0005C734: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C743: ;
    if (CMP_NE(LO16(eax), 0x28)) goto loc_0005C774; /* jne: not equal / not zero */

loc_0005C749: ;
    if (TEST_NZ(edx, edx)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005C751: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C75C: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000DC2E0(); /* call 0x000DC2E0 */

loc_0005C765: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C774: ;
    if (CMP_NE(LO16(eax), 0x29)) goto loc_0005C7B5; /* jne: not equal / not zero */

loc_0005C77A: ;
    if (TEST_Z(edx, edx)) goto loc_0005C799; /* je: equal / zero */

loc_0005C77E: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DBD30(); /* call 0x000DBD30 */

loc_0005C78A: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C799: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C7A4: ;
    PUSH32(esp, 0); sub_000DBD80(); /* call 0x000DBD80 */

loc_0005C7A9: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C7B5: ;
    if (CMP_NE(LO16(eax), 0x2A)) goto loc_0005C83A; /* jne: not equal / not zero */

loc_0005C7BF: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    SET_LO8(eax, MEM8(ebx + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x6493A8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = 5;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005C7F4; /* je: equal / zero */

loc_0005C7E7: ;
    eax = SX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0005C7F4: ;
    SET_LO8(eax, MEM8(ebx + 5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005C7FE; /* je: equal / zero */

loc_0005C7FB: ;
    ecx = SX8(LO8(eax));

loc_0005C7FE: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_S(LO16(ebx), LO16(ebx))) goto loc_0005C814; /* jl: less (signed <) */

loc_0005C807: ;
    edx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_0005C814: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000E9480(); /* call 0x000E9480 */

loc_0005C82B: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C83A: ;
    if (CMP_NE(LO16(eax), 0x2B)) goto loc_0005C866; /* jne: not equal / not zero */

loc_0005C840: ;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00179680(); /* call 0x00179680 */

loc_0005C857: ;
    esp = esp + 0x10;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C866: ;
    if (CMP_EQ(LO16(eax), 0x2C)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C870: ;
    if (CMP_NE(LO16(eax), 0x2F)) goto loc_0005C8CE; /* jne: not equal / not zero */

loc_0005C876: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005CB86; /* je: equal / zero */

loc_0005C881: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005C88C: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 1);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005C8AC: ;
    eax = eax - MEM32(ebp + 0x14);
    esp = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    esi = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0); sub_000DDBB0(); /* call 0x000DDBB0 */

loc_0005C8BF: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C8CE: ;
    if (CMP_NE(LO16(eax), 0x39)) goto loc_0005C924; /* jne: not equal / not zero */

loc_0005C8D4: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005C8DF: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x39);
    PUSH32(esp, 1);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005C8FF: ;
    eax = eax - MEM32(ebp + 0x14);
    esp = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    ecx = eax + 8;
    PUSH32(esp, ecx);
    ecx = eax + 4;
    PUSH32(esp, 0); sub_00177E90(); /* call 0x00177E90 */

loc_0005C915: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C924: ;
    if (CMP_NE(LO16(eax), 0x3A)) goto loc_0005C962; /* jne: not equal / not zero */

loc_0005C92A: ;
    eax = MEM32(ebp + 0x20);
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = esp + 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00177BE0(); /* call 0x00177BE0 */

loc_0005C956: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C962: ;
    if (CMP_NE(LO16(eax), 0xA4)) goto loc_0005C9BC; /* jne: not equal / not zero */

loc_0005C968: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005C973: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 5));
    eax = esp + 0x14;
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005C998: ;
    edi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = eax - edi;
    esp = esp + 0x28;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0016F1B0(); /* call 0x0016F1B0 */

loc_0005C9AD: ;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C9BC: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C9C5: ;
    SET_LO8(ecx, MEM8(0x68C321));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005C9ED; /* jne: not equal / not zero */

loc_0005C9CF: ;
    PUSH32(esp, 0); sub_0001B0F0(); /* call 0x0001B0F0 */

loc_0005C9D4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005CB86; /* je: equal / zero */

loc_0005C9DC: ;
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_0005C9E1: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005C9ED: ;
    SET_LO8(ecx, MEM8(ebx + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CA19; /* jne: not equal / not zero */

loc_0005C9F4: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0001AF70(); /* call 0x0001AF70 */

loc_0005CA02: ;
    eax = MEM32(ebp + 0x14);
    MEM32(0x76F0A8) = eax;
    esp = esp + 0xC;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005CA19: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_0005CB53; /* jne: not equal / not zero */

loc_0005CA22: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1E);
    ecx = SX8(LO8(eax));
    MEM32(esp + 0x14) = ecx;
    ecx = edi + esi;
    edx = MEM32(ecx * 4 + 0x76EA70);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(edx, edx)) goto loc_0005CB1A; /* je: equal / zero */

loc_0005CA42: ;
    edi = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    eax = edx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    MEM32(esp + 0x18) = esi;
    esi = eax;
    esi = esi - edx;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x4C) = edi;
    if (CMP_AE(ecx, edi)) goto loc_0005CB1A; /* jae: above or equal (unsigned >=) */

loc_0005CA6C: ;
    /* nop */

loc_0005CA70: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CA84; /* jne: not equal / not zero */

loc_0005CA77: ;
    if (CMP_NE(MEM8(eax), LO8(ecx))) goto loc_0005CA84; /* jne: not equal / not zero */

loc_0005CA7B: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005CB02;

loc_0005CA84: ;
    if (CMP_BE(eax, ebx)) goto loc_0005CAA7; /* jbe: below or equal (unsigned <=) */

loc_0005CA88: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(edx, MEM32(esp + 0x14))) goto loc_0005CAA3; /* jne: not equal / not zero */

loc_0005CA91: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    if (CMP_NE(edi, edx)) goto loc_0005CAA3; /* jne: not equal / not zero */

loc_0005CA9D: ;
    if (CMP_EQ(MEM8(eax + 4), 2)) goto loc_0005CB1A; /* je: equal / zero */

loc_0005CAA3: ;
    edi = MEM32(esp + 0x4C);

loc_0005CAA7: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005CAF4; /* jne: not equal / not zero */

loc_0005CAAB: ;
    goto loc_0005CAB0;

    /* nop */

loc_0005CAB0: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005CAEC; /* je: equal / zero */

loc_0005CAB5: ;
    esi = esi + 8;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    eax = eax + 8;
    if (CMP_AE(ecx, edi)) goto loc_0005CAF4; /* jae: above or equal (unsigned >=) */

loc_0005CAC4: ;
    if (CMP_BE(eax, ebx)) goto loc_0005CAE3; /* jbe: below or equal (unsigned <=) */

loc_0005CAC8: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(edx, MEM32(esp + 0x14))) goto loc_0005CAE3; /* jne: not equal / not zero */

loc_0005CAD1: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    if (CMP_NE(edx, ecx)) goto loc_0005CAE3; /* jne: not equal / not zero */

loc_0005CADD: ;
    if (CMP_EQ(MEM8(eax + 4), 2)) goto loc_0005CB1A; /* je: equal / zero */

loc_0005CAE3: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005CAB0; /* je: equal / zero */

loc_0005CAEA: ;
    goto loc_0005CAF4;

loc_0005CAEC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x18) = ecx;

loc_0005CAF4: ;
    edx = ZX8(MEM8(eax + 1));
    ecx = MEM32(esp + 0x18);
    ecx = ecx + edx;
    edx = MEM32(esp + 0x20);

loc_0005CB02: ;
    eax = eax + 8;
    esi = eax;
    esi = esi - edx;
    MEM32(esp + 0x18) = ecx;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_B(ecx, edi)) goto loc_0005CA70; /* jb: below (unsigned <) */

loc_0005CB1A: ;
    SET_LO16(ebx, MEM16(ebx + 6));
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0005CB86; /* je: equal / zero */

loc_0005CB23: ;
    ecx = SX16(LO16(ebx));
    ecx = ecx << 0x10;
    eax = 0x80808081u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005CB42: ;
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_0005CB47: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005CB53: ;
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0005C9DC; /* je: equal / zero */

loc_0005CB5C: ;
    if (CMP_NE(LO8(ecx), 4)) goto loc_0005CB77; /* jne: not equal / not zero */

loc_0005CB61: ;
    MEM32(0x847050) = 2;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005CB77: ;
    if (CMP_NE(LO8(ecx), 5)) goto loc_0005CB86; /* jne: not equal / not zero */

loc_0005CB7C: ;
    MEM32(0x847050) = 1;

loc_0005CB86: ;
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
 * sub_0005CD10
 * Original: 0x0005CD10 - 0x0005CD4A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CD10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005CD10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + 0x110;
    edx = 2;
    ebx = 0; /* xor self */

loc_0005CD20: ;
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM8(ecx + 4) = LO8(ebx);
    MEM16(ecx + 6) = LO16(ebx);
    edi = ecx + 8;
    esi = 1;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    ecx = ecx + 0x18;
    edx--;
    MEM32(edi + 0xC) = esi;
    if ((edx != 0)) goto loc_0005CD20; /* jne: not equal / not zero */

loc_0005CD46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005CD50
 * Original: 0x0005CD50 - 0x0005E23A (5354 bytes, 1762 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CD50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005CD50: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(ebp));
    (void)0; /* cmp LO8(eax), 6 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    if (CMP_EQ(LO8(eax), 6)) goto loc_0005DC8E; /* je: equal / zero */

loc_0005CD70: ;
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_0005DC8E; /* je: equal / zero */

loc_0005CD78: ;
    if (CMP_NE(LO8(eax), 8)) goto loc_0005D2F5; /* jne: not equal / not zero */

loc_0005CD80: ;
    SET_LO8(eax, MEM8(0x68C321));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005E22D; /* je: equal / zero */

loc_0005CD8D: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005CDB8; /* je: equal / zero */

loc_0005CD96: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 5);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 4);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D56D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0005CDB5: ;
    esp = esp + 0x10;

loc_0005CDB8: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005CE04; /* jne: not equal / not zero */

loc_0005CDBF: ;
    if (TEST_Z(ebx, ebx)) goto loc_0005CDE0; /* je: equal / zero */

loc_0005CDC3: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x3C);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, 0); sub_000207A0(); /* call 0x000207A0 */

loc_0005CDD8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005CDE0: ;
    edx = MEM32(0x847024);
    ecx = MEM32(edx + 0x3C);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_0005CDF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005CE04: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0005CE3E; /* jne: not equal / not zero */

loc_0005CE08: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 6);
    ecx = 0; /* xor self */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    SET_LO8(ecx, MEM8(ebp + 5));
    eax = 1;
    PUSH32(esp, edx);
    edx = MEM32(0x847024);
    ecx--;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000201E0(); /* call 0x000201E0 */

loc_0005CE31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005CE3E: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0005CE6F; /* jne: not equal / not zero */

loc_0005CE42: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 6);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x148);
    ecx = MEM32(0x847024);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00020370(); /* call 0x00020370 */

loc_0005CE62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005CE6F: ;
    if (CMP_EQ(LO8(eax), 3)) goto loc_0005E22D; /* je: equal / zero */

loc_0005CE77: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_0005D06F; /* jne: not equal / not zero */

loc_0005CE7F: ;
    edx = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 5);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x44);
    edx = edx + eax;
    eax = MEM32(edx * 4 + 0x76EA70);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_0005CF9E; /* je: equal / zero */

loc_0005CEB7: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edi = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - edi;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005CF9E; /* jae: above or equal (unsigned >=) */

loc_0005CEDB: ;
    goto loc_0005CEE0;

    /* nop */

loc_0005CEE0: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005CEF4; /* jne: not equal / not zero */

loc_0005CEE7: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005CEF4; /* jne: not equal / not zero */

loc_0005CEEB: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005CF86;

loc_0005CEF4: ;
    if (CMP_BE(eax, ebp)) goto loc_0005CF29; /* jbe: below or equal (unsigned <=) */

loc_0005CEF8: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    (void)0; /* cmp ebx, MEM32(esp + 0x28) - flags set for next jcc */
    ebx = MEM32(esp + 0x14);
    if (CMP_NE(ebx, MEM32(esp + 0x28))) goto loc_0005CF25; /* jne: not equal / not zero */

loc_0005CF05: ;
    ebp = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebp, ebx)) goto loc_0005CF25; /* jne: not equal / not zero */

loc_0005CF0D: ;
    if (CMP_NE(MEM8(eax + 4), 5)) goto loc_0005CF25; /* jne: not equal / not zero */

loc_0005CF13: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 5);
    (void)0; /* cmp ebx, MEM32(esp + 0x18) - flags set for next jcc */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(ebx, MEM32(esp + 0x18))) goto loc_0005CFE7; /* je: equal / zero */

loc_0005CF25: ;
    ebp = MEM32(esp + 0x40);

loc_0005CF29: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005CF80; /* jne: not equal / not zero */

loc_0005CF2D: ;
    /* nop */

loc_0005CF30: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005CF78; /* je: equal / zero */

loc_0005CF35: ;
    ecx = ecx + 8;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, edi)) goto loc_0005CF7C; /* jae: above or equal (unsigned >=) */

loc_0005CF44: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005CF6F; /* jbe: below or equal (unsigned <=) */

loc_0005CF4A: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(edx, MEM32(esp + 0x28))) goto loc_0005CF6F; /* jne: not equal / not zero */

loc_0005CF53: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(edx, ebx)) goto loc_0005CF6F; /* jne: not equal / not zero */

loc_0005CF5B: ;
    if (CMP_NE(MEM8(eax + 4), 5)) goto loc_0005CF6F; /* jne: not equal / not zero */

loc_0005CF61: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(edx, MEM32(esp + 0x18))) goto loc_0005D011; /* je: equal / zero */

loc_0005CF6F: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0005CF30; /* je: equal / zero */

loc_0005CF76: ;
    goto loc_0005CF7C;

loc_0005CF78: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005CF7C: ;
    ebp = MEM32(esp + 0x40);

loc_0005CF80: ;
    ecx = ZX8(MEM8(eax + 1));
    esi = esi + ecx;

loc_0005CF86: ;
    edx = MEM32(esp + 0x10);
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005CEE0; /* jb: below (unsigned <) */

loc_0005CF9E: ;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(ecx * 4 + 0x76F0E8);

loc_0005CFA9: ;
    ecx = MEM32(esp + 0x60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0005D03C; /* je: equal / zero */

loc_0005CFB9: ;
    edx = MEM32(esp + 0x40);
    ecx--;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 6);
    edx = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000201E0(); /* call 0x000201E0 */

loc_0005CFDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005CFE7: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esi = esi << 8;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005CFA9;

loc_0005D011: ;
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esi = esi << 8;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    ecx = esi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005CFA9;

loc_0005D03C: ;
    eax = eax - MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    ecx--;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 6);
    edx = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00020030(); /* call 0x00020030 */

loc_0005D062: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D06F: ;
    if (CMP_NE(LO8(eax), 6)) goto loc_0005D20A; /* jne: not equal / not zero */

loc_0005D077: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x40);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 2);
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(esp + 0x44);
    edx = edx + eax;
    eax = MEM32(edx * 4 + 0x76EA70);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_0005D170; /* je: equal / zero */

loc_0005D0AA: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edi = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - edi;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005D170; /* jae: above or equal (unsigned >=) */

loc_0005D0CE: ;
    edi = edi;

loc_0005D0D0: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005D0E1; /* jne: not equal / not zero */

loc_0005D0D7: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005D0E1; /* jne: not equal / not zero */

loc_0005D0DB: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005D158;

loc_0005D0E1: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005D10A; /* jbe: below or equal (unsigned <=) */

loc_0005D0E7: ;
    ebp = (uint32_t)(int32_t)SMEM8(eax);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(ebp, ebx)) goto loc_0005D10E; /* jne: not equal / not zero */

loc_0005D0F2: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, ebp)) goto loc_0005D104; /* jne: not equal / not zero */

loc_0005D0FA: ;
    if (CMP_EQ(MEM8(eax + 4), 7)) goto loc_0005D1B5; /* je: equal / zero */

loc_0005D104: ;
    ebx = MEM32(esp + 0x28);
    goto loc_0005D10E;

loc_0005D10A: ;
    ebp = MEM32(esp + 0x14);

loc_0005D10E: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005D152; /* jne: not equal / not zero */

loc_0005D112: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005D14E; /* je: equal / zero */

loc_0005D117: ;
    ecx = ecx + 8;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, edi)) goto loc_0005D152; /* jae: above or equal (unsigned >=) */

loc_0005D126: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005D145; /* jbe: below or equal (unsigned <=) */

loc_0005D12C: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(edx, ebx)) goto loc_0005D145; /* jne: not equal / not zero */

loc_0005D133: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(edx, ebp)) goto loc_0005D145; /* jne: not equal / not zero */

loc_0005D13B: ;
    if (CMP_EQ(MEM8(eax + 4), 7)) goto loc_0005D1DF; /* je: equal / zero */

loc_0005D145: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0005D112; /* je: equal / zero */

loc_0005D14C: ;
    goto loc_0005D152;

loc_0005D14E: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005D152: ;
    ecx = ZX8(MEM8(eax + 1));
    esi = esi + ecx;

loc_0005D158: ;
    edx = MEM32(esp + 0x10);
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005D0D0; /* jb: below (unsigned <) */

loc_0005D170: ;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(ecx * 4 + 0x76F0E8);

loc_0005D17B: ;
    eax = eax - MEM32(esp + 0x4C);
    if (CMP_G(eax, 1)) goto loc_0005D189; /* jg: greater (signed >) */

loc_0005D184: ;
    eax = 1;

loc_0005D189: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(0x847024);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    edx = MEM32(ecx + 0x3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x148);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00020370(); /* call 0x00020370 */

loc_0005D1A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D1B5: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esi = esi << 8;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005D17B;

loc_0005D1DF: ;
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esi = esi << 8;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    ecx = esi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005D17B;

loc_0005D20A: ;
    if (CMP_NE(LO8(eax), 8)) goto loc_0005D239; /* jne: not equal / not zero */

loc_0005D20E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 6);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    edx = MEM32(0x847024);
    PUSH32(esp, 0xFFFFFFFFu);
    eax++;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00020530(); /* call 0x00020530 */

loc_0005D22C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D239: ;
    if (CMP_NE(LO8(eax), 9)) goto loc_0005D27E; /* jne: not equal / not zero */

loc_0005D23D: ;
    SET_LO8(eax, MEM8(ebp + 5));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    edx = MEM32(0x847024);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    if (CMP_NE(LO8(eax), 1)) goto loc_0005D26A; /* jne: not equal / not zero */

loc_0005D253: ;
    eax = 7;
    PUSH32(esp, 0); sub_0001FEB0(); /* call 0x0001FEB0 */

loc_0005D25D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D26A: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0001FEB0(); /* call 0x0001FEB0 */

loc_0005D271: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D27E: ;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0005E22D; /* jns: not sign (positive) */

loc_0005D286: ;
    ecx = ZX8(MEM8(ebp + 5));
    eax = eax & 0x7F;
    edx = eax;
    eax = ZX16(MEM16(ebp + 6));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 / MEMF(0x7F9F5C); /* divss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_0005D2D6; /* jp: parity */

loc_0005D2C4: ;
    PUSH32(esp, 0); sub_00019A60(); /* call 0x00019A60 */

loc_0005D2C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D2D6: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00015DD0(); /* call 0x00015DD0 */

loc_0005D2E5: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D2F5: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_0005E22D; /* je: equal / zero */

loc_0005D2FD: ;
    if (CMP_NE(LO8(eax), 5)) goto loc_0005DC84; /* jne: not equal / not zero */

loc_0005D305: ;
    SET_LO16(eax, MEM16(ebp + 2));
    if (CMP_NE(LO16(eax), 1)) goto loc_0005D561; /* jne: not equal / not zero */

loc_0005D313: ;
    SET_LO8(eax, MEM8(0x68C321));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005E22D; /* je: equal / zero */

loc_0005D320: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005D3A7; /* jne: not equal / not zero */

loc_0005D32B: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005D34D: ;
    esp = esp + 0x28;
    eax = eax - edi;
    if (TEST_Z(ebx, ebx)) goto loc_0005D358; /* je: equal / zero */

loc_0005D356: ;
    eax = 0; /* xor self */

loc_0005D358: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 5);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 6), LO16(edx) - flags set for next jcc */
    PUSH32(esp, 0);
    SET_LO8(edx, (CMP_EQ(MEM16(ebp + 6), LO16(edx))) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = ZX8(MEM8(ecx + ecx * 2 + 0x68C485));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ecx + ecx * 2 + 0x68C486));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ecx + ecx * 2 + 0x68C484));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000FB6B0(); /* call 0x000FB6B0 */

loc_0005D389: ;
    esp = esp + 0x18;
    (void)0; /* cmp MEM16(ebp + 6), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_EQ(MEM16(ebp + 6), 0)) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    MEM8(0x7655FF) = LO8(ecx);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D3A7: ;
    if (TEST_Z(ebx, ebx)) goto loc_0005E22D; /* je: equal / zero */

loc_0005D3AF: ;
    edi = MEM32(esp + 0x50);
    ecx = MEM32(edi * 4 + 0x76F0F8);
    esi = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C00);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0x40) = 0;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x24) = eax;
    if (CMP_L(ecx, MEM32(edi * 4 + 0x76F0E8))) goto loc_0005D3F1; /* jl: less (signed <) */

loc_0005D3E5: ;
    edx = MEM32(0x76F0E4);
    MEM32(esp + 0x28) = edx;
    goto loc_0005D403;

loc_0005D3F1: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C00);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x28) = eax;

loc_0005D403: ;
    eax = MEM32(esp + 0x44);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1E);
    edx = edi + eax;
    ebp = MEM32(edx * 4 + 0x76EA70);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0005E22D; /* je: equal / zero */

loc_0005D420: ;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    ecx = ebp;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    ecx = ecx + 0x20;
    esi = ecx;
    esi = esi - ebp;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005E22D; /* jae: above or equal (unsigned >=) */

loc_0005D442: ;
    SET_LO8(eax, MEM8(ecx + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005D457; /* jne: not equal / not zero */

loc_0005D449: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0005D457; /* jne: not equal / not zero */

loc_0005D44E: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    goto loc_0005D4F0;

loc_0005D457: ;
    (void)0; /* cmp ebx, MEM32(esp + 0x24) - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx));
    if (CMP_G(ebx, MEM32(esp + 0x24))) goto loc_0005D47B; /* jg: greater (signed >) */

loc_0005D45F: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_0005D48D; /* jne: not equal / not zero */

loc_0005D464: ;
    if (CMP_NE(MEM16(ecx + 2), 1)) goto loc_0005D48D; /* jne: not equal / not zero */

loc_0005D46B: ;
    if (CMP_NE(MEM8(ecx + 4), 0)) goto loc_0005D48D; /* jne: not equal / not zero */

loc_0005D471: ;
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x40) = ecx;
    goto loc_0005D48D;

loc_0005D47B: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_0005D48D; /* jne: not equal / not zero */

loc_0005D480: ;
    if (CMP_NE(MEM16(ecx + 2), 1)) goto loc_0005D48D; /* jne: not equal / not zero */

loc_0005D487: ;
    if (CMP_EQ(MEM8(ecx + 4), 0)) goto loc_0005D504; /* je: equal / zero */

loc_0005D48D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005D4EA; /* jne: not equal / not zero */

loc_0005D491: ;
    eax = 1;

loc_0005D496: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0005D4E6; /* je: equal / zero */

loc_0005D49A: ;
    esi = esi + 8;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    ecx = ecx + 8;
    if (CMP_AE(edx, edi)) goto loc_0005D4EA; /* jae: above or equal (unsigned >=) */

loc_0005D4A9: ;
    (void)0; /* cmp ebx, MEM32(esp + 0x28) - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx));
    if (CMP_G(ebx, MEM32(esp + 0x28))) goto loc_0005D4CD; /* jg: greater (signed >) */

loc_0005D4B1: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_0005D4DE; /* jne: not equal / not zero */

loc_0005D4B6: ;
    if (CMP_NE(MEM16(ecx + 2), LO16(eax))) goto loc_0005D4DE; /* jne: not equal / not zero */

loc_0005D4BC: ;
    if (CMP_NE(MEM8(ecx + 4), 0)) goto loc_0005D4DE; /* jne: not equal / not zero */

loc_0005D4C2: ;
    MEM32(esp + 0x40) = ecx;
    eax = 1;
    goto loc_0005D4DE;

loc_0005D4CD: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_0005D4DE; /* jne: not equal / not zero */

loc_0005D4D2: ;
    if (CMP_NE(MEM16(ecx + 2), LO16(eax))) goto loc_0005D4DE; /* jne: not equal / not zero */

loc_0005D4D8: ;
    if (CMP_EQ(MEM8(ecx + 4), 0)) goto loc_0005D504; /* je: equal / zero */

loc_0005D4DE: ;
    if (CMP_EQ(MEM8(ecx + 1), 0)) goto loc_0005D496; /* je: equal / zero */

loc_0005D4E4: ;
    goto loc_0005D4EA;

loc_0005D4E6: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 2);

loc_0005D4EA: ;
    eax = ZX8(MEM8(ecx + 1));
    ebx = ebx + eax;

loc_0005D4F0: ;
    ecx = ecx + 8;
    esi = ecx;
    esi = esi - ebp;
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005D442; /* jb: below (unsigned <) */

loc_0005D504: ;
    eax = MEM32(esp + 0x40);
    if (TEST_Z(eax, eax)) goto loc_0005E22D; /* je: equal / zero */

loc_0005D510: ;
    ecx = 0; /* xor self */
    esi = eax;
    (void)0; /* cmp MEM16(esi + 6), LO16(ecx) - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(esi + 5);
    edx = ZX8(MEM8(eax + eax * 2 + 0x68C486));
    SET_LO8(ecx, (CMP_EQ(MEM16(esi + 6), LO16(ecx))) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + eax * 2 + 0x68C485));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + eax * 2 + 0x68C484));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FB6B0(); /* call 0x000FB6B0 */

loc_0005D544: ;
    esp = esp + 0x18;
    (void)0; /* cmp MEM16(esi + 6), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(MEM16(esi + 6), 0)) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    MEM8(0x7655FF) = LO8(eax);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D561: ;
    if (CMP_NE(LO16(eax), 4)) goto loc_0005D5E9; /* jne: not equal / not zero */

loc_0005D56B: ;
    eax = MEM32(esp + 0x54);
    if (TEST_Z(eax, eax)) goto loc_0005E22D; /* je: equal / zero */

loc_0005D577: ;
    esi = eax;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_0005D581: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0005D5CF; /* jne: not equal / not zero */

loc_0005D585: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x4B)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005D58F: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005D5B2; /* jne: not equal / not zero */

loc_0005D596: ;
    ecx = ecx | 0xFFFFFFFFu;
    edx = 2;
    eax = esi;
    PUSH32(esp, 0); sub_00088330(); /* call 0x00088330 */

loc_0005D5A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D5B2: ;
    ecx = SX8(LO8(eax));
    ecx--;
    edx = 2;
    eax = esi;
    PUSH32(esp, 0); sub_00088330(); /* call 0x00088330 */

loc_0005D5C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D5CF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0005D5D9: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D5E9: ;
    if (CMP_NE(LO16(eax), 0x5C)) goto loc_0005DA08; /* jne: not equal / not zero */

loc_0005D5F3: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005D5FE: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005D606: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x44);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1E);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 5);
    xmm0 = MEMF(0x7F9F5C); /* movss */
    edx = edx + eax;
    eax = MEM32(edx * 4 + 0x76EA70);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = eax;
    ebx = ecx;
    if (TEST_Z(eax, eax)) goto loc_0005D704; /* je: equal / zero */

loc_0005D63C: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edi = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - edi;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005D704; /* jae: above or equal (unsigned >=) */

loc_0005D660: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005D674; /* jne: not equal / not zero */

loc_0005D667: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005D674; /* jne: not equal / not zero */

loc_0005D66B: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005D6EC;

loc_0005D674: ;
    if (CMP_BE(eax, ebp)) goto loc_0005D696; /* jbe: below or equal (unsigned <=) */

loc_0005D678: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005D696; /* jne: not equal / not zero */

loc_0005D67D: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005D696; /* jne: not equal / not zero */

loc_0005D684: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_0005D696; /* jne: not equal / not zero */

loc_0005D68A: ;
    ebp = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebp, ebx)) goto loc_0005D764; /* je: equal / zero */

loc_0005D696: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005D6E2; /* jne: not equal / not zero */

loc_0005D69A: ;
    edx = MEM32(esp + 0x40);
    edi = edi;

loc_0005D6A0: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005D6DE; /* je: equal / zero */

loc_0005D6A5: ;
    ecx = ecx + 8;
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp >> 3);
    eax = eax + 8;
    if (CMP_AE(ebp, edi)) goto loc_0005D6E2; /* jae: above or equal (unsigned >=) */

loc_0005D6B4: ;
    if (CMP_BE(eax, edx)) goto loc_0005D6D6; /* jbe: below or equal (unsigned <=) */

loc_0005D6B8: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005D6D6; /* jne: not equal / not zero */

loc_0005D6BD: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005D6D6; /* jne: not equal / not zero */

loc_0005D6C4: ;
    if (CMP_NE(MEM8(eax + 4), 1)) goto loc_0005D6D6; /* jne: not equal / not zero */

loc_0005D6CA: ;
    ebp = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebp, ebx)) goto loc_0005D78E; /* je: equal / zero */

loc_0005D6D6: ;
    if (CMP_EQ(MEM8(eax + 1), 0)) goto loc_0005D6A0; /* je: equal / zero */

loc_0005D6DC: ;
    goto loc_0005D6E2;

loc_0005D6DE: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005D6E2: ;
    ecx = ZX8(MEM8(eax + 1));
    ebp = MEM32(esp + 0x40);
    esi = esi + ecx;

loc_0005D6EC: ;
    edx = MEM32(esp + 0x10);
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005D660; /* jb: below (unsigned <) */

loc_0005D704: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(ecx * 4 + 0x76F0E8);
    MEM32(esp + 0x20) = edx;

loc_0005D713: ;
    edi = MEM32(esp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_0005D845; /* je: equal / zero */

loc_0005D71F: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx * 4 + 0x76EA70);
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - edi;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005D845; /* jae: above or equal (unsigned >=) */

loc_0005D74A: ;
    /* nop */

loc_0005D750: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005D7B9; /* jne: not equal / not zero */

loc_0005D757: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005D7B9; /* jne: not equal / not zero */

loc_0005D75B: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005D82D;

loc_0005D764: ;
    esi = esi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ecx = esi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x20) = eax;
    goto loc_0005D713;

loc_0005D78E: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    ecx = esi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM32(esp + 0x20) = eax;
    goto loc_0005D713;

loc_0005D7B9: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005D7DD; /* jbe: below or equal (unsigned <=) */

loc_0005D7BF: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005D7DD; /* jne: not equal / not zero */

loc_0005D7C4: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005D7DD; /* jne: not equal / not zero */

loc_0005D7CB: ;
    if (CMP_NE(MEM8(eax + 4), 2)) goto loc_0005D7DD; /* jne: not equal / not zero */

loc_0005D7D1: ;
    ebp = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebp, ebx)) goto loc_0005D8B4; /* je: equal / zero */

loc_0005D7DD: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005D827; /* jne: not equal / not zero */

loc_0005D7E1: ;
    edx = MEM32(esp + 0x40);

loc_0005D7E5: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005D823; /* je: equal / zero */

loc_0005D7EA: ;
    ecx = ecx + 8;
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp >> 3);
    eax = eax + 8;
    if (CMP_AE(ebp, edi)) goto loc_0005D827; /* jae: above or equal (unsigned >=) */

loc_0005D7F9: ;
    if (CMP_BE(eax, edx)) goto loc_0005D81B; /* jbe: below or equal (unsigned <=) */

loc_0005D7FD: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005D81B; /* jne: not equal / not zero */

loc_0005D802: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005D81B; /* jne: not equal / not zero */

loc_0005D809: ;
    if (CMP_NE(MEM8(eax + 4), 2)) goto loc_0005D81B; /* jne: not equal / not zero */

loc_0005D80F: ;
    ebp = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebp, ebx)) goto loc_0005D8DD; /* je: equal / zero */

loc_0005D81B: ;
    if (CMP_EQ(MEM8(eax + 1), 0)) goto loc_0005D7E5; /* je: equal / zero */

loc_0005D821: ;
    goto loc_0005D827;

loc_0005D823: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005D827: ;
    ecx = ZX8(MEM8(eax + 1));
    esi = esi + ecx;

loc_0005D82D: ;
    edx = MEM32(esp + 0x10);
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005D750; /* jb: below (unsigned <) */

loc_0005D845: ;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(ecx * 4 + 0x76F0E8);
    edi = 0; /* xor self */

loc_0005D852: ;
    eax = eax - MEM32(esp + 0x4C);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_NZ(edi, edi)) goto loc_0005D862; /* jne: not equal / not zero */

loc_0005D85E: ;
    MEM32(esp + 0x28) = edi;

loc_0005D862: ;
    edi = MEM32(esp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_0005D994; /* je: equal / zero */

loc_0005D86E: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx * 4 + 0x76EA70);
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    edx = eax;
    edx = edx - edi;
    edi = ZX16(MEM16(ecx * 2 + 0x76EFB8));
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_AE(ecx, edi)) goto loc_0005D994; /* jae: above or equal (unsigned >=) */

loc_0005D899: ;
    SET_LO8(ebx, 3);
    goto loc_0005D8A0;

    /* nop */

loc_0005D8A0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005D904; /* jne: not equal / not zero */

loc_0005D8A7: ;
    if (CMP_NE(MEM8(eax), LO8(ecx))) goto loc_0005D904; /* jne: not equal / not zero */

loc_0005D8AB: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005D97C;

loc_0005D8B4: ;
    edi = eax;
    esi = esi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005D852;

loc_0005D8DD: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    edi = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005D852;

loc_0005D904: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005D92B; /* jbe: below or equal (unsigned <=) */

loc_0005D90A: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005D92B; /* jne: not equal / not zero */

loc_0005D90F: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005D92B; /* jne: not equal / not zero */

loc_0005D916: ;
    if (CMP_NE(MEM8(eax + 4), LO8(ebx))) goto loc_0005D92B; /* jne: not equal / not zero */

loc_0005D91B: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ebx, MEM32(esp + 0x18))) goto loc_0005D9D8; /* je: equal / zero */

loc_0005D929: ;
    SET_LO8(ebx, 3);

loc_0005D92B: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005D976; /* jne: not equal / not zero */

loc_0005D92F: ;
    /* nop */

loc_0005D930: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005D972; /* je: equal / zero */

loc_0005D935: ;
    edx = edx + 8;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    eax = eax + 8;
    if (CMP_AE(ecx, edi)) goto loc_0005D976; /* jae: above or equal (unsigned >=) */

loc_0005D944: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005D969; /* jbe: below or equal (unsigned <=) */

loc_0005D94A: ;
    if (CMP_NE(MEM8(eax), 5)) goto loc_0005D969; /* jne: not equal / not zero */

loc_0005D94F: ;
    if (CMP_NE(MEM16(eax + 2), 0x5C)) goto loc_0005D969; /* jne: not equal / not zero */

loc_0005D956: ;
    if (CMP_NE(MEM8(eax + 4), LO8(ebx))) goto loc_0005D969; /* jne: not equal / not zero */

loc_0005D95B: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    if (CMP_EQ(ecx, MEM32(esp + 0x18))) goto loc_0005D9E4; /* je: equal / zero */

loc_0005D969: ;
    SET_LO8(ecx, MEM8(eax + 1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005D930; /* je: equal / zero */

loc_0005D970: ;
    goto loc_0005D976;

loc_0005D972: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005D976: ;
    edx = ZX8(MEM8(eax + 1));
    esi = esi + edx;

loc_0005D97C: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + 8;
    edx = eax;
    edx = edx - ecx;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_B(ecx, edi)) goto loc_0005D8A0; /* jb: below (unsigned <) */

loc_0005D994: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(ecx * 4 + 0x76F0E8);
    edi = 0; /* xor self */

loc_0005D9A1: ;
    esi = MEM32(esp + 0x20);
    eax = esi;
    eax = eax - edx;
    if (TEST_NZ(edi, edi)) goto loc_0005D9AF; /* jne: not equal / not zero */

loc_0005D9AD: ;
    eax = 0; /* xor self */

loc_0005D9AF: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x4C);
    esi = esi - eax;
    esi = esi - ecx;
    PUSH32(esp, edx);
    esi = esi - edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0016F390(); /* call 0x0016F390 */

loc_0005D9C8: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005D9D8: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    goto loc_0005D9EE;

loc_0005D9E4: ;
    esi = esi << 8;
    ecx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);

loc_0005D9EE: ;
    edi = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    edx = edx + eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    goto loc_0005D9A1;

loc_0005DA08: ;
    if (CMP_NE(LO16(eax), 0x56)) goto loc_0005DA9B; /* jne: not equal / not zero */

loc_0005DA12: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005DA66; /* jne: not equal / not zero */

loc_0005DA19: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DA21: ;
    SET_LO8(eax, MEM8(0x775AF2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005DA47; /* jne: not equal / not zero */

loc_0005DA2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(0x775AF4) = 0x258;
    MEM8(0x775B22) = 3;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DA47: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0005DA52; /* jne: not equal / not zero */

loc_0005DA4B: ;
    MEM8(0x775AF2) = 1;

loc_0005DA52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x775B22) = 3;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DA66: ;
    if (TEST_Z(ebx, ebx)) goto loc_0005DA81; /* je: equal / zero */

loc_0005DA6A: ;
    eax = 2;
    PUSH32(esp, 0); sub_001BD110(); /* call 0x001BD110 */

loc_0005DA74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DA81: ;
    SET_LO8(eax, MEM8(ebp + 5));
    POP32(esp, edi);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    MEM8(0x775B22) = LO8(eax);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DA9B: ;
    if (CMP_NE(LO16(eax), 0x76)) goto loc_0005DAC8; /* jne: not equal / not zero */

loc_0005DAA1: ;
    SET_LO8(eax, MEM8(ebp + 4));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0005DAB2; /* je: equal / zero */

loc_0005DAAA: ;
    (void)0; /* cmp MEM8(ebp + 5), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(ebp + 5), 1)) ? 1 : 0); /* sete */
    ecx++;

loc_0005DAB2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 6);
    PUSH32(esp, 0); sub_00140F40(); /* call 0x00140F40 */

loc_0005DABB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DAC8: ;
    if (CMP_NE(LO16(eax), 0x2D)) goto loc_0005DB6D; /* jne: not equal / not zero */

loc_0005DAD2: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 1);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005DAF4: ;
    esp = esp + 0x28;
    eax = eax - edi;
    if (TEST_Z(esi, esi)) goto loc_0005DB24; /* je: equal / zero */

loc_0005DAFD: ;
    SET_LO8(ecx, MEM8(ebp + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DB08: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 5);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00140960(); /* call 0x00140960 */

loc_0005DB14: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DB24: ;
    ecx = MEM32(esp + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_0005E22D; /* je: equal / zero */

loc_0005DB30: ;
    SET_LO8(edx, MEM8(ebp + 4));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005DB51; /* jne: not equal / not zero */

loc_0005DB37: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00140900(); /* call 0x00140900 */

loc_0005DB41: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DB51: ;
    if (TEST_Z(ebx, ebx)) goto loc_0005E22D; /* je: equal / zero */

loc_0005DB59: ;
    eax = ecx;
    PUSH32(esp, 0); sub_001409C0(); /* call 0x001409C0 */

loc_0005DB60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DB6D: ;
    if (CMP_NE(LO16(eax), 0x57)) goto loc_0005DBDD; /* jne: not equal / not zero */

loc_0005DB73: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005DBBB; /* jne: not equal / not zero */

loc_0005DB7A: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x57);
    PUSH32(esp, 1);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005DB9E: ;
    eax = eax - edi;
    esp = esp + 0x28;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00123210(); /* call 0x00123210 */

loc_0005DBAB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DBBB: ;
    if (TEST_Z(ebx, ebx)) goto loc_0005E22D; /* je: equal / zero */

loc_0005DBC3: ;
    edx = MEM32(esp + 0x54);
    ecx = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, 0); sub_00123AC0(); /* call 0x00123AC0 */

loc_0005DBD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DBDD: ;
    if (CMP_NE(LO16(eax), 0x9B)) goto loc_0005DC32; /* jne: not equal / not zero */

loc_0005DBE3: ;
    if (TEST_Z(esi, esi)) goto loc_0005DC84; /* je: equal / zero */

loc_0005DBEB: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(esi + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0005DC84; /* je: equal / zero */

loc_0005DBFF: ;
    if (TEST_Z(eax, eax)) goto loc_0005DC84; /* je: equal / zero */

loc_0005DC07: ;
    edx = MEM32(edx + 0x14);
    edx = MEM32(edx + 4);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 6);
    ecx = ecx + ecx * 4;
    ecx = edx + ecx * 4;
    PUSH32(esp, 0); sub_003EDBA0(); /* call 0x003EDBA0 */

loc_0005DC22: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DC32: ;
    if (CMP_NE(LO16(eax), 0xA5)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DC3C: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DC47: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA5);
    PUSH32(esp, 1);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00055A70(); /* call 0x00055A70 */

loc_0005DC6C: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0016F220(); /* call 0x0016F220 */

loc_0005DC74: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DC84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DC8E: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    ecx = ecx & 0xF;
    MEM32(esp + 0x2C) = ecx;
    if ((ecx == 0)) goto loc_0005DCB2; /* je: equal / zero */

loc_0005DC9C: ;
    if (CMP_EQ(ecx, 3)) goto loc_0005DCA6; /* je: equal / zero */

loc_0005DCA1: ;
    if (CMP_NE(ecx, 4)) goto loc_0005DCAA; /* jne: not equal / not zero */

loc_0005DCA6: ;
    if (CMP_NE(LO8(eax), 0xA)) goto loc_0005DCB2; /* jne: not equal / not zero */

loc_0005DCAA: ;
    if (CMP_NE(LO8(eax), 6)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DCB2: ;
    if (CMP_NE(ecx, 4)) goto loc_0005DCD6; /* jne: not equal / not zero */

loc_0005DCB7: ;
    edx = MEM32(0x847024);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    ebx = MEM32(edx + 0x40);
    PUSH32(esp, 0); sub_00025540(); /* call 0x00025540 */

loc_0005DCC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005DCD6: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    xmm0 = MEMF(0x7F9F5C); /* movss */
    edx = SX8(LO8(eax));
    eax = MEM32(esp + 0x50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = edx;
    edx = eax + ecx;
    ebx = MEM32(edx * 4 + 0x76EA70);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0005DDD1; /* je: equal / zero */

loc_0005DD12: ;
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    eax = ebx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - ebx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005DDD1; /* jae: above or equal (unsigned >=) */

loc_0005DD34: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005DD48; /* jne: not equal / not zero */

loc_0005DD3B: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005DD48; /* jne: not equal / not zero */

loc_0005DD3F: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005DDBD;

loc_0005DD48: ;
    if (CMP_BE(eax, ebp)) goto loc_0005DD6D; /* jbe: below or equal (unsigned <=) */

loc_0005DD4C: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, MEM32(esp + 0x18))) goto loc_0005DD69; /* jne: not equal / not zero */

loc_0005DD55: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, MEM32(esp + 0x14))) goto loc_0005DD69; /* jne: not equal / not zero */

loc_0005DD5F: ;
    if (CMP_EQ(MEM8(eax + 4), 1)) goto loc_0005DE84; /* je: equal / zero */

loc_0005DD69: ;
    ebp = MEM32(esp + 0x40);

loc_0005DD6D: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005DDB3; /* jne: not equal / not zero */

loc_0005DD71: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005DDAF; /* je: equal / zero */

loc_0005DD76: ;
    ecx = ecx + 8;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = eax + 8;
    if (CMP_AE(edx, edi)) goto loc_0005DDB3; /* jae: above or equal (unsigned >=) */

loc_0005DD85: ;
    if (CMP_BE(eax, ebp)) goto loc_0005DDA6; /* jbe: below or equal (unsigned <=) */

loc_0005DD89: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(edx, MEM32(esp + 0x18))) goto loc_0005DDA6; /* jne: not equal / not zero */

loc_0005DD92: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(edx, MEM32(esp + 0x14))) goto loc_0005DDA6; /* jne: not equal / not zero */

loc_0005DD9C: ;
    if (CMP_EQ(MEM8(eax + 4), 1)) goto loc_0005DE92; /* je: equal / zero */

loc_0005DDA6: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0005DD71; /* je: equal / zero */

loc_0005DDAD: ;
    goto loc_0005DDB3;

loc_0005DDAF: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005DDB3: ;
    ecx = ZX8(MEM8(eax + 1));
    ebx = MEM32(esp + 0x10);
    esi = esi + ecx;

loc_0005DDBD: ;
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - ebx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005DD34; /* jb: below (unsigned <) */

loc_0005DDD1: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx * 4 + 0x76F0E8);
    ecx = 0; /* xor self */

loc_0005DDDE: ;
    edi = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x40);
    eax = eax - edi;
    ebp = eax;
    SET_LO8(eax, MEM8(edx));
    (void)0; /* cmp LO8(eax), 6 - flags set for next jcc */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(LO8(eax), 6)) goto loc_0005DDF8; /* je: equal / zero */

loc_0005DDF4: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0005DDFF; /* jne: not equal / not zero */

loc_0005DDF8: ;
    ebp = ebp | 0xFFFFFFFFu;
    MEM32(esp + 0x20) = ebp;

loc_0005DDFF: ;
    edi = MEM32(esp + 0x60);
    esi = 0; /* xor self */
    if (CMP_EQ(edi, esi)) goto loc_0005DE1F; /* je: equal / zero */

loc_0005DE09: ;
    if (TEST_NZ(MEM8(edx + 4), 0x10)) goto loc_0005DE1F; /* jne: not equal / not zero */

loc_0005DE0F: ;
    if (CMP_NE(LO8(eax), 0xA)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DE17: ;
    if (CMP_NE(ecx, esi)) goto loc_0005E22D; /* jne: not equal / not zero */

loc_0005DE1F: ;
    (void)0; /* cmp LO8(eax), 0xA - flags set for next jcc */
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = esi;
    if (CMP_NE(LO8(eax), 0xA)) goto loc_0005E09B; /* jne: not equal / not zero */

loc_0005DE2F: ;
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_0005DF44; /* je: equal / zero */

loc_0005DE3B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx * 4 + 0x76EA70);
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - ebx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005DF44; /* jae: above or equal (unsigned >=) */

loc_0005DE66: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_0005DE70: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005DEB9; /* jne: not equal / not zero */

loc_0005DE77: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005DEB9; /* jne: not equal / not zero */

loc_0005DE7B: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005DF30;

loc_0005DE84: ;
    ecx = eax;
    esi = esi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    goto loc_0005DE9E;

loc_0005DE92: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    ecx = eax;

loc_0005DE9E: ;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005DDDE;

loc_0005DEB9: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005DEDA; /* jbe: below or equal (unsigned <=) */

loc_0005DEBF: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, ebp)) goto loc_0005DEDA; /* jne: not equal / not zero */

loc_0005DEC6: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, MEM32(esp + 0x14))) goto loc_0005DEDA; /* jne: not equal / not zero */

loc_0005DED0: ;
    if (CMP_EQ(MEM8(eax + 4), 2)) goto loc_0005DFB4; /* je: equal / zero */

loc_0005DEDA: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebp = MEM32(esp + 0x18);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005DF26; /* jne: not equal / not zero */

loc_0005DEE2: ;
    edx = MEM32(esp + 0x14);

loc_0005DEE6: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005DF22; /* je: equal / zero */

loc_0005DEEB: ;
    ecx = ecx + 8;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    eax = eax + 8;
    if (CMP_AE(ebx, edi)) goto loc_0005DF26; /* jae: above or equal (unsigned >=) */

loc_0005DEFA: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005DF19; /* jbe: below or equal (unsigned <=) */

loc_0005DF00: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, ebp)) goto loc_0005DF19; /* jne: not equal / not zero */

loc_0005DF07: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, edx)) goto loc_0005DF19; /* jne: not equal / not zero */

loc_0005DF0F: ;
    if (CMP_EQ(MEM8(eax + 4), 2)) goto loc_0005DFC2; /* je: equal / zero */

loc_0005DF19: ;
    SET_LO8(ebx, MEM8(eax + 1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0005DEE6; /* je: equal / zero */

loc_0005DF20: ;
    goto loc_0005DF26;

loc_0005DF22: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005DF26: ;
    ecx = ZX8(MEM8(eax + 1));
    ebx = MEM32(esp + 0x10);
    esi = esi + ecx;

loc_0005DF30: ;
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - ebx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005DE70; /* jb: below (unsigned <) */

loc_0005DF44: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx * 4 + 0x76F0E8);
    ecx = 0; /* xor self */

loc_0005DF51: ;
    eax = eax - MEM32(esp + 0x4C);
    if (TEST_Z(ecx, ecx)) goto loc_0005DF63; /* je: equal / zero */

loc_0005DF59: ;
    if (CMP_GE(eax, MEM32(esp + 0x20))) goto loc_0005DF63; /* jge: greater or equal (signed >=) */

loc_0005DF5F: ;
    MEM32(esp + 0x24) = eax;

loc_0005DF63: ;
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_0005E074; /* je: equal / zero */

loc_0005DF6F: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx * 4 + 0x76EA70);
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    edi = ZX16(MEM16(edx * 2 + 0x76EFB8));
    eax = eax + 0x20;
    ecx = eax;
    ecx = ecx - ebx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_AE(edx, edi)) goto loc_0005E074; /* jae: above or equal (unsigned >=) */

loc_0005DF9A: ;
    ebp = MEM32(esp + 0x18);
    edi = edi;

loc_0005DFA0: ;
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005DFE9; /* jne: not equal / not zero */

loc_0005DFA7: ;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0005DFE9; /* jne: not equal / not zero */

loc_0005DFAB: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);
    goto loc_0005E060;

loc_0005DFB4: ;
    ecx = eax;
    esi = esi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    goto loc_0005DFCE;

loc_0005DFC2: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    ecx = eax;

loc_0005DFCE: ;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005DF51;

loc_0005DFE9: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005E00A; /* jbe: below or equal (unsigned <=) */

loc_0005DFEF: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, ebp)) goto loc_0005E00A; /* jne: not equal / not zero */

loc_0005DFF6: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, MEM32(esp + 0x14))) goto loc_0005E00A; /* jne: not equal / not zero */

loc_0005E000: ;
    if (CMP_EQ(MEM8(eax + 4), 3)) goto loc_0005E1A1; /* je: equal / zero */

loc_0005E00A: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebp = MEM32(esp + 0x18);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0005E056; /* jne: not equal / not zero */

loc_0005E012: ;
    edx = MEM32(esp + 0x14);

loc_0005E016: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0005E052; /* je: equal / zero */

loc_0005E01B: ;
    ecx = ecx + 8;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    eax = eax + 8;
    if (CMP_AE(ebx, edi)) goto loc_0005E056; /* jae: above or equal (unsigned >=) */

loc_0005E02A: ;
    if (CMP_BE(eax, MEM32(esp + 0x40))) goto loc_0005E049; /* jbe: below or equal (unsigned <=) */

loc_0005E030: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(ebx, ebp)) goto loc_0005E049; /* jne: not equal / not zero */

loc_0005E037: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 2);
    if (CMP_NE(ebx, edx)) goto loc_0005E049; /* jne: not equal / not zero */

loc_0005E03F: ;
    if (CMP_EQ(MEM8(eax + 4), 3)) goto loc_0005E1AF; /* je: equal / zero */

loc_0005E049: ;
    SET_LO8(ebx, MEM8(eax + 1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0005E016; /* je: equal / zero */

loc_0005E050: ;
    goto loc_0005E056;

loc_0005E052: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 2);

loc_0005E056: ;
    ecx = ZX8(MEM8(eax + 1));
    ebx = MEM32(esp + 0x10);
    esi = esi + ecx;

loc_0005E060: ;
    eax = eax + 8;
    ecx = eax;
    ecx = ecx - ebx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 3);
    if (CMP_B(edx, edi)) goto loc_0005DFA0; /* jb: below (unsigned <) */

loc_0005E074: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx * 4 + 0x76F0E8);
    ecx = 0; /* xor self */

loc_0005E081: ;
    esi = MEM32(esp + 0x4C);
    ebp = MEM32(esp + 0x20);
    eax = eax - esi;
    if (TEST_Z(ecx, ecx)) goto loc_0005E09B; /* je: equal / zero */

loc_0005E08F: ;
    if (CMP_GE(eax, ebp)) goto loc_0005E09B; /* jge: greater or equal (signed >=) */

loc_0005E093: ;
    ecx = ebp;
    ecx = ecx - eax;
    MEM32(esp + 0x28) = ecx;

loc_0005E09B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1E62);
    PUSH32(esp, 0x5D5934);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0005E0AE: ;
    edi = eax;
    esp = esp + 0x10;
    if (TEST_Z(edi, edi)) goto loc_0005E22D; /* je: equal / zero */

loc_0005E0BB: ;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(esp + 0x40);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005E0FB; /* je: equal / zero */

loc_0005E0C8: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D5738);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0005E0F8: ;
    esp = esp + 0x24;

loc_0005E0FB: ;
    eax = MEM32(esp + 0x50);
    SET_LO8(ecx, MEM8(eax + 0x76F0DC));
    SET_LO8(edx, MEM8(esp + 0x44));
    MEM8(edi) = LO8(eax);
    SET_LO16(eax, MEM16(esp + 0x24));
    MEM8(edi + 0x10) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x28));
    MEM8(edi + 1) = LO8(edx);
    MEM16(edi + 0xA) = LO16(eax);
    eax = MEM32(esp + 0x58);
    MEM32(edi + 4) = ebp;
    MEM16(edi + 8) = LO16(ebp);
    MEM16(edi + 0xC) = LO16(ecx);
    MEM16(edi + 0xE) = 0;
    (void)0; /* cmp MEM8(ebx), 0xA - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM8(ebx), 0xA)) ? 1 : 0); /* sete */
    MEM8(edi + 2) = LO8(edx);
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005E186; /* je: equal / zero */

loc_0005E166: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, 0); sub_00021CD0(); /* call 0x00021CD0 */

loc_0005E16F: ;
    eax = MEM32(eax + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D5710);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0005E183: ;
    esp = esp + 8;

loc_0005E186: ;
    if (CMP_EQ(MEM32(esp + 0x2C), 3)) goto loc_0005E20F; /* je: equal / zero */

loc_0005E191: ;
    ecx = MEM32(esp + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_0005E1D6; /* je: equal / zero */

loc_0005E199: ;
    eax = MEM32(ecx + 0x580);
    goto loc_0005E1D9;

loc_0005E1A1: ;
    ecx = eax;
    esi = esi << 8;
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    goto loc_0005E1BB;

loc_0005E1AF: ;
    esi = esi << 8;
    edx = (int32_t)xmm0; /* cvttss2si */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    ecx = eax;

loc_0005E1BB: ;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    goto loc_0005E081;

loc_0005E1D6: ;
    eax = eax | 0xFFFFFFFFu;

loc_0005E1D9: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    PUSH32(esp, eax);
    eax = 8;
    PUSH32(esp, 0); sub_00025C40(); /* call 0x00025C40 */

loc_0005E202: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0005E20F: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    edx = MEM32(edx + 0x40);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00024EF0(); /* call 0x00024EF0 */

loc_0005E22D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0005E240
 * Original: 0x0005E240 - 0x0005E364 (292 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005E240: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x76F0DC));
    ecx = MEM32(esi * 4 + 0x76EF2C);
    edx = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    eax = ecx + edx * 8;
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ecx, 2)) goto loc_0005E2F7; /* jne: not equal / not zero */

loc_0005E26C: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0005E274: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0005E35F; /* je: equal / zero */

loc_0005E27E: ;
    edi = ebx + 0x78;
    if (TEST_NZ(edi, edi)) goto loc_0005E295; /* jne: not equal / not zero */

loc_0005E285: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esi * 4 + 0x76E884);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x44);
    edi = edi + eax;

loc_0005E295: ;
    if (CMP_EQ(MEM8(0x765601), 2)) goto loc_0005E30F; /* je: equal / zero */

loc_0005E29E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0); sub_000569A0(); /* call 0x000569A0 */

loc_0005E2BF: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0005E35F; /* jne: not equal / not zero */

loc_0005E2CA: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_000599C0(); /* call 0x000599C0 */

loc_0005E2ED: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0005E35F; /* jne: not equal / not zero */

loc_0005E2F4: ;
    PUSH32(esp, eax);
    goto loc_0005E339;

loc_0005E2F7: ;
    if (CMP_NE(ecx, 3)) goto loc_0005E285; /* jne: not equal / not zero */

loc_0005E2FC: ;
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_0005E304: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0005E35F; /* je: equal / zero */

loc_0005E30A: ;
    goto loc_0005E285;

loc_0005E30F: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000569A0(); /* call 0x000569A0 */

loc_0005E330: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0005E35F; /* jne: not equal / not zero */

loc_0005E337: ;
    PUSH32(esp, 1);

loc_0005E339: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0005CD50(); /* call 0x0005CD50 */

loc_0005E35C: ;
    esp = esp + 0x24;

loc_0005E35F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E370
 * Original: 0x0005E370 - 0x0005E3CA (90 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E370(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005E370: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM8(0x76EDF8) = LO8(ebx);
    MEM8(0x7655EA) = LO8(ebx);
    MEM8(0x7655E9) = LO8(ebx);
    PUSH32(esp, 0); sub_0004E9E0(); /* call 0x0004E9E0 */

loc_0005E38C: ;
    eax = 1;
    PUSH32(esp, 0); sub_0004E9E0(); /* call 0x0004E9E0 */

loc_0005E396: ;
    MEM8(0x76E868) = LO8(ebx);
    eax = 0x76786C;

loc_0005E3A1: ;
    MEM16(eax + -8204) = LO16(ebx);
    MEM8(eax) = LO8(ebx);
    eax = eax + 0x3000;
    if (CMP_L(eax, 0x77086C)) goto loc_0005E3A1; /* jl: less (signed <) */

loc_0005E3B6: ;
    MEM8(0x7655D9) = LO8(ebx);
    MEM8(0x7655D8) = LO8(ebx);
    MEM8(0x7655D7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E3D0
 * Original: 0x0005E3D0 - 0x0005E3DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E3D0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005E3D0: ;
    ecx = MEM32(0x84B4EC);
    eax = 0x84D1B4;
    g_seh_ebp = ebp; sub_0005E3E0(); return; /* tail jmp 0x0005E3E0 */

}

/**
 * sub_0005E420
 * Original: 0x0005E420 - 0x0005E4A4 (132 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005E420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebp + 4;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046EC00(); /* call 0x0046EC00 */

loc_0005E433: ;
    esp = esp + 8;
    ebx = eax;
    MEM32(esp + 0x14) = 0;
    esi = 0x84D1A8;

loc_0005E445: ;
    edx = MEM32(esi);
    if (TEST_Z(edx, edx)) goto loc_0005E48B; /* je: equal / zero */

loc_0005E44B: ;
    eax = edx;
    edi = eax + 1;

loc_0005E450: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005E450; /* jne: not equal / not zero */

loc_0005E457: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_0005E461: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0005E48B; /* jne: not equal / not zero */

loc_0005E468: ;
    edx = MEM32(esi + 4);
    eax = edx;
    edi = eax + 1;

loc_0005E470: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0005E470; /* jne: not equal / not zero */

loc_0005E477: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_0005E484: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0005E4A4(); return; } /* je: equal / zero */

loc_0005E48B: ;
    edx = MEM32(esp + 0x14);
    edx++;
    esi = esi + 0x18;
    (void)0; /* cmp esi, 0x84D448 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(esi, 0x84D448)) goto loc_0005E445; /* jl: less (signed <) */

loc_0005E49F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E4E0
 * Original: 0x0005E4E0 - 0x0005E58D (173 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005E4E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0005E4F7; /* jne: not equal / not zero */

loc_0005E4F2: ;
    edi = 0x875F10;

loc_0005E4F7: ;
    ebx = ebx + ebx * 2;
    ebx = ebx << 3;
    eax = MEM32(ebx + 0x84D1A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D6F44);
    esi = 0x103;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005E519: ;
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_0005E57D; /* jl: less (signed <) */

loc_0005E520: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_0005E53A; /* je: equal / zero */

loc_0005E526: ;
    PUSH32(esp, ebp);
    esi = esi - eax;
    PUSH32(esp, 0x5D6F40);
    edi = edi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005E537: ;
    esp = esp + 0x10;

loc_0005E53A: ;
    if (TEST_S(eax, eax)) goto loc_0005E57D; /* jl: less (signed <) */

loc_0005E53E: ;
    ecx = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0005E55B; /* je: equal / zero */

loc_0005E547: ;
    PUSH32(esp, ecx);
    esi = esi - eax;
    PUSH32(esp, 0x5D6F40);
    edi = edi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005E558: ;
    esp = esp + 0x10;

loc_0005E55B: ;
    if (TEST_S(eax, eax)) goto loc_0005E57D; /* jl: less (signed <) */

loc_0005E55F: ;
    ecx = MEM32(ebx + 0x84D1AC);
    PUSH32(esp, ecx);
    esi = esi - eax;
    PUSH32(esp, 0x5D6F34);
    eax = eax + edi;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005E576: ;
    esp = esp + 0x10;
    if (CMP_GE(eax & eax, 0)) { sub_0005E58D(); return; } /* jge: greater or equal (signed >=) */

loc_0005E57D: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x103) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E5A0
 * Original: 0x0005E5A0 - 0x0005E5AA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E5A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005E5A0: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_0005E5AA(); return; } /* jne: not equal / not zero */

loc_0005E5A7: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E5F0
 * Original: 0x0005E5F0 - 0x0005E609 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005E5F0: ;
    edx = MEM32(esp + 0xC);
    if (TEST_Z(edx, edx)) { sub_0005E609(); return; } /* je: equal / zero */

loc_0005E5F8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x84D458);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00061E30(); /* call 0x00061E30 */

loc_0005E608: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005E640
 * Original: 0x0005E640 - 0x0005E67A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E640(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005E640: ;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0005E64D: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0005E678; /* je: equal / zero */

loc_0005E653: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005E65E; /* je: equal / zero */

loc_0005E65A: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0005E65E: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0005E678; /* jne: not equal / not zero */

loc_0005E665: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0005E66E: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0005E678: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E680
 * Original: 0x0005E680 - 0x0005E6C1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E680(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005E680: ;
    eax = MEM32(esi + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0005E6A3; /* jl: less (signed <) */

loc_0005E68A: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0005E6A3; /* jg: greater (signed >) */

loc_0005E691: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_0005E696: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0005E6A3; /* je: equal / zero */

loc_0005E69C: ;
    eax = esi;
    PUSH32(esp, 0); sub_000629A0(); /* call 0x000629A0 */

loc_0005E6A3: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) goto loc_0005E6B4; /* jne: not equal / not zero */

loc_0005E6AA: ;
    ecx = MEM32(esi + 0x18);
    eax = esi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0005E6B4: ;
    PUSH32(esp, 0x84D458);
    eax = esi;
    PUSH32(esp, 0); sub_00061DD0(); /* call 0x00061DD0 */

loc_0005E6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005E6D0
 * Original: 0x0005E6D0 - 0x0005E70C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005E6D0: ;
    esp = esp - 0x228;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x84D458);
    ebx = eax;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0005E6E7: ;
    if (TEST_Z(eax, eax)) { sub_0005E70C(); return; } /* je: equal / zero */

loc_0005E6EB: ;
    ecx = MEM32(esp + 0x238);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x84D458);
    edi = eax;
    PUSH32(esp, 0); sub_00062000(); /* call 0x00062000 */

loc_0005E700: ;
    esi = eax;
    MEM32(esp + 0xC) = 0x1393;
    g_seh_ebp = ebp; sub_0005E731(); return; /* tail jmp 0x0005E731 */

}

/**
 * sub_0005E870
 * Original: 0x0005E870 - 0x0005E8EB (123 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005E870: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax;
    esi = esi + 0x20;
    PUSH32(esp, 0x84D458);
    edx = 0; /* xor self */
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00061E30(); /* call 0x00061E30 */

loc_0005E889: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x34) = 0;
    edi = esi + -32;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0005E8A0: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0005E8BF; /* jge: greater or equal (signed >=) */

loc_0005E8AD: ;
    eax = MEM32(eax * 4 + 0x8070B0);
    if (TEST_Z(eax, eax)) goto loc_0005E8BF; /* je: equal / zero */

loc_0005E8B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0005E8BC: ;
    esp = esp + 8;

loc_0005E8BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0005E8C5: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0005E8E8; /* jge: greater or equal (signed >=) */

loc_0005E8D2: ;
    eax = MEM32(eax * 4 + 0x807130);
    if (TEST_Z(eax, eax)) goto loc_0005E8E8; /* je: equal / zero */

loc_0005E8DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0005E8E5: ;
    esp = esp + 8;

loc_0005E8E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E8F0
 * Original: 0x0005E8F0 - 0x0005E969 (121 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005E8F0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_00405C80(); /* call 0x00405C80 */

loc_0005E90B: ;
    ebx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    ebx = ebx + 0x20;
    PUSH32(esp, 0x84D458);
    edx = 0; /* xor self */
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00061E30(); /* call 0x00061E30 */

loc_0005E925: ;
    PUSH32(esp, 0x5D6EFC);
    ecx = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0); sub_00406AE0(); /* call 0x00406AE0 */

loc_0005E933: ;
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    if (CMP_EQ(eax, ebp)) goto loc_0005E947; /* je: equal / zero */

loc_0005E93D: ;
    edx = MEM32(esi + 0x30);
    ecx = eax + eax * 4;
    ebp = MEM32(edx + ecx * 8 + -24);

loc_0005E947: ;
    PUSH32(esp, 0x5D6EF4);
    ecx = esi;
    PUSH32(esp, 0); sub_00406AE0(); /* call 0x00406AE0 */

loc_0005E953: ;
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0005E969(); return; } /* je: equal / zero */

loc_0005E95D: ;
    ecx = MEM32(esi + 0x30);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 8 + -24);
    g_seh_ebp = ebp; sub_0005E96B(); return; /* tail jmp 0x0005E96B */

}

/**
 * sub_0005EA20
 * Original: 0x0005EA20 - 0x0005EAE9 (201 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EA20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005EA20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x24);
    if (TEST_NZ(ecx, ecx)) goto loc_0005EAE6; /* jne: not equal / not zero */

loc_0005EA2F: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) goto loc_0005EA72; /* jne: not equal / not zero */

loc_0005EA36: ;
    esi = edi + -32;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0005EA3F: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 4;
    if (CMP_GE(eax, ecx)) goto loc_0005EA5D; /* jge: greater or equal (signed >=) */

loc_0005EA4C: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_0005EA5D; /* je: equal / zero */

loc_0005EA57: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0005EA5A: ;
    esp = esp + 4;

loc_0005EA5D: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0005EA6B: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0005EA72: ;
    (void)0; /* test MEM8(esi + 0x40), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(MEM8(esi + 0x40), 1)) goto loc_0005EA97; /* je: equal / zero */

loc_0005EA81: ;
    eax = MEM32(esi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_0005EA90; /* je: equal / zero */

loc_0005EA88: ;
    ecx = MEM32(esi);
    ebx = MEM32(ecx + 0x18);
    ebx--;
    goto loc_0005EA99;

loc_0005EA90: ;
    edx = MEM32(esi);
    ebx = MEM32(edx + 0x18);
    goto loc_0005EA99;

loc_0005EA97: ;
    ebx = 0; /* xor self */

loc_0005EA99: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0005EADF; /* jle: less or equal (signed <=) */

loc_0005EA9D: ;
    /* nop */

loc_0005EAA0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00405C80(); /* call 0x00405C80 */

loc_0005EAAC: ;
    edi = MEM32(esp + 0x18);
    edi = edi + 0x20;
    ecx = edi + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D29B0(); /* call 0x003D29B0 */

loc_0005EABC: ;
    ecx = MEM32(0x84B4EC);
    esp = esp + 0x10;
    if (CMP_GE(eax, ecx)) goto loc_0005EADA; /* jge: greater or equal (signed >=) */

loc_0005EAC9: ;
    eax = MEM32(eax * 4 + 0x8071B0);
    if (TEST_Z(eax, eax)) goto loc_0005EADA; /* je: equal / zero */

loc_0005EAD4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0005EAD7: ;
    esp = esp + 4;

loc_0005EADA: ;
    ebx--;
    if (CMP_G(ebx & ebx, 0)) goto loc_0005EAA0; /* jg: greater (signed >) */

loc_0005EADF: ;
    PUSH32(esp, 0); sub_00405EB0(); /* call 0x00405EB0 */

loc_0005EAE4: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0005EAE6: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005EAF0
 * Original: 0x0005EAF0 - 0x0005EB39 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005EAF0: ;
    esp = esp - 0x210;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x21C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D718C);
    ebx = 0; /* xor self */
    edx = esp + 0x10;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    MEM32(esi) = 0x5D7188;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005EB28: ;
    esp = esp + 0x10;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM8(esp + 0x10C) = LO8(ebx);
    if (CMP_NE(edi, ebx)) { sub_0005EB39(); return; } /* jne: not equal / not zero */

loc_0005EB36: ;
    PUSH32(esp, ebx);
    g_seh_ebp = ebp; sub_0005EB63(); return; /* tail jmp 0x0005EB63 */

}

/**
 * sub_0005EB80
 * Original: 0x0005EB80 - 0x0005EBC4 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005EB80: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    eax--;
    PUSH32(esp, esi);
    MEM32(ecx) = 0x5D7188;
    if ((eax == 0)) goto loc_0005EBA2; /* je: equal / zero */

loc_0005EB8E: ;
    eax--;
    if ((eax != 0)) goto loc_0005EBC1; /* jne: not equal / not zero */

loc_0005EB91: ;
    ecx = MEM32(ecx + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0005EBC1; /* je: equal / zero */

loc_0005EB98: ;
    esi = ecx;
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_0005EB9F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0005EBA2: ;
    esi = MEM32(ecx + 0xC);
    if (TEST_Z(esi, esi)) goto loc_0005EBC1; /* je: equal / zero */

loc_0005EBA9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0005EBB0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0005EBBE: ;
    esp = esp + 4;

loc_0005EBC1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005EBD0
 * Original: 0x0005EBD0 - 0x0005ECB1 (225 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005EBD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    ebp = 0; /* xor self */
    if (CMP_NE(ecx, ebp)) goto loc_0005ECAC; /* jne: not equal / not zero */

loc_0005EBE5: ;
    (void)0; /* cmp MEM32(esp + 0x10), ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, 0x114);
    if (CMP_EQ(MEM32(esp + 0x10), ebp)) goto loc_0005EC5C; /* je: equal / zero */

loc_0005EBF1: ;
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_0005EBF6: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebp)) goto loc_0005EC40; /* je: equal / zero */

loc_0005EBFF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0005EC0E: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 4) = ebp;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0005EC26: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 4) = 1;
    PUSH32(esp, 0); sub_0005ECC0(); /* call 0x0005ECC0 */

loc_0005EC3A: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0005EC40: ;
    edi = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 4) = 1;
    PUSH32(esp, 0); sub_0005ECC0(); /* call 0x0005ECC0 */

loc_0005EC56: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0005EC5C: ;
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_0005EC61: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebp)) goto loc_0005EC93; /* je: equal / zero */

loc_0005EC6A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    eax = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0005EC79: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 4) = ebp;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0005EC91: ;
    goto loc_0005EC95;

loc_0005EC93: ;
    esi = 0; /* xor self */

loc_0005EC95: ;
    edx = MEM32(esp + 0x10);
    edi = edx;
    PUSH32(esp, ebp);
    MEM32(edx + 0xC) = esi;
    MEM32(edi + 4) = 1;
    PUSH32(esp, 0); sub_0005ECC0(); /* call 0x0005ECC0 */

loc_0005ECAB: ;
    POP32(esp, esi);

loc_0005ECAC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005ECC0
 * Original: 0x0005ECC0 - 0x0005ED4D (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005ECC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005ECC0: ;
    eax = MEM32(edi + 4);
    eax--;
    if ((eax != 0)) goto loc_0005ED4A; /* jne: not equal / not zero */

loc_0005ECCA: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0005ECDE; /* je: equal / zero */

loc_0005ECD6: ;
    esi = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_0005ECDE: ;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_0005ED11; /* je: equal / zero */

loc_0005ECEB: ;
    (void)0; /* cmp ecx, 0x3E3 - flags set for next jcc */
    MEM32(edi + 8) = ebx;
    if (CMP_LE(ecx, 0x3E3)) goto loc_0005ECFE; /* jle: less or equal (signed <=) */

loc_0005ECF6: ;
    if (CMP_LE(ecx, 0x3E5)) goto loc_0005ED48; /* jle: less or equal (signed <=) */

loc_0005ECFE: ;
    (void)0; /* cmp MEM8(edi + 0x10), 1 - flags set for next jcc */
    MEM32(edi + 8) = ebx;
    if (CMP_NE(MEM8(edi + 0x10), 1)) { sub_0005ED4D(); return; } /* jne: not equal / not zero */

loc_0005ED07: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_00063780(); /* call 0x00063780 */

loc_0005ED0F: ;
    g_seh_ebp = ebp; sub_0005ED52(); return; /* tail jmp 0x0005ED52 */

loc_0005ED11: ;
    ecx = MEM32(eax + 0x18);
    if (CMP_EQ(ecx, ebx)) goto loc_0005ED1C; /* je: equal / zero */

loc_0005ED18: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_0005ED1C: ;
    MEM32(edi + 8) = ecx;
    esi = MEM32(edi + 0xC);
    if (CMP_EQ(esi, ebx)) goto loc_0005ED3E; /* je: equal / zero */

loc_0005ED26: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0005ED2D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0005ED3B: ;
    esp = esp + 4;

loc_0005ED3E: ;
    MEM32(edi + 4) = 2;
    MEM32(edi + 0xC) = ebx;

loc_0005ED48: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0005ED4A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005EDB0
 * Original: 0x0005EDB0 - 0x0005EE34 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EDB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005EDB0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0005EE34(); return; } /* je: equal / zero */

loc_0005EDCB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0005EDDF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005EE14; /* je: equal / zero */

loc_0005EDEA: ;
    ecx = 0x75DAC8;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_0005EDF4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005EE11: ;
    esp = esp + 0x14;

loc_0005EE14: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0005EE2D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_0005EE70
 * Original: 0x0005EE70 - 0x0005EED2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EE70(void)
{

loc_0005EE70: ;
    esp = esp - 0x114;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0005EE84: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = eax;
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x17;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0005EEA9: ;
    edx = MEM32(esp + 0x11C);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, 0); sub_0005EF70(); /* call 0x0005EF70 */

loc_0005EEBA: ;
    esp = esp + 4;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0005EEC8: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_0005EEE0
 * Original: 0x0005EEE0 - 0x0005EF6C (140 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005EEE0: ;
    esp = esp - 0x114;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0005EEF4: ;
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x17;
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0005EF23: ;
    edx = MEM32(esp + 0x11C);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, 0); sub_0005EF70(); /* call 0x0005EF70 */

loc_0005EF34: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0005EF59; /* je: equal / zero */

loc_0005EF3D: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0005EF4A; /* jne: not equal / not zero */

loc_0005EF45: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_0005EF4A: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;

loc_0005EF59: ;
    ecx = esp + 4;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0005EF62: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_0005EF70
 * Original: 0x0005EF70 - 0x0005EF8E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EF70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005EF70: ;
    PUSH32(esp, esi);
    esi = eax;

loc_0005EF73: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    if (CMP_L(eax, 0x3E4)) { sub_0005EF8E(); return; } /* jl: less (signed <) */

loc_0005EF80: ;
    if (CMP_G(eax, 0x3E5)) { sub_0005EF8E(); return; } /* jg: greater (signed >) */

loc_0005EF87: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0005EF8C: ;
    goto loc_0005EF73;

}

/**
 * sub_0005EFE0
 * Original: 0x0005EFE0 - 0x0005F03C (92 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005EFE0: ;
    esp = esp - 0x114;
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0005EFF6: ;
    eax = esp;
    MEM32(esp + 0x110) = 0x1D;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0005F020: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_0005F03C(); return; } /* jl: less (signed <) */

loc_0005F02E: ;
    if (CMP_G(eax, 0x3E5)) { sub_0005F03C(); return; } /* jg: greater (signed >) */

loc_0005F035: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0005F03A: ;
    goto loc_0005F020;

}

/**
 * sub_0005F0C0
 * Original: 0x0005F0C0 - 0x0005F101 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F0C0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    esi = esi + 0xFFFFFFF4u;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0005F0D3: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0005F0FE; /* je: equal / zero */

loc_0005F0D9: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0005F0E4; /* je: equal / zero */

loc_0005F0E0: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0005F0E4: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0005F0FE; /* jne: not equal / not zero */

loc_0005F0EB: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0005F0F4: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0005F0FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F110
 * Original: 0x0005F110 - 0x0005F14F (63 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F110: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 8);
    edx = edx + ecx;
    if (TEST_Z(eax, eax)) goto loc_0005F14C; /* je: equal / zero */

loc_0005F11B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + ecx;
    eax = MEM32(edi);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    esi = edi;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0005F147; /* je: equal / zero */

loc_0005F129: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_0005F130;

    /* nop */

loc_0005F130: ;
    ebp = MEM32(eax + edx);
    ebx = ecx + 0xC;
    ebp = ebp + ebx;
    esi = esi + 4;
    MEM32(eax + edx) = ebp;
    eax = MEM32(esi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0005F130; /* jne: not equal / not zero */

loc_0005F145: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0005F147: ;
    MEM32(ecx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0005F14C: ;
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0005F150
 * Original: 0x0005F150 - 0x0005F1CA (122 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F150(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0005F3C0(); /* call 0x0005F3C0 */

loc_0005F158: ;
    eax = MEM32(esi + 0x14);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0005F18A; /* jbe: below or equal (unsigned <=) */

loc_0005F163: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 8 + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0005F175: ;
    edx = MEM32(esi + 0x18);
    MEM32(edx + edi * 8 + 4) = ebx;
    eax = MEM32(esi + 0x18);
    MEM32(eax + edi * 8) = ebx;
    eax = MEM32(esi + 0x14);
    edi++;
    if (CMP_B(edi, eax)) goto loc_0005F163; /* jb: below (unsigned <) */

loc_0005F18A: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0005F193: ;
    if (TEST_NZ(eax, eax)) goto loc_0005F1C4; /* jne: not equal / not zero */

loc_0005F197: ;
    eax = MEM32(esi + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_0005F1C4; /* je: equal / zero */

loc_0005F19E: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0005F1BE: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = ebx;

loc_0005F1C4: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F1D0
 * Original: 0x0005F1D0 - 0x0005F23E (110 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F1D0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005F23B; /* je: equal / zero */

loc_0005F1DE: ;
    eax = MEM32(0x775F50);
    if (TEST_NZ(eax, eax)) goto loc_0005F23B; /* jne: not equal / not zero */

loc_0005F1E7: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_0005F21C; /* je: equal / zero */

loc_0005F1EE: ;
    edi = edi;

loc_0005F1F0: ;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 4);
    if (CMP_L(edx, 0x3E4)) goto loc_0005F206; /* jl: less (signed <) */

loc_0005F1FE: ;
    if (CMP_LE(edx, 0x3E5)) goto loc_0005F23B; /* jle: less or equal (signed <=) */

loc_0005F206: ;
    if (TEST_Z(edx, edx)) goto loc_0005F215; /* je: equal / zero */

loc_0005F20A: ;
    edx = MEM32(eax + 0x14);
    if (CMP_GE(edx, esi)) goto loc_0005F215; /* jge: greater or equal (signed >=) */

loc_0005F211: ;
    edi = eax;
    esi = edx;

loc_0005F215: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0005F1F0; /* jne: not equal / not zero */

loc_0005F21C: ;
    PUSH32(esp, 0); sub_0005F380(); /* call 0x0005F380 */

loc_0005F221: ;
    if (TEST_Z(eax, eax)) goto loc_0005F22A; /* je: equal / zero */

loc_0005F225: ;
    if (CMP_LE(MEM32(eax + 0x14), esi)) goto loc_0005F23B; /* jle: less or equal (signed <=) */

loc_0005F22A: ;
    if (TEST_Z(edi, edi)) goto loc_0005F23B; /* je: equal / zero */

loc_0005F22E: ;
    esi = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0005E5A0(); /* call 0x0005E5A0 */

loc_0005F238: ;
    esp = esp + 4;

loc_0005F23B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F240
 * Original: 0x0005F240 - 0x0005F335 (245 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F240: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x84D458);
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0005F24F: ;
    ebp = ebx + 4;
    ecx = eax;
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_0005F270; /* je: equal / zero */

loc_0005F25B: ;
    goto loc_0005F260;

    /* nop */

loc_0005F260: ;
    if (CMP_EQ(MEM32(eax + 0xC), ecx)) goto loc_0005F331; /* je: equal / zero */

loc_0005F269: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0005F260; /* jne: not equal / not zero */

loc_0005F270: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0005F27E; /* jne: not equal / not zero */

loc_0005F279: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005F27E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0005F2CA; /* je: equal / zero */

loc_0005F2A6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0005F2CA; /* jb: below (unsigned <) */

loc_0005F2AF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F2B9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F2C1: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0005F2ED; /* jne: not equal / not zero */

loc_0005F2CA: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F2DC: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F2E4: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0005F2FE; /* je: equal / zero */

loc_0005F2ED: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = ebx;
    PUSH32(esp, 0); sub_0005F520(); /* call 0x0005F520 */

loc_0005F2FC: ;
    goto loc_0005F300;

loc_0005F2FE: ;
    eax = 0; /* xor self */

loc_0005F300: ;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 0x14) = ecx;
    (void)0; /* cmp MEM32(ebp), 0 - flags set for next jcc */
    ecx = ebx;
    if (CMP_EQ(MEM32(ebp), 0)) goto loc_0005F31C; /* je: equal / zero */

loc_0005F30E: ;
    edx = ebp;

loc_0005F310: ;
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = ecx + 4;
    if (TEST_NZ(esi, esi)) goto loc_0005F310; /* jne: not equal / not zero */

loc_0005F31C: ;
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(ebx + 8);
    ecx++;
    POP32(esp, edi);
    MEM32(ebx + 8) = ecx;
    POP32(esp, esi);

loc_0005F331: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005F340
 * Original: 0x0005F340 - 0x0005F372 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F340(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F340: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0005F370; /* jle: less or equal (signed <=) */

loc_0005F34C: ;
    /* nop */

loc_0005F350: ;
    eax = eax - ecx;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    esi = ecx;
    if (CMP_GE(esi, eax)) esi = eax; /* cmovge */
    eax = MEM32(edx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0x14) = esi;
    if (TEST_NZ(eax, eax)) goto loc_0005F366; /* jne: not equal / not zero */

loc_0005F363: ;
    eax = MEM32(edi + 4);

loc_0005F366: ;
    edx = eax;
    eax = MEM32(edi + 8);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0005F350; /* jl: less (signed <) */

loc_0005F370: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F380
 * Original: 0x0005F380 - 0x0005F3B9 (57 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F380: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(ebp & ebp, 0)) goto loc_0005F3B5; /* jbe: below or equal (unsigned <=) */

loc_0005F390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);

loc_0005F394: ;
    ecx = MEM32(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0005F3B2; /* je: equal / zero */

loc_0005F39A: ;
    edx = MEM32(ecx + 0x14);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    if (CMP_G(edx, esi)) esi = edx; /* cmovg */
    if (CMP_G(edx, esi)) eax = ecx; /* cmovg */
    edi++;
    ebx = ebx + 8;
    if (CMP_B(edi, ebp)) goto loc_0005F394; /* jb: below (unsigned <) */

loc_0005F3AD: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005F3B2: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_0005F3B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F3C0
 * Original: 0x0005F3C0 - 0x0005F446 (134 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F3C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 4);
    if (TEST_Z(ebx, ebx)) goto loc_0005F441; /* je: equal / zero */

loc_0005F3CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0005F3D0: ;
    esi = ebx;
    edi = ebx + 4;
    ebx = MEM32(edi);
    eax = esi;
    PUSH32(esp, 0); sub_0005F580(); /* call 0x0005F580 */

loc_0005F3DE: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0005F3EB; /* je: equal / zero */

loc_0005F3E9: ;
    MEM32(eax) = ecx;

loc_0005F3EB: ;
    MEM32(esi) = 0;
    MEM32(edi) = 0;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    eax = MEM32(esi + 0xC);
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) - 1;
    edi = MEM32(esi + 0xC);
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0005F40E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0005F414: ;
    if (TEST_NZ(eax, eax)) goto loc_0005F43B; /* jne: not equal / not zero */

loc_0005F418: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0005F438: ;
    esp = esp + 4;

loc_0005F43B: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0005F3D0; /* jne: not equal / not zero */

loc_0005F43F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0005F441: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005F450
 * Original: 0x0005F450 - 0x0005F4AC (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F450(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F450: ;
    (void)0; /* cmp eax, MEM32(esi + 0x10) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, MEM32(esi + 0x10))) { sub_0005F4AC(); return; } /* ja: above (unsigned >) */

loc_0005F456: ;
    edx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0005F47A; /* jbe: below or equal (unsigned <=) */

loc_0005F45F: ;
    edi = MEM32(esi + 0x18);
    ecx = edi;

loc_0005F464: ;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0005F473; /* je: equal / zero */

loc_0005F469: ;
    eax++;
    ecx = ecx + 8;
    if (CMP_B(eax, edx)) goto loc_0005F464; /* jb: below (unsigned <) */

loc_0005F471: ;
    goto loc_0005F47A;

loc_0005F473: ;
    eax = edi + eax * 8;
    if (TEST_NZ(eax, eax)) goto loc_0005F49F; /* jne: not equal / not zero */

loc_0005F47A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0005F380(); /* call 0x0005F380 */

loc_0005F481: ;
    if (TEST_Z(eax, eax)) goto loc_0005F494; /* je: equal / zero */

loc_0005F485: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_NE(MEM16(ecx + 0x2C), 1)) goto loc_0005F494; /* jne: not equal / not zero */

loc_0005F48F: ;
    PUSH32(esp, 0); sub_0005F580(); /* call 0x0005F580 */

loc_0005F494: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0005F4C0(); /* call 0x0005F4C0 */

loc_0005F49B: ;
    if (TEST_Z(eax, eax)) { sub_0005F4AC(); return; } /* je: equal / zero */

loc_0005F49F: ;
    edx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(eax + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005F4C0
 * Original: 0x0005F4C0 - 0x0005F4E1 (33 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F4C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F4C0: ;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0005F4DD; /* jbe: below or equal (unsigned <=) */

loc_0005F4CA: ;
    esi = MEM32(ecx + 0x18);
    ecx = esi;
    /* nop */

loc_0005F4D0: ;
    if (CMP_EQ(MEM32(ecx), 0)) { sub_0005F4E1(); return; } /* je: equal / zero */

loc_0005F4D5: ;
    eax++;
    ecx = ecx + 8;
    if (CMP_B(eax, edx)) goto loc_0005F4D0; /* jb: below (unsigned <) */

loc_0005F4DD: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F4F0
 * Original: 0x0005F4F0 - 0x0005F517 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F4F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F4F0: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0005F516; /* jbe: below or equal (unsigned <=) */

loc_0005F4F9: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    ecx = esi + 4;

loc_0005F500: ;
    if (CMP_EQ(MEM32(ecx), edi)) goto loc_0005F50E; /* je: equal / zero */

loc_0005F504: ;
    eax++;
    ecx = ecx + 8;
    if (CMP_B(eax, edx)) goto loc_0005F500; /* jb: below (unsigned <) */

loc_0005F50C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005F50E: ;
    MEM32(esi + eax * 8) = 0;
    POP32(esp, esi);

loc_0005F516: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005F520
 * Original: 0x0005F520 - 0x0005F57C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F520(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F520: ;
    PUSH32(esp, ebx);
    ebx = edx;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x84D458);
    eax = ebx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0005F550: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0005F567; /* jne: not equal / not zero */

loc_0005F557: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x84D458);
    PUSH32(esp, 0); sub_00061C40(); /* call 0x00061C40 */

loc_0005F564: ;
    MEM32(esi + 0xC) = eax;

loc_0005F567: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0005F579; /* je: equal / zero */

loc_0005F56F: ;
    MEM32(eax + 0x28) = esi;
    eax = MEM32(esi + 0xC);
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_0005F579: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0005F580
 * Original: 0x0005F580 - 0x0005F5E2 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F580(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F580: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0005F59D; /* je: equal / zero */

loc_0005F58D: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0005F59A: ;
    esp = esp + 8;

loc_0005F59D: ;
    esi = MEM32(esi + 0xC);
    eax = MEM32(esi + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0005F5C3; /* jl: less (signed <) */

loc_0005F5AA: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0005F5C3; /* jg: greater (signed >) */

loc_0005F5B1: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_0005F5B6: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0005F5C3; /* je: equal / zero */

loc_0005F5BC: ;
    eax = esi;
    PUSH32(esp, 0); sub_000629A0(); /* call 0x000629A0 */

loc_0005F5C3: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) goto loc_0005F5D4; /* jne: not equal / not zero */

loc_0005F5CA: ;
    ecx = MEM32(esi + 0x18);
    eax = esi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0005F5D4: ;
    PUSH32(esp, 0x84D458);
    eax = esi;
    PUSH32(esp, 0); sub_00061DD0(); /* call 0x00061DD0 */

loc_0005F5E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005F5F0
 * Original: 0x0005F5F0 - 0x0005F68E (158 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005F5F0: ;
    eax = MEM32(0x875600);
    if (TEST_NZ(eax, eax)) goto loc_0005F68D; /* jne: not equal / not zero */

loc_0005F5FD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0005F60B; /* jne: not equal / not zero */

loc_0005F606: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005F60B: ;
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
    if (TEST_Z(esi, esi)) goto loc_0005F655; /* je: equal / zero */

loc_0005F633: ;
    if (CMP_B(MEM32(esi + 0x80), 0x14)) goto loc_0005F655; /* jb: below (unsigned <) */

loc_0005F63C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F646: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F64E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0005F676; /* jne: not equal / not zero */

loc_0005F655: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F667: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F66F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0005F684; /* je: equal / zero */

loc_0005F676: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005F690(); /* call 0x0005F690 */

loc_0005F67C: ;
    POP32(esp, edi);
    MEM32(0x875600) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005F684: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x875600) = eax;
    POP32(esp, esi);

loc_0005F68D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005F690
 * Original: 0x0005F690 - 0x0005F71C (140 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0005F870(); /* call 0x0005F870 */

loc_0005F698: ;
    eax = MEM32(0x84A19C);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_0005F6A8; /* jne: not equal / not zero */

loc_0005F6A3: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005F6A8: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (CMP_EQ(esi, edi)) goto loc_0005F6F0; /* je: equal / zero */

loc_0005F6CE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0005F6F0; /* jb: below (unsigned <) */

loc_0005F6D7: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F6E1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F6E9: ;
    esp = esp + 8;
    if (CMP_NE(eax, edi)) goto loc_0005F711; /* jne: not equal / not zero */

loc_0005F6F0: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F702: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F70A: ;
    esp = esp + 8;
    if (CMP_EQ(eax, edi)) { sub_0005F71C(); return; } /* je: equal / zero */

loc_0005F711: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    g_seh_ebp = ebp; sub_0005F71E(); return; /* tail jmp 0x0005F71E */

}

/**
 * sub_0005F870
 * Original: 0x0005F870 - 0x0005F88F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0042CEE2(); /* call 0x0042CEE2 */

loc_0005F878: ;
    eax = MEM32(0x68C7DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_0005F883: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0005F88F(); return; } /* jne: not equal / not zero */

loc_0005F888: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0005F88D: ;
    g_seh_ebp = ebp; sub_0005F89A(); return; /* tail jmp 0x0005F89A */

}

/**
 * sub_0005F940
 * Original: 0x0005F940 - 0x0005FA17 (215 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F940: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005FC90(); /* call 0x0005FC90 */

loc_0005F957: ;
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) { sub_0005FA17(); return; } /* jne: not equal / not zero */

loc_0005F961: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0005F96E; /* jne: not equal / not zero */

loc_0005F969: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005F96E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0005F9B8; /* je: equal / zero */

loc_0005F994: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_0005F9B8; /* jb: below (unsigned <) */

loc_0005F99D: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F9A7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F9AF: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_0005F9DB; /* jne: not equal / not zero */

loc_0005F9B8: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005F9CA: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005F9D2: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_0005F9FF; /* je: equal / zero */

loc_0005F9DB: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x82B);
    PUSH32(esp, 0x5D7190);
    edi = ebp;
    MEM32(esi) = ecx;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0005F9F2: ;
    esp = esp + 8;
    MEM32(esi + 4) = eax;
    MEM8(esi + 8) = LO8(ebx);
    ebp = esi;
    goto loc_0005FA01;

loc_0005F9FF: ;
    ebp = 0; /* xor self */

loc_0005FA01: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 4);
    edi = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_0005FA15: ;
    g_seh_ebp = ebp; sub_0005FA23(); return; /* tail jmp 0x0005FA23 */

}

/**
 * sub_0005FAF0
 * Original: 0x0005FAF0 - 0x0005FC5F (367 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FAF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005FC90(); /* call 0x0005FC90 */

loc_0005FB05: ;
    ebp = eax;
    ebx = 0; /* xor self */
    if (CMP_NE(ebp, ebx)) goto loc_0005FBC3; /* jne: not equal / not zero */

loc_0005FB11: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0005FB1E; /* jne: not equal / not zero */

loc_0005FB19: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005FB1E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0005FB68; /* je: equal / zero */

loc_0005FB44: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_0005FB68; /* jb: below (unsigned <) */

loc_0005FB4D: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005FB57: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005FB5F: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_0005FB8B; /* jne: not equal / not zero */

loc_0005FB68: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005FB7A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005FB82: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_0005FBAD; /* je: equal / zero */

loc_0005FB8B: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x82B);
    PUSH32(esp, 0x5D7190);
    MEM32(esi) = ecx;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0005FBA0: ;
    esp = esp + 8;
    MEM32(esi + 4) = eax;
    MEM8(esi + 8) = LO8(ebx);
    ebp = esi;
    goto loc_0005FBAF;

loc_0005FBAD: ;
    ebp = 0; /* xor self */

loc_0005FBAF: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 4);
    edi = esp + 0x1C;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_0005FBC3: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0005FBD0; /* jne: not equal / not zero */

loc_0005FBCB: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005FBD0: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0005FC18; /* je: equal / zero */

loc_0005FBF6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x2C)) goto loc_0005FC18; /* jb: below (unsigned <) */

loc_0005FBFF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005FC09: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005FC11: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0005FC39; /* jne: not equal / not zero */

loc_0005FC18: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005FC2A: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005FC32: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0005FC5F(); return; } /* je: equal / zero */

loc_0005FC39: ;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = ebp;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x24) = ebx;
    g_seh_ebp = ebp; sub_0005FC61(); return; /* tail jmp 0x0005FC61 */

}

/**
 * sub_0005FC90
 * Original: 0x0005FC90 - 0x0005FCD4 (68 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FC90(void)
{
    uint32_t ebp;
    uint32_t owner;
    uint32_t cursor;
    uint32_t item;
    uint32_t end;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FC90: ;
    if (ebx == 0 || ebx >= 0x04000000) {
        eax = 0;
        esp += 12; return;
    }
    owner = ebx;
    eax = MEM32(owner + 4);
    end = MEM32(eax + 8);
    ecx = end;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    cursor = MEM32(eax + 4);
    esi = cursor;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_AE(esi, ecx)) goto loc_0005FCCC; /* jae: above or equal (unsigned >=) */

loc_0005FCA4: ;
    item = MEM32(cursor);
    edi = item;
    if (item == 0 || item >= 0x04000000) goto loc_0005FCBF;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(item), eax)) goto loc_0005FCBF; /* jne: not equal / not zero */

loc_0005FCAE: ;
    eax = MEM32(item + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_0005FCB8: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0005FCD4(); return; } /* je: equal / zero */

loc_0005FCBF: ;
    ecx = MEM32(owner + 4);
    eax = MEM32(ecx + 8);
    cursor = cursor + 4;
    esi = cursor;
    if (CMP_B(cursor, eax)) goto loc_0005FCA4; /* jb: below (unsigned <) */

loc_0005FCCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005FCE0
 * Original: 0x0005FCE0 - 0x0005FD1D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FCE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005FCE0: ;
    if (TEST_Z(eax, eax)) { sub_0005FD1D(); return; } /* je: equal / zero */

loc_0005FCE4: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    eax = eax + eax * 2;
    eax = MEM32(eax * 8 + 0x84D1B0);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    edx = 0x5D71D8;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0005FD02; /* jne: not equal / not zero */

loc_0005FCFD: ;
    edx = 0x587BE4;

loc_0005FD02: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D71CC);
    ecx = edi + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0005FD14: ;
    esp = esp + 0x18;
    MEM8(esi + edi + -1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0005FD30
 * Original: 0x0005FD30 - 0x0005FD53 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FD30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FD30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ebp, 4 - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_GE(ebp, 4)) { sub_0005FD53(); return; } /* jge: greater or equal (signed >=) */

loc_0005FD44: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(ecx + ebp * 4);
    MEM32(esp + 0x10) = edx;
    g_seh_ebp = ebp; sub_0005FD59(); return; /* tail jmp 0x0005FD59 */

}

/**
 * sub_0005FE40
 * Original: 0x0005FE40 - 0x0005FEC9 (137 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FE40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0005FE55; /* jne: not equal / not zero */

loc_0005FE50: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0005FE55: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0005FE9D; /* je: equal / zero */

loc_0005FE7B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0005FE9D; /* jb: below (unsigned <) */

loc_0005FE84: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005FE8E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005FE96: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0005FEBE; /* jne: not equal / not zero */

loc_0005FE9D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0005FEAF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0005FEB7: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0005FEC9(); return; } /* je: equal / zero */

loc_0005FEBE: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    g_seh_ebp = ebp; sub_0005FECB(); return; /* tail jmp 0x0005FECB */

}

/**
 * sub_0005FEF0
 * Original: 0x0005FEF0 - 0x0005FF04 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FEF0: ;
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(ecx, ecx)) { sub_0005FF04(); return; } /* jne: not equal / not zero */

loc_0005FF00: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0005FF0C(); return; /* tail jmp 0x0005FF0C */

}

/**
 * sub_0005FF90
 * Original: 0x0005FF90 - 0x0005FFD2 (66 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FF90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005FF90: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4);
    edx = MEM32(esi + 4);
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_0005FFD0; /* je: equal / zero */

loc_0005FF9D: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi - edx;
    edi = (uint32_t)((int32_t)edi >> 2);
    if (TEST_Z(edi, edi)) goto loc_0005FFCF; /* je: equal / zero */

loc_0005FFAC: ;
    edi = MEM32(edx);
    eax = edx + 4;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0005FFC1: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 8) = eax;
    eax = edi;

loc_0005FFCF: ;
    POP32(esp, edi);

loc_0005FFD0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FFE0
 * Original: 0x0005FFE0 - 0x0006003B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0005FFE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00060030; /* je: equal / zero */

loc_0005FFEC: ;
    if (CMP_EQ(ebx, 3)) goto loc_00060038; /* je: equal / zero */

loc_0005FFF1: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(eax + 4);
    if (TEST_Z(edx, edx)) goto loc_00060038; /* je: equal / zero */

loc_0005FFFB: ;
    eax = MEM32(eax + 8);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_00060038; /* je: equal / zero */

loc_00060007: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 3;
    eax = MEM32(edi + ebx * 4);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00060030: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00060130(); /* call 0x00060130 */

loc_00060038: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060040
 * Original: 0x00060040 - 0x0006012A (234 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060040: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 4);
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(ecx, esi)) goto loc_00060084; /* je: equal / zero */

loc_00060059: ;
    if (CMP_EQ(eax, 3)) goto loc_00060084; /* je: equal / zero */

loc_0006005E: ;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + 4) = esi;
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(eax + 4);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00060080: ;
    MEM32(esp + 0xC) = esi;

loc_00060084: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_00060090: ;
    if (CMP_EQ(eax, MEM32(esp + 0x28))) goto loc_00060102; /* je: equal / zero */

loc_00060096: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(ecx + eax * 4);
    edi = MEM32(esi + 4);
    if (CMP_AE(edi, MEM32(esi + 8))) goto loc_00060102; /* jae: above or equal (unsigned >=) */

loc_000600A5: ;
    ebp = edi + 4;
    goto loc_000600B0;

    /* nop */

loc_000600B0: ;
    ebx = MEM32(edi);
    edx = MEM32(esp + 0x24);
    if (CMP_NE(MEM32(ebx + 0xC), edx)) goto loc_000600F3; /* jne: not equal / not zero */

loc_000600BB: ;
    eax = MEM32(esi + 8);
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_000600CE: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    edx = edx + 0xFFFFFFFCu;
    PUSH32(esp, ecx);
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0); sub_0005FEF0(); /* call 0x0005FEF0 */

loc_000600ED: ;
    eax = MEM32(esp + 0x10);
    goto loc_000600F9;

loc_000600F3: ;
    edi = edi + 4;
    ebp = ebp + 4;

loc_000600F9: ;
    if (CMP_B(edi, MEM32(esi + 8))) goto loc_000600B0; /* jb: below (unsigned <) */

loc_000600FE: ;
    ebx = MEM32(esp + 0x20);

loc_00060102: ;
    eax++;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 4)) goto loc_00060090; /* jl: less (signed <) */

loc_0006010C: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_NZ(eax, eax)) goto loc_00060122; /* jne: not equal / not zero */

loc_00060116: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_00060130(); /* call 0x00060130 */

loc_00060122: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00060130
 * Original: 0x00060130 - 0x000601AA (122 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    ebx = 3;
    /* nop */

loc_00060140: ;
    ecx = MEM32(ebp + ebx * 4);
    edx = MEM32(ecx + 4);
    if (TEST_Z(edx, edx)) goto loc_000601A0; /* je: equal / zero */
    if (edx >= 0x04000000) goto loc_000601A0;

loc_0006014B: ;
    eax = MEM32(ecx + 8);
    if (eax <= edx || eax > 0x04000000 || eax - edx > 0x00100000) goto loc_000601A0;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_000601A0; /* je: equal / zero */

loc_00060157: ;
    eax = edx;
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000602E0(); /* call 0x000602E0 */

loc_00060161: ;
    if (CMP_NE(eax, 0x4DE)) { sub_000601AA(); return; } /* jne: not equal / not zero */

loc_00060168: ;
    edi = MEM32(ebp + ebx * 4);
    edx = MEM32(edi + 4);
    if (TEST_Z(edx, edx)) goto loc_000601A0; /* je: equal / zero */
    if (edx >= 0x04000000) goto loc_000601A0;

loc_00060173: ;
    eax = MEM32(edi + 8);
    if (eax <= edx || eax > 0x04000000 || eax - edx > 0x00100000) goto loc_000601A0;
    ecx = eax;
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (TEST_Z(ecx, ecx)) goto loc_000601A0; /* je: equal / zero */

loc_00060181: ;
    ecx = edx + 4;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00060194: ;
    eax = MEM32(edi + 8);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(edi + 8) = eax;

loc_000601A0: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_00060140; /* jns: not sign (positive) */

loc_000601A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000601D0
 * Original: 0x000601D0 - 0x000601E6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000601D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000601D0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(eax, eax)) { sub_000601E6(); return; } /* je: equal / zero */

loc_000601DA: ;
    ecx = MEM32(eax + 0x1C);
    if (TEST_Z(ecx, ecx)) { sub_000601E6(); return; } /* je: equal / zero */

loc_000601E1: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

}

/**
 * sub_000602C0
 * Original: 0x000602C0 - 0x000602D6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000602C0(void)
{

loc_000602C0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_000602C8: ;
    eax = 0; /* xor self */
    esp = esp + 4;
    MEM32(esi) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000602E0
 * Original: 0x000602E0 - 0x00060345 (101 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000602E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000602E0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    if (TEST_Z(edi, edi)) goto loc_00060337; /* je: equal / zero */

loc_000602E9: ;
    edx = MEM32(edi);
    if (edx == 0 || edx >= 0x04000000) goto loc_000602F7;
    SET_LO8(ecx, MEM8(edx + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00060300; /* je: equal / zero */

loc_000602F2: ;
    PUSH32(esp, 0); sub_00060540(); /* call 0x00060540 */

loc_000602F7: ;
    POP32(esp, edi);
    eax = 0x4DE;
    esp += 8; return; /* ret 4 */

loc_00060300: ;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0006030B; /* je: equal / zero */

loc_00060307: ;
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00060321; /* je: equal / zero */

loc_0006030B: ;
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00060316; /* je: equal / zero */

loc_00060312: ;
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00060321; /* je: equal / zero */

loc_00060316: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0006032A; /* je: equal / zero */

loc_0006031D: ;
    if (CMP_NE(MEM32(ecx), edx)) goto loc_0006032A; /* jne: not equal / not zero */

loc_00060321: ;
    POP32(esp, edi);
    eax = 0x34;
    esp += 8; return; /* ret 4 */

loc_0006032A: ;
    ecx = MEM32(edi + 0x14);
    if (TEST_NZ(ecx, ecx)) goto loc_00060337; /* jne: not equal / not zero */

loc_00060331: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00060350(); /* call 0x00060350 */

loc_00060337: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060350
 * Original: 0x00060350 - 0x000603AA (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060350: ;
    esp = esp - 0x108;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) { sub_000603AA(); return; } /* je: equal / zero */

loc_0006036A: ;
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_00060384; /* je: equal / zero */

loc_00060373: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00060381: ;
    esp = esp + 0xC;

loc_00060384: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A0);
    eax = esp + 0x20;
    PUSH32(esp, 0x103);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0006039E: ;
    esp = esp + 0x14;
    MEM8(esp + 0x117) = LO8(ebx);
    g_seh_ebp = ebp; sub_000603AE(); return; /* tail jmp 0x000603AE */

}

/**
 * sub_00060540
 * Original: 0x00060540 - 0x00060587 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060540(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060540: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    MEM8(eax + 8) = 1;
    esi = MEM32(edi + 0x20);
    if (TEST_Z(esi, esi)) goto loc_00060553; /* je: equal / zero */

loc_0006054E: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_00060553: ;
    esi = MEM32(edi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_0006055F; /* je: equal / zero */

loc_0006055A: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_0006055F: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00060576; /* je: equal / zero */

loc_00060567: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00060573: ;
    esp = esp + 0xC;

loc_00060576: ;
    MEM32(edi + 0x20) = 0;
    MEM32(edi + 0x14) = 0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00060590
 * Original: 0x00060590 - 0x000605D4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060590(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060590: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x20);
    if (TEST_Z(esi, esi)) goto loc_0006059D; /* je: equal / zero */

loc_00060598: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_0006059D: ;
    esi = MEM32(edi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_000605A9; /* je: equal / zero */

loc_000605A4: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_000605A9: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000605C3; /* je: equal / zero */

loc_000605B1: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E3);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000605C0: ;
    esp = esp + 0xC;

loc_000605C3: ;
    MEM32(edi + 0x20) = 0;
    MEM32(edi + 0x14) = 0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000605E0
 * Original: 0x000605E0 - 0x000605F3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000605E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000605E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax), 0)) { sub_000605F3(); return; } /* jne: not equal / not zero */

loc_000605EA: ;
    PUSH32(esp, 0); sub_000607E0(); /* call 0x000607E0 */

loc_000605EF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060610
 * Original: 0x00060610 - 0x00060626 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060610: ;
    edx = MEM32(edi + 0xC);
    ecx = MEM32(edx + 0x18);
    eax = MEM32(edx + 0x10);
    if (CMP_B(ecx, eax)) { sub_00060626(); return; } /* jb: below (unsigned <) */

loc_0006061D: ;
    eax = 0x26;
    MEM32(edx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00060690
 * Original: 0x00060690 - 0x000606A9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060690: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edx + 0xC);
    MEM32(eax + 0x1C) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_000606A8; /* jne: not equal / not zero */

loc_000606A2: ;
    ecx = MEM32(edx + 0x14);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + ecx;

loc_000606A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000606B0
 * Original: 0x000606B0 - 0x00060743 (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000606B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000606B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(eax + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_000606ED; /* jne: not equal / not zero */

loc_000606BD: ;
    eax = MEM32(eax + 0x20);
    edi = esp + 8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_000606D1: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx + 0x10);
    edi = MEM32(esp + 8);
    edx = 0; /* xor self */
    eax = eax + edi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F1F50(); /* call 0x001F1F50 */

loc_000606EA: ;
    esp = esp + 0xC;

loc_000606ED: ;
    eax = MEM32(ebx + 0x18);
    esi = MEM32(eax + 0x18);
    esi = esi - MEM32(eax + 0x24);
    MEM32(ebx + 0x20) = esi;
    eax = MEM32(eax + 0x20);
    edi = esp + 8;
    PUSH32(esp, 0); sub_001F20D0(); /* call 0x001F20D0 */

loc_00060705: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_00060727; /* jne: not equal / not zero */

loc_0006070B: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(edx & edx, 0)) goto loc_00060720; /* jle: less or equal (signed <=) */

loc_00060718: ;
    ecx = ecx - edx;
    ecx = ecx + esi;
    esi = ecx;
    goto loc_00060724;

loc_00060720: ;
    if (((int32_t)ecx >= 0)) goto loc_00060724; /* jge: greater or equal (signed >=) */

loc_00060722: ;
    esi = esi - edx;

loc_00060724: ;
    MEM32(ebx + 0x20) = esi;

loc_00060727: ;
    ecx = MEM32(ebx + 0x20);
    (void)0; /* cmp ecx, 0x20000 - flags set for next jcc */
    eax = edi;
    if (CMP_BE(ecx, 0x20000)) { sub_00060743(); return; } /* jbe: below or equal (unsigned <=) */

loc_00060734: ;
    ecx = MEM32(ebx + 0x18);
    eax = 0x6F8;
    POP32(esp, edi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060770
 * Original: 0x00060770 - 0x00060789 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060770: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edx + 0x18);
    MEM32(eax + 0x28) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00060788; /* jne: not equal / not zero */

loc_00060782: ;
    ecx = MEM32(edx + 0x20);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + ecx;

loc_00060788: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00060790
 * Original: 0x00060790 - 0x000607DD (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060790: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(eax + 8);
    esp = esp - 8;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C08D(); /* call 0x0042C08D */

loc_000607A9: ;
    if (TEST_NZ(eax, eax)) goto loc_000607B4; /* jne: not equal / not zero */

loc_000607AD: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000607B2: ;
    esi = eax;

loc_000607B4: ;
    if (TEST_NZ(esi, esi)) goto loc_000607D6; /* jne: not equal / not zero */

loc_000607B8: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(eax + 8);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C0F3(); /* call 0x0042C0F3 */

loc_000607CB: ;
    if (TEST_NZ(eax, eax)) goto loc_000607D6; /* jne: not equal / not zero */

loc_000607CF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000607D4: ;
    esi = eax;

loc_000607D6: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000607E0
 * Original: 0x000607E0 - 0x0006084B (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000607E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000607E0: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 8);
    esp = esp - 0xC;
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_000607F5: ;
    if (TEST_NZ(eax, eax)) goto loc_00060802; /* jne: not equal / not zero */

loc_000607F9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000607FE: ;
    if (TEST_NZ(eax, eax)) { sub_0006084B(); return; } /* jne: not equal / not zero */

loc_00060802: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 8);
    MEM32(esp + 4) = edi;
    if (TEST_NZ(eax, eax)) { sub_0006084B(); return; } /* jne: not equal / not zero */

loc_00060812: ;
    ecx = MEM32(esi + 0x20);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_0006081F: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_0006084B(); return; } /* jne: not equal / not zero */

loc_00060826: ;
    eax = MEM32(esi + 0x20);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_00060835: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    esp = esp + 4;
    if (CMP_NE(edx, eax)) { sub_0006084B(); return; } /* jne: not equal / not zero */

loc_00060844: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00060860
 * Original: 0x00060860 - 0x000608C2 (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060860: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 8);
    esp = esp - 8;
    PUSH32(esp, edi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_00060877: ;
    if (TEST_NZ(eax, eax)) goto loc_00060882; /* jne: not equal / not zero */

loc_0006087B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00060880: ;
    edi = eax;

loc_00060882: ;
    ecx = MEM32(esp + 4);
    eax = edi;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(edi, edi)) goto loc_0006089A; /* jne: not equal / not zero */

loc_0006088D: ;
    edx = MEM32(esp + 4);
    if (TEST_Z(edx, edx)) goto loc_0006089A; /* je: equal / zero */

loc_00060895: ;
    eax = 1;

loc_0006089A: ;
    if (TEST_NZ(eax, eax)) goto loc_000608BE; /* jne: not equal / not zero */

loc_0006089E: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0); sub_001F2390(); /* call 0x001F2390 */

loc_000608AA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esi + 0x20);
    edx = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F1F50(); /* call 0x001F1F50 */

loc_000608BB: ;
    esp = esp + 0x10;

loc_000608BE: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000608D0
 * Original: 0x000608D0 - 0x000608F2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000608D0(void)
{

loc_000608D0: ;
    eax = eax - ecx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 2);
    esi = eax * 4;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_000608E9: ;
    esp = esp + 0xC;
    eax = eax + esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060900
 * Original: 0x00060900 - 0x0006091A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060900: ;
    esp = esp - 0x200;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_NZ(edi, edi)) { sub_0006091A(); return; } /* jne: not equal / not zero */

loc_0006090D: ;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    POP32(esp, esi);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

}

/**
 * sub_00060980
 * Original: 0x00060980 - 0x000609C3 (67 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060980: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84D44C);
    if (TEST_Z(eax, eax)) goto loc_00060999; /* je: equal / zero */

loc_0006098A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00060996: ;
    esp = esp + 4;

loc_00060999: ;
    MEM32(0x84D44C) = 0;
    MEM32(0x84D450) = 0;
    MEM32(0x84D454) = 0;
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_000609BC: ;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_000609C1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000609D0
 * Original: 0x000609D0 - 0x000609E6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000609D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000609D0: ;
    PUSH32(esp, 0x5D88C0);
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_000609DA: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_000609E6(); return; } /* jne: not equal / not zero */

loc_000609DF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000609E4: ;
    g_seh_ebp = ebp; sub_000609F1(); return; /* tail jmp 0x000609F1 */

}

/**
 * sub_00060AF0
 * Original: 0x00060AF0 - 0x00060B26 (54 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060AF0: ;
    SET_LO8(ecx, MEM8(edx));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00060B22; /* je: equal / zero */

loc_00060AF9: ;
    /* nop */

loc_00060B00: ;
    SET_LO8(eax, MEM8(esi));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00060B22; /* je: equal / zero */

loc_00060B06: ;
    if (CMP_EQ(LO8(ecx), 0x2A)) goto loc_00060B22; /* je: equal / zero */

loc_00060B0B: ;
    if (CMP_EQ(LO8(eax), 0x2A)) goto loc_00060B22; /* je: equal / zero */

loc_00060B0F: ;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_00060B19; /* je: equal / zero */

loc_00060B13: ;
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    if (TEST_NZ(LO8(eax), 0xDF)) { sub_00060B26(); return; } /* jne: not equal / not zero */

loc_00060B19: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    esi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00060B00; /* jne: not equal / not zero */

loc_00060B22: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00060B30
 * Original: 0x00060B30 - 0x00060B71 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B30(void)
{

loc_00060B30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_00060B38: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = esp + 0x14;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_00060B58: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_00060B6D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060B80
 * Original: 0x00060B80 - 0x00060BC5 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B80(void)
{

loc_00060B80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_00060B88: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_00060BA8: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_00060BC1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060BD0
 * Original: 0x00060BD0 - 0x00060C45 (117 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060BD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_00060BDB: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_00060BFB: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_00060C10: ;
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00060C3E; /* je: equal / zero */

loc_00060C16: ;
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_00060C37; /* je: equal / zero */

loc_00060C1D: ;
    edx = esi + 0x10;
    eax = edi;
    PUSH32(esp, 0); sub_00060AF0(); /* call 0x00060AF0 */

loc_00060C27: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00060C40; /* jne: not equal / not zero */

loc_00060C2D: ;
    PUSH32(esp, 0); sub_00060C50(); /* call 0x00060C50 */

loc_00060C32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00060C37: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00060C3E: ;
    eax = ecx;

loc_00060C40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060C50
 * Original: 0x00060C50 - 0x00060C79 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060C50: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (TEST_Z(esi, esi)) goto loc_00060C75; /* je: equal / zero */

loc_00060C58: ;
    goto loc_00060C60;

    /* nop */

loc_00060C60: ;
    edx = esi + 0x10;
    eax = edi;
    PUSH32(esp, 0); sub_00060AF0(); /* call 0x00060AF0 */

loc_00060C6A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00060C75; /* jne: not equal / not zero */

loc_00060C6E: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_00060C60; /* jne: not equal / not zero */

loc_00060C75: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00060C80
 * Original: 0x00060C80 - 0x00060CB1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060C80: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    if (CMP_A(esi, eax)) { sub_00060CB1(); return; } /* ja: above (unsigned >) */

loc_00060C88: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00060C90: ;
    edi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0029ED80(); /* call 0x0029ED80 */

loc_00060C9D: ;
    esp = esp + 0xC;
    ecx = 5;
    esi = ebx + 0x50;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    POP32(esp, edi);
    if (0 /* strings differed (repe cmpsb) */) { sub_00060CB1(); return; } /* jne: not equal / not zero */

loc_00060CAF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00060CC0
 * Original: 0x00060CC0 - 0x00060CDE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060CC0: ;
    if (CMP_NE(eax, 0x14)) { sub_00060CDE(); return; } /* jne: not equal / not zero */

loc_00060CC5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    esi = esi + 0x64;
    ecx = 5;
    edi = edx;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    POP32(esp, edi);
    POP32(esp, esi);
    if (0 /* strings differed (repe cmpsb) */) { sub_00060CDE(); return; } /* jne: not equal / not zero */

loc_00060CDD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00060CF0
 * Original: 0x00060CF0 - 0x00060D85 (149 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060CF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, esi);
    esi = ebx + 0x118;
    ebp = 0; /* xor self */
    MEM32(esi) = ebp;
    MEM8(ebx + 0x124) = 1;
    (void)0; /* cmp MEM32(esi), ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(esi), ebp)) goto loc_00060D25; /* je: equal / zero */

loc_00060D0B: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(ecx);
    eax = esi + 4;
    edi--;
    MEM32(ecx) = edi;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), ebp)) goto loc_00060D25; /* jne: not equal / not zero */

loc_00060D1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00060D22: ;
    esp = esp + 4;

loc_00060D25: ;
    edi = 0x5D889C;
    eax = esi;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00060D31: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x120) = ebp;
    PUSH32(esp, 0); sub_0042D782(); /* call 0x0042D782 */

loc_00060D42: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(ebx + 8) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_00060D7C; /* je: equal / zero */

loc_00060D49: ;
    PUSH32(esp, esi);
    MEM32(ebx + 0x128) = ebp;
    MEM32(ebx + 0x12C) = ebp;
    MEM32(ebx + 0x130) = ebp;
    PUSH32(esp, 0); sub_00060EE0(); /* call 0x00060EE0 */

loc_00060D61: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00060D90(); /* call 0x00060D90 */

loc_00060D68: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = ebx;
    if (TEST_NZ(eax, eax)) goto loc_00060D7E; /* jne: not equal / not zero */

loc_00060D6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x124) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00060D7C: ;
    eax = ebx;

loc_00060D7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060D90
 * Original: 0x00060D90 - 0x00060DC0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060D90: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = eax;
    edx = MEM32(edi + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5D888C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042D91C(); /* call 0x0042D91C */

loc_00060DB2: ;
    if (TEST_NZ(eax, eax)) { sub_00060DC0(); return; } /* jne: not equal / not zero */

loc_00060DB6: ;
    eax = 2;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00060E80
 * Original: 0x00060E80 - 0x00060ED7 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00060E80: ;
    esp = esp - 8;
    eax = 0; /* xor self */
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D91C(); /* call 0x0042D91C */

loc_00060EA2: ;
    if (TEST_Z(eax, eax)) goto loc_00060ED1; /* je: equal / zero */

loc_00060EA6: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_00060EC9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_000610B0(); /* call 0x000610B0 */

loc_00060ED1: ;
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00060EE0
 * Original: 0x00060EE0 - 0x00060F41 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060EE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x5D8888;
    esi = ebp;
    ecx = 3;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) { sub_00060F41(); return; } /* jne: not equal / not zero */

loc_00060EF9: ;
    edx = MEM32(ebx + 0x114);
    (void)0; /* cmp edx, MEM32(ebx + 0x110) - flags set for next jcc */
    ecx = 2;
    if (CMP_BE(edx, MEM32(ebx + 0x110))) goto loc_00060F30; /* jbe: below or equal (unsigned <=) */

loc_00060F0C: ;
    /* nop */

loc_00060F10: ;
    eax = MEM32(ebx + 0x114);
    SET_LO8(edx, MEM8(eax + -1));
    eax--;
    if (CMP_NE(LO8(edx), 0x5C)) goto loc_00060F22; /* jne: not equal / not zero */

loc_00060F1F: ;
    ecx--;
    if ((ecx == 0)) goto loc_00060F30; /* je: equal / zero */

loc_00060F22: ;
    MEM32(ebx + 0x114) = eax;
    if (CMP_A(eax, MEM32(ebx + 0x110))) goto loc_00060F10; /* ja: above (unsigned >) */

loc_00060F30: ;
    ecx = MEM32(ebx + 0x114);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061000
 * Original: 0x00061000 - 0x000610B0 (176 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061000(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061000: ;
    eax = MEM32(0x875604);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_000610AE; /* jne: not equal / not zero */

loc_00061010: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0006101D; /* jne: not equal / not zero */

loc_00061018: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0006101D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00061067; /* je: equal / zero */

loc_00061045: ;
    if (CMP_B(MEM32(esi + 0x80), 0x7C)) goto loc_00061067; /* jb: below (unsigned <) */

loc_0006104E: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00061058: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00061060: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00061088; /* jne: not equal / not zero */

loc_00061067: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00061079: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00061081: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_000610A5; /* je: equal / zero */

loc_00061088: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x10) = LO8(ebx);
    MEM32(eax + 0x44) = ebx;
    MEM8(eax + 0x78) = LO8(ebx);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(0x875604) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000610A5: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x875604) = eax;
    POP32(esp, esi);

loc_000610AE: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000610B0
 * Original: 0x000610B0 - 0x0006139F (751 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000610B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000610B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ebx = esp + 0x18;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_000610D7: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00061253; /* je: equal / zero */

loc_000610E7: ;
    esi = MEM32(ebp + 4);
    if (CMP_EQ(esi, ebx)) goto loc_00061123; /* je: equal / zero */

loc_000610EE: ;
    edi = edi;

loc_000610F0: ;
    ecx = ZX8(MEM8(esi + 0x40));
    edi = MEM32(esp + 0x14);
    if (CMP_NE(edi, ecx)) goto loc_00061112; /* jne: not equal / not zero */

loc_000610FC: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_0006110B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00061119; /* je: equal / zero */

loc_00061112: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, ebx)) goto loc_000610F0; /* jne: not equal / not zero */

loc_00061119: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    eax = esi;
    if (CMP_NE(esi, ebx)) goto loc_0006120B; /* jne: not equal / not zero */

loc_00061123: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00061130; /* jne: not equal / not zero */

loc_0006112B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00061130: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00061178; /* je: equal / zero */

loc_00061156: ;
    if (CMP_B(MEM32(esi + 0x80), 0x7C)) goto loc_00061178; /* jb: below (unsigned <) */

loc_0006115F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00061169: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00061171: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00061199; /* jne: not equal / not zero */

loc_00061178: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0006118A: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00061192: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_000611DA; /* je: equal / zero */

loc_00061199: ;
    edx = MEM32(esp + 0x14);
    (void)0; /* cmp edx, 0x2F - flags set for next jcc */
    MEM32(eax) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = ebx;
    if (CMP_B(edx, 0x2F)) goto loc_000611B2; /* jb: below (unsigned <) */

loc_000611AD: ;
    edx = 0x2F;

loc_000611B2: ;
    esi = MEM32(esp + 0x10);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ebx = 0; /* xor self */
    MEM8(eax + edx + 0x10) = LO8(ebx);
    MEM8(eax + 0x40) = LO8(edx);
    MEM32(eax + 0x44) = ebx;
    MEM8(eax + 0x78) = LO8(ebx);
    goto loc_000611DC;

loc_000611DA: ;
    eax = 0; /* xor self */

loc_000611DC: ;
    ecx = MEM32(ebp + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000611FF; /* je: equal / zero */

loc_000611E3: ;
    if (CMP_EQ(MEM32(ecx + 0xC), ebx)) goto loc_000611F0; /* je: equal / zero */

loc_000611E8: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(MEM32(ecx + 0xC), ebx)) goto loc_000611E8; /* jne: not equal / not zero */

loc_000611F0: ;
    edx = MEM32(ecx);
    MEM32(ecx + 0xC) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax) = edx;
    goto loc_00061205;

loc_000611FF: ;
    MEM32(ebp + 4) = eax;
    MEM32(eax + 8) = ebx;

loc_00061205: ;
    edi = MEM32(esp + 0x14);
    MEM32(eax) = ebp;

loc_0006120B: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ebp;
    esi = edi + ecx;
    ebp = eax;
    if (CMP_NE(MEM8(esi), 0x5C)) goto loc_0006121E; /* jne: not equal / not zero */

loc_0006121D: ;
    esi++;

loc_0006121E: ;
    eax = esi;
    edx = eax + 1;

loc_00061223: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00061223; /* jne: not equal / not zero */

loc_0006122A: ;
    eax = eax - edx;
    edi = eax;
    if ((eax == 0)) goto loc_00061243; /* je: equal / zero */

loc_00061230: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F000(); /* call 0x0046F000 */

loc_00061238: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00061243; /* je: equal / zero */

loc_0006123F: ;
    eax = eax - esi;
    edi = eax;

loc_00061243: ;
    (void)0; /* cmp MEM8(esi), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(MEM8(esi), LO8(ebx))) goto loc_000610E7; /* jne: not equal / not zero */

loc_00061253: ;
    if (CMP_EQ(MEM32(ebp + 0x44), ebx)) goto loc_0006130C; /* je: equal / zero */

loc_0006125C: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00061269; /* jne: not equal / not zero */

loc_00061264: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00061269: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_000612B1; /* je: equal / zero */

loc_0006128F: ;
    if (CMP_B(MEM32(esi + 0x80), 0x7C)) goto loc_000612B1; /* jb: below (unsigned <) */

loc_00061298: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000612A2: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000612AA: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_000612D2; /* jne: not equal / not zero */

loc_000612B1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000612C3: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000612CB: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_000612EE; /* je: equal / zero */

loc_000612D2: ;
    ecx = ebp + 0x10;
    esi = ecx + 1;

loc_000612D8: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_000612D8; /* jne: not equal / not zero */

loc_000612DF: ;
    edx = ebp + 0x10;
    ecx = ecx - esi;
    PUSH32(esp, edx);
    edx = ecx;
    PUSH32(esp, 0); sub_00061490(); /* call 0x00061490 */

loc_000612EC: ;
    goto loc_000612F0;

loc_000612EE: ;
    eax = 0; /* xor self */

loc_000612F0: ;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edx = MEM32(ebp);
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(ecx, ebx)) goto loc_00061302; /* je: equal / zero */

loc_000612FD: ;
    edx = MEM32(ecx);
    MEM32(ecx + 8) = eax;

loc_00061302: ;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = edx;
    ebp = eax;

loc_0006130C: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_0006131B; /* je: equal / zero */

loc_00061314: ;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x44) = edx;

loc_0006131B: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x30);
    MEM32(ebp + 0x48) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(ebp + 0x44) = eax;
    eax = ecx;
    ecx = ecx >> 2;
    MEM32(ebp + 0x4C) = edx;
    edi = ebp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x38);
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebp + 0x64;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_0006136B: ;
    ebx = eax;
    esi = MEM32(ebx + 4);
    ecx = MEM32(esi + 4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_0006137F: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_0006138D: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000613A0
 * Original: 0x000613A0 - 0x000613EB (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000613A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000613A0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = ecx;
    PUSH32(esp, 0); sub_00061400(); /* call 0x00061400 */

loc_000613B7: ;
    esi = eax;
    if (TEST_Z(esi, esi)) { sub_000613EB(); return; } /* je: equal / zero */

loc_000613BD: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_000613CB: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) { sub_000613EB(); return; } /* je: equal / zero */

loc_000613D3: ;
    esi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_000613E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00061400
 * Original: 0x00061400 - 0x0006142C (44 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061400: ;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00061428; /* je: equal / zero */

loc_00061407: ;
    eax = ZX8(MEM8(esi + 0x40));
    if (CMP_NE(edi, eax)) goto loc_00061421; /* jne: not equal / not zero */

loc_0006140F: ;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_0006141A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00061428; /* je: equal / zero */

loc_00061421: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_00061407; /* jne: not equal / not zero */

loc_00061428: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00061430
 * Original: 0x00061430 - 0x0006144D (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061430: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    SET_LO8(eax, MEM8(esi + ecx));
    esi = esi + ecx;
    (void)0; /* cmp LO8(eax), 0x5C - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(LO8(eax), 0x5C)) goto loc_00061446; /* jne: not equal / not zero */

loc_00061445: ;
    esi++;

loc_00061446: ;
    eax = esi;
    edx = eax + 1;
    g_seh_ebp = ebp; sub_00061450(); return; /* tail jmp 0x00061450 */

}

/**
 * sub_00061490
 * Original: 0x00061490 - 0x000614D6 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061490: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, 0x2F - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = ebx;
    if (CMP_B(edx, 0x2F)) goto loc_000614AB; /* jb: below (unsigned <) */

loc_000614A6: ;
    edx = 0x2F;

loc_000614AB: ;
    esi = MEM32(esp + 0x14);
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    MEM8(edx + eax + 0x10) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x44) = ebx;
    MEM8(eax + 0x78) = LO8(ebx);
    MEM8(eax + 0x40) = LO8(edx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000614E0
 * Original: 0x000614E0 - 0x0006152D (77 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000614E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000614E0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    esi = ecx;
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_000614F2: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(esi, esi)) goto loc_0006151A; /* je: equal / zero */

loc_000614FA: ;
    edx = esp + 0x10;
    ecx = edx;

loc_00061500: ;
    edx = MEM32(edx);
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_0006151A; /* je: equal / zero */

loc_00061508: ;
    if (CMP_EQ(edx, eax)) goto loc_0006151A; /* je: equal / zero */

loc_0006150C: ;
    ecx = ecx + 4;
    MEM32(ecx) = edx;
    edi = MEM32(ecx);
    ebp++;
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = ecx;
    if (TEST_NZ(edi, edi)) goto loc_00061500; /* jne: not equal / not zero */

loc_0006151A: ;
    eax = MEM32(esi + 0x44);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00061529; /* jne: not equal / not zero */

loc_00061524: ;
    ecx = 0x587BE4;

loc_00061529: ;
    edx = ebx;
    g_seh_ebp = ebp; sub_00061530(); return; /* tail jmp 0x00061530 */

}

/**
 * sub_000615D0
 * Original: 0x000615D0 - 0x00061640 (112 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000615D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000615D0: ;
    if (TEST_NZ(MEM8(0x877E08), 1)) goto loc_0006163A; /* jne: not equal / not zero */

loc_000615D9: ;
    edx = MEM32(0x877E08);
    PUSH32(esp, esi);
    edx = edx | 1;
    PUSH32(esp, edi);
    MEM32(0x877E08) = edx;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_000615EF: ;
    esi = 0; /* xor self */
    edi = 0x877DE0;
    MEM32(0x877DE4) = eax;
    MEM32(0x877DE8) = esi;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00061606: ;
    PUSH32(esp, 0x48C460);
    MEM32(0x877DEC) = esi;
    MEM32(0x877DF0) = esi;
    MEM32(0x877DF4) = esi;
    MEM32(0x877DF8) = esi;
    MEM32(0x877DFC) = esi;
    MEM8(0x877E04) = 1;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00061635: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0006163A: ;
    eax = 0x877DE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00061640
 * Original: 0x00061640 - 0x0006182F (495 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061640: ;
    eax = MEM32(edi + 8);
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00061827; /* je: equal / zero */

loc_00061654: ;
    if (CMP_NE(MEM8(edi + 0x24), LO8(ebx))) goto loc_00061827; /* jne: not equal / not zero */

loc_0006165D: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = edi;
    MEM32(edi + 0xC) = edx;
    PUSH32(esp, 0); sub_00288FE0(); /* call 0x00288FE0 */

loc_00061670: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx + 0x44);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00061692; /* je: equal / zero */

loc_0006167E: ;
    if (CMP_EQ(MEM8(eax + 0x124), LO8(ebx))) goto loc_00061692; /* je: equal / zero */

loc_00061686: ;
    POP32(esp, esi);
    MEM32(edi + 0xC) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_00061692: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_000614E0(); /* call 0x000614E0 */

loc_0006169C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_001F13C0(); /* call 0x001F13C0 */

loc_000616AA: ;
    esi = MEM32(esp + 0x10);
    ebp = eax;
    esp = esp + 4;
    if (CMP_NE(ebp, ebx)) goto loc_000616F7; /* jne: not equal / not zero */

loc_000616B7: ;
    PUSH32(esp, 0x103);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_000616CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_000616E4: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0006170E; /* jne: not equal / not zero */

loc_000616EC: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000616F1: ;
    ebp = eax;
    if (CMP_EQ(ebp, ebx)) goto loc_0006170E; /* je: equal / zero */

loc_000616F7: ;
    if (CMP_EQ(esi, ebx)) goto loc_0006170E; /* je: equal / zero */

loc_000616FB: ;
    eax = esi;
    MEM32(esi + 0x110) = 2;
    PUSH32(esp, 0); sub_001F1450(); /* call 0x001F1450 */

loc_0006170C: ;
    esi = 0; /* xor self */

loc_0006170E: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(edi + 0x14) = esi;
    if (CMP_NE(ebp, ebx)) goto loc_0006173A; /* jne: not equal / not zero */

loc_00061715: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_00061725: ;
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(edx + 0x48);
    esp = esp + 4;
    if (CMP_NE(ecx, esi)) goto loc_0006173A; /* jne: not equal / not zero */

loc_00061736: ;
    if (CMP_EQ(eax, ebx)) goto loc_00061755; /* je: equal / zero */

loc_0006173A: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, esi);
    MEM8(edx + 0x124) = 1;
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_00061755: ;
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0006175F: ;
    MEM32(edi + 0x18) = eax;
    eax = MEM32(0x84A19C);
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x1C) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_00061776; /* jne: not equal / not zero */

loc_00061771: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00061776: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_000617BE; /* je: equal / zero */

loc_0006179C: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_000617BE; /* jb: below (unsigned <) */

loc_000617A5: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000617AF: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000617B7: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_000617DF; /* jne: not equal / not zero */

loc_000617BE: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000617D0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000617D8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_000617EF; /* je: equal / zero */

loc_000617DF: ;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    esi = eax;
    goto loc_000617F1;

loc_000617EF: ;
    esi = 0; /* xor self */

loc_000617F1: ;
    PUSH32(esp, 2);
    MEM32(edi + 0x10) = esi;
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_000617FB: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00061809; /* jne: not equal / not zero */

loc_00061802: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00061807: ;
    goto loc_00061813;

loc_00061809: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_00061810: ;
    MEM32(esi + 8) = eax;

loc_00061813: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00061900(); /* call 0x00061900 */

loc_0006181A: ;
    if (TEST_Z(eax, eax)) goto loc_00061825; /* je: equal / zero */

loc_0006181E: ;
    ebx = edi;
    PUSH32(esp, 0); sub_00061830(); /* call 0x00061830 */

loc_00061825: ;
    POP32(esp, ebp);
    POP32(esp, esi);

loc_00061827: ;
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

}

/**
 * sub_00061830
 * Original: 0x00061830 - 0x000618FA (202 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_0006183B: ;
    esi = MEM32(ebx + 0x10);
    ebp = 0; /* xor self */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_00061866; /* je: equal / zero */

loc_00061848: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00061851: ;
    ecx = MEM32(esi);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00061860: ;
    MEM32(esi) = 0xFFFFFFFFu;

loc_00061866: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, ebp)) goto loc_00061888; /* je: equal / zero */

loc_00061871: ;
    if (CMP_NE(MEM32(eax + 8), 0x14)) goto loc_00061888; /* jne: not equal / not zero */

loc_00061877: ;
    esi = MEM32(ebx + 0xC);
    esi = esi + 0x64;
    ecx = 5;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00061895; /* je: equal / zero */

loc_00061888: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 0x44);
    MEM8(ecx + 0x124) = 1;

loc_00061895: ;
    eax = MEM32(ebx + 0x18);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(ebx + 0xC) = ebp;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_000618B1; /* je: equal / zero */

loc_000618A4: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000618AE: ;
    esp = esp + 4;

loc_000618B1: ;
    esi = MEM32(ebx + 0x10);
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(ebx + 0x18) = ebp;
    if (CMP_EQ(esi, ebp)) goto loc_000618F3; /* je: equal / zero */

loc_000618BB: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000618CF; /* je: equal / zero */

loc_000618C2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_000618C9: ;
    MEM32(esi) = 0xFFFFFFFFu;

loc_000618CF: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_000618E2; /* je: equal / zero */

loc_000618D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_000618DC: ;
    esp = esp + 4;
    MEM32(esi + 4) = ebp;

loc_000618E2: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000618F0: ;
    esp = esp + 4;

loc_000618F3: ;
    POP32(esp, esi);
    MEM32(ebx + 0x10) = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00061900
 * Original: 0x00061900 - 0x00061919 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x48);
    ecx = MEM32(esi + 0x1C);
    if (CMP_B(ecx, eax)) { sub_00061919(); return; } /* jb: below (unsigned <) */

loc_00061911: ;
    eax = 0x26;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00061970
 * Original: 0x00061970 - 0x000619B2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061970(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061970: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000619AB; /* jne: not equal / not zero */

loc_0006197D: ;
    eax = MEM32(ebx + 0x10);
    eax = MEM32(eax);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00061995; /* je: equal / zero */

loc_00061987: ;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_00061995: ;
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(ebx + 0x20);
    edx = edx + eax;
    ecx = ebx;
    MEM32(ebx + 0x1C) = edx;
    PUSH32(esp, 0); sub_00061900(); /* call 0x00061900 */

loc_000619A7: ;
    if (TEST_Z(eax, eax)) goto loc_000619B0; /* je: equal / zero */

loc_000619AB: ;
    PUSH32(esp, 0); sub_00061830(); /* call 0x00061830 */

loc_000619B0: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000619C0
 * Original: 0x000619C0 - 0x000619F9 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000619C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000619C0: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_000619CF; /* je: equal / zero */

loc_000619C9: ;
    eax = MEM32(edx + 0x48);
    eax = eax - MEM32(ecx + 0x1C);

loc_000619CF: ;
    SET_LO8(edx, MEM8(ecx + 0x24));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000619F8; /* jne: not equal / not zero */

loc_000619D6: ;
    edx = MEM32(ecx + 8);
    if (TEST_Z(edx, edx)) goto loc_000619F8; /* je: equal / zero */

loc_000619DD: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    if (CMP_EQ(ecx, edx)) goto loc_000619F8; /* je: equal / zero */

loc_000619E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000619E8: ;
    esi = MEM32(ecx + 8);
    edi = MEM32(esi + 0x48);
    ecx = MEM32(ecx);
    eax = eax + edi;
    if (CMP_NE(ecx, edx)) goto loc_000619E8; /* jne: not equal / not zero */

loc_000619F6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000619F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00061A00
 * Original: 0x00061A00 - 0x00061A84 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061A00: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00061A84(); return; } /* je: equal / zero */

loc_00061A1B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00061A2F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00061A64; /* je: equal / zero */

loc_00061A3A: ;
    ecx = 0x75DAE4;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00061A44: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00061A61: ;
    esp = esp + 0x14;

loc_00061A64: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00061A7D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00061AB0
 * Original: 0x00061AB0 - 0x00061B2B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00061AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F580);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00061AE4: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_00061AFD; /* je: equal / zero */

loc_00061AFB: ;
    MEM32(eax) = eax;

loc_00061AFD: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00061B13; /* je: equal / zero */

loc_00061B11: ;
    MEM32(ecx) = eax;

loc_00061B13: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00061B50
 * Original: 0x00061B50 - 0x00061BC5 (117 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00061B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F570);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00061B84: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00061BAB; /* je: equal / zero */

loc_00061B98: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;

loc_00061BAB: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00061BF0
 * Original: 0x00061BF0 - 0x00061C14 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061BF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061BF0: ;
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(eax + 0x658) = edx;
    MEM32(eax + 0x65C) = edx;
    MEM32(eax + 0x660) = edx;
    MEM32(eax) = edx;
    ecx = eax + 0x330;
    esi = 0x65;
    g_seh_ebp = ebp; sub_00061C20(); return; /* tail jmp 0x00061C20 */

}

/**
 * sub_00061C40
 * Original: 0x00061C40 - 0x00061D53 (275 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061C40: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00061C55; /* jne: not equal / not zero */

loc_00061C50: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00061C55: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00061C9F; /* je: equal / zero */

loc_00061C7B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_00061C9F; /* jb: below (unsigned <) */

loc_00061C84: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00061C8E: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00061C96: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00061CC6; /* jne: not equal / not zero */

loc_00061C9F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00061CB1: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00061CB9: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_00061D53(); return; } /* je: equal / zero */

loc_00061CC6: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00063550(); /* call 0x00063550 */

loc_00061CD6: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00061D4B; /* je: equal / zero */

loc_00061CDC: ;
    eax = ebx;
    esi = edi + 0x10;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00061CE6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp + edx * 8 + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebp + edx * 8 + 4;
    if (TEST_Z(ecx, ecx)) goto loc_00061D07; /* je: equal / zero */

loc_00061CFA: ;
    /* nop */

loc_00061D00: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00061D00; /* jne: not equal / not zero */

loc_00061D07: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00061D18; /* je: equal / zero */

loc_00061D16: ;
    MEM32(ecx) = esi;

loc_00061D18: ;
    edx = MEM32(ebp + 0x32C);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = ebp + 0x32C;
    ecx = edi + 0x1C;
    if (TEST_Z(edx, edx)) goto loc_00061D37; /* je: equal / zero */

loc_00061D2B: ;
    goto loc_00061D30;

    /* nop */

loc_00061D30: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00061D30; /* jne: not equal / not zero */

loc_00061D37: ;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    if (TEST_Z(edx, edx)) goto loc_00061D48; /* je: equal / zero */

loc_00061D46: ;
    MEM32(edx) = ecx;

loc_00061D48: ;
    MEM32(ebp) = MEM32(ebp) + 1;

loc_00061D4B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00061D60
 * Original: 0x00061D60 - 0x00061D77 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061D60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x38));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_00061D77(); return; } /* je: equal / zero */

loc_00061D6E: ;
    edx = edi;
    PUSH32(esp, 0); sub_00062080(); /* call 0x00062080 */

loc_00061D75: ;
    g_seh_ebp = ebp; sub_00061DA1(); return; /* tail jmp 0x00061DA1 */

}

/**
 * sub_00061DD0
 * Original: 0x00061DD0 - 0x00061E2B (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061DD0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(eax + 4) = 0x10D2;
    MEM32(eax) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x1C);
    eax = eax + 0x1C;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(ecx, esi)) goto loc_00061DF7; /* je: equal / zero */

loc_00061DF5: ;
    MEM32(ecx) = edx;

loc_00061DF7: ;
    ecx = MEM32(esp + 8);
    ecx = ecx + 0x32C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_00061E16; /* je: equal / zero */

loc_00061E0A: ;
    /* nop */

loc_00061E10: ;
    ecx = MEM32(ecx);
    if (CMP_NE(MEM32(ecx), esi)) goto loc_00061E10; /* jne: not equal / not zero */

loc_00061E16: ;
    edx = MEM32(ecx + 4);
    MEM32(ecx + 4) = eax;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    if (CMP_EQ(edx, esi)) goto loc_00061E28; /* je: equal / zero */

loc_00061E26: ;
    MEM32(edx) = eax;

loc_00061E28: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061E30
 * Original: 0x00061E30 - 0x00061E8B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061E30: ;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 4) = edx;
    edx = MEM32(ecx + 0x20);
    ecx = ecx + 0x1C;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 4) = edx;
    if (TEST_Z(edx, edx)) goto loc_00061E48; /* je: equal / zero */

loc_00061E46: ;
    MEM32(edx) = esi;

loc_00061E48: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(esp + 8);
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    POP32(esp, esi);
    eax = eax + edx * 8 + 0x32C;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00061E77; /* je: equal / zero */

loc_00061E6E: ;
    edi = edi;

loc_00061E70: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00061E70; /* jne: not equal / not zero */

loc_00061E77: ;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    if (TEST_Z(edx, edx)) goto loc_00061E88; /* je: equal / zero */

loc_00061E86: ;
    MEM32(edx) = ecx;

loc_00061E88: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061E90
 * Original: 0x00061E90 - 0x00061ECE (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061E90: ;
    eax = MEM32(ecx);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00061ECD; /* je: equal / zero */

loc_00061E97: ;
    edx = MEM32(ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (TEST_Z(edx, edx)) goto loc_00061EA3; /* je: equal / zero */

loc_00061EA1: ;
    MEM32(edx) = eax;

loc_00061EA3: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00061EBC; /* je: equal / zero */

loc_00061EB5: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00061EB5; /* jne: not equal / not zero */

loc_00061EBC: ;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    if (TEST_Z(edx, edx)) goto loc_00061ECD; /* je: equal / zero */

loc_00061ECB: ;
    MEM32(edx) = ecx;

loc_00061ECD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00061ED0
 * Original: 0x00061ED0 - 0x00061F27 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00061EDB: ;
    ebp = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + edx * 8 + 8);
    if (TEST_Z(esi, esi)) goto loc_00061F13; /* je: equal / zero */

loc_00061EF1: ;
    eax = MEM32(esi + -4);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edi = esi + -16;
    if (CMP_NE(eax, ebp)) goto loc_00061F0C; /* jne: not equal / not zero */

loc_00061EFB: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_00061F05: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00061F27(); return; } /* je: equal / zero */

loc_00061F0C: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_00061EF1; /* jne: not equal / not zero */

loc_00061F13: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000620D0(); /* call 0x000620D0 */

loc_00061F20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061F40
 * Original: 0x00061F40 - 0x00061F80 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00061F40: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_00061F71; /* je: equal / zero */

loc_00061F45: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edi + edx * 8 + 0x330);
    if (TEST_Z(edx, edx)) goto loc_00061F71; /* je: equal / zero */

loc_00061F5A: ;
    /* nop */

loc_00061F60: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = edx + -28;
    if (CMP_EQ(eax, ecx)) { sub_00061F80(); return; } /* je: equal / zero */

loc_00061F6A: ;
    edx = MEM32(edx + 4);
    if (TEST_NZ(edx, edx)) goto loc_00061F60; /* jne: not equal / not zero */

loc_00061F71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_000620D0(); /* call 0x000620D0 */

loc_00061F7D: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00061F90
 * Original: 0x00061F90 - 0x00061FF7 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    ebx = ebx + 8;
    ebp = 0x65;
    edi = edi;

loc_00061FA0: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_00061FEC; /* je: equal / zero */

loc_00061FA6: ;
    eax = MEM32(esi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = esi + -16;
    esi = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) goto loc_00061FE8; /* jne: not equal / not zero */

loc_00061FB3: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00061FE8; /* jne: not equal / not zero */

loc_00061FBA: ;
    if (CMP_EQ(MEM32(edi + 4), 0x10D2)) goto loc_00061FE8; /* je: equal / zero */

loc_00061FC3: ;
    ecx = MEM32(edi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_00061FE8; /* je: equal / zero */

loc_00061FCA: ;
    MEM16(edi + 0x2C) = 0xFFFF;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00061FE8; /* jne: not equal / not zero */

loc_00061FD7: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00061FDE: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00061FE8: ;
    if (TEST_NZ(esi, esi)) goto loc_00061FA6; /* jne: not equal / not zero */

loc_00061FEC: ;
    ebx = ebx + 8;
    ebp--;
    if ((ebp != 0)) goto loc_00061FA0; /* jne: not equal / not zero */

loc_00061FF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00062000
 * Original: 0x00062000 - 0x0006201A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062000: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x38));
    edx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(edx))) { sub_0006201A(); return; } /* je: equal / zero */

loc_00062013: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00062080
 * Original: 0x00062080 - 0x000620C8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062080: ;
    eax = MEM32(esi + 0x658);
    ecx = MEM32(esi + 0x65C);
    if (CMP_AE(eax, ecx)) goto loc_000620C7; /* jae: above or equal (unsigned >=) */

loc_00062090: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_0006209C; /* je: equal / zero */

loc_00062094: ;
    eax = eax + 4;
    if (CMP_B(eax, ecx)) goto loc_00062090; /* jb: below (unsigned <) */

loc_0006209B: ;
    esp += 4; return; /* ret */

loc_0006209C: ;
    edx = MEM32(esi + 0x65C);
    ecx = eax + 4;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 2);
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_000620B5: ;
    eax = MEM32(esi + 0x65C);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 0x65C) = eax;

loc_000620C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000620D0
 * Original: 0x000620D0 - 0x00062129 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000620D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000620D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x65C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x658);
    if (CMP_AE(edi, eax)) goto loc_00062121; /* jae: above or equal (unsigned >=) */

loc_000620E7: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = MEM32(edi);
    if (TEST_Z(ebx, ebx)) goto loc_00062107; /* je: equal / zero */

loc_000620ED: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, MEM32(esi + 0xC))) goto loc_00062107; /* jne: not equal / not zero */

loc_000620F6: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_00062100: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00062129(); return; } /* je: equal / zero */

loc_00062107: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00062114; /* je: equal / zero */

loc_0006210F: ;
    if (CMP_EQ(eax, MEM32(esi + 0x18))) { sub_00062129(); return; } /* je: equal / zero */

loc_00062114: ;
    eax = MEM32(ebp + 0x65C);
    edi = edi + 4;
    if (CMP_B(edi, eax)) goto loc_000620E7; /* jb: below (unsigned <) */

loc_00062121: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00062140
 * Original: 0x00062140 - 0x00062179 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062140(void)
{

loc_00062140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_00062147: ;
    edi = 0; /* xor self */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edi;
    ebx = esi + 0xC;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_00062157: ;
    MEM32(ebx + 8) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    edi = esi;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0006216D: ;
    edi = ebx;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00062174: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00062180
 * Original: 0x00062180 - 0x0006221F (159 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062180: ;
    eax = MEM32(0x875608);
    if (TEST_NZ(eax, eax)) goto loc_0006221E; /* jne: not equal / not zero */

loc_0006218D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0006219B; /* jne: not equal / not zero */

loc_00062196: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0006219B: ;
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
    if (TEST_Z(esi, esi)) goto loc_000621E5; /* je: equal / zero */

loc_000621C3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x24)) goto loc_000621E5; /* jb: below (unsigned <) */

loc_000621CC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000621D6: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000621DE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00062206; /* jne: not equal / not zero */

loc_000621E5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000621F7: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000621FF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00062215; /* je: equal / zero */

loc_00062206: ;
    esi = eax;
    PUSH32(esp, 0); sub_00062140(); /* call 0x00062140 */

loc_0006220D: ;
    POP32(esp, edi);
    MEM32(0x875608) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00062215: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x875608) = eax;
    POP32(esp, esi);

loc_0006221E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00062220
 * Original: 0x00062220 - 0x00062285 (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_00062228: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_00062248: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_0006225D: ;
    edx = MEM32(esp + 0x20);
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) { sub_00062285(); return; } /* je: equal / zero */

loc_0006226B: ;
    eax = MEM32(ecx + 0x44);
    SET_LO8(edx, MEM8(eax + 0x124));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00062285(); return; } /* jne: not equal / not zero */

loc_00062278: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_000614E0(); /* call 0x000614E0 */

loc_00062281: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00062290
 * Original: 0x00062290 - 0x000622C7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_00062296: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, 0); sub_0005FC90(); /* call 0x0005FC90 */

loc_000622A7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_000622C7(); return; } /* je: equal / zero */

loc_000622AC: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_000622C7(); return; } /* je: equal / zero */

loc_000622B3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0005FCE0(); /* call 0x0005FCE0 */

loc_000622C2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000622D0
 * Original: 0x000622D0 - 0x000622E1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000622D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000622D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) { sub_000622E1(); return; } /* je: equal / zero */

loc_000622DA: ;
    edi = 0x100;
    g_seh_ebp = ebp; sub_000622EB(); return; /* tail jmp 0x000622EB */

}

/**
 * sub_00062330
 * Original: 0x00062330 - 0x000623E3 (179 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062330: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x218;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x139F;
    if (CMP_NE(eax, ebp)) goto loc_0006234F; /* jne: not equal / not zero */

loc_0006234A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0006234F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebp)) goto loc_0006239D; /* je: equal / zero */

loc_00062375: ;
    if (CMP_B(MEM32(esi + 0x80), 0x83C)) goto loc_0006239D; /* jb: below (unsigned <) */

loc_00062381: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0006238B: ;
    PUSH32(esp, 0x83C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00062396: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebp)) goto loc_000623C1; /* jne: not equal / not zero */

loc_0006239D: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000623AF: ;
    PUSH32(esp, 0x83C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000623BA: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) { sub_000623E3(); return; } /* je: equal / zero */

loc_000623C1: ;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ebp;
    edi = eax;
    MEM32(eax + 0x830) = ebp;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x82C) = ebp;
    MEM32(eax + 0x24) = ebp;
    MEM32(eax) = ebp;
    MEM32(esp + 0x10) = edi;
    g_seh_ebp = ebp; sub_000623E9(); return; /* tail jmp 0x000623E9 */

}

/**
 * sub_00062530
 * Original: 0x00062530 - 0x00062599 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062530: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_00062536: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00062597; /* je: equal / zero */

loc_0006253C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00062546: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) goto loc_00062558; /* je: equal / zero */

loc_0006254D: ;
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00062555: ;
    esp = esp + 0xC;

loc_00062558: ;
    if (CMP_NE(edi, MEM32(esi + 0x20))) goto loc_00062564; /* jne: not equal / not zero */

loc_0006255D: ;
    MEM32(esi + 0x20) = 0;

loc_00062564: ;
    PUSH32(esp, 0); sub_000629F0(); /* call 0x000629F0 */

loc_00062569: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00062577: ;
    esp = esp + 4;
    edi = esi;
    PUSH32(esp, 0); sub_00062620(); /* call 0x00062620 */

loc_00062581: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00062595; /* je: equal / zero */

loc_00062587: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_0006258F: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00062546; /* jne: not equal / not zero */

loc_00062595: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00062597: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000625A0
 * Original: 0x000625A0 - 0x00062614 (116 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000625A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000625A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x18);
    eax = eax - 0;
    if ((eax == 0)) goto loc_000625D7; /* je: equal / zero */

loc_000625AD: ;
    eax--;
    if ((eax != 0)) goto loc_000625FF; /* jne: not equal / not zero */

loc_000625B0: ;
    esi = MEM32(edi + 0x10);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = edi + 0xC;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_000625C6: ;
    ecx = 1;
    edx = ebp;
    ebx = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_000625D4: ;
    POP32(esp, ebp);
    goto loc_000625F7;

loc_000625D7: ;
    esi = MEM32(edi + 4);
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_000625E9: ;
    ecx = 1;
    edx = edi;
    ebx = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_000625F7: ;
    MEM32(esi + 4) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = ebx;

loc_000625FF: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0x62530;
    PUSH32(esp, 0); sub_00062620(); /* call 0x00062620 */

loc_0006260E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062620
 * Original: 0x00062620 - 0x00062682 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062620: ;
    ecx = MEM32(edi + 0x20);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(ecx, ecx)) { sub_00062682(); return; } /* jne: not equal / not zero */

loc_0006262A: ;
    if (CMP_G(MEM32(edi + 0x1C), 1)) goto loc_00062652; /* jg: greater (signed >) */

loc_00062630: ;
    ecx = MEM32(edi + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_00062652; /* je: equal / zero */

loc_00062637: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    esi = edi + 0xC;
    MEM32(edi + 0x20) = edx;
    PUSH32(esp, 0); sub_00288FE0(); /* call 0x00288FE0 */

loc_0006264A: ;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, 0); sub_00062B50(); /* call 0x00062B50 */

loc_00062652: ;
    ecx = MEM32(edi + 0x20);
    if (TEST_NZ(ecx, ecx)) { sub_00062682(); return; } /* jne: not equal / not zero */

loc_00062659: ;
    ecx = MEM32(edi + 0x1C);
    if (CMP_G(ecx & ecx, 0)) { sub_00062682(); return; } /* jg: greater (signed >) */

loc_00062660: ;
    ecx = MEM32(edi + 8);
    if (TEST_Z(ecx, ecx)) { sub_00062682(); return; } /* je: equal / zero */

loc_00062667: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    esi = edi;
    MEM32(edi + 0x20) = edx;
    PUSH32(esp, 0); sub_00288FE0(); /* call 0x00288FE0 */

loc_00062679: ;
    eax = MEM32(edi + 0x20);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00062B50(); return; /* tail jmp 0x00062B50 */

}

/**
 * sub_00062690
 * Original: 0x00062690 - 0x000626CB (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) goto loc_000626A6; /* je: equal / zero */

loc_0006269B: ;
    edx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000626A3: ;
    esp = esp + 0xC;

loc_000626A6: ;
    if (CMP_NE(edi, MEM32(esi + 0x20))) goto loc_000626B2; /* jne: not equal / not zero */

loc_000626AB: ;
    MEM32(esi + 0x20) = 0;

loc_000626B2: ;
    PUSH32(esp, 0); sub_000629F0(); /* call 0x000629F0 */

loc_000626B7: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000626C5: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000626D0
 * Original: 0x000626D0 - 0x00062712 (66 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000626D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000626D0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x20);
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_00062710; /* je: equal / zero */

loc_000626DB: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx);
    if (CMP_EQ(ecx, edx)) goto loc_000626F2; /* je: equal / zero */

loc_000626E4: ;
    eax = MEM32(ecx + 8);
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_00062710; /* je: equal / zero */

loc_000626EC: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, edx)) goto loc_000626E4; /* jne: not equal / not zero */

loc_000626F2: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(edx);
    if (CMP_EQ(ecx, edx)) goto loc_0006270E; /* je: equal / zero */

loc_000626FB: ;
    goto loc_00062700;

    /* nop */

loc_00062700: ;
    eax = MEM32(ecx + 8);
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_00062710; /* je: equal / zero */

loc_00062708: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, edx)) goto loc_00062700; /* jne: not equal / not zero */

loc_0006270E: ;
    eax = 0; /* xor self */

loc_00062710: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00062720
 * Original: 0x00062720 - 0x0006272D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062720(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062720: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x20);
    if (CMP_NE(MEM32(eax + 4), edx)) { sub_0006272D(); return; } /* jne: not equal / not zero */

loc_00062729: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000627E0
 * Original: 0x000627E0 - 0x000628C0 (224 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000627E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000627E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x20);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(esi, ebx)) goto loc_0006281D; /* je: equal / zero */

loc_000627FC: ;
    ecx = MEM32(esi + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_00062809: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0006281D; /* jne: not equal / not zero */

loc_00062810: ;
    ecx = MEM32(esi + 0x14);
    ebx = MEM32(esp + 0x10);
    ebx = ebx - MEM32(ecx + 0x11C);

loc_0006281D: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax);
    if (CMP_EQ(esi, eax)) goto loc_0006286A; /* je: equal / zero */

loc_00062826: ;
    edi = MEM32(esi + 8);
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_0006283A: ;
    if (TEST_NZ(eax, eax)) goto loc_00062847; /* jne: not equal / not zero */

loc_0006283E: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00062843: ;
    if (TEST_NZ(eax, eax)) goto loc_0006285E; /* jne: not equal / not zero */

loc_00062847: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_0006285E; /* jne: not equal / not zero */

loc_0006284F: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x10);
    edx = edx - MEM32(ecx + 0x11C);
    ebx = ebx + edx;

loc_0006285E: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(esi);
    if (CMP_NE(esi, MEM32(eax + 0x10))) goto loc_00062826; /* jne: not equal / not zero */

loc_00062868: ;
    edi = eax;

loc_0006286A: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax);
    if (CMP_EQ(esi, eax)) goto loc_000628B5; /* je: equal / zero */

loc_00062873: ;
    edi = MEM32(esi + 8);
    eax = MEM32(edi + 0x14);
    edx = MEM32(eax + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_00062887: ;
    if (TEST_NZ(eax, eax)) goto loc_00062894; /* jne: not equal / not zero */

loc_0006288B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00062890: ;
    if (TEST_NZ(eax, eax)) goto loc_000628AB; /* jne: not equal / not zero */

loc_00062894: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_000628AB; /* jne: not equal / not zero */

loc_0006289C: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x10);
    ecx = ecx - MEM32(eax + 0x11C);
    ebx = ebx + ecx;

loc_000628AB: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(esi);
    if (CMP_NE(esi, MEM32(edx + 4))) goto loc_00062873; /* jne: not equal / not zero */

loc_000628B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000628C0
 * Original: 0x000628C0 - 0x000629A0 (224 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000628C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000628C0: ;
    esp = esp - 0x14;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x20);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_000628F7; /* je: equal / zero */

loc_000628D5: ;
    ecx = MEM32(esi + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_000628E2: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_000628F7; /* jne: not equal / not zero */

loc_000628E9: ;
    esi = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_001F24B0(); /* call 0x001F24B0 */

loc_000628F1: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_000628F7: ;
    eax = MEM32(ebx + 0x10);
    edi = MEM32(eax);
    if (CMP_EQ(edi, eax)) goto loc_00062944; /* je: equal / zero */

loc_00062900: ;
    esi = MEM32(edi + 8);
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_00062914: ;
    if (TEST_NZ(eax, eax)) goto loc_00062921; /* jne: not equal / not zero */

loc_00062918: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0006291D: ;
    if (TEST_NZ(eax, eax)) goto loc_0006293D; /* jne: not equal / not zero */

loc_00062921: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_0006293D; /* jne: not equal / not zero */

loc_00062929: ;
    esi = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_001F24B0(); /* call 0x001F24B0 */

loc_00062931: ;
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0006293D: ;
    edi = MEM32(edi);
    if (CMP_NE(edi, MEM32(ebx + 0x10))) goto loc_00062900; /* jne: not equal / not zero */

loc_00062944: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(eax);
    if (CMP_EQ(edi, eax)) goto loc_00062994; /* je: equal / zero */

loc_0006294D: ;
    /* nop */

loc_00062950: ;
    esi = MEM32(edi + 8);
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_00062964: ;
    if (TEST_NZ(eax, eax)) goto loc_00062971; /* jne: not equal / not zero */

loc_00062968: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0006296D: ;
    if (TEST_NZ(eax, eax)) goto loc_0006298D; /* jne: not equal / not zero */

loc_00062971: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_0006298D; /* jne: not equal / not zero */

loc_00062979: ;
    esi = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_001F24B0(); /* call 0x001F24B0 */

loc_00062981: ;
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0006298D: ;
    edi = MEM32(edi);
    if (CMP_NE(edi, MEM32(ebx + 4))) goto loc_00062950; /* jne: not equal / not zero */

loc_00062994: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000629A0
 * Original: 0x000629A0 - 0x000629E2 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000629A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000629A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0); sub_000626D0(); /* call 0x000626D0 */

loc_000629AE: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_000629DE; /* je: equal / zero */

loc_000629B4: ;
    eax = MEM32(ebx + 0x830);
    if (TEST_Z(eax, eax)) goto loc_000629C9; /* je: equal / zero */

loc_000629BE: ;
    eax = MEM32(ebx + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F1490(); return; /* tail jmp 0x001F1490 */

loc_000629C9: ;
    edx = esi;
    PUSH32(esp, 0); sub_00062720(); /* call 0x00062720 */

loc_000629D0: ;
    ecx = 0x3E3;
    eax = ebx;
    esi = edi;
    PUSH32(esp, 0); sub_00062690(); /* call 0x00062690 */

loc_000629DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000629F0
 * Original: 0x000629F0 - 0x00062A5A (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000629F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000629F0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x20);
    if (TEST_Z(esi, esi)) goto loc_00062A45; /* je: equal / zero */

loc_000629F8: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00062A06; /* je: equal / zero */

loc_00062A04: ;
    MEM32(eax) = ecx;

loc_00062A06: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00062A19: ;
    if (TEST_NZ(eax, eax)) goto loc_00062A3E; /* jne: not equal / not zero */

loc_00062A1D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00062A3B: ;
    esp = esp + 4;

loc_00062A3E: ;
    esi = MEM32(edi + 0x20);
    if (TEST_NZ(esi, esi)) goto loc_000629F8; /* jne: not equal / not zero */

loc_00062A45: ;
    esi = MEM32(edi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_00062A58; /* je: equal / zero */

loc_00062A4C: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_00062A51: ;
    MEM32(edi + 0x14) = 0;

loc_00062A58: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00062A60
 * Original: 0x00062A60 - 0x00062B3F (223 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062A60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esi + 0x834) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    edi = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esi + 0x838) = edi;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_001F13C0(); /* call 0x001F13C0 */

loc_00062A8D: ;
    ebx = eax;
    esp = esp + 4;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    edi = MEM32(esp + 0x10);
    if (CMP_NE(ebx, edi)) goto loc_00062AD4; /* jne: not equal / not zero */

loc_00062A9A: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, ebp);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00062AA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_00062AC1: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00062AEB; /* jne: not equal / not zero */

loc_00062AC9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00062ACE: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00062AEB; /* je: equal / zero */

loc_00062AD4: ;
    if (TEST_Z(edi, edi)) goto loc_00062AEB; /* je: equal / zero */

loc_00062AD8: ;
    eax = edi;
    MEM32(edi + 0x110) = 2;
    PUSH32(esp, 0); sub_001F1450(); /* call 0x001F1450 */

loc_00062AE9: ;
    edi = 0; /* xor self */

loc_00062AEB: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esi + 0x14) = edi;
    if (TEST_NZ(ebx, ebx)) { sub_00062B3F(); return; } /* jne: not equal / not zero */

loc_00062AF2: ;
    ebx = esi + 0x82C;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_00062B00: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_NZ(edi, edi)) goto loc_00062B37; /* jne: not equal / not zero */

loc_00062B09: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00062B23; /* je: equal / zero */

loc_00062B11: ;
    edx = MEM32(ebx);
    if (CMP_EQ(edx, MEM32(eax + 0x48))) goto loc_00062B28; /* je: equal / zero */

loc_00062B18: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0xD;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00062B23: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_00062B18; /* je: equal / zero */

loc_00062B28: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C1CA(); /* call 0x0042C1CA */

loc_00062B34: ;
    MEM32(esi + 0x18) = eax;

loc_00062B37: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00062B50
 * Original: 0x00062B50 - 0x00062B76 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062B50(void)
{

loc_00062B50: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62B80);
    PUSH32(esp, 0x800);
    ecx = eax + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(eax + 0x830) = 1;
    PUSH32(esp, 0); sub_001F15B0(); /* call 0x001F15B0 */

loc_00062B72: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00062B80
 * Original: 0x00062B80 - 0x00062C3B (187 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062B80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x830);
    eax--;
    if ((eax == 0)) goto loc_00062BE6; /* je: equal / zero */

loc_00062B99: ;
    eax--;
    if ((eax == 0)) goto loc_00062BCA; /* je: equal / zero */

loc_00062B9C: ;
    eax--;
    eax = MEM32(esp + 0x18);
    if ((eax != 0)) goto loc_00062BFD; /* jne: not equal / not zero */

loc_00062BA3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp);
    edx = MEM32(ebx);
    if (TEST_NZ(eax, eax)) { sub_00062C3B(); return; } /* jne: not equal / not zero */

loc_00062BB0: ;
    esi = MEM32(edi + 0x834);
    if (TEST_Z(esi, esi)) goto loc_00062BFD; /* je: equal / zero */

loc_00062BBA: ;
    eax = MEM32(edi + 0x838);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_00062BC8: ;
    goto loc_00062BFD;

loc_00062BCA: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00062DB0(); /* call 0x00062DB0 */

loc_00062BDA: ;
    MEM32(edi + 0x830) = 3;
    goto loc_00062BFD;

loc_00062BE6: ;
    esi = MEM32(esp + 0x18);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00062D60(); /* call 0x00062D60 */

loc_00062BF3: ;
    MEM32(edi + 0x830) = 2;

loc_00062BFD: ;
    if (TEST_NZ(eax, eax)) { sub_00062C3B(); return; } /* jne: not equal / not zero */

loc_00062C01: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00062C0D; /* je: equal / zero */

loc_00062C08: ;
    ecx = MEM32(ecx + 4);
    goto loc_00062C10;

loc_00062C0D: ;
    ecx = MEM32(edi + 0x20);

loc_00062C10: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi + 0x24) = ecx;
    if (TEST_Z(ecx, ecx)) { sub_00062C3B(); return; } /* je: equal / zero */

loc_00062C17: ;
    eax = MEM32(ecx + 0x10);
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 0xC);
    MEM32(ebp) = edx;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    eax = 0x4DE;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00062C90
 * Original: 0x00062C90 - 0x00062D5B (203 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062C90: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00062C9E; /* jne: not equal / not zero */

loc_00062C99: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00062C9E: ;
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
    if (TEST_Z(esi, esi)) goto loc_00062CE8; /* je: equal / zero */

loc_00062CC6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_00062CE8; /* jb: below (unsigned <) */

loc_00062CCF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00062CD9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00062CE1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00062D09; /* jne: not equal / not zero */

loc_00062CE8: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00062CFA: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00062D02: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00062D56; /* je: equal / zero */

loc_00062D09: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx + 0x1C;
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 4);
    if (TEST_Z(edx, edx)) goto loc_00062D4A; /* je: equal / zero */

loc_00062D3A: ;
    /* nop */

loc_00062D40: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 4);
    if (TEST_NZ(edx, edx)) goto loc_00062D40; /* jne: not equal / not zero */

loc_00062D4A: ;
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;

loc_00062D56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00062D60
 * Original: 0x00062D60 - 0x00062DAD (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062D60: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_00062DA9; /* jne: not equal / not zero */

loc_00062D67: ;
    ecx = MEM32(eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x5D8954);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_00062D76: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00062D97; /* jne: not equal / not zero */

loc_00062D7D: ;
    PUSH32(esp, edi);
    MEM32(edi + 0x828) = 1;
    PUSH32(esp, 0); sub_00062FA0(); /* call 0x00062FA0 */

loc_00062D8D: ;
    esp = esp + 4;
    MEM32(edi + 0x10) = eax;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00062D97: ;
    MEM32(edi + 0x828) = 0;
    PUSH32(esp, 0); sub_00062F50(); /* call 0x00062F50 */

loc_00062DA6: ;
    MEM32(edi + 0x10) = eax;

loc_00062DA9: ;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00062DB0
 * Original: 0x00062DB0 - 0x00062E29 (121 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062DB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00062E04; /* jne: not equal / not zero */

loc_00062DBC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x834);
    if (TEST_Z(ebx, ebx)) goto loc_00062E03; /* je: equal / zero */

loc_00062DC7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00060C80(); /* call 0x00060C80 */

loc_00062DD3: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_00062E03; /* jne: not equal / not zero */

loc_00062DDC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_00062DE3: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(edi + 0x838) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00062DF5; /* jne: not equal / not zero */

loc_00062DEE: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00062DF3: ;
    goto loc_00062E01;

loc_00062DF5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_00062E01: ;
    esi = eax;

loc_00062E03: ;
    POP32(esp, ebx);

loc_00062E04: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_00062E22; /* je: equal / zero */

loc_00062E0E: ;
    edx = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00062E15: ;
    eax = MEM32(edi + 0x24);
    esp = esp + 8;
    MEM32(eax + 0x14) = 0;

loc_00062E22: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00062E30
 * Original: 0x00062E30 - 0x00062F4C (284 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x834);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00062EAB; /* je: equal / zero */

loc_00062E44: ;
    eax = MEM32(esi + 0x838);
    if (TEST_Z(eax, eax)) goto loc_00062EAB; /* je: equal / zero */

loc_00062E4E: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00062E99; /* jne: not equal / not zero */

loc_00062E52: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_00062E59: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00062E61: ;
    esp = esp + 4;
    edi = eax;
    eax = MEM32(esi + 0x838);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00062E73: ;
    ebp = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_00062E8E; /* jne: not equal / not zero */

loc_00062E79: ;
    ecx = MEM32(esi + 0x834);
    PUSH32(esp, ecx);
    eax = ebx;
    edx = edi;
    PUSH32(esp, 0); sub_00060CC0(); /* call 0x00060CC0 */

loc_00062E89: ;
    esp = esp + 4;
    ebp = eax;

loc_00062E8E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00062E94: ;
    esp = esp + 4;
    goto loc_00062EA1;

loc_00062E99: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00062EA1: ;
    MEM32(esi + 0x838) = 0;

loc_00062EAB: ;
    if (TEST_Z(ebp, ebp)) goto loc_00062EB5; /* je: equal / zero */

loc_00062EAF: ;
    edx = MEM32(esi + 4);
    MEM32(edx + 4) = ebp;

loc_00062EB5: ;
    eax = MEM32(esi + 0x834);
    if (TEST_Z(eax, eax)) goto loc_00062EDA; /* je: equal / zero */

loc_00062EBF: ;
    if (TEST_Z(ebp, ebp)) goto loc_00062EDA; /* je: equal / zero */

loc_00062EC3: ;
    if (CMP_EQ(ebp, 0x3E3)) goto loc_00062EDA; /* je: equal / zero */

loc_00062ECB: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;

loc_00062EDA: ;
    edi = MEM32(esi + 0x20);
    if (TEST_Z(edi, edi)) goto loc_00062F43; /* je: equal / zero */

loc_00062EE1: ;
    eax = edi + 4;
    esi = edi;
    edi = MEM32(eax);
    edx = MEM32(esi);
    ecx = edi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00062EF5; /* je: equal / zero */

loc_00062EF3: ;
    MEM32(ecx) = edx;

loc_00062EF5: ;
    MEM32(eax) = 0;
    eax = MEM32(esi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0;
    if (TEST_Z(eax, eax)) goto loc_00062F12; /* je: equal / zero */

loc_00062F08: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00062F0F: ;
    esp = esp + 8;

loc_00062F12: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00062F18: ;
    if (TEST_NZ(eax, eax)) goto loc_00062F3F; /* jne: not equal / not zero */

loc_00062F1C: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00062F3C: ;
    esp = esp + 4;

loc_00062F3F: ;
    if (TEST_NZ(edi, edi)) goto loc_00062EE1; /* jne: not equal / not zero */

loc_00062F43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062F50
 * Original: 0x00062F50 - 0x00062F9A (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x82C);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x62D);
    PUSH32(esp, 0x5D895C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00062F6A: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_NZ(esi, esi)) goto loc_00062F81; /* jne: not equal / not zero */

loc_00062F73: ;
    PUSH32(esp, 0x5D8944);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_00062F7E: ;
    esp = esp + 8;

loc_00062F81: ;
    eax = MEM32(edi + 0x82C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00062C90(); /* call 0x00062C90 */

loc_00062F95: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00062FA0
 * Original: 0x00062FA0 - 0x0006305D (189 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00062FA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BD58);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = 0;
    if (TEST_NZ(eax, eax)) goto loc_00062FE3; /* jne: not equal / not zero */

loc_00062FB1: ;
    MEM32(0x84BD44) = 0x63060;
    MEM32(0x84BD48) = 0x63070;
    MEM32(0x84BD50) = 0x63100;
    MEM32(0x84BD54) = 0xCF570;
    MEM32(0x84BD4C) = 0;

loc_00062FE3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x631D0);
    PUSH32(esp, 0x63190);
    ebx = 0x63210;
    eax = 0x5D6EFC;
    PUSH32(esp, 0); sub_00405DF0(); /* call 0x00405DF0 */

loc_00062FFD: ;
    PUSH32(esp, 0x63280);
    PUSH32(esp, 0x63230);
    ebx = 0; /* xor self */
    eax = 0x5D6EF4;
    PUSH32(esp, 0); sub_00405DF0(); /* call 0x00405DF0 */

loc_00063013: ;
    ebx = MEM32(0x84BD58);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x84BD4C);
    edx = MEM32(eax + 4);
    esp = esp + 0x10;
    ebx++;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84BD58) = ebx;
    eax = 2;
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0006303F; /* je: equal / zero */

loc_0006303A: ;
    eax = 0x802;

loc_0006303F: ;
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x587BE4);
    ecx = 0xCF570;
    PUSH32(esp, 0); sub_00406490(); /* call 0x00406490 */

loc_00063055: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00063060
 * Original: 0x00063060 - 0x0006306F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063060(void)
{

loc_00063060: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x14), _icall_esp); /* indirect call */
    }

loc_0006306B: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00063070
 * Original: 0x00063070 - 0x00063098 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063070(void)
{

loc_00063070: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_00063075: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00062C90(); /* call 0x00062C90 */

loc_00063097: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000630A0
 * Original: 0x000630A0 - 0x000630BA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000630A0(void)
{

loc_000630A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5E3);
    PUSH32(esp, 0x5D895C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000630B6: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000630C0
 * Original: 0x000630C0 - 0x000630F6 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000630C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000630C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000630CB: ;
    if (TEST_NZ(eax, eax)) goto loc_000630F4; /* jne: not equal / not zero */

loc_000630CF: ;
    if (TEST_Z(esi, esi)) goto loc_000630F4; /* je: equal / zero */

loc_000630D3: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000630F1: ;
    esp = esp + 4;

loc_000630F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00063100
 * Original: 0x00063100 - 0x0006318A (138 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063100: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DD74(); /* call 0x0042DD74 */

loc_0006310E: ;
    ebp = MEM32(esp + 0x24);
    esi = eax;
    ebx = esi;
    ebx = ebx & 0x400;
    if ((ebx == 0)) goto loc_0006312B; /* je: equal / zero */

loc_0006311E: ;
    eax = eax ^ 0x400;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DD5E(); /* call 0x0042DD5E */

loc_0006312B: ;
    eax = MEM32(0x84BE38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BE2C) = 0x630A0;
    MEM32(0x84BE30) = 0x630C0;
    if (TEST_NZ(eax, eax)) goto loc_00063152; /* jne: not equal / not zero */

loc_00063148: ;
    MEM32(0x84BE38) = 1;

loc_00063152: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = edi;
    PUSH32(esp, 0); sub_00416170(); /* call 0x00416170 */

loc_00063161: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x84BE38) = 0;
    if (TEST_Z(ebx, ebx)) goto loc_00063177; /* je: equal / zero */

loc_0006316F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DD5E(); /* call 0x0042DD5E */

loc_00063177: ;
    ecx = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x30), _icall_esp); /* indirect call */
    }

loc_00063182: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00063190
 * Original: 0x00063190 - 0x000631C4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063190(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063190: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x62D);
    PUSH32(esp, 0x5D895C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000631A8: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_NZ(esi, esi)) goto loc_000631BF; /* jne: not equal / not zero */

loc_000631B1: ;
    PUSH32(esp, 0x5D8944);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_000631BC: ;
    esp = esp + 8;

loc_000631BF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000631D0
 * Original: 0x000631D0 - 0x00063206 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000631D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000631D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000631DB: ;
    if (TEST_NZ(eax, eax)) goto loc_00063204; /* jne: not equal / not zero */

loc_000631DF: ;
    if (TEST_Z(esi, esi)) goto loc_00063204; /* je: equal / zero */

loc_000631E3: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00063201: ;
    esp = esp + 4;

loc_00063204: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00063210
 * Original: 0x00063210 - 0x00063223 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063210(void)
{

loc_00063210: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E6F10(); /* call 0x003E6F10 */

loc_0006321F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00063230
 * Original: 0x00063230 - 0x00063256 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    if (TEST_Z(edi, edi)) { sub_00063256(); return; } /* je: equal / zero */

loc_00063242: ;
    esi = MEM32(edi + 8);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0005F450(); /* call 0x0005F450 */

loc_0006324D: ;
    if (TEST_Z(eax, eax)) { sub_00063256(); return; } /* je: equal / zero */

loc_00063251: ;
    MEM32(edi + 0x10) = eax;
    g_seh_ebp = ebp; sub_00063261(); return; /* tail jmp 0x00063261 */

}

/**
 * sub_00063280
 * Original: 0x00063280 - 0x000632BA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063280: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    if (TEST_Z(esi, esi)) { sub_000632BA(); return; } /* je: equal / zero */

loc_0006328C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_000632A9; /* je: equal / zero */

loc_00063295: ;
    if (CMP_NE(edi, MEM32(esi + 0x10))) goto loc_000632AC; /* jne: not equal / not zero */

loc_0006329A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0005F4F0(); /* call 0x0005F4F0 */

loc_000632A2: ;
    MEM32(esi + 0x10) = 0;

loc_000632A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000632AC: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_000632B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000632D0
 * Original: 0x000632D0 - 0x00063356 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000632D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000632D0: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0x3FFFFFFF;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_0006334C; /* jae: above or equal (unsigned >=) */

loc_000632E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ebx = 0; /* xor self */
    esi = 0xF;
    PUSH32(esp, 0x5D8874);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00063306: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0006330F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x50) = ebx;
    MEM8(esp + 0x40) = LO8(ebx);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00063334: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0006334B: ;
    POP32(esp, ebx);

loc_0006334C: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00063360
 * Original: 0x00063360 - 0x0006354B (491 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063360: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x5C) = edi;
    PUSH32(esp, 0); sub_001F13C0(); /* call 0x001F13C0 */

loc_0006338F: ;
    esi = MEM32(esp + 0x5C);
    ebx = eax;
    esp = esp + 4;
    if (CMP_NE(ebx, edi)) goto loc_000633D4; /* jne: not equal / not zero */

loc_0006339C: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, ebp);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_000633AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_000633C1: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000633EB; /* jne: not equal / not zero */

loc_000633C9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000633CE: ;
    ebx = eax;
    if (CMP_EQ(ebx, edi)) goto loc_000633EB; /* je: equal / zero */

loc_000633D4: ;
    if (CMP_EQ(esi, edi)) goto loc_000633EB; /* je: equal / zero */

loc_000633D8: ;
    eax = esi;
    MEM32(esi + 0x110) = 2;
    PUSH32(esp, 0); sub_001F1450(); /* call 0x001F1450 */

loc_000633E9: ;
    esi = 0; /* xor self */

loc_000633EB: ;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    eax = ebx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(ebx, edi)) goto loc_0006340C; /* jne: not equal / not zero */

loc_000633F9: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_001F1F00(); /* call 0x001F1F00 */

loc_00063405: ;
    esp = esp + 4;
    MEM32(esp + 0x20) = eax;

loc_0006340C: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x58) = eax;
    if (CMP_NE(eax, edi)) goto loc_0006346D; /* jne: not equal / not zero */

loc_00063414: ;
    eax = 0x20;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_001F0E40(); /* call 0x001F0E40 */

loc_00063422: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x58) = eax;
    if (CMP_NE(eax, edi)) goto loc_0006346D; /* jne: not equal / not zero */

loc_0006342A: ;
    ecx = MEM32(0x68CF4C);
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx))) goto loc_00063465; /* jne: not equal / not zero */

loc_0006343A: ;
    eax = MEM32(eax + 0x10);
    if (CMP_NE(eax, MEM32(esp + 0x1C))) goto loc_00063465; /* jne: not equal / not zero */

loc_00063443: ;
    if (CMP_AE(eax, 0x10000)) goto loc_00063465; /* jae: above or equal (unsigned >=) */

loc_0006344A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00063450: ;
    ecx = MEM32(esp + 0x58);
    esp = esp + 4;
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_001F0EC0(); /* call 0x001F0EC0 */

loc_0006345F: ;
    MEM32(esp + 0x58) = eax;
    goto loc_0006346D;

loc_00063465: ;
    MEM32(esp + 0x58) = 0xD;

loc_0006346D: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_00063482; /* je: equal / zero */

loc_00063475: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0006347B: ;
    esp = esp + 4;
    MEM32(esp + 0x14) = edi;

loc_00063482: ;
    esi = MEM32(esp + 0x10);
    if (CMP_EQ(esi, edi)) goto loc_000634A1; /* je: equal / zero */

loc_0006348A: ;
    if (CMP_EQ(MEM32(esp + 0x20), 0x26)) goto loc_00063498; /* je: equal / zero */

loc_00063491: ;
    eax = esi;
    PUSH32(esp, 0); sub_001F1490(); /* call 0x001F1490 */

loc_00063498: ;
    PUSH32(esp, 0); sub_001F1C90(); /* call 0x001F1C90 */

loc_0006349D: ;
    MEM32(esp + 0x10) = edi;

loc_000634A1: ;
    if (CMP_NE(MEM32(esp + 0x58), edi)) goto loc_00063534; /* jne: not equal / not zero */

loc_000634AB: ;
    PUSH32(esp, 2);
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_000634B4: ;
    ebx = eax;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_000634C2; /* jne: not equal / not zero */

loc_000634BB: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000634C0: ;
    goto loc_00063513;

loc_000634C2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_000634C9: ;
    edx = MEM32(esp + 0x54);
    esi = eax;
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_000634DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000634E2: ;
    esp = esp + 4;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_000634EE: ;
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_EQ(ebp, edi)) goto loc_00063513; /* je: equal / zero */

loc_000634F5: ;
    if (CMP_NE(MEM32(esp + 0x60), esi)) goto loc_00063513; /* jne: not equal / not zero */

loc_000634FB: ;
    ecx = esi;
    esi = MEM32(esp + 0x5C);
    edi = ebp;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00063511; /* jne: not equal / not zero */

loc_00063509: ;
    MEM32(esp + 0x58) = edx;
    edi = 0; /* xor self */
    goto loc_00063527;

loc_00063511: ;
    edi = 0; /* xor self */

loc_00063513: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x58) = 0xD;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00063527; /* je: equal / zero */

loc_00063520: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00063527: ;
    if (CMP_EQ(ebp, edi)) goto loc_00063534; /* je: equal / zero */

loc_0006352B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00063531: ;
    esp = esp + 4;

loc_00063534: ;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_001F0DD0(); /* call 0x001F0DD0 */

loc_0006353D: ;
    eax = MEM32(esp + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00063550
 * Original: 0x00063550 - 0x000635AF (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063550: ;
    SET_LO16(edx, MEM16(esp + 4));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM16(esi + 0x2E) = LO16(edx);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM32(esi + 4) = 0x10D2;
    MEM32(esi) = ebx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = ebx;
    if (CMP_NE(ecx, ebx)) goto loc_00063586; /* jne: not equal / not zero */

loc_00063573: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x5D89A8);
    edi = eax;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_00063582: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_00063586: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0006358E: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    eax = esi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000635B0
 * Original: 0x000635B0 - 0x00063612 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000635B0(void)
{

loc_000635B0: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0005E420(); /* call 0x0005E420 */

loc_000635E6: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    MEM16(edi + 0x2E) = LO16(eax);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00063604: ;
    esp = esp + 0x1C;
    MEM8(edi + esi) = 0;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00063620
 * Original: 0x00063620 - 0x00063652 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063620: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0006362F: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esi + 0x110) = ebx;
    MEM32(esi) = edi;
    eax = esi;
    if (CMP_NE(edi, eax)) goto loc_0006364F; /* jne: not equal / not zero */

loc_00063648: ;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0006364D: ;
    eax = esi;

loc_0006364F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00063660
 * Original: 0x00063660 - 0x00063670 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063660: ;
    if (CMP_EQ(MEM32(eax), 0)) { sub_00063670(); return; } /* je: equal / zero */

loc_00063665: ;
    MEM32(eax) = 0;
    g_seh_ebp = ebp; sub_00063680(); return; /* tail jmp 0x00063680 */

}

/**
 * sub_00063680
 * Original: 0x00063680 - 0x000636CC (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063680(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = esi + 0xC;
    PUSH32(esp, 0x84D458);
    eax = ebx;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_00063693: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_NZ(eax, eax)) goto loc_000636AF; /* jne: not equal / not zero */

loc_0006369A: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, 0x84D458);
    PUSH32(esp, 0); sub_00061C40(); /* call 0x00061C40 */

loc_000636AC: ;
    MEM32(esi + 4) = eax;

loc_000636AF: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_000636C9; /* je: equal / zero */

loc_000636B6: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;
    ecx = esi + 8;
    esi = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0005E5A0(); /* call 0x0005E5A0 */

loc_000636C6: ;
    esp = esp + 4;

loc_000636C9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000636D0
 * Original: 0x000636D0 - 0x00063724 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000636D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000636D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_000636F9; /* je: equal / zero */

loc_000636DB: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000636E2: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000636F0: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_000636F9: ;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00063720; /* je: equal / zero */

loc_00063700: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) - 1;
    esi = MEM32(edi + 4);
    if (CMP_NE(MEM16(esi + 0x2C), 0)) goto loc_00063720; /* jne: not equal / not zero */

loc_0006370E: ;
    PUSH32(esp, 0); sub_0005E680(); /* call 0x0005E680 */

loc_00063713: ;
    edi = MEM32(edi + 4);
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00063720: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00063730
 * Original: 0x00063730 - 0x0006374B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063730(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063730: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    if (CMP_L(eax, 0x3E4)) { sub_0006374B(); return; } /* jl: less (signed <) */

loc_0006373D: ;
    if (CMP_G(eax, 0x3E5)) { sub_0006374B(); return; } /* jg: greater (signed >) */

loc_00063744: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00063749: ;
    goto loc_00063730;

}

/**
 * sub_00063750
 * Original: 0x00063750 - 0x00063761 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063750: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_00063761(); return; } /* je: equal / zero */

loc_0006375A: ;
    MEM32(edx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00063780
 * Original: 0x00063780 - 0x00063793 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063780: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    if (TEST_NZ(eax, eax)) { sub_00063793(); return; } /* jne: not equal / not zero */

loc_00063788: ;
    eax = MEM32(ecx + 4);
    MEM32(esp) = eax;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

}

/**
 * sub_000637B0
 * Original: 0x000637B0 - 0x00063A09 (601 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000637B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000637B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x8471A4);
    MEMF(0x76F558) = xmm0; /* movss */
    MEMF(0x76F554) = xmm0; /* movss */
    MEMF(0x76F550) = xmm0; /* movss */
    MEMF(0x76F54C) = xmm0; /* movss */
    MEMF(0x76F544) = xmm0; /* movss */
    MEMF(0x76F540) = xmm0; /* movss */
    MEMF(0x76F53C) = xmm0; /* movss */
    MEMF(0x76F538) = xmm0; /* movss */
    MEMF(0x76F530) = xmm0; /* movss */
    MEMF(0x76F52C) = xmm0; /* movss */
    MEMF(0x76F528) = xmm0; /* movss */
    MEMF(0x76F524) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x76F55C) = xmm0; /* movss */
    MEMF(0x76F548) = xmm0; /* movss */
    MEMF(0x76F534) = xmm0; /* movss */
    MEMF(0x76F520) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ecx));
    MEM8(0x76F51C) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(0x76F51D) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 2));
    esp = esp - 0x228;
    MEM8(0x76F51E) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 3));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(LO8(eax), 4)) goto loc_00063A01; /* jne: not equal / not zero */

loc_0006386D: ;
    edx = ZX8(MEM8(ecx + 4));
    eax = MEM32(edx * 4 + 0x68D058);
    if (CMP_NE(MEM32(eax), edi)) goto loc_00063880; /* jne: not equal / not zero */

loc_0006387C: ;
    MEM8(ecx + 3) = 3;

loc_00063880: ;
    if (CMP_NE(MEM8(ecx + 3), 4)) goto loc_00063A01; /* jne: not equal / not zero */

loc_0006388A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    ebx = 0x14;
    goto loc_000638A0;

    /* nop */
    /* nop */

loc_000638A0: ;
    edx = ZX8(MEM8(ecx + 4));
    eax = MEM32(edx * 4 + 0x68D058);
    if (CMP_EQ(eax, edi)) goto loc_000639F2; /* je: equal / zero */

loc_000638B3: ;
    eax = MEM32(eax + ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D8A18);
    PUSH32(esp, ebx);
    eax = esp + 0x13C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_000638C9: ;
    esp = esp + 0xC;
    eax = esp + 0x124;
    MEM32(esp + 0x234) = ebx;
    MEM32(esp + 0x124) = edi;
    MEM32(esp + 0x12C) = edi;
    MEM32(esp + 0x128) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_000638F4: ;
    goto loc_00063900;

    /* nop */
    /* nop */

loc_00063900: ;
    ecx = MEM32(esp + 0x128);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0006391F; /* jl: less (signed <) */

loc_00063911: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0006391F; /* jg: greater (signed >) */

loc_00063918: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0006391D: ;
    goto loc_00063900;

loc_0006391F: ;
    if (CMP_EQ(MEM32(ecx + 4), edi)) goto loc_0006399C; /* je: equal / zero */

loc_00063924: ;
    esi = MEM32(0x775F58);
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + 0x76F560) = edi;
    if (CMP_EQ(esi, edi)) goto loc_00063944; /* je: equal / zero */

loc_00063934: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F1A10(); /* call 0x001F1A10 */

loc_0006393A: ;
    esi = MEM32(esi + 4);
    esp = esp + 4;
    if (CMP_NE(esi, edi)) goto loc_00063934; /* jne: not equal / not zero */

loc_00063944: ;
    PUSH32(esp, 0x5D8A04);
    PUSH32(esp, 0x5D89E4);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00063958: ;
    esp = esp + 0xC;
    eax = esp + 0x10;
    MEM32(esp + 0x120) = ebx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00063977: ;
    goto loc_00063980;

    /* nop */

loc_00063980: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_000639B4; /* jl: less (signed <) */

loc_0006398E: ;
    if (CMP_G(eax, 0x3E5)) goto loc_000639B4; /* jg: greater (signed >) */

loc_00063995: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0006399A: ;
    goto loc_00063980;

loc_0006399C: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_000639AA; /* je: equal / zero */

loc_000639A6: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_000639AA: ;
    ecx = MEM32(eax);
    MEM32(ebp + 0x76F560) = ecx;
    goto loc_000639E0;

loc_000639B4: ;
    if (CMP_EQ(MEM32(ecx + 4), edi)) goto loc_000639C1; /* je: equal / zero */

loc_000639B9: ;
    MEM32(ebp + 0x76F560) = edi;
    goto loc_000639D7;

loc_000639C1: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_000639CF; /* je: equal / zero */

loc_000639CB: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_000639CF: ;
    edx = MEM32(eax);
    MEM32(ebp + 0x76F560) = edx;

loc_000639D7: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000639E0: ;
    ecx = esp + 0x124;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_000639EC: ;
    ecx = MEM32(0x8471A4);

loc_000639F2: ;
    ebp = ebp + 4;
    if (CMP_L(ebp, 0x18)) goto loc_000638A0; /* jl: less (signed <) */

loc_000639FE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00063A01: ;
    POP32(esp, edi);
    esp = esp + 0x228;
    esp += 4; return; /* ret */

}

/**
 * sub_00063A10
 * Original: 0x00063A10 - 0x00063A5F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00063A10: ;
    SET_LO8(eax, MEM8(0x7655D8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00063A5E; /* jne: not equal / not zero */

loc_00063A19: ;
    eax = MEM32(0x8471A4);
    (void)0; /* cmp MEM8(eax + 3), 4 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(MEM8(eax + 3), 4)) goto loc_00063A39; /* jne: not equal / not zero */

loc_00063A25: ;
    esi = ZX8(MEM8(eax + 4));
    esi = MEM32(esi * 4 + 0x68D058);
    if (CMP_NE(MEM32(esi), 0)) goto loc_00063A39; /* jne: not equal / not zero */

loc_00063A35: ;
    MEM8(eax + 3) = 3;

loc_00063A39: ;
    esi = MEM32(0x8472A0);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    if (TEST_Z(esi, esi)) goto loc_00063A50; /* je: equal / zero */

loc_00063A46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x58C184), _icall_esp); /* indirect call */
    }

loc_00063A4C: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00063A50: ;
    eax = ZX8(MEM8(eax + 3));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x58C184), _icall_esp); /* indirect call */
    }

loc_00063A5B: ;
    esp = esp + 8;

loc_00063A5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00063A60
 * Original: 0x00063A60 - 0x00063A82 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00063A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    SET_LO8(eax, MEM8(0x76F518));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_00063A82(); return; } /* je: equal / zero */

loc_00063A7A: ;
    eax = MEM32(0x6B834C);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_00063A89(); return; /* tail jmp 0x00063A89 */

}

/**
 * sub_00063ED0
 * Original: 0x00063ED0 - 0x00063F6A (154 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00063ED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00063A60(); /* call 0x00063A60 */

loc_00063EE1: ;
    esp = esp + 8;
    edi = 0x68D088;
    esi = 0x76F560;
    edi = edi;

loc_00063EF0: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00063F36; /* je: equal / zero */

loc_00063EF6: ;
    ecx = MEM32(eax + 4);
    if (CMP_A(ecx, 4)) goto loc_00063F23; /* ja: above (unsigned >) */

loc_00063EFE: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x63F6C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00063F05u) goto loc_00063F05;
    if (_jt == 0x00063F0Bu) goto loc_00063F0B;
    if (_jt == 0x00063F10u) goto loc_00063F10;
    if (_jt == 0x00063F16u) goto loc_00063F16;
    if (_jt == 0x00063F23u) goto loc_00063F23;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00063F05: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edx);
    goto loc_00063F1C;

loc_00063F0B: ;
    eax = MEM32(eax + 0x1C);
    goto loc_00063F1B;

loc_00063F10: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    goto loc_00063F1C;

loc_00063F16: ;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(edx);

loc_00063F1B: ;
    PUSH32(esp, eax);

loc_00063F1C: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00063F23: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00063F2A: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00063F36: ;
    esi = esi + 4;
    edi = edi + 0x60;
    if (CMP_L(esi, 0x76F578)) goto loc_00063EF0; /* jl: less (signed <) */

loc_00063F44: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x2000;
    PUSH32(esp, 0);
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B68) = 0;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00063F67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00063FF0
 * Original: 0x00063FF0 - 0x00064030 (64 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063FF0(void)
{

loc_00063FF0: ;
    eax = MEM32(0x8471A4);
    MEM8(eax + 3) = 4;
    MEM8(eax + 4) = 0xA;
    eax = MEM32(esp + 4);
    MEM32(0x847170) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x847174) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x847178) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x84717C) = eax;
    MEM32(0x847180) = ecx;
    MEM32(0x847184) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00064030
 * Original: 0x00064030 - 0x00064065 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00064030: ;
    if (CMP_NE(eax, 6)) goto loc_00064062; /* jne: not equal / not zero */

loc_00064035: ;
    ecx = MEM32(0x84B290);
    SET_LO8(edx, MEM8(ecx + 4));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, 1);
    if (TEST_S(LO8(edx), LO8(edx))) goto loc_00064064; /* js: sign (negative) */

loc_00064044: ;
    edx = ZX8(MEM8(0x76F0B6));
    edx--;
    if (CMP_EQ(edx, 0x14)) goto loc_00064064; /* je: equal / zero */

loc_00064051: ;
    if (CMP_NE(MEM8(0x76F0E0), LO8(eax))) goto loc_00064062; /* jne: not equal / not zero */

loc_00064059: ;
    if (CMP_EQ(MEM8(0x76F0DC), 0x14)) goto loc_00064064; /* je: equal / zero */

loc_00064062: ;
    SET_LO8(eax, 0); /* xor self */

loc_00064064: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00064070
 * Original: 0x00064070 - 0x000640BF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00064070: ;
    if (CMP_NE(eax, 6)) goto loc_000640A7; /* jne: not equal / not zero */

loc_00064075: ;
    ecx = MEM32(0x84B290);
    SET_LO8(edx, MEM8(ecx + 4));
    if (TEST_S(LO8(edx), LO8(edx))) goto loc_000640A1; /* js: sign (negative) */

loc_00064082: ;
    edx = ZX8(MEM8(0x76F0B6));
    edx--;
    if (CMP_EQ(edx, 0x14)) goto loc_000640A1; /* je: equal / zero */

loc_0006408F: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) { sub_000640BF(); return; } /* jne: not equal / not zero */

loc_00064098: ;
    if (CMP_NE(MEM8(0x76F0DC), 0x14)) { sub_000640BF(); return; } /* jne: not equal / not zero */

loc_000640A1: ;
    eax = 0x5D8FDC;
    esp += 4; return; /* ret */

loc_000640A7: ;
    if (CMP_NE(eax, 0x39)) { sub_000640BF(); return; } /* jne: not equal / not zero */

loc_000640AC: ;
    ecx = MEM32(0x84B290);
    SET_LO8(edx, MEM8(ecx + 4));
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) { sub_000640BF(); return; } /* jns: not sign (positive) */

loc_000640B9: ;
    eax = 0x5D8FC8;
    esp += 4; return; /* ret */

}

/**
 * sub_000640D0
 * Original: 0x000640D0 - 0x00064294 (452 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000640D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000640D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x76F59C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x14);
    SET_LO8(ebx, MEM8(eax + 0x8E));
    eax = ZX8(MEM8(eax + 0xC7));
    ecx = eax;
    PUSH32(esp, edi);
    eax = eax & 4;
    edx = 0; /* xor self */
    ecx = ecx & 3;
    edi = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00064116; /* jle: less or equal (signed <=) */

loc_00064102: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(MEM32(edi * 8 + 0x76F57C), eax)) goto loc_0006411A; /* je: equal / zero */

loc_0006410F: ;
    edi++;
    if (CMP_L(edi, ebp)) goto loc_00064102; /* jl: less (signed <) */

loc_00064114: ;
    goto loc_0006411A;

loc_00064116: ;
    eax = MEM32(esp + 0x18);

loc_0006411A: ;
    if (CMP_NE(edi, ebp)) goto loc_00064144; /* jne: not equal / not zero */

loc_0006411E: ;
    if (CMP_GE(edi, 4)) goto loc_0006428E; /* jge: greater or equal (signed >=) */

loc_00064127: ;
    edx = SX8(LO8(ebx));
    ebp++;
    MEM32(edi * 8 + 0x76F580) = edx;
    MEM32(edi * 8 + 0x76F57C) = eax;
    MEM32(0x76F59C) = ebp;
    edx = 1;

loc_00064144: ;
    if (TEST_S(LO8(ebx), LO8(ebx))) goto loc_0006427D; /* jl: less (signed <) */

loc_0006414C: ;
    if (TEST_Z(edx, edx)) goto loc_00064207; /* je: equal / zero */

loc_00064154: ;
    edx = MEM32(0x84A5F8);
    edx = MEM32(edx + 0x568);
    edx = ZX8(MEM8(edx + 0x1FC));
    edi = SX8(LO8(ebx));
    if (CMP_NE(edi, edx)) goto loc_000641DB; /* jne: not equal / not zero */

loc_0006416E: ;
    if (TEST_NZ(esi, esi)) goto loc_00064182; /* jne: not equal / not zero */

loc_00064172: ;
    if (TEST_Z(ecx, ecx)) goto loc_000641C1; /* je: equal / zero */

loc_00064176: ;
    if (CMP_EQ(ecx, 1)) goto loc_000641C1; /* je: equal / zero */

loc_0006417B: ;
    ecx = 1;
    goto loc_000641C1;

loc_00064182: ;
    if (CMP_EQ(esi, 1)) goto loc_000641FC; /* je: equal / zero */

loc_00064187: ;
    if (CMP_NE(esi, 2)) goto loc_00064193; /* jne: not equal / not zero */

loc_0006418C: ;
    ecx = esi;
    goto loc_0006427D;

loc_00064193: ;
    if (CMP_NE(esi, 3)) goto loc_0006427D; /* jne: not equal / not zero */

loc_0006419C: ;
    if (TEST_Z(ecx, ecx)) goto loc_000641B4; /* je: equal / zero */

loc_000641A0: ;
    if (CMP_EQ(ecx, 1)) goto loc_000641B4; /* je: equal / zero */

loc_000641A5: ;
    edx = MEM32(esp + 0x10);
    if (TEST_Z(edx, edx)) goto loc_000641C1; /* je: equal / zero */

loc_000641AD: ;
    ecx = 1;
    goto loc_000641C1;

loc_000641B4: ;
    edx = MEM32(esp + 0x10);
    if (TEST_NZ(edx, edx)) goto loc_000641C1; /* jne: not equal / not zero */

loc_000641BC: ;
    ecx = 3;

loc_000641C1: ;
    edx = MEM32(eax + 0x8C);
    edx = edx << 0x16;
    edx = (uint32_t)((int32_t)edx >> 0x16);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm0; /* movss */
    goto loc_0006427D;

loc_000641DB: ;
    if (TEST_Z(esi, esi)) goto loc_000641EF; /* je: equal / zero */

loc_000641DF: ;
    if (CMP_EQ(esi, 2)) goto loc_000641EF; /* je: equal / zero */

loc_000641E4: ;
    if (CMP_NE(esi, 3)) goto loc_0006427D; /* jne: not equal / not zero */

loc_000641ED: ;
    goto loc_000641F4;

loc_000641EF: ;
    if (CMP_NE(esi, 3)) goto loc_00064203; /* jne: not equal / not zero */

loc_000641F4: ;
    ecx = MEM32(esp + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00064203; /* jne: not equal / not zero */

loc_000641FC: ;
    ecx = 3;
    goto loc_0006427D;

loc_00064203: ;
    ecx = 0; /* xor self */
    goto loc_0006427D;

loc_00064207: ;
    if (CMP_EQ(ecx, 1)) goto loc_00064211; /* je: equal / zero */

loc_0006420C: ;
    if (CMP_NE(ecx, 2)) goto loc_0006427D; /* jne: not equal / not zero */

loc_00064211: ;
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0006427D; /* jle: less or equal (signed <=) */

loc_00064217: ;
    if (CMP_EQ(esi, edi)) goto loc_00064278; /* je: equal / zero */

loc_0006421B: ;
    edx = SX8(LO8(ebx));
    if (CMP_NE(edx, MEM32(esi * 8 + 0x76F580))) goto loc_00064278; /* jne: not equal / not zero */

loc_00064227: ;
    edx = MEM32(esp + 0x10);
    if (TEST_NZ(edx, edx)) goto loc_0006423F; /* jne: not equal / not zero */

loc_0006422F: ;
    edx = MEM32(esi * 8 + 0x76F57C);
    if (TEST_NZ(MEM8(edx + 0xC7), 4)) goto loc_00064278; /* jne: not equal / not zero */

loc_0006423F: ;
    edx = MEM32(esi * 8 + 0x76F57C);
    SET_LO8(eax, MEM8(edx + 0xC7));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_00064257; /* jne: not equal / not zero */

loc_00064252: ;
    if (CMP_EQ(ecx, 2)) goto loc_00064274; /* je: equal / zero */

loc_00064257: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00064260; /* jne: not equal / not zero */

loc_0006425B: ;
    if (CMP_EQ(ecx, 1)) goto loc_00064274; /* je: equal / zero */

loc_00064260: ;
    MEM8(edx + 0xC7) = MEM8(edx + 0xC7) & 0xFC;
    eax = MEM32(esi * 8 + 0x76F57C);
    MEM8(eax + 0xC7) = MEM8(eax + 0xC7) | LO8(ecx);

loc_00064274: ;
    eax = MEM32(esp + 0x18);

loc_00064278: ;
    esi++;
    if (CMP_L(esi, ebp)) goto loc_00064217; /* jl: less (signed <) */

loc_0006427D: ;
    SET_LO8(edx, MEM8(eax + 0xC7));
    SET_LO8(edx, LO8(edx) & 0xFC);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    MEM8(eax + 0xC7) = LO8(edx);

loc_0006428E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000642A0
 * Original: 0x000642A0 - 0x00064321 (129 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000642A0(void)
{
    float xmm0, xmm1, xmm6;

loc_000642A0: ;
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(0x771CF4); /* movss */
    ecx = MEM32(eax + 0x200);
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm6 = MEMF(eax + 0x1FC); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(0x76F7AC) = xmm0; /* movss */
    xmm0 = MEMF(0x771CF0); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0x461C4000);
    MEMF(0x76F7B0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3F800000);
    MEMF(0x780A44) = xmm1; /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x200); /* subss */
    xmm0 = xmm0 - MEMF(eax + 0x1FC); /* subss */
    PUSH32(esp, ecx);
    eax = 0x76F9F0;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0029C850(); /* call 0x0029C850 */

loc_0006431D: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00064330
 * Original: 0x00064330 - 0x0006444C (284 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064330(void)
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

loc_00064330: ;
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(0x76EDF4); /* movss */
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm1 = MEMF(ecx + eax + 0x258); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(esp + 4); /* addss */
    MEMF(ecx + eax + 0x260) = xmm1; /* movss */
    eax = MEM32(0x84A13C);
    xmm1 = MEMF(ecx + eax + 0x25C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(esp + 8); /* addss */
    MEMF(ecx + eax + 0x264) = xmm1; /* movss */
    eax = MEM32(0x84A13C);
    fp_push(MEMF(ecx + eax + 0x260)); /* fld float */
    xmm1 = MEMF(0x76EDF0); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* fld st(0) */
    /* FPU: fsin  */
    /* FPU: fdivr dword ptr [ecx + eax + 0x1fc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + eax + 0x20C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(0x84A13C);
    fp_push(MEMF(ecx + eax + 0x264)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    /* FPU: fdivr dword ptr [ecx + eax + 0x200] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + eax + 0x210) = (float)fp_top(); fp_popp(); /* fstp */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006442D; /* jp: parity */

loc_00064416: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0006442D; /* jp: parity */

loc_00064425: ;
    xmm1 = MEMF(0x76F7AC); /* movss */

loc_0006442D: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x76EDEC); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0006444C(); return; } /* jnp: not parity */

loc_00064444: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_0006445A(); return; /* tail jmp 0x0006445A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00064480
 * Original: 0x00064480 - 0x000644DB (91 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064480: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A144);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(ebp, ebp)) goto loc_000644D1; /* jl: less (signed <) */

loc_0006448E: ;
    xmm6 = MEMF(0x648D34); /* movss */
    PUSH32(esp, esi);
    esi = 0x76F5C8;
    /* nop */

loc_000644A0: ;
    xmm0 = MEMF(esi); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000644C8; /* jnp: not parity */

loc_000644AD: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = edi;
    PUSH32(esp, 0); sub_00064330(); /* call 0x00064330 */

loc_000644C1: ;
    esp = esp + 0x10;
    MEMF(esi) = xmm6; /* movss */

loc_000644C8: ;
    edi++;
    esi = esi + 0xC;
    if (CMP_LE(edi, ebp)) goto loc_000644A0; /* jle: less or equal (signed <=) */

loc_000644D0: ;
    POP32(esp, esi);

loc_000644D1: ;
    POP32(esp, edi);
    MEM8(0x76F5C4) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000644E0
 * Original: 0x000644E0 - 0x00064548 (104 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000644E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6, xmm7;

loc_000644E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm7, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000644F4; /* jp: parity */

loc_000644EC: ;
    xmm7 = MEMF(0x76F7AC); /* movss */

loc_000644F4: ;
    /* ucomiss xmm6, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00064505; /* jp: parity */

loc_000644FD: ;
    xmm6 = MEMF(0x76F7B0); /* movss */

loc_00064505: ;
    ecx = MEM32(0x84A13C);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm1 = MEMF(eax + ecx + 0x260); /* movss */
    xmm0 = MEMF(eax + ecx + 0x264); /* movss */
    eax = eax + ecx;
    edx = esi;
    PUSH32(esp, 0); sub_000645C0(); /* call 0x000645C0 */

loc_0006452E: ;
    MEMF(esi * 8 + 0x76F5A4) = xmm7; /* movss */
    MEMF(esi * 8 + 0x76F5A8) = xmm6; /* movss */
    MEM8(0x76F5A0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00064550
 * Original: 0x00064550 - 0x000645BF (111 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00064550: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A144);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_S(ebp, ebp)) goto loc_000645B5; /* jl: less (signed <) */

loc_0006455E: ;
    xmm6 = MEMF(0x648D34); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_00064570: ;
    xmm0 = MEMF(esi * 8 + 0x76F5A4); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000645A9; /* jnp: not parity */

loc_00064582: ;
    eax = MEM32(0x84A13C);
    xmm1 = MEMF(edi + eax + 0x260); /* movss */
    xmm0 = MEMF(edi + eax + 0x264); /* movss */
    edx = esi;
    PUSH32(esp, 0); sub_000645C0(); /* call 0x000645C0 */

loc_000645A0: ;
    MEMF(esi * 8 + 0x76F5A4) = xmm6; /* movss */

loc_000645A9: ;
    esi++;
    edi = edi + 0x2B0;
    if (CMP_LE(esi, ebp)) goto loc_00064570; /* jle: less or equal (signed <=) */

loc_000645B4: ;
    POP32(esp, edi);

loc_000645B5: ;
    POP32(esp, esi);
    MEM8(0x76F5A0) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000645C0
 * Original: 0x000645C0 - 0x00064694 (212 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000645C0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_000645C0: ;
    esp = esp - 8;
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    eax = MEM32(edx + eax + 0x144);
    SET_LO8(ecx, MEM8(eax + 8));
    MEMF(eax + 0x104) = xmm0; /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 8) = LO8(ecx);
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(0x76F7AC); /* movss */
    MEMF(eax + 0x10C) = xmm0; /* movss */
    xmm0 = MEMF(0x76F7B0); /* movss */
    MEMF(eax + 0x108) = xmm1; /* movss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    ecx = MEM32(0x84A13C);
    eax = MEM32(edx + ecx + 0x144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx + ecx;
    esi = eax + 0x90;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x84A13C);
    eax = eax + edx;
    ecx = eax + 0xC0;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000646A0
 * Original: 0x000646A0 - 0x00064857 (439 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000646A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000646A0: ;
    esp = esp - 0x14;
    eax = MEM32(0x84A144);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 8) = ebp;
    if (CMP_L(eax, ebp)) goto loc_00064852; /* jl: less (signed <) */

loc_000646B7: ;
    SET_LO8(edx, MEM8(0x7FA230));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    goto loc_000646D0;

loc_000646C6: ;
    ebp = MEM32(esp + 0x10);
    /* nop */

loc_000646D0: ;
    ecx = MEM32(0x84A13C);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edi = eax + ecx;
    ecx = MEM32(edi + 0x144);
    esi = ecx + 0x90;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x84A13C);
    MEM32(esp + 0x20) = eax;
    eax = eax + ecx;
    ecx = eax + 0xC0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
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
    edx = SX8(LO8(edx));
    ebx = MEM32(edx * 4 + 0x762E44);
    ebp = ebp << 6;
    ebx = ebx + ebp;
    PUSH32(esp, 0); sub_003E5930(); /* call 0x003E5930 */

loc_0006476A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, MEM8(0x7FA230));
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(eax, eax)) goto loc_000647DA; /* jne: not equal / not zero */

loc_0006477F: ;
    eax = SX8(LO8(edx));
    eax = MEM32(eax * 4 + 0x762E44);
    eax = eax + ebp;
    MEMF(eax + 0x38) = xmm6; /* movss */
    MEMF(eax + 0x34) = xmm6; /* movss */
    MEMF(eax + 0x30) = xmm6; /* movss */
    MEMF(eax + 0x2C) = xmm6; /* movss */
    MEMF(eax + 0x24) = xmm6; /* movss */
    MEMF(eax + 0x20) = xmm6; /* movss */
    MEMF(eax + 0x1C) = xmm6; /* movss */
    MEMF(eax + 0x18) = xmm6; /* movss */
    MEMF(eax + 0x10) = xmm6; /* movss */
    MEMF(eax + 0xC) = xmm6; /* movss */
    MEMF(eax + 8) = xmm6; /* movss */
    MEMF(eax + 4) = xmm6; /* movss */
    MEMF(eax + 0x3C) = xmm7; /* movss */
    MEMF(eax + 0x28) = xmm7; /* movss */
    MEMF(eax + 0x14) = xmm7; /* movss */
    MEMF(eax) = xmm7; /* movss */

loc_000647DA: ;
    ecx = SX8(LO8(edx));
    esi = MEM32(ecx * 4 + 0x762E44);
    eax = ebp + 0x76F8C0;
    esi = esi + ebp;
    edi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x84A13C);
    esi = MEM32(esp + 0x20);
    esi = esi + ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebp + 0x76F7C0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0006480F: ;
    xmm0 = MEMF(ebp + 0x76F7FC); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00064828; /* jp: parity */

loc_00064820: ;
    MEMF(ebp + 0x76F7FC) = xmm7; /* movss */

loc_00064828: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_002A90B0(); /* call 0x002A90B0 */

loc_00064831: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x84A144);
    eax++;
    MEM32(esp + 0x14) = eax;
    eax = SX16(LO16(eax));
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(eax, ecx)) goto loc_000646C6; /* jle: less or equal (signed <=) */

loc_0006484F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00064852: ;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00064860
 * Original: 0x00064860 - 0x000648D1 (113 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064860(void)
{
    float xmm0, xmm1, xmm2;

loc_00064860: ;
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm2 = MEMF(eax + ecx + 0x260); /* movss */
    xmm2 = xmm2 / MEMF(eax + ecx + 0x258); /* divss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    eax = eax + ecx;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x250); /* addss */
    MEMF(0x780A4C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x264); /* movss */
    xmm2 = xmm2 / MEMF(eax + 0x25C); /* divss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x254); /* addss */
    MEMF(0x780A48) = xmm2; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000648E0
 * Original: 0x000648E0 - 0x00064961 (129 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000648E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000648E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x76FE60);
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    ecx = ecx * 8 + 0x8281C8;
    if (TEST_Z(ecx, ecx)) goto loc_0006490A; /* je: equal / zero */

loc_000648F6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(0x76FE64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_00064902: ;
    eax = MEM32(0x76FE60);
    esp = esp + 0xC;

loc_0006490A: ;
    ecx = MEM32(eax);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(0x76FE64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_00064925; /* jne: not equal / not zero */

loc_00064919: ;
    esi = MEM32(eax + 0x4C);
    edi = MEM32(edx + 8);
    if (CMP_EQ(MEM32(esi + edi), 0)) goto loc_0006495C; /* je: equal / zero */

loc_00064925: ;
    edi = MEM32(0x76FE08);
    ebx = MEM32(0x76FE00);
    esi = ecx + ecx * 4;
    esi = esi * 8 + 0x8281C8;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = edx;
    ebp = eax;
    if (TEST_Z(esi, esi)) goto loc_0006495B; /* je: equal / zero */

loc_00064946: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x20), _icall_esp); /* indirect call */
    }

loc_0006494D: ;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x24), _icall_esp); /* indirect call */
    }

loc_00064958: ;
    esp = esp + 0x20;

loc_0006495B: ;
    POP32(esp, ebp);

loc_0006495C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00064970
 * Original: 0x00064970 - 0x00064A05 (149 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064970(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00064970: ;
    eax = MEM32(0x76FE60);
    edx = MEM32(0x76FE64);
    eax = MEM32(eax + 0x4C);
    edx = MEM32(edx + 8);
    edx = edx + eax;
    eax = MEM32(edx);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x10);
    if (TEST_Z(edi, edi)) goto loc_00064A03; /* je: equal / zero */

loc_0006498D: ;
    edi = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    ecx = ecx + edi;
    if (TEST_NZ(MEM8(ecx + 0x420), 4)) goto loc_000649FC; /* jne: not equal / not zero */

loc_000649A4: ;
    if (TEST_Z(eax, eax)) goto loc_00064A03; /* je: equal / zero */

loc_000649A8: ;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x330) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 0x330))) goto loc_000649FC; /* ja: above (unsigned >) */

loc_000649B6: ;
    xmm0 = MEMF(ecx + 0x330); /* movss */
    /* comiss xmm0, MEMF(eax + 0x10) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x10))) goto loc_000649FC; /* ja: above (unsigned >) */

loc_000649C4: ;
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x334) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 0x334))) goto loc_000649FC; /* ja: above (unsigned >) */

loc_000649D2: ;
    xmm0 = MEMF(ecx + 0x334); /* movss */
    /* comiss xmm0, MEMF(eax + 0x14) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x14))) goto loc_000649FC; /* ja: above (unsigned >) */

loc_000649E0: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x338) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 0x338))) goto loc_000649FC; /* ja: above (unsigned >) */

loc_000649EE: ;
    xmm0 = MEMF(ecx + 0x338); /* movss */
    /* comiss xmm0, MEMF(eax + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x18))) goto loc_00064A03; /* jbe: below or equal (unsigned <=) */

loc_000649FC: ;
    MEM32(edx + 0x10) = 0;

loc_00064A03: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00064A10
 * Original: 0x00064A10 - 0x00064ACA (186 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00064A10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x76FE60);
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    ecx = ecx * 8 + 0x8281C8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00064A3E; /* je: equal / zero */

loc_00064A2A: ;
    edx = MEM32(0x76FE64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_00064A36: ;
    eax = MEM32(0x76FE60);
    esp = esp + 0xC;

loc_00064A3E: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_00064A4F; /* jne: not equal / not zero */

loc_00064A43: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00064970(); /* call 0x00064970 */

loc_00064A4A: ;
    eax = MEM32(0x76FE60);

loc_00064A4F: ;
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    ecx = ecx * 8 + 0x8281C8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84B568) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_00064A7C; /* je: equal / zero */

loc_00064A69: ;
    edx = MEM32(0x76FE64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x76FE20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_00064A79: ;
    esp = esp + 0xC;

loc_00064A7C: ;
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    esi = MEM32(esi + eax + 0x144);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_00064A99: ;
    ecx = MEM32(0x76FE60);
    eax = MEM32(ecx);
    edx = MEM32(0x76FE64);
    esi = eax + eax * 4;
    esi = esi * 8 + 0x8281C8;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = edx;
    ebx = ecx;
    if (TEST_Z(esi, esi)) goto loc_00064AC6; /* je: equal / zero */

loc_00064AB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x18), _icall_esp); /* indirect call */
    }

loc_00064ABE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x1C), _icall_esp); /* indirect call */
    }

loc_00064AC3: ;
    esp = esp + 0x10;

loc_00064AC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00064AD0
 * Original: 0x00064AD0 - 0x00064AF9 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064AD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00064AD0: ;
    ecx = MEM32(0x76FE18);
    if (TEST_Z(ecx, ecx)) goto loc_00064AF8; /* je: equal / zero */

loc_00064ADA: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + eax * 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + MEM32(edx + 4);
    if ((eax == 0)) goto loc_00064AF8; /* je: equal / zero */

loc_00064AE8: ;
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */

loc_00064AF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00064B00
 * Original: 0x00064B00 - 0x00064B5E (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064B00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00064B00: ;
    eax = MEM32(0x76FE00);
    if (TEST_Z(eax, eax)) goto loc_00064B5D; /* je: equal / zero */

loc_00064B09: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x76FE18);
    if (TEST_Z(ebx, ebx)) goto loc_00064B22; /* je: equal / zero */

loc_00064B14: ;
    eax = MEM32(0x7FA21C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9680(); /* call 0x003F9680 */

loc_00064B1F: ;
    esp = esp + 4;

loc_00064B22: ;
    eax = MEM32(0x76F79C);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_00064B4A; /* jne: not equal / not zero */

loc_00064B2C: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_00064B49; /* jl: less (signed <) */

loc_00064B38: ;
    eax = esi;
    PUSH32(esp, 0); sub_00064A10(); /* call 0x00064A10 */

loc_00064B3F: ;
    eax = MEM32(0x84A144);
    esi++;
    if (CMP_LE(esi, eax)) goto loc_00064B38; /* jle: less or equal (signed <=) */

loc_00064B49: ;
    POP32(esp, esi);

loc_00064B4A: ;
    ecx = MEM32(0x7FA21C);
    edx = MEM32(0x771B78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EC830(); /* call 0x000EC830 */

loc_00064B5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00064B60
 * Original: 0x00064B60 - 0x00064C20 (192 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064B60(void)
{
    float xmm0, xmm1;

loc_00064B60: ;
    esp = esp - 0x20;
    eax = MEM32(0x847194);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00064B70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x76F5FC);
    PUSH32(esp, 0); sub_003EACA0(); /* call 0x003EACA0 */

loc_00064B7E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = MEM32(ecx + edx + 0x144);
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xD4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xD8); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xDC); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xE0); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x847194);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x76F5FC);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003EAFB0(); /* call 0x003EAFB0 */

loc_00064C1C: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00064C20
 * Original: 0x00064C20 - 0x00065138 (1304 bytes, 322 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00064C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00064C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00064C36: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064C45: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM32(0x549AF8) = 1;
    MEM32(esp + 0x24) = 0x5DF86C;
    MEM32(esp + 0x28) = 0x5DF858;
    MEM32(esp + 0x2C) = 0x5DF848;
    MEM8(0x7FA380) = 1;
    if (CMP_NE(LO8(eax), 1)) goto loc_00064C89; /* jne: not equal / not zero */

loc_00064C7B: ;
    SET_LO8(eax, MEM8(0x76F0B9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00064C89; /* je: equal / zero */

loc_00064C84: ;
    esi = 1;

loc_00064C89: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x7FCB54);
    MEM32(esp + 0x20) = ebx;
    if (TEST_Z(eax, ecx)) goto loc_00064CA9; /* je: equal / zero */

loc_00064CA4: ;
    esi = 1;

loc_00064CA9: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00076660(); /* call 0x00076660 */

loc_00064CB0: ;
    if (CMP_NE(esi, edi)) goto loc_00064CC6; /* jne: not equal / not zero */

loc_00064CB4: ;
    eax = MEM32(0x7FA1F8);
    eax = eax - 0x13;
    if ((eax == 0)) goto loc_00064CC6; /* je: equal / zero */

loc_00064CBE: ;
    eax--;
    if ((eax != 0)) goto loc_00064CC6; /* jne: not equal / not zero */

loc_00064CC1: ;
    PUSH32(esp, 0); sub_00162B90(); /* call 0x00162B90 */

loc_00064CC6: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F5384);
    ecx = 0x822670;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_00064CDA: ;
    edx = MEM32(esp + 0x24);
    esp = esp + 8;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(edx + 0x50) = 0x6B8ED4;
    if (CMP_NE(esi, edi)) goto loc_0006512A; /* jne: not equal / not zero */

loc_00064CF0: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 5)) goto loc_00065125; /* je: equal / zero */

loc_00064CFD: ;
    if (CMP_EQ(MEM32(0x76FE00), edi)) goto loc_00065125; /* je: equal / zero */

loc_00064D09: ;
    eax = MEM32(0x6B888C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00064D14: ;
    if (CMP_NE(MEM32(0x69D398), edi)) goto loc_00064D30; /* jne: not equal / not zero */

loc_00064D1C: ;
    ecx = MEM32(0x69D394);
    PUSH32(esp, 0x69D398);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00064D2D: ;
    esp = esp + 8;

loc_00064D30: ;
    eax = MEM32(0x69D398);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00064D42: ;
    edx = MEM32(0x6B888C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00064D4E: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00064D5A: ;
    PUSH32(esp, esi);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00064D65: ;
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00064D70: ;
    PUSH32(esp, esi);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00064D7B: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064D87: ;
    ecx = MEM32(0x5499F0);
    eax = 1;
    ecx = ecx | 4;
    edx = ebx;
    MEM32(0x549AE8) = edi;
    MEM32(0x547430) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547434) = eax;
    PUSH32(esp, 0); sub_000648E0(); /* call 0x000648E0 */

loc_00064DB2: ;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_00064DB7: ;
    esi = MEM32(0x84B868);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = esp + 0x30;
    eax = 0x76FE20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_00064DD8: ;
    ecx = 0x10;
    esi = esp + 0x30;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0010A2B0(); /* call 0x0010A2B0 */

loc_00064DED: ;
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    if (CMP_NE(esi, edi)) { sub_00065138(); return; } /* jne: not equal / not zero */

loc_00064DFA: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x76F618);
    PUSH32(esp, 5);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = eax + ecx;
    PUSH32(esp, 0x76F614);
    edx = ebx + ebx * 2;
    ecx = edx * 4 + 0x76F6F8;
    edx = ZX8(MEM8(0x76F615));
    PUSH32(esp, ecx);
    ecx = MEM32(ebx * 4 + 0x76F728);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x338);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x334);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x330);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00127B60(); /* call 0x00127B60 */

loc_00064E51: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2B0);
    eax = MEM32(0x84A13C);
    ecx = ebx + eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_00064E66: ;
    esp = esp + 0x3C;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5DF86C);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00064E7A: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = 0x5DF830;
    esi = esp + 0xB4;
    PUSH32(esp, 0); sub_000654F0(); /* call 0x000654F0 */

loc_00064E90: ;
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00064E99: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064EBA: ;
    ecx = esp + 0x1B;
    MEM32(0x549AE8) = edi;
    edi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    eax = edi;
    MEM32(0x81BD70) = 0x3EE100;
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0); sub_00065450(); /* call 0x00065450 */

loc_00064EE0: ;
    edx = MEM32(0x7FA020);
    esi = MEM32(0x76FE08);
    ebx = MEM32(0x76FE00);
    esp = esp + 8;
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064F0B: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    edx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = eax;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00064F38; /* je: equal / zero */

loc_00064F33: ;
    MEM32(0x84B854) = eax;

loc_00064F38: ;
    ecx = MEM32(ebx + -16);
    MEM32(0x81BE64) = ecx;
    PUSH32(esp, 4);
    ecx = ebx;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_00064F54: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_00064F63: ;
    esp = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_00064F6E: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00064F82; /* je: equal / zero */

loc_00064F76: ;
    MEM32(0x84B824) = esi;
    MEM32(0x84B828) = esi;

loc_00064F82: ;
    PUSH32(esp, 1);
    MEM32(0x81BD70) = 0x3F0270;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00064F93: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064FA2: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064FBB: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00064FD4: ;
    PUSH32(esp, esi);
    MEM32(0x549B1C) = 0xFF;
    PUSH32(esp, 0); sub_00537580(); /* call 0x00537580 */

loc_00064FE4: ;
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = edi;
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0); sub_00065450(); /* call 0x00065450 */

loc_00064FF6: ;
    eax = MEM32(0x7FA020);
    esi = MEM32(0x76FE08);
    edi = MEM32(0x76FE00);
    esp = esp + 8;
    eax++;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x7FA020) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0006501F: ;
    PUSH32(esp, 0);
    ebx = 1;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_003ED380(); /* call 0x003ED380 */

loc_00065035: ;
    SET_LO8(ecx, MEM8(esp + 0x1F));
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_0006504C; /* je: equal / zero */

loc_00065042: ;
    MEM32(0x84B824) = eax;
    MEM32(0x84B828) = eax;

loc_0006504C: ;
    if (CMP_EQ(MEM32(0x76F7A4), eax)) goto loc_0006507F; /* je: equal / zero */

loc_00065054: ;
    eax = MEM32(0x76FE00);
    ecx = MEM32(0x76F7A0);
    edx = MEM32(0x76F7A8);
    PUSH32(esp, eax);
    eax = MEM32(0x76FE08);
    MEM32(0x753BD8) = ecx;
    MEM32(0x753BD4) = edx;
    PUSH32(esp, 0); sub_003EE200(); /* call 0x003EE200 */

loc_0006507C: ;
    esp = esp + 4;

loc_0006507F: ;
    ebx = MEM32(esp + 0x20);
    edi = 0; /* xor self */
    ecx = MEM32(0x81B7C0);
    ecx = ecx & 0x80000000u;
    MEM32(0x84B828) = edi;
    MEM32(0x84B7D0) = edi;
    MEM32(0x819FE0) = edi;
    MEM32(0x819FE4) = edi;
    MEM32(0x81B7C0) = ecx;
    PUSH32(esp, 0); sub_0010A420(); /* call 0x0010A420 */

loc_000650B4: ;
    (void)0; /* cmp MEM32(0x76F610), edi - flags set for next jcc */
    MEM32(0x81BE48) = edi;
    MEM32(0x81BE44) = edi;
    if (CMP_EQ(MEM32(0x76F610), edi)) goto loc_00065125; /* je: equal / zero */

loc_000650C8: ;
    edx = MEM32(0x76FE14);
    if (CMP_EQ(MEM32(edx + 0x10), edi)) goto loc_00065125; /* je: equal / zero */

loc_000650D3: ;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_00065125; /* jne: not equal / not zero */

loc_000650D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000650DE: ;
    ecx = MEM32(0x84A13C);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = eax + ecx + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x76FE20);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00065100: ;
    ecx = MEM32(0x76FE0C);
    eax = MEM32(0x76FE14);
    MEM32(0x812A18) = ecx;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0x5A0350);
    edx = esp + 0x34;
    PUSH32(esp, 0); sub_003D67F0(); /* call 0x003D67F0 */

loc_00065122: ;
    esp = esp + 4;

loc_00065125: ;
    PUSH32(esp, 0); sub_001C6D90(); /* call 0x001C6D90 */

loc_0006512A: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0010F420(); /* call 0x0010F420 */

loc_00065131: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00065450
 * Original: 0x00065450 - 0x000654E5 (149 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00065450: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebp, 2)) goto loc_000654A2; /* je: equal / zero */

loc_0006545D: ;
    ecx = MEM32(0x8470DC);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx + 0x3E0);
    PUSH32(esp, 0); sub_002C38C0(); /* call 0x002C38C0 */

loc_00065479: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000654A2; /* je: equal / zero */

loc_0006547E: ;
    eax = (uint32_t)(int32_t)SMEM16(0x76FE74);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00065498; /* je: equal / zero */

loc_0006548A: ;
    MEM32(0x84B824) = 0x65320;
    edi = eax;
    goto loc_000654A2;

loc_00065498: ;
    MEM32(0x84B824) = 0;

loc_000654A2: ;
    ecx = MEM32(0x76FE6C);
    edx = MEM32(esp + 0x10);
    eax = edi + edi * 8;
    PUSH32(esp, edx);
    eax = ecx + eax * 4;
    ecx = ebp;
    edx = edx | 0xFFFFFFFFu;
    MEM32(0x81BE48) = edi;
    MEM8(0x770004) = 0;
    PUSH32(esp, 0); sub_00084260(); /* call 0x00084260 */

loc_000654CA: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000654E5(); return; } /* je: equal / zero */

loc_000654D3: ;
    MEM8(0x76FFFE) = 1;
    MEM32(0x770000) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000654F0
 * Original: 0x000654F0 - 0x00065533 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000654F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000654F0: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00065505: ;
    ebx = MEM32(esp + 0x8C);
    edi = esp + 8;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_00065515: ;
    POP32(esp, edi);
    edx = esi;
    POP32(esp, ebx);
    /* nop */

loc_00065520: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00065520; /* jne: not equal / not zero */

loc_0006552A: ;
    eax = esi;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00065540
 * Original: 0x00065540 - 0x0006558B (75 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00065540(void)
{
    int _flags = 0; /* fallback flag var */

loc_00065540: ;
    eax = ebx;
    edx = eax + 1;

loc_00065545: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00065545; /* jne: not equal / not zero */

loc_0006554C: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00065556: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00065556; /* jne: not equal / not zero */

loc_0006555D: ;
    eax = eax - esi;
    ecx = 0x7F;
    ecx = ecx - eax;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_AE(edx, ecx)) { sub_0006558B(); return; } /* jae: above or equal (unsigned >=) */

loc_0006556B: ;
    eax = ebx;
    edx = eax + 1;

loc_00065570: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00065570; /* jne: not equal / not zero */

loc_00065577: ;
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F100(); /* call 0x0046F100 */

loc_00065581: ;
    esp = esp + 0xC;
    MEM8(edi + 0x7F) = 0;
    eax = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_000655C0
 * Original: 0x000655C0 - 0x00065847 (647 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000655C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000655C0: ;
    esp = esp - 8;
    eax = MEM32(0x8471A4);
    xmm0 = MEMF(eax + 0x28); /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    MEMF(0x76F7AC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    PUSH32(esp, ebx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x76F7B0) = xmm0; /* movss */
    MEMF(0x780A44) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000767F0(); /* call 0x000767F0 */

loc_000655FC: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0x76F9D8) = eax;
    MEM32(0x76F9DC) = eax;
    MEM32(0x76F9CC) = ecx;
    MEM32(0x76F9E0) = eax;
    MEM32(0x76F9D0) = ecx;
    MEM16(0x76F9C8) = LO16(eax);
    ebx = 0; /* xor self */
    edx = 0; /* xor self */
    MEM32(0x76F9D4) = ecx;
    ecx = MEM32(0x84A144);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(0x76F9CA) = LO8(eax);
    SET_LO8(eax, 0xFF);
    MEM16(0x76F9C4) = LO16(edx);
    MEM8(0x76F9C6) = LO8(edx);
    MEM8(0x76F9C1) = LO8(eax);
    MEM8(0x76F9C0) = LO8(eax);
    MEM32(0x847190) = ebx;
    MEM8(0x76F615) = 7;
    MEM8(0x76F614) = LO8(ebx);
    MEM32(esp + 4) = ebx;
    if (CMP_L(ecx, ebx)) goto loc_000657D6; /* jl: less (signed <) */

loc_0006566E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00065671: ;
    eax = ZX8(MEM8(0x76F615));
    ebp = eax * 4;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0006568C; /* jne: not equal / not zero */

loc_00065687: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0006568C: ;
    edi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    (void)0; /* cmp ebp, 0x20 - flags set for next jcc */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0xFFFFFFF4u;
    esi = esi + 0x10;
    edi++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edi;
    MEM32(0x7FA4B4) = edx;
    edi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00065718; /* je: equal / zero */

loc_000656BC: ;
    edx = MEM32(eax + 0x80);
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    ecx = ebp;
    if (CMP_BE(ebp, esi)) ecx = esi; /* cmovbe */
    if (CMP_A(ecx, edx)) goto loc_00065718; /* ja: above (unsigned >) */

loc_000656CD: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(ecx, ebx)) goto loc_000656E4; /* je: equal / zero */

loc_000656DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_000656DF: ;
    esp = esp + 8;
    goto loc_00065708;

loc_000656E4: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = LO8(ebx);
    if (CMP_BE(LO16(esi), 1)) goto loc_00065703; /* jbe: below or equal (unsigned <=) */

loc_000656EF: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    SET_LO8(edx, LO8(ebx));

loc_000656F6: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_000656F6; /* ja: above (unsigned >) */

loc_00065701: ;
    MEM8(eax) = LO8(edx);

loc_00065703: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + 0x75) = LO8(edx);

loc_00065708: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0006570F: ;
    edx = eax;
    esp = esp + 8;
    if (CMP_NE(edx, ebx)) goto loc_00065772; /* jne: not equal / not zero */

loc_00065718: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edi = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(ecx, ebx)) goto loc_00065736; /* je: equal / zero */

loc_0006572D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00065731: ;
    esp = esp + 8;
    goto loc_00065762;

loc_00065736: ;
    eax = eax + 0x76;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM8(eax) = LO8(ebx);
    if (CMP_BE(LO16(esi), 1)) goto loc_0006575D; /* jbe: below or equal (unsigned <=) */

loc_00065741: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    SET_LO8(edx, LO8(ebx));
    goto loc_00065750;

    /* nop */

loc_00065750: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_00065750; /* ja: above (unsigned >) */

loc_0006575B: ;
    MEM8(eax) = LO8(edx);

loc_0006575D: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + 0x75) = LO8(edx);

loc_00065762: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00065769: ;
    edx = eax;
    esp = esp + 8;
    if (CMP_EQ(edx, ebx)) goto loc_00065786; /* je: equal / zero */

loc_00065772: ;
    ecx = ebp;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_00065786: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x84A144);
    MEM32(eax * 4 + 0x76F728) = edx;
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(eax, ecx)) goto loc_00065671; /* jle: less or equal (signed <=) */

loc_000657A4: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_L(ecx, ebx)) goto loc_000657D6; /* jl: less (signed <) */

loc_000657AB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0x76F6FC;
    edx = ecx + 1;
    goto loc_000657C0;

    /* nop */

loc_000657C0: ;
    MEMF(eax + -4) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 0xC;
    edx--;
    if ((edx != 0)) goto loc_000657C0; /* jne: not equal / not zero */

loc_000657D4: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */

loc_000657D6: ;
    xmm0 = MEMF(0x648D34); /* movss */
    if (CMP_L(ecx, ebx)) goto loc_000657F2; /* jl: less (signed <) */

loc_000657E0: ;
    eax = 0x76F5C8;
    edx = ecx + 1;

loc_000657E8: ;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 0xC;
    edx--;
    if ((edx != 0)) goto loc_000657E8; /* jne: not equal / not zero */

loc_000657F2: ;
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(0x76F5C4) = LO8(ebx);
    if (CMP_L(ecx, ebx)) goto loc_0006580E; /* jl: less (signed <) */

loc_000657FE: ;
    edi = edi;

loc_00065800: ;
    MEMF(eax * 8 + 0x76F5A4) = xmm0; /* movss */
    eax++;
    if (CMP_LE(eax, ecx)) goto loc_00065800; /* jle: less or equal (signed <=) */

loc_0006580E: ;
    SET_LO8(eax, MEM8(0x7819D5));
    MEM8(0x76F5A0) = LO8(ebx);
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00065825; /* je: equal / zero */

loc_0006581E: ;
    MEM32(0x76F5F8) = MEM32(0x76F5F8) | 3;

loc_00065825: ;
    eax = MEM32(esp + 0xC);
    if (CMP_A(eax, 0x49)) goto loc_00065843; /* ja: above (unsigned >) */

loc_0006582E: ;
    eax = ZX8(MEM8(eax + 0x65850));
    { uint32_t _jt = MEM32(eax * 4 + 0x65848); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0006583Cu) goto loc_0006583C;
    if (_jt == 0x00065843u) goto loc_00065843;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006583C: ;
    MEM32(0x76F5F8) = MEM32(0x76F5F8) | 1;

loc_00065843: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}
