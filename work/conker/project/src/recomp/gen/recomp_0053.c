/**
 * Burnout 3 - Recompiled code chunk 53
 * Functions: 250 (0x004716B0 - 0x0047C088)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

extern void conker_trace_point(uint32_t xbox_va);

/**
 * sub_004716B0
 * Original: 0x004716B0 - 0x004716B2 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004716B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004716B0: ;
    g_seh_ebp = ebp; sub_004716CF(); return; /* tail jmp 0x004716CF */

}

/**
 * sub_004716B4
 * Original: 0x004716B4 - 0x004716B6 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004716B4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004716B4: ;
    g_seh_ebp = ebp; sub_004716B6(); return; /* tail jmp 0x004716B6 */

}

/**
 * sub_004716D8
 * Original: 0x004716D8 - 0x00471878 (416 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004716D8(void)
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

loc_004716D8: ;
    ecx = eax;
    PUSH32(esp, eax);
    /* wait - FPU sync */
    /* fnstcw word ptr [esp] - store FPU control word */
    if (CMP_EQ(MEM16(esp), 0x27F)) goto loc_004716EC; /* je: equal / zero */

loc_004716E7: ;
    PUSH32(esp, 0); sub_0047B465(); /* call 0x0047B465 */

loc_004716EC: ;
    ecx = ecx & 0x7FF00000;
    edx = esp + 8;
    if (CMP_EQ(ecx, 0x7FF00000)) goto loc_0047179F; /* je: equal / zero */

loc_00471702: ;
    PUSH32(esp, 0); sub_0047B495(); /* call 0x0047B495 */

loc_00471707: ;
    if (CMP_EQ(ecx, 0x7FF00000)) goto loc_0047179B; /* je: equal / zero */

loc_0047170D: ;
    if (TEST_Z(eax, 0x7FF00000)) goto loc_0047180E; /* je: equal / zero */

loc_00471718: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    if ((LO8(ecx) != 0)) { sub_00471878(); return; } /* jne: not equal / not zero */

loc_00471725: ;
    /* FPU: fyl2x  */
    PUSH32(esp, 0); sub_0047B450(); /* call 0x0047B450 */

loc_0047172C: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_00471733; /* jne: not equal / not zero */

loc_00471731: ;
    fp_top() = -fp_top(); /* fchs */

loc_00471733: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) { sub_0047B4EE(); return; } /* jne: not equal / not zero */

loc_00471740: ;
    ecx = 0x655900;
    edx = 0x1D;
    g_seh_ebp = ebp; sub_0047B539(); return; /* tail jmp 0x0047B539 */

loc_00471750: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) { sub_0047B4EE(); return; } /* jne: not equal / not zero */

loc_0047175D: ;
    ecx = 0x655900;
    edx = 0x1D;
    PUSH32(esp, 0); sub_0047B3FC(); /* call 0x0047B3FC */

loc_0047176D: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_0047176F: ;
    edx = esp + 8;
    PUSH32(esp, 0); sub_0047B495(); /* call 0x0047B495 */

loc_00471778: ;
    if (TEST_NZ(MEM8(esp + 0x16), 8)) goto loc_00471782; /* jne: not equal / not zero */

loc_0047177F: ;
    ecx++;
    goto loc_004717B5;

loc_00471782: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = 1;
    goto loc_00471750;

loc_0047178B: ;
    if (TEST_NZ(MEM8(esp + 0xE), 8)) goto loc_00471782; /* jne: not equal / not zero */

loc_00471792: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = 7;
    goto loc_00471750;

loc_0047179B: ;
    ecx = 0; /* xor self */
    goto loc_004717B5;

loc_0047179F: ;
    ecx = 0; /* xor self */
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 0x10);
    if ((eax != 0)) goto loc_0047176F; /* jne: not equal / not zero */

loc_004717AC: ;
    edx = esp + 8;
    PUSH32(esp, 0); sub_0047B495(); /* call 0x0047B495 */

loc_004717B5: ;
    eax = MEM32(esp + 0xC);
    edx = eax;
    eax = eax & 0x7FF00000;
    edx = edx & 0xFFFFF;
    if (CMP_NE(eax, 0x7FF00000)) goto loc_004717D3; /* jne: not equal / not zero */

loc_004717CD: ;
    edx = edx | MEM32(esp + 8);
    if ((edx != 0)) goto loc_0047178B; /* jne: not equal / not zero */

loc_004717D3: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00471792; /* jne: not equal / not zero */

loc_004717D7: ;
    esp = esp - 0x74;
    ecx = esp;
    PUSH32(esp, ecx);
    esp = esp - 0x10;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */
    /* FPU: fnsave dword ptr [ecx + 8] */
    PUSH32(esp, 0); sub_0047BBEF(); /* call 0x0047BBEF */

loc_004717F0: ;
    esp = esp + 0x10;
    POP32(esp, ecx);
    /* FPU: frstor dword ptr [ecx + 8] */
    fp_push(MEMD(ecx)); /* fld double */
    esp = esp + 0x74;
    if (TEST_Z(eax, eax)) { sub_0047B4EE(); return; } /* je: equal / zero */

loc_00471804: ;
    eax = 1;
    goto loc_00471750;

loc_0047180E: ;
    eax = MEM32(esp + 0xC);
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_00471718; /* jne: not equal / not zero */

loc_00471821: ;
    /* fstp st(0) */
    eax = MEM32(esp + 0x14);
    eax = eax & 0x7FFFFFFF;
    eax = eax | MEM32(esp + 0x10);
    if ((eax == 0)) goto loc_0047186F; /* je: equal / zero */

loc_00471832: ;
    PUSH32(esp, 0); sub_0047189D(); /* call 0x0047189D */

loc_00471837: ;
    SET_HI8(ecx, MEM8(esp + 0xF));
    SET_HI8(ecx, HI8(ecx) >> 7);
    if (TEST_Z(MEM32(esp + 0x17), 0x80)) goto loc_0047185E; /* je: equal / zero */

loc_00471848: ;
    fp_push(MEMF(0x655DA4)); /* fld */
    if (TEST_Z(HI8(ecx), LO8(ecx))) goto loc_00471854; /* je: equal / zero */

loc_00471852: ;
    fp_top() = -fp_top(); /* fchs */

loc_00471854: ;
    eax = 2;
    goto loc_00471750;

loc_0047185E: ;
    fp_push(0.0); /* fldz */
    if (TEST_Z(HI8(ecx), LO8(ecx))) { sub_0047B4EE(); return; } /* je: equal / zero */

loc_00471868: ;
    fp_top() = -fp_top(); /* fchs */
    g_seh_ebp = ebp; sub_0047B4EE(); return; /* tail jmp 0x0047B4EE */

loc_0047186F: ;
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_0047B4EE(); return; /* tail jmp 0x0047B4EE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047189D
 * Original: 0x0047189D - 0x004718C2 (37 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047189D(void)
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

loc_0047189D: ;
    /* fld st(0) */
    /* FPU: frndint  */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    SET_LO8(ecx, 0);
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp != 0) /* sahf */) { sub_004718C2(); return; } /* jne: not equal / not zero */

loc_004718AB: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ecx, LO8(ecx) + 1);
    /* fld st(0) */
    /* FPU: frndint  */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp != 0) /* sahf */) goto loc_004718C1; /* jne: not equal / not zero */

loc_004718BF: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_004718C1: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004718C5
 * Original: 0x004718C5 - 0x004718EC (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004718C5(void)
{
    int _flags = 0; /* fallback flag var */

loc_004718C5: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) goto loc_004718CE; /* jne: not equal / not zero */

loc_004718CD: ;
    eax++;

loc_004718CE: ;
    if (CMP_EQ(MEM32(0x881464), 1)) goto loc_004718DD; /* je: equal / zero */

loc_004718D7: ;
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;

loc_004718DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004308AE(); /* call 0x004308AE */

loc_004718E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00431E6A(); /* call 0x00431E6A */

loc_004718EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004718EC
 * Original: 0x004718EC - 0x00471918 (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004718EC(void)
{
    int _flags = 0; /* fallback flag var */

loc_004718EC: ;
    if (CMP_A(MEM32(esp + 4), 0xFFFFFFE0u)) goto loc_00471915; /* ja: above (unsigned >) */

loc_004718F3: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_004718C5(); /* call 0x004718C5 */

loc_004718FC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00471917; /* jne: not equal / not zero */

loc_00471901: ;
    if (CMP_EQ(MEM32(esp + 8), eax)) goto loc_00471917; /* je: equal / zero */

loc_00471907: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0047BD41(); /* call 0x0047BD41 */

loc_00471910: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004718F3; /* jne: not equal / not zero */

loc_00471915: ;
    eax = 0; /* xor self */

loc_00471917: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00471918
 * Original: 0x00471918 - 0x0047192A (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471918(void)
{

loc_00471918: ;
    PUSH32(esp, MEM32(0x75FA0C));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004718EC(); /* call 0x004718EC */

loc_00471927: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047192A
 * Original: 0x0047192A - 0x0047194B (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047192A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047192A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x586360);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00471936: ;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + 8), edi)) { sub_0047194B(); return; } /* jne: not equal / not zero */

loc_0047193D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_00471945: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00471A11(); return; /* tail jmp 0x00471A11 */

}

/**
 * sub_004719D1
 * Original: 0x004719D1 - 0x004719DA (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004719D1(void)
{

loc_004719D1: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_004719D8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00471A18
 * Original: 0x00471A18 - 0x00471A2C (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471A18(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00471A18: ;
    esp = esp - 0xC;
    MEMD(esp) = fp_top(); fp_pop(); /* fst */
    PUSH32(esp, 0); sub_0047B4D8(); /* call 0x0047B4D8 */

loc_00471A23: ;
    PUSH32(esp, 0); sub_00471A35(); /* call 0x00471A35 */

loc_00471A28: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00471A35
 * Original: 0x00471A35 - 0x00471AE3 (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471A35(void)
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

loc_00471A35: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    /* fnstcw word ptr [esp] - store FPU control word */
    if (_flags /* je: equal / zero */) goto loc_00471AA9;

loc_00471A3C: ;
    if (CMP_EQ(MEM16(esp), 0x27F)) goto loc_00471A49; /* je: equal / zero */

loc_00471A44: ;
    PUSH32(esp, 0); sub_0047B465(); /* call 0x0047B465 */

loc_00471A49: ;
    if (CMP_AE(eax, 0x3FF00000)) goto loc_00471A7B; /* jae: above or equal (unsigned >=) */

loc_00471A50: ;
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fpatan  */

loc_00471A5E: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) { sub_0047B4EE(); return; } /* jne: not equal / not zero */

loc_00471A6B: ;
    edx = 0xE;
    ecx = 0x655904;
    g_seh_ebp = ebp; sub_0047B4FB(); return; /* tail jmp 0x0047B4FB */

loc_00471A7B: ;
    if (CMP_A(MEM32(0x75F7D4), 0)) goto loc_00471AB7; /* ja: above (unsigned >) */

loc_00471A7D: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_00471AB7; /* jne: not equal / not zero */

loc_00471A8E: ;
    ecx = ecx & 0x80000000u;
    /* fstp st(0) */
    fp_push(MEMF(0x655D82)); /* fld */
    if ((ecx == 0)) goto loc_00471A5E; /* je: equal / zero */

loc_00471A9E: ;
    fp_top() = -fp_top(); /* fchs */
    goto loc_00471A5E;

loc_00471AA2: ;
    PUSH32(esp, 0); sub_0047B47C(); /* call 0x0047B47C */

loc_00471AA7: ;
    goto loc_00471AC4;

loc_00471AA9: ;
    if (TEST_NZ(eax, 0xFFFFF)) goto loc_00471AA2; /* jne: not equal / not zero */

loc_00471AB0: ;
    if (CMP_NE(MEM32(esp + 8), 0)) goto loc_00471AA2; /* jne: not equal / not zero */

loc_00471AB7: ;
    /* fstp st(0) */
    fp_push(MEMF(0x655D78)); /* fld */
    eax = 1;

loc_00471AC4: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) { sub_0047B4EE(); return; } /* jne: not equal / not zero */

loc_00471AD1: ;
    edx = 0xE;
    ecx = 0x655904;
    PUSH32(esp, 0); sub_0047B413(); /* call 0x0047B413 */

loc_00471AE1: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00471AE4
 * Original: 0x00471AE4 - 0x00471AEE (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471AE4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00471AE4: ;
    edx = 0x655E32;
    g_seh_ebp = ebp; sub_0047B9E5(); return; /* tail jmp 0x0047B9E5 */

}

/**
 * sub_00471B14
 * Original: 0x00471B14 - 0x00471B1D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471B14(void)
{

loc_00471B14: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471B19: ;
    eax = eax + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00471B1D
 * Original: 0x00471B1D - 0x00471B26 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471B1D(void)
{

loc_00471B1D: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471B22: ;
    eax = eax + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00471B26
 * Original: 0x00471B26 - 0x00471B6D (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471B26(void)
{
    int _flags = 0; /* fallback flag var */

loc_00471B26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471B2C: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esi = 0; /* xor self */

loc_00471B35: ;
    if (CMP_EQ(ecx, MEM32(esi * 8 + 0x655910))) goto loc_00471B5C; /* je: equal / zero */

loc_00471B3E: ;
    esi++;
    if (CMP_B(esi, 0x2D)) goto loc_00471B35; /* jb: below (unsigned <) */

loc_00471B44: ;
    if (CMP_B(ecx, 0x13)) { sub_00471B6D(); return; } /* jb: below (unsigned <) */

loc_00471B49: ;
    if (CMP_A(ecx, 0x24)) { sub_00471B6D(); return; } /* ja: above (unsigned >) */

loc_00471B4E: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471B53: ;
    MEM32(eax + 8) = 0xD;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00471B5C: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471B61: ;
    ecx = MEM32(esi * 8 + 0x655914);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00471B99
 * Original: 0x00471B99 - 0x00471C0B (114 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471B99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00471B99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + -1;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x14));
    edi = edi + ecx;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_A(ecx, edi)) goto loc_00471C00; /* ja: above (unsigned >) */

loc_00471BB5: ;
    ebx = eax;
    ebx = ebx >> 1;
    if ((ebx == 0)) { sub_00471C0B(); return; } /* je: equal / zero */

loc_00471BBB: ;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 1;
    eax = ebx;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_00471BC9; /* jne: not equal / not zero */

loc_00471BC6: ;
    eax = ebx + -1;

loc_00471BC9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14));
    eax = eax + MEM32(ebp + 0xC);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x18), _icall_esp); /* indirect call */
    }

loc_00471BD9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00471C07; /* je: equal / zero */

loc_00471BDF: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00471BF1; /* jge: greater or equal (signed >=) */

loc_00471BE1: ;
    esi = esi - MEM32(ebp + 0x14);
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    edi = esi;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_00471BF9; /* jne: not equal / not zero */

loc_00471BEC: ;
    eax = ebx + -1;
    goto loc_00471BFB;

loc_00471BF1: ;
    eax = MEM32(ebp + 0x14);
    esi = esi + eax;
    MEM32(ebp + 0xC) = esi;

loc_00471BF9: ;
    eax = ebx;

loc_00471BFB: ;
    if (CMP_BE(MEM32(ebp + 0xC), edi)) goto loc_00471BB5; /* jbe: below or equal (unsigned <=) */

loc_00471C00: ;
    eax = 0; /* xor self */

loc_00471C02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00471C07: ;
    eax = esi;
    goto loc_00471C02;

}

/**
 * sub_00471CB8
 * Original: 0x00471CB8 - 0x00471CE3 (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471CB8(void)
{
    uint32_t ebp;

loc_00471CB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;
    ebx = MEM32(0);
    eax = MEM32(ebx);
    MEM32(0) = eax;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    esp = MEM32(ebx + -4);
    ebp = MEM32(ebp + -4);
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00471CE8
 * Original: 0x00471CE8 - 0x00471CEF (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471CE8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00471CE8: ;
    POP32(esp, eax);
    POP32(esp, ecx);
    { uint32_t _tmp = MEM32(esp);
    MEM32(esp) = eax;
    eax = _tmp; }
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00471CEF
 * Original: 0x00471CEF - 0x00471D41 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471CEF(void)
{
    uint32_t ebp;

loc_00471CEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(0);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = 0x471D18;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047F02A(); /* call 0x0047F02A */

loc_00471D18: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    eax = eax & 0xFFFFFFFDu;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 4) = eax;
    edi = MEM32(0);
    ebx = MEM32(ebp + -4);
    MEM32(ebx) = edi;
    MEM32(0) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00471D41
 * Original: 0x00471D41 - 0x00471D77 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471D41(void)
{
    uint32_t ebp;

loc_00471D41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* cld - direction flag */
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047292A(); /* call 0x0047292A */

loc_00471D67: ;
    esp = esp + 0x20;
    MEM32(ebp + -4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00471DB2
 * Original: 0x00471DB2 - 0x00471DD4 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471DB2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00471DB2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    if (CMP_NE(MEM32(ebp + 8), 0x123)) { sub_00471DD4(); return; } /* jne: not equal / not zero */

loc_00471DC2: ;
    eax = 0x471E4D;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00471E76(); return; /* tail jmp 0x00471E76 */

}

/**
 * sub_00471E79
 * Original: 0x00471E79 - 0x00471EA4 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471E79(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00471E79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    /* cld - direction flag */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, MEM32(0x655E94))) { sub_00471EA4(); return; } /* je: equal / zero */

loc_00471E8D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax | 8;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00471F28(); return; /* tail jmp 0x00471F28 */

}

/**
 * sub_00471F2B
 * Original: 0x00471F2B - 0x00471FA5 (122 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471F2B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00471F2B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(edi + 0x10);
    eax = esi;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = esi;
    if (CMP_L(MEM32(ebp + 0xC), 0)) goto loc_00471F81; /* jl: less (signed <) */

loc_00471F49: ;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_00471F53; /* jne: not equal / not zero */

loc_00471F4E: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_00471F53: ;
    ecx = MEM32(ebp + 0x10);
    esi--;
    eax = esi + esi * 4;
    eax = ebx + eax * 4;
    if (CMP_GE(MEM32(eax + 4), ecx)) goto loc_00471F67; /* jge: greater or equal (signed >=) */

loc_00471F62: ;
    if (CMP_LE(ecx, MEM32(eax + 8))) goto loc_00471F6C; /* jle: less or equal (signed <=) */

loc_00471F67: ;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_00471F78; /* jne: not equal / not zero */

loc_00471F6C: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = esi;

loc_00471F78: ;
    if (CMP_GE(MEM32(ebp + 0xC), 0)) goto loc_00471F49; /* jge: greater or equal (signed >=) */

loc_00471F7E: ;
    eax = MEM32(ebp + -4);

loc_00471F81: ;
    ecx = MEM32(ebp + 0x14);
    esi++;
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    if (CMP_A(eax, MEM32(edi + 0xC))) goto loc_00471F95; /* ja: above (unsigned >) */

loc_00471F91: ;
    if (CMP_BE(esi, eax)) goto loc_00471F9A; /* jbe: below or equal (unsigned <=) */

loc_00471F95: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_00471F9A: ;
    POP32(esp, edi);
    eax = esi + esi * 4;
    POP32(esp, esi);
    eax = ebx + eax * 4;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00471FA5
 * Original: 0x00471FA5 - 0x00471FCD (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471FA5(void)
{

loc_00471FA5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471FB5: ;
    eax = MEM32(eax + 0x84);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471FC3: ;
    MEM32(eax + 0x84) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00471FCD
 * Original: 0x00471FCD - 0x00471FDA (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471FCD(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00471FCD: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471FD2: ;
    eax = MEM32(eax + 0x84);
    g_seh_ebp = ebp; sub_00471FE5(); return; /* tail jmp 0x00471FE5 */

}

/**
 * sub_00471FEE
 * Original: 0x00471FEE - 0x00472010 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471FEE(void)
{
    int _flags = 0; /* fallback flag var */

loc_00471FEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471FF4: ;
    esi = MEM32(esp + 8);
    if (CMP_NE(esi, MEM32(eax + 0x84))) { sub_00472010(); return; } /* jne: not equal / not zero */

loc_00472000: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472005: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x84) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047203A
 * Original: 0x0047203A - 0x00472093 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047203A(void)
{
    uint32_t ebp;

loc_0047203A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(0x655E94);
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax++;
    MEM32(ebp + -20) = 0x471D77;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(0);
    MEM32(ebp + -24) = eax;
    eax = ebp + -24;
    MEM32(0) = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0047C150(); /* call 0x0047C150 */

loc_00472084: ;
    ecx = eax;
    eax = MEM32(ebp + -24);
    MEM32(0) = eax;
    eax = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00472094
 * Original: 0x00472094 - 0x004720B3 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472094(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00472094: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(0) = esp;
    MEM32(esp + 0xC) = ebp;
    ebp = esp + 0xC;
    PUSH32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004720B3
 * Original: 0x004720B3 - 0x004720EC (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004720B3(void)
{
    uint32_t ebp;

loc_004720B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x58636C;
    edi = ebp + -32;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); sub_0042DE55(); /* call 0x0042DE55 */

loc_004720E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004720EC
 * Original: 0x004720EC - 0x00472108 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004720EC(void)
{
    int _flags = 0; /* fallback flag var */

loc_004720EC: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_00472108(); return; } /* je: equal / zero */

loc_004720F4: ;
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00472108(); return; } /* je: equal / zero */

loc_004720FA: ;
    if (CMP_NE(LO8(ecx), 0x43)) goto loc_00472105; /* jne: not equal / not zero */

loc_004720FF: ;
    if (CMP_EQ(MEM8(eax + 1), 0)) { sub_00472108(); return; } /* je: equal / zero */

loc_00472105: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047210E
 * Original: 0x0047210E - 0x00472114 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047210E(void)
{

loc_0047210E: ;
    eax = MEM32(0x655AE8);
    esp += 4; return; /* ret */

}

/**
 * sub_00472114
 * Original: 0x00472114 - 0x00472132 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472114(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472114: ;
    eax = MEM32(esp + 4);
    ecx = eax + 1;
    if (CMP_A(ecx, 0x100)) { sub_00472132(); return; } /* ja: above (unsigned >) */

loc_00472123: ;
    ecx = MEM32(0x655AE8);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00472135
 * Original: 0x00472135 - 0x0047213B (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472135(void)
{

loc_00472135: ;
    eax = MEM32(0x75F9D4);
    esp += 4; return; /* ret */

}

/**
 * sub_0047213B
 * Original: 0x0047213B - 0x00472141 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047213B(void)
{

loc_0047213B: ;
    eax = 0x75F9BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00472141
 * Original: 0x00472141 - 0x004721AE (109 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472141(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00472141: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_004721AE(); return; } /* je: equal / zero */

loc_00472149: ;
    esi = eax + 8;
    if (CMP_EQ(MEM8(esi), 0)) { sub_004721AE(); return; } /* je: equal / zero */

loc_00472151: ;
    ecx = MEM32(edx + 4);
    if (CMP_EQ(eax, ecx)) goto loc_00472188; /* je: equal / zero */

loc_00472158: ;
    eax = ecx + 8;
    PUSH32(esp, ebx);

loc_0047215C: ;
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(eax))) goto loc_0047217E; /* jne: not equal / not zero */

loc_00472164: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0047217A; /* je: equal / zero */

loc_00472168: ;
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(eax + 1))) goto loc_0047217E; /* jne: not equal / not zero */

loc_00472172: ;
    esi++;
    esi++;
    eax++;
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0047215C; /* jne: not equal / not zero */

loc_0047217A: ;
    eax = 0; /* xor self */
    goto loc_00472183;

loc_0047217E: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00472183: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_004721AA; /* jne: not equal / not zero */

loc_00472188: ;
    if (TEST_Z(MEM8(edx), 2)) goto loc_00472192; /* je: equal / zero */

loc_0047218D: ;
    if (TEST_Z(MEM8(edi), 8)) goto loc_004721AA; /* je: equal / zero */

loc_00472192: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    if (TEST_Z(LO8(eax), 1)) goto loc_004721A1; /* je: equal / zero */

loc_0047219C: ;
    if (TEST_Z(MEM8(edi), 1)) goto loc_004721AA; /* je: equal / zero */

loc_004721A1: ;
    if (TEST_Z(LO8(eax), 2)) { sub_004721AE(); return; } /* je: equal / zero */

loc_004721A5: ;
    if (TEST_NZ(MEM8(edi), 2)) { sub_004721AE(); return; } /* jne: not equal / not zero */

loc_004721AA: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004721B3
 * Original: 0x004721B3 - 0x004721C0 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004721B3(void)
{
    int _flags = 0; /* fallback flag var */

loc_004721B3: ;
    eax = MEM32(eax);
    if (CMP_EQ(MEM32(eax), 0xE06D7363u)) { sub_004721C0(); return; } /* je: equal / zero */

loc_004721BD: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_004721D1
 * Original: 0x004721D1 - 0x00472262 (145 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004721D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004721D1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x586898);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004721DD: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebx + 8);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_004721EB: ;
    eax = eax + 0x80;
    MEM32(eax) = MEM32(eax) + 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = MEM32(ebp + 0x10);

loc_004721F9: ;
    if (CMP_EQ(esi, MEM32(ebp + 0x14))) { sub_00472262(); return; } /* je: equal / zero */

loc_004721FE: ;
    if (CMP_LE(esi, 0xFFFFFFFFu)) goto loc_00472208; /* jle: less or equal (signed <=) */

loc_00472203: ;
    if (CMP_L(esi, MEM32(edi + 4))) goto loc_0047220D; /* jl: less (signed <) */

loc_00472208: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_0047220D: ;
    eax = esi;
    eax = eax << 3;
    ecx = MEM32(edi + 8);
    ecx = ecx + eax;
    esi = MEM32(ecx);
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(MEM32(ecx + 4), 0)) goto loc_0047223E; /* je: equal / zero */

loc_00472229: ;
    MEM32(ebx + 8) = esi;
    PUSH32(esp, 0x103);
    PUSH32(esp, ebx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + eax + 4));
    PUSH32(esp, 0); sub_0047C150(); /* call 0x0047C150 */

loc_0047223E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_0047225D;

    eax = MEM32(ebp + -20);
    PUSH32(esp, 0); sub_004721B3(); /* call 0x004721B3 */

loc_0047224C: ;
    esp += 4; return; /* ret */

loc_0047225D: ;
    MEM32(ebp + -28) = esi;
    goto loc_004721F9;

}

/**
 * sub_00472284
 * Original: 0x00472284 - 0x0047229F (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472284(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472284: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472289: ;
    if (CMP_LE(MEM32(eax + 0x80), 0)) goto loc_0047229E; /* jle: less or equal (signed <=) */

loc_00472292: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472297: ;
    eax = eax + 0x80;
    MEM32(eax) = MEM32(eax) - 1;

loc_0047229E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047229F
 * Original: 0x0047229F - 0x004722D3 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047229F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047229F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x5868B0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004722AB: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_004722CD; /* je: equal / zero */

loc_004722B2: ;
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004722CD; /* je: equal / zero */

loc_004722BC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0); sub_00471CE8(); /* call 0x00471CE8 */

loc_004722C9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_004722CD: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004722D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004722E4
 * Original: 0x004722E4 - 0x00472303 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004722E4(void)
{
    int _flags = 0; /* fallback flag var */

loc_004722E4: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx);
    eax = eax + esi;
    if (CMP_L(MEM32(ecx + 4), 0)) goto loc_00472301; /* jl: less (signed <) */

loc_004722F1: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    esi = MEM32(edx + esi);
    ecx = MEM32(esi + ecx);
    ecx = ecx + edx;
    eax = eax + ecx;

loc_00472301: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00472303
 * Original: 0x00472303 - 0x00472388 (133 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472303(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00472303: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5868C0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047230F: ;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    eax = MEM32(edi + -4);
    MEM32(ebp + -56) = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471FA5(); /* call 0x00471FA5 */

loc_00472330: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -60) = eax;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0047233A: ;
    eax = MEM32(eax + 0x78);
    MEM32(ebp + -64) = eax;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472345: ;
    eax = MEM32(eax + 0x7C);
    MEM32(ebp + -68) = eax;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472350: ;
    MEM32(eax + 0x78) = esi;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472358: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x7C) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -4) = 1;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047203A(); /* call 0x0047203A */

loc_00472379: ;
    esp = esp + 0x14;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    g_seh_ebp = ebp; sub_0047242B(); return; /* tail jmp 0x0047242B */

}

/**
 * sub_00472446
 * Original: 0x00472446 - 0x004724AA (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472446(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00472446: ;
    eax = MEM32(ebp + -56);
    MEM32(edi + -4) = eax;
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0); sub_00471FEE(); /* call 0x00471FEE */

loc_00472454: ;
    POP32(esp, ecx);
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0047245A: ;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x78) = ecx;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00472465: ;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x7C) = ecx;
    if (CMP_NE(MEM32(esi), 0xE06D7363u)) goto loc_004724A9; /* jne: not equal / not zero */

loc_00472473: ;
    if (CMP_NE(MEM32(esi + 0x10), 3)) goto loc_004724A9; /* jne: not equal / not zero */

loc_00472479: ;
    if (CMP_NE(MEM32(esi + 0x14), 0x19930520)) goto loc_004724A9; /* jne: not equal / not zero */

loc_00472482: ;
    if (CMP_NE(MEM32(ebp + -72), 0)) goto loc_004724A9; /* jne: not equal / not zero */

loc_00472488: ;
    if (CMP_EQ(MEM32(ebp + -32), 0)) goto loc_004724A9; /* je: equal / zero */

loc_0047248E: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0); sub_00471FCD(); /* call 0x00471FCD */

loc_00472496: ;
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_004724A9; /* je: equal / zero */

loc_0047249B: ;
    PUSH32(esp, 0); sub_00470C22(); /* call 0x00470C22 */

loc_004724A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047229F(); /* call 0x0047229F */

loc_004724A7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004724A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004724AA
 * Original: 0x004724AA - 0x0047261A (368 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004724AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004724AA: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x5868D8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004724B6: ;
    esi = ecx;
    eax = MEM32(ebp + 0xC);
    edi = edx;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00472614; /* je: equal / zero */

loc_004724CB: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_00472614; /* je: equal / zero */

loc_004724D5: ;
    ecx = MEM32(eax + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_004724E6; /* jne: not equal / not zero */

loc_004724DC: ;
    if (TEST_Z(MEM8(eax + 3), 0x80)) goto loc_00472614; /* je: equal / zero */

loc_004724E6: ;
    eax = MEM32(eax);
    if (TEST_S(eax, eax)) goto loc_004724F0; /* js: sign (negative) */

loc_004724EC: ;
    edi = ecx + edi + 0xC;

loc_004724F0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 0x18));
    if (TEST_Z(LO8(eax), 8)) goto loc_00472532; /* je: equal / zero */

loc_004724FD: ;
    PUSH32(esp, 0); sub_0047C200(); /* call 0x0047C200 */

loc_00472502: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_0047250C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047C21B(); /* call 0x0047C21B */

loc_00472514: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_0047251E: ;
    eax = MEM32(ebx + 0x18);
    MEM32(edi) = eax;

loc_00472523: ;
    ecx = esi + 8;
    PUSH32(esp, 0); sub_004722E4(); /* call 0x004722E4 */

loc_0047252B: ;
    MEM32(edi) = eax;
    goto loc_00472610;

loc_00472532: ;
    if (TEST_Z(MEM8(esi), 1)) goto loc_0047257D; /* je: equal / zero */

loc_00472537: ;
    PUSH32(esp, 0); sub_0047C200(); /* call 0x0047C200 */

loc_0047253C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_00472546: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047C21B(); /* call 0x0047C21B */

loc_0047254E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_00472558: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(ebx + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00472564: ;
    esp = esp + 0xC;
    if (CMP_NE(MEM32(esi + 0x14), 4)) goto loc_00472610; /* jne: not equal / not zero */

loc_00472571: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00472610; /* je: equal / zero */

loc_0047257B: ;
    goto loc_00472523;

loc_0047257D: ;
    if (CMP_NE(MEM32(esi + 0x18), 0)) goto loc_004725B6; /* jne: not equal / not zero */

loc_00472583: ;
    PUSH32(esp, 0); sub_0047C200(); /* call 0x0047C200 */

loc_00472588: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_0047258E: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047C21B(); /* call 0x0047C21B */

loc_00472596: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_0047259C: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = esi + 8;
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, 0); sub_004722E4(); /* call 0x004722E4 */

loc_004725AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004725B1: ;
    esp = esp + 0xC;
    goto loc_00472610;

loc_004725B6: ;
    PUSH32(esp, 0); sub_0047C200(); /* call 0x0047C200 */

loc_004725BB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_004725C1: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047C21B(); /* call 0x0047C21B */

loc_004725C9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_004725CF: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0); sub_0047C236(); /* call 0x0047C236 */

loc_004725D7: ;
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047260B; /* je: equal / zero */

loc_004725DC: ;
    eax = MEM32(ebx + 0x18);
    ecx = esi + 8;
    if (TEST_Z(MEM8(esi), 4)) goto loc_004725FA; /* je: equal / zero */

loc_004725E7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004722E4(); /* call 0x004722E4 */

loc_004725EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00471CE8(); /* call 0x00471CE8 */

loc_004725F8: ;
    goto loc_00472610;

loc_004725FA: ;
    PUSH32(esp, 0); sub_004722E4(); /* call 0x004722E4 */

loc_004725FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00471CE8(); /* call 0x00471CE8 */

loc_00472609: ;
    goto loc_00472610;

loc_0047260B: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_00472610: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_00472614: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00472619: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00472626
 * Original: 0x00472626 - 0x00472646 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472626(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00472626: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (TEST_Z(ecx, ecx)) goto loc_0047263A; /* je: equal / zero */

loc_0047262D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    edx = esi;
    PUSH32(esp, 0); sub_004724AA(); /* call 0x004724AA */

loc_00472638: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047263A: ;
    (void)0; /* cmp MEM32(ebp + 0x1C), 0 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) { sub_00472646(); return; } /* jne: not equal / not zero */

loc_00472643: ;
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00472649(); return; /* tail jmp 0x00472649 */

}

/**
 * sub_0047268D
 * Original: 0x0047268D - 0x0047274B (190 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047268D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047268D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(esi), 0x80000003u)) goto loc_00472748; /* je: equal / zero */

loc_004726A2: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_004726A7: ;
    if (CMP_EQ(MEM32(eax + 0x70), 0)) goto loc_004726CC; /* je: equal / zero */

loc_004726AD: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471DB2(); /* call 0x00471DB2 */

loc_004726C5: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_00472748; /* jne: not equal / not zero */

loc_004726CC: ;
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_00471F2B(); /* call 0x00471F2B */

loc_004726E4: ;
    edi = eax;
    eax = MEM32(ebp + -4);
    esp = esp + 0x14;
    if (CMP_AE(eax, MEM32(ebp + -8))) goto loc_00472747; /* jae: above or equal (unsigned >=) */

loc_004726F1: ;
    PUSH32(esp, ebx);

loc_004726F2: ;
    if (CMP_L(esi, MEM32(edi))) goto loc_00472738; /* jl: less (signed <) */

loc_004726F6: ;
    if (CMP_G(esi, MEM32(edi + 4))) goto loc_00472738; /* jg: greater (signed >) */

loc_004726FB: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x10);
    eax = eax << 4;
    eax = eax + ecx;
    ecx = MEM32(eax + -12);
    if (TEST_Z(ecx, ecx)) goto loc_00472713; /* je: equal / zero */

loc_0047270D: ;
    if (CMP_NE(MEM8(ecx + 8), 0)) goto loc_00472738; /* jne: not equal / not zero */

loc_00472713: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = eax + -16;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = 0; /* xor self */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00472626(); /* call 0x00472626 */

loc_00472732: ;
    esi = MEM32(ebp + 0x1C);
    esp = esp + 0x18;

loc_00472738: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    edi = edi + 0x14;
    if (CMP_B(eax, MEM32(ebp + -8))) goto loc_004726F2; /* jb: below (unsigned <) */

loc_00472746: ;
    POP32(esp, ebx);

loc_00472747: ;
    POP32(esp, edi);

loc_00472748: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047274B
 * Original: 0x0047274B - 0x00472925 (474 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047274B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047274B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    MEM32(ebp + -28) = eax;
    if (CMP_L(eax, 0xFFFFFFFFu)) goto loc_0047276B; /* jl: less (signed <) */

loc_00472763: ;
    ecx = MEM32(ebp + 0x18);
    if (CMP_L(eax, MEM32(ecx + 4))) goto loc_00472770; /* jl: less (signed <) */

loc_0047276B: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_00472770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0xE06D7363u;
    if (CMP_NE(MEM32(esi), edi)) goto loc_004728FF; /* jne: not equal / not zero */

loc_00472783: ;
    (void)0; /* cmp MEM32(esi + 0x10), 3 - flags set for next jcc */
    ebx = 0x19930520;
    if (CMP_NE(MEM32(esi + 0x10), 3)) goto loc_004727F9; /* jne: not equal / not zero */

loc_0047278E: ;
    if (CMP_NE(MEM32(esi + 0x14), ebx)) goto loc_004727F9; /* jne: not equal / not zero */

loc_00472793: ;
    if (CMP_NE(MEM32(esi + 0x1C), 0)) goto loc_004727F9; /* jne: not equal / not zero */

loc_00472799: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0047279E: ;
    if (CMP_EQ(MEM32(eax + 0x78), 0)) goto loc_004728F7; /* je: equal / zero */

loc_004727A8: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_004727AD: ;
    esi = MEM32(eax + 0x78);
    MEM32(ebp + 8) = esi;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_004727B8: ;
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(ebp + 0x10) = eax;
    MEM8(ebp + -1) = 1;
    PUSH32(esp, 0); sub_0047C200(); /* call 0x0047C200 */

loc_004727CA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004727D5; /* jne: not equal / not zero */

loc_004727D0: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_004727D5: ;
    if (CMP_NE(MEM32(esi), edi)) goto loc_004728FC; /* jne: not equal / not zero */

loc_004727DD: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM32(eax + 0x10), 3)) goto loc_004727F6; /* jne: not equal / not zero */

loc_004727E6: ;
    if (CMP_NE(MEM32(eax + 0x14), ebx)) goto loc_004727F6; /* jne: not equal / not zero */

loc_004727EB: ;
    if (CMP_NE(MEM32(eax + 0x1C), 0)) goto loc_004727F6; /* jne: not equal / not zero */

loc_004727F1: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_004727F6: ;
    esi = MEM32(ebp + 8);

loc_004727F9: ;
    if (CMP_NE(MEM32(esi), edi)) goto loc_004728FF; /* jne: not equal / not zero */

loc_00472801: ;
    if (CMP_NE(MEM32(esi + 0x10), 3)) goto loc_004728FF; /* jne: not equal / not zero */

loc_0047280B: ;
    if (CMP_NE(MEM32(esi + 0x14), ebx)) goto loc_004728FF; /* jne: not equal / not zero */

loc_00472814: ;
    edi = MEM32(ebp + -28);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_00471F2B(); /* call 0x00471F2B */

loc_0047282B: ;
    esp = esp + 0x14;
    ebx = eax;
    goto loc_004728D8;

loc_00472835: ;
    if (CMP_G(MEM32(ebx), edi)) goto loc_004728D2; /* jg: greater (signed >) */

loc_0047283D: ;
    if (CMP_G(edi, MEM32(ebx + 4))) goto loc_004728D2; /* jg: greater (signed >) */

loc_00472846: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebx + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_004728CF; /* jle: less or equal (signed <=) */

loc_00472856: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC);
    ecx = eax + 4;
    eax = MEM32(eax);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = eax;

loc_00472867: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -44);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00472898; /* jle: less or equal (signed <=) */

loc_00472877: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, MEM32(esi + 0x1C));
    edx = MEM32(eax);
    edi = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_00472141(); /* call 0x00472141 */

loc_00472887: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004728A7; /* jne: not equal / not zero */

loc_0047288C: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 4;
    if (CMP_G(MEM32(ebp + -20), eax)) goto loc_00472877; /* jg: greater (signed >) */

loc_00472898: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x10;
    if (CMP_G(MEM32(ebp + -24), 0)) goto loc_00472867; /* jg: greater (signed >) */

loc_004728A5: ;
    goto loc_004728CF;

loc_004728A7: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = ebx;
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = edx;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00472626(); /* call 0x00472626 */

loc_004728C6: ;
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -32);
    esp = esp + 0x18;

loc_004728CF: ;
    edi = MEM32(ebp + -28);

loc_004728D2: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    ebx = ebx + 0x14;

loc_004728D8: ;
    eax = MEM32(ebp + -12);
    (void)0; /* cmp eax, MEM32(ebp + -36) - flags set for next jcc */
    MEM32(ebp + -32) = ebx;
    if (CMP_B(eax, MEM32(ebp + -36))) goto loc_00472835; /* jb: below (unsigned <) */

loc_004728E7: ;
    if (CMP_EQ(MEM8(ebp + 0x1C), 0)) goto loc_004728F7; /* je: equal / zero */

loc_004728ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047229F(); /* call 0x0047229F */

loc_004728F5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004728F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004728FC: ;
    esi = MEM32(ebp + 8);

loc_004728FF: ;
    if (CMP_NE(MEM8(ebp + 0x1C), 0)) { sub_00472925(); return; } /* jne: not equal / not zero */

loc_00472905: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047268D(); /* call 0x0047268D */

loc_00472920: ;
    esp = esp + 0x20;
    goto loc_004728F7;

}

/**
 * sub_0047292A
 * Original: 0x0047292A - 0x004729CC (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047292A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047292A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    eax = eax & 0x1FFFFFFF;
    edi = 0x19930520;
    if (CMP_EQ(eax, edi)) goto loc_00472947; /* je: equal / zero */

loc_00472942: ;
    PUSH32(esp, 0); sub_0047C118(); /* call 0x0047C118 */

loc_00472947: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM8(eax + 4), 0x66)) goto loc_0047296F; /* je: equal / zero */

loc_00472950: ;
    if (CMP_EQ(MEM32(esi + 4), 0)) goto loc_004729C5; /* je: equal / zero */

loc_00472956: ;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004729C5; /* jne: not equal / not zero */

loc_0047295C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004721D1(); /* call 0x004721D1 */

loc_0047296A: ;
    esp = esp + 0x10;
    goto loc_004729C5;

loc_0047296F: ;
    if (CMP_EQ(MEM32(esi + 0xC), 0)) goto loc_004729C5; /* je: equal / zero */

loc_00472975: ;
    if (CMP_NE(MEM32(eax), 0xE06D7363u)) goto loc_004729A9; /* jne: not equal / not zero */

loc_0047297D: ;
    if (CMP_BE(MEM32(eax + 0x14), edi)) goto loc_004729A9; /* jbe: below or equal (unsigned <=) */

loc_00472982: ;
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 8);
    if (TEST_Z(ecx, ecx)) goto loc_004729A9; /* je: equal / zero */

loc_0047298C: ;
    edx = ZX8(MEM8(ebp + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004729A4: ;
    esp = esp + 0x20;
    goto loc_004729C8;

loc_004729A9: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047274B(); /* call 0x0047274B */

loc_004729C2: ;
    esp = esp + 0x20;

loc_004729C5: ;
    eax = 0; /* xor self */
    eax++;

loc_004729C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004729E4
 * Original: 0x004729E4 - 0x00472A00 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004729E4(void)
{

loc_004729E4: ;
    PUSH32(esp, 0); sub_0047C279(); /* call 0x0047C279 */

loc_004729E9: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0047C24D(); /* call 0x0047C24D */

loc_004729F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655B00), _icall_esp); /* indirect call */
    }

loc_004729FD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00472A00
 * Original: 0x00472A00 - 0x00472A3D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = 0x75F7E0;

loc_00472A09: ;
    if (CMP_NE(MEM32(esi * 8 + 0x655B0C), 1)) goto loc_00472A31; /* jne: not equal / not zero */

loc_00472A13: ;
    eax = esi * 8 + 0x655B08;
    MEM32(eax) = edi;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(eax));
    edi = edi + 0x1C;
    PUSH32(esp, 0); sub_0047C2AB(); /* call 0x0047C2AB */

loc_00472A2B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00472A3D; /* je: equal / zero */

loc_00472A31: ;
    esi++;
    if (CMP_L(esi, 0x24)) goto loc_00472A09; /* jl: less (signed <) */

loc_00472A37: ;
    eax = 0; /* xor self */
    eax++;

loc_00472A3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00472A3D: ;
    MEM32(esi * 8 + 0x655B08) = 0;
    eax = 0; /* xor self */
    goto loc_00472A3A;

}

/**
 * sub_00472A49
 * Original: 0x00472A49 - 0x00472A72 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472A49(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472A49: ;
    PUSH32(esp, esi);
    esi = 0x655B08;

loc_00472A4F: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00472A65; /* je: equal / zero */

loc_00472A55: ;
    if (CMP_EQ(MEM32(esi + 4), 1)) goto loc_00472A65; /* je: equal / zero */

loc_00472A5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00472A61: ;
    MEM32(esi) = MEM32(esi) & 0;
    POP32(esp, ecx);

loc_00472A65: ;
    esi = esi + 8;
    if (CMP_L(esi, 0x655C28)) goto loc_00472A4F; /* jl: less (signed <) */

loc_00472A70: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00472A72
 * Original: 0x00472A72 - 0x00472A84 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472A72(void)
{

loc_00472A72: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax * 8 + 0x655B08));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00472A83: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00472A84
 * Original: 0x00472A84 - 0x00472B1B (151 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472A84(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00472A84: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x5868E8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00472A90: ;
    esi = MEM32(ebp + 8);
    esi = esi * 8 + 0x655B08;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(esi), ebx)) goto loc_00472B12; /* jne: not equal / not zero */

loc_00472AA0: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_00472AA7: ;
    POP32(esp, ecx);
    edi = eax;
    if (CMP_NE(edi, ebx)) goto loc_00472ABB; /* jne: not equal / not zero */

loc_00472AAE: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_00472AB3: ;
    MEM32(eax) = 0xC;
    goto loc_00472AFA;

loc_00472ABB: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_00472AC2: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(MEM32(esi), ebx)) goto loc_00472B02; /* jne: not equal / not zero */

loc_00472ACA: ;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047C2AB(); /* call 0x0047C2AB */

loc_00472AD5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00472AFE; /* jne: not equal / not zero */

loc_00472ADB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00472AE1: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_00472AE6: ;
    MEM32(eax) = 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470BBA(); /* call 0x00470BBA */

loc_00472AF7: ;
    esp = esp + 0xC;

loc_00472AFA: ;
    eax = 0; /* xor self */
    goto loc_00472B15;

loc_00472AFE: ;
    MEM32(esi) = edi;
    goto loc_00472B09;

loc_00472B02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00472B08: ;
    POP32(esp, ecx);

loc_00472B09: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00472B1B(); /* call 0x00472B1B */

loc_00472B12: ;
    eax = 0; /* xor self */
    eax++;

loc_00472B15: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00472B1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00472B1B
 * Original: 0x00472B1B - 0x00472B24 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472B1B(void)
{

loc_00472B1B: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_00472B22: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00472B24
 * Original: 0x00472B24 - 0x00472B52 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472B24(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472B24: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax * 8 + 0x655B08;
    if (CMP_NE(MEM32(esi), 0)) goto loc_00472B48; /* jne: not equal / not zero */

loc_00472B35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472A84(); /* call 0x00472A84 */

loc_00472B3B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00472B48; /* jne: not equal / not zero */

loc_00472B40: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_004729E4(); /* call 0x004729E4 */

loc_00472B47: ;
    POP32(esp, ecx);

loc_00472B48: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_00472B50: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00472B52
 * Original: 0x00472B52 - 0x00472C5E (268 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472B52(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00472B52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), 0x82 - flags set for next jcc */
    ebx = MEM32(esi + 0x10);
    if (TEST_Z(LO8(eax), 0x82)) { sub_00472C5E(); return; } /* je: equal / zero */

loc_00472B68: ;
    if (TEST_NZ(LO8(eax), 0x40)) { sub_00472C5E(); return; } /* jne: not equal / not zero */

loc_00472B70: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00472B8B; /* je: equal / zero */

loc_00472B74: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    if (TEST_Z(LO8(eax), 0x10)) { sub_00472C5E(); return; } /* je: equal / zero */

loc_00472B80: ;
    ecx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;

loc_00472B8B: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 2;
    (void)0; /* test LO16(eax), 0x10C - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(LO16(eax), 0x10C)) goto loc_00472BC7; /* jne: not equal / not zero */

loc_00472BA5: ;
    if (CMP_EQ(esi, 0x655698)) goto loc_00472BB5; /* je: equal / zero */

loc_00472BAD: ;
    if (CMP_NE(esi, 0x6556B8)) goto loc_00472BC0; /* jne: not equal / not zero */

loc_00472BB5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C30C(); /* call 0x0047C30C */

loc_00472BBB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00472BC7; /* jne: not equal / not zero */

loc_00472BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004796E1(); /* call 0x004796E1 */

loc_00472BC6: ;
    POP32(esp, ecx);

loc_00472BC7: ;
    (void)0; /* test MEM16(esi + 0xC), 0x108 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM16(esi + 0xC), 0x108)) goto loc_00472C34; /* je: equal / zero */

loc_00472BD0: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    ecx = MEM32(esi + 0x18);
    edi = edi - eax;
    ecx--;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(edi & edi, 0)) goto loc_00472BF4; /* jle: less or equal (signed <=) */

loc_00472BE7: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479636(); /* call 0x00479636 */

loc_00472BEF: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_00472C27;

loc_00472BF4: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00472C12; /* je: equal / zero */

loc_00472BF9: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x881360);
    eax = ebx;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_00472C17;

loc_00472C12: ;
    eax = 0x655E00;

loc_00472C17: ;
    if (TEST_Z(MEM8(eax + 4), 0x20)) goto loc_00472C2A; /* je: equal / zero */

loc_00472C1D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479400(); /* call 0x00479400 */

loc_00472C27: ;
    esp = esp + 0xC;

loc_00472C2A: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax) = LO8(ecx);
    goto loc_00472C48;

loc_00472C34: ;
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479636(); /* call 0x00479636 */

loc_00472C42: ;
    esp = esp + 0xC;
    MEM32(ebp + 0xC) = eax;

loc_00472C48: ;
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_00472C54; /* je: equal / zero */

loc_00472C4E: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    g_seh_ebp = ebp; sub_00472C64(); return; /* tail jmp 0x00472C64 */

loc_00472C54: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    g_seh_ebp = ebp; sub_00472C67(); return; /* tail jmp 0x00472C67 */

}

/**
 * sub_00472C6B
 * Original: 0x00472C6B - 0x00472C9B (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472C6B(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472C6B: ;
    if (TEST_Z(MEM8(ecx + 0xC), 0x40)) goto loc_00472C77; /* je: equal / zero */

loc_00472C71: ;
    if (CMP_EQ(MEM32(ecx + 8), 0)) { sub_00472C9B(); return; } /* je: equal / zero */

loc_00472C77: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    if (((int32_t)MEM32(ecx + 4) < 0)) goto loc_00472C87; /* js: sign (negative) */

loc_00472C7C: ;
    edx = MEM32(ecx);
    MEM8(edx) = LO8(eax);
    MEM32(ecx) = MEM32(ecx) + 1;
    eax = ZX8(LO8(eax));
    goto loc_00472C93;

loc_00472C87: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472B52(); /* call 0x00472B52 */

loc_00472C91: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00472C93: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00472C9B(); return; } /* jne: not equal / not zero */

loc_00472C98: ;
    MEM32(esi) = MEM32(esi) | eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00472C9E
 * Original: 0x00472C9E - 0x00472CA6 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472C9E(void)
{
    uint32_t ebp;

loc_00472C9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = eax;
    g_seh_ebp = ebp; sub_00472CB9(); return; /* tail jmp 0x00472CB9 */

}

/**
 * sub_00472CC2
 * Original: 0x00472CC2 - 0x00472CF9 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472CC2(void)
{
    int _flags = 0; /* fallback flag var */

loc_00472CC2: ;
    (void)0; /* test MEM8(edi + 0xC), 0x40 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(MEM8(edi + 0xC), 0x40)) goto loc_00472CEF; /* je: equal / zero */

loc_00472CCE: ;
    if (CMP_NE(MEM32(edi + 8), 0)) goto loc_00472CEF; /* jne: not equal / not zero */

loc_00472CD4: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) + eax;
    goto loc_00472CF6;

loc_00472CDC: ;
    SET_LO8(eax, MEM8(ebx));
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    ecx = edi;
    PUSH32(esp, 0); sub_00472C6B(); /* call 0x00472C6B */

loc_00472CE9: ;
    ebx++;
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_00472CF6; /* je: equal / zero */

loc_00472CEF: ;
    if (CMP_G(MEM32(esp + 0xC), 0)) goto loc_00472CDC; /* jg: greater (signed >) */

loc_00472CF6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00472CF9
 * Original: 0x00472CF9 - 0x00473460 (1895 bytes, 607 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472CF9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00472CF9: ;
    conker_trace_point(0x472CF901);
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x250;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -40) = ecx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0047345A; /* je: equal / zero */

loc_00472D1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_00472D24;

loc_00472D21: ;
    ecx = MEM32(ebp + -52);

loc_00472D24: ;
    edi++;
    (void)0; /* cmp MEM32(ebp + -20), 0 - flags set for next jcc */
    MEM32(ebp + 0xC) = edi;
    if (CMP_L(MEM32(ebp + -20), 0)) goto loc_00473458; /* jl: less (signed <) */

loc_00472D32: ;
    if (CMP_L(LO8(ebx), 0x20)) goto loc_00472D4B; /* jl: less (signed <) */

loc_00472D37: ;
    if (CMP_G(LO8(ebx), 0x78)) goto loc_00472D4B; /* jg: greater (signed >) */

loc_00472D3C: ;
    eax = SX8(LO8(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x5868D8);
    eax = eax & 0xF;
    goto loc_00472D4D;

loc_00472D4B: ;
    eax = 0; /* xor self */

loc_00472D4D: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x5868F8);
    PUSH32(esp, 7);
    eax = (uint32_t)((int32_t)eax >> 4);
    POP32(esp, ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -52) = eax;
    if (CMP_A(eax, ecx)) goto loc_0047344B; /* ja: above (unsigned >) */

loc_00472D66: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x473460); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00472D6Du) goto loc_00472D6D;
    if (_jt == 0x00472D8Au) goto loc_00472D8A;
    if (_jt == 0x00472DD6u) goto loc_00472DD6;
    if (_jt == 0x00472E11u) goto loc_00472E11;
    if (_jt == 0x00472E1Au) goto loc_00472E1A;
    if (_jt == 0x00472E52u) goto loc_00472E52;
    if (_jt == 0x00472EEBu) goto loc_00472EEB;
    if (_jt == 0x00472F24u) goto loc_00472F24;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00472D6D: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -36) = eax;
    goto loc_0047344B;

loc_00472D8A: ;
    eax = SX8(LO8(ebx));
    eax = eax - 0x20;
    if ((eax == 0)) goto loc_00472DCD; /* je: equal / zero */

loc_00472D92: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00472DC4; /* je: equal / zero */

loc_00472D97: ;
    eax = eax - 8;
    if ((eax == 0)) goto loc_00472DBB; /* je: equal / zero */

loc_00472D9C: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_00472DB2; /* je: equal / zero */

loc_00472DA0: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0047344B; /* jne: not equal / not zero */

loc_00472DA9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    goto loc_0047344B;

loc_00472DB2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    goto loc_0047344B;

loc_00472DBB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    goto loc_0047344B;

loc_00472DC4: ;
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    goto loc_0047344B;

loc_00472DCD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    goto loc_0047344B;

loc_00472DD6: ;
    if (CMP_NE(LO8(ebx), 0x2A)) goto loc_00472DFC; /* jne: not equal / not zero */

loc_00472DDB: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0047344B; /* jge: greater or equal (signed >=) */

loc_00472DF0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    MEM32(ebp + -32) = (uint32_t)(-(int32_t)MEM32(ebp + -32));
    goto loc_0047344B;

loc_00472DFC: ;
    eax = MEM32(ebp + -32);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_0047344B;

loc_00472E11: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    goto loc_0047344B;

loc_00472E1A: ;
    if (CMP_NE(LO8(ebx), 0x2A)) goto loc_00472E3D; /* jne: not equal / not zero */

loc_00472E1F: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0047344B; /* jge: greater or equal (signed >=) */

loc_00472E34: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    goto loc_0047344B;

loc_00472E3D: ;
    eax = MEM32(ebp + -8);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_0047344B;

loc_00472E52: ;
    if (CMP_EQ(LO8(ebx), 0x49)) goto loc_00472E85; /* je: equal / zero */

loc_00472E57: ;
    if (CMP_EQ(LO8(ebx), 0x68)) goto loc_00472E7C; /* je: equal / zero */

loc_00472E5C: ;
    if (CMP_EQ(LO8(ebx), 0x6C)) goto loc_00472E73; /* je: equal / zero */

loc_00472E61: ;
    if (CMP_NE(LO8(ebx), 0x77)) goto loc_0047344B; /* jne: not equal / not zero */

loc_00472E6A: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    goto loc_0047344B;

loc_00472E73: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    goto loc_0047344B;

loc_00472E7C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x20;
    goto loc_0047344B;

loc_00472E85: ;
    SET_LO8(eax, MEM8(edi));
    if (CMP_NE(LO8(eax), 0x36)) goto loc_00472E9F; /* jne: not equal / not zero */

loc_00472E8B: ;
    if (CMP_NE(MEM8(edi + 1), 0x34)) goto loc_00472E9F; /* jne: not equal / not zero */

loc_00472E91: ;
    edi++;
    edi++;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    MEM32(ebp + 0xC) = edi;
    goto loc_0047344B;

loc_00472E9F: ;
    if (CMP_NE(LO8(eax), 0x33)) goto loc_00472EB7; /* jne: not equal / not zero */

loc_00472EA3: ;
    if (CMP_NE(MEM8(edi + 1), 0x32)) goto loc_00472EB7; /* jne: not equal / not zero */

loc_00472EA9: ;
    edi++;
    edi++;
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    MEM32(ebp + 0xC) = edi;
    goto loc_0047344B;

loc_00472EB7: ;
    if (CMP_EQ(LO8(eax), 0x64)) goto loc_0047344B; /* je: equal / zero */

loc_00472EBF: ;
    if (CMP_EQ(LO8(eax), 0x69)) goto loc_0047344B; /* je: equal / zero */

loc_00472EC7: ;
    if (CMP_EQ(LO8(eax), 0x6F)) goto loc_0047344B; /* je: equal / zero */

loc_00472ECF: ;
    if (CMP_EQ(LO8(eax), 0x75)) goto loc_0047344B; /* je: equal / zero */

loc_00472ED7: ;
    if (CMP_EQ(LO8(eax), 0x78)) goto loc_0047344B; /* je: equal / zero */

loc_00472EDF: ;
    if (CMP_EQ(LO8(eax), 0x58)) goto loc_0047344B; /* je: equal / zero */

loc_00472EE7: ;
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;

loc_00472EEB: ;
    ecx = MEM32(0x655AE8);
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    eax = ZX8(LO8(ebx));
    if (TEST_Z(MEM8(ecx + eax * 2 + 1), 0x80)) goto loc_00472F12; /* je: equal / zero */

loc_00472EFF: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_00472C6B(); /* call 0x00472C6B */

loc_00472F0C: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    MEM32(ebp + 0xC) = edi;

loc_00472F12: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_00472C6B(); /* call 0x00472C6B */

loc_00472F1F: ;
    goto loc_0047344B;

loc_00472F24: ;
    eax = SX8(LO8(ebx));
    if (CMP_G(eax, 0x67)) goto loc_00473181; /* jg: greater (signed >) */

loc_00472F30: ;
    if (CMP_GE(eax, 0x65)) goto loc_00472FB4; /* jge: greater or equal (signed >=) */

loc_00472F35: ;
    if (CMP_G(eax, 0x58)) goto loc_00473015; /* jg: greater (signed >) */

loc_00472F3E: ;
    if (CMP_EQ(eax, 0x58)) goto loc_00473201; /* je: equal / zero */

loc_00472F44: ;
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_00472FD7; /* je: equal / zero */

loc_00472F4D: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_00472FAA; /* je: equal / zero */

loc_00472F51: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_00472FAA; /* je: equal / zero */

loc_00472F55: ;
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00473349; /* jne: not equal / not zero */

loc_00472F5E: ;
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_00472F6A; /* jne: not equal / not zero */

loc_00472F66: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;

loc_00472F6A: ;
    ecx = MEM32(ebp + -8);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00472F77; /* jne: not equal / not zero */

loc_00472F72: ;
    ecx = 0x7FFFFFFF;

loc_00472F77: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test MEM16(ebp + -4), 0x810 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(MEM16(ebp + -4), 0x810)) goto loc_004731D7; /* je: equal / zero */

loc_00472F90: ;
    if (TEST_NZ(eax, eax)) goto loc_00472F9B; /* jne: not equal / not zero */

loc_00472F94: ;
    MEM32(ebp + -12) = 0x58695C;

loc_00472F9B: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -36) = 1;
    goto loc_004731C9;

loc_00472FAA: ;
    MEM32(ebp + -56) = 1;
    SET_LO8(ebx, LO8(ebx) + 0x20);

loc_00472FB4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    edi = ebp + -592;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_004730C4; /* jge: greater or equal (signed >=) */

loc_00472FCB: ;
    MEM32(ebp + -8) = 6;
    goto loc_0047310B;

loc_00472FD7: ;
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_00472FE3; /* jne: not equal / not zero */

loc_00472FDF: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;

loc_00472FE3: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test MEM16(ebp + -4), 0x810 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(MEM16(ebp + -4), 0x810)) goto loc_00473054; /* je: equal / zero */

loc_00472FF2: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    PUSH32(esp, eax);
    eax = ebp + -592;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C336(); /* call 0x0047C336 */

loc_00473003: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -16) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00473064; /* jge: greater or equal (signed >=) */

loc_0047300C: ;
    MEM32(ebp + -48) = 1;
    goto loc_00473064;

loc_00473015: ;
    eax = eax - 0x5A;
    if ((eax == 0)) goto loc_00473072; /* je: equal / zero */

loc_0047301A: ;
    eax = eax - 9;
    if ((eax == 0)) goto loc_00472FE3; /* je: equal / zero */

loc_0047301F: ;
    eax--;
    if ((eax != 0)) goto loc_00473349; /* jne: not equal / not zero */

loc_00473026: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;

loc_0047302A: ;
    MEM32(ebp + -16) = 0xA;

loc_00473031: ;
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    if (TEST_Z(esi, ebx)) goto loc_00473271; /* je: equal / zero */

loc_00473041: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    goto loc_00473299;

loc_00473054: ;
    SET_LO8(eax, MEM8(eax + -4));
    MEM8(ebp + -592) = LO8(eax);
    MEM32(ebp + -16) = 1;

loc_00473064: ;
    eax = ebp + -592;
    MEM32(ebp + -12) = eax;
    goto loc_00473349;

loc_00473072: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(eax, eax)) goto loc_004730AD; /* je: equal / zero */

loc_00473080: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004730AD; /* je: equal / zero */

loc_00473087: ;
    (void)0; /* test MEM8(ebp + -3), 8 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(MEM8(ebp + -3), 8)) goto loc_004730A4; /* je: equal / zero */

loc_00473093: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ebp + -36) = 1;
    goto loc_00473346;

loc_004730A4: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    goto loc_00473346;

loc_004730AD: ;
    eax = 0x586954;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_004730B8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004730B8; /* jne: not equal / not zero */

loc_004730BF: ;
    goto loc_0047317A;

loc_004730C4: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004730D4; /* jne: not equal / not zero */

loc_004730C6: ;
    if (CMP_NE(LO8(ebx), 0x67)) goto loc_0047310B; /* jne: not equal / not zero */

loc_004730CB: ;
    MEM32(ebp + -8) = 1;
    goto loc_0047310B;

loc_004730D4: ;
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_004730E1; /* jle: less or equal (signed <=) */

loc_004730DE: ;
    MEM32(ebp + -8) = eax;

loc_004730E1: ;
    esi = 0xA3;
    if (CMP_LE(MEM32(ebp + -8), esi)) goto loc_0047310B; /* jle: less or equal (signed <=) */

loc_004730EB: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x15D;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_004730F9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(ebp + -40) = eax;
    if (TEST_Z(eax, eax)) goto loc_00473108; /* je: equal / zero */

loc_00473101: ;
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_0047310B;

loc_00473108: ;
    MEM32(ebp + -8) = esi;

loc_0047310B: ;
    conker_trace_point(0x47310B01);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -56));
    eax = eax + 8;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -68) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -72) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D60), _icall_esp); /* indirect call */
    }
    conker_trace_point(0x47310B02);

loc_00473134: ;
    esi = MEM32(ebp + -4);
    esp = esp + 0x14;
    esi = esi & 0x80;
    if ((esi == 0)) goto loc_00473150; /* je: equal / zero */

loc_00473142: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00473150; /* jne: not equal / not zero */

loc_00473148: ;
    conker_trace_point(0x47314801);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D6C), _icall_esp); /* indirect call */
    }
    conker_trace_point(0x47314802);

loc_0047314F: ;
    POP32(esp, ecx);

loc_00473150: ;
    if (CMP_NE(LO8(ebx), 0x67)) goto loc_00473161; /* jne: not equal / not zero */

loc_00473155: ;
    if (TEST_NZ(esi, esi)) goto loc_00473161; /* jne: not equal / not zero */

loc_00473159: ;
    conker_trace_point(0x47315901);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D64), _icall_esp); /* indirect call */
    }
    conker_trace_point(0x47315902);

loc_00473160: ;
    POP32(esp, ecx);

loc_00473161: ;
    conker_trace_point(0x47316101);
    if (CMP_NE(MEM8(edi), 0x2D)) goto loc_0047316E; /* jne: not equal / not zero */

loc_00473166: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    edi++;
    MEM32(ebp + -12) = edi;

loc_0047316E: ;
    eax = edi;
    edx = eax + 1;

loc_00473173: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00473173; /* jne: not equal / not zero */

loc_0047317A: ;
    eax = eax - edx;
    goto loc_00473346;

loc_00473181: ;
    eax = eax - 0x69;
    if ((eax == 0)) goto loc_00473026; /* je: equal / zero */

loc_0047318A: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_00473247; /* je: equal / zero */

loc_00473193: ;
    eax--;
    if ((eax == 0)) goto loc_0047322D; /* je: equal / zero */

loc_0047319A: ;
    eax--;
    if ((eax == 0)) goto loc_004731FA; /* je: equal / zero */

loc_0047319D: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00472F6A; /* je: equal / zero */

loc_004731A6: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0047302A; /* je: equal / zero */

loc_004731AE: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_00473349; /* jne: not equal / not zero */

loc_004731B7: ;
    MEM32(ebp + -44) = 0x27;
    goto loc_00473204;

loc_004731C0: ;
    ecx--;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_004731CD; /* je: equal / zero */

loc_004731C7: ;
    eax++;
    eax++;

loc_004731C9: ;
    if (TEST_NZ(ecx, ecx)) goto loc_004731C0; /* jne: not equal / not zero */

loc_004731CD: ;
    eax = eax - MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    goto loc_00473346;

loc_004731D7: ;
    /* %s arguments must point into mapped user memory.  Synthetic thunk
     * addresses (0xFE...) are callable tokens, never readable strings. */
    if (TEST_NZ(eax, eax) && eax < 0x04000000u) goto loc_004731E2;

loc_004731DB: ;
    MEM32(ebp + -12) = 0x586954;

loc_004731E2: ;
    eax = MEM32(ebp + -12);
    goto loc_004731EE;

loc_004731E7: ;
    ecx--;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_004731F2; /* je: equal / zero */

loc_004731ED: ;
    eax++;

loc_004731EE: ;
    if (TEST_NZ(ecx, ecx)) goto loc_004731E7; /* jne: not equal / not zero */

loc_004731F2: ;
    eax = eax - MEM32(ebp + -12);
    goto loc_00473346;

loc_004731FA: ;
    MEM32(ebp + -8) = 8;

loc_00473201: ;
    MEM32(ebp + -44) = ecx;

loc_00473204: ;
    (void)0; /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_00473031; /* je: equal / zero */

loc_00473215: ;
    SET_LO8(eax, MEM8(ebp + -44));
    SET_LO8(eax, LO8(eax) + 0x51);
    MEM8(ebp + -24) = 0x30;
    MEM8(ebp + -23) = LO8(eax);
    MEM32(ebp + -28) = 2;
    goto loc_00473031;

loc_0047322D: ;
    (void)0; /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_00473031; /* je: equal / zero */

loc_0047323E: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    goto loc_00473031;

loc_00473247: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00473260; /* je: equal / zero */

loc_00473257: ;
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_00473265;

loc_00473260: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_00473265: ;
    MEM32(ebp + -48) = 1;
    goto loc_00473438;

loc_00473271: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test LO8(ebx), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_0047328F; /* je: equal / zero */

loc_0047327D: ;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00473289; /* je: equal / zero */

loc_00473282: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_00473286: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00473299;

loc_00473289: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_00473286;

loc_0047328F: ;
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    eax = MEM32(eax + -4);
    if (TEST_NZ(LO8(ebx), 0x40)) goto loc_00473286; /* jne: not equal / not zero */

loc_00473297: ;
    edx = 0; /* xor self */

loc_00473299: ;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_004732B3; /* je: equal / zero */

loc_0047329E: ;
    if (CMP_G(edx & edx, 0)) goto loc_004732B3; /* jg: greater (signed >) */

loc_004732A2: ;
    if (TEST_S(edx, edx)) goto loc_004732A8; /* jl: less (signed <) */

loc_004732A4: ;
    if (CMP_AE(eax & eax, 0)) goto loc_004732B3; /* jae: above or equal (unsigned >=) */

loc_004732A8: ;
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx + 0 + _cf; /* adc */
    edx = (uint32_t)(-(int32_t)edx);
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;

loc_004732B3: ;
    (void)0; /* test MEM32(ebp + -4), esi - flags set for next jcc */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(MEM32(ebp + -4), esi)) goto loc_004732BE; /* jne: not equal / not zero */

loc_004732BC: ;
    edi = 0; /* xor self */

loc_004732BE: ;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_004732CD; /* jge: greater or equal (signed >=) */

loc_004732C4: ;
    MEM32(ebp + -8) = 1;
    goto loc_004732DE;

loc_004732CD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_004732DE; /* jle: less or equal (signed <=) */

loc_004732DB: ;
    MEM32(ebp + -8) = eax;

loc_004732DE: ;
    eax = ebx;
    eax = eax | edi;
    if ((eax != 0)) goto loc_004732E8; /* jne: not equal / not zero */

loc_004732E4: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_004732E8: ;
    esi = ebp + -81;

loc_004732EB: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if (CMP_G(eax & eax, 0)) goto loc_004732FB; /* jg: greater (signed >) */

loc_004732F5: ;
    eax = ebx;
    eax = eax | edi;
    if ((eax == 0)) goto loc_0047331F; /* je: equal / zero */

loc_004732FB: ;
    conker_trace_point(0x4732FB01);
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C370(); /* call 0x0047C370 */

loc_00473308: ;
    ecx = ecx + 0x30;
    (void)0; /* cmp ecx, 0x39 - flags set for next jcc */
    MEM32(ebp + -60) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(ecx, 0x39)) goto loc_0047331A; /* jle: less or equal (signed <=) */

loc_00473317: ;
    ecx = ecx + MEM32(ebp + -44);

loc_0047331A: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    goto loc_004732EB;

loc_0047331F: ;
    eax = ebp + -81;
    eax = eax - esi;
    esi++;
    (void)0; /* test MEM8(ebp + -3), 2 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(MEM8(ebp + -3), 2)) goto loc_00473349; /* je: equal / zero */

loc_00473331: ;
    ecx = esi;
    if (CMP_NE(MEM8(ecx), 0x30)) goto loc_0047333C; /* jne: not equal / not zero */

loc_00473338: ;
    if (TEST_NZ(eax, eax)) goto loc_00473349; /* jne: not equal / not zero */

loc_0047333C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;

loc_00473346: ;
    MEM32(ebp + -16) = eax;

loc_00473349: ;
    if (CMP_NE(MEM32(ebp + -48), 0)) goto loc_00473438; /* jne: not equal / not zero */

loc_00473353: ;
    ebx = MEM32(ebp + -4);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00473381; /* je: equal / zero */

loc_0047335B: ;
    if (TEST_Z(HI8(ebx), 1)) goto loc_00473366; /* je: equal / zero */

loc_00473360: ;
    MEM8(ebp + -24) = 0x2D;
    goto loc_0047337A;

loc_00473366: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_00473371; /* je: equal / zero */

loc_0047336B: ;
    MEM8(ebp + -24) = 0x2B;
    goto loc_0047337A;

loc_00473371: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_00473381; /* je: equal / zero */

loc_00473376: ;
    MEM8(ebp + -24) = 0x20;

loc_0047337A: ;
    MEM32(ebp + -28) = 1;

loc_00473381: ;
    esi = MEM32(ebp + -32);
    esi = esi - MEM32(ebp + -28);
    esi = esi - MEM32(ebp + -16);
    if (TEST_NZ(LO8(ebx), 0xC)) goto loc_004733A0; /* jne: not equal / not zero */

loc_0047338F: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_00472C9E(); /* call 0x00472C9E */

loc_0047339D: ;
    esp = esp + 0xC;

loc_004733A0: ;
    PUSH32(esp, MEM32(ebp + -28));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00472CC2(); /* call 0x00472CC2 */

loc_004733B1: ;
    (void)0; /* test LO8(ebx), 8 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(LO8(ebx), 8)) goto loc_004733CB; /* je: equal / zero */

loc_004733B7: ;
    if (TEST_NZ(LO8(ebx), 4)) goto loc_004733CB; /* jne: not equal / not zero */

loc_004733BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_00472C9E(); /* call 0x00472C9E */

loc_004733C8: ;
    esp = esp + 0xC;

loc_004733CB: ;
    if (CMP_EQ(MEM32(ebp + -36), 0)) goto loc_00473412; /* je: equal / zero */

loc_004733D1: ;
    if (CMP_LE(MEM32(ebp + -16), 0)) goto loc_00473412; /* jle: less or equal (signed <=) */

loc_004733D7: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -60) = eax;

loc_004733E0: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) - 1;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C336(); /* call 0x0047C336 */

loc_004733F2: ;
    ebx++;
    POP32(esp, ecx);
    ebx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_LE(eax & eax, 0)) goto loc_00473421; /* jle: less or equal (signed <=) */

loc_004733FA: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -20;
    ecx = ebp + -80;
    PUSH32(esp, 0); sub_00472CC2(); /* call 0x00472CC2 */

loc_00473409: ;
    (void)0; /* cmp MEM32(ebp + -60), 0 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(MEM32(ebp + -60), 0)) goto loc_004733E0; /* jne: not equal / not zero */

loc_00473410: ;
    goto loc_00473421;

loc_00473412: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_00472CC2(); /* call 0x00472CC2 */

loc_00473420: ;
    POP32(esp, ecx);

loc_00473421: ;
    if (TEST_Z(MEM8(ebp + -4), 4)) goto loc_00473438; /* je: equal / zero */

loc_00473427: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_00472C9E(); /* call 0x00472C9E */

loc_00473435: ;
    esp = esp + 0xC;

loc_00473438: ;
    if (CMP_EQ(MEM32(ebp + -40), 0)) goto loc_0047344B; /* je: equal / zero */

loc_0047343E: ;
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00473446: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    POP32(esp, ecx);

loc_0047344B: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(ebx, MEM8(edi));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00472D21; /* jne: not equal / not zero */

loc_00473458: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0047345A: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004734A6
 * Original: 0x004734A6 - 0x004734B5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004734A6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004734A6: ;
    ecx = MEM32(0x75F98C);
    SET_LO8(edx, MEM8(ecx));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_004734B5(); return; } /* jne: not equal / not zero */

loc_004734B2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00473509
 * Original: 0x00473509 - 0x004738E8 (991 bytes, 295 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473509(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473509: ;
    ecx = MEM32(0x75F98C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x41);
    esi = 0x4000;
    POP32(esp, ebx);

loc_0047351B: ;
    eax = 0; /* xor self */
    if (CMP_NE(MEM8(ecx), 0x5F)) goto loc_0047352B; /* jne: not equal / not zero */

loc_00473522: ;
    ecx++;
    eax = esi;
    MEM32(0x75F98C) = ecx;

loc_0047352B: ;
    SET_LO8(edx, MEM8(ecx));
    if (CMP_L(LO8(edx), LO8(ebx))) goto loc_0047353A; /* jl: less (signed <) */

loc_00473531: ;
    if (CMP_LE(LO8(edx), 0x5A)) goto loc_004735BE; /* jle: less or equal (signed <=) */

loc_0047353A: ;
    if (CMP_NE(LO8(edx), 0x24)) goto loc_004737A7; /* jne: not equal / not zero */

loc_00473543: ;
    ecx++;
    MEM32(0x75F98C) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    if (CMP_G(edx, ebx)) goto loc_0047376E; /* jg: greater (signed >) */

loc_00473555: ;
    if (CMP_EQ(edx, ebx)) goto loc_00473762; /* je: equal / zero */

loc_0047355B: ;
    if (TEST_Z(edx, edx)) goto loc_0047375B; /* je: equal / zero */

loc_00473563: ;
    if (CMP_NE(edx, 0x24)) goto loc_004736AD; /* jne: not equal / not zero */

loc_0047356C: ;
    ecx++;
    MEM32(0x75F98C) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    edx = edx + 0xFFFFFFBAu;
    if (CMP_A(edx, 9)) goto loc_0047379B; /* ja: above (unsigned >) */

loc_00473582: ;
    edx = ZX8(MEM8(edx + 0x4738F0));
    { uint32_t _jt = MEM32(edx * 4 + 0x4738E8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00473590u) goto loc_00473590;
    if (_jt == 0x00473593u) goto loc_00473593;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00473590: ;
    ecx++;
    goto loc_004735B3;

loc_00473593: ;
    ecx++;
    MEM32(0x75F98C) = ecx;
    SET_LO8(eax, MEM8(ecx));
    if (CMP_L(LO8(eax), 0x30)) goto loc_00473754; /* jl: less (signed <) */

loc_004735A4: ;
    if (CMP_G(LO8(eax), 0x39)) goto loc_00473754; /* jg: greater (signed >) */

loc_004735AC: ;
    eax = SX8(LO8(eax));
    ecx = ecx + eax + -47;

loc_004735B3: ;
    MEM32(0x75F98C) = ecx;
    goto loc_0047351B;

loc_004735BE: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    edx = edx - ebx;
    esi = 0x8000;
    ecx++;
    eax = eax | esi;
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    MEM32(0x75F98C) = ecx;
    if (TEST_Z(LO8(edx), 1)) goto loc_004735DD; /* je: equal / zero */

loc_004735D6: ;
    eax = eax | 0x2000;
    goto loc_004735E2;

loc_004735DD: ;
    eax = eax & 0xFFFFDFFFu;

loc_004735E2: ;
    if (CMP_GE(edx, 0x18)) goto loc_004738E3; /* jge: greater or equal (signed >=) */

loc_004735EB: ;
    (void)0; /* test esi, eax - flags set for next jcc */
    ebp = 0xFFFF9FFFu;
    ebx = 0xFFFFEFFFu;
    edi = 0x800;
    if (TEST_Z(esi, eax)) goto loc_00473604; /* je: equal / zero */

loc_004735FE: ;
    eax = eax & ebx;
    eax = eax | edi;
    goto loc_00473606;

loc_00473604: ;
    eax = eax & ebp;

loc_00473606: ;
    ecx = edx;
    ecx = ecx & 0x18;
    if ((ecx == 0)) goto loc_00473647; /* je: equal / zero */

loc_0047360D: ;
    if (CMP_EQ(ecx, 8)) goto loc_0047362D; /* je: equal / zero */

loc_00473612: ;
    if (CMP_NE(ecx, 0x10)) goto loc_004738BD; /* jne: not equal / not zero */

loc_0047361B: ;
    if (TEST_Z(esi, eax)) goto loc_00473626; /* je: equal / zero */

loc_0047361F: ;
    eax = eax & 0xFFFFFF3Fu;
    goto loc_00473659;

loc_00473626: ;
    eax = eax & 0xFFFFE7FFu;
    goto loc_00473659;

loc_0047362D: ;
    if (TEST_Z(esi, eax)) goto loc_0047363B; /* je: equal / zero */

loc_00473631: ;
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 0x80;
    goto loc_00473659;

loc_0047363B: ;
    eax = eax & 0xFFFFF7FFu;
    eax = eax | 0x1000;
    goto loc_00473659;

loc_00473647: ;
    if (TEST_Z(esi, eax)) goto loc_00473655; /* je: equal / zero */

loc_0047364B: ;
    eax = eax & 0xFFFFFF7Fu;
    eax = eax | 0x40;
    goto loc_00473659;

loc_00473655: ;
    eax = eax & ebx;
    eax = eax | edi;

loc_00473659: ;
    edx = edx & 6;
    edx = edx - 0;
    if ((edx == 0)) goto loc_004738E3; /* je: equal / zero */

loc_00473665: ;
    edx--;
    edx--;
    if ((edx == 0)) goto loc_00473693; /* je: equal / zero */

loc_00473669: ;
    edx--;
    edx--;
    if ((edx == 0)) goto loc_00473684; /* je: equal / zero */

loc_0047366D: ;
    edx--;
    edx--;
    if ((edx != 0)) goto loc_004738BD; /* jne: not equal / not zero */

loc_00473675: ;
    eax = eax & 0xFFFFFCFFu;
    eax = eax | 0x400;
    goto loc_004738E3;

loc_00473684: ;
    eax = eax & 0xFFFFF9FFu;
    eax = eax | 0x100;
    goto loc_004738E3;

loc_00473693: ;
    if (TEST_Z(esi, eax)) goto loc_004736A6; /* je: equal / zero */

loc_00473697: ;
    eax = eax & 0xFFFFFAFFu;
    eax = eax | 0x200;
    goto loc_004738E3;

loc_004736A6: ;
    eax = eax & ebp;
    goto loc_004738E3;

loc_004736AD: ;
    if (CMP_LE(edx, 0x2F)) goto loc_004738BD; /* jle: less or equal (signed <=) */

loc_004736B6: ;
    if (CMP_G(edx, 0x35)) goto loc_004738BD; /* jg: greater (signed >) */

loc_004736BF: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    esi = 0x8000;
    eax = eax | esi;
    edx = edx - 0x30;
    (void)0; /* test esi, eax - flags set for next jcc */
    ebx = 0xFFFFEFFFu;
    edi = 0x800;
    if (TEST_Z(esi, eax)) goto loc_004736E0; /* je: equal / zero */

loc_004736DA: ;
    eax = eax & ebx;
    eax = eax | edi;
    goto loc_004736E5;

loc_004736E0: ;
    eax = eax & 0xFFFF9FFFu;

loc_004736E5: ;
    eax = eax & 0xFFFFFDFFu;
    eax = eax | 0x500;
    if (TEST_Z(LO8(edx), 1)) goto loc_004736FB; /* je: equal / zero */

loc_004736F4: ;
    eax = eax | 0x2000;
    goto loc_00473700;

loc_004736FB: ;
    eax = eax & 0xFFFFDFFFu;

loc_00473700: ;
    edx = edx & 6;
    edx = edx - 0;
    if ((edx == 0)) goto loc_00473740; /* je: equal / zero */

loc_00473708: ;
    edx--;
    edx--;
    if ((edx == 0)) goto loc_00473726; /* je: equal / zero */

loc_0047370C: ;
    edx--;
    edx--;
    if ((edx != 0)) goto loc_004738BD; /* jne: not equal / not zero */

loc_00473714: ;
    if (TEST_Z(esi, eax)) goto loc_0047371F; /* je: equal / zero */

loc_00473718: ;
    eax = eax & 0xFFFFFF3Fu;
    goto loc_0047379B;

loc_0047371F: ;
    eax = eax & 0xFFFFE7FFu;
    goto loc_0047379B;

loc_00473726: ;
    if (TEST_Z(esi, eax)) goto loc_00473734; /* je: equal / zero */

loc_0047372A: ;
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 0x80;
    goto loc_0047379B;

loc_00473734: ;
    eax = eax & 0xFFFFF7FFu;
    eax = eax | 0x1000;
    goto loc_0047379B;

loc_00473740: ;
    if (TEST_Z(esi, eax)) goto loc_0047374E; /* je: equal / zero */

loc_00473744: ;
    eax = eax & 0xFFFFFF7Fu;
    eax = eax | 0x40;
    goto loc_0047379B;

loc_0047374E: ;
    eax = eax & ebx;
    eax = eax | edi;
    goto loc_0047379B;

loc_00473754: ;
    eax = 0xFFFF;
    goto loc_0047379B;

loc_0047375B: ;
    eax = 0xFFFE;
    goto loc_0047379B;

loc_00473762: ;
    eax = eax & 0xFFFFF4FFu;
    eax = eax | 0x9000;
    goto loc_0047379B;

loc_0047376E: ;
    edx = edx - 0x42;
    if ((edx == 0)) goto loc_00473796; /* je: equal / zero */

loc_00473773: ;
    edx--;
    edx--;
    if ((edx == 0)) goto loc_0047378A; /* je: equal / zero */

loc_00473777: ;
    edx--;
    if ((edx != 0)) goto loc_004738BD; /* jne: not equal / not zero */

loc_0047377E: ;
    eax = eax & 0xFFFFF6FFu;
    eax = eax | 0x9200;
    goto loc_0047379B;

loc_0047378A: ;
    eax = eax & 0xFFFFF5FFu;
    eax = eax | 0x9100;
    goto loc_0047379B;

loc_00473796: ;
    eax = eax | 0x9800;

loc_0047379B: ;
    ecx++;
    MEM32(0x75F98C) = ecx;
    goto loc_004738E3;

loc_004737A7: ;
    SET_LO8(edx, MEM8(ecx));
    if (CMP_L(LO8(edx), 0x30)) goto loc_004738C4; /* jl: less (signed <) */

loc_004737B2: ;
    if (CMP_G(LO8(edx), 0x38)) goto loc_004738C4; /* jg: greater (signed >) */

loc_004737BB: ;
    ecx++;
    edx = SX8(LO8(edx));
    MEM32(0x75F98C) = ecx;
    ecx = edx + -48;
    eax = eax & 0xFFFF7FFFu;
    if (CMP_A(ecx, 8)) goto loc_004738BD; /* ja: above (unsigned >) */

loc_004737D6: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x4738FA); /* switch: 9 entries, 9 targets */
    if (_jt == 0x004737DDu) goto loc_004737DD;
    if (_jt == 0x00473817u) goto loc_00473817;
    if (_jt == 0x00473851u) goto loc_00473851;
    if (_jt == 0x0047387Du) goto loc_0047387D;
    if (_jt == 0x00473886u) goto loc_00473886;
    if (_jt == 0x00473892u) goto loc_00473892;
    if (_jt == 0x0047389Eu) goto loc_0047389E;
    if (_jt == 0x004738AAu) goto loc_004738AA;
    if (_jt == 0x004738B6u) goto loc_004738B6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004737DD: ;
    esi = 0x8000;
    if (TEST_Z(esi, eax)) goto loc_004737F2; /* je: equal / zero */

loc_004737E6: ;
    eax = eax & 0xFFFFFAFFu;
    eax = eax | 0x200;
    goto loc_004737F7;

loc_004737F2: ;
    eax = eax & 0xFFFF9FFFu;

loc_004737F7: ;
    if (TEST_Z(esi, eax)) goto loc_00473808; /* je: equal / zero */

loc_004737FB: ;
    eax = eax & 0xFFFFFF7Fu;
    eax = eax | 0x40;
    goto loc_004738E3;

loc_00473808: ;
    eax = eax & 0xFFFFEFFFu;
    eax = eax | 0x800;
    goto loc_004738E3;

loc_00473817: ;
    esi = 0x8000;
    if (TEST_Z(esi, eax)) goto loc_0047382C; /* je: equal / zero */

loc_00473820: ;
    eax = eax & 0xFFFFFAFFu;
    eax = eax | 0x200;
    goto loc_00473831;

loc_0047382C: ;
    eax = eax & 0xFFFF9FFFu;

loc_00473831: ;
    if (TEST_Z(esi, eax)) goto loc_00473842; /* je: equal / zero */

loc_00473835: ;
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 0x80;
    goto loc_004738E3;

loc_00473842: ;
    eax = eax & 0xFFFFF7FFu;
    eax = eax | 0x1000;
    goto loc_004738E3;

loc_00473851: ;
    esi = 0x8000;
    if (TEST_Z(esi, eax)) goto loc_00473866; /* je: equal / zero */

loc_0047385A: ;
    eax = eax & 0xFFFFFAFFu;
    eax = eax | 0x200;
    goto loc_0047386B;

loc_00473866: ;
    eax = eax & 0xFFFF9FFFu;

loc_0047386B: ;
    if (TEST_Z(esi, eax)) goto loc_00473876; /* je: equal / zero */

loc_0047386F: ;
    eax = eax & 0xFFFFFF3Fu;
    goto loc_004738E3;

loc_00473876: ;
    eax = eax & 0xFFFFE7FFu;
    goto loc_004738E3;

loc_0047387D: ;
    eax = eax & 0xFFFFDFFFu;
    eax = eax | esi;
    goto loc_004738E3;

loc_00473886: ;
    eax = eax & 0xFFFFE7FFu;
    eax = eax | 0x6000;
    goto loc_004738E3;

loc_00473892: ;
    eax = eax & 0xFFFFBFFFu;
    eax = eax | 0x2000;
    goto loc_004738E3;

loc_0047389E: ;
    eax = eax & 0xFFFFEFFFu;
    eax = eax | 0x6800;
    goto loc_004738E3;

loc_004738AA: ;
    eax = eax & 0xFFFFF7FFu;
    eax = eax | 0x7000;
    goto loc_004738E3;

loc_004738B6: ;
    eax = eax | 0x7800;
    goto loc_004738E3;

loc_004738BD: ;
    eax = 0xFFFF;
    goto loc_004738E3;

loc_004738C4: ;
    if (CMP_NE(LO8(edx), 0x39)) goto loc_004738D7; /* jne: not equal / not zero */

loc_004738C9: ;
    ecx++;
    MEM32(0x75F98C) = ecx;
    eax = 0xFFFD;
    goto loc_004738E3;

loc_004738D7: ;
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    eax = eax + 0xFFFE;

loc_004738E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00473937
 * Original: 0x00473937 - 0x00473952 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473937(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473937: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edi = edi + 7;
    edi = edi & 0xFFFFFFF8u;
    (void)0; /* cmp MEM32(esp + 0x10), 0 - flags set for next jcc */
    esi = ecx;
    if (CMP_EQ(MEM32(esp + 0x10), 0)) { sub_00473952(); return; } /* je: equal / zero */

loc_0047394C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi), _icall_esp); /* indirect call */
    }

loc_0047394F: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004739B6(); return; /* tail jmp 0x004739B6 */

}

/**
 * sub_004739BB
 * Original: 0x004739BB - 0x00473A24 (105 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004739BB(void)
{

loc_004739BB: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    edx = edx << 0x1C;
    edx = (uint32_t)((int32_t)edx >> 0x1C);
    edx = edx ^ MEM32(eax + 4);
    PUSH32(esp, esi);
    edx = edx & 0xF;
    MEM32(eax + 4) = MEM32(eax + 4) ^ edx;
    esi = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    edx = edx ^ esi;
    edx = edx & 0x10;
    edx = edx ^ esi;
    MEM32(eax + 4) = edx;
    esi = MEM32(ecx + 4);
    esi = esi ^ edx;
    esi = esi & 0x20;
    esi = esi ^ edx;
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 4);
    edx = edx ^ esi;
    edx = edx & 0x40;
    edx = edx ^ esi;
    MEM32(eax + 4) = edx;
    esi = MEM32(ecx + 4);
    esi = esi ^ edx;
    esi = esi & 0x80;
    esi = esi ^ edx;
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = esi;
    edx = edx ^ MEM32(ecx + 4);
    POP32(esp, esi);
    edx = edx & 0x100;
    MEM32(eax + 4) = MEM32(eax + 4) ^ edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473A24
 * Original: 0x00473A24 - 0x00473A8F (107 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473A24(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473A24: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ecx = esi;
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    if ((ecx == 0)) goto loc_00473A39; /* je: equal / zero */

loc_00473A34: ;
    if (CMP_NE(ecx, 2)) goto loc_00473A8B; /* jne: not equal / not zero */

loc_00473A39: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 4);
    edx = edx << 0x1C;
    edx = (uint32_t)((int32_t)edx >> 0x1C);
    edx = edx ^ esi;
    edx = edx & 0xF;
    edx = edx ^ esi;
    MEM32(eax + 4) = edx;
    esi = MEM32(ecx + 4);
    esi = esi ^ edx;
    esi = esi & 0x10;
    esi = esi ^ edx;
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 4);
    edx = edx ^ esi;
    edx = edx & 0x20;
    edx = edx ^ esi;
    MEM32(eax + 4) = edx;
    esi = MEM32(ecx + 4);
    esi = esi ^ edx;
    esi = esi & 0x40;
    esi = esi ^ edx;
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 4);
    edx = edx ^ esi;
    edx = edx & 0x80;
    edx = edx ^ esi;
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;

loc_00473A8B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473A8F
 * Original: 0x00473A8F - 0x00473AB2 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473A8F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473A8F: ;
    edx = MEM32(esp + 4);
    if (TEST_S(edx, edx)) { sub_00473AB2(); return; } /* jl: less (signed <) */

loc_00473A97: ;
    if (CMP_G(edx, 9)) { sub_00473AB2(); return; } /* jg: greater (signed >) */

loc_00473A9C: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00473AAD; /* je: equal / zero */

loc_00473AA3: ;
    if (CMP_G(edx, eax)) goto loc_00473AAD; /* jg: greater (signed >) */

loc_00473AA7: ;
    eax = MEM32(ecx + edx * 4 + 4);
    g_seh_ebp = ebp; sub_00473AB5(); return; /* tail jmp 0x00473AB5 */

loc_00473AAD: ;
    eax = ecx + 0x34;
    g_seh_ebp = ebp; sub_00473AB5(); return; /* tail jmp 0x00473AB5 */

}

/**
 * sub_00473AB8
 * Original: 0x00473AB8 - 0x00473AE1 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473AB8(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473AB8: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00473ADE; /* je: equal / zero */

loc_00473AC2: ;
    edx = MEM32(eax + 4);
    if (TEST_Z(edx, edx)) goto loc_00473ADB; /* je: equal / zero */

loc_00473AC9: ;
    PUSH32(esp, esi);
    goto loc_00473ACE;

loc_00473ACC: ;
    edx = esi;

loc_00473ACE: ;
    esi = MEM32(edx + 4);
    if (TEST_NZ(esi, esi)) goto loc_00473ACC; /* jne: not equal / not zero */

loc_00473AD5: ;
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    goto loc_00473ADE;

loc_00473ADB: ;
    MEM32(eax + 4) = ecx;

loc_00473ADE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473B00
 * Original: 0x00473B00 - 0x00473B2F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473B00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473B00: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax) = 0x586FA0;
    if (TEST_Z(edx, edx)) goto loc_00473B29; /* je: equal / zero */

loc_00473B14: ;
    ecx = MEM32(edx + 4);
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    if (CMP_EQ(ecx, 1)) goto loc_00473B27; /* je: equal / zero */

loc_00473B22: ;
    if (CMP_NE(ecx, 3)) goto loc_00473B29; /* jne: not equal / not zero */

loc_00473B27: ;
    edx = 0; /* xor self */

loc_00473B29: ;
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473B2F
 * Original: 0x00473B2F - 0x00473B4C (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473B2F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473B2F: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM32(eax) = 0x586FAC;
    MEM32(eax + 8) = ecx;
    if (CMP_NE(ecx, 2)) { sub_00473B4C(); return; } /* jne: not equal / not zero */

loc_00473B47: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00473B4E(); return; /* tail jmp 0x00473B4E */

}

/**
 * sub_00473B65
 * Original: 0x00473B65 - 0x00473B85 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473B65(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473B65: ;
    (void)0; /* cmp MEM32(esp + 8), 0 - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_00473B80; /* je: equal / zero */

loc_00473B70: ;
    SET_LO8(eax, MEM8(edx));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ecx) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00473B80; /* je: equal / zero */

loc_00473B78: ;
    ecx++;
    edx++;
    MEM32(esp + 8) = MEM32(esp + 8) - 1;
    if ((MEM32(esp + 8) != 0)) goto loc_00473B70; /* jne: not equal / not zero */

loc_00473B80: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00473B85
 * Original: 0x00473B85 - 0x00473BB8 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473B85(void)
{
    uint32_t ebp;

loc_00473B85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    ecx = 0; /* xor self */
    eax = 0xFFFFFE00u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & eax;
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ecx;
    PUSH32(esp, 0); sub_00476E88(); /* call 0x00476E88 */

loc_00473BB0: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x14;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00473BB8
 * Original: 0x00473BB8 - 0x00473BEC (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473BB8(void)
{
    uint32_t ebp;

loc_00473BB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = 0xFFFFFE00u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & eax;
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ecx;
    PUSH32(esp, 0); sub_00476E88(); /* call 0x00476E88 */

loc_00473BE4: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x14;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00473BEC
 * Original: 0x00473BEC - 0x00473C2E (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473BEC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473BEC: ;
    (void)0; /* cmp MEM32(esp + 4), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esp + 4), 0)) { sub_00473C2E(); return; } /* je: equal / zero */

loc_00473BF6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473C04: ;
    if (TEST_Z(eax, eax)) goto loc_00473C15; /* je: equal / zero */

loc_00473C08: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, 0); sub_00473B00(); /* call 0x00473B00 */

loc_00473C13: ;
    goto loc_00473C17;

loc_00473C15: ;
    eax = 0; /* xor self */

loc_00473C17: ;
    MEM32(esi) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 3;
    eax = eax ^ MEM32(esi + 4);
    eax = eax & 0xF;
    MEM32(esi + 4) = MEM32(esi + 4) ^ eax;
    g_seh_ebp = ebp; sub_00473C35(); return; /* tail jmp 0x00473C35 */

}

/**
 * sub_00473C41
 * Original: 0x00473C41 - 0x00473C57 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473C41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    esi = ecx;
    if (CMP_EQ(edi, 1)) { sub_00473C57(); return; } /* je: equal / zero */

loc_00473C4E: ;
    if (CMP_EQ(edi, 3)) { sub_00473C57(); return; } /* je: equal / zero */

loc_00473C53: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00473C59(); return; /* tail jmp 0x00473C59 */

}

/**
 * sub_00473CA1
 * Original: 0x00473CA1 - 0x00473CB4 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473CA1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473CA1: ;
    eax = MEM32(ecx + 4);
    eax = eax << 0x1C;
    eax = (uint32_t)((int32_t)eax >> 0x1C);
    if ((eax == 0)) { sub_00473CB4(); return; } /* je: equal / zero */

loc_00473CAC: ;
    if (CMP_EQ(eax, 2)) { sub_00473CB4(); return; } /* je: equal / zero */

loc_00473CB1: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00473CB8
 * Original: 0x00473CB8 - 0x00473CC9 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473CB8(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473CB8: ;
    if (CMP_EQ(MEM32(ecx), 0)) { sub_00473CC9(); return; } /* je: equal / zero */

loc_00473CBD: ;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00473CC2: ;
    if (TEST_Z(eax, eax)) { sub_00473CC9(); return; } /* je: equal / zero */

loc_00473CC6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00473CCD
 * Original: 0x00473CCD - 0x00473CDE (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473CCD(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473CCD: ;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00473CD2: ;
    if (TEST_NZ(eax, eax)) { sub_00473CDE(); return; } /* jne: not equal / not zero */

loc_00473CD6: ;
    if (TEST_Z(MEM8(ecx + 4), 0x20)) { sub_00473CDE(); return; } /* je: equal / zero */

loc_00473CDC: ;
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00473CE1
 * Original: 0x00473CE1 - 0x00473D06 (37 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473CE1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473CE1: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00473CE9: ;
    if (TEST_NZ(eax, eax)) goto loc_00473D02; /* jne: not equal / not zero */

loc_00473CED: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    goto loc_00473CFD;

loc_00473CF2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00473CF8: ;
    esi = MEM32(esi + 4);
    edi = edi + eax;

loc_00473CFD: ;
    if (TEST_NZ(esi, esi)) goto loc_00473CF2; /* jne: not equal / not zero */

loc_00473D01: ;
    POP32(esp, esi);

loc_00473D02: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00473D06
 * Original: 0x00473D06 - 0x00473D39 (51 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473D06(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473D06: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00473D0F: ;
    if (TEST_NZ(eax, eax)) { sub_00473D39(); return; } /* jne: not equal / not zero */

loc_00473D13: ;
    esi = MEM32(ecx);
    if (TEST_Z(esi, esi)) { sub_00473D39(); return; } /* je: equal / zero */

loc_00473D19: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00473D1F: ;
    if (TEST_Z(eax, eax)) goto loc_00473D25; /* je: equal / zero */

loc_00473D23: ;
    edi = esi;

loc_00473D25: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_00473D19; /* jne: not equal / not zero */

loc_00473D2C: ;
    if (TEST_Z(edi, edi)) { sub_00473D39(); return; } /* je: equal / zero */

loc_00473D30: ;
    eax = MEM32(edi);
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00473D3E
 * Original: 0x00473D3E - 0x00473DCF (145 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473D3E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00473D3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00473D4A: ;
    if (TEST_NZ(eax, eax)) goto loc_00473DBA; /* jne: not equal / not zero */

loc_00473D4E: ;
    if (CMP_NE(MEM32(ebp + 8), eax)) goto loc_00473D71; /* jne: not equal / not zero */

loc_00473D53: ;
    PUSH32(esp, 0); sub_00473CE1(); /* call 0x00473CE1 */

loc_00473D58: ;
    esi = eax;
    PUSH32(esp, 0);
    esi++;
    PUSH32(esp, esi);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473D68: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00473DC6; /* je: equal / zero */

loc_00473D6F: ;
    goto loc_00473D74;

loc_00473D71: ;
    esi = MEM32(ebp + 0xC);

loc_00473D74: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = esi;
    esi = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    goto loc_00473DB0;

loc_00473D81: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00473DB4; /* jle: less or equal (signed <=) */

loc_00473D85: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00473D8B: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00473DAD; /* je: equal / zero */

loc_00473D91: ;
    eax = ebx;
    eax = eax - edi;
    if (((int32_t)eax >= 0)) goto loc_00473D99; /* jns: not sign (positive) */

loc_00473D97: ;
    edi = ebx;

loc_00473D99: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00473DA4: ;
    if (TEST_Z(eax, eax)) goto loc_00473DAD; /* je: equal / zero */

loc_00473DA8: ;
    ebx = ebx - edi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;

loc_00473DAD: ;
    esi = MEM32(esi + 4);

loc_00473DB0: ;
    if (TEST_NZ(esi, esi)) goto loc_00473D81; /* jne: not equal / not zero */

loc_00473DB4: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebx);
    goto loc_00473DC3;

loc_00473DBA: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00473DC6; /* je: equal / zero */

loc_00473DC0: ;
    eax = MEM32(ebp + 8);

loc_00473DC3: ;
    MEM8(eax) = 0;

loc_00473DC6: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00473DCF
 * Original: 0x00473DCF - 0x00473E04 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473DCF(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473DCF: ;
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    eax = esi;
    eax = eax & 0xF;
    if (CMP_EQ(LO8(eax), 3)) goto loc_00473DFE; /* je: equal / zero */

loc_00473DDE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00473DE7: ;
    if (TEST_NZ(eax, eax)) goto loc_00473DFE; /* jne: not equal / not zero */

loc_00473DEB: ;
    eax = MEM32(ecx + 4);
    eax = eax << 0x1C;
    eax = (uint32_t)((int32_t)eax >> 0x1C);
    eax = eax ^ esi;
    eax = eax & 0xF;
    eax = eax ^ esi;
    MEM32(edx + 4) = eax;

loc_00473DFE: ;
    eax = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473E04
 * Original: 0x00473E04 - 0x00473E85 (129 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473E04(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473E04: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    esi = ecx;
    if (CMP_EQ(edi, 1)) goto loc_00473E62; /* je: equal / zero */

loc_00473E11: ;
    if (CMP_EQ(edi, 3)) goto loc_00473E62; /* je: equal / zero */

loc_00473E16: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    if ((ecx == 0)) goto loc_00473E28; /* je: equal / zero */

loc_00473E23: ;
    if (CMP_NE(ecx, 2)) goto loc_00473E7E; /* jne: not equal / not zero */

loc_00473E28: ;
    PUSH32(esp, 0);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, 0x10);
    ecx = 0x75F968;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473E3E: ;
    if (TEST_Z(eax, eax)) goto loc_00473E4C; /* je: equal / zero */

loc_00473E42: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0); sub_00473B2F(); /* call 0x00473B2F */

loc_00473E4A: ;
    goto loc_00473E4E;

loc_00473E4C: ;
    eax = 0; /* xor self */

loc_00473E4E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00473E7E; /* jne: not equal / not zero */

loc_00473E54: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFF3u;
    eax = eax | 3;
    MEM32(esi + 4) = eax;
    goto loc_00473E7E;

loc_00473E62: ;
    eax = MEM32(esi + 4);
    MEM32(esi) = MEM32(esi) & 0;
    ecx = eax;
    ecx = ecx & 0xF;
    if (CMP_EQ(LO8(ecx), 3)) goto loc_00473E7E; /* je: equal / zero */

loc_00473E72: ;
    ecx = eax;
    ecx = ecx ^ edi;
    ecx = ecx & 0xF;
    ecx = ecx ^ eax;
    MEM32(esi + 4) = ecx;

loc_00473E7E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473E85
 * Original: 0x00473E85 - 0x00473EA3 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473E85(void)
{

loc_00473E85: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 3);
    ecx = esi + 0x2C;
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_00473E92: ;
    PUSH32(esp, 1);
    ecx = esi + 0x34;
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_00473E9C: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00473EA3
 * Original: 0x00473EA3 - 0x00473EEA (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473EA3(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473EA3: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi), 9)) goto loc_00473EE4; /* je: equal / zero */

loc_00473EAB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00473EB4: ;
    if (TEST_NZ(eax, eax)) goto loc_00473EE4; /* jne: not equal / not zero */

loc_00473EB8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473EC5: ;
    if (TEST_Z(eax, eax)) goto loc_00473ED6; /* je: equal / zero */

loc_00473EC9: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00473ED4: ;
    goto loc_00473ED8;

loc_00473ED6: ;
    eax = 0; /* xor self */

loc_00473ED8: ;
    if (TEST_Z(eax, eax)) goto loc_00473EE4; /* je: equal / zero */

loc_00473EDC: ;
    MEM32(esi) = MEM32(esi) + 1;
    ecx = MEM32(esi);
    MEM32(esi + ecx * 4 + 4) = eax;

loc_00473EE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473EEA
 * Original: 0x00473EEA - 0x00473F2A (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473EEA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473EEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    esi = 0x75F968;
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473EFF: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) { sub_00473F2A(); return; } /* je: equal / zero */

loc_00473F05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473F10: ;
    if (TEST_Z(eax, eax)) goto loc_00473F1E; /* je: equal / zero */

loc_00473F14: ;
    MEM16(eax + 4) = MEM16(eax + 4) & 0xFE00;
    MEM32(eax) = edi;
    goto loc_00473F20;

loc_00473F1E: ;
    eax = 0; /* xor self */

loc_00473F20: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00473B00(); /* call 0x00473B00 */

loc_00473F28: ;
    g_seh_ebp = ebp; sub_00473F2C(); return; /* tail jmp 0x00473F2C */

}

/**
 * sub_00473F30
 * Original: 0x00473F30 - 0x00473F97 (103 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00473F30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x586FB8;
    if (CMP_NE(edi, eax)) goto loc_00473F62; /* jne: not equal / not zero */

loc_00473F4C: ;
    if (CMP_EQ(ebx, eax)) goto loc_00473F89; /* je: equal / zero */

loc_00473F50: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM8(ebx), 0)) goto loc_00473F5E; /* je: equal / zero */

loc_00473F57: ;
    edi++;
    if (CMP_NE(MEM8(edi + ebx), 0)) goto loc_00473F57; /* jne: not equal / not zero */

loc_00473F5E: ;
    if (CMP_EQ(edi, eax)) goto loc_00473F89; /* je: equal / zero */

loc_00473F62: ;
    if (CMP_EQ(ebx, eax)) goto loc_00473F89; /* je: equal / zero */

loc_00473F66: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00473F72: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(eax, eax)) goto loc_00473F8F; /* je: equal / zero */

loc_00473F7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = ebx;
    PUSH32(esp, 0); sub_00473B65(); /* call 0x00473B65 */

loc_00473F85: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00473F8F;

loc_00473F89: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;

loc_00473F8F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00474048
 * Original: 0x00474048 - 0x00474083 (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474048(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474048: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_00473E85(); /* call 0x00473E85 */

loc_00474054: ;
    edi = esi + 0x3C;
    ecx = edi;
    PUSH32(esp, 0); sub_00473E85(); /* call 0x00473E85 */

loc_0047405E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(0x75F990) = eax;
    MEM32(0x75F98C) = eax;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) { sub_00474083(); return; } /* je: equal / zero */

loc_00474072: ;
    ecx = MEM32(ebp + 0x10);
    ecx--;
    MEM32(0x75F998) = ecx;
    MEM32(0x75F994) = eax;
    g_seh_ebp = ebp; sub_00474091(); return; /* tail jmp 0x00474091 */

}

/**
 * sub_004740B5
 * Original: 0x004740B5 - 0x004740D5 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004740B5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004740B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(0x75F98C);
    (void)0; /* cmp MEM8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0xC));
    if (CMP_NE(MEM8(eax), 0x40)) { sub_004740D5(); return; } /* jne: not equal / not zero */

loc_004740C5: ;
    ecx = MEM32(ebp + 8);
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    PUSH32(esp, 0); sub_00473BEC(); /* call 0x00473BEC */

loc_004740D3: ;
    g_seh_ebp = ebp; sub_004740DF(); return; /* tail jmp 0x004740DF */

}

/**
 * sub_004740E4
 * Original: 0x004740E4 - 0x0047415F (123 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004740E4(void)
{
    int _flags = 0; /* fallback flag var */

loc_004740E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004740ED: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00474150; /* jne: not equal / not zero */

loc_004740F5: ;
    if (CMP_EQ(edi, 1)) goto loc_00474150; /* je: equal / zero */

loc_004740FA: ;
    if (CMP_EQ(edi, 3)) goto loc_00474150; /* je: equal / zero */

loc_004740FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_0047410D: ;
    if (TEST_Z(eax, eax)) goto loc_0047411D; /* je: equal / zero */

loc_00474111: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0); sub_00473B2F(); /* call 0x00473B2F */

loc_00474119: ;
    edi = eax;
    goto loc_0047411F;

loc_0047411D: ;
    edi = 0; /* xor self */

loc_0047411F: ;
    if (TEST_Z(edi, edi)) goto loc_0047413A; /* je: equal / zero */

loc_00474123: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_00473EEA(); /* call 0x00473EEA */

loc_0047412A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00474142; /* je: equal / zero */

loc_00474130: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0); sub_00473AB8(); /* call 0x00473AB8 */

loc_00474138: ;
    goto loc_0047413D;

loc_0047413A: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_0047413D: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_00474158; /* jne: not equal / not zero */

loc_00474142: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFF3u;
    eax = eax | 3;
    MEM32(esi + 4) = eax;
    goto loc_00474158;

loc_00474150: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00473E04(); /* call 0x00473E04 */

loc_00474158: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047415F
 * Original: 0x0047415F - 0x00474205 (166 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047415F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047415F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    if (CMP_EQ(ecx, 1)) goto loc_00474201; /* je: equal / zero */

loc_00474176: ;
    if (CMP_EQ(ecx, 3)) goto loc_00474201; /* je: equal / zero */

loc_0047417F: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(esi), ebx)) goto loc_00474191; /* je: equal / zero */

loc_00474186: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0); sub_00473E04(); /* call 0x00473E04 */

loc_0047418F: ;
    goto loc_00474200;

loc_00474191: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(edi, ebx)) goto loc_004741F6; /* je: equal / zero */

loc_0047419A: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(ecx, ebx)) goto loc_004741F6; /* je: equal / zero */

loc_004741A2: ;
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_004741EE; /* je: equal / zero */

loc_004741A6: ;
    ecx--;
    PUSH32(esp, ebx);
    ecx = 0x75F968;
    if ((ecx == 0)) goto loc_004741C8; /* je: equal / zero */

loc_004741AF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_004741B6: ;
    if (CMP_EQ(eax, ebx)) goto loc_004741E3; /* je: equal / zero */

loc_004741BA: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00473F30(); /* call 0x00473F30 */

loc_004741C6: ;
    goto loc_004741E5;

loc_004741C8: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_004741CF: ;
    if (CMP_EQ(eax, ebx)) goto loc_004741E3; /* je: equal / zero */

loc_004741D3: ;
    SET_LO8(ecx, MEM8(edi));
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x586F94;
    MEM8(eax + 8) = LO8(ecx);
    goto loc_004741E5;

loc_004741E3: ;
    eax = 0; /* xor self */

loc_004741E5: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_NE(eax, ebx)) goto loc_004741FF; /* jne: not equal / not zero */

loc_004741EB: ;
    eax = MEM32(esi + 4);

loc_004741EE: ;
    eax = eax & 0xFFFFFFF3u;
    eax = eax | 3;
    goto loc_004741FC;

loc_004741F6: ;
    eax = eax & 0xFFFFFFF1u;
    eax = eax | 1;

loc_004741FC: ;
    MEM32(esi + 4) = eax;

loc_004741FF: ;
    POP32(esp, edi);

loc_00474200: ;
    POP32(esp, ebx);

loc_00474201: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00474205
 * Original: 0x00474205 - 0x0047422A (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474205(void)
{
    int _flags = 0; /* fallback flag var */

loc_00474205: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = MEM32(esi) & 0;
    MEM16(esi + 4) = MEM16(esi + 4) & 0xFE00;
    if (CMP_EQ(MEM8(esp + 8), 0)) goto loc_00474224; /* je: equal / zero */

loc_00474218: ;
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_00474224: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047422A
 * Original: 0x0047422A - 0x0047425A (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047422A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047422A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 4) = MEM16(esi + 4) & 0xFE00;
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esi) = edx;
    if (CMP_EQ(eax, edx)) goto loc_00474254; /* je: equal / zero */

loc_0047423F: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM8(eax), LO8(edx))) goto loc_0047424B; /* je: equal / zero */

loc_00474245: ;
    ecx++;
    if (CMP_NE(MEM8(ecx + eax), LO8(edx))) goto loc_00474245; /* jne: not equal / not zero */

loc_0047424B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_00474254: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047425A
 * Original: 0x0047425A - 0x00474319 (191 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047425A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047425A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 4) = MEM16(esi + 4) & 0xFE00;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esi) = ebx;
    ecx = MEM32(edi);
    if (CMP_EQ(ecx, ebx)) goto loc_004742F2; /* je: equal / zero */

loc_00474278: ;
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) goto loc_00474311; /* je: equal / zero */

loc_00474280: ;
    MEM32(ebp + 8) = ecx;

loc_00474283: ;
    eax = MEM32(edi);
    SET_LO8(edx, MEM8(eax));
    if (CMP_EQ(LO8(edx), MEM8(ebp + 0xC))) goto loc_004742C6; /* je: equal / zero */

loc_0047428C: ;
    if (CMP_EQ(LO8(edx), 0x5F)) goto loc_004742BD; /* je: equal / zero */

loc_00474291: ;
    if (CMP_EQ(LO8(edx), 0x24)) goto loc_004742BD; /* je: equal / zero */

loc_00474296: ;
    if (CMP_L(LO8(edx), 0x61)) goto loc_004742A0; /* jl: less (signed <) */

loc_0047429B: ;
    if (CMP_LE(LO8(edx), 0x7A)) goto loc_004742BD; /* jle: less or equal (signed <=) */

loc_004742A0: ;
    if (CMP_L(LO8(edx), 0x41)) goto loc_004742AA; /* jl: less (signed <) */

loc_004742A5: ;
    if (CMP_LE(LO8(edx), 0x5A)) goto loc_004742BD; /* jle: less or equal (signed <=) */

loc_004742AA: ;
    if (CMP_L(LO8(edx), 0x30)) goto loc_004742B4; /* jl: less (signed <) */

loc_004742AF: ;
    if (CMP_LE(LO8(edx), 0x39)) goto loc_004742BD; /* jle: less or equal (signed <=) */

loc_004742B4: ;
    if (TEST_Z(MEM8(0x75F99E), 1)) goto loc_004742EF; /* je: equal / zero */

loc_004742BD: ;
    ebx++;
    eax++;
    MEM32(edi) = eax;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00474283; /* jne: not equal / not zero */

loc_004742C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_004742D1: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0047430A; /* je: equal / zero */

loc_004742D9: ;
    eax++;
    (void)0; /* cmp LO8(ecx), MEM8(ebp + 0xC) - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_EQ(LO8(ecx), MEM8(ebp + 0xC))) goto loc_00474304; /* je: equal / zero */

loc_004742E1: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFF3u;
    eax = eax | 3;
    MEM32(esi) = MEM32(esi) & 0;
    goto loc_004742F8;

loc_004742EF: ;
    eax = MEM32(esi + 4);

loc_004742F2: ;
    eax = eax & 0xFFFFFFF1u;
    eax = eax | 1;

loc_004742F8: ;
    MEM32(esi + 4) = eax;

loc_004742FB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00474304: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFFFF0u;
    goto loc_004742FB;

loc_0047430A: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(LO8(eax), 0xF)) goto loc_004742FB; /* jne: not equal / not zero */

loc_00474311: ;
    eax = eax & 0xFFFFFFF2u;
    eax = eax | 2;
    goto loc_004742F8;

}

/**
 * sub_00474319
 * Original: 0x00474319 - 0x00474360 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474319(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474319: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = MEM32(esi) & 0;
    MEM16(esi + 4) = MEM16(esi + 4) & 0xFE00;
    PUSH32(esp, edi);
    ecx = ebp + -2;
    MEM8(ebp + -2) = 0;

loc_00474333: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    PUSH32(esp, 0xA);
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx--;
    SET_LO8(edx, LO8(edx) + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ecx) = LO8(edx);
    MEM32(ebp + 8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00474333; /* jne: not equal / not zero */

loc_0047434A: ;
    eax = ebp + -2;
    eax = eax - ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_00474358: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00474360
 * Original: 0x00474360 - 0x004743C7 (103 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 4) = MEM16(esi + 4) & 0xFE00;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    ecx = ebp + -5;
    MEM32(esi) = eax;
    MEM8(ebp + -5) = LO8(eax);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_GE(edi, eax)) goto loc_0047438A; /* jge: greater or equal (signed >=) */

loc_00474384: ;
    MEM8(ebp + -1) = 1;
    edi = (uint32_t)(-(int32_t)edi);

loc_0047438A: ;
    PUSH32(esp, ebx);

loc_0047438B: ;
    eax = edi;
    PUSH32(esp, 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx--;
    eax = edi;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(edx, LO8(edx) + 0x30);
    MEM8(ecx) = LO8(edx);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0047438B; /* jne: not equal / not zero */

loc_004743A7: ;
    (void)0; /* cmp MEM8(ebp + -1), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(ebp + -1), LO8(eax))) goto loc_004743B1; /* je: equal / zero */

loc_004743AD: ;
    ecx--;
    MEM8(ecx) = 0x2D;

loc_004743B1: ;
    eax = ebp + -5;
    eax = eax - ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_004743BF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004743C7
 * Original: 0x004743C7 - 0x004743EB (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004743C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004743C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_004743D5: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004743DD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0xC));
    if (TEST_Z(eax, eax)) { sub_004743EB(); return; } /* je: equal / zero */

loc_004743E4: ;
    PUSH32(esp, 0); sub_00473E04(); /* call 0x00473E04 */

loc_004743E9: ;
    g_seh_ebp = ebp; sub_004743F0(); return; /* tail jmp 0x004743F0 */

}

/**
 * sub_00474403
 * Original: 0x00474403 - 0x00474429 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474403(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00474403: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00474412: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = esi;
    if (TEST_Z(eax, eax)) { sub_00474429(); return; } /* je: equal / zero */

loc_00474418: ;
    eax = MEM32(edi + 4);
    eax = eax << 0x1C;
    eax = (uint32_t)((int32_t)eax >> 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004740E4(); /* call 0x004740E4 */

loc_00474427: ;
    g_seh_ebp = ebp; sub_00474460(); return; /* tail jmp 0x00474460 */

}

/**
 * sub_00474467
 * Original: 0x00474467 - 0x00474480 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474467(void)
{

loc_00474467: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    esi = ecx;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_0047447A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00474480
 * Original: 0x00474480 - 0x004744A7 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00474480: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xF;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM8(eax), LO8(ecx))) goto loc_00474498; /* je: equal / zero */

loc_00474491: ;
    ecx++;
    if (CMP_NE(MEM8(ecx + eax), 0)) goto loc_00474491; /* jne: not equal / not zero */

loc_00474498: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0047415F(); /* call 0x0047415F */

loc_004744A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004744A7
 * Original: 0x004744A7 - 0x0047453D (150 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004744A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004744A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0047453D(); return; } /* je: equal / zero */

loc_004744BB: ;
    eax = SX8(LO8(eax));
    eax = eax - 0x41;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    if (CMP_A(eax, 0xC)) goto loc_00474539; /* ja: above (unsigned >) */

loc_004744CC: ;
    ecx = MEM32(0x75F99C);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0xFE00;
    ecx = ecx >> 1;
    ecx = ~ecx;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0047452B; /* je: equal / zero */

loc_004744E5: ;
    eax = eax & 0xFFFFFFFEu;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00474518; /* je: equal / zero */

loc_004744ED: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00474515; /* je: equal / zero */

loc_004744F4: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00474511; /* je: equal / zero */

loc_004744F8: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0047450D; /* je: equal / zero */

loc_004744FC: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00474509; /* je: equal / zero */

loc_00474500: ;
    eax = eax - 4;
    if ((eax != 0)) goto loc_0047452B; /* jne: not equal / not zero */

loc_00474505: ;
    PUSH32(esp, 6);
    goto loc_0047451A;

loc_00474509: ;
    PUSH32(esp, 5);
    goto loc_0047451A;

loc_0047450D: ;
    PUSH32(esp, 3);
    goto loc_0047451A;

loc_00474511: ;
    PUSH32(esp, 4);
    goto loc_0047451A;

loc_00474515: ;
    PUSH32(esp, ecx);
    goto loc_0047451A;

loc_00474518: ;
    PUSH32(esp, 1);

loc_0047451A: ;
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_0047451F: ;
    esp = esp + 4;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_0047452B: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474537: ;
    g_seh_ebp = ebp; sub_00474547(); return; /* tail jmp 0x00474547 */

loc_00474539: ;
    PUSH32(esp, 1);
    g_seh_ebp = ebp; sub_0047453F(); return; /* tail jmp 0x0047453F */

}

/**
 * sub_0047454C
 * Original: 0x0047454C - 0x00474577 (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047454C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047454C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00474577(); return; } /* je: equal / zero */

loc_0047455D: ;
    if (CMP_EQ(LO8(eax), 0x41)) goto loc_00474565; /* je: equal / zero */

loc_00474561: ;
    PUSH32(esp, 1);
    g_seh_ebp = ebp; sub_00474579(); return; /* tail jmp 0x00474579 */

loc_00474565: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    PUSH32(esp, 0x586FCC);
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_00474575: ;
    g_seh_ebp = ebp; sub_0047457E(); return; /* tail jmp 0x0047457E */

}

/**
 * sub_00474583
 * Original: 0x00474583 - 0x004745A7 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474583(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474583: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474591: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00474599: ;
    if (TEST_Z(eax, eax)) { sub_004745A7(); return; } /* je: equal / zero */

loc_0047459D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004745A5: ;
    g_seh_ebp = ebp; sub_004745D0(); return; /* tail jmp 0x004745D0 */

}

/**
 * sub_004745E3
 * Original: 0x004745E3 - 0x0047464D (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004745E3(void)
{
    int _flags = 0; /* fallback flag var */

loc_004745E3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00474646; /* je: equal / zero */

loc_004745EF: ;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004745F4: ;
    if (TEST_Z(eax, eax)) goto loc_00474600; /* je: equal / zero */

loc_004745F8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00474467(); /* call 0x00474467 */

loc_004745FE: ;
    goto loc_00474646;

loc_00474600: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_00473EEA(); /* call 0x00473EEA */

loc_00474607: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_0047463A; /* je: equal / zero */

loc_0047460D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_0047461B: ;
    if (TEST_Z(eax, eax)) goto loc_0047462E; /* je: equal / zero */

loc_0047461F: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax) = 0x586F94;
    MEM8(eax + 8) = LO8(ebx);
    goto loc_00474630;

loc_0047462E: ;
    eax = 0; /* xor self */

loc_00474630: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473AB8(); /* call 0x00473AB8 */

loc_00474638: ;
    goto loc_00474646;

loc_0047463A: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFF3u;
    eax = eax | 3;
    MEM32(esi + 4) = eax;

loc_00474646: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047464D
 * Original: 0x0047464D - 0x004746B9 (108 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047464D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047464D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = ecx;
    if (TEST_Z(edi, edi)) goto loc_004746B2; /* je: equal / zero */

loc_00474659: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_004746B2; /* je: equal / zero */

loc_0047465E: ;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00474663: ;
    if (TEST_Z(eax, eax)) goto loc_0047466F; /* je: equal / zero */

loc_00474667: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_0047466D: ;
    goto loc_004746B2;

loc_0047466F: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_00473EEA(); /* call 0x00473EEA */

loc_00474676: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_004746A6; /* je: equal / zero */

loc_0047467C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_0047468A: ;
    if (TEST_Z(eax, eax)) goto loc_0047469A; /* je: equal / zero */

loc_0047468E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0); sub_00473F30(); /* call 0x00473F30 */

loc_00474698: ;
    goto loc_0047469C;

loc_0047469A: ;
    eax = 0; /* xor self */

loc_0047469C: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473AB8(); /* call 0x00473AB8 */

loc_004746A4: ;
    goto loc_004746B2;

loc_004746A6: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFFFF3u;
    eax = eax | 3;
    MEM32(esi + 4) = eax;

loc_004746B2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004746B9
 * Original: 0x004746B9 - 0x004747A0 (231 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004746B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004746B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0xFFFFFE00u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & esi;
    ebx++;
    if (TEST_NZ(MEM8(ebp + -4), 0xF)) goto loc_0047478D; /* jne: not equal / not zero */

loc_004746DA: ;
    PUSH32(esp, edi);

loc_004746DB: ;
    eax = MEM32(0x75F98C);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), 0x40)) goto loc_0047478C; /* je: equal / zero */

loc_004746EB: ;
    if (CMP_EQ(LO8(ecx), 0x5A)) goto loc_0047478C; /* je: equal / zero */

loc_004746F4: ;
    if (TEST_Z(ebx, ebx)) goto loc_004746FC; /* je: equal / zero */

loc_004746F8: ;
    ebx = 0; /* xor self */
    goto loc_0047470B;

loc_004746FC: ;
    PUSH32(esp, 0x2C);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004745E3(); /* call 0x004745E3 */

loc_00474706: ;
    eax = MEM32(0x75F98C);

loc_0047470B: ;
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00474782; /* je: equal / zero */

loc_00474711: ;
    ecx = SX8(LO8(ecx));
    ecx = ecx - 0x30;
    if (((int32_t)ecx < 0)) goto loc_00474732; /* js: sign (negative) */

loc_00474719: ;
    if (CMP_G(ecx, 9)) goto loc_00474732; /* jg: greater (signed >) */

loc_0047471E: ;
    eax++;
    PUSH32(esp, ecx);
    ecx = MEM32(0x75F97C);
    MEM32(0x75F98C) = eax;
    PUSH32(esp, 0); sub_00473A8F(); /* call 0x00473A8F */

loc_00474730: ;
    goto loc_0047476D;

loc_00474732: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -12) = MEM32(ebp + -12) & esi;
    edi = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477A04(); /* call 0x00477A04 */

loc_00474748: ;
    eax = MEM32(0x75F98C);
    eax = eax - edi;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(eax, 1)) goto loc_0047476A; /* jle: less or equal (signed <=) */

loc_00474756: ;
    ecx = MEM32(0x75F97C);
    if (CMP_EQ(MEM32(ecx), 9)) goto loc_0047476A; /* je: equal / zero */

loc_00474761: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473EA3(); /* call 0x00473EA3 */

loc_0047476A: ;
    eax = ebp + -24;

loc_0047476D: ;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00474776: ;
    if (TEST_Z(MEM8(ebp + -4), 0xF)) goto loc_004746DB; /* je: equal / zero */

loc_00474780: ;
    goto loc_0047478C;

loc_00474782: ;
    PUSH32(esp, 2);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004740E4(); /* call 0x004740E4 */

loc_0047478C: ;
    POP32(esp, edi);

loc_0047478D: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474799: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004747A0
 * Original: 0x004747A0 - 0x004747C2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004747A0(void)
{
    uint32_t ebp;

loc_004747A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -8;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00474205(); /* call 0x00474205 */

loc_004747B6: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_004747BD: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004747C2
 * Original: 0x004747C2 - 0x004747E4 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004747C2(void)
{
    uint32_t ebp;

loc_004747C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -8;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_004747D8: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_004747DF: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004747E4
 * Original: 0x004747E4 - 0x00474806 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004747E4(void)
{
    uint32_t ebp;

loc_004747E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -8;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_004747FA: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00474801: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00474806
 * Original: 0x00474806 - 0x0047482A (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474806(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474806: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474814: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_0047481C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0xC));
    if (TEST_Z(eax, eax)) { sub_0047482A(); return; } /* je: equal / zero */

loc_00474823: ;
    PUSH32(esp, 0); sub_00474467(); /* call 0x00474467 */

loc_00474828: ;
    g_seh_ebp = ebp; sub_0047482F(); return; /* tail jmp 0x0047482F */

}

/**
 * sub_00474842
 * Original: 0x00474842 - 0x00474866 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474842(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474842: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474850: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00474858: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0xC));
    if (TEST_Z(eax, eax)) { sub_00474866(); return; } /* je: equal / zero */

loc_0047485F: ;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00474864: ;
    g_seh_ebp = ebp; sub_0047486B(); return; /* tail jmp 0x0047486B */

}

/**
 * sub_0047487E
 * Original: 0x0047487E - 0x004748A6 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047487E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047487E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(0x75F98C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(MEM8(eax), 0x51)) goto loc_0047489C; /* jne: not equal / not zero */

loc_00474891: ;
    eax++;
    esi = 0x586FD4;
    MEM32(0x75F98C) = eax;

loc_0047489C: ;
    SET_LO8(ecx, MEM8(eax));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_004748A6(); return; } /* jne: not equal / not zero */

loc_004748A2: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_00474906(); return; /* tail jmp 0x00474906 */

}

/**
 * sub_00474962
 * Original: 0x00474962 - 0x00474A04 (162 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474962(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474962: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0xFE00;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00474A04(); return; } /* je: equal / zero */

loc_00474981: ;
    eax = SX8(LO8(eax));
    eax = eax + 0xFFFFFFD0u;
    if (CMP_A(eax, 7)) goto loc_00474A00; /* ja: above (unsigned >) */

loc_0047498C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x474A13); /* switch: 8 entries, 5 targets */
    if (_jt == 0x00474993u) goto loc_00474993;
    if (_jt == 0x0047499Au) goto loc_0047499A;
    if (_jt == 0x004749A1u) goto loc_004749A1;
    if (_jt == 0x004749A8u) goto loc_004749A8;
    if (_jt == 0x004749B5u) goto loc_004749B5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00474993: ;
    PUSH32(esp, 0x587018);
    goto loc_004749AD;

loc_0047499A: ;
    PUSH32(esp, 0x587010);
    goto loc_004749AD;

loc_004749A1: ;
    PUSH32(esp, 0x587008);
    goto loc_004749AD;

loc_004749A8: ;
    PUSH32(esp, 0x587000);

loc_004749AD: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004749B5: ;
    eax = MEM32(0x75F98C);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    eax = eax - 0x31;
    if ((eax == 0)) goto loc_004749D4; /* je: equal / zero */

loc_004749C8: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004749D4; /* je: equal / zero */

loc_004749CC: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004749D4; /* je: equal / zero */

loc_004749D0: ;
    eax--;
    eax--;
    if ((eax != 0)) goto loc_004749F2; /* jne: not equal / not zero */

loc_004749D4: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, 0x586FF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_004749E6: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004749F2: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_004749FE: ;
    g_seh_ebp = ebp; sub_00474A0E(); return; /* tail jmp 0x00474A0E */

loc_00474A00: ;
    PUSH32(esp, 1);
    g_seh_ebp = ebp; sub_00474A06(); return; /* tail jmp 0x00474A06 */

}

/**
 * sub_00474AC5
 * Original: 0x00474AC5 - 0x00474B17 (82 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474AC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474AC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00474B17(); return; } /* je: equal / zero */

loc_00474AD6: ;
    (void)0; /* cmp LO8(eax), 0x5A - flags set for next jcc */
    eax = ebp + -8;
    if (CMP_NE(LO8(eax), 0x5A)) goto loc_00474AF8; /* jne: not equal / not zero */

loc_00474ADD: ;
    ecx = MEM32(ebp + 8);
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0xFE00;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474AF6: ;
    g_seh_ebp = ebp; sub_00474B3D(); return; /* tail jmp 0x00474B3D */

loc_00474AF8: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474A33(); /* call 0x00474A33 */

loc_00474B03: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, 0x587030);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00474B12: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_00474B36(); return; /* tail jmp 0x00474B36 */

}

/**
 * sub_00474B42
 * Original: 0x00474B42 - 0x00474C5D (283 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474B42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474B42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = MEM32(0x75F98C);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM8(eax), 0)) { sub_00474C5D(); return; } /* je: equal / zero */

loc_00474B57: ;
    PUSH32(esp, 0); sub_004734A6(); /* call 0x004734A6 */

loc_00474B5C: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_00474B66; /* jge: greater or equal (signed >=) */

loc_00474B62: ;
    edi = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */

loc_00474B66: ;
    if (TEST_NZ(edi, edi)) goto loc_00474B9D; /* jne: not equal / not zero */

loc_00474B68: ;
    eax = ebp + -16;
    PUSH32(esp, 0x5D);
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0); sub_00474205(); /* call 0x00474205 */

loc_00474B7E: ;
    ecx = eax;
    PUSH32(esp, 0); sub_004743C7(); /* call 0x004743C7 */

loc_00474B85: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00474B8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00477691(); /* call 0x00477691 */

loc_00474B95: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00474B97: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00474B9D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0xFE00;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(MEM8(esi + 4), 0x80)) goto loc_00474BBE; /* je: equal / zero */

loc_00474BB1: ;
    PUSH32(esp, 0x586EF8);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_00474BBE: ;
    PUSH32(esp, 0x5D);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047487E(); /* call 0x0047487E */

loc_00474BCF: ;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, 0x5B);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_00474BDB: ;
    esp = esp + 0x14;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00474BE5: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00474BEE: ;
    edi--;
    if ((edi != 0)) goto loc_00474BBE; /* jne: not equal / not zero */

loc_00474BF1: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00474BF8: ;
    if (TEST_NZ(eax, eax)) goto loc_00474C38; /* jne: not equal / not zero */

loc_00474BFC: ;
    (void)0; /* test MEM8(esi + 4), 0x80 - flags set for next jcc */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    if (TEST_Z(MEM8(esi + 4), 0x80)) goto loc_00474C0C; /* je: equal / zero */

loc_00474C0A: ;
    goto loc_00474C2A;

loc_00474C0C: ;
    PUSH32(esp, 0x29);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_00474C1E: ;
    esp = esp + 0xC;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00474C28: ;
    ecx = eax;

loc_00474C2A: ;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00474C2F: ;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00474C38: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477A04(); /* call 0x00477A04 */

loc_00474C45: ;
    MEM8(ebp + -12) = MEM8(ebp + -12) | 0x80;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474C57: ;
    POP32(esp, esi);
    goto loc_00474B97;

}

/**
 * sub_00474C9D
 * Original: 0x00474C9D - 0x00474CCE (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474C9D(void)
{
    uint32_t ebp;

loc_00474C9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, 0x27);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047487E(); /* call 0x0047487E */

loc_00474CB3: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_00474CBF: ;
    esp = esp + 0x14;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00474CC9: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00474CCE
 * Original: 0x00474CCE - 0x00474E3C (366 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474CCE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474CCE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474CDF: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00474CE7: ;
    if (TEST_Z(eax, eax)) goto loc_00474E04; /* je: equal / zero */

loc_00474CEF: ;
    eax = MEM32(0x75F98C);
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00474E04; /* je: equal / zero */

loc_00474CFD: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473B85(); /* call 0x00473B85 */

loc_00474D06: ;
    POP32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00474D1D: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00474D24: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00474D2D: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00474D35: ;
    if (TEST_Z(eax, eax)) goto loc_00474E2B; /* je: equal / zero */

loc_00474D3D: ;
    eax = MEM32(0x75F98C);
    if (CMP_EQ(MEM8(eax), 0x40)) goto loc_00474DFC; /* je: equal / zero */

loc_00474D4B: ;
    PUSH32(esp, 0x587040);
    goto loc_00474DB7;

loc_00474D52: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00474DCB; /* je: equal / zero */

loc_00474D5D: ;
    if (CMP_EQ(LO8(eax), 0x40)) goto loc_00474DCB; /* je: equal / zero */

loc_00474D61: ;
    PUSH32(esp, 0x27);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004768B0(); /* call 0x004768B0 */

loc_00474D70: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_00474D7C: ;
    esp = esp + 0x10;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00474D86: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00474D8F: ;
    edx = MEM32(0x75F98C);
    if (CMP_NE(MEM8(edx), 0x40)) goto loc_00474DA1; /* jne: not equal / not zero */

loc_00474D9A: ;
    edx++;
    MEM32(0x75F98C) = edx;

loc_00474DA1: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00474DA9: ;
    if (TEST_Z(eax, eax)) goto loc_00474DBF; /* je: equal / zero */

loc_00474DAD: ;
    if (CMP_EQ(MEM8(edx), 0x40)) goto loc_00474DBF; /* je: equal / zero */

loc_00474DB2: ;
    PUSH32(esp, 0x58703C);

loc_00474DB7: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_00474DBF: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00474DC7: ;
    if (TEST_NZ(eax, eax)) goto loc_00474D52; /* jne: not equal / not zero */

loc_00474DCB: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00474DD3: ;
    if (TEST_Z(eax, eax)) goto loc_00474DF2; /* je: equal / zero */

loc_00474DD7: ;
    eax = MEM32(0x75F98C);
    if (CMP_NE(MEM8(eax), 0)) goto loc_00474DE8; /* jne: not equal / not zero */

loc_00474DE1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_004740E4(); /* call 0x004740E4 */

loc_00474DE8: ;
    PUSH32(esp, 0x7D);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004745E3(); /* call 0x004745E3 */

loc_00474DF2: ;
    eax = MEM32(0x75F98C);
    if (CMP_NE(MEM8(eax), 0x40)) goto loc_00474E2B; /* jne: not equal / not zero */

loc_00474DFC: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    goto loc_00474E2B;

loc_00474E04: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00474E0C: ;
    if (TEST_Z(eax, eax)) goto loc_00474E2B; /* je: equal / zero */

loc_00474E10: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747C2(); /* call 0x004747C2 */

loc_00474E1F: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00474E2B: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474E37: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00474E3C
 * Original: 0x00474E3C - 0x00474ECD (145 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474E3C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474E3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_00474E4D: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    if (CMP_NE(LO8(eax), 0x40)) { sub_00474ECD(); return; } /* jne: not equal / not zero */

loc_00474E5E: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    if (CMP_NE(LO8(eax), 0x5F)) { sub_00474ECD(); return; } /* jne: not equal / not zero */

loc_00474E6F: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    eax = ebp + -16;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047487E(); /* call 0x0047487E */

loc_00474E80: ;
    eax = ebp + -16;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047487E(); /* call 0x0047487E */

loc_00474E8B: ;
    eax = MEM32(0x75F98C);
    SET_LO8(ecx, MEM8(eax));
    esp = esp + 0x10;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00474EAF; /* je: equal / zero */

loc_00474E99: ;
    if (CMP_EQ(LO8(ecx), 0x40)) goto loc_00474EAA; /* je: equal / zero */

loc_00474E9E: ;
    eax++;
    MEM32(0x75F98C) = eax;
    SET_LO8(ecx, MEM8(eax));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00474E99; /* jne: not equal / not zero */

loc_00474EAA: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00474EB9; /* jne: not equal / not zero */

loc_00474EAF: ;
    eax--;
    MEM32(0x75F98C) = eax;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_00474ECF(); return; /* tail jmp 0x00474ECF */

loc_00474EB9: ;
    ecx = MEM32(ebp + 8);
    eax++;
    MEM32(0x75F98C) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00474ECB: ;
    g_seh_ebp = ebp; sub_00474ED7(); return; /* tail jmp 0x00474ED7 */

}

/**
 * sub_00474EDC
 * Original: 0x00474EDC - 0x00474EF8 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474EDC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00474EDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00474EF8(); return; } /* jne: not equal / not zero */

loc_00474EEC: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_00474EF6: ;
    g_seh_ebp = ebp; sub_00474F27(); return; /* tail jmp 0x00474F27 */

}

/**
 * sub_00474F2C
 * Original: 0x00474F2C - 0x004750EC (448 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474F2C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00474F2C: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xAC;
    eax = MEM32(0x75F98C);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    eax = eax - 0;
    if ((eax == 0)) goto loc_004750D4; /* je: equal / zero */

loc_00474F4E: ;
    eax = eax - 0x30;
    if ((eax == 0)) goto loc_004750C9; /* je: equal / zero */

loc_00474F57: ;
    eax--;
    if ((eax == 0)) goto loc_00475086; /* je: equal / zero */

loc_00474F5E: ;
    eax--;
    if ((eax == 0)) goto loc_00474FFD; /* je: equal / zero */

loc_00474F65: ;
    eax = eax - 0x12;
    if ((eax == 0)) goto loc_00474F76; /* je: equal / zero */

loc_00474F6A: ;
    eax--;
    if ((eax == 0)) goto loc_00474FB3; /* je: equal / zero */

loc_00474F6D: ;
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00475043; /* jne: not equal / not zero */

loc_00474F76: ;
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_00474F7F: ;
    (void)0; /* test MEM8(0x75F99D), 0x40 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(MEM8(0x75F99D), 0x40)) goto loc_00474FC0; /* je: equal / zero */

loc_00474F89: ;
    PUSH32(esp, 0x10);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_00473D3E(); /* call 0x00473D3E */

loc_00474F97: ;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_00474FA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x75F9A0), _icall_esp); /* indirect call */
    }

loc_00474FA7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00474FC0; /* je: equal / zero */

loc_00474FAD: ;
    PUSH32(esp, eax);
    goto loc_0047509B;

loc_00474FB3: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0); sub_004766F6(); /* call 0x004766F6 */

loc_00474FBB: ;
    goto loc_004750D1;

loc_00474FC0: ;
    eax = MEM32(0x75F98C);
    (void)0; /* cmp MEM8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, 0x58705C);
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    if (CMP_NE(MEM8(eax), 0x44)) goto loc_00474FE0; /* jne: not equal / not zero */

loc_00474FD6: ;
    PUSH32(esp, 0x587048);
    eax = ebp + 0x3C;
    goto loc_00474FE8;

loc_00474FE0: ;
    PUSH32(esp, 0x586FD4);
    eax = ebp + 0x2C;

loc_00474FE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00474FEE: ;
    esp = esp + 0xC;
    ecx = eax;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_00474FF8: ;
    goto loc_004750E4;

loc_00474FFD: ;
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_00475006: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_0047500F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00475019: ;
    if (TEST_Z(eax, eax)) goto loc_004750DA; /* je: equal / zero */

loc_00475021: ;
    ecx = ebp + 0x64;
    PUSH32(esp, 0); sub_00473CA1(); /* call 0x00473CA1 */

loc_00475029: ;
    if (TEST_Z(eax, eax)) goto loc_004750DA; /* je: equal / zero */

loc_00475031: ;
    PUSH32(esp, 0x64);
    eax = ebp + -55;
    PUSH32(esp, eax);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_00473D3E(); /* call 0x00473D3E */

loc_0047503F: ;
    if (TEST_NZ(eax, eax)) goto loc_0047504A; /* jne: not equal / not zero */

loc_00475043: ;
    PUSH32(esp, 1);
    goto loc_004750DC;

loc_0047504A: ;
    SET_LO8(eax, MEM8(ebp + -55));
    (void)0; /* cmp LO8(eax), 0x2D - flags set for next jcc */
    MEM8(ebp + -56) = LO8(eax);
    if (CMP_NE(LO8(eax), 0x2D)) goto loc_00475060; /* jne: not equal / not zero */

loc_00475054: ;
    SET_LO8(eax, MEM8(ebp + -54));
    MEM8(ebp + -55) = LO8(eax);
    MEM8(ebp + -54) = 0x2E;
    goto loc_00475064;

loc_00475060: ;
    MEM8(ebp + -55) = 0x2E;

loc_00475064: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x54;
    PUSH32(esp, 0x65);
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = ebp + 0x4C;
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_0047507D: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00475084: ;
    goto loc_004750C0;

loc_00475086: ;
    eax = MEM32(0x75F98C);
    if (CMP_NE(MEM8(eax), 0x40)) goto loc_004750A5; /* jne: not equal / not zero */

loc_00475090: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    PUSH32(esp, 0x5E7284);

loc_0047509B: ;
    ecx = MEM32(ebp + 0x7C);
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_004750A3: ;
    goto loc_004750E4;

loc_004750A5: ;
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004766F6(); /* call 0x004766F6 */

loc_004750AE: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = ebp + 0x34;
    PUSH32(esp, 0x586ED4);
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_004750C0: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_004750C7: ;
    goto loc_004750E4;

loc_004750C9: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_004750D1: ;
    POP32(esp, ecx);
    goto loc_004750E4;

loc_004750D4: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) - 1;

loc_004750DA: ;
    PUSH32(esp, 2);

loc_004750DC: ;
    ecx = MEM32(ebp + 0x7C);
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_004750E4: ;
    eax = MEM32(ebp + 0x7C);
    ebp = ebp + 0x74;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004750EC
 * Original: 0x004750EC - 0x00475196 (170 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004750EC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004750EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00475196(); return; } /* je: equal / zero */

loc_00475100: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0047513B; /* je: equal / zero */

loc_00475106: ;
    if (CMP_NE(LO8(eax), 0x58)) goto loc_0047513B; /* jne: not equal / not zero */

loc_0047510A: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00475118: ;
    if (TEST_Z(eax, eax)) goto loc_0047512B; /* je: equal / zero */

loc_0047511C: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x587020);
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_00475129: ;
    g_seh_ebp = ebp; sub_004751A6(); return; /* tail jmp 0x004751A6 */

loc_0047512B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x587068);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00475139: ;
    g_seh_ebp = ebp; sub_004751A3(); return; /* tail jmp 0x004751A3 */

loc_0047513B: ;
    if (CMP_NE(LO8(eax), 0x59)) goto loc_00475152; /* jne: not equal / not zero */

loc_0047513F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00474B42(); /* call 0x00474B42 */

loc_00475150: ;
    goto loc_00475192;

loc_00475152: ;
    if (CMP_NE(LO8(eax), 0x5F)) goto loc_00475187; /* jne: not equal / not zero */

loc_00475156: ;
    eax = MEM32(0x75F98C);
    if (CMP_NE(MEM8(eax + 1), 0x5A)) goto loc_00475187; /* jne: not equal / not zero */

loc_00475161: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(0x75F98C) = MEM32(0x75F98C) + 2;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477691(); /* call 0x00477691 */

loc_00475174: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587060);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00475182: ;
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_004751A6(); return; /* tail jmp 0x004751A6 */

loc_00475187: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00477691(); /* call 0x00477691 */

loc_00475192: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004751A6(); return; /* tail jmp 0x004751A6 */

}

/**
 * sub_004751AB
 * Original: 0x004751AB - 0x00475348 (413 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004751AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004751AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFFFE00u;
    MEM32(ebp + -16) = MEM32(ebp + -16) & esi;
    ebx = 0; /* xor self */
    (void)0; /* test MEM8(ebp + -16), 0xF - flags set for next jcc */
    MEM32(ebp + -4) = 1;
    MEM32(ebp + -20) = ebx;
    if (TEST_NZ(MEM8(ebp + -16), 0xF)) goto loc_00475335; /* jne: not equal / not zero */

loc_004751D1: ;
    PUSH32(esp, edi);

loc_004751D2: ;
    eax = MEM32(0x75F98C);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00475334; /* je: equal / zero */

loc_004751E1: ;
    if (CMP_EQ(LO8(ecx), 0x40)) goto loc_00475334; /* je: equal / zero */

loc_004751EA: ;
    if (CMP_EQ(MEM32(ebp + -4), ebx)) goto loc_004751F4; /* je: equal / zero */

loc_004751EF: ;
    MEM32(ebp + -4) = ebx;
    goto loc_00475203;

loc_004751F4: ;
    PUSH32(esp, 0x2C);
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_004745E3(); /* call 0x004745E3 */

loc_004751FE: ;
    eax = MEM32(0x75F98C);

loc_00475203: ;
    SET_LO8(edx, MEM8(eax));
    ecx = SX8(LO8(edx));
    ecx = ecx - 0x30;
    if (((int32_t)ecx < 0)) goto loc_00475229; /* js: sign (negative) */

loc_0047520D: ;
    if (CMP_G(ecx, 9)) goto loc_00475229; /* jg: greater (signed >) */

loc_00475212: ;
    eax++;
    PUSH32(esp, ecx);
    ecx = MEM32(0x75F988);
    MEM32(0x75F98C) = eax;
    PUSH32(esp, 0); sub_00473A8F(); /* call 0x00473A8F */

loc_00475224: ;
    goto loc_00475321;

loc_00475229: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & esi;
    (void)0; /* cmp LO8(edx), 0x58 - flags set for next jcc */
    edi = eax;
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(LO8(edx), 0x58)) goto loc_00475243; /* jne: not equal / not zero */

loc_00475236: ;
    eax++;
    MEM32(0x75F98C) = eax;
    PUSH32(esp, 0x587020);
    goto loc_0047529D;

loc_00475243: ;
    if (CMP_NE(LO8(edx), 0x24)) goto loc_00475260; /* jne: not equal / not zero */

loc_00475248: ;
    eax++;
    if (CMP_EQ(MEM8(eax), LO8(edx))) goto loc_00475260; /* je: equal / zero */

loc_0047524D: ;
    MEM32(0x75F98C) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474F2C(); /* call 0x00474F2C */

loc_0047525B: ;
    goto loc_004752F4;

loc_00475260: ;
    if (CMP_NE(LO8(edx), 0x3F)) goto loc_004752E0; /* jne: not equal / not zero */

loc_00475265: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_0047526E: ;
    (void)0; /* test MEM8(0x75F99D), 0x40 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(MEM8(0x75F99D), 0x40)) goto loc_004752B9; /* je: equal / zero */

loc_00475278: ;
    PUSH32(esp, 0x10);
    eax = ebp + -100;
    PUSH32(esp, eax);
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_00473D3E(); /* call 0x00473D3E */

loc_00475286: ;
    eax = ebp + -100;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_0047528F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x75F9A0), _icall_esp); /* indirect call */
    }

loc_00475296: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(eax, ebx)) goto loc_004752A7; /* je: equal / zero */

loc_0047529C: ;
    PUSH32(esp, eax);

loc_0047529D: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004752A5: ;
    goto loc_004752FE;

loc_004752A7: ;
    PUSH32(esp, 0x58705C);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -60;
    goto loc_004752C9;

loc_004752B9: ;
    PUSH32(esp, 0x58705C);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -76;

loc_004752C9: ;
    PUSH32(esp, 0x587048);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_004752D4: ;
    esp = esp + 0xC;
    ecx = eax;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_004752DE: ;
    goto loc_004752F5;

loc_004752E0: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) & esi;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = ebx;
    PUSH32(esp, 0); sub_00477A04(); /* call 0x00477A04 */

loc_004752F3: ;
    POP32(esp, ecx);

loc_004752F4: ;
    POP32(esp, ecx);

loc_004752F5: ;
    ecx = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004752FE: ;
    eax = MEM32(0x75F98C);
    eax = eax - edi;
    if (CMP_LE(eax, 1)) goto loc_0047531E; /* jle: less or equal (signed <=) */

loc_0047530A: ;
    ecx = MEM32(0x75F988);
    if (CMP_EQ(MEM32(ecx), 9)) goto loc_0047531E; /* je: equal / zero */

loc_00475315: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473EA3(); /* call 0x00473EA3 */

loc_0047531E: ;
    eax = ebp + -12;

loc_00475321: ;
    ecx = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_0047532A: ;
    if (TEST_Z(MEM8(ebp + -16), 0xF)) goto loc_004751D2; /* je: equal / zero */

loc_00475334: ;
    POP32(esp, edi);

loc_00475335: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00475341: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00475348
 * Original: 0x00475348 - 0x0047543B (243 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475348(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00475348: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xCC;
    eax = MEM32(0x75F98C);
    if (CMP_NE(MEM8(eax), 0x3F)) { sub_0047543B(); return; } /* jne: not equal / not zero */

loc_00475361: ;
    if (CMP_NE(MEM8(eax + 1), 0x24)) { sub_0047543B(); return; } /* jne: not equal / not zero */

loc_0047536B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x75F988);
    PUSH32(esp, esi);
    esi = MEM32(0x75F97C);
    eax++;
    eax++;
    PUSH32(esp, edi);
    edi = MEM32(0x75F984);
    ecx = ebp + 0x20;
    MEM32(0x75F98C) = eax;
    PUSH32(esp, 0); sub_00473E85(); /* call 0x00473E85 */

loc_0047538F: ;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_00473E85(); /* call 0x00473E85 */

loc_00475397: ;
    ecx = ebp + -88;
    PUSH32(esp, 0); sub_00473E85(); /* call 0x00473E85 */

loc_0047539F: ;
    eax = ebp + 0x20;
    MEM32(0x75F97C) = eax;
    eax = ebp + -28;
    MEM32(0x75F984) = eax;
    eax = ebp + -88;
    MEM32(0x75F988) = eax;
    eax = ebp + 0x6C;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047544D(); /* call 0x0047544D */

loc_004753C2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004753CC: ;
    if (TEST_Z(eax, eax)) goto loc_004753D7; /* je: equal / zero */

loc_004753D0: ;
    MEM8(0x75F980) = 1;

loc_004753D7: ;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004751AB(); /* call 0x004751AB */

loc_004753E0: ;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_004753EC: ;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_004753F8: ;
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_00473D06(); /* call 0x00473D06 */

loc_00475400: ;
    if (CMP_NE(LO8(eax), 0x3E)) goto loc_0047540E; /* jne: not equal / not zero */

loc_00475404: ;
    PUSH32(esp, 0x20);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_004745E3(); /* call 0x004745E3 */

loc_0047540E: ;
    PUSH32(esp, 0x3E);
    ecx = ebp + 0x6C;
    PUSH32(esp, 0); sub_004745E3(); /* call 0x004745E3 */

loc_00475418: ;
    ecx = MEM32(ebp + 0x7C);
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    MEM32(0x75F97C) = esi;
    MEM32(0x75F984) = edi;
    MEM32(0x75F988) = ebx;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00475436: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00475445(); return; /* tail jmp 0x00475445 */

}

/**
 * sub_0047544D
 * Original: 0x0047544D - 0x0047547E (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047544D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047544D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    eax = MEM32(0x75F98C);
    SET_LO8(edx, MEM8(eax));
    ecx = SX8(LO8(edx));
    ecx = ecx - 0x30;
    if (((int32_t)ecx < 0)) { sub_0047547E(); return; } /* js: sign (negative) */

loc_00475462: ;
    if (CMP_G(ecx, 9)) { sub_0047547E(); return; } /* jg: greater (signed >) */

loc_00475467: ;
    eax++;
    PUSH32(esp, ecx);
    ecx = MEM32(0x75F984);
    MEM32(0x75F98C) = eax;
    PUSH32(esp, 0); sub_00473A8F(); /* call 0x00473A8F */

loc_00475479: ;
    g_seh_ebp = ebp; sub_00475607(); return; /* tail jmp 0x00475607 */

}

/**
 * sub_00475615
 * Original: 0x00475615 - 0x00475A45 (1072 bytes, 329 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475615(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00475615: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    eax = 0xFFFFFE00u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & eax;
    eax = MEM32(0x75F98C);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0x41);
    esi = 0; /* xor self */
    eax++;
    POP32(esp, edx);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(0x75F98C) = eax;
    if (CMP_G(ecx, edx)) goto loc_004756D7; /* jg: greater (signed >) */

loc_0047564E: ;
    if (CMP_EQ(ecx, edx)) goto loc_00475A1C; /* je: equal / zero */

loc_00475654: ;
    if (CMP_EQ(ecx, edi)) goto loc_004756CA; /* je: equal / zero */

loc_00475658: ;
    if (CMP_LE(ecx, 0x2F)) goto loc_00475788; /* jle: less or equal (signed <=) */

loc_00475661: ;
    if (CMP_LE(ecx, 0x31)) goto loc_0047567F; /* jle: less or equal (signed <=) */

loc_00475666: ;
    if (CMP_G(ecx, 0x39)) goto loc_00475788; /* jg: greater (signed >) */

loc_0047566F: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x5868D8));
    goto loc_004759D4;

loc_0047567F: ;
    esi = eax;
    eax = ebp + -32;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047544D(); /* call 0x0047544D */

loc_0047568B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475696: ;
    ecx = ebp + -8;
    MEM32(0x75F98C) = esi;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004756A4: ;
    if (TEST_NZ(eax, eax)) goto loc_00475A06; /* jne: not equal / not zero */

loc_004756AC: ;
    if (CMP_NE(MEM8(esi + -1), 0x31)) goto loc_00475A06; /* jne: not equal / not zero */

loc_004756B6: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, 0x7E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_004756C5: ;
    goto loc_004759FA;

loc_004756CA: ;
    eax--;
    MEM32(0x75F98C) = eax;

loc_004756D0: ;
    PUSH32(esp, 2);
    goto loc_0047578A;

loc_004756D7: ;
    if (CMP_EQ(ecx, 0x42)) goto loc_00475A19; /* je: equal / zero */

loc_004756E0: ;
    if (CMP_LE(ecx, 0x42)) goto loc_00475788; /* jle: less or equal (signed <=) */

loc_004756E6: ;
    if (CMP_LE(ecx, 0x5A)) goto loc_00475A1C; /* jle: less or equal (signed <=) */

loc_004756EF: ;
    if (CMP_NE(ecx, 0x5F)) goto loc_00475788; /* jne: not equal / not zero */

loc_004756F8: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax++;
    (void)0; /* cmp ecx, 0x4F - flags set for next jcc */
    MEM32(0x75F98C) = eax;
    if (CMP_G(ecx, 0x4F)) goto loc_004757B6; /* jg: greater (signed >) */

loc_0047570A: ;
    if (CMP_GE(ecx, 0x4C)) goto loc_004759B4; /* jge: greater or equal (signed >=) */

loc_00475713: ;
    if (CMP_G(ecx, 0x3F)) goto loc_0047576B; /* jg: greater (signed >) */

loc_00475718: ;
    if (CMP_EQ(ecx, 0x3F)) goto loc_0047574D; /* je: equal / zero */

loc_0047571A: ;
    if (CMP_EQ(ecx, edi)) goto loc_004756CA; /* je: equal / zero */

loc_0047571E: ;
    if (CMP_LE(ecx, 0x2F)) goto loc_00475788; /* jle: less or equal (signed <=) */

loc_00475723: ;
    if (CMP_LE(ecx, 0x36)) goto loc_0047573D; /* jle: less or equal (signed <=) */

loc_00475728: ;
    if (CMP_G(ecx, 0x39)) goto loc_00475788; /* jg: greater (signed >) */

loc_0047572D: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x586968));
    goto loc_004759BF;

loc_0047573D: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x586968));
    goto loc_004759D4;

loc_0047574D: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x75F98C) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_004756CA; /* je: equal / zero */

loc_0047575E: ;
    if (CMP_NE(ecx, 0x30)) goto loc_00475788; /* jne: not equal / not zero */

loc_00475763: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x587098);
    goto loc_0047579E;

loc_0047576B: ;
    if (CMP_L(ecx, edx)) goto loc_00475788; /* jl: less (signed <) */

loc_0047576F: ;
    if (CMP_LE(ecx, 0x42)) goto loc_004759B4; /* jle: less or equal (signed <=) */

loc_00475778: ;
    if (CMP_EQ(ecx, 0x43)) goto loc_00475797; /* je: equal / zero */

loc_0047577D: ;
    if (CMP_LE(ecx, 0x43)) goto loc_00475788; /* jle: less or equal (signed <=) */

loc_0047577F: ;
    if (CMP_LE(ecx, 0x4A)) goto loc_004759B4; /* jle: less or equal (signed <=) */

loc_00475788: ;
    PUSH32(esp, 1);

loc_0047578A: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_00475792: ;
    goto loc_00475A12;

loc_00475797: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x586E2C);

loc_0047579E: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474E3C(); /* call 0x00474E3C */

loc_004757A7: ;
    esp = esp + 0xC;
    MEM8(ebp + -19) = MEM8(ebp + -19) | 1;
    eax = ebp + -24;
    goto loc_00475A09;

loc_004757B6: ;
    if (CMP_G(ecx, 0x54)) goto loc_00475968; /* jg: greater (signed >) */

loc_004757BF: ;
    if (CMP_GE(ecx, 0x53)) goto loc_004759B4; /* jge: greater or equal (signed >=) */

loc_004757C8: ;
    ecx = ecx - 0x50;
    if ((ecx == 0)) goto loc_0047590F; /* je: equal / zero */

loc_004757D1: ;
    ecx--;
    if ((ecx == 0)) goto loc_004759DC; /* je: equal / zero */

loc_004757D8: ;
    ecx--;
    if ((ecx != 0)) goto loc_00475788; /* jne: not equal / not zero */

loc_004757DB: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x58694C));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004757EE: ;
    eax = MEM32(0x75F98C);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    PUSH32(esp, MEM32(eax * 4 + 0x586A08));
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00475805: ;
    eax = MEM32(0x75F98C);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    if (CMP_EQ(eax, 0x30)) goto loc_004758DB; /* je: equal / zero */

loc_0047581C: ;
    if (CMP_EQ(eax, 0x31)) goto loc_00475837; /* je: equal / zero */

loc_00475821: ;
    if (CMP_LE(eax, 0x31)) goto loc_0047582C; /* jle: less or equal (signed <=) */

loc_00475823: ;
    if (CMP_LE(eax, 0x34)) goto loc_00475954; /* jle: less or equal (signed <=) */

loc_0047582C: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) - 1;
    goto loc_004756D0;

loc_00475837: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00475847: ;
    PUSH32(esp, 0x2C);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_00475856: ;
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_0047585E: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00475867: ;
    PUSH32(esp, 0x2C);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_00475876: ;
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_0047587E: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00475887: ;
    PUSH32(esp, 0x2C);
    eax = ebp + -80;
    PUSH32(esp, eax);
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474EDC(); /* call 0x00474EDC */

loc_00475896: ;
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_0047589E: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_004758A7: ;
    PUSH32(esp, 0x29);
    eax = ebp + -96;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047487E(); /* call 0x0047487E */

loc_004758B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_004758C0: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_004758C9: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_004758D6: ;
    goto loc_00475A12;

loc_004758DB: ;
    eax = ebp + -24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477B34(); /* call 0x00477B34 */

loc_004758E5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    eax = ebp + -120;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00475904: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_0047590B: ;
    ecx = eax;
    goto loc_0047595E;

loc_0047590F: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x58694C));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00475922: ;
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475615(); /* call 0x00475615 */

loc_0047592B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475935: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_0047593D: ;
    if (TEST_NZ(eax, eax)) goto loc_00475954; /* jne: not equal / not zero */

loc_00475941: ;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00475946: ;
    if (TEST_NZ(eax, eax)) goto loc_00475954; /* jne: not equal / not zero */

loc_0047594A: ;
    if (TEST_NZ(MEM8(ebp + -12), 0x40)) goto loc_00475788; /* jne: not equal / not zero */

loc_00475954: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -8;

loc_0047595E: ;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00475963: ;
    goto loc_00475A12;

loc_00475968: ;
    if (CMP_L(ecx, 0x55)) goto loc_00475788; /* jl: less (signed <) */

loc_00475971: ;
    if (CMP_LE(ecx, 0x56)) goto loc_004759C9; /* jle: less or equal (signed <=) */

loc_00475976: ;
    if (CMP_LE(ecx, 0x57)) goto loc_00475788; /* jle: less or equal (signed <=) */

loc_0047597F: ;
    if (CMP_LE(ecx, 0x59)) goto loc_004759B4; /* jle: less or equal (signed <=) */

loc_00475984: ;
    if (CMP_NE(ecx, 0x5F)) goto loc_00475788; /* jne: not equal / not zero */

loc_0047598D: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax++;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(0x75F98C) = eax;
    if (CMP_L(ecx, edx)) goto loc_00475788; /* jl: less (signed <) */

loc_0047599E: ;
    if (CMP_G(ecx, 0x44)) goto loc_00475788; /* jg: greater (signed >) */

loc_004759A7: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x5869B0));
    goto loc_004759BF;

loc_004759B4: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x58694C));

loc_004759BF: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_004759C7: ;
    goto loc_00475A12;

loc_004759C9: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x58694C));

loc_004759D4: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004759DC: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004759E4: ;
    if (TEST_NZ(eax, eax)) goto loc_00475A06; /* jne: not equal / not zero */

loc_004759E8: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -128;
    PUSH32(esp, 0x586EEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_004759FA: ;
    esp = esp + 0xC;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475A06: ;
    eax = ebp + -8;

loc_00475A09: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00475A12: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00475A19: ;
    esi = 0; /* xor self */
    esi++;

loc_00475A1C: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + -1);
    PUSH32(esp, MEM32(eax * 4 + 0x5868BC));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00475A2F: ;
    if (CMP_EQ(esi, edi)) goto loc_004759DC; /* je: equal / zero */

loc_00475A33: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00475A3B: ;
    if (TEST_NZ(eax, eax)) goto loc_00475A06; /* jne: not equal / not zero */

loc_00475A3F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x20;
    goto loc_00475A06;

}

/**
 * sub_00475A45
 * Original: 0x00475A45 - 0x00475ACF (138 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475A45(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00475A45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0xFE00;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047544D(); /* call 0x0047544D */

loc_00475A61: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475A6C: ;
    eax = MEM32(ebp + -4);
    (void)0; /* test LO8(eax), 0xF - flags set for next jcc */
    esi = 0x5870B0;
    if (TEST_NZ(LO8(eax), 0xF)) goto loc_00475ABA; /* jne: not equal / not zero */

loc_00475A78: ;
    ecx = MEM32(0x75F98C);
    SET_LO8(ecx, MEM8(ecx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00475ABA; /* je: equal / zero */

loc_00475A84: ;
    if (CMP_EQ(LO8(ecx), 0x40)) goto loc_00475AC7; /* je: equal / zero */

loc_00475A89: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004768B0(); /* call 0x004768B0 */

loc_00475A9F: ;
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_00475AA7: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00475AAE: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475AB7: ;
    eax = MEM32(ebp + -4);

loc_00475ABA: ;
    ecx = MEM32(0x75F98C);
    SET_LO8(ecx, MEM8(ecx));
    if (CMP_NE(LO8(ecx), 0x40)) { sub_00475ACF(); return; } /* jne: not equal / not zero */

loc_00475AC7: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    g_seh_ebp = ebp; sub_00475B2F(); return; /* tail jmp 0x00475B2F */

}

/**
 * sub_00475B41
 * Original: 0x00475B41 - 0x00475C26 (229 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475B41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00475B41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(0x75F99C);
    PUSH32(esp, ebx);
    ecx = eax;
    ecx = ecx >> 0xF;
    ebx = 0; /* xor self */
    ecx = ~ecx;
    ebx++;
    ecx = ecx & ebx;
    PUSH32(esp, esi);
    if ((ecx == 0)) goto loc_00475B61; /* je: equal / zero */

loc_00475B5C: ;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00475B63; /* je: equal / zero */

loc_00475B61: ;
    ebx = 0; /* xor self */

loc_00475B63: ;
    eax = MEM32(0x75F98C);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    esi = 0xFFFFFE00u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & esi;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    eax = eax - 0;
    if ((eax == 0)) { sub_00475C26(); return; } /* je: equal / zero */

loc_00475B86: ;
    eax = eax - 0x54;
    if ((eax == 0)) goto loc_00475BDE; /* je: equal / zero */

loc_00475B8B: ;
    eax--;
    if ((eax == 0)) goto loc_00475BD7; /* je: equal / zero */

loc_00475B8E: ;
    eax--;
    if ((eax == 0)) goto loc_00475BD0; /* je: equal / zero */

loc_00475B91: ;
    eax--;
    if ((eax == 0)) goto loc_00475BA8; /* je: equal / zero */

loc_00475B94: ;
    eax--;
    if ((eax == 0)) goto loc_00475BA1; /* je: equal / zero */

loc_00475B97: ;
    eax--;
    if ((eax != 0)) goto loc_00475BEB; /* jne: not equal / not zero */

loc_00475B9A: ;
    PUSH32(esp, 0x5870F0);
    goto loc_00475BE3;

loc_00475BA1: ;
    PUSH32(esp, 0x5870E4);
    goto loc_00475BE3;

loc_00475BA8: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0); sub_00474962(); /* call 0x00474962 */

loc_00475BB3: ;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, 0x5870DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00475BC2: ;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475BCE: ;
    goto loc_00475BEB;

loc_00475BD0: ;
    PUSH32(esp, 0x5870D4);
    goto loc_00475BE3;

loc_00475BD7: ;
    PUSH32(esp, 0x5870CC);
    goto loc_00475BE3;

loc_00475BDE: ;
    PUSH32(esp, 0x5870C4);

loc_00475BE3: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00475BEB: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -12) = MEM32(ebp + -12) & esi;
    if (TEST_Z(ebx, ebx)) goto loc_00475C02; /* je: equal / zero */

loc_00475BF6: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00475C02: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475A45(); /* call 0x00475A45 */

loc_00475C0B: ;
    POP32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00475C18: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00475C24: ;
    g_seh_ebp = ebp; sub_00475C39(); return; /* tail jmp 0x00475C39 */

}

/**
 * sub_00475C40
 * Original: 0x00475C40 - 0x00475C5B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00475C40: ;
    eax = MEM32(0x75F98C);
    if (CMP_NE(MEM8(eax), 0x3F)) { sub_00475C5B(); return; } /* jne: not equal / not zero */

loc_00475C4A: ;
    PUSH32(esp, MEM32(esp + 4));
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    PUSH32(esp, 0); sub_00475615(); /* call 0x00475615 */

loc_00475C59: ;
    g_seh_ebp = ebp; sub_00475C67(); return; /* tail jmp 0x00475C67 */

}

/**
 * sub_00475C6D
 * Original: 0x00475C6D - 0x00475CFF (146 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475C6D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00475C6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_00475C7A: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_00475C86: ;
    eax = MEM32(0x75F98C);
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00475CD7; /* je: equal / zero */

loc_00475C90: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax++;
    ecx = ecx - 0x30;
    MEM32(0x75F98C) = eax;
    if ((ecx == 0)) goto loc_00475CC8; /* je: equal / zero */

loc_00475C9E: ;
    ecx--;
    ecx--;
    if ((ecx == 0)) goto loc_00475CB3; /* je: equal / zero */

loc_00475CA2: ;
    ecx = ecx - 3;
    if ((ecx != 0)) goto loc_00475CE1; /* jne: not equal / not zero */

loc_00475CA7: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_00475CB1: ;
    goto loc_00475CFA;

loc_00475CB3: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475A45(); /* call 0x00475A45 */

loc_00475CBC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00475CC6: ;
    goto loc_00475CE1;

loc_00475CC8: ;
    PUSH32(esp, 0x587020);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_00475CD5: ;
    goto loc_00475CE1;

loc_00475CD7: ;
    PUSH32(esp, 2);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004740E4(); /* call 0x004740E4 */

loc_00475CE1: ;
    PUSH32(esp, 0x587100);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_00475CEE: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00475CFA: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00475CFF
 * Original: 0x00475CFF - 0x00475D3C (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475CFF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00475CFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xFFFFFE00u;
    MEM32(ebp + -28) = MEM32(ebp + -28) & edi;
    PUSH32(esp, 0); sub_00473509(); /* call 0x00473509 */

loc_00475D18: ;
    ecx = MEM32(ebp + 0xC);
    esi = eax;
    PUSH32(esp, 0); sub_00473CCD(); /* call 0x00473CCD */

loc_00475D22: ;
    (void)0; /* cmp esi, 0xFFFF - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_NE(esi, 0xFFFF)) { sub_00475D3C(); return; } /* jne: not equal / not zero */

loc_00475D2D: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00473C41(); /* call 0x00473C41 */

loc_00475D37: ;
    g_seh_ebp = ebp; sub_004766EF(); return; /* tail jmp 0x004766EF */

}

/**
 * sub_004766F6
 * Original: 0x004766F6 - 0x0047672C (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004766F6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004766F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = 0x2000;
    if (TEST_Z(MEM32(0x75F99C), esi)) { sub_0047672C(); return; } /* je: equal / zero */

loc_0047670A: ;
    MEM8(0x75F99D) = MEM8(0x75F99D) & 0xDF;
    eax = ebp + -16;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477B34(); /* call 0x00477B34 */

loc_0047671C: ;
    MEM32(0x75F99C) = MEM32(0x75F99C) | esi;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_0047687D(); return; /* tail jmp 0x0047687D */

}

/**
 * sub_004768B0
 * Original: 0x004768B0 - 0x004768D8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004768B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004768B0: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x98;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    PUSH32(esp, ebx);
    eax = eax & 0xFFFFFE00u;
    PUSH32(esp, esi);
    MEM32(ebp + 0x70) = eax;
    SET_LO8(ebx, 0); /* xor self */
    esi = 0x5870B0;
    g_seh_ebp = ebp; sub_00476ABC(); return; /* tail jmp 0x00476ABC */

}

/**
 * sub_00476B47
 * Original: 0x00476B47 - 0x00476B6D (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476B47(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00476B47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    eax = MEM32(0x75F98C);
    SET_LO8(ecx, MEM8(eax));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00476B6D(); return; } /* jne: not equal / not zero */

loc_00476B58: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004747C2(); /* call 0x004747C2 */

loc_00476B65: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00476E83(); return; /* tail jmp 0x00476E83 */

}

/**
 * sub_00476E88
 * Original: 0x00476E88 - 0x0047733F (1207 bytes, 411 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476E88(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00476E88: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    ecx = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(ecx));
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFFFE00u;
    MEM32(ebp + -20) = MEM32(ebp + -20) & esi;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0047733F(); return; } /* je: equal / zero */

loc_00476EAC: ;
    if (CMP_NE(LO8(eax), 0x24)) goto loc_00476F70; /* jne: not equal / not zero */

loc_00476EB4: ;
    ecx++;
    MEM32(0x75F98C) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    ecx++;
    eax = eax - 0x30;
    MEM32(0x75F98C) = ecx;
    if ((eax == 0)) goto loc_00476F08; /* je: equal / zero */

loc_00476ECA: ;
    eax--;
    if ((eax == 0)) goto loc_00476EF2; /* je: equal / zero */

loc_00476ECD: ;
    eax = eax - 0x10;
    if ((eax == 0)) goto loc_00476EEB; /* je: equal / zero */

loc_00476ED2: ;
    eax--;
    if ((eax != 0)) goto loc_00476F70; /* jne: not equal / not zero */

loc_00476ED9: ;
    PUSH32(esp, 0x587224);

loc_00476EDE: ;
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00476EE6: ;
    goto loc_00476F70;

loc_00476EEB: ;
    PUSH32(esp, 0x58721C);
    goto loc_00476EDE;

loc_00476EF2: ;
    PUSH32(esp, 0x587210);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00476EFF: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 2;
    goto loc_00476F6C;

loc_00476F08: ;
    ebx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 1);
    ebx = ebx + 0xFFFFFCD;
    ebx = ebx << 4;
    ebx = ebx + eax;
    ecx++;
    ecx++;
    MEM32(0x75F98C) = ecx;
    PUSH32(esp, 0x587208);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00476F2F: ;
    if (CMP_BE(ebx, 1)) goto loc_00476F52; /* jbe: below or equal (unsigned <=) */

loc_00476F34: ;
    ebx--;

loc_00476F35: ;
    PUSH32(esp, 0x586EB8);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_00476F46: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00476F4F: ;
    ebx--;
    if ((ebx != 0)) goto loc_00476F35; /* jne: not equal / not zero */

loc_00476F52: ;
    PUSH32(esp, 0x587204);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_00476F63: ;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00476F6C: ;
    MEM8(ebp + 0x10) = 0;

loc_00476F70: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 0x41 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(LO8(eax), 0x41)) ? 1 : 0); /* setl */
    MEM32(ebp + -12) = MEM32(ebp + -12) & esi;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    ebx = SX8(LO8(eax));
    ecx--;
    ecx = ecx & 0x2B;
    ecx = ecx + 0x16;
    ebx = ebx - ecx;
    MEM32(ebp + -28) = MEM32(ebp + -28) & esi;
    PUSH32(esp, 0x20);
    POP32(esp, esi);

loc_00476F9B: ;
    eax = ebx;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0047705D; /* je: equal / zero */

loc_00476FA6: ;
    eax--;
    if ((eax == 0)) goto loc_00476FE6; /* je: equal / zero */

loc_00476FA9: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_004770BD; /* jne: not equal / not zero */

loc_00476FB2: ;
    eax = MEM32(0x75F99C);
    eax = eax >> 1;
    eax = ~eax;
    if (TEST_Z(LO8(eax), 1)) goto loc_00477038; /* je: equal / zero */

loc_00476FBF: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00476FC7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 8);
    if (TEST_NZ(eax, eax)) goto loc_004770B0; /* jne: not equal / not zero */

loc_00476FD1: ;
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_00476FD6: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -40;
    goto loc_00477094;

loc_00476FE6: ;
    eax = MEM32(0x75F99C);
    eax = eax >> 1;
    eax = ~eax;
    if (TEST_Z(LO8(eax), 1)) goto loc_00477038; /* je: equal / zero */

loc_00476FF3: ;
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00476FFB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 9);
    if (TEST_NZ(eax, eax)) goto loc_00477027; /* jne: not equal / not zero */

loc_00477001: ;
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_00477006: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00477018: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_0047701F: ;
    ecx = ebp + -32;
    goto loc_004770A8;

loc_00477027: ;
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_0047702C: ;
    ecx = ebp + -32;

loc_0047702F: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_00477038: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 0x41 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(LO8(eax), 0x41)) ? 1 : 0); /* setl */
    ebx = SX8(LO8(eax));
    ecx--;
    ecx = ecx & 0x2B;
    ecx = ecx + 0x16;
    ebx = ebx - ecx;
    goto loc_00476F9B;

loc_0047705D: ;
    eax = MEM32(0x75F99C);
    ecx = eax;
    ecx = ecx >> 1;
    ecx = ~ecx;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00477038; /* je: equal / zero */

loc_0047706D: ;
    eax = eax >> 0x11;
    eax = ~eax;
    if (TEST_Z(LO8(eax), 1)) goto loc_00477038; /* je: equal / zero */

loc_00477076: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_0047707E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 7);
    if (TEST_NZ(eax, eax)) goto loc_004770B0; /* jne: not equal / not zero */

loc_00477084: ;
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_00477089: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -72;

loc_00477094: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_0047709E: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474842(); /* call 0x00474842 */

loc_004770A5: ;
    ecx = ebp + -16;

loc_004770A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004770AE: ;
    goto loc_00477038;

loc_004770B0: ;
    PUSH32(esp, 0); sub_0047391E(); /* call 0x0047391E */

loc_004770B5: ;
    ecx = ebp + -16;
    goto loc_0047702F;

loc_004770BD: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    if (CMP_A(ebx, 0x1F)) goto loc_0047733B; /* ja: above (unsigned >) */

loc_004770CC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474205(); /* call 0x00474205 */

loc_004770D7: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_004770E7: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004770F0: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004770F8: ;
    if (TEST_NZ(eax, eax)) goto loc_00477121; /* jne: not equal / not zero */

loc_004770FC: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -64;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00477111: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00477118: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477121: ;
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477129: ;
    if (TEST_NZ(eax, eax)) goto loc_0047714F; /* jne: not equal / not zero */

loc_0047712D: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_0047713F: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00477146: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_0047714F: ;
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_00477203; /* je: equal / zero */

loc_00477158: ;
    if (CMP_NE(MEM32(ebp + 0x18), 0)) goto loc_0047733B; /* jne: not equal / not zero */

loc_00477162: ;
    if (CMP_EQ(MEM8(ebp + 0x10), 0)) goto loc_004771C1; /* je: equal / zero */

loc_00477168: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, 0x5870B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_0047717A: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477186: ;
    eax = MEM32(0x75F98C);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_004771B4; /* je: equal / zero */

loc_00477197: ;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004768B0(); /* call 0x004768B0 */

loc_004771A1: ;
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_004771A9: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004771B2: ;
    goto loc_004771DE;

loc_004771B4: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747C2(); /* call 0x004747C2 */

loc_004771BC: ;
    esp = esp + 0xC;
    goto loc_004771A9;

loc_004771C1: ;
    eax = MEM32(0x75F98C);
    if (CMP_EQ(MEM8(eax), 0)) goto loc_004771E9; /* je: equal / zero */

loc_004771CB: ;
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004768B0(); /* call 0x004768B0 */

loc_004771D4: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473DCF(); /* call 0x00473DCF */

loc_004771DE: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004771F5; /* jne: not equal / not zero */

loc_004771E9: ;
    PUSH32(esp, 2);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004740E4(); /* call 0x004740E4 */

loc_004771F3: ;
    goto loc_00477203;

loc_004771F5: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    if (CMP_NE(LO8(eax), 0x40)) goto loc_0047733B; /* jne: not equal / not zero */

loc_00477203: ;
    eax = MEM32(0x75F99C);
    eax = eax >> 1;
    eax = ~eax;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    eax = ebx;
    if (TEST_Z(LO8(eax), 1)) goto loc_00477247; /* je: equal / zero */

loc_00477212: ;
    eax = eax & 0xC;
    if (CMP_NE(LO8(eax), 0xC)) goto loc_00477261; /* jne: not equal / not zero */

loc_00477219: ;
    if (CMP_NE(MEM32(ebp + 0x18), 0)) goto loc_0047733B; /* jne: not equal / not zero */

loc_00477223: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475C6D(); /* call 0x00475C6D */

loc_00477234: ;
    POP32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_0047723C: ;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477245: ;
    goto loc_00477261;

loc_00477247: ;
    eax = eax & 0xC;
    if (CMP_NE(LO8(eax), 0xC)) goto loc_00477261; /* jne: not equal / not zero */

loc_0047724E: ;
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475C6D(); /* call 0x00475C6D */

loc_00477257: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473DCF(); /* call 0x00473DCF */

loc_00477261: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_00477284; /* je: equal / zero */

loc_00477266: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, 0x5871F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00477278: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477284: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_004772A7; /* je: equal / zero */

loc_00477289: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, 0x5871F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_0047729B: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_004772A7: ;
    if (CMP_NE(MEM32(ebp + 0x18), 0)) goto loc_00477329; /* jne: not equal / not zero */

loc_004772AD: ;
    edx = MEM32(ebp + 0xC);
    ecx = edx;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004772B7: ;
    if (TEST_NZ(eax, eax)) goto loc_00477306; /* jne: not equal / not zero */

loc_004772BB: ;
    ebx = MEM32(edx + 4);
    if (TEST_NZ(LO8(ebx), 0x10)) goto loc_004772F7; /* jne: not equal / not zero */

loc_004772C3: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_004772CB: ;
    if (TEST_NZ(eax, eax)) goto loc_004772F7; /* jne: not equal / not zero */

loc_004772CF: ;
    PUSH32(esp, edx);
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -56;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_004772E4: ;
    esp = esp + 0xC;
    ecx = eax;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_004772EE: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_004772F5: ;
    goto loc_00477320;

loc_004772F7: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edx);
    if (((int32_t)(LO8(ebx) & LO8(ebx)) >= 0)) goto loc_00477313; /* jns: not sign (positive) */

loc_004772FC: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477304: ;
    goto loc_00477329;

loc_00477306: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_0047730E: ;
    if (TEST_NZ(eax, eax)) goto loc_00477329; /* jne: not equal / not zero */

loc_00477312: ;
    PUSH32(esp, ecx);

loc_00477313: ;
    eax = ebp + -72;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_0047731D: ;
    esp = esp + 0xC;

loc_00477320: ;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00477329: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00477339: ;
    g_seh_ebp = ebp; sub_004773B7(); return; /* tail jmp 0x004773B7 */

loc_0047733B: ;
    PUSH32(esp, 1);
    g_seh_ebp = ebp; sub_004773AF(); return; /* tail jmp 0x004773AF */

}

/**
 * sub_004773BE
 * Original: 0x004773BE - 0x00477444 (134 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004773BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004773BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    eax = 0xFFFFFE00u;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & eax;
    eax = MEM32(0x75F990);
    if (TEST_Z(eax, eax)) goto loc_00477432; /* je: equal / zero */

loc_004773E0: ;
    if (CMP_NE(MEM8(eax), 0x3F)) goto loc_0047741F; /* jne: not equal / not zero */

loc_004773E5: ;
    SET_LO8(eax, MEM8(eax + 1));
    if (CMP_NE(LO8(eax), 0x40)) goto loc_00477410; /* jne: not equal / not zero */

loc_004773EC: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 2;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004766F6(); /* call 0x004766F6 */

loc_004773FC: ;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, 0x58722C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_0047740B: ;
    esp = esp + 0x10;
    goto loc_00477429;

loc_00477410: ;
    if (CMP_NE(LO8(eax), 0x24)) goto loc_0047741F; /* jne: not equal / not zero */

loc_00477414: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475348(); /* call 0x00475348 */

loc_0047741D: ;
    goto loc_00477428;

loc_0047741F: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004766F6(); /* call 0x004766F6 */

loc_00477428: ;
    POP32(esp, ecx);

loc_00477429: ;
    ecx = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477432: ;
    eax = MEM32(ebp + -4);
    eax = eax << 0x1C;
    eax = (uint32_t)((int32_t)eax >> 0x1C);
    if (CMP_NE(eax, 3)) { sub_00477444(); return; } /* jne: not equal / not zero */

loc_00477440: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004774E7
 * Original: 0x004774E7 - 0x00477595 (174 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004774E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004774E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00477595(); return; } /* je: equal / zero */

loc_004774FB: ;
    if (CMP_L(LO8(eax), 0x36)) goto loc_00477503; /* jl: less (signed <) */

loc_004774FF: ;
    if (CMP_LE(LO8(eax), 0x39)) goto loc_00477507; /* jle: less or equal (signed <=) */

loc_00477503: ;
    if (CMP_NE(LO8(eax), 0x5F)) goto loc_00477566; /* jne: not equal / not zero */

loc_00477507: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474205(); /* call 0x00474205 */

loc_00477513: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_0047751B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0047753E; /* jne: not equal / not zero */

loc_00477522: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477529: ;
    if (TEST_NZ(eax, eax)) goto loc_00477533; /* jne: not equal / not zero */

loc_0047752D: ;
    if (TEST_NZ(MEM8(esi + 4), 0x10)) goto loc_0047753E; /* jne: not equal / not zero */

loc_00477533: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_0047753E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477545: ;
    if (TEST_NZ(eax, eax)) goto loc_00477552; /* jne: not equal / not zero */

loc_00477549: ;
    PUSH32(esp, esi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00477552: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00476B47(); /* call 0x00476B47 */

loc_0047755E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004775F8(); return; /* tail jmp 0x004775F8 */

loc_00477566: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00476E88(); /* call 0x00476E88 */

loc_0047757A: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + 0x14), 0x2A - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM8(ebp + 0x14), 0x2A)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004750EC(); /* call 0x004750EC */

loc_00477590: ;
    esp = esp + 0x20;
    g_seh_ebp = ebp; sub_004775F8(); return; /* tail jmp 0x004775F8 */

}

/**
 * sub_004775FD
 * Original: 0x004775FD - 0x00477619 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004775FD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004775FD: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x587238);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047760C: ;
    edi = MEM32(ebp + 0x14);
    esi = 0; /* xor self */
    if (CMP_NE(edi, esi)) { sub_00477619(); return; } /* jne: not equal / not zero */

loc_00477615: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00477682(); return; /* tail jmp 0x00477682 */

}

/**
 * sub_00477688
 * Original: 0x00477688 - 0x00477691 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477688(void)
{

loc_00477688: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047768F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00477691
 * Original: 0x00477691 - 0x004779C8 (823 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477691(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00477691: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_004779C8(); return; } /* je: equal / zero */

loc_004776A9: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    edi = ZX8(LO8(eax));
    esi = 0xFFFFFE00u;
    MEM32(ebp + -8) = MEM32(ebp + -8) & esi;
    eax = edi;
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_G(eax, 0x4D)) goto loc_0047770B; /* jg: greater (signed >) */

loc_004776C8: ;
    if (CMP_EQ(eax, 0x4D)) goto loc_00477704; /* je: equal / zero */

loc_004776CA: ;
    eax = eax - 0x43;
    if (CMP_A(eax, 8)) goto loc_004778A3; /* ja: above (unsigned >) */

loc_004776D6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4779E0); /* switch: 9 entries, 4 targets */
    if (_jt == 0x004776DDu) goto loc_004776DD;
    if (_jt == 0x004776EFu) goto loc_004776EF;
    if (_jt == 0x004776F6u) goto loc_004776F6;
    if (_jt == 0x004776FDu) goto loc_004776FD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004776DD: ;
    PUSH32(esp, 0x5872D4);

loc_004776E2: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004776EA: ;
    goto loc_004778CE;

loc_004776EF: ;
    PUSH32(esp, 0x5872CC);
    goto loc_004776E2;

loc_004776F6: ;
    PUSH32(esp, 0x5872C8);
    goto loc_004776E2;

loc_004776FD: ;
    PUSH32(esp, 0x5872C0);
    goto loc_004776E2;

loc_00477704: ;
    PUSH32(esp, 0x5872B8);
    goto loc_004776E2;

loc_0047770B: ;
    if (CMP_EQ(eax, 0x4E)) goto loc_004778B8; /* je: equal / zero */

loc_00477714: ;
    if (CMP_EQ(eax, 0x4F)) goto loc_004778AB; /* je: equal / zero */

loc_0047771D: ;
    if (CMP_LE(eax, 0x4F)) goto loc_004778A3; /* jle: less or equal (signed <=) */

loc_00477723: ;
    if (CMP_LE(eax, 0x53)) goto loc_0047789C; /* jle: less or equal (signed <=) */

loc_0047772C: ;
    if (CMP_NE(eax, 0x5F)) goto loc_004778A3; /* jne: not equal / not zero */

loc_00477735: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    MEM8(ebp + -1) = LO8(eax);
    eax = ZX8(LO8(eax));
    if (CMP_G(eax, 0x4D)) goto loc_004777DA; /* jg: greater (signed >) */

loc_00477751: ;
    if (CMP_GE(eax, 0x4C)) goto loc_004777D0; /* jge: greater or equal (signed >=) */

loc_00477756: ;
    if (CMP_G(eax, 0x47)) goto loc_004777AD; /* jg: greater (signed >) */

loc_0047775B: ;
    if (CMP_GE(eax, 0x46)) goto loc_004777A3; /* jge: greater or equal (signed >=) */

loc_00477760: ;
    if (CMP_EQ(eax, 0x24)) goto loc_00477781; /* je: equal / zero */

loc_00477765: ;
    if (CMP_LE(eax, 0x43)) goto loc_00477822; /* jle: less or equal (signed <=) */

loc_0047776E: ;
    if (CMP_G(eax, 0x45)) goto loc_00477822; /* jg: greater (signed >) */

loc_00477777: ;
    PUSH32(esp, 0x5872B0);
    goto loc_004776E2;

loc_00477781: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477691(); /* call 0x00477691 */

loc_0047778D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5872A8);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_0047779B: ;
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_004779D8(); return; /* tail jmp 0x004779D8 */

loc_004777A3: ;
    PUSH32(esp, 0x5872A0);
    goto loc_004776E2;

loc_004777AD: ;
    if (CMP_L(eax, 0x48)) goto loc_00477822; /* jl: less (signed <) */

loc_004777B2: ;
    if (CMP_LE(eax, 0x49)) goto loc_004777C6; /* jle: less or equal (signed <=) */

loc_004777B7: ;
    if (CMP_G(eax, 0x4B)) goto loc_00477822; /* jg: greater (signed >) */

loc_004777BC: ;
    PUSH32(esp, 0x587298);
    goto loc_004776E2;

loc_004777C6: ;
    PUSH32(esp, 0x587290);
    goto loc_004776E2;

loc_004777D0: ;
    PUSH32(esp, 0x587284);
    goto loc_004776E2;

loc_004777DA: ;
    if (CMP_EQ(eax, 0x4E)) goto loc_00477892; /* je: equal / zero */

loc_004777E3: ;
    if (CMP_EQ(eax, 0x4F)) goto loc_00477836; /* je: equal / zero */

loc_004777E8: ;
    if (CMP_EQ(eax, 0x57)) goto loc_0047782C; /* je: equal / zero */

loc_004777ED: ;
    if (CMP_LE(eax, 0x57)) goto loc_00477822; /* jle: less or equal (signed <=) */

loc_004777EF: ;
    if (CMP_G(eax, 0x59)) goto loc_00477822; /* jg: greater (signed >) */

loc_004777F4: ;
    eax = ebp + -20;

loc_004777F7: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) - 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00475B41(); /* call 0x00475B41 */

loc_00477803: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_0047780D: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477815: ;
    if (TEST_Z(eax, eax)) goto loc_004778CE; /* je: equal / zero */

loc_0047781D: ;
    eax = ebp + -12;
    goto loc_00477884;

loc_00477822: ;
    PUSH32(esp, 0x63ED38);
    goto loc_004776E2;

loc_0047782C: ;
    PUSH32(esp, 0x58727C);
    goto loc_004776E2;

loc_00477836: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, ebx);

loc_00477839: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & esi;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_0047784B: ;
    if (CMP_NE(ebx, 0xFFFFFFFEu)) goto loc_0047796D; /* jne: not equal / not zero */

loc_00477854: ;
    MEM8(ebp + -16) = MEM8(ebp + -16) | 0x80;
    PUSH32(esp, 0);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004774E7(); /* call 0x004774E7 */

loc_0047786B: ;
    esp = esp + 0x10;
    if (TEST_NZ(MEM8(ebp + -24), 0x80)) goto loc_00477881; /* jne: not equal / not zero */

loc_00477874: ;
    PUSH32(esp, 0x586EF8);
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_00477881: ;
    eax = ebp + -28;

loc_00477884: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_0047788D: ;
    g_seh_ebp = ebp; sub_004779D8(); return; /* tail jmp 0x004779D8 */

loc_00477892: ;
    PUSH32(esp, 0x587274);
    goto loc_004776E2;

loc_0047789C: ;
    ebx = edi;
    ebx = ebx & 3;
    goto loc_004778C5;

loc_004778A3: ;
    eax = ebp + -36;
    goto loc_004777F7;

loc_004778AB: ;
    PUSH32(esp, 0x587000);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004778B8: ;
    PUSH32(esp, 0x58726C);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_004778C5: ;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_00477839; /* jne: not equal / not zero */

loc_004778CE: ;
    eax = edi;
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_00477922; /* je: equal / zero */

loc_004778D5: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477914; /* je: equal / zero */

loc_004778DC: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477914; /* je: equal / zero */

loc_004778E0: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477914; /* je: equal / zero */

loc_004778E4: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477914; /* je: equal / zero */

loc_004778E8: ;
    eax = eax - 0x14;
    if ((eax != 0)) goto loc_00477940; /* jne: not equal / not zero */

loc_004778ED: ;
    eax = ZX8(MEM8(ebp + -1));
    eax = eax - 0x45;
    if ((eax == 0)) goto loc_00477906; /* je: equal / zero */

loc_004778F6: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477906; /* je: equal / zero */

loc_004778FA: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477906; /* je: equal / zero */

loc_004778FE: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00477906; /* je: equal / zero */

loc_00477902: ;
    eax = eax - ecx;
    if ((eax != 0)) goto loc_00477940; /* jne: not equal / not zero */

loc_00477906: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x586FF4);
    eax = ebp + -36;
    goto loc_0047792E;

loc_00477914: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x586FF4);
    eax = ebp + -28;
    goto loc_0047792E;

loc_00477922: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587264);
    eax = ebp + -20;

loc_0047792E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00477934: ;
    esp = esp + 0xC;
    ecx = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477940: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477948: ;
    if (TEST_NZ(eax, eax)) goto loc_0047781D; /* jne: not equal / not zero */

loc_00477950: ;
    PUSH32(esp, ecx);
    eax = ebp + -36;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004747A0(); /* call 0x004747A0 */

loc_0047795C: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00474403(); /* call 0x00474403 */

loc_00477968: ;
    goto loc_0047781D;

loc_0047796D: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477975: ;
    if (TEST_Z(eax, eax)) goto loc_004779B1; /* je: equal / zero */

loc_00477979: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0047799F; /* je: equal / zero */

loc_0047797E: ;
    PUSH32(esp, 0x58725C);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_0047798B: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_004779B1; /* je: equal / zero */

loc_00477990: ;
    PUSH32(esp, 0x587250);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_0047464D(); /* call 0x0047464D */

loc_0047799D: ;
    goto loc_004779B1;

loc_0047799F: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_004779B1; /* je: equal / zero */

loc_004779A4: ;
    PUSH32(esp, 0x587244);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_00474480(); /* call 0x00474480 */

loc_004779B1: ;
    PUSH32(esp, 0x2A);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004774E7(); /* call 0x004774E7 */

loc_004779C3: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_004779D8(); return; /* tail jmp 0x004779D8 */

}

/**
 * sub_00477B34
 * Original: 0x00477B34 - 0x00477BCC (152 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477B34(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00477B34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473BEC(); /* call 0x00473BEC */

loc_00477B45: ;
    eax = MEM32(0x75F98C);
    SET_LO8(eax, MEM8(eax));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ecx))) { sub_00477BCC(); return; } /* je: equal / zero */

loc_00477B52: ;
    if (CMP_EQ(LO8(eax), 0x3F)) goto loc_00477B8E; /* je: equal / zero */

loc_00477B56: ;
    if (CMP_NE(LO8(eax), 0x58)) goto loc_00477BBC; /* jne: not equal / not zero */

loc_00477B5A: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473CB8(); /* call 0x00473CB8 */

loc_00477B68: ;
    if (TEST_Z(eax, eax)) goto loc_00477B7B; /* je: equal / zero */

loc_00477B6C: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x587020);
    PUSH32(esp, 0); sub_0047422A(); /* call 0x0047422A */

loc_00477B79: ;
    g_seh_ebp = ebp; sub_00477BDD(); return; /* tail jmp 0x00477BDD */

loc_00477B7B: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587068);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004747E4(); /* call 0x004747E4 */

loc_00477B8C: ;
    g_seh_ebp = ebp; sub_00477BDA(); return; /* tail jmp 0x00477BDA */

loc_00477B8E: ;
    MEM32(0x75F98C) = MEM32(0x75F98C) + 1;
    MEM16(ebp + -12) = MEM16(ebp + -12) & 0xFE00;
    PUSH32(esp, ecx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ecx;
    PUSH32(esp, 0); sub_00476E88(); /* call 0x00476E88 */

loc_00477BB0: ;
    esp = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477BBC: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00477A04(); /* call 0x00477A04 */

loc_00477BC8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00477BDD(); return; /* tail jmp 0x00477BDD */

}

/**
 * sub_00477BE2
 * Original: 0x00477BE2 - 0x00477C52 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477BE2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00477BE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    ecx = 0x75F968;
    PUSH32(esp, 0); sub_00473937(); /* call 0x00473937 */

loc_00477BF8: ;
    if (CMP_EQ(eax, esi)) goto loc_00477C06; /* je: equal / zero */

loc_00477BFC: ;
    MEM16(eax + 4) = MEM16(eax + 4) & 0xFE00;
    MEM32(eax) = esi;
    esi = eax;

loc_00477C06: ;
    eax = ebp + -16;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477B34(); /* call 0x00477B34 */

loc_00477C10: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00473B85(); /* call 0x00473B85 */

loc_00477C19: ;
    esp = esp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00474806(); /* call 0x00474806 */

loc_00477C31: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00474583(); /* call 0x00474583 */

loc_00477C38: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00473A24(); /* call 0x00473A24 */

loc_00477C40: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004739BB(); /* call 0x004739BB */

loc_00477C4C: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00477C52
 * Original: 0x00477C52 - 0x00477C7C (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477C52(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00477C52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMD(ebp + 8)); /* fld double */
    ecx = MEM32(ebp + 0xE);
    MEMD(ebp + -8) = fp_top(); fp_popp(); /* fstp */
    eax = eax + 0x3FE;
    eax = eax << 4;
    ecx = ecx & 0xFFFF800Fu;
    eax = eax | ecx;
    MEM16(ebp + -2) = LO16(eax);
    fp_push(MEMD(ebp + -8)); /* fld double */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00477C7C
 * Original: 0x00477C7C - 0x00477CA6 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477C7C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00477C7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + 0xC), 0x7FF00000)) goto loc_00477C94; /* jne: not equal / not zero */

loc_00477C8A: ;
    if (CMP_NE(MEM32(ebp + 8), edx)) { sub_00477CA6(); return; } /* jne: not equal / not zero */

loc_00477C8F: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00477C94: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0xFFF00000u)) { sub_00477CA6(); return; } /* jne: not equal / not zero */

loc_00477C9D: ;
    if (CMP_NE(MEM32(ebp + 8), edx)) { sub_00477CA6(); return; } /* jne: not equal / not zero */

loc_00477CA2: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_00477CD0(); return; /* tail jmp 0x00477CD0 */

}

/**
 * sub_00477CD7
 * Original: 0x00477CD7 - 0x00477CF5 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477CD7(void)
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

loc_00477CD7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMD(0x648F30)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_00477CF5(); return; } /* jp: parity */

loc_00477CEC: ;
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00477D84(); return; /* tail jmp 0x00477D84 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00477D8B
 * Original: 0x00477D8B - 0x0047802F (676 bytes, 246 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477D8B(void)
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

loc_00477D8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(ecx + 0xC) = eax;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    ebx++;
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00477DBD; /* je: equal / zero */

loc_00477DB0: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | ebx;
    MEM32(ebp + 0x10) = 0xC000008Fu;

loc_00477DBD: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00477DD0; /* je: equal / zero */

loc_00477DC2: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    MEM32(ebp + 0x10) = 0xC0000093u;

loc_00477DD0: ;
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_00477DE2; /* je: equal / zero */

loc_00477DD4: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 4;
    MEM32(ebp + 0x10) = 0xC0000091u;

loc_00477DE2: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00477DF5; /* je: equal / zero */

loc_00477DE7: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 8;
    MEM32(ebp + 0x10) = 0xC000008Eu;

loc_00477DF5: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_00477E08; /* je: equal / zero */

loc_00477DFA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10;
    MEM32(ebp + 0x10) = 0xC0000090u;

loc_00477E08: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 4;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    PUSH32(esp, 2);
    ecx = ecx & 0x10;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 1;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    POP32(esp, edi);
    ecx = ecx & 8;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & 4;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 3;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & edi;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 5;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & ebx;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    PUSH32(esp, 0); sub_00478402(); /* call 0x00478402 */

loc_00477E6E: ;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00477E79; /* je: equal / zero */

loc_00477E72: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x10;

loc_00477E79: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_00477E84; /* je: equal / zero */

loc_00477E7D: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;

loc_00477E84: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00477E8F; /* je: equal / zero */

loc_00477E88: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;

loc_00477E8F: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00477E99; /* je: equal / zero */

loc_00477E93: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | edi;

loc_00477E99: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00477EA3; /* je: equal / zero */

loc_00477E9D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | ebx;

loc_00477EA3: ;
    eax = MEM32(esi);
    ecx = 0xC00;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00477EE2; /* je: equal / zero */

loc_00477EAE: ;
    if (CMP_EQ(eax, 0x400)) goto loc_00477ED4; /* je: equal / zero */

loc_00477EB5: ;
    if (CMP_EQ(eax, 0x800)) goto loc_00477EC8; /* je: equal / zero */

loc_00477EBC: ;
    if (CMP_NE(eax, ecx)) goto loc_00477EE8; /* jne: not equal / not zero */

loc_00477EC0: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) | 3;
    goto loc_00477EE8;

loc_00477EC8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFEu;
    ecx = ecx | edi;
    goto loc_00477EDE;

loc_00477ED4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx | ebx;

loc_00477EDE: ;
    MEM32(eax) = ecx;
    goto loc_00477EE8;

loc_00477EE2: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFCu;

loc_00477EE8: ;
    eax = MEM32(esi);
    ecx = 0x300;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00477F13; /* je: equal / zero */

loc_00477EF3: ;
    if (CMP_EQ(eax, 0x200)) goto loc_00477F06; /* je: equal / zero */

loc_00477EFA: ;
    if (CMP_NE(eax, ecx)) goto loc_00477F20; /* jne: not equal / not zero */

loc_00477EFE: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFE3u;
    goto loc_00477F20;

loc_00477F06: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFE7u;
    ecx = ecx | 4;
    goto loc_00477F1E;

loc_00477F13: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFEBu;
    ecx = ecx | 8;

loc_00477F1E: ;
    MEM32(eax) = ecx;

loc_00477F20: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx << 5;
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x1FFE0;
    MEM32(eax) = MEM32(eax) ^ ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) | ebx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | edi;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 0x18);
    fp_push(MEMD(eax)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x10) = fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | ebx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x60);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | edi;
    edi = MEM32(ebp + 0x1C);
    MEM32(eax + 0x60) = ecx;
    fp_push(MEMD(edi)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x50) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0047840D(); /* call 0x0047840D */

loc_00477F76: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0042DE55(); /* call 0x0042DE55 */

loc_00477F85: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM8(eax + 8), 0x10)) goto loc_00477F91; /* je: equal / zero */

loc_00477F8E: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu;

loc_00477F91: ;
    if (TEST_Z(MEM8(eax + 8), 8)) goto loc_00477F9A; /* je: equal / zero */

loc_00477F97: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFBu;

loc_00477F9A: ;
    if (TEST_Z(MEM8(eax + 8), 4)) goto loc_00477FA3; /* je: equal / zero */

loc_00477FA0: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u;

loc_00477FA3: ;
    if (TEST_Z(MEM8(eax + 8), 2)) goto loc_00477FAC; /* je: equal / zero */

loc_00477FA9: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFEFu;

loc_00477FAC: ;
    if (TEST_Z(MEM8(eax + 8), LO8(ebx))) goto loc_00477FB4; /* je: equal / zero */

loc_00477FB1: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu;

loc_00477FB4: ;
    ecx = MEM32(eax);
    ecx = ecx & 3;
    ecx = ecx - 0;
    edx = 0xFFFFF3FFu;
    if ((ecx == 0)) goto loc_00477FF4; /* je: equal / zero */

loc_00477FC3: ;
    ecx--;
    if ((ecx == 0)) goto loc_00477FE2; /* je: equal / zero */

loc_00477FC6: ;
    ecx--;
    if ((ecx == 0)) goto loc_00477FD2; /* je: equal / zero */

loc_00477FC9: ;
    ecx--;
    if ((ecx != 0)) goto loc_00477FF6; /* jne: not equal / not zero */

loc_00477FCC: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0xC;
    goto loc_00477FF6;

loc_00477FD2: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFFBFFu;
    ecx = ecx | 0x800;
    goto loc_00477FF0;

loc_00477FE2: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFF7FFu;
    ecx = ecx | 0x400;

loc_00477FF0: ;
    MEM32(esi) = ecx;
    goto loc_00477FF6;

loc_00477FF4: ;
    MEM32(esi) = MEM32(esi) & edx;

loc_00477FF6: ;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    ecx = ecx & 7;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00478019; /* je: equal / zero */

loc_00478003: ;
    ecx--;
    if ((ecx == 0)) goto loc_0047800D; /* je: equal / zero */

loc_00478006: ;
    ecx--;
    if ((ecx != 0)) goto loc_00478025; /* jne: not equal / not zero */

loc_00478009: ;
    MEM32(esi) = MEM32(esi) & edx;
    goto loc_00478025;

loc_0047800D: ;
    ecx = MEM32(esi);
    ecx = ecx & edx;
    ecx = ecx | 0x200;
    goto loc_00478023;

loc_00478019: ;
    ecx = MEM32(esi);
    ecx = ecx & edx;
    ecx = ecx | 0x300;

loc_00478023: ;
    MEM32(esi) = ecx;

loc_00478025: ;
    fp_push(MEMD(eax + 0x50)); /* fld double */
    MEMD(edi) = fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047802F
 * Original: 0x0047802F - 0x0047805D (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047802F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047802F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = eax;
    esi = esi & 0x1F;
    ebx++;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (TEST_Z(LO8(eax), 8)) { sub_0047805D(); return; } /* je: equal / zero */

loc_00478049: ;
    if (TEST_Z(MEM8(ebp + 0x10), LO8(ebx))) { sub_0047805D(); return; } /* je: equal / zero */

loc_0047804E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047843D(); /* call 0x0047843D */

loc_00478054: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFF7u;
    g_seh_ebp = ebp; sub_004781FA(); return; /* tail jmp 0x004781FA */

}

/**
 * sub_0047821C
 * Original: 0x0047821C - 0x00478244 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047821C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047821C: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(eax, 1)) goto loc_00478238; /* je: equal / zero */

loc_00478225: ;
    if (CMP_LE(eax, 1)) goto loc_00478243; /* jle: less or equal (signed <=) */

loc_00478227: ;
    if (CMP_G(eax, 3)) goto loc_00478243; /* jg: greater (signed >) */

loc_0047822C: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_00478231: ;
    MEM32(eax) = 0x22;
    esp += 4; return; /* ret */

loc_00478238: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047823D: ;
    MEM32(eax) = 0x21;

loc_00478243: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00478244
 * Original: 0x00478244 - 0x00478250 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478244(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00478244: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), 0x20)) { sub_00478250(); return; } /* je: equal / zero */

loc_0047824C: ;
    PUSH32(esp, 5);
    g_seh_ebp = ebp; sub_00478266(); return; /* tail jmp 0x00478266 */

}

/**
 * sub_00478271
 * Original: 0x00478271 - 0x004782F2 (129 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478271(void)
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

loc_00478271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = 0; /* xor self */

loc_00478279: ;
    ecx = MEM32(eax * 8 + 0x655C50);
    if (CMP_EQ(ecx, MEM32(ebp + 0xC))) goto loc_004782E9; /* je: equal / zero */

loc_00478285: ;
    eax++;
    if (CMP_L(eax, 0x1D)) goto loc_00478279; /* jl: less (signed <) */

loc_0047828B: ;
    eax = 0; /* xor self */

loc_0047828D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) { sub_004782F2(); return; } /* je: equal / zero */

loc_00478294: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_00478419(); /* call 0x00478419 */

loc_004782CC: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00435BEF(); /* call 0x00435BEF */

loc_004782D5: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_004782E3; /* jne: not equal / not zero */

loc_004782DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047821C(); /* call 0x0047821C */

loc_004782E2: ;
    POP32(esp, ecx);

loc_004782E3: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004782E9: ;
    eax = MEM32(eax * 8 + 0x655C54);
    goto loc_0047828D;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047830F
 * Original: 0x0047830F - 0x00478343 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047830F(void)
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

loc_0047830F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_NE(MEM32(0x656030), 0)) { sub_00478343(); return; } /* jne: not equal / not zero */

loc_0047831B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00478271(); /* call 0x00478271 */

loc_0047833E: ;
    esp = esp + 0x24;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00478362
 * Original: 0x00478362 - 0x004783E4 (130 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478362(void)
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

loc_00478362: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x70;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047802F(); /* call 0x0047802F */

loc_0047837A: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_004783A5; /* jne: not equal / not zero */

loc_00478381: ;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) & 0xFFFFFFFEu;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477D8B(); /* call 0x00477D8B */

loc_004783A2: ;
    esp = esp + 0x18;

loc_004783A5: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00478244(); /* call 0x00478244 */

loc_004783AD: ;
    esp = esp + 4;
    if (CMP_NE(MEM32(0x656030), 0)) { sub_004783E4(); return; } /* jne: not equal / not zero */

loc_004783B9: ;
    if (TEST_Z(eax, eax)) { sub_004783E4(); return; } /* je: equal / zero */

loc_004783BD: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00478271(); /* call 0x00478271 */

loc_004783DF: ;
    esp = esp + 0x24;
    g_seh_ebp = ebp; sub_004783FE(); return; /* tail jmp 0x004783FE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00478402
 * Original: 0x00478402 - 0x0047840D (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478402(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00478402: ;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    /* fnstsw word ptr [esp] - store FPU status word */
    eax = (uint32_t)(int32_t)SMEM16(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047840D
 * Original: 0x0047840D - 0x00478419 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047840D(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047840D: ;
    PUSH32(esp, ecx);
    /* fnstsw word ptr [esp] - store FPU status word */
    /* FPU: fnclex  */
    eax = (uint32_t)(int32_t)SMEM16(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00478419
 * Original: 0x00478419 - 0x0047843D (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478419(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00478419: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 4] - store FPU control word */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx & MEM32(ebp + 0xC);
    eax = ~eax;
    eax = eax & MEM32(ebp + -4);
    eax = eax | ecx;
    MEM32(ebp + 0xC) = eax;
    /* fldcw word ptr [ebp + 0xc] - load FPU control word */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047843D
 * Original: 0x0047843D - 0x00478493 (86 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047843D(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047843D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    if (TEST_Z(LO8(ecx), 1)) goto loc_00478453; /* je: equal / zero */

loc_00478448: ;
    fp_push(MEMF(0x655D38)); /* fld */
    MEM32(esp + 0xC) = (int32_t)fp_top(); /* fistp */
    /* wait - FPU sync */

loc_00478453: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_00478468; /* je: equal / zero */

loc_00478458: ;
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    fp_push(MEMF(0x655D38)); /* fld */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */

loc_00478468: ;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00478477; /* je: equal / zero */

loc_0047846D: ;
    fp_push(MEMF(0x655D44)); /* fld */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */

loc_00478477: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00478485; /* je: equal / zero */

loc_0047847C: ;
    fp_push(0.0); /* fldz */
    fp_push(1.0); /* fld1 */
    /* FPU: fdivrp st(1) */
    /* fstp st(0) */
    /* wait - FPU sync */

loc_00478485: ;
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_00478490; /* je: equal / zero */

loc_0047848A: ;
    /* FPU: fldpi  */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */

loc_00478490: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00478493
 * Original: 0x00478493 - 0x0047849C (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478493(void)
{

loc_00478493: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047849A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047849C
 * Original: 0x0047849C - 0x004784A5 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047849C(void)
{

loc_0047849C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_004784A3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004784A5
 * Original: 0x004784A5 - 0x0047851D (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004784A5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004784A5: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x5873A0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004784B1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_004784B8: ;
    POP32(esp, ecx);
    esi = 0; /* xor self */
    MEM32(ebp + -4) = esi;
    MEM32(0x75F9AC) = 1;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(0x75F9A8) = LO8(eax);
    if (CMP_NE(MEM32(ebp + 8), esi)) { sub_0047851D(); return; } /* jne: not equal / not zero */

loc_004784D5: ;
    if (CMP_EQ(MEM32(0x88146C), esi)) goto loc_004784FC; /* je: equal / zero */

loc_004784DD: ;
    eax = MEM32(0x881468);
    eax = eax - 4;
    MEM32(0x881468) = eax;
    if (CMP_B(eax, MEM32(0x88146C))) goto loc_004784FC; /* jb: below (unsigned <) */

loc_004784F2: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_004784DD; /* je: equal / zero */

loc_004784F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004784FA: ;
    goto loc_004784DD;

loc_004784FC: ;
    MEM32(ebp + -28) = 0x651038;

loc_00478503: ;
    if (CMP_AE(MEM32(ebp + -28), 0x651040)) { sub_0047851D(); return; } /* jae: above or equal (unsigned >=) */

loc_0047850C: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_00478517; /* je: equal / zero */

loc_00478515: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00478517: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 4;
    goto loc_00478503;

}

/**
 * sub_0047855B
 * Original: 0x0047855B - 0x00478569 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047855B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047855B: ;
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_00478568; /* je: equal / zero */

loc_00478560: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_00478567: ;
    POP32(esp, ecx);

loc_00478568: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00478569
 * Original: 0x00478569 - 0x00478575 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478569(void)
{

loc_00478569: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004784A5(); /* call 0x004784A5 */

loc_00478572: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00478575
 * Original: 0x00478575 - 0x004785C5 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478575(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00478575: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x5873B0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00478581: ;
    if (CMP_NE(MEM32(0x881464), 3)) goto loc_004785A9; /* jne: not equal / not zero */

loc_0047858A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_00478591: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_004785C5(); /* call 0x004785C5 */

loc_004785A3: ;
    if (CMP_NE(MEM32(ebp + -32), 0)) goto loc_004785BC; /* jne: not equal / not zero */

loc_004785A9: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004308AE(); /* call 0x004308AE */

loc_004785B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004314C8(); /* call 0x004314C8 */

loc_004785B9: ;
    MEM32(ebp + -28) = eax;

loc_004785BC: ;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004785C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004785C5
 * Original: 0x004785C5 - 0x004785CE (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004785C5(void)
{

loc_004785C5: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_004785CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004785CE
 * Original: 0x004785CE - 0x004785DF (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004785CE(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004785CE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMD(esp + 0xC)); /* fld double */
    /* FPU: frndint  */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(esp)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004785DF
 * Original: 0x004785DF - 0x00478601 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004785DF(void)
{
    int _flags = 0; /* fallback flag var */

loc_004785DF: ;
    if (TEST_Z(MEM8(eax + 0xC), 0x40)) goto loc_004785EB; /* je: equal / zero */

loc_004785E5: ;
    if (CMP_EQ(MEM32(eax + 8), 0)) { sub_00478601(); return; } /* je: equal / zero */

loc_004785EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0047C405(); /* call 0x0047C405 */

loc_004785F5: ;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(LO16(eax), 0xFFFF)) { sub_00478601(); return; } /* jne: not equal / not zero */

loc_004785FD: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00478604
 * Original: 0x00478604 - 0x0047860C (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478604(void)
{
    uint32_t ebp;

loc_00478604: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = eax;
    g_seh_ebp = ebp; sub_00478620(); return; /* tail jmp 0x00478620 */

}

/**
 * sub_00478629
 * Original: 0x00478629 - 0x00478666 (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478629(void)
{
    int _flags = 0; /* fallback flag var */

loc_00478629: ;
    (void)0; /* test MEM8(edi + 0xC), 0x40 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(MEM8(edi + 0xC), 0x40)) goto loc_0047865C; /* je: equal / zero */

loc_00478635: ;
    if (CMP_NE(MEM32(edi + 8), 0)) goto loc_0047865C; /* jne: not equal / not zero */

loc_0047863B: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) + eax;
    goto loc_00478663;

loc_00478643: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_004785DF(); /* call 0x004785DF */

loc_00478654: ;
    ebx++;
    ebx++;
    (void)0; /* cmp MEM32(esi), 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_00478663; /* je: equal / zero */

loc_0047865C: ;
    if (CMP_G(MEM32(esp + 0xC), 0)) goto loc_00478643; /* jg: greater (signed >) */

loc_00478663: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00478666
 * Original: 0x00478666 - 0x00478E0A (1956 bytes, 603 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478666(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00478666: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x454;
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(edx));
    ecx = 0; /* xor self */
    (void)0; /* cmp LO16(ebx), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_00478E04; /* je: equal / zero */

loc_0047868C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00478693;

loc_00478690: ;
    ecx = MEM32(ebp + -60);

loc_00478693: ;
    PUSH32(esp, 2);
    POP32(esp, edi);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    if (CMP_L(MEM32(ebp + -20), 0)) goto loc_00478E02; /* jl: less (signed <) */

loc_004786A3: ;
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    if (CMP_B(LO16(ebx), LO16(esi))) goto loc_004786C0; /* jb: below (unsigned <) */

loc_004786AB: ;
    if (CMP_A(LO16(ebx), 0x78)) goto loc_004786C0; /* ja: above (unsigned >) */

loc_004786B1: ;
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x5868D8);
    eax = eax & 0xF;
    goto loc_004786C2;

loc_004786C0: ;
    eax = 0; /* xor self */

loc_004786C2: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x5868F8);
    PUSH32(esp, 7);
    eax = (uint32_t)((int32_t)eax >> 4);
    POP32(esp, ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -60) = eax;
    if (CMP_A(eax, ecx)) goto loc_00478DF3; /* ja: above (unsigned >) */

loc_004786DB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x478E0A); /* switch: 8 entries, 8 targets */
    if (_jt == 0x004786E2u) goto loc_004786E2;
    if (_jt == 0x004786FFu) goto loc_004786FF;
    if (_jt == 0x00478749u) goto loc_00478749;
    if (_jt == 0x00478785u) goto loc_00478785;
    if (_jt == 0x0047878Eu) goto loc_0047878E;
    if (_jt == 0x004787C7u) goto loc_004787C7;
    if (_jt == 0x0047887Cu) goto loc_0047887C;
    if (_jt == 0x00478894u) goto loc_00478894;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004786E2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -28) = eax;
    goto loc_00478DF3;

loc_004786FF: ;
    eax = ZX16(LO16(ebx));
    eax = eax - esi;
    if ((eax == 0)) goto loc_00478741; /* je: equal / zero */

loc_00478706: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00478738; /* je: equal / zero */

loc_0047870B: ;
    eax = eax - 8;
    if ((eax == 0)) goto loc_0047872F; /* je: equal / zero */

loc_00478710: ;
    eax = eax - edi;
    if ((eax == 0)) goto loc_00478726; /* je: equal / zero */

loc_00478714: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_00478DF3; /* jne: not equal / not zero */

loc_0047871D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    goto loc_00478DF3;

loc_00478726: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    goto loc_00478DF3;

loc_0047872F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    goto loc_00478DF3;

loc_00478738: ;
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    goto loc_00478DF3;

loc_00478741: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    goto loc_00478DF3;

loc_00478749: ;
    if (CMP_NE(LO16(ebx), 0x2A)) goto loc_00478770; /* jne: not equal / not zero */

loc_0047874F: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00478DF3; /* jge: greater or equal (signed >=) */

loc_00478764: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    MEM32(ebp + -32) = (uint32_t)(-(int32_t)MEM32(ebp + -32));
    goto loc_00478DF3;

loc_00478770: ;
    eax = MEM32(ebp + -32);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_00478DF3;

loc_00478785: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    goto loc_00478DF3;

loc_0047878E: ;
    if (CMP_NE(LO16(ebx), 0x2A)) goto loc_004787B2; /* jne: not equal / not zero */

loc_00478794: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00478DF3; /* jge: greater or equal (signed >=) */

loc_004787A9: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    goto loc_00478DF3;

loc_004787B2: ;
    eax = MEM32(ebp + -8);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_00478DF3;

loc_004787C7: ;
    eax = ZX16(LO16(ebx));
    if (CMP_EQ(eax, 0x49)) goto loc_004787FC; /* je: equal / zero */

loc_004787CF: ;
    if (CMP_EQ(eax, 0x68)) goto loc_004787F4; /* je: equal / zero */

loc_004787D4: ;
    if (CMP_EQ(eax, 0x6C)) goto loc_004787EB; /* je: equal / zero */

loc_004787D9: ;
    if (CMP_NE(eax, 0x77)) goto loc_00478DF3; /* jne: not equal / not zero */

loc_004787E2: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    goto loc_00478DF3;

loc_004787EB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    goto loc_00478DF3;

loc_004787F4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    goto loc_00478DF3;

loc_004787FC: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    if (CMP_NE(LO16(eax), 0x36)) goto loc_0047881F; /* jne: not equal / not zero */

loc_00478808: ;
    ecx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(ecx + 2), 0x34)) goto loc_0047881F; /* jne: not equal / not zero */

loc_00478812: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    goto loc_00478DF3;

loc_0047881F: ;
    if (CMP_NE(LO16(eax), 0x33)) goto loc_0047883C; /* jne: not equal / not zero */

loc_00478825: ;
    ecx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(ecx + 2), 0x32)) goto loc_0047883C; /* jne: not equal / not zero */

loc_0047882F: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    goto loc_00478DF3;

loc_0047883C: ;
    if (CMP_EQ(LO16(eax), 0x64)) goto loc_00478DF3; /* je: equal / zero */

loc_00478846: ;
    if (CMP_EQ(LO16(eax), 0x69)) goto loc_00478DF3; /* je: equal / zero */

loc_00478850: ;
    if (CMP_EQ(LO16(eax), 0x6F)) goto loc_00478DF3; /* je: equal / zero */

loc_0047885A: ;
    if (CMP_EQ(LO16(eax), 0x75)) goto loc_00478DF3; /* je: equal / zero */

loc_00478864: ;
    if (CMP_EQ(LO16(eax), 0x78)) goto loc_00478DF3; /* je: equal / zero */

loc_0047886E: ;
    if (CMP_EQ(LO16(eax), 0x58)) goto loc_00478DF3; /* je: equal / zero */

loc_00478878: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_0047887C: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    esi = ebp + -20;
    MEM32(ebp + -28) = 1;
    PUSH32(esp, 0); sub_004785DF(); /* call 0x004785DF */

loc_0047888F: ;
    goto loc_00478DF2;

loc_00478894: ;
    eax = ZX16(LO16(ebx));
    if (CMP_G(eax, 0x67)) goto loc_00478B26; /* jg: greater (signed >) */

loc_004788A0: ;
    if (CMP_GE(eax, 0x65)) goto loc_0047894D; /* jge: greater or equal (signed >=) */

loc_004788A9: ;
    if (CMP_G(eax, 0x58)) goto loc_004789BE; /* jg: greater (signed >) */

loc_004788B2: ;
    if (CMP_EQ(eax, 0x58)) goto loc_00478B9A; /* je: equal / zero */

loc_004788B8: ;
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_00478970; /* je: equal / zero */

loc_004788C1: ;
    eax = eax - edi;
    if ((eax == 0)) goto loc_00478944; /* je: equal / zero */

loc_004788C5: ;
    eax = eax - edi;
    if ((eax == 0)) goto loc_00478944; /* je: equal / zero */

loc_004788C9: ;
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00478CE8; /* jne: not equal / not zero */

loc_004788D2: ;
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_004788DD; /* jne: not equal / not zero */

loc_004788DA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;

loc_004788DD: ;
    edx = MEM32(ebp + -8);
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_004788EA; /* jne: not equal / not zero */

loc_004788E5: ;
    edx = 0x7FFFFFFF;

loc_004788EA: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00478B65; /* je: equal / zero */

loc_00478901: ;
    if (TEST_NZ(eax, eax)) goto loc_0047890C; /* jne: not equal / not zero */

loc_00478905: ;
    MEM32(ebp + -12) = 0x586954;

loc_0047890C: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(ebp + -12);
    if (CMP_LE(edx & edx, 0)) goto loc_00478CE8; /* jle: less or equal (signed <=) */

loc_0047891B: ;
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00478CE8; /* je: equal / zero */

loc_00478925: ;
    esi = MEM32(0x655AE8);
    ecx = ZX8(LO8(ecx));
    if (TEST_Z(MEM8(esi + ecx * 2 + 1), 0x80)) goto loc_00478936; /* je: equal / zero */

loc_00478935: ;
    eax++;

loc_00478936: ;
    eax++;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    if (CMP_L(MEM32(ebp + -16), edx)) goto loc_0047891B; /* jl: less (signed <) */

loc_0047893F: ;
    goto loc_00478CE8;

loc_00478944: ;
    MEM32(ebp + -64) = 1;
    ebx = ebx + esi;

loc_0047894D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    edi = ebp + -1108;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_00478A67; /* jge: greater or equal (signed >=) */

loc_00478964: ;
    MEM32(ebp + -8) = 6;
    goto loc_00478AAF;

loc_00478970: ;
    if (TEST_NZ(MEM16(ebp + -4), 0x830)) goto loc_0047897B; /* jne: not equal / not zero */

loc_00478978: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;

loc_0047897B: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax + -4));
    esi = 0; /* xor self */
    esi++;
    (void)0; /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -68) = eax;
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_004789FD; /* je: equal / zero */

loc_00478995: ;
    PUSH32(esp, MEM32(0x655AF0));
    MEM8(ebp + -40) = LO8(eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -1108;
    PUSH32(esp, eax);
    MEM8(ebp + -39) = 0;
    PUSH32(esp, 0); sub_0047C4CA(); /* call 0x0047C4CA */

loc_004789B2: ;
    esp = esp + 0xC;
    if (CMP_GE(eax & eax, 0)) goto loc_00478A04; /* jge: greater or equal (signed >=) */

loc_004789B9: ;
    MEM32(ebp + -52) = esi;
    goto loc_00478A04;

loc_004789BE: ;
    eax = eax - 0x5A;
    if ((eax == 0)) goto loc_00478A15; /* je: equal / zero */

loc_004789C3: ;
    eax = eax - 9;
    if ((eax == 0)) goto loc_0047897B; /* je: equal / zero */

loc_004789C8: ;
    eax--;
    if ((eax != 0)) goto loc_00478CE8; /* jne: not equal / not zero */

loc_004789CF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;

loc_004789D3: ;
    MEM32(ebp + -16) = 0xA;

loc_004789DA: ;
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    if (TEST_Z(esi, ebx)) goto loc_00478C0A; /* je: equal / zero */

loc_004789EA: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    goto loc_00478C32;

loc_004789FD: ;
    MEM16(ebp + -1108) = LO16(eax);

loc_00478A04: ;
    eax = ebp + -1108;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = esi;
    goto loc_00478CE8;

loc_00478A15: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(eax, eax)) goto loc_00478A50; /* je: equal / zero */

loc_00478A23: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00478A50; /* je: equal / zero */

loc_00478A2A: ;
    (void)0; /* test MEM8(ebp + -3), 8 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(MEM8(ebp + -3), 8)) goto loc_00478A47; /* je: equal / zero */

loc_00478A36: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ebp + -28) = 1;
    goto loc_00478CE5;

loc_00478A47: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    goto loc_00478CE5;

loc_00478A50: ;
    eax = 0x586954;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_00478A5B: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00478A5B; /* jne: not equal / not zero */

loc_00478A62: ;
    goto loc_00478B1F;

loc_00478A67: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00478A78; /* jne: not equal / not zero */

loc_00478A69: ;
    if (CMP_NE(LO16(ebx), 0x67)) goto loc_00478AAF; /* jne: not equal / not zero */

loc_00478A6F: ;
    MEM32(ebp + -8) = 1;
    goto loc_00478AAF;

loc_00478A78: ;
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_00478A85; /* jle: less or equal (signed <=) */

loc_00478A82: ;
    MEM32(ebp + -8) = eax;

loc_00478A85: ;
    esi = 0xA3;
    if (CMP_LE(MEM32(ebp + -8), esi)) goto loc_00478AAF; /* jle: less or equal (signed <=) */

loc_00478A8F: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0x15D;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_00478A9D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(ebp + -44) = eax;
    if (TEST_Z(eax, eax)) goto loc_00478AAC; /* je: equal / zero */

loc_00478AA5: ;
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_00478AAF;

loc_00478AAC: ;
    MEM32(ebp + -8) = esi;

loc_00478AAF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -64));
    eax = eax + 8;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -80) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -84) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D60), _icall_esp); /* indirect call */
    }

loc_00478AD8: ;
    esi = MEM32(ebp + -4);
    esp = esp + 0x14;
    esi = esi & 0x80;
    if ((esi == 0)) goto loc_00478AF4; /* je: equal / zero */

loc_00478AE6: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00478AF4; /* jne: not equal / not zero */

loc_00478AEC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D6C), _icall_esp); /* indirect call */
    }

loc_00478AF3: ;
    POP32(esp, ecx);

loc_00478AF4: ;
    if (CMP_NE(LO16(ebx), 0x67)) goto loc_00478B06; /* jne: not equal / not zero */

loc_00478AFA: ;
    if (TEST_NZ(esi, esi)) goto loc_00478B06; /* jne: not equal / not zero */

loc_00478AFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D64), _icall_esp); /* indirect call */
    }

loc_00478B05: ;
    POP32(esp, ecx);

loc_00478B06: ;
    if (CMP_NE(MEM8(edi), 0x2D)) goto loc_00478B13; /* jne: not equal / not zero */

loc_00478B0B: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    edi++;
    MEM32(ebp + -12) = edi;

loc_00478B13: ;
    eax = edi;
    edx = eax + 1;

loc_00478B18: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00478B18; /* jne: not equal / not zero */

loc_00478B1F: ;
    eax = eax - edx;
    goto loc_00478CE5;

loc_00478B26: ;
    eax = eax - 0x69;
    if ((eax == 0)) goto loc_004789CF; /* je: equal / zero */

loc_00478B2F: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_00478BE0; /* je: equal / zero */

loc_00478B38: ;
    eax--;
    if ((eax == 0)) goto loc_00478BC6; /* je: equal / zero */

loc_00478B3F: ;
    eax--;
    if ((eax == 0)) goto loc_00478B93; /* je: equal / zero */

loc_00478B42: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_004788DD; /* je: equal / zero */

loc_00478B4B: ;
    eax = eax - edi;
    if ((eax == 0)) goto loc_004789D3; /* je: equal / zero */

loc_00478B53: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_00478CE8; /* jne: not equal / not zero */

loc_00478B5C: ;
    MEM32(ebp + -48) = 0x27;
    goto loc_00478B9D;

loc_00478B65: ;
    if (TEST_NZ(eax, eax)) goto loc_00478B70; /* jne: not equal / not zero */

loc_00478B69: ;
    MEM32(ebp + -12) = 0x58695C;

loc_00478B70: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = 1;
    goto loc_00478B85;

loc_00478B7C: ;
    edx--;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_00478B89; /* je: equal / zero */

loc_00478B83: ;
    eax = eax + edi;

loc_00478B85: ;
    if (TEST_NZ(edx, edx)) goto loc_00478B7C; /* jne: not equal / not zero */

loc_00478B89: ;
    eax = eax - MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    goto loc_00478CE5;

loc_00478B93: ;
    MEM32(ebp + -8) = 8;

loc_00478B9A: ;
    MEM32(ebp + -48) = ecx;

loc_00478B9D: ;
    (void)0; /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_004789DA; /* je: equal / zero */

loc_00478BAE: ;
    eax = MEM32(ebp + -48);
    eax = eax + 0x51;
    MEM16(ebp + -36) = 0x30;
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -24) = edi;
    goto loc_004789DA;

loc_00478BC6: ;
    (void)0; /* test MEM8(ebp + -4), 0x80 - flags set for next jcc */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(MEM8(ebp + -4), 0x80)) goto loc_004789DA; /* je: equal / zero */

loc_00478BD7: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    goto loc_004789DA;

loc_00478BE0: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test MEM8(ebp + -4), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(MEM8(ebp + -4), 0x20)) goto loc_00478BF9; /* je: equal / zero */

loc_00478BF0: ;
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_00478BFE;

loc_00478BF9: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_00478BFE: ;
    MEM32(ebp + -52) = 1;
    goto loc_00478DE0;

loc_00478C0A: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    (void)0; /* test LO8(ebx), 0x20 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_00478C28; /* je: equal / zero */

loc_00478C16: ;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00478C22; /* je: equal / zero */

loc_00478C1B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_00478C1F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00478C32;

loc_00478C22: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_00478C1F;

loc_00478C28: ;
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    eax = MEM32(eax + -4);
    if (TEST_NZ(LO8(ebx), 0x40)) goto loc_00478C1F; /* jne: not equal / not zero */

loc_00478C30: ;
    edx = 0; /* xor self */

loc_00478C32: ;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00478C4C; /* je: equal / zero */

loc_00478C37: ;
    if (CMP_G(edx & edx, 0)) goto loc_00478C4C; /* jg: greater (signed >) */

loc_00478C3B: ;
    if (TEST_S(edx, edx)) goto loc_00478C41; /* jl: less (signed <) */

loc_00478C3D: ;
    if (CMP_AE(eax & eax, 0)) goto loc_00478C4C; /* jae: above or equal (unsigned >=) */

loc_00478C41: ;
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx + 0 + _cf; /* adc */
    edx = (uint32_t)(-(int32_t)edx);
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;

loc_00478C4C: ;
    (void)0; /* test MEM32(ebp + -4), esi - flags set for next jcc */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(MEM32(ebp + -4), esi)) goto loc_00478C57; /* jne: not equal / not zero */

loc_00478C55: ;
    edi = 0; /* xor self */

loc_00478C57: ;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_00478C66; /* jge: greater or equal (signed >=) */

loc_00478C5D: ;
    MEM32(ebp + -8) = 1;
    goto loc_00478C77;

loc_00478C66: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    eax = 0x200;
    if (CMP_LE(MEM32(ebp + -8), eax)) goto loc_00478C77; /* jle: less or equal (signed <=) */

loc_00478C74: ;
    MEM32(ebp + -8) = eax;

loc_00478C77: ;
    eax = ebx;
    eax = eax | edi;
    if ((eax != 0)) goto loc_00478C81; /* jne: not equal / not zero */

loc_00478C7D: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;

loc_00478C81: ;
    esi = ebp + -597;

loc_00478C87: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if (CMP_G(eax & eax, 0)) goto loc_00478C97; /* jg: greater (signed >) */

loc_00478C91: ;
    eax = ebx;
    eax = eax | edi;
    if ((eax == 0)) goto loc_00478CBB; /* je: equal / zero */

loc_00478C97: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C370(); /* call 0x0047C370 */

loc_00478CA4: ;
    ecx = ecx + 0x30;
    (void)0; /* cmp ecx, 0x39 - flags set for next jcc */
    MEM32(ebp + -72) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(ecx, 0x39)) goto loc_00478CB6; /* jle: less or equal (signed <=) */

loc_00478CB3: ;
    ecx = ecx + MEM32(ebp + -48);

loc_00478CB6: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    goto loc_00478C87;

loc_00478CBB: ;
    eax = ebp + -597;
    eax = eax - esi;
    esi++;
    (void)0; /* test MEM8(ebp + -3), 2 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(MEM8(ebp + -3), 2)) goto loc_00478CE8; /* je: equal / zero */

loc_00478CD0: ;
    ecx = esi;
    if (CMP_NE(MEM8(ecx), 0x30)) goto loc_00478CDB; /* jne: not equal / not zero */

loc_00478CD7: ;
    if (TEST_NZ(eax, eax)) goto loc_00478CE8; /* jne: not equal / not zero */

loc_00478CDB: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;

loc_00478CE5: ;
    MEM32(ebp + -16) = eax;

loc_00478CE8: ;
    if (CMP_NE(MEM32(ebp + -52), 0)) goto loc_00478DE0; /* jne: not equal / not zero */

loc_00478CF2: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00478D23; /* je: equal / zero */

loc_00478CF9: ;
    if (TEST_Z(HI8(eax), 1)) goto loc_00478D06; /* je: equal / zero */

loc_00478CFE: ;
    MEM16(ebp + -36) = 0x2D;
    goto loc_00478D1C;

loc_00478D06: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00478D12; /* je: equal / zero */

loc_00478D0A: ;
    MEM16(ebp + -36) = 0x2B;
    goto loc_00478D1C;

loc_00478D12: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00478D23; /* je: equal / zero */

loc_00478D16: ;
    MEM16(ebp + -36) = 0x20;

loc_00478D1C: ;
    MEM32(ebp + -24) = 1;

loc_00478D23: ;
    ebx = MEM32(ebp + -32);
    ebx = ebx - MEM32(ebp + -24);
    ebx = ebx - MEM32(ebp + -16);
    if (TEST_NZ(MEM8(ebp + -4), 0xC)) goto loc_00478D43; /* jne: not equal / not zero */

loc_00478D32: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_00478604(); /* call 0x00478604 */

loc_00478D40: ;
    esp = esp + 0xC;

loc_00478D43: ;
    PUSH32(esp, MEM32(ebp + -24));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -36;
    PUSH32(esp, 0); sub_00478629(); /* call 0x00478629 */

loc_00478D54: ;
    (void)0; /* test MEM8(ebp + -4), 8 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(MEM8(ebp + -4), 8)) goto loc_00478D70; /* je: equal / zero */

loc_00478D5B: ;
    if (TEST_NZ(MEM8(ebp + -4), 4)) goto loc_00478D70; /* jne: not equal / not zero */

loc_00478D61: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_00478604(); /* call 0x00478604 */

loc_00478D6D: ;
    esp = esp + 0xC;

loc_00478D70: ;
    if (CMP_NE(MEM32(ebp + -28), 0)) goto loc_00478DBA; /* jne: not equal / not zero */

loc_00478D76: ;
    eax = MEM32(ebp + -16);
    if (CMP_LE(eax & eax, 0)) goto loc_00478DBA; /* jle: less or equal (signed <=) */

loc_00478D7D: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -56) = eax;

loc_00478D83: ;
    PUSH32(esp, MEM32(0x655AF0));
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    eax = ebp + -68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C4CA(); /* call 0x0047C4CA */

loc_00478D96: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -72) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_00478DC9; /* jle: less or equal (signed <=) */

loc_00478DA0: ;
    PUSH32(esp, MEM32(ebp + -68));
    eax = MEM32(ebp + 8);
    esi = ebp + -20;
    PUSH32(esp, 0); sub_004785DF(); /* call 0x004785DF */

loc_00478DAE: ;
    edi = edi + MEM32(ebp + -72);
    (void)0; /* cmp MEM32(ebp + -56), 0 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_G(MEM32(ebp + -56), 0)) goto loc_00478D83; /* jg: greater (signed >) */

loc_00478DB8: ;
    goto loc_00478DC9;

loc_00478DBA: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0); sub_00478629(); /* call 0x00478629 */

loc_00478DC8: ;
    POP32(esp, ecx);

loc_00478DC9: ;
    if (TEST_Z(MEM8(ebp + -4), 4)) goto loc_00478DE0; /* je: equal / zero */

loc_00478DCF: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_00478604(); /* call 0x00478604 */

loc_00478DDD: ;
    esp = esp + 0xC;

loc_00478DE0: ;
    if (CMP_EQ(MEM32(ebp + -44), 0)) goto loc_00478DF3; /* je: equal / zero */

loc_00478DE6: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00478DEE: ;
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;

loc_00478DF2: ;
    POP32(esp, ecx);

loc_00478DF3: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ebx, MEM16(eax));
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_00478690; /* jne: not equal / not zero */

loc_00478E02: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00478E04: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00478EB2
 * Original: 0x00478EB2 - 0x00478EDC (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478EB2(void)
{
    int _flags = 0; /* fallback flag var */

loc_00478EB2: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_00478EDB; /* je: equal / zero */

loc_00478EB9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(MEM8(esi + 0xD), 0x10)) goto loc_00478EDA; /* je: equal / zero */

loc_00478EC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F9C4(); /* call 0x0046F9C4 */

loc_00478ECA: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xEE;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    MEM32(esi) = MEM32(esi) & 0;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, ecx);

loc_00478EDA: ;
    POP32(esp, esi);

loc_00478EDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00478EDC
 * Original: 0x00478EDC - 0x00479025 (329 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00478EDC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00478EDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x75FA20);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(edi));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 0x61 - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(LO8(eax), 0x61)) goto loc_00478F15; /* je: equal / zero */

loc_00478EFB: ;
    if (CMP_EQ(LO8(eax), 0x72)) goto loc_00478F0E; /* je: equal / zero */

loc_00478EFF: ;
    if (CMP_NE(LO8(eax), 0x77)) goto loc_00479021; /* jne: not equal / not zero */

loc_00478F07: ;
    ecx = 0x301;
    goto loc_00478F1A;

loc_00478F0E: ;
    ecx = 0; /* xor self */
    esi = esi | 1;
    goto loc_00478F1D;

loc_00478F15: ;
    ecx = 0x109;

loc_00478F1A: ;
    esi = esi | 2;

loc_00478F1D: ;
    edx = 0; /* xor self */
    edx++;
    goto loc_00478FFC;

loc_00478F25: ;
    if (CMP_EQ(edx, ebx)) goto loc_00479007; /* je: equal / zero */

loc_00478F2D: ;
    eax = SX8(LO8(eax));
    if (CMP_G(eax, 0x54)) goto loc_00478FA6; /* jg: greater (signed >) */

loc_00478F35: ;
    if (CMP_EQ(eax, 0x54)) goto loc_00478F99; /* je: equal / zero */

loc_00478F37: ;
    eax = eax - 0x2B;
    if ((eax == 0)) goto loc_00478F83; /* je: equal / zero */

loc_00478F3C: ;
    eax = eax - 0x19;
    if ((eax == 0)) goto loc_00478F79; /* je: equal / zero */

loc_00478F41: ;
    eax = eax - 0xE;
    if ((eax == 0)) goto loc_00478F65; /* je: equal / zero */

loc_00478F46: ;
    eax--;
    if ((eax != 0)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478F4D: ;
    if (CMP_NE(MEM32(ebp + -4), ebx)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478F56: ;
    MEM32(ebp + -4) = 1;
    ecx = ecx | 0x20;
    goto loc_00478FFC;

loc_00478F65: ;
    if (CMP_NE(MEM32(ebp + -4), ebx)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478F6A: ;
    MEM32(ebp + -4) = 1;
    ecx = ecx | 0x10;
    goto loc_00478FFC;

loc_00478F79: ;
    if (TEST_NZ(LO8(ecx), 0x40)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478F7E: ;
    ecx = ecx | 0x40;
    goto loc_00478FFC;

loc_00478F83: ;
    if (TEST_NZ(LO8(ecx), 2)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478F88: ;
    ecx = ecx & 0xFFFFFFFEu;
    esi = esi & 0xFFFFFFFCu;
    ecx = ecx | 2;
    esi = esi | 0x80;
    goto loc_00478FFC;

loc_00478F99: ;
    eax = 0x1000;
    if (TEST_NZ(eax, ecx)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478FA2: ;
    ecx = ecx | eax;
    goto loc_00478FFC;

loc_00478FA6: ;
    eax = eax - 0x62;
    if ((eax == 0)) goto loc_00478FF1; /* je: equal / zero */

loc_00478FAB: ;
    eax--;
    if ((eax == 0)) goto loc_00478FD9; /* je: equal / zero */

loc_00478FAE: ;
    eax = eax - 0xB;
    if ((eax == 0)) goto loc_00478FC5; /* je: equal / zero */

loc_00478FB3: ;
    eax = eax - 6;
    if ((eax != 0)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478FB8: ;
    if (TEST_NZ(HI8(ecx), 0xC0)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478FBD: ;
    ecx = ecx | 0x4000;
    goto loc_00478FFC;

loc_00478FC5: ;
    if (CMP_NE(MEM32(ebp + -8), ebx)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478FCA: ;
    MEM32(ebp + -8) = 1;
    esi = esi & 0xFFFFBFFFu;
    goto loc_00478FFC;

loc_00478FD9: ;
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_00478FE2; /* je: equal / zero */

loc_00478FDE: ;
    edx = 0; /* xor self */
    goto loc_00478FFC;

loc_00478FE2: ;
    MEM32(ebp + -8) = 1;
    esi = esi | 0x4000;
    goto loc_00478FFC;

loc_00478FF1: ;
    if (TEST_NZ(HI8(ecx), 0xC0)) goto loc_00478FDE; /* jne: not equal / not zero */

loc_00478FF6: ;
    ecx = ecx | 0x8000;

loc_00478FFC: ;
    edi++;
    SET_LO8(eax, MEM8(edi));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00478F25; /* jne: not equal / not zero */

loc_00479007: ;
    PUSH32(esp, 0x1A4);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047C797(); /* call 0x0047C797 */

loc_00479018: ;
    ecx = eax;
    esp = esp + 0x10;
    if (CMP_GE(ecx, ebx)) { sub_00479025(); return; } /* jge: greater or equal (signed >=) */

loc_00479021: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0047903F(); return; /* tail jmp 0x0047903F */

}

/**
 * sub_00479044
 * Original: 0x00479044 - 0x0047915A (278 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479044(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479044: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x5873C0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00479050: ;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047905E: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    esi = 0; /* xor self */

loc_00479064: ;
    MEM32(ebp + -32) = esi;
    if (CMP_GE(esi, MEM32(0x881478))) goto loc_00479133; /* jge: greater or equal (signed >=) */

loc_00479073: ;
    eax = MEM32(0x881474);
    eax = MEM32(eax + esi * 4);
    if (CMP_EQ(eax, ebx)) goto loc_004790CF; /* je: equal / zero */

loc_0047907F: ;
    if (TEST_NZ(MEM8(eax + 0xC), 0x83)) goto loc_004790C8; /* jne: not equal / not zero */

loc_00479085: ;
    if (CMP_LE(esi, 2)) goto loc_004790A1; /* jle: less or equal (signed <=) */

loc_0047908A: ;
    if (CMP_GE(esi, 0x14)) goto loc_004790A1; /* jge: greater or equal (signed >=) */

loc_0047908F: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472A84(); /* call 0x00472A84 */

loc_00479098: ;
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00479133; /* je: equal / zero */

loc_004790A1: ;
    eax = MEM32(0x881474);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471638(); /* call 0x00471638 */

loc_004790AF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = MEM32(0x881474);
    eax = MEM32(eax + esi * 4);
    if (TEST_Z(MEM8(eax + 0xC), 0x83)) goto loc_004790CB; /* je: equal / zero */

loc_004790BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047168A(); /* call 0x0047168A */

loc_004790C6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004790C8: ;
    esi++;
    goto loc_00479064;

loc_004790CB: ;
    edi = eax;
    goto loc_00479130;

loc_004790CF: ;
    esi = esi << 2;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_004790D9: ;
    POP32(esp, ecx);
    ecx = MEM32(0x881474);
    MEM32(esi + ecx) = eax;
    eax = MEM32(0x881474);
    eax = MEM32(esi + eax);
    if (CMP_EQ(eax, ebx)) goto loc_00479133; /* je: equal / zero */

loc_004790EF: ;
    PUSH32(esp, 0xFA0);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C2AB(); /* call 0x0047C2AB */

loc_004790FD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x881474);
    if (TEST_NZ(eax, eax)) goto loc_0047911B; /* jne: not equal / not zero */

loc_00479108: ;
    PUSH32(esp, MEM32(esi + eax));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479110: ;
    POP32(esp, ecx);
    eax = MEM32(0x881474);
    MEM32(esi + eax) = ebx;
    goto loc_00479133;

loc_0047911B: ;
    eax = MEM32(esi + eax);
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_00479128: ;
    eax = MEM32(0x881474);
    edi = MEM32(esi + eax);

loc_00479130: ;
    MEM32(ebp + -28) = edi;

loc_00479133: ;
    if (CMP_EQ(edi, ebx)) goto loc_00479149; /* je: equal / zero */

loc_00479137: ;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | 0xFFFFFFFFu;

loc_00479149: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0047915D(); /* call 0x0047915D */

loc_00479152: ;
    eax = edi;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00479159: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047915D
 * Original: 0x0047915D - 0x00479166 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047915D(void)
{

loc_0047915D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_00479164: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00479166
 * Original: 0x00479166 - 0x004791B2 (76 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479166(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479166: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_00479172: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_004791B2(); return; } /* je: equal / zero */

loc_00479178: ;
    if (CMP_EQ(esi, 1)) goto loc_00479182; /* je: equal / zero */

loc_0047917D: ;
    if (CMP_NE(esi, 2)) goto loc_00479198; /* jne: not equal / not zero */

loc_00479182: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_00479189: ;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_00479192: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(eax, edi)) { sub_004791B2(); return; } /* je: equal / zero */

loc_00479198: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_0047919E: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004791A5: ;
    if (TEST_NZ(eax, eax)) { sub_004791B2(); return; } /* jne: not equal / not zero */

loc_004791A9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004791AE: ;
    edi = eax;
    g_seh_ebp = ebp; sub_004791B4(); return; /* tail jmp 0x004791B4 */

}

/**
 * sub_004791E7
 * Original: 0x004791E7 - 0x0047923E (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004791E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004791E7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5873D0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004791F3: ;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x881340))) { sub_00479266(); return; } /* jae: above or equal (unsigned >=) */

loc_004791FE: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x881360;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_00479266(); return; } /* je: equal / zero */

loc_0047921E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C8BC(); /* call 0x0047C8BC */

loc_00479224: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047923E(); return; } /* je: equal / zero */

loc_00479232: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479166(); /* call 0x00479166 */

loc_00479238: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_0047924D(); return; /* tail jmp 0x0047924D */

}

/**
 * sub_0047925E
 * Original: 0x0047925E - 0x00479266 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047925E(void)
{

loc_0047925E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_00479264: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00479282
 * Original: 0x00479282 - 0x004792AD (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479282(void)
{
    int _flags = 0; /* fallback flag var */

loc_00479282: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 0x83)) goto loc_004792AB; /* je: equal / zero */

loc_0047928E: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_004792AB; /* je: equal / zero */

loc_00479292: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0047929A: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0xFBF7;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;

loc_004792AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004792AD
 * Original: 0x004792AD - 0x0047938E (225 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004792AD(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004792AD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 0x83)) goto loc_00479389; /* je: equal / zero */

loc_004792BD: ;
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_00479389; /* jne: not equal / not zero */

loc_004792C5: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_004792D4; /* je: equal / zero */

loc_004792C9: ;
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;
    goto loc_00479389;

loc_004792D4: ;
    eax = eax | 1;
    (void)0; /* test LO16(eax), 0x10C - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(LO16(eax), 0x10C)) goto loc_004792E9; /* jne: not equal / not zero */

loc_004792E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004796E1(); /* call 0x004796E1 */

loc_004792E6: ;
    POP32(esp, ecx);
    goto loc_004792EE;

loc_004792E9: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;

loc_004792EE: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_0047BF33(); /* call 0x0047BF33 */

loc_004792FC: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00479378; /* je: equal / zero */

loc_00479306: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00479378; /* je: equal / zero */

loc_0047930B: ;
    edx = MEM32(esi + 0xC);
    if (TEST_NZ(LO8(edx), 0x82)) goto loc_0047934D; /* jne: not equal / not zero */

loc_00479313: ;
    ecx = MEM32(esi + 0x10);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00479333; /* je: equal / zero */

loc_0047931C: ;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 5);
    edi = MEM32(edi * 4 + 0x881360);
    ecx = ecx & 0x1F;
    ecx = ecx + ecx * 4;
    edi = edi + ecx * 8;
    goto loc_00479338;

loc_00479333: ;
    edi = 0x655E00;

loc_00479338: ;
    SET_LO8(ecx, MEM8(edi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x82);
    (void)0; /* cmp LO8(ecx), 0x82 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(LO8(ecx), 0x82)) goto loc_0047934D; /* jne: not equal / not zero */

loc_00479344: ;
    edx = edx | 0x2000;
    MEM32(esi + 0xC) = edx;

loc_0047934D: ;
    if (CMP_NE(MEM32(esi + 0x18), 0x200)) goto loc_0047936A; /* jne: not equal / not zero */

loc_00479356: ;
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(LO8(ecx), 8)) goto loc_0047936A; /* je: equal / zero */

loc_0047935E: ;
    if (TEST_NZ(HI8(ecx), 4)) goto loc_0047936A; /* jne: not equal / not zero */

loc_00479363: ;
    MEM32(esi + 0x18) = 0x1000;

loc_0047936A: ;
    ecx = MEM32(esi);
    eax--;
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(ecx));
    ecx++;
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00479378: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10;
    eax = eax + 0x10;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | eax;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_00479389: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047938E
 * Original: 0x0047938E - 0x004793AF (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047938E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047938E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_00479399: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_004793AF(); return; } /* jne: not equal / not zero */

loc_0047939F: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_004793A4: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00479400
 * Original: 0x00479400 - 0x0047945F (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479400: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5873E0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047940C: ;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x881340))) { sub_0047948F(); return; } /* jae: above or equal (unsigned >=) */

loc_00479417: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x881360;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047948F(); return; } /* je: equal / zero */

loc_00479437: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C8BC(); /* call 0x0047C8BC */

loc_0047943D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047945F(); return; } /* je: equal / zero */

loc_0047944B: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047938E(); /* call 0x0047938E */

loc_00479457: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_00479476(); return; /* tail jmp 0x00479476 */

}

/**
 * sub_00479487
 * Original: 0x00479487 - 0x0047948F (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479487(void)
{

loc_00479487: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_0047948D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004794AB
 * Original: 0x004794AB - 0x004794C9 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004794AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004794AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x41C;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), edi - flags set for next jcc */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -20) = edi;
    if (CMP_NE(MEM32(ebp + 0x10), edi)) { sub_004794C9(); return; } /* jne: not equal / not zero */

loc_004794C2: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00479633(); return; /* tail jmp 0x00479633 */

}

/**
 * sub_00479636
 * Original: 0x00479636 - 0x00479695 (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479636(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479636: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5873F0);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00479642: ;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x881340))) { sub_004796C5(); return; } /* jae: above or equal (unsigned >=) */

loc_0047964D: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x881360;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_004796C5(); return; } /* je: equal / zero */

loc_0047966D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C8BC(); /* call 0x0047C8BC */

loc_00479673: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_00479695(); return; } /* je: equal / zero */

loc_00479681: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004794AB(); /* call 0x004794AB */

loc_0047968D: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_004796AC(); return; /* tail jmp 0x004796AC */

}

/**
 * sub_004796BD
 * Original: 0x004796BD - 0x004796C5 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004796BD(void)
{

loc_004796BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_004796C3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004796E1
 * Original: 0x004796E1 - 0x0047970A (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004796E1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004796E1: ;
    MEM32(0x75F7DC) = MEM32(0x75F7DC) + 1;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_004796F1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    if (TEST_Z(eax, eax)) { sub_0047970A(); return; } /* je: equal / zero */

loc_004796FD: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;
    MEM32(ecx + 0x18) = 0x1000;
    g_seh_ebp = ebp; sub_0047971B(); return; /* tail jmp 0x0047971B */

}

/**
 * sub_00479725
 * Original: 0x00479725 - 0x004797EC (199 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479725(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00479725: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 4), eax - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    if (CMP_GE(MEM32(edi + 4), eax)) goto loc_00479741; /* jge: greater or equal (signed >=) */

loc_0047973E: ;
    MEM32(edi + 4) = eax;

loc_00479741: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047CB7B(); /* call 0x0047CB7B */

loc_0047974B: ;
    ecx = edx;
    esp = esp + 0x10;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = eax;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ecx;
    if (CMP_G(ecx & ecx, 0)) goto loc_00479766; /* jg: greater (signed >) */

loc_0047975C: ;
    if (TEST_S(ecx, ecx)) goto loc_004797E2; /* jl: less (signed <) */

loc_00479762: ;
    if (CMP_B(ebx & ebx, 0)) goto loc_004797E2; /* jb: below (unsigned <) */

loc_00479766: ;
    if (TEST_NZ(MEM16(edi + 0xC), 0x108)) goto loc_0047977F; /* jne: not equal / not zero */

loc_0047976E: ;
    eax = MEM32(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = ebx - eax;
    ecx = ecx - edx - _cf; /* sbb */
    eax = ebx;
    edx = ecx;
    g_seh_ebp = ebp; sub_004798B5(); return; /* tail jmp 0x004798B5 */

loc_0047977F: ;
    eax = MEM32(edi);
    edx = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx - edx;
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(edi + 0xC);
    if (TEST_Z(LO8(ecx), 3)) goto loc_004797D3; /* je: equal / zero */

loc_00479793: ;
    ebx = esi;
    ecx = esi;
    ebx = (uint32_t)((int32_t)ebx >> 5);
    ebx = MEM32(ebx * 4 + 0x881360);
    ecx = ecx & 0x1F;
    ecx = ecx + ecx * 4;
    if (TEST_Z(MEM8(ebx + ecx * 8 + 4), 0x80)) goto loc_004797C1; /* je: equal / zero */

loc_004797AE: ;
    ecx = edx;
    if (CMP_AE(ecx, eax)) goto loc_004797C1; /* jae: above or equal (unsigned >=) */

loc_004797B4: ;
    if (CMP_NE(MEM8(ecx), 0xA)) goto loc_004797BC; /* jne: not equal / not zero */

loc_004797B9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;

loc_004797BC: ;
    ecx++;
    if (CMP_B(ecx, MEM32(edi))) goto loc_004797B4; /* jb: below (unsigned <) */

loc_004797C1: ;
    ebx = MEM32(ebp + -16);

loc_004797C4: ;
    ebx = ebx | MEM32(ebp + -12);
    if ((ebx != 0)) { sub_004797EC(); return; } /* jne: not equal / not zero */

loc_004797C9: ;
    eax = MEM32(ebp + -4);
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_004798B5(); return; /* tail jmp 0x004798B5 */

loc_004797D3: ;
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_004797C4; /* js: sign (negative) */

loc_004797D7: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_004797DC: ;
    MEM32(eax) = 0x16;

loc_004797E2: ;
    edx = edx | 0xFFFFFFFFu;
    eax = edx;
    g_seh_ebp = ebp; sub_004798B5(); return; /* tail jmp 0x004798B5 */

}

/**
 * sub_004798BA
 * Original: 0x004798BA - 0x004798F7 (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004798BA(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004798BA: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x587400);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004798C6: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_004798CE: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00479725(); /* call 0x00479725 */

loc_004798DB: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_004798F7(); /* call 0x004798F7 */

loc_004798EB: ;
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004798F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004798F7
 * Original: 0x004798F7 - 0x00479901 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004798F7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004798F7: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_004798FF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00479901
 * Original: 0x00479901 - 0x00479994 (147 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479901(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00479901: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), 0x83 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 0x83)) goto loc_00479982; /* je: equal / zero */

loc_00479910: ;
    edi = MEM32(ebp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_00479921; /* je: equal / zero */

loc_00479917: ;
    if (CMP_EQ(edi, 1)) goto loc_00479921; /* je: equal / zero */

loc_0047991C: ;
    if (CMP_NE(edi, 2)) goto loc_00479982; /* jne: not equal / not zero */

loc_00479921: ;
    eax = eax & 0xFFFFFFEFu;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(edi, 1)) goto loc_0047993B; /* jne: not equal / not zero */

loc_0047992C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00479725(); /* call 0x00479725 */

loc_00479932: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    POP32(esp, ecx);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + edx + _cf; /* adc */
    edi = 0; /* xor self */

loc_0047993B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F9C4(); /* call 0x0046F9C4 */

loc_00479941: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ecx);
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00479951; /* jns: not sign (positive) */

loc_00479949: ;
    eax = eax & 0xFFFFFFFCu;
    MEM32(esi + 0xC) = eax;
    goto loc_00479965;

loc_00479951: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00479965; /* je: equal / zero */

loc_00479955: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00479965; /* je: equal / zero */

loc_00479959: ;
    if (TEST_NZ(HI8(eax), 4)) goto loc_00479965; /* jne: not equal / not zero */

loc_0047995E: ;
    MEM32(esi + 0x18) = 0x200;

loc_00479965: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_0047CB7B(); /* call 0x0047CB7B */

loc_00479974: ;
    eax = eax & edx;
    esp = esp + 0x10;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0047998D; /* je: equal / zero */

loc_0047997E: ;
    eax = 0; /* xor self */
    goto loc_00479990;

loc_00479982: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_00479987: ;
    MEM32(eax) = 0x16;

loc_0047998D: ;
    eax = eax | 0xFFFFFFFFu;

loc_00479990: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00479994
 * Original: 0x00479994 - 0x004799D6 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479994(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479994: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x587410);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004799A0: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_004799A8: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00479901(); /* call 0x00479901 */

loc_004799BE: ;
    esp = esp + 0x10;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_004799D6(); /* call 0x004799D6 */

loc_004799CD: ;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004799D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004799D6
 * Original: 0x004799D6 - 0x004799E0 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004799D6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004799D6: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_004799DE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004799E0
 * Original: 0x004799E0 - 0x00479A7B (155 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004799E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004799E0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x587420);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004799EC: ;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x881340))) { sub_00479A86(); return; } /* jae: above or equal (unsigned >=) */

loc_004799FB: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x881360;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_00479A86(); return; } /* je: equal / zero */

loc_00479A1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C8BC(); /* call 0x0047C8BC */

loc_00479A21: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) goto loc_00479A5E; /* je: equal / zero */

loc_00479A2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_00479A35: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C165(); /* call 0x0042C165 */

loc_00479A3C: ;
    if (TEST_NZ(eax, eax)) goto loc_00479A4A; /* jne: not equal / not zero */

loc_00479A40: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00479A45: ;
    MEM32(ebp + -28) = eax;
    goto loc_00479A4E;

loc_00479A4A: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_00479A4E: ;
    if (CMP_EQ(MEM32(ebp + -28), 0)) goto loc_00479A6D; /* je: equal / zero */

loc_00479A54: ;
    PUSH32(esp, 0); sub_00471B1D(); /* call 0x00471B1D */

loc_00479A59: ;
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;

loc_00479A5E: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_00479A63: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_00479A6D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00479A7E(); /* call 0x00479A7E */

loc_00479A76: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00479A94(); return; /* tail jmp 0x00479A94 */

}

/**
 * sub_00479A7E
 * Original: 0x00479A7E - 0x00479A86 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479A7E(void)
{

loc_00479A7E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_00479A84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00479A9A
 * Original: 0x00479A9A - 0x00479AA8 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479A9A(void)
{
    int _flags = 0; /* fallback flag var */

loc_00479A9A: ;
    eax = MEM32(esp + 4);
    if (CMP_BE(eax, 0xFF)) { sub_00479AA8(); return; } /* jbe: below or equal (unsigned <=) */

loc_00479AA5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00479ACA
 * Original: 0x00479ACA - 0x00479AEA (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479ACA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479ACA: ;
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_00479AD7; /* je: equal / zero */

loc_00479AD1: ;
    MEM8(ecx) = 0x2D;
    ecx++;
    eax = (uint32_t)(-(int32_t)eax);

loc_00479AD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 8)); }
    if (CMP_BE(edx, 9)) { sub_00479AEA(); return; } /* jbe: below or equal (unsigned <=) */

loc_00479AE5: ;
    SET_LO8(edx, LO8(edx) + 0x57);
    g_seh_ebp = ebp; sub_00479AED(); return; /* tail jmp 0x00479AED */

}

/**
 * sub_00479B08
 * Original: 0x00479B08 - 0x00479B1E (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479B08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00479B08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0x10), 0xA - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM32(ebp + 0x10), 0xA)) { sub_00479B1E(); return; } /* jne: not equal / not zero */

loc_00479B14: ;
    if (CMP_GE(eax & eax, 0)) { sub_00479B1E(); return; } /* jge: greater or equal (signed >=) */

loc_00479B18: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    g_seh_ebp = ebp; sub_00479B23(); return; /* tail jmp 0x00479B23 */

}

/**
 * sub_00479B32
 * Original: 0x00479B32 - 0x00479B6B (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479B32(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479B32: ;
    eax = ZX8(MEM8(0x24));
    if (CMP_B(LO8(eax), 2)) goto loc_00479B46; /* jb: below (unsigned <) */

loc_00479B3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561214), _icall_esp); /* indirect call */
    }

loc_00479B46: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(0x00760028), 0)) { sub_00479B6B(); return; } /* je: equal / zero */

loc_00479B54: ;
    edi = 0x0076020C;
    g_seh_ebp = ebp; sub_00479B70(); return; /* tail jmp 0x00479B70 */

}

/**
 * sub_00479BB4
 * Original: 0x00479BB4 - 0x00479C71 (189 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479BB4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479BB4: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x587430);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00479BC0: ;
    esi = MEM32(ebp + 8);
    if (TEST_Z(esi, esi)) goto loc_00479C69; /* je: equal / zero */

loc_00479BCB: ;
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00479BD9; /* je: equal / zero */

loc_00479BD2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479BD8: ;
    POP32(esp, ecx);

loc_00479BD9: ;
    eax = MEM32(esi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00479BE7; /* je: equal / zero */

loc_00479BE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479BE6: ;
    POP32(esp, ecx);

loc_00479BE7: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00479BF5; /* je: equal / zero */

loc_00479BEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479BF4: ;
    POP32(esp, ecx);

loc_00479BF5: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_00479C03; /* je: equal / zero */

loc_00479BFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479C02: ;
    POP32(esp, ecx);

loc_00479C03: ;
    eax = MEM32(esi + 0x44);
    if (TEST_Z(eax, eax)) goto loc_00479C11; /* je: equal / zero */

loc_00479C0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479C10: ;
    POP32(esp, ecx);

loc_00479C11: ;
    eax = MEM32(esi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_00479C1F; /* je: equal / zero */

loc_00479C18: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479C1E: ;
    POP32(esp, ecx);

loc_00479C1F: ;
    eax = MEM32(esi + 0x54);
    if (CMP_EQ(eax, 0x656038)) goto loc_00479C30; /* je: equal / zero */

loc_00479C29: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479C2F: ;
    POP32(esp, ecx);

loc_00479C30: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_00479C37: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(esi + 0x60);
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00479C59; /* je: equal / zero */

loc_00479C46: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00479C59; /* jne: not equal / not zero */

loc_00479C4A: ;
    if (CMP_EQ(eax, MEM32(0x8810EC))) goto loc_00479C59; /* je: equal / zero */

loc_00479C52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479C58: ;
    POP32(esp, ecx);

loc_00479C59: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00479C74(); /* call 0x00479C74 */

loc_00479C62: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_00479C68: ;
    POP32(esp, ecx);

loc_00479C69: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00479C6E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00479C74
 * Original: 0x00479C74 - 0x00479C7D (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479C74(void)
{

loc_00479C74: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_00479C7B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00479C7D
 * Original: 0x00479C7D - 0x00479CB5 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479C7D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479C7D: ;
    eax = ZX8(MEM8(0x24));
    if (CMP_B(LO8(eax), 2)) goto loc_00479C91; /* jb: below (unsigned <) */

loc_00479C89: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561214), _icall_esp); /* indirect call */
    }

loc_00479C91: ;
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(0x00760028), 0)) { sub_00479CB5(); return; } /* je: equal / zero */

loc_00479C9E: ;
    esi = 0x0076020C;
    g_seh_ebp = ebp; sub_00479CBA(); return; /* tail jmp 0x00479CBA */

}

/**
 * sub_00479CCF
 * Original: 0x00479CCF - 0x00479CDF (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479CCF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479CCF: ;
    PUSH32(esp, 0); sub_00472A00(); /* call 0x00472A00 */

loc_00479CD4: ;
    if (TEST_NZ(eax, eax)) { g_seh_ebp = ebp; sub_00479CDF(); return; } /* jne: not equal / not zero */

loc_00479CD8: ;
    PUSH32(esp, 0); sub_00472A49(); /* call 0x00472A49 */

loc_00479CDD: ;
    g_seh_ebp = ebp; sub_00479D3F(); return; /* tail jmp 0x00479D3F */

}

/**
 * sub_00479D42
 * Original: 0x00479D42 - 0x00479D65 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479D42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479D42: ;
    if (CMP_EQ(MEM16(esp + 4), 0xFFFF)) { sub_00479D65(); return; } /* je: equal / zero */

loc_00479D4B: ;
    if (CMP_AE(MEM16(esp + 4), 0x100)) { sub_00479D65(); return; } /* jae: above or equal (unsigned >=) */

loc_00479D54: ;
    eax = ZX16(MEM16(esp + 4));
    ecx = MEM32(0x655AEC);
    SET_LO16(eax, MEM16(ecx + eax * 2));
    g_seh_ebp = ebp; sub_00479D67(); return; /* tail jmp 0x00479D67 */

}

/**
 * sub_00479D72
 * Original: 0x00479D72 - 0x00479DAA (56 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479D72(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00479D72: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0047D264(); /* call 0x0047D264 */

loc_00479D93: ;
    ebx = eax;
    esp = esp + 0x1C;
    if (TEST_Z(LO8(ebx), 4)) { sub_00479DAA(); return; } /* je: equal / zero */

loc_00479D9D: ;
    edi = 0x200;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    g_seh_ebp = ebp; sub_00479DD8(); return; /* tail jmp 0x00479DD8 */

}

/**
 * sub_00479DF7
 * Original: 0x00479DF7 - 0x00479F69 (370 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479DF7(void)
{
    int _flags = 0; /* fallback flag var */

loc_00479DF7: ;
    SET_LO16(eax, MEM16(esp + 4));
    if (CMP_B(LO16(eax), 0x30)) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479E06: ;
    if (CMP_AE(LO16(eax), 0x3A)) goto loc_00479E13; /* jae: above or equal (unsigned >=) */

loc_00479E0C: ;
    eax = ZX16(LO16(eax));
    eax = eax - 0x30;
    esp += 4; return; /* ret */

loc_00479E13: ;
    ecx = 0xFF10;
    if (CMP_AE(LO16(eax), LO16(ecx))) goto loc_00479F5D; /* jae: above or equal (unsigned >=) */

loc_00479E21: ;
    ecx = 0x660;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479E2F: ;
    if (CMP_B(LO16(eax), 0x66A)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479E39: ;
    ecx = 0x6F0;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479E47: ;
    if (CMP_B(LO16(eax), 0x6FA)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479E51: ;
    ecx = 0x966;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479E5F: ;
    if (CMP_B(LO16(eax), 0x970)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479E69: ;
    ecx = 0x9E6;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479E77: ;
    if (CMP_B(LO16(eax), 0x9F0)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479E81: ;
    ecx = 0xA66;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479E8F: ;
    if (CMP_B(LO16(eax), 0xA70)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479E99: ;
    ecx = 0xAE6;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479EA7: ;
    if (CMP_B(LO16(eax), 0xAF0)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479EB1: ;
    ecx = 0xB66;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479EBF: ;
    if (CMP_B(LO16(eax), 0xB70)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479EC9: ;
    ecx = 0xC66;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479ED7: ;
    if (CMP_B(LO16(eax), 0xC70)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479EE1: ;
    ecx = 0xCE6;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479EEB: ;
    if (CMP_B(LO16(eax), 0xCF0)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479EF1: ;
    ecx = 0xD66;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479EFB: ;
    if (CMP_B(LO16(eax), 0xD70)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479F01: ;
    ecx = 0xE50;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479F0B: ;
    if (CMP_B(LO16(eax), 0xE5A)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479F11: ;
    ecx = 0xED0;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479F1B: ;
    if (CMP_B(LO16(eax), 0xEDA)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479F21: ;
    ecx = ecx + 0x50;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479F29: ;
    if (CMP_B(LO16(eax), 0xF2A)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479F2F: ;
    ecx = 0x1040;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479F39: ;
    if (CMP_B(LO16(eax), 0x104A)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479F3F: ;
    ecx = 0x17E0;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479F49: ;
    if (CMP_B(LO16(eax), 0x17EA)) goto loc_00479F63; /* jb: below (unsigned <) */

loc_00479F4F: ;
    ecx = ecx + 0x30;
    if (CMP_B(LO16(eax), LO16(ecx))) { sub_00479F69(); return; } /* jb: below (unsigned <) */

loc_00479F57: ;
    (void)0; /* cmp LO16(eax), 0x181A - flags set for next jcc */
    goto loc_00479F61;

loc_00479F5D: ;
    (void)0; /* cmp LO16(eax), 0xFF1A - flags set for next jcc */

loc_00479F61: ;
    if (CMP_AE(LO16(eax), 0xFF1A)) { sub_00479F69(); return; } /* jae: above or equal (unsigned >=) */

loc_00479F63: ;
    eax = ZX16(LO16(eax));
    eax = eax - ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00479F6D
 * Original: 0x00479F6D - 0x00479FA5 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479F6D(void)
{
    int _flags = 0; /* fallback flag var */

loc_00479F6D: ;
    if (TEST_NZ(LO16(esi), 0xFF00)) { sub_00479FA5(); return; } /* jne: not equal / not zero */

loc_00479F74: ;
    eax = esi;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_00479F90; /* jle: less or equal (signed <=) */

loc_00479F84: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_00479F8C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00479F9D;

loc_00479F90: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_00479F9D: ;
    if (TEST_Z(eax, eax)) { sub_00479FA5(); return; } /* je: equal / zero */

loc_00479FA1: ;
    SET_LO16(eax, LO16(esi));
    esp += 4; return; /* ret */

}

/**
 * sub_00479FBA
 * Original: 0x00479FBA - 0x00479FC8 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479FBA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479FBA: ;
    if (CMP_EQ(MEM16(esp + 4), 0xFFFF)) { sub_00479FC8(); return; } /* je: equal / zero */

loc_00479FC3: ;
    g_seh_ebp = ebp; sub_0047D7CF(); return; /* tail jmp 0x0047D7CF */

}

/**
 * sub_00479FC9
 * Original: 0x00479FC9 - 0x00479FE8 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479FC9(void)
{
    int _flags = 0; /* fallback flag var */

loc_00479FC9: ;
    PUSH32(esp, edi);

loc_00479FCA: ;
    PUSH32(esp, MEM32(esp + 8));
    MEM32(esi) = MEM32(esi) + 1;
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_00479FD5: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004706C2(); /* call 0x004706C2 */

loc_00479FDD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00479FCA; /* jne: not equal / not zero */

loc_00479FE3: ;
    SET_LO16(eax, LO16(edi));
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00479FE8
 * Original: 0x00479FE8 - 0x0047ABC5 (3037 bytes, 998 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00479FE8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00479FE8: ;
    PUSH32(esp, 0x320);
    PUSH32(esp, 0x587440);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00479FF7: ;
    ebx = 0; /* xor self */
    MEM32(ebp + -92) = ebx;
    MEM32(ebp + -108) = ebx;
    MEM32(ebp + -64) = ebx;
    MEM32(ebp + -48) = ebx;
    MEM8(ebp + -42) = LO8(ebx);
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -96) = ebx;

loc_0047A00E: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0047AB66; /* je: equal / zero */

loc_0047A01D: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00479D42(); /* call 0x00479D42 */

loc_0047A025: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047A05C; /* je: equal / zero */

loc_0047A02B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebp + -32;
    PUSH32(esp, 0); sub_00479FC9(); /* call 0x00479FC9 */

loc_0047A03C: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047A043: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047A045: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004706C2(); /* call 0x004706C2 */

loc_0047A055: ;
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047A045; /* jne: not equal / not zero */

loc_0047A05A: ;
    goto loc_0047A00E;

loc_0047A05C: ;
    edx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(edx), 0x25)) goto loc_0047AB98; /* jne: not equal / not zero */

loc_0047A069: ;
    eax = 0; /* xor self */
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -88) = eax;
    MEM32(ebp + -40) = eax;
    MEM8(ebp + -69) = LO8(eax);
    MEM8(ebp + -49) = LO8(eax);
    MEM8(ebp + -34) = LO8(eax);
    MEM8(ebp + -25) = LO8(eax);
    MEM8(ebp + -41) = LO8(eax);
    MEM8(ebp + -33) = LO8(eax);
    MEM8(ebp + -35) = 1;
    MEM32(ebp + -104) = eax;
    edi = 0xFF;

loc_0047A098: ;
    edx++;
    edx++;
    MEM32(ebp + 0xC) = edx;
    esi = ZX16(MEM16(edx));
    if (TEST_NZ(LO16(esi), 0xFF00)) goto loc_0047A0E9; /* jne: not equal / not zero */

loc_0047A0A7: ;
    eax = esi;
    eax = eax & edi;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047A0C3; /* jle: less or equal (signed <=) */

loc_0047A0B4: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047A0BC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    goto loc_0047A0D0;

loc_0047A0C3: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0047A0D0: ;
    if (TEST_Z(eax, eax)) goto loc_0047A0E9; /* je: equal / zero */

loc_0047A0D4: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    eax = MEM32(ebp + -40);
    eax = eax + eax * 4;
    eax = esi + eax * 2 + -48;
    MEM32(ebp + -40) = eax;
    goto loc_0047A19A;

loc_0047A0E9: ;
    if (CMP_G(esi, 0x4E)) goto loc_0047A178; /* jg: greater (signed >) */

loc_0047A0F2: ;
    if (CMP_EQ(esi, 0x4E)) goto loc_0047A19A; /* je: equal / zero */

loc_0047A0F8: ;
    if (CMP_EQ(esi, 0x2A)) goto loc_0047A173; /* je: equal / zero */

loc_0047A0FD: ;
    if (CMP_EQ(esi, 0x46)) goto loc_0047A19A; /* je: equal / zero */

loc_0047A106: ;
    if (CMP_EQ(esi, 0x49)) goto loc_0047A118; /* je: equal / zero */

loc_0047A10B: ;
    if (CMP_NE(esi, 0x4C)) goto loc_0047A187; /* jne: not equal / not zero */

loc_0047A110: ;
    MEM8(ebp + -35) = MEM8(ebp + -35) + 1;
    goto loc_0047A19A;

loc_0047A118: ;
    SET_LO16(ecx, MEM16(edx + 2));
    if (CMP_NE(LO16(ecx), 0x36)) goto loc_0047A13D; /* jne: not equal / not zero */

loc_0047A122: ;
    eax = edx + 4;
    if (CMP_NE(MEM16(eax), 0x34)) goto loc_0047A13D; /* jne: not equal / not zero */

loc_0047A12B: ;
    edx = eax;
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + -104) = MEM32(ebp + -104) + 1;
    MEM32(ebp + -80) = MEM32(ebp + -80) & 0;
    MEM32(ebp + -76) = MEM32(ebp + -76) & 0;
    goto loc_0047A19A;

loc_0047A13D: ;
    if (CMP_NE(LO16(ecx), 0x33)) goto loc_0047A153; /* jne: not equal / not zero */

loc_0047A143: ;
    eax = edx + 4;
    if (CMP_NE(MEM16(eax), 0x32)) goto loc_0047A153; /* jne: not equal / not zero */

loc_0047A14C: ;
    edx = eax;
    MEM32(ebp + 0xC) = edx;
    goto loc_0047A19A;

loc_0047A153: ;
    if (CMP_EQ(LO16(ecx), 0x64)) goto loc_0047A19A; /* je: equal / zero */

loc_0047A159: ;
    if (CMP_EQ(LO16(ecx), 0x69)) goto loc_0047A19A; /* je: equal / zero */

loc_0047A15F: ;
    if (CMP_EQ(LO16(ecx), 0x6F)) goto loc_0047A19A; /* je: equal / zero */

loc_0047A165: ;
    if (CMP_EQ(LO16(ecx), 0x78)) goto loc_0047A19A; /* je: equal / zero */

loc_0047A16B: ;
    if (CMP_NE(LO16(ecx), 0x58)) goto loc_0047A187; /* jne: not equal / not zero */

loc_0047A171: ;
    goto loc_0047A19A;

loc_0047A173: ;
    MEM8(ebp + -34) = MEM8(ebp + -34) + 1;
    goto loc_0047A19A;

loc_0047A178: ;
    if (CMP_EQ(esi, 0x68)) goto loc_0047A194; /* je: equal / zero */

loc_0047A17D: ;
    if (CMP_EQ(esi, 0x6C)) goto loc_0047A18C; /* je: equal / zero */

loc_0047A182: ;
    if (CMP_EQ(esi, 0x77)) goto loc_0047A18F; /* je: equal / zero */

loc_0047A187: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    goto loc_0047A19A;

loc_0047A18C: ;
    MEM8(ebp + -35) = MEM8(ebp + -35) + 1;

loc_0047A18F: ;
    MEM8(ebp + -33) = MEM8(ebp + -33) + 1;
    goto loc_0047A19A;

loc_0047A194: ;
    MEM8(ebp + -35) = MEM8(ebp + -35) - 1;
    MEM8(ebp + -33) = MEM8(ebp + -33) - 1;

loc_0047A19A: ;
    if (CMP_EQ(MEM8(ebp + -25), 0)) goto loc_0047A098; /* je: equal / zero */

loc_0047A1A4: ;
    if (CMP_NE(MEM8(ebp + -34), 0)) goto loc_0047A1BE; /* jne: not equal / not zero */

loc_0047A1AA: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -116) = eax;
    eax = eax + 4;
    MEM32(ebp + 0x10) = eax;
    edi = MEM32(eax + -4);
    MEM32(ebp + -64) = edi;
    goto loc_0047A1C1;

loc_0047A1BE: ;
    edi = MEM32(ebp + -64);

loc_0047A1C1: ;
    MEM8(ebp + -25) = 0;
    if (CMP_NE(MEM8(ebp + -33), 0)) goto loc_0047A1E5; /* jne: not equal / not zero */

loc_0047A1CB: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    if (CMP_EQ(LO16(eax), 0x53)) goto loc_0047A1E1; /* je: equal / zero */

loc_0047A1D7: ;
    (void)0; /* cmp LO16(eax), 0x43 - flags set for next jcc */
    MEM8(ebp + -33) = 1;
    if (CMP_NE(LO16(eax), 0x43)) goto loc_0047A1E5; /* jne: not equal / not zero */

loc_0047A1E1: ;
    MEM8(ebp + -33) = 0xFF;

loc_0047A1E5: ;
    eax = MEM32(ebp + 0xC);
    esi = ZX16(MEM16(eax));
    esi = esi | 0x20;
    MEM32(ebp + -56) = esi;
    if (CMP_EQ(esi, 0x6E)) goto loc_0047A221; /* je: equal / zero */

loc_0047A1F6: ;
    if (CMP_EQ(esi, 0x63)) goto loc_0047A210; /* je: equal / zero */

loc_0047A1FB: ;
    if (CMP_EQ(esi, 0x7B)) goto loc_0047A210; /* je: equal / zero */

loc_0047A200: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebp + -32;
    PUSH32(esp, 0); sub_00479FC9(); /* call 0x00479FC9 */

loc_0047A20B: ;
    esi = MEM32(ebp + -56);
    goto loc_0047A21B;

loc_0047A210: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A21B: ;
    ebx = eax;
    POP32(esp, ecx);
    MEM32(ebp + -48) = ebx;

loc_0047A221: ;
    ecx = MEM32(ebp + -88);
    if (TEST_Z(ecx, ecx)) goto loc_0047A232; /* je: equal / zero */

loc_0047A228: ;
    if (CMP_EQ(MEM32(ebp + -40), 0)) goto loc_0047ABB8; /* je: equal / zero */

loc_0047A232: ;
    if (CMP_G(esi, 0x6F)) goto loc_0047A5B9; /* jg: greater (signed >) */

loc_0047A23B: ;
    if (CMP_EQ(esi, 0x6F)) goto loc_0047A867; /* je: equal / zero */

loc_0047A241: ;
    if (CMP_EQ(esi, 0x63)) goto loc_0047A4F0; /* je: equal / zero */

loc_0047A24A: ;
    if (CMP_EQ(esi, 0x64)) goto loc_0047A867; /* je: equal / zero */

loc_0047A253: ;
    if (CMP_LE(esi, 0x64)) goto loc_0047A5E3; /* jle: less or equal (signed <=) */

loc_0047A259: ;
    if (CMP_LE(esi, 0x67)) goto loc_0047A297; /* jle: less or equal (signed <=) */

loc_0047A25E: ;
    if (CMP_EQ(esi, 0x69)) goto loc_0047A27E; /* je: equal / zero */

loc_0047A263: ;
    if (CMP_NE(esi, 0x6E)) goto loc_0047A5E3; /* jne: not equal / not zero */

loc_0047A26C: ;
    eax = MEM32(ebp + -32);
    if (CMP_EQ(MEM8(ebp + -34), 0)) goto loc_0047AB1F; /* je: equal / zero */

loc_0047A279: ;
    goto loc_0047AB3F;

loc_0047A27E: ;
    PUSH32(esp, 0x64);
    POP32(esp, esi);
    MEM32(ebp + -56) = esi;

loc_0047A284: ;
    if (CMP_NE(LO16(ebx), 0x2D)) goto loc_0047A74D; /* jne: not equal / not zero */

loc_0047A28E: ;
    MEM8(ebp + -49) = 1;
    goto loc_0047A753;

loc_0047A297: ;
    esi = ebp + -816;
    if (CMP_NE(LO16(ebx), 0x2D)) goto loc_0047A2B2; /* jne: not equal / not zero */

loc_0047A2A3: ;
    MEM16(ebp + -816) = LO16(ebx);
    esi = ebp + -814;
    goto loc_0047A2B8;

loc_0047A2B2: ;
    if (CMP_NE(LO16(ebx), 0x2B)) goto loc_0047A2CC; /* jne: not equal / not zero */

loc_0047A2B8: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A2C6: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0047A2CC: ;
    if (CMP_EQ(MEM32(ebp + -88), 0)) goto loc_0047A2DB; /* je: equal / zero */

loc_0047A2D2: ;
    if (CMP_LE(MEM32(ebp + -40), 0x15D)) goto loc_0047A2E2; /* jle: less or equal (signed <=) */

loc_0047A2DB: ;
    MEM32(ebp + -40) = 0x15D;

loc_0047A2E2: ;
    if (TEST_NZ(HI8(ebx), 0xFF)) goto loc_0047A33E; /* jne: not equal / not zero */

loc_0047A2E7: ;
    edi = 0xFF;

loc_0047A2EC: ;
    eax = ebx;
    eax = eax & edi;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047A305; /* jle: less or equal (signed <=) */

loc_0047A2F9: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047A301: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047A312;

loc_0047A305: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0047A312: ;
    if (TEST_Z(eax, eax)) goto loc_0047A33E; /* je: equal / zero */

loc_0047A316: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if (TEST_Z(eax, eax)) goto loc_0047A33E; /* je: equal / zero */

loc_0047A320: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    MEM16(esi) = LO16(ebx);
    esi++;
    esi++;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A333: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    if (TEST_Z(HI8(ebx), 0xFF)) goto loc_0047A2EC; /* je: equal / zero */

loc_0047A33E: ;
    PUSH32(esp, MEM32(0x655AF0));
    PUSH32(esp, 0x655AF4);
    eax = ebp + -100;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C4CA(); /* call 0x0047C4CA */

loc_0047A352: ;
    esp = esp + 0xC;
    edi = MEM32(ebp + -40);
    if (CMP_NE(MEM16(ebp + -100), LO16(ebx))) goto loc_0047A3CF; /* jne: not equal / not zero */

loc_0047A35E: ;
    eax = edi;
    edi--;
    if (TEST_Z(eax, eax)) goto loc_0047A3CF; /* je: equal / zero */

loc_0047A365: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A370: ;
    ebx = eax;
    SET_LO16(eax, MEM16(ebp + -100));
    MEM16(esi) = LO16(eax);
    esi++;
    esi++;
    goto loc_0047A3C6;

loc_0047A37D: ;
    eax = ebx;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047A399; /* jle: less or equal (signed <=) */

loc_0047A38D: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047A395: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047A3A6;

loc_0047A399: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0047A3A6: ;
    if (TEST_Z(eax, eax)) goto loc_0047A3CF; /* je: equal / zero */

loc_0047A3AA: ;
    eax = edi;
    edi--;
    if (TEST_Z(eax, eax)) goto loc_0047A3CF; /* je: equal / zero */

loc_0047A3B1: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    MEM16(esi) = LO16(ebx);
    esi++;
    esi++;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A3C4: ;
    ebx = eax;

loc_0047A3C6: ;
    POP32(esp, ecx);
    MEM32(ebp + -48) = ebx;
    if (TEST_Z(HI8(ebx), 0xFF)) goto loc_0047A37D; /* je: equal / zero */

loc_0047A3CF: ;
    if (CMP_EQ(MEM32(ebp + -60), 0)) goto loc_0047A47C; /* je: equal / zero */

loc_0047A3D9: ;
    if (CMP_EQ(LO16(ebx), 0x65)) goto loc_0047A3E9; /* je: equal / zero */

loc_0047A3DF: ;
    if (CMP_NE(LO16(ebx), 0x45)) goto loc_0047A47C; /* jne: not equal / not zero */

loc_0047A3E9: ;
    eax = edi;
    edi--;
    if (TEST_Z(eax, eax)) goto loc_0047A47C; /* je: equal / zero */

loc_0047A3F4: ;
    MEM16(esi) = 0x65;
    esi++;
    esi++;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A406: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    if (CMP_NE(LO16(ebx), 0x2D)) goto loc_0047A419; /* jne: not equal / not zero */

loc_0047A412: ;
    MEM16(esi) = LO16(ebx);
    esi++;
    esi++;
    goto loc_0047A41F;

loc_0047A419: ;
    if (CMP_NE(LO16(ebx), 0x2B)) goto loc_0047A477; /* jne: not equal / not zero */

loc_0047A41F: ;
    eax = edi;
    edi--;
    if (TEST_NZ(eax, eax)) goto loc_0047A466; /* jne: not equal / not zero */

loc_0047A426: ;
    edi = 0; /* xor self */
    goto loc_0047A477;

loc_0047A42A: ;
    eax = ebx;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047A446; /* jle: less or equal (signed <=) */

loc_0047A43A: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047A442: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047A453;

loc_0047A446: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0047A453: ;
    if (TEST_Z(eax, eax)) goto loc_0047A47C; /* je: equal / zero */

loc_0047A457: ;
    eax = edi;
    edi--;
    if (TEST_Z(eax, eax)) goto loc_0047A47C; /* je: equal / zero */

loc_0047A45E: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    MEM16(esi) = LO16(ebx);
    esi++;
    esi++;

loc_0047A466: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A471: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    POP32(esp, ecx);

loc_0047A477: ;
    if (TEST_Z(HI8(ebx), 0xFF)) goto loc_0047A42A; /* je: equal / zero */

loc_0047A47C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047A488: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(MEM32(ebp + -60), 0)) goto loc_0047AB66; /* je: equal / zero */

loc_0047A494: ;
    if (CMP_NE(MEM8(ebp + -34), 0)) goto loc_0047AB3F; /* jne: not equal / not zero */

loc_0047A49E: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) + 1;
    MEM16(esi) = MEM16(esi) & 0;
    eax = ebp + -816;
    esi = esi - eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    esi = esi + esi + 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0047A4B9: ;
    POP32(esp, ecx);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0047AB66; /* je: equal / zero */

loc_0047A4C4: ;
    PUSH32(esp, esi);
    eax = ebp + -816;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470227(); /* call 0x00470227 */

loc_0047A4D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -64));
    eax = (uint32_t)(int32_t)SMEM8(ebp + -35);
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x655D68), _icall_esp); /* indirect call */
    }

loc_0047A4E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0047A4E8: ;
    esp = esp + 0x1C;
    goto loc_0047AB3F;

loc_0047A4F0: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0047A4FE; /* jne: not equal / not zero */

loc_0047A4F4: ;
    MEM32(ebp + -88) = 1;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;

loc_0047A4FE: ;
    if (CMP_LE(MEM8(ebp + -33), 0)) goto loc_0047A508; /* jle: less or equal (signed <=) */

loc_0047A504: ;
    MEM8(ebp + -41) = 1;

loc_0047A508: ;
    esi = MEM32(ebp + -64);
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047A517: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047A519: ;
    if (CMP_EQ(MEM32(ebp + -88), 0)) goto loc_0047A52D; /* je: equal / zero */

loc_0047A51F: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if (TEST_Z(eax, eax)) goto loc_0047A829; /* je: equal / zero */

loc_0047A52D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A538: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    if (CMP_EQ(LO16(ebx), 0xFFFF)) goto loc_0047A81B; /* je: equal / zero */

loc_0047A549: ;
    if (CMP_EQ(MEM32(ebp + -56), 0x63)) goto loc_0047A596; /* je: equal / zero */

loc_0047A54F: ;
    if (CMP_NE(MEM32(ebp + -56), 0x73)) goto loc_0047A567; /* jne: not equal / not zero */

loc_0047A555: ;
    if (CMP_B(LO16(ebx), 9)) goto loc_0047A561; /* jb: below (unsigned <) */

loc_0047A55B: ;
    if (CMP_BE(LO16(ebx), 0xD)) goto loc_0047A567; /* jbe: below or equal (unsigned <=) */

loc_0047A561: ;
    if (CMP_NE(LO16(ebx), 0x20)) goto loc_0047A596; /* jne: not equal / not zero */

loc_0047A567: ;
    if (CMP_NE(MEM32(ebp + -56), 0x7B)) goto loc_0047A81B; /* jne: not equal / not zero */

loc_0047A571: ;
    eax = ZX16(LO16(ebx));
    ecx = eax;
    ecx = ecx & 7;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    eax = eax >> 3;
    ecx = MEM32(ebp + -92);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + -69);
    eax = eax ^ ecx;
    if (TEST_Z(eax, edx)) goto loc_0047A81B; /* je: equal / zero */

loc_0047A596: ;
    if (CMP_NE(MEM8(ebp + -34), 0)) goto loc_0047A814; /* jne: not equal / not zero */

loc_0047A5A0: ;
    if (CMP_EQ(MEM8(ebp + -41), 0)) goto loc_0047A803; /* je: equal / zero */

loc_0047A5AA: ;
    eax = MEM32(ebp + -64);
    MEM16(eax) = LO16(ebx);
    MEM32(ebp + -64) = MEM32(ebp + -64) + 2;
    goto loc_0047A519;

loc_0047A5B9: ;
    eax = esi;
    eax = eax - 0x70;
    if ((eax == 0)) goto loc_0047A863; /* je: equal / zero */

loc_0047A5C4: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0047A4FE; /* je: equal / zero */

loc_0047A5CD: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0047A867; /* je: equal / zero */

loc_0047A5D5: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0047A284; /* je: equal / zero */

loc_0047A5DE: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0047A607; /* je: equal / zero */

loc_0047A5E3: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(eax), LO16(ebx))) goto loc_0047ABB8; /* jne: not equal / not zero */

loc_0047A5EF: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) - 1;
    if (CMP_NE(MEM8(ebp + -34), 0)) goto loc_0047AB3F; /* jne: not equal / not zero */

loc_0047A5FC: ;
    eax = MEM32(ebp + -116);
    MEM32(ebp + 0x10) = eax;
    goto loc_0047AB3F;

loc_0047A607: ;
    if (CMP_LE(MEM8(ebp + -33), 0)) goto loc_0047A611; /* jle: less or equal (signed <=) */

loc_0047A60D: ;
    MEM8(ebp + -41) = 1;

loc_0047A611: ;
    esi = MEM32(ebp + 0xC);
    esi++;
    esi++;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + -112) = esi;
    if (CMP_NE(MEM16(esi), 0x5E)) goto loc_0047A62C; /* jne: not equal / not zero */

loc_0047A622: ;
    esi = esi + 2;
    MEM32(ebp + -112) = esi;
    MEM8(ebp + -69) = 0xFF;

loc_0047A62C: ;
    if (CMP_NE(MEM32(ebp + -92), 0)) goto loc_0047A684; /* jne: not equal / not zero */

loc_0047A632: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = 0x2000;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0047A640: ;
    MEM32(ebp + -24) = esp;
    eax = esp;
    MEM32(ebp + -92) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_0047A684;

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -92) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0047A673; /* jne: not equal / not zero */

loc_0047A667: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    ebx = MEM32(ebp + -48);
    goto loc_0047AB66;

loc_0047A673: ;
    MEM32(ebp + -108) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    esi = MEM32(ebp + -112);
    ebx = MEM32(ebp + -48);

loc_0047A684: ;
    ecx = 0x800;
    eax = 0; /* xor self */
    edx = MEM32(ebp + -92);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_NE(MEM32(ebp + -56), 0x7B)) goto loc_0047A6A9; /* jne: not equal / not zero */

loc_0047A698: ;
    PUSH32(esp, 0x5D);
    POP32(esp, eax);
    if (CMP_NE(MEM16(esi), LO16(eax))) goto loc_0047A6A9; /* jne: not equal / not zero */

loc_0047A6A0: ;
    MEM32(ebp + -84) = eax;
    esi++;
    esi++;
    MEM8(edx + 0xB) = 0x20;

loc_0047A6A9: ;
    eax = 0; /* xor self */
    goto loc_0047A725;

loc_0047A6AD: ;
    esi++;
    esi++;
    if (CMP_NE(LO16(eax), 0x2D)) goto loc_0047A70C; /* jne: not equal / not zero */

loc_0047A6B5: ;
    if (CMP_EQ(MEM16(ebp + -84), 0)) goto loc_0047A70C; /* je: equal / zero */

loc_0047A6BC: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    if (CMP_EQ(LO16(ecx), 0x5D)) goto loc_0047A70C; /* je: equal / zero */

loc_0047A6C7: ;
    esi++;
    esi++;
    if (CMP_AE(MEM16(ebp + -84), LO16(ecx))) goto loc_0047A6D3; /* jae: above or equal (unsigned >=) */

loc_0047A6CF: ;
    eax = ecx;
    goto loc_0047A6D9;

loc_0047A6D3: ;
    eax = MEM32(ebp + -84);
    MEM32(ebp + -84) = ecx;

loc_0047A6D9: ;
    if (CMP_A(MEM16(ebp + -84), LO16(eax))) goto loc_0047A706; /* ja: above (unsigned >) */

loc_0047A6DF: ;
    edi = ZX16(MEM16(ebp + -84));
    eax = eax - MEM32(ebp + -84);
    eax++;
    edx = ZX16(LO16(eax));

loc_0047A6EA: ;
    eax = edi;
    eax = eax >> 3;
    ecx = MEM32(ebp + -92);
    eax = eax + ecx;
    ecx = edi;
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    edi++;
    edx--;
    if ((edx != 0)) goto loc_0047A6EA; /* jne: not equal / not zero */

loc_0047A703: ;
    ebx = MEM32(ebp + -48);

loc_0047A706: ;
    MEM32(ebp + -84) = MEM32(ebp + -84) & 0;
    goto loc_0047A725;

loc_0047A70C: ;
    MEM32(ebp + -84) = eax;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    eax = eax >> 3;
    edx = MEM32(ebp + -92);
    eax = eax + edx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(edx);

loc_0047A725: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(LO16(eax), 0x5D)) goto loc_0047A6AD; /* jne: not equal / not zero */

loc_0047A732: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0047AB66; /* je: equal / zero */

loc_0047A73B: ;
    if (CMP_NE(MEM32(ebp + -56), 0x7B)) goto loc_0047A508; /* jne: not equal / not zero */

loc_0047A745: ;
    MEM32(ebp + 0xC) = esi;
    goto loc_0047A508;

loc_0047A74D: ;
    if (CMP_NE(LO16(ebx), 0x2B)) goto loc_0047A773; /* jne: not equal / not zero */

loc_0047A753: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if ((MEM32(ebp + -40) != 0)) goto loc_0047A762; /* jne: not equal / not zero */

loc_0047A758: ;
    if (TEST_Z(ecx, ecx)) goto loc_0047A762; /* je: equal / zero */

loc_0047A75C: ;
    MEM8(ebp + -25) = 1;
    goto loc_0047A773;

loc_0047A762: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A76D: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0047A773: ;
    if (CMP_NE(LO16(ebx), 0x30)) goto loc_0047A899; /* jne: not equal / not zero */

loc_0047A77D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A788: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    PUSH32(esp, 0x78);
    POP32(esp, edi);
    if (CMP_EQ(LO16(ebx), LO16(edi))) goto loc_0047A7D7; /* je: equal / zero */

loc_0047A796: ;
    if (CMP_EQ(LO16(ebx), 0x58)) goto loc_0047A7D7; /* je: equal / zero */

loc_0047A79C: ;
    MEM32(ebp + -60) = 1;
    if (CMP_EQ(esi, edi)) goto loc_0047A7C1; /* je: equal / zero */

loc_0047A7A7: ;
    if (CMP_EQ(MEM32(ebp + -88), 0)) goto loc_0047A7B5; /* je: equal / zero */

loc_0047A7AD: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if ((MEM32(ebp + -40) != 0)) goto loc_0047A7B5; /* jne: not equal / not zero */

loc_0047A7B2: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;

loc_0047A7B5: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_0047A899;

loc_0047A7C1: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047A7CD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_0047A896;

loc_0047A7D7: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A7E2: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    if (CMP_EQ(MEM32(ebp + -88), 0)) goto loc_0047A7FB; /* je: equal / zero */

loc_0047A7EE: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    if (CMP_GE(MEM32(ebp + -40), 1)) goto loc_0047A7FB; /* jge: greater or equal (signed >=) */

loc_0047A7F8: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;

loc_0047A7FB: ;
    MEM32(ebp + -56) = edi;
    goto loc_0047A899;

loc_0047A803: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -64));
    PUSH32(esp, 0); sub_0047C336(); /* call 0x0047C336 */

loc_0047A80C: ;
    MEM32(ebp + -64) = MEM32(ebp + -64) + eax;
    goto loc_0047A517;

loc_0047A814: ;
    esi++;
    esi++;
    goto loc_0047A519;

loc_0047A81B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047A827: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047A829: ;
    if (CMP_EQ(esi, MEM32(ebp + -64))) goto loc_0047AB66; /* je: equal / zero */

loc_0047A832: ;
    if (CMP_NE(MEM8(ebp + -34), 0)) goto loc_0047AB3F; /* jne: not equal / not zero */

loc_0047A83C: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) + 1;
    if (CMP_EQ(MEM32(ebp + -56), 0x63)) goto loc_0047AB3F; /* je: equal / zero */

loc_0047A849: ;
    eax = MEM32(ebp + -64);
    if (CMP_EQ(MEM8(ebp + -41), 0)) goto loc_0047A85B; /* je: equal / zero */

loc_0047A852: ;
    MEM16(eax) = MEM16(eax) & 0;
    goto loc_0047AB3F;

loc_0047A85B: ;
    MEM8(eax) = 0;
    goto loc_0047AB3F;

loc_0047A863: ;
    MEM8(ebp + -35) = 1;

loc_0047A867: ;
    if (CMP_NE(LO16(ebx), 0x2D)) goto loc_0047A873; /* jne: not equal / not zero */

loc_0047A86D: ;
    MEM8(ebp + -49) = 1;
    goto loc_0047A879;

loc_0047A873: ;
    if (CMP_NE(LO16(ebx), 0x2B)) goto loc_0047A899; /* jne: not equal / not zero */

loc_0047A879: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if ((MEM32(ebp + -40) != 0)) goto loc_0047A888; /* jne: not equal / not zero */

loc_0047A87E: ;
    if (TEST_Z(ecx, ecx)) goto loc_0047A888; /* je: equal / zero */

loc_0047A882: ;
    MEM8(ebp + -25) = 1;
    goto loc_0047A899;

loc_0047A888: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A893: ;
    POP32(esp, ecx);
    ebx = eax;

loc_0047A896: ;
    MEM32(ebp + -48) = ebx;

loc_0047A899: ;
    if (CMP_EQ(MEM32(ebp + -104), 0)) goto loc_0047A9F4; /* je: equal / zero */

loc_0047A8A3: ;
    if (CMP_NE(MEM8(ebp + -25), 0)) goto loc_0047A9D2; /* jne: not equal / not zero */

loc_0047A8AD: ;
    edi = 0x80;

loc_0047A8B2: ;
    if (CMP_EQ(MEM32(ebp + -56), 0x78)) goto loc_0047A930; /* je: equal / zero */

loc_0047A8B8: ;
    if (CMP_EQ(MEM32(ebp + -56), 0x70)) goto loc_0047A930; /* je: equal / zero */

loc_0047A8BE: ;
    if (TEST_NZ(HI8(ebx), 0xFF)) goto loc_0047A97E; /* jne: not equal / not zero */

loc_0047A8C7: ;
    eax = ebx;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047A8E3; /* jle: less or equal (signed <=) */

loc_0047A8D7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047A8DF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047A8F0;

loc_0047A8E3: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0047A8F0: ;
    if (TEST_Z(eax, eax)) goto loc_0047A97E; /* je: equal / zero */

loc_0047A8F8: ;
    if (CMP_NE(MEM32(ebp + -56), 0x6F)) goto loc_0047A919; /* jne: not equal / not zero */

loc_0047A8FE: ;
    if (CMP_AE(LO16(ebx), 0x38)) goto loc_0047A97E; /* jae: above or equal (unsigned >=) */

loc_0047A904: ;
    eax = MEM32(ebp + -80);
    ecx = MEM32(ebp + -76);
    ecx = (ecx << 3) | (eax >> (32 - 3)); /* shld */
    eax = eax << 3;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -76) = ecx;
    goto loc_0047A981;

loc_0047A919: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -76));
    PUSH32(esp, MEM32(ebp + -80));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0047A928: ;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -76) = edx;
    goto loc_0047A981;

loc_0047A930: ;
    if (TEST_NZ(HI8(ebx), 0xFF)) goto loc_0047A97E; /* jne: not equal / not zero */

loc_0047A935: ;
    eax = ebx;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047A950; /* jle: less or equal (signed <=) */

loc_0047A945: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047A94C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047A95C;

loc_0047A950: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & edi;

loc_0047A95C: ;
    if (TEST_Z(eax, eax)) goto loc_0047A97E; /* je: equal / zero */

loc_0047A960: ;
    eax = MEM32(ebp + -80);
    ecx = MEM32(ebp + -76);
    ecx = (ecx << 4) | (eax >> (32 - 4)); /* shld */
    eax = eax << 4;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -76) = ecx;
    esi = ebx;
    PUSH32(esp, 0); sub_00479F6D(); /* call 0x00479F6D */

loc_0047A97A: ;
    ebx = eax;
    goto loc_0047A981;

loc_0047A97E: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;

loc_0047A981: ;
    if (CMP_NE(MEM8(ebp + -25), 0)) goto loc_0047A9B7; /* jne: not equal / not zero */

loc_0047A987: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    eax = ZX16(LO16(ebx));
    eax = eax - 0x30;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(ebp + -80) = MEM32(ebp + -80) + eax;
    MEM32(ebp + -76) = MEM32(ebp + -76) + edx + _cf; /* adc */
    if (CMP_EQ(MEM32(ebp + -88), 0)) goto loc_0047A9A8; /* je: equal / zero */

loc_0047A99D: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if ((MEM32(ebp + -40) != 0)) goto loc_0047A9A8; /* jne: not equal / not zero */

loc_0047A9A2: ;
    MEM8(ebp + -25) = 1;
    goto loc_0047A9C5;

loc_0047A9A8: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047A9B3: ;
    ebx = eax;
    goto loc_0047A9C4;

loc_0047A9B7: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047A9C3: ;
    POP32(esp, ecx);

loc_0047A9C4: ;
    POP32(esp, ecx);

loc_0047A9C5: ;
    if (CMP_EQ(MEM8(ebp + -25), 0)) goto loc_0047A8B2; /* je: equal / zero */

loc_0047A9CF: ;
    MEM32(ebp + -48) = ebx;

loc_0047A9D2: ;
    if (CMP_EQ(MEM8(ebp + -49), 0)) goto loc_0047AB00; /* je: equal / zero */

loc_0047A9DC: ;
    eax = MEM32(ebp + -80);
    eax = (uint32_t)(-(int32_t)eax);
    ecx = MEM32(ebp + -76);
    ecx = ecx + 0 + _cf; /* adc */
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -76) = ecx;
    goto loc_0047AB00;

loc_0047A9F4: ;
    if (CMP_NE(MEM8(ebp + -25), 0)) goto loc_0047AAF7; /* jne: not equal / not zero */

loc_0047A9FE: ;
    edi = 0x80;

loc_0047AA03: ;
    if (CMP_EQ(MEM32(ebp + -56), 0x78)) goto loc_0047AA64; /* je: equal / zero */

loc_0047AA09: ;
    if (CMP_EQ(MEM32(ebp + -56), 0x70)) goto loc_0047AA64; /* je: equal / zero */

loc_0047AA0F: ;
    if (TEST_NZ(HI8(ebx), 0xFF)) goto loc_0047AAA3; /* jne: not equal / not zero */

loc_0047AA18: ;
    eax = ebx;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047AA34; /* jle: less or equal (signed <=) */

loc_0047AA28: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047AA30: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047AA41;

loc_0047AA34: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0047AA41: ;
    if (TEST_Z(eax, eax)) goto loc_0047AAA3; /* je: equal / zero */

loc_0047AA45: ;
    if (CMP_NE(MEM32(ebp + -56), 0x6F)) goto loc_0047AA57; /* jne: not equal / not zero */

loc_0047AA4B: ;
    if (CMP_AE(LO16(ebx), 0x38)) goto loc_0047AAA3; /* jae: above or equal (unsigned >=) */

loc_0047AA51: ;
    MEM32(ebp + -68) = MEM32(ebp + -68) << 3;
    goto loc_0047AAA6;

loc_0047AA57: ;
    eax = MEM32(ebp + -68);
    eax = eax + eax * 4;
    eax = eax << 1;
    MEM32(ebp + -68) = eax;
    goto loc_0047AAA6;

loc_0047AA64: ;
    if (TEST_NZ(HI8(ebx), 0xFF)) goto loc_0047AAA3; /* jne: not equal / not zero */

loc_0047AA69: ;
    eax = ebx;
    eax = eax & 0xFF;
    if (CMP_LE(MEM32(0x655AF0), 1)) goto loc_0047AA84; /* jle: less or equal (signed <=) */

loc_0047AA79: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047AA80: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047AA90;

loc_0047AA84: ;
    ecx = MEM32(0x655AE8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & edi;

loc_0047AA90: ;
    if (TEST_Z(eax, eax)) goto loc_0047AAA3; /* je: equal / zero */

loc_0047AA94: ;
    MEM32(ebp + -68) = MEM32(ebp + -68) << 4;
    esi = ebx;
    PUSH32(esp, 0); sub_00479F6D(); /* call 0x00479F6D */

loc_0047AA9F: ;
    ebx = eax;
    goto loc_0047AAA6;

loc_0047AAA3: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;

loc_0047AAA6: ;
    if (CMP_NE(MEM8(ebp + -25), 0)) goto loc_0047AADC; /* jne: not equal / not zero */

loc_0047AAAC: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    eax = ZX16(LO16(ebx));
    ecx = MEM32(ebp + -68);
    eax = ecx + eax + -48;
    MEM32(ebp + -68) = eax;
    if (CMP_EQ(MEM32(ebp + -88), 0)) goto loc_0047AACD; /* je: equal / zero */

loc_0047AAC2: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    if ((MEM32(ebp + -40) != 0)) goto loc_0047AACD; /* jne: not equal / not zero */

loc_0047AAC7: ;
    MEM8(ebp + -25) = 1;
    goto loc_0047AAEA;

loc_0047AACD: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047AAD8: ;
    ebx = eax;
    goto loc_0047AAE9;

loc_0047AADC: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047AAE8: ;
    POP32(esp, ecx);

loc_0047AAE9: ;
    POP32(esp, ecx);

loc_0047AAEA: ;
    if (CMP_EQ(MEM8(ebp + -25), 0)) goto loc_0047AA03; /* je: equal / zero */

loc_0047AAF4: ;
    MEM32(ebp + -48) = ebx;

loc_0047AAF7: ;
    if (CMP_EQ(MEM8(ebp + -49), 0)) goto loc_0047AB00; /* je: equal / zero */

loc_0047AAFD: ;
    MEM32(ebp + -68) = (uint32_t)(-(int32_t)MEM32(ebp + -68));

loc_0047AB00: ;
    if (CMP_NE(MEM32(ebp + -56), 0x46)) goto loc_0047AB0A; /* jne: not equal / not zero */

loc_0047AB06: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_0047AB0A: ;
    if (CMP_EQ(MEM32(ebp + -60), 0)) goto loc_0047AB66; /* je: equal / zero */

loc_0047AB10: ;
    if (CMP_NE(MEM8(ebp + -34), 0)) goto loc_0047AB3F; /* jne: not equal / not zero */

loc_0047AB16: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) + 1;
    edi = MEM32(ebp + -64);
    eax = MEM32(ebp + -68);

loc_0047AB1F: ;
    if (CMP_EQ(MEM32(ebp + -104), 0)) goto loc_0047AB32; /* je: equal / zero */

loc_0047AB25: ;
    eax = MEM32(ebp + -80);
    MEM32(edi) = eax;
    eax = MEM32(ebp + -76);
    MEM32(edi + 4) = eax;
    goto loc_0047AB3F;

loc_0047AB32: ;
    if (CMP_EQ(MEM8(ebp + -35), 0)) goto loc_0047AB3C; /* je: equal / zero */

loc_0047AB38: ;
    MEM32(edi) = eax;
    goto loc_0047AB3F;

loc_0047AB3C: ;
    MEM16(edi) = LO16(eax);

loc_0047AB3F: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;

loc_0047AB46: ;
    eax = ZX16(LO16(ebx));
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0047A00E; /* jne: not equal / not zero */

loc_0047AB52: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(eax), 0x25)) goto loc_0047AB66; /* jne: not equal / not zero */

loc_0047AB5B: ;
    if (CMP_EQ(MEM16(eax + 2), 0x6E)) goto loc_0047A00E; /* je: equal / zero */

loc_0047AB66: ;
    if (CMP_NE(MEM32(ebp + -108), 1)) goto loc_0047AB75; /* jne: not equal / not zero */

loc_0047AB6C: ;
    PUSH32(esp, MEM32(ebp + -92));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0047AB74: ;
    POP32(esp, ecx);

loc_0047AB75: ;
    eax = ZX16(LO16(ebx));
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = MEM32(ebp + -96);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0047AB8C; /* jne: not equal / not zero */

loc_0047AB80: ;
    if (TEST_NZ(eax, eax)) goto loc_0047AB8C; /* jne: not equal / not zero */

loc_0047AB84: ;
    if (CMP_NE(MEM8(ebp + -42), LO8(eax))) goto loc_0047AB8C; /* jne: not equal / not zero */

loc_0047AB89: ;
    eax = eax | 0xFFFFFFFFu;

loc_0047AB8C: ;
    esp = ebp + -828;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047AB97: ;
    esp += 4; return; /* ret */

loc_0047AB98: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047D6DB(); /* call 0x0047D6DB */

loc_0047ABA3: ;
    POP32(esp, ecx);
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    if (CMP_EQ(LO16(eax), LO16(ebx))) goto loc_0047AB46; /* je: equal / zero */

loc_0047ABB8: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00479FBA(); /* call 0x00479FBA */

loc_0047ABC1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047AB66;

}

/**
 * sub_0047ABC5
 * Original: 0x0047ABC5 - 0x0047ABD7 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047ABC5(void)
{

loc_0047ABC5: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0); sub_00470822(); /* call 0x00470822 */

loc_0047ABD4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047ABD7
 * Original: 0x0047ABD7 - 0x0047AC05 (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047ABD7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047ABD7: ;
    ecx = MEM32(0x6560BC);
    eax = edx;
    PUSH32(esp, edi);

loc_0047ABE0: ;
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_0047ABF2; /* je: equal / zero */

loc_0047ABE5: ;
    edi = ecx + ecx * 2;
    eax = eax + 0xC;
    edi = edx + edi * 4;
    if (CMP_B(eax, edi)) goto loc_0047ABE0; /* jb: below (unsigned <) */

loc_0047ABF2: ;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_AE(eax, ecx)) goto loc_0047AC02; /* jae: above or equal (unsigned >=) */

loc_0047ABFD: ;
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_0047AC04; /* je: equal / zero */

loc_0047AC02: ;
    eax = 0; /* xor self */

loc_0047AC04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047AC05
 * Original: 0x0047AC05 - 0x0047AC87 (130 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AC05(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047AC05: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x587450);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047AC11: ;
    ecx = 0; /* xor self */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 8);
    eax--;
    eax--;
    if ((eax == 0)) { sub_0047AC87(); return; } /* je: equal / zero */

loc_0047AC1D: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0047AC67; /* je: equal / zero */

loc_0047AC21: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0047AC67; /* je: equal / zero */

loc_0047AC26: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0047AC67; /* je: equal / zero */

loc_0047AC2B: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0047AC5A; /* je: equal / zero */

loc_0047AC30: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_0047AC4D; /* je: equal / zero */

loc_0047AC35: ;
    eax--;
    if ((eax == 0)) goto loc_0047AC40; /* je: equal / zero */

loc_0047AC38: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0047AD78(); return; /* tail jmp 0x0047AD78 */

loc_0047AC40: ;
    esi = 0x75FA00;
    edi = MEM32(0x75FA00);
    g_seh_ebp = ebp; sub_0047AC92(); return; /* tail jmp 0x0047AC92 */

loc_0047AC4D: ;
    esi = 0x75F9FC;
    edi = MEM32(0x75F9FC);
    g_seh_ebp = ebp; sub_0047AC92(); return; /* tail jmp 0x0047AC92 */

loc_0047AC5A: ;
    esi = 0x75FA04;
    edi = MEM32(0x75FA04);
    g_seh_ebp = ebp; sub_0047AC92(); return; /* tail jmp 0x0047AC92 */

loc_0047AC67: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0047AC6C: ;
    ebx = eax;
    MEM32(ebp + -36) = ebx;
    edx = MEM32(ebx + 0x54);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0047ABD7(); /* call 0x0047ABD7 */

loc_0047AC7C: ;
    esi = eax;
    esi = esi + 8;
    edi = MEM32(esi);
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0047AC9C(); return; /* tail jmp 0x0047AC9C */

}

/**
 * sub_0047AD40
 * Original: 0x0047AD40 - 0x0047AD4D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AD40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047AD40: ;
    if (CMP_EQ(MEM32(ebp + -28), ecx)) goto loc_0047AD4C; /* je: equal / zero */

loc_0047AD45: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047AD4B: ;
    POP32(esp, ecx);

loc_0047AD4C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047AD80
 * Original: 0x0047AD80 - 0x0047ADCE (78 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0047AD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, 0xFF);
    edi = edi;

loc_0047AD90: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_0047ADC6; /* je: equal / zero */

loc_0047AD94: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    SET_HI8(eax, MEM8(edi));
    edi = edi + 1;
    if (CMP_EQ(HI8(eax), LO8(eax))) goto loc_0047AD90; /* je: equal / zero */

loc_0047ADA2: ;
    SET_LO8(eax, LO8(eax) - 0x41);
    (void)0; /* cmp LO8(eax), 0x1A - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    SET_LO8(eax, LO8(eax) + 0x41);
    { uint32_t _tmp = LO8(eax);
    SET_LO8(eax, HI8(eax));
    SET_HI8(eax, _tmp); }
    SET_LO8(eax, LO8(eax) - 0x41);
    (void)0; /* cmp LO8(eax), 0x1A - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    SET_LO8(eax, LO8(eax) + 0x41);
    if (CMP_EQ(LO8(eax), HI8(eax))) goto loc_0047AD90; /* je: equal / zero */

loc_0047ADC2: ;
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) - 0xFF - _cf); /* sbb */

loc_0047ADC6: ;
    eax = SX8(LO8(eax));
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047ADD0
 * Original: 0x0047ADD0 - 0x0047AE31 (97 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047ADD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047ADD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | ecx;
    if ((ecx == 0)) goto loc_0047AE2A; /* je: equal / zero */

loc_0047ADDD: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    SET_HI8(ebx, 0x41);
    SET_LO8(ebx, 0x5A);
    SET_HI8(edx, 0x20);
    /* nop */

loc_0047ADEC: ;
    SET_HI8(eax, MEM8(esi));
    SET_HI8(eax, HI8(eax) | HI8(eax));
    SET_LO8(eax, MEM8(edi));
    if ((HI8(eax) == 0)) goto loc_0047AE1B; /* je: equal / zero */

loc_0047ADF4: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_0047AE1B; /* je: equal / zero */

loc_0047ADF8: ;
    esi = esi + 1;
    edi = edi + 1;
    if (CMP_B(HI8(eax), HI8(ebx))) goto loc_0047AE08; /* jb: below (unsigned <) */

loc_0047AE02: ;
    if (CMP_A(HI8(eax), LO8(ebx))) goto loc_0047AE08; /* ja: above (unsigned >) */

loc_0047AE06: ;
    SET_HI8(eax, HI8(eax) + HI8(edx));

loc_0047AE08: ;
    if (CMP_B(LO8(eax), HI8(ebx))) goto loc_0047AE12; /* jb: below (unsigned <) */

loc_0047AE0C: ;
    if (CMP_A(LO8(eax), LO8(ebx))) goto loc_0047AE12; /* ja: above (unsigned >) */

loc_0047AE10: ;
    SET_LO8(eax, LO8(eax) + HI8(edx));

loc_0047AE12: ;
    if (CMP_NE(HI8(eax), LO8(eax))) goto loc_0047AE21; /* jne: not equal / not zero */

loc_0047AE16: ;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_0047ADEC; /* jne: not equal / not zero */

loc_0047AE1B: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(HI8(eax), LO8(eax))) goto loc_0047AE2A; /* je: equal / zero */

loc_0047AE21: ;
    ecx = 0xFFFFFFFFu;
    if (CMP_B(HI8(eax), LO8(eax))) goto loc_0047AE2A; /* jb: below (unsigned <) */

loc_0047AE28: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_0047AE2A: ;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047AEEE
 * Original: 0x0047AEEE - 0x0047AF17 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AEEE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047AEEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(MEM32(ebp + 8), 0)) { sub_0047AF17(); return; } /* je: equal / zero */

loc_0047AEFC: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D20A(); /* call 0x0047D20A */

loc_0047AF05: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047AF2C
 * Original: 0x0047AF2C - 0x0047AF4F (35 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AF2C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047AF2C: ;
    if (TEST_Z(esi, esi)) goto loc_0047AF4E; /* je: equal / zero */

loc_0047AF30: ;
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_0047AF36: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0047AF36; /* jne: not equal / not zero */

loc_0047AF3D: ;
    eax = eax - edi;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0047AF4A: ;
    esp = esp + 0xC;
    POP32(esp, edi);

loc_0047AF4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047AF4F
 * Original: 0x0047AF4F - 0x0047AFF8 (169 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AF4F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047AF4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM8(ebp + 0x14), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_0047AF76; /* je: equal / zero */

loc_0047AF5D: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), eax - flags set for next jcc */
    SET_LO8(eax, (CMP_G(MEM32(ebp + 0xC), eax)) ? 1 : 0); /* setg */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx), 0x2D - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ebx), 0x2D)) ? 1 : 0); /* sete */
    esi = eax;
    ecx = ecx + edi;
    PUSH32(esp, 0); sub_0047AF2C(); /* call 0x0047AF2C */

loc_0047AF76: ;
    (void)0; /* cmp MEM32(ebx), 0x2D - flags set for next jcc */
    eax = edi;
    if (CMP_NE(MEM32(ebx), 0x2D)) goto loc_0047AF83; /* jne: not equal / not zero */

loc_0047AF7D: ;
    MEM8(edi) = 0x2D;
    eax = edi + 1;

loc_0047AF83: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_LE(edi & edi, 0)) goto loc_0047AF9B; /* jle: less or equal (signed <=) */

loc_0047AF8A: ;
    esi = eax + 1;
    SET_LO8(ecx, MEM8(esi));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x655AF4));
    eax = esi;
    MEM8(eax) = LO8(ecx);

loc_0047AF9B: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + 0x14), LO8(ecx) - flags set for next jcc */
    esi = 0x58745C;
    SET_LO8(ecx, (CMP_EQ(MEM8(ebp + 0x14), LO8(ecx))) ? 1 : 0); /* sete */
    ecx = ecx + eax;
    ecx = ecx + edi;
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0047AFBA; /* je: equal / zero */

loc_0047AFB7: ;
    MEM8(ecx) = 0x45;

loc_0047AFBA: ;
    eax = MEM32(ebx + 0xC);
    ecx++;
    if (CMP_EQ(MEM8(eax), 0x30)) goto loc_0047AFF1; /* je: equal / zero */

loc_0047AFC3: ;
    eax = MEM32(ebx + 4);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0047AFCE; /* jns: not sign (positive) */

loc_0047AFC9: ;
    eax = (uint32_t)(-(int32_t)eax);
    MEM8(ecx) = 0x2D;

loc_0047AFCE: ;
    ecx++;
    if (CMP_L(eax, 0x64)) goto loc_0047AFDE; /* jl: less (signed <) */

loc_0047AFD4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x64);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    eax = edx;

loc_0047AFDE: ;
    ecx++;
    if (CMP_L(eax, 0xA)) goto loc_0047AFEE; /* jl: less (signed <) */

loc_0047AFE4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xA);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    eax = edx;

loc_0047AFEE: ;
    MEM8(ecx + 1) = MEM8(ecx + 1) + LO8(eax);

loc_0047AFF1: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0047AFF8
 * Original: 0x0047AFF8 - 0x0047B056 (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047AFF8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047AFF8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DA03(); /* call 0x0047DA03 */

loc_0047B015: ;
    esi = MEM32(ebp + 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = esi + 1;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -16), 0x2D - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + -16), 0x2D)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    eax = eax + MEM32(ebp + 0xC);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0047D8CA(); /* call 0x0047D8CA */

loc_0047B03B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = ebp + -16;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0047AF4F(); /* call 0x0047AF4F */

loc_0047B04C: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047B056
 * Original: 0x0047B056 - 0x0047B0A6 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B056(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047B056: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    eax--;
    if (CMP_EQ(MEM8(ebp + 0x10), 0)) goto loc_0047B083; /* je: equal / zero */

loc_0047B068: ;
    if (CMP_NE(eax, MEM32(ebp + 0xC))) goto loc_0047B083; /* jne: not equal / not zero */

loc_0047B06D: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(edi), 0x2D - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edi), 0x2D)) ? 1 : 0); /* sete */
    ecx = ecx + eax;
    ecx = ecx + MEM32(ebp + 8);
    eax = ecx;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0;

loc_0047B083: ;
    (void)0; /* cmp MEM32(edi), 0x2D - flags set for next jcc */
    ebx = MEM32(ebp + 8);
    if (CMP_NE(MEM32(edi), 0x2D)) goto loc_0047B08F; /* jne: not equal / not zero */

loc_0047B08B: ;
    MEM8(ebx) = 0x2D;
    ebx++;

loc_0047B08F: ;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    esi++;
    if (CMP_G(eax & eax, 0)) { sub_0047B0A6(); return; } /* jg: greater (signed >) */

loc_0047B099: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0047AF2C(); /* call 0x0047AF2C */

loc_0047B0A0: ;
    MEM8(ebx) = 0x30;
    ebx++;
    g_seh_ebp = ebp; sub_0047B0A8(); return; /* tail jmp 0x0047B0A8 */

}

/**
 * sub_0047B0FD
 * Original: 0x0047B0FD - 0x0047B14F (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B0FD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047B0FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DA03(); /* call 0x0047DA03 */

loc_0047B119: ;
    esi = MEM32(ebp + 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -16), 0x2D - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + -16), 0x2D)) ? 1 : 0); /* sete */
    eax = eax + MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D8CA(); /* call 0x0047D8CA */

loc_0047B138: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    PUSH32(esp, 0); sub_0047B056(); /* call 0x0047B056 */

loc_0047B146: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x28;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047B14F
 * Original: 0x0047B14F - 0x0047B1C3 (116 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B14F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047B14F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DA03(); /* call 0x0047DA03 */

loc_0047B16D: ;
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    esi--;
    (void)0; /* cmp MEM32(ebp + -16), 0x2D - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + -16), 0x2D)) ? 1 : 0); /* sete */
    eax = eax + MEM32(ebp + 0xC);
    edi = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047D8CA(); /* call 0x0047D8CA */

loc_0047B18D: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x1C;
    eax--;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, eax)) ? 1 : 0); /* setl */
    if (CMP_L(eax, 0xFFFFFFFCu)) { sub_0047B1C3(); return; } /* jl: less (signed <) */

loc_0047B19E: ;
    if (CMP_GE(eax, ebx)) { sub_0047B1C3(); return; } /* jge: greater or equal (signed >=) */

loc_0047B1A2: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0047B1B0; /* je: equal / zero */

loc_0047B1A6: ;
    SET_LO8(eax, MEM8(edi));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0047B1A6; /* jne: not equal / not zero */

loc_0047B1AD: ;
    MEM8(edi + -2) = LO8(eax);

loc_0047B1B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    PUSH32(esp, 0); sub_0047B056(); /* call 0x0047B056 */

loc_0047B1BE: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_0047B1D7(); return; /* tail jmp 0x0047B1D7 */

}

/**
 * sub_0047B1DC
 * Original: 0x0047B1DC - 0x0047B217 (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B1DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047B1DC: ;
    conker_trace_point(0x47B1DC01);
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM32(ebp + 0x10), 0x65)) goto loc_0047B217; /* je: equal / zero */

loc_0047B1E5: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0x45)) goto loc_0047B217; /* je: equal / zero */

loc_0047B1EB: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0x66)) goto loc_0047B204; /* jne: not equal / not zero */

loc_0047B1F1: ;
    conker_trace_point(0x47B1F101);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047B0FD(); /* call 0x0047B0FD */

loc_0047B1FF: ;
    conker_trace_point(0x47B1FF01);
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0047B204: ;
    conker_trace_point(0x47B20401);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047B14F(); /* call 0x0047B14F */

loc_0047B215: ;
    goto loc_0047B228; /* jmp 0x0047B228 */

loc_0047B217: ;
    conker_trace_point(0x47B21701);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047AFF8(); /* call 0x0047AFF8 */

loc_0047B228: ;
    conker_trace_point(0x47B22801);
    esp = esp + 0x10;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0047B230
 * Original: 0x0047B230 - 0x0047B247 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B230: ;
    if (CMP_NE(MEM8(edx + 0xE), 5)) { sub_0047B247(); return; } /* jne: not equal / not zero */

loc_0047B236: ;
    SET_LO16(ebx, MEM16(ebp + -164));
    SET_HI8(ebx, HI8(ebx) | 2);
    SET_HI8(ebx, HI8(ebx) & 0xFE);
    SET_LO8(ebx, 0x3F);
    g_seh_ebp = ebp; sub_0047B24B(); return; /* tail jmp 0x0047B24B */

}

/**
 * sub_0047B297
 * Original: 0x0047B297 - 0x0047B2AE (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B297(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B297: ;
    if (CMP_NE(MEM8(edx + 0xE), 5)) { sub_0047B2AE(); return; } /* jne: not equal / not zero */

loc_0047B29D: ;
    SET_LO16(ebx, MEM16(ebp + -164));
    SET_HI8(ebx, HI8(ebx) | 2);
    SET_HI8(ebx, HI8(ebx) & 0xFE);
    SET_LO8(ebx, 0x3F);
    g_seh_ebp = ebp; sub_0047B2B2(); return; /* tail jmp 0x0047B2B2 */

}

/**
 * sub_0047B33D
 * Original: 0x0047B33D - 0x0047B342 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B33D(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047B33D: ;
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B3E9
 * Original: 0x0047B3E9 - 0x0047B3F3 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B3E9(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B3E9: ;
    MEM8(ebp + -144) = 1;
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0047B3FC
 * Original: 0x0047B3FC - 0x0047B413 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B3FC(void)
{
    uint32_t ebp;

loc_0047B3FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFFE0u;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_0047B41C(); return; /* tail jmp 0x0047B41C */

}

/**
 * sub_0047B413
 * Original: 0x0047B413 - 0x0047B44F (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B413(void)
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

loc_0047B413: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFFE0u;
    MEM32(ebp + -32) = eax;
    MEMD(ebp + -8) = fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ecx;
    eax = ebp + 8;
    ecx = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0047DA71(); /* call 0x0047DA71 */

loc_0047B43C: ;
    esp = esp + 0xC;
    fp_push(MEMD(ebp + -8)); /* fld double */
    if (CMP_EQ(MEM16(ebp + 8), 0x27F)) goto loc_0047B44D; /* je: equal / zero */

loc_0047B44A: ;
    /* fldcw word ptr [ebp + 8] - load FPU control word */

loc_0047B44D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B450
 * Original: 0x0047B450 - 0x0047B465 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B450(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047B450: ;
    /* fld st(0) */
    /* FPU: frndint  */
    /* FPU: fsubr st(1), st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = -fp_top(); /* fchs */
    /* FPU: f2xm1  */
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fscale  */
    /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B465
 * Original: 0x0047B465 - 0x0047B47C (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B465(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047B465: ;
    edx = MEM32(esp + 4);
    edx = edx & 0x300;
    edx = edx | 0x7F;
    MEM16(esp + 6) = LO16(edx);
    /* fldcw word ptr [esp + 6] - load FPU control word */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B47C
 * Original: 0x0047B47C - 0x0047B489 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B47C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047B47C: ;
    if (TEST_Z(eax, 0x80000)) { sub_0047B489(); return; } /* je: equal / zero */

loc_0047B483: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_0047B495
 * Original: 0x0047B495 - 0x0047B4A7 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B495(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047B495: ;
    eax = MEM32(edx + 4);
    eax = eax & 0x7FF00000;
    if (CMP_EQ(eax, 0x7FF00000)) { sub_0047B4A7(); return; } /* je: equal / zero */

loc_0047B4A4: ;
    fp_push(MEMD(edx)); /* fld double */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B4D8
 * Original: 0x0047B4D8 - 0x0047B4E9 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B4D8(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047B4D8: ;
    eax = MEM32(esp + 8);
    eax = eax & 0x7FF00000;
    if (CMP_EQ(eax, 0x7FF00000)) { sub_0047B4E9(); return; } /* je: equal / zero */

loc_0047B4E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047B70D
 * Original: 0x0047B70D - 0x0047B71D (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B70D(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B70D: ;
    /* fstp st(0) */
    fp_push(MEMF(0x655DA4)); /* fld */
    MEM8(ebp + -144) = 3;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B72A
 * Original: 0x0047B72A - 0x0047B76D (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B72A(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B72A: ;
    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x655DC2)); /* fld */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* wait - FPU sync */
    /* fnstsw word ptr [ebp - 0xa0] - store FPU status word */
    /* wait - FPU sync */
    if (TEST_NZ(MEM8(ebp + -159), 0x41)) { sub_0047B6DC(); return; } /* jne: not equal / not zero */

loc_0047B747: ;
    /* fld st(0) */
    /* FPU: frndint  */
    /* FPU: ftst  */
    /* wait - FPU sync */
    /* fnstsw word ptr [ebp - 0xa0] - store FPU status word */
    /* wait - FPU sync */
    SET_LO8(edx, MEM8(ebp + -159));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: ftst  */
    /* wait - FPU sync */
    /* fnstsw word ptr [ebp - 0xa0] - store FPU status word */
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: f2xm1  */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B76D
 * Original: 0x0047B76D - 0x0047B79A (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B76D(void)
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

loc_0047B76D: ;
    /* fld st(0) */
    /* FPU: frndint  */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp != 0) /* sahf */) goto loc_0047B793; /* jne: not equal / not zero */

loc_0047B779: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: frndint  */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp == 0) /* sahf */) { sub_0047B79A(); return; } /* je: equal / zero */

loc_0047B78D: ;
    eax = 1;

loc_0047B792: ;
    esp += 4; return; /* ret */

loc_0047B793: ;
    eax = 0;
    goto loc_0047B792;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B7D4
 * Original: 0x0047B7D4 - 0x0047B803 (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B7D4(void)
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

loc_0047B7D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 0xa4] - store FPU control word */
    /* wait - FPU sync */
    if (CMP_EQ(MEM32(0x656030), 0)) { sub_0047B803(); return; } /* je: equal / zero */

loc_0047B7EF: ;
    PUSH32(esp, 0); sub_0047B297(); /* call 0x0047B297 */

loc_0047B7F4: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 3;
    PUSH32(esp, 0); sub_0047B89E(); /* call 0x0047B89E */

loc_0047B800: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B812
 * Original: 0x0047B812 - 0x0047B847 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B812(void)
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

loc_0047B812: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 0xa4] - store FPU control word */
    if (CMP_EQ(MEM32(0x656030), 0)) { sub_0047B847(); return; } /* je: equal / zero */

loc_0047B82C: ;
    PUSH32(esp, 0); sub_0047B230(); /* call 0x0047B230 */

loc_0047B831: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 1;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    PUSH32(esp, 0); sub_0047B89E(); /* call 0x0047B89E */

loc_0047B844: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B84F
 * Original: 0x0047B84F - 0x0047B897 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B84F(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047B84F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047BA18(); /* call 0x0047BA18 */

loc_0047B864: ;
    esp = esp + 8;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0047BA18(); /* call 0x0047BA18 */

loc_0047B872: ;
    esp = esp + 8;
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 0xa4] - store FPU control word */
    MEM8(ebp + -712) = MEM8(ebp + -712) | 2;
    MEM8(ebp + -143) = 1;
    PUSH32(esp, 0); sub_0047B297(); /* call 0x0047B297 */

loc_0047B88F: ;
    PUSH32(esp, 0); sub_0047B897(); /* call 0x0047B897 */

loc_0047B894: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B897
 * Original: 0x0047B897 - 0x0047B89E (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B897(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B897: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFE;

}

/**
 * sub_0047B89E
 * Original: 0x0047B89E - 0x0047B9E5 (327 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B89E(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047B89E: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) goto loc_0047B8F6; /* jne: not equal / not zero */

loc_0047B8A7: ;
    MEMD(ebp + -720) = fp_top(); fp_pop(); /* fst */
    SET_LO8(eax, MEM8(ebp + -144));
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_0047B8D1; /* je: equal / zero */

loc_0047B8B7: ;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0047B916; /* je: equal / zero */

loc_0047B8BB: ;
    if (CMP_EQ(LO8(eax), 0xFE)) goto loc_0047B8FE; /* je: equal / zero */

loc_0047B8BF: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_0047B8F6; /* je: equal / zero */

loc_0047B8C3: ;
    eax = SX8(LO8(eax));
    MEM32(ebp + -142) = eax;
    goto loc_0047B983;

loc_0047B8D1: ;
    SET_LO16(eax, MEM16(ebp + -164));
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) != 0)) goto loc_0047B8F6; /* jne: not equal / not zero */

loc_0047B8DE: ;
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_0047B8F6; /* je: equal / zero */

loc_0047B8E7: ;
    MEM32(ebp + -142) = 8;
    goto loc_0047B983;

loc_0047B8F6: ;
    /* fldcw word ptr [ebp - 0xa4] - load FPU control word */
    /* wait - FPU sync */
    esp += 4; return; /* ret */

loc_0047B8FE: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    SET_LO16(eax, LO16(eax) | LO16(eax));
    if ((LO16(eax) == 0)) goto loc_0047B929; /* je: equal / zero */

loc_0047B90E: ;
    if (CMP_EQ(LO16(eax), 0x7FF0)) goto loc_0047B957; /* je: equal / zero */

loc_0047B914: ;
    goto loc_0047B8D1;

loc_0047B916: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    if (CMP_EQ(LO16(eax), 0x7FF0)) goto loc_0047B957; /* je: equal / zero */

loc_0047B927: ;
    goto loc_0047B8D1;

loc_0047B929: ;
    MEM32(ebp + -142) = 4;
    fp_push(MEMD(0x5874C0)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fscale  */
    /* fstp st(1) */
    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x5874b0] */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp >= 0) /* sahf */) goto loc_0047B983; /* jae: above or equal (unsigned >=) */

loc_0047B94F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_0047B983;

loc_0047B957: ;
    MEM32(ebp + -142) = 3;
    fp_push(MEMD(0x5874B8)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fscale  */
    /* fstp st(1) */
    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x5874a8] */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp <= 0) /* sahf */) goto loc_0047B983; /* jbe: below or equal (unsigned <=) */

loc_0047B97D: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_0047B983: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + -148);
    ebx++;
    MEM32(ebp + -138) = ebx;
    if (TEST_NZ(MEM8(ebp + -712), 1)) goto loc_0047B9B5; /* jne: not equal / not zero */

loc_0047B99B: ;
    /* cld - direction flag */
    esi = ebp + 8;
    edi = ebp + -134;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_EQ(MEM8(ebx + 0xC), 1)) goto loc_0047B9B5; /* je: equal / zero */

loc_0047B9AD: ;
    esi = ebp + 0x10;
    edi = ebp + -126;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_0047B9B5: ;
    MEMD(ebp + -118) = fp_top(); fp_popp(); /* fstp */
    eax = ebp + -142;
    ebx = ebp + -164;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = MEM32(ebp + -148);
    SET_LO8(eax, MEM8(ebx + 0xE));
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047DA71(); /* call 0x0047DA71 */

loc_0047B9D8: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    fp_push(MEMD(ebp + -118)); /* fld double */
    goto loc_0047B8F6;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047B9E5
 * Original: 0x0047B9E5 - 0x0047BA18 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047B9E5(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047B9E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047BA18(); /* call 0x0047BA18 */

loc_0047B9FA: ;
    esp = esp + 8;
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 0xa4] - store FPU control word */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    PUSH32(esp, 0); sub_0047B230(); /* call 0x0047B230 */

loc_0047BA10: ;
    PUSH32(esp, 0); sub_0047B897(); /* call 0x0047B897 */

loc_0047BA15: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047BA18
 * Original: 0x0047BA18 - 0x0047BA4E (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BA18(void)
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

loc_0047BA18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFFF4u;
    PUSH32(esp, ebx);
    SET_LO16(eax, MEM16(ebp + 0xE));
    SET_LO16(ebx, LO16(eax));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    if (CMP_NE(LO16(eax), 0x7FF0)) { sub_0047BA4E(); return; } /* jne: not equal / not zero */

loc_0047BA30: ;
    SET_LO16(ebx, LO16(ebx) | 0x7FFF);
    MEM16(ebp + -2) = LO16(ebx);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    eax = (eax << 0xB) | (ebx >> (32 - 0xB)); /* shld */
    MEM32(ebp + -6) = eax;
    MEM32(ebp + -10) = ebx;
    fp_push(MEMF(ebp + -10)); /* fld */
    g_seh_ebp = ebp; sub_0047BA51(); return; /* tail jmp 0x0047BA51 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047BA54
 * Original: 0x0047BA54 - 0x0047BA67 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BA54(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047BA54: ;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0047BA5E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_0047BA67(); return; } /* jne: not equal / not zero */

loc_0047BA63: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0047BAB9
 * Original: 0x0047BAB9 - 0x0047BB06 (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BAB9(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047BAB9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    if (TEST_NZ(esi, esi)) goto loc_0047BAC8; /* jne: not equal / not zero */

loc_0047BAC7: ;
    esi++;

loc_0047BAC8: ;
    eax = 0; /* xor self */
    if (CMP_A(esi, 0xFFFFFFE0u)) goto loc_0047BAF0; /* ja: above (unsigned >) */

loc_0047BACF: ;
    if (CMP_NE(MEM32(0x881464), 3)) goto loc_0047BADE; /* jne: not equal / not zero */

loc_0047BAD8: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;

loc_0047BADE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_004308AE(); /* call 0x004308AE */

loc_0047BAE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00431E6A(); /* call 0x00431E6A */

loc_0047BAEC: ;
    if (TEST_NZ(eax, eax)) goto loc_0047BB04; /* jne: not equal / not zero */

loc_0047BAF0: ;
    if (CMP_EQ(MEM32(0x75FA0C), 0)) goto loc_0047BB04; /* je: equal / zero */

loc_0047BAF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047BD41(); /* call 0x0047BD41 */

loc_0047BAFF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047BAC8; /* jne: not equal / not zero */

loc_0047BB04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047BB81
 * Original: 0x0047BB81 - 0x0047BB8A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BB81(void)
{

loc_0047BB81: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047BB88: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047BB8A
 * Original: 0x0047BB8A - 0x0047BBEB (97 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BB8A(void)
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

loc_0047BB8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB55(); /* call 0x0046EB55 */

loc_0047BB9C: ;
    (void)0; /* test LO8(eax), 0x90 - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(LO8(eax), 0x90)) { sub_0047BBEB(); return; } /* jne: not equal / not zero */

loc_0047BBA2: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004785CE(); /* call 0x004785CE */

loc_0047BBAF: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    POP32(esp, ecx);
    POP32(esp, ecx);
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0047BBEB(); return; } /* jp: parity */

loc_0047BBBD: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fst */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004785CE(); /* call 0x004785CE */

loc_0047BBD3: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    POP32(esp, ecx);
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0047BBE6; /* jp: parity */

loc_0047BBE1: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0047BBE6: ;
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047BBEF
 * Original: 0x0047BBEF - 0x0047BD41 (338 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BBEF(void)
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

loc_0047BBEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, esi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x648f30] */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0047BC09; /* jp: parity */

loc_0047BC07: ;
    fp_top() = -fp_top(); /* fchs */

loc_0047BC09: ;
    eax = 0x7FF00000;
    (void)0; /* cmp MEM32(ebp + 0x14), eax - flags set for next jcc */
    ecx = 0xFFF00000u;
    if (CMP_NE(MEM32(ebp + 0x14), eax)) goto loc_0047BC50; /* jne: not equal / not zero */

loc_0047BC18: ;
    if (CMP_NE(MEM32(ebp + 0x10), edx)) goto loc_0047BC8B; /* jne: not equal / not zero */

loc_0047BC1D: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0047BC2E; /* jne: not equal / not zero */

loc_0047BC2A: ;
    /* fstp st(0) */
    goto loc_0047BCAB;

loc_0047BC2E: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (1 /* jnp after test - parity */) goto loc_0047BCC9; /* jnp: not parity */

loc_0047BC42: ;
    fp_push(MEMD(0x655C30)); /* fld double */
    esi = 0; /* xor self */
    esi++;
    goto loc_0047BD3A;

loc_0047BC50: ;
    if (CMP_NE(MEM32(ebp + 0x14), ecx)) goto loc_0047BC8B; /* jne: not equal / not zero */

loc_0047BC55: ;
    if (CMP_NE(MEM32(ebp + 0x10), edx)) goto loc_0047BC8B; /* jne: not equal / not zero */

loc_0047BC5A: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0047BC70; /* jne: not equal / not zero */

loc_0047BC67: ;
    /* fstp st(0) */
    fp_push(0.0); /* fldz */
    goto loc_0047BD37;

loc_0047BC70: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (1 /* jp after test - parity */) goto loc_0047BC42; /* jp: parity */

loc_0047BC80: ;
    fp_push(MEMD(0x655C28)); /* fld double */
    goto loc_0047BD3A;

loc_0047BC8B: ;
    (void)0; /* cmp MEM32(ebp + 0xC), eax - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_NE(MEM32(ebp + 0xC), eax)) goto loc_0047BCD1; /* jne: not equal / not zero */

loc_0047BC92: ;
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_0047BD3C; /* jne: not equal / not zero */

loc_0047BC9B: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648f30] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0047BCB6; /* jne: not equal / not zero */

loc_0047BCAB: ;
    fp_push(MEMD(0x655C28)); /* fld double */
    goto loc_0047BD37;

loc_0047BCB6: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648f30] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (1 /* jp after test - parity */) goto loc_0047BCCD; /* jp: parity */

loc_0047BCC9: ;
    fp_push(0.0); /* fldz */
    goto loc_0047BD3A;

loc_0047BCCD: ;
    fp_push(1.0); /* fld1 */
    goto loc_0047BD3A;

loc_0047BCD1: ;
    if (CMP_NE(MEM32(ebp + 0xC), ecx)) goto loc_0047BD3C; /* jne: not equal / not zero */

loc_0047BCD6: ;
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_0047BD3C; /* jne: not equal / not zero */

loc_0047BCDB: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0047BB8A(); /* call 0x0047BB8A */

loc_0047BCE8: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    POP32(esp, ecx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648f30] */
    POP32(esp, ecx);
    ecx = eax;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0047BD14; /* jne: not equal / not zero */

loc_0047BCFC: ;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    fp_push(MEMD(0x655C28)); /* fld double */
    if (CMP_NE(ecx, 1)) goto loc_0047BD09; /* jne: not equal / not zero */

loc_0047BD07: ;
    fp_top() = -fp_top(); /* fchs */

loc_0047BD09: ;
    eax = MEM32(ebp + 0x18);
    /* fld st(0) */
    MEMD(eax) = fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    goto loc_0047BD3C;

loc_0047BD14: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648f30] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0047BD35; /* jp: parity */

loc_0047BD24: ;
    if (CMP_NE(ecx, 1)) goto loc_0047BD31; /* jne: not equal / not zero */

loc_0047BD29: ;
    fp_push(MEMD(0x655C48)); /* fld double */
    goto loc_0047BD09;

loc_0047BD31: ;
    fp_push(0.0); /* fldz */
    goto loc_0047BD09;

loc_0047BD35: ;
    fp_push(1.0); /* fld1 */

loc_0047BD37: ;
    eax = MEM32(ebp + 0x18);

loc_0047BD3A: ;
    MEMD(eax) = fp_top(); fp_popp(); /* fstp */

loc_0047BD3C: ;
    eax = esi;
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
 * sub_0047BD41
 * Original: 0x0047BD41 - 0x0047BD59 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BD41(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047BD41: ;
    eax = MEM32(0x75FA08);
    if (TEST_Z(eax, eax)) { sub_0047BD59(); return; } /* je: equal / zero */

loc_0047BD4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0047BD50: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_0047BD59(); return; } /* je: equal / zero */

loc_0047BD55: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0047BD5C
 * Original: 0x0047BD5C - 0x0047BF2C (464 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BD5C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047BD5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebx;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) { sub_0047BF2C(); return; } /* je: equal / zero */

loc_0047BD78: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    esi = eax + eax * 4;
    edi = ecx * 4 + 0x881360;
    eax = MEM32(edi);
    esi = esi << 3;
    eax = eax + esi;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), 2)) { sub_0047BF2C(); return; } /* jne: not equal / not zero */

loc_0047BDA0: ;
    if (TEST_Z(LO8(ecx), 0x48)) goto loc_0047BDC7; /* je: equal / zero */

loc_0047BDA5: ;
    if (CMP_EQ(MEM8(eax + 5), 0xA)) goto loc_0047BDC7; /* je: equal / zero */

loc_0047BDAB: ;
    eax = MEM32(edi);
    SET_LO8(eax, MEM8(eax + esi + 5));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    MEM8(ebx) = LO8(eax);
    eax = MEM32(edi);
    edx = ebx + 1;
    MEM32(ebp + -8) = 1;
    MEM8(eax + esi + 5) = 0xA;

loc_0047BDC7: ;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + esi));
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0047BDDB: ;
    if (TEST_NZ(eax, eax)) goto loc_0047BE17; /* jne: not equal / not zero */

loc_0047BDDF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0047BDE4: ;
    PUSH32(esp, 5);
    POP32(esp, esi);
    if (CMP_NE(eax, esi)) goto loc_0047BDFF; /* jne: not equal / not zero */

loc_0047BDEB: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047BDF0: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0); sub_00471B1D(); /* call 0x00471B1D */

loc_0047BDFB: ;
    MEM32(eax) = esi;
    goto loc_0047BE0F;

loc_0047BDFF: ;
    if (CMP_EQ(eax, 0x6D)) { sub_0047BF2C(); return; } /* je: equal / zero */

loc_0047BE08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471B26(); /* call 0x00471B26 */

loc_0047BE0E: ;
    POP32(esp, ecx);

loc_0047BE0F: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0047BF2E(); return; /* tail jmp 0x0047BF2E */

loc_0047BE17: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(edi);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    if (TEST_Z(MEM8(ecx + esi + 4), 0x80)) goto loc_0047BF27; /* je: equal / zero */

loc_0047BE2A: ;
    if (TEST_Z(eax, eax)) goto loc_0047BE3E; /* je: equal / zero */

loc_0047BE2E: ;
    if (CMP_NE(MEM8(ebx), 0xA)) goto loc_0047BE3E; /* jne: not equal / not zero */

loc_0047BE33: ;
    eax = ecx;
    eax = eax + esi + 4;
    MEM8(eax) = MEM8(eax) | 4;
    goto loc_0047BE47;

loc_0047BE3E: ;
    eax = MEM32(edi);
    eax = eax + esi + 4;
    MEM8(eax) = MEM8(eax) & 0xFB;

loc_0047BE47: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = ecx + eax;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(eax, ecx)) goto loc_0047BF21; /* jae: above or equal (unsigned >=) */

loc_0047BE5D: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 0x1A)) goto loc_0047BF11; /* je: equal / zero */

loc_0047BE6A: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_0047BE79; /* je: equal / zero */

loc_0047BE6E: ;
    MEM8(ebx) = LO8(eax);
    ebx++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    goto loc_0047BF03;

loc_0047BE79: ;
    ecx--;
    if (CMP_AE(MEM32(ebp + 0x10), ecx)) goto loc_0047BE93; /* jae: above or equal (unsigned >=) */

loc_0047BE7F: ;
    eax = MEM32(ebp + 0x10);
    eax++;
    if (CMP_NE(MEM8(eax), 0xA)) goto loc_0047BE8E; /* jne: not equal / not zero */

loc_0047BE88: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 2;
    goto loc_0047BEE5;

loc_0047BE8E: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_0047BEFF;

loc_0047BE93: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + esi));
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0047BEAC: ;
    if (TEST_NZ(eax, eax)) goto loc_0047BEB9; /* jne: not equal / not zero */

loc_0047BEB0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0047BEB5: ;
    if (TEST_NZ(eax, eax)) goto loc_0047BEFF; /* jne: not equal / not zero */

loc_0047BEB9: ;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0047BEFF; /* je: equal / zero */

loc_0047BEBF: ;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 0x48)) goto loc_0047BEDA; /* je: equal / zero */

loc_0047BEC8: ;
    SET_LO8(eax, MEM8(ebp + -1));
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_0047BEE5; /* je: equal / zero */

loc_0047BECF: ;
    MEM8(ebx) = 0xD;
    ecx = MEM32(edi);
    MEM8(ecx + esi + 5) = LO8(eax);
    goto loc_0047BF02;

loc_0047BEDA: ;
    if (CMP_NE(ebx, MEM32(ebp + 0xC))) goto loc_0047BEEA; /* jne: not equal / not zero */

loc_0047BEDF: ;
    if (CMP_NE(MEM8(ebp + -1), 0xA)) goto loc_0047BEEA; /* jne: not equal / not zero */

loc_0047BEE5: ;
    MEM8(ebx) = 0xA;
    goto loc_0047BF02;

loc_0047BEEA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047938E(); /* call 0x0047938E */

loc_0047BEF6: ;
    esp = esp + 0xC;
    if (CMP_EQ(MEM8(ebp + -1), 0xA)) goto loc_0047BF03; /* je: equal / zero */

loc_0047BEFF: ;
    MEM8(ebx) = 0xD;

loc_0047BF02: ;
    ebx++;

loc_0047BF03: ;
    ecx = MEM32(ebp + -8);
    if (CMP_B(MEM32(ebp + 0x10), ecx)) goto loc_0047BE5D; /* jb: below (unsigned <) */

loc_0047BF0F: ;
    goto loc_0047BF21;

loc_0047BF11: ;
    eax = MEM32(edi);
    if (TEST_NZ(MEM8(eax + esi + 4), 0x40)) goto loc_0047BF21; /* jne: not equal / not zero */

loc_0047BF1A: ;
    esi = eax + esi + 4;
    MEM8(esi) = MEM8(esi) | 2;

loc_0047BF21: ;
    ebx = ebx - MEM32(ebp + 0xC);
    MEM32(ebp + -8) = ebx;

loc_0047BF27: ;
    eax = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_0047BF2E(); return; /* tail jmp 0x0047BF2E */

}

/**
 * sub_0047BF33
 * Original: 0x0047BF33 - 0x0047BF92 (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BF33(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047BF33: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5874E8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047BF3F: ;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x881340))) { sub_0047BFC2(); return; } /* jae: above or equal (unsigned >=) */

loc_0047BF4A: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x881360;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047BFC2(); return; } /* je: equal / zero */

loc_0047BF6A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C8BC(); /* call 0x0047C8BC */

loc_0047BF70: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047BF92(); return; } /* je: equal / zero */

loc_0047BF7E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047BD5C(); /* call 0x0047BD5C */

loc_0047BF8A: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_0047BFA9(); return; /* tail jmp 0x0047BFA9 */

}

/**
 * sub_0047BFBA
 * Original: 0x0047BFBA - 0x0047BFC2 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BFBA(void)
{

loc_0047BFBA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_0047BFC0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047BFE0
 * Original: 0x0047BFE0 - 0x0047C07A (154 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047BFE0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047BFE0: ;
    MEM8(ebp + -144) = 0xFF;
    PUSH32(esp, 0); sub_0047C088(); /* call 0x0047C088 */

loc_0047BFEC: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    if ((LO8(ebx) == 0)) goto loc_0047C06B; /* je: equal / zero */

loc_0047BFF0: ;
    PUSH32(esp, 0); sub_0047C0CB(); /* call 0x0047C0CB */

loc_0047BFF5: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    goto loc_0047C047;

    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x655E28)); /* fld */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* wait - FPU sync */
    /* fnstsw word ptr [ebp - 0xa0] - store FPU status word */
    /* wait - FPU sync */
    if (TEST_NZ(MEM8(ebp + -159), 0x41)) { sub_0047C07A(); return; } /* jne: not equal / not zero */

loc_0047C016: ;
    PUSH32(esp, 0); sub_0047C088(); /* call 0x0047C088 */

loc_0047C01B: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    if ((LO8(ebx) == 0)) { sub_0047C07A(); return; } /* je: equal / zero */

loc_0047C01F: ;
    /* fld st(0) */
    PUSH32(esp, 0); sub_0047C0B9(); /* call 0x0047C0B9 */

loc_0047C026: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    PUSH32(esp, 0); sub_0047C0CB(); /* call 0x0047C0CB */

loc_0047C02D: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* FPU: fdivrp st(1) */
    esp += 4; return; /* ret */

    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    if ((LO8(ebx) == 0)) goto loc_0047C075; /* je: equal / zero */

loc_0047C042: ;
    PUSH32(esp, 0); sub_0047C0B9(); /* call 0x0047C0B9 */

loc_0047C047: ;
    fp_push(1.0); /* fld1 */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fscale  */
    g_seh_ebp = ebp; sub_0047B328(); return; /* tail jmp 0x0047B328 */

    /* fstp st(0) */
    fp_push(MEMF(0x655DA4)); /* fld */
    g_seh_ebp = ebp; sub_0047B3F3(); return; /* tail jmp 0x0047B3F3 */

    /* fstp st(0) */
    fp_push(MEMF(0x655DA4)); /* fld */
    esp += 4; return; /* ret */

loc_0047C06B: ;
    PUSH32(esp, 0); sub_0047B70D(); /* call 0x0047B70D */

loc_0047C070: ;
    g_seh_ebp = ebp; sub_0047B3F3(); return; /* tail jmp 0x0047B3F3 */

loc_0047C075: ;
    g_seh_ebp = ebp; sub_0047B70D(); return; /* tail jmp 0x0047B70D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047C088
 * Original: 0x0047C088 - 0x0047C0B9 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C088(void)
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

loc_0047C088: ;
    /* FPU: fldl2e  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0047B72A(); /* call 0x0047B72A */

loc_0047C093: ;
    SET_LO8(ebx, ~LO8(ebx));
    if (TEST_Z(MEM8(ebp + -159), 1)) goto loc_0047C0A7; /* je: equal / zero */

loc_0047C09E: ;
    PUSH32(esp, 0); sub_0047C0CB(); /* call 0x0047C0CB */

loc_0047C0A3: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* fstp st(0) */

loc_0047C0A7: ;
    if (TEST_NZ(LO8(edx), 0x40)) goto loc_0047C0B4; /* jne: not equal / not zero */

loc_0047C0AC: ;
    SET_HI8(ebx, ~HI8(ebx));
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fscale  */

loc_0047C0B4: ;
    g_seh_ebp = ebp; sub_0047B328(); return; /* tail jmp 0x0047B328 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
