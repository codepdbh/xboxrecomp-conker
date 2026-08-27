/**
 * Burnout 3 - Recompiled code chunk 10
 * Functions: 250 (0x000E04A0 - 0x000F3860)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000E04A0
 * Original: 0x000E04A0 - 0x000E04F8 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E04A0(void)
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

loc_000E04A0: ;
    edx = MEM32(0x84A5F8);
    fp_push(MEMF(edx + 0x78)); /* fld float */
    eax = ecx + 0x78;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edx + 0x7C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edx + 0x80)); /* fld float */
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
    fp_push(MEMF(0x59D944)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_000E04F8(); return; } /* jbe: below or equal (unsigned <=) */

loc_000E04E4: ;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8500(); /* call 0x002A8500 */

loc_000E04ED: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 2)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E0500
 * Original: 0x000E0500 - 0x000E071E (542 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0500: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_000E0719; /* je: equal / zero */

loc_000E050E: ;
    eax = MEM32(0x8472F4);
    if (TEST_NZ(eax, eax)) goto loc_000E0719; /* jne: not equal / not zero */

loc_000E051B: ;
    eax = MEM32(0x8472F8);
    if (TEST_NZ(eax, eax)) goto loc_000E0719; /* jne: not equal / not zero */

loc_000E0528: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000E04A0(); /* call 0x000E04A0 */

loc_000E052F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E0719; /* je: equal / zero */

loc_000E0537: ;
    edx = MEM32(edi + 0x80);
    xmm0 = MEMF(edi + 0x78); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x7C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    esi = esp + 0x20;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_000E055F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0x10;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 > xmm2)) goto loc_000E0719; /* ja: above (unsigned >) */

loc_000E0575: ;
    /* comiss xmm2, MEMF(0x64971C) - sets EFLAGS */
    if ((xmm2 > MEMF(0x64971C))) goto loc_000E0719; /* ja: above (unsigned >) */

loc_000E0582: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000E0719; /* ja: above (unsigned >) */

loc_000E0599: ;
    /* comiss xmm0, MEMF(0x649718) - sets EFLAGS */
    if ((xmm0 > MEMF(0x649718))) goto loc_000E0719; /* ja: above (unsigned >) */

loc_000E05A6: ;
    xmm2 = xmm2 * MEMF(0x649714); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649710); /* mulss */
    eax = 0; /* xor self */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(0x8472F0) = edi;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x649278); /* movss */
    ecx = 0x816;
    edi = 0x8472FC;
    MEMF(0x849354) = xmm2; /* movss */
    MEMF(0x849358) = xmm1; /* movss */
    MEMF(0x84935C) = xmm0; /* movss */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(0x8497EC));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    SET_LO8(eax, 0xFF);
    MEM8(0x84932C) = LO8(eax);
    MEM8(0x84932D) = LO8(eax);
    MEM8(0x84932E) = LO8(eax);
    eax = MEM32(esp + 0x14);
    eax = eax + 0xFFFFF980u;
    ecx--;
    ecx = ecx & 0x20000;
    ecx = ecx | 0x18001;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(0x8472FC) = ecx;
    MEM16(0x84932A) = 0x64;
    MEM8(0x849304) = 1;
    MEM16(0x849328) = 0;
    MEM8(0x84932F) = 0;
    MEM32(0x84931C) = 0x849354;
    MEM32(0x849320) = 0x849358;
    MEM32(0x849324) = 0x84935C;
    if (CMP_A(eax, 4)) goto loc_000E06A0; /* ja: above (unsigned >) */

loc_000E0676: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xE0720); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000E067Du) goto loc_000E067D;
    if (_jt == 0x000E0684u) goto loc_000E0684;
    if (_jt == 0x000E068Bu) goto loc_000E068B;
    if (_jt == 0x000E0692u) goto loc_000E0692;
    if (_jt == 0x000E0699u) goto loc_000E0699;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E067D: ;
    eax = 0x771AC0;
    goto loc_000E06A5;

loc_000E0684: ;
    eax = 0x771A40;
    goto loc_000E06A5;

loc_000E068B: ;
    eax = 0x7719C0;
    goto loc_000E06A5;

loc_000E0692: ;
    eax = 0x771940;
    goto loc_000E06A5;

loc_000E0699: ;
    eax = 0x7718C0;
    goto loc_000E06A5;

loc_000E06A0: ;
    eax = 0x771840;

loc_000E06A5: ;
    PUSH32(esp, eax);
    MEM32(0x847300) = eax;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_000E06B0: ;
    eax = eax + eax * 4;
    eax = eax * 8 + 0x12C;
    esp = esp + 4;
    (void)0; /* cmp eax, 0xB4 - flags set for next jcc */
    MEM32(0x849360) = eax;
    if (CMP_GE(eax, 0xB4)) goto loc_000E06D3; /* jge: greater or equal (signed >=) */

loc_000E06C9: ;
    MEM32(0x849360) = 0xB4;

loc_000E06D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8472FC);
    PUSH32(esp, 0xCF570);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000E0850(); /* call 0x000E0850 */

loc_000E06E8: ;
    xmm0 = MEMF(0x648E38); /* movss */
    MEM32(0x8472F4) = eax;
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    eax = MEM32(0x8472F4);
    xmm1 = MEMF(eax + 0x64); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x14;
    MEMF(eax + 0x64) = xmm1; /* movss */

loc_000E0719: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0740
 * Original: 0x000E0740 - 0x000E0843 (259 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000E0740: ;
    eax = MEM32(0x8472F4);
    esp = esp - 0xC;
    if (TEST_Z(eax, eax)) goto loc_000E083F; /* je: equal / zero */

loc_000E0750: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(0x8472F0);
    edx = MEM32(eax + 0x80);
    xmm0 = MEMF(eax + 0x78); /* movss */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    esi = esp + 0x1C;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_000E077D: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x10;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648CF8))) goto loc_000E07EC; /* jbe: below or equal (unsigned <=) */

loc_000E078F: ;
    xmm0 = MEMF(0x64971C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000E07EC; /* jbe: below or equal (unsigned <=) */

loc_000E079C: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000E07EC; /* jbe: below or equal (unsigned <=) */

loc_000E07AF: ;
    xmm3 = MEMF(0x649718); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_000E07EC; /* jbe: below or equal (unsigned <=) */

loc_000E07BC: ;
    xmm2 = xmm2 * MEMF(0x649714); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649710); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x849354) = xmm2; /* movss */
    MEMF(0x849358) = xmm1; /* movss */

loc_000E07EC: ;
    eax = MEM32(0x8472F4);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(edx + 0x2050);
    if (CMP_LE(ecx, MEM32(0x849360))) goto loc_000E083E; /* jle: less or equal (signed <=) */

loc_000E0802: ;
    MEM32(0x8472F8) = eax;
    if (CMP_NE(MEM32(eax), 0x7C)) goto loc_000E082A; /* jne: not equal / not zero */

loc_000E080C: ;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx) = MEM32(ecx) | 0x100;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx) = MEM32(ecx) & 0xFFFFFBFFu;
    edx = MEM32(eax + 0x30);
    SET_LO8(ecx, MEM8(edx + 0x2008));
    MEM8(eax + 0x46) = LO8(ecx);

loc_000E082A: ;
    MEM32(0x849360) = 0;
    MEM32(0x8472F4) = 0;

loc_000E083E: ;
    POP32(esp, esi);

loc_000E083F: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0850
 * Original: 0x000E0850 - 0x000E0CCB (1147 bytes, 295 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0850(void)
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

loc_000E0850: ;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_000E085B: ;
    ebx = MEM32(esp + 0x70);
    edi = 0; /* xor self */
    MEM32(ebx + 0x204C) = eax;
    MEM32(ebx + 0x2054) = eax;
    MEM32(ebx + 0x2050) = edi;
    if (CMP_NE(MEM32(0x69E490), edi)) goto loc_000E088E; /* jne: not equal / not zero */

loc_000E087B: ;
    eax = MEM32(0x69E48C);
    PUSH32(esp, 0x69E490);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000E088B: ;
    esp = esp + 8;

loc_000E088E: ;
    if (CMP_NE(MEM32(0x69E4A4), edi)) goto loc_000E08AA; /* jne: not equal / not zero */

loc_000E0896: ;
    ecx = MEM32(0x69E4A0);
    PUSH32(esp, 0x69E4A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000E08A7: ;
    esp = esp + 8;

loc_000E08AA: ;
    if (CMP_NE(MEM32(0x69E4B8), edi)) goto loc_000E08C6; /* jne: not equal / not zero */

loc_000E08B2: ;
    edx = MEM32(0x69E4B4);
    PUSH32(esp, 0x69E4B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000E08C3: ;
    esp = esp + 8;

loc_000E08C6: ;
    if (CMP_NE(MEM32(0x69E4CC), edi)) goto loc_000E08E1; /* jne: not equal / not zero */

loc_000E08CE: ;
    eax = MEM32(0x69E4C8);
    PUSH32(esp, 0x69E4CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000E08DE: ;
    esp = esp + 8;

loc_000E08E1: ;
    if (CMP_NE(MEM32(0x69E4E0), edi)) goto loc_000E08FD; /* jne: not equal / not zero */

loc_000E08E9: ;
    ecx = MEM32(0x69E4DC);
    PUSH32(esp, 0x69E4E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000E08FA: ;
    esp = esp + 8;

loc_000E08FD: ;
    edx = MEM32(esp + 0x74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7C);
    eax = 0xC0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000E090E: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, edi)) goto loc_000E0CC2; /* je: equal / zero */

loc_000E091B: ;
    SET_LO8(eax, MEM8(esp + 0x64));
    SET_LO8(ecx, MEM8(esp + 0x68));
    MEM8(ebp + 0x2C) = 2;
    MEM8(ebx + 0x200A) = LO8(eax);
    SET_LO8(eax, MEM8(0x8497EC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebx + 0x200B) = LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E0942; /* jne: not equal / not zero */

loc_000E093C: ;
    MEM32(ebx) = MEM32(ebx) | 0x20000;

loc_000E0942: ;
    edx = MEM32(ebx);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edx | 0x10000;
    MEM32(ebx) = edx;
    SET_LO8(eax, MEM8(ebx));
    edx = MEM32(esp + 0x6C);
    MEM32(ebx + 0x2034) = edx;
    SET_LO8(eax, LO8(eax) & 0xF);
    MEM8(ebp + 0x2E) = LO8(eax);
    MEM32(ebp + 0x30) = ebx;
    MEM8(ebp + 0x35) = 1;
    MEM8(ebp + 0x45) = 0;
    MEM8(ebp + 0x34) = 1;
    SET_LO16(ecx, MEM16(ebx + 0x202E));
    MEM16(ebp + 0x36) = LO16(ecx);
    MEM16(ebp + 0x38) = LO16(edi);
    MEM8(ebp + 0x40) = 0;
    MEMF(ebp + 0x50) = xmm0; /* movss */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    MEMF(ebp + 0x64) = xmm0; /* movss */

loc_000E0991: ;
    ecx = MEM32(ebx + 4);
    SET_LO16(eax, MEM16(ecx));
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000E09A3; /* je: equal / zero */

loc_000E099D: ;
    if (CMP_NE(LO16(eax), 0xA)) goto loc_000E09AB; /* jne: not equal / not zero */

loc_000E09A3: ;
    ecx = ecx + 2;
    MEM32(ebx + 4) = ecx;
    goto loc_000E0991;

loc_000E09AB: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_000E2230(); /* call 0x000E2230 */

loc_000E09B5: ;
    edx = eax;
    MEM32(ebp + 0x48) = eax;
    PUSH32(esp, 0); sub_000E22B0(); /* call 0x000E22B0 */

loc_000E09BF: ;
    edx = MEM32(ebp + 0x30);
    MEM8(edx + 0x2009) = LO8(eax);
    esi = MEM32(ebp + 0x30);
    ecx = MEM32(esi + 4);
    SET_LO16(eax, MEM16(ecx));
    (void)0; /* cmp LO16(eax), LO16(edi) - flags set for next jcc */
    edx = 1;
    if (CMP_EQ(LO16(eax), LO16(edi))) goto loc_000E09F3; /* je: equal / zero */

loc_000E09DB: ;
    goto loc_000E09E0;

    /* nop */

loc_000E09E0: ;
    if (CMP_NE(LO16(eax), 0xBD)) goto loc_000E09E7; /* jne: not equal / not zero */

loc_000E09E6: ;
    edx++;

loc_000E09E7: ;
    SET_LO16(eax, MEM16(ecx + 2));
    ecx = ecx + 2;
    if (CMP_NE(LO16(eax), LO16(edi))) goto loc_000E09E0; /* jne: not equal / not zero */

loc_000E09F3: ;
    eax = esp + 0x40;
    MEM8(esi + 0x2008) = LO8(edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, 0); sub_000E01A0(); /* call 0x000E01A0 */

loc_000E0A06: ;
    edx = MEM32(ebp + 0x48);
    ecx = 9;
    esi = eax;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = ebp + 0x9C;
    ecx = 9;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_000E0A3D; /* je: equal / zero */

loc_000E0A31: ;
    eax = edx;

loc_000E0A33: ;
    eax = eax + 2;
    ecx++;
    if (CMP_NE(MEM16(eax), 0)) goto loc_000E0A33; /* jne: not equal / not zero */

loc_000E0A3D: ;
    esi = MEM32(ebx + 0x2038);
    if (TEST_NZ(esi, esi)) goto loc_000E0A60; /* jne: not equal / not zero */

loc_000E0A47: ;
    eax = MEM32(ebx + 0x203C);
    if (TEST_NZ(eax, eax)) goto loc_000E0A60; /* jne: not equal / not zero */

loc_000E0A51: ;
    eax = MEM32(ebx + 0x2040);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (TEST_Z(eax, eax)) goto loc_000E0A65; /* je: equal / zero */

loc_000E0A60: ;
    MEM8(esp + 0x13) = 0;

loc_000E0A65: ;
    eax = MEM32(ebp + 0x30);
    edx = MEM32(eax + 0x2038);
    eax = MEM32(edx * 4 + 0x76F0F8);
    MEM32(ebx + 0x2048) = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E0A8A; /* je: equal / zero */

loc_000E0A83: ;
    eax = ecx + ecx * 2;
    eax = eax << 1;
    goto loc_000E0AB0;

loc_000E0A8A: ;
    ecx = ZX8(MEM8(ebx + 0x2009));
    edx = MEM32(esp + 0x74);
    ebx = MEM32(ebx + 0x2040);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x203C);
    eax = esi;
    PUSH32(esp, 0); sub_00055980(); /* call 0x00055980 */

loc_000E0AA9: ;
    ebx = MEM32(esp + 0x78);
    esp = esp + 4;

loc_000E0AB0: ;
    MEM32(ebx + 0x2044) = eax;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_000E0ABB: ;
    if (CMP_NE(eax, 2)) goto loc_000E0AE2; /* jne: not equal / not zero */

loc_000E0AC0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E0AE2; /* je: equal / zero */

loc_000E0AC8: ;
    xmm0 = (float)(int32_t)MEM32(ebx + 0x2044); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(ebx + 0x2044) = eax;

loc_000E0AE2: ;
    ecx = MEM32(ebp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F3110(); /* call 0x001F3110 */

loc_000E0AEB: ;
    edx = MEM32(ebp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DFD90(); /* call 0x000DFD90 */

loc_000E0AF5: ;
    eax = MEM32(ebx + 0x2044);
    esp = esp + 0xC;
    if (CMP_LE(eax, 0xE10)) goto loc_000E0B3A; /* jle: less or equal (signed <=) */

loc_000E0B05: ;
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_000E0B0E: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x74) = eax;
    fp_push((double)SMEM32(esp + 0x74)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_000E0B23; /* jge: greater or equal (signed >=) */

loc_000E0B1D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000E0B23: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E0B34: ;
    MEM32(ebx + 0x2044) = eax;

loc_000E0B3A: ;
    PUSH32(esp, 0); sub_001F3600(); /* call 0x001F3600 */

loc_000E0B3F: ;
    edx = MEM32(ebp + 0x30);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ebx + 8;
    MEM32(ebp + 0x4C) = ecx;
    MEMF(edx + 0x200C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x30);
    MEMF(eax + 0x2010) = xmm0; /* movss */
    eax = MEM32(ebp + 0xBC);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x3C) = xmm0; /* movss */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E0B84; /* je: equal / zero */

loc_000E0B76: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649948); /* mulss */
    goto loc_000E0B8C;

loc_000E0B84: ;
    xmm0 = MEMF(0x648E40); /* movss */

loc_000E0B8C: ;
    edx = MEM32(ebp + 0x4C);
    MEMF(0x6B3F00) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000E2280(); /* call 0x000E2280 */

loc_000E0B9C: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    edx = MEM32(ebp + 0x4C);
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(eax, 4)) goto loc_000E0BE4; /* jbe: below or equal (unsigned <=) */

loc_000E0BA8: ;
    esi = esp + 0x18;
    edi = esp + 0x74;
    PUSH32(esp, 0); sub_000E22E0(); /* call 0x000E22E0 */

loc_000E0BB5: ;
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    xmm1 = MEMF(0x648EC8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000E0BDA; /* jbe: below or equal (unsigned <=) */

loc_000E0BD5: ;
    MEMF(ebp + 0x60) = xmm1; /* movss */

loc_000E0BDA: ;
    xmm0 = MEMF(0x649428); /* movss */
    goto loc_000E0C23;

loc_000E0BE4: ;
    esi = esp + 0x74;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_000E22E0(); /* call 0x000E22E0 */

loc_000E0BF1: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    (void)0; /* cmp MEM32(esp + 0x18), 4 - flags set for next jcc */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    if (CMP_NE(MEM32(esp + 0x18), 4)) goto loc_000E0C1B; /* jne: not equal / not zero */

loc_000E0C11: ;
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    goto loc_000E0C23;

loc_000E0C1B: ;
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */

loc_000E0C23: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebp + 0x64) = xmm0; /* movss */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E0C55; /* je: equal / zero */

loc_000E0C31: ;
    xmm1 = MEMF(ebp + 0x60); /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x64); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x64) = xmm1; /* movss */

loc_000E0C55: ;
    ecx = MEM32(ebp + 0x30);
    if (TEST_Z(MEM8(ecx), 2)) goto loc_000E0C6F; /* je: equal / zero */

loc_000E0C5D: ;
    xmm0 = MEMF(ebp + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(ebp + 0x60) = xmm0; /* movss */

loc_000E0C6F: ;
    eax = MEM32(ebp + 0x9C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E0C83; /* je: equal / zero */

loc_000E0C7A: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 0x60) = xmm0; /* movss */

loc_000E0C83: ;
    eax = MEM32(ebp + 0xA0);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E0C97; /* je: equal / zero */

loc_000E0C8E: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 0x64) = xmm0; /* movss */

loc_000E0C97: ;
    MEM8(ebp + 0x46) = 0;
    eax = MEM32(ebx);
    edx = ZX8(MEM8(ebx + 0x200A));
    eax = eax & 0xFFFF8FFFu;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    MEM32(ebx) = eax;
    eax = MEM32(0x84A5F8);
    MEM8(edx + eax + 0x3EC) = 1;
    MEM8(ebp + 0x2D) = 0;

loc_000E0CC2: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E0CD0
 * Original: 0x000E0CD0 - 0x000E0D2B (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0CD0: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8470DC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x30);
    SET_LO8(eax, MEM8(esi + 0x2033));
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000E0D2B(); return; } /* je: equal / zero */

loc_000E0CFA: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_000E0D2B(); return; } /* je: equal / zero */

loc_000E0D03: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E0D15; /* je: equal / zero */

loc_000E0D0C: ;
    if (CMP_EQ(MEM32(0x8472A0), 0xD)) { sub_000E0D2B(); return; } /* je: equal / zero */

loc_000E0D15: ;
    MEM8(esi + 0x2008) = 0;
    esi = ebp;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000E0D23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_000E1790
 * Original: 0x000E1790 - 0x000E17E7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E1790: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    ecx = 0x5F0CA0;
    eax = 0; /* xor self */
    SET_LO8(edx, 1);

loc_000E17A4: ;
    esi = MEM32(edi + 0x64);
    if (TEST_Z(esi, esi)) goto loc_000E17B3; /* je: equal / zero */

loc_000E17AB: ;
    if (CMP_EQ(MEM8(edi + 0x10B), LO8(edx))) { sub_000E17E7(); return; } /* je: equal / zero */

loc_000E17B3: ;
    edi = edi + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_000E17A4; /* jl: less (signed <) */

loc_000E17C1: ;
    xmm0 = MEMF(0x64994C); /* movss */
    POP32(esp, edi);
    MEMF(0x6B3F04) = xmm0; /* movss */
    xmm0 = MEMF(0x58BD48); /* movss */
    POP32(esp, esi);
    MEMF(0x6B3F08) = xmm0; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000E1880
 * Original: 0x000E1880 - 0x000E2225 (2469 bytes, 584 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1880: ;
    SET_LO8(eax, MEM8(0x847150));
    esp = esp - 0x34;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E2221; /* jne: not equal / not zero */

loc_000E1890: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax);
    eax = eax >> 2;
    eax = eax & 1;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_000E1790(); /* call 0x000E1790 */

loc_000E18A9: ;
    SET_LO8(eax, MEM8(edi + 0x2D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E2220; /* je: equal / zero */

loc_000E18B4: ;
    SET_LO8(eax, MEM8(0x776578));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E2220; /* je: equal / zero */

loc_000E18C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(eax));
    eax = MEM32(0x69E4B8);
    ebp++;
    ecx = ebp;
    ecx = ecx << 6;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    PUSH32(esp, esi);
    esi = MEM32(0x69E490);
    SET_LO16(edx, MEM16(esi + 0xE));
    SET_LO16(ebx, MEM16(esi + 0xC));
    MEM8(esp + 0x3A) = LO8(ecx);
    SET_LO16(ecx, MEM16(eax + 0xC));
    MEM16(esp + 0x20) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0xE));
    eax = MEM32(edi + 0x30);
    MEM16(esp + 0x14) = LO16(ecx);
    (void)0; /* test MEM8(eax), 2 - flags set for next jcc */
    MEM8(0x801758) = 0;
    MEM8(0x801759) = 0;
    MEM8(0x80175A) = 0;
    MEM8(esp + 0x3D) = 0;
    MEM16(esp + 0x10) = LO16(edx);
    ecx = esp + 0x30;
    if (TEST_Z(MEM8(eax), 2)) goto loc_000E192A; /* je: equal / zero */

loc_000E1924: ;
    esi = MEM32(0x69E4A4);

loc_000E192A: ;
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E192F: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(edi + 0x60) - sets EFLAGS */
    if ((xmm1 <= MEMF(edi + 0x60))) goto loc_000E193D; /* jbe: below or equal (unsigned <=) */

loc_000E1938: ;
    MEMF(edi + 0x60) = xmm1; /* movss */

loc_000E193D: ;
    xmm2 = MEMF(edi + 0x60); /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000E1954; /* jbe: below or equal (unsigned <=) */

loc_000E194F: ;
    MEMF(edi + 0x60) = xmm0; /* movss */

loc_000E1954: ;
    /* comiss xmm1, MEMF(edi + 0x64) - sets EFLAGS */
    if ((xmm1 <= MEMF(edi + 0x64))) goto loc_000E195F; /* jbe: below or equal (unsigned <=) */

loc_000E195A: ;
    MEMF(edi + 0x64) = xmm1; /* movss */

loc_000E195F: ;
    xmm1 = MEMF(edi + 0x64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000E196E; /* jbe: below or equal (unsigned <=) */

loc_000E1969: ;
    MEMF(edi + 0x64) = xmm0; /* movss */

loc_000E196E: ;
    xmm4 = MEMF(edi + 0x60); /* movss */
    xmm4 = xmm4 * MEMF(0x648CE0); /* mulss */
    eax = ZX16(MEM16(esp + 0x20));
    xmm5 = MEMF(0x648D14); /* movss */
    ecx = ZX16(LO16(ebx));
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / xmm7; /* divss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC90); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM16(esp + 0x36) = LO16(edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 / xmm0; /* divss */
    xmm0 = MEMF(edi + 0x50); /* movss */
    edx = esp + 0x18;
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm6 = xmm6 * MEMF(edi + 0x64); /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC8C); /* mulss */
    PUSH32(esp, eax);
    ecx = (int32_t)xmm0; /* cvttss2si */
    eax = esp + 0x38;
    MEMF(esp + 0x34) = xmm7; /* movss */
    MEM16(esp + 0x40) = LO16(ecx);
    PUSH32(esp, 0); sub_00359610(); /* call 0x00359610 */

loc_000E19FB: ;
    fp_push(MEMF(edi + 0x80)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm0 = MEMF(edi + 0x64); /* movss */
    eax = ZX16(MEM16(esp + 0x1C));
    xmm0 = xmm0 + xmm5; /* addss */
    /* fld st(0) */
    xmm0 = xmm0 / MEMF(esp + 0x24); /* divss */
    /* FPU: fcos  */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC8C); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = xmm5 / xmm7; /* divss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(edi + 0x60); /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm4 = xmm4 / xmm7; /* divss */
    xmm4 = xmm4 * MEMF(edi + 0x50); /* mulss */
    xmm4 = xmm4 * MEMF(0x64AC90); /* mulss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    MEM16(esp + 0x3E) = LO16(ecx);
    ecx = ZX16(MEM16(esp + 0x18));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    esp = esp + 8;
    MEM16(esp + 0x38) = LO16(edx);
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(edi + 0x60)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edi + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_push(MEMF(edi + 0x64)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(edi + 0x30);
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edi + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(edx));
    if (TEST_Z(LO8(eax), 2)) goto loc_000E1B22; /* je: equal / zero */

loc_000E1AEA: ;
    eax = ZX8(MEM8(edi + 0x41));
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E1B01: ;
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esp + 0x3A) = LO8(ecx);
    eax = 0; /* xor self */
    ecx = 0x69E4A0;
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_000E1B1A: ;
    esi = MEM32(0x69E4A4);
    goto loc_000E1B34;

loc_000E1B22: ;
    eax = 0; /* xor self */
    ecx = 0x69E48C;
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_000E1B2E: ;
    esi = MEM32(0x69E490);

loc_000E1B34: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E1B3D: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_000E1B67; /* jbe: below or equal (unsigned <=) */

loc_000E1B4E: ;
    xmm0 = MEMF(0x648D88); /* movss */
    /* comiss xmm0, MEMF(edi + 0x80) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x80))) goto loc_000E1B67; /* jbe: below or equal (unsigned <=) */

loc_000E1B5F: ;
    SET_LO8(eax, MEM8(esp + 0x3D));
    SET_LO8(eax, LO8(eax) & 0xFD);
    goto loc_000E1B6D;

loc_000E1B67: ;
    SET_LO8(eax, MEM8(esp + 0x3D));
    SET_LO8(eax, LO8(eax) | 2);

loc_000E1B6D: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    /* comiss xmm0, MEMF(0x648DE0) - sets EFLAGS */
    MEM8(esp + 0x3D) = LO8(eax);
    if ((xmm0 <= MEMF(0x648DE0))) goto loc_000E1B97; /* jbe: below or equal (unsigned <=) */

loc_000E1B82: ;
    xmm0 = MEMF(0x64AC88); /* movss */
    /* comiss xmm0, MEMF(edi + 0x80) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x80))) goto loc_000E1B97; /* jbe: below or equal (unsigned <=) */

loc_000E1B93: ;
    SET_LO8(eax, LO8(eax) | 1);
    goto loc_000E1B9D;

loc_000E1B97: ;
    SET_LO8(eax, MEM8(esp + 0x3D));
    SET_LO8(eax, LO8(eax) & 0xFE);

loc_000E1B9D: ;
    edx = MEM32(edi + 0x30);
    MEM8(esp + 0x3D) = LO8(eax);
    if (TEST_Z(MEM8(edx), 2)) goto loc_000E1CFB; /* je: equal / zero */

loc_000E1BAD: ;
    if (CMP_NE(MEM8(edi + 0x35), 1)) goto loc_000E1BBF; /* jne: not equal / not zero */

loc_000E1BB3: ;
    eax = MEM32(edi + 0x84);
    MEM32(edi + 0x98) = eax;

loc_000E1BBF: ;
    eax = 0; /* xor self */
    ecx = 0x69E4C8;
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_000E1BCB: ;
    esi = MEM32(0x69E4CC);
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E1BDA: ;
    ecx = ZX8(MEM8(edi + 0x42));
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E1BF1: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = (uint32_t)((int32_t)edx >> 8);
    /* comiss xmm0, MEMF(0x648DE0) - sets EFLAGS */
    xmm0 = MEMF(edi + 0x68); /* movss */
    MEM8(esp + 0x3A) = LO8(edx);
    PUSH32(esp, ecx);
    if ((xmm0 <= MEMF(0x648DE0))) goto loc_000E1C58; /* jbe: below or equal (unsigned <=) */

loc_000E1C15: ;
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    xmm0 = xmm0 - MEMF(edi + 0x98); /* subss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x98); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(edi + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    goto loc_000E1C99;

loc_000E1C58: ;
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm0 = xmm0 - MEMF(edi + 0x98); /* subss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x98); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(edi + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);

loc_000E1C99: ;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_00356750(); /* call 0x00356750 */

loc_000E1CA2: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x3E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM16(esp + 0x3E) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = ZX8(MEM8(edi + 0x43));
    MEM32(esp + 0x24) = edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esp = esp + 8;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM16(esp + 0x38) = LO16(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E1CDA: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM8(esp + 0x3A) = LO8(eax);
    eax = 0; /* xor self */
    ecx = 0x69E4C8;
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_000E1CF3: ;
    esi = MEM32(0x69E4CC);
    goto loc_000E1D0D;

loc_000E1CFB: ;
    eax = 0; /* xor self */
    ecx = 0x69E4B4;
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_000E1D07: ;
    esi = MEM32(0x69E4B8);

loc_000E1D0D: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E1D16: ;
    ebx = MEM32(esp + 0x24);
    if (TEST_Z(ebx, ebx)) goto loc_000E1D37; /* je: equal / zero */

loc_000E1D1E: ;
    MEM8(0x801758) = 0;
    MEM8(0x801759) = 0;
    MEM8(0x80175A) = 0;
    SET_LO8(eax, 0x55);
    goto loc_000E1D66;

loc_000E1D37: ;
    eax = MEM32(edi + 0x30);
    SET_LO8(ecx, MEM8(eax + 0x2030));
    SET_LO8(edx, MEM8(eax + 0x2031));
    SET_LO8(eax, MEM8(eax + 0x2032));
    MEM8(0x801758) = LO8(eax);
    MEM8(0x80174C) = 1;
    MEM8(0x80175A) = LO8(ecx);
    MEM8(0x801759) = LO8(edx);
    SET_LO8(eax, 0x70);

loc_000E1D66: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM8(esp + 0x3A) = LO8(ecx);
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_000E1D99; /* jbe: below or equal (unsigned <=) */

loc_000E1D84: ;
    xmm0 = MEMF(0x648D88); /* movss */
    /* comiss xmm0, MEMF(edi + 0x80) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x80))) goto loc_000E1D99; /* jbe: below or equal (unsigned <=) */

loc_000E1D95: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000E1D9B;

loc_000E1D99: ;
    SET_LO8(eax, 2);

loc_000E1D9B: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    /* comiss xmm0, MEMF(0x648DE0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648DE0))) goto loc_000E1DC1; /* jbe: below or equal (unsigned <=) */

loc_000E1DAC: ;
    xmm0 = MEMF(0x64AC88); /* movss */
    /* comiss xmm0, MEMF(edi + 0x80) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x80))) goto loc_000E1DC1; /* jbe: below or equal (unsigned <=) */

loc_000E1DBD: ;
    SET_LO8(eax, LO8(eax) | 1);
    goto loc_000E1DC3;

loc_000E1DC1: ;
    SET_LO8(eax, LO8(eax) & 0xFE);

loc_000E1DC3: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x60); /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC90); /* mulss */
    ecx = MEM32(edi + 0x30);
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x64); /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC8C); /* mulss */
    MEM8(esp + 0x3D) = LO8(eax);
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x38) = LO16(eax);
    eax = MEM32(ecx);
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEM16(esp + 0x36) = LO16(edx);
    ecx = esp + 0x30;
    if (TEST_Z(LO8(eax), 2)) goto loc_000E1EBD; /* je: equal / zero */

loc_000E1E1A: ;
    esi = MEM32(0x69E4CC);
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E1E25: ;
    edx = ZX8(MEM8(edi + 0x42));
    xmm0 = MEMF(edi + 0x6C); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    eax = MEM32(edi + 0x98);
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    edx = (uint32_t)((int32_t)edx >> 8);
    PUSH32(esp, eax);
    eax = esp + 0x38;
    MEM8(esp + 0x42) = LO8(edx);
    PUSH32(esp, 0); sub_00356750(); /* call 0x00356750 */

loc_000E1E54: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x3E);
    esi = MEM32(0x69E4CC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM16(esp + 0x3E) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esp = esp + 8;
    ecx = esp + 0x30;
    MEM16(esp + 0x38) = LO16(eax);
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E1E84: ;
    ecx = ZX8(MEM8(edi + 0x43));
    xmm0 = MEMF(edi + 0x80); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    /* comiss xmm0, MEMF(0x648DE0) - sets EFLAGS */
    MEM8(esp + 0x3A) = LO8(ecx);
    if ((xmm0 <= MEMF(0x648DE0))) goto loc_000E1EB0; /* jbe: below or equal (unsigned <=) */

loc_000E1EA3: ;
    edx = MEM32(edi + 0x6C);
    eax = MEM32(edi + 0x68);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_000E2158;

loc_000E1EB0: ;
    ecx = MEM32(edi + 0x6C);
    edx = MEM32(edi + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_000E2158;

loc_000E1EBD: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_000E1F25; /* je: equal / zero */

loc_000E1EC1: ;
    eax = 0; /* xor self */
    esi = 0x58DBE4;
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_000E1ECD: ;
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_000E1ED7: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    esp = esp - 8;
    /* comiss xmm0, MEMF(0x648DE0) - sets EFLAGS */
    xmm0 = MEMF(edi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x68); /* movss */
    eax = esp + 0x38;
    if ((xmm0 <= MEMF(0x648DE0))) goto loc_000E1F15; /* jbe: below or equal (unsigned <=) */

loc_000E1F05: ;
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp) = xmm0; /* movss */
    goto loc_000E215C;

loc_000E1F15: ;
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    MEMF(esp) = xmm0; /* movss */
    goto loc_000E215C;

loc_000E1F25: ;
    esi = MEM32(0x69E4B8);
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E1F30: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    /* comiss xmm0, MEMF(0x648DE0) - sets EFLAGS */
    ecx = MEM32(edi + 0xB4);
    if ((xmm0 <= MEMF(0x648DE0))) goto loc_000E2053; /* jbe: below or equal (unsigned <=) */

loc_000E1F4B: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000E202F; /* je: equal / zero */

loc_000E1F54: ;
    eax = MEM32(edi + 0xB8);
    if (CMP_LE(eax & eax, 0)) goto loc_000E202F; /* jle: less or equal (signed <=) */

loc_000E1F62: ;
    xmm0 = MEMF(edi + 0x70); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x74); /* addss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648CF0); /* mulss */
    SET_LO8(eax, MEM8(esp + 0x3D));
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM16(esp + 0x38) = LO16(ecx);
    if ((xmm2 <= xmm0)) goto loc_000E1FC4; /* jbe: below or equal (unsigned <=) */

loc_000E1FC0: ;
    SET_LO8(eax, LO8(eax) | 1);
    goto loc_000E1FC6;

loc_000E1FC4: ;
    SET_LO8(eax, LO8(eax) & 0xFE);

loc_000E1FC6: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEM8(esp + 0x3D) = LO8(eax);
    if ((xmm2 < xmm1)) goto loc_000E1FD7; /* jb: below (unsigned <) */

loc_000E1FCF: ;
    MEMF(esp + 0x14) = xmm2; /* movss */
    goto loc_000E200F;

loc_000E1FD7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = MEMF(0x64AC84); /* movss */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push(1.0); /* fld1 */
    /* FPU: fpatan  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E2003; /* ja: above (unsigned >) */

loc_000E1FFB: ;
    xmm0 = MEMF(0x649ACC); /* movss */

loc_000E2003: ;
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000E200F: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_00356790(); /* call 0x00356790 */

loc_000E2027: ;
    esp = esp + 0xC;
    goto loc_000E2164;

loc_000E202F: ;
    xmm0 = MEMF(edi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x68); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    goto loc_000E2153;

loc_000E2053: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000E2134; /* je: equal / zero */

loc_000E205C: ;
    eax = MEM32(edi + 0xB8);
    if (CMP_LE(eax & eax, 0)) goto loc_000E2134; /* jle: less or equal (signed <=) */

loc_000E206A: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    xmm0 = MEMF(edi + 0x70); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x74); /* addss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648CF0); /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEM16(esp + 0x38) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x3D));
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if ((xmm2 <= xmm0)) goto loc_000E20CC; /* jbe: below or equal (unsigned <=) */

loc_000E20C8: ;
    SET_LO8(eax, LO8(eax) | 1);
    goto loc_000E20CE;

loc_000E20CC: ;
    SET_LO8(eax, LO8(eax) & 0xFE);

loc_000E20CE: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEM8(esp + 0x3D) = LO8(eax);
    if ((xmm2 < xmm1)) goto loc_000E20DF; /* jb: below (unsigned <) */

loc_000E20D7: ;
    MEMF(esp + 0x14) = xmm2; /* movss */
    goto loc_000E2117;

loc_000E20DF: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = MEMF(0x64AC84); /* movss */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push(1.0); /* fld1 */
    /* FPU: fpatan  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E210B; /* ja: above (unsigned >) */

loc_000E2103: ;
    xmm0 = MEMF(0x649ACC); /* movss */

loc_000E210B: ;
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000E2117: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_00356790(); /* call 0x00356790 */

loc_000E212F: ;
    esp = esp + 0xC;
    goto loc_000E2164;

loc_000E2134: ;
    xmm0 = MEMF(edi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x68); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */

loc_000E2153: ;
    MEMF(esp) = xmm0; /* movss */

loc_000E2158: ;
    eax = esp + 0x38;

loc_000E215C: ;
    PUSH32(esp, 0); sub_00356750(); /* call 0x00356750 */

loc_000E2161: ;
    esp = esp + 8;

loc_000E2164: ;
    xmm0 = MEMF(edi + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 / MEMF(esp + 0x2C); /* divss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC90); /* mulss */
    eax = MEM32(edi + 0x30);
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x50); /* mulss */
    xmm0 = xmm0 * MEMF(edi + 0x64); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AC8C); /* mulss */
    MEM16(esp + 0x36) = LO16(ecx);
    (void)0; /* test MEM8(eax), 2 - flags set for next jcc */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x38) = LO16(edx);
    if (TEST_Z(MEM8(eax), 2)) goto loc_000E21CC; /* je: equal / zero */

loc_000E21B6: ;
    ecx = ZX8(MEM8(edi + 0x41));
    esi = MEM32(0x69E4A4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(esp + 0x3A) = LO8(ecx);
    goto loc_000E21D2;

loc_000E21CC: ;
    esi = MEM32(0x69E490);

loc_000E21D2: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_00356430(); /* call 0x00356430 */

loc_000E21DB: ;
    eax = MEM32(edi + 0x74);
    ecx = MEM32(edi + 0x70);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(ebx, ebx)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    SET_LO8(edx, LO8(edx) & 0xAB);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(edx) + 0xAA);
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    MEM8(esp + 0x42) = LO8(edx);
    PUSH32(esp, 0); sub_00356750(); /* call 0x00356750 */

loc_000E21FD: ;
    edx = ZX8(MEM8(edi + 0x40));
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = (uint32_t)((int32_t)edx >> 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_000E2940(); /* call 0x000E2940 */

loc_000E2215: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_000D95F0(); /* call 0x000D95F0 */

loc_000E221D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000E2220: ;
    POP32(esp, edi);

loc_000E2221: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E2230
 * Original: 0x000E2230 - 0x000E2272 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2230(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E2230: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(eax + 4);
    if (CMP_LE(edx & edx, 0)) goto loc_000E2271; /* jle: less or equal (signed <=) */

loc_000E2237: ;
    SET_LO16(ecx, MEM16(eax));
    /* nop */

loc_000E2240: ;
    if (CMP_EQ(LO16(ecx), 0xBD)) goto loc_000E2260; /* je: equal / zero */

loc_000E2247: ;
    goto loc_000E2250;

    /* nop */

loc_000E2250: ;
    eax = eax + 2;
    if (CMP_NE(MEM16(eax), 0xBD)) goto loc_000E2250; /* jne: not equal / not zero */

loc_000E225A: ;
    /* nop */

loc_000E2260: ;
    SET_LO16(ecx, MEM16(eax + 2));
    eax = eax + 2;
    if (CMP_EQ(LO16(ecx), 0xBD)) goto loc_000E2260; /* je: equal / zero */

loc_000E226E: ;
    edx--;
    if ((edx != 0)) goto loc_000E2240; /* jne: not equal / not zero */

loc_000E2271: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2280
 * Original: 0x000E2280 - 0x000E22AB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2280(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E2280: ;
    SET_LO16(ecx, MEM16(edx));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    eax = 1;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_000E22AA; /* je: equal / zero */

loc_000E228D: ;
    /* nop */

loc_000E2290: ;
    if (CMP_EQ(LO16(ecx), 0xBD)) goto loc_000E22AA; /* je: equal / zero */

loc_000E2297: ;
    if (CMP_NE(LO16(ecx), 0xA)) goto loc_000E229E; /* jne: not equal / not zero */

loc_000E229D: ;
    eax++;

loc_000E229E: ;
    SET_LO16(ecx, MEM16(edx + 2));
    edx = edx + 2;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_000E2290; /* jne: not equal / not zero */

loc_000E22AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E22B0
 * Original: 0x000E22B0 - 0x000E22DC (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E22B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E22B0: ;
    SET_LO16(ecx, MEM16(edx));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    eax = 1;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_000E22DB; /* je: equal / zero */

loc_000E22BD: ;
    /* nop */

loc_000E22C0: ;
    if (CMP_EQ(LO16(ecx), 0xBD)) goto loc_000E22DB; /* je: equal / zero */

loc_000E22C7: ;
    if (CMP_NE(LO16(ecx), 0xFE)) goto loc_000E22CF; /* jne: not equal / not zero */

loc_000E22CE: ;
    eax++;

loc_000E22CF: ;
    SET_LO16(ecx, MEM16(edx + 2));
    edx = edx + 2;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_000E22C0; /* jne: not equal / not zero */

loc_000E22DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E22E0
 * Original: 0x000E22E0 - 0x000E23A9 (201 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E22E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E22E0: ;
    eax = 0x2004;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_000E22EA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi) = xmm0; /* movss */
    MEMF(esi) = xmm0; /* movss */
    SET_LO16(eax, MEM16(edx));
    ecx = 0; /* xor self */
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_000E2325; /* je: equal / zero */

loc_000E22FF: ;
    /* nop */

loc_000E2300: ;
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000E2325; /* je: equal / zero */

loc_000E2306: ;
    if (CMP_EQ(ecx, 0xFFF)) { sub_000E23A9(); return; } /* je: equal / zero */

loc_000E2312: ;
    MEM16(esp + ecx * 2 + 4) = LO16(eax);
    edx = edx + 2;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx));
    ecx++;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_000E2300; /* jne: not equal / not zero */

loc_000E2325: ;
    xmm0 = MEMF(0x6499F0); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(0x8076AC);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0x18;
    MEM16(esp + ecx * 2 + 0x18) = 0;
    MEM8(0x8086C5) = 1;
    MEMF(0x8086BC) = xmm0; /* movss */
    MEM32(0x8076AC) = 2;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_000E2369: ;
    esp = esp + 0x10;
    MEM32(0x8076AC) = ebp;
    MEM8(0x8086C5) = 0;
    POP32(esp, ebp);
    xmm0 = MEMF(edi); /* movss */
    xmm1 = MEMF(0x6B3F00); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi) = xmm0; /* movss */
    esp = esp + 0x2004;
    esp += 4; return; /* ret */

}

/**
 * sub_000E23E0
 * Original: 0x000E23E0 - 0x000E240A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23E0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E23E0: ;
    eax = 0x2008;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_000E23EA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x2010);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    MEMF(edi) = xmm0; /* movss */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEMF(ecx) = xmm0; /* movss */
    ebp = 2;
    g_seh_ebp = ebp; sub_000E2410(); return; /* tail jmp 0x000E2410 */

}

/**
 * sub_000E2600
 * Original: 0x000E2600 - 0x000E263F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2600(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E2600: ;
    SET_LO8(eax, MEM8(0x8472E8));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000E263F(); return; } /* jne: not equal / not zero */

loc_000E260C: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x776171));
    edx = MEM32(esp + 0x18);
    MEM8(eax) = LO8(ecx);
    SET_LO8(eax, MEM8(0x776170));
    ecx = MEM32(esp + 0x1C);
    MEM8(edx) = LO8(eax);
    SET_LO8(edx, MEM8(0x77616F));
    eax = MEM32(esp + 0x20);
    MEM8(ecx) = LO8(edx);
    SET_LO8(ecx, MEM8(0x77616E));
    MEM8(eax) = LO8(ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2940
 * Original: 0x000E2940 - 0x000E30E8 (1960 bytes, 472 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2940(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2940: ;
    SET_LO8(ecx, MEM8(0x847150));
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_000E30E3; /* jne: not equal / not zero */

loc_000E2954: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x8472E4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000E30E3; /* je: equal / zero */

loc_000E2961: ;
    eax = MEM32(eax + 0x48);
    if (CMP_EQ(eax, ebx)) goto loc_000E30E3; /* je: equal / zero */

loc_000E296C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_000E2972: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000E30E3; /* je: equal / zero */

loc_000E297D: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    ecx = MEM32(0x8472E4);
    MEM8(0x8472DC) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x35));
    if (CMP_EQ(LO8(eax), 0x20)) goto loc_000E29A3; /* je: equal / zero */

loc_000E2993: ;
    if (CMP_EQ(LO8(eax), 0x10)) goto loc_000E29A3; /* je: equal / zero */

loc_000E2997: ;
    if (CMP_EQ(LO8(eax), 8)) goto loc_000E29A3; /* je: equal / zero */

loc_000E299B: ;
    if (CMP_NE(LO8(eax), 0x40)) goto loc_000E30E3; /* jne: not equal / not zero */

loc_000E29A3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    PUSH32(esp, edi);
    edx = esi;
    PUSH32(esp, 0); sub_000E2280(); /* call 0x000E2280 */

loc_000E29B0: ;
    PUSH32(esp, 0x8472D4);
    PUSH32(esp, esi);
    edi = esp + 0x3C;
    MEM32(0x8472E0) = eax;
    PUSH32(esp, 0); sub_000E23E0(); /* call 0x000E23E0 */

loc_000E29C4: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_000E29CC: ;
    (void)0; /* cmp MEM8(0x7FA275), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(0x8472E4);
    if (CMP_NE(MEM8(0x7FA275), LO8(ebx))) goto loc_000E29F5; /* jne: not equal / not zero */

loc_000E29DA: ;
    edx = MEM32(ecx + 0x30);
    ebp = MEM32(edx + 0x2054);
    edi = MEM32(edx + 0x2050);
    esi = eax;
    esi = esi - ebp;
    edi = edi + esi;
    MEM32(edx + 0x2050) = edi;

loc_000E29F5: ;
    edx = MEM32(ecx + 0x30);
    MEM32(edx + 0x2054) = eax;
    eax = MEM32(ecx + 0x30);
    xmm2 = (float)(int32_t)MEM32(eax + 0x2050); /* cvtsi2ss */
    (void)0; /* cmp MEM8(0x76EC82), LO8(ebx) - flags set for next jcc */
    xmm2 = xmm2 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    if (CMP_EQ(MEM8(0x76EC82), LO8(ebx))) goto loc_000E2A5E; /* je: equal / zero */

loc_000E2A1F: ;
    if (CMP_NE(MEM32(0x8472A0), 0xD)) goto loc_000E2A5E; /* jne: not equal / not zero */

loc_000E2A28: ;
    eax = MEM32(ecx + 0x30);
    if (CMP_NE(MEM32(eax + 0x2044), ebx)) goto loc_000E2A38; /* jne: not equal / not zero */

loc_000E2A33: ;
    xmm2 = 0.0f; /* xorps self = zero */
    goto loc_000E2A80;

loc_000E2A38: ;
    edx = MEM32(ecx + 0x30);
    esi = MEM32(edx + 0x2038);
    esi = MEM32(esi * 4 + 0x76F0F8);
    edi = MEM32(edx + 0x2048);
    xmm0 = (float)(int32_t)MEM32(edx + 0x2044); /* cvtsi2ss */
    esi = esi - edi;
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    goto loc_000E2A7C;

loc_000E2A5E: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x2044);
    if (CMP_NE(edx, ebx)) goto loc_000E2A70; /* jne: not equal / not zero */

loc_000E2A6B: ;
    xmm2 = 0.0f; /* xorps self = zero */
    goto loc_000E2A80;

loc_000E2A70: ;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */

loc_000E2A7C: ;
    xmm2 = xmm2 / xmm0; /* divss */

loc_000E2A80: ;
    edx = MEM32(0x8472E0);
    fp_push((double)SMEM32(0x8472E0)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_000E2A96; /* jge: greater or equal (signed >=) */

loc_000E2A90: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000E2A96: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(ecx + 0x7C); /* movss */
    xmm6 = MEMF(eax + 0x2010); /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    fp_push(MEMF(0x648D10)); /* fld float */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    /* FPU: fsubr dword ptr [ecx + 0x7c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm2 <= xmm0)) goto loc_000E2AD5; /* jbe: below or equal (unsigned <=) */

loc_000E2AD2: ;
    xmm0 = xmm2; /* movaps */

loc_000E2AD5: ;
    xmm5 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_000E2AE3; /* jbe: below or equal (unsigned <=) */

loc_000E2AE0: ;
    xmm0 = xmm5; /* movaps */

loc_000E2AE3: ;
    xmm3 = MEMF(0x8472D4); /* movss */
    xmm3 = xmm3 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 <= xmm4)) goto loc_000E2B09; /* jbe: below or equal (unsigned <=) */

loc_000E2B06: ;
    xmm2 = xmm4; /* movaps */

loc_000E2B09: ;
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_000E2B19; /* jbe: below or equal (unsigned <=) */

loc_000E2B16: ;
    xmm2 = xmm1; /* movaps */

loc_000E2B19: ;
    (void)0; /* cmp edx, 5 - flags set for next jcc */
    xmm1 = MEMF(ecx + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x58); /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_AE(edx, 5)) goto loc_000E2B3E; /* jae: above or equal (unsigned >=) */

loc_000E2B2E: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    MEMF(0x8472D0) = xmm1; /* movss */
    goto loc_000E2B46;

loc_000E2B3E: ;
    MEMF(0x8472D0) = xmm2; /* movss */

loc_000E2B46: ;
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(eax + 0x200C) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x48);
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ecx);
    MEMF(0x8472D8) = xmm0; /* movss */
    edi = 0; /* xor self */
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x17) = 1;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_000E2B76: ;
    edx = eax + eax + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000E2B80: ;
    esp = esp + 8;
    esi = eax;
    MEM8(0x8472E8) = 1;
    ebp = 0; /* xor self */
    edi = edi;

loc_000E2B90: ;
    if (CMP_EQ(esi, ebx)) goto loc_000E30E0; /* je: equal / zero */

loc_000E2B98: ;
    eax = MEM32(0x8472E4);
    ecx = MEM32(eax + 0x4C);
    SET_LO16(edx, MEM16(ecx + ebp));
    SET_LO16(eax, LO16(edx));
    ebp = ebp + 2;
    (void)0; /* cmp LO16(eax), 0xFE - flags set for next jcc */
    MEM16(esi + edi * 2) = LO16(edx);
    if (CMP_NE(LO16(eax), 0xFE)) goto loc_000E2BC0; /* jne: not equal / not zero */

loc_000E2BB4: ;
    MEM16(esi + edi * 2) = 0x20;
    edi++;
    goto loc_000E30BB;

loc_000E2BC0: ;
    if (CMP_EQ(LO16(eax), 0xA)) goto loc_000E2BD7; /* je: equal / zero */

loc_000E2BC6: ;
    if (CMP_EQ(LO16(eax), 0xBD)) goto loc_000E2BD7; /* je: equal / zero */

loc_000E2BCC: ;
    if (CMP_EQ(LO16(eax), LO16(ebx))) goto loc_000E2BD7; /* je: equal / zero */

loc_000E2BD1: ;
    edi++;
    goto loc_000E30BB;

loc_000E2BD7: ;
    xmm0 = MEMF(0x6499F0); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    ecx = esp + 0x30;
    MEM16(esi + edi * 2) = LO16(ebx);
    PUSH32(esp, 0); sub_001F3A50(); /* call 0x001F3A50 */

loc_000E2BF6: ;
    xmm5 = MEMF(0x6B3F00); /* movss */
    SET_LO8(eax, MEM8(esp + 0x1B));
    xmm1 = MEMF(0x8472D4); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    esp = esp + 8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x8472D0); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000E2C54; /* jne: not equal / not zero */

loc_000E2C46: ;
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(0x8472D0) = xmm0; /* movss */
    goto loc_000E2C58;

loc_000E2C54: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_000E2C58: ;
    eax = MEM32(0x8472E4);
    ecx = MEM32(eax + 0x30);
    ecx = MEM32(ecx);
    (void)0; /* test ecx, 0x20000 - flags set for next jcc */
    edx = MEM32(0x8472E0);
    if (TEST_Z(ecx, 0x20000)) goto loc_000E2C95; /* je: equal / zero */

loc_000E2C70: ;
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm3 = MEMF(eax + 0x58); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    goto loc_000E2CF1;

loc_000E2C95: ;
    (void)0; /* cmp edx, 5 - flags set for next jcc */
    xmm2 = MEMF(eax + 0x58); /* movss */
    xmm3 = MEMF(eax + 0x60); /* movss */
    if (CMP_AE(edx, 5)) goto loc_000E2CAE; /* jae: above or equal (unsigned >=) */

loc_000E2CA4: ;
    xmm3 = xmm3 - MEMF(0x648F08); /* subss */
    goto loc_000E2CB6;

loc_000E2CAE: ;
    xmm3 = xmm3 - MEMF(0x648E38); /* subss */

loc_000E2CB6: ;
    (void)0; /* test LO8(ecx), 2 - flags set for next jcc */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm2 = xmm2 - MEMF(0x648D14); /* subss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    if (TEST_Z(LO8(ecx), 2)) goto loc_000E2CEB; /* je: equal / zero */

loc_000E2CDD: ;
    xmm2 = xmm2 + MEMF(0x6490B8); /* addss */
    MEMF(esp + 0x18) = xmm2; /* movss */

loc_000E2CEB: ;
    xmm3 = MEMF(esp + 0x18); /* movss */

loc_000E2CF1: ;
    (void)0; /* test ecx, 0x40000 - flags set for next jcc */
    xmm1 = xmm1 * MEMF(0x648D20); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + MEMF(eax + 0x7C); /* addss */
    if (TEST_Z(ecx, 0x40000)) goto loc_000E2E01; /* je: equal / zero */

loc_000E2D0D: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000E2DCC; /* jbe: below or equal (unsigned <=) */

loc_000E2D16: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(0x8472D8); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 / xmm2; /* divss */

loc_000E2D2D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000E2D41; /* jbe: below or equal (unsigned <=) */

loc_000E2D3B: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000E2D41: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMD(0x64A900)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E2D75; /* ja: above (unsigned >) */

loc_000E2D6C: ;
    if (CMP_AE(edx, 5)) goto loc_000E3095; /* jae: above or equal (unsigned >=) */

loc_000E2D75: ;
    (void)0; /* cmp edx, 5 - flags set for next jcc */
    MEM32(0x807668) = 0xE2600;
    MEM8(0x8086CA) = LO8(ebx);
    MEM8(0x8497B0) = 1;
    MEMF(0x6B9D94) = xmm5; /* movss */
    if (CMP_B(edx, 5)) goto loc_000E2DB6; /* jb: below (unsigned <) */

loc_000E2D99: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E2DA8: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */

loc_000E2DB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    goto loc_000E2F6C;

loc_000E2DCC: ;
    xmm2 = MEMF(eax + 0x7C); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000E2DF6; /* jbe: below or equal (unsigned <=) */

loc_000E2DDA: ;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x8472D8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 / xmm0; /* divss */
    goto loc_000E2D2D;

loc_000E2DF6: ;
    MEMF(esp + 0x14) = xmm4; /* movss */
    goto loc_000E2D41;

loc_000E2E01: ;
    if (TEST_NZ(LO8(ecx), 4)) goto loc_000E2F82; /* jne: not equal / not zero */

loc_000E2E0A: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000E2EA6; /* jbe: below or equal (unsigned <=) */

loc_000E2E13: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(0x8472D8); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 / xmm2; /* divss */

loc_000E2E2A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000E2E3E; /* jbe: below or equal (unsigned <=) */

loc_000E2E38: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000E2E3E: ;
    SET_LO8(ecx, MEM8(esp + 0x48));
    edi = ZX8(LO8(ecx));
    MEM32(esp + 0x30) = edi;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMD(0x64A900)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E2E72; /* ja: above (unsigned >) */

loc_000E2E69: ;
    if (CMP_AE(edx, 5)) goto loc_000E3095; /* jae: above or equal (unsigned >=) */

loc_000E2E72: ;
    MEM32(0x807668) = 0xE2600;
    MEM8(0x8086CA) = LO8(ebx);
    eax = MEM32(eax + 0x30);
    (void)0; /* test MEM8(eax), 2 - flags set for next jcc */
    MEM8(0x8497B0) = 1;
    MEMF(0x6B9D94) = xmm5; /* movss */
    if (TEST_Z(MEM8(eax), 2)) goto loc_000E2F41; /* je: equal / zero */

loc_000E2E9D: ;
    if (CMP_AE(edx, 5)) goto loc_000E2EDB; /* jae: above or equal (unsigned >=) */

loc_000E2EA2: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_000E2EF8;

loc_000E2EA6: ;
    xmm2 = MEMF(eax + 0x7C); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000E2ED0; /* jbe: below or equal (unsigned <=) */

loc_000E2EB4: ;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x8472D8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 / xmm0; /* divss */
    goto loc_000E2E2A;

loc_000E2ED0: ;
    MEMF(esp + 0x14) = xmm4; /* movss */
    goto loc_000E2E3E;

loc_000E2EDB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E2EEA: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */

loc_000E2EF8: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8472D0);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm3 = xmm3 + xmm4; /* addss */
    eax = esi;
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_001F3340(); /* call 0x001F3340 */

loc_000E2F39: ;
    esp = esp + 0x28;
    goto loc_000E3088;

loc_000E2F41: ;
    if (CMP_AE(edx, 5)) goto loc_000E2F4A; /* jae: above or equal (unsigned >=) */

loc_000E2F46: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_000E2F67;

loc_000E2F4A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E2F59: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */

loc_000E2F67: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);

loc_000E2F6C: ;
    edx = MEM32(0x8472D0);
    xmm3 = xmm3 + MEMF(esp + 0x30); /* addss */
    PUSH32(esp, edx);
    xmm3 = xmm3 + xmm4; /* addss */
    goto loc_000E307A;

loc_000E2F82: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000E3012; /* jbe: below or equal (unsigned <=) */

loc_000E2F8B: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(0x8472D8); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 / xmm2; /* divss */

loc_000E2FA2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000E2FB6; /* jbe: below or equal (unsigned <=) */

loc_000E2FB0: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_000E2FB6: ;
    eax = ZX8(MEM8(esp + 0x48));
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMD(0x64A900)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E2FE8; /* ja: above (unsigned >) */

loc_000E2FDF: ;
    if (CMP_AE(edx, 5)) goto loc_000E3095; /* jae: above or equal (unsigned >=) */

loc_000E2FE8: ;
    (void)0; /* cmp edx, 5 - flags set for next jcc */
    MEM32(0x807668) = 0xE2600;
    MEM8(0x8086CA) = LO8(ebx);
    MEM8(0x8497B0) = 1;
    MEMF(0x6B9D94) = xmm5; /* movss */
    if (CMP_AE(edx, 5)) goto loc_000E3047; /* jae: above or equal (unsigned >=) */

loc_000E300C: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    goto loc_000E305C;

loc_000E3012: ;
    xmm2 = MEMF(eax + 0x7C); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000E303C; /* jbe: below or equal (unsigned <=) */

loc_000E3020: ;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x8472D8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 / xmm0; /* divss */
    goto loc_000E2FA2;

loc_000E303C: ;
    MEMF(esp + 0x14) = xmm4; /* movss */
    goto loc_000E2FB6;

loc_000E3047: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E3056: ;
    xmm3 = MEMF(esp + 0x18); /* movss */

loc_000E305C: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    xmm3 = xmm3 + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8472D0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000E307A: ;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_001F31B0(); /* call 0x001F31B0 */

loc_000E3085: ;
    esp = esp + 0x1C;

loc_000E3088: ;
    MEM8(0x8497B0) = LO8(ebx);
    MEM8(0x8086CA) = 1;

loc_000E3095: ;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_000E309A: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(0x8472D0); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    edi = 0; /* xor self */
    eax++;
    MEMF(0x8472D0) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;

loc_000E30BB: ;
    edx = MEM32(esp + 0x24);
    if (CMP_B(edx, MEM32(0x8472E0))) goto loc_000E2B90; /* jb: below (unsigned <) */

loc_000E30CB: ;
    PUSH32(esp, esi);
    MEM8(0x8472E8) = LO8(ebx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_000E30D7: ;
    esp = esp + 4;
    MEM32(0x807668) = ebx;

loc_000E30E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000E30E3: ;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E30F0
 * Original: 0x000E30F0 - 0x000E34E4 (1012 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E30F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000E30F0: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    /* comiss xmm6, MEMF(edi + 0x60) - sets EFLAGS */
    if ((xmm6 <= MEMF(edi + 0x60))) goto loc_000E3101; /* jbe: below or equal (unsigned <=) */

loc_000E30FC: ;
    MEMF(edi + 0x60) = xmm6; /* movss */

loc_000E3101: ;
    xmm1 = MEMF(edi + 0x60); /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000E3118; /* jbe: below or equal (unsigned <=) */

loc_000E3113: ;
    MEMF(edi + 0x60) = xmm0; /* movss */

loc_000E3118: ;
    /* comiss xmm6, MEMF(edi + 0x64) - sets EFLAGS */
    if ((xmm6 <= MEMF(edi + 0x64))) goto loc_000E3123; /* jbe: below or equal (unsigned <=) */

loc_000E311E: ;
    MEMF(edi + 0x64) = xmm6; /* movss */

loc_000E3123: ;
    xmm1 = MEMF(edi + 0x64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000E3132; /* jbe: below or equal (unsigned <=) */

loc_000E312D: ;
    MEMF(edi + 0x64) = xmm0; /* movss */

loc_000E3132: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(eax);
    (void)0; /* test HI8(ecx), HI8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (((int32_t)(HI8(ecx) & HI8(ecx)) >= 0)) goto loc_000E325D; /* jns: not sign (positive) */

loc_000E3141: ;
    ecx = MEM32(eax + 0x2020);
    xmm0 = MEMF(ecx); /* movss */
    edx = MEM32(0x84A13C);
    xmm1 = MEMF(0x648E54); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(edx + 0x1F4); /* mulss */
    MEMF(edi + 0x84) = xmm0; /* movss */
    ecx = MEM32(eax + 0x2024);
    xmm0 = MEMF(ecx); /* movss */
    edx = MEM32(0x84A13C);
    esi = edi + 0x84;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm3 = xmm3 * MEMF(edx + 0x1F8); /* mulss */
    ebx = edi + 0x88;
    MEMF(ebx) = xmm3; /* movss */
    ecx = MEM32(eax + 0x2028);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_000E31C0; /* jbe: below or equal (unsigned <=) */

loc_000E31BB: ;
    xmm0 = xmm6; /* movaps */
    goto loc_000E31C8;

loc_000E31C0: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000E31C8; /* jbe: below or equal (unsigned <=) */

loc_000E31C5: ;
    xmm0 = xmm2; /* movaps */

loc_000E31C8: ;
    xmm0 = xmm0 * MEMF(0x6490B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x649124); /* addss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    ecx = MEM32(edi + 0xAC);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    MEMF(edi + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(ebx) = xmm0; /* movss */
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000E3209; /* je: equal / zero */

loc_000E3203: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    goto loc_000E321C;

loc_000E3209: ;
    ecx = MEM32(edi + 0xA4);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000E3220; /* je: equal / zero */

loc_000E3214: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(esi); /* addss */

loc_000E321C: ;
    MEMF(esi) = xmm1; /* movss */

loc_000E3220: ;
    ecx = MEM32(edi + 0xB0);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000E3235; /* je: equal / zero */

loc_000E322B: ;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebx) = xmm0; /* movss */
    goto loc_000E324C;

loc_000E3235: ;
    ecx = MEM32(edi + 0xA8);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_000E324C; /* je: equal / zero */

loc_000E3240: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebx) = xmm1; /* movss */

loc_000E324C: ;
    if (TEST_Z(MEM32(eax), 0x10000)) goto loc_000E341F; /* je: equal / zero */

loc_000E3258: ;
    goto loc_000E3416;

loc_000E325D: ;
    xmm0 = MEMF(eax + 0x2014); /* movss */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x201C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2018);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    esi = esp + 0x20;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_000E328A: ;
    SET_LO8(eax, MEM8(edi + 0x45));
    xmm4 = MEMF(0x648E6C); /* movss */
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E3309; /* jne: not equal / not zero */

loc_000E329C: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(edi + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(edi + 0x90) = xmm0; /* movss */
    edx = MEM32(0x8470DC);
    eax = MEM32(edx + 4);
    xmm0 = MEMF(eax + 0x5C); /* movss */
    eax = esp + 8;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000E32D5: ;
    ecx = MEM32(edi + 0x30);
    edx = ZX8(MEM8(ecx + 0x200A));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    xmm0 = MEMF(edx + eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(edi + 0x94) = xmm0; /* movss */
    MEM8(edi + 0x45) = 1;

loc_000E3309: ;
    xmm0 = MEMF(edi + 0x94); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    xmm1 = MEMF(edi + 0x8C); /* movss */
    xmm2 = MEMF(edi + 0x90); /* movss */
    xmm3 = MEMF(0x648F60); /* movss */
    esi = edi + 0x84;
    ebx = edi + 0x88;
    MEMF(esi) = xmm1; /* movss */
    MEMF(ebx) = xmm2; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_000E3352; /* jbe: below or equal (unsigned <=) */

loc_000E3348: ;
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_000E3352: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_000E3361; /* jbe: below or equal (unsigned <=) */

loc_000E3357: ;
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_000E3361: ;
    /* comiss xmm0, MEMF(0x648E3C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E3C))) goto loc_000E3373; /* jbe: below or equal (unsigned <=) */

loc_000E336A: ;
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = xmm4; /* movaps */
    goto loc_000E3392;

loc_000E3373: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMD(0x649708)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000E3392; /* jbe: below or equal (unsigned <=) */

loc_000E3383: ;
    xmm3 = MEMF(0x648F64); /* movss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = xmm3; /* movaps */

loc_000E3392: ;
    xmm0 = xmm0 * MEMF(0x6490A4); /* mulss */
    xmm3 = MEMF(0x648D10); /* movss */
    eax = MEM32(edi + 0xAC);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm3 = xmm3 * MEMF(0x6490B4); /* mulss */
    xmm3 = xmm3 + MEMF(0x649124); /* addss */
    xmm3 = xmm3 * MEMF(0x648E18); /* mulss */
    MEMF(edi + 0x80) = xmm3; /* movss */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E33D7; /* je: equal / zero */

loc_000E33D1: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    goto loc_000E33EA;

loc_000E33D7: ;
    eax = MEM32(edi + 0xA4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E33EE; /* je: equal / zero */

loc_000E33E2: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */

loc_000E33EA: ;
    MEMF(esi) = xmm0; /* movss */

loc_000E33EE: ;
    eax = MEM32(edi + 0xB0);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E33FF; /* je: equal / zero */

loc_000E33F9: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    goto loc_000E3412;

loc_000E33FF: ;
    eax = MEM32(edi + 0xA8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E3416; /* je: equal / zero */

loc_000E340A: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm2; /* addss */

loc_000E3412: ;
    MEMF(ebx) = xmm0; /* movss */

loc_000E3416: ;
    eax = edi;
    edx = ebx;
    PUSH32(esp, 0); sub_000E34F0(); /* call 0x000E34F0 */

loc_000E341F: ;
    fp_push(MEMF(edi + 0x80)); /* fld float */
    ecx = MEM32(esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = MEM32(ebx);
    xmm1 = MEMF(edi + 0x64); /* movss */
    MEM32(edi + 0x6C) = edx;
    /* fld st(0) */
    MEM32(edi + 0x68) = ecx;
    /* FPU: fcos  */
    eax = MEM32(0x69E490);
    ecx = ZX16(MEM16(eax + 0xE));
    eax = ZX16(MEM16(eax + 0xC));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x69E4B8);
    edx = ZX16(MEM16(ecx + 0xE));
    ecx = ZX16(MEM16(ecx + 0xC));
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(edi + 0x60); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648E14); /* mulss */
    MEM32(esp + 8) = edx;
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(edi + 0x60)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fisub dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E34BA: ;
    /* FPU: fsin  */
    POP32(esp, esi);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x78) = xmm0; /* movss */
    fp_push(MEMF(edi + 0x64)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    POP32(esp, ebx);
    /* FPU: fisub dword ptr [esp] */
    MEMF(edi + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E34F0
 * Original: 0x000E34F0 - 0x000E35D3 (227 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34F0(void)
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

loc_000E34F0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 0x80)); /* fld float */
    xmm0 = MEMF(eax + 0x60); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    ecx = MEM32(0x69E490);
    ecx = ZX16(MEM16(ecx + 0xC));
    MEMF(esp) = xmm0; /* movss */
    /* FPU: fcos  */
    xmm5 = MEMF(0x6496FC); /* movss */
    xmm6 = MEMF(edx); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp) = ecx;
    ecx = MEM32(0x69E4B8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ZX16(MEM16(ecx + 0xC));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = ecx;
    ecx = MEM32(0x84A13C);
    xmm3 = MEMF(ecx + 0x218); /* movss */
    /* FPU: fdivr dword ptr [eax + 0x60] */
    xmm7 = MEMF(ecx + 0x214); /* movss */
    xmm4 = MEMF(ecx + 0x220); /* movss */
    xmm4 = xmm4 * MEMF(0x6496F4); /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    /* FPU: fimul dword ptr [esp] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 0x220); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64944C); /* movss */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0x64); /* subss */
    xmm7 = xmm7 + xmm0; /* addss */
    /* comiss xmm7, xmm5 - sets EFLAGS */
    if ((xmm7 <= xmm5)) { sub_000E35D3(); return; } /* jbe: below or equal (unsigned <=) */

loc_000E35C0: ;
    xmm3 = MEMF(ecx + 0x214); /* movss */
    xmm3 = xmm3 + MEMF(eax + 0x64); /* addss */
    xmm3 = xmm3 + xmm0; /* addss */
    g_seh_ebp = ebp; sub_000E35D8(); return; /* tail jmp 0x000E35D8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E3630
 * Original: 0x000E3630 - 0x000E3683 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3630(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E3630: ;
    if (TEST_Z(esi, esi)) goto loc_000E3682; /* je: equal / zero */

loc_000E3634: ;
    if (CMP_NE(MEM32(esi), 0x7C)) goto loc_000E3682; /* jne: not equal / not zero */

loc_000E3639: ;
    eax = MEM32(esi + 0x30);
    MEM8(eax + 0x2008) = 0;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E367E; /* jne: not equal / not zero */

loc_000E364C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000E3653: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000E367E; /* jl: less (signed <) */

loc_000E365A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000E3672; /* je: equal / zero */

loc_000E3667: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000E366A: ;
    esp = esp + 4;
    MEM8(esi + 0x35) = 0;
    esp += 4; return; /* ret */

loc_000E3672: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000E367E: ;
    MEM8(esi + 0x35) = 0;

loc_000E3682: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3690
 * Original: 0x000E3690 - 0x000E36AC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3690(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E3690: ;
    if (TEST_Z(eax, eax)) { sub_000E36AC(); return; } /* je: equal / zero */

loc_000E3694: ;
    if (CMP_NE(MEM32(eax), 0x7C)) { sub_000E36AC(); return; } /* jne: not equal / not zero */

loc_000E3699: ;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx) = MEM32(ecx) | 0x100;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx) = MEM32(ecx) & 0xFFFFFBFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000E36B0
 * Original: 0x000E36B0 - 0x000E36C3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E36B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E36B0: ;
    if (TEST_Z(eax, eax)) { sub_000E36C3(); return; } /* je: equal / zero */

loc_000E36B4: ;
    if (CMP_NE(MEM32(eax), 0x7C)) { sub_000E36C3(); return; } /* jne: not equal / not zero */

loc_000E36B9: ;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx) = MEM32(ecx) | 0x500;
    esp += 4; return; /* ret */

}

/**
 * sub_000E36D0
 * Original: 0x000E36D0 - 0x000E3711 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E36D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E36D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x60));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E36EA; /* je: equal / zero */

loc_000E36DC: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x594930), _icall_esp); /* indirect call */
    }

loc_000E36E7: ;
    esp = esp + 4;

loc_000E36EA: ;
    ecx = MEM32(0x7FA20C);
    edx = ZX8(MEM8(esi + 0x61));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + 0x48); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x44); /* addss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) { sub_000E3711(); return; } /* jb: below (unsigned <) */

loc_000E370B: ;
    xmm0 = xmm0 - xmm1; /* subss */
    g_seh_ebp = ebp; sub_000E3720(); return; /* tail jmp 0x000E3720 */

}

/**
 * sub_000E3780
 * Original: 0x000E3780 - 0x000E3882 (258 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3780(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E3780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM16(esi + 0x58), 0)) goto loc_000E3880; /* je: equal / zero */

loc_000E3790: ;
    if (CMP_EQ(MEM16(esi + 0x5A), 0)) goto loc_000E3880; /* je: equal / zero */

loc_000E379B: ;
    SET_LO8(eax, MEM8(esi + 0x69));
    if (TEST_Z(LO8(eax), 1)) goto loc_000E3815; /* je: equal / zero */

loc_000E37A2: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_000E37B6; /* je: equal / zero */

loc_000E37A6: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x54);
    eax = eax << 2;
    eax = (uint32_t)((int32_t)eax >> 5);
    MEM32(esp + 8) = eax;
    goto loc_000E37BE;

loc_000E37B6: ;
    MEM32(esp + 8) = 0;

loc_000E37BE: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    ecx = MEM32(edi);
    MEM32(0x801860) = ecx;
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax + 4;
    if (TEST_NZ(edx, edx)) goto loc_000E37E2; /* jne: not equal / not zero */

loc_000E37D6: ;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000E37DF: ;
    esp = esp + 8;

loc_000E37E2: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    SET_LO16(edx, MEM16(ecx + 0xC));
    MEM16(0x801864) = LO16(edx);
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    SET_LO16(edx, MEM16(ecx + 0xE));
    MEM16(0x801866) = LO16(edx);
    SET_LO8(eax, MEM8(edi + 4));
    MEM8(0x801870) = LO8(eax);
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_000E3814: ;
    POP32(esp, edi);

loc_000E3815: ;
    SET_LO8(ecx, MEM8(esi + 0x69));
    eax = ZX8(LO8(ecx));
    eax = eax >> 4;
    eax = eax & 1;
    if (TEST_Z(LO8(ecx), 4)) goto loc_000E3829; /* je: equal / zero */

loc_000E3826: ;
    eax = eax | 2;

loc_000E3829: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_000E3831; /* je: equal / zero */

loc_000E382E: ;
    eax = eax | 4;

loc_000E3831: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x54);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x65));
    PUSH32(esp, ebx);
    ebx = (int32_t)MEMF(esi + 0x44); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esi + 0x5C));
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x5E));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5A);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C);
    esp = esp - 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00359AA0(); /* call 0x00359AA0 */

loc_000E387C: ;
    esp = esp + 0x28;
    POP32(esp, ebx);

loc_000E3880: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3890
 * Original: 0x000E3890 - 0x000E3EB3 (1571 bytes, 353 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3890(void)
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

loc_000E3890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(0x7FA20C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    esi = MEM32(esp + 0x10);
    xmm1 = MEMF(esi + 0xD4); /* movss */
    xmm3 = MEMF(esi + 0xCC); /* movss */
    xmm4 = MEMF(esi + 0xC8); /* movss */
    xmm5 = MEMF(esi + 0xD0); /* movss */
    SET_LO8(ebx, MEM8(esi + 0x108));
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xBC); /* addss */
    MEMF(esi + 0xBC) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esi + 0xD8); /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xC0); /* addss */
    MEMF(esi + 0xC0) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xDC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xC4); /* addss */
    MEMF(esi + 0xC4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 0xB0); /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(esi + 0xB8); /* addss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + MEMF(esi + 0xB4); /* addss */
    MEMF(esi + 0xB0) = xmm4; /* movss */
    MEMF(esi + 0xB8) = xmm5; /* movss */
    MEMF(esi + 0xCC) = xmm3; /* movss */
    MEMF(esi + 0xB4) = xmm6; /* movss */
    if (TEST_Z(LO8(ebx), 1)) goto loc_000E39A4; /* je: equal / zero */

loc_000E396C: ;
    SET_LO8(ecx, MEM8(esi + 0x107));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(eax, LO8(ecx));
    MEM8(esi + 0x107) = LO8(ecx);
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000E3984: ;
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(esi + 0xF4); /* mulss */
    MEMF(esi + 0xE4) = xmm0; /* movss */

loc_000E39A4: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_000E3A10; /* je: equal / zero */

loc_000E39A9: ;
    eax = MEM32(esi + 0xD0);
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000E39BC: ;
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    fp_push(MEMF(esi + 0xC8)); /* fld float */
    xmm7 = MEMF(0x648D78); /* movss */
    /* fld st(1) */
    xmm0 = xmm0 * xmm7; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esi + 0xC0) = xmm0; /* movss */
    /* fld st(0) */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 - xmm3; /* subss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000E3A01: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    esp = esp + 8;
    MEMF(esi + 0xBC) = xmm0; /* movss */

loc_000E3A10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = (int32_t)xmm6; /* cvttss2si */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    PUSH32(esp, 0);
    ecx = (int32_t)xmm5; /* cvttss2si */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = (int32_t)xmm4; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000E3A5E: ;
    ecx = ZX8(MEM8(esi + 0x109));
    eax = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    eax = eax + ecx;
    esp = esp + 0x38;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esi + 0xB4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0xB4))) goto loc_000E3E6A; /* jbe: below or equal (unsigned <=) */

loc_000E3A81: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(esi + 0xCC) - sets EFLAGS */
    if ((xmm1 <= MEMF(esi + 0xCC))) goto loc_000E3E6A; /* jbe: below or equal (unsigned <=) */

loc_000E3A91: ;
    SET_LO8(eax, MEM8(esi + 0x10C));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEMF(esi + 0xB4) = xmm0; /* movss */
    if (CMP_NE(LO8(eax), 1)) goto loc_000E3BA0; /* jne: not equal / not zero */

loc_000E3AA7: ;
    edi = 4;
    /* nop */

loc_000E3AB0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AB5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3ABA: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3ABF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AC4: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AC9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3ACE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AD3: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AD8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3ADD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AE2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AE7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3AEC: ;
    edi--;
    if ((edi != 0)) goto loc_000E3AB0; /* jne: not equal / not zero */

loc_000E3AEF: ;
    eax = ZX8(MEM8(esi + 0x109));
    edx = MEM32(esi + 0xB8);
    xmm1 = MEMF(esi + 0xB4); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + MEMF(0x648E5C); /* addss */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3B480000);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB0);
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ecx);
    ecx = 0x14;
    PUSH32(esp, 0); sub_000DBF20(); /* call 0x000DBF20 */

loc_000E3B40: ;
    ecx = ZX8(MEM8(esi + 0x109));
    eax = MEM32(esi + 0xB8);
    xmm1 = MEMF(esi + 0xB4); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    esp = esp + 0x1C;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + MEMF(0x648F38); /* addss */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xB0);
    PUSH32(esp, 0x3B480000);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, edx);
    ecx = 0xA;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000DBF20(); /* call 0x000DBF20 */

loc_000E3B94: ;
    esp = esp + 0x1C;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000E3B9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E3BA0: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_000E3BF8; /* jne: not equal / not zero */

loc_000E3BA4: ;
    edi = 3;
    /* nop */

loc_000E3BB0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BB5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BBA: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BBF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BC4: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BC9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BCE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BD3: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BD8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BDD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BE2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BE7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3BEC: ;
    edi--;
    if ((edi != 0)) goto loc_000E3BB0; /* jne: not equal / not zero */

loc_000E3BEF: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000E3BF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E3BF8: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_000E3C93; /* jne: not equal / not zero */

loc_000E3C00: ;
    edi = 2;

loc_000E3C05: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C0A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C0F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C14: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C19: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C1E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C23: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C28: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C2D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C32: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C37: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C3C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3C41: ;
    edi--;
    if ((edi != 0)) goto loc_000E3C05; /* jne: not equal / not zero */

loc_000E3C44: ;
    xmm0 = MEMF(esi + 0xCC); /* movss */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    edx = (int32_t)MEMF(esi + 0xB0); /* cvttss2si */
    edi = (int32_t)MEMF(esi + 0xB8); /* cvttss2si */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = (int32_t)MEMF(esi + 0xB4); /* cvttss2si */
    MEMF(esp) = xmm0; /* movss */
    ecx = ecx + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 4;
    PUSH32(esp, 0); sub_000DEC20(); /* call 0x000DEC20 */

loc_000E3C87: ;
    esp = esp + 0x10;

loc_000E3C8A: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000E3C8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E3C93: ;
    if (CMP_NE(LO8(eax), 6)) goto loc_000E3CE4; /* jne: not equal / not zero */

loc_000E3C97: ;
    POP32(esp, edi);
    MEMF(esi + 0xD0) = xmm1; /* movss */
    MEMF(esi + 0xCC) = xmm1; /* movss */
    MEMF(esi + 0xC8) = xmm1; /* movss */
    MEMF(esi + 0xDC) = xmm1; /* movss */
    MEMF(esi + 0xD8) = xmm1; /* movss */
    MEMF(esi + 0xD4) = xmm1; /* movss */
    MEMF(esi + 0xFC) = xmm1; /* movss */
    MEM8(esi + 0x10C) = 0;
    MEM32(esi + 0xEC) = 0x3C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E3CE4: ;
    if (CMP_EQ(LO8(eax), 8)) goto loc_000E3C8A; /* je: equal / zero */

loc_000E3CE8: ;
    xmm2 = MEMF(esi + 0xF8); /* movss */
    xmm2 = xmm2 * MEMF(esi + 0xC8); /* mulss */
    xmm3 = MEMF(0x648CE0); /* movss */
    MEMF(esi + 0xC8) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xF8); /* movss */
    xmm2 = xmm2 * MEMF(esi + 0xD0); /* mulss */
    MEMF(esi + 0xD0) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xFC); /* movss */
    xmm2 = xmm2 * MEMF(esi + 0xCC); /* mulss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    MEMF(esi + 0xCC) = xmm2; /* movss */
    if ((xmm3 <= xmm2)) goto loc_000E3D72; /* jbe: below or equal (unsigned <=) */

loc_000E3D3D: ;
    MEMF(esi + 0xC8) = xmm1; /* movss */
    MEMF(esi + 0xCC) = xmm1; /* movss */
    MEMF(esi + 0xD0) = xmm1; /* movss */
    MEMF(esi + 0xD4) = xmm1; /* movss */
    MEMF(esi + 0xD8) = xmm1; /* movss */
    MEMF(esi + 0xDC) = xmm1; /* movss */
    goto loc_000E3E3A;

loc_000E3D72: ;
    edx = MEM32(esi + 0xB8);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, 0x39F00000);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    ecx = 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000DBF20(); /* call 0x000DBF20 */

loc_000E3DB4: ;
    SET_LO8(eax, MEM8(esi + 0x10C));
    esp = esp + 0x1C;
    if (CMP_NE(LO8(eax), 2)) goto loc_000E3DF0; /* jne: not equal / not zero */

loc_000E3DC1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3DC6: ;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_000E3E3A; /* jns: not sign (positive) */

loc_000E3DCA: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E3DCF: ;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64A8F8); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    goto loc_000E3E3A;

loc_000E3DF0: ;
    if (CMP_NE(LO8(eax), 5)) goto loc_000E3E3A; /* jne: not equal / not zero */

loc_000E3DF4: ;
    xmm0 = MEMF(esi + 0xCC); /* movss */
    edx = (int32_t)MEMF(esi + 0xB4); /* cvttss2si */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    eax = (int32_t)MEMF(esi + 0xB0); /* cvttss2si */
    edi = (int32_t)MEMF(esi + 0xB8); /* cvttss2si */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    edx = edx + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 4;
    PUSH32(esp, 0); sub_000DEC20(); /* call 0x000DEC20 */

loc_000E3E37: ;
    esp = esp + 0x10;

loc_000E3E3A: ;
    xmm0 = MEMF(esi + 0x100); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xD4); /* mulss */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x100); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xDC); /* mulss */
    MEMF(esi + 0xDC) = xmm0; /* movss */

loc_000E3E6A: ;
    ecx = MEM32(esi + 0xEC);
    if (TEST_Z(ecx, ecx)) goto loc_000E3EAF; /* je: equal / zero */

loc_000E3E74: ;
    eax = MEM32(0x7FA20C);
    ecx = ecx - eax;
    if (CMP_G(ecx & ecx, 0)) goto loc_000E3EA9; /* jg: greater (signed >) */

loc_000E3E7F: ;
    ecx = eax * 4;
    eax = ZX8(MEM8(esi + 0x105));
    eax = eax - ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x10D) = 2;
    if (CMP_LE(eax & eax, 0)) goto loc_000E3C8A; /* jle: less or equal (signed <=) */

loc_000E3E9E: ;
    ecx = 1;
    MEM8(esi + 0x105) = LO8(eax);

loc_000E3EA9: ;
    MEM32(esi + 0xEC) = ecx;

loc_000E3EAF: ;
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
 * sub_000E3EC0
 * Original: 0x000E3EC0 - 0x000E3FFE (318 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3EC0(void)
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

loc_000E3EC0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x46);
    edi = edi + eax;
    if (CMP_G(edi, ecx)) goto loc_000E3F30; /* jg: greater (signed >) */

loc_000E3EDA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000E3F24: ;
    ecx = (int32_t)MEMF(esp + 0x5C); /* cvttss2si */
    esp = esp + 0x38;
    MEM32(esi + 0x30) = ecx;

loc_000E3F30: ;
    eax = MEM32(esi + 0x30);
    if (CMP_G(edi, eax)) goto loc_000E3FC8; /* jg: greater (signed >) */

loc_000E3F3B: ;
    edi = edi - eax;
    (void)0; /* cmp edi, 0x32 - flags set for next jcc */
    MEM16(esi + 0x54) = 0;
    if (CMP_GE(edi, 0x32)) goto loc_000E3FF8; /* jge: greater or equal (signed >=) */

loc_000E3F4C: ;
    SET_LO16(ecx, MEM16(esi + 0x40));
    SET_LO16(edx, MEM16(esi + 0x3C));
    SET_LO16(eax, LO16(eax) + 0xA);
    MEM16(esp + 0x12) = LO16(eax);
    eax = ZX8(MEM8(esi + 0x57));
    MEM8(esp + 0x1D) = LO8(eax);
    eax = eax << 0xC;
    MEM16(esp + 0x14) = LO16(ecx);
    ecx = eax;
    MEM16(esp + 0x10) = LO16(edx);
    eax = 0xCD9A6735u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xC);
    eax = edx;
    eax = eax >> 0x1F;
    eax = edx + eax + 0xCC;
    MEM16(esp + 0x16) = LO16(eax);
    MEM16(esp + 0x18) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 4));
    esi = esp + 8;
    MEM32(esp + 8) = 0x58DB54;
    MEM16(esp + 0xC) = 0;
    MEM16(esp + 0xE) = 0x100;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1C) = 3;
    PUSH32(esp, 0); sub_000D9D00(); /* call 0x000D9D00 */

loc_000E3FC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000E3FC8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x42);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    xmm0 = MEMF(0x649760); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi + 0x42) = LO16(edx);
    MEM16(esi + 0x44) = LO16(ecx);

loc_000E3FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E4000
 * Original: 0x000E4000 - 0x000E40AE (174 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4000(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E4000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_L(MEM16(esi + 0x30), 0x300)) goto loc_000E40AC; /* jl: less (signed <) */

loc_000E4011: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E4018: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(MEM8(esi + 0x41));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19);
    ecx = eax;
    eax = 0x80808081u;
    edi = edx;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, edx);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    PUSH32(esp, 0);
    eax = eax >> 0x1F;
    PUSH32(esp, 0x100);
    ecx = edx + eax + 0x19;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E4055: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    esp = esp - 0x10;
    eax = eax - 0xA;
    edi = edi + 0x20;
    ebx = 0; /* xor self */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x38);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = 0; /* xor self */
    edx = 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000EA510(); /* call 0x000EA510 */

loc_000E40A7: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000E40AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E40B0
 * Original: 0x000E40B0 - 0x000E4105 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E40B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E40B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi + 0x42));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = ZX8(MEM8(esi + 0x3D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000E40E0; /* je: equal / zero */

loc_000E40C0: ;
    if (CMP_EQ(eax, 0xFF)) goto loc_000E40F6; /* je: equal / zero */

loc_000E40C7: ;
    edx = MEM32(0x7FA20C);
    edx = edx << 4;
    eax = eax + edx;
    if (CMP_LE(eax, 0xFF)) goto loc_000E40F3; /* jle: less or equal (signed <=) */

loc_000E40D9: ;
    eax = 0xFF;
    goto loc_000E40F3;

loc_000E40E0: ;
    if (TEST_Z(eax, eax)) goto loc_000E40F6; /* je: equal / zero */

loc_000E40E4: ;
    edx = MEM32(0x7FA20C);
    edx = edx << 2;
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_000E40F3; /* jns: not sign (positive) */

loc_000E40F1: ;
    eax = 0; /* xor self */

loc_000E40F3: ;
    MEM8(esi + 0x3D) = LO8(eax);

loc_000E40F6: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000E4105(); return; } /* jne: not equal / not zero */

loc_000E40FA: ;
    if (TEST_NZ(eax, eax)) { sub_000E4105(); return; } /* jne: not equal / not zero */

loc_000E40FE: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E41B0
 * Original: 0x000E41B0 - 0x000E43D9 (553 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E41B0(void)
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

loc_000E41B0: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp - 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E43D5; /* jne: not equal / not zero */

loc_000E41C0: ;
    eax = MEM32(0x762E40);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm6 = MEMF(0x648D14); /* movss */
    if (TEST_NZ(eax, eax)) goto loc_000E41D9; /* jne: not equal / not zero */

loc_000E41D1: ;
    xmm6 = MEMF(0x6496F0); /* movss */

loc_000E41D9: ;
    ecx = MEM32(0x8470DC);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    ecx = ecx + eax;
    eax = MEM32(ecx + 4);
    xmm0 = MEMF(eax + 0x34); /* movss */
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000E41FE: ;
    xmm0 = MEMF(esp); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm3 = MEMF(ecx + 0x3BC); /* movss */
    xmm4 = MEMF(0x648F60); /* movss */
    if ((xmm1 <= xmm0)) goto loc_000E4221; /* jbe: below or equal (unsigned <=) */

loc_000E421B: ;
    xmm0 = xmm0 + xmm4; /* addss */
    goto loc_000E422A;

loc_000E4221: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_000E422A; /* jb: below (unsigned <) */

loc_000E4226: ;
    xmm0 = xmm0 - xmm4; /* subss */

loc_000E422A: ;
    xmm5 = MEMF(0x648E6C); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_000E423B; /* jbe: below or equal (unsigned <=) */

loc_000E4237: ;
    xmm0 = xmm0 - xmm4; /* subss */

loc_000E423B: ;
    xmm0 = xmm0 - MEMF(edx * 4 + 0x771B5C); /* subss */
    xmm2 = MEMF(edx * 4 + 0x771B4C); /* movss */
    xmm7 = MEMF(0x648F64); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edx * 4 + 0x771B5C); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(edx * 4 + 0x771B5C) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    if ((xmm1 < xmm5)) goto loc_000E4286; /* jb: below (unsigned <) */

loc_000E4280: ;
    xmm2 = xmm2 - xmm4; /* subss */
    goto loc_000E4292;

loc_000E4286: ;
    /* comiss xmm7, xmm1 - sets EFLAGS */
    if ((xmm7 < xmm1)) goto loc_000E4292; /* jb: below (unsigned <) */

loc_000E428B: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */

loc_000E4292: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edx * 4 + 0x771B4C); /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(edx * 4 + 0x771B4C) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_000E42BA; /* jbe: below or equal (unsigned <=) */

loc_000E42B4: ;
    xmm0 = xmm0 + xmm4; /* addss */
    goto loc_000E42C3;

loc_000E42BA: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_000E42CC; /* jb: below (unsigned <) */

loc_000E42BF: ;
    xmm0 = xmm0 - xmm4; /* subss */

loc_000E42C3: ;
    MEMF(edx * 4 + 0x771B4C) = xmm0; /* movss */

loc_000E42CC: ;
    xmm1 = MEMF(edx * 4 + 0x771B4C); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp) = xmm3; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    if ((xmm0 < xmm5)) goto loc_000E42F8; /* jb: below (unsigned <) */

loc_000E42EC: ;
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    goto loc_000E4309;

loc_000E42F8: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 < xmm0)) goto loc_000E4309; /* jb: below (unsigned <) */

loc_000E42FD: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp) = xmm0; /* movss */

loc_000E4309: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E3C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000E434E; /* jbe: below or equal (unsigned <=) */

loc_000E4324: ;
    /* comiss xmm2, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm2 <= MEMF(esp + 4))) goto loc_000E4330; /* jbe: below or equal (unsigned <=) */

loc_000E432B: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_000E4335;

loc_000E4330: ;
    eax = 1;

loc_000E4335: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E3C); /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(edx * 4 + 0x771B4C) = xmm3; /* movss */

loc_000E434E: ;
    xmm0 = MEMF(edx * 4 + 0x771B4C); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000E4362; /* jbe: below or equal (unsigned <=) */

loc_000E435C: ;
    xmm0 = xmm0 + xmm4; /* addss */
    goto loc_000E4374;

loc_000E4362: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_000E437D; /* jb: below (unsigned <) */

loc_000E4367: ;
    xmm0 = MEMF(edx * 4 + 0x771B4C); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */

loc_000E4374: ;
    MEMF(edx * 4 + 0x771B4C) = xmm0; /* movss */

loc_000E437D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = edx + edx * 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax << 2;
    /* fld st(0) */
    /* FPU: fsin  */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx * 4 + 0x771B4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x773C7C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x773C80) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x773C84) = (float)fp_top(); fp_popp(); /* fstp */

loc_000E43D5: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E43E0
 * Original: 0x000E43E0 - 0x000E43FA (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E43E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E43E0: ;
    eax = MEM32(esi + 0x68);
    esp = esp - 0xF0;
    if (CMP_EQ(eax, 0x20)) { sub_000E43FA(); return; } /* je: equal / zero */

loc_000E43EE: ;
    eax = 1;
    esp = esp + 0xF0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E4770
 * Original: 0x000E4770 - 0x000E4791 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4770: ;
    esp = esp - 0x210;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x218);
    if (CMP_EQ(MEM32(ebp + 0x68), 0x20)) { sub_000E4791(); return; } /* je: equal / zero */

loc_000E4784: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5050
 * Original: 0x000E5050 - 0x000E5070 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5050(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E5050: ;
    eax = MEM32(edi + 0x68);
    esp = esp - 0xEC;
    PUSH32(esp, esi);
    esi = 0x20;
    if (CMP_EQ(eax, esi)) { sub_000E5070(); return; } /* je: equal / zero */

loc_000E5063: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0xEC;
    esp += 4; return; /* ret */

}

/**
 * sub_000E54A0
 * Original: 0x000E54A0 - 0x000E54F4 (84 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E54A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E54A0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    /* comiss xmm0, MEMF(0x648D74) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D74))) { sub_000E54F4(); return; } /* jbe: below or equal (unsigned <=) */

loc_000E54CA: ;
    ecx = MEM32(eax + 0x94);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx & 0xFFFFFF90u;
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEM32(eax + 0x94) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5580
 * Original: 0x000E5580 - 0x000E5B0D (1421 bytes, 306 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5580: ;
    esp = esp - 0xE8;
    eax = MEM32(0x84B4A0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = eax + 0x23A0;
    PUSH32(esp, esi);
    eax = eax + 0x2418;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E55A7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648D14); /* movss */
    ebx = 0; /* xor self */
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x8C) = 0x12DE8;
    MEM32(esp + 0x94) = 1;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM8(esp + 0xA0) = 0xFF;
    MEM32(esp + 0xA4) = 0x157100;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM32(esp + 0xC4) = ebx;
    MEM8(esp + 0xC8) = 2;
    MEM32(esp + 0xCC) = ebx;
    MEM8(esp + 0xD0) = LO8(ebx);
    edx = edx + 0xD;
    (void)0; /* cmp LO16(edx), LO16(ebx) - flags set for next jcc */
    MEM16(esp + 0xD2) = 0xC;
    MEM16(esp + 0xD4) = 0x15;
    MEM32(esp + 0xEC) = ebx;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xF4) = eax;
    MEMF(esp + 0x80) = xmm0; /* movss */
    if (CMP_LE(LO16(edx), LO16(ebx))) goto loc_000E57FF; /* jle: less or equal (signed <=) */

loc_000E56A8: ;
    ebp = ZX16(LO16(edx));
    goto loc_000E56B0;

    /* nop */

loc_000E56B0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E56B5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x28;
    MEM32(esp + 0x90) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E56CC: ;
    xmm0 = xmm0 * MEMF(0x64AC80); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AC7C); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E56ED: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5704: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5713: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5722: ;
    xmm5 = MEMF(0x64AC78); /* movss */
    xmm6 = MEMF(0x64AC74); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5745: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E575B: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_000E5767; /* jns: not sign (positive) */

loc_000E5762: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_000E5767: ;
    esi = MEM32(esp + eax * 4 + 0x10);
    edi = esp + 0x58;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_000E5774: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5779: ;
    xmm0 = xmm0 * MEMF(0x64AC70); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AC6C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5794: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x2D;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E57A5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x78;
    edx = edx - 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000E57BA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E57BF: ;
    edx = MEM32(esp + 0x108);
    xmm0 = xmm0 * MEMF(0x64AC68); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AC64); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0xB4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000E57F2: ;
    esp = esp + 0x2C;
    ebp--;
    if ((ebp != 0)) goto loc_000E56B0; /* jne: not equal / not zero */

loc_000E57FC: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_000E57FF: ;
    ebp = 2;
    MEM32(esp + 0x4C) = 0x303;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = 4;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E582D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x595D18);
    ecx = MEM32(0x595D1C);
    xmm1 = MEMF(0x64AC60); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x30) = 0x15;
    MEM8(esp + 0x31) = 4;
    MEM8(esp + 0x32) = LO8(ebx);
    MEM32(esp + 0x50) = 0x6C;
    MEM16(esp + 0x54) = 0x23;
    MEM16(esp + 0x56) = 7;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = ecx;
    esi = edx;
    edx = MEM32(0x595D14);
    esi = esi + 0x11;
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E589A: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E58A6: ;
    xmm1 = MEMF(0x64AC5C); /* movss */
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    edi = edi | 0x82CE07;
    (void)0; /* cmp LO16(esi), LO16(ebx) - flags set for next jcc */
    MEM32(esp + 0x90) = edi;
    MEM32(esp + 0x94) = ebx;
    MEM8(esp + 0x98) = 0x10;
    MEM8(esp + 0x99) = 0xFF;
    MEM8(esp + 0x9A) = 0xFF;
    MEM8(esp + 0x9B) = LO8(ebx);
    MEM8(esp + 0x9C) = 0xFF;
    MEMF(esp + 0x20) = xmm1; /* movss */
    if (CMP_LE(LO16(esi), LO16(ebx))) goto loc_000E5A67; /* jle: less or equal (signed <=) */

loc_000E5900: ;
    edx = ZX16(LO16(esi));
    MEM32(esp + 0x1C) = edx;

loc_000E5907: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E590C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    MEM16(esp + 0x24) = LO16(edx);
    MEM16(esp + 0x58) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5926: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x33) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5939: ;
    xmm0 = xmm0 * MEMF(0x64AC58); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AC54); /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E595A: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_000E5966; /* jns: not sign (positive) */

loc_000E5961: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_000E5966: ;
    esi = MEM32(esp + eax * 4 + 0x10);
    edi = esp + 0x68;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_000E5973: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5978: ;
    xmm0 = xmm0 * MEMF(0x64AC50); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AC4C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5993: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E59A4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x88;
    edx = edx - 0x59;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000E59BC: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E59C4: ;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x64AC48); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AC44); /* subss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = 4;
    MEM32(esp + 0x44) = ebp;
    MEM32(esp + 0x48) = ebx;
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_000E5A5A; /* jge: greater or equal (signed >=) */

loc_000E5A05: ;
    edx = MEM32(esp + 0xFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6C);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000E5A19: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_000E5A5A; /* je: equal / zero */

loc_000E5A20: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x20);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM8(eax + 0x154) = LO8(ebx);
    MEM8(eax + 0x160) = LO8(ebx);
    MEM32(0x771CD0) = ecx;
    MEM32(eax + 0x170) = edx;

loc_000E5A5A: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    if ((MEM32(esp + 0x1C) != 0)) goto loc_000E5907; /* jne: not equal / not zero */

loc_000E5A64: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_000E5A67: ;
    esi = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm2 = MEMF(0x648D2C); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0xFC);
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, eax);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x59D944); /* movss */
    PUSH32(esp, 5);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_000E5AB7: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    PUSH32(esp, 0x14);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 0xF);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x3A8163D3);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x447D4000);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_000E5AFF: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xE8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5B10
 * Original: 0x000E5B10 - 0x000E5B2F (31 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000E5B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO16(edi, LO16(eax));
    if (TEST_NZ(esi, esi)) { sub_000E5B2F(); return; } /* jne: not equal / not zero */

loc_000E5B27: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5CD0
 * Original: 0x000E5CD0 - 0x000E5EC4 (500 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5CD0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000E5EB1; /* je: equal / zero */

loc_000E5CE7: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) goto loc_000E5EB1; /* jne: not equal / not zero */

loc_000E5CF6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5CFB: ;
    xmm0 = xmm0 * MEMF(edi + 0x6C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x68); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x64); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0x64) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_000E5EBE; /* jbe: below or equal (unsigned <=) */

loc_000E5D24: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0); sub_000E64D0(); /* call 0x000E64D0 */

loc_000E5D31: ;
    xmm0 = MEMF(0x6499B8); /* movss */
    xmm1 = MEMF(edi + 0x144); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000E5DC7; /* jbe: below or equal (unsigned <=) */

loc_000E5D4F: ;
    esi = ebx;
    PUSH32(esp, 0); sub_001120F0(); /* call 0x001120F0 */

loc_000E5D56: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E5D6A; /* jne: not equal / not zero */

loc_000E5D5A: ;
    xmm0 = MEMF(0x6499B8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    goto loc_000E5DC4;

loc_000E5D6A: ;
    ebx = edi + 0x7C;
    PUSH32(esp, 0xC6147000u);
    PUSH32(esp, 0);
    eax = ebx;
    esi = esp + 0x24;
    MEM32(0x780AB0) = 0x5F38D8;
    MEM32(0x6C0210) = 0xC9;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_0029F7F0(); /* call 0x0029F7F0 */

loc_000E5DA4: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E5DB1; /* je: equal / zero */

loc_000E5DAB: ;
    xmm0 = MEMF(ebx); /* movss */
    goto loc_000E5DB9;

loc_000E5DB1: ;
    xmm0 = MEMF(0x6499B8); /* movss */

loc_000E5DB9: ;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_000E5DC4: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_000E5DC7: ;
    ebp = MEM32(esp + 0x2C);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    esi = edi + 0x8C;

loc_000E5DE3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5DE8: ;
    xmm1 = MEMF(edi + 0x144); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x2C) = 1;
    if ((xmm1 > xmm0)) goto loc_000E5DFF; /* ja: above (unsigned >) */

loc_000E5DFA: ;
    MEM8(esp + 0x2C) = 0;

loc_000E5DFF: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x148));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5E15: ;
    xmm0 = xmm0 * MEMF(edi + 0x140); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x13C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5E30: ;
    ecx = ZX8(MEM8(edi + 0x139));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(edi + 0x138));
    ebx = edx;
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5E4A: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x136);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(edi + 0x134));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E5E62: ;
    xmm0 = xmm0 * MEMF(edi + 0x130); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x12C); /* addss */
    PUSH32(esp, ecx);
    SET_LO8(ecx, LO8(ebx));
    eax = esp + 0x2C;
    edx = esp + 0x38;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000E5ED0(); /* call 0x000E5ED0 */

loc_000E5E87: ;
    xmm0 = MEMF(edi + 0x64); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x1C;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x64) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_000E5DE3; /* ja: above (unsigned >) */

loc_000E5EA9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000E5EB1: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_000E5EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5ED0
 * Original: 0x000E5ED0 - 0x000E6018 (328 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E5ED0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x33) = LO8(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    ecx = MEM32(edx);
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x78) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x88) = ecx;
    ecx = 4;
    MEM32(esp + 0x90) = eax;
    eax = 2;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    MEM32(esp + 0x8C) = edx;
    edx = ZX8(MEM8(ebp + 0x1C));
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x50) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edi = 0; /* xor self */
    ecx = ecx + 0x12;
    MEM16(esp + 0x64) = 1;
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = 0x303;
    MEM16(esp + 0x30) = LO16(ecx);
    MEM16(esp + 0x60) = 0x12;
    MEM16(esp + 0x62) = 0xE;
    MEM8(esp + 0xA4) = 0xF;
    MEM8(esp + 0xA5) = LO8(eax);
    MEM8(esp + 0xA6) = LO8(eax);
    MEM8(esp + 0xA7) = 3;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000E5FD0: ;
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5FD9: ;
    ebx = eax;
    ebx = ebx & 1;
    ebx = ebx << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E5FE5: ;
    eax = eax & 1;
    ebx = ebx | eax;
    eax = MEM32(0x7FA1F8);
    ebx = ebx << 6;
    ebx = ebx | 0x1C207;
    (void)0; /* cmp eax, 0x1D - flags set for next jcc */
    MEM32(esp + 0x9C) = ebx;
    if (CMP_NE(eax, 0x1D)) { sub_000E6018(); return; } /* jne: not equal / not zero */

loc_000E6004: ;
    SET_LO8(eax, 0xC8);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x3E) = 0xB4;
    g_seh_ebp = ebp; sub_000E6104(); return; /* tail jmp 0x000E6104 */

}

/**
 * sub_000E6210
 * Original: 0x000E6210 - 0x000E6242 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6210(void)
{

loc_000E6210: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    eax = ecx + 0x6C;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x170);
    edx = ecx + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = ecx + 0x178;
    eax = ecx + 0x176;
    ecx = ecx + 0x174;
    PUSH32(esp, 0); sub_00106520(); /* call 0x00106520 */

loc_000E623B: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6250
 * Original: 0x000E6250 - 0x000E6461 (529 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6250(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000E6250: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    xmm0 = MEMF(esi + 0x180); /* movss */
    /* comiss xmm0, MEMF(esi + 0x74) - sets EFLAGS */
    SET_LO8(eax, 1);
    if ((xmm0 <= MEMF(esi + 0x74))) goto loc_000E645C; /* jbe: below or equal (unsigned <=) */

loc_000E626C: ;
    xmm0 = MEMF(esi + 0x70); /* movss */
    eax = MEM32(0x7FA1F8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x180); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_000E62D0; /* jne: not equal / not zero */

loc_000E62A5: ;
    if (CMP_NE(MEM8(0x76F0DC), 4)) goto loc_000E62BA; /* jne: not equal / not zero */

loc_000E62AE: ;
    if (CMP_L(MEM32(0x76F0F8), 0x3B6)) goto loc_000E62BE; /* jl: less (signed <) */

loc_000E62BA: ;
    edi = 0; /* xor self */
    goto loc_000E6321;

loc_000E62BE: ;
    xmm0 = MEMF(esi + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    goto loc_000E62E0;

loc_000E62D0: ;
    xmm0 = MEMF(esi + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */

loc_000E62E0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x3B));
    ecx = esi + 0x190;
    MEMF(esp + 0x30) = xmm0; /* movss */
    edi = 0x64;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x220));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00142A60(); /* call 0x00142A60 */

loc_000E6319: ;
    esp = esp + 0x1C;
    edi = 2;

loc_000E6321: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E6326: ;
    xmm0 = xmm0 * MEMF(0x6491E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x649830); /* addss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E634D: ;
    xmm0 = xmm0 * MEMF(0x59D944); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A540); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E636C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    /* FPU: fcos  */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x220));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(0x7FA1F8), 0x1D - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(0x7FA1F8), 0x1D)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E63ED: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000E63F9; /* jns: not sign (positive) */

loc_000E63F4: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000E63F9: ;
    xmm0 = MEMF(esi + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    eax = eax + 3;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x3B));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E641E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x23;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E642F: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x64A53C); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    eax = esp + 0x68;
    ecx = esp + 0x5C;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000E6455: ;
    esp = esp + 0x48;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);

loc_000E645C: ;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E6470
 * Original: 0x000E6470 - 0x000E64AD (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6470(void)
{

loc_000E6470: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x170);
    PUSH32(esp, edi);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edi = esi + 0x178;
    PUSH32(esp, edx);
    eax = esi + 0x176;
    ecx = esi + 0x174;
    PUSH32(esp, 0); sub_00106520(); /* call 0x00106520 */

loc_000E649C: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000E6250(); /* call 0x000E6250 */

loc_000E64A7: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E64B0
 * Original: 0x000E64B0 - 0x000E64B7 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E64B0: ;
    if (TEST_NZ(ecx, ecx)) { sub_000E64B7(); return; } /* jne: not equal / not zero */

loc_000E64B4: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000E64D0
 * Original: 0x000E64D0 - 0x000E65A7 (215 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000E64D0: ;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x78);
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 0x7C);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(edi + 0x80);
    MEM32(ebx + 8) = edx;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000E65A2; /* je: equal / zero */

loc_000E64F8: ;
    eax = MEM32(edi + 0x70);
    (void)0; /* cmp eax, 0x58 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, 0x58)) goto loc_000E656C; /* jne: not equal / not zero */

loc_000E6501: ;
    PUSH32(esp, 0x5F3570);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_002F78F0(); /* call 0x002F78F0 */

loc_000E650F: ;
    PUSH32(esp, 0x5F38CC);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_002F78F0(); /* call 0x002F78F0 */

loc_000E651D: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x20); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    esp = esp + 8;
    POP32(esp, esi);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 8) = xmm1; /* movss */
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000E656C: ;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    ecx = 0x5F0CA0;
    if (CMP_EQ(eax, 0x10)) goto loc_000E6591; /* je: equal / zero */

loc_000E6576: ;
    if (CMP_NE(eax, 0x79)) goto loc_000E6596; /* jne: not equal / not zero */

loc_000E657B: ;
    ecx = 0x5F0DC4;
    PUSH32(esp, ecx);
    esi = ebx;
    PUSH32(esp, 0); sub_002F78F0(); /* call 0x002F78F0 */

loc_000E6588: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_000E6591: ;
    ecx = 0x5F0678;

loc_000E6596: ;
    PUSH32(esp, ecx);
    esi = ebx;
    PUSH32(esp, 0); sub_002F78F0(); /* call 0x002F78F0 */

loc_000E659E: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_000E65A2: ;
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000E65B0
 * Original: 0x000E65B0 - 0x000E65FE (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E65B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_000E65B0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    (void)0; /* cmp MEM8(esi + 0x4C), 2 - flags set for next jcc */
    ebx = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    if (CMP_GE(MEM8(esi + 0x4C), 2)) goto loc_000E65D2; /* jge: greater or equal (signed >=) */

loc_000E65CC: ;
    if (TEST_NZ(MEM8(esi + 0x3A), 8)) goto loc_000E65F5; /* jne: not equal / not zero */

loc_000E65D2: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) { sub_000E65FE(); return; } /* jbe: below or equal (unsigned <=) */

loc_000E65DF: ;
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    /* comiss xmm0, MEMF(0x648F58) - sets EFLAGS */
    MEMF(edi + 8) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648F58))) { sub_000E65FE(); return; } /* jbe: below or equal (unsigned <=) */

loc_000E65F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6680
 * Original: 0x000E6680 - 0x000E69FB (891 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6680: ;
    esp = esp - 0x7C;
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x84);
    eax = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEM32(esp + 0x14) = eax;
    if ((xmm0 > xmm7)) goto loc_000E69F0; /* ja: above (unsigned >) */

loc_000E66AD: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_000E69FB(); return; } /* je: equal / zero */

loc_000E66BA: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(edi + 4))) { sub_000E69FB(); return; } /* jne: not equal / not zero */

loc_000E66C9: ;
    xmm0 = MEMF(0x6493C8); /* movss */
    /* comiss xmm0, MEMF(edi + 0x50) - sets EFLAGS */
    xmm3 = MEMF(0x7FA21C); /* movss */
    if ((xmm0 <= MEMF(edi + 0x50))) goto loc_000E66F4; /* jbe: below or equal (unsigned <=) */

loc_000E66DF: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(0x6493C0); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x50); /* addss */
    MEMF(edi + 0x50) = xmm0; /* movss */

loc_000E66F4: ;
    xmm1 = MEMF(edi + 0x50); /* movss */
    xmm6 = MEMF(0x648D54); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x48); /* addss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x4C); /* addss */
    MEMF(edi + 0x48) = xmm0; /* movss */
    MEMF(edi + 0x4C) = xmm1; /* movss */
    if ((xmm0 <= xmm4)) goto loc_000E69F0; /* jbe: below or equal (unsigned <=) */

loc_000E6735: ;
    xmm3 = xmm3 + MEMF(edi + 0x44); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edi + 0x2C;
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = MEMF(ebp); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    ebx = edi + 0x38;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    edx = esp + 0x74;
    eax = esp + 0x68;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = eax;
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
    ecx = esp + 0x80;
    edx = esp + 0x50;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = edx;
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
    eax = esp + 0x68;
    ecx = esp + 0x5C;
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x50;
    eax = esp + 0x44;
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x2C;
    eax = edx;
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x38;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x44;
    eax = edx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    goto loc_000E68B0;

    /* nop */

loc_000E68B0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    edx = MEM32(esp + 0x1C);
    ecx = eax + eax * 8;
    eax = edx + ecx * 4;
    edx = MEM32(esp + 0x2C);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 8) = edx;
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm7; /* movss */
    MEM8(eax + 0x1C) = 0xFF;
    ecx = MEM32(edi + 0x4C);
    MEM32(eax + 0x20) = ecx;
    SET_LO8(edx, MEM8(esi + 0x4E));
    eax = ZX8(MEM8(esi + 0x41));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(ecx, LO8(edx));
    MEM8(esi + 0x4E) = LO8(edx);
    edx = SX8(LO8(ecx));
    if (CMP_NE(edx, eax)) goto loc_000E691D; /* jne: not equal / not zero */

loc_000E6919: ;
    MEM8(esi + 0x4E) = 0;

loc_000E691D: ;
    SET_LO8(ecx, MEM8(esi + 0x4C));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x4C) = LO8(ecx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x4D));
    if (CMP_NE(MEM8(esi + 0x4E), LO8(ecx))) goto loc_000E6944; /* jne: not equal / not zero */

loc_000E692F: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_000E693F; /* jne: not equal / not zero */

loc_000E693B: ;
    MEM8(esi + 0x4D) = 0;

loc_000E693F: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0x4C) = LO8(edx);

loc_000E6944: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(edi + 0x48); /* movss */
    xmm1 = MEMF(edi + 0x50); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 0x4C); /* addss */
    xmm3 = xmm3 - xmm5; /* subss */
    MEMF(edi + 0x48) = xmm0; /* movss */
    MEMF(edi + 0x4C) = xmm1; /* movss */
    if ((xmm0 > xmm4)) goto loc_000E68B0; /* ja: above (unsigned >) */

loc_000E69C0: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEM32(ebp) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ebp + 4) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    POP32(esp, ebp);
    MEM32(ebx + 8) = ecx;
    MEMF(edi + 0x44) = xmm3; /* movss */
    POP32(esp, ebx);

loc_000E69F0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6A10
 * Original: 0x000E6A10 - 0x000E6E63 (1107 bytes, 296 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6A10(void)
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

loc_000E6A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x144);
    edx = MEM32(eax);
    ecx = MEM32(edi + 0x140);
    MEM32(esp + 0x1C) = edx;
    (void)0; /* cmp MEM8(edi + 0x4C), 1 - flags set for next jcc */
    xmm1 = xmm4; /* movaps */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x44) = ecx;
    if (CMP_LE(MEM8(edi + 0x4C), 1)) goto loc_000E6D73; /* jle: less or equal (signed <=) */

loc_000E6A4C: ;
    (void)0; /* test MEM8(edi + 0x3A), 2 - flags set for next jcc */
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    xmm5 = xmm4; /* movaps */
    if (TEST_Z(MEM8(edi + 0x3A), 2)) goto loc_000E6A70; /* je: equal / zero */

loc_000E6A59: ;
    ecx = esp + 0x24;
    eax = edi + 0x2C;
    edx = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x54) = edx;
    goto loc_000E6AA0;

loc_000E6A70: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000E6A78; /* jns: not sign (positive) */

loc_000E6A73: ;
    ebx = ZX8(MEM8(edi + 0x41));
    ebx--;

loc_000E6A78: ;
    edx = ebx + ebx * 8;
    eax = ecx + edx * 4;
    ecx = esp + 0x24;
    edx = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x54) = edx;
    goto loc_000E6AA0;

loc_000E6A92: ;
    xmm5 = MEMF(esp + 0x20); /* movss */
    goto loc_000E6AA0;

    /* nop */

loc_000E6AA0: ;
    ebx--;
    xmm6 = MEMF(0x648F88); /* movss */
    xmm3 = xmm6; /* movaps */
    if (((int32_t)ebx >= 0)) goto loc_000E6AB3; /* jns: not sign (positive) */

loc_000E6AAE: ;
    ebx = ZX8(MEM8(edi + 0x41));
    ebx--;

loc_000E6AB3: ;
    ecx = MEM32(esp + 0x44);
    eax = ebx + ebx * 8;
    esi = ecx + eax * 4;
    MEM32(esp + 0x18) = esi;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x54);
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
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(0x64A100); /* movss */
    xmm2 = xmm1; /* movaps */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    MEMF(esi + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    if ((xmm2 <= xmm5)) goto loc_000E6C19; /* jbe: below or equal (unsigned <=) */

loc_000E6B41: ;
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000E6BE9; /* jnp: not parity */

loc_000E6B4E: ;
    xmm7 = MEMF(0x648D14); /* movss */
    xmm3 = xmm7; /* movaps */
    edx = esp + 0x24;
    eax = esp + 0x38;
    xmm3 = xmm3 / xmm0; /* divss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x50) = eax;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x58);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm7 = xmm7 * MEMF(esi + 0x18); /* mulss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0x18) = xmm7; /* movss */

loc_000E6BE9: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_EQ(ebx, ecx)) goto loc_000E6C13; /* je: equal / zero */

loc_000E6BF1: ;
    eax = ZX8(MEM8(edi + 0x41));

loc_000E6BF5: ;
    SET_LO8(edx, MEM8(edi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(edi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_000E6C08; /* jne: not equal / not zero */

loc_000E6C04: ;
    MEM8(edi + 0x4D) = 0;

loc_000E6C08: ;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) - 1;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ebx, ecx)) goto loc_000E6BF5; /* jne: not equal / not zero */

loc_000E6C13: ;
    MEMF(esp + 0x20) = xmm5; /* movss */

loc_000E6C19: ;
    xmm0 = MEMF(esi + 0x18); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000E6D59; /* jnp: not parity */

loc_000E6C2B: ;
    /* ucomiss xmm3, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000E6C71; /* jp: parity */

loc_000E6C34: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x18); /* divss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */

loc_000E6C71: ;
    edx = MEM32(esi + 0x18);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0x4100000);
    ecx = 0x68;
    eax = 0x637EEC;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_000E6C90: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0x94;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000E6CBE: ;
    ecx = MEM32(esp + 0x178);
    eax = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_000E6D52; /* je: equal / zero */

loc_000E6CE7: ;
    eax = MEM32(esp + 0x18);
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
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if (CMP_EQ(ebx, eax)) goto loc_000E6D52; /* je: equal / zero */

loc_000E6D29: ;
    edx = ZX8(MEM8(edi + 0x41));
    /* nop */

loc_000E6D30: ;
    SET_LO8(eax, MEM8(edi + 0x4D));
    SET_LO8(eax, LO8(eax) + 1);
    ecx = SX8(LO8(eax));
    MEM8(edi + 0x4D) = LO8(eax);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, edx)) ? 1 : 0); /* sete */
    eax--;
    eax = eax & ecx;
    MEM8(edi + 0x4C) = MEM8(edi + 0x4C) - 1;
    ecx = SX8(LO8(eax));
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM8(edi + 0x4D) = LO8(eax);
    if (CMP_NE(ebx, ecx)) goto loc_000E6D30; /* jne: not equal / not zero */

loc_000E6D52: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x18);

loc_000E6D59: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(ebx, edx)) goto loc_000E6A92; /* jne: not equal / not zero */

loc_000E6D69: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x34);

loc_000E6D73: ;
    if (CMP_LE(MEM8(edi + 0x4C), 1)) goto loc_000E6E57; /* jle: less or equal (signed <=) */

loc_000E6D7D: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(eax + 8); /* movss */
    xmm5 = xmm5 * MEMF(0x649950); /* mulss */
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x64A0FC); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm1 = MEMF(0x648F58); /* movss */
    xmm1 = xmm1 - xmm5; /* subss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm2 = xmm4; /* movaps */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) goto loc_000E6DE0; /* jbe: below or equal (unsigned <=) */

loc_000E6DD8: ;
    MEMF(esp + 0x14) = xmm4; /* movss */
    goto loc_000E6E00;

loc_000E6DE0: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_000E6E00; /* jbe: below or equal (unsigned <=) */

loc_000E6DE5: ;
    MEMF(esp + 0x14) = xmm3; /* movss */
    goto loc_000E6E00;

loc_000E6DED: ;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* nop */

loc_000E6E00: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_000E6E08; /* jns: not sign (positive) */

loc_000E6E03: ;
    ebx = ZX8(MEM8(edi + 0x41));
    ebx--;

loc_000E6E08: ;
    ecx = MEM32(esp + 0x44);
    eax = ebx + ebx * 8;
    xmm1 = MEMF(ecx + eax * 4 + 0x18); /* movss */
    esi = ecx + eax * 4;
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000E6E3D; /* jbe: below or equal (unsigned <=) */

loc_000E6E27: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x34] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_000E6E41;

loc_000E6E3D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_000E6E41: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000E6E4C: ;
    MEM8(esi + 0x1C) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    if (CMP_NE(ebx, edx)) goto loc_000E6DED; /* jne: not equal / not zero */

loc_000E6E57: ;
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
 * sub_000E6E70
 * Original: 0x000E6E70 - 0x000E6F08 (152 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E6E70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7716D4);
    if (TEST_Z(esi, esi)) goto loc_000E6F06; /* je: equal / zero */

loc_000E6E7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_000E6E85: ;
    eax = (uint32_t)(int32_t)SMEM8(0x771758);
    ecx = MEM32(esi + 0xC);
    MEM32(eax * 4 + 0x771740) = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_Z(LO8(eax), 4)) goto loc_000E6EA4; /* je: equal / zero */

loc_000E6E9D: ;
    SET_LO8(eax, LO8(eax) & 0xFB);
    MEM8(esi + 0x2C) = LO8(eax);
    goto loc_000E6EF2;

loc_000E6EA4: ;
    if (CMP_EQ(MEM8(esi + 0x2E), 0xFF)) goto loc_000E6EF2; /* je: equal / zero */

loc_000E6EAA: ;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (TEST_Z(LO8(eax), 2)) goto loc_000E6EBA; /* je: equal / zero */

loc_000E6EB0: ;
    if (CMP_NE(MEM8(0x76F0E0), LO8(ebx))) goto loc_000E6EBA; /* jne: not equal / not zero */

loc_000E6EB8: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000E6EBA: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_000E6EDE; /* je: equal / zero */

loc_000E6EBE: ;
    xmm0 = MEMF(0x771C28); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000E6EF2; /* jp: parity */

loc_000E6ED3: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_000E6EDA: ;
    if (TEST_NZ(eax, eax)) goto loc_000E6EF2; /* jne: not equal / not zero */

loc_000E6EDE: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000E6EF2; /* je: equal / zero */

loc_000E6EE2: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x2E);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x594D38), _icall_esp); /* indirect call */
    }

loc_000E6EEF: ;
    esp = esp + 8;

loc_000E6EF2: ;
    eax = (uint32_t)(int32_t)SMEM8(0x771758);
    esi = MEM32(eax * 4 + 0x771740);
    if (TEST_NZ(esi, esi)) goto loc_000E6E85; /* jne: not equal / not zero */

loc_000E6F04: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000E6F06: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6F10
 * Original: 0x000E6F10 - 0x000E6F71 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E6F10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_000E6F2C; /* je: equal / zero */

loc_000E6F1B: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x30) = MEM16(esi + 0x30) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x30), 0)) goto loc_000E6F45; /* jl: less (signed <) */

loc_000E6F2C: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000E6F6F; /* je: equal / zero */

loc_000E6F33: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x594D34), _icall_esp); /* indirect call */
    }

loc_000E6F3E: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E6F6F; /* jne: not equal / not zero */

loc_000E6F45: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E6F6F; /* jne: not equal / not zero */

loc_000E6F4E: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000E6F55: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000E6F6F; /* jl: less (signed <) */

loc_000E6F5C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000E6F71(); return; } /* je: equal / zero */

loc_000E6F69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000E6F6C: ;
    esp = esp + 4;

loc_000E6F6F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6FA0
 * Original: 0x000E6FA0 - 0x000E7222 (642 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6FA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000E6FA0: ;
    esp = esp - 0x54;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = eax;
    if (TEST_Z(esi, esi)) goto loc_000E721D; /* je: equal / zero */

loc_000E6FAE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = esp + 0x20;
    edx = esi;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_000E6FC3: ;
    xmm0 = MEMF(0x648D2C); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    eax = MEM32(esi + 0x3C8);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000E70A4; /* je: equal / zero */

loc_000E700C: ;
    edx = esp + 0x38;
    MEM32(esp + 0xC) = edx;
    SET_LO8(edx, MEM8(esi + 0x10B));
    ecx = esp + 0x2C;
    edi = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0x594D64;
    MEM32(esp + 0x18) = 0x594D7C;
    MEM32(esp + 8) = ecx;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000E721C; /* je: equal / zero */

loc_000E703C: ;
    ecx = MEM32(0x847200);
    if (TEST_Z(ecx, ecx)) goto loc_000E721C; /* je: equal / zero */

loc_000E704A: ;
    /* nop */

loc_000E7050: ;
    (void)0; /* cmp MEM8(ecx), LO8(edx) - flags set for next jcc */
    eax = MEM32(ecx + 0xE0);
    if (CMP_NE(MEM8(ecx), LO8(edx))) goto loc_000E7066; /* jne: not equal / not zero */

loc_000E705A: ;
    if (CMP_NE(MEM16(ecx + 0xA), 0x46)) goto loc_000E7066; /* jne: not equal / not zero */

loc_000E7061: ;
    if (TEST_Z(edi, edi)) goto loc_000E7072; /* je: equal / zero */

loc_000E7065: ;
    edi--;

loc_000E7066: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax;
    if (TEST_NZ(eax, eax)) goto loc_000E7050; /* jne: not equal / not zero */

loc_000E706C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_000E7072: ;
    PUSH32(esp, 2);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_000E7086: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E721C; /* je: equal / zero */

loc_000E7091: ;
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000E72F0(); /* call 0x000E72F0 */

loc_000E709C: ;
    esp = esp + 8;
    goto loc_000E7138;

loc_000E70A4: ;
    xmm4 = MEMF(esi + 0x78); /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64A7C4); /* addss */
    xmm5 = MEMF(esi + 0x80); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * MEMF(0x6490BC); /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0x38) = xmm7; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(0x6490BC); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(0x6490BC); /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    xmm6 = MEMF(0x649FE4); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm5 = xmm5 - xmm3; /* subss */
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */

loc_000E7138: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x3DA3D70A);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_000E7147: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_000E7152: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    edx = esi + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x6C) = eax;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    MEM32(esp + 0x80) = ecx;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x88) = edx;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = 0x46;
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C0570(); /* call 0x000C0570 */

loc_000E71BC: ;
    esp = esp + 0x40;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E721C; /* je: equal / zero */

loc_000E71C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F3908);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x57);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7819D5));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    SET_LO8(ecx, LO8(ecx) + 2);
    edx = esp + 0x2C;
    eax = esp + 0x20;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 3);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x457A0000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000BF3B0(); /* call 0x000BF3B0 */

loc_000E7219: ;
    esp = esp + 0x30;

loc_000E721C: ;
    POP32(esp, edi);

loc_000E721D: ;
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7230
 * Original: 0x000E7230 - 0x000E72E7 (183 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7230(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E7230: ;
    esp = esp - 8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7238: ;
    xmm0 = xmm0 * MEMF(0x64A538); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A534); /* addss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E725B: ;
    xmm0 = xmm0 * MEMF(0x64A2FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A530); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E727D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7298: ;
    xmm0 = xmm0 * MEMF(0x6494C4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A52C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E72B8: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000E72C4; /* jns: not sign (positive) */

loc_000E72BF: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000E72C4: ;
    ecx = MEM32(esp + 0x28);
    eax = eax + 6;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = 0x594D70;
    ecx = 0x594D64;
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_000E72E3: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000E72F0
 * Original: 0x000E72F0 - 0x000E735F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E72F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000E72F0: ;
    esp = esp - 8;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E7301: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
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
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E7332: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_000E733E; /* jns: not sign (positive) */

loc_000E7339: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_000E733E: ;
    eax = eax + 6;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000E735B: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7360
 * Original: 0x000E7360 - 0x000E78B6 (1366 bytes, 318 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7360: ;
    esp = esp - 0xD0;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xE8);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xF0);
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B2E70(); /* call 0x000B2E70 */

loc_000E73A7: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E78AE; /* je: equal / zero */

loc_000E73B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E73BC: ;
    edi = eax;
    edi = edi & 0x80000007u;
    if (((int32_t)edi >= 0)) goto loc_000E73CB; /* jns: not sign (positive) */

loc_000E73C6: ;
    edi--;
    edi = edi | 0xFFFFFFF8u;
    edi++;

loc_000E73CB: ;
    edi = edi + 0xF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E73D3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E73E3: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x649108); /* mulss */
    xmm1 = xmm1 + MEMF(0x64A528); /* addss */
    edx = edi;
    eax = esp + 0xDC;
    PUSH32(esp, 0); sub_00144930(); /* call 0x00144930 */

loc_000E7404: ;
    SET_LO8(eax, MEM8(esp + 0xF8));
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_000E757C; /* je: equal / zero */

loc_000E7418: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E741D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 5;
    if (CMP_EQ(LO16(edx), LO16(ebx))) goto loc_000E757C; /* je: equal / zero */

loc_000E7431: ;
    edi = ZX16(LO16(edx));

loc_000E7434: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7439: ;
    xmm0 = xmm0 * MEMF(0x649FFC); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E7460: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000E746E: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xC4); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0xB8); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0xBC); /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xCC); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp = esp + 0xC;
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E74EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E750C: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E752A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E753B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x12;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E754C: ;
    xmm0 = xmm0 * MEMF(0x64A524); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A520); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x60;
    ecx = esp + 0x118;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_000E7572: ;
    esp = esp + 0x48;
    edi--;
    if ((edi != 0)) goto loc_000E7434; /* jne: not equal / not zero */

loc_000E757C: ;
    if (CMP_EQ(MEM8(esp + 0xE8), LO8(ebx))) goto loc_000E767A; /* je: equal / zero */

loc_000E7589: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E758E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 5;
    if ((edx == 0)) goto loc_000E767A; /* je: equal / zero */

loc_000E759F: ;
    edi = edx;

loc_000E75A1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E75A6: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm1 = MEMF(esp + 0xC4); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xD8); /* movss */
    PUSH32(esp, 1);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xE4); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E760E: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E7629: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E763A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 5;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E764B: ;
    xmm0 = xmm0 * MEMF(0x64A51C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A518); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 1);
    eax = esp + 0x4C;
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000E7670: ;
    esp = esp + 0x34;
    edi--;
    if ((edi != 0)) goto loc_000E75A1; /* jne: not equal / not zero */

loc_000E767A: ;
    if (CMP_EQ(MEM8(esp + 0xF0), LO8(ebx))) goto loc_000E78AC; /* je: equal / zero */

loc_000E7687: ;
    PUSH32(esp, ebp);
    ebp = 2;
    MEM32(esp + 0x5C) = 0x303;
    MEM32(esp + 0x44) = ebp;
    MEM32(esp + 0x48) = ebp;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = 4;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebp;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E76B6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x64A514); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0xA9) = LO8(eax);
    MEM8(esp + 0xAA) = LO8(eax);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x60) = 0x6C;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM16(esp + 0x64) = 0x14;
    MEM16(esp + 0x66) = 0xC;
    MEM32(esp + 0xA0) = 0x80D207;
    MEM8(esp + 0xA8) = 0x10;
    MEM8(esp + 0xAB) = LO8(ebx);
    MEM16(esp + 0x68) = 1;
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEM8(esp + 0x40) = 0x39;
    MEM8(esp + 0x41) = 0xF;
    MEM8(esp + 0x42) = LO8(ebx);
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = eax;
    edx = edx + 3;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    if (CMP_LE(edx, ebx)) goto loc_000E78AB; /* jle: less or equal (signed <=) */

loc_000E777F: ;
    MEM32(esp + 0x18) = edx;

loc_000E7783: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7788: ;
    xmm0 = xmm0 * MEMF(0x648F98); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E77A3: ;
    eax = eax & 0x3F;
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E77AE: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x9C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000E77C0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E77C5: ;
    xmm0 = xmm0 * MEMF(0x64A510); /* mulss */
    xmm0 = xmm0 - MEMF(0x6495F4); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E77EB: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E77F7: ;
    ecx = MEM32(esp + 0xAC);
    eax = eax & 1;
    edi = edi | eax;
    ecx = ecx & 0xFFFFFF3Fu;
    edi = edi << 6;
    edi = edi | ecx;
    MEM32(esp + 0xAC) = edi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E781A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x42;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x4F) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E782D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x2C;
    MEM16(esp + 0x40) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7842: ;
    xmm0 = xmm0 * MEMF(0x64974C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649054); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    edx = esp + 0x4C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEM32(esp + 0x64) = ebp;
    MEM32(esp + 0x68) = ebp;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = 4;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x78) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_000E7890: ;
    esp = esp + 0x20;
    if (CMP_EQ(eax, ebx)) goto loc_000E78A1; /* je: equal / zero */

loc_000E7897: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x170) = ecx;

loc_000E78A1: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_000E7783; /* jne: not equal / not zero */

loc_000E78AB: ;
    POP32(esp, ebp);

loc_000E78AC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000E78AE: ;
    POP32(esp, esi);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E78C0
 * Original: 0x000E78C0 - 0x000E794D (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E78C0(void)
{

loc_000E78C0: ;
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

loc_000E7907: ;
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
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    ecx = esp + 0x78;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000E7944: ;
    esp = esp + 0x58;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7950
 * Original: 0x000E7950 - 0x000E7969 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7950(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E7950: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0x5A)) { sub_000E7969(); return; } /* je: equal / zero */

loc_000E795C: ;
    if (CMP_EQ(eax, 0x74)) { sub_000E7969(); return; } /* je: equal / zero */

loc_000E7961: ;
    if (CMP_EQ(eax, 0x7A)) { sub_000E7969(); return; } /* je: equal / zero */

loc_000E7966: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7970
 * Original: 0x000E7970 - 0x000E8095 (1829 bytes, 462 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000E7970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    if (TEST_Z(edi, edi)) goto loc_000E808E; /* je: equal / zero */

loc_000E7991: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E79A5; /* je: equal / zero */

loc_000E7995: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x28) = 0;
    MEM8(esp + 0xF) = LO8(ebx);
    goto loc_000E79D7;

loc_000E79A5: ;
    eax = edi;
    PUSH32(esp, 0); sub_0030E670(); /* call 0x0030E670 */

loc_000E79AC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_Z(eax, eax)) goto loc_000E808E; /* je: equal / zero */

loc_000E79B8: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000E808E; /* je: equal / zero */

loc_000E79C6: ;
    ecx = MEM32(eax + 0x2B0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0xF) = (TEST_NZ(ecx, ecx)) ? 1 : 0; /* setne */
    SET_LO8(ebx, MEM8(esp + 0xF));

loc_000E79D7: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_NZ(eax, eax)) goto loc_000E79ED; /* jne: not equal / not zero */

loc_000E79E1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E79E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E79ED: ;
    ecx = MEM32(edi + 0x68);
    eax = 0; /* xor self */
    if (CMP_NE(ecx, 0x23)) goto loc_000E7A31; /* jne: not equal / not zero */

loc_000E79F7: ;
    ecx = ZX8(MEM8(ebp + 8));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edx = eax + 0x594ED0;
    MEM32(esp + 0x1C) = edx;
    edx = eax + 0x594F00;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000E7A1B; /* jne: not equal / not zero */

loc_000E7A15: ;
    edx = eax + 0x594EE8;

loc_000E7A1B: ;
    eax = eax + 0x594F18;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx * 4 + 0x6B3F38);
    goto loc_000E7C61;

loc_000E7A31: ;
    if (CMP_NE(ecx, 0x8A)) goto loc_000E7B16; /* jne: not equal / not zero */

loc_000E7A3D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7A42: ;
    SET_LO8(eax, MEM8(ebp + 8));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x6490F4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    ebx = ZX8(LO8(eax));
    xmm0 = xmm0 - xmm1; /* subss */
    ecx = ecx + ecx + -1;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(esp + 0xF));
    xmm0 = xmm0 * xmm1; /* mulss */
    eax = ebx + ebx * 2;
    eax = eax << 2;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594DC0); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594DC4); /* movss */
    edx = eax + 0x594DA4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000E7ABC; /* je: equal / zero */

loc_000E7AB0: ;
    ecx = eax + 0x594DD4;
    MEM32(esp + 0x20) = ecx;
    goto loc_000E7AC4;

loc_000E7ABC: ;
    edx = esp + 0x10;
    MEM32(esp + 0x20) = edx;

loc_000E7AC4: ;
    edx = MEM32(ebx * 4 + 0x6B3F1C);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    eax = eax + 0x594DEC;
    PUSH32(esp, edx);
    esi = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000E7AE2: ;
    eax = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ebx;
    eax = 1;
    ecx = edi;
    MEM32(esp + 0x64) = 0x41;
    PUSH32(esp, 0); sub_001A85A0(); /* call 0x001A85A0 */

loc_000E7AFF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_001A8660(); /* call 0x001A8660 */

loc_000E7B0A: ;
    SET_LO8(ebx, MEM8(esp + 0x27));
    esp = esp + 0x18;
    goto loc_000E7C75;

loc_000E7B16: ;
    if (CMP_EQ(ecx, 0xC1)) goto loc_000E7C04; /* je: equal / zero */

loc_000E7B22: ;
    if (CMP_EQ(ecx, 0xCC)) goto loc_000E7C04; /* je: equal / zero */

loc_000E7B2E: ;
    if (CMP_NE(ecx, 0xC5)) goto loc_000E7B8E; /* jne: not equal / not zero */

loc_000E7B36: ;
    ecx = ZX8(MEM8(ebp + 8));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x594E7C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594E80); /* movss */
    edx = eax + 0x594E64;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594E84); /* movss */
    eax = eax + 0x594E94;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx * 4 + 0x6B3F2C);
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = esp + 0x10;
    goto loc_000E7C61;

loc_000E7B8E: ;
    if (CMP_EQ(ecx, 0xC6)) goto loc_000E7BA2; /* je: equal / zero */

loc_000E7B96: ;
    if (CMP_NE(ecx, 0x132)) goto loc_000E7C79; /* jne: not equal / not zero */

loc_000E7BA2: ;
    eax = ZX8(MEM8(ebp + 8));
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x594EB8); /* movss */
    ecx = eax + 0x594EAC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594EBC); /* movss */
    edx = esp + 0x10;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594EC0); /* movss */
    ecx = esp + 0x70;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x6B3F34);
    eax = eax + 0x594EC4;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM8(ebp + 8) = 0;
    PUSH32(esp, edx);
    goto loc_000E7C6B;

loc_000E7C04: ;
    ecx = ZX8(MEM8(ebp + 8));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(eax + 0x594E1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594E20); /* movss */
    edx = eax + 0x594E04;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x594E24); /* movss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = eax + 0x594E34;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000E7C50; /* jne: not equal / not zero */

loc_000E7C4C: ;
    edx = esp + 0x10;

loc_000E7C50: ;
    eax = eax + 0x594E4C;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx * 4 + 0x6B3F24);

loc_000E7C61: ;
    MEM32(esp + 0x20) = edx;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_000E7C6B: ;
    esi = edi;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000E7C72: ;
    esp = esp + 8;

loc_000E7C75: ;
    eax = esp + 0x70;

loc_000E7C79: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = esp + 0x30;
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000E7C8F; /* je: equal / zero */

loc_000E7C85: ;
    edx = esp + 0x58;
    MEM32(esp + 0x14) = edx;
    goto loc_000E7C97;

loc_000E7C8F: ;
    ecx = esp + 0x40;
    MEM32(esp + 0x14) = ecx;

loc_000E7C97: ;
    ecx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    edx = esp + 0x64;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ecx + 2;
    eax = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_000E7CBA: ;
    eax = MEM32(edi + 0x68);
    esp = esp + 8;
    if (CMP_NE(eax, 0x8A)) goto loc_000E7CE1; /* jne: not equal / not zero */

loc_000E7CC7: ;
    esi = ZX8(MEM8(ebp + 8));
    eax = esp + 0x40;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 1;
    ecx = edi;
    PUSH32(esp, 0); sub_001A85A0(); /* call 0x001A85A0 */

loc_000E7CDE: ;
    esp = esp + 8;

loc_000E7CE1: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edx = MEM32(esp + 0x28);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000E7E99; /* je: equal / zero */

loc_000E7CED: ;
    ecx = MEM32(edx + 0x568);
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(esp + 0x5C); /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm7 = MEMF(esp + 0x60); /* movss */
    xmm5 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x64); /* movss */
    xmm6 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x6C); /* movss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm7 = xmm7 - xmm1; /* subss */
    MEMF(esp + 0x6C) = xmm3; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0x60) = xmm7; /* movss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm6 = xmm6 - xmm5; /* subss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    eax = MEM32(edx + 0x568);
    xmm5 = xmm5 - MEMF(ecx + 0x228); /* subss */
    ecx = ecx + 0x228;
    xmm4 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x5C); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x21C); /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(eax + 0x220); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = MEMF(eax + 0x224); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 / xmm3; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x21C); /* mulss */
    xmm1 = xmm1 + MEMF(ecx); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x220); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x224); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x21C); /* movss */
    xmm1 = xmm1 + MEMF(ecx + 8); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x224); /* movss */
    eax = MEM32(edx + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_000E7ED8; /* je: equal / zero */

loc_000E7E87: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    SET_LO8(ebx, ~LO8(ebx));
    MEM8(esp + 0x50) = LO8(ebx);
    goto loc_000E7EDD;

loc_000E7E99: ;
    if (CMP_EQ(MEM32(edi + 0x68), 0x8A)) goto loc_000E7ED8; /* je: equal / zero */

loc_000E7EA2: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */

loc_000E7ED8: ;
    MEM8(esp + 0x50) = 0xFF;

loc_000E7EDD: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x34)) goto loc_000E7EF1; /* je: equal / zero */

loc_000E7EE7: ;
    (void)0; /* cmp eax, 0x26 - flags set for next jcc */
    MEM8(esp + 0x4C) = 4;
    if (CMP_NE(eax, 0x26)) goto loc_000E7EF6; /* jne: not equal / not zero */

loc_000E7EF1: ;
    MEM8(esp + 0x4C) = 5;

loc_000E7EF6: ;
    eax = MEM32(ebp + 0x18);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x3C) = 0x2C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000E7F0A; /* je: equal / zero */

loc_000E7F06: ;
    MEM32(esp + 0x3C) = eax;

loc_000E7F0A: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x2C) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E7F2A; /* je: equal / zero */

loc_000E7F1B: ;
    if (TEST_Z(edx, edx)) goto loc_000E7F2A; /* je: equal / zero */

loc_000E7F1F: ;
    eax = edi;
    PUSH32(esp, 0); sub_0032FD30(); /* call 0x0032FD30 */

loc_000E7F26: ;
    MEM32(esp + 0x2C) = eax;

loc_000E7F2A: ;
    eax = MEM32(esp + 0x3C);
    eax = eax - 0x4C;
    if ((eax == 0)) goto loc_000E7F36; /* je: equal / zero */

loc_000E7F33: ;
    eax--;
    if ((eax != 0)) goto loc_000E7F3E; /* jne: not equal / not zero */

loc_000E7F36: ;
    MEM32(esp + 0x2C) = 0x2A;

loc_000E7F3E: ;
    esi = ZX8(MEM8(ebp + 8));
    PUSH32(esp, 0x3DA3D70A);
    PUSH32(esp, 0); sub_001A8050(); /* call 0x001A8050 */

loc_000E7F4C: ;
    ebx = MEM32(ebp + 0x10);
    ecx = esp + 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_000E7F5A: ;
    esi = MEM32(esp + 0x34);
    esp = esp + 0xC;
    (void)0; /* test esi, esi - flags set for next jcc */
    if (TEST_Z(esi, esi)) esi = edi; /* cmove */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E7F6B: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    (void)0; /* cmp MEM32(0x7FA1F8), 0x27 - flags set for next jcc */
    PUSH32(esp, 1);
    SET_LO8(eax, (CMP_NE(MEM32(0x7FA1F8), 0x27)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7FB8: ;
    xmm0 = xmm0 * MEMF(0x648EB8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AAEC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E7FD3: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x67));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x460CA000);
    esi = esp + 0x6C;
    PUSH32(esp, 0);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & esi;
    PUSH32(esp, edx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    esi = esp + 0x80;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & esi;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    ecx = esp + 0xA8;
    edx--;
    edx = edx & ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x9C;
    PUSH32(esp, 0); sub_000BBE70(); /* call 0x000BBE70 */

loc_000E8034: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x6C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E808E; /* je: equal / zero */

loc_000E8040: ;
    SET_LO8(eax, MEM8(ebp + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E808E; /* jne: not equal / not zero */

loc_000E8047: ;
    eax = MEM32(edi + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x847024);
    if (TEST_Z(eax, eax)) goto loc_000E8064; /* je: equal / zero */

loc_000E8057: ;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_000E806A;

loc_000E8064: ;
    eax = MEM32(edi + 0x580);

loc_000E806A: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0x8C0;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000E808E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E80A0
 * Original: 0x000E80A0 - 0x000E811D (125 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E80A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E80A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x468);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, 0xFF);
    if (TEST_Z(eax, eax)) goto loc_000E8102; /* je: equal / zero */

loc_000E80B2: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_000E8102; /* je: equal / zero */

loc_000E80B9: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) goto loc_000E8102; /* je: equal / zero */

loc_000E80C2: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(edi + 0x46C))) goto loc_000E8102; /* jne: not equal / not zero */

loc_000E80D0: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_000E8102; /* je: equal / zero */

loc_000E80DA: ;
    ebx = MEM32(ecx + 0xBC);
    if (TEST_NZ(ebx, ebx)) goto loc_000E8102; /* jne: not equal / not zero */

loc_000E80E4: ;
    if (CMP_EQ(MEM8(eax + 0x236), LO8(edx))) goto loc_000E8102; /* je: equal / zero */

loc_000E80EC: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_000E8102; /* je: equal / zero */

loc_000E80F6: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(edx, ~LO8(edx));

loc_000E8102: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    MEM8(esp + 0x18) = LO8(edx);
    PUSH32(esp, 0); sub_000BD480(); /* call 0x000BD480 */

loc_000E8117: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8120
 * Original: 0x000E8120 - 0x000E8179 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8120: ;
    esp = esp - 0x74;
    eax = MEM32(esp + 0x78);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x84);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    MEM8(esp + 0x10) = LO8(eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ecx);
    MEM32(esp + 0x1C) = ebx;
    MEM16(esp + 0x20) = LO16(ebx);
    MEM16(esp + 0x2A) = LO16(edx);
    if (CMP_EQ(ebp, ebx)) { sub_000E8179(); return; } /* je: equal / zero */

loc_000E8163: ;
    eax = MEM32(ebp + 0x564);
    if (CMP_EQ(eax, ebx)) { sub_000E8179(); return; } /* je: equal / zero */

loc_000E816D: ;
    SET_LO8(eax, MEM8(eax + 0x2A8));
    MEM8(esp + 0x22) = LO8(eax);
    g_seh_ebp = ebp; sub_000E817E(); return; /* tail jmp 0x000E817E */

}

/**
 * sub_000E8330
 * Original: 0x000E8330 - 0x000E84C6 (406 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8330(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_000E8330: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    eax = MEM32(edi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000E84B2; /* je: equal / zero */

loc_000E8348: ;
    if (CMP_EQ(MEM32(edi + 0x68), 0xFFFF)) goto loc_000E84B2; /* je: equal / zero */

loc_000E8355: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x50))) goto loc_000E84B2; /* jne: not equal / not zero */

loc_000E8364: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    SET_LO8(ebx, 1);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_000E84B2; /* je: equal / zero */

loc_000E8373: ;
    ecx = ZX16(MEM16(esi + 0x6A));
    if (CMP_NE(MEM32(edi + 0xA4), ecx)) goto loc_000E84B2; /* jne: not equal / not zero */

loc_000E8383: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000E8417; /* jbe: below or equal (unsigned <=) */

loc_000E839D: ;
    /* nop */

loc_000E83A0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + 0x54); /* subss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, 0xFFFFFFFFu);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x58));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esi + 0x59));
    ecx = edi;
    PUSH32(esp, 0); sub_000E7970(); /* call 0x000E7970 */

loc_000E83C8: ;
    SET_LO8(edx, MEM8(esi + 0x58));
    eax = MEM32(esi + 0x64);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x58) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_000E83ED; /* je: equal / zero */

loc_000E83DA: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_000E83ED; /* je: equal / zero */

loc_000E83E4: ;
    eax = ecx;
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;

loc_000E83ED: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E83F2: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(esi + 0x54); /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x54) = xmm1; /* movss */
    if ((xmm0 > xmm1)) goto loc_000E83A0; /* ja: above (unsigned >) */

loc_000E8417: ;
    if (CMP_EQ(MEM8(esi + 0x62), 0xFF)) goto loc_000E84BF; /* je: equal / zero */

loc_000E8421: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(esi + 0x60) = MEM16(esi + 0x60) - LO16(ecx);
    if (CMP_GE(MEM16(esi + 0x60), 0)) goto loc_000E84BF; /* jge: greater or equal (signed >=) */

loc_000E8437: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E8440: ;
    SET_LO8(ecx, MEM8(esi + 0x62));
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    MEM16(esp + 0xE) = 0x1E;
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E8455: ;
    xmm5 = MEMF(0x64A70C); /* movss */
    xmm6 = MEMF(0x649B80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E8478: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    eax = esp + 0xC;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x19) = 0xFF;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_000E849D: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E84A5: ;
    POP32(esp, edi);
    MEM16(esi + 0x60) = 0xFA;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_000E84B2: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_000E84BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000E84D0
 * Original: 0x000E84D0 - 0x000E85A7 (215 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E84D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E84D0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_000E854C; /* jne: not equal / not zero */

loc_000E84DD: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    if (CMP_EQ(MEM32(esi + 0x4C), edx)) goto loc_000E850F; /* je: equal / zero */

loc_000E84E8: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (CMP_EQ(MEM8(esi + 0x50), LO8(ecx))) goto loc_000E850F; /* je: equal / zero */

loc_000E84F0: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000E85A5; /* je: equal / zero */

loc_000E84FB: ;
    if (CMP_EQ(eax, edx)) goto loc_000E8508; /* je: equal / zero */

loc_000E84FF: ;
    if (CMP_NE(MEM8(esi + 0x68), LO8(ecx))) goto loc_000E85A5; /* jne: not equal / not zero */

loc_000E8508: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000E850D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E850F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E85A5; /* jne: not equal / not zero */

loc_000E851C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000E8523: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000E85A5; /* jl: less (signed <) */

loc_000E852A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000E853F; /* je: equal / zero */

loc_000E8537: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000E853A: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E853F: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000E854C: ;
    if (CMP_NE(eax, 0x2D)) goto loc_000E85A5; /* jne: not equal / not zero */

loc_000E8551: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(eax);
    if (CMP_NE(edx, ecx)) goto loc_000E856C; /* jne: not equal / not zero */

loc_000E855E: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x50) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E856C: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (CMP_NE(edx, edi)) goto loc_000E8580; /* jne: not equal / not zero */

loc_000E8574: ;
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(eax, MEM8(eax + 8));
    POP32(esp, edi);
    MEM8(esi + 0x50) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E8580: ;
    edx = MEM32(esi + 0x64);
    if (TEST_Z(edx, edx)) goto loc_000E85A4; /* je: equal / zero */

loc_000E8587: ;
    if (CMP_NE(edx, ecx)) goto loc_000E8597; /* jne: not equal / not zero */

loc_000E858B: ;
    MEM32(esi + 0x64) = edi;
    SET_LO8(ecx, MEM8(eax + 9));
    POP32(esp, edi);
    MEM8(esi + 0x68) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E8597: ;
    if (CMP_NE(edx, edi)) goto loc_000E85A4; /* jne: not equal / not zero */

loc_000E859B: ;
    MEM32(esi + 0x64) = ecx;
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(esi + 0x68) = LO8(edx);

loc_000E85A4: ;
    POP32(esp, edi);

loc_000E85A5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E85B0
 * Original: 0x000E85B0 - 0x000E85D0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E85B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E85B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0x12)) { sub_000E85D0(); return; } /* je: equal / zero */

loc_000E85BC: ;
    if (CMP_EQ(eax, 0x23)) { sub_000E85D0(); return; } /* je: equal / zero */

loc_000E85C1: ;
    if (CMP_EQ(eax, 0x73)) { sub_000E85D0(); return; } /* je: equal / zero */

loc_000E85C6: ;
    if (CMP_EQ(eax, 0x8A)) { sub_000E85D0(); return; } /* je: equal / zero */

loc_000E85CD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000E85E0
 * Original: 0x000E85E0 - 0x000E8644 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E85E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E85E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x5C);
    if (TEST_Z(esi, esi)) goto loc_000E8625; /* je: equal / zero */

loc_000E85ED: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E8625; /* jne: not equal / not zero */

loc_000E85F6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000E85FD: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000E8625; /* jl: less (signed <) */

loc_000E8604: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000E8619; /* je: equal / zero */

loc_000E8611: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000E8614: ;
    esp = esp + 4;
    goto loc_000E8625;

loc_000E8619: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000E8625: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000E862D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000E8644(); return; } /* jne: not equal / not zero */

loc_000E8636: ;
    eax = edi;
    POP32(esp, edi);
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000E8650
 * Original: 0x000E8650 - 0x000E86BB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8650(void)
{
    int _flags = 0; /* fallback flag var */

loc_000E8650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x5C);
    if (TEST_Z(esi, esi)) goto loc_000E86A7; /* je: equal / zero */

loc_000E865D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E86A7; /* jne: not equal / not zero */

loc_000E8666: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000E866D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000E86A7; /* jl: less (signed <) */

loc_000E8674: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000E869B; /* je: equal / zero */

loc_000E8681: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000E8684: ;
    esp = esp + 4;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000E868F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000E8695: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E869B: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000E86A7: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000E86AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000E86B5: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E86C0
 * Original: 0x000E86C0 - 0x000E8A50 (912 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E86C0(void)
{
    uint32_t ebp;
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

loc_000E86C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    xmm0 = MEMF(0x64B114); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64B110); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64B10C); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = esi;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    if (CMP_EQ(ebx, esi)) goto loc_000E8838; /* je: equal / zero */

loc_000E8712: ;
    SET_LO8(edx, MEM8(ebp + 0xC));
    if (CMP_A(LO8(edx), 1)) goto loc_000E8838; /* ja: above (unsigned >) */

loc_000E871E: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0019B300(); /* call 0x0019B300 */

loc_000E8725: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E874F; /* jne: not equal / not zero */

loc_000E872C: ;
    PUSH32(esp, 0x3F4F9DB3);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edi = esp + 0x5C;
    edx = ebx;
    PUSH32(esp, 0); sub_001116C0(); /* call 0x001116C0 */

loc_000E8749: ;
    SET_LO8(edx, MEM8(ebp + 0xC));
    esp = esp + 0xC;

loc_000E874F: ;
    if (CMP_EQ(MEM32(ebx + 0x3C8), esi)) goto loc_000E88E9; /* je: equal / zero */

loc_000E875B: ;
    edi = ZX8(LO8(edx));
    eax = MEM32(edi * 4 + 0x6B3F40);
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = ebx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000E8775: ;
    eax = esp + 0x70;
    MEM32(esp + 0x98) = eax;
    eax = esp + 0x1C;
    ecx = esp + 0xC8;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0xA4) = eax;
    edx = esp + 0x28;
    ecx = esp + 0x40;
    eax = edi + edi * 2;
    eax = eax << 2;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0x9C) = ecx;
    ecx = eax + 0x594F3C;
    edx = esp + 0x88;
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA8) = ecx;
    edx = eax + 0x594F6C;
    ecx = eax + 0x594F84;
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0xB0) = ecx;
    ecx = MEM32(ebp + 0x14);
    edx = eax + 0x594F9C;
    esp = esp + 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + 0x594F54;
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0xB0) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_000E8841; /* je: equal / zero */

loc_000E880B: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    eax = esp + 0x8C;
    edx = edx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_000E8831: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E886D; /* jne: not equal / not zero */

loc_000E8838: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E8841: ;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0xA8;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_000E886A: ;
    esp = esp + 8;

loc_000E886D: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x68); /* subss */
    SET_LO8(eax, MEM8(ebp + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x6C); /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x70); /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E89CF; /* je: equal / zero */

loc_000E88AE: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    goto loc_000E89CF;

loc_000E88E9: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E8838; /* jne: not equal / not zero */

loc_000E88F4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E8929; /* ja: above (unsigned >) */

loc_000E8908: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E8929; /* ja: above (unsigned >) */

loc_000E891C: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    goto loc_000E8963;

loc_000E8929: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x64); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x60); /* movss */

loc_000E8963: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = MEMF(0x6498B8); /* movss */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000E8977; /* jne: not equal / not zero */

loc_000E896F: ;
    xmm0 = MEMF(0x64B108); /* movss */

loc_000E8977: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(ebx + 0x7C); /* movss */
    xmm3 = xmm3 + MEMF(ebx + 0x78); /* addss */
    xmm2 = xmm2 + MEMF(0x6498B4); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x80); /* addss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm2; /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x88) = edx;

loc_000E89CF: ;
    eax = MEM32(ebx + 0x568);
    if (CMP_NE(MEM8(eax + 0xB1), 1)) { sub_000E8A50(); return; } /* jne: not equal / not zero */

loc_000E89DE: ;
    ecx = MEM32(eax + 0x2B0);
    if (TEST_Z(ecx, ecx)) { sub_000E8A50(); return; } /* je: equal / zero */

loc_000E89E8: ;
    xmm0 = MEMF(eax + 0x228); /* movss */
    ecx = eax + 0x228;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x22C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x230); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x21C); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x74;
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x224); /* movss */
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000E8A8D(); return; /* tail jmp 0x000E8A8D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000E8CD0
 * Original: 0x000E8CD0 - 0x000E8FB7 (743 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8CD0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    if (TEST_Z(ebp, ebp)) goto loc_000E8FB2; /* je: equal / zero */

loc_000E8CE0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x44) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E8D2C; /* je: equal / zero */

loc_000E8CF1: ;
    esi = MEM32(esp + 0x4C);
    edi = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    eax = ebp;
    ebx = esp + 0x34;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_000E8D08: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x44) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E8D2C; /* je: equal / zero */

loc_000E8D13: ;
    PUSH32(esp, 2);
    eax = esp + 0x38;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = 3;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_000E8D25: ;
    esp = esp + 0xC;
    MEM8(esp + 0x44) = LO8(eax);

loc_000E8D2C: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_000E8DAD; /* je: equal / zero */

loc_000E8D36: ;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E8D40: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    edx = edx + ecx;
    MEM16(esp + 0x1A) = LO16(edx);
    edx = MEM32(ebp + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esp + 0x24) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E8D68: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E8D86: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 0x1C;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x31) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_000E8DAA: ;
    esp = esp + 0xC;

loc_000E8DAD: ;
    eax = MEM32(ebp + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000E8E34; /* je: equal / zero */

loc_000E8DB7: ;
    SET_LO8(edx, MEM8(ebp + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_000E8E34; /* je: equal / zero */

loc_000E8DC5: ;
    if (CMP_GE(MEM32(0x84A144), 2)) goto loc_000E8DF9; /* jge: greater or equal (signed >=) */

loc_000E8DCE: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp;
    ebx = esp + 0x24;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_000E8DE2: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E8DF9; /* je: equal / zero */

loc_000E8DE9: ;
    ecx = ebx;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_000E8DF6: ;
    esp = esp + 8;

loc_000E8DF9: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E8E34; /* je: equal / zero */

loc_000E8E02: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000E8E34; /* je: equal / zero */

loc_000E8E0A: ;
    if (CMP_GE(MEM32(0x84A144), 2)) goto loc_000E8E34; /* jge: greater or equal (signed >=) */

loc_000E8E13: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E8E18: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_000E8E34; /* je: equal / zero */

loc_000E8E1C: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    esi = esp + 0x3C;
    edi = esp + 0x30;
    PUSH32(esp, 0); sub_0019A570(); /* call 0x0019A570 */

loc_000E8E31: ;
    esp = esp + 8;

loc_000E8E34: ;
    ecx = MEM32(ebp + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_000E8EE2; /* je: equal / zero */

loc_000E8E42: ;
    xmm2 = MEMF(0x7FA210); /* movss */
    /* ucomiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000E8EE2; /* jnp: not parity */

loc_000E8E5B: ;
    ecx = ecx + 0x4DC;
    edx = ebp + 0x78;
    eax = esp + 0x18;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x44) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = esp + 0x18;
    edx = ecx;
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x44) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_000E8EFF;

loc_000E8EE2: ;
    eax = MEM32(0x5A02CC);
    ecx = MEM32(0x5A02D0);
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;

loc_000E8EFF: ;
    edi = MEM32(ebp + 0x568);
    esi = 0; /* xor self */
    if (TEST_Z(edi, edi)) goto loc_000E8F43; /* je: equal / zero */

loc_000E8F0B: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_000E8F12: ;
    if (TEST_NZ(eax, eax)) goto loc_000E8F1A; /* jne: not equal / not zero */

loc_000E8F16: ;
    ebx = 0; /* xor self */
    goto loc_000E8F30;

loc_000E8F1A: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    eax = MEM32(ecx + edx + 0x50);
    MEM32(esp + 0x54) = eax;
    ebx = eax;

loc_000E8F30: ;
    eax = MEM32(edi + 0x444);
    if (TEST_Z(eax, eax)) goto loc_000E8F47; /* je: equal / zero */

loc_000E8F3A: ;
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_000E8F3F: ;
    esi = eax;
    goto loc_000E8F47;

loc_000E8F43: ;
    ebx = MEM32(esp + 0x54);

loc_000E8F47: ;
    if (TEST_Z(ebx, ebx)) goto loc_000E8FAF; /* je: equal / zero */

loc_000E8F4B: ;
    ecx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, 7);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000BEB70(); /* call 0x000BEB70 */

loc_000E8F85: ;
    xmm0 = MEMF(esp + 0x98); /* movss */
    esp = esp + 0x40;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000E8FAF; /* jnp: not parity */

loc_000E8F9E: ;
    edx = MEM32(esp + 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_000E8FAC: ;
    esp = esp + 0x10;

loc_000E8FAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000E8FB2: ;
    POP32(esp, ebp);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8FC0
 * Original: 0x000E8FC0 - 0x000E8FF9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8FC0(void)
{
    uint32_t ebp;

loc_000E8FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    ecx = MEM32(0x6B3F40);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000E8FDE: ;
    eax = MEM32(ebp + 0x10);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x594F3C);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000E8FF1: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9000
 * Original: 0x000E9000 - 0x000E9039 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9000(void)
{
    uint32_t ebp;

loc_000E9000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    ecx = MEM32(0x6B3F44);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000E901E: ;
    eax = MEM32(ebp + 0x10);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x594F48);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000E9031: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9040
 * Original: 0x000E9040 - 0x000E9258 (536 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9040(void)
{
    uint32_t ebp;
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

loc_000E9040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000E906C; /* jne: not equal / not zero */

loc_000E9068: ;
    MEM8(ebp + 8) = 1;

loc_000E906C: ;
    if (TEST_Z(ebx, ebx)) goto loc_000E9252; /* je: equal / zero */

loc_000E9074: ;
    if (CMP_A(MEM8(ebp + 8), 1)) goto loc_000E9252; /* ja: above (unsigned >) */

loc_000E907E: ;
    eax = MEM32(ebx + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_000E909B; /* je: equal / zero */

loc_000E9088: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036930(); /* call 0x00036930 */

loc_000E9092: ;
    if (CMP_A(eax, 1)) goto loc_000E9252; /* ja: above (unsigned >) */

loc_000E909B: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0019B300(); /* call 0x0019B300 */

loc_000E90A2: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000E9252; /* je: equal / zero */

loc_000E90B0: ;
    edi = ZX8(MEM8(ebp + 8));
    edx = MEM32(edi * 4 + 0x6B3F40);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = ebx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_000E90C8: ;
    eax = edi + edi * 2;
    eax = eax << 2;
    ecx = eax + 0x594F3C;
    edx = eax + 0x594F6C;
    MEM32(esp + 0x40) = ecx;
    eax = eax + 0x594F84;
    MEM32(esp + 0x44) = edx;
    ecx = esp + 0x4C;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x48) = eax;
    edx = esp + 0x34;
    ecx = esp + 0x58;
    MEM32(esp + 0x20) = edx;
    eax = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = 3;
    ecx = esp + 0x48;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_000E911C: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    esi = MEM32(ebp + 0xC);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_000E9160: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = esp + 0x70;
    esi = esp + 0x40;
    edi = esp + 0x4C;
    PUSH32(esp, 0); sub_0019A570(); /* call 0x0019A570 */

loc_000E9173: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E9178: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E917D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000C0570(); /* call 0x000C0570 */

loc_000E919D: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x48;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000E920E; /* jnp: not parity */

loc_000E91D6: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x10); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_000E920E: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0x3C97B425);
    PUSH32(esp, 0x42580001);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = ebx;
    ecx = esp + 0x88;
    PUSH32(esp, 0); sub_00137F60(); /* call 0x00137F60 */

loc_000E924F: ;
    esp = esp + 0x44;

loc_000E9252: ;
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
 * sub_000E9260
 * Original: 0x000E9260 - 0x000E947A (538 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9260: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_000E9474; /* je: equal / zero */

loc_000E9273: ;
    ecx = ecx - edi;
    if ((ecx == 0)) goto loc_000E9292; /* je: equal / zero */

loc_000E9277: ;
    ecx--;
    if ((ecx != 0)) goto loc_000E9474; /* jne: not equal / not zero */

loc_000E927E: ;
    PUSH32(esp, ebp);
    ecx = 2;
    PUSH32(esp, 0); sub_000CA540(); /* call 0x000CA540 */

loc_000E9289: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_000E9292: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = 1;
    PUSH32(esp, 0); sub_000CA540(); /* call 0x000CA540 */

loc_000E929F: ;
    xmm0 = MEMF(0x64A0F4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0F0); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0EC); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649278); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 2;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ebx, 0xFF);
    PUSH32(esp, ebp);
    esi = esp + 0x18;
    MEM16(esp + 0x3C) = 0xF;
    MEM16(esp + 0x3E) = LO16(edi);
    MEM16(esp + 0x40) = 0xFFB5;
    MEM16(esp + 0x44) = 0xFFDA;
    MEM16(esp + 0x42) = 0x16;
    MEM16(esp + 0x46) = 0x23;
    MEM16(esp + 0x48) = LO16(eax);
    MEM16(esp + 0x4A) = LO16(eax);
    MEM16(esp + 0x4C) = 0x29;
    MEM16(esp + 0x4E) = LO16(edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x50) = 0xA;
    MEM8(esp + 0x54) = 8;
    MEM32(esp + 0x58) = 1;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x64) = edi;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = edi;
    MEM8(esp + 0x70) = LO8(ebx);
    MEM8(esp + 0x71) = LO8(ebx);
    PUSH32(esp, 0); sub_000F4E40(); /* call 0x000F4E40 */

loc_000E9390: ;
    xmm0 = MEMF(0x64A0F4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0F0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0EC); /* movss */
    eax = 6;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648EBC); /* movss */
    MEM16(esp + 0x24) = LO16(eax);
    MEM16(esp + 0x42) = LO16(eax);
    MEM16(esp + 0x44) = LO16(eax);
    ecx = 0x2BC;
    eax = 0xC8;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x6492D4); /* movss */
    MEM16(esp + 0x26) = 3;
    MEM16(esp + 0x28) = 0xFFB6;
    MEM16(esp + 0x2C) = 0xFFDA;
    MEM16(esp + 0x2A) = 0x15;
    MEM16(esp + 0x2E) = 0x23;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM16(esp + 0x38) = 0x1E;
    MEM16(esp + 0x3A) = 0xE;
    MEM16(esp + 0x3C) = 0xFFB0;
    MEM16(esp + 0x3E) = LO16(edi);
    MEM8(esp + 0x40) = 0xFF;
    MEM8(esp + 0x41) = 0x10;
    MEM16(esp + 0x46) = LO16(edi);
    MEM16(esp + 0x48) = LO16(ecx);
    MEM16(esp + 0x4A) = LO16(eax);
    MEM16(esp + 0x4C) = LO16(ecx);
    MEM16(esp + 0x4E) = LO16(eax);
    MEM32(esp + 0x50) = 0x58DB9C;
    MEM8(esp + 0x54) = LO8(ebx);
    eax = esp + 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM8(esp + 0x5D) = LO8(ebx);
    PUSH32(esp, 0); sub_000F5120(); /* call 0x000F5120 */

loc_000E946F: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000E9474: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9480
 * Original: 0x000E9480 - 0x000E9A59 (1497 bytes, 304 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9480: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x22C;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x234);
    if (CMP_EQ(eax, 4)) goto loc_000E9A51; /* je: equal / zero */

loc_000E949C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E94A2: ;
    eax = eax & 7;
    eax = eax + 5;
    ebx = 0;
    if ((eax == 0)) goto loc_000E997A; /* je: equal / zero */

loc_000E94B3: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, esi);

loc_000E94B8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E94BD: ;
    xmm5 = MEMF(0x648E40); /* movss */
    xmm6 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E94E0: ;
    MEM8(esp + 0xE) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E94E9: ;
    SET_LO8(eax, LO8(eax) & 0x3F);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM8(esp + 0xF) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E94F6: ;
    SET_LO8(ecx, MEM8(esp + 0xE));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    xmm0 = xmm0 * xmm5; /* mulss */
    SET_LO8(edx, LO8(eax));
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x248); /* mulss */
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000E952C; /* je: equal / zero */

loc_000E9520: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_000E9531;

loc_000E952C: ;
    eax = eax & 0x3F;
    esi = eax;

loc_000E9531: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_000E954B; /* je: equal / zero */

loc_000E9535: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000E954B; /* je: equal / zero */

loc_000E953A: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000E9557;

loc_000E954B: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */

loc_000E9557: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(ecx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000E9573; /* je: equal / zero */

loc_000E9567: ;
    ecx = ecx & 0x3F;
    eax = 0x40;
    eax = eax - ecx;
    goto loc_000E9578;

loc_000E9573: ;
    ecx = ecx & 0x3F;
    eax = ecx;

loc_000E9578: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_000E958F; /* je: equal / zero */

loc_000E957C: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000E958F; /* je: equal / zero */

loc_000E9581: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_000E9598;

loc_000E958F: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000E9598: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000E95BD; /* je: equal / zero */

loc_000E95B1: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    goto loc_000E95C2;

loc_000E95BD: ;
    eax = eax & 0x3F;
    esi = eax;

loc_000E95C2: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_000E95D9; /* je: equal / zero */

loc_000E95C6: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000E95D9; /* je: equal / zero */

loc_000E95CB: ;
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000E95E2;

loc_000E95D9: ;
    xmm7 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000E95E2: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000E95F8; /* je: equal / zero */

loc_000E95EC: ;
    ecx = ecx & 0x3F;
    eax = 0x40;
    eax = eax - ecx;
    goto loc_000E95FD;

loc_000E95F8: ;
    ecx = ecx & 0x3F;
    eax = ecx;

loc_000E95FD: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_000E960F; /* je: equal / zero */

loc_000E9601: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm6 = xmm6 - MEMF(eax * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_000E9618; /* jne: not equal / not zero */

loc_000E960F: ;
    xmm6 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000E9618: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E961D: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648E40); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D80); /* addss */
    xmm5 = xmm5 * MEMF(esp + 0x240); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E963E: ;
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x240); /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E9682: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E9695: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E96A8: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    MEMF(esp + 0x98) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 8); /* addss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm6 = xmm6 * xmm0; /* mulss */
    MEMF(esp + 0xAC) = xmm3; /* movss */
    MEMF(esp + 0xB0) = xmm2; /* movss */
    MEMF(esp + 0xB4) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E97BA: ;
    xmm7 = MEMF(0x648F08); /* movss */
    xmm5 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - xmm0; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E97DA: ;
    xmm1 = MEMF(0x64ADCC); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xB8) = xmm5; /* movss */
    MEMF(esp + 0xBC) = xmm6; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm1; /* movss */
    MEM32(esp + 0xC8) = 0xE8;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esp + 0xCC) = 0x12C;
    MEM32(esp + 0xD0) = ebx;
    MEM8(esp + 0xD4) = LO8(ebx);
    MEM32(esp + 0xD8) = ebx;
    MEM8(esp + 0xDC) = 0xFF;
    MEM32(esp + 0xE0) = 0x13EDB0;
    MEM32(esp + 0xE4) = ebx;
    MEM32(esp + 0xE8) = 0x13F5B0;
    MEM32(esp + 0xEC) = ebx;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = 0x13E6E0;
    MEM32(esp + 0xFC) = 0x13EC40;
    MEM32(esp + 0x100) = ebx;
    MEM8(esp + 0x104) = 1;
    MEM32(esp + 0x108) = ebp;
    if (CMP_EQ(ebp, ebx)) goto loc_000E98B5; /* je: equal / zero */

loc_000E98A6: ;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    MEM8(esp + 0x10C) = LO8(eax);
    goto loc_000E98BC;

loc_000E98B5: ;
    MEM8(esp + 0x10C) = LO8(ebx);

loc_000E98BC: ;
    ecx = MEM32(esp + 0x244);
    edx = MEM32(ecx * 4 + 0x6A6108);
    PUSH32(esp, edx);
    eax = esp + 0x138;
    PUSH32(esp, 0x5F3754);
    PUSH32(esp, eax);
    MEM16(esp + 0x11A) = 6;
    MEM16(esp + 0x11C) = 0x2A;
    MEM32(esp + 0x120) = ebx;
    MEM8(esp + 0x124) = LO8(ebx);
    MEMF(esp + 0x128) = xmm0; /* movss */
    MEMF(esp + 0x12C) = xmm0; /* movss */
    MEMF(esp + 0x130) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEM32(esp + 0x134) = ebx;
    MEM32(esp + 0x138) = ebx;
    MEM32(esp + 0x13C) = ebx;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000E994A: ;
    ecx = esp + 0x140;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    edx = esp + 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000E9967: ;
    eax = MEM32(esp + 0x40);
    esp = esp + 0x2C;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_000E94B8; /* jne: not equal / not zero */

loc_000E9979: ;
    POP32(esp, esi);

loc_000E997A: ;
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    eax = 0x1F4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM16(esp + 0x24) = LO16(ebx);
    MEM16(esp + 0x26) = LO16(ebx);
    MEM16(esp + 0x28) = LO16(ebx);
    MEM8(esp + 0x2A) = LO8(ebx);
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2B) = LO8(ebx);
    MEM16(esp + 0x2E) = LO16(eax);
    MEM16(esp + 0x30) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E99C9: ;
    eax = eax & 0xF;
    eax = eax + 0x32;
    MEM16(esp + 0x32) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000E99D9: ;
    eax = eax & 0xF;
    eax = eax + 0x32;
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x36) = LO16(ebx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000E99EE: ;
    xmm0 = xmm0 * MEMF(0x648FB0); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = 0x12C;
    ecx = ecx - eax;
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    MEM16(esp + 0x3E) = LO16(ecx);
    MEM16(esp + 0x3C) = LO16(ebx);
    MEM16(esp + 0x40) = LO16(ebx);
    MEM16(esp + 0x42) = 0x258;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    MEM8(esp + 0x46) = LO8(ebx);
    MEM8(esp + 0x47) = LO8(ebx);
    MEM8(esp + 0x48) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4A) = 0xFF;
    MEM8(esp + 0x4B) = 0xFF;
    MEM8(esp + 0x4C) = 0xA;
    MEM8(esp + 0x4D) = LO8(ebx);
    PUSH32(esp, 0); sub_0014F2B0(); /* call 0x0014F2B0 */

loc_000E9A4D: ;
    esp = esp + 4;
    POP32(esp, ebx);

loc_000E9A51: ;
    POP32(esp, ebp);
    esp = esp + 0x22C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9A60
 * Original: 0x000E9A60 - 0x000E9D26 (710 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A60(void)
{
    uint32_t ebp;
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

loc_000E9A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18C;
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000E9A78: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x80) = 0x303;
    if (TEST_Z(edi, edi)) goto loc_000E9D21; /* je: equal / zero */

loc_000E9A97: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000E9D21; /* je: equal / zero */

loc_000E9AA5: ;
    eax = MEM32(0x6B3F60);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_000E9AB2: ;
    edx = eax;
    PUSH32(esp, edi);
    eax = esp + 0x158;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000E9AC1: ;
    ecx = eax;
    edi = esi + esi * 2;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    edi = edi << 2;
    PUSH32(esp, edx);
    eax = edi + 0x6B3F48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000E9ADB: ;
    ecx = esp + 0x164;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = edi + 0x6B3F54;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000E9AF4: ;
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x44); /* subss */
    xmm1 = xmm1 * MEMF(esi * 4 + 0x6B3F64); /* mulss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    xmm0 = xmm0 * MEMF(esi * 4 + 0x6B3F64); /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x48); /* subss */
    xmm1 = xmm1 * MEMF(esi * 4 + 0x6B3F64); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    esp = esp + 0x20;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(0x648D54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000E9D21; /* ja: above (unsigned >) */

loc_000E9B76: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    SET_LO16(ecx, MEM16(esi * 2 + 0x6B3F68));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F00); /* movss */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 7);
    MEM8(esp + 0x97) = LO8(eax);
    MEM8(esp + 0x94) = LO8(eax);
    MEM8(esp + 0x95) = LO8(eax);
    MEM8(esp + 0x96) = LO8(eax);
    eax = 2;
    PUSH32(esp, 0);
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xD0) = eax;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    MEM16(esp + 0x5A) = LO16(ecx);
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEM32(esp + 0x68) = eax;
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x597978);
    eax = esp + 0x60;
    MEM32(esp + 0xB4) = 0x17;
    MEMF(esp + 0xBC) = xmm1; /* movss */
    MEM32(esp + 0xE0) = 0;
    MEM32(esp + 0x90) = 0x401;
    MEM8(esp + 0xB0) = 1;
    MEM32(esp + 0xCC) = 0;
    MEM32(esp + 0xD0) = 4;
    MEM32(esp + 0xD8) = 0;
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x78) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x80) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000E9CB2: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_000E9D21; /* je: equal / zero */

loc_000E9CB9: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + 0x310;
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi * 4 + 0x6B3F6C);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi * 4 + 0x6B3F70);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi * 4 + 0x6B3F7C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(esi * 4 + 0x6B3F80);
    MEM32(eax + 0x20) = edx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    ecx = MEM32(esi * 4 + 0x6B3F74);
    MEM32(eax + 0x24) = ecx;
    SET_LO8(edx, MEM8(esi + 0x6B3F78));
    MEM8(eax + 0x28) = LO8(edx);

loc_000E9D21: ;
    POP32(esp, edi);
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
 * sub_000E9D30
 * Original: 0x000E9D30 - 0x000E9E01 (209 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9D30: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x314); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    SET_LO16(ecx, ZX8(MEM8(eax + 0x7B)));
    xmm0 = MEMF(eax + 0x334); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x310); /* mulss */
    xmm3 = MEMF(0x6493AC); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648E68); /* movss */
    MEMF(eax + 0x310) = xmm0; /* movss */
    MEMF(eax + 0x314) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x318); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x334); /* mulss */
    MEMF(eax + 0x318) = xmm1; /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
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
    xmm0 = MEMF(eax + 0x32C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x324); /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(eax + 0x324) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) { sub_000E9E01(); return; } /* jbe: below or equal (unsigned <=) */

loc_000E9DF7: ;
    MEMF(eax + 0x324) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_000E9E0E(); return; /* tail jmp 0x000E9E0E */

}

/**
 * sub_000E9ED0
 * Original: 0x000E9ED0 - 0x000EA039 (361 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9ED0(void)
{
    float xmm0, xmm1, xmm2;

loc_000E9ED0: ;
    ecx = MEM32(esp + 4);
    xmm2 = MEMF(ecx + 0x54); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    eax = ecx + 0x294;
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x3C); /* movss */
    xmm2 = xmm2 + MEMF(ecx + 0x44); /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    PUSH32(esp, esi);
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm2; /* movss */
    edx = 0; /* xor self */
    MEM16(eax + 0x18) = LO16(edx);
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x44); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x3C); /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    MEM16(eax + 0x34) = LO16(edx);
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x44); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x3C); /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm2; /* movss */
    MEM16(eax + 0x50) = LO16(edx);
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x44); /* addss */
    esi = (int32_t)xmm0; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x48); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM16(eax + 0x6C) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA040
 * Original: 0x000EA040 - 0x000EA1CF (399 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA040: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x12C));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x12C);
    eax = esp + 8;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000EA060: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x50) = 0x303;
    if (TEST_Z(edi, edi)) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA079: ;
    eax = MEM32(esp + 0x120);
    if (TEST_Z(eax, eax)) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA088: ;
    eax = MEM32(esp + 0x124);
    if (TEST_Z(eax, eax)) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA097: ;
    eax = MEM32(esp + 0x128);
    if (TEST_Z(eax, eax)) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA0A6: ;
    if (TEST_Z(ebp, ebp)) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA0AE: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA0B7: ;
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x4F) = LO8(eax);
    MEM8(esp + 0x4C) = LO8(eax);
    MEM8(esp + 0x4D) = LO8(eax);
    MEM8(esp + 0x4E) = LO8(eax);
    eax = 2;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esp + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F00); /* movss */
    PUSH32(esp, 0xA);
    ecx = 1;
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x597978);
    eax = esp + 0x30;
    MEM32(esp + 0x84) = 0x17;
    MEM32(esp + 0xB0) = ecx;
    MEM32(esp + 0x60) = 0x401;
    MEM16(esp + 0x32) = LO16(ebx);
    MEM8(esp + 0x80) = LO8(ecx);
    MEM32(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = 4;
    MEM32(esp + 0xA8) = 0;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000EA18C: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_000EA1C6; /* je: equal / zero */

loc_000EA193: ;
    ecx = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x124);
    MEM32(eax + 0x314) = ecx;
    ecx = MEM32(esp + 0x128);
    MEM32(eax + 0x310) = edi;
    MEM32(eax + 0x318) = edx;
    MEM32(eax + 0x31C) = ebp;
    MEM32(eax + 0x320) = ecx;

loc_000EA1C6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA1D0
 * Original: 0x000EA1D0 - 0x000EA1EE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x320);
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648EEC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EEC))) { sub_000EA1EE(); return; } /* jbe: below or equal (unsigned <=) */

loc_000EA1E8: ;
    MEM8(esi + 0x7B) = 0xFF;
    g_seh_ebp = ebp; sub_000EA206(); return; /* tail jmp 0x000EA206 */

}

/**
 * sub_000EA230
 * Original: 0x000EA230 - 0x000EA271 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA230: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x314);
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    PUSH32(esp, ebx);
    edx = (int32_t)xmm0; /* cvttss2si */
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 0xC0);
    MEM8(esp + 8) = LO8(ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(edx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx + 0x294;
    ebx = ebx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) { sub_000EA271(); return; } /* je: equal / zero */

loc_000EA268: ;
    esi = 0x40;
    esi = esi - ebx;
    g_seh_ebp = ebp; sub_000EA273(); return; /* tail jmp 0x000EA273 */

}

/**
 * sub_000EA490
 * Original: 0x000EA490 - 0x000EA4B2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA490(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000EA490: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x49;
    eax = eax + 0x12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0xAC;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000EA4A6: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) { sub_000EA4B2(); return; } /* jne: not equal / not zero */

loc_000EA4AF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA510
 * Original: 0x000EA510 - 0x000EA6AE (414 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA510: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x3C));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EA490(); /* call 0x000EA490 */

loc_000EA52C: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_000EA6AB; /* je: equal / zero */

loc_000EA539: ;
    if (TEST_NZ(LO8(ebx), 2)) goto loc_000EA59A; /* jne: not equal / not zero */

loc_000EA53E: ;
    eax = MEM32(esi + 0xA4);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000EA54D: ;
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(eax * 8 + 0x75B950);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 0xC));
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EAE50(); /* call 0x000EAE50 */

loc_000EA587: ;
    esp = esp + 0x24;
    if (TEST_NZ(eax, eax)) goto loc_000EA6AB; /* jne: not equal / not zero */

loc_000EA592: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_000EA597: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000EA59A: ;
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEMF(esi + 0x80) = xmm1; /* movss */
    MEMF(esi + 0x2C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x64) = xmm1; /* movss */
    MEMF(esi + 0x48) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x84) = xmm1; /* movss */
    MEMF(esi + 0x68) = xmm1; /* movss */
    MEMF(esi + 0x4C) = xmm1; /* movss */
    MEMF(esi + 0x30) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm0 = xmm0 + xmm2; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x50) = xmm1; /* movss */
    MEMF(esi + 0x34) = xmm1; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    ecx = MEM32(edi * 4 + 0x594960);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    SET_LO16(ecx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 0xE));
    xmm0 = MEMF(0x649610); /* movss */
    ecx = ZX16(LO16(ecx));
    edx = ZX16(LO16(eax));
    ecx = ecx + 0x100;
    ecx = ecx << 5;
    edx = edx + 0x100;
    edx = edx << 5;
    MEMF(esi + 0x90) = xmm0; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x74) = xmm1; /* movss */
    MEMF(esi + 0x58) = xmm1; /* movss */
    MEMF(esi + 0x94) = xmm0; /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */

loc_000EA6AB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA6B0
 * Original: 0x000EA6B0 - 0x000EA73D (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EA6B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x38));
    PUSH32(esp, 0); sub_000EA490(); /* call 0x000EA490 */

loc_000EA6CB: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_000EA73B; /* je: equal / zero */

loc_000EA6D4: ;
    edx = MEM32(esi + 0xA4);
    eax = MEM32(edx * 8 + 0x75B950);
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0xC));
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000EAA80(); /* call 0x000EAA80 */

loc_000EA70A: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_000EA73B; /* jne: not equal / not zero */

loc_000EA711: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000EA73B; /* jne: not equal / not zero */

loc_000EA71A: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000EA721: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000EA73B; /* jl: less (signed <) */

loc_000EA728: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000EA73D(); return; } /* je: equal / zero */

loc_000EA735: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000EA738: ;
    esp = esp + 4;

loc_000EA73B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA860
 * Original: 0x000EA860 - 0x000EAA76 (534 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA860: ;
    esp = esp - 0x14;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_LE(MEM16(edi + 0x9C), 1)) goto loc_000EAA71; /* jle: less or equal (signed <=) */

loc_000EA876: ;
    eax = MEM32(edi + 0xA4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x594960);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x9E);
    ebx = MEM32(esi);
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp >> 8);
    if (CMP_B(ebx, 0x10000000)) goto loc_000EA8A6; /* jb: below (unsigned <) */

loc_000EA89C: ;
    ecx = ebp + ebp * 4;
    ebx = MEM32(ebx + ecx * 4 + 4);
    ebp = 0; /* xor self */

loc_000EA8A6: ;
    if (CMP_NE(ebx, MEM32(0x7714DC))) goto loc_000EA8B6; /* jne: not equal / not zero */

loc_000EA8AE: ;
    if (CMP_EQ(ebp, MEM32(0x7714D8))) goto loc_000EA8D5; /* je: equal / zero */

loc_000EA8B6: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_000EA8BF: ;
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_000EA8C9: ;
    MEM32(0x7714DC) = ebx;
    MEM32(0x7714D8) = ebp;

loc_000EA8D5: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x7714D4);
    eax = ecx;
    ecx = ecx & 0xF0;
    esi = ecx;
    SET_LO8(ecx, MEM8(edi + 0xA8));
    eax = eax & 0xF;
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    edx = 0;
    SET_LO8(edx, (TEST_NZ(LO8(ecx), 1)) ? 1 : 0); /* setne */
    edx++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    if (CMP_NE(eax, edx)) eax = edx; /* cmovne */
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x10;
    ecx = ecx + 0x30;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    if (CMP_NE(esi, ecx)) esi = ecx; /* cmovne */
    eax = eax | esi;
    SET_LO16(esi, MEM16(edi + 0x9C));
    MEM16(0x7714D4) = LO16(eax);
    eax = ZX16(MEM16(edi + 0xA2));
    ecx = eax;
    edx = eax;
    ecx = ecx >> 8;
    edx = edx >> 3;
    eax = eax & 0x3E;
    ecx = ecx & 0xF8;
    edx = edx & 0xF8;
    eax = eax << 2;
    if (CMP_LE(LO16(esi), 0x19)) goto loc_000EA951; /* jle: less or equal (signed <=) */

loc_000EA94A: ;
    esi = 0xFF;
    goto loc_000EA959;

loc_000EA951: ;
    esi = SX16(LO16(esi));
    esi = esi + esi * 4;
    esi = esi << 1;

loc_000EA959: ;
    ebx = (uint32_t)(int32_t)SMEM16(0x7714D0);
    if (CMP_NE(ebx, ecx)) goto loc_000EA985; /* jne: not equal / not zero */

loc_000EA964: ;
    ebx = (uint32_t)(int32_t)SMEM16(0x7714CC);
    if (CMP_NE(ebx, edx)) goto loc_000EA985; /* jne: not equal / not zero */

loc_000EA96F: ;
    ebx = (uint32_t)(int32_t)SMEM16(0x7714C8);
    if (CMP_NE(ebx, eax)) goto loc_000EA985; /* jne: not equal / not zero */

loc_000EA97A: ;
    ebx = (uint32_t)(int32_t)SMEM16(0x7714C4);
    if (CMP_EQ(ebx, esi)) goto loc_000EA9A0; /* je: equal / zero */

loc_000EA985: ;
    MEM16(0x7714D0) = LO16(ecx);
    MEM16(0x7714CC) = LO16(edx);
    MEM16(0x7714C8) = LO16(eax);
    MEM16(0x7714C4) = LO16(esi);

loc_000EA9A0: ;
    edx = MEM32(edi + 0xA4);
    eax = MEM32(edx * 4 + 0x594960);
    eax = MEM32(eax);
    esi = MEM32(0x8472C4);
    ecx = ebp + ebp * 4;
    eax = eax + ecx * 4;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_000EA9D2; /* jne: not equal / not zero */

loc_000EA9C6: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000EA9CF: ;
    esp = esp + 8;

loc_000EA9D2: ;
    ebx = MEM32(ebx);
    if (CMP_EQ(MEM32(esi + 0x3838), ebx)) goto loc_000EA9E7; /* je: equal / zero */

loc_000EA9DC: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000EA9E1: ;
    MEM32(esi + 0x3838) = ebx;

loc_000EA9E7: ;
    PUSH32(esp, 0xFF);
    edi = edi + 0x2C;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_000EA9FC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000EAA09: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_000EAA16: ;
    xmm0 = MEMF(0x648E60); /* movss */
    edx = 1;
    ecx = 0x40338;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EAA33: ;
    edi = MEM32(esp + 0x28);
    edx = edi;
    ecx = 0x40388;
    MEM32(0x549B3C) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EAA4D: ;
    MEM32(0x549B30) = edi;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_000EAA58: ;
    edx = 0; /* xor self */
    ecx = 0x40338;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EAA64: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x549B3C) = 0;
    POP32(esp, ebx);

loc_000EAA71: ;
    POP32(esp, edi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000EAA80
 * Original: 0x000EAA80 - 0x000EAAC5 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EAA80: ;
    esp = esp - 0x3C;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x5C));
    edx = edx & 0xF;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    eax = eax + edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 4);
    if (TEST_NZ(esi, esi)) goto loc_000EAAA4; /* jne: not equal / not zero */

loc_000EAA9F: ;
    esi = 1;

loc_000EAAA4: ;
    edx = MEM32(esp + 0x50);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000759D0(); /* call 0x000759D0 */

loc_000EAAB7: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000EAAC5(); return; } /* jne: not equal / not zero */

loc_000EAABE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_000EAE50
 * Original: 0x000EAE50 - 0x000EAED7 (135 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE50(void)
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

loc_000EAE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    /* fld st(1) */
    PUSH32(esp, 0);
    /* FPU: fsin  */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    edx = esp + 0x28;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    edi = MEM32(ebp + 0xC);
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    /* fstp st(0) */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_000EAEB9: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    esp = esp + 0x38;
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_000EAED7(); return; } /* jp: parity */

loc_000EAECF: ;
    eax = 0; /* xor self */
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
 * sub_000EAF00
 * Original: 0x000EAF00 - 0x000EAF99 (153 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EAF00: ;
    esp = esp - 0xC;
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * MEMF(eax + 4); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * MEMF(esi + 8); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 4);
    eax = ebx;
    MEM32(eax) = ecx;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_000EAF77: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000EAF99(); return; } /* je: equal / zero */

loc_000EAF7E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 4) = xmm0; /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000EAFA0(); return; /* tail jmp 0x000EAFA0 */

}

/**
 * sub_000EB010
 * Original: 0x000EB010 - 0x000EB0C9 (185 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EB010: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp) = 0x5F3930;
    MEM32(ebp + 0x10) = ecx;
    esi = 0x5A0350;
    if (TEST_Z(eax, eax)) goto loc_000EB030; /* je: equal / zero */

loc_000EB02E: ;
    esi = eax;

loc_000EB030: ;
    edi = ebp + 0x20;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, edi)) ? 1 : 0); /* setne */
    ecx = edx;
    ecx = ecx >> 1;
    SET_LO8(ecx, LO8(ecx) & 1);
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    MEM8(ebp + 0x60) = LO8(eax);
    MEM8(ebp + 0x68) = LO8(ecx);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x64) = edi;
    PUSH32(esp, 0x10);
    if (TEST_Z(LO8(edx), 1)) goto loc_000EB095; /* je: equal / zero */

loc_000EB05B: ;
    PUSH32(esp, 0); sub_000EB2B0(); /* call 0x000EB2B0 */

loc_000EB060: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) { sub_000EB0C9(); return; } /* je: equal / zero */

loc_000EB067: ;
    ecx = MEM32(esp + 0x14);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax) = 0x5F3950;
    if (CMP_NE(ecx, edi)) goto loc_000EB07A; /* jne: not equal / not zero */

loc_000EB075: ;
    ecx = 0x595068;

loc_000EB07A: ;
    esi = MEM32(ecx);
    edx = eax + 4;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    MEM32(eax) = 0x5F39B8;
    g_seh_ebp = ebp; sub_000EB0CB(); return; /* tail jmp 0x000EB0CB */

loc_000EB095: ;
    PUSH32(esp, 0); sub_000EB2B0(); /* call 0x000EB2B0 */

loc_000EB09A: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) { sub_000EB0C9(); return; } /* je: equal / zero */

loc_000EB0A1: ;
    ecx = MEM32(esp + 0x14);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax) = 0x5F3950;
    if (CMP_NE(ecx, edi)) goto loc_000EB0B4; /* jne: not equal / not zero */

loc_000EB0AF: ;
    ecx = 0x595068;

loc_000EB0B4: ;
    esi = MEM32(ecx);
    edx = eax + 4;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_000EB0CB(); return; /* tail jmp 0x000EB0CB */

}

/**
 * sub_000EB140
 * Original: 0x000EB140 - 0x000EB16A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB140(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000EB170(); /* call 0x000EB170 */

loc_000EB148: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000EB164; /* je: equal / zero */

loc_000EB14F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000EB164; /* je: equal / zero */

loc_000EB157: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EB161: ;
    esp = esp + 4;

loc_000EB164: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB170
 * Original: 0x000EB170 - 0x000EB1ED (125 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB170(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esi) = 0x5F3930;
    if (CMP_EQ(ecx, ebx)) goto loc_000EB18A; /* je: equal / zero */

loc_000EB184: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000EB18A: ;
    eax = MEM32(esi + 0x74);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x64) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_000EB1B4; /* jle: less or equal (signed <=) */

loc_000EB196: ;
    ecx = MEM32(esi + 0x6C);
    ecx = MEM32(ecx + edi * 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000EB1A6; /* je: equal / zero */

loc_000EB1A0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000EB1A6: ;
    eax = MEM32(esi + 0x6C);
    MEM32(eax + edi * 4) = ebx;
    eax = MEM32(esi + 0x74);
    edi++;
    if (CMP_L(edi, eax)) goto loc_000EB196; /* jl: less (signed <) */

loc_000EB1B4: ;
    edi = MEM32(esi + 0x6C);
    if (CMP_EQ(edi, ebx)) goto loc_000EB1E6; /* je: equal / zero */

loc_000EB1BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000EB1C1: ;
    if (TEST_NZ(eax, eax)) goto loc_000EB1E6; /* jne: not equal / not zero */

loc_000EB1C5: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000EB1E3: ;
    esp = esp + 4;

loc_000EB1E6: ;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB1F0
 * Original: 0x000EB1F0 - 0x000EB23A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EB1F0: ;
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    MEM32(eax + edi * 4) = 0;
    SET_LO8(eax, MEM8(esp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EB23A(); return; } /* je: equal / zero */

loc_000EB20D: ;
    PUSH32(esp, 0); sub_000EB360(); /* call 0x000EB360 */

loc_000EB212: ;
    edx = eax;
    esp = esp + 4;
    if (TEST_Z(edx, edx)) goto loc_000EB230; /* je: equal / zero */

loc_000EB21B: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_000F0940(); /* call 0x000F0940 */

loc_000EB222: ;
    MEM32(edx) = 0x5F39B0;
    ecx = MEM32(esi + 0x6C);
    MEM32(ecx + edi * 4) = edx;
    g_seh_ebp = ebp; sub_000EB259(); return; /* tail jmp 0x000EB259 */

loc_000EB230: ;
    ecx = MEM32(esi + 0x6C);
    edx = 0; /* xor self */
    MEM32(ecx + edi * 4) = edx;
    g_seh_ebp = ebp; sub_000EB259(); return; /* tail jmp 0x000EB259 */

}

/**
 * sub_000EB280
 * Original: 0x000EB280 - 0x000EB2A2 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB280(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB280: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x10), 0xFFFFFFFFu)) goto loc_000EB29C; /* je: equal / zero */

loc_000EB289: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000EB28E: ;
    eax = eax - MEM32(esi + 0x10);
    if (CMP_LE(eax & eax, 0)) goto loc_000EB29C; /* jle: less or equal (signed <=) */

loc_000EB295: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000EB29C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_000EB2B0
 * Original: 0x000EB2B0 - 0x000EB334 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB2B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB2B0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EB334(); return; } /* je: equal / zero */

loc_000EB2CB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000EB2DF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EB314; /* je: equal / zero */

loc_000EB2EA: ;
    ecx = 0x75DC8C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000EB2F4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000EB311: ;
    esp = esp + 0x14;

loc_000EB314: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000EB32D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB360
 * Original: 0x000EB360 - 0x000EB3E4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB360(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB360: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EB3E4(); return; } /* je: equal / zero */

loc_000EB37B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000EB38F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EB3C4; /* je: equal / zero */

loc_000EB39A: ;
    ecx = 0x75DC70;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000EB3A4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000EB3C1: ;
    esp = esp + 0x14;

loc_000EB3C4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000EB3DD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB410
 * Original: 0x000EB410 - 0x000EB434 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EB410: ;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(edi + 4) = esi;
    esi = esi >> 2;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(edi) = eax;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = eax;
    if (CMP_NE(edx, eax)) { sub_000EB434(); return; } /* jne: not equal / not zero */

loc_000EB42F: ;
    MEM32(edi + 0x14) = eax;
    g_seh_ebp = ebp; sub_000EB44E(); return; /* tail jmp 0x000EB44E */

}

/**
 * sub_000EB470
 * Original: 0x000EB470 - 0x000EB4F9 (137 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB470(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB470: ;
    eax = MEM32(ecx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000EB4A0; /* jne: not equal / not zero */

loc_000EB477: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + 0x14);
    if (CMP_BE(edx, eax)) goto loc_000EB486; /* jbe: below or equal (unsigned <=) */

loc_000EB481: ;
    MEM32(ecx + 0x10) = eax;
    goto loc_000EB489;

loc_000EB486: ;
    MEM32(ecx + 0x10) = edx;

loc_000EB489: ;
    eax = MEM32(ecx + 0x10);
    edx = edx - eax;
    eax = eax << 0x12;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ecx);
    eax = eax + 0x40001818;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 4;

loc_000EB4A0: ;
    eax = MEM32(ecx);
    SET_LO16(edx, MEM16(esp + 4));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0xC));
    eax = eax + 2;
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    eax = eax + 2;
    MEM16(eax + 2) = LO16(edx);
    edx = MEM32(esp + 0x14);
    eax = eax + 2;
    MEM32(eax + 2) = edx;
    SET_LO16(edx, MEM16(esp + 0x18));
    eax = eax + 2;
    MEM16(eax + 4) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x1C));
    eax = eax + 4;
    eax = eax + 2;
    MEM16(eax) = LO16(edx);
    eax = eax + 2;
    MEM32(ecx) = eax;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFCu;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB500
 * Original: 0x000EB500 - 0x000EB565 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB500(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB500: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_000EB531; /* jne: not equal / not zero */

loc_000EB507: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x14);
    if (CMP_BE(edx, ecx)) goto loc_000EB516; /* jbe: below or equal (unsigned <=) */

loc_000EB511: ;
    MEM32(eax + 0x10) = ecx;
    goto loc_000EB519;

loc_000EB516: ;
    MEM32(eax + 0x10) = edx;

loc_000EB519: ;
    ecx = MEM32(eax + 0x10);
    edx = edx - ecx;
    ecx = ecx << 0x12;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(eax);
    ecx = ecx + 0x40001818;
    MEM32(edx) = ecx;
    MEM32(eax) = MEM32(eax) + 4;

loc_000EB531: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(eax + 8);
    esi = MEM32(eax);
    edx = ecx * 4;
    esi = esi + edx;
    edx = MEM32(eax + 0x10);
    edx = edx - ecx;
    POP32(esp, edi);
    MEM32(eax) = esi;
    MEM32(eax + 0x10) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB570
 * Original: 0x000EB570 - 0x000EB5F8 (136 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB570(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EB570: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x88);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax + 0x40;
    ecx = eax + 0x64;
    eax = MEM32(edx + 4);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00067710(); /* call 0x00067710 */

loc_000EB58D: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ZX8(LO8(ecx));
    ebx = eax;
    edx = eax;
    ecx = ecx << 1;
    esp = esp + 8;
    ebx = ebx >> 0x18;
    edx = edx >> 8;
    (void)0; /* cmp ecx, 0xFF - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_LE(ecx, 0xFF)) goto loc_000EB5B3; /* jle: less or equal (signed <=) */

loc_000EB5AE: ;
    ecx = 0xFF;

loc_000EB5B3: ;
    edx = ZX8(LO8(edx));
    edx = edx << 1;
    (void)0; /* cmp edx, 0xFF - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(ecx);
    if (CMP_LE(edx, 0xFF)) goto loc_000EB5C9; /* jle: less or equal (signed <=) */

loc_000EB5C4: ;
    edx = 0xFF;

loc_000EB5C9: ;
    eax = ZX8(LO8(eax));
    eax = eax << 1;
    if (CMP_LE(eax, 0xFF)) goto loc_000EB5DA; /* jle: less or equal (signed <=) */

loc_000EB5D5: ;
    eax = 0xFF;

loc_000EB5DA: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(ebx));
    edx = ZX8(LO8(edx));
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esp + 0xB));
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = ecx << 8;
    ecx = ecx | edx;
    ecx = ecx << 8;
    ecx = ecx | eax;
    MEM32(esi) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB600
 * Original: 0x000EB600 - 0x000EB6A6 (166 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EB600: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000EB624: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000EB63D: ;
    xmm0 = MEMF(0x7502F4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7502F0); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm4 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    POP32(esp, esi);
    if (1 /* jnp after test - parity */) { sub_000EB6A6(); return; } /* jnp: not parity */

loc_000EB660: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esp + 8) = xmm4; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000EB6B8(); return; /* tail jmp 0x000EB6B8 */

}

/**
 * sub_000EB710
 * Original: 0x000EB710 - 0x000EB820 (272 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB710(void)
{

loc_000EB710: ;
    PUSH32(esp, esi);
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB720: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB736: ;
    esi = 0; /* xor self */
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB74D: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1000;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x549B20) = 0x8006;
    MEM32(0x549B9C) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB77A: ;
    PUSH32(esp, 0x900);
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000EB78E: ;
    edx = 0x303;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB79D: ;
    PUSH32(esp, 0x1B02);
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000EB7B1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x3200;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B68) = esi;
    MEM32(0x549B90) = esi;
    MEM32(0x549B94) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB7DC: ;
    PUSH32(esp, esi);
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000EB7EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000EB7F3: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB802: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000EB818: ;
    MEM32(0x549AF8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB820
 * Original: 0x000EB820 - 0x000EB868 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB820(void)
{

loc_000EB820: ;
    eax = MEM32(0x6B8C0C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000EB82B: ;
    eax = MEM32(0x6B8CE4);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000EB835: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_000EB600(); /* call 0x000EB600 */

loc_000EB83E: ;
    PUSH32(esp, 0); sub_000EB710(); /* call 0x000EB710 */

loc_000EB843: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000EB84F: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000EB85B: ;
    PUSH32(esp, 0);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000EB867: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB870
 * Original: 0x000EB870 - 0x000EB8C4 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB870(void)
{

loc_000EB870: ;
    ecx = MEM32(0x5499F0);
    eax = 4;
    PUSH32(esp, ebx);
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x54735C) = eax;
    ecx = ecx | 0x801;
    MEM32(0x547370) = eax;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(0x5499F0) = ecx;
    PUSH32(esp, 0); sub_00537B40(); /* call 0x00537B40 */

loc_000EB8A5: ;
    eax = MEM32(0x5499F0);
    eax = eax | 1;
    MEM32(0x547358) = ebx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547344) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB8D0
 * Original: 0x000EB8D0 - 0x000EB9A3 (211 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB8D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000EB8D0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_000EB9A1; /* jle: less or equal (signed <=) */

loc_000EB8DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi + 0xE;

loc_000EB8E1: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + -2);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    xmm2 = MEMF(0x648E90); /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(0x649218); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(0x649214); /* movss */
    if ((xmm2 <= xmm1)) goto loc_000EB938; /* jbe: below or equal (unsigned <=) */

loc_000EB933: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000EB940;

loc_000EB938: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_000EB940; /* jbe: below or equal (unsigned <=) */

loc_000EB93D: ;
    xmm1 = xmm3; /* movaps */

loc_000EB940: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000EB94A; /* jbe: below or equal (unsigned <=) */

loc_000EB945: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000EB952;

loc_000EB94A: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_000EB952; /* jbe: below or equal (unsigned <=) */

loc_000EB94F: ;
    xmm0 = xmm3; /* movaps */

loc_000EB952: ;
    xmm2 = MEMF(0x648E8C); /* movss */
    ecx = MEM32(esi + -6);
    xmm1 = xmm1 * xmm2; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + -8));
    xmm0 = xmm0 * xmm2; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + -10));
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + -12));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + -14));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EB470(); /* call 0x000EB470 */

loc_000EB993: ;
    esp = esp + 0x1C;
    esi = esi + 0x10;
    edi--;
    if ((edi != 0)) goto loc_000EB8E1; /* jne: not equal / not zero */

loc_000EB9A0: ;
    POP32(esp, esi);

loc_000EB9A1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB9B0
 * Original: 0x000EB9B0 - 0x000EBA18 (104 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB9B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000EB9B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ecx));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edx;
    if (CMP_BE(LO8(eax), 1)) goto loc_000EB9F1; /* jbe: below or equal (unsigned <=) */

loc_000EB9BD: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_000EBA14; /* jne: not equal / not zero */

loc_000EB9C1: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EB9C9: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EB9D4: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EB9DF: ;
    esi = esi + 0x30;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EB9EA: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000EB9F1: ;
    SET_LO16(eax, MEM16(ecx + 6));
    PUSH32(esp, 0); sub_000F1790(); /* call 0x000F1790 */

loc_000EB9FA: ;
    MEMF(esp + 8) = xmm0; /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    eax = 4;
    PUSH32(esp, 0); sub_000EB8D0(); /* call 0x000EB8D0 */

loc_000EBA11: ;
    esp = esp + 4;

loc_000EBA14: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBA20
 * Original: 0x000EBA20 - 0x000EBA4A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBA20(void)
{

loc_000EBA20: ;
    ecx = MEM32(eax);
    MEM32(ecx) = 0x417FC;
    edx = MEM32(eax);
    MEM32(edx + 4) = 0;
    ecx = MEM32(eax);
    ecx = ecx + 8;
    MEM32(eax) = ecx;
    eax = ecx;
    ecx = MEM32(0x5499E8);
    PUSH32(esp, 0);
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000EBA49: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EBA50
 * Original: 0x000EBA50 - 0x000EBB28 (216 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBA50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBA50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(ebp, ebp)) goto loc_000EBB25; /* je: equal / zero */

loc_000EBA60: ;
    if (CMP_EQ(MEM16(ebp + 6), 0)) goto loc_000EBB25; /* je: equal / zero */

loc_000EBA6B: ;
    edx = MEM32(esp + 0x10);
    if (TEST_Z(edx, edx)) goto loc_000EBB25; /* je: equal / zero */

loc_000EBA77: ;
    SET_LO8(eax, MEM8(ecx));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx));
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax), 1)) goto loc_000EBADB; /* jbe: below or equal (unsigned <=) */

loc_000EBA82: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_000EBB23; /* jne: not equal / not zero */

loc_000EBA8A: ;
    /* nop */

loc_000EBA90: ;
    eax = ZX16(LO16(esi));
    edi = eax + eax * 2;
    eax = MEM32(ebp);
    edi = edi << 4;
    edi = edi + eax;
    if ((edi == 0)) goto loc_000EBAC1; /* je: equal / zero */

loc_000EBAA0: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EBAA8: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EBAB3: ;
    edi = edi + 0x20;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_000EB500(); /* call 0x000EB500 */

loc_000EBABE: ;
    esp = esp + 0xC;

loc_000EBAC1: ;
    SET_LO16(esi, LO16(esi) + 1);
    if (CMP_NE(LO16(esi), MEM16(ebp + 4))) goto loc_000EBACC; /* jne: not equal / not zero */

loc_000EBAC9: ;
    SET_LO16(esi, 0); /* xor self */

loc_000EBACC: ;
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(LO16(esi), MEM16(ecx + 2))) goto loc_000EBA90; /* jne: not equal / not zero */

loc_000EBAD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000EBADB: ;
    SET_LO16(eax, MEM16(ecx + 6));
    PUSH32(esp, 0); sub_000F1790(); /* call 0x000F1790 */

loc_000EBAE4: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    edi = MEM32(esp + 0x14);
    edi = edi;

loc_000EBAF0: ;
    eax = ZX16(LO16(esi));
    ecx = eax + eax * 2;
    eax = MEM32(ebp);
    ecx = ecx << 4;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_000EBB12; /* je: equal / zero */

loc_000EBB00: ;
    PUSH32(esp, edi);
    eax = 3;
    PUSH32(esp, 0); sub_000EB8D0(); /* call 0x000EB8D0 */

loc_000EBB0B: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 4;

loc_000EBB12: ;
    SET_LO16(esi, LO16(esi) + 1);
    if (CMP_NE(LO16(esi), MEM16(ebp + 4))) goto loc_000EBB1D; /* jne: not equal / not zero */

loc_000EBB1A: ;
    SET_LO16(esi, 0); /* xor self */

loc_000EBB1D: ;
    if (CMP_NE(LO16(esi), MEM16(edx + 2))) goto loc_000EBAF0; /* jne: not equal / not zero */

loc_000EBB23: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000EBB25: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBB30
 * Original: 0x000EBB30 - 0x000EBBAC (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBB30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000EBB30: ;
    eax = MEM32(esp + 8);
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x64921C); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 2) = MEM16(eax + 2) + LO16(edx);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO16(edx, MEM16(eax + 2));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000EBB78; /* jne: not equal / not zero */

loc_000EBB59: ;
    if (CMP_G(LO16(edx) & LO16(edx), 0)) goto loc_000EBB86; /* jg: greater (signed >) */

loc_000EBB5E: ;
    MEM8(eax) = 1;
    xmm1 = MEMF(ecx + 8); /* movss */
    PUSH32(esp, esi);
    xmm1 = xmm1 * xmm0; /* mulss */
    esi = (int32_t)xmm1; /* cvttss2si */
    edx = edx - esi;
    MEM16(eax + 2) = LO16(edx);
    POP32(esp, esi);
    goto loc_000EBB7D;

loc_000EBB78: ;
    if (CMP_NE(LO8(ebx), 1)) { sub_000EBBAC(); return; } /* jne: not equal / not zero */

loc_000EBB7D: ;
    SET_LO16(edx, MEM16(eax + 2));
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_000EBB8C; /* jle: less or equal (signed <=) */

loc_000EBB86: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000EBB8C: ;
    MEM8(eax) = 3;
    xmm1 = MEMF(ecx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = edx - ecx;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM16(eax + 2) = LO16(edx);
    SET_LO8(eax, (CMP_G(LO16(edx) & LO16(edx), 0)) ? 1 : 0); /* setg */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EBBD0
 * Original: 0x000EBBD0 - 0x000EBC4C (124 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBBD0: ;
    SET_LO8(eax, MEM8(ecx + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000EBC48; /* jne: not equal / not zero */

loc_000EBBD7: ;
    eax = ZX8(MEM8(ecx));
    if (CMP_A(eax, 3)) goto loc_000EBC48; /* ja: above (unsigned >) */

loc_000EBBDF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xEBC4C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x000EBBE6u) goto loc_000EBBE6;
    if (_jt == 0x000EBC19u) goto loc_000EBC19;
    if (_jt == 0x000EBC22u) goto loc_000EBC22;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EBBE6: ;
    xmm1 = MEMF(edx + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000EBC4B; /* jnp: not parity */

loc_000EBBF7: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E90); /* mulss */
    xmm1 = xmm1 / MEMF(edx + 4); /* divss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp += 4; return; /* ret */

loc_000EBC19: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp += 4; return; /* ret */

loc_000EBC22: ;
    xmm1 = MEMF(edx + 0xC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000EBC4B; /* jnp: not parity */

loc_000EBC33: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E90); /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    esp += 4; return; /* ret */

loc_000EBC48: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_000EBC4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EBC60
 * Original: 0x000EBC60 - 0x000EBD50 (240 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBC60: ;
    xmm0 = MEMF(0x648E14); /* movss */
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, esi);
    MEM32(edi) = 0x5F3958;
    MEMF(edi + 0xC) = xmm0; /* movss */
    MEM8(edi + 0x10) = LO8(ebx);
    if (CMP_NE(eax, ebx)) goto loc_000EBC9E; /* jne: not equal / not zero */

loc_000EBC99: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000EBC9E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_000EBCEC; /* je: equal / zero */

loc_000EBCC4: ;
    if (CMP_B(MEM32(esi + 0x80), 0xE6C)) goto loc_000EBCEC; /* jb: below (unsigned <) */

loc_000EBCD0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000EBCDA: ;
    PUSH32(esp, 0xE6C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000EBCE5: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_000EBD10; /* jne: not equal / not zero */

loc_000EBCEC: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000EBCFE: ;
    PUSH32(esp, 0xE6C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000EBD09: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_000EBD50(); return; } /* je: equal / zero */

loc_000EBD10: ;
    ecx = edi + 4;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    MEM32(eax + 8) = ebx;
    ecx = edi + 0x10;
    MEM32(eax + 0x64) = ebx;
    MEM32(eax + 0xE68) = ebx;
    MEM32(eax) = 0x5F39E8;
    MEM32(eax + 4) = 4;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    MEM8(eax + 0x18) = 0x20;
    MEM32(eax + 0x1C) = 0x80;
    POP32(esp, ebp);
    MEM32(edi + 0x14) = eax;
    eax = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBD60
 * Original: 0x000EBD60 - 0x000EBD9B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBD60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EBD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5F3958;
    if (TEST_Z(ecx, ecx)) goto loc_000EBD76; /* je: equal / zero */

loc_000EBD70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000EBD76: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 0x14) = 0;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000EBD95; /* je: equal / zero */

loc_000EBD84: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EBD92: ;
    esp = esp + 4;

loc_000EBD95: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBDA0
 * Original: 0x000EBDA0 - 0x000EBE24 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBDA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EBDA0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EBE24(); return; } /* je: equal / zero */

loc_000EBDBB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000EBDCF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EBE04; /* je: equal / zero */

loc_000EBDDA: ;
    ecx = 0x75DCA8;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000EBDE4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000EBE01: ;
    esp = esp + 0x14;

loc_000EBE04: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000EBE1D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000EBE50
 * Original: 0x000EBE50 - 0x000EBE75 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBE50: ;
    PUSH32(esp, ecx);
    eax = ZX16(LO16(eax));
    ecx = eax;
    ecx = ecx >> 0xC;
    ecx = ecx << 5;
    eax = eax & 0xFFF;
    ecx = ecx + eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(edx + ecx * 4 + 0x31C);
    if (TEST_Z(esi, esi)) { sub_000EBE75(); return; } /* je: equal / zero */

loc_000EBE6E: ;
    eax = MEM32(esi);
    MEM32(esp) = eax;
    g_seh_ebp = ebp; sub_000EBE7C(); return; /* tail jmp 0x000EBE7C */

}

/**
 * sub_000EBEC0
 * Original: 0x000EBEC0 - 0x000EBED8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBEC0: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    ecx = MEM32(ebx + eax * 4 + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    if (TEST_NZ(ecx, ecx)) { sub_000EBED8(); return; } /* jne: not equal / not zero */

loc_000EBED3: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_000EBEE6(); return; /* tail jmp 0x000EBEE6 */

}

/**
 * sub_000EBFF0
 * Original: 0x000EBFF0 - 0x000EC005 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBFF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBFF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = eax;
    ecx = MEM32(ebx + eax * 4 + 4);
    if (TEST_NZ(ecx, ecx)) { sub_000EC005(); return; } /* jne: not equal / not zero */

loc_000EC000: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_000EC013(); return; /* tail jmp 0x000EC013 */

}

/**
 * sub_000EC120
 * Original: 0x000EC120 - 0x000EC166 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC120: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx;
    esi = esi << 5;
    ecx = esi + eax;
    ebp = edi + ecx * 4 + 0x31C;
    ecx = MEM32(ebp);
    if (TEST_Z(ecx, ecx)) goto loc_000EC143; /* je: equal / zero */

loc_000EC13C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_000EC143: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ebp) = 0;
    eax = MEM32(edi + ebx * 4 + 4);
    eax = eax + esi;
    MEM32(edi + eax * 4 + 0x1C) = ecx;
    eax = MEM32(edi + ebx * 4 + 4);
    eax++;
    POP32(esp, esi);
    MEM32(edi + ebx * 4 + 4) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC170
 * Original: 0x000EC170 - 0x000EC1D4 (100 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC170: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = eax + 4;
    ebp = eax + 0x31C;

loc_000EC183: ;
    esi = 0; /* xor self */

loc_000EC185: ;
    ecx = MEM32(ebp);
    if (TEST_Z(ecx, ecx)) goto loc_000EC1B6; /* je: equal / zero */

loc_000EC18C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_000EC193: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebp) = 0;
    ecx = MEM32(edi);
    ecx = ecx + ebx;
    MEM32(eax + ecx * 4 + 0x1C) = esi;
    ecx = MEM32(edi);
    ecx++;
    edx = ebx + esi;
    MEM32(edi) = ecx;
    MEM8(edx + eax + 0x61C) = 0;

loc_000EC1B6: ;
    esi++;
    ebp = ebp + 4;
    if (CMP_L(esi, 0x20)) goto loc_000EC185; /* jl: less (signed <) */

loc_000EC1BF: ;
    ebx = ebx + 0x20;
    edi = edi + 4;
    if (CMP_L(ebx, 0xC0)) goto loc_000EC183; /* jl: less (signed <) */

loc_000EC1CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC1E0
 * Original: 0x000EC1E0 - 0x000EC213 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EC1E0: ;
    edx = 0; /* xor self */
    eax = esi + 4;
    PUSH32(esp, edi);

loc_000EC1E6: ;
    MEM32(eax) = 0;
    ecx = 0; /* xor self */
    edi = edi;

loc_000EC1F0: ;
    edi = MEM32(eax);
    edi = edi + edx;
    MEM32(esi + edi * 4 + 0x1C) = ecx;
    edi = MEM32(eax);
    edi++;
    ecx++;
    (void)0; /* cmp ecx, 0x20 - flags set for next jcc */
    MEM32(eax) = edi;
    if (CMP_L(ecx, 0x20)) goto loc_000EC1F0; /* jl: less (signed <) */

loc_000EC203: ;
    edx = edx + 0x20;
    eax = eax + 4;
    if (CMP_L(edx, 0xC0)) goto loc_000EC1E6; /* jl: less (signed <) */

loc_000EC211: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EC220
 * Original: 0x000EC220 - 0x000EC260 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC220(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EC220: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    MEM32(esi) = 0x5F395C;
    PUSH32(esp, 0); sub_000EC1E0(); /* call 0x000EC1E0 */

loc_000EC22F: ;
    edx = esi + 0x61C;
    ecx = esi + 0x31C;
    edi = 6;

loc_000EC240: ;
    eax = 0; /* xor self */

loc_000EC242: ;
    MEM32(ecx) = 0;
    MEM8(edx + eax) = 0;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x20)) goto loc_000EC242; /* jl: less (signed <) */

loc_000EC255: ;
    edx = edx + 0x20;
    edi--;
    if ((edi != 0)) goto loc_000EC240; /* jne: not equal / not zero */

loc_000EC25B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EC290
 * Original: 0x000EC290 - 0x000EC3A1 (273 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC290: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    MEM8(ebp) = 0;
    MEM32(esp + 4) = 0;
    MEM16(ecx) = 0xFFFF;
    if (TEST_Z(eax, eax)) goto loc_000EC382; /* je: equal / zero */

loc_000EC2B3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    if (TEST_Z(esi, esi)) goto loc_000EC381; /* je: equal / zero */

loc_000EC2C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EBFF0(); /* call 0x000EBFF0 */

loc_000EC2F4: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC380; /* jne: not equal / not zero */

loc_000EC2FE: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_000EC36B; /* jle: less or equal (signed <=) */

loc_000EC305: ;
    edx = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x44) = edx;

loc_000EC311: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx + edi * 8);
    ecx = MEM32(ecx + edi * 8 + 4);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_000F0230(); /* call 0x000F0230 */

loc_000EC324: ;
    MEM32(esp + 0x24) = eax;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC387; /* jne: not equal / not zero */

loc_000EC32E: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x44);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx));
    PUSH32(esp, ebp);
    ebx = ebx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EB1F0(); /* call 0x000EB1F0 */

loc_000EC344: ;
    if (CMP_NE(MEM8(ebp), 0)) { sub_000EC3A1(); return; } /* jne: not equal / not zero */

loc_000EC34A: ;
    SET_LO16(eax, MEM16(esp + 0x24));
    ecx = MEM32(esp + 0x40);
    MEM16(ecx + edi * 2) = LO16(eax);
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x2C);
    edi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x44) = ecx;
    if (CMP_L(edi, eax)) goto loc_000EC311; /* jl: less (signed <) */

loc_000EC36B: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x3C);
    ecx = ecx << 0xC;
    ecx = ecx | eax;
    MEM16(edx) = LO16(ecx);
    POP32(esp, edi);

loc_000EC380: ;
    POP32(esp, ebx);

loc_000EC381: ;
    POP32(esp, esi);

loc_000EC382: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 52; return; /* ret 48 */

loc_000EC387: ;
    edx = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC399: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_000EC3C0
 * Original: 0x000EC3C0 - 0x000EC4A5 (229 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC3C0: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    MEM8(ebp) = 0;
    MEM32(esp + 8) = 0;
    MEM16(edi) = 0xFFFF;
    if (TEST_Z(eax, eax)) goto loc_000EC49F; /* je: equal / zero */

loc_000EC3E4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EBFF0(); /* call 0x000EBFF0 */

loc_000EC419: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC49E; /* jne: not equal / not zero */

loc_000EC41F: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000F0300(); /* call 0x000F0300 */

loc_000EC42E: ;
    MEM32(esp + 0x38) = eax;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_000EC452; /* je: equal / zero */

loc_000EC438: ;
    eax = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x44);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC44A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 52; return; /* ret 48 */

loc_000EC452: ;
    ecx = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EB1F0(); /* call 0x000EB1F0 */

loc_000EC461: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_000EC481; /* je: equal / zero */

loc_000EC467: ;
    edx = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x44);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC479: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 52; return; /* ret 48 */

loc_000EC481: ;
    eax = MEM32(esp + 0x40);
    SET_LO16(ecx, MEM16(esp + 0x38));
    edx = MEM32(esp + 0x44);
    MEM16(eax) = LO16(ecx);
    eax = MEM32(esp + 0x3C);
    edx = edx << 0xC;
    edx = edx | eax;
    MEM16(edi) = LO16(edx);
    POP32(esp, esi);

loc_000EC49E: ;
    POP32(esp, ebx);

loc_000EC49F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_000EC4B0
 * Original: 0x000EC4B0 - 0x000EC5CF (287 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC4B0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    MEM8(ebp) = 0;
    MEM32(esp + 4) = 0;
    MEM16(edx) = 0xFFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EC5B0; /* je: equal / zero */

loc_000EC4D3: ;
    if (TEST_Z(ecx, ecx)) goto loc_000EC5B0; /* je: equal / zero */

loc_000EC4DB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    if (TEST_Z(esi, esi)) goto loc_000EC5AF; /* je: equal / zero */

loc_000EC4E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = MEM32(esp + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0); sub_000EBEC0(); /* call 0x000EBEC0 */

loc_000EC522: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC5AE; /* jne: not equal / not zero */

loc_000EC52C: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_000EC599; /* jle: less or equal (signed <=) */

loc_000EC533: ;
    ecx = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x48) = ecx;
    /* nop */

loc_000EC540: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(eax + edi * 8);
    eax = MEM32(eax + edi * 8 + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EE960(); /* call 0x000EE960 */

loc_000EC552: ;
    MEM32(esp + 0x28) = eax;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC5B5; /* jne: not equal / not zero */

loc_000EC55C: ;
    eax = MEM32(esp + 0x48);
    ebx = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, ebp);
    ebx = ebx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EB1F0(); /* call 0x000EB1F0 */

loc_000EC572: ;
    if (CMP_NE(MEM8(ebp), 0)) { sub_000EC5CF(); return; } /* jne: not equal / not zero */

loc_000EC578: ;
    eax = MEM32(esp + 0x44);
    SET_LO16(edx, MEM16(esp + 0x28));
    ecx = MEM32(esp + 0x48);
    MEM16(eax + edi * 2) = LO16(edx);
    eax = MEM32(esp + 0x30);
    edi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x48) = ecx;
    if (CMP_L(edi, eax)) goto loc_000EC540; /* jl: less (signed <) */

loc_000EC599: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x2C);
    eax = eax << 0xC;
    eax = eax | ecx;
    ecx = MEM32(esp + 0x40);
    MEM16(ecx) = LO16(eax);
    POP32(esp, edi);

loc_000EC5AE: ;
    POP32(esp, ebx);

loc_000EC5AF: ;
    POP32(esp, esi);

loc_000EC5B0: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 56; return; /* ret 52 */

loc_000EC5B5: ;
    ecx = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC5C7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 56; return; /* ret 52 */

}

/**
 * sub_000EC5F0
 * Original: 0x000EC5F0 - 0x000EC6E3 (243 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC5F0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM8(ebp) = 0;
    MEM32(esp + 8) = 0;
    MEM16(edi) = 0xFFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EC6DD; /* je: equal / zero */

loc_000EC614: ;
    if (TEST_Z(ecx, ecx)) goto loc_000EC6DD; /* je: equal / zero */

loc_000EC61C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = MEM32(esp + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0); sub_000EBEC0(); /* call 0x000EBEC0 */

loc_000EC657: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC6DC; /* jne: not equal / not zero */

loc_000EC65D: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000EEAF0(); /* call 0x000EEAF0 */

loc_000EC66C: ;
    MEM32(esp + 0x3C) = eax;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_000EC690; /* je: equal / zero */

loc_000EC676: ;
    ecx = MEM32(esp + 0x40);
    ebx = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC688: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 56; return; /* ret 52 */

loc_000EC690: ;
    edx = MEM32(esp + 0x34);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EB1F0(); /* call 0x000EB1F0 */

loc_000EC69F: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_000EC6BF; /* je: equal / zero */

loc_000EC6A5: ;
    eax = MEM32(esp + 0x40);
    ebx = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC6B7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 56; return; /* ret 52 */

loc_000EC6BF: ;
    ecx = MEM32(esp + 0x44);
    SET_LO16(edx, MEM16(esp + 0x3C));
    eax = MEM32(esp + 0x48);
    MEM16(ecx) = LO16(edx);
    ecx = MEM32(esp + 0x40);
    eax = eax << 0xC;
    eax = eax | ecx;
    MEM16(edi) = LO16(eax);
    POP32(esp, esi);

loc_000EC6DC: ;
    POP32(esp, ebx);

loc_000EC6DD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 56; return; /* ret 52 */

}

/**
 * sub_000EC6F0
 * Original: 0x000EC6F0 - 0x000EC814 (292 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC6F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC6F0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    MEM8(ebp) = 0;
    MEM32(esp + 4) = 0;
    MEM16(edx) = 0xFFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EC7F5; /* je: equal / zero */

loc_000EC713: ;
    if (TEST_Z(ecx, ecx)) goto loc_000EC7F5; /* je: equal / zero */

loc_000EC71B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    if (TEST_Z(esi, esi)) goto loc_000EC7F4; /* je: equal / zero */

loc_000EC728: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = MEM32(esp + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0); sub_000EBEC0(); /* call 0x000EBEC0 */

loc_000EC762: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC7F3; /* jne: not equal / not zero */

loc_000EC76C: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_000EC7DE; /* jle: less or equal (signed <=) */

loc_000EC773: ;
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x4C) = ecx;
    /* nop */

loc_000EC780: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(eax + edi * 8 + 4);
    eax = MEM32(eax + edi * 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0); sub_000EEA20(); /* call 0x000EEA20 */

loc_000EC797: ;
    MEM32(esp + 0x28) = eax;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EC7FA; /* jne: not equal / not zero */

loc_000EC7A1: ;
    ecx = MEM32(esp + 0x4C);
    ebx = MEM32(esp + 0x4C);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx));
    PUSH32(esp, ebp);
    ebx = ebx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EB1F0(); /* call 0x000EB1F0 */

loc_000EC7B7: ;
    if (CMP_NE(MEM8(ebp), 0)) { sub_000EC814(); return; } /* jne: not equal / not zero */

loc_000EC7BD: ;
    SET_LO16(eax, MEM16(esp + 0x28));
    ecx = MEM32(esp + 0x48);
    MEM16(ecx + edi * 2) = LO16(eax);
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x30);
    edi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_L(edi, eax)) goto loc_000EC780; /* jl: less (signed <) */

loc_000EC7DE: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x44);
    ecx = ecx << 0xC;
    ecx = ecx | eax;
    MEM16(edx) = LO16(ecx);
    POP32(esp, edi);

loc_000EC7F3: ;
    POP32(esp, ebx);

loc_000EC7F4: ;
    POP32(esp, esi);

loc_000EC7F5: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 60; return; /* ret 56 */

loc_000EC7FA: ;
    edx = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000EC80C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 60; return; /* ret 56 */

}

/**
 * sub_000EC830
 * Original: 0x000EC830 - 0x000EC8E5 (181 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC830: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebp = esi + 4;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    esi = esi + 0x31C;
    /* nop */

loc_000EC850: ;
    edi = 0; /* xor self */

loc_000EC852: ;
    ebx = MEM32(esi);
    if (TEST_Z(ebx, ebx)) goto loc_000EC8B9; /* je: equal / zero */

loc_000EC858: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax = eax + edi;
    eax = eax + ecx + 0x61C;
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_000EC8AD; /* je: equal / zero */

loc_000EC872: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000EC879: ;
    if (TEST_NZ(eax, eax)) goto loc_000EC8AD; /* jne: not equal / not zero */

loc_000EC87D: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_000EC88A; /* je: equal / zero */

loc_000EC883: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_000EC88A: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    ecx = MEM32(ebp);
    ecx = ecx + edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edx + ecx * 4 + 0x1C) = edi;
    MEM32(ebp) = MEM32(ebp) + 1;
    eax = MEM32(esp + 0x14);
    MEM8(eax) = 0;
    goto loc_000EC8B9;

loc_000EC8AD: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_000EC8B9: ;
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, 0x20)) goto loc_000EC852; /* jl: less (signed <) */

loc_000EC8C2: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ebp = ebp + 4;
    (void)0; /* cmp eax, 0xC0 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 0xC0)) goto loc_000EC850; /* jl: less (signed <) */

loc_000EC8DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EC8F0
 * Original: 0x000EC8F0 - 0x000EC926 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EC8F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_000EB820(); /* call 0x000EB820 */

loc_000EC8FA: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 4;
    esi = esi << 7;
    esi = esi + ecx + 0x31C;
    edi = 0x20;

loc_000EC910: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_000EC91B; /* je: equal / zero */

loc_000EC916: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000EC91B: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_000EC910; /* jne: not equal / not zero */

loc_000EC921: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC930
 * Original: 0x000EC930 - 0x000EC942 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC930: ;
    (void)0; /* cmp LO16(edi), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(LO16(edi), 0xFFFF)) { sub_000EC942(); return; } /* jne: not equal / not zero */

loc_000EC93C: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_000ECA30
 * Original: 0x000ECA30 - 0x000ECAB4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECA30(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ECA30: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000ECAB4(); return; } /* je: equal / zero */

loc_000ECA4B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000ECA5F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000ECA94; /* je: equal / zero */

loc_000ECA6A: ;
    ecx = 0x75DCC4;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000ECA74: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000ECA91: ;
    esp = esp + 0x14;

loc_000ECA94: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000ECAAD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000ECAE0
 * Original: 0x000ECAE0 - 0x000ECB4C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECAE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000ECAE0: ;
    MEM8(edi) = 1;
    edx = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_000ECAF2; /* je: equal / zero */

loc_000ECAEC: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx + 0x70;

loc_000ECAF2: ;
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_LE(edx, esi)) goto loc_000ECB4A; /* jle: less or equal (signed <=) */

loc_000ECAFC: ;
    eax = MEM32(eax + 0x14);
    xmm0 = MEMF(0x6496E8); /* movss */
    eax = eax + 0x100;
    /* nop */

loc_000ECB10: ;
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * MEMF(eax + 4); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * MEMF(eax); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000ECB47; /* ja: above (unsigned >) */

loc_000ECB39: ;
    ecx = eax;
    esi++;
    eax = eax + 0x90;
    if (CMP_L(esi, edx)) goto loc_000ECB10; /* jl: less (signed <) */

loc_000ECB45: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ECB47: ;
    MEM8(edi) = 0;

loc_000ECB4A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ECB50
 * Original: 0x000ECB50 - 0x000ECBAF (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB50(void)
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

loc_000ECB50: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_000ECB65: ;
    xmm1 = MEMF(esi + 0x10); /* movss */
    ebp = MEM32(esp + 0x54);
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_000ECBAF(); return; } /* jbe: below or equal (unsigned <=) */

loc_000ECB76: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_000ECB81: ;
    xmm1 = MEMF(esi + 0x10); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_000ECBAF(); return; } /* jbe: below or equal (unsigned <=) */

loc_000ECB8E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_000ECB95: ;
    xmm1 = MEMF(esi + 0x10); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_000ECBAF(); return; } /* jbe: below or equal (unsigned <=) */

loc_000ECBA2: ;
    fp_push(MEMF(0x648D14)); /* fld float */
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
 * sub_000ECD40
 * Original: 0x000ECD40 - 0x000ECDCA (138 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECD40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000ECD40: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    esi = esi + 0x40;
    edi = 3;

loc_000ECD62: ;
    MEM32(esp + 8) = esi;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_000ECD62; /* jne: not equal / not zero */

loc_000ECD93: ;
    xmm0 = MEMF(0x648F94); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ECDD0
 * Original: 0x000ECDD0 - 0x000ECE10 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECDD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECDD0: ;
    ecx = MEM32(esp + 4);
    MEM32(edx) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = eax + 0xC;
    MEM32(edi) = ebp;
    eax = eax + 0x18;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebx) = eax;
    eax = MEM32(edx);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edi = MEM32(edi);
    if (TEST_Z(esi, esi)) { sub_000ECE10(); return; } /* je: equal / zero */

loc_000ECDFE: ;
    edx = MEM32(esi);
    MEM32(edi) = edx;
    eax = MEM32(esi + 4);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 8);
    MEM32(edi + 8) = ecx;
    g_seh_ebp = ebp; sub_000ECE29(); return; /* tail jmp 0x000ECE29 */

}

/**
 * sub_000ECE50
 * Original: 0x000ECE50 - 0x000ECEF5 (165 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECE50: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 8) = eax;
    if (CMP_LE(edx, eax)) goto loc_000ECEED; /* jle: less or equal (signed <=) */

loc_000ECE6D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edx + edx * 8;
    PUSH32(esp, edi);
    ebx = ebx << 4;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_000ECE80: ;
    eax = MEM32(ecx + 0x14);
    esi = MEM32(esp + 0x10);
    xmm1 = MEMF(esi + eax + 0x78); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 8); /* mulss */
    xmm2 = MEMF(esi + eax + 0x74); /* movss */
    xmm2 = xmm2 * MEMF(ebp + 4); /* mulss */
    edi = esi + eax;
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ebp); /* movss */
    xmm2 = xmm2 * MEMF(edi + 0x70); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000ECECE; /* jbe: below or equal (unsigned <=) */

loc_000ECEB7: ;
    edx--;
    ebx = ebx - 0x90;
    esi = ebx + eax;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x20);
    goto loc_000ECEE4;

loc_000ECECE: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    esi++;
    eax = eax + 0x90;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;

loc_000ECEE4: ;
    if (CMP_L(MEM32(esp + 0x14), edx)) goto loc_000ECE80; /* jl: less (signed <) */

loc_000ECEEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000ECEED: ;
    MEM32(ecx + 0x18) = edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000ECF00
 * Original: 0x000ECF00 - 0x000ED38B (1163 bytes, 346 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000ECF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = 1;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_000ECF30: ;
    ebx = MEM32(edx + 0x14);
    ebx = ebx + MEM32(esp + 0x18);
    if (CMP_GE(edi, ecx)) goto loc_000ED362; /* jge: greater or equal (signed >=) */

loc_000ECF3F: ;
    eax = edi + edi * 8;
    eax = eax << 4;
    ecx = ecx - edi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = ecx;
    goto loc_000ECF60;

    /* nop */
    /* nop */

loc_000ECF60: ;
    edx = MEM32(edx + 0x14);
    xmm1 = MEMF(ebx + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(eax + edx + 0x40); /* subss */
    eax = eax + edx;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ECF83; /* jb: below (unsigned <) */

loc_000ECF7C: ;
    esi = 1;
    goto loc_000ECF85;

loc_000ECF83: ;
    esi = 0; /* xor self */

loc_000ECF85: ;
    xmm1 = MEMF(ebx + 0x44); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x44); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ECFA2; /* jb: below (unsigned <) */

loc_000ECF9B: ;
    ecx = 1;
    goto loc_000ECFA4;

loc_000ECFA2: ;
    ecx = 0; /* xor self */

loc_000ECFA4: ;
    xmm1 = MEMF(ebx + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x48); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ECFC3; /* jb: below (unsigned <) */

loc_000ECFBC: ;
    ecx = 1;
    goto loc_000ECFC5;

loc_000ECFC3: ;
    ecx = 0; /* xor self */

loc_000ECFC5: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ECFCD: ;
    xmm1 = MEMF(ebx + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x4C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ECFEA; /* jb: below (unsigned <) */

loc_000ECFE3: ;
    esi = 1;
    goto loc_000ECFEC;

loc_000ECFEA: ;
    esi = 0; /* xor self */

loc_000ECFEC: ;
    xmm1 = MEMF(ebx + 0x44); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x50); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED009; /* jb: below (unsigned <) */

loc_000ED002: ;
    ecx = 1;
    goto loc_000ED00B;

loc_000ED009: ;
    ecx = 0; /* xor self */

loc_000ED00B: ;
    xmm1 = MEMF(ebx + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x54); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED02A; /* jb: below (unsigned <) */

loc_000ED023: ;
    ecx = 1;
    goto loc_000ED02C;

loc_000ED02A: ;
    ecx = 0; /* xor self */

loc_000ED02C: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED034: ;
    xmm1 = MEMF(ebx + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x58); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED051; /* jb: below (unsigned <) */

loc_000ED04A: ;
    esi = 1;
    goto loc_000ED053;

loc_000ED051: ;
    esi = 0; /* xor self */

loc_000ED053: ;
    xmm1 = MEMF(ebx + 0x44); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x5C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED070; /* jb: below (unsigned <) */

loc_000ED069: ;
    ecx = 1;
    goto loc_000ED072;

loc_000ED070: ;
    ecx = 0; /* xor self */

loc_000ED072: ;
    xmm1 = MEMF(ebx + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x60); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED091; /* jb: below (unsigned <) */

loc_000ED08A: ;
    ecx = 1;
    goto loc_000ED093;

loc_000ED091: ;
    ecx = 0; /* xor self */

loc_000ED093: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED09B: ;
    xmm1 = MEMF(ebx + 0x4C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x40); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED0B8; /* jb: below (unsigned <) */

loc_000ED0B1: ;
    esi = 1;
    goto loc_000ED0BA;

loc_000ED0B8: ;
    esi = 0; /* xor self */

loc_000ED0BA: ;
    xmm1 = MEMF(ebx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x44); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED0D7; /* jb: below (unsigned <) */

loc_000ED0D0: ;
    ecx = 1;
    goto loc_000ED0D9;

loc_000ED0D7: ;
    ecx = 0; /* xor self */

loc_000ED0D9: ;
    xmm1 = MEMF(ebx + 0x54); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x48); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED0F8; /* jb: below (unsigned <) */

loc_000ED0F1: ;
    ecx = 1;
    goto loc_000ED0FA;

loc_000ED0F8: ;
    ecx = 0; /* xor self */

loc_000ED0FA: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED102: ;
    xmm1 = MEMF(ebx + 0x4C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x4C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED11F; /* jb: below (unsigned <) */

loc_000ED118: ;
    esi = 1;
    goto loc_000ED121;

loc_000ED11F: ;
    esi = 0; /* xor self */

loc_000ED121: ;
    xmm1 = MEMF(ebx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x50); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED13E; /* jb: below (unsigned <) */

loc_000ED137: ;
    ecx = 1;
    goto loc_000ED140;

loc_000ED13E: ;
    ecx = 0; /* xor self */

loc_000ED140: ;
    xmm1 = MEMF(ebx + 0x54); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x54); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED15F; /* jb: below (unsigned <) */

loc_000ED158: ;
    ecx = 1;
    goto loc_000ED161;

loc_000ED15F: ;
    ecx = 0; /* xor self */

loc_000ED161: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED169: ;
    xmm1 = MEMF(ebx + 0x4C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x58); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED186; /* jb: below (unsigned <) */

loc_000ED17F: ;
    esi = 1;
    goto loc_000ED188;

loc_000ED186: ;
    esi = 0; /* xor self */

loc_000ED188: ;
    xmm1 = MEMF(ebx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x5C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED1A5; /* jb: below (unsigned <) */

loc_000ED19E: ;
    ecx = 1;
    goto loc_000ED1A7;

loc_000ED1A5: ;
    ecx = 0; /* xor self */

loc_000ED1A7: ;
    xmm1 = MEMF(ebx + 0x54); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x60); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED1C6; /* jb: below (unsigned <) */

loc_000ED1BF: ;
    ecx = 1;
    goto loc_000ED1C8;

loc_000ED1C6: ;
    ecx = 0; /* xor self */

loc_000ED1C8: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED1D0: ;
    xmm1 = MEMF(ebx + 0x58); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x40); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED1ED; /* jb: below (unsigned <) */

loc_000ED1E6: ;
    esi = 1;
    goto loc_000ED1EF;

loc_000ED1ED: ;
    esi = 0; /* xor self */

loc_000ED1EF: ;
    xmm1 = MEMF(ebx + 0x5C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x44); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED20C; /* jb: below (unsigned <) */

loc_000ED205: ;
    ecx = 1;
    goto loc_000ED20E;

loc_000ED20C: ;
    ecx = 0; /* xor self */

loc_000ED20E: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x48); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED22D; /* jb: below (unsigned <) */

loc_000ED226: ;
    ecx = 1;
    goto loc_000ED22F;

loc_000ED22D: ;
    ecx = 0; /* xor self */

loc_000ED22F: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED237: ;
    xmm1 = MEMF(ebx + 0x58); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x4C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED254; /* jb: below (unsigned <) */

loc_000ED24D: ;
    esi = 1;
    goto loc_000ED256;

loc_000ED254: ;
    esi = 0; /* xor self */

loc_000ED256: ;
    xmm1 = MEMF(ebx + 0x5C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x50); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED273; /* jb: below (unsigned <) */

loc_000ED26C: ;
    ecx = 1;
    goto loc_000ED275;

loc_000ED273: ;
    ecx = 0; /* xor self */

loc_000ED275: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x54); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED294; /* jb: below (unsigned <) */

loc_000ED28D: ;
    ecx = 1;
    goto loc_000ED296;

loc_000ED294: ;
    ecx = 0; /* xor self */

loc_000ED296: ;
    if (TEST_NZ(esi, ecx)) goto loc_000ED2FD; /* jne: not equal / not zero */

loc_000ED29A: ;
    xmm1 = MEMF(ebx + 0x58); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x58); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED2B7; /* jb: below (unsigned <) */

loc_000ED2B0: ;
    esi = 1;
    goto loc_000ED2B9;

loc_000ED2B7: ;
    esi = 0; /* xor self */

loc_000ED2B9: ;
    xmm1 = MEMF(ebx + 0x5C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x5C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED2D6; /* jb: below (unsigned <) */

loc_000ED2CF: ;
    ecx = 1;
    goto loc_000ED2D8;

loc_000ED2D6: ;
    ecx = 0; /* xor self */

loc_000ED2D8: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x60); /* subss */
    xmm2 = xmm1; /* movaps */
    esi = esi & ecx;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_000ED2F7; /* jb: below (unsigned <) */

loc_000ED2F0: ;
    ecx = 1;
    goto loc_000ED2F9;

loc_000ED2F7: ;
    ecx = 0; /* xor self */

loc_000ED2F9: ;
    if (TEST_Z(esi, ecx)) goto loc_000ED33F; /* je: equal / zero */

loc_000ED2FD: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x14);
    edx = edx + ecx;
    edi++;
    ecx = ecx + 0x90;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x24) = ecx;
    ecx = 0x24;
    esi = eax;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x24;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x24;
    esi = esp + 0x30;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x14);

loc_000ED33F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ebp + 8);
    eax = eax + 0x90;
    ecx--;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = ecx;
    if ((ecx != 0)) goto loc_000ECF60; /* jne: not equal / not zero */

loc_000ED35E: ;
    ecx = MEM32(esp + 0x2C);

loc_000ED362: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x18);
    eax++;
    ebx = ebx + 0x90;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(eax, edi)) goto loc_000ECF30; /* jl: less (signed <) */

loc_000ED381: ;
    MEM32(edx + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED390
 * Original: 0x000ED390 - 0x000ED3D0 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED390: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = edx;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_000ED410(); /* call 0x000ED410 */

loc_000ED3A0: ;
    ebp = MEM32(esp + 0x18);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_002A21E0(); /* call 0x002A21E0 */

loc_000ED3B5: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000ED3C1; /* je: equal / zero */

loc_000ED3BC: ;
    ebx = 1;

loc_000ED3C1: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_000ED3D0(); return; } /* je: equal / zero */

loc_000ED3C9: ;
    PUSH32(esp, 0); sub_000ED470(); /* call 0x000ED470 */

loc_000ED3CE: ;
    g_seh_ebp = ebp; sub_000ED3D5(); return; /* tail jmp 0x000ED3D5 */

}

/**
 * sub_000ED410
 * Original: 0x000ED410 - 0x000ED45B (75 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED410(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000ED410: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    MEM32(0x76FC50) = eax;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = eax;
    MEM32(0x84B56C) = eax;
    MEM8(0x84B538) = 1;
    MEM32(0x780AB0) = 0x5F3980;
    if (CMP_EQ(LO8(ecx), LO8(eax))) { sub_000ED45B(); return; } /* je: equal / zero */

loc_000ED446: ;
    MEM32(0x6C0210) = 0x27F;
    MEM32(0x74FA2C) = 0x20000;
    esp += 4; return; /* ret */

}

/**
 * sub_000ED470
 * Original: 0x000ED470 - 0x000ED48C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED470(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ED470: ;
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    ecx = MEM32(ecx + 0x14);
    esp = esp - 0xC;
    if (TEST_NZ(ecx, ecx)) { sub_000ED48C(); return; } /* jne: not equal / not zero */

loc_000ED486: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000ED510
 * Original: 0x000ED510 - 0x000ED549 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED510: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_000ED549(); return; } /* jne: not equal / not zero */

loc_000ED542: ;
    esi = 0x870ED8;
    g_seh_ebp = ebp; sub_000ED579(); return; /* tail jmp 0x000ED579 */

}

/**
 * sub_000ED5C0
 * Original: 0x000ED5C0 - 0x000ED6F7 (311 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000ED5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0); sub_000ECD40(); /* call 0x000ECD40 */

loc_000ED5E3: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000ED5F1: ;
    eax = MEM32(esi + 0x18);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    xmm3 = xmm0; /* movaps */
    if (CMP_LE(eax, 1)) goto loc_000ED6F0; /* jle: less or equal (signed <=) */

loc_000ED603: ;
    ecx = esp + 0x14;
    edx = esp + 0x30;
    MEM32(esp + 0x28) = ecx;
    ecx = edx;
    eax--;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0xC) = 0x90;
    MEM32(esp + 0x10) = eax;
    goto loc_000ED630;

    /* nop */
    /* nop */

loc_000ED630: ;
    ebx = MEM32(esi + 0x14);
    ebx = ebx + MEM32(esp + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0); sub_000ECD40(); /* call 0x000ECD40 */

loc_000ED643: ;
    esp = esp + 4;
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_000ED6D3; /* jbe: below or equal (unsigned <=) */

loc_000ED6A4: ;
    eax = MEM32(esp + 0x24);
    ecx = 0x24;
    esi = ebx;
    edi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x24;
    esi = eax;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x24;
    esi = esp + 0x40;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0xC);
    xmm3 = xmm0; /* movaps */

loc_000ED6D3: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = ecx + 0x90;
    eax--;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000ED630; /* jne: not equal / not zero */

loc_000ED6F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED700
 * Original: 0x000ED700 - 0x000ED74A (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED700(void)
{
    int _flags = 0; /* fallback flag var */

loc_000ED700: ;
    eax = MEM32(esi + 0x84);
    SET_LO16(ecx, MEM16(eax + 6));
    if (CMP_EQ(LO16(ecx), MEM16(eax + 4))) goto loc_000ED736; /* je: equal / zero */

loc_000ED710: ;
    edx = ZX16(MEM16(eax + 0xA));
    ecx = MEM32(eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    edx = edx + ecx;
    MEM32(edi) = edx;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    MEM16(eax + 0xA) = MEM16(eax + 0xA) + 1;
    SET_LO16(ecx, MEM16(eax + 0xA));
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) goto loc_000ED749; /* jne: not equal / not zero */

loc_000ED72F: ;
    MEM16(eax + 0xA) = 0;
    esp += 4; return; /* ret */

loc_000ED736: ;
    eax = esi;
    PUSH32(esp, 0); sub_000EE3D0(); /* call 0x000EE3D0 */

loc_000ED73D: ;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000EF380(); /* call 0x000EF380 */

loc_000ED749: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ED750
 * Original: 0x000ED750 - 0x000ED854 (260 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED750(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000ED750: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8C);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax + 0x18;
    if (TEST_Z(esi, esi)) goto loc_000ED851; /* je: equal / zero */

loc_000ED763: ;
    if (CMP_EQ(MEM16(esi + 6), 0)) goto loc_000ED851; /* je: equal / zero */

loc_000ED76E: ;
    if (TEST_Z(edi, edi)) goto loc_000ED851; /* je: equal / zero */

loc_000ED776: ;
    SET_LO16(eax, MEM16(eax + 0xE));
    SET_LO16(edx, MEM16(edi));
    PUSH32(esp, 0); sub_000F1790(); /* call 0x000F1790 */

loc_000ED782: ;
    xmm4 = MEMF(0x648E90); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    xmm3 = MEMF(0x649218); /* movss */
    xmm6 = MEMF(0x649214); /* movss */
    xmm7 = MEMF(0x648E8C); /* movss */
    PUSH32(esp, ebx);
    goto loc_000ED7B0;

    /* nop */

loc_000ED7B0: ;
    ecx = MEM32(esi);
    eax = ZX16(LO16(edx));
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + ecx;
    if ((eax == 0)) goto loc_000ED83B; /* je: equal / zero */

loc_000ED7BF: ;
    eax = eax + 0xE;
    ecx = 3;
    goto loc_000ED7D0;

    /* nop */

loc_000ED7D0: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + -2);
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = (uint32_t)(int32_t)SMEM16(eax);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    if ((xmm3 <= xmm1)) goto loc_000ED801; /* jbe: below or equal (unsigned <=) */

loc_000ED7FC: ;
    xmm1 = xmm3; /* movaps */
    goto loc_000ED809;

loc_000ED801: ;
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 <= xmm6)) goto loc_000ED809; /* jbe: below or equal (unsigned <=) */

loc_000ED806: ;
    xmm1 = xmm6; /* movaps */

loc_000ED809: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    xmm1 = xmm1 * xmm7; /* mulss */
    ebx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + -2) = LO16(ebx);
    if ((xmm3 <= xmm2)) goto loc_000ED81F; /* jbe: below or equal (unsigned <=) */

loc_000ED81A: ;
    xmm1 = xmm3; /* movaps */
    goto loc_000ED82A;

loc_000ED81F: ;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    xmm1 = xmm6; /* movaps */
    if ((xmm2 > xmm6)) goto loc_000ED82A; /* ja: above (unsigned >) */

loc_000ED827: ;
    xmm1 = xmm2; /* movaps */

loc_000ED82A: ;
    xmm1 = xmm1 * xmm7; /* mulss */
    ebx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax) = LO16(ebx);
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_000ED7D0; /* jne: not equal / not zero */

loc_000ED83B: ;
    SET_LO16(edx, LO16(edx) + 1);
    if (CMP_NE(LO16(edx), MEM16(esi + 4))) goto loc_000ED846; /* jne: not equal / not zero */

loc_000ED843: ;
    SET_LO16(edx, 0); /* xor self */

loc_000ED846: ;
    if (CMP_NE(LO16(edx), MEM16(edi + 2))) goto loc_000ED7B0; /* jne: not equal / not zero */

loc_000ED850: ;
    POP32(esp, ebx);

loc_000ED851: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED860
 * Original: 0x000ED860 - 0x000ED8E2 (130 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED860: ;
    esp = esp - 0xBC;
    xmm3 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0xD4);
    eax = MEM32(esp + 0xC0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xD4);
    MEMF(ebx) = xmm3; /* movss */
    MEMF(ebx + 4) = xmm3; /* movss */
    MEMF(ebx + 8) = xmm3; /* movss */
    MEM8(ecx) = 0;
    SET_LO8(ecx, MEM8(esp + 0xD0));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x88) = xmm3; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_000ED8E2(); return; } /* je: equal / zero */

loc_000ED8A4: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_000ED900(); return; /* tail jmp 0x000ED900 */

}

/**
 * sub_000EDE30
 * Original: 0x000EDE30 - 0x000EE0F0 (704 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDE30(void)
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

loc_000EDE30: ;
    esp = esp - 0x44;
    eax = MEM32(esp + 0x48);
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x8C);
    eax = MEM32(esp + 0x5C);
    ecx = eax;
    ecx = ecx >> 0x18;
    MEM8(esp + 5) = LO8(ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx >> 0x10;
    eax = eax >> 8;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = ebx;
    MEM8(esp + 0x12) = LO8(ecx);
    MEM8(esp + 0x13) = LO8(eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    ebp = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    edi = esp + 0x48;
    ecx = esp + 0x24;
    esi = ebp;
    PUSH32(esp, 0); sub_000EAF00(); /* call 0x000EAF00 */

loc_000EDEAB: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x74);
    eax = MEM32(ecx + 0x18);
    if (TEST_Z(ebx, ebx)) goto loc_000EDECD; /* je: equal / zero */

loc_000EDEB6: ;
    if (CMP_EQ(MEM16(ebx + 6), 0)) goto loc_000EDECD; /* je: equal / zero */

loc_000EDEBD: ;
    ecx = MEM32(esp + 0x70);
    if (TEST_Z(ecx, ecx)) goto loc_000EDECD; /* je: equal / zero */

loc_000EDEC5: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(esp + 0x38) = LO16(edx);

loc_000EDECD: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000EE0E6; /* jle: less or equal (signed <=) */

loc_000EDED5: ;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x70) = eax;

loc_000EDEE1: ;
    ebx = ZX16(MEM16(esp + 0x38));
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax);
    edi = ebx + ebx * 2;
    edi = edi << 4;
    edi = edi + ecx;
    if ((edi == 0)) goto loc_000EE0C9; /* je: equal / zero */

loc_000EDEFA: ;
    ecx = MEM32(esp + 0x74);
    esi = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 0x60);
    SET_LO8(eax, MEM8(esp + 0x6C));
    esi = esi + ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EDF1F; /* je: equal / zero */

loc_000EDF0F: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edx + 0x90);
    MEM8(ebx + eax) = 0xFF;
    goto loc_000EDF90;

loc_000EDF1F: ;
    xmm1 = MEMF(esi + 0x74); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 4); /* mulss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ebp); /* movss */
    xmm1 = xmm1 * MEMF(esi + 0x70); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x6499EC); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x6499E8); /* mulss */
    PUSH32(esp, 0); sub_003E5B60(); /* call 0x003E5B60 */

loc_000EDF61: ;
    ecx = ZX8(MEM8(esp + 0x11));
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fsubr dword ptr [0x648d14] */
    /* FPU: fimul dword ptr [esp + 0x18] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000EDF83: ;
    edx = MEM32(esp + 0x58);
    ecx = MEM32(edx + 0x90);
    MEM8(ebx + ecx) = LO8(eax);

loc_000EDF90: ;
    ebp = ZX8(MEM8(esp + 0x12));
    eax = ZX8(MEM8(esp + 0x13));
    ecx = ZX8(MEM8(esp + 0x68));
    ebp = ebp | 0xFFFFFF00u;
    ebp = ebp << 8;
    ebp = ebp | eax;
    ebp = ebp << 8;
    edx = esp + 0x3C;
    ebp = ebp | ecx;
    edi = edi + 4;
    MEM32(esp + 0x18) = edx;
    esi = esi + 0x40;
    ebx = 3;

loc_000EDFC2: ;
    edx = (int32_t)MEMF(esi); /* cvttss2si */
    MEM16(edi + -4) = LO16(edx);
    eax = (int32_t)MEMF(esi + 4); /* cvttss2si */
    MEM16(edi + -2) = LO16(eax);
    ecx = (int32_t)MEMF(esi + 8); /* cvttss2si */
    MEM32(esp + 0x1C) = esi;
    MEM16(edi) = LO16(ecx);
    MEM16(edi + 2) = 1;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x5C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(0x648E8C); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    edx = (int32_t)xmm5; /* cvttss2si */
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    eax = (int32_t)xmm5; /* cvttss2si */
    MEM16(edi + 8) = LO16(edx);
    MEM16(edi + 0xA) = LO16(eax);
    MEM32(edi + 4) = ebp;
    esi = esi + 0xC;
    edi = edi + 0x10;
    ebx--;
    if ((ebx != 0)) goto loc_000EDFC2; /* jne: not equal / not zero */

loc_000EE0A8: ;
    SET_LO16(eax, MEM16(esp + 0x38));
    ecx = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x64);
    SET_LO16(eax, LO16(eax) + 1);
    (void)0; /* cmp LO16(eax), MEM16(ecx + 4) - flags set for next jcc */
    MEM16(esp + 0x38) = LO16(eax);
    if (CMP_NE(LO16(eax), MEM16(ecx + 4))) goto loc_000EE0C9; /* jne: not equal / not zero */

loc_000EE0C2: ;
    MEM16(esp + 0x38) = 0;

loc_000EE0C9: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x70);
    ecx = ecx + 0x90;
    eax--;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x70) = eax;
    if ((eax != 0)) goto loc_000EDEE1; /* jne: not equal / not zero */

loc_000EE0E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000EE0F0
 * Original: 0x000EE0F0 - 0x000EE225 (309 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE0F0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x84);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x30) = edi;
    if (TEST_Z(edi, edi)) goto loc_000EE21D; /* je: equal / zero */

loc_000EE10B: ;
    (void)0; /* cmp MEM16(edi + 6), 0 - flags set for next jcc */
    eax = edi + 8;
    if (CMP_EQ(MEM16(edi + 6), 0)) goto loc_000EE21D; /* je: equal / zero */

loc_000EE119: ;
    if (TEST_Z(eax, eax)) goto loc_000EE21D; /* je: equal / zero */

loc_000EE121: ;
    SET_LO16(eax, MEM16(eax));
    PUSH32(esp, ebx);
    MEM16(esp + 0x14) = LO16(eax);
    PUSH32(esp, esi);
    goto loc_000EE130;

    /* nop */

loc_000EE130: ;
    esi = ZX16(LO16(eax));
    eax = MEM32(edi);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + eax;
    if ((esi == 0)) goto loc_000EE1F3; /* je: equal / zero */

loc_000EE140: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000EE156; /* je: equal / zero */

loc_000EE147: ;
    eax = MEM32(eax + 0xB0);
    if (CMP_NE(eax, MEM32(esi + 0x14))) goto loc_000EE1F3; /* jne: not equal / not zero */

loc_000EE156: ;
    ecx = ZX16(MEM16(esi));
    edx = MEM32(ebp + 0x94);
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000EE16A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EE1F3; /* je: equal / zero */

loc_000EE172: ;
    edi = ZX16(MEM16(esi + 0x1A));
    ecx = ZX16(MEM16(esi + 0x18));
    ebx = esi + 0x18;
    edi = edi - ecx;
    if (CMP_G(edi & edi, 0)) goto loc_000EE18F; /* jg: greater (signed >) */

loc_000EE183: ;
    edx = MEM32(ebp + 0x8C);
    eax = ZX16(MEM16(edx + 4));
    edi = edi + eax;

loc_000EE18F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000EE196: ;
    eax = ZX16(LO16(edi));
    edx = eax + eax * 2;
    PUSH32(esp, 5);
    eax = 0x10;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_000EB410(); /* call 0x000EB410 */

loc_000EE1AC: ;
    esp = esp + 4;
    if (TEST_S(eax, eax)) goto loc_000EE1EF; /* jl: less (signed <) */

loc_000EE1B3: ;
    edx = MEM32(ebp + 0x8C);
    PUSH32(esp, ebx);
    ecx = esi + 8;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_000EBA50(); /* call 0x000EBA50 */

loc_000EE1C5: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    esp = esp + 8;
    eax = eax + 8;
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000EE1EF: ;
    edi = MEM32(esp + 0x38);

loc_000EE1F3: ;
    SET_LO16(eax, MEM16(esp + 0x18));
    SET_LO16(eax, LO16(eax) + 1);
    (void)0; /* cmp LO16(eax), MEM16(edi + 4) - flags set for next jcc */
    MEM16(esp + 0x18) = LO16(eax);
    if (CMP_NE(LO16(eax), MEM16(edi + 4))) goto loc_000EE20C; /* jne: not equal / not zero */

loc_000EE205: ;
    MEM16(esp + 0x18) = 0;

loc_000EE20C: ;
    SET_LO16(eax, MEM16(esp + 0x18));
    if (CMP_NE(LO16(eax), MEM16(edi + 0xA))) goto loc_000EE130; /* jne: not equal / not zero */

loc_000EE21B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000EE21D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EE230
 * Original: 0x000EE230 - 0x000EE268 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE230(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EE230: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x94);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x9A), LO16(edi))) goto loc_000EE265; /* jbe: below or equal (unsigned <=) */

loc_000EE243: ;
    eax = MEM32(esi + 0x8C);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    eax = MEM32(ebx + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000F11C0(); /* call 0x000F11C0 */

loc_000EE259: ;
    edx = ZX16(MEM16(esi + 0x9A));
    edi++;
    if (CMP_L(edi, edx)) goto loc_000EE243; /* jl: less (signed <) */

loc_000EE265: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE270
 * Original: 0x000EE270 - 0x000EE2A0 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE270: ;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x8C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebp = ebp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648E1C); /* movss */
    PUSH32(esp, edi);
    if ((xmm1 <= xmm0)) { sub_000EE2A0(); return; } /* jbe: below or equal (unsigned <=) */

loc_000EE29A: ;
    SET_LO16(edi, 1);
    g_seh_ebp = ebp; sub_000EE2AE(); return; /* tail jmp 0x000EE2AE */

}

/**
 * sub_000EE350
 * Original: 0x000EE350 - 0x000EE369 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE350: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x84);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(edi, edi)) { sub_000EE369(); return; } /* jne: not equal / not zero */

loc_000EE365: ;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_000EE36C(); return; /* tail jmp 0x000EE36C */

}

/**
 * sub_000EE3D0
 * Original: 0x000EE3D0 - 0x000EE478 (168 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE3D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EE3D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x84);
    SET_LO16(esi, MEM16(eax + 6));
    edx = 0; /* xor self */
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_000EE409; /* je: equal / zero */

loc_000EE3E5: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 8));
    edx = ZX16(LO16(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    edx = edx + MEM32(eax);
    esi--;
    ecx++;
    (void)0; /* cmp LO16(ecx), MEM16(eax + 4) - flags set for next jcc */
    MEM16(eax + 6) = LO16(esi);
    MEM16(eax + 8) = LO16(ecx);
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) goto loc_000EE409; /* jne: not equal / not zero */

loc_000EE403: ;
    MEM16(eax + 8) = 0;

loc_000EE409: ;
    ecx = ZX16(MEM16(edx + 0x1A));
    esi = ZX16(MEM16(edx + 0x18));
    eax = MEM32(edi + 0x8C);
    ecx = ecx - esi;
    if (CMP_G(ecx & ecx, 0)) goto loc_000EE423; /* jg: greater (signed >) */

loc_000EE41D: ;
    esi = ZX16(MEM16(eax + 4));
    ecx = ecx + esi;

loc_000EE423: ;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(eax + 6));
    if (CMP_B(LO16(esi), LO16(ecx))) goto loc_000EE44F; /* jb: below (unsigned <) */

loc_000EE42E: ;
    esi = esi - ecx;
    MEM16(eax + 6) = LO16(esi);
    MEM16(eax + 8) = MEM16(eax + 8) + LO16(ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 8));
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(eax + 4));
    if (CMP_B(LO16(ecx), LO16(esi))) goto loc_000EE44F; /* jb: below (unsigned <) */

loc_000EE449: ;
    ecx = ecx - esi;
    MEM16(eax + 8) = LO16(ecx);

loc_000EE44F: ;
    SET_LO8(eax, MEM8(edi + 0x68));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000EE475; /* jne: not equal / not zero */

loc_000EE456: ;
    eax = MEM32(edi + 0x8C);
    edx = ZX16(MEM16(edx));
    ecx = MEM32(edi + 0x84);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x94);
    edi = MEM32(eax + edx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000F10E0(); /* call 0x000F10E0 */

loc_000EE475: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE480
 * Original: 0x000EE480 - 0x000EE4E2 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE480: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(ebx + 0x6C);
    ecx = MEM32(ecx + eax * 4);
    eax = ZX8(MEM8(esi + 8));
    eax = eax - 0;
    PUSH32(esp, edi);
    edi = esi + 8;
    if ((eax == 0)) goto loc_000EE4A7; /* je: equal / zero */

loc_000EE496: ;
    eax--;
    if ((eax != 0)) goto loc_000EE4B2; /* jne: not equal / not zero */

loc_000EE499: ;
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_000ED750(); /* call 0x000ED750 */

loc_000EE4A2: ;
    MEM8(edi) = 2;
    goto loc_000EE4B2;

loc_000EE4A7: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000EE4B2: ;
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000EE4C5; /* je: equal / zero */

loc_000EE4BA: ;
    ecx = MEM32(eax + 0xB0);
    if (CMP_NE(ecx, MEM32(esi + 0x14))) { sub_000EE4E2(); return; } /* jne: not equal / not zero */

loc_000EE4C5: ;
    edx = MEM32(ebx + 0x64);
    ecx = esi + 4;
    PUSH32(esp, 0); sub_000EBBD0(); /* call 0x000EBBD0 */

loc_000EE4D0: ;
    xmm0 = xmm0 * MEMF(0x648E8C); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 2) = LO16(edx);
    g_seh_ebp = ebp; sub_000EE4E8(); return; /* tail jmp 0x000EE4E8 */

}

/**
 * sub_000EE510
 * Original: 0x000EE510 - 0x000EE5AE (158 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE510(void)
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

loc_000EE510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0x8C);
    if (TEST_Z(ebx, ebx)) goto loc_000EE5A9; /* je: equal / zero */

loc_000EE524: ;
    if (CMP_EQ(MEM16(ebx + 6), 0)) goto loc_000EE5A9; /* je: equal / zero */

loc_000EE52B: ;
    ecx = MEM32(esp + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_000EE5A9; /* je: equal / zero */

loc_000EE533: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx));

loc_000EE538: ;
    edx = MEM32(ebx);
    eax = ZX16(LO16(edi));
    esi = eax + eax * 2;
    esi = esi << 4;
    esi = esi + edx;
    if ((esi == 0)) goto loc_000EE596; /* je: equal / zero */

loc_000EE547: ;
    ecx = MEM32(ebp + 0x90);
    edx = ZX8(MEM8(ecx + eax));
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000EE562: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(eax));
    ecx = ecx & 0xFFFFFF;
    eax = eax << 0x18;
    ecx = ecx | eax;
    MEM32(esi + 8) = ecx;
    edx = MEM32(esi + 0x18);
    edx = edx & 0xFFFFFF;
    edx = edx | eax;
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(esi + 0x28);
    ecx = ecx & 0xFFFFFF;
    ecx = ecx | eax;
    MEM32(esi + 0x28) = ecx;
    ecx = MEM32(esp + 0x1C);

loc_000EE596: ;
    SET_LO16(edi, LO16(edi) + 1);
    if (CMP_NE(LO16(edi), MEM16(ebx + 4))) goto loc_000EE5A1; /* jne: not equal / not zero */

loc_000EE59E: ;
    SET_LO16(edi, 0); /* xor self */

loc_000EE5A1: ;
    if (CMP_NE(LO16(edi), MEM16(ecx + 2))) goto loc_000EE538; /* jne: not equal / not zero */

loc_000EE5A7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000EE5A9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000EE5B0
 * Original: 0x000EE5B0 - 0x000EE5FE (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE5B0: ;
    edx = MEM32(ecx + 0x84);
    if (TEST_Z(edx, edx)) goto loc_000EE5FB; /* je: equal / zero */

loc_000EE5BA: ;
    (void)0; /* cmp MEM16(edx + 6), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edx + 8;
    if (CMP_EQ(MEM16(edx + 6), 0)) goto loc_000EE5FA; /* je: equal / zero */

loc_000EE5C5: ;
    if (TEST_Z(esi, esi)) goto loc_000EE5FA; /* je: equal / zero */

loc_000EE5C9: ;
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_000EE5D2: ;
    ebp = MEM32(edx);
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ebp;
    if ((eax == 0)) goto loc_000EE5E7; /* je: equal / zero */

loc_000EE5DE: ;
    if (CMP_NE(MEM32(eax + 0x10), edi)) goto loc_000EE5E7; /* jne: not equal / not zero */

loc_000EE5E3: ;
    MEM8(eax + 5) = 1;

loc_000EE5E7: ;
    SET_LO16(ecx, LO16(ecx) + 1);
    if (CMP_NE(LO16(ecx), MEM16(edx + 4))) goto loc_000EE5F2; /* jne: not equal / not zero */

loc_000EE5EF: ;
    SET_LO16(ecx, 0); /* xor self */

loc_000EE5F2: ;
    if (CMP_NE(LO16(ecx), MEM16(esi + 2))) goto loc_000EE5D2; /* jne: not equal / not zero */

loc_000EE5F8: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000EE5FA: ;
    POP32(esp, esi);

loc_000EE5FB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EE600
 * Original: 0x000EE600 - 0x000EE618 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE600: ;
    esp = esp - 8;
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x84);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (TEST_NZ(edi, edi)) { sub_000EE618(); return; } /* jne: not equal / not zero */

loc_000EE614: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000EE61B(); return; /* tail jmp 0x000EE61B */

}

/**
 * sub_000EE6B0
 * Original: 0x000EE6B0 - 0x000EE6BB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE6B0(void)
{

loc_000EE6B0: ;
    eax = MEM32(ecx + 0x84);
    eax = ZX16(MEM16(eax + 6));
    esp += 4; return; /* ret */

}

/**
 * sub_000EE6C0
 * Original: 0x000EE6C0 - 0x000EE806 (326 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE6C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000EB010(); /* call 0x000EB010 */

loc_000EE6DC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi) = 0x5F3960;
    if (TEST_NZ(esi, esi)) goto loc_000EE6EB; /* jne: not equal / not zero */

loc_000EE6E6: ;
    esi = 0x59509C;

loc_000EE6EB: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(edi + 0x80) = LO8(edx);
    MEM8(edi + 0x88) = LO8(eax);
    MEM16(edi + 0x98) = LO16(ebx);
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EE7FE; /* jne: not equal / not zero */

loc_000EE70E: ;
    PUSH32(esp, 0xC);
    MEM32(edi + 0x84) = 0;
    PUSH32(esp, 0); sub_000EF1E0(); /* call 0x000EF1E0 */

loc_000EE71F: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_000EE736; /* je: equal / zero */

loc_000EE728: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0x18)));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000EF340(); /* call 0x000EF340 */

loc_000EE734: ;
    goto loc_000EE738;

loc_000EE736: ;
    eax = 0; /* xor self */

loc_000EE738: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x84) = eax;
    if (TEST_Z(eax, eax)) goto loc_000EE7D8; /* je: equal / zero */

loc_000EE746: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EE7FE; /* jne: not equal / not zero */

loc_000EE750: ;
    PUSH32(esp, 0xC);
    MEM32(edi + 0x8C) = 0;
    PUSH32(esp, 0); sub_000EF290(); /* call 0x000EF290 */

loc_000EE761: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_000EE776; /* je: equal / zero */

loc_000EE76A: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000EF430(); /* call 0x000EF430 */

loc_000EE774: ;
    goto loc_000EE778;

loc_000EE776: ;
    eax = 0; /* xor self */

loc_000EE778: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x8C) = eax;
    if (TEST_Z(eax, eax)) goto loc_000EE7D8; /* je: equal / zero */

loc_000EE782: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EE7FE; /* jne: not equal / not zero */

loc_000EE788: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(edi + 0x90) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000EE79C: ;
    esi = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x90) = eax;
    if (CMP_EQ(eax, esi)) goto loc_000EE7D8; /* je: equal / zero */

loc_000EE7AB: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EE7FE; /* jne: not equal / not zero */

loc_000EE7B1: ;
    edx = ebx * 4;
    PUSH32(esp, edx);
    MEM32(edi + 0x94) = esi;
    MEM16(edi + 0x9A) = LO16(esi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000EE7CB: ;
    esp = esp + 4;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x94) = eax;
    if (CMP_NE(eax, esi)) goto loc_000EE7E4; /* jne: not equal / not zero */

loc_000EE7D8: ;
    POP32(esp, esi);
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_000EE7E4: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000EE7FE; /* jne: not equal / not zero */

loc_000EE7EA: ;
    eax = 0; /* xor self */
    if (CMP_LE(ebx, esi)) goto loc_000EE7FE; /* jle: less or equal (signed <=) */

loc_000EE7F0: ;
    ecx = MEM32(edi + 0x94);
    MEM32(ecx + eax * 4) = esi;
    eax++;
    if (CMP_L(eax, ebx)) goto loc_000EE7F0; /* jl: less (signed <) */

loc_000EE7FE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000EE810
 * Original: 0x000EE810 - 0x000EE83A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE810(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EE810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000EE840(); /* call 0x000EE840 */

loc_000EE818: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000EE834; /* je: equal / zero */

loc_000EE81F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000EE834; /* je: equal / zero */

loc_000EE827: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EE831: ;
    esp = esp + 4;

loc_000EE834: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EE840
 * Original: 0x000EE840 - 0x000EE95F (287 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE840(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EE840: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x84);
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi) = 0x5F3960;
    if (CMP_EQ(edi, ebx)) goto loc_000EE882; /* je: equal / zero */

loc_000EE858: ;
    eax = MEM32(edi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000EE86F; /* je: equal / zero */

loc_000EE862: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EE86C: ;
    esp = esp + 4;

loc_000EE86F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(edi) = ebx;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EE87F: ;
    esp = esp + 4;

loc_000EE882: ;
    edi = MEM32(esi + 0x8C);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 0x84) = ebx;
    if (CMP_EQ(edi, ebx)) goto loc_000EE8BC; /* je: equal / zero */

loc_000EE892: ;
    eax = MEM32(edi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000EE8A9; /* je: equal / zero */

loc_000EE89C: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EE8A6: ;
    esp = esp + 4;

loc_000EE8A9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(edi) = ebx;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EE8B9: ;
    esp = esp + 4;

loc_000EE8BC: ;
    eax = MEM32(esi + 0x90);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x8C) = ebx;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000EE8DD; /* je: equal / zero */

loc_000EE8D0: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EE8DA: ;
    esp = esp + 4;

loc_000EE8DD: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x9A), LO16(ebx) - flags set for next jcc */
    MEM32(esi + 0x90) = ebx;
    if (CMP_BE(MEM16(esi + 0x9A), LO16(ebx))) goto loc_000EE918; /* jbe: below or equal (unsigned <=) */

loc_000EE8EE: ;
    edi = edi;

loc_000EE8F0: ;
    edx = MEM32(esi + 0x94);
    ecx = MEM32(edx + edi * 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000EE903; /* je: equal / zero */

loc_000EE8FD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000EE903: ;
    ecx = MEM32(esi + 0x94);
    MEM32(ecx + edi * 4) = ebx;
    edx = ZX16(MEM16(esi + 0x9A));
    edi++;
    if (CMP_L(edi, edx)) goto loc_000EE8F0; /* jl: less (signed <) */

loc_000EE918: ;
    edi = MEM32(esi + 0x94);
    if (CMP_EQ(edi, ebx)) goto loc_000EE94D; /* je: equal / zero */

loc_000EE922: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000EE928: ;
    if (TEST_NZ(eax, eax)) goto loc_000EE94D; /* jne: not equal / not zero */

loc_000EE92C: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000EE94A: ;
    esp = esp + 4;

loc_000EE94D: ;
    ecx = esi;
    MEM32(esi + 0x94) = ebx;
    PUSH32(esp, 0); sub_000EB170(); /* call 0x000EB170 */

loc_000EE95A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE960
 * Original: 0x000EE960 - 0x000EE9B2 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x9A));
    PUSH32(esp, ebp);
    ebp = ZX16(LO16(eax));
    ebp = ebp << 2;
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x94);
    MEM32(eax + ebp) = 0;
    SET_LO8(eax, MEM8(esi + 0x68));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EE9B2(); return; } /* je: equal / zero */

loc_000EE98C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000EF130(); /* call 0x000EF130 */

loc_000EE993: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000EE9AE; /* je: equal / zero */

loc_000EE99A: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, 0); sub_000F0C60(); /* call 0x000F0C60 */

loc_000EE9AC: ;
    g_seh_ebp = ebp; sub_000EE9DD(); return; /* tail jmp 0x000EE9DD */

loc_000EE9AE: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_000EE9DD(); return; /* tail jmp 0x000EE9DD */

}

/**
 * sub_000EEA20
 * Original: 0x000EEA20 - 0x000EEA77 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEA20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EEA20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x9A));
    PUSH32(esp, ebp);
    ebp = ZX16(LO16(eax));
    ebp = ebp << 2;
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x94);
    MEM32(eax + ebp) = 0;
    SET_LO8(eax, MEM8(esi + 0x68));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EEA77(); return; } /* je: equal / zero */

loc_000EEA4C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000EF130(); /* call 0x000EF130 */

loc_000EEA53: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000EEA73; /* je: equal / zero */

loc_000EEA5A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0); sub_000F0D60(); /* call 0x000F0D60 */

loc_000EEA71: ;
    g_seh_ebp = ebp; sub_000EEAAA(); return; /* tail jmp 0x000EEAAA */

loc_000EEA73: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_000EEAAA(); return; /* tail jmp 0x000EEAAA */

}

/**
 * sub_000EEAF0
 * Original: 0x000EEAF0 - 0x000EEB3B (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EEAF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x9A));
    PUSH32(esp, ebp);
    ebp = ZX16(LO16(eax));
    ebp = ebp << 2;
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x94);
    MEM32(eax + ebp) = 0;
    SET_LO8(eax, MEM8(esi + 0x68));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EEB3B(); return; } /* je: equal / zero */

loc_000EEB1C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000EF130(); /* call 0x000EF130 */

loc_000EEB23: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000EEB37; /* je: equal / zero */

loc_000EEB2A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000F0E20(); /* call 0x000F0E20 */

loc_000EEB35: ;
    g_seh_ebp = ebp; sub_000EEB66(); return; /* tail jmp 0x000EEB66 */

loc_000EEB37: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_000EEB66(); return; /* tail jmp 0x000EEB66 */

}

/**
 * sub_000EEBB0
 * Original: 0x000EEBB0 - 0x000EEC4E (158 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEBB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EEBB0: ;
    esp = esp - 0x5C;
    edx = MEM32(esp + 0x68);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x78);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ebp = ecx;
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esp + 0x24;
    edx = esp + 0x20;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_000ECDD0(); /* call 0x000ECDD0 */

loc_000EEBF6: ;
    ecx = ZX16(MEM16(esp + 0x7C));
    edx = MEM32(ebp + 0x6C);
    eax = MEM32(esp + 0x90);
    ebx = MEM32(edx + ecx * 4);
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    MEM32(esp + 0x2C) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_000EEC4E(); return; } /* jp: parity */

loc_000EEC20: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 0xC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000EEC31; /* jp: parity */

loc_000EEC2F: ;
    g_seh_ebp = ebp; sub_000EEC53(); return; /* tail jmp 0x000EEC53 */

loc_000EEC31: ;
    xmm5 = MEMF(ebx + 0xC); /* movss */
    xmm6 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000EEC40: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    g_seh_ebp = ebp; sub_000EEC53(); return; /* tail jmp 0x000EEC53 */

}

/**
 * sub_000EF0A0
 * Original: 0x000EF0A0 - 0x000EF10E (110 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF0A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x84);
    if (TEST_Z(ebp, ebp)) goto loc_000EF109; /* je: equal / zero */

loc_000EF0AE: ;
    (void)0; /* cmp MEM16(ebp + 6), 0 - flags set for next jcc */
    eax = ebp + 8;
    if (CMP_EQ(MEM16(ebp + 6), 0)) goto loc_000EF109; /* je: equal / zero */

loc_000EF0B8: ;
    if (TEST_Z(eax, eax)) goto loc_000EF109; /* je: equal / zero */

loc_000EF0BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax));

loc_000EF0C1: ;
    eax = MEM32(ebp);
    esi = ZX16(LO16(edi));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + eax;
    if ((esi == 0)) goto loc_000EF0F6; /* je: equal / zero */

loc_000EF0CE: ;
    ecx = MEM32(ebx + 0x64);
    eax = MEM32(ecx);
    edx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000EF0DF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EF0EF; /* je: equal / zero */

loc_000EF0E3: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000EE480(); /* call 0x000EE480 */

loc_000EF0ED: ;
    goto loc_000EF0F6;

loc_000EF0EF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000EE3D0(); /* call 0x000EE3D0 */

loc_000EF0F6: ;
    SET_LO16(edi, LO16(edi) + 1);
    if (CMP_NE(LO16(edi), MEM16(ebp + 4))) goto loc_000EF101; /* jne: not equal / not zero */

loc_000EF0FE: ;
    SET_LO16(edi, 0); /* xor self */

loc_000EF101: ;
    if (CMP_NE(LO16(edi), MEM16(ebp + 0xA))) goto loc_000EF0C1; /* jne: not equal / not zero */

loc_000EF107: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000EF109: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF110
 * Original: 0x000EF110 - 0x000EF11E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF110(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF110: ;
    SET_LO8(eax, MEM8(ecx + 0x68));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EF11E(); return; } /* je: equal / zero */

loc_000EF117: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EE0F0(); /* call 0x000EE0F0 */

loc_000EF11D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EF130
 * Original: 0x000EF130 - 0x000EF1B4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF130(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF130: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EF1B4(); return; } /* je: equal / zero */

loc_000EF14B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000EF15F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EF194; /* je: equal / zero */

loc_000EF16A: ;
    ecx = 0x75DD30;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000EF174: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000EF191: ;
    esp = esp + 0x14;

loc_000EF194: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000EF1AD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000EF1E0
 * Original: 0x000EF1E0 - 0x000EF264 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF1E0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EF264(); return; } /* je: equal / zero */

loc_000EF1FB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000EF20F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EF244; /* je: equal / zero */

loc_000EF21A: ;
    ecx = 0x75DD08;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000EF224: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000EF241: ;
    esp = esp + 0x14;

loc_000EF244: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000EF25D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000EF290
 * Original: 0x000EF290 - 0x000EF314 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF290(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF290: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EF314(); return; } /* je: equal / zero */

loc_000EF2AB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000EF2BF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EF2F4; /* je: equal / zero */

loc_000EF2CA: ;
    ecx = 0x75DCE0;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000EF2D4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000EF2F1: ;
    esp = esp + 0x14;

loc_000EF2F4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000EF30D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000EF340
 * Original: 0x000EF340 - 0x000EF37D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF340(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF340: ;
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    MEM16(esi + 6) = 0;
    MEM16(esi + 0xA) = 0;
    MEM16(esi + 8) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000EF368: ;
    esp = esp + 4;
    MEM32(esi) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(eax, eax)) goto loc_000EF37A; /* jne: not equal / not zero */

loc_000EF373: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx) = 1;

loc_000EF37A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF380
 * Original: 0x000EF380 - 0x000EF38F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF380(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF380: ;
    SET_LO16(ecx, MEM16(eax + 6));
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) { sub_000EF38F(); return; } /* jne: not equal / not zero */

loc_000EF38A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF3C0
 * Original: 0x000EF3C0 - 0x000EF3CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF3C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF3C0: ;
    if (CMP_NE(MEM16(eax + 6), 0)) { sub_000EF3CC(); return; } /* jne: not equal / not zero */

loc_000EF3C7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF400
 * Original: 0x000EF400 - 0x000EF40A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF400(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF400: ;
    if (CMP_NE(MEM16(ecx + 6), 0)) { sub_000EF40A(); return; } /* jne: not equal / not zero */

loc_000EF407: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000EF430
 * Original: 0x000EF430 - 0x000EF470 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF430(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF430: ;
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 2;
    eax = eax << 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    MEM16(esi + 6) = 0;
    MEM16(esi + 0xA) = 0;
    MEM16(esi + 8) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000EF45B: ;
    esp = esp + 4;
    MEM32(esi) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(eax, eax)) goto loc_000EF46D; /* jne: not equal / not zero */

loc_000EF466: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx) = 1;

loc_000EF46D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF470
 * Original: 0x000EF470 - 0x000EF48B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF470(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF470: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_000EF488; /* je: equal / zero */

loc_000EF475: ;
    edx = ZX16(MEM16(eax + 6));
    PUSH32(esp, edi);
    edi = ZX16(LO16(ecx));
    edx = edx + edi;
    edi = ZX16(MEM16(eax + 4));
    (void)0; /* cmp edx, edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_LE(edx, edi)) { sub_000EF48B(); return; } /* jle: less or equal (signed <=) */

loc_000EF488: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000EF4C0
 * Original: 0x000EF4C0 - 0x000EF6E4 (548 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF4C0: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_000EF4E4; /* je: equal / zero */

loc_000EF4DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_000EF4E4: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_000EF4F1: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_000EF5EC; /* jne: not equal / not zero */

loc_000EF504: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000EF6B8; /* jbe: below or equal (unsigned <=) */

loc_000EF50C: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_000EF525: ;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_000EF5D7; /* jbe: below or equal (unsigned <=) */

loc_000EF5C4: ;
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_002E4F60(); /* call 0x002E4F60 */

loc_000EF5CB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EF5D7; /* je: equal / zero */

loc_000EF5CF: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_000EF5D7: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_000EF525; /* jl: less (signed <) */

loc_000EF5E7: ;
    goto loc_000EF6B8;

loc_000EF5EC: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_000EF6B8; /* jbe: below or equal (unsigned <=) */

loc_000EF5F4: ;
    eax = esp + 0x58;
    edx = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_000EF610: ;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_000EF6A8; /* jbe: below or equal (unsigned <=) */

loc_000EF6A7: ;
    ebx++;

loc_000EF6A8: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_000EF610; /* jl: less (signed <) */

loc_000EF6B8: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_000EF4F1; /* jne: not equal / not zero */

loc_000EF6C5: ;
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000EF6F0
 * Original: 0x000EF6F0 - 0x000EF791 (161 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF6F0(void)
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

loc_000EF6F0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm3 = MEMF(0x648E8C); /* movss */
    xmm2 = MEMF(0x648E90); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM16(esi + 4) = MEM16(esi + 4) + LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    SET_LO16(eax, MEM16(esi + 4));
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000EF75A; /* jbe: below or equal (unsigned <=) */

loc_000EF74A: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi + 4) = LO16(edx);

loc_000EF75A: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000EF789: ;
    MEM16(esi + 6) = LO16(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000EF7A0
 * Original: 0x000EF7A0 - 0x000EF7C7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF7A0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F3950;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000EF7C1; /* je: equal / zero */

loc_000EF7B0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000EF7BE: ;
    esp = esp + 4;

loc_000EF7C1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF7D0
 * Original: 0x000EF7D0 - 0x000EF825 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF7D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000EF7D0: ;
    eax = MEM32(esp + 8);
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x64921C); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 2) = MEM16(eax + 2) + LO16(edx);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO16(edx, MEM16(eax + 2));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000EF81A; /* jne: not equal / not zero */

loc_000EF7F9: ;
    if (CMP_G(LO16(edx) & LO16(edx), 0)) goto loc_000EF81F; /* jg: greater (signed >) */

loc_000EF7FE: ;
    MEM8(eax) = 2;
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = edx - ecx;
    MEM16(eax + 2) = LO16(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000EF81A: ;
    if (CMP_NE(LO8(ebx), 2)) { sub_000EF825(); return; } /* jne: not equal / not zero */

loc_000EF81F: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EF840
 * Original: 0x000EF840 - 0x000EF88A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF840: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = eax + 0xC;
    MEM32(edi) = ebp;
    eax = eax + 0x18;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebx) = eax;
    eax = MEM32(esi);
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edi = MEM32(edi);
    if (TEST_Z(edx, edx)) { sub_000EF88A(); return; } /* je: equal / zero */

loc_000EF878: ;
    eax = MEM32(edx);
    MEM32(edi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    g_seh_ebp = ebp; sub_000EF8A3(); return; /* tail jmp 0x000EF8A3 */

}

/**
 * sub_000EF8C0
 * Original: 0x000EF8C0 - 0x000EF971 (177 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF8C0(void)
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

loc_000EF8C0: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(ebx + 0x6C);
    ecx = MEM32(ecx + eax * 4);
    eax = ZX8(MEM8(esi + 8));
    eax = eax - 0;
    PUSH32(esp, edi);
    edi = esi + 8;
    if ((eax == 0)) goto loc_000EF8E5; /* je: equal / zero */

loc_000EF8D6: ;
    eax--;
    if ((eax != 0)) goto loc_000EF8F0; /* jne: not equal / not zero */

loc_000EF8D9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000EF9D0(); /* call 0x000EF9D0 */

loc_000EF8E0: ;
    MEM8(edi) = 2;
    goto loc_000EF8F0;

loc_000EF8E5: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000EF8F0: ;
    edx = MEM32(ebx + 0x64);
    ecx = esi + 4;
    PUSH32(esp, 0); sub_000EBBD0(); /* call 0x000EBBD0 */

loc_000EF8FB: ;
    xmm0 = xmm0 * MEMF(0x648E8C); /* mulss */
    edx = ZX8(MEM8(esi + 0x18));
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEM32(esp + 8) = ecx;
    MEM16(esi + 2) = LO16(eax);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000EF92F: ;
    ecx = MEM32(esi + 0x24);
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    ecx = ecx & 0xFFFFFF;
    ecx = ecx | eax;
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(esi + 0x34);
    edx = edx & 0xFFFFFF;
    edx = edx | eax;
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(esi + 0x44);
    ecx = ecx & 0xFFFFFF;
    ecx = ecx | eax;
    MEM32(esi + 0x44) = ecx;
    edx = MEM32(esi + 0x54);
    edx = edx & 0xFFFFFF;
    edx = edx | eax;
    MEM32(esi + 0x54) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000EF980
 * Original: 0x000EF980 - 0x000EF9CD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF980(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EF980: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x80);
    SET_LO16(ecx, MEM16(eax + 6));
    if (CMP_EQ(LO16(ecx), MEM16(eax + 4))) goto loc_000EF9BA; /* je: equal / zero */

loc_000EF993: ;
    edx = ZX16(MEM16(eax + 0xA));
    ecx = MEM32(eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5C);
    edx = edx + ecx;
    MEM32(esi) = edx;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    MEM16(eax + 0xA) = MEM16(eax + 0xA) + 1;
    SET_LO16(ecx, MEM16(eax + 0xA));
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) goto loc_000EF9CB; /* jne: not equal / not zero */

loc_000EF9B2: ;
    MEM16(eax + 0xA) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000EF9BA: ;
    PUSH32(esp, 0); sub_000EFF80(); /* call 0x000EFF80 */

loc_000EF9BF: ;
    eax = MEM32(edi + 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000F0900(); /* call 0x000F0900 */

loc_000EF9CB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF9D0
 * Original: 0x000EF9D0 - 0x000EF9EE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF9D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF9D0: ;
    SET_LO16(eax, MEM16(ecx + 0xE));
    xmm6 = MEMF(0x648E90); /* movss */
    esp = esp - 8;
    if (TEST_NZ(LO16(eax), LO16(eax))) { sub_000EF9EE(); return; } /* jne: not equal / not zero */

loc_000EF9E4: ;
    xmm4 = MEMF(0x648E84); /* movss */
    g_seh_ebp = ebp; sub_000EFA27(); return; /* tail jmp 0x000EFA27 */

}

/**
 * sub_000EFAD0
 * Original: 0x000EFAD0 - 0x000EFB98 (200 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFAD0(void)
{
    float xmm0, xmm1;

loc_000EFAD0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esp + 0x18;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_000EAF00(); /* call 0x000EAF00 */

loc_000EFAE9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x24) = xmm0; /* movss */
    MEMF(ebx + 0x20) = xmm0; /* movss */
    MEMF(ebx + 0x18) = xmm0; /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    MEMF(ebx + 0x38) = xmm0; /* movss */
    MEMF(ebx + 0x34) = xmm0; /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */
    MEMF(ebx + 0x2C) = xmm0; /* movss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    MEMF(ebx + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    MEMF(ebx + 0x14) = xmm0; /* movss */
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    eax = MEM32(esi);
    MEMF(ebx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ebx + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    POP32(esp, edi);
    MEMF(ebx + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    POP32(esp, esi);
    MEM32(ebx + 0x10) = eax;
    MEMF(ebx + 0x14) = xmm1; /* movss */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EFBA0
 * Original: 0x000EFBA0 - 0x000EFC43 (163 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFBA0: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ZX8(LO8(ecx));
    edx = eax;
    edx = edx >> 8;
    ecx = ecx | 0xFFFFFF00u;
    PUSH32(esp, ebx);
    edx = ZX8(LO8(edx));
    ecx = ecx << 8;
    ebx = eax;
    ecx = ecx | edx;
    edx = MEM32(esp + 8);
    eax = ZX8(LO8(eax));
    ebx = ebx >> 0x18;
    ecx = ecx << 8;
    PUSH32(esp, ebp);
    ecx = ecx | eax;
    PUSH32(esp, edi);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = edx + 8;
    eax = esi + 0x20;
    edi = 4;
    ebx = 1;

loc_000EFBE2: ;
    ebp = (int32_t)MEMF(edx + -8); /* cvttss2si */
    MEM16(eax + -4) = LO16(ebp);
    ebp = (int32_t)MEMF(edx + -4); /* cvttss2si */
    MEM16(eax + -2) = LO16(ebp);
    ebp = (int32_t)MEMF(edx); /* cvttss2si */
    MEM16(eax) = LO16(ebp);
    MEM16(eax + 2) = LO16(ebx);
    MEM32(eax + 4) = ecx;
    eax = eax + 0x10;
    edx = edx + 0xC;
    edi--;
    if ((edi != 0)) goto loc_000EFBE2; /* jne: not equal / not zero */

loc_000EFC0B: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    POP32(esp, edi);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebp);
    eax = 0x80;
    POP32(esp, ebx);
    ecx = 0xFFFFFF80u;
    MEM16(esi + 0x2A) = LO16(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000EFC43(); return; } /* je: equal / zero */

loc_000EFC24: ;
    MEM16(esi + 0x28) = LO16(ecx);
    MEM16(esi + 0x38) = LO16(ecx);
    MEM16(esi + 0x3A) = LO16(ecx);
    MEM16(esi + 0x48) = LO16(eax);
    MEM16(esi + 0x4A) = LO16(ecx);
    MEM16(esi + 0x58) = LO16(eax);
    MEM16(esi + 0x5A) = LO16(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EFC70
 * Original: 0x000EFC70 - 0x000EFD57 (231 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFC70: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x80);
    if (TEST_Z(ebp, ebp)) goto loc_000EFD50; /* je: equal / zero */

loc_000EFC86: ;
    (void)0; /* cmp MEM16(ebp + 6), 0 - flags set for next jcc */
    eax = ebp + 8;
    if (CMP_EQ(MEM16(ebp + 6), 0)) goto loc_000EFD50; /* je: equal / zero */

loc_000EFC94: ;
    if (TEST_Z(eax, eax)) goto loc_000EFD50; /* je: equal / zero */

loc_000EFC9C: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000EFCA2: ;
    eax = MEM32(ebp);
    esi = ZX16(LO16(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    esi = esi + eax;
    if ((esi == 0)) goto loc_000EFD38; /* je: equal / zero */

loc_000EFCB3: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000EFCC5; /* je: equal / zero */

loc_000EFCBA: ;
    ecx = MEM32(eax + 0xB0);
    if (CMP_NE(ecx, MEM32(esi + 0x14))) goto loc_000EFD38; /* jne: not equal / not zero */

loc_000EFCC5: ;
    edx = ZX16(MEM16(esi));
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 0x88);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_000EFCDD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000EFD38; /* je: equal / zero */

loc_000EFCE1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000EFCE8: ;
    PUSH32(esp, 8);
    eax = 0x10;
    edx = 4;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_000EB410(); /* call 0x000EB410 */

loc_000EFCFD: ;
    esp = esp + 4;
    if (TEST_S(eax, eax)) goto loc_000EFD38; /* jl: less (signed <) */

loc_000EFD04: ;
    ecx = esi + 8;
    edx = esi + 0x1C;
    eax = edi;
    PUSH32(esp, 0); sub_000EB9B0(); /* call 0x000EB9B0 */

loc_000EFD11: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000EFD38: ;
    SET_LO16(ebx, LO16(ebx) + 1);
    if (CMP_NE(LO16(ebx), MEM16(ebp + 4))) goto loc_000EFD43; /* jne: not equal / not zero */

loc_000EFD40: ;
    SET_LO16(ebx, 0); /* xor self */

loc_000EFD43: ;
    if (CMP_NE(LO16(ebx), MEM16(ebp + 0xA))) goto loc_000EFCA2; /* jne: not equal / not zero */

loc_000EFD4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000EFD50: ;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EFD60
 * Original: 0x000EFD60 - 0x000EFD91 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFD60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EFD60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x88);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(MEM16(edi + 0x8E), LO16(esi))) goto loc_000EFD8E; /* jbe: below or equal (unsigned <=) */

loc_000EFD73: ;
    eax = MEM32(edi + 0x80);
    PUSH32(esp, eax);
    eax = MEM32(ebx + esi * 4);
    PUSH32(esp, 0); sub_000F14E0(); /* call 0x000F14E0 */

loc_000EFD82: ;
    ecx = ZX16(MEM16(edi + 0x8E));
    esi++;
    if (CMP_L(esi, ecx)) goto loc_000EFD73; /* jl: less (signed <) */

loc_000EFD8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFDA0
 * Original: 0x000EFDA0 - 0x000EFDB8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFDA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFDA0: ;
    esp = esp - 8;
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x80);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (TEST_NZ(edi, edi)) { sub_000EFDB8(); return; } /* jne: not equal / not zero */

loc_000EFDB4: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_000EFDBB(); return; /* tail jmp 0x000EFDBB */

}

/**
 * sub_000EFE50
 * Original: 0x000EFE50 - 0x000EFE5B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFE50(void)
{

loc_000EFE50: ;
    eax = MEM32(ecx + 0x80);
    eax = ZX16(MEM16(eax + 6));
    esp += 4; return; /* ret */

}

/**
 * sub_000EFE60
 * Original: 0x000EFE60 - 0x000EFE80 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFE60: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648E1C); /* movss */
    PUSH32(esp, esi);
    if ((xmm1 <= xmm0)) { sub_000EFE80(); return; } /* jbe: below or equal (unsigned <=) */

loc_000EFE7A: ;
    SET_LO16(esi, 1);
    g_seh_ebp = ebp; sub_000EFE8E(); return; /* tail jmp 0x000EFE8E */

}

/**
 * sub_000EFF00
 * Original: 0x000EFF00 - 0x000EFF19 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFF00: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x80);
    if (TEST_NZ(ebx, ebx)) { sub_000EFF19(); return; } /* jne: not equal / not zero */

loc_000EFF11: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_000EFF20(); return; /* tail jmp 0x000EFF20 */

}

/**
 * sub_000EFF80
 * Original: 0x000EFF80 - 0x000EFFF2 (114 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFF80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000EFF80: ;
    eax = MEM32(edi + 0x80);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 6));
    ecx = 0; /* xor self */
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_000EFFB6; /* je: equal / zero */

loc_000EFF92: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 8));
    ecx = ZX16(LO16(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    ecx = ecx + MEM32(eax);
    esi--;
    edx++;
    (void)0; /* cmp LO16(edx), MEM16(eax + 4) - flags set for next jcc */
    MEM16(eax + 6) = LO16(esi);
    MEM16(eax + 8) = LO16(edx);
    if (CMP_NE(LO16(edx), MEM16(eax + 4))) goto loc_000EFFB6; /* jne: not equal / not zero */

loc_000EFFB0: ;
    MEM16(eax + 8) = 0;

loc_000EFFB6: ;
    SET_LO8(eax, MEM8(edi + 0x68));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000EFFF1; /* jne: not equal / not zero */

loc_000EFFBE: ;
    eax = ZX16(MEM16(ecx));
    ecx = MEM32(edi + 0x88);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edx + 8);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 6));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_000EFFF1; /* je: equal / zero */

loc_000EFFD8: ;
    ecx--;
    MEM16(eax + 8) = MEM16(eax + 8) + 1;
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 8));
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) goto loc_000EFFF1; /* jne: not equal / not zero */

loc_000EFFEB: ;
    MEM16(eax + 8) = 0;

loc_000EFFF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F0000
 * Original: 0x000F0000 - 0x000F004E (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0000: ;
    edx = MEM32(ecx + 0x80);
    if (TEST_Z(edx, edx)) goto loc_000F004B; /* je: equal / zero */

loc_000F000A: ;
    (void)0; /* cmp MEM16(edx + 6), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edx + 8;
    if (CMP_EQ(MEM16(edx + 6), 0)) goto loc_000F004A; /* je: equal / zero */

loc_000F0015: ;
    if (TEST_Z(esi, esi)) goto loc_000F004A; /* je: equal / zero */

loc_000F0019: ;
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_000F0022: ;
    ebp = MEM32(edx);
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    eax = eax + ebp;
    if ((eax == 0)) goto loc_000F0037; /* je: equal / zero */

loc_000F002E: ;
    if (CMP_NE(MEM32(eax + 0x10), edi)) goto loc_000F0037; /* jne: not equal / not zero */

loc_000F0033: ;
    MEM8(eax + 5) = 1;

loc_000F0037: ;
    SET_LO16(ecx, LO16(ecx) + 1);
    if (CMP_NE(LO16(ecx), MEM16(edx + 4))) goto loc_000F0042; /* jne: not equal / not zero */

loc_000F003F: ;
    SET_LO16(ecx, 0); /* xor self */

loc_000F0042: ;
    if (CMP_NE(LO16(ecx), MEM16(esi + 2))) goto loc_000F0022; /* jne: not equal / not zero */

loc_000F0048: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000F004A: ;
    POP32(esp, esi);

loc_000F004B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0050
 * Original: 0x000F0050 - 0x000F011A (202 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0050: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000EB010(); /* call 0x000EB010 */

loc_000F0067: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM32(edi) = 0x5F39C0;
    MEM8(edi + 0x84) = LO8(edx);
    MEM16(edi + 0x8C) = LO16(ebx);
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000F0113; /* jne: not equal / not zero */

loc_000F0088: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0xC);
    MEM32(edi + 0x80) = esi;
    PUSH32(esp, 0); sub_000F0810(); /* call 0x000F0810 */

loc_000F0098: ;
    ecx = eax;
    esp = esp + 4;
    if (CMP_EQ(ecx, esi)) goto loc_000F00B3; /* je: equal / zero */

loc_000F00A1: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0x14)));
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0); sub_000F08C0(); /* call 0x000F08C0 */

loc_000F00AF: ;
    esi = 0; /* xor self */
    goto loc_000F00B5;

loc_000F00B3: ;
    eax = 0; /* xor self */

loc_000F00B5: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x80) = eax;
    if (CMP_NE(eax, esi)) goto loc_000F00CB; /* jne: not equal / not zero */

loc_000F00BF: ;
    POP32(esp, esi);
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000F00CB: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000F0112; /* jne: not equal / not zero */

loc_000F00D1: ;
    eax = ebx * 4;
    PUSH32(esp, eax);
    MEM32(edi + 0x88) = esi;
    MEM16(edi + 0x8E) = LO16(esi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000F00EB: ;
    esp = esp + 4;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edi + 0x88) = eax;
    if (CMP_EQ(eax, esi)) goto loc_000F00BF; /* je: equal / zero */

loc_000F00F8: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000F0112; /* jne: not equal / not zero */

loc_000F00FE: ;
    eax = 0; /* xor self */
    if (CMP_LE(ebx, esi)) goto loc_000F0112; /* jle: less or equal (signed <=) */

loc_000F0104: ;
    ecx = MEM32(edi + 0x88);
    MEM32(ecx + eax * 4) = esi;
    eax++;
    if (CMP_L(eax, ebx)) goto loc_000F0104; /* jl: less (signed <) */

loc_000F0112: ;
    POP32(esp, esi);

loc_000F0113: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F0120
 * Original: 0x000F0120 - 0x000F014A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0120(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000F0150(); /* call 0x000F0150 */

loc_000F0128: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000F0144; /* je: equal / zero */

loc_000F012F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000F0144; /* je: equal / zero */

loc_000F0137: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F0141: ;
    esp = esp + 4;

loc_000F0144: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0150
 * Original: 0x000F0150 - 0x000F0226 (214 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0150(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0150: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x80);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0x5F39C0;
    if (TEST_Z(edi, edi)) goto loc_000F0193; /* je: equal / zero */

loc_000F0165: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_000F017C; /* je: equal / zero */

loc_000F016F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F0179: ;
    esp = esp + 4;

loc_000F017C: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(edi) = 0;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F0190: ;
    esp = esp + 4;

loc_000F0193: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x8E), LO16(edi) - flags set for next jcc */
    MEM32(esi + 0x80) = 0;
    if (CMP_BE(MEM16(esi + 0x8E), LO16(edi))) goto loc_000F01DC; /* jbe: below or equal (unsigned <=) */

loc_000F01A8: ;
    goto loc_000F01B0;

    /* nop */

loc_000F01B0: ;
    edx = MEM32(esi + 0x88);
    ecx = MEM32(edx + edi * 4);
    if (TEST_Z(ecx, ecx)) goto loc_000F01C3; /* je: equal / zero */

loc_000F01BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000F01C3: ;
    ecx = MEM32(esi + 0x88);
    MEM32(ecx + edi * 4) = 0;
    edx = ZX16(MEM16(esi + 0x8E));
    edi++;
    if (CMP_L(edi, edx)) goto loc_000F01B0; /* jl: less (signed <) */

loc_000F01DC: ;
    edi = MEM32(esi + 0x88);
    if (TEST_Z(edi, edi)) goto loc_000F0211; /* je: equal / zero */

loc_000F01E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000F01EC: ;
    if (TEST_NZ(eax, eax)) goto loc_000F0211; /* jne: not equal / not zero */

loc_000F01F0: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000F020E: ;
    esp = esp + 4;

loc_000F0211: ;
    ecx = esi;
    MEM32(esi + 0x88) = 0;
    PUSH32(esp, 0); sub_000EB170(); /* call 0x000EB170 */

loc_000F0222: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0230
 * Original: 0x000F0230 - 0x000F0293 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x8E));
    ebp = ZX16(LO16(eax));
    ebp = ebp << 2;
    ebx = ecx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x88);
    MEM32(eax + ebp) = 0;
    SET_LO8(eax, MEM8(esi + 0x68));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000F0293(); return; } /* je: equal / zero */

loc_000F025F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000EF130(); /* call 0x000EF130 */

loc_000F0266: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000F0286; /* je: equal / zero */

loc_000F026D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0); sub_000F0C60(); /* call 0x000F0C60 */

loc_000F027B: ;
    edx = MEM32(esi + 0x88);
    MEM32(edx + ebp) = eax;
    g_seh_ebp = ebp; sub_000F02C0(); return; /* tail jmp 0x000F02C0 */

loc_000F0286: ;
    edx = MEM32(esi + 0x88);
    eax = 0; /* xor self */
    MEM32(edx + ebp) = eax;
    g_seh_ebp = ebp; sub_000F02C0(); return; /* tail jmp 0x000F02C0 */

}

/**
 * sub_000F0300
 * Original: 0x000F0300 - 0x000F035E (94 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 0x8E));
    ebp = ZX16(LO16(edi));
    ebx = eax;
    eax = MEM32(esi + 0x88);
    ebp = ebp << 2;
    MEM32(eax + ebp) = 0;
    SET_LO8(eax, MEM8(esi + 0x68));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000F035E(); return; } /* je: equal / zero */

loc_000F032D: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000EF130(); /* call 0x000EF130 */

loc_000F0334: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000F0351; /* je: equal / zero */

loc_000F033B: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000F0E20(); /* call 0x000F0E20 */

loc_000F0346: ;
    edx = MEM32(esi + 0x88);
    MEM32(edx + ebp) = eax;
    g_seh_ebp = ebp; sub_000F0392(); return; /* tail jmp 0x000F0392 */

loc_000F0351: ;
    edx = MEM32(esi + 0x88);
    eax = 0; /* xor self */
    MEM32(edx + ebp) = eax;
    g_seh_ebp = ebp; sub_000F0392(); return; /* tail jmp 0x000F0392 */

}

/**
 * sub_000F03D0
 * Original: 0x000F03D0 - 0x000F04C1 (241 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F03D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_000F03D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(0x648E1C); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    edi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x140;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm7; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm7; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm7; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000EF840(); /* call 0x000EF840 */

loc_000F0474: ;
    edx = ZX16(MEM16(ebp + 8));
    eax = MEM32(edi + 0x6C);
    ecx = MEM32(eax + edx * 4);
    xmm0 = MEMF(ecx + 4); /* movss */
    esp = esp + 0x14;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (1 /* jp after test - parity */) { sub_000F04C1(); return; } /* jp: parity */

loc_000F0493: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ecx + 0xC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000F04A4; /* jp: parity */

loc_000F04A2: ;
    g_seh_ebp = ebp; sub_000F04C6(); return; /* tail jmp 0x000F04C6 */

loc_000F04A4: ;
    xmm5 = MEMF(ecx + 0xC); /* movss */
    xmm6 = MEMF(ecx + 8); /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F04B3: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    g_seh_ebp = ebp; sub_000F04C6(); return; /* tail jmp 0x000F04C6 */

}

/**
 * sub_000F0760
 * Original: 0x000F0760 - 0x000F07E5 (133 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0760: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x80);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edi;
    if (TEST_Z(edi, edi)) goto loc_000F07DE; /* je: equal / zero */

loc_000F0776: ;
    (void)0; /* cmp MEM16(edi + 6), 0 - flags set for next jcc */
    eax = edi + 8;
    if (CMP_EQ(MEM16(edi + 6), 0)) goto loc_000F07DE; /* je: equal / zero */

loc_000F0780: ;
    if (TEST_Z(eax, eax)) goto loc_000F07DE; /* je: equal / zero */

loc_000F0784: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(eax));
    PUSH32(esp, esi);
    goto loc_000F0790;

loc_000F078C: ;
    ecx = MEM32(esp + 0x10);

loc_000F0790: ;
    eax = MEM32(edi);
    esi = ZX16(LO16(ebp));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    esi = esi + eax;
    if ((esi == 0)) goto loc_000F07CA; /* je: equal / zero */

loc_000F079C: ;
    ecx = MEM32(ecx + 0x64);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000F07AD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F07BD; /* je: equal / zero */

loc_000F07B1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_000EF8C0(); /* call 0x000EF8C0 */

loc_000F07BB: ;
    goto loc_000F07CA;

loc_000F07BD: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_000EFF80(); /* call 0x000EFF80 */

loc_000F07C6: ;
    edi = MEM32(esp + 0x14);

loc_000F07CA: ;
    SET_LO16(ebp, LO16(ebp) + 1);
    if (CMP_NE(LO16(ebp), MEM16(edi + 4))) goto loc_000F07D5; /* jne: not equal / not zero */

loc_000F07D2: ;
    SET_LO16(ebp, 0); /* xor self */

loc_000F07D5: ;
    if (CMP_NE(LO16(ebp), MEM16(edi + 0xA))) goto loc_000F078C; /* jne: not equal / not zero */

loc_000F07DB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F07DE: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F07F0
 * Original: 0x000F07F0 - 0x000F07FE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F07F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F07F0: ;
    SET_LO8(eax, MEM8(ecx + 0x68));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000F07FE(); return; } /* je: equal / zero */

loc_000F07F7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000EFC70(); /* call 0x000EFC70 */

loc_000F07FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F0810
 * Original: 0x000F0810 - 0x000F0894 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0810(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0810: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000F0894(); return; } /* je: equal / zero */

loc_000F082B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000F083F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F0874; /* je: equal / zero */

loc_000F084A: ;
    ecx = 0x75DD4C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000F0854: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000F0871: ;
    esp = esp + 0x14;

loc_000F0874: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000F088D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000F08C0
 * Original: 0x000F08C0 - 0x000F08FD (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F08C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F08C0: ;
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    MEM16(esi + 6) = 0;
    MEM16(esi + 0xA) = 0;
    MEM16(esi + 8) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000F08E8: ;
    esp = esp + 4;
    MEM32(esi) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(eax, eax)) goto loc_000F08FA; /* jne: not equal / not zero */

loc_000F08F3: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx) = 1;

loc_000F08FA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0900
 * Original: 0x000F0900 - 0x000F090F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0900(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0900: ;
    SET_LO16(ecx, MEM16(eax + 6));
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) { sub_000F090F(); return; } /* jne: not equal / not zero */

loc_000F090A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0940
 * Original: 0x000F0940 - 0x000F098D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0940: ;
    esp = esp - 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx) = 0x5F39E0;
    eax = 0x5950D0;
    if (TEST_Z(ecx, ecx)) goto loc_000F0954; /* je: equal / zero */

loc_000F0952: ;
    eax = ecx;

loc_000F0954: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = edx + 4;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    xmm1 = MEMF(ecx); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (1 /* jp after test - parity */) { sub_000F098D(); return; } /* jp: parity */

loc_000F097B: ;
    MEM8(esp) = 0;
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000F09C1(); return; /* tail jmp 0x000F09C1 */

}

/**
 * sub_000F09E0
 * Original: 0x000F09E0 - 0x000F0A07 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F09E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F09E0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F39E0;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000F0A01; /* je: equal / zero */

loc_000F09F0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F09FE: ;
    esp = esp + 4;

loc_000F0A01: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0A10
 * Original: 0x000F0A10 - 0x000F0A81 (113 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0A10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_000F0A10: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm3 = MEMF(0x648E8C); /* movss */
    xmm2 = MEMF(0x648E90); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM16(esi + 4) = MEM16(esi + 4) + LO16(eax);
    SET_LO16(eax, MEM16(esi + 4));
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm1 < xmm0)) { sub_000F0A81(); return; } /* jb: below (unsigned <) */

loc_000F0A68: ;
    xmm0 = xmm0 * xmm3; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 4) = LO16(ecx);
    MEM8(esi) = 1;
    MEM16(esi + 6) = 0x100;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F0AB0
 * Original: 0x000F0AB0 - 0x000F0AD7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0AB0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F39E8;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000F0AD1; /* je: equal / zero */

loc_000F0AC0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F0ACE: ;
    esp = esp + 4;

loc_000F0AD1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0AE0
 * Original: 0x000F0AE0 - 0x000F0B3F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0AE0(void)
{

loc_000F0AE0: ;
    ecx = MEM32(eax + 0xE68);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + ecx * 8 + 0x26C) = esi;
    MEM32(eax + ecx * 8 + 0x268) = 1;
    esi = ecx;
    esi = esi << 4;
    MEM8(esi + eax + 0x668) = 0;
    esi = esi + eax + 0x668;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = esi + 4;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + ecx * 4 + 0x68) = edx;
    ecx = MEM32(eax + 0xE68);
    ecx++;
    POP32(esp, edi);
    MEM32(eax + 0xE68) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F0B40
 * Original: 0x000F0B40 - 0x000F0BEE (174 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000F0B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xE68);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi + 0x668;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    edx = esi + 0x268;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(0x771B78);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esi + 0x18));
    PUSH32(esp, 0); sub_000EC4B0(); /* call 0x000EC4B0 */

loc_000F0B96: ;
    if (CMP_NE(MEM8(ebx), 0)) goto loc_000F0BE8; /* jne: not equal / not zero */

loc_000F0B9B: ;
    ecx = MEM32(esi + 0x64);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_000F0BBA; /* jle: less or equal (signed <=) */

loc_000F0BA4: ;
    ecx = esi + 0x24;

loc_000F0BA7: ;
    edx = MEM32(ecx);
    SET_LO16(ebx, MEM16(edi));
    MEM16(edx) = LO16(ebx);
    edx = MEM32(esi + 0x64);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_000F0BA7; /* jl: less (signed <) */

loc_000F0BBA: ;
    ecx = MEM32(esi + 0xE68);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_000F0BE8; /* jle: less or equal (signed <=) */

loc_000F0BC6: ;
    ecx = esi + 0x68;
    /* nop */

loc_000F0BD0: ;
    edx = MEM32(ecx);
    SET_LO16(edi, MEM16(esp + eax * 2 + 0x10));
    MEM16(edx) = LO16(edi);
    edx = MEM32(esi + 0xE68);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_000F0BD0; /* jl: less (signed <) */

loc_000F0BE8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0BF0
 * Original: 0x000F0BF0 - 0x000F0C47 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0BF0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x20));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_000F0C47(); return; } /* je: equal / zero */

loc_000F0C08: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_000F0C1F: ;
    ecx = MEM32(esp + 0x14);
    ebx = ebx << 5;
    ebx = ebx + esi;
    eax = 0; /* xor self */
    MEM8(ebx + ebp + 0x61C) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM16(ecx + 0x20) = 0xFFFF;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0xE68) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0C60
 * Original: 0x000F0C60 - 0x000F0CFC (156 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0C60: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = 0x5F39EC;
    MEM32(ebx + 4) = 0;
    if (TEST_NZ(eax, eax)) goto loc_000F0C7B; /* jne: not equal / not zero */

loc_000F0C76: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000F0C7B: ;
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
    if (TEST_Z(esi, esi)) goto loc_000F0CC5; /* je: equal / zero */

loc_000F0CA3: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_000F0CC5; /* jb: below (unsigned <) */

loc_000F0CAC: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000F0CB6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000F0CBE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000F0CE6; /* jne: not equal / not zero */

loc_000F0CC5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000F0CD7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000F0CDF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_000F0CFC(); return; } /* je: equal / zero */

loc_000F0CE6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0x5F3A00;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    g_seh_ebp = ebp; sub_000F0CFE(); return; /* tail jmp 0x000F0CFE */

}

/**
 * sub_000F0D20
 * Original: 0x000F0D20 - 0x000F0D5B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5F39EC;
    if (TEST_Z(ecx, ecx)) goto loc_000F0D36; /* je: equal / zero */

loc_000F0D30: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000F0D36: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 4) = 0;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000F0D55; /* je: equal / zero */

loc_000F0D44: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F0D52: ;
    esp = esp + 4;

loc_000F0D55: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0D60
 * Original: 0x000F0D60 - 0x000F0E03 (163 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0D60: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = 0x5F39EC;
    MEM32(ebx + 4) = 0;
    if (TEST_NZ(eax, eax)) goto loc_000F0D7B; /* jne: not equal / not zero */

loc_000F0D76: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000F0D7B: ;
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
    if (TEST_Z(esi, esi)) goto loc_000F0DC5; /* je: equal / zero */

loc_000F0DA3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_000F0DC5; /* jb: below (unsigned <) */

loc_000F0DAC: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000F0DB6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000F0DBE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000F0DE6; /* jne: not equal / not zero */

loc_000F0DC5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000F0DD7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000F0DDF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_000F0E03(); return; } /* je: equal / zero */

loc_000F0DE6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0x5F3A08;
    MEM32(eax + 0xC) = ecx;
    g_seh_ebp = ebp; sub_000F0E05(); return; /* tail jmp 0x000F0E05 */

}

/**
 * sub_000F0E20
 * Original: 0x000F0E20 - 0x000F0ED0 (176 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0E20: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    MEM32(ebp) = 0x5F39EC;
    MEM32(ebp + 4) = 0;
    if (TEST_NZ(eax, eax)) goto loc_000F0E41; /* jne: not equal / not zero */

loc_000F0E3C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000F0E41: ;
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
    if (TEST_Z(esi, esi)) goto loc_000F0E91; /* je: equal / zero */

loc_000F0E69: ;
    if (CMP_B(MEM32(esi + 0x80), 0x84)) goto loc_000F0E91; /* jb: below (unsigned <) */

loc_000F0E75: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000F0E7F: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000F0E8A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000F0EB5; /* jne: not equal / not zero */

loc_000F0E91: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000F0EA3: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000F0EAE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_000F0ED0(); return; } /* je: equal / zero */

loc_000F0EB5: ;
    edx = eax;
    edx = edx - ebx;
    MEM32(eax) = 0x5F3A10;
    ecx = ebx;
    esi = edx + 4;

loc_000F0EC4: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000F0EC4; /* jne: not equal / not zero */

loc_000F0ECE: ;
    g_seh_ebp = ebp; sub_000F0ED2(); return; /* tail jmp 0x000F0ED2 */

}

/**
 * sub_000F0EF0
 * Original: 0x000F0EF0 - 0x000F0F55 (101 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = edi;
    PUSH32(esp, 0); sub_000F0C60(); /* call 0x000F0C60 */

loc_000F0F00: ;
    MEM32(edi) = 0x5F39F0;
    SET_LO8(eax, MEM8(ebp));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000F0F4E; /* jne: not equal / not zero */

loc_000F0F0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0); sub_000F1280(); /* call 0x000F1280 */

loc_000F0F1A: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) goto loc_000F0F31; /* je: equal / zero */

loc_000F0F23: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0x10)));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000F1640(); /* call 0x000F1640 */

loc_000F0F2F: ;
    goto loc_000F0F33;

loc_000F0F31: ;
    eax = 0; /* xor self */

loc_000F0F33: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    if (CMP_NE(eax, ebx)) goto loc_000F0F46; /* jne: not equal / not zero */

loc_000F0F3B: ;
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000F0F46: ;
    if (CMP_NE(MEM8(ebp), LO8(ebx))) goto loc_000F0F4E; /* jne: not equal / not zero */

loc_000F0F4B: ;
    MEM32(edi + 0xC) = ebx;

loc_000F0F4E: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F0F60
 * Original: 0x000F0F60 - 0x000F0F8A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F0F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000F1070(); /* call 0x000F1070 */

loc_000F0F68: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000F0F84; /* je: equal / zero */

loc_000F0F6F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000F0F84; /* je: equal / zero */

loc_000F0F77: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F0F81: ;
    esp = esp + 4;

loc_000F0F84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F0F90
 * Original: 0x000F0F90 - 0x000F0FF6 (102 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = edi;
    PUSH32(esp, 0); sub_000F0D60(); /* call 0x000F0D60 */

loc_000F0FA1: ;
    MEM32(edi) = 0x5F39F0;
    SET_LO8(eax, MEM8(ebp));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000F0FEF; /* jne: not equal / not zero */

loc_000F0FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0); sub_000F1280(); /* call 0x000F1280 */

loc_000F0FBB: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) goto loc_000F0FD2; /* je: equal / zero */

loc_000F0FC4: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0x10)));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000F1640(); /* call 0x000F1640 */

loc_000F0FD0: ;
    goto loc_000F0FD4;

loc_000F0FD2: ;
    eax = 0; /* xor self */

loc_000F0FD4: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    if (CMP_NE(eax, ebx)) goto loc_000F0FE7; /* jne: not equal / not zero */

loc_000F0FDC: ;
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000F0FE7: ;
    if (CMP_NE(MEM8(ebp), LO8(ebx))) goto loc_000F0FEF; /* jne: not equal / not zero */

loc_000F0FEC: ;
    MEM32(edi + 0xC) = ebx;

loc_000F0FEF: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F1000
 * Original: 0x000F1000 - 0x000F1064 (100 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_000F0E20(); /* call 0x000F0E20 */

loc_000F100F: ;
    MEM32(edi) = 0x5F39F0;
    SET_LO8(eax, MEM8(ebp));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000F105D; /* jne: not equal / not zero */

loc_000F101E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0); sub_000F1280(); /* call 0x000F1280 */

loc_000F1029: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) goto loc_000F1040; /* je: equal / zero */

loc_000F1032: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0x10)));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000F1640(); /* call 0x000F1640 */

loc_000F103E: ;
    goto loc_000F1042;

loc_000F1040: ;
    eax = 0; /* xor self */

loc_000F1042: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    if (CMP_NE(eax, ebx)) goto loc_000F1055; /* jne: not equal / not zero */

loc_000F104A: ;
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000F1055: ;
    if (CMP_NE(MEM8(ebp), LO8(ebx))) goto loc_000F105D; /* jne: not equal / not zero */

loc_000F105A: ;
    MEM32(edi + 0xC) = ebx;

loc_000F105D: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F1070
 * Original: 0x000F1070 - 0x000F10D5 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1070(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1070: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0x5F39F0;
    if (TEST_Z(edi, edi)) goto loc_000F10B0; /* je: equal / zero */

loc_000F1082: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_000F1099; /* je: equal / zero */

loc_000F108C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F1096: ;
    esp = esp + 4;

loc_000F1099: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(edi) = 0;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F10AD: ;
    esp = esp + 4;

loc_000F10B0: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0x5F39EC;
    if (TEST_Z(ecx, ecx)) goto loc_000F10CA; /* je: equal / zero */

loc_000F10C4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000F10CA: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F10E0
 * Original: 0x000F10E0 - 0x000F1147 (103 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F10E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F10E0: ;
    eax = MEM32(edi + 8);
    SET_LO16(edx, MEM16(eax + 6));
    ecx = 0; /* xor self */
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_000F1117; /* je: equal / zero */

loc_000F10EE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(eax + 8));
    ecx = ZX16(LO16(esi));
    ecx = ecx + ebx;
    edx--;
    MEM16(eax + 6) = LO16(edx);
    edx = esi + 1;
    (void)0; /* cmp LO16(edx), MEM16(eax + 4) - flags set for next jcc */
    POP32(esp, esi);
    MEM16(eax + 8) = LO16(edx);
    POP32(esp, ebx);
    if (CMP_NE(LO16(edx), MEM16(eax + 4))) goto loc_000F1117; /* jne: not equal / not zero */

loc_000F1111: ;
    MEM16(eax + 8) = 0;

loc_000F1117: ;
    eax = ZX8(MEM8(ecx));
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(ecx);
    ecx = eax + edx + 0x18;
    eax = ZX16(MEM16(ecx + 2));
    ecx = ZX16(MEM16(ecx));
    eax = eax - ecx;
    if (CMP_G(eax & eax, 0)) goto loc_000F113E; /* jg: greater (signed >) */

loc_000F1134: ;
    edx = MEM32(esp + 8);
    ecx = ZX16(MEM16(edx + 4));
    eax = eax + ecx;

loc_000F113E: ;
    edx = ZX16(LO16(eax));
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F1150
 * Original: 0x000F1150 - 0x000F11BC (108 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1150: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 6));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 4));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO16(edx), LO16(esi))) goto loc_000F118E; /* je: equal / zero */

loc_000F116A: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(eax + 0xA));
    ecx = ZX16(LO16(edi));
    ecx = ecx + MEM32(eax);
    edx++;
    MEM16(eax + 6) = LO16(edx);
    edx = edi + 1;
    (void)0; /* cmp LO16(edx), LO16(esi) - flags set for next jcc */
    MEM16(eax + 0xA) = LO16(edx);
    POP32(esp, edi);
    if (CMP_NE(LO16(edx), LO16(esi))) goto loc_000F118E; /* jne: not equal / not zero */

loc_000F1188: ;
    MEM16(eax + 0xA) = 0;

loc_000F118E: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(ecx) = LO8(eax);
    eax = ZX16(MEM16(ebx + 0x1A));
    ecx = ZX16(MEM16(ebx + 0x18));
    eax = eax - ecx;
    if (CMP_G(eax & eax, 0)) goto loc_000F11AC; /* jg: greater (signed >) */

loc_000F11A2: ;
    edx = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(edx + 4));
    eax = eax + ecx;

loc_000F11AC: ;
    edx = ZX16(LO16(eax));
    eax = MEM32(ebp + 0xC);
    eax = eax + edx;
    POP32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F11C0
 * Original: 0x000F11C0 - 0x000F1273 (179 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F11C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F11C0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 8);
    if (TEST_Z(ebx, ebx)) goto loc_000F126B; /* je: equal / zero */

loc_000F11D2: ;
    (void)0; /* cmp MEM16(ebx + 6), 0 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ebx + 8;
    if (CMP_EQ(MEM16(ebx + 6), 0)) goto loc_000F126A; /* je: equal / zero */

loc_000F11E1: ;
    if (TEST_Z(ebp, ebp)) goto loc_000F126A; /* je: equal / zero */

loc_000F11E9: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ebp));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000F11F6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F1269; /* je: equal / zero */

loc_000F11FA: ;
    edi = MEM32(edi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000F1204: ;
    edx = edi + edi * 2;
    PUSH32(esp, 5);
    eax = 0x10;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_000EB410(); /* call 0x000EB410 */

loc_000F1217: ;
    esp = esp + 4;
    if (TEST_S(eax, eax)) goto loc_000F1269; /* jl: less (signed <) */

loc_000F121E: ;
    edi = edi;

loc_000F1220: ;
    ecx = MEM32(ebx);
    eax = ZX16(LO16(esi));
    eax = eax + ecx;
    if ((eax == 0)) goto loc_000F124F; /* je: equal / zero */

loc_000F1229: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = MEM32(ecx);
    edx = MEM32(esp + 0x30);
    eax = eax + edi;
    ecx = eax + 8;
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_000EBA50(); /* call 0x000EBA50 */

loc_000F124C: ;
    esp = esp + 8;

loc_000F124F: ;
    SET_LO16(esi, LO16(esi) + 1);
    if (CMP_NE(LO16(esi), MEM16(ebx + 4))) goto loc_000F125A; /* jne: not equal / not zero */

loc_000F1257: ;
    SET_LO16(esi, 0); /* xor self */

loc_000F125A: ;
    if (CMP_NE(LO16(esi), MEM16(ebp + 2))) goto loc_000F1220; /* jne: not equal / not zero */

loc_000F1260: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000EBA20(); /* call 0x000EBA20 */

loc_000F1269: ;
    POP32(esp, esi);

loc_000F126A: ;
    POP32(esp, ebp);

loc_000F126B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F1280
 * Original: 0x000F1280 - 0x000F1304 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1280(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1280: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000F1304(); return; } /* je: equal / zero */

loc_000F129B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000F12AF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F12E4; /* je: equal / zero */

loc_000F12BA: ;
    ecx = 0x75DD74;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000F12C4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000F12E1: ;
    esp = esp + 0x14;

loc_000F12E4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000F12FD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1330
 * Original: 0x000F1330 - 0x000F1385 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1330(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000F0C60(); /* call 0x000F0C60 */

loc_000F133B: ;
    MEM32(ebx) = 0x5F39F4;
    if (CMP_NE(MEM8(edi), 0)) goto loc_000F137F; /* jne: not equal / not zero */

loc_000F1346: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM32(ebx + 8) = 0;
    PUSH32(esp, 0); sub_000F1590(); /* call 0x000F1590 */

loc_000F1355: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_000F136C; /* je: equal / zero */

loc_000F135E: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0xC)));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000F1640(); /* call 0x000F1640 */

loc_000F136A: ;
    goto loc_000F136E;

loc_000F136C: ;
    eax = 0; /* xor self */

loc_000F136E: ;
    MEM32(ebx + 8) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    eax = ebx;
    if (TEST_NZ(eax, eax)) goto loc_000F1381; /* jne: not equal / not zero */

loc_000F1378: ;
    MEM8(edi) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F137F: ;
    eax = ebx;

loc_000F1381: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F1390
 * Original: 0x000F1390 - 0x000F13BA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1390(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000F1420(); /* call 0x000F1420 */

loc_000F1398: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000F13B4; /* je: equal / zero */

loc_000F139F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000F13B4; /* je: equal / zero */

loc_000F13A7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F13B1: ;
    esp = esp + 4;

loc_000F13B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F13C0
 * Original: 0x000F13C0 - 0x000F1418 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F13C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F13C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000F0E20(); /* call 0x000F0E20 */

loc_000F13CC: ;
    MEM32(edi) = 0x5F39F4;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_000F1412; /* jne: not equal / not zero */

loc_000F13D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM32(edi + 8) = 0;
    PUSH32(esp, 0); sub_000F1590(); /* call 0x000F1590 */

loc_000F13E7: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_000F13FE; /* je: equal / zero */

loc_000F13F0: ;
    SET_LO16(eax, ZX8(MEM8(esp + 0xC)));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000F1640(); /* call 0x000F1640 */

loc_000F13FC: ;
    goto loc_000F1400;

loc_000F13FE: ;
    eax = 0; /* xor self */

loc_000F1400: ;
    MEM32(edi + 8) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    eax = edi;
    if (TEST_NZ(eax, eax)) goto loc_000F1414; /* jne: not equal / not zero */

loc_000F140A: ;
    MEM8(ebp) = 1;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000F1412: ;
    eax = edi;

loc_000F1414: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F1420
 * Original: 0x000F1420 - 0x000F1485 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1420(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1420: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0x5F39F4;
    if (TEST_Z(edi, edi)) goto loc_000F1460; /* je: equal / zero */

loc_000F1432: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_000F1449; /* je: equal / zero */

loc_000F143C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F1446: ;
    esp = esp + 4;

loc_000F1449: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(edi) = 0;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F145D: ;
    esp = esp + 4;

loc_000F1460: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0x5F39EC;
    if (TEST_Z(ecx, ecx)) goto loc_000F147A; /* je: equal / zero */

loc_000F1474: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_000F147A: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1490
 * Original: 0x000F1490 - 0x000F14D7 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1490: ;
    eax = MEM32(eax + 8);
    SET_LO16(edx, MEM16(eax + 6));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 4));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO16(edx), LO16(esi))) goto loc_000F14D0; /* je: equal / zero */

loc_000F14A8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(eax + 0xA));
    ecx = ZX16(LO16(edi));
    ecx = ecx + ebp;
    edx++;
    MEM16(eax + 6) = LO16(edx);
    edx = edi + 1;
    (void)0; /* cmp LO16(edx), LO16(esi) - flags set for next jcc */
    POP32(esp, edi);
    MEM16(eax + 0xA) = LO16(edx);
    POP32(esp, ebp);
    if (CMP_NE(LO16(edx), LO16(esi))) goto loc_000F14D0; /* jne: not equal / not zero */

loc_000F14CA: ;
    MEM16(eax + 0xA) = 0;

loc_000F14D0: ;
    POP32(esp, esi);
    MEM8(ecx) = LO8(ebx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F14E0
 * Original: 0x000F14E0 - 0x000F158D (173 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F14E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F14E0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 8);
    if (TEST_Z(ebx, ebx)) goto loc_000F1585; /* je: equal / zero */

loc_000F14F2: ;
    (void)0; /* cmp MEM16(ebx + 6), 0 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ebx + 8;
    if (CMP_EQ(MEM16(ebx + 6), 0)) goto loc_000F1584; /* je: equal / zero */

loc_000F1501: ;
    if (TEST_Z(ebp, ebp)) goto loc_000F1584; /* je: equal / zero */

loc_000F1509: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ebp));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_000F1516: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F1583; /* je: equal / zero */

loc_000F151A: ;
    ecx = MEM32(edi + 8);
    SET_LO16(edi, MEM16(ecx + 6));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_000F1528: ;
    edx = ZX16(LO16(edi));
    PUSH32(esp, 8);
    edx = edx << 2;
    eax = 0x10;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_000EB410(); /* call 0x000EB410 */

loc_000F153E: ;
    esp = esp + 4;
    if (TEST_S(eax, eax)) goto loc_000F1583; /* jl: less (signed <) */

loc_000F1545: ;
    ecx = MEM32(ebx);
    eax = ZX16(LO16(esi));
    eax = eax + ecx;
    if ((eax == 0)) goto loc_000F1569; /* je: equal / zero */

loc_000F154E: ;
    eax = ZX8(MEM8(eax));
    edx = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    eax = eax + MEM32(edx);
    ecx = eax + 8;
    edx = eax + 0x1C;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000EB9B0(); /* call 0x000EB9B0 */

loc_000F1569: ;
    SET_LO16(esi, LO16(esi) + 1);
    if (CMP_NE(LO16(esi), MEM16(ebx + 4))) goto loc_000F1574; /* jne: not equal / not zero */

loc_000F1571: ;
    SET_LO16(esi, 0); /* xor self */

loc_000F1574: ;
    if (CMP_NE(LO16(esi), MEM16(ebp + 2))) goto loc_000F1545; /* jne: not equal / not zero */

loc_000F157A: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000EBA20(); /* call 0x000EBA20 */

loc_000F1583: ;
    POP32(esp, esi);

loc_000F1584: ;
    POP32(esp, ebp);

loc_000F1585: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F1590
 * Original: 0x000F1590 - 0x000F1614 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1590(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1590: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000F1614(); return; } /* je: equal / zero */

loc_000F15AB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_000F15BF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F15F4; /* je: equal / zero */

loc_000F15CA: ;
    ecx = 0x75DDA0;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_000F15D4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000F15F1: ;
    esp = esp + 0x14;

loc_000F15F4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000F160D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1640
 * Original: 0x000F1640 - 0x000F167A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1640(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1640: ;
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    MEM16(esi + 6) = 0;
    MEM16(esi + 0xA) = 0;
    MEM16(esi + 8) = 0;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000F1665: ;
    esp = esp + 4;
    MEM32(esi) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(eax, eax)) goto loc_000F1677; /* jne: not equal / not zero */

loc_000F1670: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx) = 1;

loc_000F1677: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F1680
 * Original: 0x000F1680 - 0x000F16C1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1680(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1680: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_000F16AF; /* je: equal / zero */

loc_000F1689: ;
    ecx--;
    eax = MEM32(eax + 8);
    if ((ecx == 0)) goto loc_000F169D; /* je: equal / zero */

loc_000F168F: ;
    ecx = ecx - 2;
    if ((ecx != 0)) goto loc_000F16B9; /* jne: not equal / not zero */

loc_000F1694: ;
    edx = eax;
    PUSH32(esp, 0); sub_00242350(); /* call 0x00242350 */

loc_000F169B: ;
    goto loc_000F16A9;

loc_000F169D: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000F16A6: ;
    esp = esp + 4;

loc_000F16A9: ;
    ecx = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_000F16B2; /* jne: not equal / not zero */

loc_000F16AF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_000F16B2: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_000F16B9: ;
    PUSH32(esp, 0); sub_000EB870(); /* call 0x000EB870 */

loc_000F16BE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000F16D0
 * Original: 0x000F16D0 - 0x000F1714 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F16D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F16D0: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    ecx--;
    eax = MEM32(eax + 4);
    eax = MEM32(eax + edx * 4);
    if ((ecx == 0)) goto loc_000F16F0; /* je: equal / zero */

loc_000F16E2: ;
    ecx = ecx - 2;
    if ((ecx != 0)) goto loc_000F170C; /* jne: not equal / not zero */

loc_000F16E7: ;
    edx = eax;
    PUSH32(esp, 0); sub_00242350(); /* call 0x00242350 */

loc_000F16EE: ;
    goto loc_000F16FC;

loc_000F16F0: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000F16F9: ;
    esp = esp + 4;

loc_000F16FC: ;
    ecx = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_000F1705; /* jne: not equal / not zero */

loc_000F1702: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_000F1705: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_000F170C: ;
    PUSH32(esp, 0); sub_000EB870(); /* call 0x000EB870 */

loc_000F1711: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1720
 * Original: 0x000F1720 - 0x000F1747 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1720(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1720: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F39F8;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000F1741; /* je: equal / zero */

loc_000F1730: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000F173E: ;
    esp = esp + 4;

loc_000F1741: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F1750
 * Original: 0x000F1750 - 0x000F1777 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1750(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ecx + 4;
    PUSH32(esp, ecx);
    esi = esp + 8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_000F1767: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(ecx, ecx)) { sub_000F1777(); return; } /* jne: not equal / not zero */

loc_000F1773: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1790
 * Original: 0x000F1790 - 0x000F17A4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000F1790: ;
    esp = esp - 8;
    if (TEST_NZ(LO16(eax), LO16(eax))) { sub_000F17A4(); return; } /* jne: not equal / not zero */

loc_000F1798: ;
    xmm0 = MEMF(0x648E84); /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000F17F0
 * Original: 0x000F17F0 - 0x000F181C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F17F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000F17F0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, edx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x61;
    eax = eax + 0x2A;
    ecx = eax;
    eax = MEM32(esp + 0x24);
    eax = eax + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F1813: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000F181C(); return; } /* jne: not equal / not zero */

loc_000F181A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1860
 * Original: 0x000F1860 - 0x000F18E9 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1860(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000F1860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_000F1881; /* je: equal / zero */

loc_000F186B: ;
    xmm1 = MEMF(esi + 0x30); /* movss */
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0x30) = xmm1; /* movss */

loc_000F1881: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000F1896; /* je: equal / zero */

loc_000F1888: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x595188), _icall_esp); /* indirect call */
    }

loc_000F1893: ;
    esp = esp + 4;

loc_000F1896: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x30))) goto loc_000F18B4; /* jbe: below or equal (unsigned <=) */

loc_000F189F: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000F18B4; /* je: equal / zero */

loc_000F18A6: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x595148), _icall_esp); /* indirect call */
    }

loc_000F18B1: ;
    esp = esp + 4;

loc_000F18B4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x30))) goto loc_000F18E7; /* jbe: below or equal (unsigned <=) */

loc_000F18BD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F18E7; /* jne: not equal / not zero */

loc_000F18C6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000F18CD: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000F18E7; /* jl: less (signed <) */

loc_000F18D4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000F18E9(); return; } /* je: equal / zero */

loc_000F18E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000F18E4: ;
    esp = esp + 4;

loc_000F18E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1930
 * Original: 0x000F1930 - 0x000F1948 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1930(void)
{

loc_000F1930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000F193D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000F1943: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1950
 * Original: 0x000F1950 - 0x000F196E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1950: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x3B));
    if (TEST_S(eax, eax)) goto loc_000F1961; /* jl: less (signed <) */

loc_000F195C: ;
    if (CMP_L(eax, 0x4F)) goto loc_000F1963; /* jl: less (signed <) */

loc_000F1961: ;
    eax = 0; /* xor self */

loc_000F1963: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x595360)); return; /* indirect tail jmp */

}

/**
 * sub_000F19C0
 * Original: 0x000F19C0 - 0x000F19DF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F19C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F19C0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x3A));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000F19DE; /* je: equal / zero */

loc_000F19CB: ;
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x595348), _icall_esp); /* indirect call */
    }

loc_000F19DB: ;
    esp = esp + 8;

loc_000F19DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F19E0
 * Original: 0x000F19E0 - 0x000F1A48 (104 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F19E0(void)
{

loc_000F19E0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(0x771B9C) = eax;
    MEM32(0x771B7C) = ecx;
    MEM32(0x771BA0) = eax;
    MEM32(0x771B80) = ecx;
    MEM32(0x771BA4) = eax;
    MEM32(0x771B84) = ecx;
    MEM32(0x771BA8) = eax;
    MEM32(0x771B88) = ecx;
    MEM32(0x771BAC) = eax;
    MEM32(0x771B8C) = ecx;
    MEM32(0x771BB0) = eax;
    MEM32(0x771B90) = ecx;
    MEM32(0x771BB4) = eax;
    MEM32(0x771B94) = ecx;
    MEM32(0x771BB8) = eax;
    MEM32(0x771B98) = ecx;
    MEM8(0x771B9C) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1A50
 * Original: 0x000F1A50 - 0x000F1B0A (186 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1A50: ;
    SET_LO8(edx, MEM8(eax + 0x771B7C));
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_000F1B09; /* je: equal / zero */

loc_000F1A61: ;
    MEM8(eax + 0x771B7C) = LO8(ecx);
    eax = eax << 5;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x771C50);
    edx = 1;
    ecx = 0; /* xor self */
    if (CMP_NE(esi, edx)) goto loc_000F1A92; /* jne: not equal / not zero */

loc_000F1A7C: ;
    esi = MEM32(eax + 0x771C60);
    if (CMP_LE(esi, MEM32(eax + 0x771C5C))) goto loc_000F1A92; /* jle: less or equal (signed <=) */

loc_000F1A8A: ;
    if (CMP_EQ(MEM8(eax + 0x771C64), LO8(ecx))) goto loc_000F1ABC; /* je: equal / zero */

loc_000F1A92: ;
    MEM32(eax + 0x771C50) = edx;
    MEM32(eax + 0x771C54) = ecx;
    MEM8(eax + 0x771C58) = LO8(ecx);
    MEM8(eax + 0x771C59) = LO8(ecx);
    MEM8(eax + 0x771C5A) = LO8(ecx);
    MEM32(eax + 0x771C5C) = ecx;
    MEM32(eax + 0x771C60) = ecx;

loc_000F1ABC: ;
    if (CMP_NE(MEM32(eax + 0x771C50), ecx)) goto loc_000F1ADA; /* jne: not equal / not zero */

loc_000F1AC4: ;
    edx = MEM32(eax + 0x771C60);
    if (CMP_LE(edx, MEM32(eax + 0x771C5C))) goto loc_000F1ADA; /* jle: less or equal (signed <=) */

loc_000F1AD2: ;
    if (CMP_EQ(MEM8(eax + 0x771C64), LO8(ecx))) goto loc_000F1B08; /* je: equal / zero */

loc_000F1ADA: ;
    MEM32(eax + 0x771C50) = ecx;
    MEM32(eax + 0x771C54) = ecx;
    MEM8(eax + 0x771C58) = LO8(ecx);
    MEM8(eax + 0x771C59) = LO8(ecx);
    MEM8(eax + 0x771C5A) = LO8(ecx);
    MEM32(eax + 0x771C5C) = 0x32;
    MEM32(eax + 0x771C60) = ecx;

loc_000F1B08: ;
    POP32(esp, esi);

loc_000F1B09: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1B10
 * Original: 0x000F1B10 - 0x000F1B3E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B7380(); /* call 0x002B7380 */

loc_000F1B1B: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    MEM8(esi + 0x540) = MEM8(esi + 0x540) & 0xEF;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F1B3C; /* jne: not equal / not zero */

loc_000F1B2E: ;
    esi = MEM32(esi + 0x568);
    if (TEST_Z(esi, esi)) goto loc_000F1B3C; /* je: equal / zero */

loc_000F1B38: ;
    MEM8(esi + 0x6E) = 3;

loc_000F1B3C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1B40
 * Original: 0x000F1B40 - 0x000F1C15 (213 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1B40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000F1B40: ;
    SET_LO8(ecx, MEM8(edi + 0x771B7C));
    SET_LO8(eax, LO8(eax) | 0xFF);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_000F1C01; /* je: equal / zero */

loc_000F1B50: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebx + edx + 0x3AE), LO16(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(MEM16(ebx + edx + 0x3AE), LO16(ecx))) goto loc_000F1BC3; /* jne: not equal / not zero */

loc_000F1B6C: ;
    MEM8(edi + 0x771B7C) = LO8(eax);
    eax = edi;
    eax = eax << 5;
    if (CMP_NE(MEM32(eax + 0x771C50), ecx)) goto loc_000F1B95; /* jne: not equal / not zero */

loc_000F1B7F: ;
    edx = MEM32(eax + 0x771C60);
    if (CMP_LE(edx, MEM32(eax + 0x771C5C))) goto loc_000F1B95; /* jle: less or equal (signed <=) */

loc_000F1B8D: ;
    if (CMP_EQ(MEM8(eax + 0x771C64), LO8(ecx))) goto loc_000F1BC3; /* je: equal / zero */

loc_000F1B95: ;
    MEM32(eax + 0x771C50) = ecx;
    MEM32(eax + 0x771C54) = ecx;
    MEM8(eax + 0x771C58) = LO8(ecx);
    MEM8(eax + 0x771C59) = LO8(ecx);
    MEM8(eax + 0x771C5A) = LO8(ecx);
    MEM32(eax + 0x771C5C) = 0x32;
    MEM32(eax + 0x771C60) = ecx;

loc_000F1BC3: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x771B7C);
    if (CMP_EQ(esi, MEM32(0x7FA1F8))) { sub_000F1C15(); return; } /* je: equal / zero */

loc_000F1BD2: ;
    xmm0 = MEMF(0x875634); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000F1C02; /* jnp: not parity */

loc_000F1BE7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_000F1BF1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    MEMF(0x875634) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F1C01: ;
    esp += 4; return; /* ret */

loc_000F1C02: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    POP32(esp, esi);
    MEMF(0x875634) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1C40
 * Original: 0x000F1C40 - 0x000F1C93 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1C40: ;
    (void)0; /* cmp MEM8(0x7819D6), 0 - flags set for next jcc */
    edx = ZX8(MEM8(ecx + 0x236));
    if (CMP_NE(MEM8(0x7819D6), 0)) goto loc_000F1C92; /* jne: not equal / not zero */

loc_000F1C50: ;
    if (CMP_EQ(MEM16(ecx + 0x3AE), 0)) goto loc_000F1C92; /* je: equal / zero */

loc_000F1C5A: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x568);
    if (TEST_Z(esi, esi)) goto loc_000F1C6B; /* je: equal / zero */

loc_000F1C65: ;
    if (CMP_G(MEM8(esi + 0x34), 0)) goto loc_000F1C91; /* jg: greater (signed >) */

loc_000F1C6B: ;
    esi = MEM32(ecx + 0x564);
    if (TEST_Z(esi, esi)) { sub_000F1C93(); return; } /* je: equal / zero */

loc_000F1C75: ;
    if (CMP_NE(MEM8(edx + 0x771B7C), 0xFF)) goto loc_000F1C91; /* jne: not equal / not zero */

loc_000F1C7E: ;
    MEM8(ecx + 0x540) = MEM8(ecx + 0x540) | 0x10;
    MEM8(edx + 0x771B7C) = LO8(ebx);
    MEM8(edx + 0x771B9C) = LO8(eax);

loc_000F1C91: ;
    POP32(esp, esi);

loc_000F1C92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1DC0
 * Original: 0x000F1DC0 - 0x000F1E30 (112 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1DC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    SET_LO16(eax, MEM16(ebx + 0x120));
    (void)0; /* cmp LO16(eax), MEM16(ebx + 0x112) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(LO16(eax), MEM16(ebx + 0x112))) { sub_000F1E30(); return; } /* jge: greater or equal (signed >=) */

loc_000F1DD9: ;
    SET_LO16(esi, MEM16(ebx + 0x126));
    ecx = SX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx >> 2);
    edx = ecx + ecx * 2;
    edx = edx << 3;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = ecx + ecx * 2;
    ecx = ecx << 1;
    MEM16(ebx + 0x120) = LO16(eax);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    edx = MEM32(0x7FA20C);
    esi = esi + edx;
    MEM16(ebx + 0x126) = LO16(esi);
    POP32(esp, esi);
    MEM16(ebx + 0x11E) = LO16(ecx);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1EE0
 * Original: 0x000F1EE0 - 0x000F1EFE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F1EE0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    eax = eax + eax * 2;
    PUSH32(esp, edx);
    eax = ecx + eax * 8 + 0x9C;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F1EF6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_000F1EFE(); return; } /* jne: not equal / not zero */

loc_000F1EFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1FC0
 * Original: 0x000F1FC0 - 0x000F21CF (527 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1FC0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000F1FC0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(esi + 0x38));
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(ecx), 1)) goto loc_000F1FE6; /* je: equal / zero */

loc_000F1FD2: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(esi + 0x2C) = MEM16(esi + 0x2C) - LO16(ecx);
    if (CMP_GE(MEM16(esi + 0x2C), 0)) goto loc_000F1FE6; /* jge: greater or equal (signed >=) */

loc_000F1FE4: ;
    SET_LO8(eax, 1);

loc_000F1FE6: ;
    SET_LO8(ecx, MEM8(esi + 0x48));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_000F2006; /* je: equal / zero */

loc_000F1FEE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F2006; /* jne: not equal / not zero */

loc_000F1FF2: ;
    edx = SX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x595740), _icall_esp); /* indirect call */
    }

loc_000F1FFD: ;
    esp = esp + 4;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);

loc_000F2006: ;
    SET_LO8(ecx, MEM8(esi + 0x49));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_000F202A; /* je: equal / zero */

loc_000F200E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F21CF(); return; } /* jne: not equal / not zero */

loc_000F2016: ;
    eax = SX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x595748), _icall_esp); /* indirect call */
    }

loc_000F2021: ;
    esp = esp + 4;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);

loc_000F202A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F21CF(); return; } /* jne: not equal / not zero */

loc_000F2032: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x84) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000F2083; /* jbe: below or equal (unsigned <=) */

loc_000F2052: ;
    ecx = MEM32(esi + 0x3C);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x2E));
    SET_LO16(edx, LO16(edx) - 1);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000F2700(); /* call 0x000F2700 */

loc_000F2069: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2071: ;
    xmm0 = xmm0 * MEMF(esi + 0x34); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x30); /* addss */
    MEMF(esi + 0x84) = xmm0; /* movss */

loc_000F2083: ;
    if (TEST_Z(MEM8(esi + 0x38), 2)) goto loc_000F21CA; /* je: equal / zero */

loc_000F208D: ;
    xmm1 = MEMF(esi + 0x5C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x50); /* subss */
    xmm2 = MEMF(esi + 0x60); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x54); /* subss */
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x4C); /* subss */
    eax = esi + 0x64;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;
    xmm6 = MEMF(esp + 0xC); /* movss */
    eax = MEM32(esi + 0x80);
    xmm3 = xmm6; /* movaps */
    MEM32(esp + 8) = edx;
    xmm5 = MEMF(esp + 8); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    MEM32(esp + 4) = ecx;
    xmm7 = MEMF(esp + 4); /* movss */
    xmm4 = xmm7; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm6 = MEMF(esi + 0x74); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm3 = MEMF(esi + 0x74); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = MEMF(esi + 0x74); /* movss */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x2E), LO16(ecx) - flags set for next jcc */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm4 = xmm4 * xmm5; /* mulss */
    if (CMP_LE(MEM16(esi + 0x2E), LO16(ecx))) goto loc_000F21CA; /* jle: less or equal (signed <=) */

loc_000F212E: ;
    edi = edi;

loc_000F2130: ;
    xmm5 = MEMF(eax); /* movss */
    xmm7 = MEMF(eax + 8); /* movss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm7 = xmm7 * MEMF(eax + 4); /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 + MEMF(esi + 0x4C); /* addss */
    xmm7 = MEMF(eax + 8); /* movss */
    MEMF(eax + 0xC) = xmm5; /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp + 8); /* movss */
    xmm7 = xmm7 * MEMF(eax + 4); /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 + MEMF(esi + 0x50); /* addss */
    xmm7 = MEMF(eax + 8); /* movss */
    MEMF(eax + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0xC); /* movss */
    xmm7 = xmm7 * MEMF(eax + 4); /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 + MEMF(esi + 0x54); /* addss */
    MEMF(eax + 0x14) = xmm5; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edx)) goto loc_000F2130; /* jl: less (signed <) */

loc_000F21CA: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2700
 * Original: 0x000F2700 - 0x000F285E (350 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F2700: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    eax = SX16(LO16(ecx));
    esi = esi - eax;
    if (CMP_L(esi, 2)) goto loc_000F2859; /* jl: less (signed <) */

loc_000F271B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    goto loc_000F2730;

loc_000F2724: ;
    ecx = MEM32(esp + 0x24);
    goto loc_000F2730;

    /* nop */

loc_000F2730: ;
    if (CMP_L(MEM16(esp + 0x30), 1)) goto loc_000F2856; /* jl: less (signed <) */

loc_000F273C: ;
    eax = MEM32(ebp + 0x80);
    xmm1 = MEMF(esp + 0x2C); /* movss */
    esi = (uint32_t)((int32_t)esi >> 1);
    esi = esi + ecx;
    ecx = SX16(LO16(ecx));
    ecx = ecx + ecx * 2;
    edi = eax + ecx * 8;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    ebx = SX16(LO16(esi));
    edx = ecx + ecx * 2;
    xmm5 = MEMF(eax + edx * 8); /* movss */
    xmm6 = MEMF(eax + edx * 8 + 4); /* movss */
    xmm7 = MEMF(eax + edx * 8 + 8); /* movss */
    xmm5 = xmm5 - MEMF(edi); /* subss */
    xmm6 = xmm6 - MEMF(edi + 4); /* subss */
    xmm7 = xmm7 - MEMF(edi + 8); /* subss */
    eax = eax + edx * 8;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x18) = ebx;
    xmm0 = xmm0 - xmm1; /* subss */
    ebx = ebx + ebx * 2;
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebx = ebx << 3;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F27AF: ;
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */
    xmm5 = xmm5 + MEMF(edi); /* addss */
    eax = MEM32(ebp + 0x80);
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(ebx + eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F27DB: ;
    ecx = MEM32(ebp + 0x80);
    eax = MEM32(esp + 0x2C);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + MEMF(edi + 4); /* addss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(ebx + ecx + 4) = xmm1; /* movss */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ebp + 0x80);
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + MEMF(edi + 8); /* addss */
    edi = MEM32(esp + 0x30);
    edi--;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEMF(ebx + edx + 8) = xmm7; /* movss */
    PUSH32(esp, 0); sub_000F2700(); /* call 0x000F2700 */

loc_000F2837: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    eax = eax - MEM32(esp + 0x2C);
    MEM32(esp + 0x38) = esi;
    esi = eax;
    esp = esp + 0x14;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x30) = edi;
    if (CMP_GE(esi, 2)) goto loc_000F2724; /* jge: greater or equal (signed >=) */

loc_000F2856: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F2859: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2860
 * Original: 0x000F2860 - 0x000F289B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F2860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x78));
    eax = MEM32(eax * 4 + 0x59574C);
    if (TEST_Z(eax, eax)) goto loc_000F287A; /* je: equal / zero */

loc_000F2874: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000F2877: ;
    esp = esp + 4;

loc_000F287A: ;
    eax = esi + 0x88;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000F2885: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F289B(); return; } /* jne: not equal / not zero */

loc_000F288E: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000F28A0
 * Original: 0x000F28A0 - 0x000F28D0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F28A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F28A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x78));
    eax = MEM32(eax * 4 + 0x595758);
    if (TEST_Z(eax, eax)) goto loc_000F28BA; /* je: equal / zero */

loc_000F28B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000F28B7: ;
    esp = esp + 4;

loc_000F28BA: ;
    eax = esi + 0x88;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000F28C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000F28CB: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F28D0
 * Original: 0x000F28D0 - 0x000F2A73 (419 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F28D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000F28D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7C);
    ebx = MEM32(edi);
    eax = MEM32(ebx + 0x64);
    if (TEST_Z(eax, eax)) { sub_000F2A73(); return; } /* je: equal / zero */

loc_000F28EF: ;
    SET_LO8(eax, MEM8(ebx + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 4))) { sub_000F2A73(); return; } /* jne: not equal / not zero */

loc_000F28FE: ;
    if (CMP_EQ(MEM32(ebx + 0x68), 0xFFFF)) { sub_000F2A73(); return; } /* je: equal / zero */

loc_000F290B: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_000F2A66; /* je: equal / zero */

loc_000F2919: ;
    edx = ZX8(MEM8(edi + 0x14));
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_000F2927: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    edx = edi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_000F2939: ;
    SET_LO8(eax, MEM8(edi + 0x25));
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), 1)) goto loc_000F29E1; /* jne: not equal / not zero */

loc_000F2947: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x18); /* addss */
    xmm1 = MEMF(esi + 0x4C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x1C); /* addss */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esi + 0x4C;
    edx = esi + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x50); /* movss */
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x20); /* addss */
    edx = esi + 0x58;
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x54); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_000F29C1: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_000F2A66; /* je: equal / zero */

loc_000F29CC: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_001119F0(); /* call 0x001119F0 */

loc_000F29D5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F2A66; /* je: equal / zero */

loc_000F29DD: ;
    MEM8(edi + 0x25) = MEM8(edi + 0x25) | 1;

loc_000F29E1: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x4C); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x5C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x50); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x54); /* subss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_000F2A1B: ;
    esp = esp + 4;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x70) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000F2A66; /* jnp: not parity */

loc_000F2A30: ;
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = esi + 0x64;
    PUSH32(esp, ecx);
    xmm1 = xmm1 / xmm0; /* divss */
    edx = esp + 0x28;
    ecx = esp + 0x1C;
    MEMF(esi + 0x74) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00111D50(); /* call 0x00111D50 */

loc_000F2A52: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esi + 0x38) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F2A66: ;
    MEM8(esi + 0x38) = MEM8(esi + 0x38) & 0xFD;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2A80
 * Original: 0x000F2A80 - 0x000F2AA0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F2A80: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x78));
    if (CMP_L(eax, 3)) goto loc_000F2A8F; /* jl: less (signed <) */

loc_000F2A8D: ;
    eax = 0; /* xor self */

loc_000F2A8F: ;
    eax = MEM32(eax * 4 + 0x595764);
    if (TEST_Z(eax, eax)) { sub_000F2AA0(); return; } /* je: equal / zero */

loc_000F2A9A: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_000F2AB0
 * Original: 0x000F2AB0 - 0x000F2B38 (136 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F2AB0: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x7C);
    if (TEST_NZ(ecx, ecx)) goto loc_000F2B0B; /* jne: not equal / not zero */

loc_000F2AC0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_000F2AD2; /* je: equal / zero */

loc_000F2ACA: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_000F2B36; /* jne: not equal / not zero */

loc_000F2AD2: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F2B36; /* jne: not equal / not zero */

loc_000F2ADB: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000F2AE2: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000F2B36; /* jl: less (signed <) */

loc_000F2AE9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000F2AFE; /* je: equal / zero */

loc_000F2AF6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000F2AF9: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F2AFE: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_000F2B0B: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_000F2B36; /* jne: not equal / not zero */

loc_000F2B10: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_000F2B29; /* jne: not equal / not zero */

loc_000F2B1C: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F2B29: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_000F2B36; /* jne: not equal / not zero */

loc_000F2B2E: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_000F2B36: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2B40
 * Original: 0x000F2B40 - 0x000F2D51 (529 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F2B40: ;
    xmm1 = MEMF(edi); /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    esp = esp - 0x4C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2B7D: ;
    ecx = MEM32(esi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(esi);
    if ((edx == 0)) goto loc_000F2D4C; /* je: equal / zero */

loc_000F2B8C: ;
    MEM32(esp + 4) = edx;
    PUSH32(esp, ebx);

loc_000F2B91: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2B96: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x18); /* mulss */
    xmm5 = xmm5 + MEMF(esi + 0x14); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2BB2: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x68); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2BC0: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000F2BCB: ;
    eax = MEM32(esp + 0x64);
    xmm2 = MEMF(eax); /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm3 = MEMF(ebp); /* movss */
    SET_LO8(ecx, MEM8(esi + 0x50));
    SET_LO16(edx, MEM16(esi + 0x4E));
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(edi); /* addss */
    xmm3 = MEMF(ebp + 4); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(ebp + 8); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(edi + 4); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    SET_LO16(eax, MEM16(esi + 0x4C));
    MEM8(esp + 0x18) = LO8(ecx);
    SET_LO16(ecx, MEM16(esi + 0x4A));
    MEM16(esp + 0x1C) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 0x48));
    MEM16(esp + 0x20) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x46));
    MEM16(esp + 0x24) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x44));
    MEM16(esp + 0x28) = LO16(edx);
    edx = MEM32(esi + 0x40);
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + MEMF(edi + 8); /* addss */
    MEM16(esp + 0x2C) = LO16(eax);
    eax = MEM32(esi + 0x3C);
    MEM16(esp + 0x30) = LO16(ecx);
    ecx = MEM32(esi + 0x38);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esi + 0x34);
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2CA2: ;
    ecx = MEM32(esi + 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    ebx = ebx + MEM32(esi + 0x2C);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2CB3: ;
    xmm0 = xmm0 * MEMF(esi + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2CC8: ;
    xmm0 = xmm0 * MEMF(esi + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    edx = MEM32(esp + 0x70);
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    eax = esi + 8;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00102C10(); /* call 0x00102C10 */

loc_000F2D39: ;
    eax = MEM32(esp + 0x64);
    esp = esp + 0x5C;
    eax--;
    MEM32(esp + 8) = eax;
    if ((eax != 0)) goto loc_000F2B91; /* jne: not equal / not zero */

loc_000F2D4B: ;
    POP32(esp, ebx);

loc_000F2D4C: ;
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2D60
 * Original: 0x000F2D60 - 0x000F2DA2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F2D60: ;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    ecx = edi;
    PUSH32(esp, 0); sub_00111D50(); /* call 0x00111D50 */

loc_000F2D76: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F2D9D; /* je: equal / zero */

loc_000F2D7D: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    esi = edi + 0x10;
    PUSH32(esp, 0); sub_000F2B40(); /* call 0x000F2B40 */

loc_000F2D99: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_000F2D9D: ;
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2DB0
 * Original: 0x000F2DB0 - 0x000F2E9E (238 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_000F2DB0: ;
    esp = esp - 0x2C;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = ebx + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_000F2DCA: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F2E9A; /* je: equal / zero */

loc_000F2DD5: ;
    PUSH32(esp, esi);
    esi = esp + 0x24;
    PUSH32(esp, edi);
    ecx = esp + 8;
    edi = esp + 0xC;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F2DEA: ;
    esi = esp + 0x1C;
    ecx = esp + 0xC;
    edi = esp + 8;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F2DFD: ;
    esi = esp + 0x10;
    ecx = esp + 0xC;
    edi = esp + 8;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F2E10: ;
    xmm4 = MEMF(ebx + 8); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_000F2E70; /* jbe: below or equal (unsigned <=) */

loc_000F2E4C: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_000F2E70: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(ebx + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    esi = ebx + 0xA4;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_000F2B40(); /* call 0x000F2B40 */

loc_000F2E95: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F2E9A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2EA0
 * Original: 0x000F2EA0 - 0x000F2FFA (346 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F2EA0: ;
    esp = esp - 0x38;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2EA8: ;
    ecx = MEM32(esi + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(esi + 8);
    if ((edx == 0)) goto loc_000F2FF6; /* je: equal / zero */

loc_000F2EB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 8) = edx;
    PUSH32(esp, edi);
    /* nop */

loc_000F2EC0: ;
    SET_LO8(edx, MEM8(esi + 0x58));
    SET_LO16(eax, MEM16(esi + 0x54));
    SET_LO16(ecx, MEM16(esi + 0x52));
    SET_LO16(ebp, MEM16(esi + 0x56));
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO16(edx, MEM16(esi + 0x50));
    MEM16(esp + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x4E));
    MEM16(esp + 0x18) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x4C));
    MEM16(esp + 0x1C) = LO16(edx);
    edx = MEM32(esi + 0x48);
    MEM16(esp + 0x20) = LO16(eax);
    eax = MEM32(esi + 0x44);
    MEM16(esp + 0x24) = LO16(ecx);
    ecx = MEM32(esi + 0x40);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0x3C);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2F19: ;
    ecx = MEM32(esi + 0x38);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(esi + 0x34);
    edi = edx;
    edi = edi + ebx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2F2C: ;
    xmm0 = xmm0 * MEMF(esi + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2F41: ;
    xmm0 = xmm0 * MEMF(esi + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F2F56: ;
    xmm0 = xmm0 * MEMF(esi + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2F6B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(esi + 4));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F2F7E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    SET_LO16(edx, LO16(edx) + MEM16(esi));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00102C10(); /* call 0x00102C10 */

loc_000F2FE1: ;
    eax = MEM32(esp + 0x5C);
    esp = esp + 0x50;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_000F2EC0; /* jne: not equal / not zero */

loc_000F2FF3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F2FF6: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3000
 * Original: 0x000F3000 - 0x000F3120 (288 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3000: ;
    esp = esp - 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3008: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    edx = edx + eax;
    if ((edx == 0)) goto loc_000F311C; /* je: equal / zero */

loc_000F301C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = edx;

loc_000F3021: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3026: ;
    xmm0 = xmm0 * MEMF(esi + 0x14); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F303B: ;
    edi = MEM32(esp + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(edi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3051: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(edi));
    edi = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F3066: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F306E: ;
    xmm1 = MEMF(esi + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000F307C; /* jbe: below or equal (unsigned <=) */

loc_000F3078: ;
    SET_LO8(ebx, 1);
    goto loc_000F307E;

loc_000F307C: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000F307E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3083: ;
    xmm1 = MEMF(esi + 0x34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000F3091; /* jbe: below or equal (unsigned <=) */

loc_000F308D: ;
    SET_LO8(eax, 1);
    goto loc_000F3093;

loc_000F3091: ;
    SET_LO8(eax, 0); /* xor self */

loc_000F3093: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x38));
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F30B6: ;
    xmm0 = xmm0 * MEMF(esi + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x28); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F30CB: ;
    ecx = ZX8(MEM8(esi + 0x25));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(esi + 0x24));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F30DC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F30EE: ;
    xmm0 = xmm0 * MEMF(esi + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x31));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x3C;
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000F310F: ;
    esp = esp + 0x34;
    ebp--;
    if ((ebp != 0)) goto loc_000F3021; /* jne: not equal / not zero */

loc_000F3119: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F311C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3120
 * Original: 0x000F3120 - 0x000F345A (826 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3120: ;
    esp = esp - 0xD8;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE0);
    SET_LO8(eax, MEM8(ebp + 0x58));
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEM8(esp + 0x7C) = 0;
    MEM8(esp + 0x84) = 0xFF;
    eax = eax & 1;
    eax = eax << 0xB;
    eax = eax | 0x121E9;
    MEM32(esp + 0x70) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA8) = eax;
    MEM8(esp + 0xAC) = LO8(eax);
    MEM32(esp + 0xB0) = eax;
    MEM8(esp + 0xB4) = LO8(eax);
    MEM32(esp + 0xD0) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0xA0) = 0x13E6E0;
    MEM32(esp + 0xA4) = 0x13EC40;
    MEM16(esp + 0xB6) = 0xC;
    MEM16(esp + 0xB8) = 0x15;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F31FA: ;
    ecx = MEM32(ebp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(ebp);
    if ((edx == 0)) goto loc_000F3452; /* je: equal / zero */

loc_000F320A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    goto loc_000F3216;

loc_000F3213: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_000F3216: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F321B: ;
    edi = MEM32(esp + 0xF0);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    SET_LO16(esi, LO16(esi) + MEM16(edi));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3234: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(edi + 4));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3247: ;
    xmm1 = MEMF(ebp + 0x38); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000F3268; /* jbe: below or equal (unsigned <=) */

loc_000F3251: ;
    edx = MEM32(ebp + 0x5C);
    MEM32(esp + 0x94) = 0x13EDB0;
    MEM32(esp + 0x9C) = edx;
    goto loc_000F327E;

loc_000F3268: ;
    MEM32(esp + 0x94) = 0x157100;
    MEM32(esp + 0x9C) = 0;

loc_000F327E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3283: ;
    xmm0 = xmm0 * MEMF(ebp + 0x40); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x3C); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3298: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F32AF: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F32BE: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F32CD: ;
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x14); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = esp + 0x6C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F32E8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F32ED: ;
    xmm1 = MEMF(ebp + 0x30); /* movss */
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(ebp + 0x30); /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3319: ;
    xmm1 = MEMF(ebp + 0x30); /* movss */
    xmm6 = xmm6 - MEMF(ebp + 0x30); /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F333D: ;
    xmm0 = xmm0 * MEMF(ebp + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x1C); /* addss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3355: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x26);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp + 0x54);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = esp + 0x60;
    edx = edx + eax;
    MEM32(esp + 0x98) = edx;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F3379: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F33B1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 0x50)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 0x50))); }
    esi = edx;
    edx = MEM32(ebp + 0x48);
    eax = MEM32(edx + esi * 4);
    MEM32(esp + 0x9C) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F33C9: ;
    xmm0 = xmm0 * MEMF(ebp + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x28); /* addss */
    ecx = MEM32(ebp + 0x4C);
    xmm0 = xmm0 * MEMF(ecx + esi * 4); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0x44); /* mulss */
    edx = MEM32(esp + 0x10C);
    eax = MEM32(ebp + 0x60);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(ebp + 0x58));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7F);
    eax = esp + 0x40;
    MEMF(esp + 0x40) = xmm0; /* movss */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 3;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000F3420: ;
    ecx = MEM32(ebp + 0x60);
    esp = esp + 0x38;
    if (CMP_LE(ecx & ecx, 0)) goto loc_000F3445; /* jle: less or equal (signed <=) */

loc_000F342A: ;
    if (TEST_Z(eax, eax)) goto loc_000F3445; /* je: equal / zero */

loc_000F342E: ;
    esi = MEM32(ebp + 0x64);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x290;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_000F3445: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_000F3213; /* jne: not equal / not zero */

loc_000F344F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F3452: ;
    POP32(esp, ebp);
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3460
 * Original: 0x000F3460 - 0x000F3858 (1016 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3460: ;
    esp = esp - 0xE0;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x114));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xEC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xFC);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2E6);
    PUSH32(esp, 0x5F3A30);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000F3491: ;
    edx = eax;
    edi = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(edx, edi)) goto loc_000F384D; /* je: equal / zero */

loc_000F34A4: ;
    if (CMP_LE(esi, edi)) goto loc_000F34BE; /* jle: less or equal (signed <=) */

loc_000F34A8: ;
    ecx = esi;
    edi = edx;
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

loc_000F34BE: ;
    SET_LO8(eax, MEM8(esp + 0x110));
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x64AC40); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x4000;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm6; /* movss */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x80;
    ebx = ebx | eax;
    SET_LO8(eax, MEM8(esp + 0x124));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x100000;
    ebx = ebx | eax;
    ebx = ebx | 0x13968;
    MEM32(esp + 0x84) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3539: ;
    ecx = MEM32(ebp + 4);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp);
    SET_LO8(eax, MEM8(esp + 0x10C));
    MEM8(esp + 0x90) = LO8(eax);
    MEM32(esp + 0x94) = edi;
    MEM8(esp + 0x98) = 0xFF;
    MEM32(esp + 0xA0) = edi;
    MEM32(esp + 0xA8) = edi;
    MEM32(esp + 0xAC) = edi;
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xB4) = 0x13E6E0;
    MEM32(esp + 0xB8) = 0x13EC40;
    MEM8(esp + 0xC0) = 0;
    MEM32(esp + 0xC4) = edi;
    MEM8(esp + 0xC8) = 0;
    MEM16(esp + 0xCA) = 0xC;
    MEM16(esp + 0xCC) = 0x15;
    edx = edx + ecx;
    ecx = MEM32(esp + 0x114);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    if (CMP_G(edx, esi)) edx = esi; /* cmovg */
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(esp + 0xBC) = ecx;
    if (CMP_EQ(edx, edi)) goto loc_000F384D; /* je: equal / zero */

loc_000F35DA: ;
    MEM32(esp + 0x14) = edx;
    goto loc_000F35E3;

loc_000F35E0: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_000F35E3: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F35E8: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    SET_LO16(esi, LO16(esi) + MEM16(ebp + 0x14));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F35FB: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(ebp + 0x18));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F360E: ;
    xmm0 = xmm0 * MEMF(ebp + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x1C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = esp + 0x74;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F3629: ;
    edx = MEM32(esp + 0x128);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = esp + 0x68;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F363C: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x6C); /* addss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x70); /* addss */
    esp = esp + 0x18;
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3677: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F368E: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F369D: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F36AC: ;
    xmm1 = MEMF(ebp + 0x38); /* movss */
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(ebp + 0x38); /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F36D8: ;
    xmm1 = MEMF(ebp + 0x38); /* movss */
    xmm6 = xmm6 - MEMF(ebp + 0x38); /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F36F9: ;
    xmm0 = xmm0 * MEMF(ebp + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x24); /* addss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3711: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x2E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x2C);
    edx = edx + eax;
    MEM32(esp + 0x88) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F372B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x10))); }

loc_000F3730: ;
    esi = 0; /* xor self */

loc_000F3732: ;
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(MEM8(esi + edi), 0)) goto loc_000F3749; /* je: equal / zero */

loc_000F373C: ;
    /* nop */

loc_000F3740: ;
    SET_LO8(eax, MEM8(esi + edi + 1));
    esi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F3740; /* jne: not equal / not zero */

loc_000F3749: ;
    if (TEST_Z(edx, edx)) goto loc_000F375C; /* je: equal / zero */

loc_000F374D: ;
    eax = MEM32(esp + 0x100);
    edx--;
    esi++;
    if (CMP_L(esi, eax)) goto loc_000F3732; /* jl: less (signed <) */

loc_000F375A: ;
    goto loc_000F3730;

loc_000F375C: ;
    ecx = MEM32(esp + 0xF8);
    edx = MEM32(ecx + esi * 4);
    MEM32(esp + 0x8C) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3772: ;
    xmm0 = xmm0 * MEMF(ebp + 0x34); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x30); /* addss */
    eax = MEM32(esp + 0xFC);
    xmm0 = xmm0 * MEMF(eax + esi * 4); /* mulss */
    eax = MEM32(esp + 0x10);
    eax--;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esi + edi) = 1;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F37A6: ;
    xmm1 = MEMF(ebp + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = MEM32(esp + 0x84);
    if ((xmm1 <= xmm0)) goto loc_000F37D1; /* jbe: below or equal (unsigned <=) */

loc_000F37B7: ;
    ecx = MEM32(ebp + 0x40);
    eax = eax | 1;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0x9C) = 0x13EDB0;
    goto loc_000F37EA;

loc_000F37D1: ;
    eax = eax & 0xFFFFFFFEu;
    MEM32(esp + 0xA4) = 0;
    MEM32(esp + 0x9C) = 0x157100;

loc_000F37EA: ;
    edx = MEM32(esp + 0x128);
    edi = MEM32(esp + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x124);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    ecx = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000F381B: ;
    esi = MEM32(esp + 0x124);
    esp = esp + 0x20;
    if (TEST_Z(esi, esi)) goto loc_000F3843; /* je: equal / zero */

loc_000F3829: ;
    if (TEST_Z(eax, eax)) goto loc_000F3843; /* je: equal / zero */

loc_000F382D: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x290;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_000F3843: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_000F35E0; /* jne: not equal / not zero */

loc_000F384D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xE0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3860
 * Original: 0x000F3860 - 0x000F3880 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3860(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F3860: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F387F; /* je: equal / zero */

loc_000F3869: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000B9F10(); /* call 0x000B9F10 */

loc_000F387B: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_000F387F: ;
    esp += 4; return; /* ret */

}
