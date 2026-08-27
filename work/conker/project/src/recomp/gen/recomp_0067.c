/**
 * Burnout 3 - Recompiled code chunk 67
 * Functions: 250 (0x00524736 - 0x0052F1FE)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00524736
 * Original: 0x00524736 - 0x00524772 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524736(void)
{
    int _flags = 0; /* fallback flag var */

loc_00524736: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x14));
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_00524740: ;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    if (TEST_Z(esi, eax)) goto loc_00524766; /* je: equal / zero */

loc_00524749: ;
    eax = ZX8(MEM8(esp + 0x14));
    edi = MEM32(esp + 0x1C);
    edi = edi + 6;
    ebx = ecx + eax * 4;
    MEM32(edx + ebx * 4) = edi;
    edi = MEM32(esp + 0x10);
    eax = ecx + eax * 4 + 0x34;
    MEM32(edx + eax * 4) = edi;

loc_00524766: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00524740; /* jl: less (signed <) */

loc_0052476C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00524772
 * Original: 0x00524772 - 0x00524817 (165 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524772(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00524772: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */

loc_0052477F: ;
    edx = 0; /* xor self */
    edx++;
    ecx = ebx;
    edx = edx << LO8(ecx);
    ecx = ZX8(MEM8(ebp + 0x18));
    (void)0; /* test edx, ecx - flags set for next jcc */
    MEM32(ebp + -12) = edx;
    if (TEST_Z(edx, ecx)) goto loc_0052480B; /* je: equal / zero */

loc_00524791: ;
    eax = ZX8(MEM8(ebp + 0x14));
    ecx = MEM32(ebp + 8);
    edx = ebx + eax * 4;
    edx = MEM32(ecx + edx * 4);
    edx = edx - 3;
    if (CMP_NE(MEM32(ebp + 0x1C), edx)) { sub_00524817(); return; } /* jne: not equal / not zero */

loc_005247A6: ;
    eax = ebx + eax * 4 + 0x34;
    ecx = MEM32(ecx + eax * 4);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(ecx, 1)) goto loc_00524809; /* je: equal / zero */

loc_005247B5: ;
    if (CMP_NE(MEM32(ebp + 0x10), 2)) { sub_00524817(); return; } /* jne: not equal / not zero */

loc_005247BB: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 8);
    eax = ecx;
    eax = eax >> 0x19;
    eax = eax & 0xF;
    if (CMP_EQ(eax, 3)) goto loc_005247D3; /* je: equal / zero */

loc_005247CE: ;
    if (CMP_NE(eax, 4)) { sub_00524817(); return; } /* jne: not equal / not zero */

loc_005247D3: ;
    if (TEST_Z(ecx, 0xE0000000u)) goto loc_005247FD; /* je: equal / zero */

loc_005247DB: ;
    edi = ebp + -24;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = ebp + -24;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_005275F5(); /* call 0x005275F5 */

loc_005247E9: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00527C87(); /* call 0x00527C87 */

loc_005247F5: ;
    SET_LO8(eax, MEM8(ebp + -12));
    if (TEST_NZ(MEM8(ebp + -2), LO8(eax))) { sub_00524817(); return; } /* jne: not equal / not zero */

loc_005247FD: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_00524809; /* je: equal / zero */

loc_00524803: ;
    if (CMP_NE(MEM32(ebp + -8), 2)) { sub_00524817(); return; } /* jne: not equal / not zero */

loc_00524809: ;
    SET_LO8(eax, 1);

loc_0052480B: ;
    ebx++;
    if (CMP_L(ebx, 4)) goto loc_0052477F; /* jl: less (signed <) */

loc_00524815: ;
    g_seh_ebp = ebp; sub_00524819(); return; /* tail jmp 0x00524819 */

}

/**
 * sub_00524820
 * Original: 0x00524820 - 0x0052489B (123 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524820(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00524820: ;
    fp_push(MEMF(0x648CF4)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(0x648CF0)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    POP32(esp, edi);
    PUSH32(esp, 0x41);
    eax = edx + 0xE0;
    POP32(esp, ecx);

loc_0052483A: ;
    PUSH32(esp, 4);
    POP32(esp, esi);

loc_0052483D: ;
    /* fld st(1) */
    MEM32(eax + 0x2A0) = ecx;
    MEMF(eax + -224) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x380) = ecx;
    /* fld st(1) */
    MEM32(eax + 0x460) = ecx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x540) = ecx;
    eax = eax + 4;
    esi--;
    MEMF(eax + 0xDC) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax + 0x1BC) = (float)fp_top(); fp_pop(); /* fst */
    if ((esi != 0)) goto loc_0052483D; /* jne: not equal / not zero */

loc_00524873: ;
    edi--;
    if ((edi != 0)) goto loc_0052483A; /* jne: not equal / not zero */

loc_00524876: ;
    eax = MEM32(esp + 0xC);
    /* fstp st(0) */
    /* fstp st(0) */
    POP32(esp, edi);
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x450) = 0x20;
    MEMF(edx + 0xD0) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x700) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0052489B
 * Original: 0x0052489B - 0x00524916 (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052489B(void)
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

loc_0052489B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(eax + 0xD0) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    MEM32(eax + 0x450) = esi;
    eax = eax + 0x380;
    MEM32(ebp + -4) = 0xE;

loc_005248BF: ;
    PUSH32(esp, 4);
    POP32(esp, edi);

loc_005248C2: ;
    ecx = MEM32(eax + -448);
    fp_push(0.0); /* fldz */
    MEM32(eax + -896) = ecx;
    MEMF(eax + -448) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax + 0x1C0);
    fp_push(0.0); /* fldz */
    MEM32(eax) = ecx;
    ecx = eax + -224;
    edx = MEM32(ecx);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + -672) = edx;
    edx = eax + 0x2A0;
    ebx = MEM32(edx);
    MEM32(eax + 0xE0) = ebx;
    MEM32(eax + 0x1C0) = esi;
    eax = eax + 4;
    edi--;
    MEM32(edx) = esi;
    if ((edi != 0)) goto loc_005248C2; /* jne: not equal / not zero */

loc_0052490C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_005248BF; /* jne: not equal / not zero */

loc_00524911: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00524916
 * Original: 0x00524916 - 0x0052499A (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524916(void)
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

loc_00524916: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(ebp + 0xC), 0xD - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(ebp + 0xC), 0xD)) { sub_0052499A(); return; } /* jne: not equal / not zero */

loc_00524922: ;
    (void)0; /* cmp MEM32(ebp + 0x18), 0x43 - flags set for next jcc */
    fp_push(MEMF(0x6492EC)); /* fld float */
    if (CMP_EQ(MEM32(ebp + 0x18), 0x43)) goto loc_0052493A; /* je: equal / zero */

loc_0052492E: ;
    if (CMP_EQ(MEM32(ebp + 0x18), 0x45)) goto loc_0052493A; /* je: equal / zero */

loc_00524934: ;
    if (CMP_NE(MEM32(ebp + 0x18), 0x47)) goto loc_0052495B; /* jne: not equal / not zero */

loc_0052493A: ;
    if (CMP_LE(MEM32(edx + 0x700), 0xA)) goto loc_0052495B; /* jle: less or equal (signed <=) */

loc_00524943: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ce0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0052495B; /* jne: not equal / not zero */

loc_00524953: ;
    /* fstp st(0) */
    fp_push(MEMF(0x6492E8)); /* fld float */

loc_0052495B: ;
    MEMF(edx + 0xD0) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, 0x48);
    MEMF(edx + 0x1B0) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, eax);
    fp_push(0.0); /* fldz */
    PUSH32(esp, 0x20);
    MEMF(edx + 0x290) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x450) = eax;
    MEMF(edx + 0x370) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x530) = eax;
    MEM32(edx + 0x610) = edi;
    MEM32(edx + 0x6F0) = edi;
    g_seh_ebp = ebp; sub_00524ED3(); return; /* tail jmp 0x00524ED3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00524ED8
 * Original: 0x00524ED8 - 0x00524EF2 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524ED8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00524ED8: ;
    (void)0; /* cmp MEM8(esp + 8), 0 - flags set for next jcc */
    edx = ZX8(MEM8(esp + 4));
    PUSH32(esp, edi);
    if (CMP_EQ(MEM8(esp + 8), 0)) { sub_00524EF2(); return; } /* je: equal / zero */

loc_00524EE5: ;
    edi = eax + edx * 4 + 0x118;
    eax = eax + edx * 4 + 0x38;
    g_seh_ebp = ebp; sub_00524EFC(); return; /* tail jmp 0x00524EFC */

}

/**
 * sub_00524F08
 * Original: 0x00524F08 - 0x00524F3A (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524F08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00524F08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00525A4F(); /* call 0x00525A4F */

loc_00524F18: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1320);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00524F2A: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (TEST_NZ(ecx, ecx)) { sub_00524F3A(); return; } /* jne: not equal / not zero */

loc_00524F33: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00524FB9(); return; /* tail jmp 0x00524FB9 */

}

/**
 * sub_00524FBE
 * Original: 0x00524FBE - 0x00525083 (197 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524FBE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00524FBE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = 0; /* xor self */
    edi = ebp + -28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    edx = ebp + -20;
    ecx = ebp + -12;
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    PUSH32(esp, 0); sub_005253AE(); /* call 0x005253AE */

loc_00524FE5: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_00524FEF: ;
    eax = MEM32(ebp + 8);
    edi = ebp + -20;
    ebx = ebp + -12;
    PUSH32(esp, 0); sub_0052589A(); /* call 0x0052589A */

loc_00524FFD: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_00525003: ;
    eax = ebp + -12;
    PUSH32(esp, 0); sub_0052548D(); /* call 0x0052548D */

loc_0052500B: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_00525011: ;
    esi = ebp + -12;
    PUSH32(esp, 0); sub_005252C7(); /* call 0x005252C7 */

loc_00525019: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_0052501F: ;
    PUSH32(esp, 0); sub_00525309(); /* call 0x00525309 */

loc_00525024: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052507A; /* jne: not equal / not zero */

loc_00525028: ;
    SET_LO8(eax, MEM8(ebp + -16));
    SET_LO8(eax, LO8(eax) | MEM8(ebp + -18));
    SET_LO8(eax, LO8(eax) | MEM8(ebp + -14));
    if ((LO8(eax) == 0)) goto loc_0052507A; /* je: equal / zero */

loc_00525033: ;
    eax = ebp + -28;
    edx = edi;
    PUSH32(esp, 0); sub_005255B3(); /* call 0x005255B3 */

loc_0052503D: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_00525043: ;
    ebx = MEM32(ebp + 8);
    esi = edi;
    edi = ebp + -12;
    PUSH32(esp, 0); sub_00525936(); /* call 0x00525936 */

loc_00525050: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_00525056: ;
    ebx = MEM32(ebp + 8);
    esi = ebp + -28;
    PUSH32(esp, 0); sub_005259B9(); /* call 0x005259B9 */

loc_00525061: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0052507A; /* jl: less (signed <) */

loc_00525067: ;
    if (TEST_Z(MEM8(ebp + -1), 0xFE)) goto loc_0052507A; /* je: equal / zero */

loc_0052506D: ;
    eax = MEM32(ebp + 0xC);
    esi = edi;
    edi = MEM32(eax);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(eax) = MEM32(eax) + 0xC;

loc_0052507A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00525083
 * Original: 0x00525083 - 0x005250FD (122 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525083(void)
{
    int _flags = 0; /* fallback flag var */

loc_00525083: ;
    edx = MEM32(eax + 8);
    ecx = edx;
    ecx = ecx & 0x1E000000;
    if (CMP_NE(ecx, 0x2000000)) goto loc_005250FA; /* jne: not equal / not zero */

loc_00525096: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0x30000000;
    if (CMP_NE(ecx, 0x10000000)) goto loc_005250FA; /* jne: not equal / not zero */

loc_005250A7: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x18;
    if (TEST_Z(LO8(ecx), 0xF)) goto loc_005250FA; /* je: equal / zero */

loc_005250B3: ;
    eax = eax >> 0x14;
    eax = eax ^ edx;
    if (TEST_NZ(LO8(eax), 0xF)) goto loc_005250FA; /* jne: not equal / not zero */

loc_005250BC: ;
    if (TEST_NZ(HI8(edx), 0x10)) goto loc_005250FA; /* jne: not equal / not zero */

loc_005250C1: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_005250CB; /* je: equal / zero */

loc_005250C6: ;
    if (TEST_NZ(HI8(edx), 0xC)) goto loc_005250FA; /* jne: not equal / not zero */

loc_005250CB: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_005250DE; /* je: equal / zero */

loc_005250D0: ;
    eax = edx;
    eax = eax & 0x300;
    if (CMP_NE(eax, 0x100)) goto loc_005250FA; /* jne: not equal / not zero */

loc_005250DE: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_005250EB; /* je: equal / zero */

loc_005250E3: ;
    eax = edx;
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (CMP_NE(LO8(eax), 0x80)) goto loc_005250FA; /* jne: not equal / not zero */

loc_005250EB: ;
    eax = 0; /* xor self */
    eax++;
    if (TEST_Z(LO8(eax), LO8(ecx))) goto loc_005250FC; /* je: equal / zero */

loc_005250F2: ;
    edx = edx & 0x30;
    if (CMP_EQ(LO8(edx), 0x30)) goto loc_005250FC; /* je: equal / zero */

loc_005250FA: ;
    eax = 0; /* xor self */

loc_005250FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005250FD
 * Original: 0x005250FD - 0x00525193 (150 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005250FD(void)
{
    int _flags = 0; /* fallback flag var */

loc_005250FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = edi;
    ecx = ecx & 0x1E000000;
    if (CMP_NE(ecx, 0x2000000)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525112: ;
    edx = MEM32(eax + 4);
    ecx = 0x30000000;
    edx = edx & ecx;
    if (CMP_NE(edx, ecx)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525120: ;
    eax = MEM32(eax);
    if (TEST_NZ(LO8(eax), 2)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525126: ;
    ecx = eax;
    ecx = ecx >> 0xC;
    if (TEST_Z(LO8(ecx), 0xF)) goto loc_0052518E; /* je: equal / zero */

loc_00525130: ;
    if (TEST_NZ(LO8(eax), 4)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525134: ;
    eax = eax >> 3;
    esi = 0x100;
    if (TEST_NZ(esi, eax)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525140: ;
    edx = edi;
    edx = edx >> 0x11;
    edx = edx ^ eax;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0052518E; /* jne: not equal / not zero */

loc_0052514B: ;
    if (TEST_NZ(edi, 0x1000)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525153: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_00525160; /* je: equal / zero */

loc_00525158: ;
    if (TEST_NZ(edi, 0xC00)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525160: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00525170; /* je: equal / zero */

loc_00525165: ;
    eax = edi;
    eax = eax & 0x300;
    if (CMP_NE(eax, esi)) goto loc_0052518E; /* jne: not equal / not zero */

loc_00525170: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0052517D; /* je: equal / zero */

loc_00525175: ;
    eax = edi;
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (CMP_NE(LO8(eax), 0x80)) goto loc_0052518E; /* jne: not equal / not zero */

loc_0052517D: ;
    eax = 0; /* xor self */
    eax++;
    if (TEST_Z(LO8(eax), LO8(ecx))) goto loc_00525190; /* je: equal / zero */

loc_00525184: ;
    ecx = edi;
    ecx = ecx & 0x30;
    if (CMP_EQ(LO8(ecx), 0x30)) goto loc_00525190; /* je: equal / zero */

loc_0052518E: ;
    eax = 0; /* xor self */

loc_00525190: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525193
 * Original: 0x00525193 - 0x0052522C (153 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525193(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00525193: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    eax = edi;
    eax = eax & 0xE0000000u;
    if (CMP_NE(eax, 0x20000000)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_005251AB: ;
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 0x30000000;
    if (CMP_NE(edx, 0x10000000)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_005251BD: ;
    ebx = eax;
    ebx = ebx >> 0x10;
    if (TEST_Z(LO8(ebx), 0xF)) { sub_0052522C(); return; } /* je: equal / zero */

loc_005251C7: ;
    ecx = MEM32(ecx + 4);
    eax = eax >> 0x14;
    edx = ecx;
    edx = edx & 0xF;
    eax = eax & 0xF;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    esi = 0x1E000000;
    if (CMP_NE(edx, eax)) goto loc_005251E2; /* jne: not equal / not zero */

loc_005251DE: ;
    if (TEST_Z(esi, edi)) goto loc_005251EB; /* je: equal / zero */

loc_005251E2: ;
    if (TEST_Z(esi, edi)) { sub_0052522C(); return; } /* je: equal / zero */

loc_005251E6: ;
    if (CMP_NE(edx, 1)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_005251EB: ;
    if (TEST_NZ(HI8(ecx), 0x10)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_005251F0: ;
    if (TEST_Z(LO8(ebx), 8)) goto loc_005251FA; /* je: equal / zero */

loc_005251F5: ;
    if (TEST_NZ(HI8(ecx), 0xC)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_005251FA: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_0052520D; /* je: equal / zero */

loc_005251FF: ;
    eax = ecx;
    eax = eax & 0x300;
    if (CMP_NE(eax, 0x100)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_0052520D: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_0052521A; /* je: equal / zero */

loc_00525212: ;
    eax = ecx;
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (CMP_NE(LO8(eax), 0x80)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_0052521A: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_00525227; /* je: equal / zero */

loc_0052521F: ;
    ecx = ecx & 0x30;
    if (CMP_NE(LO8(ecx), 0x30)) { sub_0052522C(); return; } /* jne: not equal / not zero */

loc_00525227: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0052522E(); return; /* tail jmp 0x0052522E */

}

/**
 * sub_00525232
 * Original: 0x00525232 - 0x005252C2 (144 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525232(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00525232: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 8);
    eax = edi;
    eax = eax & 0xE0000000u;
    if (CMP_NE(eax, 0x20000000)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_00525245: ;
    eax = MEM32(edx);
    ecx = 0x30000000;
    esi = eax;
    esi = esi & ecx;
    if (CMP_NE(esi, ecx)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_00525254: ;
    if (TEST_NZ(LO8(eax), 2)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_00525258: ;
    ecx = eax;
    ecx = ecx >> 0xC;
    if (TEST_Z(LO8(ecx), 0xF)) { sub_005252C2(); return; } /* je: equal / zero */

loc_00525262: ;
    if (TEST_Z(LO8(eax), 4)) { sub_005252C2(); return; } /* je: equal / zero */

loc_00525266: ;
    eax = eax >> 3;
    esi = 0x100;
    if (TEST_NZ(esi, eax)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_00525272: ;
    PUSH32(esp, ebx);
    ebx = edi;
    ebx = ebx >> 0x11;
    ebx = ebx ^ eax;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_0052527F: ;
    eax = MEM32(edx + 4);
    if (TEST_NZ(HI8(eax), 0x10)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_00525287: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_00525291; /* je: equal / zero */

loc_0052528C: ;
    if (TEST_NZ(HI8(eax), 0xC)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_00525291: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_005252A2; /* je: equal / zero */

loc_00525296: ;
    edx = eax;
    edx = edx & 0x300;
    if (CMP_NE(edx, esi)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_005252A2: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_005252B1; /* je: equal / zero */

loc_005252A7: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (CMP_NE(LO8(edx), 0x80)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_005252B1: ;
    if (TEST_Z(LO8(ecx), 1)) goto loc_005252BD; /* je: equal / zero */

loc_005252B6: ;
    eax = eax & 0x30;
    if (CMP_NE(LO8(eax), 0x30)) { sub_005252C2(); return; } /* jne: not equal / not zero */

loc_005252BD: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_005252C4(); return; /* tail jmp 0x005252C4 */

}

/**
 * sub_005252C7
 * Original: 0x005252C7 - 0x00525309 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005252C7(void)
{
    int _flags = 0; /* fallback flag var */

loc_005252C7: ;
    eax = esi;
    PUSH32(esp, 0); sub_00525083(); /* call 0x00525083 */

loc_005252CE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005252D6; /* je: equal / zero */

loc_005252D2: ;
    MEM8(esi + 3) = MEM8(esi + 3) & 0xF0;

loc_005252D6: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_005250FD(); /* call 0x005250FD */

loc_005252DE: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = 0xFFFF0FFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005252E9; /* je: equal / zero */

loc_005252E7: ;
    MEM32(esi) = MEM32(esi) & edi;

loc_005252E9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00525193(); /* call 0x00525193 */

loc_005252F0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005252F8; /* je: equal / zero */

loc_005252F4: ;
    MEM8(esi + 2) = MEM8(esi + 2) & 0xF0;

loc_005252F8: ;
    edx = esi;
    PUSH32(esp, 0); sub_00525232(); /* call 0x00525232 */

loc_005252FF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00525305; /* je: equal / zero */

loc_00525303: ;
    MEM32(esi) = MEM32(esi) & edi;

loc_00525305: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525309
 * Original: 0x00525309 - 0x005253A8 (159 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525309(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00525309: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx & 0x1E000000;
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    eax = eax & 0xE0000000u;
    SET_LO8(ebx, LO8(ebx) + 1);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(ebp + -1) = LO8(eax);
    edi = 0xF000;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00525365; /* jne: not equal / not zero */

loc_00525337: ;
    ebx = MEM32(esi);
    if (TEST_NZ(LO8(ebx), 4)) goto loc_00525342; /* jne: not equal / not zero */

loc_0052533E: ;
    if (TEST_NZ(edi, ebx)) goto loc_0052534D; /* jne: not equal / not zero */

loc_00525342: ;
    eax = esi;
    PUSH32(esp, 0); sub_00525083(); /* call 0x00525083 */

loc_00525349: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525360; /* jne: not equal / not zero */

loc_0052534D: ;
    if (TEST_NZ(ebx, 0xF000000)) { sub_005253A8(); return; } /* jne: not equal / not zero */

loc_00525355: ;
    eax = esi;
    PUSH32(esp, 0); sub_005250FD(); /* call 0x005250FD */

loc_0052535C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_005253A8(); return; } /* je: equal / zero */

loc_00525360: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(ebx, 1);

loc_00525365: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052539C; /* jne: not equal / not zero */

loc_00525369: ;
    eax = MEM32(esi);
    if (TEST_Z(LO8(eax), 4)) goto loc_00525373; /* je: equal / zero */

loc_0052536F: ;
    if (TEST_NZ(edi, eax)) goto loc_0052537E; /* jne: not equal / not zero */

loc_00525373: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00525193(); /* call 0x00525193 */

loc_0052537A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525395; /* jne: not equal / not zero */

loc_0052537E: ;
    if (TEST_NZ(MEM8(esi + 2), 0xF)) goto loc_0052538F; /* jne: not equal / not zero */

loc_00525384: ;
    edx = esi;
    PUSH32(esp, 0); sub_00525232(); /* call 0x00525232 */

loc_0052538B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525395; /* jne: not equal / not zero */

loc_0052538F: ;
    MEM8(ebp + -1) = 0;
    goto loc_00525399;

loc_00525395: ;
    MEM8(ebp + -1) = 1;

loc_00525399: ;
    SET_LO8(eax, MEM8(ebp + -1));

loc_0052539C: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_005253A8(); return; } /* je: equal / zero */

loc_005253A0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_005253A8(); return; } /* je: equal / zero */

loc_005253A4: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_005253AA(); return; /* tail jmp 0x005253AA */

}

/**
 * sub_005253AE
 * Original: 0x005253AE - 0x0052548D (223 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005253AE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005253AE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0xF);
    eax = eax >> 0x19;
    POP32(esp, ebx);
    eax = eax & ebx;
    ebp = 0x100;
    edi = 0xFF;
    if ((eax == 0)) goto loc_00525429; /* je: equal / zero */

loc_005253D1: ;
    if (CMP_NE(eax, 0xD)) goto loc_005253DE; /* jne: not equal / not zero */

loc_005253D6: ;
    MEM8(edx + 4) = 8;
    MEM8(edx + 3) = 0xF0;

loc_005253DE: ;
    eax = ZX8(MEM8(ecx + 3));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_005253F7; /* je: equal / zero */

loc_005253E6: ;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 4) = LO8(eax);
    eax = MEM32(ecx);
    eax = eax >> 0x14;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x20);
    MEM8(edx + 3) = LO8(eax);

loc_005253F7: ;
    eax = MEM32(ecx);
    if (TEST_NZ(LO8(eax), 4)) goto loc_00525429; /* jne: not equal / not zero */

loc_005253FD: ;
    if (TEST_Z(HI8(eax), 0xF0)) goto loc_00525429; /* je: equal / zero */

loc_00525402: ;
    MEM8(edx) = 1;
    eax = MEM32(ecx);
    eax = eax >> 0xC;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 2) = LO8(eax);
    esi = MEM32(ecx);
    esi = esi >> 3;
    if (TEST_Z(ebp, esi)) goto loc_0052541F; /* je: equal / zero */

loc_00525418: ;
    esi = esi & edi;
    esi = esi + 0x10;
    goto loc_00525424;

loc_0052541F: ;
    esi = esi & edi;
    esi = esi + 0x20;

loc_00525424: ;
    eax = esi;
    MEM8(edx + 1) = LO8(eax);

loc_00525429: ;
    if (TEST_Z(MEM8(ecx + 0xB), 0xE0)) goto loc_00525486; /* je: equal / zero */

loc_0052542F: ;
    eax = MEM32(ecx);
    if (TEST_Z(LO8(eax), 4)) goto loc_00525461; /* je: equal / zero */

loc_00525435: ;
    if (TEST_Z(HI8(eax), 0xF0)) goto loc_00525461; /* je: equal / zero */

loc_0052543A: ;
    MEM8(edx) = 0;
    eax = MEM32(ecx);
    eax = eax >> 0xC;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 2) = LO8(eax);
    esi = MEM32(ecx);
    esi = esi >> 3;
    if (TEST_Z(ebp, esi)) goto loc_00525457; /* je: equal / zero */

loc_00525450: ;
    esi = esi & edi;
    esi = esi + 0x10;
    goto loc_0052545C;

loc_00525457: ;
    esi = esi & edi;
    esi = esi + 0x20;

loc_0052545C: ;
    eax = esi;
    MEM8(edx + 1) = LO8(eax);

loc_00525461: ;
    eax = ZX16(MEM16(ecx + 2));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00525486; /* je: equal / zero */

loc_00525469: ;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 6) = LO8(eax);
    if (TEST_Z(MEM8(ecx + 0xB), 0x1E)) goto loc_0052547A; /* je: equal / zero */

loc_00525474: ;
    MEM8(edx + 5) = 0xE1;
    goto loc_00525486;

loc_0052547A: ;
    eax = MEM32(ecx);
    eax = eax >> 0x14;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x20);
    MEM8(edx + 5) = LO8(eax);

loc_00525486: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052548D
 * Original: 0x0052548D - 0x005255B3 (294 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052548D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052548D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = esi;
    ecx = ecx >> 0x19;
    ecx = ecx & 0xF;
    MEM8(esp + 0xF) = ((ecx != 0)) ? 1 : 0; /* setne */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = 0xF000;
    if (TEST_Z(ecx, ecx)) goto loc_00525516; /* je: equal / zero */

loc_005254AA: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_005254B5; /* je: equal / zero */

loc_005254AF: ;
    ecx = ZX8(MEM8(edi + 2));
    goto loc_005254B7;

loc_005254B5: ;
    ecx = 0; /* xor self */

loc_005254B7: ;
    SET_LO8(edx, MEM8(edi + 4));
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    if ((LO8(edx) != 0)) goto loc_005254E2; /* jne: not equal / not zero */

loc_005254BE: ;
    MEM8(eax + 3) = MEM8(eax + 3) & 0xF0;
    ecx = MEM32(eax);
    esi = esi & 0xE1FFFFFFu;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM32(eax + 8) = esi;
    if (TEST_NZ(LO8(ecx), 4)) goto loc_00525516; /* jne: not equal / not zero */

loc_005254D2: ;
    ecx = ecx & 0xFFFF0FFFu;
    ecx = ecx | 0xFF8;
    MEM32(eax) = ecx;
    goto loc_00525516;

loc_005254E2: ;
    ecx = MEM32(eax);
    if (TEST_NZ(LO8(ecx), 4)) goto loc_005254FC; /* jne: not equal / not zero */

loc_005254E9: ;
    if (TEST_Z(ebx, ecx)) goto loc_005254FC; /* je: equal / zero */

loc_005254ED: ;
    edx = ZX8(MEM8(edi + 2));
    edx = edx << 0xC;
    edx = edx ^ ecx;
    edx = edx & ebx;
    edx = edx ^ ecx;
    MEM32(eax) = edx;

loc_005254FC: ;
    ecx = MEM32(eax);
    edx = 0xF000000;
    if (TEST_Z(edx, ecx)) goto loc_00525516; /* je: equal / zero */

loc_00525507: ;
    esi = ZX8(MEM8(edi + 4));
    esi = esi << 0x18;
    esi = esi ^ ecx;
    esi = esi & edx;
    esi = esi ^ ecx;
    MEM32(eax) = esi;

loc_00525516: ;
    ebp = MEM32(eax + 8);
    if (TEST_Z(ebp, 0xE0000000u)) goto loc_005255AC; /* je: equal / zero */

loc_00525525: ;
    if (CMP_NE(MEM8(edi), 0)) goto loc_00525530; /* jne: not equal / not zero */

loc_0052552A: ;
    ecx = ZX8(MEM8(edi + 2));
    goto loc_00525532;

loc_00525530: ;
    ecx = 0; /* xor self */

loc_00525532: ;
    SET_LO8(edx, MEM8(edi + 6));
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    if ((LO8(edx) != 0)) goto loc_0052555B; /* jne: not equal / not zero */

loc_00525539: ;
    MEM8(eax + 2) = MEM8(eax + 2) & 0xF0;
    ecx = MEM32(eax);
    ebp = ebp & 0x1FFFFFFF;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM32(eax + 8) = ebp;
    if (TEST_Z(LO8(ecx), 4)) goto loc_005255AC; /* je: equal / zero */

loc_0052554D: ;
    ecx = ecx & 0xFFFF0FFFu;
    ecx = ecx | 0xFF8;
    goto loc_005255AA;

loc_0052555B: ;
    ecx = MEM32(eax);
    if (TEST_Z(LO8(ecx), 4)) goto loc_00525575; /* je: equal / zero */

loc_00525562: ;
    if (TEST_Z(ebx, ecx)) goto loc_00525575; /* je: equal / zero */

loc_00525566: ;
    edx = ZX8(MEM8(edi + 2));
    edx = edx << 0xC;
    edx = edx ^ ecx;
    edx = edx & ebx;
    edx = edx ^ ecx;
    MEM32(eax) = edx;

loc_00525575: ;
    edx = MEM32(eax);
    esi = 0xF0000;
    if (TEST_Z(esi, edx)) goto loc_005255AC; /* je: equal / zero */

loc_00525580: ;
    ecx = ZX8(MEM8(edi + 6));
    ecx = ecx << 0x10;
    ecx = ecx ^ edx;
    ecx = ecx & esi;
    ecx = ecx ^ edx;
    (void)0; /* cmp MEM8(esp + 0xF), 0 - flags set for next jcc */
    MEM32(eax) = ecx;
    if (CMP_EQ(MEM8(esp + 0xF), 0)) goto loc_005255AC; /* je: equal / zero */

loc_00525596: ;
    if (TEST_NZ(ebp, 0x1E000000)) goto loc_005255AC; /* jne: not equal / not zero */

loc_0052559E: ;
    ecx = ecx & 0xFF1FFFFFu;
    ecx = ecx | 0x100000;

loc_005255AA: ;
    MEM32(eax) = ecx;

loc_005255AC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005255B3
 * Original: 0x005255B3 - 0x0052566E (187 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005255B3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005255B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    MEM8(edi + 6) = 0xF1;
    ecx = MEM32(esi + 8);
    MEM32(ebp + -16) = ecx;
    ecx = ecx >> 0x19;
    eax = 0; /* xor self */
    ecx = ecx & 0xF;
    (void)0; /* cmp ecx, 0xD - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    MEM8(ebp + -12) = LO8(eax);
    MEM8(ebp + -8) = LO8(eax);
    if (CMP_A(ecx, 0xD)) { sub_0052566E(); return; } /* ja: above (unsigned >) */

loc_005255E1: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x5257C4)); return; /* indirect tail jmp */

    if (CMP_EQ(MEM8(edx), 0)) goto loc_005255F3; /* je: equal / zero */

loc_005255ED: ;
    ebx = ZX8(MEM8(edx + 2));
    goto loc_005255F5;

loc_005255F3: ;
    ebx = 0; /* xor self */

loc_005255F5: ;
    SET_LO8(ecx, MEM8(edx + 4));
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    goto loc_0052563F;

    if (CMP_EQ(MEM8(edx), 0)) goto loc_00525607; /* je: equal / zero */

loc_00525601: ;
    ebx = ZX8(MEM8(edx + 2));
    goto loc_00525609;

loc_00525607: ;
    ebx = 0; /* xor self */

loc_00525609: ;
    SET_LO8(ecx, MEM8(edx + 4));
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    goto loc_0052563C;

    if (CMP_EQ(MEM8(edx), 0)) goto loc_0052561B; /* je: equal / zero */

loc_00525615: ;
    ebx = ZX8(MEM8(edx + 2));
    goto loc_0052561D;

loc_0052561B: ;
    ebx = 0; /* xor self */

loc_0052561D: ;
    SET_LO8(ecx, MEM8(edx + 4));
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    MEM8(ebp + -8) = LO8(ecx);
    goto loc_0052563F;

    if (CMP_EQ(MEM8(edx), 0)) goto loc_00525632; /* je: equal / zero */

loc_0052562C: ;
    ebx = ZX8(MEM8(edx + 2));
    goto loc_00525634;

loc_00525632: ;
    ebx = 0; /* xor self */

loc_00525634: ;
    SET_LO8(ecx, MEM8(edx + 4));
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    MEM8(ebp + -8) = LO8(ecx);

loc_0052563C: ;
    MEM8(ebp + -12) = LO8(ecx);

loc_0052563F: ;
    MEM8(ebp + -4) = LO8(ecx);
    g_seh_ebp = ebp; sub_00525673(); return; /* tail jmp 0x00525673 */

    MEM8(ebp + -4) = 0xE;
    MEM8(ebp + -12) = 0xE;
    g_seh_ebp = ebp; sub_00525673(); return; /* tail jmp 0x00525673 */

    MEM8(ebp + -4) = 0xE;
    goto loc_00525658;

    MEM8(ebp + -4) = 0xF;

loc_00525658: ;
    MEM8(ebp + -12) = 0xF;
    g_seh_ebp = ebp; sub_00525673(); return; /* tail jmp 0x00525673 */

    MEM8(ebp + -4) = 6;
    MEM8(ebp + -12) = 5;
    g_seh_ebp = ebp; sub_00525673(); return; /* tail jmp 0x00525673 */

    MEM8(ebp + -4) = 8;
    g_seh_ebp = ebp; sub_00525673(); return; /* tail jmp 0x00525673 */

}

/**
 * sub_0052584B
 * Original: 0x0052584B - 0x0052589A (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052584B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052584B: ;
    (void)0; /* cmp MEM8(esp + 4), 0 - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 8));
    PUSH32(esp, esi);
    if (CMP_EQ(MEM8(esp + 4), 0)) goto loc_00525891; /* je: equal / zero */

loc_00525857: ;
    esi = ZX16(MEM16(esp + 0x10));
    esi--;
    if ((esi == 0)) goto loc_0052588C; /* je: equal / zero */

loc_0052585F: ;
    esi--;
    if ((esi == 0)) goto loc_0052587F; /* je: equal / zero */

loc_00525862: ;
    esi--;
    if ((esi != 0)) goto loc_00525894; /* jne: not equal / not zero */

loc_00525865: ;
    ecx = MEM32(edx + 8);
    ecx = ecx >> 0x11;
    SET_LO8(ecx, LO8(ecx) + 0x20);
    MEM8(eax) = LO8(ecx);
    if (TEST_Z(MEM8(edx), 2)) goto loc_00525894; /* je: equal / zero */

loc_00525875: ;
    MEM8(edi + 6) = 0xF0;
    MEM8(edi + 7) = 8;
    goto loc_00525894;

loc_0052587F: ;
    ecx = MEM32(edx + 8);
    ecx = ecx >> 0xD;
    SET_LO8(ecx, LO8(ecx) & 0xF);

loc_00525888: ;
    MEM8(eax) = LO8(ecx);
    goto loc_00525894;

loc_0052588C: ;
    SET_LO8(ecx, LO8(ecx) - 0x20);
    goto loc_00525888;

loc_00525891: ;
    MEM8(eax) = 0xF1;

loc_00525894: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052589A
 * Original: 0x0052589A - 0x005258E3 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052589A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052589A: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    if (TEST_Z(MEM8(ebx + 0xB), 0x1E)) goto loc_005258C2; /* je: equal / zero */

loc_005258A5: ;
    eax = edi + 3;
    PUSH32(esp, 0); sub_005258E3(); /* call 0x005258E3 */

loc_005258AD: ;
    if (TEST_S(eax, eax)) goto loc_005258E1; /* jl: less (signed <) */

loc_005258B1: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_005258BE; /* je: equal / zero */

loc_005258B6: ;
    eax = edi + 1;
    PUSH32(esp, 0); sub_005258E3(); /* call 0x005258E3 */

loc_005258BE: ;
    if (TEST_S(eax, eax)) goto loc_005258E1; /* jl: less (signed <) */

loc_005258C2: ;
    if (TEST_Z(MEM8(ebx + 0xB), 0xE0)) goto loc_005258D0; /* je: equal / zero */

loc_005258C8: ;
    eax = edi + 5;
    PUSH32(esp, 0); sub_005258E3(); /* call 0x005258E3 */

loc_005258D0: ;
    if (TEST_S(eax, eax)) goto loc_005258E1; /* jl: less (signed <) */

loc_005258D4: ;
    if (CMP_NE(MEM8(edi), 0)) goto loc_005258E1; /* jne: not equal / not zero */

loc_005258D9: ;
    eax = edi + 1;
    PUSH32(esp, 0); sub_005258E3(); /* call 0x005258E3 */

loc_005258E1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005258E3
 * Original: 0x005258E3 - 0x00525908 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005258E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005258E3: ;
    SET_LO8(edx, MEM8(eax));
    (void)0; /* cmp LO8(edx), 0x20 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_B(LO8(edx), 0x20)) { sub_00525908(); return; } /* jb: below (unsigned <) */

loc_005258EB: ;
    if (CMP_AE(LO8(edx), 0xE0)) { sub_00525908(); return; } /* jae: above or equal (unsigned >=) */

loc_005258F0: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx + esi;
    SET_LO8(ebx, MEM8(ecx + 0x100));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ebx, LO8(ebx) & 0xF);
    SET_LO8(ebx, LO8(ebx) | MEM8(esi + 0x200));
    g_seh_ebp = ebp; sub_00525918(); return; /* tail jmp 0x00525918 */

}

/**
 * sub_00525936
 * Original: 0x00525936 - 0x00525982 (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525936(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00525936: ;
    eax = 0; /* xor self */
    if (TEST_Z(MEM8(edi + 0xB), 0x1E)) goto loc_0052595F; /* je: equal / zero */

loc_0052593E: ;
    eax = esi + 3;
    ecx = ebx;
    PUSH32(esp, 0); sub_00525983(); /* call 0x00525983 */

loc_00525948: ;
    if (TEST_S(eax, eax)) { sub_00525982(); return; } /* jl: less (signed <) */

loc_0052594C: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0052595B; /* je: equal / zero */

loc_00525951: ;
    eax = esi + 1;
    ecx = ebx;
    PUSH32(esp, 0); sub_00525983(); /* call 0x00525983 */

loc_0052595B: ;
    if (TEST_S(eax, eax)) { sub_00525982(); return; } /* jl: less (signed <) */

loc_0052595F: ;
    if (TEST_Z(MEM8(edi + 0xB), 0xE0)) goto loc_0052596F; /* je: equal / zero */

loc_00525965: ;
    eax = esi + 5;
    ecx = ebx;
    PUSH32(esp, 0); sub_00525983(); /* call 0x00525983 */

loc_0052596F: ;
    if (TEST_S(eax, eax)) { sub_00525982(); return; } /* jl: less (signed <) */

loc_00525973: ;
    if (CMP_NE(MEM8(esi), 0)) { sub_00525982(); return; } /* jne: not equal / not zero */

loc_00525978: ;
    eax = esi + 1;
    ecx = ebx;
    g_seh_ebp = ebp; sub_00525983(); return; /* tail jmp 0x00525983 */

}

/**
 * sub_00525983
 * Original: 0x00525983 - 0x005259B9 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525983(void)
{
    int _flags = 0; /* fallback flag var */

loc_00525983: ;
    edx = ZX8(MEM8(eax));
    PUSH32(esp, esi);
    esi = edx + ecx;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esi) = MEM8(esi) | LO8(edx);
    edx = ZX8(MEM8(eax));
    esi = edx + ecx + 0x100;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esi) = MEM8(esi) | LO8(edx);
    (void)0; /* cmp MEM8(eax), 0x10 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM8(eax), 0x10)) goto loc_005259B6; /* jne: not equal / not zero */

loc_005259A4: ;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 0xEC) = MEM8(ecx + 0xEC) | LO8(edx);
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(ecx + 0x1EC) = MEM8(ecx + 0x1EC) | LO8(eax);

loc_005259B6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_005259B9
 * Original: 0x005259B9 - 0x005259F1 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005259B9(void)
{
    int _flags = 0; /* fallback flag var */

loc_005259B9: ;
    PUSH32(esp, edi);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_005259F1(); /* call 0x005259F1 */

loc_005259C3: ;
    if (TEST_S(eax, eax)) goto loc_005259F0; /* jl: less (signed <) */

loc_005259C7: ;
    eax = esi + 2;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_005259F1(); /* call 0x005259F1 */

loc_005259D2: ;
    if (TEST_S(eax, eax)) goto loc_005259F0; /* jl: less (signed <) */

loc_005259D6: ;
    eax = esi + 4;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_005259F1(); /* call 0x005259F1 */

loc_005259E1: ;
    if (TEST_S(eax, eax)) goto loc_005259F0; /* jl: less (signed <) */

loc_005259E5: ;
    eax = esi + 6;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_005259F1(); /* call 0x005259F1 */

loc_005259F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005259F1
 * Original: 0x005259F1 - 0x00525A4F (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005259F1(void)
{
    int _flags = 0; /* fallback flag var */

loc_005259F1: ;
    SET_LO8(edx, MEM8(eax));
    if (CMP_EQ(LO8(edx), 0xF1)) goto loc_00525A4A; /* je: equal / zero */

loc_005259F8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi), 2)) goto loc_00525A17; /* je: equal / zero */

loc_00525A02: ;
    if (CMP_B(LO8(edx), 0x20)) goto loc_00525A17; /* jb: below (unsigned <) */

loc_00525A07: ;
    if (CMP_AE(LO8(edx), 0xE0)) goto loc_00525A17; /* jae: above or equal (unsigned >=) */

loc_00525A0C: ;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(ecx + 0x200) = MEM8(ecx + 0x200) | LO8(eax);
    goto loc_00525A49;

loc_00525A17: ;
    edx = ZX8(LO8(edx));
    esi = edx + ecx;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esi) = MEM8(esi) | LO8(edx);
    edx = ZX8(MEM8(eax));
    esi = edx + ecx + 0x100;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(edx, ~LO8(edx));
    MEM8(esi) = MEM8(esi) & LO8(edx);
    if (CMP_NE(MEM8(eax), 0xEC)) goto loc_00525A49; /* jne: not equal / not zero */

loc_00525A38: ;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 0x10) = MEM8(ecx + 0x10) | LO8(edx);
    SET_LO8(eax, MEM8(eax + 1));
    SET_LO8(eax, ~LO8(eax));
    MEM8(ecx + 0x110) = MEM8(ecx + 0x110) & LO8(eax);

loc_00525A49: ;
    POP32(esp, esi);

loc_00525A4A: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00525A4F
 * Original: 0x00525A4F - 0x00525A95 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525A4F(void)
{
    int _flags = 0; /* fallback flag var */

loc_00525A4F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    MEM32(edx + 0x204) = ebx;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    edi = edx + 0x100;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0xF0F0F0F;
    if (CMP_EQ(LO8(ebx), 1)) goto loc_00525A7C; /* je: equal / zero */

loc_00525A74: ;
    PUSH32(esp, 0x30);
    edi = edx + 0x20;
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00525A7C: ;
    if (TEST_Z(HI8(ebx), 2)) goto loc_00525A8A; /* je: equal / zero */

loc_00525A81: ;
    edi = edx + 0xE0;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */

loc_00525A8A: ;
    MEM8(edx + 0x200) = 0;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525A95
 * Original: 0x00525A95 - 0x00525AC2 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525A95(void)
{

loc_00525A95: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    PUSH32(esp, 0x30);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = edx + 0xD;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = edx + 0xCD;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM8(edx + 0xDD) = 0;
    MEM8(edx + 0xDE) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525AC2
 * Original: 0x00525AC2 - 0x00525B12 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525AC2(void)
{
    int _flags = 0; /* fallback flag var */

loc_00525AC2: ;
    PUSH32(esp, 0xD);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_00525B12(); /* call 0x00525B12 */

loc_00525ACD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525B0E; /* jne: not equal / not zero */

loc_00525AD1: ;
    PUSH32(esp, 0xC0);
    eax = edi + 0xD;
    ecx = esi + 0xD;
    PUSH32(esp, 0); sub_00525B12(); /* call 0x00525B12 */

loc_00525AE1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525B0E; /* jne: not equal / not zero */

loc_00525AE5: ;
    PUSH32(esp, 0x10);
    eax = edi + 0xCD;
    ecx = esi + 0xCD;
    PUSH32(esp, 0); sub_00525B12(); /* call 0x00525B12 */

loc_00525AF8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525B0E; /* jne: not equal / not zero */

loc_00525AFC: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM8(esi + 0xDD), LO8(eax))) goto loc_00525B11; /* je: equal / zero */

loc_00525B06: ;
    if (CMP_EQ(MEM8(edi + 0xDD), LO8(eax))) goto loc_00525B11; /* je: equal / zero */

loc_00525B0E: ;
    eax = 0; /* xor self */
    eax++;

loc_00525B11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00525B12
 * Original: 0x00525B12 - 0x00525B32 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525B12(void)
{
    int _flags = 0; /* fallback flag var */

loc_00525B12: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(MEM32(esp + 8), esi)) goto loc_00525B2C; /* jbe: below or equal (unsigned <=) */

loc_00525B1B: ;
    ecx = ecx - eax;

loc_00525B1D: ;
    SET_LO8(edx, MEM8(ecx + eax));
    if (TEST_NZ(MEM8(eax), LO8(edx))) { sub_00525B32(); return; } /* jne: not equal / not zero */

loc_00525B24: ;
    esi++;
    eax++;
    if (CMP_B(esi, MEM32(esp + 8))) goto loc_00525B1D; /* jb: below (unsigned <) */

loc_00525B2C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00525B36
 * Original: 0x00525B36 - 0x00525C11 (219 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525B36(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00525B36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = eax & 0x1E000000;
    if (CMP_NE(eax, 0x1A000000)) goto loc_00525B54; /* jne: not equal / not zero */

loc_00525B4D: ;
    MEM8(edx + 0xDD) = 1;

loc_00525B54: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    ecx = esi;
    PUSH32(esp, 0xF);
    ecx = ecx >> 0x18;
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_00525B7D; /* je: equal / zero */

loc_00525B64: ;
    esi = esi >> 0x14;
    esi = esi & ebx;
    if (CMP_BE(esi, 0xB)) goto loc_00525B77; /* jbe: below or equal (unsigned <=) */

loc_00525B6E: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_00525B7D;

loc_00525B77: ;
    esi = esi + edx;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEM8(esi) = MEM8(esi) | LO8(ecx);

loc_00525B7D: ;
    esi = MEM32(edi);
    ecx = esi;
    ecx = ecx >> 0x10;
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_00525BA9; /* je: equal / zero */

loc_00525B88: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, 0x1E000000)) goto loc_00525B9E; /* je: equal / zero */

loc_00525B92: ;
    if (TEST_Z(eax, 0xE0000000u)) goto loc_00525B9E; /* je: equal / zero */

loc_00525B99: ;
    esi = 0; /* xor self */
    esi++;
    goto loc_00525BA3;

loc_00525B9E: ;
    esi = esi >> 0x14;
    esi = esi & ebx;

loc_00525BA3: ;
    esi = esi + edx;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEM8(esi) = MEM8(esi) | LO8(ecx);

loc_00525BA9: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx >> 0xC;
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_00525C0A; /* je: equal / zero */

loc_00525BB4: ;
    esi = eax;
    esi = esi >> 3;
    eax = eax >> 0xB;
    esi = esi & 0xFF;
    if (TEST_Z(LO8(eax), 1)) goto loc_00525BE4; /* je: equal / zero */

loc_00525BC6: ;
    if (CMP_AE(esi, 0x10)) goto loc_00525BEC; /* jae: above or equal (unsigned >=) */

loc_00525BCB: ;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(esi + edx + 0xCD) = LO8(ecx);
    if (TEST_NZ(esi, esi)) goto loc_00525C0A; /* jne: not equal / not zero */

loc_00525BD8: ;
    eax = MEM32(edi);
    eax = eax >> 0xC;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 0xC) = MEM8(edx + 0xC) | LO8(eax);
    goto loc_00525C0A;

loc_00525BE4: ;
    if (CMP_B(esi, 0xC0)) goto loc_00525BF5; /* jb: below (unsigned <) */

loc_00525BEC: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_00525C0A;

loc_00525BF5: ;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    esi = esi + edx + 0xD;
    MEM8(esi) = MEM8(esi) | LO8(ecx);
    eax = MEM32(edi);
    eax = eax >> 0xC;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 0xDE) = MEM8(edx + 0xDE) | LO8(eax);

loc_00525C0A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00525C11
 * Original: 0x00525C11 - 0x00525C6C (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525C11(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00525C11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    eax = 0; /* xor self */
    (void)0; /* test ebx, 0x1E000000 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -2) = LO8(eax);
    if (TEST_Z(ebx, 0x1E000000)) goto loc_00525C38; /* je: equal / zero */

loc_00525C2A: ;
    eax = ebp + -2;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    esi = edi;
    PUSH32(esp, 0); sub_00525DD6(); /* call 0x00525DD6 */

loc_00525C38: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ebp + -3) = 0;
    if (TEST_S(eax, eax)) goto loc_00525C55; /* jl: less (signed <) */

loc_00525C40: ;
    if (TEST_Z(ebx, 0xE0000000u)) goto loc_00525C55; /* je: equal / zero */

loc_00525C48: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebp + -3;
    ecx = edi;
    PUSH32(esp, 0); sub_00525EF1(); /* call 0x00525EF1 */

loc_00525C55: ;
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp MEM8(ecx + 0xDD), 0 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(ecx + 0xDD), 0)) { sub_00525C6C(); return; } /* je: equal / zero */

loc_00525C63: ;
    if (TEST_Z(MEM8(edi), 2)) { sub_00525C6C(); return; } /* je: equal / zero */

loc_00525C68: ;
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_00525C6E(); return; /* tail jmp 0x00525C6E */

}

/**
 * sub_00525C91
 * Original: 0x00525C91 - 0x00525CCD (60 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525C91(void)
{

loc_00525C91: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    POP32(esp, edx);
    esi = eax;
    esi = esi >> 4;
    esi = esi & edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 6;
    esi = esi & edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 8;
    esi = esi & edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 0xA;
    eax = eax & 0xF;
    esi = esi & edx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    eax = eax >> 0x1C;
    eax = eax & edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00525D46(); /* call 0x00525D46 */

loc_00525CCB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525CCD
 * Original: 0x00525CCD - 0x00525D0B (62 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525CCD(void)
{

loc_00525CCD: ;
    eax = MEM32(edx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    esi = eax;
    esi = esi >> 0x13;
    esi = esi & ecx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 0x15;
    esi = esi & ecx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 0x17;
    esi = esi & ecx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 0x19;
    esi = esi & ecx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 0xF;
    eax = eax >> 0xD;
    esi = esi & 0xF;
    PUSH32(esp, esi);
    eax = eax & ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00525D46(); /* call 0x00525D46 */

loc_00525D09: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525D0B
 * Original: 0x00525D0B - 0x00525D46 (59 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525D0B(void)
{

loc_00525D0B: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    POP32(esp, edx);
    esi = eax;
    esi = esi >> 4;
    esi = esi & edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 6;
    esi = esi & edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 8;
    esi = esi & edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi >> 0xA;
    eax = eax & 0xF;
    esi = esi & edx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    eax = eax >> 0x1C;
    eax = eax & edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00525D46(); /* call 0x00525D46 */

loc_00525D44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525D46
 * Original: 0x00525D46 - 0x00525DD6 (144 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525D46(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00525D46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* test LO8(ebx), 8 - flags set for next jcc */
    MEM8(ebp + -1) = LO8(edx);
    if (TEST_Z(LO8(ebx), 8)) goto loc_00525D5E; /* je: equal / zero */

loc_00525D54: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x14);
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));

loc_00525D5E: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_00525D6F; /* je: equal / zero */

loc_00525D63: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x18);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));

loc_00525D6F: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_00525D80; /* je: equal / zero */

loc_00525D74: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x1C);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));

loc_00525D80: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_00525D91; /* je: equal / zero */

loc_00525D85: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x20);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));

loc_00525D91: ;
    ecx = MEM32(ebp + 0xC);
    ecx--;
    if ((ecx == 0)) goto loc_00525DC3; /* je: equal / zero */

loc_00525D97: ;
    ecx--;
    if ((ecx == 0)) goto loc_00525DCF; /* je: equal / zero */

loc_00525D9A: ;
    ecx--;
    if ((ecx != 0)) goto loc_00525DCF; /* jne: not equal / not zero */

loc_00525D9D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    ecx = ecx >> 0x11;
    ecx = ecx & 0xFF;
    if (TEST_Z(MEM8(ecx + edi + 0xD), LO8(edx))) goto loc_00525DB6; /* je: equal / zero */

loc_00525DB2: ;
    MEM8(ebp + -1) = 1;

loc_00525DB6: ;
    if (TEST_Z(MEM8(eax), 2)) goto loc_00525DCF; /* je: equal / zero */

loc_00525DBB: ;
    (void)0; /* test MEM8(edi + 0xDE), LO8(edx) - flags set for next jcc */
    goto loc_00525DC9;

loc_00525DC3: ;
    eax = MEM32(ebp + 0x10);
    (void)0; /* test MEM8(eax + edi), LO8(edx) - flags set for next jcc */

loc_00525DC9: ;
    if (TEST_Z(MEM8(eax + edi), LO8(edx))) goto loc_00525DCF; /* je: equal / zero */

loc_00525DCB: ;
    MEM8(ebp + -1) = 1;

loc_00525DCF: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00525DD6
 * Original: 0x00525DD6 - 0x00525EA9 (211 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525DD6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00525DD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi);
    ebx = eax;
    eax = eax >> 0xC;
    ebx = ebx >> 0x18;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    eax = MEM32(esi + 8);
    eax = eax >> 0x19;
    eax = eax & 0xF;
    SET_LO8(ebx, LO8(ebx) & 0xF);
    if (CMP_A(eax, 0xD)) { sub_00525EA9(); return; } /* ja: above (unsigned >) */

loc_00525E03: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x525EB9)); return; /* indirect tail jmp */

    SET_LO8(ebx, 8);
    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E13: ;
    goto loc_00525E66;

    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E1C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E63; /* jne: not equal / not zero */

loc_00525E25: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00525D0B(); /* call 0x00525D0B */

loc_00525E2C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E63; /* jne: not equal / not zero */

loc_00525E30: ;
    eax = 0; /* xor self */
    goto loc_00525E66;

    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E3B: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E53; /* jne: not equal / not zero */

loc_00525E44: ;
    edx = esi;
    PUSH32(esp, 0); sub_00525CCD(); /* call 0x00525CCD */

loc_00525E4B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E53; /* jne: not equal / not zero */

loc_00525E4F: ;
    eax = 0; /* xor self */
    goto loc_00525E1C;

loc_00525E53: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_00525E1C;

    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E5F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00525EA0; /* je: equal / zero */

loc_00525E63: ;
    eax = 0; /* xor self */
    eax++;

loc_00525E66: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = LO8(eax);
    g_seh_ebp = ebp; sub_00525EB0(); return; /* tail jmp 0x00525EB0 */

    SET_LO8(ebx, 0xE);
    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E76: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E63; /* jne: not equal / not zero */

loc_00525E7A: ;
    goto loc_00525EA0;

    SET_LO8(ebx, 0xE);

loc_00525E7E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E85: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E63; /* jne: not equal / not zero */

loc_00525E89: ;
    SET_LO8(ebx, 0xF);
    goto loc_00525EA0;

    SET_LO8(ebx, 0xF);
    goto loc_00525E7E;

    SET_LO8(ebx, 6);
    ecx = esi;
    PUSH32(esp, 0); sub_00525C91(); /* call 0x00525C91 */

loc_00525E9A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00525E63; /* jne: not equal / not zero */

loc_00525E9E: ;
    SET_LO8(ebx, LO8(ebx) - 1);

loc_00525EA0: ;
    edx = esi;
    PUSH32(esp, 0); sub_00525CCD(); /* call 0x00525CCD */

loc_00525EA7: ;
    goto loc_00525E2C;

}

/**
 * sub_00525F47
 * Original: 0x00525F47 - 0x005260B3 (364 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525F47(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00525F47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 8);
    esi = edi + 4;
    ecx = esi;
    PUSH32(esp, 0); sub_00523EC5(); /* call 0x00523EC5 */

loc_00525F60: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    if (TEST_S(ebx, ebx)) goto loc_005260AB; /* jl: less (signed <) */

loc_00525F6E: ;
    eax = MEM32(edi);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    eax = MEM32(eax);
    eax--;
    if (CMP_LE(eax & eax, 0)) goto loc_0052604F; /* jle: less or equal (signed <=) */

loc_00525F7F: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_00525F83: ;
    if (TEST_S(ebx, ebx)) goto loc_005260AB; /* jl: less (signed <) */

loc_00525F8B: ;
    eax = MEM32(edi);
    ecx = MEM32(ebp + -12);
    eax = ecx + eax + 4;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0); sub_00523FF6(); /* call 0x00523FF6 */

loc_00525F9D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00525FC1; /* je: equal / zero */

loc_00525FA1: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00526163(); /* call 0x00526163 */

loc_00525FAE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00525FC1; /* je: equal / zero */

loc_00525FB2: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -8);
    edx = edi;
    PUSH32(esp, 0); sub_005260B3(); /* call 0x005260B3 */

loc_00525FBF: ;
    ebx = eax;

loc_00525FC1: ;
    if (TEST_S(ebx, ebx)) goto loc_0052603A; /* jl: less (signed <) */

loc_00525FC5: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052627B(); /* call 0x0052627B */

loc_00525FD6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052601C; /* je: equal / zero */

loc_00525FDA: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00523FF6(); /* call 0x00523FF6 */

loc_00525FE3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00526009; /* je: equal / zero */

loc_00525FE7: ;
    ebx = MEM32(ebp + -8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00526163(); /* call 0x00526163 */

loc_00525FF5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00526009; /* je: equal / zero */

loc_00525FF9: ;
    eax = MEM32(ebp + -20);
    edx = edi;
    PUSH32(esp, 0); sub_005260B3(); /* call 0x005260B3 */

loc_00526003: ;
    MEM8(ebp + -1) = 1;
    goto loc_0052601A;

loc_00526009: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -24));
    eax = MEM32(ebp + -8);
    edx = edi;
    PUSH32(esp, 0); sub_0052611E(); /* call 0x0052611E */

loc_0052601A: ;
    ebx = eax;

loc_0052601C: ;
    if (TEST_S(ebx, ebx)) goto loc_0052603A; /* jl: less (signed <) */

loc_00526020: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -28));
    eax = ebp + -32;
    ecx = esi;
    MEM32(ebp + -32) = 0x20;
    PUSH32(esp, 0); sub_00523F13(); /* call 0x00523F13 */

loc_00526038: ;
    ebx = eax;

loc_0052603A: ;
    eax = MEM32(edi);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0xC;
    eax = MEM32(eax);
    eax--;
    if (CMP_L(MEM32(ebp + -8), eax)) goto loc_00525F83; /* jl: less (signed <) */

loc_0052604F: ;
    if (TEST_S(ebx, ebx)) goto loc_005260AB; /* jl: less (signed <) */

loc_00526053: ;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_005260AB; /* je: equal / zero */

loc_00526059: ;
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 8);
    ecx = esi;
    PUSH32(esp, 0); sub_00523EC5(); /* call 0x00523EC5 */

loc_00526067: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_005260AB; /* jl: less (signed <) */

loc_0052606D: ;
    eax = MEM32(edi);
    eax = MEM32(eax);
    esi = 0; /* xor self */
    eax--;
    if (CMP_LE(eax & eax, 0)) goto loc_005260AB; /* jle: less or equal (signed <=) */

loc_00526078: ;
    if (TEST_S(ebx, ebx)) goto loc_005260AB; /* jl: less (signed <) */

loc_0052607C: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052627B(); /* call 0x0052627B */

loc_0052608B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005260A1; /* je: equal / zero */

loc_0052608F: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi;
    edx = edi;
    PUSH32(esp, 0); sub_0052611E(); /* call 0x0052611E */

loc_0052609F: ;
    ebx = eax;

loc_005260A1: ;
    eax = MEM32(edi);
    eax = MEM32(eax);
    esi++;
    eax--;
    if (CMP_L(esi, eax)) goto loc_00526078; /* jl: less (signed <) */

loc_005260AB: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005260B3
 * Original: 0x005260B3 - 0x005260F1 (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005260B3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005260B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    PUSH32(esp, edi);
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = ecx + esi + 4;
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_GE(eax, ebx)) { sub_005260F1(); return; } /* jge: greater or equal (signed >=) */

loc_005260D1: ;
    MEM32(ebp + -4) = ecx;
    ecx = ebx;
    ecx = ecx - eax;

loc_005260D8: ;
    eax = MEM32(edx);
    esi = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    eax = eax + esi;
    ecx--;
    esi = eax + 0x10;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if ((ecx != 0)) goto loc_005260D8; /* jne: not equal / not zero */

loc_005260EF: ;
    g_seh_ebp = ebp; sub_00526109(); return; /* tail jmp 0x00526109 */

}

/**
 * sub_0052611E
 * Original: 0x0052611E - 0x00526163 (69 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052611E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052611E: ;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = eax + eax * 2;
    edi = ecx + eax * 4 + 4;
    ecx = MEM32(esp + 0xC);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(edx);
    ecx++;
    if (CMP_GE(ecx, MEM32(eax))) goto loc_00526158; /* jge: greater or equal (signed >=) */

loc_0052613B: ;
    PUSH32(esp, ebx);
    ebx = ecx + ecx * 2;
    ebx = ebx << 2;

loc_00526142: ;
    eax = eax + ebx;
    esi = eax + 4;
    edi = eax + -8;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(edx);
    ecx++;
    ebx = ebx + 0xC;
    if (CMP_L(ecx, MEM32(eax))) goto loc_00526142; /* jl: less (signed <) */

loc_00526157: ;
    POP32(esp, ebx);

loc_00526158: ;
    edx = MEM32(edx);
    MEM32(edx) = MEM32(edx) - 1;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00526163
 * Original: 0x00526163 - 0x00526201 (158 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526163(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526163: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + -120;
    PUSH32(esp, 0); sub_00525A95(); /* call 0x00525A95 */

loc_00526179: ;
    ebx = MEM32(ebp + 0x78);
    esi = MEM32(ebp + 0x74);
    ecx = MEM32(esi);
    eax = ebx + ebx * 2;
    edi = ecx + eax * 4 + 4;
    edx = ebp + -120;
    PUSH32(esp, 0); sub_00525B36(); /* call 0x00525B36 */

loc_00526190: ;
    eax = MEM32(esi);
    ebx++;
    if (CMP_GE(ebx, MEM32(eax))) goto loc_005261F5; /* jge: greater or equal (signed >=) */

loc_00526197: ;
    ecx = ebx + ebx * 2;
    ecx = ecx << 2;
    MEM32(ebp + 0x68) = ecx;
    goto loc_005261A5;

loc_005261A2: ;
    ecx = MEM32(ebp + 0x68);

loc_005261A5: ;
    edi = ecx + eax + 4;
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00525C11(); /* call 0x00525C11 */

loc_005261B2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_005261D9; /* jne: not equal / not zero */

loc_005261B6: ;
    PUSH32(esp, edi);
    esi = esi + 4;
    PUSH32(esp, 0); sub_00523FF6(); /* call 0x00523FF6 */

loc_005261BF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_005261D6; /* jne: not equal / not zero */

loc_005261C3: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, 0); sub_0052620A(); /* call 0x0052620A */

loc_005261D2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00526201(); return; } /* jne: not equal / not zero */

loc_005261D6: ;
    esi = MEM32(ebp + 0x74);

loc_005261D9: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x68);
    edi = ecx + eax + 4;
    edx = ebp + -120;
    PUSH32(esp, 0); sub_00525B36(); /* call 0x00525B36 */

loc_005261EA: ;
    eax = MEM32(esi);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 0xC;
    ebx++;
    if (CMP_L(ebx, MEM32(eax))) goto loc_005261A2; /* jl: less (signed <) */

loc_005261F5: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x6C;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052620A
 * Original: 0x0052620A - 0x00526277 (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052620A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052620A: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    esp = esp - 0xE0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + -116;
    PUSH32(esp, 0); sub_00525A95(); /* call 0x00525A95 */

loc_0052621F: ;
    ecx = MEM32(ebp + 0x74);
    ecx = MEM32(ecx);
    eax = ebx + ebx * 2;
    edi = ecx + eax * 4 + 4;
    edx = ebp + -116;
    PUSH32(esp, 0); sub_00525B36(); /* call 0x00525B36 */

loc_00526233: ;
    esi = MEM32(ebp + 0x78);
    edi = ebp + -116;
    PUSH32(esp, 0); sub_00525AC2(); /* call 0x00525AC2 */

loc_0052623E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00526277(); return; } /* jne: not equal / not zero */

loc_00526242: ;
    eax = MEM32(ebp + 0x7C);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_GE(eax, ebx)) goto loc_0052626C; /* jge: greater or equal (signed >=) */

loc_0052624B: ;
    ecx = MEM32(ebp + 0x74);
    ecx = MEM32(ecx);
    eax = eax + eax * 2;
    edi = ecx + eax * 4 + 4;

loc_00526257: ;
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00525C11(); /* call 0x00525C11 */

loc_00526260: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00526277(); return; } /* jne: not equal / not zero */

loc_00526264: ;
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, ebx)) goto loc_00526257; /* jl: less (signed <) */

loc_0052626C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = ebp + 0x6C;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052627B
 * Original: 0x0052627B - 0x00526342 (199 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052627B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052627B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xEC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + -236;
    PUSH32(esp, 0); sub_00525A95(); /* call 0x00525A95 */

loc_00526292: ;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    esi = ebx + ebx * 2;
    esi = esi << 2;
    edi = esi + eax + 4;
    edx = ebp + -236;
    PUSH32(esp, 0); sub_00525B36(); /* call 0x00525B36 */

loc_005262AF: ;
    ecx = MEM32(ebp + 8);
    eax = ebx + 1;
    ebx = MEM32(ecx);
    (void)0; /* cmp eax, MEM32(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax, MEM32(ebx))) goto loc_00526339; /* jge: greater or equal (signed >=) */

loc_005262BE: ;
    eax = eax + eax * 2;
    eax = eax << 2;
    MEM32(ebp + -8) = eax;
    goto loc_005262CC;

loc_005262C9: ;
    eax = MEM32(ebp + -8);

loc_005262CC: ;
    edi = eax + ebx + 4;
    eax = ebp + -236;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edi;
    PUSH32(esp, 0); sub_00525C11(); /* call 0x00525C11 */

loc_005262DF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052630F; /* jne: not equal / not zero */

loc_005262E3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + -12);
    edi = ebx + esi + 4;
    PUSH32(esp, 0); sub_00527649(); /* call 0x00527649 */

loc_005262F2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052630F; /* je: equal / zero */

loc_005262F6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = MEM32(ebp + -4);
    eax = ebp + -236;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0052620A(); /* call 0x0052620A */

loc_0052630B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00526342(); return; } /* jne: not equal / not zero */

loc_0052630F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -8);
    edi = ecx + eax + 4;
    edx = ebp + -236;
    PUSH32(esp, 0); sub_00525B36(); /* call 0x00525B36 */

loc_00526326: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = MEM32(eax);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0xC;
    if (CMP_L(eax, MEM32(ebx))) goto loc_005262C9; /* jl: less (signed <) */

loc_00526339: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0052634B
 * Original: 0x0052634B - 0x00526374 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052634B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052634B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00526374(); /* call 0x00526374 */

loc_0052635B: ;
    if (TEST_S(eax, eax)) goto loc_00526370; /* jl: less (signed <) */

loc_0052635F: ;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_00526370; /* je: equal / zero */

loc_00526365: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_005263FF(); /* call 0x005263FF */

loc_00526370: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00526374
 * Original: 0x00526374 - 0x005263FF (139 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526374(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526374: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(eax);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    MEM32(ebp + -12) = ecx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_005263F1; /* jle: less or equal (signed <=) */

loc_0052638B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = eax + 4;
    ebx = 0xF00000;
    edi = 0x100000;
    PUSH32(esp, esi);

loc_0052639B: ;
    esi = MEM32(edx + 8);
    ecx = esi;
    ecx = ecx >> 0x19;
    ecx = ecx & 0xF;
    if ((ecx != 0)) goto loc_005263BF; /* jne: not equal / not zero */

loc_005263A8: ;
    if (TEST_Z(esi, 0xE0000000u)) goto loc_005263BF; /* je: equal / zero */

loc_005263B0: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, 0xF0000)) goto loc_005263BF; /* je: equal / zero */

loc_005263B9: ;
    eax = eax & ebx;
    if (CMP_NE(eax, edi)) goto loc_005263EA; /* jne: not equal / not zero */

loc_005263BF: ;
    if (TEST_Z(ecx, ecx)) goto loc_005263DA; /* je: equal / zero */

loc_005263C3: ;
    if (TEST_NZ(esi, 0xE0000000u)) goto loc_005263DA; /* jne: not equal / not zero */

loc_005263CB: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, 0xF000000)) goto loc_005263DA; /* je: equal / zero */

loc_005263D4: ;
    eax = eax & ebx;
    if (CMP_EQ(eax, edi)) goto loc_005263EA; /* je: equal / zero */

loc_005263DA: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    eax = MEM32(ebp + -8);
    edx = edx + 0xC;
    if (CMP_L(eax, MEM32(ebp + -12))) goto loc_0052639B; /* jl: less (signed <) */

loc_005263E8: ;
    goto loc_005263EE;

loc_005263EA: ;
    MEM8(ebp + -1) = 1;

loc_005263EE: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005263F1: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM8(eax) = LO8(ecx);
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005263FF
 * Original: 0x005263FF - 0x00526443 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005263FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005263FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = eax;
    MEM32(ebx + 0x14) = esi;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = edi;
    MEM16(ebx + 8) = LO16(edi);
    MEM32(ebx + 0xC) = edi;
    MEM16(ebx + 0x10) = LO16(edi);
    MEM8(ebx + 0x12) = 0;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, 0x24870000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00526433: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_NE(eax, edi)) { sub_00526443(); return; } /* jne: not equal / not zero */

loc_00526439: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_005264EF(); return; /* tail jmp 0x005264EF */

}

/**
 * sub_0052652F
 * Original: 0x0052652F - 0x00526722 (499 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052652F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052652F: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    esp = esp - 0x9C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebp + -36;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x14);
    MEM16(esi + 8) = 1;
    MEM16(esi + 0x10) = 1;
    eax = ZX16(MEM16(eax));
    edi = 0; /* xor self */
    (void)0; /* cmp LO16(eax), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0x5C) = eax;
    MEM32(ebp + 0x74) = edi;
    if (CMP_BE(LO16(eax), LO16(edi))) goto loc_00526718; /* jbe: below or equal (unsigned <=) */

loc_0052656B: ;
    MEM32(ebp + 0x6C) = edi;
    MEM32(ebp + 0x70) = edi;
    PUSH32(esp, ebx);

loc_00526572: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(ebp + 0x70);
    ebx = ecx + eax + 4;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00527C87(); /* call 0x00527C87 */

loc_00526586: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = MEM32(ebx + 8);
    ecx = MEM32(esi);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 4;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    eax = eax >> 0xA;
    eax = eax & 0xFFFFFF03u;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebx + 8));
    ecx = ecx >> 0x1C;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x60));
    SET_LO8(eax, LO8(eax) & 0xF);
    ecx = ebp + -36;
    PUSH32(esp, 0); sub_00526722(); /* call 0x00526722 */

loc_005265DB: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    ecx = MEM32(ebx + 4);
    eax = MEM32(esi);
    eax = edi + eax + 8;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 0x13;
    eax = eax & 0xFFFFFF03u;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 0x15;
    eax = eax & 0xFFFFFF03u;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 0x17;
    eax = eax & 0xFFFFFF03u;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 0x19;
    eax = eax & 0xFFFFFF03u;
    PUSH32(esp, eax);
    eax = ecx;
    ecx = ecx >> 0xD;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x61));
    eax = eax >> 0xF;
    SET_LO8(eax, LO8(eax) & 0xF);
    ecx = ebp + -36;
    PUSH32(esp, 0); sub_00526722(); /* call 0x00526722 */

loc_00526630: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    ecx = MEM32(esi);
    eax = MEM32(ebx + 4);
    ecx = edi + ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 4;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    eax = eax >> 0xA;
    eax = eax & 0xFFFFFF03u;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebx + 4));
    ecx = ecx >> 0x1C;
    ecx = ecx & 0xFFFFFF03u;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x62));
    SET_LO8(eax, LO8(eax) & 0xF);
    ecx = ebp + -36;
    PUSH32(esp, 0); sub_00526722(); /* call 0x00526722 */

loc_00526686: ;
    ecx = MEM32(ebx);
    eax = ecx;
    eax = eax >> 0x18;
    if (TEST_Z(LO8(eax), 0xF)) goto loc_005266BA; /* je: equal / zero */

loc_00526691: ;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    edx = edi + edx + 0x18;
    edi = MEM32(ebp + 0x74);
    ecx = ecx >> 0x14;
    PUSH32(esp, edx);
    ecx = ecx & 0xFFFFFF0Fu;
    PUSH32(esp, ecx);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    ecx = ebp + -36;
    edx = esi;
    PUSH32(esp, 0); sub_005269A8(); /* call 0x005269A8 */

loc_005266B7: ;
    edi = MEM32(ebp + 0x6C);

loc_005266BA: ;
    ecx = MEM32(ebx);
    eax = ecx;
    eax = eax >> 0x10;
    if (TEST_Z(LO8(eax), 0xF)) goto loc_005266FC; /* je: equal / zero */

loc_005266C5: ;
    if (TEST_Z(MEM8(ebx + 0xB), 0x1E)) goto loc_005266D1; /* je: equal / zero */

loc_005266CB: ;
    MEM8(ebp + 0x68) = 1;
    goto loc_005266DA;

loc_005266D1: ;
    ecx = ecx >> 0x14;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    MEM8(ebp + 0x68) = LO8(ecx);

loc_005266DA: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    ecx = edi + ecx + 0x1A;
    edi = MEM32(ebp + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    ecx = ebp + -36;
    edx = esi;
    PUSH32(esp, 0); sub_005269A8(); /* call 0x005269A8 */

loc_005266F9: ;
    edi = MEM32(ebp + 0x6C);

loc_005266FC: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    SET_LO16(eax, MEM16(ebp + 0x74));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 0xC;
    edi = edi + 0x1C;
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x5C) - flags set for next jcc */
    MEM32(ebp + 0x6C) = edi;
    if (CMP_B(LO16(eax), MEM16(ebp + 0x5C))) goto loc_00526572; /* jb: below (unsigned <) */

loc_00526717: ;
    POP32(esp, ebx);

loc_00526718: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    ebp = ebp + 0x78;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00526722
 * Original: 0x00526722 - 0x005269A8 (646 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526722(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526722: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM8(ebp + 8), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ebp + 0x24));
    if (CMP_EQ(MEM8(ebp + 8), 0)) goto loc_005269A2; /* je: equal / zero */

loc_00526738: ;
    if (CMP_NE(MEM8(ebp + 0xC), 1)) goto loc_005269A2; /* jne: not equal / not zero */

loc_00526742: ;
    eax = ZX8(LO8(eax));
    eax = ecx + eax * 8;
    MEM32(ebp + 0x24) = eax;
    eax = ZX8(MEM8(ebp + 8));
    ecx = 0; /* xor self */
    MEM32(ebp + 0xC) = eax;

loc_00526754: ;
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    if (TEST_Z(edx, eax)) goto loc_005267BE; /* je: equal / zero */

loc_00526760: ;
    eax = ecx;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00526782; /* je: equal / zero */

loc_00526767: ;
    eax--;
    if ((eax == 0)) goto loc_0052677C; /* je: equal / zero */

loc_0052676A: ;
    eax--;
    if ((eax == 0)) goto loc_00526776; /* je: equal / zero */

loc_0052676D: ;
    eax--;
    if ((eax != 0)) goto loc_00526789; /* jne: not equal / not zero */

loc_00526770: ;
    eax = ZX8(MEM8(ebp + 0x10));
    goto loc_00526786;

loc_00526776: ;
    eax = ZX8(MEM8(ebp + 0x14));
    goto loc_00526786;

loc_0052677C: ;
    eax = ZX8(MEM8(ebp + 0x18));
    goto loc_00526786;

loc_00526782: ;
    eax = ZX8(MEM8(ebp + 0x1C));

loc_00526786: ;
    MEM32(ebp + 8) = eax;

loc_00526789: ;
    edx = MEM32(ebp + 0x24);
    ebx = MEM32(esi + 4);
    PUSH32(esp, 3);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    SET_LO16(edx, MEM16(edx + eax * 2));
    eax = ZX16(LO16(edx));
    eax = eax + eax * 4;
    eax = ebx + eax * 2;
    MEM16(eax + 2) = LO16(edi);
    eax = ZX16(MEM16(eax + 6));
    ebx = MEM32(esi + 0xC);
    eax = eax + eax * 8;
    MEM16(ebx + eax * 2 + 2) = LO16(edi);
    ebx = MEM32(ebp + 0x20);
    MEM16(ebx + ecx * 2) = LO16(edx);
    goto loc_005267C3;

loc_005267BE: ;
    MEM16(ebx + ecx * 2) = MEM16(ebx + ecx * 2) & 0;

loc_005267C3: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00526754; /* jl: less (signed <) */

loc_005267C9: ;
    edx = 0; /* xor self */
    MEM32(ebp + 0xC) = edx;
    ecx = 0; /* xor self */

loc_005267D0: ;
    SET_LO16(eax, MEM16(ebx + ecx * 2));
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_005267F6; /* je: equal / zero */

loc_005267D9: ;
    (void)0; /* cmp MEM16(ebp + 0xC), LO16(edx) - flags set for next jcc */
    edi = MEM32(esi + 4);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(edi + eax * 2 + 6));
    if (CMP_EQ(MEM16(ebp + 0xC), LO16(edx))) goto loc_005267F3; /* je: equal / zero */

loc_005267ED: ;
    if (CMP_AE(LO16(eax), MEM16(ebp + 0xC))) goto loc_005267F6; /* jae: above or equal (unsigned >=) */

loc_005267F3: ;
    MEM32(ebp + 0xC) = eax;

loc_005267F6: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_005267D0; /* jl: less (signed <) */

loc_005267FC: ;
    MEM32(ebp + 0x10) = edx;

loc_005267FF: ;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebx + eax * 2));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00526995; /* je: equal / zero */

loc_0052680F: ;
    ecx = MEM32(esi + 4);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    SET_LO16(edx, MEM16(ecx + eax * 2 + 6));
    if (CMP_EQ(MEM16(ebp + 0xC), LO16(edx))) goto loc_00526995; /* je: equal / zero */

loc_00526827: ;
    ecx = MEM32(esi + 0xC);
    eax = ZX16(MEM16(ebp + 0xC));
    edx = ZX16(LO16(edx));
    edx = edx + edx * 8;
    edi = ecx + edx * 2;
    (void)0; /* cmp MEM16(edi), 0 - flags set for next jcc */
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    if (CMP_EQ(MEM16(edi), 0)) goto loc_00526995; /* je: equal / zero */

loc_00526847: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 4));
    MEM8(ebp + 0xB) = 1;
    ebx = 0; /* xor self */
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x14) = edx;

loc_0052685F: ;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_005268BB; /* jne: not equal / not zero */

loc_00526864: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_005268F1; /* je: equal / zero */

loc_0052686D: ;
    if (CMP_EQ(MEM8(ebp + 0xB), 0)) goto loc_00526877; /* je: equal / zero */

loc_00526873: ;
    MEM16(eax + 4) = LO16(edx);

loc_00526877: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0052688A; /* je: equal / zero */

loc_0052687C: ;
    ecx = ZX16(LO16(ebx));
    ebx = MEM32(esi + 4);
    ecx = ecx + ecx * 4;
    MEM16(ebx + ecx * 2 + 8) = LO16(edx);

loc_0052688A: ;
    SET_LO16(ebx, MEM16(ebp + 0xC));
    ecx = ZX16(LO16(edx));
    edx = MEM32(esi + 4);
    ecx = ecx + ecx * 4;
    ecx = ecx << 1;
    MEM16(ecx + edx + 6) = LO16(ebx);
    edx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x1C) = edx;
    edx = MEM32(esi + 4);
    edx = ZX16(MEM16(ecx + edx + 8));
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x14) = edx;

loc_005268B2: ;
    ebx = MEM32(ebp + 0x1C);
    MEM8(ebp + 0xB) = 0;
    goto loc_0052685F;

loc_005268BB: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_005268C5; /* je: equal / zero */

loc_005268C0: ;
    if (CMP_B(LO16(edx), LO16(ecx))) goto loc_0052686D; /* jb: below (unsigned <) */

loc_005268C5: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_005268DB; /* je: equal / zero */

loc_005268CA: ;
    edx = ZX16(LO16(ebx));
    ebx = MEM32(esi + 4);
    edx = edx + edx * 4;
    MEM16(ebx + edx * 2 + 8) = LO16(ecx);
    edx = MEM32(ebp + 0x14);

loc_005268DB: ;
    ebx = MEM32(esi + 4);
    MEM32(ebp + 0x1C) = ecx;
    ecx = ZX16(LO16(ecx));
    ecx = ecx + ecx * 4;
    ecx = ZX16(MEM16(ebx + ecx * 2 + 8));
    MEM32(ebp + 0x18) = ecx;
    goto loc_005268B2;

loc_005268F1: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_00526905; /* je: equal / zero */

loc_005268F6: ;
    edx = MEM32(esi + 4);
    ecx = ZX16(LO16(ebx));
    ecx = ecx + ecx * 4;
    MEM16(edx + ecx * 2 + 8) = MEM16(edx + ecx * 2 + 8) & 0;

loc_00526905: ;
    SET_LO16(edx, MEM16(edi));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    if (CMP_B(LO16(ecx), LO16(edx))) goto loc_00526914; /* jb: below (unsigned <) */

loc_00526912: ;
    ecx = edx;

loc_00526914: ;
    MEM16(eax) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 2));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_A(LO16(ecx), LO16(edx))) goto loc_00526928; /* ja: above (unsigned >) */

loc_00526926: ;
    ecx = edx;

loc_00526928: ;
    MEM16(eax + 2) = LO16(ecx);
    SET_LO8(ecx, MEM8(edi + 6));
    MEM8(eax + 6) = MEM8(eax + 6) | LO8(ecx);
    if (CMP_NE(MEM8(eax + 8), 0)) goto loc_00526942; /* jne: not equal / not zero */

loc_00526938: ;
    if (CMP_NE(MEM8(edi + 8), 0)) goto loc_00526942; /* jne: not equal / not zero */

loc_0052693E: ;
    ecx = 0; /* xor self */
    goto loc_00526945;

loc_00526942: ;
    ecx = 0; /* xor self */
    ecx++;

loc_00526945: ;
    (void)0; /* cmp MEM8(eax + 9), 0 - flags set for next jcc */
    MEM8(eax + 8) = LO8(ecx);
    if (CMP_NE(MEM8(eax + 9), 0)) goto loc_00526958; /* jne: not equal / not zero */

loc_0052694E: ;
    if (CMP_NE(MEM8(edi + 9), 0)) goto loc_00526958; /* jne: not equal / not zero */

loc_00526954: ;
    ecx = 0; /* xor self */
    goto loc_0052695B;

loc_00526958: ;
    ecx = 0; /* xor self */
    ecx++;

loc_0052695B: ;
    (void)0; /* cmp MEM8(eax + 0xA), 0 - flags set for next jcc */
    MEM8(eax + 9) = LO8(ecx);
    if (CMP_NE(MEM8(eax + 0xA), 0)) goto loc_0052696E; /* jne: not equal / not zero */

loc_00526964: ;
    if (CMP_NE(MEM8(edi + 0xA), 0)) goto loc_0052696E; /* jne: not equal / not zero */

loc_0052696A: ;
    ecx = 0; /* xor self */
    goto loc_00526971;

loc_0052696E: ;
    ecx = 0; /* xor self */
    ecx++;

loc_00526971: ;
    (void)0; /* cmp MEM8(eax + 0xB), 0 - flags set for next jcc */
    MEM8(eax + 0xA) = LO8(ecx);
    if (CMP_NE(MEM8(eax + 0xB), 0)) goto loc_00526984; /* jne: not equal / not zero */

loc_0052697A: ;
    if (CMP_NE(MEM8(edi + 0xB), 0)) goto loc_00526984; /* jne: not equal / not zero */

loc_00526980: ;
    ecx = 0; /* xor self */
    goto loc_00526987;

loc_00526984: ;
    ecx = 0; /* xor self */
    ecx++;

loc_00526987: ;
    ebx = MEM32(ebp + 0x20);
    MEM8(eax + 0xB) = LO8(ecx);
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */

loc_00526995: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    if (CMP_L(MEM32(ebp + 0x10), 4)) goto loc_005267FF; /* jl: less (signed <) */

loc_005269A2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_005269A8
 * Original: 0x005269A8 - 0x00526A50 (168 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005269A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005269A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edx + 8));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = esi + 1;
    MEM16(edx + 8) = LO16(eax);
    eax = ZX8(MEM8(ebp + 0xC));
    eax = ecx + eax * 8;

loc_005269C6: ;
    ecx = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    ebx++;
    ebx = ebx << LO8(ecx);
    ecx = ZX8(MEM8(ebp + 8));
    if (TEST_Z(ecx, ebx)) goto loc_005269DD; /* je: equal / zero */

loc_005269D6: ;
    ecx = MEM32(ebp + -4);
    MEM16(eax + ecx * 2) = LO16(esi);

loc_005269DD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_L(MEM32(ebp + -4), 4)) goto loc_005269C6; /* jl: less (signed <) */

loc_005269E6: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax + 1;
    MEM16(edx + 0x10) = LO16(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM16(ecx) = LO16(esi);
    ebx = MEM32(edx + 4);
    ecx = ZX16(LO16(esi));
    ecx = ecx + ecx * 4;
    ecx = ebx + ecx * 2;
    SET_LO8(ebx, MEM8(ebp + 0xC));
    MEM8(ecx + 4) = LO8(ebx);
    SET_LO8(ebx, MEM8(ebp + 8));
    MEM8(ecx + 5) = LO8(ebx);
    MEM16(ecx + 6) = LO16(eax);
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 2) = LO16(edi);
    ebx = MEM32(edx + 0xC);
    ecx = ZX16(LO16(eax));
    ecx = ecx + ecx * 8;
    ecx = ebx + ecx * 2;
    SET_LO8(ebx, MEM8(ebp + 8));
    MEM8(ecx + 6) = LO8(ebx);
    SET_LO8(ebx, MEM8(ebp + 0xC));
    PUSH32(esp, eax);
    eax = edi;
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 2) = LO16(edi);
    MEM16(ecx + 4) = LO16(esi);
    MEM8(ecx + 7) = LO8(ebx);
    PUSH32(esp, 0); sub_00526A50(); /* call 0x00526A50 */

loc_00526A4A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00526A50
 * Original: 0x00526A50 - 0x00526AAC (92 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00526A50: ;
    ecx = MEM32(edx + 0x14);
    edx = MEM32(edx + 0xC);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 2;
    ecx = ecx + eax * 4 + 4;
    eax = ZX16(MEM16(esp + 4));
    eax = eax + eax * 8;
    edx = edx + eax * 2;
    eax = MEM32(ecx + 8);
    eax = eax >> 0x1D;
    eax = eax & 7;
    if (CMP_NE(MEM8(esp + 8), 0)) goto loc_00526A96; /* jne: not equal / not zero */

loc_00526A7B: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00526AA5; /* je: equal / zero */

loc_00526A80: ;
    if (TEST_Z(MEM8(ecx + 2), 0xF)) goto loc_00526AA5; /* je: equal / zero */

loc_00526A86: ;
    MEM8(edx + 8) = 1;
    if (TEST_Z(MEM8(ecx + 0xB), 0x1E)) goto loc_00526AA5; /* je: equal / zero */

loc_00526A90: ;
    MEM8(edx + 9) = 1;
    goto loc_00526AA5;

loc_00526A96: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00526AA5; /* je: equal / zero */

loc_00526A9B: ;
    if (TEST_Z(MEM8(ecx + 3), 0xF)) goto loc_00526AA5; /* je: equal / zero */

loc_00526AA1: ;
    MEM8(edx + 0xA) = 1;

loc_00526AA5: ;
    MEM8(edx + 0xB) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00526AAC
 * Original: 0x00526AAC - 0x00526B43 (151 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526AAC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526AAC: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    esp = esp - 0x84;
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -12;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x14);
    edx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(MEM32(eax), edx)) goto loc_00526B3B; /* jle: less or equal (signed <=) */

loc_00526ACD: ;
    PUSH32(esp, esi);

loc_00526ACE: ;
    if (TEST_S(edx, edx)) goto loc_00526B3A; /* jl: less (signed <) */

loc_00526AD2: ;
    esi = ZX16(LO16(edi));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + MEM32(ebx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x18));
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00526B43(); /* call 0x00526B43 */

loc_00526AED: ;
    edx = eax;
    if (TEST_S(edx, edx)) goto loc_00526B2F; /* jl: less (signed <) */

loc_00526AF3: ;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A));
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00526B43(); /* call 0x00526B43 */

loc_00526B06: ;
    edx = eax;
    if (TEST_S(edx, edx)) goto loc_00526B2F; /* jl: less (signed <) */

loc_00526B0C: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;

loc_00526B10: ;
    if (TEST_S(edx, edx)) goto loc_00526B2F; /* jl: less (signed <) */

loc_00526B14: ;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00526D7B(); /* call 0x00526D7B */

loc_00526B21: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    esi = esi + 8;
    (void)0; /* cmp MEM32(ebp + 0x74), 3 - flags set for next jcc */
    edx = eax;
    if (CMP_L(MEM32(ebp + 0x74), 3)) goto loc_00526B10; /* jl: less (signed <) */

loc_00526B2F: ;
    ecx = MEM32(ebx + 0x14);
    edi++;
    eax = ZX16(LO16(edi));
    if (CMP_L(eax, MEM32(ecx))) goto loc_00526ACE; /* jl: less (signed <) */

loc_00526B3A: ;
    POP32(esp, esi);

loc_00526B3B: ;
    eax = edx;
    POP32(esp, edi);
    ebp = ebp + 0x78;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00526B43
 * Original: 0x00526B43 - 0x00526BC2 (127 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526B43(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526B43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM16(ebp + 8), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM16(ebp + 8), 0)) { sub_00526BC2(); return; } /* je: equal / zero */

loc_00526B52: ;
    eax = ZX16(MEM16(ebp + 8));
    ecx = MEM32(esi + 4);
    eax = eax + eax * 4;
    SET_LO16(ebx, MEM16(ecx + eax * 2 + 6));
    ecx = MEM32(esi + 0xC);
    eax = ZX16(LO16(ebx));
    eax = eax + eax * 8;
    edi = ecx + eax * 2;
    SET_LO16(eax, MEM16(edi));
    if (CMP_NE(LO16(eax), MEM16(ebp + 0x10))) { sub_00526BC2(); return; } /* jne: not equal / not zero */

loc_00526B76: ;
    if (CMP_EQ(MEM8(edi + 8), 0)) goto loc_00526BB1; /* je: equal / zero */

loc_00526B7C: ;
    if (CMP_NE(MEM8(edi + 0xA), 0)) goto loc_00526BB1; /* jne: not equal / not zero */

loc_00526B82: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00526BCB(); /* call 0x00526BCB */

loc_00526B8E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00526BA0; /* je: equal / zero */

loc_00526B92: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00526C45(); /* call 0x00526C45 */

loc_00526B9E: ;
    g_seh_ebp = ebp; sub_00526BC4(); return; /* tail jmp 0x00526BC4 */

loc_00526BA0: ;
    if (CMP_EQ(MEM8(edi + 9), 0)) goto loc_00526BAD; /* je: equal / zero */

loc_00526BA6: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00526BC4(); return; /* tail jmp 0x00526BC4 */

loc_00526BAD: ;
    PUSH32(esp, 0);
    goto loc_00526BB7;

loc_00526BB1: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0xA));
    PUSH32(esp, eax);

loc_00526BB7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00526CFB(); /* call 0x00526CFB */

loc_00526BC0: ;
    g_seh_ebp = ebp; sub_00526BC4(); return; /* tail jmp 0x00526BC4 */

}

/**
 * sub_00526BCB
 * Original: 0x00526BCB - 0x00526C14 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526BCB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526BCB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax = ZX16(MEM16(ebp + 0xC));
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    SET_LO16(edx, ZX8(MEM8(eax + 6)));
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM8(eax + 0xB), LO8(ebx) - flags set for next jcc */
    eax = ZX16(LO16(edx));
    if (CMP_EQ(MEM8(eax + 0xB), LO8(ebx))) { sub_00526C14(); return; } /* je: equal / zero */

loc_00526BF7: ;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_00526C06; /* je: equal / zero */

loc_00526C00: ;
    if (CMP_NE(MEM16(esi + ecx * 2), LO16(ebx))) goto loc_00526C10; /* jne: not equal / not zero */

loc_00526C06: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00526BF7; /* jl: less (signed <) */

loc_00526C0C: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00526C3F(); return; /* tail jmp 0x00526C3F */

loc_00526C10: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_00526C3F(); return; /* tail jmp 0x00526C3F */

}

/**
 * sub_00526C45
 * Original: 0x00526C45 - 0x00526C9C (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526C45(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526C45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ZX8(MEM8(ebp + 0xC));
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(ebp + 0x10));
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    eax = ZX16(LO16(ebx));
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    SET_LO16(edx, ZX8(MEM8(eax + 6)));
    PUSH32(esp, edi);
    edi = ZX16(LO16(edx));
    ecx = 0; /* xor self */
    MEM32(ebp + 8) = edi;

loc_00526C72: ;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    if (TEST_Z(edi, edx)) goto loc_00526C94; /* je: equal / zero */

loc_00526C7B: ;
    if (CMP_NE(MEM16(esi + ecx * 2), 0)) { sub_00526C9C(); return; } /* jne: not equal / not zero */

loc_00526C82: ;
    SET_LO8(edx, MEM8(ebp + 0xC));
    MEM16(esi + ecx * 2) = LO16(ebx);
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, 3);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(ecx + eax + 0xD) = LO8(edx);

loc_00526C94: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00526C72; /* jl: less (signed <) */

loc_00526C9A: ;
    g_seh_ebp = ebp; sub_00526CF2(); return; /* tail jmp 0x00526CF2 */

}

/**
 * sub_00526CFB
 * Original: 0x00526CFB - 0x00526D70 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526CFB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526CFB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM8(esi + 0x12) = MEM8(esi + 0x12) + 1;
    SET_LO8(eax, MEM8(esi + 0x12));
    if (CMP_B(LO8(eax), 0xB)) goto loc_00526D0E; /* jb: below (unsigned <) */

loc_00526D09: ;
    SET_LO8(eax, LO8(eax) - 0xB);
    MEM8(esi + 0x12) = LO8(eax);

loc_00526D0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0x12));
    ebx = 0; /* xor self */

loc_00526D16: ;
    eax = edi + ebx;
    if (CMP_B(eax, 0xB)) goto loc_00526D22; /* jb: below (unsigned <) */

loc_00526D1E: ;
    eax = edi + ebx + -11;

loc_00526D22: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(eax, MEM8(eax + 0x534304));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, 0); sub_00526BCB(); /* call 0x00526BCB */

loc_00526D37: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00526D68; /* jne: not equal / not zero */

loc_00526D3B: ;
    ebx++;
    if (CMP_B(ebx, 0xB)) goto loc_00526D16; /* jb: below (unsigned <) */

loc_00526D41: ;
    if (CMP_NE(MEM8(ebp + 0x10), LO8(eax))) { sub_00526D70(); return; } /* jne: not equal / not zero */

loc_00526D46: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, 0); sub_00526BCB(); /* call 0x00526BCB */

loc_00526D54: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00526D70(); return; } /* je: equal / zero */

loc_00526D58: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);

loc_00526D5D: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00526C45(); /* call 0x00526C45 */

loc_00526D66: ;
    g_seh_ebp = ebp; sub_00526D75(); return; /* tail jmp 0x00526D75 */

loc_00526D68: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    goto loc_00526D5D;

}

/**
 * sub_00526D7B
 * Original: 0x00526D7B - 0x00526DFA (127 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526D7B(void)
{
    int _flags = 0; /* fallback flag var */

loc_00526D7B: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    esi = eax;
    edx = 0; /* xor self */

loc_00526D82: ;
    eax = MEM32(esp + 8);
    SET_LO16(eax, MEM16(eax + edx * 2));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00526D9D; /* je: equal / zero */

loc_00526D8F: ;
    ecx = MEM32(esi + 4);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    SET_LO16(ecx, MEM16(ecx + eax * 2 + 6));

loc_00526D9D: ;
    edx++;
    if (CMP_L(edx, 4)) goto loc_00526D82; /* jl: less (signed <) */

loc_00526DA3: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00526DF4; /* je: equal / zero */

loc_00526DA8: ;
    eax = ZX16(LO16(ecx));
    ecx = MEM32(esi + 0xC);
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_NE(LO16(ecx), MEM16(esp + 0x10))) goto loc_00526DF4; /* jne: not equal / not zero */

loc_00526DBF: ;
    ecx = ZX8(MEM8(eax + 0xC));
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 6));
    edx = edx + ecx * 8;
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    esi = ZX8(LO8(ebx));

loc_00526DD4: ;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    if (TEST_Z(esi, edi)) goto loc_00526DEC; /* je: equal / zero */

loc_00526DDD: ;
    edi = ZX8(MEM8(ecx + eax + 0xD));
    PUSH32(esp, 3);
    POP32(esp, ebx);
    ebx = ebx - edi;
    MEM16(edx + ebx * 2) = MEM16(edx + ebx * 2) & 0;

loc_00526DEC: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00526DD4; /* jl: less (signed <) */

loc_00526DF2: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00526DF4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00526DFA
 * Original: 0x00526DFA - 0x00526F6A (368 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526DFA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00526DFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(edi + 0x14);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax), ecx - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_LE(MEM32(eax), ecx)) goto loc_00526F66; /* jle: less or equal (signed <=) */

loc_00526E10: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, esi);

loc_00526E18: ;
    ebx = MEM32(edi);
    ecx = MEM32(ebp + -8);
    ebx = ebx + MEM32(ebp + -12);
    esi = ecx + eax + 4;
    edx = 0; /* xor self */

loc_00526E26: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebx + edx * 8;

loc_00526E2D: ;
    SET_LO16(ecx, MEM16(eax));
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00526E42; /* jne: not equal / not zero */

loc_00526E35: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax++;
    eax++;
    if (CMP_L(MEM32(ebp + -4), 4)) goto loc_00526E2D; /* jl: less (signed <) */

loc_00526E40: ;
    goto loc_00526E93;

loc_00526E42: ;
    eax = ZX16(LO16(ecx));
    ecx = MEM32(edi + 4);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(ecx + eax * 2 + 6));
    ecx = MEM32(edi + 0xC);
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    ecx = edx;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00526E86; /* je: equal / zero */

loc_00526E60: ;
    ecx--;
    if ((ecx == 0)) goto loc_00526E75; /* je: equal / zero */

loc_00526E63: ;
    ecx--;
    if ((ecx != 0)) goto loc_00526E93; /* jne: not equal / not zero */

loc_00526E66: ;
    eax = ZX8(MEM8(eax + 0xC));
    eax = eax ^ MEM32(esi + 4);
    eax = eax & 0xF;

loc_00526E70: ;
    MEM32(esi + 4) = MEM32(esi + 4) ^ eax;
    goto loc_00526E93;

loc_00526E75: ;
    eax = ZX8(MEM8(eax + 0xC));
    eax = eax << 0xF;
    eax = eax ^ MEM32(esi + 4);
    eax = eax & 0x78000;
    goto loc_00526E70;

loc_00526E86: ;
    eax = ZX8(MEM8(eax + 0xC));
    eax = eax ^ MEM32(esi + 8);
    eax = eax & 0xF;
    MEM32(esi + 8) = MEM32(esi + 8) ^ eax;

loc_00526E93: ;
    edx++;
    if (CMP_L(edx, 3)) goto loc_00526E26; /* jl: less (signed <) */

loc_00526E99: ;
    SET_LO16(eax, MEM16(ebx + 0x18));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00526EF0; /* je: equal / zero */

loc_00526EA2: ;
    ecx = MEM32(edi + 4);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(ecx + eax * 2 + 6));
    ecx = MEM32(edi + 0xC);
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    ecx = ZX8(MEM8(eax + 0xC));
    ecx = ecx << 0x14;
    ecx = ecx ^ MEM32(esi);
    PUSH32(esp, eax);
    ecx = ecx & 0xF00000;
    MEM32(esi) = MEM32(esi) ^ ecx;
    ecx = MEM32(esi);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xFFFFFF0Fu;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00526F6A(); /* call 0x00526F6A */

loc_00526EDC: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esi);
    ecx = ecx << 0x18;
    ecx = ecx ^ eax;
    ecx = ecx & 0xF000000;
    ecx = ecx ^ eax;
    MEM32(esi) = ecx;

loc_00526EF0: ;
    SET_LO16(ebx, MEM16(ebx + 0x1A));
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_00526F4B; /* je: equal / zero */

loc_00526EF9: ;
    (void)0; /* test MEM8(esi + 0xB), 0x1E - flags set for next jcc */
    ecx = MEM32(edi + 4);
    eax = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(ecx + eax * 2 + 6));
    ecx = MEM32(edi + 0xC);
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    if (TEST_NZ(MEM8(esi + 0xB), 0x1E)) goto loc_00526F27; /* jne: not equal / not zero */

loc_00526F16: ;
    ecx = ZX8(MEM8(eax + 0xC));
    ecx = ecx << 0x14;
    ecx = ecx ^ MEM32(esi);
    ecx = ecx & 0xF00000;
    MEM32(esi) = MEM32(esi) ^ ecx;

loc_00526F27: ;
    ebx = MEM32(esi);
    PUSH32(esp, eax);
    eax = ebx;
    eax = eax >> 0x10;
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00526F6A(); /* call 0x00526F6A */

loc_00526F3A: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x10;
    eax = eax ^ ebx;
    eax = eax & 0xF0000;
    eax = eax ^ ebx;
    MEM32(esi) = eax;

loc_00526F4B: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0xC;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x1C;
    if (CMP_L(ecx, MEM32(eax))) goto loc_00526E18; /* jl: less (signed <) */

loc_00526F64: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00526F66: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00526F6A
 * Original: 0x00526F6A - 0x00526FA2 (56 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526F6A(void)
{
    int _flags = 0; /* fallback flag var */

loc_00526F6A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, edi);
    edx = 0; /* xor self */

loc_00526F76: ;
    edi = 0; /* xor self */
    edi++;
    ecx = edx;
    edi = edi << LO8(ecx);
    if (TEST_Z(esi, edi)) goto loc_00526F96; /* je: equal / zero */

loc_00526F81: ;
    ecx = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(edx + ecx + 0xD));
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - ebx;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(ebx));

loc_00526F96: ;
    edx++;
    if (CMP_L(edx, 4)) goto loc_00526F76; /* jl: less (signed <) */

loc_00526F9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00526FA2
 * Original: 0x00526FA2 - 0x00527020 (126 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526FA2(void)
{
    uint32_t ebp;

loc_00526FA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    esi = esi + 4;
    edx = MEM32(esi);
    eax = edx;
    eax = eax & 3;
    eax = eax << 4;
    ebx = edx;
    ebx = ebx & 0xC;
    ebx = ebx << 4;
    eax = eax & 0x30;
    MEM32(ebp + -4) = ebx;
    eax = eax | MEM32(ebp + -4);
    esi = esi + 4;
    edi = MEM32(esi);
    esi = MEM32(esi + 4);
    eax = eax & 0xF0;
    edx = edx & 0xFFFFFFF0u;
    ebx = edi;
    ebx = ebx & 0xFFFFFFF;
    MEM32(ebp + -8) = esi;
    edx = edx << 4;
    eax = eax | edx;
    esi = esi >> 0x1E;
    edi = edi >> 0x1C;
    eax = eax | edi;
    ebx = ebx << 2;
    ebx = ebx | esi;
    esi = MEM32(ecx + 4);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx);
    eax = eax ^ MEM32(ebp + -8);
    esi = esi & 0xC0000000u;
    ebx = ebx | esi;
    POP32(esp, edi);
    eax = eax & 0x3FFFFFFF;
    MEM32(ecx) = MEM32(ecx) ^ eax;
    POP32(esp, esi);
    MEM32(ecx + 4) = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00527020
 * Original: 0x00527020 - 0x00527101 (225 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    ecx = ebp + -40;
    PUSH32(esp, 0); sub_005287AA(); /* call 0x005287AA */

loc_00527035: ;
    ebx = MEM32(edi);
    ecx = ebx;
    ecx = ecx >> 0xC;
    MEM32(ebp + -28) = ecx;
    ecx = ecx & 0xF;
    MEM32(ebp + -16) = ebx;
    if ((ecx == 0)) goto loc_00527050; /* je: equal / zero */

loc_00527047: ;
    (void)0; /* test HI8(ebx), 8 - flags set for next jcc */
    MEM8(ebp + -5) = 1;
    if (TEST_Z(HI8(ebx), 8)) goto loc_00527054; /* je: equal / zero */

loc_00527050: ;
    MEM8(ebp + -5) = 0;

loc_00527054: ;
    if (TEST_Z(ecx, ecx)) goto loc_00527061; /* je: equal / zero */

loc_00527058: ;
    (void)0; /* test HI8(ebx), 8 - flags set for next jcc */
    MEM8(ebp + -6) = 1;
    if (TEST_NZ(HI8(ebx), 8)) goto loc_00527065; /* jne: not equal / not zero */

loc_00527061: ;
    MEM8(ebp + -6) = 0;

loc_00527065: ;
    edx = MEM32(esi + 8);
    ecx = edx;
    ecx = ecx >> 0x19;
    ecx = ecx & 0xF;
    (void)0; /* test edx, 0xE0000000u - flags set for next jcc */
    SET_LO8(eax, MEM8(ecx + 0x534668));
    SET_LO8(ecx, MEM8(ecx + 0x534678));
    MEM8(ebp + -3) = LO8(eax);
    MEM8(ebp + -2) = LO8(ecx);
    if (TEST_NZ(edx, 0xE0000000u)) goto loc_0052709F; /* jne: not equal / not zero */

loc_0052708A: ;
    ecx = edx;
    ecx = ecx >> 0x19;
    ecx = ecx & 0xF;
    (void)0; /* cmp MEM8(ecx + 0x534688), 0 - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    if (CMP_EQ(MEM8(ecx + 0x534688), 0)) goto loc_005270A3; /* je: equal / zero */

loc_0052709F: ;
    MEM8(ebp + -1) = 1;

loc_005270A3: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 3);
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00527101(); return; } /* je: equal / zero */

loc_005270AA: ;
    edx = MEM32(esi + 8);
    eax = edx;
    eax = eax >> 0xA;
    eax = eax & edi;
    ecx = edi;
    ecx = ecx - eax;
    eax = edx;
    eax = eax >> 8;
    eax = eax & edi;
    MEM32(ebp + -12) = 1;
    MEM32(ebp + -12) = MEM32(ebp + -12) << LO8(ecx);
    ecx = edi;
    ecx = ecx - eax;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    ecx = edi;
    MEM32(ebp + -12) = MEM32(ebp + -12) | eax;
    eax = edx;
    eax = eax >> 6;
    eax = eax & edi;
    ecx = ecx - eax;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    edx = edx >> 4;
    edx = edx & edi;
    ecx = eax;
    eax = MEM32(ebp + -12);
    eax = eax | ecx;
    ecx = edi;
    ecx = ecx - edx;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    eax = eax | edx;
    MEM32(ebp + -20) = eax;
    g_seh_ebp = ebp; sub_00527105(); return; /* tail jmp 0x00527105 */

}

/**
 * sub_0052739E
 * Original: 0x0052739E - 0x005273BE (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052739E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052739E: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = edx;
    esi = esi & 0x1E000000;
    if (CMP_NE(esi, 0x2000000)) goto loc_005273BA; /* jne: not equal / not zero */

loc_005273B2: ;
    if (TEST_Z(edx, 0xE0000000u)) { sub_005273BE(); return; } /* je: equal / zero */

loc_005273BA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005274E8
 * Original: 0x005274E8 - 0x005275EF (263 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005274E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005274E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0x1E000000;
    if (CMP_NE(esi, 0x6000000)) { sub_005275EF(); return; } /* jne: not equal / not zero */

loc_00527504: ;
    if (TEST_NZ(eax, 0xE0000000u)) { sub_005275EF(); return; } /* jne: not equal / not zero */

loc_0052750F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(ecx + 4);
    eax = eax ^ MEM32(edx);
    ebx = 0xC0;
    eax = eax & 0x30000000;
    MEM32(ecx + 4) = MEM32(ecx + 4) ^ eax;
    eax = MEM32(ecx + 8);
    eax = eax ^ MEM32(edx + 4);
    MEM8(ebp + -1) = 1;
    eax = eax & 0x1000;
    MEM32(ecx + 8) = MEM32(ecx + 8) ^ eax;
    esi = MEM32(edx + 4);
    eax = MEM32(ecx + 8);
    esi = esi ^ eax;
    esi = esi & 0xF;
    esi = esi ^ eax;
    MEM32(ecx + 8) = esi;
    edi = MEM32(edx + 4);
    edi = edi ^ esi;
    edi = edi & 0xC00;
    edi = edi ^ esi;
    MEM32(ecx + 8) = edi;
    esi = MEM32(edx + 4);
    esi = esi ^ edi;
    eax = 0x300;
    esi = esi & eax;
    esi = esi ^ edi;
    MEM32(ecx + 8) = esi;
    edi = MEM32(edx + 4);
    edi = edi ^ esi;
    edi = edi & ebx;
    edi = edi ^ esi;
    MEM32(ecx + 8) = edi;
    esi = MEM32(edx + 4);
    esi = esi ^ edi;
    esi = esi & 0x30;
    esi = esi ^ edi;
    MEM32(ecx + 8) = esi;
    esi = MEM32(edx + 4);
    esi = esi ^ MEM32(ecx);
    esi = esi & 0x30000000;
    MEM32(ecx) = MEM32(ecx) ^ esi;
    esi = MEM32(ecx + 4);
    esi = esi ^ MEM32(edx + 8);
    esi = esi & 0x1000;
    MEM32(ecx + 4) = MEM32(ecx + 4) ^ esi;
    edi = MEM32(ecx + 4);
    esi = MEM32(edx + 8);
    esi = esi ^ edi;
    esi = esi & 0xF;
    esi = esi ^ edi;
    MEM32(ecx + 4) = esi;
    edi = MEM32(edx + 8);
    edi = edi ^ esi;
    edi = edi & 0xC00;
    edi = edi ^ esi;
    MEM32(ecx + 4) = edi;
    esi = MEM32(edx + 8);
    esi = esi ^ edi;
    esi = esi & eax;
    esi = esi ^ edi;
    MEM32(ecx + 4) = esi;
    edi = MEM32(edx + 8);
    edi = edi ^ esi;
    edi = edi & ebx;
    edi = edi ^ esi;
    MEM32(ecx + 4) = edi;
    eax = MEM32(edx + 8);
    eax = eax ^ edi;
    eax = eax & 0x30;
    eax = eax ^ edi;
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005275F5
 * Original: 0x005275F5 - 0x00527649 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005275F5(void)
{
    int _flags = 0; /* fallback flag var */

loc_005275F5: ;
    edx = MEM32(ecx + 8);
    if (TEST_Z(edx, 0x1E000000)) goto loc_00527648; /* je: equal / zero */

loc_00527600: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, 0xF0000)) goto loc_00527628; /* je: equal / zero */

loc_00527609: ;
    PUSH32(esp, esi);
    eax = eax & 0xFF1FFFFFu;
    eax = eax | 0x100000;
    esi = eax;
    esi = esi << 8;
    esi = esi ^ eax;
    esi = esi & 0xF000000;
    esi = esi ^ eax;
    MEM32(ecx) = esi;
    POP32(esp, esi);
    goto loc_0052762F;

loc_00527628: ;
    eax = eax & 0xF00FFFFFu;
    MEM32(ecx) = eax;

loc_0052762F: ;
    eax = MEM32(ecx + 4);
    edx = edx & 0xE1FFE000u;
    eax = eax & 0xE0005FFFu;
    eax = eax | 0x20004000;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 4) = eax;

loc_00527648: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00527649
 * Original: 0x00527649 - 0x005276AC (99 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527649(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527649: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00527020(); /* call 0x00527020 */

loc_00527658: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_005276AC(); return; } /* jne: not equal / not zero */

loc_0052765C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00528C5C(); /* call 0x00528C5C */

loc_0052766A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_005276A8; /* jne: not equal / not zero */

loc_0052766E: ;
    edx = edi;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_005274E8(); /* call 0x005274E8 */

loc_00527678: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00527686; /* je: equal / zero */

loc_0052767C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, eax);
    goto loc_0052769C;

loc_00527686: ;
    edx = esi;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_005274E8(); /* call 0x005274E8 */

loc_00527690: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_005276AC(); return; } /* je: equal / zero */

loc_00527694: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);

loc_0052769C: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00528C5C(); /* call 0x00528C5C */

loc_005276A4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_005276AC(); return; } /* je: equal / zero */

loc_005276A8: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_005276AE(); return; /* tail jmp 0x005276AE */

}

/**
 * sub_005276B3
 * Original: 0x005276B3 - 0x0052775A (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005276B3(void)
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

loc_005276B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x8E0;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebp + -2272;
    PUSH32(esp, 0); sub_00523EC5(); /* call 0x00523EC5 */

loc_005276CB: ;
    if (TEST_S(eax, eax)) goto loc_00527757; /* jl: less (signed <) */

loc_005276D3: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    if (CMP_LE(esi & esi, 0)) goto loc_00527757; /* jle: less or equal (signed <=) */

loc_005276DB: ;
    PUSH32(esp, edi);
    edi = ebx + 4;
    MEM32(ebp + -4) = edi;

loc_005276E2: ;
    if (TEST_S(eax, eax)) goto loc_00527756; /* jl: less (signed <) */

loc_005276E6: ;
    edx = edi;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_005274E8(); /* call 0x005274E8 */

loc_005276F0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00527729; /* je: equal / zero */

loc_005276F4: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    esi = ebp + -2272;
    MEM32(ebp + -16) = 0x20;
    PUSH32(esp, 0); sub_005240CC(); /* call 0x005240CC */

loc_0052770A: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, 0); sub_005240CC(); /* call 0x005240CC */

loc_00527719: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp - 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00527729; /* jp: parity */

loc_00527723: ;
    esi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_00527729: ;
    edi = MEM32(ebp + -4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -8;
    ecx = ebp + -2272;
    MEM32(ebp + -8) = 0x20;
    PUSH32(esp, 0); sub_00523F13(); /* call 0x00523F13 */

loc_00527746: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    ecx = MEM32(ebp + -12);
    edi = edi + 0xC;
    (void)0; /* cmp ecx, MEM32(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_L(ecx, MEM32(ebx))) goto loc_005276E2; /* jl: less (signed <) */

loc_00527756: ;
    POP32(esp, edi);

loc_00527757: ;
    POP32(esp, esi);
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
 * sub_0052775A
 * Original: 0x0052775A - 0x00527809 (175 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052775A(void)
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

loc_0052775A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x8D4;
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ecx = ebp + -2260;
    PUSH32(esp, 0); sub_00523EC5(); /* call 0x00523EC5 */

loc_0052777E: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00527800; /* jl: less (signed <) */

loc_00527784: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    fp_push(0.0); /* fldz */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + -16) = 0x20;
    if (CMP_LE(esi & esi, 0)) goto loc_005277E2; /* jle: less or equal (signed <=) */

loc_00527798: ;
    edi = edi + 4;

loc_0052779B: ;
    if (TEST_S(ebx, ebx)) goto loc_005277E2; /* jl: less (signed <) */

loc_0052779F: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -16;
    ecx = ebp + -2260;
    PUSH32(esp, 0); sub_00523F13(); /* call 0x00523F13 */

loc_005277B2: ;
    (void)0; /* cmp MEM8(ebp + 8), 1 - flags set for next jcc */
    ebx = eax;
    if (CMP_NE(MEM8(ebp + 8), 1)) goto loc_005277C8; /* jne: not equal / not zero */

loc_005277BA: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    goto loc_005277D4;

loc_005277C8: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_005277D4: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi + 0xC;
    if (CMP_L(MEM32(ebp + -8), esi)) goto loc_0052779B; /* jl: less (signed <) */

loc_005277E2: ;
    edx = ebp + -16;
    ecx = ebp + -2260;
    PUSH32(esp, 0); sub_00524024(); /* call 0x00524024 */

loc_005277F0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if (TEST_S(ebx, ebx)) goto loc_005277FE; /* jl: less (signed <) */

loc_005277F7: ;
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00527800;

loc_005277FE: ;
    /* fstp st(0) */

loc_00527800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00527809
 * Original: 0x00527809 - 0x00527A35 (556 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527809(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527809: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebx + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = edx;
    esi = esi ^ ecx;
    (void)0; /* test esi, 0x1E000000 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = edx;
    if (TEST_NZ(esi, 0x1E000000)) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_0052782C: ;
    edx = edx ^ ecx;
    if (TEST_NZ(edx, 0xE0000000u)) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_0052783A: ;
    esi = MEM32(ebx + 4);
    eax = MEM32(eax + 4);
    edx = esi;
    edx = edx ^ eax;
    edi = 0x30000000;
    if (TEST_NZ(edi, edx)) goto loc_0052788D; /* jne: not equal / not zero */

loc_0052784D: ;
    edx = MEM32(ebp + -8);
    edx = edx ^ ecx;
    if (TEST_NZ(HI8(edx), 0x10)) goto loc_0052788D; /* jne: not equal / not zero */

loc_00527857: ;
    edx = MEM32(ebp + -8);
    edx = edx ^ ecx;
    if (TEST_NZ(LO8(edx), 0xF)) goto loc_0052788D; /* jne: not equal / not zero */

loc_00527861: ;
    edx = MEM32(ebp + -8);
    edx = edx ^ ecx;
    if (TEST_NZ(LO8(edx), 0x30)) goto loc_0052788D; /* jne: not equal / not zero */

loc_0052786B: ;
    edx = MEM32(ebp + -8);
    edx = edx ^ ecx;
    if (TEST_NZ(HI8(edx), 0xC)) goto loc_0052788D; /* jne: not equal / not zero */

loc_00527875: ;
    edx = MEM32(ebp + -8);
    edx = edx ^ ecx;
    if (TEST_NZ(HI8(edx), 3)) goto loc_0052788D; /* jne: not equal / not zero */

loc_0052787F: ;
    edx = MEM32(ebp + -8);
    edx = edx ^ ecx;
    (void)0; /* test LO8(edx), 0xC0 - flags set for next jcc */
    MEM8(ebp + -1) = 1;
    if (TEST_Z(LO8(edx), 0xC0)) goto loc_00527891; /* je: equal / zero */

loc_0052788D: ;
    MEM8(ebp + -1) = 0;

loc_00527891: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(HI8(ecx), 0x60)) goto loc_005278E6; /* jne: not equal / not zero */

loc_0052789A: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(ecx, 0x8000000)) goto loc_005278E6; /* jne: not equal / not zero */

loc_005278A6: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(ecx, 0x78000)) goto loc_005278E6; /* jne: not equal / not zero */

loc_005278B2: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(ecx, 0x180000)) goto loc_005278E6; /* jne: not equal / not zero */

loc_005278BE: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(ecx, 0x6000000)) goto loc_005278E6; /* jne: not equal / not zero */

loc_005278CA: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(ecx, 0x1800000)) goto loc_005278E6; /* jne: not equal / not zero */

loc_005278D6: ;
    ecx = esi;
    ecx = ecx ^ eax;
    (void)0; /* test ecx, 0x600000 - flags set for next jcc */
    MEM8(ebp + -2) = 1;
    if (TEST_Z(ecx, 0x600000)) goto loc_005278EA; /* je: equal / zero */

loc_005278E6: ;
    MEM8(ebp + -2) = 0;

loc_005278EA: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(ebx);
    ecx = ecx ^ edx;
    if (TEST_NZ(edi, ecx)) goto loc_00527931; /* jne: not equal / not zero */

loc_005278F7: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(HI8(ecx), 0x10)) goto loc_00527931; /* jne: not equal / not zero */

loc_00527900: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(LO8(ecx), 0xF)) goto loc_00527931; /* jne: not equal / not zero */

loc_00527909: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(LO8(ecx), 0x30)) goto loc_00527931; /* jne: not equal / not zero */

loc_00527912: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(HI8(ecx), 0xC)) goto loc_00527931; /* jne: not equal / not zero */

loc_0052791B: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(HI8(ecx), 3)) goto loc_00527931; /* jne: not equal / not zero */

loc_00527924: ;
    ecx = esi;
    ecx = ecx ^ eax;
    if (TEST_NZ(LO8(ecx), 0xC0)) goto loc_00527931; /* jne: not equal / not zero */

loc_0052792D: ;
    SET_LO8(eax, 1);
    goto loc_00527933;

loc_00527931: ;
    SET_LO8(eax, 0); /* xor self */

loc_00527933: ;
    if (CMP_EQ(MEM8(ebp + -1), 0)) { sub_00527A35(); return; } /* je: equal / zero */

loc_0052793D: ;
    if (CMP_EQ(MEM8(ebp + -2), 0)) { sub_00527A35(); return; } /* je: equal / zero */

loc_00527947: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00527A35(); return; } /* je: equal / zero */

loc_0052794F: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(edi + 8);
    esi = eax;
    esi = esi ^ ecx;
    if (TEST_NZ(esi, 0x1FE0000)) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_00527968: ;
    eax = eax ^ ecx;
    if (TEST_NZ(eax, 0x1E000)) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_00527975: ;
    eax = MEM32(ebx);
    eax = eax ^ edx;
    if (TEST_NZ(LO8(eax), 2)) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_00527981: ;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_00527020(); /* call 0x00527020 */

loc_00527989: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_00527991: ;
    esi = MEM32(edi);
    eax = 0xF0F0000;
    (void)0; /* test eax, esi - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    if (TEST_Z(eax, esi)) goto loc_005279A4; /* je: equal / zero */

loc_005279A0: ;
    MEM8(ebp + -1) = 1;

loc_005279A4: ;
    ecx = MEM32(ebx);
    if (TEST_NZ(eax, ecx)) goto loc_005279AE; /* jne: not equal / not zero */

loc_005279AA: ;
    SET_LO8(edx, 0); /* xor self */
    goto loc_005279B0;

loc_005279AE: ;
    SET_LO8(edx, 1);

loc_005279B0: ;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_005279BA; /* je: equal / zero */

loc_005279B6: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_005279BA: ;
    eax = 0xF000;
    if (TEST_Z(eax, esi)) goto loc_005279C7; /* je: equal / zero */

loc_005279C3: ;
    if (TEST_NZ(eax, ecx)) { sub_00527A35(); return; } /* jne: not equal / not zero */

loc_005279C7: ;
    ecx = MEM32(ebp + 8);
    esi = edi;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(ebx);
    eax = eax & 0xF000000;
    MEM32(ecx) = MEM32(ecx) | eax;
    eax = MEM32(ebx);
    esi = MEM32(ecx);
    eax = eax & 0xF0000;
    eax = eax | esi;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_005279FF; /* je: equal / zero */

loc_005279EB: ;
    if (CMP_NE(MEM8(ebp + -1), 0)) goto loc_005279FF; /* jne: not equal / not zero */

loc_005279F1: ;
    edx = MEM32(ebx);
    edx = edx ^ eax;
    edx = edx & 0xF00000;
    edx = edx ^ eax;
    MEM32(ecx) = edx;

loc_005279FF: ;
    edx = MEM32(ebx);
    eax = 0xF000;
    edx = edx & eax;
    MEM32(ecx) = MEM32(ecx) | edx;
    esi = MEM32(ebx);
    (void)0; /* test eax, esi - flags set for next jcc */
    edx = MEM32(ecx);
    if (TEST_Z(eax, esi)) goto loc_00527A31; /* je: equal / zero */

loc_00527A12: ;
    edi = MEM32(ebp + 0xC);
    if (TEST_NZ(MEM32(edi), eax)) goto loc_00527A31; /* jne: not equal / not zero */

loc_00527A19: ;
    eax = edx;
    eax = eax ^ esi;
    eax = eax & 0xFF8;
    eax = eax ^ edx;
    MEM32(ecx) = eax;
    edx = MEM32(ebx);
    edx = edx ^ eax;
    edx = edx & 4;
    edx = edx ^ eax;
    MEM32(ecx) = edx;

loc_00527A31: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00527A37(); return; /* tail jmp 0x00527A37 */

}

/**
 * sub_00527A3D
 * Original: 0x00527A3D - 0x00527A76 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527A3D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527A3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 8));
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00527A76(); return; } /* jne: not equal / not zero */

loc_00527A49: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00527A53; /* je: equal / zero */

loc_00527A4D: ;
    if (CMP_NE(MEM32(ebp + 0x1C), 3)) { sub_00527A76(); return; } /* jne: not equal / not zero */

loc_00527A53: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00527A5D; /* je: equal / zero */

loc_00527A57: ;
    if (CMP_NE(MEM32(ebp + 0x18), 2)) { sub_00527A76(); return; } /* jne: not equal / not zero */

loc_00527A5D: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_00527A67; /* je: equal / zero */

loc_00527A61: ;
    if (CMP_NE(MEM32(ebp + 0x14), 1)) { sub_00527A76(); return; } /* jne: not equal / not zero */

loc_00527A67: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00527A71; /* je: equal / zero */

loc_00527A6B: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) { sub_00527A76(); return; } /* jne: not equal / not zero */

loc_00527A71: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00527A78(); return; /* tail jmp 0x00527A78 */

}

/**
 * sub_00527A7C
 * Original: 0x00527A7C - 0x00527ADF (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527A7C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00527A7C: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = esi;
    eax = eax >> 0x19;
    eax = eax & 0xF;
    (void)0; /* cmp MEM8(eax + 0x534668), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    edx = 0x30000000;
    if (CMP_EQ(MEM8(eax + 0x534668), 0)) goto loc_00527AA0; /* je: equal / zero */

loc_00527A97: ;
    edi = MEM32(ecx + 4);
    edi = edi & edx;
    if (CMP_EQ(edi, edx)) goto loc_00527ADA; /* je: equal / zero */

loc_00527AA0: ;
    if (CMP_EQ(MEM8(eax + 0x534678), 0)) goto loc_00527AB9; /* je: equal / zero */

loc_00527AA9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edi = 0x6000;
    ebx = ebx & edi;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(ebx, edi)) goto loc_00527ADA; /* je: equal / zero */

loc_00527AB9: ;
    if (CMP_EQ(MEM8(eax + 0x534688), 0)) goto loc_00527ACA; /* je: equal / zero */

loc_00527AC2: ;
    eax = MEM32(ecx);
    eax = eax & edx;
    if (CMP_EQ(eax, edx)) goto loc_00527ADA; /* je: equal / zero */

loc_00527ACA: ;
    if (TEST_Z(esi, 0xE0000000u)) { sub_00527ADF(); return; } /* je: equal / zero */

loc_00527AD2: ;
    eax = MEM32(ecx);
    eax = eax & edx;
    if (CMP_NE(eax, edx)) { sub_00527ADF(); return; } /* jne: not equal / not zero */

loc_00527ADA: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00527AE1(); return; /* tail jmp 0x00527AE1 */

}

/**
 * sub_00527AE4
 * Original: 0x00527AE4 - 0x00527B10 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527AE4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00527AE4: ;
    eax = MEM32(ecx + 8);
    eax = eax ^ MEM32(esi + 8);
    if (TEST_NZ(eax, 0x1FE0000)) goto loc_00527AF9; /* jne: not equal / not zero */

loc_00527AF1: ;
    eax = MEM32(ecx);
    eax = eax ^ MEM32(esi);
    if (TEST_Z(LO8(eax), 2)) { sub_00527B10(); return; } /* je: equal / zero */

loc_00527AF9: ;
    PUSH32(esp, 0); sub_00527A7C(); /* call 0x00527A7C */

loc_00527AFE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00527B10(); return; } /* je: equal / zero */

loc_00527B02: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00527A7C(); /* call 0x00527A7C */

loc_00527B09: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00527B10(); return; } /* je: equal / zero */

loc_00527B0D: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00527B13
 * Original: 0x00527B13 - 0x00527C2A (279 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527B13(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527B13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    (void)0; /* test HI8(eax), 0xF0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(HI8(eax), 0xF0)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527B28: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 0x18;
    if (TEST_Z(MEM8(ebp + -4), 0xF)) { sub_00527C2A(); return; } /* je: equal / zero */

loc_00527B39: ;
    ecx = MEM32(ebx + 8);
    edx = ecx;
    edx = edx & 0x1E000000;
    if (CMP_NE(edx, 0x2000000)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527B50: ;
    if (TEST_NZ(ecx, 0xE0000000u)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527B5C: ;
    edx = MEM32(ebx + 4);
    edx = edx & 0x30000000;
    if (CMP_NE(edx, 0x10000000)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527B71: ;
    eax = eax >> 0x14;
    eax = eax ^ ecx;
    if (TEST_NZ(LO8(eax), 0xF)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527B7E: ;
    edx = MEM32(ebx);
    eax = ecx;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    edi = edi >> 4;
    edi = edi & ecx;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 6;
    edi = edi & ecx;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 8;
    edi = edi & ecx;
    PUSH32(esp, edi);
    edi = eax;
    esi = edx;
    edi = edi >> 0xA;
    eax = eax >> 0xC;
    esi = esi >> 0xC;
    edi = edi & ecx;
    PUSH32(esp, edi);
    eax = eax & 1;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00527A3D(); /* call 0x00527A3D */

loc_00527BC0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00527C2A(); return; } /* je: equal / zero */

loc_00527BC4: ;
    if (TEST_NZ(LO8(edx), 4)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527BC9: ;
    eax = MEM32(ebp + -4);
    eax = ~eax;
    eax = eax & esi;
    if (TEST_NZ(LO8(eax), 0xF)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527BD4: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) { sub_00527C2A(); return; } /* je: equal / zero */

loc_00527BDA: ;
    if (TEST_NZ(edx, 0xF0F0000)) { sub_00527C2A(); return; } /* jne: not equal / not zero */

loc_00527BE2: ;
    ecx = MEM32(ebp + 0xC);
    esi = ebx;
    PUSH32(esp, 0); sub_00527AE4(); /* call 0x00527AE4 */

loc_00527BEC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00527C2A(); return; } /* je: equal / zero */

loc_00527BF0: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edi = edx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = MEM32(edx);
    ecx = ecx ^ MEM32(ebx);
    SET_LO8(eax, 1);
    ecx = ecx & 0xF000;
    MEM32(edx) = MEM32(edx) ^ ecx;
    esi = MEM32(edx);
    ecx = MEM32(ebx);
    ecx = ecx ^ esi;
    ecx = ecx & 4;
    ecx = ecx ^ esi;
    MEM32(edx) = ecx;
    esi = MEM32(ebx);
    esi = esi ^ ecx;
    esi = esi & 0xFF8;
    esi = esi ^ ecx;
    MEM32(edx) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00527C2E
 * Original: 0x00527C2E - 0x00527C80 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527C2E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527C2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp edx, MEM32(ebp + 0x10) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(edx, MEM32(ebp + 0x10))) { sub_00527C80(); return; } /* jne: not equal / not zero */

loc_00527C37: ;
    esi = MEM32(ebp + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 0x18))) { sub_00527C80(); return; } /* jne: not equal / not zero */

loc_00527C3F: ;
    if (CMP_NE(edx, 1)) goto loc_00527C4C; /* jne: not equal / not zero */

loc_00527C44: ;
    esi = MEM32(ebp + 8);
    if (CMP_EQ(esi, MEM32(ebp + 0x14))) goto loc_00527C7B; /* je: equal / zero */

loc_00527C4C: ;
    if (CMP_NE(edx, 2)) goto loc_00527C5F; /* jne: not equal / not zero */

loc_00527C51: ;
    esi = MEM32(ecx + 8);
    esi = esi ^ MEM32(eax + 8);
    if (TEST_Z(esi, 0x1E000)) goto loc_00527C7B; /* je: equal / zero */

loc_00527C5F: ;
    if (CMP_NE(edx, 3)) { sub_00527C80(); return; } /* jne: not equal / not zero */

loc_00527C64: ;
    edx = MEM32(ecx + 8);
    edx = edx ^ MEM32(eax + 8);
    if (TEST_NZ(edx, 0x1FE0000)) { sub_00527C80(); return; } /* jne: not equal / not zero */

loc_00527C72: ;
    ecx = MEM32(ecx);
    ecx = ecx ^ MEM32(eax);
    if (TEST_NZ(LO8(ecx), 2)) { sub_00527C80(); return; } /* jne: not equal / not zero */

loc_00527C7B: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00527C82(); return; /* tail jmp 0x00527C82 */

}

/**
 * sub_00527C87
 * Original: 0x00527C87 - 0x00527CA7 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527C87(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527C87: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = esi;
    eax = eax >> 2;
    eax = eax & 1;
    PUSH32(esp, edi);
    if ((eax != 0)) { sub_00527CA7(); return; } /* jne: not equal / not zero */

loc_00527C9D: ;
    ecx = esi;
    ecx = ecx >> 0xC;
    ecx = ecx & 0xF;
    g_seh_ebp = ebp; sub_00527CA9(); return; /* tail jmp 0x00527CA9 */

}

/**
 * sub_00527D24
 * Original: 0x00527D24 - 0x00527D2E (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527D24(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00527D24: ;
    if (TEST_Z(LO8(edx), 1)) { sub_00527D2E(); return; } /* je: equal / zero */

loc_00527D29: ;
    eax = SX8(LO8(eax));
    g_seh_ebp = ebp; sub_00527D31(); return; /* tail jmp 0x00527D31 */

}

/**
 * sub_00527D6C
 * Original: 0x00527D6C - 0x00527E09 (157 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527D6C(void)
{
    uint32_t ebp;

loc_00527D6C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00527C87(); /* call 0x00527C87 */

loc_00527D7E: ;
    ecx = MEM32(esi + 8);
    edx = ecx;
    edx = edx >> 6;
    SET_LO8(ebx, 3);
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    eax = ecx;
    eax = eax >> 4;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 8;
    ecx = ecx >> 0xA;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(ebp + -4));
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_00527D24(); /* call 0x00527D24 */

loc_00527DAA: ;
    edx = MEM32(esi + 4);
    edx = edx >> 0x15;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    eax = MEM32(esi + 4);
    eax = eax >> 0x13;
    ecx = edi + 4;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    edx = edx >> 0x17;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    edx = edx >> 0x19;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(ebp + -3));
    PUSH32(esp, 0); sub_00527D24(); /* call 0x00527D24 */

loc_00527DD8: ;
    esi = MEM32(esi + 4);
    edx = esi;
    edx = edx >> 6;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    eax = esi;
    eax = eax >> 4;
    ecx = edi + 8;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    PUSH32(esp, edx);
    edx = esi;
    edx = edx >> 8;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    PUSH32(esp, edx);
    edx = esi;
    edx = edx >> 0xA;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(ebp + -2));
    PUSH32(esp, 0); sub_00527D24(); /* call 0x00527D24 */

loc_00527E05: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00527E09
 * Original: 0x00527E09 - 0x00527E41 (56 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527E09(void)
{

loc_00527E09: ;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(esp + 8);
    edx = 0; /* xor self */
    edx++;
    PUSH32(esp, 3);
    eax = edx;
    eax = eax << LO8(ecx);
    POP32(esp, ecx);
    ecx = ecx - MEM32(esp + 0xC);
    edi = edx;
    edi = edi << LO8(ecx);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(esp + 0x10);
    eax = eax | edi;
    edi = edx;
    edi = edi << LO8(ecx);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    ecx = ecx - MEM32(esp + 0x14);
    eax = eax | edi;
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    eax = eax | edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00527E41
 * Original: 0x00527E41 - 0x00527E73 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527E41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00527E41: ;
    ecx = ecx - 0;
    if ((ecx == 0)) { sub_00527E73(); return; } /* je: equal / zero */

loc_00527E46: ;
    ecx--;
    if ((ecx == 0)) goto loc_00527E54; /* je: equal / zero */

loc_00527E49: ;
    ecx--;
    if ((ecx == 0)) goto loc_00527E4F; /* je: equal / zero */

loc_00527E4C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00527E4F: ;
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00527E76(); return; /* tail jmp 0x00527E76 */

loc_00527E54: ;
    ecx = MEM32(eax + 4);
    edx = ecx;
    edx = edx >> 0x13;
    SET_LO8(eax, 3);
    SET_LO8(edx, LO8(edx) & LO8(eax));
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 0x15;
    SET_LO8(edx, LO8(edx) & LO8(eax));
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 0x17;
    ecx = ecx >> 0x19;
    g_seh_ebp = ebp; sub_00527E90(); return; /* tail jmp 0x00527E90 */

}

/**
 * sub_00527E9C
 * Original: 0x00527E9C - 0x00527ED0 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527E9C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00527E9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -4;
    esi = 0; /* xor self */
    MEM8(ebp + -4) = 3;
    MEM8(ebp + -3) = 2;
    MEM8(ebp + -2) = 1;
    MEM8(ebp + -1) = 0;
    eax = eax - ecx;

loc_00527EB8: ;
    SET_LO8(edx, MEM8(ecx));
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_00527EC4; /* je: equal / zero */

loc_00527EBF: ;
    if (CMP_NE(LO8(edx), MEM8(eax + ecx))) { sub_00527ED0(); return; } /* jne: not equal / not zero */

loc_00527EC4: ;
    esi++;
    ecx++;
    if (CMP_L(esi, 4)) goto loc_00527EB8; /* jl: less (signed <) */

loc_00527ECB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00527ED4
 * Original: 0x00527ED4 - 0x00527EF0 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527ED4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00527ED4: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00527E9C(); /* call 0x00527E9C */

loc_00527EDB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00527EED; /* jne: not equal / not zero */

loc_00527EDF: ;
    eax = 0; /* xor self */

loc_00527EE1: ;
    if (CMP_NE(MEM8(eax + esi), 0xFF)) { sub_00527EF0(); return; } /* jne: not equal / not zero */

loc_00527EE7: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_00527EE1; /* jl: less (signed <) */

loc_00527EED: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esp += 4; return; /* ret */

}

/**
 * sub_00527EF4
 * Original: 0x00527EF4 - 0x00527F0A (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527EF4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00527EF4: ;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_00527F04; /* jne: not equal / not zero */

loc_00527EF8: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_00527F04; /* jne: not equal / not zero */

loc_00527F00: ;
    SET_LO8(eax, MEM8(esp + 8));

loc_00527F04: ;
    eax = SX8(LO8(eax));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00527F0A
 * Original: 0x00527F0A - 0x00528084 (378 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527F0A(void)
{
    uint32_t ebp;

loc_00527F0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ebx;
    PUSH32(esp, 0); sub_00527ED4(); /* call 0x00527ED4 */

loc_00527F17: ;
    MEM8(ebp + -4) = LO8(eax);
    esi = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(ebx));
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527F27: ;
    eax = eax << 4;
    eax = eax ^ MEM32(edi + 8);
    PUSH32(esp, 2);
    eax = eax & 0x30;
    MEM32(edi + 8) = MEM32(edi + 8) ^ eax;
    SET_LO8(eax, MEM8(ebx + 1));
    edx = MEM32(edi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527F41: ;
    eax = eax << 6;
    eax = eax ^ edx;
    eax = eax & 0xC0;
    ecx = eax;
    ecx = ecx ^ edx;
    PUSH32(esp, 1);
    MEM32(edi + 8) = ecx;
    SET_LO8(eax, MEM8(ebx + 2));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527F5D: ;
    eax = eax << 8;
    eax = eax ^ ecx;
    eax = eax & 0x300;
    edx = eax;
    edx = edx ^ ecx;
    PUSH32(esp, 0);
    MEM32(edi + 8) = edx;
    SET_LO8(eax, MEM8(ebx + 3));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527F79: ;
    eax = eax << 0xA;
    eax = eax ^ edx;
    eax = eax & 0xC00;
    eax = eax ^ edx;
    esi = ebx + 4;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_00527ED4(); /* call 0x00527ED4 */

loc_00527F90: ;
    MEM8(ebp + -4) = LO8(eax);
    edx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527FA0: ;
    eax = eax << 0x13;
    eax = eax ^ MEM32(edi + 4);
    PUSH32(esp, 2);
    eax = eax & 0x180000;
    MEM32(edi + 4) = MEM32(edi + 4) ^ eax;
    SET_LO8(eax, MEM8(ebx + 5));
    esi = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527FBC: ;
    eax = eax << 0x15;
    eax = eax ^ esi;
    eax = eax & 0x600000;
    ecx = eax;
    ecx = ecx ^ esi;
    PUSH32(esp, 1);
    MEM32(edi + 4) = ecx;
    SET_LO8(eax, MEM8(ebx + 6));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527FD8: ;
    eax = eax << 0x17;
    eax = eax ^ ecx;
    eax = eax & 0x1800000;
    esi = eax;
    esi = esi ^ ecx;
    PUSH32(esp, 0);
    MEM32(edi + 4) = esi;
    SET_LO8(eax, MEM8(ebx + 7));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00527FF4: ;
    eax = eax << 0x19;
    eax = eax ^ esi;
    eax = eax & 0x6000000;
    eax = eax ^ esi;
    esi = ebx + 8;
    MEM32(ebp + -8) = eax;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0); sub_00527ED4(); /* call 0x00527ED4 */

loc_0052800E: ;
    MEM8(ebp + -4) = LO8(eax);
    edx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_0052801E: ;
    eax = eax << 4;
    eax = eax ^ MEM32(ebp + -8);
    PUSH32(esp, 2);
    eax = eax & 0x30;
    ecx = eax;
    ecx = ecx ^ MEM32(ebp + -8);
    PUSH32(esp, edx);
    MEM32(edi + 4) = ecx;
    SET_LO8(eax, MEM8(ebx + 9));
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_0052803A: ;
    eax = eax << 6;
    eax = eax ^ ecx;
    eax = eax & 0xC0;
    esi = eax;
    esi = esi ^ ecx;
    PUSH32(esp, 1);
    MEM32(edi + 4) = esi;
    SET_LO8(eax, MEM8(ebx + 0xA));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00528056: ;
    eax = eax << 8;
    eax = eax ^ esi;
    eax = eax & 0x300;
    ecx = eax;
    ecx = ecx ^ esi;
    PUSH32(esp, 0);
    MEM32(edi + 4) = ecx;
    SET_LO8(eax, MEM8(ebx + 0xB));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00527EF4(); /* call 0x00527EF4 */

loc_00528072: ;
    eax = eax << 0xA;
    eax = eax ^ ecx;
    eax = eax & 0xC00;
    eax = eax ^ ecx;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00528084
 * Original: 0x00528084 - 0x00528269 (485 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528084(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528084: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(edi + 8);
    edx = eax;
    edx = edx ^ ecx;
    if (TEST_NZ(edx, 0x1E000000)) { sub_00528269(); return; } /* jne: not equal / not zero */

loc_005280A4: ;
    eax = eax ^ ecx;
    if (TEST_NZ(eax, 0xE0000000u)) { sub_00528269(); return; } /* jne: not equal / not zero */

loc_005280B1: ;
    eax = MEM32(ebx + 8);
    edx = eax;
    edx = edx >> 0xC;
    eax = eax & 0xF;
    esi = 0; /* xor self */
    esi++;
    edx = edx & esi;
    PUSH32(esp, edx);
    edx = MEM32(edi + 4);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 4);
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 0xC;
    eax = eax & esi;
    PUSH32(esp, eax);
    ecx = ecx & 0xF;
    edx = edx >> 0x1C;
    PUSH32(esp, ecx);
    edx = edx & 3;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00527C2E(); /* call 0x00527C2E */

loc_005280EB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00528269(); return; } /* je: equal / zero */

loc_005280F3: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(edi + 4);
    ecx = eax;
    ecx = ecx >> 0x1B;
    ecx = ecx & esi;
    PUSH32(esp, ecx);
    ecx = eax;
    eax = eax >> 0xD;
    eax = eax & 3;
    ecx = ecx >> 0xF;
    ecx = ecx & 0xF;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edx;
    eax = eax >> 0x1B;
    eax = eax & esi;
    PUSH32(esp, eax);
    eax = edx;
    eax = eax >> 0xF;
    eax = eax & 0xF;
    edx = edx >> 0xD;
    PUSH32(esp, eax);
    edx = edx & 3;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00527C2E(); /* call 0x00527C2E */

loc_00528131: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00528269(); return; } /* je: equal / zero */

loc_00528139: ;
    edx = MEM32(edi);
    eax = MEM32(ebx + 4);
    ecx = MEM32(edi + 4);
    MEM32(ebp + -8) = edx;
    edx = eax;
    edx = edx >> 0xC;
    eax = eax & 0xF;
    edx = edx & esi;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 0xC;
    eax = eax & esi;
    PUSH32(esp, eax);
    ecx = ecx & 0xF;
    edx = edx >> 0x1C;
    PUSH32(esp, ecx);
    edx = edx & 3;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_00527C2E(); /* call 0x00527C2E */

loc_00528177: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00528269(); return; } /* je: equal / zero */

loc_0052817F: ;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_00527020(); /* call 0x00527020 */

loc_00528187: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00528269(); return; } /* jne: not equal / not zero */

loc_0052818F: ;
    esi = MEM32(ebp + -8);
    eax = 0xF0F0000;
    (void)0; /* test eax, esi - flags set for next jcc */
    MEM8(ebp + -2) = 0;
    if (TEST_Z(eax, esi)) goto loc_005281A3; /* je: equal / zero */

loc_0052819F: ;
    MEM8(ebp + -2) = 1;

loc_005281A3: ;
    ecx = MEM32(ebx);
    (void)0; /* test eax, ecx - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    if (TEST_Z(eax, ecx)) goto loc_005281B1; /* je: equal / zero */

loc_005281AD: ;
    MEM8(ebp + -1) = 1;

loc_005281B1: ;
    if (CMP_EQ(MEM8(ebp + -2), 0)) goto loc_005281CC; /* je: equal / zero */

loc_005281B7: ;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_005281CC; /* je: equal / zero */

loc_005281BD: ;
    eax = esi;
    eax = eax ^ ecx;
    if (TEST_NZ(eax, 0xF00000)) { sub_00528269(); return; } /* jne: not equal / not zero */

loc_005281CC: ;
    eax = 0xF000;
    if (TEST_Z(eax, esi)) goto loc_005281E6; /* je: equal / zero */

loc_005281D5: ;
    if (TEST_Z(eax, ecx)) goto loc_005281E6; /* je: equal / zero */

loc_005281D9: ;
    esi = esi ^ ecx;
    if (TEST_NZ(LO16(esi), 0xFF8)) { sub_00528269(); return; } /* jne: not equal / not zero */

loc_005281E6: ;
    esi = edi;
    edi = MEM32(ebp + 8);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = edi;
    PUSH32(esp, 0); sub_00528271(); /* call 0x00528271 */

loc_005281FC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00528269(); return; } /* je: equal / zero */

loc_00528200: ;
    ecx = MEM32(ebx);
    eax = MEM32(ebp + 8);
    ecx = ecx & 0xF000000;
    MEM32(eax) = MEM32(eax) | ecx;
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    ecx = ecx & 0xF0000;
    ecx = ecx | edx;
    (void)0; /* cmp MEM8(ebp + -1), 0 - flags set for next jcc */
    MEM32(eax) = ecx;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_00528235; /* je: equal / zero */

loc_00528221: ;
    if (CMP_NE(MEM8(ebp + -2), 0)) goto loc_00528235; /* jne: not equal / not zero */

loc_00528227: ;
    edx = MEM32(ebx);
    edx = edx ^ ecx;
    edx = edx & 0xF00000;
    edx = edx ^ ecx;
    MEM32(eax) = edx;

loc_00528235: ;
    edx = MEM32(ebx);
    ecx = 0xF000;
    edx = edx & ecx;
    MEM32(eax) = MEM32(eax) | edx;
    esi = MEM32(ebx);
    (void)0; /* test ecx, esi - flags set for next jcc */
    edx = MEM32(eax);
    if (TEST_Z(ecx, esi)) goto loc_00528265; /* je: equal / zero */

loc_00528248: ;
    if (TEST_NZ(MEM32(edi), ecx)) goto loc_00528265; /* jne: not equal / not zero */

loc_0052824C: ;
    ecx = edx;
    ecx = ecx ^ esi;
    ecx = ecx & 0xFF8;
    ecx = ecx ^ edx;
    MEM32(eax) = ecx;
    edx = MEM32(ebx);
    edx = edx ^ ecx;
    edx = edx & 4;
    edx = edx ^ ecx;
    MEM32(eax) = edx;

loc_00528265: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0052826B(); return; /* tail jmp 0x0052826B */

}

/**
 * sub_00528271
 * Original: 0x00528271 - 0x005282C7 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528271(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, edi);
    edi = ebp + -12;
    PUSH32(esp, 0); sub_00527D6C(); /* call 0x00527D6C */

loc_00528280: ;
    eax = MEM32(ebp + 0xC);
    edi = ebp + -24;
    PUSH32(esp, 0); sub_00527D6C(); /* call 0x00527D6C */

loc_0052828B: ;
    eax = 0; /* xor self */

loc_0052828D: ;
    SET_LO8(ecx, MEM8(ebp + eax + -12));
    (void)0; /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    SET_LO8(edx, MEM8(ebp + eax + -24));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_005282A7; /* je: equal / zero */

loc_0052829A: ;
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_005282A9; /* je: equal / zero */

loc_0052829F: ;
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_005282A9; /* je: equal / zero */

loc_005282A3: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_005282C2;

loc_005282A7: ;
    SET_LO8(ecx, LO8(edx));

loc_005282A9: ;
    MEM8(ebp + eax + -36) = LO8(ecx);
    eax++;
    if (CMP_L(eax, 0xC)) goto loc_0052828D; /* jl: less (signed <) */

loc_005282B3: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = ebp + -36;
    PUSH32(esp, 0); sub_00527F0A(); /* call 0x00527F0A */

loc_005282BF: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);

loc_005282C2: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005282C7
 * Original: 0x005282C7 - 0x005282F0 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005282C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005282C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0xC));
    ebx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_00527809(); /* call 0x00527809 */

loc_005282D7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_005282F0(); return; } /* jne: not equal / not zero */

loc_005282DB: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_00527B13(); /* call 0x00527B13 */

loc_005282E8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_005282F0(); return; } /* jne: not equal / not zero */

loc_005282EC: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_005282F3(); return; /* tail jmp 0x005282F3 */

}

/**
 * sub_005282F7
 * Original: 0x005282F7 - 0x00528372 (123 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005282F7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005282F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx), eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_LE(MEM32(ebx), eax)) goto loc_00528369; /* jle: less or equal (signed <=) */

loc_00528309: ;
    eax = ebx + 4;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = eax;
    eax = ebx + 0x10;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, edi);

loc_0052831A: ;
    eax = MEM32(ebx);
    eax--;
    if (CMP_GE(MEM32(ebp + -8), eax)) goto loc_00528345; /* jge: greater or equal (signed >=) */

loc_00528322: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    PUSH32(esp, 0); sub_005282C7(); /* call 0x005282C7 */

loc_00528331: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00528345; /* je: equal / zero */

loc_00528335: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    esi = ebp + -32;
    goto loc_00528348;

loc_00528345: ;
    esi = MEM32(ebp + -4);

loc_00528348: ;
    edi = MEM32(ebp + -16);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0xC;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_L(eax, MEM32(ebx))) goto loc_0052831A; /* jl: less (signed <) */

loc_00528367: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00528369: ;
    eax = MEM32(ebp + -20);
    MEM32(ebx) = eax;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00528372
 * Original: 0x00528372 - 0x005283C7 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528372(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528372: ;
    eax = MEM32(ecx + 8);
    eax = eax >> 0x19;
    eax = eax & 0xF;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM8(eax + 0x534668), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM8(eax + 0x534668), LO8(edx))) goto loc_00528395; /* je: equal / zero */

loc_00528386: ;
    esi = MEM32(ecx + 4);
    esi = esi >> 0x1C;
    esi = esi & 3;
    if (CMP_EQ(esi, MEM32(esp + 8))) goto loc_005283C2; /* je: equal / zero */

loc_00528395: ;
    if (CMP_EQ(MEM8(eax + 0x534678), LO8(edx))) goto loc_005283AC; /* je: equal / zero */

loc_0052839D: ;
    esi = MEM32(ecx + 4);
    esi = esi >> 0xD;
    esi = esi & 3;
    if (CMP_EQ(esi, MEM32(esp + 8))) goto loc_005283C2; /* je: equal / zero */

loc_005283AC: ;
    if (CMP_EQ(MEM8(eax + 0x534688), LO8(edx))) { sub_005283C7(); return; } /* je: equal / zero */

loc_005283B4: ;
    eax = MEM32(ecx);
    eax = eax >> 0x1C;
    eax = eax & 3;
    if (CMP_NE(eax, MEM32(esp + 8))) { sub_005283C7(); return; } /* jne: not equal / not zero */

loc_005283C2: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_005283C9(); return; /* tail jmp 0x005283C9 */

}

/**
 * sub_005283CD
 * Original: 0x005283CD - 0x005283E6 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005283CD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005283CD: ;
    if (TEST_Z(MEM8(eax + 0xB), 0xE0)) { sub_005283E6(); return; } /* je: equal / zero */

loc_005283D3: ;
    eax = MEM32(eax);
    eax = eax >> 0x1C;
    eax = eax & 3;
    if (CMP_NE(eax, MEM32(esp + 4))) { sub_005283E6(); return; } /* jne: not equal / not zero */

loc_005283E1: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_005283E8(); return; /* tail jmp 0x005283E8 */

}

/**
 * sub_005283EB
 * Original: 0x005283EB - 0x0052840B (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005283EB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005283EB: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00528372(); /* call 0x00528372 */

loc_005283F4: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052840B(); return; } /* jne: not equal / not zero */

loc_005283F8: ;
    PUSH32(esp, MEM32(esp + 4));
    eax = ecx;
    PUSH32(esp, 0); sub_005283CD(); /* call 0x005283CD */

loc_00528403: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052840B(); return; } /* jne: not equal / not zero */

loc_00528407: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0052840E(); return; /* tail jmp 0x0052840E */

}

/**
 * sub_00528411
 * Original: 0x00528411 - 0x0052873F (814 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528411(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528411: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x1E000000;
    esi = esi & eax;
    (void)0; /* cmp esi, 0x4000000 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, 0x4000000)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_00528434: ;
    if (TEST_NZ(ecx, 0xE0000000u)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_00528440: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 8);
    edi = ecx;
    edi = edi & eax;
    (void)0; /* cmp edi, 0x6000000 - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(edi, 0x6000000)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_00528459: ;
    if (TEST_NZ(ecx, 0xE0000000u)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_00528465: ;
    eax = MEM32(edx);
    edi = eax;
    edi = edi >> 0x18;
    edi = edi & 0xF;
    if ((edi == 0)) { sub_0052873F(); return; } /* je: equal / zero */

loc_00528475: ;
    if (TEST_NZ(HI8(eax), 0xF0)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_0052847E: ;
    ecx = MEM32(esi);
    edx = ecx;
    edx = edx >> 0x18;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0xF;
    (void)0; /* cmp MEM32(ebp + -12), edi - flags set for next jcc */
    MEM32(ebp + -20) = edx;
    if (CMP_NE(MEM32(ebp + -12), edi)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_00528498: ;
    edx = ecx;
    eax = eax >> 0x14;
    edx = edx >> 0x14;
    eax = eax & 0xF;
    edx = edx & 0xF;
    if (CMP_NE(edx, eax)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_005284AE: ;
    edi = MEM32(ebp + -20);
    edx = ecx;
    edx = edx >> 0xC;
    edi = ~edi;
    edx = edx & edi;
    if (TEST_NZ(LO8(edx), 0xF)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_005284C3: ;
    edi = MEM32(esi + 4);
    edx = edi;
    edx = edx & 0x30000000;
    if (CMP_NE(edx, 0x10000000)) goto loc_005284E4; /* jne: not equal / not zero */

loc_005284D6: ;
    edx = MEM32(ebp + -16);
    edx = edx & 0xF;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM8(ebp + -1) = 1;
    if (CMP_EQ(edx, eax)) goto loc_005284E8; /* je: equal / zero */

loc_005284E4: ;
    MEM8(ebp + -1) = 0;

loc_005284E8: ;
    ecx = ecx & 0x30000000;
    if (CMP_NE(ecx, 0x10000000)) goto loc_00528501; /* jne: not equal / not zero */

loc_005284F6: ;
    edi = edi & 0xF;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM8(ebp + -2) = 1;
    if (CMP_EQ(edi, eax)) goto loc_00528505; /* je: equal / zero */

loc_00528501: ;
    MEM8(ebp + -2) = 0;

loc_00528505: ;
    SET_LO8(eax, MEM8(ebp + -2));
    SET_LO8(eax, LO8(eax) ^ MEM8(ebp + -1));
    if ((LO8(eax) == 0)) { sub_0052873F(); return; } /* je: equal / zero */

loc_00528511: ;
    (void)0; /* cmp MEM8(ebp + -1), 0 - flags set for next jcc */
    PUSH32(esp, 3);
    POP32(esp, edi);
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_00528554; /* je: equal / zero */

loc_0052851A: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx >> 4;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xA;
    eax = eax >> 0xC;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0); sub_00527A3D(); /* call 0x00527A3D */

loc_0052854C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052873F(); return; } /* je: equal / zero */

loc_00528554: ;
    if (CMP_EQ(MEM8(ebp + -2), 0)) goto loc_00528594; /* je: equal / zero */

loc_0052855A: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx >> 4;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 8;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xA;
    eax = eax >> 0xC;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0); sub_00527A3D(); /* call 0x00527A3D */

loc_0052858C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052873F(); return; } /* je: equal / zero */

loc_00528594: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); sub_005283EB(); /* call 0x005283EB */

loc_0052859D: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM8(ebp + -3) = LO8(eax);
    PUSH32(esp, 0); sub_005283EB(); /* call 0x005283EB */

loc_005285A9: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(ebp + -5) = LO8(eax);
    PUSH32(esp, 0); sub_005283EB(); /* call 0x005283EB */

loc_005285B4: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, 0); sub_005283EB(); /* call 0x005283EB */

loc_005285C1: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = 0x1E000;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005285DE; /* je: equal / zero */

loc_005285CA: ;
    if (CMP_EQ(MEM8(ebp + -3), 0)) goto loc_005285DE; /* je: equal / zero */

loc_005285D0: ;
    eax = MEM32(ebp + -16);
    eax = eax ^ MEM32(ecx + 8);
    if (TEST_NZ(edx, eax)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_005285DE: ;
    if (CMP_EQ(MEM8(ebp + -5), 0)) goto loc_005285FB; /* je: equal / zero */

loc_005285E4: ;
    if (CMP_EQ(MEM8(ebp + -4), 0)) goto loc_005285FB; /* je: equal / zero */

loc_005285EA: ;
    eax = MEM32(ebp + -16);
    eax = eax ^ MEM32(ecx + 8);
    if (TEST_NZ(eax, 0x1FE0000)) { sub_0052873F(); return; } /* jne: not equal / not zero */

loc_005285FB: ;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    edi = ebx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = MEM32(ebx + 8);
    ecx = ecx & 0xE9FFFFFFu;
    ecx = ecx | 0x8000000;
    (void)0; /* cmp MEM8(ebp + -3), 0 - flags set for next jcc */
    MEM32(ebx + 8) = ecx;
    if (CMP_EQ(MEM8(ebp + -3), 0)) goto loc_00528629; /* je: equal / zero */

loc_0052861D: ;
    esi = MEM32(eax + 8);
    esi = esi ^ ecx;
    esi = esi & edx;
    esi = esi ^ ecx;
    MEM32(ebx + 8) = esi;

loc_00528629: ;
    if (CMP_EQ(MEM8(ebp + -4), 0)) goto loc_0052863E; /* je: equal / zero */

loc_0052862F: ;
    ecx = MEM32(ebx + 8);
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & 0x1FE0000;
    MEM32(ebx + 8) = MEM32(ebx + 8) ^ ecx;

loc_0052863E: ;
    (void)0; /* cmp MEM8(ebp + -1), 0 - flags set for next jcc */
    edi = 0x300;
    esi = 0xC0;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_005286AE; /* je: equal / zero */

loc_0052864E: ;
    ecx = MEM32(ebx);
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x30000000;
    MEM32(ebx) = MEM32(ebx) ^ ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx ^ MEM32(ebx + 4);
    ecx = ecx & 0x1000;
    MEM32(ebx + 4) = MEM32(ebx + 4) ^ ecx;
    edx = MEM32(ebx + 4);
    ecx = MEM32(eax + 4);
    ecx = ecx ^ edx;
    ecx = ecx & 0xF;
    ecx = ecx ^ edx;
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 4);
    edx = edx ^ ecx;
    edx = edx & 0xC00;
    edx = edx ^ ecx;
    MEM32(ebx + 4) = edx;
    ecx = MEM32(eax + 4);
    ecx = ecx ^ edx;
    ecx = ecx & edi;
    ecx = ecx ^ edx;
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 4);
    edx = edx ^ ecx;
    edx = edx & esi;
    edx = edx ^ ecx;
    MEM32(ebx + 4) = edx;
    ecx = MEM32(eax + 4);
    ecx = ecx ^ edx;
    ecx = ecx & 0x30;
    ecx = ecx ^ edx;
    MEM32(ebx + 4) = ecx;

loc_005286AE: ;
    if (CMP_EQ(MEM8(ebp + -2), 0)) goto loc_00528715; /* je: equal / zero */

loc_005286B4: ;
    ecx = MEM32(eax + 4);
    ecx = ecx ^ MEM32(ebx);
    ecx = ecx & 0x30000000;
    MEM32(ebx) = MEM32(ebx) ^ ecx;
    ecx = MEM32(ebx + 4);
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & 0x1000;
    MEM32(ebx + 4) = MEM32(ebx + 4) ^ ecx;
    edx = MEM32(ebx + 4);
    ecx = MEM32(eax + 8);
    ecx = ecx ^ edx;
    ecx = ecx & 0xF;
    ecx = ecx ^ edx;
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    edx = edx ^ ecx;
    edx = edx & 0xC00;
    edx = edx ^ ecx;
    MEM32(ebx + 4) = edx;
    ecx = MEM32(eax + 8);
    ecx = ecx ^ edx;
    ecx = ecx & edi;
    ecx = ecx ^ edx;
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    edx = edx ^ ecx;
    edx = edx & esi;
    edx = edx ^ ecx;
    MEM32(ebx + 4) = edx;
    ecx = MEM32(eax + 8);
    ecx = ecx ^ edx;
    ecx = ecx & 0x30;
    ecx = ecx ^ edx;
    MEM32(ebx + 4) = ecx;

loc_00528715: ;
    ecx = MEM32(ebx);
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 4;
    MEM32(ebx) = MEM32(ebx) ^ ecx;
    ecx = MEM32(eax);
    edx = MEM32(ebx);
    ecx = ecx ^ edx;
    ecx = ecx & 0xF000;
    ecx = ecx ^ edx;
    MEM32(ebx) = ecx;
    eax = MEM32(eax);
    eax = eax ^ ecx;
    eax = eax & 0xFF8;
    eax = eax ^ ecx;
    MEM32(ebx) = eax;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00528741(); return; /* tail jmp 0x00528741 */

}

/**
 * sub_00528747
 * Original: 0x00528747 - 0x00528782 (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528747(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528747: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00527649(); /* call 0x00527649 */

loc_00528755: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00528782(); return; } /* jne: not equal / not zero */

loc_00528759: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_005282C7(); /* call 0x005282C7 */

loc_00528762: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00528782(); return; } /* jne: not equal / not zero */

loc_00528766: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00528411(); /* call 0x00528411 */

loc_0052876D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00528782(); return; } /* jne: not equal / not zero */

loc_00528771: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ebx = esi;
    PUSH32(esp, 0); sub_00528084(); /* call 0x00528084 */

loc_0052877A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00528782(); return; } /* jne: not equal / not zero */

loc_0052877E: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00528785(); return; /* tail jmp 0x00528785 */

}

/**
 * sub_00528788
 * Original: 0x00528788 - 0x005287A6 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528788(void)
{
    int _flags = 0; /* fallback flag var */

loc_00528788: ;
    eax = MEM32(eax + 8);
    ecx = eax;
    ecx = ecx >> 0x19;
    ecx = ecx & 0xF;
    if (CMP_NE(MEM8(ecx + 0x534688), 0)) { sub_005287A6(); return; } /* jne: not equal / not zero */

loc_0052879C: ;
    if (TEST_NZ(eax, 0xE0000000u)) { sub_005287A6(); return; } /* jne: not equal / not zero */

loc_005287A3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_005287AA
 * Original: 0x005287AA - 0x005287D5 (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005287AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005287AA: ;
    SET_LO8(edx, MEM8(eax + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    POP32(esp, ebx);
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    MEM8(ecx) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 0x14;
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    MEM8(ecx + 1) = LO8(edx);
    (void)0; /* test MEM8(eax + 3), LO8(ebx) - flags set for next jcc */
    edi = 0x1E000000;
    if (TEST_Z(MEM8(eax + 3), LO8(ebx))) { sub_005287D5(); return; } /* je: equal / zero */

loc_005287CB: ;
    if (TEST_Z(MEM32(eax + 8), edi)) { sub_005287D5(); return; } /* je: equal / zero */

loc_005287D0: ;
    edx = 0; /* xor self */
    edx++;
    g_seh_ebp = ebp; sub_005287D7(); return; /* tail jmp 0x005287D7 */

}

/**
 * sub_0052881E
 * Original: 0x0052881E - 0x00528839 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052881E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052881E: ;
    if (CMP_EQ(MEM8(eax + 2), 0)) { sub_00528839(); return; } /* je: equal / zero */

loc_00528824: ;
    if (CMP_EQ(MEM8(eax + 5), 0)) { sub_00528839(); return; } /* je: equal / zero */

loc_0052882A: ;
    if (CMP_EQ(MEM8(eax + 1), 1)) goto loc_00528836; /* je: equal / zero */

loc_00528830: ;
    if (CMP_EQ(MEM8(eax + 4), 1)) { sub_00528839(); return; } /* je: equal / zero */

loc_00528836: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00528882
 * Original: 0x00528882 - 0x00528916 (148 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528882(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528882: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_005287AA(); /* call 0x005287AA */

loc_00528893: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_005287AA(); /* call 0x005287AA */

loc_0052889E: ;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */

loc_005288A2: ;
    (void)0; /* cmp MEM8(ebp + eax + -22), LO8(ebx) - flags set for next jcc */
    ecx = ebp + eax + -24;
    edx = ebp + eax + -16;
    esi = ecx;
    edi = edx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */
    if (CMP_EQ(MEM8(ebp + eax + -22), LO8(ebx))) goto loc_005288D1; /* je: equal / zero */

loc_005288B7: ;
    if (CMP_EQ(MEM8(ebp + eax + -6), LO8(ebx))) goto loc_005288E0; /* je: equal / zero */

loc_005288BD: ;
    SET_LO8(ebx, MEM8(ebp + eax + -23));
    if (CMP_NE(LO8(ebx), MEM8(ebp + eax + -7))) goto loc_00528912; /* jne: not equal / not zero */

loc_005288C7: ;
    SET_LO8(ecx, MEM8(ecx));
    if (CMP_NE(LO8(ecx), MEM8(ebp + eax + -8))) goto loc_00528912; /* jne: not equal / not zero */

loc_005288CF: ;
    ebx = 0; /* xor self */

loc_005288D1: ;
    if (CMP_EQ(MEM8(ebp + eax + -6), LO8(ebx))) goto loc_005288E0; /* je: equal / zero */

loc_005288D7: ;
    esi = ebp + eax + -8;
    edi = edx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */

loc_005288E0: ;
    eax = eax + 3;
    if (CMP_L(eax, 6)) goto loc_005288A2; /* jl: less (signed <) */

loc_005288E8: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 8);
    if (TEST_Z(eax, 0x1E000000)) { sub_00528916(); return; } /* je: equal / zero */

loc_005288F5: ;
    if (TEST_Z(eax, 0xE0000000u)) { sub_00528916(); return; } /* je: equal / zero */

loc_005288FC: ;
    if (CMP_EQ(MEM8(ebp + -11), LO8(ebx))) goto loc_00528907; /* je: equal / zero */

loc_00528901: ;
    if (CMP_NE(MEM8(ebp + -12), 1)) goto loc_00528912; /* jne: not equal / not zero */

loc_00528907: ;
    if (CMP_EQ(MEM8(ebp + -14), LO8(ebx))) { sub_00528916(); return; } /* je: equal / zero */

loc_0052890C: ;
    if (CMP_NE(MEM8(ebp + -15), 1)) { sub_00528916(); return; } /* jne: not equal / not zero */

loc_00528912: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052891E(); return; /* tail jmp 0x0052891E */

}

/**
 * sub_00528925
 * Original: 0x00528925 - 0x00528B54 (559 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528925(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528925: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ebx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 0xC);
    edi = MEM32(esi + 8);
    eax = edi;
    eax = eax >> 0x19;
    eax = eax & 0xF;
    if ((eax == 0)) goto loc_0052896F; /* je: equal / zero */

loc_00528945: ;
    ecx = MEM32(edx + 8);
    ecx = ecx >> 0x19;
    ecx = ecx & 0xF;
    if ((ecx == 0)) goto loc_00528962; /* je: equal / zero */

loc_00528950: ;
    if (CMP_EQ(ecx, eax)) goto loc_00528962; /* je: equal / zero */

loc_00528954: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x7B;
    g_seh_ebp = ebp; sub_00528C50(); return; /* tail jmp 0x00528C50 */

loc_00528962: ;
    eax = MEM32(ebx + 8);
    eax = eax ^ edi;
    eax = eax & 0x1E000000;
    MEM32(ebx + 8) = MEM32(ebx + 8) ^ eax;

loc_0052896F: ;
    eax = MEM32(esi + 8);
    edi = eax;
    edi = edi >> 0x1D;
    if ((edi == 0)) goto loc_00528995; /* je: equal / zero */

loc_00528979: ;
    ecx = MEM32(edx + 8);
    ecx = ecx >> 0x1D;
    if ((ecx == 0)) goto loc_00528985; /* je: equal / zero */

loc_00528981: ;
    if (CMP_NE(ecx, edi)) goto loc_00528954; /* jne: not equal / not zero */

loc_00528985: ;
    ecx = MEM32(ebx + 8);
    ecx = ecx ^ eax;
    ecx = ecx & 0x1FFFFFFF;
    ecx = ecx ^ eax;
    MEM32(ebx + 8) = ecx;

loc_00528995: ;
    edi = MEM32(esi + 8);
    eax = edi;
    eax = eax >> 0x19;
    eax = eax & 0xF;
    if (CMP_EQ(MEM8(eax + 0x534668), 0)) goto loc_00528A23; /* je: equal / zero */

loc_005289A9: ;
    eax = MEM32(edx + 8);
    eax = eax >> 0x19;
    eax = eax & 0xF;
    if (CMP_EQ(MEM8(eax + 0x534668), 0)) goto loc_005289F7; /* je: equal / zero */

loc_005289BB: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edx + 4);
    eax = eax >> 0x1C;
    ecx = ecx >> 0x1C;
    eax = eax & 3;
    ecx = ecx & 3;
    if (CMP_EQ(eax, ecx)) goto loc_005289DF; /* je: equal / zero */

loc_005289D1: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x7C;
    g_seh_ebp = ebp; sub_00528C50(); return; /* tail jmp 0x00528C50 */

loc_005289DF: ;
    ecx = MEM32(edx + 8);
    ecx = ecx ^ edi;
    if (TEST_NZ(HI8(ecx), 0x10)) goto loc_005289D1; /* jne: not equal / not zero */

loc_005289E9: ;
    if (CMP_NE(eax, 1)) goto loc_005289F7; /* jne: not equal / not zero */

loc_005289EE: ;
    eax = MEM32(edx + 8);
    eax = eax ^ edi;
    if (TEST_NZ(LO8(eax), 0xF)) goto loc_005289D1; /* jne: not equal / not zero */

loc_005289F7: ;
    eax = MEM32(esi + 4);
    eax = eax ^ MEM32(ebx + 4);
    eax = eax & 0x30000000;
    MEM32(ebx + 4) = MEM32(ebx + 4) ^ eax;
    ecx = MEM32(esi + 8);
    eax = ebx + 8;
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x1000;
    MEM32(eax) = MEM32(eax) ^ ecx;
    ecx = MEM32(eax);
    edi = MEM32(esi + 8);
    edi = edi ^ ecx;
    edi = edi & 0xF;
    edi = edi ^ ecx;
    MEM32(eax) = edi;

loc_00528A23: ;
    eax = MEM32(esi + 8);
    eax = eax >> 0x19;
    eax = eax & 0xF;
    if (CMP_EQ(MEM8(eax + 0x534678), 0)) goto loc_00528ABF; /* je: equal / zero */

loc_00528A39: ;
    eax = MEM32(edx + 8);
    eax = eax >> 0x19;
    eax = eax & 0xF;
    if (CMP_EQ(MEM8(eax + 0x534678), 0)) goto loc_00528A8F; /* je: equal / zero */

loc_00528A4B: ;
    edx = MEM32(edx + 4);
    ecx = MEM32(esi + 4);
    eax = ecx;
    edi = edx;
    eax = eax >> 0xD;
    edi = edi >> 0xD;
    eax = eax & 3;
    edi = edi & 3;
    if (CMP_NE(eax, edi)) goto loc_005289D1; /* jne: not equal / not zero */

loc_00528A69: ;
    edi = ecx;
    edi = edi ^ edx;
    if (TEST_NZ(edi, 0x8000000)) goto loc_005289D1; /* jne: not equal / not zero */

loc_00528A79: ;
    if (CMP_NE(eax, 1)) goto loc_00528A8C; /* jne: not equal / not zero */

loc_00528A7E: ;
    ecx = ecx ^ edx;
    if (TEST_NZ(ecx, 0x78000)) goto loc_005289D1; /* jne: not equal / not zero */

loc_00528A8C: ;
    edx = MEM32(ebp + 8);

loc_00528A8F: ;
    eax = MEM32(esi + 4);
    eax = eax ^ MEM32(ebx + 4);
    eax = eax & 0x6000;
    MEM32(ebx + 4) = MEM32(ebx + 4) ^ eax;
    ecx = MEM32(ebx + 4);
    eax = MEM32(esi + 4);
    eax = eax ^ ecx;
    eax = eax & 0x8000000;
    eax = eax ^ ecx;
    MEM32(ebx + 4) = eax;
    ecx = MEM32(esi + 4);
    ecx = ecx ^ eax;
    ecx = ecx & 0x78000;
    ecx = ecx ^ eax;
    MEM32(ebx + 4) = ecx;

loc_00528ABF: ;
    eax = esi;
    PUSH32(esp, 0); sub_00528788(); /* call 0x00528788 */

loc_00528AC6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00528B39; /* je: equal / zero */

loc_00528ACA: ;
    eax = edx;
    PUSH32(esp, 0); sub_00528788(); /* call 0x00528788 */

loc_00528AD1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00528B10; /* je: equal / zero */

loc_00528AD5: ;
    eax = MEM32(esi);
    ecx = MEM32(edx);
    eax = eax >> 0x1C;
    ecx = ecx >> 0x1C;
    eax = eax & 3;
    ecx = ecx & 3;
    if (CMP_NE(eax, ecx)) goto loc_005289D1; /* jne: not equal / not zero */

loc_00528AED: ;
    edi = MEM32(edx + 4);
    ecx = MEM32(esi + 4);
    ecx = ecx ^ edi;
    if (TEST_NZ(HI8(ecx), 0x10)) goto loc_005289D1; /* jne: not equal / not zero */

loc_00528AFE: ;
    if (CMP_NE(eax, 1)) goto loc_00528B10; /* jne: not equal / not zero */

loc_00528B03: ;
    eax = MEM32(esi + 4);
    eax = eax ^ edi;
    if (TEST_NZ(LO8(eax), 0xF)) goto loc_005289D1; /* jne: not equal / not zero */

loc_00528B10: ;
    eax = MEM32(ebx);
    eax = eax ^ MEM32(esi);
    eax = eax & 0x30000000;
    MEM32(ebx) = MEM32(ebx) ^ eax;
    ecx = MEM32(esi + 4);
    eax = ebx + 4;
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x1000;
    MEM32(eax) = MEM32(eax) ^ ecx;
    ecx = MEM32(eax);
    edi = MEM32(esi + 4);
    edi = edi ^ ecx;
    edi = edi & 0xF;
    edi = edi ^ ecx;
    MEM32(eax) = edi;

loc_00528B39: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = edx;
    PUSH32(esp, 0); sub_00528271(); /* call 0x00528271 */

loc_00528B42: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00528B54(); return; } /* jne: not equal / not zero */

loc_00528B46: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x7D;
    g_seh_ebp = ebp; sub_00528C50(); return; /* tail jmp 0x00528C50 */

}

/**
 * sub_00528C5C
 * Original: 0x00528C5C - 0x00528CC1 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528C5C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528C5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00528925(); /* call 0x00528925 */

loc_00528C73: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00528CBD; /* jne: not equal / not zero */

loc_00528C77: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -12;
    PUSH32(esp, 0); sub_0052739E(); /* call 0x0052739E */

loc_00528C82: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00528C9A; /* je: equal / zero */

loc_00528C86: ;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00528925(); /* call 0x00528925 */

loc_00528C96: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00528CBD; /* jne: not equal / not zero */

loc_00528C9A: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -12;
    PUSH32(esp, 0); sub_0052739E(); /* call 0x0052739E */

loc_00528CA5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00528CC1(); return; } /* je: equal / zero */

loc_00528CA9: ;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00528925(); /* call 0x00528925 */

loc_00528CB9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00528CC1(); return; } /* je: equal / zero */

loc_00528CBD: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00528CC3(); return; /* tail jmp 0x00528CC3 */

}

/**
 * sub_00528CC8
 * Original: 0x00528CC8 - 0x00528D4C (132 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528CC8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528CC8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx), eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = eax;
    if (CMP_LE(MEM32(ebx), eax)) goto loc_00528D43; /* jle: less or equal (signed <=) */

loc_00528CDA: ;
    ecx = ebx + 4;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, edi);

loc_00528CE2: ;
    edx = MEM32(ebx);
    ecx = eax + eax * 2;
    ecx = ebx + ecx * 4;
    esi = ecx + 4;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edx--;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_GE(eax, edx)) goto loc_00528D29; /* jge: greater or equal (signed >=) */

loc_00528CF8: ;
    ecx = ecx + 0x10;
    MEM32(ebp + -8) = ecx;

loc_00528CFE: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    edi = ebp + -28;
    PUSH32(esp, 0); sub_00527649(); /* call 0x00527649 */

loc_00528D0D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00528D26; /* je: equal / zero */

loc_00528D11: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0xC;
    eax = MEM32(ebx);
    esi = ebp + -40;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax--;
    (void)0; /* cmp MEM32(ebp + -4), eax - flags set for next jcc */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_00528CFE; /* jl: less (signed <) */

loc_00528D26: ;
    eax = MEM32(ebp + -4);

loc_00528D29: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0xC;
    esi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax++;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    (void)0; /* cmp eax, MEM32(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, MEM32(ebx))) goto loc_00528CE2; /* jl: less (signed <) */

loc_00528D41: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00528D43: ;
    eax = MEM32(ebp + -16);
    MEM32(ebx) = eax;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00528D4C
 * Original: 0x00528D4C - 0x00528DD2 (134 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528D4C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00528D4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx), eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = eax;
    if (CMP_LE(MEM32(ebx), eax)) goto loc_00528DC9; /* jle: less or equal (signed <=) */

loc_00528D5E: ;
    ecx = ebx + 4;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, edi);

loc_00528D66: ;
    edx = MEM32(ebx);
    ecx = eax + eax * 2;
    ecx = ebx + ecx * 4;
    esi = ecx + 4;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edx--;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_GE(eax, edx)) goto loc_00528DAF; /* jge: greater or equal (signed >=) */

loc_00528D7C: ;
    ecx = ecx + 0x10;
    MEM32(ebp + -8) = ecx;

loc_00528D82: ;
    esi = MEM32(ebp + -8);
    eax = ebp + -28;
    ecx = ebp + -40;
    PUSH32(esp, 0); sub_00528747(); /* call 0x00528747 */

loc_00528D90: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00528DAC; /* je: equal / zero */

loc_00528D94: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0xC;
    eax = MEM32(ebx);
    esi = ebp + -40;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax--;
    (void)0; /* cmp MEM32(ebp + -4), eax - flags set for next jcc */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_00528D82; /* jl: less (signed <) */

loc_00528DAC: ;
    eax = MEM32(ebp + -4);

loc_00528DAF: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0xC;
    esi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax++;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    (void)0; /* cmp eax, MEM32(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, MEM32(ebx))) goto loc_00528D66; /* jl: less (signed <) */

loc_00528DC7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00528DC9: ;
    eax = MEM32(ebp + -16);
    MEM32(ebx) = eax;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00528DD2
 * Original: 0x00528DD2 - 0x00529031 (607 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528DD2(void)
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

loc_00528DD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xAF8;
    (void)0; /* cmp MEM8(ebp + 8), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    if (CMP_EQ(MEM8(ebp + 8), 0)) goto loc_00528DFA; /* je: equal / zero */

loc_00528DE6: ;
    if (CMP_NE(MEM8(ebp + 0x14), 0)) goto loc_00528DFA; /* jne: not equal / not zero */

loc_00528DEC: ;
    if (CMP_NE(MEM8(ebp + 0x18), 0)) goto loc_00528DFA; /* jne: not equal / not zero */

loc_00528DF2: ;
    MEM8(ebp + 0x14) = 0;
    MEM8(ebp + 0x18) = 1;

loc_00528DFA: ;
    if (CMP_NE(MEM8(ebp + 0x10), 1)) goto loc_00528E06; /* jne: not equal / not zero */

loc_00528E00: ;
    if (TEST_Z(MEM8(ebp + 0x11), 2)) goto loc_00528E1E; /* je: equal / zero */

loc_00528E06: ;
    if (CMP_NE(MEM8(ebp + 0x14), 0)) goto loc_00528E16; /* jne: not equal / not zero */

loc_00528E0C: ;
    (void)0; /* cmp MEM8(ebp + 0x18), 0 - flags set for next jcc */
    MEM8(ebp + 0x14) = 0;
    if (CMP_EQ(MEM8(ebp + 0x18), 0)) goto loc_00528E1A; /* je: equal / zero */

loc_00528E16: ;
    MEM8(ebp + 0x14) = 1;

loc_00528E1A: ;
    MEM8(ebp + 0x18) = 0;

loc_00528E1E: ;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + 0x18), 0 - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    MEM8(ebp + -5) = 0;
    if (CMP_EQ(MEM8(ebp + 0x18), 0)) goto loc_00528E9D; /* je: equal / zero */

loc_00528E30: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1324);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00528E3F: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(eax, esi)) goto loc_00528E4D; /* jne: not equal / not zero */

loc_00528E46: ;
    MEM32(ebp + -4) = 0x8007000Eu;

loc_00528E4D: ;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    (void)0; /* cmp MEM32(ebx), esi - flags set for next jcc */
    MEM32(ebp + -16) = esi;
    if (CMP_LE(MEM32(ebx), esi)) goto loc_00528E74; /* jle: less or equal (signed <=) */

loc_00528E58: ;
    edx = ebx;
    ecx = eax + 4;
    edx = edx - eax;

loc_00528E5F: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    esi = edx + ecx;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    if (CMP_L(esi, MEM32(ebx))) goto loc_00528E5F; /* jl: less (signed <) */

loc_00528E74: ;
    if (CMP_NE(MEM8(ebp + 8), 0)) goto loc_00528E83; /* jne: not equal / not zero */

loc_00528E7A: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528E9D; /* je: equal / zero */

loc_00528E80: ;
    eax = MEM32(ebp + -12);

loc_00528E83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052AD91(); /* call 0x0052AD91 */

loc_00528E89: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00528E9D; /* jne: not equal / not zero */

loc_00528E8D: ;
    (void)0; /* cmp MEM8(ebp + 0x14), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -5) = 1;
    if (CMP_NE(MEM8(ebp + 0x14), LO8(eax))) goto loc_00528EA7; /* jne: not equal / not zero */

loc_00528E96: ;
    MEM32(ebp + -4) = 0xFFFFEFE5u;

loc_00528E9D: ;
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_00528FAA; /* je: equal / zero */

loc_00528EA7: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = MEM32(ebx);
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528EB3: ;
    if (CMP_EQ(MEM8(ebp + 8), 0)) goto loc_00528EC1; /* je: equal / zero */

loc_00528EB9: ;
    PUSH32(esp, 0); sub_005282F7(); /* call 0x005282F7 */

loc_00528EBE: ;
    MEM32(ebp + -4) = eax;

loc_00528EC1: ;
    edi = 0; /* xor self */
    if (CMP_L(MEM32(ebp + -4), edi)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528ECC: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528EF0; /* je: equal / zero */

loc_00528ED2: ;
    PUSH32(esp, ebx);
    eax = ebp + -560;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00524F08(); /* call 0x00524F08 */

loc_00528EE2: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, edi)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528EED: ;
    MEM32(ebp + -4) = edi;

loc_00528EF0: ;
    if (CMP_L(MEM32(ebp + -4), edi)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528EF9: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528F1D; /* je: equal / zero */

loc_00528EFF: ;
    if (TEST_NZ(MEM8(ebp + 0x11), 2)) goto loc_00528F1D; /* jne: not equal / not zero */

loc_00528F05: ;
    PUSH32(esp, ebx);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052634B(); /* call 0x0052634B */

loc_00528F0F: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, edi)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F1A: ;
    MEM32(ebp + -4) = edi;

loc_00528F1D: ;
    if (CMP_L(MEM32(ebp + -4), edi)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F26: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528F4B; /* je: equal / zero */

loc_00528F2C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebx;
    edi = ebp + -2808;
    PUSH32(esp, 0); sub_00525F47(); /* call 0x00525F47 */

loc_00528F3C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F47: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_00528F4B: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F55: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528F66; /* je: equal / zero */

loc_00528F5B: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_005276B3(); /* call 0x005276B3 */

loc_00528F63: ;
    MEM32(ebp + -4) = eax;

loc_00528F66: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F70: ;
    if (CMP_EQ(MEM8(ebp + 8), 0)) goto loc_00528F7E; /* je: equal / zero */

loc_00528F76: ;
    PUSH32(esp, 0); sub_00528CC8(); /* call 0x00528CC8 */

loc_00528F7B: ;
    MEM32(ebp + -4) = eax;

loc_00528F7E: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F88: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528F96; /* je: equal / zero */

loc_00528F8E: ;
    PUSH32(esp, 0); sub_00528D4C(); /* call 0x00528D4C */

loc_00528F93: ;
    MEM32(ebp + -4) = eax;

loc_00528F96: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528F9C: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) goto loc_00528FAA; /* je: equal / zero */

loc_00528FA2: ;
    if (CMP_L(MEM32(ebx), esi)) goto loc_00528EA7; /* jl: less (signed <) */

loc_00528FAA: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0052900E; /* jl: less (signed <) */

loc_00528FB0: ;
    if (CMP_EQ(MEM8(ebp + 0x18), 0)) goto loc_00529027; /* je: equal / zero */

loc_00528FB6: ;
    if (CMP_NE(MEM8(ebp + -5), 0)) goto loc_0052900E; /* jne: not equal / not zero */

loc_00528FBC: ;
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_00528FEC; /* je: equal / zero */

loc_00528FC2: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebx;
    PUSH32(esp, 0); sub_0052775A(); /* call 0x0052775A */

loc_00528FD0: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + -12);
    PUSH32(esp, 0); sub_0052775A(); /* call 0x0052775A */

loc_00528FDF: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 0xc] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0052900E; /* jp: parity */

loc_00528FEC: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0052900E; /* jle: less or equal (signed <=) */

loc_00528FF9: ;
    eax = ebx + 4;
    ecx = ecx - ebx;

loc_00528FFE: ;
    esi = ecx + eax;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edx++;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = eax + 0xC;
    if (CMP_L(edx, MEM32(ebx))) goto loc_00528FFE; /* jl: less (signed <) */

loc_0052900E: ;
    if (CMP_EQ(MEM8(ebp + 0x18), 0)) goto loc_00529027; /* je: equal / zero */

loc_00529014: ;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_00529027; /* je: equal / zero */

loc_0052901A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00529027: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00529031
 * Original: 0x00529031 - 0x0052905C (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529031(void)
{
    int _flags = 0; /* fallback flag var */

loc_00529031: ;
    eax = ZX16(MEM16(eax));
    if (CMP_EQ(eax, 0x2078)) { sub_0052905C(); return; } /* je: equal / zero */

loc_0052903B: ;
    if (CMP_EQ(eax, 0x7378)) goto loc_00529058; /* je: equal / zero */

loc_00529042: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x7778 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, 0x7778)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & 0xFD;
    ecx++;
    ecx++;
    eax = ecx;
    esp += 4; return; /* ret */

loc_00529058: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00529060
 * Original: 0x00529060 - 0x005290A9 (73 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx++;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(edi, edi)) { sub_005290A9(); return; } /* je: equal / zero */

loc_0052907C: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x14), eax - flags set for next jcc */
    PUSH32(esp, 4);
    POP32(esp, esi);
    if (CMP_BE(MEM32(ebp + 0x14), eax)) goto loc_0052909B; /* jbe: below or equal (unsigned <=) */

loc_00529086: ;
    edi = MEM32(ecx + eax * 4);
    edi = ZX16(MEM16(edi + 2));
    edi = edi << 4;
    esi = esi + edi;
    eax++;
    if (CMP_B(eax, MEM32(ebp + 0x14))) goto loc_00529086; /* jb: below (unsigned <) */

loc_00529098: ;
    edi = MEM32(ebp + 8);

loc_0052909B: ;
    if (CMP_BE(esi, MEM32(edi))) { sub_005290A9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0052909F: ;
    eax = 0; /* xor self */
    MEM32(edi) = esi;
    eax++;
    g_seh_ebp = ebp; sub_005291EF(); return; /* tail jmp 0x005291EF */

}

/**
 * sub_005291F6
 * Original: 0x005291F6 - 0x00529205 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005291F6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005291F6: ;
    if (CMP_NE(MEM32(esp + 4), 0xFF0000)) { sub_00529205(); return; } /* jne: not equal / not zero */

loc_00529200: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_00529207(); return; /* tail jmp 0x00529207 */

}

/**
 * sub_0052920A
 * Original: 0x0052920A - 0x0052925B (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052920A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052920A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_0052925B(); return; } /* jne: not equal / not zero */

loc_00529217: ;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_0052921E: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x14);
    edx = eax;
    eax = MEM32(ebp + 0x18);
    edx = edx | MEM32(eax);
    eax = MEM32(ebp + 0x20);
    edx = edx | MEM32(eax);
    eax = MEM32(0x535114);
    edx = edx << 0x18;
    edx = edx | 0x200000;
    MEM32(eax + ecx * 4 + 0x88) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edx = edx << 8;
    edx = edx | MEM32(esi);
    edx = edx << 4;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_005292A2(); return; /* tail jmp 0x005292A2 */

}

/**
 * sub_005292A7
 * Original: 0x005292A7 - 0x00529307 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005292A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005292A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529307(); return; } /* jne: not equal / not zero */

loc_005292B4: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005292BC: ;
    PUSH32(esp, MEM32(ecx));
    edx = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005292C5: ;
    ecx = MEM32(ebp + 0x20);
    esi = eax;
    eax = MEM32(ebp + 0x18);
    esi = esi | MEM32(eax);
    esi = esi | MEM32(ecx);
    esi = esi << 8;
    edx = edx | esi;
    edx = edx | MEM32(eax + 4);
    eax = MEM32(0x535114);
    edx = edx | MEM32(ecx + 4);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x14);
    edx = edx << 0x10;
    MEM32(eax + ecx * 4 + 0x88) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edx = edx << 8;
    edx = edx | MEM32(esi);
    edx = edx << 4;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_0052936D(); return; /* tail jmp 0x0052936D */

}

/**
 * sub_00529372
 * Original: 0x00529372 - 0x005293D6 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529372(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529372: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_005293D6(); return; } /* jne: not equal / not zero */

loc_0052937B: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529387: ;
    PUSH32(esp, MEM32(ecx));
    edx = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529390: ;
    ecx = MEM32(ebp + 0x20);
    esi = eax;
    eax = MEM32(ebp + 0x18);
    esi = esi | MEM32(eax);
    esi = esi | MEM32(ecx);
    esi = esi << 8;
    edx = edx | esi;
    edx = edx | MEM32(eax + 4);
    eax = MEM32(0x535114);
    edx = edx | MEM32(ecx + 4);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x14);
    edx = edx << 0x10;
    MEM32(eax + ecx * 4 + 0x88) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edx = edx | 2;
    edx = edx << 8;
    edx = edx | MEM32(esi);
    POP32(esp, esi);
    edx = edx << 4;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_005293EA(); return; /* tail jmp 0x005293EA */

}

/**
 * sub_005293EE
 * Original: 0x005293EE - 0x00529454 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005293EE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005293EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529454(); return; } /* jne: not equal / not zero */

loc_005293FB: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529403: ;
    PUSH32(esp, MEM32(ecx));
    edx = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_0052940C: ;
    ecx = MEM32(ebp + 0x20);
    esi = eax;
    eax = MEM32(ebp + 0x18);
    esi = esi | MEM32(eax);
    esi = esi | MEM32(ecx);
    esi = esi << 0x10;
    edx = edx | esi;
    edx = edx | MEM32(eax + 4);
    eax = MEM32(0x535114);
    edx = edx | MEM32(ecx + 4);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x14);
    edx = edx << 8;
    edx = edx | 0x200020;
    MEM32(eax + ecx * 4 + 0x88) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_005294BA(); return; /* tail jmp 0x005294BA */

}

/**
 * sub_005294BF
 * Original: 0x005294BF - 0x00529525 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005294BF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005294BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529525(); return; } /* jne: not equal / not zero */

loc_005294CC: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005294D4: ;
    PUSH32(esp, MEM32(ecx));
    edx = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005294DD: ;
    ecx = MEM32(ebp + 0x20);
    esi = eax;
    eax = MEM32(ebp + 0x18);
    esi = esi | MEM32(eax);
    esi = esi | MEM32(ecx);
    esi = esi << 0x10;
    edx = edx | esi;
    edx = edx | MEM32(eax + 4);
    eax = MEM32(0x535114);
    edx = edx | MEM32(ecx + 4);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x14);
    edx = edx << 8;
    edx = edx | 0x200040;
    MEM32(eax + ecx * 4 + 0x88) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_0052958B(); return; /* tail jmp 0x0052958B */

}

/**
 * sub_00529590
 * Original: 0x00529590 - 0x00529605 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529605(); return; } /* jne: not equal / not zero */

loc_0052959B: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005295A6: ;
    PUSH32(esp, MEM32(ecx));
    edi = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005295AF: ;
    edx = MEM32(ebp + 0x18);
    eax = eax | MEM32(edx);
    esi = MEM32(ebp + 0x20);
    eax = eax | MEM32(esi);
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax << 8;
    edi = edi | eax;
    edi = edi | MEM32(edx + 4);
    edi = edi | MEM32(esi + 4);
    edi = edi << 0x10;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005295CF: ;
    ecx = MEM32(ebp + 8);
    edi = edi | eax;
    edi = edi | MEM32(edx + 8);
    eax = MEM32(0x535114);
    edi = edi | MEM32(esi + 8);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edi = edi | 0x2000;
    MEM32(eax + ecx * 4 + 0x88) = edi;
    edx = MEM32(edx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_00529684(); return; /* tail jmp 0x00529684 */

}

/**
 * sub_0052968A
 * Original: 0x0052968A - 0x00529729 (159 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052968A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052968A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x20);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0x20)) goto loc_005296A1; /* je: equal / zero */

loc_0052969A: ;
    if (TEST_Z(eax, eax)) goto loc_005296A1; /* je: equal / zero */

loc_0052969E: ;
    MEM32(ebx) = MEM32(ebx) & 0;

loc_005296A1: ;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    edx = MEM32(ebp + 0x1C);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529729(); return; } /* jne: not equal / not zero */

loc_005296AA: ;
    PUSH32(esp, MEM32(edx));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005296B1: ;
    PUSH32(esp, MEM32(edx + 4));
    ecx = MEM32(ebx);
    edi = eax;
    eax = MEM32(ebp + 0x18);
    esi = MEM32(eax);
    MEM32(ebp + 0x1C) = esi;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005296C5: ;
    PUSH32(esp, MEM32(edx + 8));
    esi = esi | edi;
    esi = esi | ecx;
    esi = esi << 8;
    eax = eax | esi;
    esi = MEM32(ebp + 0x18);
    eax = eax | MEM32(esi + 4);
    eax = eax | MEM32(ebx + 4);
    eax = eax << 8;
    edx = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005296E4: ;
    edx = edx | eax;
    edx = edx | MEM32(esi + 8);
    eax = MEM32(0x535114);
    edx = edx | MEM32(ebx + 8);
    esi = MEM32(ebp + 0x14);
    edx = edx << 8;
    ecx = ecx >> 5;
    edx = edx | MEM32(ecx * 4 + 0x7587E0);
    ecx = MEM32(ebp + 8);
    edx = edx | MEM32(ebp + 0x1C);
    edx = edx | edi;
    MEM32(eax + ecx * 4 + 0x88) = edx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_005297C9(); return; /* tail jmp 0x005297C9 */

}

/**
 * sub_005297D0
 * Original: 0x005297D0 - 0x0052983B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005297D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005297D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_0052983B(); return; } /* jne: not equal / not zero */

loc_005297DE: ;
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005297E6: ;
    edx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, MEM32(ecx + 4));
    edi = eax;
    edi = edi | MEM32(edx + 8);
    edi = edi | MEM32(esi + 8);
    edi = edi << 0x10;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005297FF: ;
    ecx = MEM32(ebp + 8);
    edi = edi | eax;
    edi = edi | MEM32(edx + 4);
    eax = MEM32(0x535114);
    edi = edi | MEM32(esi + 4);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edi = edi << 8;
    edi = edi | 0x200020;
    MEM32(eax + ecx * 4 + 0x88) = edi;
    edx = MEM32(edx);
    edx = edx | 4;
    edx = edx << 4;
    edx = edx | MEM32(esi);
    edx = edx << 8;
    MEM32(eax + ecx * 4 + 0xB4) = edx;
    g_seh_ebp = ebp; sub_005298A5(); return; /* tail jmp 0x005298A5 */

}

/**
 * sub_005298AB
 * Original: 0x005298AB - 0x0052993D (146 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005298AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005298AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_0052993D(); return; } /* jne: not equal / not zero */

loc_005298BA: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005298C5: ;
    PUSH32(esp, MEM32(ecx));
    edi = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005298CE: ;
    edx = MEM32(ebp + 0x18);
    eax = eax | MEM32(edx);
    esi = MEM32(ebp + 0x20);
    eax = eax | MEM32(esi);
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax << 8;
    edi = edi | eax;
    edi = edi | MEM32(edx + 4);
    edi = edi | MEM32(esi + 4);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005298EE: ;
    PUSH32(esp, MEM32(ecx + 0xC));
    edi = edi | eax;
    edi = edi | MEM32(edx + 8);
    edi = edi | MEM32(esi + 8);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529901: ;
    ecx = MEM32(ebp + 0x10);
    edi = edi | eax;
    edi = edi | MEM32(edx + 0xC);
    eax = MEM32(0x535114);
    edi = edi | MEM32(esi + 0xC);
    edx = MEM32(ebp + 8);
    MEM32(eax + edx * 4 + 0x88) = edi;
    esi = MEM32(ecx);
    ecx = MEM32(ebp + 0x14);
    esi = esi << 4;
    esi = esi | MEM32(ecx + 8);
    esi = esi << 4;
    esi = esi | MEM32(ecx);
    esi = esi << 4;
    esi = esi | MEM32(ecx + 4);
    MEM32(eax + edx * 4 + 0xB4) = esi;
    g_seh_ebp = ebp; sub_005299DB(); return; /* tail jmp 0x005299DB */

}

/**
 * sub_005299E1
 * Original: 0x005299E1 - 0x00529A76 (149 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005299E1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005299E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529A76(); return; } /* jne: not equal / not zero */

loc_005299F0: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_005299FB: ;
    PUSH32(esp, MEM32(ecx));
    edi = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529A04: ;
    edx = MEM32(ebp + 0x18);
    eax = eax | MEM32(edx);
    esi = MEM32(ebp + 0x20);
    eax = eax | MEM32(esi);
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax << 8;
    edi = edi | eax;
    edi = edi | MEM32(edx + 4);
    edi = edi | MEM32(esi + 4);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529A24: ;
    PUSH32(esp, MEM32(ecx + 0xC));
    edi = edi | eax;
    edi = edi | MEM32(edx + 8);
    edi = edi | MEM32(esi + 8);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529A37: ;
    ecx = MEM32(ebp + 0x10);
    edi = edi | eax;
    edi = edi | MEM32(edx + 0xC);
    eax = MEM32(0x535114);
    edi = edi | MEM32(esi + 0xC);
    edx = MEM32(ebp + 8);
    MEM32(eax + edx * 4 + 0x88) = edi;
    esi = MEM32(ecx);
    ecx = MEM32(ebp + 0x14);
    esi = esi | 4;
    esi = esi << 4;
    esi = esi | MEM32(ecx + 8);
    esi = esi << 4;
    esi = esi | MEM32(ecx);
    esi = esi << 4;
    esi = esi | MEM32(ecx + 4);
    MEM32(eax + edx * 4 + 0xB4) = esi;
    g_seh_ebp = ebp; sub_00529B17(); return; /* tail jmp 0x00529B17 */

}

/**
 * sub_00529B1D
 * Original: 0x00529B1D - 0x00529BAC (143 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529B1D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529B1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529BAC(); return; } /* jne: not equal / not zero */

loc_00529B2C: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529B37: ;
    PUSH32(esp, MEM32(ecx));
    edi = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529B40: ;
    edx = MEM32(ebp + 0x18);
    eax = eax | MEM32(edx);
    esi = MEM32(ebp + 0x20);
    eax = eax | MEM32(esi);
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax << 8;
    edi = edi | eax;
    edi = edi | MEM32(edx + 4);
    edi = edi | MEM32(esi + 4);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529B60: ;
    PUSH32(esp, MEM32(ecx + 0xC));
    edi = edi | eax;
    edi = edi | MEM32(edx + 8);
    edi = edi | MEM32(esi + 8);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529B73: ;
    ecx = MEM32(ebp + 8);
    edi = edi | eax;
    edi = edi | MEM32(edx + 0xC);
    eax = MEM32(0x535114);
    edi = edi | MEM32(esi + 0xC);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + ecx * 4 + 0x88) = edi;
    esi = MEM32(edx);
    edx = MEM32(ebp + 0x14);
    esi = esi | 2;
    esi = esi << 8;
    esi = esi | MEM32(edx);
    esi = esi << 4;
    esi = esi | MEM32(edx + 4);
    MEM32(eax + ecx * 4 + 0xB4) = esi;
    g_seh_ebp = ebp; sub_00529C4A(); return; /* tail jmp 0x00529C4A */

}

/**
 * sub_00529C50
 * Original: 0x00529C50 - 0x00529CDF (143 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_00529CDF(); return; } /* jne: not equal / not zero */

loc_00529C5F: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529C6A: ;
    PUSH32(esp, MEM32(ecx));
    edi = eax;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529C73: ;
    edx = MEM32(ebp + 0x18);
    eax = eax | MEM32(edx);
    esi = MEM32(ebp + 0x20);
    eax = eax | MEM32(esi);
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax << 8;
    edi = edi | eax;
    edi = edi | MEM32(edx + 4);
    edi = edi | MEM32(esi + 4);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529C93: ;
    PUSH32(esp, MEM32(ecx + 0xC));
    edi = edi | eax;
    edi = edi | MEM32(edx + 8);
    edi = edi | MEM32(esi + 8);
    edi = edi << 8;
    PUSH32(esp, 0); sub_005291F6(); /* call 0x005291F6 */

loc_00529CA6: ;
    ecx = MEM32(ebp + 8);
    edi = edi | eax;
    edi = edi | MEM32(edx + 0xC);
    eax = MEM32(0x535114);
    edi = edi | MEM32(esi + 0xC);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + ecx * 4 + 0x88) = edi;
    esi = MEM32(edx);
    edx = MEM32(ebp + 0x14);
    esi = esi | 3;
    esi = esi << 8;
    esi = esi | MEM32(edx);
    esi = esi << 4;
    esi = esi | MEM32(edx + 4);
    MEM32(eax + ecx * 4 + 0xB4) = esi;
    g_seh_ebp = ebp; sub_00529D77(); return; /* tail jmp 0x00529D77 */

}

/**
 * sub_00529E23
 * Original: 0x00529E23 - 0x00529E39 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529E23(void)
{
    int _flags = 0; /* fallback flag var */

loc_00529E23: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_00529E38; /* je: equal / zero */

loc_00529E2A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00529E38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00529E39
 * Original: 0x00529E39 - 0x00529E4F (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529E39(void)
{

loc_00529E39: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0x535D8C;
    MEM32(esi) = 0x648C7C;
    PUSH32(esp, 0); sub_00531ADD(); /* call 0x00531ADD */

loc_00529E4B: ;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00529E61
 * Original: 0x00529E61 - 0x00529E8A (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529E61(void)
{
    uint32_t ebp;

loc_00529E61: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    ecx = ebp + -16;
    MEM32(ebp + -16) = 0x648C38;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(0x535D94) = eax;
    MEM32(0x535D98) = eax;
    PUSH32(esp, 0); sub_00531AC2(); /* call 0x00531AC2 */

loc_00529E88: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00529EB6
 * Original: 0x00529EB6 - 0x00529ECB (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529EB6(void)
{

loc_00529EB6: ;
    PUSH32(esp, 8);
    POP32(esp, eax);
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    MEM32(esi) = 0x648C78;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_00529EC8: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00529ED2
 * Original: 0x00529ED2 - 0x00529F01 (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529ED2(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00529ED2: ;
    SET_LO8(ecx, MEM8(eax + 4));
    SET_LO8(edx, MEM8(eax + 5));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 8;
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 4;
    ecx = ecx + edx;
    SET_LO8(edx, MEM8(eax + 6));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 2;
    ecx = ecx + edx;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM8(eax + 7), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM8(eax + 7), LO8(edx))) ? 1 : 0); /* setne */
    ecx = ecx + edx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00529F01
 * Original: 0x00529F01 - 0x00529F20 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F01(void)
{
    int _flags = 0; /* fallback flag var */

loc_00529F01: ;
    ecx = 0; /* xor self */

loc_00529F03: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 8);
    POP32(esp, eax);
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    (void)0; /* test MEM32(esp + 8), eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(MEM32(esp + 8), eax)) ? 1 : 0); /* setne */
    MEM8(edx + ecx + 4) = LO8(eax);
    ecx++;
    if (CMP_LE(ecx, 3)) goto loc_00529F03; /* jle: less or equal (signed <=) */

loc_00529F1D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00529F20
 * Original: 0x00529F20 - 0x00529F5B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM8(edx + 7), LO8(ecx) - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(MEM8(edx + 7), LO8(ecx))) goto loc_00529F37; /* jne: not equal / not zero */

loc_00529F2F: ;
    (void)0; /* cmp MEM8(ebp + 0xF), LO8(ecx) - flags set for next jcc */
    MEM8(ebp + -2) = LO8(ecx);
    if (CMP_EQ(MEM8(ebp + 0xF), LO8(ecx))) goto loc_00529F3B; /* je: equal / zero */

loc_00529F37: ;
    MEM8(ebp + -2) = 1;

loc_00529F3B: ;
    if (CMP_NE(MEM8(edx + 6), LO8(ecx))) goto loc_00529F48; /* jne: not equal / not zero */

loc_00529F40: ;
    (void)0; /* cmp MEM8(ebp + 0xE), LO8(ecx) - flags set for next jcc */
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_EQ(MEM8(ebp + 0xE), LO8(ecx))) goto loc_00529F4C; /* je: equal / zero */

loc_00529F48: ;
    MEM8(ebp + -1) = 1;

loc_00529F4C: ;
    (void)0; /* cmp MEM8(edx + 5), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(MEM8(edx + 5), LO8(ecx))) { sub_00529F5B(); return; } /* jne: not equal / not zero */

loc_00529F52: ;
    if (CMP_NE(MEM8(ebp + 0xD), LO8(ecx))) { sub_00529F5B(); return; } /* jne: not equal / not zero */

loc_00529F57: ;
    SET_LO8(ebx, 0); /* xor self */
    g_seh_ebp = ebp; sub_00529F5D(); return; /* tail jmp 0x00529F5D */

}

/**
 * sub_00529F86
 * Original: 0x00529F86 - 0x00529FC1 (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F86(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529F86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM8(edx + 7), LO8(ecx) - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(MEM8(edx + 7), LO8(ecx))) goto loc_00529F9E; /* je: equal / zero */

loc_00529F95: ;
    (void)0; /* cmp MEM8(ebp + 0xF), LO8(ecx) - flags set for next jcc */
    MEM8(ebp + -2) = 1;
    if (CMP_NE(MEM8(ebp + 0xF), LO8(ecx))) goto loc_00529FA1; /* jne: not equal / not zero */

loc_00529F9E: ;
    MEM8(ebp + -2) = LO8(ecx);

loc_00529FA1: ;
    if (CMP_EQ(MEM8(edx + 6), LO8(ecx))) goto loc_00529FAF; /* je: equal / zero */

loc_00529FA6: ;
    (void)0; /* cmp MEM8(ebp + 0xE), LO8(ecx) - flags set for next jcc */
    MEM8(ebp + -1) = 1;
    if (CMP_NE(MEM8(ebp + 0xE), LO8(ecx))) goto loc_00529FB2; /* jne: not equal / not zero */

loc_00529FAF: ;
    MEM8(ebp + -1) = LO8(ecx);

loc_00529FB2: ;
    (void)0; /* cmp MEM8(edx + 5), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(MEM8(edx + 5), LO8(ecx))) { sub_00529FC1(); return; } /* je: equal / zero */

loc_00529FB8: ;
    if (CMP_EQ(MEM8(ebp + 0xD), LO8(ecx))) { sub_00529FC1(); return; } /* je: equal / zero */

loc_00529FBD: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_00529FC3(); return; /* tail jmp 0x00529FC3 */

}

/**
 * sub_00529FEC
 * Original: 0x00529FEC - 0x0052A02D (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529FEC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00529FEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM8(ecx + 7), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM8(ebp + -8) = (CMP_EQ(MEM8(ecx + 7), LO8(edx))) ? 1 : 0; /* sete */
    (void)0; /* cmp MEM8(ecx + 6), LO8(edx) - flags set for next jcc */
    MEM32(ebp + -12) = edx;
    MEM8(ebp + -4) = (CMP_EQ(MEM8(ecx + 6), LO8(edx))) ? 1 : 0; /* sete */
    (void)0; /* cmp MEM8(ecx + 5), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(MEM8(ecx + 5), LO8(edx))) ? 1 : 0); /* sete */
    (void)0; /* cmp MEM8(ecx + 4), LO8(edx) - flags set for next jcc */
    MEM8(eax + 5) = LO8(ebx);
    SET_LO8(ecx, (CMP_EQ(MEM8(ecx + 4), LO8(edx))) ? 1 : 0); /* sete */
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + -4));
    MEM8(eax + 6) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + -8));
    MEM32(eax) = 0x648C78;
    MEM8(eax + 7) = LO8(ecx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A04E
 * Original: 0x0052A04E - 0x0052A065 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A04E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A04E: ;
    MEM32(eax) = 0x648C74;
    edx = 0; /* xor self */
    ecx = eax + 4;

loc_0052A059: ;
    MEM32(ecx) = edx;
    edx++;
    ecx = ecx + 4;
    if (CMP_LE(edx, 3)) goto loc_0052A059; /* jle: less or equal (signed <=) */

loc_0052A064: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052A06C
 * Original: 0x0052A06C - 0x0052A087 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A06C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A06C: ;
    ecx = 0; /* xor self */
    eax = eax + 4;

loc_0052A071: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(esp + 4))) { sub_0052A087(); return; } /* je: equal / zero */

loc_0052A079: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052A071; /* jle: less or equal (signed <=) */

loc_0052A082: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A08B
 * Original: 0x0052A08B - 0x0052A0C7 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A08B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052A08B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    eax = ebp + -8;
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052A0A1: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A06C(); /* call 0x0052A06C */

loc_0052A0AA: ;
    MEM8(ebp + esi + -4) = LO8(eax);
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A0A1; /* jle: less or equal (signed <=) */

loc_0052A0B4: ;
    eax = MEM32(ebp + -4);
    MEM32(edi + 4) = eax;
    MEM32(edi) = 0x648C78;
    eax = edi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A0C7
 * Original: 0x0052A0C7 - 0x0052A0E5 (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A0C7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A0C7: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0052A0CA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A06C(); /* call 0x0052A06C */

loc_0052A0D4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A0E5(); return; } /* je: equal / zero */

loc_0052A0D8: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A0CA; /* jle: less or equal (signed <=) */

loc_0052A0DE: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A0E9
 * Original: 0x0052A0E9 - 0x0052A116 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A0E9(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A0E9: ;
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0052A113; /* jle: less or equal (signed <=) */

loc_0052A0EF: ;
    if (CMP_EQ(ecx, 4)) goto loc_0052A10E; /* je: equal / zero */

loc_0052A0F4: ;
    edx = MEM32(esi + ecx * 4 + 4);
    if (CMP_EQ(edx, 4)) goto loc_0052A10E; /* je: equal / zero */

loc_0052A0FD: ;
    if (CMP_NE(edi, 4)) goto loc_0052A106; /* jne: not equal / not zero */

loc_0052A102: ;
    PUSH32(esp, edi);
    POP32(esp, eax);
    goto loc_0052A10A;

loc_0052A106: ;
    eax = MEM32(esi + edi * 4 + 4);

loc_0052A10A: ;
    if (CMP_EQ(edx, eax)) { sub_0052A116(); return; } /* je: equal / zero */

loc_0052A10E: ;
    ecx++;
    if (CMP_L(ecx, edi)) goto loc_0052A0EF; /* jl: less (signed <) */

loc_0052A113: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A119
 * Original: 0x0052A119 - 0x0052A138 (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A119(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A119: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_0052A11D: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0052A0E9(); /* call 0x0052A0E9 */

loc_0052A126: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052A138(); return; } /* jne: not equal / not zero */

loc_0052A12A: ;
    edi++;
    if (CMP_LE(edi, 3)) goto loc_0052A11D; /* jle: less or equal (signed <=) */

loc_0052A130: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A13C
 * Original: 0x0052A13C - 0x0052A13E (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A13C(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A13C: ;
    g_seh_ebp = ebp; sub_0052A146(); return; /* tail jmp 0x0052A146 */

}

/**
 * sub_0052A152
 * Original: 0x0052A152 - 0x0052A170 (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A152(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A152: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0052A155: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0052A174(); /* call 0x0052A174 */

loc_0052A160: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A170(); return; } /* je: equal / zero */

loc_0052A164: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A155; /* jle: less or equal (signed <=) */

loc_0052A16A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A174
 * Original: 0x0052A174 - 0x0052A189 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A174(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A174: ;
    if (CMP_EQ(eax, 4)) { sub_0052A189(); return; } /* je: equal / zero */

loc_0052A179: ;
    ecx = MEM32(ecx + eax * 4 + 4);
    if (CMP_EQ(eax, ecx)) { sub_0052A189(); return; } /* je: equal / zero */

loc_0052A181: ;
    if (CMP_EQ(ecx, 4)) { sub_0052A189(); return; } /* je: equal / zero */

loc_0052A186: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A18D
 * Original: 0x0052A18D - 0x0052A1AC (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A18D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A18D: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0052A190: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0052A174(); /* call 0x0052A174 */

loc_0052A19B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A1AC(); return; } /* je: equal / zero */

loc_0052A19F: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A190; /* jle: less or equal (signed <=) */

loc_0052A1A5: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A1B0
 * Original: 0x0052A1B0 - 0x0052A1BB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A1B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A1B0: ;
    eax = 0; /* xor self */
    if (CMP_NE(eax, 4)) { sub_0052A1BB(); return; } /* jne: not equal / not zero */

loc_0052A1B7: ;
    PUSH32(esp, eax);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0052A1C3(); return; /* tail jmp 0x0052A1C3 */

}

/**
 * sub_0052A1D5
 * Original: 0x0052A1D5 - 0x0052A1F2 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A1D5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A1D5: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0052A1D8: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A06C(); /* call 0x0052A06C */

loc_0052A1E2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A1F2(); return; } /* je: equal / zero */

loc_0052A1E6: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A1D8; /* jle: less or equal (signed <=) */

loc_0052A1EC: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A1F6
 * Original: 0x0052A1F6 - 0x0052A245 (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A1F6(void)
{
    uint32_t ebp;

loc_0052A1F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052A1B0(); /* call 0x0052A1B0 */

loc_0052A208: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_0052A1B0(); /* call 0x0052A1B0 */

loc_0052A212: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_0052A1B0(); /* call 0x0052A1B0 */

loc_0052A21D: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0052A1B0(); /* call 0x0052A1B0 */

loc_0052A228: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi) = 0x648C74;
    eax = esi;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A245
 * Original: 0x0052A245 - 0x0052A2C2 (125 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A245(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052A245: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    eax = ebp + -24;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0052A04E(); /* call 0x0052A04E */

loc_0052A25C: ;
    PUSH32(esp, 4);
    POP32(esp, edx);

loc_0052A25F: ;
    if (CMP_EQ(edi, edx)) goto loc_0052A26B; /* je: equal / zero */

loc_0052A263: ;
    eax = MEM32(esi + edi * 4 + 4);
    if (CMP_NE(eax, edx)) goto loc_0052A2A2; /* jne: not equal / not zero */

loc_0052A26B: ;
    eax = edi;

loc_0052A26D: ;
    if (CMP_EQ(eax, edx)) goto loc_0052A27B; /* je: equal / zero */

loc_0052A271: ;
    if (CMP_NE(MEM32(esi + eax * 4 + 4), edx)) goto loc_0052A27E; /* jne: not equal / not zero */

loc_0052A277: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0052A27E; /* jle: less or equal (signed <=) */

loc_0052A27B: ;
    eax--;
    goto loc_0052A26D;

loc_0052A27E: ;
    ecx = esi + eax * 4 + 4;
    if (CMP_NE(MEM32(ecx), edx)) goto loc_0052A298; /* jne: not equal / not zero */

loc_0052A286: ;
    if (CMP_EQ(eax, edx)) goto loc_0052A2A0; /* je: equal / zero */

loc_0052A28A: ;
    if (CMP_NE(MEM32(ecx), edx)) goto loc_0052A298; /* jne: not equal / not zero */

loc_0052A28E: ;
    if (CMP_GE(eax, 3)) goto loc_0052A298; /* jge: greater or equal (signed >=) */

loc_0052A293: ;
    eax++;
    ecx = ecx + edx;
    goto loc_0052A286;

loc_0052A298: ;
    eax = MEM32(esi + eax * 4 + 4);
    if (CMP_NE(eax, edx)) goto loc_0052A2A2; /* jne: not equal / not zero */

loc_0052A2A0: ;
    eax = 0; /* xor self */

loc_0052A2A2: ;
    MEM32(ebp + edi * 4 + -20) = eax;
    edi++;
    if (CMP_LE(edi, 3)) goto loc_0052A25F; /* jle: less or equal (signed <=) */

loc_0052A2AC: ;
    edi = ebx + 4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    MEM32(ebx) = 0x648C74;
    eax = ebx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A2C2
 * Original: 0x0052A2C2 - 0x0052A2EE (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A2C2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A2C2: ;
    ecx = 0; /* xor self */

loc_0052A2C4: ;
    if (CMP_EQ(ecx, 4)) goto loc_0052A2E3; /* je: equal / zero */

loc_0052A2C9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4 + 4);
    if (CMP_EQ(eax, 4)) goto loc_0052A2E3; /* je: equal / zero */

loc_0052A2D6: ;
    edx = MEM32(esp + ecx * 4 + 0xC);
    if (CMP_EQ(edx, 4)) goto loc_0052A2E3; /* je: equal / zero */

loc_0052A2DF: ;
    if (CMP_NE(eax, edx)) { sub_0052A2EE(); return; } /* jne: not equal / not zero */

loc_0052A2E3: ;
    ecx++;
    if (CMP_LE(ecx, 3)) goto loc_0052A2C4; /* jle: less or equal (signed <=) */

loc_0052A2E9: ;
    SET_LO8(eax, 1);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0052A2F2
 * Original: 0x0052A2F2 - 0x0052A31C (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A2F2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052A2F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -24;
    PUSH32(esp, 0); sub_0052A04E(); /* call 0x0052A04E */

loc_0052A304: ;
    PUSH32(esp, 4);
    ecx = 0; /* xor self */
    POP32(esp, edx);
    if (CMP_EQ(ecx, edx)) goto loc_0052A318; /* je: equal / zero */

loc_0052A30D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + ecx * 4 + 4);
    if (CMP_NE(eax, edx)) { sub_0052A31C(); return; } /* jne: not equal / not zero */

loc_0052A318: ;
    eax = edx;
    g_seh_ebp = ebp; sub_0052A320(); return; /* tail jmp 0x0052A320 */

}

/**
 * sub_0052A365
 * Original: 0x0052A365 - 0x0052A378 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A365(void)
{

loc_0052A365: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 8));
    edi = 0x535D9C;
    PUSH32(esp, 0); sub_00531B66(); /* call 0x00531B66 */

loc_0052A374: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A378
 * Original: 0x0052A378 - 0x0052A392 (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A378(void)
{

loc_0052A378: ;
    PUSH32(esp, MEM32(0x535DA4));
    PUSH32(esp, 0); sub_00532249(); /* call 0x00532249 */

loc_0052A383: ;
    MEM32(0x535DA4) = MEM32(0x535DA4) & 0;
    MEM32(0x535DA8) = MEM32(0x535DA8) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0052A392
 * Original: 0x0052A392 - 0x0052A399 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A392(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A392: ;
    if (CMP_NE(esi, eax)) { sub_0052A399(); return; } /* jne: not equal / not zero */

loc_0052A396: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A3D3
 * Original: 0x0052A3D3 - 0x0052A3E9 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A3D3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A3D3: ;
    if (TEST_Z(eax, eax)) goto loc_0052A3E5; /* je: equal / zero */

loc_0052A3D7: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0052A3E2; /* je: equal / zero */

loc_0052A3DE: ;
    MEM32(ecx + 0x34) = MEM32(ecx + 0x34) & 0;

loc_0052A3E2: ;
    MEM32(eax + 0x30) = edx;

loc_0052A3E5: ;
    MEM32(edx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0052A3E9
 * Original: 0x0052A3E9 - 0x0052A3FF (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A3E9(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A3E9: ;
    if (TEST_Z(eax, eax)) goto loc_0052A3FB; /* je: equal / zero */

loc_0052A3ED: ;
    ecx = MEM32(eax + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052A3F8; /* je: equal / zero */

loc_0052A3F4: ;
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0;

loc_0052A3F8: ;
    MEM32(eax + 0x34) = edx;

loc_0052A3FB: ;
    MEM32(edx + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0052A3FF
 * Original: 0x0052A3FF - 0x0052A41D (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A3FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A3FF: ;
    if (CMP_EQ(ecx, MEM32(esp + 4))) { sub_0052A41D(); return; } /* je: equal / zero */

loc_0052A405: ;
    ecx = MEM32(ecx + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0052A419; /* je: equal / zero */

loc_0052A40C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052A415: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052A41D(); return; } /* jne: not equal / not zero */

loc_0052A419: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0052A420(); return; /* tail jmp 0x0052A420 */

}

/**
 * sub_0052A423
 * Original: 0x0052A423 - 0x0052A43C (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A423(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A423: ;
    if (CMP_EQ(eax, MEM32(0x5351AC))) goto loc_0052A439; /* je: equal / zero */

loc_0052A42B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 8));
    edi = eax + 0x10;
    PUSH32(esp, 0); sub_00531BEF(); /* call 0x00531BEF */

loc_0052A438: ;
    POP32(esp, edi);

loc_0052A439: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A43C
 * Original: 0x0052A43C - 0x0052A445 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A43C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A43C: ;
    if (CMP_NE(MEM32(eax + 0x1C), 0)) { sub_0052A445(); return; } /* jne: not equal / not zero */

loc_0052A442: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A45B
 * Original: 0x0052A45B - 0x0052A48F (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A45B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A45B: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(esi + 4), 5)) { sub_0052A48F(); return; } /* je: equal / zero */

loc_0052A464: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_0052B4B8(); /* call 0x0052B4B8 */

loc_0052A46D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052B622(); /* call 0x0052B622 */

loc_0052A473: ;
    PUSH32(esp, 0); sub_0052B81D(); /* call 0x0052B81D */

loc_0052A478: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052A48F(); return; } /* jne: not equal / not zero */

loc_0052A47C: ;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0052A487; /* je: equal / zero */

loc_0052A483: ;
    MEM32(eax + 0x34) = MEM32(eax + 0x34) & 0;

loc_0052A487: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A493
 * Original: 0x0052A493 - 0x0052A4A2 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A493(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A493: ;
    if (CMP_NE(MEM32(eax + 4), 4)) { sub_0052A4A2(); return; } /* jne: not equal / not zero */

loc_0052A499: ;
    if (CMP_NE(MEM32(eax + 0x34), 0)) { sub_0052A4A2(); return; } /* jne: not equal / not zero */

loc_0052A49F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A4C3
 * Original: 0x0052A4C3 - 0x0052A4E8 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A4C3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A4C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0); sub_0052B7D4(); /* call 0x0052B7D4 */

loc_0052A4D1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052A4E8(); return; } /* jne: not equal / not zero */

loc_0052A4D5: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0052A493(); /* call 0x0052A493 */

loc_0052A4E0: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052A4E8(); return; } /* jne: not equal / not zero */

loc_0052A4E4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0052A4EB(); return; /* tail jmp 0x0052A4EB */

}

/**
 * sub_0052A4EF
 * Original: 0x0052A4EF - 0x0052A510 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A4EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A4EF: ;
    ecx = MEM32(ecx + 0x34);
    if (TEST_Z(ecx, ecx)) { sub_0052A510(); return; } /* je: equal / zero */

loc_0052A4F6: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(ecx + eax * 4 + 0x20), 0)) goto loc_0052A50B; /* jne: not equal / not zero */

loc_0052A501: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A4EF(); /* call 0x0052A4EF */

loc_0052A507: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A510(); return; } /* je: equal / zero */

loc_0052A50B: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0052A512(); return; /* tail jmp 0x0052A512 */

}

/**
 * sub_0052A515
 * Original: 0x0052A515 - 0x0052A536 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A515(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A515: ;
    ecx = MEM32(ecx + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_0052A536(); return; } /* je: equal / zero */

loc_0052A51C: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(ecx + eax * 4 + 0x20), 0)) goto loc_0052A531; /* jne: not equal / not zero */

loc_0052A527: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A515(); /* call 0x0052A515 */

loc_0052A52D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A536(); return; } /* je: equal / zero */

loc_0052A531: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0052A538(); return; /* tail jmp 0x0052A538 */

}

/**
 * sub_0052A53B
 * Original: 0x0052A53B - 0x0052A544 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A53B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A53B: ;
    ecx = ecx * 4 + 0x20;
    g_seh_ebp = ebp; sub_0052A54B(); return; /* tail jmp 0x0052A54B */

}

/**
 * sub_0052A558
 * Original: 0x0052A558 - 0x0052A599 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A558(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052A558: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0xF);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052A56C: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_0052A574: ;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(eax), 0)) ? 1 : 0); /* setne */
    MEM8(ebp + ecx + -4) = LO8(edx);
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052A574; /* jle: less or equal (signed <=) */

loc_0052A587: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x648C78;
    eax = esi;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A599
 * Original: 0x0052A599 - 0x0052A5D2 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A599(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A599: ;
    eax = 0x47F784;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052A5A3: ;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = 0; /* xor self */

loc_0052A5AA: ;
    if (CMP_EQ(MEM8(ebp + esi + 0x10), 0)) goto loc_0052A5BD; /* je: equal / zero */

loc_0052A5B1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052A5BD: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A5AA; /* jle: less or equal (signed <=) */

loc_0052A5C3: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0052A5D2
 * Original: 0x0052A5D2 - 0x0052A600 (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A5D2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A5D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_0052A5D7: ;
    edi = esi + 1;
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    ebx = edi;
    if (CMP_G(edi, 3)) goto loc_0052A5F3; /* jg: greater (signed >) */

loc_0052A5E1: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052B8D2(); /* call 0x0052B8D2 */

loc_0052A5ED: ;
    ebx++;
    if (CMP_LE(ebx, 3)) goto loc_0052A5E1; /* jle: less or equal (signed <=) */

loc_0052A5F3: ;
    esi = edi;
    if (CMP_LE(esi, 3)) goto loc_0052A5D7; /* jle: less or equal (signed <=) */

loc_0052A5FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A600
 * Original: 0x0052A600 - 0x0052A64E (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A600: ;
    eax = 0x47FCF9;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052A60A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -16) = esp;
    MEM32(ebp + -4) = 1;
    edi = MEM32(ebp + 0x20);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = 0x648C78;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    eax = esp;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = esi;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(eax + 4) = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052A646: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052A64E(); return; } /* je: equal / zero */

loc_0052A64A: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0052A674(); return; /* tail jmp 0x0052A674 */

}

/**
 * sub_0052A685
 * Original: 0x0052A685 - 0x0052A6F2 (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A685(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A685: ;
    eax = 0x47F821;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052A68F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00529E39(); /* call 0x00529E39 */

loc_0052A698: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x18;
    MEM32(esi) = 0x648C6C;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0); sub_0052A04E(); /* call 0x0052A04E */

loc_0052A6BC: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM8(ebp + -4) = 1;
    if (TEST_NZ(edi, edi)) goto loc_0052A6CF; /* jne: not equal / not zero */

loc_0052A6C4: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 3)) goto loc_0052A6CF; /* je: equal / zero */

loc_0052A6CA: ;
    PUSH32(esp, 0); sub_0052AD7A(); /* call 0x0052AD7A */

loc_0052A6CF: ;
    if (TEST_Z(ebx, ebx)) goto loc_0052A6DB; /* je: equal / zero */

loc_0052A6D3: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_0052A423(); /* call 0x0052A423 */

loc_0052A6DB: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    ecx = MEM32(ebp + -12);
    MEM8(esi + 0x14) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0052A6F2
 * Original: 0x0052A6F2 - 0x0052A70F (29 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A6F2(void)
{

loc_0052A6F2: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x648C74;
    esi = ecx;
    esi = esi + 0x1C;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A70F
 * Original: 0x0052A70F - 0x0052A73C (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A70F(void)
{
    uint32_t ebp;

loc_0052A70F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + 0x18;
    edx = ebp + 8;
    PUSH32(esp, 0); sub_0052A7F1(); /* call 0x0052A7F1 */

loc_0052A724: ;
    MEM32(ebx) = 0x648C74;
    esi = eax + 4;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0052A73C
 * Original: 0x0052A73C - 0x0052A79A (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A73C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052A73C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM8(ebp + -1) = 0;
    esi = ebx + 0x1C;
    POP32(esp, edi);

loc_0052A752: ;
    ecx = MEM32(ebp + -8);
    eax = ebx;
    PUSH32(esp, 0); sub_0052CD88(); /* call 0x0052CD88 */

loc_0052A75C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052A766; /* jne: not equal / not zero */

loc_0052A760: ;
    MEM32(esi) = edi;
    MEM8(ebp + -1) = 1;

loc_0052A766: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    esi = esi + edi;
    if (CMP_LE(MEM32(ebp + -8), 3)) goto loc_0052A752; /* jle: less or equal (signed <=) */

loc_0052A771: ;
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    edi = ebp + -12;
    PUSH32(esp, 0); sub_0052A08B(); /* call 0x0052A08B */

loc_0052A77D: ;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052A782: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_0052A795; /* jne: not equal / not zero */

loc_0052A788: ;
    PUSH32(esp, MEM32(0x5351AC));
    ecx = ebx;
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052A795: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A79A
 * Original: 0x0052A79A - 0x0052A7A6 (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A79A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A79A: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(esi, 4)) { sub_0052A7A6(); return; } /* jne: not equal / not zero */

loc_0052A7A2: ;
    PUSH32(esp, esi);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0052A7AA(); return; /* tail jmp 0x0052A7AA */

}

/**
 * sub_0052A7F1
 * Original: 0x0052A7F1 - 0x0052A809 (24 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A7F1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A7F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ecx = eax + 4;
    edx = edx - eax;
    POP32(esp, esi);

loc_0052A7FB: ;
    edi = MEM32(edx + ecx);
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_0052A7FB; /* jne: not equal / not zero */

loc_0052A806: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A809
 * Original: 0x0052A809 - 0x0052A849 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A809(void)
{

loc_0052A809: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00529E39(); /* call 0x00529E39 */

loc_0052A812: ;
    eax = esi + 0x14;
    PUSH32(esp, 0xF);
    MEM32(esi) = 0x648C64;
    edi = 0x648C78;
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052A82A: ;
    eax = esi + 0x1C;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052A837: ;
    eax = esi + 0x24;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052A844: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A849
 * Original: 0x0052A849 - 0x0052A85C (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A849(void)
{

loc_0052A849: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 8));
    edi = 0x535DAC;
    PUSH32(esp, 0); sub_00531C78(); /* call 0x00531C78 */

loc_0052A858: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A85C
 * Original: 0x0052A85C - 0x0052A876 (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A85C(void)
{

loc_0052A85C: ;
    PUSH32(esp, MEM32(0x535DB4));
    PUSH32(esp, 0); sub_005324E1(); /* call 0x005324E1 */

loc_0052A867: ;
    MEM32(0x535DB4) = MEM32(0x535DB4) & 0;
    MEM32(0x535DB8) = MEM32(0x535DB8) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0052A876
 * Original: 0x0052A876 - 0x0052A881 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A876(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A876: ;
    if (CMP_EQ(MEM32(eax + 0x2C), 0)) { sub_0052A881(); return; } /* je: equal / zero */

loc_0052A87C: ;
    eax = MEM32(eax + 0x38);
    g_seh_ebp = ebp; sub_0052A884(); return; /* tail jmp 0x0052A884 */

}

/**
 * sub_0052A890
 * Original: 0x0052A890 - 0x0052A8A3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A890(void)
{

loc_0052A890: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    MEM32(eax) = 0x648C78;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A8A3
 * Original: 0x0052A8A3 - 0x0052A8B6 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A8A3(void)
{

loc_0052A8A3: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    MEM32(eax) = 0x648C78;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 4) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A8B6
 * Original: 0x0052A8B6 - 0x0052A8C9 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A8B6(void)
{

loc_0052A8B6: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    MEM32(eax) = 0x648C78;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A8C9
 * Original: 0x0052A8C9 - 0x0052A8DF (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A8C9(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A8C9: ;
    eax = eax + ecx;
    edx = 0; /* xor self */
    if (CMP_NE(MEM8(eax + 0x20), LO8(edx))) { sub_0052A8DF(); return; } /* jne: not equal / not zero */

loc_0052A8D2: ;
    if (CMP_NE(MEM8(ecx + 0x10), LO8(edx))) goto loc_0052A8DC; /* jne: not equal / not zero */

loc_0052A8D7: ;
    if (CMP_NE(MEM8(eax + 0x18), LO8(edx))) { sub_0052A8DF(); return; } /* jne: not equal / not zero */

loc_0052A8DC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A8E3
 * Original: 0x0052A8E3 - 0x0052A8F9 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A8E3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052A8E3: ;
    eax = eax + ecx;
    edx = 0; /* xor self */
    if (CMP_NE(MEM8(eax + 0x28), LO8(edx))) { sub_0052A8F9(); return; } /* jne: not equal / not zero */

loc_0052A8EC: ;
    if (CMP_EQ(MEM8(ecx + 0x10), LO8(edx))) goto loc_0052A8F6; /* je: equal / zero */

loc_0052A8F1: ;
    if (CMP_NE(MEM8(eax + 0x18), LO8(edx))) { sub_0052A8F9(); return; } /* jne: not equal / not zero */

loc_0052A8F6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052A8FD
 * Original: 0x0052A8FD - 0x0052A924 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A8FD(void)
{
    uint32_t ebp;

loc_0052A8FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x648C78;
    ecx = MEM32(edi + 0x18);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052A924(); /* call 0x0052A924 */

loc_0052A91F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A924
 * Original: 0x0052A924 - 0x0052A9A4 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A924(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A924: ;
    eax = 0x47F222;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052A92E: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -4) = ebx;
    eax = MEM32(edi + 0x34);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    esi = 0x648C78;
    if (CMP_EQ(eax, ebx)) goto loc_0052A973; /* je: equal / zero */

loc_0052A94A: ;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_0052A957: ;
    if (CMP_EQ(MEM8(ebp + ebx + -20), 0)) goto loc_0052A969; /* je: equal / zero */

loc_0052A95E: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052A969: ;
    ebx++;
    if (CMP_LE(ebx, 3)) goto loc_0052A957; /* jle: less or equal (signed <=) */

loc_0052A96F: ;
    MEM8(ebp + -4) = 0;

loc_0052A973: ;
    ebx = MEM32(ebp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (TEST_Z(ebx, ebx)) { sub_0052A9A4(); return; } /* je: equal / zero */

loc_0052A97D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    esi = 0; /* xor self */

loc_0052A989: ;
    if (CMP_EQ(MEM8(ebp + esi + -20), 0)) goto loc_0052A999; /* je: equal / zero */

loc_0052A990: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052A999: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052A989; /* jle: less or equal (signed <=) */

loc_0052A99F: ;
    edx = ebp + 0xC;
    g_seh_ebp = ebp; sub_0052A9B2(); return; /* tail jmp 0x0052A9B2 */

}

/**
 * sub_0052A9CF
 * Original: 0x0052A9CF - 0x0052A9F6 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A9CF(void)
{
    uint32_t ebp;

loc_0052A9CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x648C78;
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052A9F6(); /* call 0x0052A9F6 */

loc_0052A9F1: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A9F6
 * Original: 0x0052A9F6 - 0x0052AA76 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A9F6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A9F6: ;
    eax = 0x47F222;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052AA00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -4) = ebx;
    eax = MEM32(edi + 0x38);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    esi = 0x648C78;
    if (CMP_EQ(eax, ebx)) goto loc_0052AA45; /* je: equal / zero */

loc_0052AA1C: ;
    eax = MEM32(edi + 0x20);
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_0052AA29: ;
    if (CMP_EQ(MEM8(ebp + ebx + -20), 0)) goto loc_0052AA3B; /* je: equal / zero */

loc_0052AA30: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052AA3B: ;
    ebx++;
    if (CMP_LE(ebx, 3)) goto loc_0052AA29; /* jle: less or equal (signed <=) */

loc_0052AA41: ;
    MEM8(ebp + -4) = 0;

loc_0052AA45: ;
    ebx = MEM32(ebp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (TEST_Z(ebx, ebx)) { sub_0052AA76(); return; } /* je: equal / zero */

loc_0052AA4F: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    esi = 0; /* xor self */

loc_0052AA5B: ;
    if (CMP_EQ(MEM8(ebp + esi + -20), 0)) goto loc_0052AA6B; /* je: equal / zero */

loc_0052AA62: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052AA6B: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052AA5B; /* jle: less or equal (signed <=) */

loc_0052AA71: ;
    edx = ebp + 0xC;
    g_seh_ebp = ebp; sub_0052AA84(); return; /* tail jmp 0x0052AA84 */

}

/**
 * sub_0052AAA1
 * Original: 0x0052AAA1 - 0x0052AAC8 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AAA1(void)
{
    uint32_t ebp;

loc_0052AAA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x648C78;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052AAC8(); /* call 0x0052AAC8 */

loc_0052AAC3: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052AAC8
 * Original: 0x0052AAC8 - 0x0052AB48 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AAC8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052AAC8: ;
    eax = 0x47F222;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052AAD2: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -4) = ebx;
    eax = MEM32(edi + 0x3C);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    esi = 0x648C78;
    if (CMP_EQ(eax, ebx)) goto loc_0052AB17; /* je: equal / zero */

loc_0052AAEE: ;
    eax = MEM32(edi + 0x28);
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_0052AAFB: ;
    if (CMP_EQ(MEM8(ebp + ebx + -20), 0)) goto loc_0052AB0D; /* je: equal / zero */

loc_0052AB02: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052AB0D: ;
    ebx++;
    if (CMP_LE(ebx, 3)) goto loc_0052AAFB; /* jle: less or equal (signed <=) */

loc_0052AB13: ;
    MEM8(ebp + -4) = 0;

loc_0052AB17: ;
    ebx = MEM32(ebp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (TEST_Z(ebx, ebx)) { sub_0052AB48(); return; } /* je: equal / zero */

loc_0052AB21: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    esi = 0; /* xor self */

loc_0052AB2D: ;
    if (CMP_EQ(MEM8(ebp + esi + -20), 0)) goto loc_0052AB3D; /* je: equal / zero */

loc_0052AB34: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052AB3D: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052AB2D; /* jle: less or equal (signed <=) */

loc_0052AB43: ;
    edx = ebp + 0xC;
    g_seh_ebp = ebp; sub_0052AB56(); return; /* tail jmp 0x0052AB56 */

}

/**
 * sub_0052AB73
 * Original: 0x0052AB73 - 0x0052AB8D (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AB73(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052AB73: ;
    eax = MEM32(eax + 0x2C);
    if (CMP_EQ(eax, 3)) { sub_0052AB8D(); return; } /* je: equal / zero */

loc_0052AB7B: ;
    if (CMP_EQ(eax, 4)) { sub_0052AB8D(); return; } /* je: equal / zero */

loc_0052AB80: ;
    if (CMP_L(eax, 5)) goto loc_0052AB8A; /* jl: less (signed <) */

loc_0052AB85: ;
    if (CMP_LE(eax, 7)) { sub_0052AB8D(); return; } /* jle: less or equal (signed <=) */

loc_0052AB8A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052AB91
 * Original: 0x0052AB91 - 0x0052ABA1 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AB91(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052AB91: ;
    eax = MEM32(eax + 0x2C);
    if (CMP_EQ(eax, 3)) { sub_0052ABA1(); return; } /* je: equal / zero */

loc_0052AB99: ;
    if (CMP_EQ(eax, 4)) { sub_0052ABA1(); return; } /* je: equal / zero */

loc_0052AB9E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052ABA5
 * Original: 0x0052ABA5 - 0x0052ABC1 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052ABA5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052ABA5: ;
    ecx = MEM32(eax + 0x2C);
    if (CMP_NE(ecx, 1)) goto loc_0052ABB3; /* jne: not equal / not zero */

loc_0052ABAD: ;
    if (CMP_EQ(MEM32(eax + 0x30), 0)) goto loc_0052ABBD; /* je: equal / zero */

loc_0052ABB3: ;
    if (CMP_NE(MEM32(eax + 0x30), 1)) { sub_0052ABC1(); return; } /* jne: not equal / not zero */

loc_0052ABB9: ;
    if (TEST_NZ(ecx, ecx)) { sub_0052ABC1(); return; } /* jne: not equal / not zero */

loc_0052ABBD: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0052ABC4
 * Original: 0x0052ABC4 - 0x0052ABE0 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052ABC4(void)
{
    int _cf = 0; /* carry flag */

loc_0052ABC4: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052ABCB: ;
    PUSH32(esp, MEM32(esp + 4));
    eax = MEM32(esi + 0x48);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052ABD7: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052ABE0
 * Original: 0x0052ABE0 - 0x0052AC2E (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052ABE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052ABE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (CMP_EQ(MEM32(eax + 0xC), 0)) goto loc_0052AC2C; /* je: equal / zero */

loc_0052ABEA: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_0052ABFC; /* je: equal / zero */

loc_0052ABF1: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052ABF1; /* jne: not equal / not zero */

loc_0052ABFA: ;
    goto loc_0052ABFE;

loc_0052ABFC: ;
    ecx = 0; /* xor self */

loc_0052ABFE: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0052AC23; /* je: equal / zero */

loc_0052AC05: ;
    PUSH32(esp, edi);

loc_0052AC06: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(eax + 4));
    edi = MEM32(esi + 0x48);
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_0052AC14: ;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005331CC(); /* call 0x005331CC */

loc_0052AC1C: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_0052AC06; /* jne: not equal / not zero */

loc_0052AC22: ;
    POP32(esp, edi);

loc_0052AC23: ;
    eax = MEM32(esi + 0x48);
    eax = MEM32(eax + 0xC);
    MEM32(esi + 0x44) = eax;

loc_0052AC2C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052AC2E
 * Original: 0x0052AC2E - 0x0052AC53 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AC2E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052AC2E: ;
    eax = MEM32(esi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0052AC4E; /* je: equal / zero */

loc_0052AC35: ;
    PUSH32(esp, eax);
    ecx = 0x535DAC;
    PUSH32(esp, 0); sub_00531CCB(); /* call 0x00531CCB */

loc_0052AC40: ;
    ecx = MEM32(esi + 0x48);
    if (TEST_Z(ecx, ecx)) goto loc_0052AC4E; /* je: equal / zero */

loc_0052AC47: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0052AC4E: ;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0052AC53
 * Original: 0x0052AC53 - 0x0052AC8E (59 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AC53(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052AC53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    esi = esi + 4;

loc_0052AC61: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0); sub_0052A73C(); /* call 0x0052A73C */

loc_0052AC68: ;
    MEM8(ebp + edi + -4) = LO8(eax);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, 2)) goto loc_0052AC61; /* jle: less or equal (signed <=) */

loc_0052AC75: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + -4), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(MEM8(ebp + -4), LO8(eax))) goto loc_0052AC89; /* jne: not equal / not zero */

loc_0052AC7F: ;
    if (CMP_NE(MEM8(ebp + -3), LO8(eax))) goto loc_0052AC89; /* jne: not equal / not zero */

loc_0052AC84: ;
    if (CMP_EQ(MEM8(ebp + -2), LO8(eax))) goto loc_0052AC8C; /* je: equal / zero */

loc_0052AC89: ;
    eax = 0; /* xor self */
    eax++;

loc_0052AC8C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052AC8E
 * Original: 0x0052AC8E - 0x0052AC9A (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AC8E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052AC8E: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x34), edi)) { sub_0052AC9A(); return; } /* je: equal / zero */

loc_0052AC96: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052ACFA
 * Original: 0x0052ACFA - 0x0052AD10 (22 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052ACFA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052ACFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ecx = esi + 4;
    edx = edx - esi;
    POP32(esp, edi);

loc_0052AD03: ;
    SET_LO8(eax, MEM8(edx + ecx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    edi--;
    if ((edi != 0)) goto loc_0052AD03; /* jne: not equal / not zero */

loc_0052AD0C: ;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052AD10
 * Original: 0x0052AD10 - 0x0052AD15 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AD10(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052AD10: ;
    PUSH32(esp, esi);
    esi = eax;
    g_seh_ebp = ebp; sub_0052AD1C(); return; /* tail jmp 0x0052AD1C */

}

/**
 * sub_0052AD7A
 * Original: 0x0052AD7A - 0x0052AD91 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AD7A(void)
{
    uint32_t ebp;

loc_0052AD7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64B6EC);
    eax = ebp + -1;
    PUSH32(esp, eax);
    MEM8(ebp + -1) = 0x21;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0052AD90: ;
    __debugbreak(); /* int3 */

}

/**
 * sub_0052AD91
 * Original: 0x0052AD91 - 0x0052AE07 (118 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AD91(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052AD91: ;
    eax = 0x4800D8;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052AD9B: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEM32(ebp + -16) = esp;
    MEM8(ebp + -17) = 1;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_00529E61(); /* call 0x00529E61 */

loc_0052ADB2: ;
    edi = 0x24870000;
    PUSH32(esp, edi);
    PUSH32(esp, 0x38);
    MEM8(0x5351AA) = LO8(ebx);
    MEM8(0x5351B0) = LO8(ebx);
    MEM8(0x5351A9) = 1;
    MEM8(0x5351A8) = 1;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052ADD9: ;
    MEM32(ebp + -24) = eax;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(ebp + -4) = 1;
    if (CMP_EQ(eax, ebx)) { sub_0052AE07(); return; } /* je: equal / zero */

loc_0052ADE4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -28) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052ADF9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052B04C(); /* call 0x0052B04C */

loc_0052AE05: ;
    g_seh_ebp = ebp; sub_0052AE09(); return; /* tail jmp 0x0052AE09 */

}

/**
 * sub_0052AF58
 * Original: 0x0052AF58 - 0x0052AFA3 (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AF58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052AF58: ;
    PUSH32(esp, 0); sub_0052A378(); /* call 0x0052A378 */

loc_0052AF5D: ;
    PUSH32(esp, 0); sub_0052A85C(); /* call 0x0052A85C */

loc_0052AF62: ;
    edx = MEM32(0x535D94);
    if (TEST_Z(edx, edx)) { sub_0052AFA3(); return; } /* je: equal / zero */

loc_0052AF6C: ;
    ecx = edx;
    goto loc_0052AF72;

loc_0052AF70: ;
    ecx = eax;

loc_0052AF72: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052AF70; /* jne: not equal / not zero */

loc_0052AF79: ;
    goto loc_0052AF9F;

    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0052AF8E; /* je: equal / zero */

loc_0052AF82: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0052AF88: ;
    edx = MEM32(0x535D94);

loc_0052AF8E: ;
    if (TEST_Z(edx, edx)) { sub_0052AFA3(); return; } /* je: equal / zero */

loc_0052AF92: ;
    ecx = edx;
    goto loc_0052AF98;

loc_0052AF96: ;
    ecx = eax;

loc_0052AF98: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052AF96; /* jne: not equal / not zero */

loc_0052AF9F: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_0052AFA5(); return; /* tail jmp 0x0052AFA5 */

}

/**
 * sub_0052AFAF
 * Original: 0x0052AFAF - 0x0052AFBC (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AFAF(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052AFAF: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(edx + 0x40);
    if (CMP_GE(eax, ecx)) { sub_0052AFBC(); return; } /* jge: greater or equal (signed >=) */

loc_0052AFB9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0052AFC8
 * Original: 0x0052AFC8 - 0x0052AFF7 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AFC8(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052AFC8: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052AFD0: ;
    ebx = MEM32(edi + 0x44);
    ecx = esi;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052AFDA: ;
    eax = MEM32(esi + 0x44);
    if (CMP_G(ebx, eax)) goto loc_0052AFED; /* jg: greater (signed >) */

loc_0052AFE1: ;
    if (CMP_L(ebx, eax)) goto loc_0052AFF3; /* jl: less (signed <) */

loc_0052AFE3: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(esi + 0x40);
    if (CMP_GE(eax, ecx)) goto loc_0052AFF1; /* jge: greater or equal (signed >=) */

loc_0052AFED: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0052AFF1: ;
    if (CMP_LE(eax, ecx)) { sub_0052AFF7(); return; } /* jle: less or equal (signed <=) */

loc_0052AFF3: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052AFFF
 * Original: 0x0052AFFF - 0x0052B00E (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AFFF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052AFFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(ebp + 0xC))) { sub_0052B00E(); return; } /* jne: not equal / not zero */

loc_0052B00A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0052B048(); return; /* tail jmp 0x0052B048 */

}

/**
 * sub_0052B04C
 * Original: 0x0052B04C - 0x0052B0E6 (154 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B04C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B04C: ;
    eax = 0x47FA83;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052B056: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    ebx = MEM32(ebp + 8);
    esi = ebx;
    PUSH32(esp, 0); sub_00529E39(); /* call 0x00529E39 */

loc_0052B06A: ;
    MEM32(ebx) = 0x648C70;
    MEM32(ebx + 0x10) = 0x648C98;
    MEM32(ebx + 0x18) = edi;
    MEM32(ebx + 0x1C) = edi;
    MEM8(ebp + -4) = 2;
    if (CMP_NE(MEM32(ebp + 0xC), 5)) goto loc_0052B0A2; /* jne: not equal / not zero */

loc_0052B087: ;
    PUSH32(esp, 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052B099: ;
    esi = ebp + -16;
    edi = ebp + 0x20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = 0; /* xor self */

loc_0052B0A2: ;
    (void)0; /* cmp MEM32(ebp + 0x14), edi - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 8) = eax;
    if (CMP_NE(MEM32(ebp + 0x14), edi)) goto loc_0052B0BB; /* jne: not equal / not zero */

loc_0052B0B3: ;
    eax = MEM32(0x5351AC);
    MEM32(ebp + 0x14) = eax;

loc_0052B0BB: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052B0C7: ;
    MEM32(ebp + 0xC) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(ebp + -4) = 3;
    if (CMP_EQ(eax, edi)) { sub_0052B0E6(); return; } /* je: equal / zero */

loc_0052B0D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0052A685(); /* call 0x0052A685 */

loc_0052B0E1: ;
    ebx = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0052B0E8(); return; /* tail jmp 0x0052B0E8 */

}

/**
 * sub_0052B143
 * Original: 0x0052B143 - 0x0052B167 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B143(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B143: ;
    eax = 0x47FCDF;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052B14D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -20) = esi;
    MEM32(esi) = 0x648C70;
    MEM32(ebp + -4) = 1;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0052B178(); return; /* tail jmp 0x0052B178 */

}

/**
 * sub_0052B25C
 * Original: 0x0052B25C - 0x0052B271 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B25C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052B25C: ;
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0052B26E; /* je: equal / zero */

loc_0052B263: ;
    eax = MEM32(eax + 0x10);
    if (CMP_NE(eax, MEM32(0x5351AC))) goto loc_0052B270; /* jne: not equal / not zero */

loc_0052B26E: ;
    eax = 0; /* xor self */

loc_0052B270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B271
 * Original: 0x0052B271 - 0x0052B2D1 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B271(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B271: ;
    eax = 0x47FC34;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052B27B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 0xC), edi)) goto loc_0052B2B7; /* jne: not equal / not zero */

loc_0052B284: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052B290: ;
    MEM32(ebp + -16) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(eax, edi)) goto loc_0052B2AE; /* je: equal / zero */

loc_0052B29A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5351AC);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A685(); /* call 0x0052A685 */

loc_0052B2AB: ;
    POP32(esp, ebx);
    goto loc_0052B2B0;

loc_0052B2AE: ;
    eax = 0; /* xor self */

loc_0052B2B0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    MEM32(esi + 0xC) = eax;

loc_0052B2B7: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052B2C2: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B2D1
 * Original: 0x0052B2D1 - 0x0052B2E1 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2D1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052B2D1: ;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0052B2DE; /* je: equal / zero */

loc_0052B2D8: ;
    if (CMP_EQ(MEM32(eax + 4), 6)) { sub_0052B2E1(); return; } /* je: equal / zero */

loc_0052B2DE: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0052B35A
 * Original: 0x0052B35A - 0x0052B4B8 (350 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B35A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B35A: ;
    eax = 0x47F784;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052B364: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    ecx = MEM32(esi + 0x18);
    if (CMP_NE(ecx, edi)) goto loc_0052B4AC; /* jne: not equal / not zero */

loc_0052B37F: ;
    ecx = 0; /* xor self */

loc_0052B381: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(ecx, edi)) goto loc_0052B414; /* je: equal / zero */

loc_0052B38C: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(eax + 4);
    eax = MEM32(ebx + 4);
    if (CMP_EQ(eax, edi)) goto loc_0052B3DA; /* je: equal / zero */

loc_0052B399: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052B3A4: ;
    if (TEST_NZ(eax, eax)) goto loc_0052B3DA; /* jne: not equal / not zero */

loc_0052B3A8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, ebx);
    MEM32(eax) = 0x648C78;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0052B3C1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052B3DA; /* je: equal / zero */

loc_0052B3C5: ;
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_0052B3CD: ;
    esi = MEM32(ebx + 4);
    eax = edi;
    PUSH32(esp, 0); sub_0052E7F7(); /* call 0x0052E7F7 */

loc_0052B3D7: ;
    esi = MEM32(ebp + -20);

loc_0052B3DA: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 8), edi)) goto loc_0052B403; /* je: equal / zero */

loc_0052B3E1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052B3F6: ;
    ebx = MEM32(ebx + 8);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_0052B35A(); /* call 0x0052B35A */

loc_0052B403: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_005331CC(); /* call 0x005331CC */

loc_0052B40B: ;
    if (CMP_NE(MEM32(ebp + -16), edi)) goto loc_0052B38C; /* jne: not equal / not zero */

loc_0052B414: ;
    if (CMP_EQ(MEM32(esi + 0x34), edi)) goto loc_0052B496; /* je: equal / zero */

loc_0052B419: ;
    PUSH32(esp, 0x20);
    MEM32(ebp + -16) = edi;
    POP32(esp, ebx);

loc_0052B41F: ;
    eax = MEM32(ebp + -16);
    if (CMP_EQ(MEM8(ebp + eax + 0x10), 0)) goto loc_0052B461; /* je: equal / zero */

loc_0052B429: ;
    eax = MEM32(esi + 0x34);
    edi = MEM32(ebx + eax);
    if (TEST_Z(edi, edi)) goto loc_0052B461; /* je: equal / zero */

loc_0052B433: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052B43C: ;
    if (TEST_NZ(eax, eax)) goto loc_0052B459; /* jne: not equal / not zero */

loc_0052B440: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_0052B449: ;
    ecx = MEM32(esi + 0x34);
    esi = MEM32(ebx + ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0052E7F7(); /* call 0x0052E7F7 */

loc_0052B456: ;
    esi = MEM32(ebp + -20);

loc_0052B459: ;
    eax = MEM32(ebp + -16);
    MEM8(ebp + eax + 0x10) = 0;

loc_0052B461: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    ebx = ebx + 4;
    if (CMP_LE(ebx, 0x2C)) goto loc_0052B41F; /* jle: less or equal (signed <=) */

loc_0052B46C: ;
    eax = ebp + 0xC;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052B474: ;
    if (TEST_Z(eax, eax)) goto loc_0052B496; /* je: equal / zero */

loc_0052B478: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x648C78;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0); sub_0052B35A(); /* call 0x0052B35A */

loc_0052B496: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0052B4AA: ;
    ecx = eax;

loc_0052B4AC: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_NE(eax, edi)) goto loc_0052B4AA; /* jne: not equal / not zero */

loc_0052B4B3: ;
    goto loc_0052B381;

}

/**
 * sub_0052B4B8
 * Original: 0x0052B4B8 - 0x0052B622 (362 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B4B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B4B8: ;
    eax = 0x47FCC2;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052B4C2: ;
    esp = esp - 0x28;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -32) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0052B4E5; /* je: equal / zero */

loc_0052B4D8: ;
    if (CMP_EQ(MEM8(ebp + 8), 0)) goto loc_0052B4E5; /* je: equal / zero */

loc_0052B4DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0052B4B8(); /* call 0x0052B4B8 */

loc_0052B4E5: ;
    if (CMP_EQ(MEM32(esi + 0x30), 0)) goto loc_0052B611; /* je: equal / zero */

loc_0052B4EF: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052B5E8; /* jne: not equal / not zero */

loc_0052B4FA: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0052B611; /* je: equal / zero */

loc_0052B505: ;
    eax = MEM32(ebp + -24);
    ebx = MEM32(eax + 4);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    eax = esi + 0x20;
    MEM8(ebp + 0xB) = 1;
    MEM32(ebp + -28) = eax;

loc_0052B519: ;
    eax = MEM32(ebp + -28);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0052B533; /* je: equal / zero */

loc_0052B521: ;
    PUSH32(esp, MEM32(ebp + -20));
    edi = ebx;
    PUSH32(esp, 0); sub_0052A79A(); /* call 0x0052A79A */

loc_0052B52B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052B533; /* je: equal / zero */

loc_0052B52F: ;
    MEM8(ebp + 0xB) = 0;

loc_0052B533: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 4;
    if (CMP_LE(MEM32(ebp + -20), 3)) goto loc_0052B519; /* jle: less or equal (signed <=) */

loc_0052B540: ;
    if (CMP_EQ(MEM8(ebp + 0xB), 0)) goto loc_0052B576; /* je: equal / zero */

loc_0052B546: ;
    eax = ebp + -52;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052B550: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) | 1;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edi = esp;
    MEM32(ebp + 8) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A08B(); /* call 0x0052A08B */

loc_0052B565: ;
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0052CB11(); /* call 0x0052CB11 */

loc_0052B56E: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0xB) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052B57A; /* jne: not equal / not zero */

loc_0052B576: ;
    MEM8(ebp + 0xB) = 0;

loc_0052B57A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    if (TEST_Z(MEM8(ebp + -16), 1)) goto loc_0052B58F; /* je: equal / zero */

loc_0052B584: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    MEM32(ebp + -52) = 0x648C74;

loc_0052B58F: ;
    if (CMP_EQ(MEM8(ebp + 0xB), 0)) goto loc_0052B5FF; /* je: equal / zero */

loc_0052B595: ;
    if (CMP_EQ(MEM32(ebx + 4), 0)) goto loc_0052B5CA; /* je: equal / zero */

loc_0052B59B: ;
    eax = esi + 0x20;
    edi = eax;
    MEM32(ebp + -28) = 4;

loc_0052B5A7: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0052B5C2; /* je: equal / zero */

loc_0052B5AD: ;
    PUSH32(esp, MEM32(ebx + 4));
    esi = eax;
    PUSH32(esp, 0); sub_0052ABC4(); /* call 0x0052ABC4 */

loc_0052B5B7: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(ebp + -32);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052B5C2; /* je: equal / zero */

loc_0052B5BE: ;
    MEM8(ebp + 0xB) = 0;

loc_0052B5C2: ;
    edi = edi + 4;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if ((MEM32(ebp + -28) != 0)) goto loc_0052B5A7; /* jne: not equal / not zero */

loc_0052B5CA: ;
    if (CMP_EQ(MEM8(ebp + 0xB), 0)) goto loc_0052B5FF; /* je: equal / zero */

loc_0052B5D0: ;
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = ebx;
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052B5DA: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052B5F6; /* jne: not equal / not zero */

loc_0052B5E1: ;
    MEM32(ebp + -24) = ecx;
    goto loc_0052B607;

loc_0052B5E6: ;
    ecx = eax;

loc_0052B5E8: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B5E6; /* jne: not equal / not zero */

loc_0052B5EF: ;
    goto loc_0052B4FA;

loc_0052B5F4: ;
    ecx = eax;

loc_0052B5F6: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B5F4; /* jne: not equal / not zero */

loc_0052B5FD: ;
    goto loc_0052B5E1;

loc_0052B5FF: ;
    eax = ebp + -24;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052B607: ;
    if (CMP_NE(MEM32(ebp + -24), 0)) goto loc_0052B505; /* jne: not equal / not zero */

loc_0052B611: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B622
 * Original: 0x0052B622 - 0x0052B7D4 (434 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B622(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B622: ;
    eax = 0x47FC9F;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052B62C: ;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(eax + 0x30), esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, esi);
    eax = ebp + -36;
    ebx = 0x648C78;
    PUSH32(esp, eax);
    MEM8(ebp + -13) = (CMP_NE(MEM32(eax + 0x30), esi)) ? 1 : 0; /* setne */
    MEM32(ebp + -36) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052B653: ;
    MEM32(ebp + -4) = esi;

loc_0052B656: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0052B7C3; /* je: equal / zero */

loc_0052B660: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052B66F: ;
    eax = ebp + -44;
    edx = ebp + -36;
    PUSH32(esp, 0); sub_00529F20(); /* call 0x00529F20 */

loc_0052B67A: ;
    esi = eax + 4;
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + -20);
    ecx = MEM32(edi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -44) = ebx;
    if (TEST_NZ(ecx, ecx)) goto loc_0052B784; /* jne: not equal / not zero */

loc_0052B692: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = ecx;
    MEM32(ebp + -20) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0052B6E4; /* je: equal / zero */

loc_0052B69B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -32);
    eax = esp;
    MEM32(ebp + -24) = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0052B6B2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052B6D5; /* je: equal / zero */

loc_0052B6B6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = ebp + -36;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, 0); sub_00529FEC(); /* call 0x00529FEC */

loc_0052B6C5: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0052B6CD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052B6D5; /* je: equal / zero */

loc_0052B6D1: ;
    MEM8(ebp + -13) = 0;

loc_0052B6D5: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052B6DD: ;
    esi = MEM32(ebp + -20);
    if (TEST_NZ(esi, esi)) goto loc_0052B69B; /* jne: not equal / not zero */

loc_0052B6E4: ;
    eax = MEM32(edi + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0052B656; /* jne: not equal / not zero */

loc_0052B6F2: ;
    if (CMP_EQ(MEM8(ebp + -13), LO8(eax))) goto loc_0052B7C3; /* je: equal / zero */

loc_0052B6FB: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0);
    eax = ebp + -28;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052B70F: ;
    esi = ebp + -24;
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_0052B716: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052B725: ;
    eax = ebp + -44;
    edx = ebp + -36;
    PUSH32(esp, 0); sub_00529F20(); /* call 0x00529F20 */

loc_0052B730: ;
    esi = eax + 4;
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + -20);
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -44) = ebx;
    if (TEST_NZ(ecx, ecx)) goto loc_0052B792; /* jne: not equal / not zero */

loc_0052B744: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = ecx;
    MEM32(ebp + -20) = edi;
    if (TEST_Z(ecx, ecx)) goto loc_0052B7B5; /* je: equal / zero */

loc_0052B74D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -32);
    eax = esp;
    MEM32(ebp + -24) = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0052B764: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052B7A6; /* jne: not equal / not zero */

loc_0052B768: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x30));
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052B776: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052B79D; /* jne: not equal / not zero */

loc_0052B77D: ;
    MEM32(ebp + -20) = ecx;
    goto loc_0052B7AE;

loc_0052B782: ;
    ecx = eax;

loc_0052B784: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B782; /* jne: not equal / not zero */

loc_0052B78B: ;
    goto loc_0052B692;

loc_0052B790: ;
    ecx = eax;

loc_0052B792: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B790; /* jne: not equal / not zero */

loc_0052B799: ;
    goto loc_0052B744;

loc_0052B79B: ;
    ecx = eax;

loc_0052B79D: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B79B; /* jne: not equal / not zero */

loc_0052B7A4: ;
    goto loc_0052B77D;

loc_0052B7A6: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052B7AE: ;
    edi = MEM32(ebp + -20);
    if (TEST_NZ(edi, edi)) goto loc_0052B74D; /* jne: not equal / not zero */

loc_0052B7B5: ;
    eax = MEM32(esi + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0052B716; /* jne: not equal / not zero */

loc_0052B7C3: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B7D4
 * Original: 0x0052B7D4 - 0x0052B819 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B7D4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052B7D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052B810; /* jne: not equal / not zero */

loc_0052B7DF: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0052B807; /* je: equal / zero */

loc_0052B7E7: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 8));
    edi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0052A79A(); /* call 0x0052A79A */

loc_0052B7F5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052B819(); return; } /* jne: not equal / not zero */

loc_0052B7F9: ;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005331CC(); /* call 0x005331CC */

loc_0052B801: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_0052B7E7; /* jne: not equal / not zero */

loc_0052B807: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_0052B80E: ;
    ecx = eax;

loc_0052B810: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B80E; /* jne: not equal / not zero */

loc_0052B817: ;
    goto loc_0052B7DF;

}

/**
 * sub_0052B81D
 * Original: 0x0052B81D - 0x0052B882 (101 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B81D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052B81D: ;
    (void)0; /* cmp MEM32(esi + 4), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esi + 4), 4)) goto loc_0052B861; /* jne: not equal / not zero */

loc_0052B825: ;
    edi = 0; /* xor self */
    ebx = esi + 0x20;

loc_0052B82A: ;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0052B853; /* jne: not equal / not zero */

loc_0052B82F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_0052B837: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052B882(); return; } /* jne: not equal / not zero */

loc_0052B83B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0052A4EF(); /* call 0x0052A4EF */

loc_0052B843: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052B853; /* jne: not equal / not zero */

loc_0052B847: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0052A515(); /* call 0x0052A515 */

loc_0052B84F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052B882(); return; } /* jne: not equal / not zero */

loc_0052B853: ;
    edi++;
    ebx = ebx + 4;
    if (CMP_LE(edi, 3)) goto loc_0052B82A; /* jle: less or equal (signed <=) */

loc_0052B85C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0052B861: ;
    ebx = 0; /* xor self */
    edi = esi + 0x20;

loc_0052B866: ;
    if (CMP_NE(MEM32(edi), 0)) goto loc_0052B877; /* jne: not equal / not zero */

loc_0052B86B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_0052B873: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052B882(); return; } /* jne: not equal / not zero */

loc_0052B877: ;
    ebx++;
    edi = edi + 4;
    if (CMP_LE(ebx, 3)) goto loc_0052B866; /* jle: less or equal (signed <=) */

loc_0052B880: ;
    goto loc_0052B85C;

}

/**
 * sub_0052B886
 * Original: 0x0052B886 - 0x0052B8AB (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B886(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052B886: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + eax * 4 + 0x20;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0052B8A0; /* je: equal / zero */

loc_0052B896: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0052B8A0; /* je: equal / zero */

loc_0052B89B: ;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_0052B8A0: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B8AB
 * Original: 0x0052B8AB - 0x0052B8BC (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B8AB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052B8AB: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(edx + ecx * 4 + 0x20);
    if (CMP_EQ(eax, MEM32(edx + ebx * 4 + 0x20))) { sub_0052B8BC(); return; } /* je: equal / zero */

loc_0052B8B8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052B8D2
 * Original: 0x0052B8D2 - 0x0052B993 (193 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B8D2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052B8D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = eax;
    edi = ecx;
    eax = esi;
    ecx = ebx;
    edx = edi;
    PUSH32(esp, 0); sub_0052B8AB(); /* call 0x0052B8AB */

loc_0052B8EB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052B98C; /* je: equal / zero */

loc_0052B8F3: ;
    eax = MEM32(edi + 0x34);
    goto loc_0052B909;

loc_0052B8F8: ;
    if (CMP_NE(MEM32(eax + esi * 4 + 0x20), 0)) goto loc_0052B916; /* jne: not equal / not zero */

loc_0052B8FF: ;
    if (CMP_NE(MEM32(eax + ebx * 4 + 0x20), 0)) goto loc_0052B90F; /* jne: not equal / not zero */

loc_0052B906: ;
    eax = MEM32(eax + 0x34);

loc_0052B909: ;
    if (TEST_NZ(eax, eax)) goto loc_0052B8F8; /* jne: not equal / not zero */

loc_0052B90D: ;
    goto loc_0052B916;

loc_0052B90F: ;
    eax = ebx;
    ebx = esi;
    MEM32(ebp + 8) = eax;

loc_0052B916: ;
    esi = MEM32(edi + ebx * 4 + 0x20);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0052B929; /* je: equal / zero */

loc_0052B91F: ;
    eax = MEM32(ebp + 8);
    ecx = edi;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_0052B929: ;
    esi = MEM32(ebp + 8);
    esi = esi * 4 + 0x20;

loc_0052B933: ;
    if (CMP_NE(MEM32(esi + edi), 0)) goto loc_0052B98A; /* jne: not equal / not zero */

loc_0052B939: ;
    ecx = MEM32(edi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052B947; /* jne: not equal / not zero */

loc_0052B940: ;
    MEM32(ebp + -4) = ecx;
    goto loc_0052B97F;

loc_0052B945: ;
    ecx = eax;

loc_0052B947: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052B945; /* jne: not equal / not zero */

loc_0052B94E: ;
    goto loc_0052B940;

loc_0052B950: ;
    eax = 0; /* xor self */

loc_0052B952: ;
    if (CMP_NE(eax, 4)) goto loc_0052B95B; /* jne: not equal / not zero */

loc_0052B957: ;
    PUSH32(esp, eax);
    POP32(esp, edx);
    goto loc_0052B962;

loc_0052B95B: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + eax * 4 + 0x1C);

loc_0052B962: ;
    if (CMP_NE(edx, MEM32(ebp + 8))) goto loc_0052B96E; /* jne: not equal / not zero */

loc_0052B967: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + eax * 4 + 0x1C) = ebx;

loc_0052B96E: ;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_0052B952; /* jle: less or equal (signed <=) */

loc_0052B974: ;
    eax = ebp + -4;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052B97C: ;
    ecx = MEM32(ebp + -4);

loc_0052B97F: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0052B950; /* jne: not equal / not zero */

loc_0052B983: ;
    edi = MEM32(edi + 0x34);
    if (TEST_NZ(edi, edi)) goto loc_0052B933; /* jne: not equal / not zero */

loc_0052B98A: ;
    SET_LO8(eax, 1);

loc_0052B98C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B993
 * Original: 0x0052B993 - 0x0052B9FD (106 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B993(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B993: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    edi = 0; /* xor self */
    POP32(esp, esi);

loc_0052B99A: ;
    if (CMP_EQ(MEM8(esp + edi + 0x10), 0)) goto loc_0052B9CE; /* je: equal / zero */

loc_0052B9A1: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0052B9CE; /* je: equal / zero */

loc_0052B9A7: ;
    if (CMP_NE(MEM32(esi + eax), 0)) goto loc_0052B9B4; /* jne: not equal / not zero */

loc_0052B9AD: ;
    eax = MEM32(eax + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0052B9A7; /* jne: not equal / not zero */

loc_0052B9B4: ;
    if (TEST_Z(eax, eax)) goto loc_0052B9CE; /* je: equal / zero */

loc_0052B9B8: ;
    eax = MEM32(esi + eax);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0052B9CE; /* je: equal / zero */

loc_0052B9C0: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052B9CA: ;
    if (TEST_Z(eax, eax)) goto loc_0052B9F9; /* je: equal / zero */

loc_0052B9CE: ;
    esi = esi + 4;
    edi++;
    if (CMP_LE(esi, 0x2C)) goto loc_0052B99A; /* jle: less or equal (signed <=) */

loc_0052B9D7: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_0052B9DE: ;
    if (TEST_Z(eax, eax)) { sub_0052B9FD(); return; } /* je: equal / zero */

loc_0052B9E2: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_0052B9E9: ;
    PUSH32(esp, MEM32(eax + 0x20));
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052B9F5: ;
    if (TEST_NZ(eax, eax)) { sub_0052B9FD(); return; } /* jne: not equal / not zero */

loc_0052B9F9: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052B9FF(); return; /* tail jmp 0x0052B9FF */

}

/**
 * sub_0052BA04
 * Original: 0x0052BA04 - 0x0052BAB6 (178 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BA04(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BA04: ;
    eax = 0x47FC46;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052BA0E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x30);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = MEM32(ebp + 0x20);
    edi = 0x648C78;
    if (TEST_Z(esi, esi)) goto loc_0052BA7E; /* je: equal / zero */

loc_0052BA28: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_0052BA45: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052BAB2; /* je: equal / zero */

loc_0052BA49: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    esi = esi + 0x20;

loc_0052BA50: ;
    eax = MEM32(ebp + -16);
    if (CMP_EQ(MEM8(ebp + eax + 0x20), 0)) goto loc_0052BA72; /* je: equal / zero */

loc_0052BA5A: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0052BA72; /* je: equal / zero */

loc_0052BA60: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0052BA72; /* je: equal / zero */

loc_0052BA65: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052BA6E: ;
    if (TEST_Z(eax, eax)) goto loc_0052BAB2; /* je: equal / zero */

loc_0052BA72: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    esi = esi + 4;
    if (CMP_LE(MEM32(ebp + -16), 3)) goto loc_0052BA50; /* jle: less or equal (signed <=) */

loc_0052BA7E: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM32(eax + 4), 5)) { sub_0052BAB6(); return; } /* jne: not equal / not zero */

loc_0052BA87: ;
    ecx = MEM32(ebp + 0xC);
    if (CMP_EQ(MEM32(ecx + 0x50), 0)) { sub_0052BAB6(); return; } /* je: equal / zero */

loc_0052BA90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 8) = esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(ecx + 0x50);
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_0052BAAE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052BAB6(); return; } /* jne: not equal / not zero */

loc_0052BAB2: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052BAB8(); return; /* tail jmp 0x0052BAB8 */

}

/**
 * sub_0052BAC9
 * Original: 0x0052BAC9 - 0x0052BC2A (353 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BAC9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BAC9: ;
    eax = 0x47F784;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052BAD3: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + 0xC;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052BAE7: ;
    if (TEST_Z(eax, eax)) { sub_0052BC2A(); return; } /* je: equal / zero */

loc_0052BAEF: ;
    ecx = MEM32(ebx + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(ebp + -13) = 1;
    if (TEST_NZ(ecx, ecx)) goto loc_0052BC1E; /* jne: not equal / not zero */

loc_0052BAFE: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = ecx;
    MEM32(ebp + -20) = esi;
    edi = 0x648C78;
    if (TEST_Z(ecx, ecx)) goto loc_0052BB86; /* je: equal / zero */

loc_0052BB0C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + -24) = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_0052CDAA(); /* call 0x0052CDAA */

loc_0052BB23: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052BB77; /* je: equal / zero */

loc_0052BB27: ;
    esi = MEM32(esi + 4);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00532364(); /* call 0x00532364 */

loc_0052BB33: ;
    if (TEST_NZ(eax, eax)) goto loc_0052BB3A; /* jne: not equal / not zero */

loc_0052BB37: ;
    MEM8(ebp + -13) = LO8(eax);

loc_0052BB3A: ;
    if (CMP_NE(MEM8(ebp + -13), 0)) goto loc_0052BB77; /* jne: not equal / not zero */

loc_0052BB40: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0052BC18; /* je: equal / zero */

loc_0052BB4B: ;
    PUSH32(esp, 3);
    ecx = eax + 4;
    POP32(esp, edx);

loc_0052BB51: ;
    eax = MEM32(ecx);
    if (CMP_NE(esi, eax)) goto loc_0052BB5B; /* jne: not equal / not zero */

loc_0052BB57: ;
    MEM8(ebp + -13) = 1;

loc_0052BB5B: ;
    eax = MEM32(eax + 0x10);
    if (CMP_NE(esi, MEM32(eax + 0xC))) goto loc_0052BB67; /* jne: not equal / not zero */

loc_0052BB63: ;
    MEM8(ebp + -13) = 1;

loc_0052BB67: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0052BB51; /* jne: not equal / not zero */

loc_0052BB6D: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0052BC18; /* je: equal / zero */

loc_0052BB77: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005331CC(); /* call 0x005331CC */

loc_0052BB7F: ;
    esi = MEM32(ebp + -20);
    if (TEST_NZ(esi, esi)) goto loc_0052BB0C; /* jne: not equal / not zero */

loc_0052BB86: ;
    if (CMP_EQ(MEM8(ebp + 0x18), 0)) goto loc_0052BBCE; /* je: equal / zero */

loc_0052BB8C: ;
    edx = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0x30), edx)) goto loc_0052BBCE; /* je: equal / zero */

loc_0052BB93: ;
    ecx = 0; /* xor self */
    eax = ebx + 0x20;

loc_0052BB98: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_0052BBA1; /* je: equal / zero */

loc_0052BB9C: ;
    MEM8(ebp + ecx + 0x10) = 0;

loc_0052BBA1: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052BB98; /* jle: less or equal (signed <=) */

loc_0052BBAA: ;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x18) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_0052BBCA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052BC18; /* je: equal / zero */

loc_0052BBCE: ;
    if (CMP_EQ(MEM8(ebp + 0x1C), 0)) { sub_0052BC2A(); return; } /* je: equal / zero */

loc_0052BBD4: ;
    eax = MEM32(ebx + 0x34);
    if (TEST_Z(eax, eax)) { sub_0052BC2A(); return; } /* je: equal / zero */

loc_0052BBDB: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_0052BBE0: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0052BBEA; /* je: equal / zero */

loc_0052BBE5: ;
    MEM8(ebp + ecx + 0x10) = 0;

loc_0052BBEA: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052BBE0; /* jle: less or equal (signed <=) */

loc_0052BBF3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x18) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_0052BC14: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052BC2A(); return; } /* jne: not equal / not zero */

loc_0052BC18: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052BC2C(); return; /* tail jmp 0x0052BC2C */

loc_0052BC1C: ;
    ecx = eax;

loc_0052BC1E: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052BC1C; /* jne: not equal / not zero */

loc_0052BC25: ;
    goto loc_0052BAFE;

}

/**
 * sub_0052BC3D
 * Original: 0x0052BC3D - 0x0052BCB2 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BC3D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BC3D: ;
    eax = 0x47F409;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052BC47: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = ebp + -24;
    ebx = 0x648C78;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -24) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052BC64: ;
    MEM32(ebp + -4) = edi;

loc_0052BC67: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = edi;
    esi = esp;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0); sub_00529EB6(); /* call 0x00529EB6 */

loc_0052BC7C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0052BAC9(); /* call 0x0052BAC9 */

loc_0052BC87: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(ebp + edi + -20) = LO8(eax);
    edi++;
    if (CMP_LE(edi, 3)) goto loc_0052BC67; /* jle: less or equal (signed <=) */

loc_0052BC96: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -20);
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ebx;
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0052BCB2
 * Original: 0x0052BCB2 - 0x0052C390 (1758 bytes, 597 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BCB2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BCB2: ;
    eax = 0x47FC8D;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052BCBC: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(esi, edx)) goto loc_0052C37D; /* je: equal / zero */

loc_0052BCD6: ;
    ebx = MEM32(ebp + 8);
    if (CMP_EQ(ebx, esi)) goto loc_0052C37D; /* je: equal / zero */

loc_0052BCE1: ;
    eax = MEM32(ebx + 0x30);
    if (CMP_EQ(eax, esi)) goto loc_0052BD18; /* je: equal / zero */

loc_0052BCE8: ;
    edi = MEM32(ebx + 0x34);
    if (CMP_EQ(edi, esi)) goto loc_0052BD18; /* je: equal / zero */

loc_0052BCEF: ;
    (void)0; /* cmp MEM32(esi + 0x30), edx - flags set for next jcc */
    MEM8(ebp + -14) = LO8(edx);
    if (CMP_EQ(MEM32(esi + 0x30), edx)) goto loc_0052BD07; /* je: equal / zero */

loc_0052BCF7: ;
    if (CMP_NE(eax, edx)) goto loc_0052BD11; /* jne: not equal / not zero */

loc_0052BCFB: ;
    eax = ebp + 0x14;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052BD03: ;
    if (TEST_NZ(eax, eax)) goto loc_0052BD11; /* jne: not equal / not zero */

loc_0052BD07: ;
    if (CMP_EQ(MEM32(esi + 0x34), 0)) goto loc_0052BD42; /* je: equal / zero */

loc_0052BD0D: ;
    if (TEST_Z(edi, edi)) goto loc_0052BD48; /* je: equal / zero */

loc_0052BD11: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_0052C37F;

loc_0052BD18: ;
    ecx = ebx;
    MEM8(ebp + -14) = 1;
    eax = esi + 0x20;
    ecx = ecx - esi;

loc_0052BD23: ;
    if (CMP_EQ(MEM32(ecx + eax), 0)) goto loc_0052BD2E; /* je: equal / zero */

loc_0052BD29: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0052BD11; /* jne: not equal / not zero */

loc_0052BD2E: ;
    edx++;
    eax = eax + 4;
    if (CMP_LE(edx, 3)) goto loc_0052BD23; /* jle: less or equal (signed <=) */

loc_0052BD37: ;
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    goto loc_0052C25D;

loc_0052BD42: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    edi = ebx;
    if (TEST_NZ(edi, edi)) goto loc_0052BD4A; /* jne: not equal / not zero */

loc_0052BD48: ;
    edi = esi;

loc_0052BD4A: ;
    if (CMP_NE(MEM32(ebx + 0x30), 0)) goto loc_0052BD52; /* jne: not equal / not zero */

loc_0052BD50: ;
    ebx = esi;

loc_0052BD52: ;
    if (CMP_EQ(ebx, edi)) goto loc_0052BDC9; /* je: equal / zero */

loc_0052BD56: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    MEM32(ebp + -56) = MEM32(ebp + -56) & 0;
    MEM32(ebp + -68) = 0x648C88;
    MEM8(ebp + -4) = 2;
    goto loc_0052BD86;

loc_0052BD6B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -52) = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052BD78: ;
    eax = ebp + -68;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0052B35A(); /* call 0x0052B35A */

loc_0052BD83: ;
    edi = MEM32(edi + 0x34);

loc_0052BD86: ;
    if (TEST_NZ(edi, edi)) goto loc_0052BD6B; /* jne: not equal / not zero */

loc_0052BD8A: ;
    goto loc_0052BDB9;

loc_0052BD8C: ;
    edi = 0; /* xor self */
    esi = ebx + 0x20;

loc_0052BD91: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0052BDAD; /* je: equal / zero */

loc_0052BD97: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0052BDAD; /* je: equal / zero */

loc_0052BD9C: ;
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052BDA5: ;
    if (TEST_NZ(eax, eax)) goto loc_0052BEB8; /* jne: not equal / not zero */

loc_0052BDAD: ;
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, 3)) goto loc_0052BD91; /* jle: less or equal (signed <=) */

loc_0052BDB6: ;
    ebx = MEM32(ebx + 0x30);

loc_0052BDB9: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0052BD8C; /* jne: not equal / not zero */

loc_0052BDBD: ;
    ecx = ebp + -68;
    MEM8(ebp + -4) = 1;
    PUSH32(esp, 0); sub_00531D63(); /* call 0x00531D63 */

loc_0052BDC9: ;
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    MEM32(ebp + -24) = esi;

loc_0052BDD4: ;
    eax = esi * 4 + 0x20;
    MEM32(ebp + -52) = eax;
    eax = eax + ebx;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0052BDFE; /* jne: not equal / not zero */

loc_0052BDE8: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_0052BDF0: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052BDFE; /* jne: not equal / not zero */

loc_0052BDF4: ;
    if (CMP_EQ(MEM8(ebp + esi + 0x18), LO8(eax))) goto loc_0052C250; /* je: equal / zero */

loc_0052BDFE: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0052A53B(); /* call 0x0052A53B */

loc_0052BE07: ;
    if (TEST_NZ(eax, eax)) goto loc_0052BE21; /* jne: not equal / not zero */

loc_0052BE0B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_0052BE13: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052BE21; /* jne: not equal / not zero */

loc_0052BE17: ;
    if (CMP_EQ(MEM8(ebp + esi + 0x20), LO8(eax))) goto loc_0052C250; /* je: equal / zero */

loc_0052BE21: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    MEM8(ebp + -13) = 0;

loc_0052BE29: ;
    eax = MEM32(ebp + -20);
    if (CMP_G(eax, 3)) goto loc_0052C243; /* jg: greater (signed >) */

loc_0052BE35: ;
    esi = eax * 4 + 0x20;
    ebx = ebx + esi;
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    MEM32(ebp + -36) = ebx;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052BE4A: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_0052BE53: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052BE5B: ;
    edi = MEM32(ebp + -20);
    SET_LO8(eax, MEM8(ebp + edi + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -15) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052BE6D: ;
    eax = MEM32(ebp + 0xC);
    ecx = edi;
    PUSH32(esp, 0); sub_0052A53B(); /* call 0x0052A53B */

loc_0052BE77: ;
    if (TEST_NZ(eax, eax)) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052BE7F: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052A4C3(); /* call 0x0052A4C3 */

loc_0052BE88: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052BE90: ;
    eax = MEM32(ebp + -24);
    if (CMP_NE(MEM8(ebp + eax + 0x20), 0)) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052BE9E: ;
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0052BEC9; /* je: equal / zero */

loc_0052BEA8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052BEB3: ;
    goto loc_0052C067;

loc_0052BEB8: ;
    ecx = ebp + -68;
    MEM8(ebp + -4) = 1;
    PUSH32(esp, 0); sub_00531D63(); /* call 0x00531D63 */

loc_0052BEC4: ;
    goto loc_0052BD11;

loc_0052BEC9: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -52);
    eax = eax + ecx;
    edi = MEM32(eax);
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + -40) = eax;
    eax = esi + ecx;
    esi = MEM32(eax);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -48) = esi;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0052BF08; /* je: equal / zero */

loc_0052BEE9: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0052BF08; /* je: equal / zero */

loc_0052BEEE: ;
    ecx = MEM32(ecx + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052BF11; /* je: equal / zero */

loc_0052BEF5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052BF04: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052BF11; /* jne: not equal / not zero */

loc_0052BF08: ;
    MEM8(ebp + -13) = 0;
    goto loc_0052C072;

loc_0052BF11: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM8(ebp + -13) = 0;
    if (CMP_NE(edi, esi)) goto loc_0052BF3E; /* jne: not equal / not zero */

loc_0052BF19: ;
    if (TEST_Z(esi, esi)) goto loc_0052BF35; /* je: equal / zero */

loc_0052BF1D: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052BF2D: ;
    MEM8(ebp + -13) = LO8(eax);
    goto loc_0052BFDE;

loc_0052BF35: ;
    MEM8(ebp + -13) = 1;
    goto loc_0052BFDE;

loc_0052BF3E: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + -24);
    PUSH32(esp, 0);
    if (TEST_NZ(esi, esi)) goto loc_0052BF6F; /* jne: not equal / not zero */

loc_0052BF4A: ;
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052BF55: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C04B; /* je: equal / zero */

loc_0052BF60: ;
    ecx = MEM32(ebp + -44);
    eax = esi;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -40);

loc_0052BF6A: ;
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_0052BFDE;

loc_0052BF6F: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    edi = MEM32(ebp + -20);
    if (TEST_NZ(edi, edi)) goto loc_0052BF93; /* jne: not equal / not zero */

loc_0052BF76: ;
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052BF7B: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C04B; /* je: equal / zero */

loc_0052BF86: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -40);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -44);
    goto loc_0052BF6A;

loc_0052BF93: ;
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052BF98: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C04B; /* je: equal / zero */

loc_0052BFA0: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -28);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052BFB3: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052BFCB; /* je: equal / zero */

loc_0052BFBA: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -40);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -44);
    eax = esi;
    MEM32(ecx) = eax;
    goto loc_0052BFDE;

loc_0052BFCB: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -48);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052BFDE: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0052C04B; /* je: equal / zero */

loc_0052BFE4: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052C01C; /* jne: not equal / not zero */

loc_0052BFEE: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -48) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0052C064; /* je: equal / zero */

loc_0052BFF5: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(ebp + -20);

loc_0052BFFB: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */

loc_0052C003: ;
    PUSH32(esp, 4);
    POP32(esp, edx);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    esi = edx;
    if (CMP_EQ(eax, edx)) goto loc_0052C010; /* je: equal / zero */

loc_0052C00C: ;
    esi = MEM32(ecx + eax * 4 + 0x1C);

loc_0052C010: ;
    if (CMP_NE(esi, edi)) goto loc_0052C025; /* jne: not equal / not zero */

loc_0052C014: ;
    MEM32(ecx + eax * 4 + 0x1C) = ebx;
    goto loc_0052C035;

loc_0052C01A: ;
    ecx = eax;

loc_0052C01C: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052C01A; /* jne: not equal / not zero */

loc_0052C023: ;
    goto loc_0052BFEE;

loc_0052C025: ;
    if (CMP_EQ(eax, edx)) goto loc_0052C02D; /* je: equal / zero */

loc_0052C029: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_0052C02D: ;
    if (CMP_NE(edx, ebx)) goto loc_0052C035; /* jne: not equal / not zero */

loc_0052C031: ;
    MEM32(ecx + eax * 4 + 0x1C) = edi;

loc_0052C035: ;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_0052C003; /* jle: less or equal (signed <=) */

loc_0052C03B: ;
    eax = ebp + -48;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052C043: ;
    if (CMP_NE(MEM32(ebp + -48), 0)) goto loc_0052BFFB; /* jne: not equal / not zero */

loc_0052C049: ;
    goto loc_0052C064;

loc_0052C04B: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052C064; /* je: equal / zero */

loc_0052C055: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052C064: ;
    SET_LO8(eax, MEM8(ebp + -13));

loc_0052C067: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052C072: ;
    if (CMP_NE(MEM8(ebp + -15), 0)) goto loc_0052C230; /* jne: not equal / not zero */

loc_0052C07C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0052C09A; /* je: equal / zero */

loc_0052C086: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052C095: ;
    goto loc_0052C22D;

loc_0052C09A: ;
    ecx = MEM32(ebp + -32);
    edi = MEM32(ecx);
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(ebp + -36);
    esi = MEM32(ecx);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -48) = esi;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0052C0CE; /* je: equal / zero */

loc_0052C0AF: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0052C0CE; /* je: equal / zero */

loc_0052C0B4: ;
    ecx = MEM32(eax + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052C0D7; /* je: equal / zero */

loc_0052C0BB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052C0CA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052C0D7; /* jne: not equal / not zero */

loc_0052C0CE: ;
    MEM8(ebp + -13) = 0;
    goto loc_0052C230;

loc_0052C0D7: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM8(ebp + -13) = 0;
    if (CMP_NE(edi, esi)) goto loc_0052C104; /* jne: not equal / not zero */

loc_0052C0DF: ;
    if (TEST_Z(esi, esi)) goto loc_0052C0FB; /* je: equal / zero */

loc_0052C0E3: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052C0F3: ;
    MEM8(ebp + -13) = LO8(eax);
    goto loc_0052C1A4;

loc_0052C0FB: ;
    MEM8(ebp + -13) = 1;
    goto loc_0052C1A4;

loc_0052C104: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + -24);
    PUSH32(esp, 0);
    if (TEST_NZ(esi, esi)) goto loc_0052C135; /* jne: not equal / not zero */

loc_0052C110: ;
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052C11B: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C211; /* je: equal / zero */

loc_0052C126: ;
    ecx = MEM32(ebp + -36);
    eax = esi;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -32);

loc_0052C130: ;
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_0052C1A4;

loc_0052C135: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    edi = MEM32(ebp + -20);
    if (TEST_NZ(edi, edi)) goto loc_0052C159; /* jne: not equal / not zero */

loc_0052C13C: ;
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052C141: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C211; /* je: equal / zero */

loc_0052C14C: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -32);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -36);
    goto loc_0052C130;

loc_0052C159: ;
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052C15E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C211; /* je: equal / zero */

loc_0052C166: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -24);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + -28);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052C179: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C191; /* je: equal / zero */

loc_0052C180: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -32);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -36);
    eax = esi;
    MEM32(ecx) = eax;
    goto loc_0052C1A4;

loc_0052C191: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -24);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + -48);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052F250(); /* call 0x0052F250 */

loc_0052C1A4: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0052C211; /* je: equal / zero */

loc_0052C1AA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052C1E2; /* jne: not equal / not zero */

loc_0052C1B4: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -48) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0052C22A; /* je: equal / zero */

loc_0052C1BB: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(ebp + -20);

loc_0052C1C1: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */

loc_0052C1C9: ;
    PUSH32(esp, 4);
    POP32(esp, edx);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    esi = edx;
    if (CMP_EQ(eax, edx)) goto loc_0052C1D6; /* je: equal / zero */

loc_0052C1D2: ;
    esi = MEM32(ecx + eax * 4 + 0x1C);

loc_0052C1D6: ;
    if (CMP_NE(esi, edi)) goto loc_0052C1EB; /* jne: not equal / not zero */

loc_0052C1DA: ;
    MEM32(ecx + eax * 4 + 0x1C) = ebx;
    goto loc_0052C1FB;

loc_0052C1E0: ;
    ecx = eax;

loc_0052C1E2: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052C1E0; /* jne: not equal / not zero */

loc_0052C1E9: ;
    goto loc_0052C1B4;

loc_0052C1EB: ;
    if (CMP_EQ(eax, edx)) goto loc_0052C1F3; /* je: equal / zero */

loc_0052C1EF: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_0052C1F3: ;
    if (CMP_NE(edx, ebx)) goto loc_0052C1FB; /* jne: not equal / not zero */

loc_0052C1F7: ;
    MEM32(ecx + eax * 4 + 0x1C) = edi;

loc_0052C1FB: ;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_0052C1C9; /* jle: less or equal (signed <=) */

loc_0052C201: ;
    eax = ebp + -48;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052C209: ;
    if (CMP_NE(MEM32(ebp + -48), 0)) goto loc_0052C1C1; /* jne: not equal / not zero */

loc_0052C20F: ;
    goto loc_0052C22A;

loc_0052C211: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052C22A; /* je: equal / zero */

loc_0052C21B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052C22A: ;
    SET_LO8(eax, MEM8(ebp + -13));

loc_0052C22D: ;
    MEM8(ebp + -13) = LO8(eax);

loc_0052C230: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    (void)0; /* cmp MEM8(ebp + -13), 0 - flags set for next jcc */
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0052BE29; /* je: equal / zero */

loc_0052C243: ;
    if (CMP_EQ(MEM8(ebp + -13), 0)) goto loc_0052BD11; /* je: equal / zero */

loc_0052C24D: ;
    esi = MEM32(ebp + -24);

loc_0052C250: ;
    esi++;
    (void)0; /* cmp esi, 3 - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (CMP_LE(esi, 3)) goto loc_0052BDD4; /* jle: less or equal (signed <=) */

loc_0052C25D: ;
    ecx = MEM32(edi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052C35E; /* jne: not equal / not zero */

loc_0052C268: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = ecx;
    MEM32(ebp + -48) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0052C2C5; /* je: equal / zero */

loc_0052C271: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -72;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052C27C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edi = esp;
    MEM32(ebp + -52) = esp;
    PUSH32(esp, eax);
    MEM8(ebp + -4) = 3;
    PUSH32(esp, 0); sub_0052A08B(); /* call 0x0052A08B */

loc_0052C28D: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_0052CB11(); /* call 0x0052CB11 */

loc_0052C298: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -4) = 1;
    MEM32(ebp + -72) = 0x648C74;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052BD11; /* jne: not equal / not zero */

loc_0052C2B0: ;
    eax = ebp + -48;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052C2B8: ;
    esi = MEM32(ebp + -48);
    if (TEST_NZ(esi, esi)) goto loc_0052C271; /* jne: not equal / not zero */

loc_0052C2BF: ;
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);

loc_0052C2C5: ;
    if (CMP_NE(MEM8(ebp + 0x10), 0)) goto loc_0052C37D; /* jne: not equal / not zero */

loc_0052C2CF: ;
    if (CMP_EQ(MEM8(ebp + -14), 0)) goto loc_0052C2EF; /* je: equal / zero */

loc_0052C2D5: ;
    if (CMP_NE(MEM32(ebx + 0x30), edi)) goto loc_0052C2E2; /* jne: not equal / not zero */

loc_0052C2DA: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;

loc_0052C2E2: ;
    if (CMP_NE(MEM32(ebx + 0x34), edi)) goto loc_0052C2EF; /* jne: not equal / not zero */

loc_0052C2E7: ;
    MEM32(ebx + 0x34) = MEM32(ebx + 0x34) & 0;
    MEM32(edi + 0x30) = MEM32(edi + 0x30) & 0;

loc_0052C2EF: ;
    if (CMP_NE(MEM32(ebx + 0x30), 0)) goto loc_0052C2FF; /* jne: not equal / not zero */

loc_0052C2F5: ;
    eax = MEM32(edi + 0x30);
    edx = ebx;
    PUSH32(esp, 0); sub_0052A3E9(); /* call 0x0052A3E9 */

loc_0052C2FF: ;
    if (CMP_NE(MEM32(ebx + 0x34), 0)) goto loc_0052C30F; /* jne: not equal / not zero */

loc_0052C305: ;
    eax = MEM32(edi + 0x34);
    edx = ebx;
    PUSH32(esp, 0); sub_0052A3D3(); /* call 0x0052A3D3 */

loc_0052C30F: ;
    eax = edi + 0x20;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0xC) = 4;

loc_0052C31C: ;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0052C351; /* je: equal / zero */

loc_0052C325: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0052C351; /* je: equal / zero */

loc_0052C32A: ;
    if (CMP_NE(MEM32(esi + 0x34), edi)) goto loc_0052C337; /* jne: not equal / not zero */

loc_0052C32F: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052A8FD(); /* call 0x0052A8FD */

loc_0052C337: ;
    if (CMP_NE(MEM32(esi + 0x38), edi)) goto loc_0052C344; /* jne: not equal / not zero */

loc_0052C33C: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052A9CF(); /* call 0x0052A9CF */

loc_0052C344: ;
    if (CMP_NE(MEM32(esi + 0x3C), edi)) goto loc_0052C351; /* jne: not equal / not zero */

loc_0052C349: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052AAA1(); /* call 0x0052AAA1 */

loc_0052C351: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_0052C31C; /* jne: not equal / not zero */

loc_0052C35A: ;
    goto loc_0052C372;

loc_0052C35C: ;
    ecx = eax;

loc_0052C35E: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052C35C; /* jne: not equal / not zero */

loc_0052C365: ;
    goto loc_0052C268;

loc_0052C36A: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052C372: ;
    eax = edi;
    PUSH32(esp, 0); sub_0052A43C(); /* call 0x0052A43C */

loc_0052C379: ;
    if (TEST_NZ(eax, eax)) goto loc_0052C36A; /* jne: not equal / not zero */

loc_0052C37D: ;
    SET_LO8(eax, 1);

loc_0052C37F: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0052C390
 * Original: 0x0052C390 - 0x0052C414 (132 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C390: ;
    eax = 0x47F338;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052C39A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    ebx++;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_0052C410; /* je: equal / zero */

loc_0052C3A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(ebp + -16) = esp;
    esi = 0x648C78;
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052C87B(); /* call 0x0052C87B */

loc_0052C3C5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052C414(); return; } /* je: equal / zero */

loc_0052C3C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052C87B(); /* call 0x0052C87B */

loc_0052C3E3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052C414(); return; } /* je: equal / zero */

loc_0052C3E7: ;
    if (CMP_NE(MEM32(edi + 0x30), 0)) { sub_0052C414(); return; } /* jne: not equal / not zero */

loc_0052C3ED: ;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_0052C3FA; /* je: equal / zero */

loc_0052C3F4: ;
    if (CMP_NE(MEM32(esi + 0x34), 0)) { sub_0052C414(); return; } /* jne: not equal / not zero */

loc_0052C3FA: ;
    if (CMP_NE(MEM8(ebp + 0xC), 0)) goto loc_0052C410; /* jne: not equal / not zero */

loc_0052C400: ;
    if (TEST_NZ(eax, eax)) goto loc_0052C40A; /* jne: not equal / not zero */

loc_0052C404: ;
    eax = MEM32(esi + 0x34);
    MEM32(edi + 0x34) = eax;

loc_0052C40A: ;
    MEM32(esi + 0x34) = edi;
    MEM32(edi + 0x30) = esi;

loc_0052C410: ;
    SET_LO8(eax, LO8(ebx));
    g_seh_ebp = ebp; sub_0052C416(); return; /* tail jmp 0x0052C416 */

}

/**
 * sub_0052C426
 * Original: 0x0052C426 - 0x0052C448 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C426(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052C426: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* cmp MEM8(ebp + 0x10), 0 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(MEM8(ebp + 0x10), 0)) { sub_0052C448(); return; } /* je: equal / zero */

loc_0052C435: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x30);
    if (TEST_Z(eax, eax)) { sub_0052C448(); return; } /* je: equal / zero */

loc_0052C43F: ;
    MEM8(ebp + 0x14) = 1;
    MEM32(ebp + -4) = eax;
    goto loc_0052C435;

}

/**
 * sub_0052C5EF
 * Original: 0x0052C5EF - 0x0052C617 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C5EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C5EF: ;
    eax = 0x47F3F7;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052C5F9: ;
    esp = esp - 0x40;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    if (CMP_EQ(eax, 1)) { sub_0052C617(); return; } /* je: equal / zero */

loc_0052C60B: ;
    if (CMP_EQ(eax, 6)) { sub_0052C617(); return; } /* je: equal / zero */

loc_0052C610: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052C869(); return; /* tail jmp 0x0052C869 */

}

/**
 * sub_0052C87B
 * Original: 0x0052C87B - 0x0052C8F8 (125 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C87B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C87B: ;
    eax = 0x47F784;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052C885: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;

loc_0052C88D: ;
    if (CMP_EQ(MEM8(ebp + edi + 0x10), 0)) goto loc_0052C8DF; /* je: equal / zero */

loc_0052C894: ;
    eax = MEM32(ebp + 8);
    ecx = edi;
    PUSH32(esp, 0); sub_0052A53B(); /* call 0x0052A53B */

loc_0052C89E: ;
    if (TEST_Z(eax, eax)) goto loc_0052C8DF; /* je: equal / zero */

loc_0052C8A2: ;
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */

loc_0052C8A6: ;
    if (CMP_G(esi, 3)) goto loc_0052C8DB; /* jg: greater (signed >) */

loc_0052C8AB: ;
    if (CMP_NE(MEM8(ebp + esi + 0x10), 0)) goto loc_0052C8D6; /* jne: not equal / not zero */

loc_0052C8B2: ;
    eax = MEM32(ebp + 8);
    ecx = esi;
    PUSH32(esp, 0); sub_0052A53B(); /* call 0x0052A53B */

loc_0052C8BC: ;
    if (TEST_NZ(eax, eax)) goto loc_0052C8D6; /* jne: not equal / not zero */

loc_0052C8C0: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052C426(); /* call 0x0052C426 */

loc_0052C8D0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C8D6; /* je: equal / zero */

loc_0052C8D4: ;
    SET_LO8(ebx, 1);

loc_0052C8D6: ;
    esi++;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0052C8A6; /* je: equal / zero */

loc_0052C8DB: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0052C8F8(); return; } /* je: equal / zero */

loc_0052C8DF: ;
    edi++;
    if (CMP_LE(edi, 3)) goto loc_0052C88D; /* jle: less or equal (signed <=) */

loc_0052C8E5: ;
    SET_LO8(eax, 1);
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0052C8FC
 * Original: 0x0052C8FC - 0x0052CA22 (294 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C8FC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C8FC: ;
    eax = 0x47F772;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052C906: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, 2)) { sub_0052CA22(); return; } /* je: equal / zero */

loc_0052C919: ;
    if (CMP_EQ(eax, 3)) { sub_0052CA22(); return; } /* je: equal / zero */

loc_0052C922: ;
    ecx = 0; /* xor self */
    if (CMP_NE(MEM32(edi + 0x34), ecx)) { sub_0052CA22(); return; } /* jne: not equal / not zero */

loc_0052C92D: ;
    if (CMP_NE(MEM32(edi + 0x30), ecx)) { sub_0052CA22(); return; } /* jne: not equal / not zero */

loc_0052C936: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -28) = 0x648C88;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -4) = ecx;
    ebx = 0; /* xor self */
    esi = edi + 0x20;
    goto loc_0052C951;

loc_0052C94F: ;
    ecx = 0; /* xor self */

loc_0052C951: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0052C9AA; /* je: equal / zero */

loc_0052C958: ;
    if (CMP_EQ(eax, ecx)) goto loc_0052C968; /* je: equal / zero */

loc_0052C95C: ;
    PUSH32(esp, eax);
    edi = ebp + -28;
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_0052C965: ;
    edi = MEM32(ebp + 8);

loc_0052C968: ;
    ebx++;
    esi = esi + 4;
    if (CMP_LE(ebx, 3)) goto loc_0052C94F; /* jle: less or equal (signed <=) */

loc_0052C971: ;
    eax = MEM32(ebp + -20);
    if (TEST_NZ(eax, eax)) goto loc_0052C9B0; /* jne: not equal / not zero */

loc_0052C978: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052C99E; /* je: equal / zero */

loc_0052C97F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = edi;
    PUSH32(esp, 0); sub_0052F1FE(); /* call 0x0052F1FE */

loc_0052C98C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052C9B9; /* je: equal / zero */

loc_0052C990: ;
    eax = ebp + 8;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052C998: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_0052C97F; /* jne: not equal / not zero */

loc_0052C99E: ;
    ecx = MEM32(edi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052C9E9; /* jne: not equal / not zero */

loc_0052C9A5: ;
    MEM32(ebp + 8) = ecx;
    goto loc_0052CA0A;

loc_0052C9AA: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_0052CA10;

loc_0052C9AE: ;
    eax = ecx;

loc_0052C9B0: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_NZ(ecx, ecx)) goto loc_0052C9AE; /* jne: not equal / not zero */

loc_0052C9B7: ;
    goto loc_0052C978;

loc_0052C9B9: ;
    eax = MEM32(ebp + -20);
    if (TEST_NZ(eax, eax)) goto loc_0052C9DE; /* jne: not equal / not zero */

loc_0052C9C0: ;
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_0052C9AA; /* je: equal / zero */

loc_0052C9C5: ;
    eax = ebp + 8;
    PUSH32(esp, 0); sub_005327BB(); /* call 0x005327BB */

loc_0052C9CD: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = edi;
    PUSH32(esp, 0); sub_0052F1FE(); /* call 0x0052F1FE */

loc_0052C9DA: ;
    goto loc_0052C9B9;

loc_0052C9DC: ;
    eax = ecx;

loc_0052C9DE: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_NZ(ecx, ecx)) goto loc_0052C9DC; /* jne: not equal / not zero */

loc_0052C9E5: ;
    goto loc_0052C9C0;

loc_0052C9E7: ;
    ecx = eax;

loc_0052C9E9: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052C9E7; /* jne: not equal / not zero */

loc_0052C9F0: ;
    goto loc_0052C9A5;

loc_0052C9F2: ;
    eax = MEM32(ecx + 4);
    (void)0; /* cmp MEM8(eax + 0x14), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(eax + 0x14), 0)) ? 1 : 0); /* sete */
    MEM8(eax + 0x14) = LO8(ecx);
    eax = ebp + 8;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052CA07: ;
    ecx = MEM32(ebp + 8);

loc_0052CA0A: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0052C9F2; /* jne: not equal / not zero */

loc_0052CA0E: ;
    SET_LO8(ebx, 1);

loc_0052CA10: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_00531D63(); /* call 0x00531D63 */

loc_0052CA1C: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0052CA24(); return; /* tail jmp 0x0052CA24 */

}

/**
 * sub_0052CA33
 * Original: 0x0052CA33 - 0x0052CAA1 (110 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CA33(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052CA33: ;
    eax = 0x47FC63;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052CA3D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    MEM32(esi) = 0x648C6C;
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(MEM32(esi + 0x10), 0)) goto loc_0052CA5E; /* je: equal / zero */

loc_0052CA57: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052CA5E: ;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0052CA6D; /* je: equal / zero */

loc_0052CA65: ;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + eax * 4 + 4) = MEM32(ecx + eax * 4 + 4) & 0;

loc_0052CA6D: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_0052CA78; /* je: equal / zero */

loc_0052CA74: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;

loc_0052CA78: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    ecx = 0x535D8C;
    MEM32(esi + 0x18) = 0x648C74;
    MEM32(esi) = 0x648C7C;
    PUSH32(esp, 0); sub_00531B30(); /* call 0x00531B30 */

loc_0052CA94: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052CAA1
 * Original: 0x0052CAA1 - 0x0052CB11 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CAA1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052CAA1: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0052CAE3; /* je: equal / zero */

loc_0052CAAB: ;
    if (CMP_EQ(eax, MEM32(0x5351AC))) goto loc_0052CAE3; /* je: equal / zero */

loc_0052CAB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax + 0x10;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0052CABC: ;
    esi = MEM32(edi + 0x10);
    if (CMP_NE(MEM32(esi + 4), 3)) goto loc_0052CAE2; /* jne: not equal / not zero */

loc_0052CAC5: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052A43C(); /* call 0x0052A43C */

loc_0052CACC: ;
    if (TEST_NZ(eax, eax)) goto loc_0052CAE2; /* jne: not equal / not zero */

loc_0052CAD0: ;
    eax = esi;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_0052CAD7: ;
    if (TEST_Z(eax, eax)) goto loc_0052CAE2; /* je: equal / zero */

loc_0052CADB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0052B271(); /* call 0x0052B271 */

loc_0052CAE2: ;
    POP32(esp, esi);

loc_0052CAE3: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052CAFC; /* je: equal / zero */

loc_0052CAEE: ;
    if (CMP_EQ(eax, MEM32(0x5351AC))) goto loc_0052CAFC; /* je: equal / zero */

loc_0052CAF6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052A423(); /* call 0x0052A423 */

loc_0052CAFC: ;
    if (CMP_NE(MEM32(edi + 0x10), 0)) goto loc_0052CB0A; /* jne: not equal / not zero */

loc_0052CB02: ;
    eax = MEM32(0x5351AC);
    MEM32(edi + 0x10) = eax;

loc_0052CB0A: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CB11
 * Original: 0x0052CB11 - 0x0052CD75 (612 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CB11(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052CB11: ;
    eax = 0x47FA54;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052CB1B: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 4);
    if (TEST_Z(eax, eax)) { sub_0052CD75(); return; } /* je: equal / zero */

loc_0052CB33: ;
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 4);
    if (CMP_EQ(ecx, 2)) goto loc_0052CB43; /* je: equal / zero */

loc_0052CB3E: ;
    if (CMP_NE(ecx, 3)) goto loc_0052CB82; /* jne: not equal / not zero */

loc_0052CB43: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    edi = eax + 4;

loc_0052CB4A: ;
    eax = MEM32(ebp + -16);
    if (CMP_EQ(eax, MEM32(ebx + 0xC))) goto loc_0052CB76; /* je: equal / zero */

loc_0052CB52: ;
    eax = MEM32(edi);
    esi = MEM32(eax + 0x10);
    if (TEST_Z(esi, esi)) goto loc_0052CB76; /* je: equal / zero */

loc_0052CB5B: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0052A392(); /* call 0x0052A392 */

loc_0052CB63: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CB76; /* jne: not equal / not zero */

loc_0052CB67: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    if (CMP_EQ(MEM32(esi + 4), eax)) goto loc_0052CD71; /* je: equal / zero */

loc_0052CB76: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    edi = edi + 4;
    if (CMP_LE(MEM32(ebp + -16), 2)) goto loc_0052CB4A; /* jle: less or equal (signed <=) */

loc_0052CB82: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    if (CMP_EQ(eax, 1)) goto loc_0052CB96; /* je: equal / zero */

loc_0052CB8D: ;
    if (CMP_NE(eax, 6)) { sub_0052CD75(); return; } /* jne: not equal / not zero */

loc_0052CB96: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    edi = 0x648C78;

loc_0052CB9F: ;
    eax = MEM32(ebp + -16);
    if (CMP_EQ(eax, MEM32(ebx + 0xC))) goto loc_0052CCF3; /* je: equal / zero */

loc_0052CBAB: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + -16);
    eax = MEM32(eax + ecx * 4 + 4);
    esi = MEM32(eax + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_0052CCF3; /* je: equal / zero */

loc_0052CBC3: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0052A392(); /* call 0x0052A392 */

loc_0052CBCB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CCF3; /* jne: not equal / not zero */

loc_0052CBD3: ;
    ebx = esi;

loc_0052CBD5: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052CBE0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052CC61; /* je: equal / zero */

loc_0052CBE4: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0052A392(); /* call 0x0052A392 */

loc_0052CBEB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CC61; /* jne: not equal / not zero */

loc_0052CBEF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, ebx);
    esi = ebp + -44;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052CC07: ;
    edx = eax;
    eax = ebp + -36;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052CC11: ;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052CC16: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -36) = edi;
    MEM32(ebp + -44) = edi;
    if (TEST_NZ(eax, eax)) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CC24: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & eax;
    eax = ebx + 0x20;
    MEM32(ebp + -20) = eax;

loc_0052CC2D: ;
    eax = MEM32(ebp + -20);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0052CC49; /* je: equal / zero */

loc_0052CC36: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0); sub_0052ABC4(); /* call 0x0052ABC4 */

loc_0052CC41: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CC49: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 4;
    if (CMP_LE(MEM32(ebp + -24), 3)) goto loc_0052CC2D; /* jle: less or equal (signed <=) */

loc_0052CC56: ;
    ebx = MEM32(ebx + 0x30);
    if (TEST_NZ(ebx, ebx)) goto loc_0052CBD5; /* jne: not equal / not zero */

loc_0052CC61: ;
    ebx = MEM32(ebp + 0xC);

loc_0052CC64: ;
    esi = MEM32(ebp + -28);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052CC6F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052CCF0; /* je: equal / zero */

loc_0052CC73: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0052A392(); /* call 0x0052A392 */

loc_0052CC7A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CCF0; /* jne: not equal / not zero */

loc_0052CC7E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, ebx);
    esi = ebp + -60;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052CC96: ;
    edx = eax;
    eax = ebp + -52;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052CCA0: ;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052CCA5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -52) = edi;
    MEM32(ebp + -60) = edi;
    if (TEST_NZ(eax, eax)) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CCB3: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & eax;
    eax = ebx + 0x20;
    MEM32(ebp + -24) = eax;

loc_0052CCBC: ;
    eax = MEM32(ebp + -24);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0052CCD8; /* je: equal / zero */

loc_0052CCC5: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0); sub_0052ABC4(); /* call 0x0052ABC4 */

loc_0052CCD0: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CCD8: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    if (CMP_LE(MEM32(ebp + -20), 3)) goto loc_0052CCBC; /* jle: less or equal (signed <=) */

loc_0052CCE5: ;
    ebx = MEM32(ebx + 0x30);
    if (TEST_NZ(ebx, ebx)) goto loc_0052CC64; /* jne: not equal / not zero */

loc_0052CCF0: ;
    ebx = MEM32(ebp + 8);

loc_0052CCF3: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    if (CMP_LE(MEM32(ebp + -16), 2)) goto loc_0052CB9F; /* jle: less or equal (signed <=) */

loc_0052CD00: ;
    eax = MEM32(ebp + 0xC);

loc_0052CD03: ;
    edi = MEM32(eax + 0x34);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -28) = edi;
    if (TEST_Z(edi, edi)) goto loc_0052CD41; /* je: equal / zero */

loc_0052CD0D: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    edi = edi + 0x20;

loc_0052CD14: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(MEM8(ebp + eax + 0x14), 0)) goto loc_0052CD30; /* je: equal / zero */

loc_0052CD1E: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0052CD30; /* je: equal / zero */

loc_0052CD24: ;
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); sub_0052ABC4(); /* call 0x0052ABC4 */

loc_0052CD2C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CD30: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edi = edi + 4;
    if (CMP_LE(MEM32(ebp + 8), 3)) goto loc_0052CD14; /* jle: less or equal (signed <=) */

loc_0052CD3C: ;
    eax = MEM32(ebp + -28);
    goto loc_0052CD03;

loc_0052CD41: ;
    esi = MEM32(ebx + 4);
    PUSH32(esp, MEM32(esi + 0x34));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052CD4F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CD53: ;
    PUSH32(esp, MEM32(esi + 0x38));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052CD5E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052CD71; /* jne: not equal / not zero */

loc_0052CD62: ;
    PUSH32(esp, MEM32(esi + 0x3C));
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052CD6D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052CD75(); return; } /* je: equal / zero */

loc_0052CD71: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052CD77(); return; /* tail jmp 0x0052CD77 */

}

/**
 * sub_0052CD88
 * Original: 0x0052CD88 - 0x0052CD9D (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CD88(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052CD88: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    (void)0; /* cmp esi, 3 - flags set for next jcc */
    ebx = ecx;
    if (CMP_NE(esi, 3)) { sub_0052CD9D(); return; } /* jne: not equal / not zero */

loc_0052CD94: ;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ebx, ebx)) ? 1 : 0); /* sete */
    g_seh_ebp = ebp; sub_0052CDA7(); return; /* tail jmp 0x0052CDA7 */

}

/**
 * sub_0052CDAA
 * Original: 0x0052CDAA - 0x0052CDD0 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CDAA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052CDAA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_0052CDAE: ;
    if (CMP_EQ(MEM8(esp + esi + 0x14), 0)) goto loc_0052CDC3; /* je: equal / zero */

loc_0052CDB5: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A79A(); /* call 0x0052A79A */

loc_0052CDBF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052CDD0(); return; } /* jne: not equal / not zero */

loc_0052CDC3: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052CDAE; /* jle: less or equal (signed <=) */

loc_0052CDC9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052CDD4
 * Original: 0x0052CDD4 - 0x0052CE1F (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CDD4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052CDD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052CDE8: ;
    eax = 0; /* xor self */

loc_0052CDEA: ;
    if (CMP_EQ(eax, 4)) goto loc_0052CE07; /* je: equal / zero */

loc_0052CDEF: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    if (CMP_EQ(ecx, 4)) goto loc_0052CE07; /* je: equal / zero */

loc_0052CDFB: ;
    if (CMP_EQ(MEM8(ebp + eax + 0x10), 0)) goto loc_0052CE07; /* je: equal / zero */

loc_0052CE02: ;
    MEM8(ebp + ecx + -4) = 1;

loc_0052CE07: ;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_0052CDEA; /* jle: less or equal (signed <=) */

loc_0052CE0D: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x648C78;
    eax = esi;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052CE1F
 * Original: 0x0052CE1F - 0x0052CE57 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CE1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052CE1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(edi + 0x10), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(edi + 0x10), 0)) { sub_0052CE57(); return; } /* je: equal / zero */

loc_0052CE2A: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x14) = esp;
    esi = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, edi);
    MEM32(eax) = 0x648C78;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0052CDD4(); /* call 0x0052CDD4 */

loc_0052CE4D: ;
    ebx = MEM32(edi + 0x10);
    PUSH32(esp, 0); sub_0052B993(); /* call 0x0052B993 */

loc_0052CE55: ;
    g_seh_ebp = ebp; sub_0052CE59(); return; /* tail jmp 0x0052CE59 */

}

/**
 * sub_0052CE5F
 * Original: 0x0052CE5F - 0x0052CF03 (164 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CE5F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052CE5F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, 0); sub_0052A392(); /* call 0x0052A392 */

loc_0052CE77: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052CEFF; /* je: equal / zero */

loc_0052CE7F: ;
    SET_LO8(eax, MEM8(ebx + 0x14));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x14))) goto loc_0052CEFF; /* jne: not equal / not zero */

loc_0052CE87: ;
    esp = esp - 0x14;
    eax = esp;
    esi = edi + 0x1C;
    MEM32(ebp + -4) = esp;
    MEM32(ebp + -4) = esi;
    edi = eax + 4;
    ebx = 0x648C74;
    MEM32(eax) = ebx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 8);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A2C2(); /* call 0x0052A2C2 */

loc_0052CEAF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052CF03(); return; } /* jne: not equal / not zero */

loc_0052CEB3: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(MEM32(eax + 4), 0)) goto loc_0052CEDC; /* je: equal / zero */

loc_0052CEBC: ;
    esp = esp - 0x14;
    eax = esp;
    MEM32(eax) = ebx;
    esi = esi + 0x1C;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebp + 0xC) = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0052E654(); /* call 0x0052E654 */

loc_0052CED5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052CF03(); return; } /* jne: not equal / not zero */

loc_0052CED9: ;
    esi = MEM32(ebp + 8);

loc_0052CEDC: ;
    if (CMP_EQ(MEM32(esi + 4), 0)) goto loc_0052CEFF; /* je: equal / zero */

loc_0052CEE2: ;
    esi = MEM32(ebp + -4);
    esp = esp - 0x14;
    eax = esp;
    MEM32(eax) = ebx;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebp + 8) = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0052E654(); /* call 0x0052E654 */

loc_0052CEFB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052CF03(); return; } /* jne: not equal / not zero */

loc_0052CEFF: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052CF05(); return; /* tail jmp 0x0052CF05 */

}

/**
 * sub_0052CF0C
 * Original: 0x0052CF0C - 0x0052CFBB (175 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CF0C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052CF0C: ;
    eax = 0x47FF75;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052CF16: ;
    esp = esp - 0x20;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi;
    PUSH32(esp, 0); sub_00529E39(); /* call 0x00529E39 */

loc_0052CF2A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = edi + 0x14;
    PUSH32(esp, 0xF);
    MEM32(edi) = 0x648C64;
    ebx = 0x648C78;
    PUSH32(esp, esi);
    MEM32(ebp + -36) = esi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052CF49: ;
    eax = edi + 0x1C;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(ebp + -28) = eax;
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052CF59: ;
    eax = edi + 0x24;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(ebp + -32) = eax;
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052CF69: ;
    MEM8(ebp + -4) = 3;
    eax = MEM32(ebp + 0x18);
    MEM32(edi + 0x40) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) | 0xFFFFFFFFu;
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0;
    eax = eax >> 0x19;
    eax = eax & 0xF;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax >> 0x1D;
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax >> 0xC;
    eax = eax & 0xF;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    MEM32(ebp + -44) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052CFA6: ;
    edx = ebp + -44;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052CFAE: ;
    (void)0; /* cmp MEM32(edi + 0x2C), 0xD - flags set for next jcc */
    MEM32(ebp + -44) = ebx;
    if (CMP_NE(MEM32(edi + 0x2C), 0xD)) { sub_0052CFBB(); return; } /* jne: not equal / not zero */

loc_0052CFB7: ;
    PUSH32(esp, 8);
    g_seh_ebp = ebp; sub_0052CFC5(); return; /* tail jmp 0x0052CFC5 */

}

/**
 * sub_0052D4DE
 * Original: 0x0052D4DE - 0x0052D5C6 (232 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D4DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D4DE: ;
    eax = 0x47F3D5;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052D4E8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    MEM32(esi) = 0x648C64;
    PUSH32(esp, 3);
    POP32(esp, ebx);
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_0052AC2E(); /* call 0x0052AC2E */

loc_0052D503: ;
    edi = esi + 4;
    MEM32(ebp + -16) = ebx;

loc_0052D509: ;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_0052D515; /* je: equal / zero */

loc_0052D50F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0052D515: ;
    edi = edi + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    if ((MEM32(ebp + -16) != 0)) goto loc_0052D509; /* jne: not equal / not zero */

loc_0052D51D: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x34), edi)) goto loc_0052D533; /* je: equal / zero */

loc_0052D524: ;
    ecx = MEM32(esi + 0x34);
    eax = edi;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_0052D52E: ;
    edi++;
    if (CMP_LE(edi, ebx)) goto loc_0052D524; /* jle: less or equal (signed <=) */

loc_0052D533: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x38), edi)) goto loc_0052D549; /* je: equal / zero */

loc_0052D53A: ;
    ecx = MEM32(esi + 0x38);
    eax = edi;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_0052D544: ;
    edi++;
    if (CMP_LE(edi, ebx)) goto loc_0052D53A; /* jle: less or equal (signed <=) */

loc_0052D549: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x3C), edi)) goto loc_0052D55F; /* je: equal / zero */

loc_0052D550: ;
    ecx = MEM32(esi + 0x3C);
    eax = edi;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_0052D55A: ;
    edi++;
    if (CMP_LE(edi, ebx)) goto loc_0052D550; /* jle: less or equal (signed <=) */

loc_0052D55F: ;
    ecx = MEM32(0x535DB4);
    if (TEST_NZ(ecx, ecx)) goto loc_0052D5BD; /* jne: not equal / not zero */

loc_0052D569: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0052D589; /* je: equal / zero */

loc_0052D570: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0052D57B: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052D583: ;
    if (CMP_NE(MEM32(ebp + -16), 0)) goto loc_0052D570; /* jne: not equal / not zero */

loc_0052D589: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = 0x648C78;
    PUSH32(esp, esi);
    ecx = 0x535D8C;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x648C7C;
    PUSH32(esp, 0); sub_00531B30(); /* call 0x00531B30 */

loc_0052D5AC: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0052D5BB: ;
    ecx = eax;

loc_0052D5BD: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052D5BB; /* jne: not equal / not zero */

loc_0052D5C4: ;
    goto loc_0052D569;

}

/**
 * sub_0052D5C6
 * Original: 0x0052D5C6 - 0x0052D5F6 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D5C6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D5C6: ;
    eax = 0x47FA42;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052D5D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052D5E1: ;
    MEM32(ebp + -16) = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(eax, ebx)) { sub_0052D5F6(); return; } /* je: equal / zero */

loc_0052D5ED: ;
    PUSH32(esp, 0); sub_0052A809(); /* call 0x0052A809 */

loc_0052D5F2: ;
    edi = eax;
    g_seh_ebp = ebp; sub_0052D5F8(); return; /* tail jmp 0x0052D5F8 */

}

/**
 * sub_0052D6F6
 * Original: 0x0052D6F6 - 0x0052D7FD (263 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D6F6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052D6F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x44;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    edi = edi << 4;
    eax = eax & 0xF;
    edi = edi | eax;
    eax = MEM32(ebp + -20);
    edi = edi << 0x19;
    eax = eax & 0x1FFFF;
    edi = edi | eax;
    eax = esi + 4;
    edi = edi & 0xFE01FFFFu;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0xFFFFFFFDu;
    ebx = eax;
    MEM32(ebp + -4) = 3;

loc_0052D736: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0052D76C; /* je: equal / zero */

loc_0052D73F: ;
    if (CMP_NE(MEM32(eax + 4), 3)) goto loc_0052D76C; /* jne: not equal / not zero */

loc_0052D745: ;
    ecx = MEM32(eax + 8);
    ecx = ecx << 0x11;
    ecx = ecx ^ edi;
    ecx = ecx & 0x1FE0000;
    edi = edi ^ ecx;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_0052D75A: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    ecx = ecx << 1;
    ecx = ecx ^ MEM32(ebp + -28);
    ecx = ecx & 2;
    MEM32(ebp + -28) = MEM32(ebp + -28) ^ ecx;

loc_0052D76C: ;
    ebx = ebx + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_0052D736; /* jne: not equal / not zero */

loc_0052D774: ;
    eax = esi + 4;
    PUSH32(esp, 3);
    edi = edi & 0xFFFE1FFFu;
    ecx = eax;
    POP32(esp, edx);

loc_0052D782: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0052D7A0; /* je: equal / zero */

loc_0052D78B: ;
    if (CMP_NE(MEM32(eax + 4), 2)) goto loc_0052D7A0; /* jne: not equal / not zero */

loc_0052D791: ;
    eax = MEM32(eax + 8);
    eax = eax << 0xD;
    eax = eax ^ edi;
    eax = eax & 0x1E000;
    edi = edi ^ eax;

loc_0052D7A0: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0052D782; /* jne: not equal / not zero */

loc_0052D7A6: ;
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 3;

loc_0052D7B3: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    eax = ebp + -68;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052D7C0: ;
    esp = esp - 0x14;
    ebx = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, 0); sub_0052A245(); /* call 0x0052A245 */

loc_0052D7CD: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ebx = ebp + -48;
    PUSH32(esp, 0); sub_0052A70F(); /* call 0x0052A70F */

loc_0052D7DA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    eax = 0x648C74;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -68) = eax;
    if ((MEM32(ebp + -8) != 0)) goto loc_0052D7B3; /* jne: not equal / not zero */

loc_0052D7EE: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    if (TEST_Z(edx, edx)) { sub_0052D7FD(); return; } /* je: equal / zero */

loc_0052D7F8: ;
    eax = MEM32(edx + 8);
    g_seh_ebp = ebp; sub_0052D7FF(); return; /* tail jmp 0x0052D7FF */

}

/**
 * sub_0052DA66
 * Original: 0x0052DA66 - 0x0052DD75 (783 bytes, 272 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DA66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DA66: ;
    eax = 0x47FDEC;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052DA70: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    esi = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(esi + 0x2C), edi)) { sub_0052DD75(); return; } /* je: equal / zero */

loc_0052DA87: ;
    if (CMP_EQ(MEM32(esi + 0x30), edi)) { sub_0052DD75(); return; } /* je: equal / zero */

loc_0052DA90: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DA9C: ;
    MEM32(ebp + -28) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(eax, edi)) goto loc_0052DAB2; /* je: equal / zero */

loc_0052DAA6: ;
    PUSH32(esp, 0); sub_0052A809(); /* call 0x0052A809 */

loc_0052DAAB: ;
    ebx = eax;
    MEM32(ebp + -16) = ebx;
    goto loc_0052DAB7;

loc_0052DAB2: ;
    MEM32(ebp + -16) = edi;
    ebx = edi;

loc_0052DAB7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = MEM32(esi + 0x40);
    MEM32(ebx + 0x44) = MEM32(ebx + 0x44) | 0xFFFFFFFFu;
    MEM32(ebx + 0x40) = eax;
    MEM32(ebx + 0x48) = edi;
    MEM32(ebx + 0x2C) = edi;
    eax = MEM32(esi + 0x30);
    MEM32(ebx + 0x30) = eax;
    (void)0; /* cmp MEM8(esi + 0x10), 0 - flags set for next jcc */
    MEM32(esi + 0x30) = edi;
    if (CMP_EQ(MEM8(esi + 0x10), 0)) goto loc_0052DADF; /* je: equal / zero */

loc_0052DADA: ;
    edx = esi + 0x14;
    goto loc_0052DAF3;

loc_0052DADF: ;
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DAF0: ;
    edx = ebp + -36;

loc_0052DAF3: ;
    esi = ebx + 0x14;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052DAFB: ;
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DB0C: ;
    edi = ebx + 0x20;
    esi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + 8);
    edx = edi + 0x24;
    esi = ebx + 0x24;
    MEM32(ebp + -28) = edx;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052DB24: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    esi = 0x24870000;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    MEM8(ebx + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DB37: ;
    MEM32(ebp + -24) = eax;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(eax, edi)) goto loc_0052DB9F; /* je: equal / zero */

loc_0052DB47: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DB4F: ;
    MEM32(ebp + -20) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(ebp + -4) = 2;
    if (CMP_EQ(eax, edi)) goto loc_0052DB7D; /* je: equal / zero */

loc_0052DB5A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -32) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DB6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0); sub_0052B04C(); /* call 0x0052B04C */

loc_0052DB7B: ;
    goto loc_0052DB7F;

loc_0052DB7D: ;
    eax = 0; /* xor self */

loc_0052DB7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -16);
    MEM8(ebp + -4) = 1;
    PUSH32(esp, MEM32(ebp + -24));
    ebx = eax;
    PUSH32(esp, 0); sub_0052A685(); /* call 0x0052A685 */

loc_0052DB93: ;
    ebx = MEM32(ebp + -16);
    edi = 0; /* xor self */
    esi = 0x24870000;
    goto loc_0052DBA1;

loc_0052DB9F: ;
    eax = 0; /* xor self */

loc_0052DBA1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DBB0: ;
    MEM32(ebp + -20) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = 3;
    if (CMP_EQ(eax, edi)) goto loc_0052DC17; /* je: equal / zero */

loc_0052DBBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DBC6: ;
    MEM32(ebp + -24) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(ebp + -4) = 4;
    if (CMP_EQ(eax, edi)) goto loc_0052DBF4; /* je: equal / zero */

loc_0052DBD1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -32) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DBE6: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_0052B04C(); /* call 0x0052B04C */

loc_0052DBF2: ;
    goto loc_0052DBF6;

loc_0052DBF4: ;
    eax = 0; /* xor self */

loc_0052DBF6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -16);
    MEM8(ebp + -4) = 3;
    PUSH32(esp, MEM32(ebp + -20));
    ebx = eax;
    PUSH32(esp, 0); sub_0052A685(); /* call 0x0052A685 */

loc_0052DC0B: ;
    ebx = MEM32(ebp + -16);
    edi = 0; /* xor self */
    esi = 0x24870000;
    goto loc_0052DC19;

loc_0052DC17: ;
    eax = 0; /* xor self */

loc_0052DC19: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DC28: ;
    MEM32(ebp + -20) = eax;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = 5;
    if (CMP_EQ(eax, edi)) goto loc_0052DC5C; /* je: equal / zero */

loc_0052DC36: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x14));
    eax = MEM32(eax + 0x10);
    MEM8(ebp + -24) = LO8(ecx);
    PUSH32(esp, MEM32(ebp + -24));
    ebx = eax;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -20));
    edi = MEM32(ebp + -16);
    PUSH32(esp, 0); sub_0052A685(); /* call 0x0052A685 */

loc_0052DC58: ;
    ebx = edi;
    goto loc_0052DC5E;

loc_0052DC5C: ;
    eax = 0; /* xor self */

loc_0052DC5E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    esp = esp - 0x14;
    MEM32(ebx + 0xC) = eax;
    ecx = MEM32(ecx + 0xC);
    eax = esp;
    MEM32(ebp + -32) = esp;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052DC78: ;
    edi = MEM32(ebp + -16);
    eax = MEM32(edi + 0xC);
    ebx = ebp + -56;
    PUSH32(esp, 0); sub_0052A70F(); /* call 0x0052A70F */

loc_0052DC86: ;
    ebx = MEM32(ebp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_0052AB91(); /* call 0x0052AB91 */

loc_0052DC90: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052DCE4; /* jne: not equal / not zero */

loc_0052DC94: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052DCA0: ;
    MEM32(ebp + 8) = eax;
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = 6;
    if (CMP_EQ(eax, esi)) goto loc_0052DCD3; /* je: equal / zero */

loc_0052DCB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -32) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DCC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0052B04C(); /* call 0x0052B04C */

loc_0052DCD1: ;
    goto loc_0052DCD5;

loc_0052DCD3: ;
    eax = 0; /* xor self */

loc_0052DCD5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052DCE2: ;
    goto loc_0052DCE6;

loc_0052DCE4: ;
    esi = 0; /* xor self */

loc_0052DCE6: ;
    MEM32(edi + 0x3C) = esi;
    MEM32(edi + 0x38) = esi;
    MEM32(edi + 0x34) = esi;
    if (CMP_EQ(MEM8(ebx + 0x10), 0)) goto loc_0052DD30; /* je: equal / zero */

loc_0052DCF5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0x648C78;
    ecx = MEM32(ebx + 0x18);
    MEM32(ebp + 8) = esp;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(ebx + 0x34));
    PUSH32(esp, 0); sub_0052A924(); /* call 0x0052A924 */

loc_0052DD10: ;
    PUSH32(esp, esi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    MEM32(ebx + 0x34) = esi;
    MEM32(ebp + -36) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DD24: ;
    edi = ebx + 0x18;
    esi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + -16);
    esi = 0; /* xor self */

loc_0052DD30: ;
    if (CMP_EQ(MEM32(ebx + 0x3C), esi)) goto loc_0052DD71; /* je: equal / zero */

loc_0052DD35: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0x648C78;
    ecx = MEM32(ebx + 0x28);
    MEM32(ebp + 8) = esp;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(ebx + 0x3C));
    PUSH32(esp, 0); sub_0052AAC8(); /* call 0x0052AAC8 */

loc_0052DD50: ;
    PUSH32(esp, esi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    MEM32(ebx + 0x3C) = esi;
    MEM32(ebp + -36) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DD64: ;
    edi = MEM32(ebp + -28);
    edi = edi + 4;
    esi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + -16);

loc_0052DD71: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0052DD77(); return; /* tail jmp 0x0052DD77 */

}

/**
 * sub_0052DD88
 * Original: 0x0052DD88 - 0x0052DDC6 (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DD88(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052DD88: ;
    edx = 0; /* xor self */
    ecx = ecx - edx;
    if ((ecx == 0)) { sub_0052DDC6(); return; } /* je: equal / zero */

loc_0052DD8E: ;
    ecx--;
    if ((ecx == 0)) goto loc_0052DDAC; /* je: equal / zero */

loc_0052DD91: ;
    ecx--;
    if ((ecx == 0)) goto loc_0052DD97; /* je: equal / zero */

loc_0052DD94: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0052DD97: ;
    if (CMP_NE(MEM32(eax + 0x30), edx)) goto loc_0052DDC2; /* jne: not equal / not zero */

loc_0052DD9C: ;
    eax = MEM32(eax + 0x2C);
    if (CMP_EQ(eax, 3)) goto loc_0052DDC2; /* je: equal / zero */

loc_0052DDA4: ;
    if (CMP_EQ(eax, 4)) goto loc_0052DDC2; /* je: equal / zero */

loc_0052DDA9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0052DDAC: ;
    eax = MEM32(eax + 0x2C);
    if (CMP_EQ(eax, edx)) goto loc_0052DDA9; /* je: equal / zero */

loc_0052DDB3: ;
    if (CMP_EQ(eax, 3)) goto loc_0052DDA9; /* je: equal / zero */

loc_0052DDB8: ;
    if (CMP_EQ(eax, 0xD)) goto loc_0052DDA9; /* je: equal / zero */

loc_0052DDBD: ;
    if (CMP_EQ(eax, 1)) goto loc_0052DDA9; /* je: equal / zero */

loc_0052DDC2: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DDD1
 * Original: 0x0052DDD1 - 0x0052DF12 (321 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DDD1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052DDD1: ;
    eax = MEM32(edi + 0x2C);
    if (CMP_G(eax, 5)) goto loc_0052DE52; /* jg: greater (signed >) */

loc_0052DDD9: ;
    if (CMP_EQ(eax, 5)) goto loc_0052DE42; /* je: equal / zero */

loc_0052DDDB: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0052DDF3; /* je: equal / zero */

loc_0052DDE0: ;
    eax--;
    if ((eax == 0)) goto loc_0052DE3A; /* je: equal / zero */

loc_0052DDE3: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0052DE22; /* je: equal / zero */

loc_0052DDE7: ;
    eax--;
    if ((eax == 0)) goto loc_0052DE2B; /* je: equal / zero */

loc_0052DDEA: ;
    if (TEST_Z(esi, esi)) goto loc_0052DE2B; /* je: equal / zero */

loc_0052DDEE: ;
    if (CMP_EQ(esi, 1)) goto loc_0052DE2B; /* je: equal / zero */

loc_0052DDF3: ;
    if (CMP_NE(esi, 2)) goto loc_0052DE82; /* jne: not equal / not zero */

loc_0052DDFC: ;
    eax = MEM32(edi + 0x30);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0052DE82; /* je: equal / zero */

loc_0052DE04: ;
    eax--;
    if ((eax == 0)) { sub_0052DF12(); return; } /* je: equal / zero */

loc_0052DE0B: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_0052DEE2; /* je: equal / zero */

loc_0052DE14: ;
    eax--;
    if ((eax == 0)) goto loc_0052DEB8; /* je: equal / zero */

loc_0052DE1B: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0052DE82; /* jne: not equal / not zero */

loc_0052DE1F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0052DE22: ;
    if (TEST_Z(esi, esi)) goto loc_0052DE2B; /* je: equal / zero */

loc_0052DE26: ;
    if (CMP_NE(esi, 2)) goto loc_0052DE82; /* jne: not equal / not zero */

loc_0052DE2B: ;
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0); sub_0052A8C9(); /* call 0x0052A8C9 */

loc_0052DE34: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052DDF3; /* je: equal / zero */

loc_0052DE38: ;
    goto loc_0052DE1F;

loc_0052DE3A: ;
    if (TEST_NZ(esi, esi)) goto loc_0052DDF3; /* jne: not equal / not zero */

loc_0052DE3E: ;
    eax = ebx;
    goto loc_0052DE77;

loc_0052DE42: ;
    if (TEST_Z(esi, esi)) goto loc_0052DE4B; /* je: equal / zero */

loc_0052DE46: ;
    if (CMP_NE(esi, 1)) goto loc_0052DDF3; /* jne: not equal / not zero */

loc_0052DE4B: ;
    if (CMP_GE(ebx, 3)) goto loc_0052DDF3; /* jge: greater or equal (signed >=) */

loc_0052DE50: ;
    goto loc_0052DE1F;

loc_0052DE52: ;
    if (CMP_L(eax, 6)) goto loc_0052DDEA; /* jl: less (signed <) */

loc_0052DE57: ;
    if (CMP_LE(eax, 7)) goto loc_0052DEA2; /* jle: less or equal (signed <=) */

loc_0052DE5C: ;
    if (CMP_EQ(eax, 8)) goto loc_0052DE6C; /* je: equal / zero */

loc_0052DE61: ;
    if (CMP_NE(eax, 0xD)) goto loc_0052DDEA; /* jne: not equal / not zero */

loc_0052DE66: ;
    if (TEST_NZ(esi, esi)) goto loc_0052DDF3; /* jne: not equal / not zero */

loc_0052DE6A: ;
    goto loc_0052DE1B;

loc_0052DE6C: ;
    if (TEST_NZ(esi, esi)) goto loc_0052DE89; /* jne: not equal / not zero */

loc_0052DE70: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_NE(ebx, eax)) goto loc_0052DE85; /* jne: not equal / not zero */

loc_0052DE77: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0052A8C9(); /* call 0x0052A8C9 */

loc_0052DE7E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052DE1F; /* jne: not equal / not zero */

loc_0052DE82: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0052DE85: ;
    PUSH32(esp, 2);
    goto loc_0052DE9B;

loc_0052DE89: ;
    if (CMP_NE(esi, 1)) goto loc_0052DDF3; /* jne: not equal / not zero */

loc_0052DE92: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_EQ(ebx, eax)) goto loc_0052DE77; /* je: equal / zero */

loc_0052DE99: ;
    PUSH32(esp, 3);

loc_0052DE9B: ;
    POP32(esp, eax);
    if (CMP_NE(ebx, eax)) goto loc_0052DE82; /* jne: not equal / not zero */

loc_0052DEA0: ;
    goto loc_0052DE77;

loc_0052DEA2: ;
    if (TEST_Z(esi, esi)) goto loc_0052DE1F; /* je: equal / zero */

loc_0052DEAA: ;
    if (CMP_NE(esi, 1)) goto loc_0052DDF3; /* jne: not equal / not zero */

loc_0052DEB3: ;
    goto loc_0052DE1F;

loc_0052DEB8: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0052A8E3(); /* call 0x0052A8E3 */

loc_0052DEC2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052DECF; /* je: equal / zero */

loc_0052DEC6: ;
    if (CMP_NE(ebx, 2)) goto loc_0052DE1F; /* jne: not equal / not zero */

loc_0052DECF: ;
    eax = 0; /* xor self */
    eax++;

loc_0052DED2: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0052A8E3(); /* call 0x0052A8E3 */

loc_0052DED9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052DE82; /* je: equal / zero */

loc_0052DEDD: ;
    goto loc_0052DE1B;

loc_0052DEE2: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_0052A8E3(); /* call 0x0052A8E3 */

loc_0052DEEB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052DEF7; /* je: equal / zero */

loc_0052DEEF: ;
    if (TEST_Z(ebx, ebx)) goto loc_0052DE1F; /* je: equal / zero */

loc_0052DEF7: ;
    eax = 0; /* xor self */
    eax++;
    ecx = edi;
    PUSH32(esp, 0); sub_0052A8E3(); /* call 0x0052A8E3 */

loc_0052DF01: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052DF0D; /* je: equal / zero */

loc_0052DF05: ;
    if (TEST_Z(ebx, ebx)) goto loc_0052DE1F; /* je: equal / zero */

loc_0052DF0D: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0052DED2;

}

/**
 * sub_0052DF20
 * Original: 0x0052DF20 - 0x0052DF80 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DF20(void)
{
    uint32_t ebp;

loc_0052DF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    esi = eax;
    edi = ecx;
    POP32(esp, ebx);
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052DF39: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    MEM8(ebp + -12) = LO8(eax);
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052DF44: ;
    ebx = 0; /* xor self */
    ebx++;
    MEM8(ebp + -8) = LO8(eax);
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052DF4F: ;
    ebx = 0; /* xor self */
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052DF59: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -4));
    MEM8(ecx + 5) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -8));
    MEM8(ecx + 6) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -12));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 7) = LO8(eax);
    MEM32(ecx) = 0x648C78;
    eax = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DF80
 * Original: 0x0052DF80 - 0x0052DFCE (78 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052DF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    esi = edi + 4;

loc_0052DF8F: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052DFD2(); /* call 0x0052DFD2 */

loc_0052DF98: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052DFCE(); return; } /* jne: not equal / not zero */

loc_0052DF9C: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052E124(); /* call 0x0052E124 */

loc_0052DFA5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052DFCE(); return; } /* jne: not equal / not zero */

loc_0052DFA9: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0052DFBC; /* je: equal / zero */

loc_0052DFB2: ;
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_0052DFB7: ;
    if (CMP_EQ(eax, MEM32(ebx + 0x38))) { sub_0052DFCE(); return; } /* je: equal / zero */

loc_0052DFBC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    esi = esi + 4;
    if (CMP_LE(MEM32(ebp + -4), 2)) goto loc_0052DF8F; /* jle: less or equal (signed <=) */

loc_0052DFC8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052DFD2
 * Original: 0x0052DFD2 - 0x0052E120 (334 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DFD2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052DFD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052DFEC: ;
    if (CMP_NE(MEM8(ebx + 0x10), 0)) goto loc_0052E089; /* jne: not equal / not zero */

loc_0052DFF6: ;
    eax = MEM32(ebx + 0x34);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = esp;
    esi = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0052DF20(); /* call 0x0052DF20 */

loc_0052E018: ;
    eax = MEM32(ebp + 8);
    eax = eax + edi * 4 + 4;
    PUSH32(esp, MEM32(eax));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_0052CDD4(); /* call 0x0052CDD4 */

loc_0052E029: ;
    eax = ebp + -24;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A890(); /* call 0x0052A890 */

loc_0052E033: ;
    edx = eax;
    eax = ebp + -32;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052E03D: ;
    esi = eax + 4;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_0052E07D;

loc_0052E046: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_0052E089; /* je: equal / zero */

loc_0052E04D: ;
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx);
    if (CMP_EQ(MEM32(ecx + 0x10), eax)) { sub_0052E120(); return; } /* je: equal / zero */

loc_0052E05B: ;
    eax = MEM32(eax + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052E07D; /* je: equal / zero */

loc_0052E065: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_0052E06A: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0052E074; /* je: equal / zero */

loc_0052E06F: ;
    MEM8(ebp + ecx + -12) = 0;

loc_0052E074: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052E06A; /* jle: less or equal (signed <=) */

loc_0052E07D: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E085: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E046; /* jne: not equal / not zero */

loc_0052E089: ;
    eax = MEM32(ebx + 0x38);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = esp;
    esi = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0052DF20(); /* call 0x0052DF20 */

loc_0052E0AB: ;
    eax = MEM32(ebp + 8);
    eax = eax + edi * 4 + 4;
    PUSH32(esp, MEM32(eax));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_0052CDD4(); /* call 0x0052CDD4 */

loc_0052E0BC: ;
    eax = ebp + -32;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A8A3(); /* call 0x0052A8A3 */

loc_0052E0C6: ;
    edx = eax;
    eax = ebp + -24;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052E0D0: ;
    esi = eax + 4;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_0052E10C;

loc_0052E0D9: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_0052E118; /* je: equal / zero */

loc_0052E0E0: ;
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx);
    if (CMP_EQ(MEM32(ecx + 0x10), eax)) { sub_0052E120(); return; } /* je: equal / zero */

loc_0052E0EA: ;
    eax = MEM32(eax + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052E10C; /* je: equal / zero */

loc_0052E0F4: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_0052E0F9: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0052E103; /* je: equal / zero */

loc_0052E0FE: ;
    MEM8(ebp + ecx + -12) = 0;

loc_0052E103: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052E0F9; /* jle: less or equal (signed <=) */

loc_0052E10C: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E114: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E0D9; /* jne: not equal / not zero */

loc_0052E118: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052E124
 * Original: 0x0052E124 - 0x0052E272 (334 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E124(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E124: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052E13E: ;
    if (CMP_EQ(MEM8(ebx + 0x10), 0)) goto loc_0052E1DB; /* je: equal / zero */

loc_0052E148: ;
    eax = MEM32(ebx + 0x34);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = esp;
    esi = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0052DF20(); /* call 0x0052DF20 */

loc_0052E16A: ;
    eax = MEM32(ebp + 8);
    eax = eax + edi * 4 + 4;
    PUSH32(esp, MEM32(eax));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_0052CDD4(); /* call 0x0052CDD4 */

loc_0052E17B: ;
    eax = ebp + -24;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A890(); /* call 0x0052A890 */

loc_0052E185: ;
    edx = eax;
    eax = ebp + -32;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052E18F: ;
    esi = eax + 4;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_0052E1CF;

loc_0052E198: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_0052E1DB; /* je: equal / zero */

loc_0052E19F: ;
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx);
    if (CMP_EQ(MEM32(ecx + 0x10), eax)) { sub_0052E272(); return; } /* je: equal / zero */

loc_0052E1AD: ;
    eax = MEM32(eax + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052E1CF; /* je: equal / zero */

loc_0052E1B7: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_0052E1BC: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0052E1C6; /* je: equal / zero */

loc_0052E1C1: ;
    MEM8(ebp + ecx + -12) = 0;

loc_0052E1C6: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052E1BC; /* jle: less or equal (signed <=) */

loc_0052E1CF: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E1D7: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E198; /* jne: not equal / not zero */

loc_0052E1DB: ;
    eax = MEM32(ebx + 0x3C);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = esp;
    esi = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = esp;
    MEM32(ebp + -8) = esp;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0052DF20(); /* call 0x0052DF20 */

loc_0052E1FD: ;
    eax = MEM32(ebp + 8);
    eax = eax + edi * 4 + 4;
    PUSH32(esp, MEM32(eax));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_0052CDD4(); /* call 0x0052CDD4 */

loc_0052E20E: ;
    eax = ebp + -32;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052A8B6(); /* call 0x0052A8B6 */

loc_0052E218: ;
    edx = eax;
    eax = ebp + -24;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052E222: ;
    esi = eax + 4;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_0052E25E;

loc_0052E22B: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_0052E26A; /* je: equal / zero */

loc_0052E232: ;
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx);
    if (CMP_EQ(MEM32(ecx + 0x10), eax)) { sub_0052E272(); return; } /* je: equal / zero */

loc_0052E23C: ;
    eax = MEM32(eax + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0052E25E; /* je: equal / zero */

loc_0052E246: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_0052E24B: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0052E255; /* je: equal / zero */

loc_0052E250: ;
    MEM8(ebp + ecx + -12) = 0;

loc_0052E255: ;
    ecx++;
    eax = eax + 4;
    if (CMP_LE(ecx, 3)) goto loc_0052E24B; /* jle: less or equal (signed <=) */

loc_0052E25E: ;
    eax = ebp + -16;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E266: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E22B; /* jne: not equal / not zero */

loc_0052E26A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052E276
 * Original: 0x0052E276 - 0x0052E2C0 (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E276(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0052E276: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    PUSH32(esp, 0); sub_0052DF80(); /* call 0x0052DF80 */

loc_0052E285: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052E2BB; /* je: equal / zero */

loc_0052E289: ;
    (void)0; /* cmp MEM32(esi + 0x2C), 0xD - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(MEM32(esi + 0x2C), 0xD)) goto loc_0052E2AC; /* jne: not equal / not zero */

loc_0052E290: ;
    ebx = 0; /* xor self */
    esi = edi + 4;

loc_0052E295: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0); sub_0052B25C(); /* call 0x0052B25C */

loc_0052E29F: ;
    if (TEST_NZ(eax, eax)) { sub_0052E2C0(); return; } /* jne: not equal / not zero */

loc_0052E2A3: ;
    ebx++;
    esi = esi + 4;
    if (CMP_LE(ebx, 2)) goto loc_0052E295; /* jle: less or equal (signed <=) */

loc_0052E2AC: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_0052E2C4(); /* call 0x0052E2C4 */

loc_0052E2B5: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    POP32(esp, ebx);

loc_0052E2BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052E2C4
 * Original: 0x0052E2C4 - 0x0052E332 (110 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E2C4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E2C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    MEM8(ebp + -1) = 1;
    MEM8(ebp + -2) = 1;
    esi = 0; /* xor self */

loc_0052E2D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052DFD2(); /* call 0x0052DFD2 */

loc_0052E2DD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052E301; /* je: equal / zero */

loc_0052E2E1: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0052AB73(); /* call 0x0052AB73 */

loc_0052E2E8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052E2F2; /* jne: not equal / not zero */

loc_0052E2EC: ;
    if (CMP_EQ(MEM32(ebx + 0x30), 0)) goto loc_0052E301; /* je: equal / zero */

loc_0052E2F2: ;
    if (CMP_NE(esi, 2)) goto loc_0052E2FD; /* jne: not equal / not zero */

loc_0052E2F7: ;
    if (CMP_EQ(MEM32(edi + 0x30), 0)) goto loc_0052E301; /* je: equal / zero */

loc_0052E2FD: ;
    MEM8(ebp + -1) = 0;

loc_0052E301: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0052E124(); /* call 0x0052E124 */

loc_0052E308: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052E31B; /* je: equal / zero */

loc_0052E30C: ;
    if (CMP_NE(esi, 2)) goto loc_0052E317; /* jne: not equal / not zero */

loc_0052E311: ;
    if (CMP_EQ(MEM32(edi + 0x30), 0)) goto loc_0052E31B; /* je: equal / zero */

loc_0052E317: ;
    MEM8(ebp + -2) = 0;

loc_0052E31B: ;
    esi++;
    if (CMP_LE(esi, 2)) goto loc_0052E2D6; /* jle: less or equal (signed <=) */

loc_0052E321: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + -1), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(ebp + -1), LO8(eax))) goto loc_0052E330; /* je: equal / zero */

loc_0052E32A: ;
    if (CMP_EQ(MEM8(ebp + -2), LO8(eax))) goto loc_0052E330; /* je: equal / zero */

loc_0052E32F: ;
    eax++;

loc_0052E330: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052E332
 * Original: 0x0052E332 - 0x0052E384 (82 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E332(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E332: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 4;
    esi = 0; /* xor self */
    MEM32(ebp + -8) = eax;

loc_0052E344: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0052E373; /* je: equal / zero */

loc_0052E350: ;
    ebx = 0; /* xor self */
    eax = eax + 0x20;
    MEM32(ebp + -4) = eax;

loc_0052E358: ;
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052E35D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052E369; /* je: equal / zero */

loc_0052E361: ;
    eax = MEM32(ebp + -4);
    if (CMP_EQ(MEM32(eax), 0xFFFFFFFFu)) { sub_0052E384(); return; } /* je: equal / zero */

loc_0052E369: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    ebx++;
    if (CMP_LE(ebx, 3)) goto loc_0052E358; /* jle: less or equal (signed <=) */

loc_0052E373: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    esi++;
    if (CMP_LE(esi, 2)) goto loc_0052E344; /* jle: less or equal (signed <=) */

loc_0052E37D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052E388
 * Original: 0x0052E388 - 0x0052E4DF (343 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E388(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052E388: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp edx, MEM32(eax + 0x38) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(edx, MEM32(eax + 0x38))) goto loc_0052E49F; /* jne: not equal / not zero */

loc_0052E397: ;
    esi = MEM32(eax + 0x2C);
    PUSH32(esp, 4);
    POP32(esp, edx);
    if (CMP_G(esi, edx)) goto loc_0052E44D; /* jg: greater (signed >) */

loc_0052E3A5: ;
    if (CMP_EQ(esi, edx)) goto loc_0052E40B; /* je: equal / zero */

loc_0052E3A7: ;
    esi = esi - 0;
    if ((esi == 0)) { sub_0052E4DF(); return; } /* je: equal / zero */

loc_0052E3B0: ;
    esi--;
    if ((esi == 0)) goto loc_0052E3EC; /* je: equal / zero */

loc_0052E3B3: ;
    esi--;
    esi--;
    if ((esi != 0)) goto loc_0052E465; /* jne: not equal / not zero */

loc_0052E3BB: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E3C3; /* jne: not equal / not zero */

loc_0052E3BF: ;
    edi = edx;
    goto loc_0052E3CA;

loc_0052E3C3: ;
    esi = MEM32(eax + 4);
    edi = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E3CA: ;
    if (CMP_EQ(ebx, edx)) goto loc_0052E444; /* je: equal / zero */

loc_0052E3CE: ;
    esi = MEM32(eax + 4);

loc_0052E3D1: ;
    esi = MEM32(esi + ebx * 4 + 0x1C);

loc_0052E3D5: ;
    if (CMP_NE(edi, esi)) goto loc_0052E4B7; /* jne: not equal / not zero */

loc_0052E3DD: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E4C6; /* jne: not equal / not zero */

loc_0052E3E5: ;
    ecx = edx;
    goto loc_0052E4CD;

loc_0052E3EC: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E3F4; /* jne: not equal / not zero */

loc_0052E3F0: ;
    ecx = edx;
    goto loc_0052E3FB;

loc_0052E3F4: ;
    esi = MEM32(eax + 4);
    ecx = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E3FB: ;
    if (CMP_EQ(ebx, edx)) goto loc_0052E4D8; /* je: equal / zero */

loc_0052E403: ;
    eax = MEM32(eax + 4);
    goto loc_0052E4D4;

loc_0052E40B: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E413; /* jne: not equal / not zero */

loc_0052E40F: ;
    edi = edx;
    goto loc_0052E41A;

loc_0052E413: ;
    esi = MEM32(eax + 4);
    edi = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E41A: ;
    if (CMP_NE(ebx, edx)) goto loc_0052E422; /* jne: not equal / not zero */

loc_0052E41E: ;
    esi = edx;
    goto loc_0052E429;

loc_0052E422: ;
    esi = MEM32(eax + 4);
    esi = MEM32(esi + ebx * 4 + 0x1C);

loc_0052E429: ;
    if (CMP_NE(edi, esi)) goto loc_0052E4B7; /* jne: not equal / not zero */

loc_0052E431: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E439; /* jne: not equal / not zero */

loc_0052E435: ;
    edi = edx;
    goto loc_0052E440;

loc_0052E439: ;
    esi = MEM32(eax + 8);
    edi = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E440: ;
    if (CMP_NE(ebx, edx)) goto loc_0052E448; /* jne: not equal / not zero */

loc_0052E444: ;
    esi = edx;
    goto loc_0052E3D5;

loc_0052E448: ;
    esi = MEM32(eax + 8);
    goto loc_0052E3D1;

loc_0052E44D: ;
    if (CMP_L(esi, 5)) goto loc_0052E465; /* jl: less (signed <) */

loc_0052E452: ;
    if (CMP_LE(esi, 7)) { sub_0052E4DF(); return; } /* jle: less or equal (signed <=) */

loc_0052E45B: ;
    if (CMP_EQ(esi, 8)) goto loc_0052E4B7; /* je: equal / zero */

loc_0052E460: ;
    if (CMP_EQ(esi, 0xD)) goto loc_0052E4B7; /* je: equal / zero */

loc_0052E465: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E46D; /* jne: not equal / not zero */

loc_0052E469: ;
    edi = edx;
    goto loc_0052E474;

loc_0052E46D: ;
    esi = MEM32(eax + 4);
    edi = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E474: ;
    if (CMP_NE(ebx, edx)) goto loc_0052E47C; /* jne: not equal / not zero */

loc_0052E478: ;
    esi = edx;
    goto loc_0052E483;

loc_0052E47C: ;
    esi = MEM32(eax + 4);
    esi = MEM32(esi + ebx * 4 + 0x1C);

loc_0052E483: ;
    if (CMP_NE(edi, esi)) goto loc_0052E4B7; /* jne: not equal / not zero */

loc_0052E487: ;
    if (CMP_NE(ecx, edx)) goto loc_0052E48F; /* jne: not equal / not zero */

loc_0052E48B: ;
    ecx = edx;
    goto loc_0052E496;

loc_0052E48F: ;
    esi = MEM32(eax + 8);
    ecx = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E496: ;
    if (CMP_EQ(ebx, edx)) goto loc_0052E4D8; /* je: equal / zero */

loc_0052E49A: ;
    eax = MEM32(eax + 8);
    goto loc_0052E4D4;

loc_0052E49F: ;
    if (CMP_NE(edx, MEM32(eax + 0x3C))) goto loc_0052E4B7; /* jne: not equal / not zero */

loc_0052E4A4: ;
    edx = MEM32(eax + 0x30);
    if (TEST_Z(edx, edx)) { sub_0052E4DF(); return; } /* je: equal / zero */

loc_0052E4AB: ;
    if (CMP_EQ(edx, 1)) goto loc_0052E4BE; /* je: equal / zero */

loc_0052E4B0: ;
    if (CMP_LE(edx, 1)) goto loc_0052E4B7; /* jle: less or equal (signed <=) */

loc_0052E4B2: ;
    if (CMP_LE(edx, 4)) { sub_0052E4DF(); return; } /* jle: less or equal (signed <=) */

loc_0052E4B7: ;
    SET_LO8(eax, 0); /* xor self */

loc_0052E4B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052E4BE: ;
    PUSH32(esp, 4);
    POP32(esp, edx);
    goto loc_0052E3DD;

loc_0052E4C6: ;
    esi = MEM32(eax + 0xC);
    ecx = MEM32(esi + ecx * 4 + 0x1C);

loc_0052E4CD: ;
    if (CMP_EQ(ebx, edx)) goto loc_0052E4D8; /* je: equal / zero */

loc_0052E4D1: ;
    eax = MEM32(eax + 0xC);

loc_0052E4D4: ;
    edx = MEM32(eax + ebx * 4 + 0x1C);

loc_0052E4D8: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, edx)) ? 1 : 0); /* sete */
    goto loc_0052E4B9;

}

/**
 * sub_0052E4E3
 * Original: 0x0052E4E3 - 0x0052E55B (120 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E4E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E4E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(ebx + 0x2C), 0)) { sub_0052E55B(); return; } /* jne: not equal / not zero */

loc_0052E4EE: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_NE(MEM32(ebx + 0x30), eax)) { sub_0052E55B(); return; } /* jne: not equal / not zero */

loc_0052E4F6: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x24;
    esi = ebx + 0x1C;
    edx = edi;
    MEM32(ebx + 0x2C) = eax;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052E50C: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052E51E: ;
    edi = edi + 4;
    esi = ebp + -4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(ebx + 0x3C);
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) & 0;
    (void)0; /* cmp MEM8(ebx + 0x10), 0 - flags set for next jcc */
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x38) = eax;
    SET_LO8(eax, (CMP_EQ(MEM8(ebx + 0x10), 0)) ? 1 : 0); /* sete */
    MEM8(ebx + 0x10) = LO8(eax);
    eax = MEM32(ebx + 4);
    MEM32(ebx + 0xC) = eax;
    eax = ecx;
    MEM32(ebx + 4) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    eax = MEM32(ebx + 0xC);
    POP32(esp, edi);
    MEM32(eax + 0xC) = 2;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052E55F
 * Original: 0x0052E55F - 0x0052E64E (239 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E55F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E55F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebx + 0x30), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebx + 0x30), 0)) { sub_0052E64E(); return; } /* jne: not equal / not zero */

loc_0052E570: ;
    if (CMP_NE(MEM32(ebx + 0x2C), 1)) { sub_0052E64E(); return; } /* jne: not equal / not zero */

loc_0052E57A: ;
    if (CMP_EQ(MEM8(0x5351B0), 0)) goto loc_0052E5E9; /* je: equal / zero */

loc_0052E583: ;
    ecx = MEM32(ebx + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_0052E5E9; /* je: equal / zero */

loc_0052E58A: ;
    SET_LO8(edx, 0); /* xor self */

loc_0052E58C: ;
    if (TEST_Z(ecx, ecx)) goto loc_0052E5B5; /* je: equal / zero */

loc_0052E590: ;
    PUSH32(esp, 4);
    edi = ecx + 0x20;
    POP32(esp, eax);

loc_0052E596: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0052E5A8; /* je: equal / zero */

loc_0052E59C: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0052E5A8; /* je: equal / zero */

loc_0052E5A1: ;
    if (CMP_NE(MEM32(esi + 0x3C), ecx)) goto loc_0052E5A8; /* jne: not equal / not zero */

loc_0052E5A6: ;
    SET_LO8(edx, 1);

loc_0052E5A8: ;
    edi = edi + 4;
    eax--;
    if ((eax != 0)) goto loc_0052E596; /* jne: not equal / not zero */

loc_0052E5AE: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = MEM32(ecx + 0x30);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0052E58C; /* je: equal / zero */

loc_0052E5B5: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(ebx + 0x38);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0052E5E9; /* jne: not equal / not zero */

loc_0052E5BC: ;
    if (TEST_Z(eax, eax)) goto loc_0052E5E5; /* je: equal / zero */

loc_0052E5C0: ;
    PUSH32(esp, 4);
    esi = eax + 0x20;
    POP32(esp, edi);

loc_0052E5C6: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0052E5D8; /* je: equal / zero */

loc_0052E5CC: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0052E5D8; /* je: equal / zero */

loc_0052E5D1: ;
    if (CMP_NE(MEM32(ecx + 0x3C), eax)) goto loc_0052E5D8; /* jne: not equal / not zero */

loc_0052E5D6: ;
    SET_LO8(edx, 1);

loc_0052E5D8: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0052E5C6; /* jne: not equal / not zero */

loc_0052E5DE: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(eax + 0x34);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0052E5BC; /* je: equal / zero */

loc_0052E5E5: ;
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_0052E64E(); return; } /* je: equal / zero */

loc_0052E5E9: ;
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) & 0;
    edi = ebx + 0x1C;
    esi = ebx + 0x24;
    edx = edi;
    MEM32(ebx + 0x30) = 1;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052E601: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052E613: ;
    edi = edi + 4;
    esi = ebp + -4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(ebx + 0x38);
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) & 0;
    (void)0; /* cmp MEM8(ebx + 0x10), 0 - flags set for next jcc */
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x3C) = eax;
    SET_LO8(eax, (CMP_EQ(MEM8(ebx + 0x10), 0)) ? 1 : 0); /* sete */
    MEM8(ebx + 0x10) = LO8(eax);
    eax = MEM32(ebx + 4);
    MEM32(ebx + 0xC) = eax;
    eax = ecx;
    MEM32(ebx + 4) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    eax = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = 2;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0052E650(); return; /* tail jmp 0x0052E650 */

}

/**
 * sub_0052E654
 * Original: 0x0052E654 - 0x0052E66E (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E654(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E654: ;
    eax = 0x47FEFC;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052E65E: ;
    ecx = MEM32(esp);
    SET_LO8(eax, 0); /* xor self */
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0052E66E
 * Original: 0x0052E66E - 0x0052E7F7 (393 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E66E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E66E: ;
    eax = 0x47F804;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052E678: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(ebx + 0x48), edi)) goto loc_0052E7DF; /* jne: not equal / not zero */

loc_0052E68B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0052E697: ;
    if (CMP_EQ(eax, edi)) goto loc_0052E6A9; /* je: equal / zero */

loc_0052E69B: ;
    MEM32(eax) = 0x648C88;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    goto loc_0052E6AB;

loc_0052E6A9: ;
    eax = 0; /* xor self */

loc_0052E6AB: ;
    PUSH32(esp, eax);
    MEM32(ebx + 0x48) = eax;
    PUSH32(esp, 0); sub_0052A849(); /* call 0x0052A849 */

loc_0052E6B4: ;
    eax = MEM32(ebx + 0x34);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = 0x648C78;
    if (CMP_EQ(eax, edi)) goto loc_0052E6DA; /* je: equal / zero */

loc_0052E6C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    ecx = MEM32(ebx + 0x18);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x34);
    MEM32(ebp + -32) = esp;
    PUSH32(esp, MEM32(ebx + 0x48));
    PUSH32(esp, 0); sub_0052B35A(); /* call 0x0052B35A */

loc_0052E6DA: ;
    if (CMP_EQ(MEM32(ebx + 0x38), edi)) goto loc_0052E6F9; /* je: equal / zero */

loc_0052E6DF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    ecx = MEM32(ebx + 0x20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x38);
    MEM32(ebp + -32) = esp;
    PUSH32(esp, MEM32(ebx + 0x48));
    PUSH32(esp, 0); sub_0052B35A(); /* call 0x0052B35A */

loc_0052E6F9: ;
    if (CMP_EQ(MEM32(ebx + 0x3C), edi)) goto loc_0052E718; /* je: equal / zero */

loc_0052E6FE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    ecx = MEM32(ebx + 0x28);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x3C);
    MEM32(ebp + -32) = esp;
    PUSH32(esp, MEM32(ebx + 0x48));
    PUSH32(esp, 0); sub_0052B35A(); /* call 0x0052B35A */

loc_0052E718: ;
    if (CMP_EQ(MEM8(0x5351A8), 0)) goto loc_0052E7DF; /* je: equal / zero */

loc_0052E725: ;
    eax = ebx + 4;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = 3;

loc_0052E732: ;
    eax = MEM32(ebp + -24);
    esi = MEM32(eax);
    eax = ebp + -60;
    ecx = esi;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052E741: ;
    PUSH32(esp, eax);
    edi = ebp + -40;
    PUSH32(esp, 0); sub_0052A08B(); /* call 0x0052A08B */

loc_0052E74A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = MEM32(esi + 0x10);
    edi = MEM32(esi + 0x34);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -60) = 0x648C74;
    MEM32(ebp + -20) = edi;
    if (TEST_Z(edi, edi)) goto loc_0052E7C7; /* je: equal / zero */

loc_0052E762: ;
    goto loc_0052E767;

loc_0052E764: ;
    edi = MEM32(ebp + -20);

loc_0052E767: ;
    eax = ebp + -40;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E76F: ;
    if (TEST_Z(eax, eax)) goto loc_0052E7C7; /* je: equal / zero */

loc_0052E773: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    esi = edi + 0x20;
    MEM32(ebp + -28) = esi;

loc_0052E77D: ;
    eax = MEM32(ebp + -16);
    if (CMP_EQ(MEM8(ebp + eax + -36), 0)) goto loc_0052E7AE; /* je: equal / zero */

loc_0052E787: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0052E7AE; /* je: equal / zero */

loc_0052E78D: ;
    edi = MEM32(ebx + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00531D7E(); /* call 0x00531D7E */

loc_0052E796: ;
    esi = MEM32(esi);
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, 0); sub_0052E7F7(); /* call 0x0052E7F7 */

loc_0052E7A0: ;
    eax = MEM32(ebp + -16);
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + -28);
    MEM8(ebp + eax + -36) = 0;

loc_0052E7AE: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    esi = esi + 4;
    (void)0; /* cmp MEM32(ebp + -16), 3 - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    if (CMP_LE(MEM32(ebp + -16), 3)) goto loc_0052E77D; /* jle: less or equal (signed <=) */

loc_0052E7BD: ;
    edi = MEM32(edi + 0x34);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -20) = edi;
    if (TEST_NZ(edi, edi)) goto loc_0052E764; /* jne: not equal / not zero */

loc_0052E7C7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    MEM32(ebp + -40) = 0x648C78;
    if ((MEM32(ebp + -32) != 0)) goto loc_0052E732; /* jne: not equal / not zero */

loc_0052E7DF: ;
    eax = MEM32(ebx + 0x48);
    ecx = MEM32(eax + 0xC);
    MEM32(ebx + 0x44) = ecx;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0052E7F7
 * Original: 0x0052E7F7 - 0x0052E81A (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E7F7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E7F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052E805: ;
    eax = MEM32(esi + 0x48);
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) { sub_0052E81A(); return; } /* je: equal / zero */

loc_0052E80F: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052E80F; /* jne: not equal / not zero */

loc_0052E818: ;
    g_seh_ebp = ebp; sub_0052E81C(); return; /* tail jmp 0x0052E81C */

}

/**
 * sub_0052E841
 * Original: 0x0052E841 - 0x0052E8D5 (148 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E841(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052E841: ;
    (void)0; /* cmp ecx, MEM32(esi + 0x34) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(ecx, MEM32(esi + 0x34))) goto loc_0052E873; /* jne: not equal / not zero */

loc_0052E847: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(eax + esi + 0x18), LO8(ebx))) goto loc_0052E85D; /* je: equal / zero */

loc_0052E84F: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x18) = LO8(ebx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052E85D: ;
    eax = esi + 0x14;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E865: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E8D3; /* jne: not equal / not zero */

loc_0052E869: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052A8FD(); /* call 0x0052A8FD */

loc_0052E871: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0052E873: ;
    if (CMP_NE(ecx, MEM32(esi + 0x38))) goto loc_0052E8A4; /* jne: not equal / not zero */

loc_0052E878: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(eax + esi + 0x20), LO8(ebx))) goto loc_0052E88E; /* je: equal / zero */

loc_0052E880: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052E88E: ;
    eax = esi + 0x1C;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E896: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E8D3; /* jne: not equal / not zero */

loc_0052E89A: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052A9CF(); /* call 0x0052A9CF */

loc_0052E8A2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0052E8A4: ;
    if (CMP_NE(ecx, MEM32(esi + 0x3C))) goto loc_0052E8D3; /* jne: not equal / not zero */

loc_0052E8A9: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(eax + esi + 0x28), LO8(ebx))) goto loc_0052E8BF; /* je: equal / zero */

loc_0052E8B1: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x28) = LO8(ebx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052B886(); /* call 0x0052B886 */

loc_0052E8BF: ;
    eax = esi + 0x24;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052E8C7: ;
    if (TEST_NZ(eax, eax)) goto loc_0052E8D3; /* jne: not equal / not zero */

loc_0052E8CB: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0052AAA1(); /* call 0x0052AAA1 */

loc_0052E8D3: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052E8D5
 * Original: 0x0052E8D5 - 0x0052EAA7 (466 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E8D5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052E8D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(edi, ebx)) goto loc_0052EAA3; /* je: equal / zero */

loc_0052E8E4: ;
    ecx = MEM32(edi + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0052E8FA; /* je: equal / zero */

loc_0052E8EB: ;
    eax = MEM32(ebx + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0052E8FA; /* je: equal / zero */

loc_0052E8F2: ;
    if (CMP_NE(ecx, eax)) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E8FA: ;
    ecx = MEM32(edi + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0052E910; /* je: equal / zero */

loc_0052E901: ;
    eax = MEM32(ebx + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0052E910; /* je: equal / zero */

loc_0052E908: ;
    if (CMP_NE(ecx, eax)) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E910: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052E917: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052E91E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052E924: ;
    if (TEST_NZ(eax, eax)) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E92C: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052E933: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0052E66E(); /* call 0x0052E66E */

loc_0052E93A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00532660(); /* call 0x00532660 */

loc_0052E940: ;
    if (TEST_NZ(eax, eax)) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E948: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & eax;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - edi;
    esi = edi + 4;

loc_0052E954: ;
    ecx = MEM32(ebp + -4);
    eax = ebx;
    PUSH32(esp, 0); sub_0052DD88(); /* call 0x0052DD88 */

loc_0052E95E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052E9B0; /* je: equal / zero */

loc_0052E962: ;
    ecx = MEM32(ebp + -4);
    eax = edi;
    PUSH32(esp, 0); sub_0052DD88(); /* call 0x0052DD88 */

loc_0052E96C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052E981; /* je: equal / zero */

loc_0052E970: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + esi);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0052CE5F(); /* call 0x0052CE5F */

loc_0052E97F: ;
    goto loc_0052E9A8;

loc_0052E981: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(eax) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052E996: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + esi);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0052CB11(); /* call 0x0052CB11 */

loc_0052E9A8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052EAA3; /* je: equal / zero */

loc_0052E9B0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    esi = esi + 4;
    if (CMP_LE(MEM32(ebp + -4), 2)) goto loc_0052E954; /* jle: less or equal (signed <=) */

loc_0052E9BC: ;
    ecx = MEM32(edi + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052E9DE; /* je: equal / zero */

loc_0052E9C3: ;
    eax = MEM32(ebx + 0x34);
    if (TEST_Z(eax, eax)) goto loc_0052E9DE; /* je: equal / zero */

loc_0052E9CA: ;
    if (CMP_NE(ecx, eax)) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E9D2: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x10))) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E9DE: ;
    esi = MEM32(edi + 0x38);
    if (TEST_Z(esi, esi)) goto loc_0052EA44; /* je: equal / zero */

loc_0052E9E5: ;
    PUSH32(esp, MEM32(ebx + 0x3C));
    ecx = esi;
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052E9EF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052E9F7: ;
    ecx = MEM32(ebx + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_0052EA0C; /* je: equal / zero */

loc_0052E9FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052EA04: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052EA0C: ;
    eax = MEM32(ebx + 0x38);
    if (TEST_Z(eax, eax)) goto loc_0052EA44; /* je: equal / zero */

loc_0052EA13: ;
    if (CMP_EQ(esi, eax)) goto loc_0052EA44; /* je: equal / zero */

loc_0052EA17: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052EA24: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052EA33: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 0x38));
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052EA40: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052EAA3; /* je: equal / zero */

loc_0052EA44: ;
    ecx = MEM32(edi + 0x3C);
    if (TEST_Z(ecx, ecx)) { sub_0052EAA7(); return; } /* je: equal / zero */

loc_0052EA4B: ;
    esi = MEM32(ebx + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052EA54: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052EA58: ;
    if (TEST_Z(esi, esi)) goto loc_0052EA6A; /* je: equal / zero */

loc_0052EA5C: ;
    PUSH32(esp, MEM32(edi + 0x3C));
    ecx = esi;
    PUSH32(esp, 0); sub_0052A3FF(); /* call 0x0052A3FF */

loc_0052EA66: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EAA3; /* jne: not equal / not zero */

loc_0052EA6A: ;
    eax = MEM32(ebx + 0x3C);
    if (TEST_Z(eax, eax)) { sub_0052EAA7(); return; } /* je: equal / zero */

loc_0052EA71: ;
    if (CMP_EQ(MEM32(edi + 0x3C), eax)) { sub_0052EAA7(); return; } /* je: equal / zero */

loc_0052EA76: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052EA83: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, MEM32(edi + 0x3C));
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052EA92: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 0x3C));
    PUSH32(esp, MEM32(edi + 0x3C));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052EA9F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052EAA7(); return; } /* jne: not equal / not zero */

loc_0052EAA3: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052EAA9(); return; /* tail jmp 0x0052EAA9 */

}

/**
 * sub_0052EAAC
 * Original: 0x0052EAAC - 0x0052EE1F (883 bytes, 336 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EAAC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052EAAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = esi;
    PUSH32(esp, 0); sub_0052E8D5(); /* call 0x0052E8D5 */

loc_0052EAC2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052EE18; /* je: equal / zero */

loc_0052EACA: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    ebx = esi + 4;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -4) = MEM32(ebp + -4) - esi;
    MEM32(ebp + -12) = ebx;

loc_0052EADA: ;
    ecx = MEM32(ebp + -8);
    eax = edi;
    PUSH32(esp, 0); sub_0052DD88(); /* call 0x0052DD88 */

loc_0052EAE4: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EB2B; /* jne: not equal / not zero */

loc_0052EAE8: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052EAF9: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(eax + 0x14));
    ecx = MEM32(ecx + ebx);
    MEM8(ecx + 0x14) = LO8(eax);
    eax = 0; /* xor self */

loc_0052EB09: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 4);
    POP32(esp, edx);
    if (CMP_EQ(eax, edx)) goto loc_0052EB16; /* je: equal / zero */

loc_0052EB12: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_0052EB16: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + ebx);
    MEM32(ecx + eax * 4 + 0x1C) = edx;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_0052EB09; /* jle: less or equal (signed <=) */

loc_0052EB26: ;
    goto loc_0052EBAE;

loc_0052EB2B: ;
    ecx = MEM32(ebp + -8);
    eax = esi;
    PUSH32(esp, 0); sub_0052DD88(); /* call 0x0052DD88 */

loc_0052EB35: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052EBAE; /* je: equal / zero */

loc_0052EB39: ;
    ebx = 0; /* xor self */

loc_0052EB3B: ;
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052EB46: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EB66; /* jne: not equal / not zero */

loc_0052EB4A: ;
    edx = MEM32(ebp + -12);
    eax = MEM32(edx);
    PUSH32(esp, 4);
    POP32(esp, ecx);
    if (CMP_EQ(ebx, ecx)) goto loc_0052EB5A; /* je: equal / zero */

loc_0052EB56: ;
    ecx = MEM32(eax + ebx * 4 + 0x1C);

loc_0052EB5A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + edx);
    MEM32(eax + ebx * 4 + 0x1C) = ecx;
    goto loc_0052EB9F;

loc_0052EB66: ;
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0052DDD1(); /* call 0x0052DDD1 */

loc_0052EB71: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052EB9F; /* je: equal / zero */

loc_0052EB75: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + ecx);
    PUSH32(esp, 4);
    POP32(esp, edx);
    if (CMP_NE(ebx, edx)) goto loc_0052EB89; /* jne: not equal / not zero */

loc_0052EB85: ;
    eax = edx;
    goto loc_0052EB8D;

loc_0052EB89: ;
    eax = MEM32(eax + ebx * 4 + 0x1C);

loc_0052EB8D: ;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    ecx = MEM32(ecx);
    if (CMP_NE(ebx, edx)) goto loc_0052EB97; /* jne: not equal / not zero */

loc_0052EB93: ;
    ecx = edx;
    goto loc_0052EB9B;

loc_0052EB97: ;
    ecx = MEM32(ecx + ebx * 4 + 0x1C);

loc_0052EB9B: ;
    if (CMP_NE(eax, ecx)) goto loc_0052EC0B; /* jne: not equal / not zero */

loc_0052EB9F: ;
    ebx++;
    if (CMP_LE(ebx, 3)) goto loc_0052EB3B; /* jle: less or equal (signed <=) */

loc_0052EBA5: ;
    ebx = MEM32(ebp + -12);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);

loc_0052EBAE: ;
    PUSH32(esp, MEM32(0x5351AC));
    ecx = MEM32(ebx);
    PUSH32(esp, 0); sub_0052CAA1(); /* call 0x0052CAA1 */

loc_0052EBBB: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    ebx = ebx + 4;
    (void)0; /* cmp MEM32(ebp + -8), 2 - flags set for next jcc */
    MEM32(ebp + -12) = ebx;
    if (CMP_LE(MEM32(ebp + -8), 2)) goto loc_0052EADA; /* jle: less or equal (signed <=) */

loc_0052EBCE: ;
    eax = 0; /* xor self */
    if (CMP_NE(MEM32(edi + 0x2C), eax)) goto loc_0052EBDB; /* jne: not equal / not zero */

loc_0052EBD5: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x2C) = ecx;

loc_0052EBDB: ;
    if (CMP_NE(MEM32(edi + 0x30), eax)) goto loc_0052EBE6; /* jne: not equal / not zero */

loc_0052EBE0: ;
    ecx = MEM32(esi + 0x30);
    MEM32(edi + 0x30) = ecx;

loc_0052EBE6: ;
    if (CMP_NE(MEM32(edi + 0x34), eax)) goto loc_0052EBF7; /* jne: not equal / not zero */

loc_0052EBEB: ;
    eax = MEM32(esi + 0x34);
    MEM32(edi + 0x34) = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    MEM8(edi + 0x10) = LO8(eax);

loc_0052EBF7: ;
    ecx = MEM32(edi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x38);
    ebx = 0x648C78;
    if (TEST_NZ(ecx, ecx)) goto loc_0052EC10; /* jne: not equal / not zero */

loc_0052EC06: ;
    MEM32(edi + 0x38) = eax;
    goto loc_0052EC7F;

loc_0052EC0B: ;
    PUSH32(esp, 0); sub_0052AD7A(); /* call 0x0052AD7A */

loc_0052EC10: ;
    if (TEST_Z(eax, eax)) goto loc_0052EC7F; /* je: equal / zero */

loc_0052EC14: ;
    if (CMP_EQ(ecx, eax)) goto loc_0052EC7F; /* je: equal / zero */

loc_0052EC18: ;
    (void)0; /* cmp MEM32(eax + 4), 1 - flags set for next jcc */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -12) = esp;
    if (CMP_NE(MEM32(eax + 4), 1)) goto loc_0052EC52; /* jne: not equal / not zero */

loc_0052EC23: ;
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052EC2F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052EC40: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052EC4D: ;
    eax = MEM32(esi + 0x38);
    goto loc_0052EC06;

loc_0052EC52: ;
    esi = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052EC5A: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052EC6C: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x38));
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052EC7C: ;
    esi = MEM32(ebp + 0xC);

loc_0052EC7F: ;
    ecx = MEM32(edi + 0x3C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x3C);
    if (TEST_NZ(ecx, ecx)) goto loc_0052EC8E; /* jne: not equal / not zero */

loc_0052EC89: ;
    MEM32(edi + 0x3C) = eax;
    goto loc_0052ECFD;

loc_0052EC8E: ;
    if (TEST_Z(eax, eax)) goto loc_0052ECFD; /* je: equal / zero */

loc_0052EC92: ;
    if (CMP_EQ(ecx, eax)) goto loc_0052ECFD; /* je: equal / zero */

loc_0052EC96: ;
    (void)0; /* cmp MEM32(eax + 4), 1 - flags set for next jcc */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -12) = esp;
    if (CMP_NE(MEM32(eax + 4), 1)) goto loc_0052ECD0; /* jne: not equal / not zero */

loc_0052ECA1: ;
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052ECAD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052ECBE: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 0x3C));
    PUSH32(esp, MEM32(esi + 0x3C));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052ECCB: ;
    eax = MEM32(esi + 0x3C);
    goto loc_0052EC89;

loc_0052ECD0: ;
    esi = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052ECD8: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, MEM32(edi + 0x3C));
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052ECEA: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x3C));
    PUSH32(esp, MEM32(edi + 0x3C));
    PUSH32(esp, 0); sub_0052BCB2(); /* call 0x0052BCB2 */

loc_0052ECFA: ;
    esi = MEM32(ebp + 0xC);

loc_0052ECFD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -12) = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 4) = ecx;
    esi = edi + 0x14;
    eax = ebp + -16;
    edx = esi;
    PUSH32(esp, 0); sub_00529F20(); /* call 0x00529F20 */

loc_0052ED19: ;
    edx = eax;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052ED20: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -12) = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 4) = ecx;
    esi = esi + 0x1C;
    eax = ebp + -16;
    edx = esi;
    PUSH32(esp, 0); sub_00529F20(); /* call 0x00529F20 */

loc_0052ED42: ;
    edx = eax;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052ED49: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 4) = ecx;
    esi = esi + 0x24;
    eax = ebp + -16;
    edx = esi;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, 0); sub_00529F20(); /* call 0x00529F20 */

loc_0052ED68: ;
    edx = eax;
    PUSH32(esp, 0); sub_0052ACFA(); /* call 0x0052ACFA */

loc_0052ED6F: ;
    (void)0; /* cmp MEM32(edi + 0x34), 0 - flags set for next jcc */
    esi = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(edi + 0x34), 0)) goto loc_0052ED90; /* je: equal / zero */

loc_0052ED78: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0x18);
    MEM32(ebp + 8) = esp;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(edi + 0x34));
    PUSH32(esp, 0); sub_0052A599(); /* call 0x0052A599 */

loc_0052ED90: ;
    if (CMP_EQ(MEM32(edi + 0x38), 0)) goto loc_0052EDAE; /* je: equal / zero */

loc_0052ED96: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0x20);
    MEM32(ebp + 8) = esp;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, 0); sub_0052A599(); /* call 0x0052A599 */

loc_0052EDAE: ;
    if (CMP_EQ(MEM32(edi + 0x3C), 0)) goto loc_0052EDCC; /* je: equal / zero */

loc_0052EDB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0x28);
    MEM32(ebp + 8) = esp;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, MEM32(edi + 0x3C));
    PUSH32(esp, 0); sub_0052A599(); /* call 0x0052A599 */

loc_0052EDCC: ;
    ecx = 0; /* xor self */
    MEM32(edi + 0x3C) = ecx;
    MEM32(edi + 0x38) = ecx;
    MEM32(edi + 0x34) = ecx;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, ecx)) goto loc_0052EDE4; /* je: equal / zero */

loc_0052EDDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A5D2(); /* call 0x0052A5D2 */

loc_0052EDE4: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0052EDF1; /* je: equal / zero */

loc_0052EDEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A5D2(); /* call 0x0052A5D2 */

loc_0052EDF1: ;
    (void)0; /* cmp MEM32(esi + 0x48), 0 - flags set for next jcc */
    eax = MEM32(edi + 0x48);
    if (CMP_EQ(MEM32(esi + 0x48), 0)) goto loc_0052EE05; /* je: equal / zero */

loc_0052EDFA: ;
    if (TEST_Z(eax, eax)) goto loc_0052EE0E; /* je: equal / zero */

loc_0052EDFE: ;
    PUSH32(esp, 0); sub_0052ABE0(); /* call 0x0052ABE0 */

loc_0052EE03: ;
    goto loc_0052EE0E;

loc_0052EE05: ;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(edi + 0x44);
    MEM32(esi + 0x44) = eax;

loc_0052EE0E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0052EE16: ;
    SET_LO8(eax, 1);

loc_0052EE18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052EE1F
 * Original: 0x0052EE1F - 0x0052EF06 (231 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EE1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0052EE1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_0052EE3D; /* je: equal / zero */

loc_0052EE2E: ;
    ecx = MEM32(esi + 0x34);
    if (TEST_Z(ecx, ecx)) goto loc_0052EE3D; /* je: equal / zero */

loc_0052EE35: ;
    if (CMP_NE(eax, ecx)) goto loc_0052EF02; /* jne: not equal / not zero */

loc_0052EE3D: ;
    ecx = MEM32(edi + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_0052EE53; /* je: equal / zero */

loc_0052EE44: ;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_0052EE53; /* je: equal / zero */

loc_0052EE4B: ;
    if (CMP_NE(ecx, eax)) goto loc_0052EF02; /* jne: not equal / not zero */

loc_0052EE53: ;
    ecx = MEM32(edi + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_0052EE69; /* je: equal / zero */

loc_0052EE5A: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0052EE69; /* je: equal / zero */

loc_0052EE61: ;
    if (CMP_NE(ecx, eax)) goto loc_0052EF02; /* jne: not equal / not zero */

loc_0052EE69: ;
    ebx = esi;
    PUSH32(esp, 0); sub_0052E8D5(); /* call 0x0052E8D5 */

loc_0052EE70: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052EF02; /* je: equal / zero */

loc_0052EE78: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(edi + 0x30), ebx)) goto loc_0052EE92; /* je: equal / zero */

loc_0052EE7F: ;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, ebx)) goto loc_0052EE92; /* je: equal / zero */

loc_0052EE86: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0052AD10(); /* call 0x0052AD10 */

loc_0052EE8E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EF02; /* jne: not equal / not zero */

loc_0052EE92: ;
    if (CMP_EQ(MEM32(esi + 0x30), ebx)) goto loc_0052EEAA; /* je: equal / zero */

loc_0052EE97: ;
    eax = MEM32(edi + 0x38);
    if (CMP_EQ(eax, ebx)) goto loc_0052EEAA; /* je: equal / zero */

loc_0052EE9E: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0052AD10(); /* call 0x0052AD10 */

loc_0052EEA6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0052EF02; /* jne: not equal / not zero */

loc_0052EEAA: ;
    if (CMP_EQ(MEM32(edi + 0x2C), ebx)) goto loc_0052EED6; /* je: equal / zero */

loc_0052EEAF: ;
    if (CMP_EQ(MEM32(esi + 0x3C), ebx)) goto loc_0052EED6; /* je: equal / zero */

loc_0052EEB4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esi;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0); sub_0052A8B6(); /* call 0x0052A8B6 */

loc_0052EEC3: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00530AB8(); /* call 0x00530AB8 */

loc_0052EED2: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0052EF02; /* je: equal / zero */

loc_0052EED6: ;
    if (CMP_EQ(MEM32(esi + 0x2C), ebx)) { sub_0052EF06(); return; } /* je: equal / zero */

loc_0052EEDB: ;
    if (CMP_EQ(MEM32(edi + 0x3C), ebx)) { sub_0052EF06(); return; } /* je: equal / zero */

loc_0052EEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = edi;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, 0); sub_0052A8B6(); /* call 0x0052A8B6 */

loc_0052EEEF: ;
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00530AB8(); /* call 0x00530AB8 */

loc_0052EEFE: ;
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_0052EF06(); return; } /* jne: not equal / not zero */

loc_0052EF02: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052EF08(); return; /* tail jmp 0x0052EF08 */

}

/**
 * sub_0052EF0E
 * Original: 0x0052EF0E - 0x0052EF19 (11 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EF0E(void)
{
    uint32_t ebp;

loc_0052EF0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    g_seh_ebp = ebp; sub_0052EF64(); return; /* tail jmp 0x0052EF64 */

}

/**
 * sub_0052EF6F
 * Original: 0x0052EF6F - 0x0052F1ED (638 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EF6F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052EF6F: ;
    eax = 0x47F7F2;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0052EF79: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0052ABA5(); /* call 0x0052ABA5 */

loc_0052EF88: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F072; /* je: equal / zero */

loc_0052EF90: ;
    PUSH32(esp, 0); sub_0052E4E3(); /* call 0x0052E4E3 */

loc_0052EF95: ;
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0x34), esi)) goto loc_0052EFFF; /* je: equal / zero */

loc_0052EF9C: ;
    if (CMP_NE(MEM8(ebx + 0x10), 0)) goto loc_0052EFFF; /* jne: not equal / not zero */

loc_0052EFA2: ;
    eax = MEM32(ebx + 4);
    if (CMP_EQ(MEM8(eax + 0x14), 0)) goto loc_0052EFBB; /* je: equal / zero */

loc_0052EFAB: ;
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0); sub_0052C8FC(); /* call 0x0052C8FC */

loc_0052EFB3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F072; /* je: equal / zero */

loc_0052EFBB: ;
    ecx = MEM32(ebx + 4);
    esp = esp - 0x14;
    eax = esp;
    MEM32(ebp + -20) = esp;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052EFCB: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0); sub_0052C5EF(); /* call 0x0052C5EF */

loc_0052EFD6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F072; /* je: equal / zero */

loc_0052EFDE: ;
    ecx = MEM32(ebx + 4);
    eax = ebp + -72;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052EFE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A152(); /* call 0x0052A152 */

loc_0052EFEF: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ebp + -13) = LO8(eax);
    if ((LO8(eax) != 0)) goto loc_0052F072; /* jne: not equal / not zero */

loc_0052EFFA: ;
    if (CMP_NE(MEM32(ebx + 0x38), esi)) goto loc_0052F072; /* jne: not equal / not zero */

loc_0052EFFF: ;
    eax = MEM32(ebx + 0x38);
    if (CMP_EQ(eax, esi)) { sub_0052F1ED(); return; } /* je: equal / zero */

loc_0052F00A: ;
    ecx = MEM32(ebx + 4);
    if (CMP_EQ(MEM8(ecx + 0x14), 0)) goto loc_0052F01D; /* je: equal / zero */

loc_0052F013: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052C8FC(); /* call 0x0052C8FC */

loc_0052F019: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F072; /* je: equal / zero */

loc_0052F01D: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ebx + 0x38);
    if (CMP_EQ(edx, eax)) goto loc_0052F079; /* je: equal / zero */

loc_0052F02A: ;
    if (CMP_EQ(edx, MEM32(eax + 0x30))) goto loc_0052F079; /* je: equal / zero */

loc_0052F02F: ;
    eax = ebp + -72;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052F037: ;
    esp = esp - 0x14;
    MEM32(ebp + -4) = 2;
    esi = esp;
    edi = eax;
    MEM32(ebp + -20) = esp;
    PUSH32(esp, 0); sub_0052A1F6(); /* call 0x0052A1F6 */

loc_0052F04D: ;
    PUSH32(esp, MEM32(ebx + 0x38));
    PUSH32(esp, 0); sub_0052C5EF(); /* call 0x0052C5EF */

loc_0052F055: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F072; /* je: equal / zero */

loc_0052F059: ;
    ecx = MEM32(ebx + 4);
    eax = ebp + -72;
    PUSH32(esp, 0); sub_0052A6F2(); /* call 0x0052A6F2 */

loc_0052F064: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0052A152(); /* call 0x0052A152 */

loc_0052F06A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0052F1ED(); return; } /* jne: not equal / not zero */

loc_0052F072: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0052F1EF(); return; /* tail jmp 0x0052F1EF */

loc_0052F079: ;
    edi = eax;
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0x648C78;
    PUSH32(esp, 0); sub_00529F01(); /* call 0x00529F01 */

loc_0052F08C: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(edi, esi)) goto loc_0052F0EE; /* je: equal / zero */

loc_0052F093: ;
    edx = 0; /* xor self */
    eax = edi + 0x20;

loc_0052F098: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0052F0A7; /* je: equal / zero */

loc_0052F09E: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0052F0A7; /* je: equal / zero */

loc_0052F0A2: ;
    MEM8(ebp + edx + -24) = 1;

loc_0052F0A7: ;
    edx++;
    eax = eax + 4;
    if (CMP_LE(edx, 3)) goto loc_0052F098; /* jle: less or equal (signed <=) */

loc_0052F0B0: ;
    esi = 0; /* xor self */

loc_0052F0B2: ;
    if (CMP_EQ(MEM8(ebx + esi + 0x20), 0)) goto loc_0052F0E1; /* je: equal / zero */

loc_0052F0B9: ;
    if (CMP_NE(MEM8(ebp + esi + -24), 0)) goto loc_0052F0E1; /* jne: not equal / not zero */

loc_0052F0C0: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0052B7D4(); /* call 0x0052B7D4 */

loc_0052F0C8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0052F0E1; /* je: equal / zero */

loc_0052F0CC: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    if (CMP_EQ(esi, eax)) goto loc_0052F0DA; /* je: equal / zero */

loc_0052F0D3: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + esi * 4 + 0x1C);

loc_0052F0DA: ;
    if (CMP_NE(MEM8(ebp + eax + -24), 0)) goto loc_0052F072; /* jne: not equal / not zero */

loc_0052F0E1: ;
    esi++;
    if (CMP_LE(esi, 3)) goto loc_0052F0B2; /* jle: less or equal (signed <=) */

loc_0052F0E7: ;
    edi = MEM32(edi + 0x34);
    if (TEST_NZ(edi, edi)) goto loc_0052F093; /* jne: not equal / not zero */

loc_0052F0EE: ;
    esi = MEM32(ebx + 0x38);
    eax = MEM32(ebx + 0x20);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -36) = 0x648C78;
    MEM32(ebp + -32) = eax;
    MEM8(ebp + -4) = 1;
    edi = 0; /* xor self */

loc_0052F107: ;
    if (CMP_EQ(MEM8(ebx + edi + 0x20), 0)) goto loc_0052F11D; /* je: equal / zero */

loc_0052F10E: ;
    ecx = MEM32(ebx + 0x38);
    eax = edi;
    esi = ebx;
    PUSH32(esp, 0); sub_0052E841(); /* call 0x0052E841 */

loc_0052F11A: ;
    esi = MEM32(ebp + -20);

loc_0052F11D: ;
    edi++;
    if (CMP_LE(edi, 3)) goto loc_0052F107; /* jle: less or equal (signed <=) */

loc_0052F123: ;
    if (TEST_Z(esi, esi)) { sub_0052F1ED(); return; } /* je: equal / zero */

loc_0052F12B: ;
    eax = ebp + -36;
    PUSH32(esp, 0); sub_00529ED2(); /* call 0x00529ED2 */

loc_0052F133: ;
    if (TEST_Z(eax, eax)) { sub_0052F1ED(); return; } /* je: equal / zero */

loc_0052F13B: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0052F15A; /* jne: not equal / not zero */

loc_0052F142: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = ecx;
    MEM32(ebp + -20) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0052F1A7; /* je: equal / zero */

loc_0052F14B: ;
    eax = 0; /* xor self */

loc_0052F14D: ;
    PUSH32(esp, 4);
    POP32(esp, edi);
    if (CMP_NE(eax, edi)) goto loc_0052F163; /* jne: not equal / not zero */

loc_0052F154: ;
    ecx = edi;
    goto loc_0052F16A;

loc_0052F158: ;
    ecx = eax;

loc_0052F15A: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0052F158; /* jne: not equal / not zero */

loc_0052F161: ;
    goto loc_0052F142;

loc_0052F163: ;
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + eax * 4 + 0x1C);

loc_0052F16A: ;
    if (CMP_EQ(MEM8(ebp + ecx + -32), 0)) goto loc_0052F192; /* je: equal / zero */

loc_0052F171: ;
    if (CMP_EQ(eax, edi)) goto loc_0052F180; /* je: equal / zero */

loc_0052F175: ;
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    if (CMP_NE(ecx, edi)) goto loc_0052F184; /* jne: not equal / not zero */

loc_0052F180: ;
    ecx = edi;
    goto loc_0052F18B;

loc_0052F184: ;
    edi = MEM32(ebx + 4);
    ecx = MEM32(edi + ecx * 4 + 0x1C);

loc_0052F18B: ;
    edi = MEM32(edx + 4);
    MEM32(edi + eax * 4 + 0x1C) = ecx;

loc_0052F192: ;
    eax++;
    if (CMP_LE(eax, 3)) goto loc_0052F14D; /* jle: less or equal (signed <=) */

loc_0052F198: ;
    eax = ebp + -20;
    PUSH32(esp, 0); sub_005324B9(); /* call 0x005324B9 */

loc_0052F1A0: ;
    edx = MEM32(ebp + -20);
    if (TEST_NZ(edx, edx)) goto loc_0052F14B; /* jne: not equal / not zero */

loc_0052F1A7: ;
    eax = MEM32(esi + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) { sub_0052F1ED(); return; } /* je: equal / zero */

loc_0052F1B1: ;
    PUSH32(esp, eax);
    esi = ebp + -52;
    PUSH32(esp, 0); sub_0052A558(); /* call 0x0052A558 */

loc_0052F1BA: ;
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -24) = esp;
    PUSH32(esp, 0); sub_00529FEC(); /* call 0x00529FEC */

loc_0052F1C8: ;
    eax = ebp + -44;
    edx = ebp + -36;
    PUSH32(esp, 0); sub_00529F86(); /* call 0x00529F86 */

loc_0052F1D3: ;
    esi = eax + 4;
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + -20);
    eax = 0x648C78;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -52) = eax;
    goto loc_0052F12B;

}

/**
 * sub_0052F1FE
 * Original: 0x0052F1FE - 0x0052F24D (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F1FE(void)
{
    int _flags = 0; /* fallback flag var */

loc_0052F1FE: ;
    if (CMP_NE(ecx, MEM32(eax + 0x38))) goto loc_0052F21A; /* jne: not equal / not zero */

loc_0052F203: ;
    if (CMP_NE(MEM32(eax + 0x2C), 1)) goto loc_0052F21A; /* jne: not equal / not zero */

loc_0052F209: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x34), ecx)) goto loc_0052F215; /* je: equal / zero */

loc_0052F210: ;
    if (CMP_EQ(MEM8(eax + 0x10), LO8(ecx))) { sub_0052F24D(); return; } /* je: equal / zero */

loc_0052F215: ;
    eax = MEM32(eax + 4);
    goto loc_0052F241;

loc_0052F21A: ;
    if (CMP_NE(ecx, MEM32(eax + 0x3C))) { sub_0052F24D(); return; } /* jne: not equal / not zero */

loc_0052F21F: ;
    if (CMP_NE(MEM32(eax + 0x30), 1)) { sub_0052F24D(); return; } /* jne: not equal / not zero */

loc_0052F225: ;
    ecx = MEM32(eax + 0x2C);
    if (CMP_EQ(ecx, 3)) { sub_0052F24D(); return; } /* je: equal / zero */

loc_0052F22D: ;
    if (CMP_EQ(ecx, 4)) { sub_0052F24D(); return; } /* je: equal / zero */

loc_0052F232: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x34), ecx)) goto loc_0052F23E; /* je: equal / zero */

loc_0052F239: ;
    if (CMP_NE(MEM8(eax + 0x10), LO8(ecx))) { sub_0052F24D(); return; } /* jne: not equal / not zero */

loc_0052F23E: ;
    eax = MEM32(eax + 0xC);

loc_0052F241: ;
    (void)0; /* cmp MEM8(eax + 0x14), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(eax + 0x14), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(eax + 0x14) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
