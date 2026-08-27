/**
 * Burnout 3 - Recompiled code chunk 69
 * Functions: 250 (0x0053B9D0 - 0x0054E86F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

extern void conker_trace_point(uint32_t xbox_va);

/**
 * sub_0053B9D0
 * Original: 0x0053B9D0 - 0x0053B9EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B9D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053B9D0: ;
    eax = MEM32(ecx + 4);
    eax = eax + edx;
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    if (CMP_EQ(edx, 0x20000)) goto loc_0053B9EA; /* je: equal / zero */

loc_0053B9E5: ;
    eax = eax & 0xFFFFFFF;

loc_0053B9EA: ;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0053B9F0
 * Original: 0x0053B9F0 - 0x0053BDB4 (964 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B9F0(void)
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

loc_0053B9F0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x5499E8);
    ebx = MEM32(ebp + 0x1A08);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1A04);
    eax = ZX8(MEM8(edi + 0xD));
    SET_LO8(ecx, MEM8(eax + 0x545CD0));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0053BA67; /* je: equal / zero */

loc_0053BA22: ;
    esi = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_0053F9B0(); /* call 0x0053F9B0 */

loc_0053BA2B: ;
    ecx = MEM32(ebp + 4);
    esi = eax;
    esi = esi & 0xFFFFFDFFu;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp);
    esi = esi | 0x100;
    if (CMP_B(eax, ecx)) goto loc_0053BA56; /* jb: below (unsigned <) */

loc_0053BA47: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053BA56: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    eax = eax + 8;
    MEM32(ebp) = eax;
    edx = 0; /* xor self */

loc_0053BA67: ;
    ecx = MEM32(esp + 0x54);
    if (TEST_Z(LO8(ecx), 0xF0)) goto loc_0053BAD2; /* je: equal / zero */

loc_0053BA70: ;
    eax = ZX8(MEM8(edi + 0xD));
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 0x19)) goto loc_0053BAD2; /* ja: above (unsigned >) */

loc_0053BA7C: ;
    eax = ZX8(MEM8(eax + 0x53BDC0));
    { uint32_t _jt = MEM32(eax * 4 + 0x53BDB4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0053BA8Au) goto loc_0053BA8A;
    if (_jt == 0x0053BAA8u) goto loc_0053BAA8;
    if (_jt == 0x0053BAD2u) goto loc_0053BAD2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053BA8A: ;
    eax = MEM32(esp + 0x58);
    esi = eax;
    esi = esi >> 3;
    edi = eax;
    esi = esi & 0x1F0000;
    edi = edi & 0xFC00;
    esi = esi | edi;
    esi = esi >> 2;
    goto loc_0053BAC4;

loc_0053BAA8: ;
    eax = MEM32(esp + 0x58);
    esi = eax;
    esi = esi >> 3;
    edi = eax;
    esi = esi & 0x1F0000;
    edi = edi & 0xF800;
    esi = esi | edi;
    esi = esi >> 3;

loc_0053BAC4: ;
    eax = eax & 0xF8;
    esi = esi | eax;
    esi = esi >> 3;
    MEM32(esp + 0x58) = esi;

loc_0053BAD2: ;
    if (CMP_NE(ebx, edx)) goto loc_0053BAE3; /* jne: not equal / not zero */

loc_0053BAD6: ;
    ecx = ecx & 0xFFFFFFFCu;
    MEM32(esp + 0x54) = ecx;
    if ((ecx == 0)) goto loc_0053BDAA; /* je: equal / zero */

loc_0053BAE3: ;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0053BBD0; /* je: equal / zero */

loc_0053BAEC: ;
    ecx = ZX8(MEM8(ebx + 0xD));
    ecx = ecx - 0x2A;
    { uint32_t _jt = MEM32(ecx * 4 + 0x53BDDC); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0053BAFAu) goto loc_0053BAFA;
    if (_jt == 0x0053BB2Cu) goto loc_0053BB2C;
    if (_jt == 0x0053BB5Eu) goto loc_0053BB5E;
    if (_jt == 0x0053BB96u) goto loc_0053BB96;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053BAFA: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053BB0D: ;
    if (CMP_LE(eax, 0xFFFF)) goto loc_0053BB19; /* jle: less or equal (signed <=) */

loc_0053BB14: ;
    eax = 0xFFFF;

loc_0053BB19: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(eax, edx)) ? 1 : 0); /* setl */
    ecx--;
    ecx = ecx & eax;
    MEM32(esp + 0x10) = ecx;
    goto loc_0053BBD0;

loc_0053BB2C: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053BB3F: ;
    if (CMP_LE(eax, 0xFFFFFF)) goto loc_0053BB4B; /* jle: less or equal (signed <=) */

loc_0053BB46: ;
    eax = 0xFFFFFF;

loc_0053BB4B: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(eax, edx)) ? 1 : 0); /* setl */
    ecx--;
    ecx = ecx & eax;
    ecx = ecx << 8;
    MEM32(esp + 0x10) = ecx;
    goto loc_0053BBD0;

loc_0053BB5E: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0053BBCC; /* jnp: not parity */

loc_0053BB71: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(esp + 0x30) = fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax >> 8;
    eax = eax - 0x8000;
    eax = eax & 0xFFFF;
    MEM32(esp + 0x10) = eax;
    goto loc_0053BBD0;

loc_0053BB96: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0053BBCC; /* jnp: not parity */

loc_0053BBA9: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(esp + 0x30) = fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax + 0xF8000000u;
    eax = eax & 0xFFFFFFF0u;
    eax = eax << 4;
    MEM32(esp + 0x10) = eax;
    goto loc_0053BBD0;

loc_0053BBCC: ;
    MEM32(esp + 0x10) = edx;

loc_0053BBD0: ;
    ebx = MEM32(ebp + 0xEE0);
    ecx = MEM32(ebp + 0xEE4);
    esi = MEM32(ebp + 0xEE8);
    edi = MEM32(ebp + 0xEEC);
    eax = MEM32(esp + 0x4C);
    esi = esi + ebx;
    edi = edi + ecx;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x30) = edi;
    if (CMP_NE(eax, edx)) goto loc_0053BC26; /* jne: not equal / not zero */

loc_0053BC04: ;
    edx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x4C) = 1;
    goto loc_0053BC30;

loc_0053BC26: ;
    edx = MEM32(esp + 0x50);
    goto loc_0053BC30;

loc_0053BC2C: ;
    ecx = MEM32(esp + 0x24);

loc_0053BC30: ;
    eax = MEM32(edx);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(eax, ebx)) goto loc_0053BC3E; /* jg: greater (signed >) */

loc_0053BC3A: ;
    MEM32(esp + 0x14) = ebx;

loc_0053BC3E: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(eax, ecx)) goto loc_0053BC4D; /* jg: greater (signed >) */

loc_0053BC49: ;
    MEM32(esp + 0x5C) = ecx;

loc_0053BC4D: ;
    eax = MEM32(edx + 8);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ecx = eax;
    if (CMP_L(eax, esi)) goto loc_0053BC58; /* jl: less (signed <) */

loc_0053BC56: ;
    ecx = esi;

loc_0053BC58: ;
    eax = MEM32(edx + 0xC);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(eax, edi)) goto loc_0053BC65; /* jl: less (signed <) */

loc_0053BC63: ;
    eax = edi;

loc_0053BC65: ;
    (void)0; /* cmp MEM32(esp + 0x14), ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_GE(MEM32(esp + 0x14), ecx)) goto loc_0053BD62; /* jge: greater or equal (signed >=) */

loc_0053BC73: ;
    if (CMP_GE(MEM32(esp + 0x5C), eax)) goto loc_0053BD62; /* jge: greater or equal (signed >=) */

loc_0053BC7D: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053BC96: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053BCB1: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053BCCC: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053BCE9: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    if (CMP_B(eax, ecx)) goto loc_0053BD08; /* jb: below (unsigned <) */

loc_0053BCF5: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053BD04: ;
    edx = MEM32(esp + 0x50);

loc_0053BD08: ;
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    esi = esi - 0x10000;
    esi = esi | ebx;
    ebx = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x60);
    edi = edi - 0x10000;
    edi = edi | ebx;
    ebx = MEM32(esp + 0x2C);
    ecx = ecx | esi;
    esi = MEM32(esp + 0x28);
    MEM32(eax + 8) = edi;
    edi = MEM32(esp + 0x30);
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x18) = ecx;
    eax = eax + 0x1C;
    MEM32(ebp) = eax;

loc_0053BD62: ;
    eax = MEM32(esp + 0x4C);
    edx = edx + 0x10;
    eax--;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x4C) = eax;
    if ((eax != 0)) goto loc_0053BC2C; /* jne: not equal / not zero */

loc_0053BD78: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0053BDAA; /* je: equal / zero */

loc_0053BD80: ;
    eax = MEM32(ebp);
    if (CMP_B(eax, MEM32(ebp + 4))) goto loc_0053BD97; /* jb: below (unsigned <) */

loc_0053BD88: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053BD97: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(ebp) = eax;

loc_0053BDAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053BE00
 * Original: 0x0053BE00 - 0x0053BE1D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BE00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053BE00: ;
    eax = MEM32(0x54A8BC);
    PUSH32(esp, 0xBC800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053BE10: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x24) = eax;
    if (TEST_NZ(eax, eax)) { sub_0053BE1D(); return; } /* jne: not equal / not zero */

loc_0053BE17: ;
    eax = 0x8007000Eu;
    esp += 4; return; /* ret */

}

/**
 * sub_0053BEA0
 * Original: 0x0053BEA0 - 0x0053BF62 (194 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BEA0: ;
    conker_trace_point(0x53D7C101);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053BEBE; /* jb: below (unsigned <) */

loc_0053BEAF: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053BEBE: ;
    edi = MEM32(esi + 0x2C);
    MEM32(eax) = 0x4A310;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = eax * 8;
    edx = edx | ecx;
    ecx = MEM32(esi + 0x40);
    ecx = ecx & 3;
    edx = edx << 2;
    edx = edx | ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0x41D70;
    MEM32(eax + 0xC) = edi;
    ecx = 0x41D90;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0;
    edx = eax + 0x20;
    MEM32(esi) = edx;
    SET_LO8(edx, MEM8(esp + 0xC));
    ecx = edi;
    ecx = ecx >> 1;
    ecx = ecx & 0x3F;
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    MEM32(esi + ecx * 8 + 0x64) = edi;
    MEM32(esi + ecx * 8 + 0x68) = eax;
    if (TEST_Z(LO8(edx), 1)) goto loc_0053BF3F; /* je: equal / zero */

loc_0053BF23: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x38);
    ecx++;
    ecx = ecx & ebp;
    ebp = MEM32(esi + 0x48);
    MEM32(esi + 0x34) = ecx;
    MEM32(ebp + ecx * 8) = edi;
    ebp = MEM32(esi + 0x48);
    MEM32(ebp + ecx * 8 + 4) = eax;
    POP32(esp, ebp);

loc_0053BF3F: ;
    ecx = MEM32(esi + 0x2C);
    ecx = ecx + 2;
    (void)0; /* test LO8(edx), 2 - flags set for next jcc */
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x2C) = ecx;
    if (TEST_NZ(LO8(edx), 2)) goto loc_0053BF5B; /* jne: not equal / not zero */

loc_0053BF54: ;
    edx = esi;
    conker_trace_point(0x53D7C102);
    PUSH32(esp, 0); sub_0053C450(); /* call 0x0053C450 */
    conker_trace_point(0x53D7C103);

loc_0053BF5B: ;
    conker_trace_point(0x53D7C104);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053BF70
 * Original: 0x0053BF70 - 0x0053BF9B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BF70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053BF70: ;
    edx = MEM32(esi);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ecx = eax;
    if (CMP_A(eax, edx)) goto loc_0053BF7D; /* ja: above (unsigned >) */

loc_0053BF78: ;
    ecx = MEM32(esi + 0x44);
    ecx = ecx + eax;

loc_0053BF7D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    if (CMP_A(eax, edx)) goto loc_0053BF8B; /* ja: above (unsigned >) */

loc_0053BF88: ;
    eax = eax + MEM32(esi + 0x44);

loc_0053BF8B: ;
    eax = eax - ecx;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx--;
    eax = eax & ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053BFA0
 * Original: 0x0053BFA0 - 0x0053C09E (254 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BFA0: ;
    edx = MEM32(0x5499E8);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    eax = eax - edi;
    if (CMP_A(eax, 0x80)) goto loc_0053C013; /* ja: above (unsigned >) */

loc_0053BFBD: ;
    ecx = MEM32(esp + 0x14);
    edi = edi >> 1;
    edi = edi & 0x3F;

loc_0053BFC6: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0053C03C; /* je: equal / zero */

loc_0053BFCB: ;
    ebp = MEM32(edx + edi * 8 + 0x68);
    ebx = MEM32(edx);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    eax = edx + edi * 8 + 0x64;
    if (CMP_A(ebp, ebx)) goto loc_0053BFDC; /* ja: above (unsigned >) */

loc_0053BFD9: ;
    ebp = ebp + MEM32(edx + 0x44);

loc_0053BFDC: ;
    esi = esi >> 1;
    ecx = edi + 1;
    esi = esi & 0x3F;
    ecx = ecx & 0x3F;
    if (CMP_EQ(ecx, esi)) goto loc_0053C096; /* je: equal / zero */

loc_0053BFEF: ;
    /* nop */

loc_0053BFF0: ;
    edi = MEM32(edx + ecx * 8 + 0x68);
    if (CMP_A(edi, ebx)) goto loc_0053BFFB; /* ja: above (unsigned >) */

loc_0053BFF8: ;
    edi = edi + MEM32(edx + 0x44);

loc_0053BFFB: ;
    if (CMP_B(edi, ebp)) goto loc_0053C094; /* jb: below (unsigned <) */

loc_0053C003: ;
    ecx++;
    ecx = ecx & 0x3F;
    if (CMP_NE(ecx, esi)) goto loc_0053BFF0; /* jne: not equal / not zero */

loc_0053C00B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0053C013: ;
    ecx = MEM32(edx + 0x34);
    edi = MEM32(edx + 0x48);
    ebp = MEM32(edi + ecx * 8);
    ebx = esi;
    ebx = ebx - ebp;
    if (CMP_BE(ebx, eax)) goto loc_0053C02D; /* jbe: below or equal (unsigned <=) */

loc_0053C024: ;
    edi = esi;
    edi = edi >> 1;
    edi = edi & 0x3F;
    goto loc_0053BFC6;

loc_0053C02D: ;
    ebx = MEM32(edx + 0x38);

loc_0053C030: ;
    ecx++;
    ecx = ecx & ebx;
    ebp = esi;
    ebp = ebp - MEM32(edi + ecx * 8);
    if (CMP_A(ebp, eax)) goto loc_0053C030; /* ja: above (unsigned >) */

loc_0053C03C: ;
    ebp = MEM32(edx + 0x48);
    esi = MEM32(ebp + ecx * 8 + 4);
    (void)0; /* cmp esi, MEM32(edx) - flags set for next jcc */
    eax = ebp + ecx * 8;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_A(esi, MEM32(edx))) goto loc_0053C05A; /* ja: above (unsigned >) */

loc_0053C053: ;
    esi = esi + MEM32(edx + 0x44);
    MEM32(esp + 0x10) = esi;

loc_0053C05A: ;
    edi = MEM32(edx + 0x34);
    ebx = MEM32(edx + 0x38);
    edi++;
    edi = edi & ebx;
    ecx++;
    ecx = ecx & ebx;
    if (CMP_EQ(ecx, edi)) goto loc_0053C096; /* je: equal / zero */

loc_0053C06A: ;
    /* nop */

loc_0053C070: ;
    esi = MEM32(ebp + ecx * 8 + 4);
    if (CMP_A(esi, MEM32(edx))) goto loc_0053C07B; /* ja: above (unsigned >) */

loc_0053C078: ;
    esi = esi + MEM32(edx + 0x44);

loc_0053C07B: ;
    if (CMP_B(esi, MEM32(esp + 0x10))) goto loc_0053C094; /* jb: below (unsigned <) */

loc_0053C081: ;
    ecx++;
    ecx = ecx & ebx;
    if (CMP_NE(ecx, edi)) goto loc_0053C070; /* jne: not equal / not zero */

loc_0053C088: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0053C094: ;
    eax = 0; /* xor self */

loc_0053C096: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C0A0
 * Original: 0x0053C0A0 - 0x0053C0D2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0053C0A0: ;
    conker_trace_point(0x53D7D201);
    eax = MEM32(ecx + 0x1C20);
    eax = MEM32(eax + 0x44);
    edx = MEM32(ecx + 0x24);
    eax = eax | 0x80000000u;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(eax, edx)) goto loc_0053C0D2; /* jb: below (unsigned <) */

loc_0053C0B7: ;
    if (CMP_AE(eax, MEM32(ecx + 0x28))) goto loc_0053C0D2; /* jae: above or equal (unsigned >=) */

loc_0053C0BC: ;
    edi = MEM32(ecx);
    esi = MEM32(ecx + 0x40);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = (uint32_t)(-(int32_t)edx);
    esi = esi - edx;
    POP32(esp, edi);
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    conker_trace_point(0x53D7D202);
    esp += 4; return; /* ret */

loc_0053C0D2: ;
    esi = MEM32(ecx + 0x40);
    eax = MEM32(ecx + 0x934);
    eax = MEM32(eax + 0x400B10);
    edx = esi - eax;
    eax = eax >> 5;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x60);
    edi = esi;
    eax = eax & 0x07FFFFFCu;
    edi = edi - ebx;
    edx = edx & 3;
    eax = eax | 0x80000000u;
    POP32(esp, ebx);
    if (CMP_B(edi, edx)) goto loc_0053C114;
    if (CMP_NE(edi, edx)) goto loc_0053C109;
    if (CMP_A(MEM32(ecx + 0x5C), eax)) goto loc_0053C114;

loc_0053C109: ;
    esi = esi - edx;
    POP32(esp, edi);
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    conker_trace_point(0x53D7D203);
    esp += 4; return;

loc_0053C114: ;
    eax = MEM32(ecx + 0x5C);
    POP32(esp, edi);
    POP32(esp, esi);
    conker_trace_point(0x53D7D204);
    esp += 4; return;

}

/**
 * sub_0053C120
 * Original: 0x0053C120 - 0x0053C182 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C120(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C120: ;
    if (TEST_Z(eax, eax)) goto loc_0053C143; /* je: equal / zero */

loc_0053C124: ;
    edx = MEM32(esi + 0x934);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    edi = edi;

loc_0053C130: ;
    eax = MEM32(edx + 0x400B10);
    ecx = MEM32(edi);
    ecx = ecx << 2;
    ecx = ecx ^ eax;
    if (TEST_NZ(LO8(ecx), 0x7C)) goto loc_0053C130; /* jne: not equal / not zero */

loc_0053C142: ;
    POP32(esp, edi);

loc_0053C143: ;
    edx = MEM32(esi + 0x1C20);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(esi + 0x24);
    eax = eax | 0x80000000u;
    if (CMP_B(eax, ecx)) goto loc_0053C15D; /* jb: below (unsigned <) */

loc_0053C158: ;
    if (CMP_B(eax, MEM32(esi + 0x28))) goto loc_0053C181; /* jb: below (unsigned <) */

loc_0053C15D: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x2C);
    eax = eax + 2;
    if (CMP_NE(eax, ecx)) goto loc_0053C16F; /* jne: not equal / not zero */

loc_0053C16C: ;
    eax = MEM32(esi);
    esp += 4; return; /* ret */

loc_0053C16F: ;
    PUSH32(esp, 0); sub_0053BFA0(); /* call 0x0053BFA0 */

loc_0053C174: ;
    if (TEST_Z(eax, eax)) goto loc_0053C17C; /* je: equal / zero */

loc_0053C178: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

loc_0053C17C: ;
    eax = MEM32(esi);
    eax = eax + 4;

loc_0053C181: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C190
 * Original: 0x0053C190 - 0x0053C2D1 (321 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C190: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x2C);
    edx = eax;
    edx = edx - ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = eax;
    ecx = ecx - edi;
    if (CMP_AE(ecx, edx)) goto loc_0053C2CC; /* jae: above or equal (unsigned >=) */

loc_0053C1B4: ;
    if (CMP_NE(edi, eax)) goto loc_0053C1BF; /* jne: not equal / not zero */

loc_0053C1B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053C1BF: ;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0); sub_0053BFA0(); /* call 0x0053BFA0 */

loc_0053C1C7: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0053C2CB; /* je: equal / zero */

loc_0053C1D1: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053C120(); /* call 0x0053C120 */

loc_0053C1D8: ;
    edx = MEM32(esi);
    if (CMP_A(eax, edx)) goto loc_0053C1E1; /* ja: above (unsigned >) */

loc_0053C1DE: ;
    eax = eax + MEM32(esi + 0x44);

loc_0053C1E1: ;
    ecx = MEM32(ebp + 4);
    if (CMP_A(ecx, edx)) goto loc_0053C1EB; /* ja: above (unsigned >) */

loc_0053C1E8: ;
    ecx = ecx + MEM32(esi + 0x44);

loc_0053C1EB: ;
    ecx = ecx - eax;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    if (((int32_t)ecx < 0)) goto loc_0053C293; /* js: sign (negative) */

loc_0053C1F8: ;
    if (CMP_B(ecx, 0x2400)) goto loc_0053C293; /* jb: below (unsigned <) */

loc_0053C204: ;
    eax = MEM32(esi + 0x19FC);
    if (TEST_Z(eax, eax)) goto loc_0053C234; /* je: equal / zero */

loc_0053C20E: ;
    /* emms - empty MMX state */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x19FC), _icall_esp); /* indirect call */
    }

loc_0053C21D: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053C120(); /* call 0x0053C120 */

loc_0053C227: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053BF70(); /* call 0x0053BF70 */

loc_0053C22D: ;
    if (CMP_B(eax, 0x2000)) goto loc_0053C293; /* jb: below (unsigned <) */

loc_0053C234: ;
    edi = MEM32(ebp + 4);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), 8 - flags set for next jcc */
    MEM32(esi + 0x1DD0) = eax;
    if (TEST_NZ(LO8(ebx), 8)) goto loc_0053C24E; /* jne: not equal / not zero */

loc_0053C244: ;
    MEM32(edi + 0x10) = 0x40110;
    MEM32(edi + 0x14) = eax;

loc_0053C24E: ;
    MEM32(edi + 0x18) = 0x40100;
    MEM32(edi + 0x1C) = 5;
    PUSH32(esp, 0); sub_0053C630(); /* call 0x0053C630 */

loc_0053C261: ;
    eax = 1;
    PUSH32(esp, 0); sub_0053C120(); /* call 0x0053C120 */

loc_0053C26B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053BF70(); /* call 0x0053BF70 */

loc_0053C271: ;
    if (CMP_AE(eax, 0x2000)) { g_seh_ebp = ebp; sub_0053C2D1(); return; } /* jae: above or equal (unsigned >=) */

loc_0053C278: ;
    eax = 0x40100;
    ecx = 0; /* xor self */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = ecx;
    PUSH32(esp, 0); sub_0053C630(); /* call 0x0053C630 */

loc_0053C290: ;
    edi = MEM32(ebp);

loc_0053C293: ;
    eax = MEM32(esi + 0x19FC);
    if (TEST_Z(eax, eax)) goto loc_0053C2B5; /* je: equal / zero */

loc_0053C29D: ;
    /* emms - empty MMX state */
    ebx = ebx | 0x80000000u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x19FC), _icall_esp); /* indirect call */
    }

loc_0053C2B2: ;
    esp = esp + 4;

loc_0053C2B5: ;
    edx = MEM32(esi + 0x30);
    esi = MEM32(esi + 0x2C);
    eax = esi;
    eax = eax - edi;
    /* nop */

loc_0053C2C0: ;
    ecx = MEM32(edx);
    edi = esi;
    edi = edi - ecx;
    if (CMP_B(eax, edi)) goto loc_0053C2C0; /* jb: below (unsigned <) */

loc_0053C2CA: ;
    POP32(esp, ebx);

loc_0053C2CB: ;
    POP32(esp, ebp);

loc_0053C2CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053C300
 * Original: 0x0053C300 - 0x0053C33D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C300(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C300: ;
    conker_trace_point(0x53D7D101);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    ebx = eax;
    (void)0; /* test MEM8(esi + 8), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(esi + 8), 4)) { conker_trace_point(0x53D7D102); sub_0053C33D(); return; } /* je: equal / zero */

loc_0053C314: ;
    eax = MEM32(esi + 0x764);
    edi = MEM32(eax + 4);
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x768);
    ecx = ecx - edi;
    edx = edx + ecx;
    MEM32(esi + 0x768) = edx;
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053C440
 * Original: 0x0053C440 - 0x0053C450 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C440(void)
{

loc_0053C440: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053C44F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C450
 * Original: 0x0053C450 - 0x0053C460 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C450: ;
    conker_trace_point(0x53D7C201);
    eax = MEM32(edx + 8);
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 4)) goto loc_0053C460; /* je: equal / zero */

loc_0053C458: ;
    esi = MEM32(edx + 0x770);
    goto loc_0053C462;

loc_0053C460: ;
    esi = MEM32(edx);

loc_0053C462: ;
    if (TEST_NZ(HI8(eax), 0x20)) goto loc_0053C4B8;
    conker_trace_point(0x53D7C202);
    PUSH32(esp, 0); sub_0053C630();
    conker_trace_point(0x53D7C203);
    eax = MEM32(edx + 0x1C20);
    esi = esi & 0x0FFFFFFFu;
    MEM32(eax + 0x40) = esi;
    eax = MEM32(0x547530);
    if (TEST_Z(eax, eax)) goto loc_0053C4F0;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx + 0x934);

loc_0053C490: ;
    ecx = MEM32(eax + 0x3240);
    if (CMP_NE(ecx, MEM32(eax + 0x3244))) goto loc_0053C490;
    esi = MEM32(eax + 0x400700);
    ecx = 0;
    SET_LO8(ecx, TEST_NZ(esi, esi) ? 1 : 0);
    if (TEST_NZ(ecx, ecx)) goto loc_0053C490;
    MEM32(edx + 8) = MEM32(edx + 8) | 0x2000;
    POP32(esp, esi);
    esp += 4; return;

loc_0053C4B8: ;
    eax = MEM32(edx) & 0x0FFFFFFFu;
    ecx = 0x5499E0 - 0x40;
    MEM32(edx + 0x1C20) = ecx;
    MEM32(ecx + 0x40) = eax;
    ecx = MEM32(edx + 0x1C20);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(edx + 0x2C) - 2;
    ecx = MEM32(edx + 0x30);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 0x2478);
    MEM32(edx + 0x1DE4) = eax;

loc_0053C4F0: ;
    conker_trace_point(0x53D7C204);
    POP32(esp, esi);
    esp += 4; return;

}

/**
 * sub_0053C500
 * Original: 0x0053C500 - 0x0053C50F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C500: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(LO8(eax), 4)) { sub_0053C50F(); return; } /* je: equal / zero */

loc_0053C507: ;
    edx = MEM32(esi + 0x770);
    g_seh_ebp = ebp; sub_0053C511(); return; /* tail jmp 0x0053C511 */

}

/**
 * sub_0053C570
 * Original: 0x0053C570 - 0x0053C5FC (140 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C570(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C570: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    if (TEST_Z(esi, esi)) goto loc_0053C5FA; /* je: equal / zero */

loc_0053C57B: ;
    edx = MEM32(eax);
    ecx = edx;
    ecx = ecx & 0x70000;
    if (CMP_NE(ecx, 0x50000)) goto loc_0053C5B7; /* jne: not equal / not zero */

loc_0053C58D: ;
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0053C5B7; /* je: equal / zero */

loc_0053C594: ;
    if (TEST_NZ(edx, 0x780000)) goto loc_0053C5A8; /* jne: not equal / not zero */

loc_0053C59C: ;
    if (TEST_Z(ecx, ecx)) goto loc_0053C5B5; /* je: equal / zero */

loc_0053C5A0: ;
    if (TEST_Z(MEM32(ecx), 0x780000)) goto loc_0053C5B5; /* je: equal / zero */

loc_0053C5A8: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053C5B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C5B5: ;
    eax = ecx;

loc_0053C5B7: ;
    ecx = MEM32(eax);
    (void)0; /* test ecx, 0x780000 - flags set for next jcc */
    edx = MEM32(eax + 8);
    if (TEST_NZ(ecx, 0x780000)) goto loc_0053C5E1; /* jne: not equal / not zero */

loc_0053C5C4: ;
    ecx = ecx & 0x70000;
    if (CMP_NE(ecx, 0x50000)) goto loc_0053C5EE; /* jne: not equal / not zero */

loc_0053C5D2: ;
    eax = MEM32(eax + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053C5EE; /* je: equal / zero */

loc_0053C5D9: ;
    if (TEST_Z(MEM32(eax), 0x780000)) goto loc_0053C5EE; /* je: equal / zero */

loc_0053C5E1: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053C5EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C5EE: ;
    if (TEST_Z(edx, edx)) goto loc_0053C5FA; /* je: equal / zero */

loc_0053C5F2: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053C5FA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C600
 * Original: 0x0053C600 - 0x0053C62E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C600(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C600: ;
    edx = MEM32(0x5499E8);
    if (TEST_Z(edx, edx)) goto loc_0053C62D; /* je: equal / zero */

loc_0053C60A: ;
    eax = MEM32(ecx + 8);
    if (TEST_Z(MEM32(ecx), 0x780000)) goto loc_0053C621; /* je: equal / zero */

loc_0053C615: ;
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053C620: ;
    esp += 4; return; /* ret */

loc_0053C621: ;
    if (TEST_Z(eax, eax)) goto loc_0053C62D; /* je: equal / zero */

loc_0053C625: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053C62D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C630
 * Original: 0x0053C630 - 0x0053C65D (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C630(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C630: ;
    conker_trace_point(0x53D7C301);
    eax = MEM32(0x5499E8);
    eax = MEM32(eax + 0x1C28);
    /* TODO: sfence  */
    ecx = MEM32(eax + 0x100410);
    ecx = ecx | 0x10000;
    MEM32(eax + 0x100410) = ecx;

    /*
     * NV2A puller flush.  On real Xbox hardware bit 16 is cleared by the GPU
     * after it consumes the request.  The current host runtime only mirrors
     * the MMIO range, so acknowledge it here instead of spinning forever.
     */
    MEM32(eax + 0x100410) = ecx & ~0x10000u;

loc_0053C650: ;
    if (TEST_NZ(MEM32(eax + 0x100410), 0x10000)) goto loc_0053C650; /* jne: not equal / not zero */

loc_0053C65C: ;
    conker_trace_point(0x53D7C302);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C660
 * Original: 0x0053C660 - 0x0053C6AA (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C660(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C660: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_0053C66D: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edx = eax + esi * 4 + 4;
    ecx = ecx + 0x200;
    if (CMP_B(edx, ecx)) goto loc_0053C6A9; /* jb: below (unsigned <) */

loc_0053C686: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    edx = esi * 4 + 0x208;
    if (CMP_BE(edx, ecx)) goto loc_0053C69D; /* jbe: below or equal (unsigned <=) */

loc_0053C69B: ;
    ecx = edx;

loc_0053C69D: ;
    if (CMP_BE(edx, eax)) goto loc_0053C6A3; /* jbe: below or equal (unsigned <=) */

loc_0053C6A1: ;
    eax = edx;

loc_0053C6A3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053C6A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C6B0
 * Original: 0x0053C6B0 - 0x0053C712 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C6B0(void)
{

loc_0053C6B0: ;
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x40) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C720
 * Original: 0x0053C720 - 0x0053C739 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C720: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    esi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053C72F: ;
    ecx = eax;
    if (TEST_NZ(ecx, ecx)) { sub_0053C739(); return; } /* jne: not equal / not zero */

loc_0053C735: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053C790
 * Original: 0x0053C790 - 0x0053C7ED (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C790: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_0053C7B8: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053C7C6: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0053C7E6; /* je: equal / zero */

loc_0053C7CC: ;
    PUSH32(esp, 0xB6800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053C7D7: ;
    if (TEST_NZ(eax, eax)) { sub_0053C7ED(); return; } /* jne: not equal / not zero */

loc_0053C7DB: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053C7E6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053C820
 * Original: 0x0053C820 - 0x0053C838 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C820(void)
{

loc_0053C820: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0053C832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053C840
 * Original: 0x0053C840 - 0x0053C860 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C840(void)
{

loc_0053C840: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053FF50(); /* call 0x0053FF50 */

loc_0053C85C: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053C860
 * Original: 0x0053C860 - 0x0053C897 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C860(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053C860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053C86D: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0053C891; /* je: equal / zero */

loc_0053C873: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xB2800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053C882: ;
    if (TEST_NZ(eax, eax)) { sub_0053C897(); return; } /* jne: not equal / not zero */

loc_0053C886: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053C891: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053C8B0
 * Original: 0x0053C8B0 - 0x0053C93D (141 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C8B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    ebp = 0; /* xor self */
    /* nop */

loc_0053C8C0: ;
    esi = MEM32(ebp + 0x546270);
    (void)0; /* cmp esi, 0x5C - flags set for next jcc */
    edi = MEM32(ebp + 0x546274);
    if (CMP_GE(esi, 0x5C)) goto loc_0053C8DD; /* jge: greater or equal (signed >=) */

loc_0053C8D1: ;
    ecx = MEM32(0x5499E8);
    if (TEST_NZ(MEM8(ecx + 8), 0x10)) goto loc_0053C8E6; /* jne: not equal / not zero */

loc_0053C8DD: ;
    if (CMP_EQ(edi, MEM32(esi * 4 + 0x5499F8))) goto loc_0053C92E; /* je: equal / zero */

loc_0053C8E6: ;
    if (CMP_GE(esi, 0x5C)) goto loc_0053C902; /* jge: greater or equal (signed >=) */

loc_0053C8EB: ;
    ecx = MEM32(esi * 4 + 0x5B1108);
    edx = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0053C8F9: ;
    MEM32(esi * 4 + 0x5499F8) = edi;
    goto loc_0053C92E;

loc_0053C902: ;
    if (CMP_GE(esi, 0x88)) goto loc_0053C926; /* jge: greater or equal (signed >=) */

loc_0053C90A: ;
    eax = MEM32(0x5499F0);
    edx = MEM32(esi * 4 + 0x5B0EE8);
    eax = eax | edx;
    MEM32(0x5499F0) = eax;
    MEM32(esi * 4 + 0x5499F8) = edi;
    goto loc_0053C92E;

loc_0053C926: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi * 4 + 0x545DC8), _icall_esp); /* indirect call */
    }

loc_0053C92E: ;
    ebp = ebp + 8;
    if (CMP_B(ebp, 0xA0)) goto loc_0053C8C0; /* jb: below (unsigned <) */

loc_0053C939: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0053C940(); return; /* tail jmp 0x0053C940 */

}

/**
 * sub_0053CA40
 * Original: 0x0053CA40 - 0x0053CA67 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CA40(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CA40: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x784);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x798);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x5473E0);
    MEM32(edx + 8) = ecx;
    ecx = edx + 0x14;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_0053CA70(); return; /* tail jmp 0x0053CA70 */

}

/**
 * sub_0053CB20
 * Original: 0x0053CB20 - 0x0053CC05 (229 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CB20: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0053CB3A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(0x5473E0);
    eax = eax & 0x10;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 8);
    if (CMP_EQ(eax, ecx)) goto loc_0053CB75; /* je: equal / zero */

loc_0053CB51: ;
    edx = MEM32(0x5499F0);
    (void)0; /* cmp eax, 0x19 - flags set for next jcc */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFFBFF1u;
    ecx = ecx + 0x480F;
    edx = edx | ecx;
    MEM32(0x5499F0) = edx;
    MEM32(0x5473E0) = eax;

loc_0053CB75: ;
    PUSH32(esp, ebx);
    esi = esi + 0x10;
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    /* nop */

loc_0053CB80: ;
    eax = MEM32(ebx + 0x546270);
    (void)0; /* cmp eax, 0x5C - flags set for next jcc */
    edi = MEM32(esi);
    if (CMP_GE(eax, 0x5C)) goto loc_0053CB99; /* jge: greater or equal (signed >=) */

loc_0053CB8D: ;
    edx = MEM32(0x5499E8);
    if (TEST_NZ(MEM8(edx + 8), 0x10)) goto loc_0053CBEC; /* jne: not equal / not zero */

loc_0053CB99: ;
    ecx = MEM32(eax * 4 + 0x5499F8);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    ebp = eax * 4 + 0x5499F8;
    if (CMP_EQ(edi, ecx)) goto loc_0053CBEC; /* je: equal / zero */

loc_0053CBAB: ;
    if (CMP_GE(eax, 0x5C)) goto loc_0053CBC3; /* jge: greater or equal (signed >=) */

loc_0053CBB0: ;
    ecx = MEM32(eax * 4 + 0x5B1108);
    edx = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0053CBBE: ;
    MEM32(ebp) = edi;
    goto loc_0053CBEC;

loc_0053CBC3: ;
    if (CMP_GE(eax, 0x88)) goto loc_0053CBE4; /* jge: greater or equal (signed >=) */

loc_0053CBCA: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(eax * 4 + 0x5B0EE8);
    ecx = ecx | eax;
    MEM32(0x5499F0) = ecx;
    MEM32(ebp) = edi;
    goto loc_0053CBEC;

loc_0053CBE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x545DC8), _icall_esp); /* indirect call */
    }

loc_0053CBEC: ;
    ebx = ebx + 8;
    esi = esi + 4;
    if (CMP_B(ebx, 0xA0)) goto loc_0053CB80; /* jb: below (unsigned <) */

loc_0053CBFA: ;
    ebp = MEM32(esp + 0x1C);
    ebx = ebp + 0x60;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0053CC10(); return; /* tail jmp 0x0053CC10 */

}

/**
 * sub_0053CDA0
 * Original: 0x0053CDA0 - 0x0053CDE1 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CDA0(void)
{

loc_0053CDA0: ;
    conker_trace_point(0x53D7B101);
    eax = MEM32(esi + 0x1A18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */
    conker_trace_point(0x53D7B102);

loc_0053CDAE: ;
    ecx = MEM32(esi + 0x1A14);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */
    conker_trace_point(0x53D7B103);

loc_0053CDBC: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */
    conker_trace_point(0x53D7B104);

loc_0053CDC8: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */
    conker_trace_point(0x53D7B105);

loc_0053CDD4: ;
    PUSH32(esp, 0);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */
    conker_trace_point(0x53D7B106);

loc_0053CDE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053CDF0
 * Original: 0x0053CDF0 - 0x0053CECC (220 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CDF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053CDF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0x1A04);
    MEM32(edi + 0x1A90) = ecx;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0053CE23; /* jne: not equal / not zero */

loc_0053CE0A: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053CE23; /* jne: not equal / not zero */

loc_0053CE16: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053CE23; /* je: equal / zero */

loc_0053CE1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0053CE23: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    ecx = MEM32(edi + 0x1A08);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi + 0x1A94) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0053CE59; /* je: equal / zero */

loc_0053CE35: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0053CE57; /* jne: not equal / not zero */

loc_0053CE3E: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053CE57; /* jne: not equal / not zero */

loc_0053CE4A: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053CE57; /* je: equal / zero */

loc_0053CE51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0053CE57: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0053CE59: ;
    esi = edi + 0x1A98;
    ebx = 4;

loc_0053CE64: ;
    ecx = MEM32(esi + -2832);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0053CE94; /* je: equal / zero */

loc_0053CE70: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0053CE92; /* jne: not equal / not zero */

loc_0053CE79: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053CE92; /* jne: not equal / not zero */

loc_0053CE85: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053CE92; /* je: equal / zero */

loc_0053CE8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0053CE92: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0053CE94: ;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_0053CE64; /* jne: not equal / not zero */

loc_0053CE9A: ;
    eax = edi + 0xEE0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    edi = edi + 0x1AA8;
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053CED0
 * Original: 0x0053CED0 - 0x0053CF70 (160 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053CED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1A94);
    ecx = MEM32(esi + 0x1A90);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0053CEE8: ;
    edx = esi + 0x1AA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_0053CEF4: ;
    eax = MEM32(esi + 0x1A90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0053CF00: ;
    eax = MEM32(esi + 0x1A94);
    if (TEST_Z(eax, eax)) goto loc_0053CF10; /* je: equal / zero */

loc_0053CF0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0053CF10: ;
    ebx = 0; /* xor self */
    esi = esi + 0x1A98;

loc_0053CF18: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0053CF22: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0053CF63; /* je: equal / zero */

loc_0053CF28: ;
    eax = MEM32(edi);
    edx = eax;
    edx = edx & 0xFFFF;
    if (CMP_NE(edx, 1)) goto loc_0053CF60; /* jne: not equal / not zero */

loc_0053CF37: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053CF50; /* jne: not equal / not zero */

loc_0053CF43: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0053CF50; /* je: equal / zero */

loc_0053CF4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0053CF50: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_0053CF60; /* jne: not equal / not zero */

loc_0053CF59: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053CF5E: ;
    goto loc_0053CF63;

loc_0053CF60: ;
    eax--;
    MEM32(edi) = eax;

loc_0053CF63: ;
    ebx++;
    esi = esi + 4;
    if (CMP_B(ebx, 4)) goto loc_0053CF18; /* jb: below (unsigned <) */

loc_0053CF6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053CF70
 * Original: 0x0053CF70 - 0x0053CFAB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CF70: ;
    esp = esp - 0x14;
    edx = MEM32(eax + 0x970);
    ecx = MEM32(eax + 0x96C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x1A04);
    eax = MEM32(edx + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(eax, ebp)) {
        g_seh_ebp = ebp;
        sub_0053CFAB();
        return;
    } /* jne: not equal / not zero */

loc_0053CF99: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edi = 1;
    edi = edi << LO8(ecx);
    g_seh_ebp = ebp; sub_0053CFB3(); return; /* tail jmp 0x0053CFB3 */

}

/**
 * sub_0053D200
 * Original: 0x0053D200 - 0x0053D235 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D200(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053D200: ;
    ecx = MEM32(0x549BF4);
    if (TEST_NZ(ecx, ecx)) goto loc_0053D20F; /* jne: not equal / not zero */

loc_0053D20A: ;
    ecx = 1;

loc_0053D20F: ;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0053D217; /* je: equal / zero */

loc_0053D214: ;
    eax = eax | 1;

loc_0053D217: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0053D21F; /* je: equal / zero */

loc_0053D21C: ;
    eax = eax | 2;

loc_0053D21F: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_0053D227; /* je: equal / zero */

loc_0053D224: ;
    eax = eax | 3;

loc_0053D227: ;
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_0053D22E; /* jns: not sign (positive) */

loc_0053D22B: ;
    eax = eax | 8;

loc_0053D22E: ;
    eax = eax << 5;
    eax = eax | 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0053D240
 * Original: 0x0053D240 - 0x0053D3B6 (374 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D240: ;
    esp = esp - 0x170;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x178));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(ebx), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    esi = eax;
    edi = 0x40100;
    if (TEST_Z(LO8(ebx), 3)) goto loc_0053D344; /* je: equal / zero */

loc_0053D263: ;
    if (CMP_NE(MEM32(esi + 0x1A10), 3)) goto loc_0053D29C; /* jne: not equal / not zero */

loc_0053D26C: ;
    eax = MEM32(esi + 0x1A18);
    ecx = MEM32(esi + 0x1A1C);
    ebx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    edi = MEM32(ecx + 8);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x184));
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edx;
    edi = 0x40100;

loc_0053D29C: ;
    conker_trace_point(0x53D7A101);
    eax = esi;
    PUSH32(esp, 0); sub_0053CDF0(); /* call 0x0053CDF0 */
    conker_trace_point(0x53D7A102);

loc_0053D2A3: ;
    PUSH32(esp, 0); sub_0053CDA0(); /* call 0x0053CDA0 */
    conker_trace_point(0x53D7A103);

loc_0053D2A8: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0053D2BB; /* je: equal / zero */

loc_0053D2AD: ;
    conker_trace_point(0x53D7A104);
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0053CA40(); /* call 0x0053CA40 */
    conker_trace_point(0x53D7A105);

loc_0053D2B6: ;
    PUSH32(esp, 0); sub_0053C8B0(); /* call 0x0053C8B0 */
    conker_trace_point(0x53D7A106);

loc_0053D2BB: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D2D1; /* jb: below (unsigned <) */

loc_0053D2C2: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D2D1: ;
    (void)0; /* cmp MEM32(esi + 0x1A10), 3 - flags set for next jcc */
    edx = eax;
    if (CMP_AE(MEM32(esi + 0x1A10), 3)) goto loc_0053D326; /* jae: above or equal (unsigned >=) */

loc_0053D2DC: ;
    if (CMP_EQ(MEM32(0x549BF4), 0x80000000u)) goto loc_0053D2F4; /* je: equal / zero */

loc_0053D2E8: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = eax + 8;

loc_0053D2F4: ;
    eax = MEM32(esi + 0x1A18);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0053D200(); /* call 0x0053D200 */

loc_0053D302: ;
    MEM32(edx) = edi;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = 0x4012C;
    MEM32(edx + 0xC) = ebp;
    MEM32(edx + 0x10) = edi;
    MEM32(edx + 0x14) = ebp;
    MEM32(edx + 0x18) = 0x40130;
    MEM32(edx + 0x1C) = ebp;
    edx = edx + 0x20;
    goto loc_0053D342;

loc_0053D326: ;
    MEM32(eax) = 0x4012C;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = 0x40130;
    MEM32(eax + 0x14) = ebp;
    edx = eax + 0x18;

loc_0053D342: ;
    MEM32(esi) = edx;

loc_0053D344: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0053D35A; /* je: equal / zero */

loc_0053D349: ;
    conker_trace_point(0x53D7A107);
    eax = esi;
    PUSH32(esp, 0); sub_0053CF70(); /* call 0x0053CF70 */
    conker_trace_point(0x53D7A108);

loc_0053D350: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053CB20(); /* call 0x0053CB20 */
    conker_trace_point(0x53D7A109);

loc_0053D35A: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_0053D3A9; /* je: equal / zero */

loc_0053D35F: ;
    conker_trace_point(0x53D7A10A);
    eax = esi;
    PUSH32(esp, 0); sub_0053CED0(); /* call 0x0053CED0 */
    conker_trace_point(0x53D7A10B);

loc_0053D366: ;
    if (CMP_NE(MEM32(esi + 0x1A10), 3)) goto loc_0053D3A9; /* jne: not equal / not zero */

loc_0053D36F: ;
    edx = MEM32(esi);
    if (CMP_B(edx, MEM32(esi + 4))) goto loc_0053D387; /* jb: below (unsigned <) */

loc_0053D376: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D385: ;
    edx = eax;

loc_0053D387: ;
    MEM32(edx) = 0x40110;
    MEM32(edx + 4) = ebp;
    eax = MEM32(esi + 0x1A18);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0053D200(); /* call 0x0053D200 */

loc_0053D39E: ;
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = eax;
    edx = edx + 0x10;
    MEM32(esi) = edx;

loc_0053D3A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x170;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053D3C0
 * Original: 0x0053D3C0 - 0x0053D4A6 (230 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D3C0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x1A10);
    ecx = MEM32(esi + edx * 4 + 0x1A10);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edx--;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    edi = esi + edx * 4 + 0x1A10;

loc_0053D3E3: ;
    eax = MEM32(edi);
    /* D3D stores push-buffer pointers in the Xbox physical/cached alias. */
    if (eax >= 0x80000000u && eax < 0xC0000000u) {
        eax &= 0x03FFFFFFu;
    }
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    edx--;
    ebp = 0; /* xor self */
    edi = edi - 4;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    ecx = eax;
    if (CMP_NE(edx, ebp)) goto loc_0053D3E3; /* jne: not equal / not zero */

loc_0053D3FD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D41D; /* jb: below (unsigned <) */

loc_0053D40E: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D41D: ;
    ecx = MEM32(esi + 0x1A18);
    ecx = MEM32(ecx + 4);
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x549BF4);
    if (CMP_NE(edx, ebp)) goto loc_0053D43E; /* jne: not equal / not zero */

loc_0053D439: ;
    edx = 1;

loc_0053D43E: ;
    if (TEST_Z(LO8(edx), 1)) goto loc_0053D446; /* je: equal / zero */

loc_0053D443: ;
    ecx = ecx | 1;

loc_0053D446: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_0053D44E; /* je: equal / zero */

loc_0053D44B: ;
    ecx = ecx | 2;

loc_0053D44E: ;
    if (TEST_Z(LO8(edx), 4)) goto loc_0053D456; /* je: equal / zero */

loc_0053D453: ;
    ecx = ecx | 3;

loc_0053D456: ;
    if (((int32_t)(edx & edx) >= 0)) goto loc_0053D45D; /* jns: not sign (positive) */

loc_0053D45A: ;
    ecx = ecx | 8;

loc_0053D45D: ;
    ecx = ecx << 5;
    edx = 0x40100;
    MEM32(eax + 8) = edx;
    ecx = ecx | 1;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x4012C;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    edx = MEM32(esi + 0x1A04);
    ecx = MEM32(esi + 0x1A14);
    eax = eax + 0x20;
    if (CMP_EQ(edx, ecx)) { sub_0053D4A6(); return; } /* je: equal / zero */

loc_0053D491: ;
    if (CMP_EQ(MEM32(0x549BF4), 0x80000000u)) { sub_0053D4A6(); return; } /* je: equal / zero */

loc_0053D49D: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x100;
    g_seh_ebp = ebp; sub_0053D4B2(); return; /* tail jmp 0x0053D4B2 */

}

/**
 * sub_0053D4D0
 * Original: 0x0053D4D0 - 0x0053D540 (112 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D4D0: ;
    esp = esp - 0x18;
    edx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x1C2C);
    ecx = MEM32(esi + 0x1C28);
    ebp = MEM32(esi + 0x1C30);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C34);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053D510: ;
    if (TEST_Z(MEM32(esi + 0x1DDC), 0x1000000)) goto loc_0053D520; /* je: equal / zero */

loc_0053D51C: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) >> 1;

loc_0053D520: ;
    (void)0; /* cmp edi, 0x11 - flags set for next jcc */
    ecx = MEM32(esi + 0x1A18);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(edi, 0x11)) { sub_0053D540(); return; } /* je: equal / zero */

loc_0053D532: ;
    if (CMP_EQ(edi, 0x10)) { sub_0053D540(); return; } /* je: equal / zero */

loc_0053D537: ;
    if (CMP_EQ(edi, 0x1C)) { sub_0053D540(); return; } /* je: equal / zero */

loc_0053D53C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0053D545(); return; /* tail jmp 0x0053D545 */

}

/**
 * sub_0053D6C0
 * Original: 0x0053D6C0 - 0x0053D6FD (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053D6C0: ;
    eax = MEM32(esi + 0x1A18);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0053D6CF; /* je: equal / zero */

loc_0053D6CD: ;
    eax = ecx;

loc_0053D6CF: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053D6DC: ;
    edx = MEM32(esi + 0x2478);
    edx = edx & 1;
    MEM32(esi + edx * 4 + 0x1974) = eax;
    eax = MEM32(esi + 0x1DE0);
    if (TEST_Z(eax, eax)) goto loc_0053D6FC; /* je: equal / zero */

loc_0053D6F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053D4D0(); /* call 0x0053D4D0 */

loc_0053D6FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053D700
 * Original: 0x0053D700 - 0x0053D7E9 (233 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D700(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053D700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    conker_trace_point(0x53D70001);
    ebx = eax;
    eax = MEM32(esi + 0x8D4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0053D71F; /* jne: not equal / not zero */

loc_0053D715: ;
    eax = MEM32(esi + 0x8D8);
    if (TEST_Z(eax, eax)) goto loc_0053D724; /* je: equal / zero */

loc_0053D71F: ;
    conker_trace_point(0x53D71F01);
    PUSH32(esp, 0); sub_00543900(); /* call 0x00543900 */
    conker_trace_point(0x53D71F02);

loc_0053D724: ;
    conker_trace_point(0x53D72401);
    if (TEST_NZ(ebx, ebx)) goto loc_0053D72D; /* jne: not equal / not zero */

loc_0053D728: ;
    ebx = 5;

loc_0053D72D: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(HI8(eax), 0x40)) goto loc_0053D775; /* je: equal / zero */

loc_0053D735: ;
    conker_trace_point(0x53D73501);
    if (TEST_Z(LO8(ebx), 3)) goto loc_0053D764; /* je: equal / zero */

loc_0053D73A: ;
    conker_trace_point(0x53D73A01);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */
    conker_trace_point(0x53D73A02);

loc_0053D741: ;
    conker_trace_point(0x53D74101);
    eax = MEM32(esi + 0x2478);
    eax--;
    eax = eax & 1;
    eax = MEM32(esi + eax * 4 + 0x1974);
    if (TEST_Z(eax, eax)) goto loc_0053D75E; /* je: equal / zero */

loc_0053D756: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053D75E: ;
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;

loc_0053D764: ;
    conker_trace_point(0x53D76401);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0053D240(); /* call 0x0053D240 */
    conker_trace_point(0x53D76402);

loc_0053D76C: ;
    edi = ebx;
    edi = edi & 4;
    if ((edi == 0)) goto loc_0053D7B0; /* je: equal / zero */

loc_0053D773: ;
    goto loc_0053D7AB;

loc_0053D775: ;
    conker_trace_point(0x53D77501);
    edi = ebx;
    edi = edi & 4;
    if ((edi == 0)) goto loc_0053D7B0; /* je: equal / zero */

loc_0053D77C: ;
    conker_trace_point(0x53D77C01);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053D783: ;
    conker_trace_point(0x53D78301);
    ecx = MEM32(esi + 0x2478);
    ecx--;
    ecx = ecx & 1;
    eax = MEM32(esi + ecx * 4 + 0x1974);
    if (TEST_Z(eax, eax)) goto loc_0053D7A0; /* je: equal / zero */

loc_0053D798: ;
    conker_trace_point(0x53D79801);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */
    conker_trace_point(0x53D79802);

loc_0053D7A0: ;
    conker_trace_point(0x53D7A001);
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;
    PUSH32(esp, 0); sub_0053D3C0(); /* call 0x0053D3C0 */

loc_0053D7AB: ;
    PUSH32(esp, 0); sub_0053D6C0(); /* call 0x0053D6C0 */

loc_0053D7B0: ;
    if (TEST_Z(edi, edi)) goto loc_0053D7DF; /* je: equal / zero */

loc_0053D7B4: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(esi + 0x8D4);
    ecx = ecx | 0xFF1000;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0053D7DA; /* jne: not equal / not zero */

loc_0053D7D0: ;
    eax = MEM32(esi + 0x8D8);
    if (TEST_Z(eax, eax)) goto loc_0053D7DF; /* je: equal / zero */

loc_0053D7DA: ;
    PUSH32(esp, 0); sub_005439B0(); /* call 0x005439B0 */

loc_0053D7DF: ;
    eax = MEM32(esi + 0x2478);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D7F0
 * Original: 0x0053D7F0 - 0x0053D8A7 (183 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D7F0(void)
{

loc_0053D7F0: ;
    esp = esp - 0x178;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0053CDF0(); /* call 0x0053CDF0 */

loc_0053D805: ;
    eax = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0053D814: ;
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0053D823: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0053CA40(); /* call 0x0053CA40 */

loc_0053D82C: ;
    PUSH32(esp, 0); sub_0053C8B0(); /* call 0x0053C8B0 */

loc_0053D831: ;
    edx = MEM32(esi + 0x96C);
    eax = MEM32(esi + 0x970);
    ecx = MEM32(esp + 0x18C);
    edi = MEM32(0x547340);
    MEM32(esp + 0xC) = edx;
    edx = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esi + 0x96C) = ecx;
    MEM32(esi + 0x970) = edx;
    eax = esi;
    MEM32(0x547340) = 5;
    PUSH32(esp, 0); sub_0053CF70(); /* call 0x0053CF70 */

loc_0053D871: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = esp + 0x10;
    MEM32(esi + 0x96C) = eax;
    MEM32(esi + 0x970) = ecx;
    PUSH32(esp, edx);
    MEM32(0x547340) = edi;
    PUSH32(esp, 0); sub_0053CB20(); /* call 0x0053CB20 */

loc_0053D895: ;
    eax = esi;
    PUSH32(esp, 0); sub_0053CED0(); /* call 0x0053CED0 */

loc_0053D89C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x178;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053D8B0
 * Original: 0x0053D8B0 - 0x0053D949 (153 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D8B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053D8B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x54A8BC);
    if (TEST_NZ(ecx, ecx)) goto loc_0053D8C8; /* jne: not equal / not zero */

loc_0053D8BE: ;
    MEM32(0x54A8BC) = 0x80000;

loc_0053D8C8: ;
    ecx = MEM32(0x54A8B8);
    if (TEST_NZ(ecx, ecx)) goto loc_0053D8DC; /* jne: not equal / not zero */

loc_0053D8D2: ;
    MEM32(0x54A8B8) = 0x8000;

loc_0053D8DC: ;
    esi = MEM32(0x547548);
    eax = eax & 0x10;
    esi = esi | eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x547540);
    MEM32(0x5499E8) = 0x547540;
    MEM32(0x547E78) = 1;
    MEM32(0x547548) = esi;
    PUSH32(esp, 0); sub_0053E5D0(); /* call 0x0053E5D0 */

loc_0053D910: ;
    esi = eax;
    if (CMP_GE(esi & esi, 0)) { sub_0053D949(); return; } /* jge: greater or equal (signed >=) */

loc_0053D916: ;
    eax = 0x547540;
    PUSH32(esp, 0); sub_0053EEF0(); /* call 0x0053EEF0 */

loc_0053D920: ;
    if (TEST_Z(edi, edi)) goto loc_0053D92A; /* je: equal / zero */

loc_0053D924: ;
    MEM32(edi) = 0;

loc_0053D92A: ;
    eax = 0; /* xor self */
    ecx = 0x928;
    edi = 0x547540;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    MEM32(0x5499E8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053D960
 * Original: 0x0053D960 - 0x0053D969 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D960(void)
{

loc_0053D960: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053D970
 * Original: 0x0053D970 - 0x0053D9C2 (82 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D970(void)
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

loc_0053D970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    fp_push(MEMF(ebp + 8)); /* fld float */
    SET_HI8(ecx, 0); /* xor self */
    /* FPU: fldl2e  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(0) */
    /* FPU: frndint  */
    /* FPU: ftst  */
    /* wait - FPU sync */
    /* fnstsw word ptr [ebp - 8] - store FPU status word */
    /* wait - FPU sync */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: ftst  */
    /* wait - FPU sync */
    /* fnstsw word ptr [ebp - 4] - store FPU status word */
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: f2xm1  */
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (TEST_Z(MEM16(ebp + -3), 1)) goto loc_0053D9A8; /* je: equal / zero */

loc_0053D9A4: ;
    fp_push(1.0); /* fld1 */
    /* FPU: fdivrp st(1) */

loc_0053D9A8: ;
    if (TEST_NZ(MEM16(ebp + -7), 0x40)) goto loc_0053D9B2; /* jne: not equal / not zero */

loc_0053D9B0: ;
    /* FPU: fscale  */

loc_0053D9B2: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_0053D9B8; /* je: equal / zero */

loc_0053D9B6: ;
    fp_top() = -fp_top(); /* fchs */

loc_0053D9B8: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* fstp st(0) */
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
 * sub_0053D9D0
 * Original: 0x0053D9D0 - 0x0053D9DB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D9D0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0053D9D0: ;
    /* FPU: fldln2  */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fyl2x  */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053D9E0
 * Original: 0x0053D9E0 - 0x0053DA39 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D9E0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0053D9E0: ;
    PUSH32(esp, ecx);
    eax = 0xBE800000u;
    eax = eax - MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(esp) = eax;
    fp_push(MEMF(0x74F4D0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x74F4D4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp);
    eax = eax & 0x7FFFFFFF;
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d20] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053DA40
 * Original: 0x0053DA40 - 0x0053DA7C (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DA40(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0053DA40: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_0053D9E0(); /* call 0x0053D9E0 */

loc_0053DA67: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053DA80
 * Original: 0x0053DA80 - 0x0053DAD7 (87 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DA80(void)
{
    float xmm1, xmm2;

loc_0053DA80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    xmm1 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* shufps xmm2, xmm2, 2 */
    MEMF(eax + 8) = xmm2; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053DAE0
 * Original: 0x0053DAE0 - 0x0053DBDA (250 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DAE0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0053DAE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm2 = MEMF(eax); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    xmm3 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm3, xmm3, 0 */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm3 += xmm0 (packed 4xfloat) */
    xmm4 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm4, xmm4, 0 */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    xmm5 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm5, xmm5, 0 */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    ecx = MEM32(esp + 4);
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    MEMF(ecx) = xmm2; /* movaps */
    MEMF(ecx + 0x10) = xmm3; /* movaps */
    MEMF(ecx + 0x20) = xmm4; /* movaps */
    MEMF(ecx + 0x30) = xmm5; /* movaps */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053DBE0
 * Original: 0x0053DBE0 - 0x0053DF4E (878 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DBE0(void)
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

loc_0053DBE0: ;
    esp = esp - 0x58;
    ecx = MEM32(eax + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 8) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(eax + 0x20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = MEM32(eax + 0x24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(esp) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    ecx = MEM32(eax + 0x34);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(eax + 0xC);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x1C) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(eax + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x1C);
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x14) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    ecx = MEM32(eax + 0x2C);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0x18) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    ecx = MEM32(eax + 0x3C);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 4) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(eax);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x20);
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(esp) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    eax = MEM32(eax + 0x34);
    /* fld st(4) */
    MEM32(esp + 4) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(6) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(6) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0053DF4E(); return; } /* jp: parity */

loc_0053DF43: ;
    eax = 0xFFFFFFFFu;
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053E110
 * Original: 0x0053E110 - 0x0053E170 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E110(void)
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

loc_0053E110: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d14] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0053E170(); return; } /* jp: parity */

loc_0053E122: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0053E13D; /* jp: parity */

loc_0053E135: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    goto loc_0053E150;

loc_0053E13D: ;
    fp_push(MEMF(0x649334)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D970(); /* call 0x0053D970 */

loc_0053E150: ;
    /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053E1D0
 * Original: 0x0053E1D0 - 0x0053E2C7 (247 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053E1EE; /* jb: below (unsigned <) */

loc_0053E1DF: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053E1EE: ;
    MEM32(eax) = 0xC0180;
    MEM32(eax + 4) = 2;
    ecx = 3;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x180190;
    MEM32(eax + 0x14) = 4;
    MEM32(eax + 0x18) = 9;
    MEM32(eax + 0x1C) = 0xA;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 8;
    MEM32(eax + 0x2C) = 0x401A8;
    MEM32(eax + 0x30) = 0xC;
    MEM32(eax + 0x34) = 0x41D6C;
    edi = 0; /* xor self */
    MEM32(eax + 0x38) = edi;
    ecx = MEM32(esi + 4);
    eax = eax + 0x3C;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_B(eax, ecx)) goto loc_0053E264; /* jb: below (unsigned <) */

loc_0053E255: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053E264: ;
    MEM32(eax) = 0x409FC;
    ecx = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 8) = 0x100A50;
    MEM32(eax + 0x18) = 0x3F800000;
    MEM32(eax + 0x1C) = 0x416BC;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0x41E78;
    MEM32(eax + 0x28) = 0x210000;
    MEM32(eax + 0x2C) = 0x41D80;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = 0x41E68;
    MEM32(eax + 0x38) = 0x7F800000;
    eax = eax + 0x3C;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005362D0(); return; /* tail jmp 0x005362D0 */

}

/**
 * sub_0053E2D0
 * Original: 0x0053E2D0 - 0x0053E3E2 (274 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E2D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053E2EF; /* jb: below (unsigned <) */

loc_0053E2E0: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053E2EF: ;
    MEM32(eax) = 0x40000;
    MEM32(eax + 4) = 0xD;
    MEM32(eax + 8) = 0x42000;
    MEM32(eax + 0xC) = 0xE;
    MEM32(eax + 0x10) = 0x44000;
    MEM32(eax + 0x14) = 0x10;
    MEM32(eax + 0x18) = 0x46000;
    MEM32(eax + 0x1C) = 0x11;
    MEM32(eax + 0x20) = 0x4A000;
    MEM32(eax + 0x24) = 0x12;
    MEM32(eax + 0x28) = 0x42180;
    MEM32(eax + 0x2C) = 7;
    MEM32(eax + 0x30) = 0x442FC;
    eax = eax + 0x28;
    ecx = 0; /* xor self */
    edx = 3;
    MEM32(eax + 0xC) = edx;
    ebx = esi + 0x194C;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x14) = ecx;
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = ecx;
    ebx = 0; /* xor self */
    ecx = esi + 0x192C;
    ebp = ecx;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x1930) = edx;
    MEM32(eax + 0x10) = 0x86184;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = 0xB;
    eax = eax + 0x1C;
    ecx = 0x19;
    MEM32(eax) = 0x1C4184;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x11;
    eax = eax + 0x20;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0053E1D0(); return; /* tail jmp 0x0053E1D0 */

}

/**
 * sub_0053E3F0
 * Original: 0x0053E3F0 - 0x0053E5CC (476 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E3F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5499E8);
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    esi = 0; /* xor self */
    /* nop */

loc_0053E400: ;
    edx = 0x545D18;
    eax = esi;
    PUSH32(esp, 0); sub_00539600(); /* call 0x00539600 */

loc_0053E40C: ;
    esi++;
    if (CMP_B(esi, 0xA)) goto loc_0053E400; /* jb: below (unsigned <) */

loc_0053E412: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0x545FE8;
    PUSH32(esp, edi);
    esi = 0xFFFFFF74u;
    ebp = ebp - 0xB0;
    ebx = 0xE4;
    /* nop */

loc_0053E430: ;
    if (CMP_EQ(ebx, 0x268)) goto loc_0053E48D; /* je: equal / zero */

loc_0053E438: ;
    if (CMP_EQ(ebx, 0x1F8)) goto loc_0053E48D; /* je: equal / zero */

loc_0053E440: ;
    if (CMP_EQ(ebx, 0x1FC)) goto loc_0053E48D; /* je: equal / zero */

loc_0053E448: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(esi + 0x5464DC);
    if (CMP_GE(esi & esi, 0)) goto loc_0053E467; /* jge: greater or equal (signed >=) */

loc_0053E452: ;
    ecx = MEM32(esi + 0x5B1278);
    edx = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0053E45F: ;
    MEM32(esi + 0x549B68) = edi;
    goto loc_0053E48D;

loc_0053E467: ;
    if (CMP_GE(esi, 0xB0)) goto loc_0053E489; /* jge: greater or equal (signed >=) */

loc_0053E46F: ;
    eax = MEM32(0x5499F0);
    ecx = MEM32(esi + 0x5B1058);
    eax = eax | ecx;
    MEM32(0x5499F0) = eax;
    MEM32(esi + 0x549B68) = edi;
    goto loc_0053E48D;

loc_0053E489: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + ebp), _icall_esp); /* indirect call */
    }

loc_0053E48D: ;
    ebx = ebx + 4;
    esi = esi + 4;
    if (CMP_B(ebx, 0x298)) goto loc_0053E430; /* jb: below (unsigned <) */

loc_0053E49B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1A20);
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x546004), _icall_esp); /* indirect call */
    }

loc_0053E4B3: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = 0x41B0C;
    ebp = 0xF88;

loc_0053E4C2: ;
    edi = 0; /* xor self */

loc_0053E4C4: ;
    ecx = ZX8(MEM8(edi + 0x546430));
    edx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_00537BD0(); /* call 0x00537BD0 */

loc_0053E4D4: ;
    edi++;
    if (CMP_B(edi, 0x20)) goto loc_0053E4C4; /* jb: below (unsigned <) */

loc_0053E4DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0053E4E0: ;
    ebx = MEM32(0x5499E8);
    edi = MEM32(ebx + ebp);
    if (TEST_Z(edi, edi)) goto loc_0053E50B; /* je: equal / zero */

loc_0053E4ED: ;
    ecx = MEM32(ebx + 0x2C);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0053E50B; /* jne: not equal / not zero */

loc_0053E506: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053E50B: ;
    MEM32(ebx + ebp) = 0;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0053E528; /* jb: below (unsigned <) */

loc_0053E519: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053E528: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(ebx) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0x4800;
    MEM32(ebx + ebp + -3964) = 0x80000000u;
    ebp = ebp + 4;
    ecx = ecx + 0x40;
    esi++;
    (void)0; /* cmp ebp, 0xF98 - flags set for next jcc */
    MEM32(0x5499F0) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(ebp, 0xF98)) goto loc_0053E4C2; /* jb: below (unsigned <) */

loc_0053E56B: ;
    esi = MEM32(0x5499E8);
    edx = eax;
    eax = 0x3F080000;
    MEM32(0x547360) = 4;
    edx = edx | 0x800;
    MEM32(0x547370) = 2;
    MEM32(0x5499F0) = edx;
    MEM32(esi + 0xEF8) = eax;
    MEM32(esi + 0xEFC) = eax;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0053E5A9: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053E5C2; /* jb: below (unsigned <) */

loc_0053E5B3: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053E5C2: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0053E5C7: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053E5D0
 * Original: 0x0053E5D0 - 0x0053E603 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E5D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E5D0: ;
    esp = esp - 0xB4;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xBC);
    PUSH32(esp, 0xAC800000u);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0053E5EA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x2488) = eax;
    if (TEST_NZ(eax, eax)) {
        /* 0x0053E603 is a tail continuation and expects this frame's EBP. */
        g_seh_ebp = ebp;
        sub_0053E603();
        return;
    } /* jne: not equal / not zero */

loc_0053E5F4: ;
    eax = 0x8007000Eu;
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053EEF0
 * Original: 0x0053EEF0 - 0x0053F02A (314 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053EEF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0053EF6B; /* je: equal / zero */

loc_0053EEFB: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0053EF0B: ;
    edx = MEM32(ebx + 0x24);
    eax = MEM32(ebx);
    edx = edx & 0xFFFFFFF;
    edx++;
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 0x24);
    edx = ebx;
    MEM32(ebx) = ecx;
    PUSH32(esp, 0); sub_0053C450(); /* call 0x0053C450 */

loc_0053EF25: ;
    edx = MEM32(ebx + 0x1C20);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(ebx + 0x24);
    ecx = ecx ^ eax;
    if (TEST_Z(ecx, 0xFFFFFFF)) goto loc_0053EF6B; /* je: equal / zero */

loc_0053EF3B: ;
    ecx = MEM32(ebx + 0x24);
    ecx = ecx & 0xFFFFFFF;
    esi = 0x190;
    /* nop */

loc_0053EF50: ;
    MEM32(esp + 0xC) = esi;

loc_0053EF54: ;
    eax = MEM32(esp + 0xC);
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_0053EF54; /* jne: not equal / not zero */

loc_0053EF5F: ;
    eax = MEM32(edx + 0x44);
    eax = eax & 0xFFFFFFF;
    if (CMP_NE(eax, ecx)) goto loc_0053EF50; /* jne: not equal / not zero */

loc_0053EF6B: ;
    eax = MEM32(ebx + 0x1DE4);
    ecx = ebx + 0x1C28;
    eax = eax & 1;
    edx = eax + eax * 2 + 0x5D;
    MEM32(esp + 0xC) = ecx;
    eax = ecx + edx * 4;

loc_0053EF85: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0053EF85; /* jne: not equal / not zero */

loc_0053EF8A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053F0E0(); /* call 0x0053F0E0 */

loc_0053EF90: ;
    eax = MEM32(ebx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0053EFA2; /* je: equal / zero */

loc_0053EF97: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053EFA2: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0053EFB4; /* je: equal / zero */

loc_0053EFA9: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053EFB4: ;
    edi = MEM32(ebx + 0x7A0);
    if (TEST_Z(edi, edi)) goto loc_0053EFD6; /* je: equal / zero */

loc_0053EFBE: ;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0053EFD6; /* jne: not equal / not zero */

loc_0053EFD1: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053EFD6: ;
    PUSH32(esp, ebp);
    esi = ebx + 0xF98;
    ebp = 4;

loc_0053EFE2: ;
    edi = MEM32(esi + -16);
    if (TEST_Z(edi, edi)) goto loc_0053F001; /* je: equal / zero */

loc_0053EFE9: ;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0053F001; /* jne: not equal / not zero */

loc_0053EFFC: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053F001: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0053F01F; /* je: equal / zero */

loc_0053F007: ;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0053F01F; /* jne: not equal / not zero */

loc_0053F01A: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053F01F: ;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_0053EFE2; /* jne: not equal / not zero */

loc_0053F025: ;
    esi = 0; /* xor self */
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0053F030(); return; /* tail jmp 0x0053F030 */

}

/**
 * sub_0053F0E0
 * Original: 0x0053F0E0 - 0x0053F2E5 (517 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F0E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561154), _icall_esp); /* indirect call */
    }

loc_0053F0EC: ;
    edi = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_0053F104; /* jne: not equal / not zero */

loc_0053F0F2: ;
    eax = MEM32(ebp + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561158), _icall_esp); /* indirect call */
    }

loc_0053F104: ;
    eax = MEM32(ebp + 0x1A04);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, edi)) goto loc_0053F130; /* je: equal / zero */

loc_0053F110: ;
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(ecx, edi)) goto loc_0053F119; /* je: equal / zero */

loc_0053F117: ;
    eax = ecx;

loc_0053F119: ;
    ecx = MEM32(ebp + 0x2C);
    MEM32(eax + 8) = ecx;
    esi = MEM32(ebp + 0x1A04);
    PUSH32(esp, 0); sub_0053B7D0(); /* call 0x0053B7D0 */

loc_0053F12A: ;
    MEM32(ebp + 0x1A04) = edi;

loc_0053F130: ;
    eax = MEM32(ebp + 0x1A08);
    if (CMP_EQ(eax, edi)) goto loc_0053F15A; /* je: equal / zero */

loc_0053F13A: ;
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(ecx, edi)) goto loc_0053F143; /* je: equal / zero */

loc_0053F141: ;
    eax = ecx;

loc_0053F143: ;
    edx = MEM32(ebp + 0x2C);
    MEM32(eax + 8) = edx;
    esi = MEM32(ebp + 0x1A08);
    PUSH32(esp, 0); sub_0053B7D0(); /* call 0x0053B7D0 */

loc_0053F154: ;
    MEM32(ebp + 0x1A08) = edi;

loc_0053F15A: ;
    (void)0; /* cmp MEM32(ebp + 0x1A10), edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(MEM32(ebp + 0x1A10), edi)) goto loc_0053F1CD; /* jbe: below or equal (unsigned <=) */

loc_0053F166: ;
    ebx = ebp + 0x1A14;
    /* nop */

loc_0053F170: ;
    esi = MEM32(ebx);
    if (CMP_EQ(esi, edi)) goto loc_0053F1B7; /* je: equal / zero */

loc_0053F176: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 1)) goto loc_0053F1B2; /* jne: not equal / not zero */

loc_0053F185: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053F19E; /* jne: not equal / not zero */

loc_0053F191: ;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0053F19E; /* je: equal / zero */

loc_0053F198: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0053F19E: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0x780000)) goto loc_0053F1B2; /* jne: not equal / not zero */

loc_0053F1A7: ;
    edi = esi;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053F1AE: ;
    edi = 0; /* xor self */
    goto loc_0053F1B5;

loc_0053F1B2: ;
    eax--;
    MEM32(esi) = eax;

loc_0053F1B5: ;
    MEM32(ebx) = edi;

loc_0053F1B7: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x1A10);
    eax++;
    ebx = ebx + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(eax, ecx)) goto loc_0053F170; /* jb: below (unsigned <) */

loc_0053F1CD: ;
    esi = MEM32(ebp + 0x1A20);
    if (CMP_EQ(esi, edi)) goto loc_0053F21C; /* je: equal / zero */

loc_0053F1D7: ;
    eax = MEM32(esi);
    edx = eax;
    edx = edx & 0xFFFF;
    if (CMP_NE(edx, 1)) goto loc_0053F213; /* jne: not equal / not zero */

loc_0053F1E6: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0053F1FF; /* jne: not equal / not zero */

loc_0053F1F2: ;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0053F1FF; /* je: equal / zero */

loc_0053F1F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0053F1FF: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0x780000)) goto loc_0053F213; /* jne: not equal / not zero */

loc_0053F208: ;
    edi = esi;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0053F20F: ;
    edi = 0; /* xor self */
    goto loc_0053F216;

loc_0053F213: ;
    eax--;
    MEM32(esi) = eax;

loc_0053F216: ;
    MEM32(ebp + 0x1A20) = edi;

loc_0053F21C: ;
    if (CMP_EQ(MEM32(ebp + 0x1A8C), edi)) goto loc_0053F271; /* je: equal / zero */

loc_0053F224: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi + 0x1AEC);
    PUSH32(esp, eax);
    eax = esi + 0x1C28;
    ebx = 1;
    PUSH32(esp, 0); sub_00540A4C(); /* call 0x00540A4C */

loc_0053F241: ;
    ecx = 0; /* xor self */
    esi = esi + 0x1AD8;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(ebp + 0x1A8C);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053F26B: ;
    MEM32(ebp + 0x1A8C) = edi;

loc_0053F271: ;
    if (CMP_EQ(MEM32(ebp + 0x1A84), edi)) goto loc_0053F2C3; /* je: equal / zero */

loc_0053F279: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi + 0x1AD4);
    PUSH32(esp, eax);
    eax = esi + 0x1C28;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00540A4C(); /* call 0x00540A4C */

loc_0053F293: ;
    ecx = 0; /* xor self */
    esi = esi + 0x1AC0;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(ebp + 0x1A84);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053F2BD: ;
    MEM32(ebp + 0x1A84) = edi;

loc_0053F2C3: ;
    eax = MEM32(ebp + 0x1A88);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(eax, edi)) goto loc_0053F2E0; /* je: equal / zero */

loc_0053F2CF: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0053F2DA: ;
    MEM32(ebp + 0x1A88) = edi;

loc_0053F2E0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053F2F0
 * Original: 0x0053F2F0 - 0x0053F3F4 (260 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F2F0(void)
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

loc_0053F2F0: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = 1;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_B(eax, esi)) goto loc_0053F30E; /* jb: below (unsigned <) */

loc_0053F30A: ;
    MEM32(esp + 0x14) = eax;

loc_0053F30E: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0053F8D0(); /* call 0x0053F8D0 */

loc_0053F316: ;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, 0); sub_0053F8D0(); /* call 0x0053F8D0 */

loc_0053F322: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp + 0x30);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp);
    MEM32(0x549BF4) = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x1970) = eax;
    eax = MEM32(esp + 0x14);
    eax++;
    edx = edx & 0xFFFFBFFFu;
    MEM32(edi + 0x1A10) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(edi + 8) = edx;
    ecx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* test HI8(ecx), 0x30 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    eax = edx;
    MEM32(esp + 0x1C) = ebx;
    if (TEST_NZ(HI8(ecx), 0x30)) goto loc_0053F377; /* jne: not equal / not zero */

loc_0053F371: ;
    if (CMP_NE(MEM32(ebp + 0x14), 3)) goto loc_0053F383; /* jne: not equal / not zero */

loc_0053F377: ;
    eax = eax | 0x4000;
    MEM32(esp + 0x1C) = esi;
    MEM32(edi + 8) = eax;

loc_0053F383: ;
    edx = MEM32(ebp + 0x10);
    if (CMP_NE(edx, ebx)) goto loc_0053F38F; /* jne: not equal / not zero */

loc_0053F38A: ;
    edx = 0x11;

loc_0053F38F: ;
    eax = edx;
    eax = eax >> 4;
    eax = eax & 0xF;
    ecx = edx;
    ecx = ecx & 0xF;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    MEM32(edi + 0x196C) = edx;
    if (CMP_GE(eax & eax, 0)) goto loc_0053F3B4; /* jge: greater or equal (signed >=) */

loc_0053F3AE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0053F3B4: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(edi + 0x96C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x3C) = ecx;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0053F3CC; /* jge: greater or equal (signed >=) */

loc_0053F3C6: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0053F3CC: ;
    (void)0; /* test HI8(edx), 0x10 - flags set for next jcc */
    MEMF(edi + 0x970) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(HI8(edx), 0x10)) goto loc_0053F3E3; /* je: equal / zero */

loc_0053F3D7: ;
    (void)0; /* cmp LO8(edx), 0x21 - flags set for next jcc */
    ebx = 2;
    if (CMP_NE(LO8(edx), 0x21)) goto loc_0053F3E3; /* jne: not equal / not zero */

loc_0053F3E1: ;
    ebx = esi;

loc_0053F3E3: ;
    (void)0; /* test HI8(edx), 1 - flags set for next jcc */
    esi = 2;
    if (TEST_Z(HI8(edx), 1)) { sub_0053F3F4(); return; } /* je: equal / zero */

loc_0053F3ED: ;
    esi = 4;
    g_seh_ebp = ebp; sub_0053F3FE(); return; /* tail jmp 0x0053F3FE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0053F8C0
 * Original: 0x0053F8C0 - 0x0053F8CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F8C0(void)
{

loc_0053F8C0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp);
    /* TODO: bsf eax, ecx */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053F8D0
 * Original: 0x0053F8D0 - 0x0053F91C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F8D0: ;
    ecx = eax + -2;
    if (CMP_A(ecx, 0x2B)) goto loc_0053F91B; /* ja: above (unsigned >) */

loc_0053F8D8: ;
    ecx = ZX8(MEM8(ecx + 0x53F944));
    { uint32_t _jt = MEM32(ecx * 4 + 0x53F91C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0053F8E6u) goto loc_0053F8E6;
    if (_jt == 0x0053F8ECu) goto loc_0053F8EC;
    if (_jt == 0x0053F8F2u) goto loc_0053F8F2;
    if (_jt == 0x0053F8F8u) goto loc_0053F8F8;
    if (_jt == 0x0053F8FEu) goto loc_0053F8FE;
    if (_jt == 0x0053F904u) goto loc_0053F904;
    if (_jt == 0x0053F90Au) goto loc_0053F90A;
    if (_jt == 0x0053F910u) goto loc_0053F910;
    if (_jt == 0x0053F916u) goto loc_0053F916;
    if (_jt == 0x0053F91Bu) goto loc_0053F91B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053F8E6: ;
    eax = 0x12;
    esp += 4; return; /* ret */

loc_0053F8EC: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

loc_0053F8F2: ;
    eax = 0x11;
    esp += 4; return; /* ret */

loc_0053F8F8: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

loc_0053F8FE: ;
    eax = 0x10;
    esp += 4; return; /* ret */

loc_0053F904: ;
    eax = 0x30;
    esp += 4; return; /* ret */

loc_0053F90A: ;
    eax = 0x2E;
    esp += 4; return; /* ret */

loc_0053F910: ;
    eax = 0x31;
    esp += 4; return; /* ret */

loc_0053F916: ;
    eax = 0x2F;

loc_0053F91B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053F9B0
 * Original: 0x0053F9B0 - 0x0053F9C2 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F9B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F9B0: ;
    edx = ZX8(MEM8(ecx + 0xD));
    eax = ZX8(MEM8(edx + 0x53FA89));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x53FA60)); return; /* indirect tail jmp */

}

/**
 * sub_0053FAC0
 * Original: 0x0053FAC0 - 0x0053FACE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FAC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FAC0: ;
    edx = ZX8(MEM8(ecx + 0xD));
    edx = edx - 0x2A;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x53FAEC)); return; /* indirect tail jmp */

}

/**
 * sub_0053FB10
 * Original: 0x0053FB10 - 0x0053FC1C (268 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FB10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) { sub_0053FC1C(); return; } /* jne: not equal / not zero */

loc_0053FB26: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    edx = ecx;
    ecx = ecx >> 0x1C;
    ecx = ecx - edi;
    eax = eax >> 0x14;
    edx = edx >> 0x18;
    eax = eax & 0xF;
    eax = eax - edi;
    edx = edx & 0xF;
    edx = edx - edi;
    edi = ecx;
    ecx = ZX8(MEM8(esi + 0xD));
    ecx = ZX8(MEM8(ecx + 0x545CD0));
    ecx = ecx & 0x3C;
    MEM32(esp + 0x14) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(edx & edx, 0)) ? 1 : 0); /* setle */
    PUSH32(esp, ebx);
    ebx = 1;
    ecx--;
    ecx = ecx & edx;
    ebx = ebx << LO8(ecx);
    ecx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(edi & edi, 0)) ? 1 : 0); /* setle */
    MEM32(ebp) = ebx;
    ecx--;
    ecx = ecx & edi;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(eax & eax, 0)) ? 1 : 0); /* setle */
    edi = 1;
    ecx--;
    ecx = ecx & eax;
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edi;
    esi = ZX8(MEM8(esi + 0xD));
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_EQ(esi, 0xC)) goto loc_0053FBAE; /* je: equal / zero */

loc_0053FBA4: ;
    if (CMP_LE(esi, 0xD)) goto loc_0053FBB0; /* jle: less or equal (signed <=) */

loc_0053FBA9: ;
    if (CMP_G(esi, 0xF)) goto loc_0053FBB0; /* jg: greater (signed >) */

loc_0053FBAE: ;
    SET_LO8(ecx, 1);

loc_0053FBB0: ;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 2;
    ebx = ecx;
    if (CMP_LE(ebx, eax)) goto loc_0053FBBF; /* jle: less or equal (signed <=) */

loc_0053FBBD: ;
    eax = ebx;

loc_0053FBBF: ;
    edi = 1;
    ecx = eax;
    edi = edi << LO8(ecx);
    if (CMP_LE(ebx, edx)) goto loc_0053FBCE; /* jle: less or equal (signed <=) */

loc_0053FBCC: ;
    edx = ebx;

loc_0053FBCE: ;
    eax = 1;
    ecx = edx;
    eax = eax << LO8(ecx);
    (void)0; /* cmp esi, 0xC - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(esi, 0xC)) goto loc_0053FBFC; /* je: equal / zero */

loc_0053FBDD: ;
    if (CMP_LE(esi, 0xD)) goto loc_0053FBF0; /* jle: less or equal (signed <=) */

loc_0053FBE2: ;
    if (CMP_G(esi, 0xF)) goto loc_0053FBF0; /* jg: greater (signed >) */

loc_0053FBE7: ;
    edx = edi * 4;
    goto loc_0053FBFF;

loc_0053FBF0: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    edx = edx >> 3;
    goto loc_0053FBFF;

loc_0053FBFC: ;
    edx = edi + edi;

loc_0053FBFF: ;
    ecx = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    POP32(esp, edi);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    eax = eax >> 3;
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0053FC70
 * Original: 0x0053FC70 - 0x0053FCCE (94 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FC70: ;
    eax = ZX8(MEM8(edi + 0xD));
    esp = esp - 0x14;
    ecx = edi;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_0053B8C0(); /* call 0x0053B8C0 */

loc_0053FC80: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    if (TEST_NZ(ebx, ebx)) goto loc_0053FCB0; /* jne: not equal / not zero */

loc_0053FC8E: ;
    ecx = ZX8(MEM8(edi + 0xD));
    SET_LO8(eax, MEM8(ecx + 0x545CD0));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0053FCA5; /* jns: not sign (positive) */

loc_0053FC9C: ;
    MEM32(esi + 8) = 1;
    goto loc_0053FCB0;

loc_0053FCA5: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0053FCB0; /* je: equal / zero */

loc_0053FCA9: ;
    MEM32(esi + 8) = 2;

loc_0053FCB0: ;
    eax = MEM32(0x5499E8);
    edx = MEM32(eax + 0x1A14);
    ecx = MEM32(edi + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_0053FCCE(); return; } /* jne: not equal / not zero */

loc_0053FCC3: ;
    edx = MEM32(eax + 0x196C);
    MEM32(esi + 0x10) = edx;
    g_seh_ebp = ebp; sub_0053FCD5(); return; /* tail jmp 0x0053FCD5 */

}

/**
 * sub_0053FD10
 * Original: 0x0053FD10 - 0x0053FEFF (495 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FD10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FD10: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    eax = ZX8(MEM8(ebp + 0xD));
    eax = ZX8(MEM8(eax + 0x545CD0));
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    esi = esi | 0x80000000u;
    eax = eax & 0x3C;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(ecx, ecx)) { sub_0053FEFF(); return; } /* jne: not equal / not zero */

loc_0053FD44: ;
    eax = MEM32(ebp + 0xC);
    esi = ZX8(MEM8(ebp + 0xD));
    edx = eax;
    edi = eax;
    edx = edx >> 0x14;
    edi = edi >> 0x18;
    edx = edx & 0xF;
    edi = edi & 0xF;
    eax = eax >> 0x1C;
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_EQ(esi, 0xC)) goto loc_0053FD6F; /* je: equal / zero */

loc_0053FD65: ;
    if (CMP_LE(esi, 0xD)) goto loc_0053FD71; /* jle: less or equal (signed <=) */

loc_0053FD6A: ;
    if (CMP_G(esi, 0xF)) goto loc_0053FD71; /* jg: greater (signed >) */

loc_0053FD6F: ;
    SET_LO8(ecx, 1);

loc_0053FD71: ;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, ebx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 2;
    ebx = ecx;
    ecx = MEM32(esp + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x28) = ebx;
    if (TEST_Z(ecx, ecx)) goto loc_0053FE24; /* je: equal / zero */

loc_0053FD8B: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xE));
    esi = edx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0;
    ecx = ecx & 0xF;
    MEM32(esp + 0x24) = ecx;
    if ((ecx == 0)) goto loc_0053FE0B; /* je: equal / zero */

loc_0053FDAB: ;
    MEM32(esp + 0x24) = ecx;
    ecx = edi;

loc_0053FDB1: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    if (CMP_A(esi, ebx)) goto loc_0053FDBD; /* ja: above (unsigned >) */

loc_0053FDB9: ;
    MEM32(esp + 0x20) = ebx;

loc_0053FDBD: ;
    if (CMP_A(ecx, ebx)) goto loc_0053FDC3; /* ja: above (unsigned >) */

loc_0053FDC1: ;
    ecx = ebx;

loc_0053FDC3: ;
    ebx = MEM32(esp + 0x20);
    ecx = ecx + ebx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x10));
    ebx = ebx >> 3;
    ecx = ecx + ebx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_BE(esi & esi, 0)) goto loc_0053FDE7; /* jbe: below or equal (unsigned <=) */

loc_0053FDE6: ;
    esi--;

loc_0053FDE7: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_BE(ecx & ecx, 0)) goto loc_0053FDF4; /* jbe: below or equal (unsigned <=) */

loc_0053FDEF: ;
    ecx--;
    MEM32(esp + 0x14) = ecx;

loc_0053FDF4: ;
    ebx = MEM32(esp + 0x18);
    if (CMP_BE(ebx & ebx, 0)) goto loc_0053FE01; /* jbe: below or equal (unsigned <=) */

loc_0053FDFC: ;
    ebx--;
    MEM32(esp + 0x18) = ebx;

loc_0053FE01: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    ebx = MEM32(esp + 0x28);
    if ((MEM32(esp + 0x24) != 0)) goto loc_0053FDB1; /* jne: not equal / not zero */

loc_0053FE0B: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x30);
    ecx = ecx + 0x7F;
    ecx = ecx & 0xFFFFFF80u;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x34));
    esi = esi + ecx;
    MEM32(esp + 0x30) = esi;

loc_0053FE24: ;
    ecx = MEM32(esp + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_0053FE72; /* je: equal / zero */

loc_0053FE2C: ;
    MEM32(esp + 0x34) = ecx;

loc_0053FE30: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    esi = edx;
    if (CMP_A(edx, ebx)) goto loc_0053FE38; /* ja: above (unsigned >) */

loc_0053FE36: ;
    esi = ebx;

loc_0053FE38: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ecx = edi;
    if (CMP_A(edi, ebx)) goto loc_0053FE40; /* ja: above (unsigned >) */

loc_0053FE3E: ;
    ecx = ebx;

loc_0053FE40: ;
    ecx = ecx + esi;
    ecx = ecx + eax;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x30);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x10));
    esi = esi >> 3;
    ecx = ecx + esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    if (CMP_BE(edx & edx, 0)) goto loc_0053FE62; /* jbe: below or equal (unsigned <=) */

loc_0053FE61: ;
    edx--;

loc_0053FE62: ;
    if (CMP_BE(edi & edi, 0)) goto loc_0053FE67; /* jbe: below or equal (unsigned <=) */

loc_0053FE66: ;
    edi--;

loc_0053FE67: ;
    if (CMP_BE(eax & eax, 0)) goto loc_0053FE6C; /* jbe: below or equal (unsigned <=) */

loc_0053FE6B: ;
    eax--;

loc_0053FE6C: ;
    MEM32(esp + 0x34) = MEM32(esp + 0x34) - 1;
    if ((MEM32(esp + 0x34) != 0)) goto loc_0053FE30; /* jne: not equal / not zero */

loc_0053FE72: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax << 4;
    eax = eax | edi;
    eax = eax << 4;
    eax = eax | edx;
    eax = eax << 0x14;
    ecx = ecx & 0xFFFFF;
    eax = eax | ecx;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_A(edx, ebx)) goto loc_0053FE92; /* ja: above (unsigned >) */

loc_0053FE90: ;
    edx = ebx;

loc_0053FE92: ;
    if (CMP_A(edi, ebx)) goto loc_0053FE98; /* ja: above (unsigned >) */

loc_0053FE96: ;
    edi = ebx;

loc_0053FE98: ;
    eax = ZX8(MEM8(ebp + 0xD));
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, 0xC)) goto loc_0053FECD; /* je: equal / zero */

loc_0053FEA2: ;
    if (CMP_LE(eax, 0xD)) goto loc_0053FEBA; /* jle: less or equal (signed <=) */

loc_0053FEA7: ;
    if (CMP_G(eax, 0xF)) goto loc_0053FEBA; /* jg: greater (signed >) */

loc_0053FEAC: ;
    eax = 1;
    ecx = edx;
    eax = eax << LO8(ecx);
    eax = eax << 2;
    goto loc_0053FED8;

loc_0053FEBA: ;
    eax = 1;
    ecx = edx;
    eax = eax << LO8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    eax = eax >> 3;
    goto loc_0053FED8;

loc_0053FECD: ;
    eax = 1;
    ecx = edx;
    eax = eax << LO8(ecx);
    eax = eax << 1;

loc_0053FED8: ;
    ecx = edi + edx;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x44);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    ecx = MEM32(ebp + 0x10);
    MEM32(esi) = ecx;
    esi = MEM32(esp + 0x2C);
    edx = edx >> 3;
    g_seh_ebp = ebp; sub_0053FF29(); return; /* tail jmp 0x0053FF29 */

}

/**
 * sub_0053FF50
 * Original: 0x0053FF50 - 0x0053FFD5 (133 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FF50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    (void)0; /* test LO8(ebx), 0x20 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_NZ(LO8(ebx), 0x20)) goto loc_0053FF6A; /* jne: not equal / not zero */

loc_0053FF63: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0053C570(); /* call 0x0053C570 */

loc_0053FF6A: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0053FF93: ;
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    ecx = MEM32(esp + 0x20);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0053FFA2; /* je: equal / zero */

loc_0053FF9C: ;
    ecx = ecx | 0xF0000000u;

loc_0053FFA2: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_0053FFC9; /* je: equal / zero */

loc_0053FFAA: ;
    edx = ZX8(MEM8(ebp + 0xD));
    edx = ZX8(MEM8(edx + 0x545CD0));
    edx = edx & 0x3C;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi));
    edi = MEM32(edi + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    edx = edx >> 3;
    edi = edi + ecx;
    ecx = edi + edx;

loc_0053FFC9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053FFE0
 * Original: 0x0053FFE0 - 0x0054005B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FFE0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x545CD0));
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    MEM32(esp + 0x3C) = 0;
    ecx = ecx & 0x3C;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    ebx = ecx;
    if (TEST_NZ(LO8(eax), 1)) { sub_0054005B(); return; } /* jne: not equal / not zero */

loc_0054000C: ;
    if (CMP_EQ(edi, 0xC)) { sub_0054005B(); return; } /* je: equal / zero */

loc_00540011: ;
    if (CMP_LE(edi, 0xD)) goto loc_0054001B; /* jle: less or equal (signed <=) */

loc_00540016: ;
    if (CMP_LE(edi, 0xF)) { sub_0054005B(); return; } /* jle: less or equal (signed <=) */

loc_0054001B: ;
    ecx = MEM32(esp + 0x30);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00540035; /* jne: not equal / not zero */

loc_0054002D: ;
    MEM32(esp + 0x30) = 1;

loc_00540035: ;
    ecx = MEM32(esp + 0x38);
    if (TEST_NZ(ecx, ecx)) goto loc_0054004F; /* jne: not equal / not zero */

loc_0054003D: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)esi);
    ebx = ebx >> 3;
    ebx = ebx + 0x3F;
    ebx = ebx & 0xFFFFFFC0u;
    MEM32(esp + 0x38) = ebx;
    ecx = ebx;

loc_0054004F: ;
    MEM32(esp + 0x24) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    g_seh_ebp = ebp; sub_0054015D(); return; /* tail jmp 0x0054015D */

}

/**
 * sub_005401E5
 * Original: 0x005401E5 - 0x0054025B (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005401E5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005401E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x540DC0);
    eax = edi + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00540202: ;
    eax = edi + 0x1AC;
    MEM32(edi + 0x1B0) = eax;
    MEM32(eax) = eax;
    eax = edi + 0x19C;
    ebx = 0; /* xor self */
    ebx++;
    MEM32(edi + 0x1A0) = eax;
    MEM32(eax) = eax;
    eax = edi;
    MEM8(edi + 0x1A4) = 0;
    MEM8(edi + 0x1A6) = 4;
    MEM32(edi + 0x1A8) = ebx;
    MEM8(edi + 0x194) = 0;
    MEM8(edi + 0x196) = 4;
    MEM32(edi + 0x198) = ebx;
    PUSH32(esp, 0); sub_00540345(); /* call 0x00540345 */

loc_00540250: ;
    if (TEST_NZ(eax, eax)) {
        /* Tail continuation reuses this function's stack frame. */
        g_seh_ebp = ebp;
        sub_0054025B();
        return;
    } /* jne: not equal / not zero */

loc_00540254: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00540341(); return; /* tail jmp 0x00540341 */

}

/**
 * sub_00540345
 * Original: 0x00540345 - 0x00540370 (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540345(void)
{

loc_00540345: ;
    MEM32(eax) = 0xFD000000u;
    eax = MEM32(0xFD001804u);
    eax = eax | 4;
    MEM32(0xFD001804u) = eax;
    eax = 0; /* xor self */
    MEM32(-44039872) = 0;
    MEM32(-50294464) = 0;
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00540370
 * Original: 0x00540370 - 0x005403B3 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540370(void)
{

loc_00540370: ;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x1800);
    ecx = ecx >> 0x10;
    ecx = ecx & 0xFFFC;
    MEM32(eax + 0xA8) = ecx;
    ecx = MEM32(edx + 0x1808);
    ecx = ecx & 0xFF;
    MEM32(eax + 0xC0) = ecx;
    edx = MEM32(edx + 0x10020C);
    MEM32(eax + 0xAC) = edx;
    MEM32(eax + 0xBC) = 0xFE502A;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_005403B3
 * Original: 0x005403B3 - 0x00540434 (129 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005403B3(void)
{

loc_005403B3: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(edi + 0x1830) = 0;
    MEM32(edi + 0x180C) = 0xF800;
    PUSH32(esp, 0); sub_00543F53(); /* call 0x00543F53 */

loc_005403D2: ;
    MEM32(esi + 0xB4) = 1;
    MEM32(edi + 0x9200) = 0xDE86;
    MEM32(edi + 0x9210) = 0x1DCD;
    MEM32(edi + 0x9420) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_005440B6(); /* call 0x005440B6 */

loc_005403FF: ;
    eax = esi;
    PUSH32(esp, 0); sub_005441B6(); /* call 0x005441B6 */

loc_00540406: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_005404D3(); /* call 0x005404D3 */

loc_0054040F: ;
    eax = esi;
    PUSH32(esp, 0); sub_00544285(); /* call 0x00544285 */

loc_00540416: ;
    eax = esi;
    MEM32(esi + 0x134) = 2;
    PUSH32(esp, 0); sub_005442BB(); /* call 0x005442BB */

loc_00540427: ;
    ecx = esi;
    PUSH32(esp, 0); sub_005442EB(); /* call 0x005442EB */

loc_0054042E: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00540434
 * Original: 0x00540434 - 0x005404D3 (159 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540434(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540434: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    eax = esi + 0x184C;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx & 0xFFFFFCFFu;
    MEM32(eax) = edx;
    MEM32(eax) = ecx;
    ebp = ebp | 0xFFFFFFFFu;
    MEM32(esi + 0x200) = ebp;
    eax = MEM32(edi + 0xB4);
    MEM32(esi + 0x140) = eax;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    ebx++;
    MEM32(eax + 0x600100) = ebx;
    MEM32(eax + 0x600140) = ebx;
    eax = 0; /* xor self */
    MEM32(esi + 0x9400) = eax;
    MEM32(esi + 0x9410) = eax;
    MEM32(esi + 0x400720) = eax;
    eax = edi;
    PUSH32(esp, 0); sub_0054435C(); /* call 0x0054435C */

loc_0054048E: ;
    MEM32(esi + 0x400100) = ebp;
    MEM32(esi + 0x400140) = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_0054476A(); /* call 0x0054476A */

loc_005404A1: ;
    MEM32(esi + 0x2100) = ebp;
    eax = MEM32(edi + 0x11C);
    MEM32(esi + 0x2140) = eax;
    MEM32(edi + 0x820) = MEM32(edi + 0x820) & 0;
    MEM32(edi + 0x824) = MEM32(edi + 0x824) & 0;
    POP32(esp, esi);
    MEM32(edi + 0x840) = ebp;
    MEM32(edi + 0x844) = ebp;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005404D3
 * Original: 0x005404D3 - 0x0054050D (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005404D3(void)
{
    int _flags = 0; /* fallback flag var */

loc_005404D3: ;
    eax = eax + eax * 2;
    eax = eax << 8;
    eax = eax + ecx + 0x1DC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 0x100;
    edi = eax;
    ecx = 0; /* xor self */
    edi = edi - edx;
    eax = eax - edx;
    esi = eax + 0x200;

loc_005404F6: ;
    eax = edx + ecx;
    MEM8(edi + eax) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(esi + eax) = LO8(ecx);
    ecx++;
    if (CMP_B(ecx, 0x100)) goto loc_005404F6; /* jb: below (unsigned <) */

loc_0054050A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054050D
 * Original: 0x0054050D - 0x00540528 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054050D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054050D: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) { sub_00540528(); return; } /* je: equal / zero */

loc_00540514: ;
    eax = eax & 0xFFFFFFF;
    eax = eax | 0x40000000;
    MEM32(edx) = eax;
    MEM32(ecx) = 3;
    g_seh_ebp = ebp; sub_00540551(); return; /* tail jmp 0x00540551 */

}

/**
 * sub_00540554
 * Original: 0x00540554 - 0x0054061D (201 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540554(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00540554: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi);
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -4;
    edx = ebp + -8;
    PUSH32(esp, 0); sub_0054050D(); /* call 0x0054050D */

loc_00540576: ;
    eax = MEM32(ebp + -8);
    edx = edi + 0x160;
    ecx = MEM32(edx);
    edi = ecx + 1;
    MEM32(edx) = edi;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    POP32(esp, edi);
    eax = eax | 3;
    edx = edx - edi;
    if ((edx == 0)) goto loc_0054059D; /* je: equal / zero */

loc_00540593: ;
    edx--;
    if ((edx == 0)) goto loc_0054059A; /* je: equal / zero */

loc_00540596: ;
    PUSH32(esp, 0x3D);
    goto loc_0054059C;

loc_0054059A: ;
    PUSH32(esp, 3);

loc_0054059C: ;
    POP32(esp, edi);

loc_0054059D: ;
    edx = MEM32(ebp + -8);
    edx = edx << 0x14;
    edx = edx | 0x3000;
    edi = edi | edx;
    if (CMP_EQ(MEM32(ebp + -4), 2)) goto loc_005405CB; /* je: equal / zero */

loc_005405B1: ;
    if (CMP_NE(MEM32(ebp + -4), 3)) goto loc_005405BF; /* jne: not equal / not zero */

loc_005405B7: ;
    edi = edi | 0x30000;
    goto loc_005405CB;

loc_005405BF: ;
    if (CMP_NE(MEM32(ebp + -4), 1)) goto loc_005405CB; /* jne: not equal / not zero */

loc_005405C5: ;
    edi = edi | 0x20000;

loc_005405CB: ;
    edx = ecx;
    edx = edx << 4;
    edx = edx + ebx;
    MEM32(edx + 0x700008) = eax;
    MEM32(edx + 0x70000C) = eax;
    edi = edi | 0x8000;
    eax = ecx + 0x70000;
    eax = eax << 4;
    MEM32(eax + ebx) = edi;
    eax = MEM32(ebp + 0x14);
    MEM32(edx + 0x700004) = eax;
    eax = 0; /* xor self */
    edi = esi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 8);
    MEM16(esi + 6) = MEM16(esi + 6) & 0;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    eax++;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054061D
 * Original: 0x0054061D - 0x0054067B (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054061D(void)
{

loc_0054061D: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    MEM32(edx + 0x100) = eax;
    MEM32(edx + 0x104) = eax;
    MEM32(edx + 0x110) = eax;
    MEM32(edx + 0x118) = eax;
    eax = edx + 0x160;
    ecx = MEM32(eax);
    esi = ecx + 0x37F;
    MEM32(eax) = esi;
    esi = 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    POP32(esp, eax);
    MEM32(edx + 0x10C) = ecx;
    PUSH32(esp, 0); sub_005449E7(); /* call 0x005449E7 */

loc_00540661: ;
    eax = MEM32(edx + 0x100);
    ecx = MEM32(esp + 0xC);
    eax = eax + esi;
    eax = eax << 0x10;
    eax = eax + MEM32(edx);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054067B
 * Original: 0x0054067B - 0x005406AB (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054067B(void)
{

loc_0054067B: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 6));
    PUSH32(esp, edi);
    edi = edx;
    edi = edi >> 0xB;
    edi = edi ^ edx;
    PUSH32(esp, esi);
    edi = edi >> 0xB;
    edi = edi ^ edx;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 0x100);
    edi = edi & 0x7FF;
    PUSH32(esp, 0); sub_00544B81(); /* call 0x00544B81 */

loc_005406A5: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005406AB
 * Original: 0x005406AB - 0x0054073E (147 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005406AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005406AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x818;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_005406CC; /* je: equal / zero */

loc_005406C4: ;
    MEM32(edi + 0x9140) = ebx;
    MEM32(eax) = ebx;

loc_005406CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561154), _icall_esp); /* indirect call */
    }

loc_005406D2: ;
    if (TEST_NZ(eax, eax)) goto loc_005406E2; /* jne: not equal / not zero */

loc_005406D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561158), _icall_esp); /* indirect call */
    }

loc_005406E2: ;
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_00540A4C(); /* call 0x00540A4C */

loc_005406EB: ;
    ebx++;
    if (CMP_L(ebx, 8)) goto loc_005406E2; /* jl: less (signed <) */

loc_005406F1: ;
    ebx = 0; /* xor self */
    MEM32(edi + 0x2044) = ebx;

loc_005406F9: ;
    if (TEST_Z(MEM8(edi + 0x3214), 0x10)) goto loc_00540714; /* je: equal / zero */

loc_00540702: ;
    if (TEST_Z(MEM8(edi + 0x2400), 0x10)) goto loc_00540714; /* je: equal / zero */

loc_0054070B: ;
    if (TEST_Z(MEM8(edi + 0x3220), 0x10)) { sub_0054073E(); return; } /* je: equal / zero */

loc_00540714: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00541280(); /* call 0x00541280 */

loc_0054071A: ;
    if (CMP_EQ(MEM32(edi + 0x400100), ebx)) goto loc_00540729; /* je: equal / zero */

loc_00540722: ;
    ecx = esi;
    PUSH32(esp, 0); sub_005411D0(); /* call 0x005411D0 */

loc_00540729: ;
    if (TEST_Z(MEM32(edi + 0x100), 0x1000000)) goto loc_005406F9; /* je: equal / zero */

loc_00540735: ;
    eax = esi;
    PUSH32(esp, 0); sub_00540F70(); /* call 0x00540F70 */

loc_0054073C: ;
    goto loc_005406F9;

}

/**
 * sub_0054085F
 * Original: 0x0054085F - 0x00540922 (195 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054085F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054085F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00540B13(); /* call 0x00540B13 */

loc_00540878: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0xC);
    eax = eax & 1;
    MEM32(ebp + -20) = eax;
    eax = 0x1FFC;
    edx = ebx * 4 + 0x10;
    edx = edx & eax;
    ecx = 0xEA0000;
    edx = edx | ecx;
    MEM32(ebp + -12) = edx;
    edx = ebx * 4 + 0x30;
    edx = edx & eax;
    edx = edx | ecx;
    MEM32(ebp + -24) = edx;
    edx = MEM32(ebp + 0x10);
    edx = edi + edx + -1;
    MEM32(ebp + -16) = edx;
    edx = ebx * 4 + 0x50;
    edx = edx & eax;
    eax = ebx + 0x10024;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + 0x10) = eax;
    eax = ebx + 0x40090;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -4) = eax;
    eax = ebx;
    edx = edx | ecx;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -8) = eax;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_005445D8(); /* call 0x005445D8 */

loc_005408F0: ;
    (void)0; /* cmp MEM32(ebp + -20), 0 - flags set for next jcc */
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + -4);
    MEM32(eax + 0x100244) = edx;
    MEM32(eax + 0x100248) = ecx;
    MEM32(eax + 0x400904) = edx;
    MEM32(eax + 0x400908) = ecx;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(MEM32(ebp + -20), 0)) { sub_00540922(); return; } /* je: equal / zero */

loc_0054091D: ;
    eax = eax | 3;
    g_seh_ebp = ebp; sub_00540925(); return; /* tail jmp 0x00540925 */

}

/**
 * sub_00540A4C
 * Original: 0x00540A4C - 0x00540B13 (199 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540A4C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00540A4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00540B13(); /* call 0x00540B13 */

loc_00540A61: ;
    eax = ebx * 4 + 0x10;
    eax = eax & 0x1FFC;
    eax = eax | 0xEA0000;
    MEM32(ebp + -12) = eax;
    eax = ebx + 0x10024;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -4) = eax;
    eax = ebx + 0x40090;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -8) = eax;

loc_00540A91: ;
    PUSH32(esp, 0); sub_005445D8(); /* call 0x005445D8 */

loc_00540A96: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -12);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    MEM32(esi + 0x400750) = edx;
    MEM32(esi + 0x400754) = 0;
    eax = MEM32(eax);
    if (CMP_NE(eax, MEM32(ecx))) goto loc_00540A91; /* jne: not equal / not zero */

loc_00540AC1: ;
    eax = 0; /* xor self */
    ecx = ebx * 4 + 0x90;
    ecx = ecx & 0x1FFC;
    MEM32(esi + ebx * 4 + 0x100300) = eax;
    ecx = ecx | 0xEA0000;
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    MEM32(esi + ebx * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_00540B01; /* je: equal / zero */

loc_00540AF5: ;
    MEM32(esi + 0x100324) = eax;
    MEM32(esi + 0x4009A0) = eax;

loc_00540B01: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x3220) = eax;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00540B13
 * Original: 0x00540B13 - 0x00540B5C (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540B13(void)
{
    int _flags = 0; /* fallback flag var */

loc_00540B13: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);

loc_00540B16: ;
    if (TEST_Z(MEM8(esi + 0x3214), 0x10)) goto loc_00540B31; /* je: equal / zero */

loc_00540B1F: ;
    if (TEST_Z(MEM8(esi + 0x2400), 0x10)) goto loc_00540B31; /* je: equal / zero */

loc_00540B28: ;
    if (TEST_Z(MEM8(esi + 0x3220), 0x10)) { sub_00540B5C(); return; } /* je: equal / zero */

loc_00540B31: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00541280(); /* call 0x00541280 */

loc_00540B37: ;
    if (CMP_EQ(MEM32(esi + 0x400100), 0)) goto loc_00540B47; /* je: equal / zero */

loc_00540B40: ;
    ecx = edi;
    PUSH32(esp, 0); sub_005411D0(); /* call 0x005411D0 */

loc_00540B47: ;
    if (TEST_Z(MEM32(esi + 0x100), 0x1000000)) goto loc_00540B16; /* je: equal / zero */

loc_00540B53: ;
    eax = edi;
    PUSH32(esp, 0); sub_00540F70(); /* call 0x00540F70 */

loc_00540B5A: ;
    goto loc_00540B16;

}

/**
 * sub_00540B79
 * Original: 0x00540B79 - 0x00540B99 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540B79(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00540B79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_EQ(MEM32(ebp + 0x10), esi)) { sub_00540B99(); return; } /* je: equal / zero */

loc_00540B88: ;
    if (CMP_NE(MEM32(eax + 0x844), esi)) goto loc_00540B91; /* jne: not equal / not zero */

loc_00540B90: ;
    esi++;

loc_00540B91: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_00540BBE(); return; /* tail jmp 0x00540BBE */

}

/**
 * sub_00540C47
 * Original: 0x00540C47 - 0x00540C8E (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540C47(void)
{
    int _flags = 0; /* fallback flag var */

loc_00540C47: ;
    edx = MEM32(0x561128);
    (void)0; /* test MEM8(edx + 1), 2 - flags set for next jcc */
    eax = MEM32(ecx);
    if (TEST_NZ(MEM8(edx + 1), 2)) goto loc_00540C8D; /* jne: not equal / not zero */

loc_00540C55: ;
    ecx = ZX8(MEM8(ecx + 0xA));
    ecx = ecx - 0xF;
    if ((ecx == 0)) goto loc_00540C73; /* je: equal / zero */

loc_00540C5E: ;
    ecx--;
    if ((ecx == 0)) goto loc_00540C6C; /* je: equal / zero */

loc_00540C61: ;
    ecx--;
    ecx--;
    if ((ecx != 0)) goto loc_00540C8D; /* jne: not equal / not zero */

loc_00540C65: ;
    ecx = 0x108E48;
    goto loc_00540C78;

loc_00540C6C: ;
    ecx = 0xE2194;
    goto loc_00540C78;

loc_00540C73: ;
    ecx = 0xDAEBC;

loc_00540C78: ;
    MEM32(eax + 0x680680) = ecx;
    ecx = eax + 0x6806A0;
    eax = MEM32(ecx);
    eax = ~eax;
    eax = eax & 1;
    MEM32(ecx) = eax;

loc_00540C8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00540C90
 * Original: 0x00540C90 - 0x00540C93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540C90(void)
{

loc_00540C90: ;
    /* TODO: rdtsc  */
    esp += 4; return; /* ret */

}

/**
 * sub_00540CA0
 * Original: 0x00540CA0 - 0x00540DB0 (272 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00540CA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xA0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (TEST_Z(eax, eax)) { sub_00540DB0(); return; } /* je: equal / zero */

loc_00540CB6: ;
    eax = MEM32(edi + 0x140);
    if (TEST_Z(eax, eax)) { sub_00540DB0(); return; } /* je: equal / zero */

loc_00540CC4: ;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xC0000000u;
    if (CMP_NE(ecx, 0x80000000u)) goto loc_00540CE8; /* jne: not equal / not zero */

loc_00540CD5: ;
    if (TEST_Z(MEM32(esi + 0x1B4), 0x200000)) goto loc_00540CE8; /* je: equal / zero */

loc_00540CE1: ;
    eax = 1;
    goto loc_00540CEA;

loc_00540CE8: ;
    eax = 0; /* xor self */

loc_00540CEA: ;
    edx = MEM32(esi + 0xA4);
    if (TEST_NZ(edx, edx)) goto loc_00540D8E; /* jne: not equal / not zero */

loc_00540CF8: ;
    if (TEST_NZ(MEM32(esi + 0x1B4), 0x1000000)) goto loc_00540D0C; /* jne: not equal / not zero */

loc_00540D04: ;
    if (TEST_Z(eax, eax)) goto loc_00540D8E; /* je: equal / zero */

loc_00540D0C: ;
    if (TEST_Z(MEM32(edi + 0x100), 0x1000000)) goto loc_00540D8E; /* je: equal / zero */

loc_00540D18: ;
    SET_LO16(edx, 0x80C0);
    /* TODO: in al, dx */
    eax = eax >> 5;
    eax = ~eax;
    eax = eax & 1;
    (void)0; /* cmp ecx, 0x40000000 - flags set for next jcc */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(ecx, 0x40000000)) goto loc_00540D40; /* jne: not equal / not zero */

loc_00540D33: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = ecx;

loc_00540D40: ;
    eax = MEM32(esi + 0x1BC);
    eax = eax & 1;
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0xA4) = 1;
    if (CMP_EQ(MEM32(esi + edx * 4), 0)) goto loc_00540D81; /* je: equal / zero */

loc_00540D5D: ;
    ecx = MEM32(esi + 0x1C0);
    eax = eax + eax * 2;
    edx = MEM32(esi + eax * 4 + 0x178);
    eax = esi + eax * 4;
    ecx++;
    if (CMP_NE(edx, ecx)) goto loc_00540D81; /* jne: not equal / not zero */

loc_00540D75: ;
    edx = MEM32(eax + 0x17C);
    MEM32(0x54A8C0) = edx;

loc_00540D81: ;
    ecx = MEM32(0x54A8C0);
    eax = esi;
    PUSH32(esp, 0); sub_00541718(); /* call 0x00541718 */

loc_00540D8E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi + 0x84;
    PUSH32(esp, esi);
    MEM32(edi + 0x140) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E0), _icall_esp); /* indirect call */
    }

loc_00540DA9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00540DC0
 * Original: 0x00540DC0 - 0x00540E96 (214 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebp = MEM32(esi);
    PUSH32(esp, edi);
    /* nop */

loc_00540DD0: ;
    edi = MEM32(ebp + 0x100);
    ebx = 0; /* xor self */
    if (TEST_Z(edi, 0x1000)) goto loc_00540DE9; /* je: equal / zero */

loc_00540DE0: ;
    ecx = esi;
    PUSH32(esp, 0); sub_005411D0(); /* call 0x005411D0 */

loc_00540DE7: ;
    ebx = eax;

loc_00540DE9: ;
    if (TEST_Z(edi, 0xFFFFEFFFu)) goto loc_00540E75; /* je: equal / zero */

loc_00540DF5: ;
    if (TEST_Z(edi, 0x100000)) goto loc_00540E04; /* je: equal / zero */

loc_00540DFD: ;
    PUSH32(esp, 0); sub_00541080(); /* call 0x00541080 */

loc_00540E02: ;
    ebx = ebx | eax;

loc_00540E04: ;
    if (TEST_Z(edi, 0x1000000)) goto loc_00540E48; /* je: equal / zero */

loc_00540E0C: ;
    eax = MEM32(esi + 0x820);
    eax = eax | MEM32(esi + 0x824);
    if ((eax != 0)) goto loc_00540E30; /* jne: not equal / not zero */

loc_00540E1A: ;
    eax = esi;
    PUSH32(esp, 0); sub_00540F70(); /* call 0x00540F70 */

loc_00540E21: ;
    ebx = ebx | eax;
    goto loc_00540E48;

    goto loc_00540E30;

    /* nop */
    edi = edi;

loc_00540E30: ;
    MEM32(ebp + 0x600100) = 1;
    edi = MEM32(ebp + 0x100);
    if (TEST_NZ(edi, 0x1000000)) goto loc_00540E30; /* jne: not equal / not zero */

loc_00540E48: ;
    if (TEST_Z(edi, 0x100)) goto loc_00540E58; /* je: equal / zero */

loc_00540E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00541280(); /* call 0x00541280 */

loc_00540E56: ;
    ebx = ebx | eax;

loc_00540E58: ;
    if (TEST_Z(edi, 0x10000)) goto loc_00540E75; /* je: equal / zero */

loc_00540E60: ;
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0x8100), 1)) goto loc_00540E75; /* je: equal / zero */

loc_00540E6B: ;
    MEM32(eax + 0x8100) = 1;

loc_00540E75: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00540DD0; /* jne: not equal / not zero */

loc_00540E7D: ;
    ecx = MEM32(esi + 0xB4);
    POP32(esp, edi);
    MEM32(esi + 0xA4) = ebx;
    POP32(esp, esi);
    MEM32(ebp + 0x140) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00540EA0
 * Original: 0x00540EA0 - 0x00540F5D (189 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540EA0: ;
    eax = MEM32(esi + 0x1BC);
    eax = eax & 1;
    ecx = eax + eax * 2 + 0x5D;
    edx = MEM32(esi + ecx * 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    ecx = esi + ecx * 4;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (TEST_Z(edx, edx)) { sub_00540F5D(); return; } /* je: equal / zero */

loc_00540EC1: ;
    PUSH32(esp, edi);

loc_00540EC2: ;
    edi = MEM32(esi + 0x1C0);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    edx = MEM32(eax + 0x178);
    if (CMP_NE(edi, edx)) goto loc_00540F57; /* jne: not equal / not zero */

loc_00540ED8: ;
    MEM32(ecx) = 0;
    ecx = MEM32(eax + 0x17C);
    eax = esi;
    MEM32(0x54A8C0) = ecx;
    PUSH32(esp, 0); sub_00541718(); /* call 0x00541718 */

loc_00540EF1: ;
    edi = MEM32(esi + 0x1BC);
    edi = edi & 1;
    if (CMP_NE(MEM32(esi + edi * 4 + 0x7DC), 1)) goto loc_00540F23; /* jne: not equal / not zero */

loc_00540F04: ;
    eax = edi + edi * 2;
    eax = eax << 8;
    edx = eax + esi + 0x1DC;
    eax = esi;
    PUSH32(esp, 0); sub_00541796(); /* call 0x00541796 */

loc_00540F18: ;
    MEM32(esi + edi * 4 + 0x7DC) = 0;

loc_00540F23: ;
    eax = MEM32(ebx + 0x40071C);
    eax = eax | 2;
    MEM32(ebx + 0x40071C) = eax;
    ecx = MEM32(esi + 0x1BC);
    ecx++;
    eax = ecx;
    MEM32(esi + 0x1BC) = ecx;
    eax = eax & 1;
    ecx = eax + eax * 2 + 0x5D;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    ebp++;
    if (TEST_NZ(edx, edx)) goto loc_00540EC2; /* jne: not equal / not zero */

loc_00540F57: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00540F70
 * Original: 0x00540F70 - 0x00540FC3 (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540F70: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = esi;
    PUSH32(esp, 0); sub_00540C90(); /* call 0x00540C90 */

loc_00540F82: ;
    ecx = MEM32(esi + 0x1D8);
    if (TEST_Z(ecx, ecx)) goto loc_00540F96; /* je: equal / zero */

loc_00540F8C: ;
    edx = eax;
    edx = edx - ecx;
    MEM32(esi + 0x1D4) = edx;

loc_00540F96: ;
    ebx = MEM32(esi + 0x1C0);
    ebx++;
    MEM32(esi + 0x1D8) = eax;
    MEM32(esi + 0x1C0) = ebx;
    SET_LO8(ebx, MEM8(edi + 0x6013D4));
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_00540EA0(); /* call 0x00540EA0 */

loc_00540FB6: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 1;
    if (TEST_Z(eax, eax)) { sub_00540FC3(); return; } /* je: equal / zero */

loc_00540FBF: ;
    ebp = ecx;
    g_seh_ebp = ebp; sub_00540FDD(); return; /* tail jmp 0x00540FDD */

}

/**
 * sub_00541080
 * Original: 0x00541080 - 0x005411AD (301 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541080: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi);
    MEM32(eax + 0x9100) = 1;
    eax = MEM32(esi + 0x840);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_005411AD(); return; } /* je: equal / zero */

loc_0054109D: ;
    ecx = MEM32(esi + eax * 8 + 0x830);
    ecx = ecx | MEM32(esi + eax * 8 + 0x834);
    if ((ecx == 0)) { sub_005411AD(); return; } /* je: equal / zero */

loc_005410B1: ;
    ebp = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = ebp;
    PUSH32(esp, edi);
    /* nop */

loc_005410C0: ;
    edx = eax + 1;
    edx = edx & 0x80000001u;
    if (((int32_t)edx >= 0)) goto loc_005410D0; /* jns: not sign (positive) */

loc_005410CB: ;
    edx--;
    edx = edx | 0xFFFFFFFEu;
    edx++;

loc_005410D0: ;
    MEM32(esi + 0x840) = edx;
    MEM32(esi + eax * 8 + 0x830) = ebp;
    MEM32(esi + eax * 8 + 0x834) = ebp;
    if (CMP_NE(eax, MEM32(esi + 0x844))) goto loc_00541114; /* jne: not equal / not zero */

loc_005410EC: ;
    eax = MEM32(esi + 0x848);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esi + 0x844) = 0xFFFFFFFFu;
    if (CMP_EQ(eax, ebp)) goto loc_0054115E; /* je: equal / zero */

loc_00541100: ;
    ecx = MEM32(esi + 0x84C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x848) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0054110F: ;
    esp = esp + 4;
    goto loc_0054115E;

loc_00541114: ;
    eax = MEM32(esi + 0x824);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    ecx = MEM32(esi + 0x820);
    if (CMP_A(eax, ebp)) goto loc_00541128; /* ja: above (unsigned >) */

loc_00541124: ;
    if (CMP_BE(ecx, ebp)) goto loc_0054115E; /* jbe: below or equal (unsigned <=) */

loc_00541128: ;
    edx = MEM32(esi + 0x828);
    edx = edx + ecx;
    ecx = MEM32(esi + 0x82C);
    ecx = ecx + eax + _cf; /* adc */
    MEM32(esi + 0x828) = edx;
    eax = MEM32(esi + 0x828);
    PUSH32(esp, 1);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    MEM32(esi + 0x82C) = ecx;
    PUSH32(esp, 0); sub_00540B79(); /* call 0x00540B79 */

loc_00541157: ;
    eax = esi;
    PUSH32(esp, 0); sub_00540F70(); /* call 0x00540F70 */

loc_0054115E: ;
    eax = MEM32(esi + 0x840);
    edi = MEM32(esi + eax * 8 + 0x830);
    edx = MEM32(esi + eax * 8 + 0x834);
    ecx = edi;
    ecx = ecx | edx;
    if ((ecx == 0)) goto loc_005411A6; /* je: equal / zero */

loc_00541178: ;
    ecx = MEM32(esi);
    ebx = MEM32(ecx + 0x9410);
    ebx = MEM32(ecx + 0x9400);
    if (CMP_B(MEM32(ecx + 0x9410), edx)) goto loc_005411A6; /* jb: below (unsigned <) */

loc_0054118E: ;
    if (CMP_A(MEM32(ecx + 0x9410), edx)) goto loc_00541194; /* ja: above (unsigned >) */

loc_00541190: ;
    if (CMP_B(ebx, edi)) goto loc_005411A6; /* jb: below (unsigned <) */

loc_00541194: ;
    ecx = MEM32(esp + 0xC);
    ecx++;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(ecx, 2)) goto loc_005410C0; /* jl: less (signed <) */

loc_005411A6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005411D0
 * Original: 0x005411D0 - 0x0054127B (171 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005411D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005411D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    MEM32(esi + 0x400720) = 0;
    eax = MEM32(esi + 0x400100);
    ebp = MEM32(esi + 0x400704);
    ebx = MEM32(esi + 0x400108);
    ebp = ebp & 0x1FFC;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0054122F; /* je: equal / zero */

loc_005411FF: ;
    eax = ebp;
    eax = eax >> 0x14;
    MEM32(esi + 0x400100) = 0x1000;
    ecx = MEM32(edi);
    eax = eax & 0x1F;

loc_00541213: ;
    edx = MEM32(ecx + 0x400700);
    if (TEST_NZ(edx, edx)) goto loc_00541213; /* jne: not equal / not zero */

loc_0054121D: ;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00544613(); /* call 0x00544613 */

loc_00541225: ;
    eax = MEM32(esi + 0x400100);
    if (TEST_Z(eax, eax)) goto loc_00541266; /* je: equal / zero */

loc_0054122F: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esi + 0x400100) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00541266; /* je: equal / zero */

loc_00541239: ;
    if (TEST_Z(eax, 0x100001)) goto loc_00541266; /* je: equal / zero */

loc_00541240: ;
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    eax = MEM32(esi + 0x400708);
    if (TEST_NZ(LO8(ebx), 0x40)) goto loc_00541266; /* jne: not equal / not zero */

loc_0054124B: ;
    if (CMP_NE(ebp, 0x100)) goto loc_0054125C; /* jne: not equal / not zero */

loc_00541253: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00541410(); /* call 0x00541410 */

loc_0054125A: ;
    goto loc_00541266;

loc_0054125C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_005416D0(); /* call 0x005416D0 */

loc_00541266: ;
    POP32(esp, edi);
    MEM32(esi + 0x400720) = 1;
    eax = MEM32(esi + 0x400100);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00541280
 * Original: 0x00541280 - 0x00541405 (389 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x2100);
    if (TEST_Z(eax, 0x100000)) goto loc_005412A1; /* je: equal / zero */

loc_00541297: ;
    MEM32(esi + 0x2100) = 0x100000;

loc_005412A1: ;
    if (TEST_Z(eax, 0x1000000)) goto loc_005412B2; /* je: equal / zero */

loc_005412A8: ;
    MEM32(esi + 0x2100) = 0x1000000;

loc_005412B2: ;
    edx = MEM32(esi + 0x2100);
    ebx = 1;
    ebp = 0; /* xor self */
    if (TEST_Z(LO8(ebx), LO8(edx))) goto loc_00541300; /* je: equal / zero */

loc_005412C3: ;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3250) = ebp;
    MEM32(esi + 0x2100) = ebx;
    ecx = 0xFFFF;

loc_005412E0: ;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_005412EE; /* je: equal / zero */

loc_005412E5: ;
    ecx--;
    eax = MEM32(esi + 0x3250);
    if ((ecx != 0)) goto loc_005412E0; /* jne: not equal / not zero */

loc_005412EE: ;
    MEM32(esi + 0x3258) = ebp;
    MEM32(esi + 0x3250) = ebx;
    MEM32(esi + 0x2500) = ebx;

loc_00541300: ;
    if (TEST_Z(HI8(edx), 0x10)) goto loc_00541369; /* je: equal / zero */

loc_00541305: ;
    PUSH32(esp, 0x546650);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_0054130F: ;
    edi = MEM32(-46137012);
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_0054131F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edi = edi & 0xFF;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x546608);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00541334: ;
    esp = esp + 0x20;
    __debugbreak(); /* int3 */
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x2100) = 0x1000;
    MEM32(esi + 0x3228) = ebp;
    eax = MEM32(esi + 0x3240);
    if (CMP_EQ(eax, MEM32(esi + 0x3244))) goto loc_00541369; /* je: equal / zero */

loc_0054135A: ;
    eax = MEM32(esi + 0x3244);
    eax = eax + 4;
    MEM32(esi + 0x3244) = eax;

loc_00541369: ;
    eax = MEM32(esi + 0x3220);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_005413DA; /* je: equal / zero */

loc_00541374: ;
    eax = MEM32(esi + 0x3214);
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_005413B3; /* jne: not equal / not zero */

loc_0054137E: ;
    edi = edi;

loc_00541380: ;
    if (CMP_NE(MEM32(esi + 0x2100), ebp)) goto loc_005413B3; /* jne: not equal / not zero */

loc_00541388: ;
    if (CMP_EQ(MEM32(esi + 0x400100), ebp)) goto loc_00541397; /* je: equal / zero */

loc_00541390: ;
    ecx = edi;
    PUSH32(esp, 0); sub_005411D0(); /* call 0x005411D0 */

loc_00541397: ;
    if (TEST_Z(MEM32(esi + 0x100), 0x1000000)) goto loc_005413AA; /* je: equal / zero */

loc_005413A3: ;
    eax = edi;
    PUSH32(esp, 0); sub_00540F70(); /* call 0x00540F70 */

loc_005413AA: ;
    if (TEST_Z(MEM8(esi + 0x3214), 0x10)) goto loc_00541380; /* je: equal / zero */

loc_005413B3: ;
    if (TEST_Z(MEM8(esi + 0x3214), 0x10)) goto loc_005413DA; /* je: equal / zero */

loc_005413BC: ;
    /* nop */

loc_005413C0: ;
    if (TEST_NZ(MEM8(esi + 0x2500), 0x10)) goto loc_005413C0; /* jne: not equal / not zero */

loc_005413C9: ;
    eax = MEM32(esi + 0x3220);
    eax = eax & 0xFFFFEFFFu;
    MEM32(esi + 0x3220) = eax;

loc_005413DA: ;
    if (CMP_NE(MEM32(esi + 0x2100), ebp)) goto loc_005413EE; /* jne: not equal / not zero */

loc_005413E2: ;
    MEM32(esi + 0x3250) = ebx;
    MEM32(esi + 0x2500) = ebx;

loc_005413EE: ;
    ecx = MEM32(esi + 0x2100);
    eax = MEM32(esi + 0x2080);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax & ebx;
    POP32(esp, ebp);
    eax = eax | ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541410
 * Original: 0x00541410 - 0x005415E8 (472 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541410: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = edi;
    edx = edx & 0x1F;
    eax = eax >> 5;
    edx--;
    (void)0; /* cmp edx, 0xD - flags set for next jcc */
    esi = ecx;
    ecx = MEM32(esi);
    if (CMP_A(edx, 0xD)) { sub_005415E8(); return; } /* ja: above (unsigned >) */

loc_0054142D: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x541624)); return; /* indirect tail jmp */

    edi = MEM32(esi + 0x1C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    ecx = eax;
    ebp = ebp & 7;
    eax = eax & 0xFFFFFFF0u;
    edi = edi + ebp;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x1C0);
    edx = 0; /* xor self */
    ebx = edi;
    ebx = ebx - eax;
    ecx = ecx & 8;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = edx;
    if (CMP_G(ebx, edx)) goto loc_00541483; /* jg: greater (signed >) */

loc_00541467: ;
    if (CMP_EQ(ebp, edx)) goto loc_00541476; /* je: equal / zero */

loc_0054146B: ;
    edi = 1;
    edi = edi - ebx;
    MEM32(esp + 0x14) = edi;

loc_00541476: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    edi = eax;
    if (CMP_NE(ecx, edx)) goto loc_0054147F; /* jne: not equal / not zero */

loc_0054147C: ;
    edi = eax + 1;

loc_0054147F: ;
    ebx = edi;
    ebx = ebx - eax;

loc_00541483: ;
    eax = edi + ebp;
    MEM32(esi + 0x1C4) = eax;
    (void)0; /* cmp MEM32(esi + 0x1D4), edx - flags set for next jcc */
    MEM32(esi + 0x1C8) = edi;
    if (CMP_EQ(MEM32(esi + 0x1D4), edx)) goto loc_005414C0; /* je: equal / zero */

loc_0054149A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00540C90(); /* call 0x00540C90 */

loc_005414A1: ;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = ecx + MEM32(esi + 0x1D8);
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_005414C0; /* jns: not sign (positive) */

loc_005414B8: ;
    MEM32(esp + 0x10) = 0;

loc_005414C0: ;
    eax = MEM32(esi + 0x1CC);
    eax = eax & 1;
    ecx = eax + eax * 2 + 0x5D;
    MEM32(esi + ecx * 4) = 1;
    ecx = MEM32(esp + 0x18);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    MEM32(eax + 0x178) = edi;
    MEM32(eax + 0x17C) = ecx;
    MEM32(esi + 0x1CC) = MEM32(esi + 0x1CC) + 1;
    PUSH32(esp, 0); sub_00540EA0(); /* call 0x00540EA0 */

loc_005414F5: ;
    eax = MEM32(esi + 0x18C);
    if (TEST_Z(eax, eax)) goto loc_00541534; /* je: equal / zero */

loc_005414FF: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x1CC);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00541531: ;
    esp = esp + 4;

loc_00541534: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    PUSH32(esp, 0); sub_0053C630(); /* call 0x0053C630 */

loc_0054155D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    PUSH32(esp, 0); sub_0053C630(); /* call 0x0053C630 */

loc_00541578: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_005416D0
 * Original: 0x005416D0 - 0x00541718 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005416D0(void)
{

loc_005416D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x546650);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_005416DB: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_005416EB: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    esi = esi & 0xFF;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x546608);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00541710: ;
    esp = esp + 0x20;
    __debugbreak(); /* int3 */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00541718
 * Original: 0x00541718 - 0x00541796 (126 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541718(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00541718: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -8) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax + 0x1D0), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(eax + 0x1D0), ecx)) ? 1 : 0); /* sete */
    (void)0; /* cmp MEM32(eax + 0x1B8), 0 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(MEM32(eax + 0x1B8), 0)) goto loc_00541793; /* jne: not equal / not zero */

loc_0054173C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1B4);
    (void)0; /* test esi, 0x1000000 - flags set for next jcc */
    edx = 0xC0000000u;
    ecx = 0x80000000u;
    if (TEST_Z(esi, 0x1000000)) goto loc_0054176E; /* je: equal / zero */

loc_00541756: ;
    ebx = MEM32(eax + 8);
    ebx = ebx & edx;
    if (CMP_EQ(ebx, ecx)) goto loc_0054176E; /* je: equal / zero */

loc_0054175F: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054176E; /* je: equal / zero */

loc_00541765: ;
    eax = MEM32(eax + 4);
    eax = eax >> 1;
    edi = edi - eax;
    goto loc_00541788;

loc_0054176E: ;
    ebx = MEM32(eax + 8);
    ebx = ebx & edx;
    if (CMP_NE(ebx, ecx)) goto loc_00541788; /* jne: not equal / not zero */

loc_00541777: ;
    if (TEST_Z(esi, 0x200000)) goto loc_00541788; /* je: equal / zero */

loc_0054177F: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_00541788; /* je: equal / zero */

loc_00541785: ;
    edi = edi - MEM32(eax + 4);

loc_00541788: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    MEM32(eax + 0x600800) = edi;
    POP32(esp, ebx);

loc_00541793: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00541796
 * Original: 0x00541796 - 0x005417E9 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541796(void)
{
    int _flags = 0; /* fallback flag var */

loc_00541796: ;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0xFFFFFF00u;
    MEM8(ecx + 0x6813C8) = 0;
    eax = edx + 0x100;
    esi = esi - edx;

loc_005417AD: ;
    edx = esi + eax;
    if (TEST_NZ(LO8(edx), 7)) goto loc_005417BB; /* jne: not equal / not zero */

loc_005417B5: ;
    edx = MEM32(ecx + 0x3240);

loc_005417BB: ;
    SET_LO8(edx, MEM8(eax + -256));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x100));
    eax++;
    MEM8(ecx + 0x6813C9) = LO8(edx);
    edx = esi + eax;
    if (CMP_B(edx, 0x100)) goto loc_005417AD; /* jb: below (unsigned <) */

loc_005417E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005417E9
 * Original: 0x005417E9 - 0x00541808 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005417E9(void)
{
    int _flags = 0; /* fallback flag var */

loc_005417E9: ;
    eax = 0; /* xor self */
    if (CMP_NE(MEM32(0x5499EC), eax)) goto loc_00541802; /* jne: not equal / not zero */

loc_005417F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5499EC);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561158), _icall_esp); /* indirect call */
    }

loc_00541802: ;
    eax = MEM32(0x5499EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00541808
 * Original: 0x00541808 - 0x00541881 (121 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541808(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541808: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005417E9(); /* call 0x005417E9 */

loc_00541813: ;
    ecx = eax;
    ebx = 0xFF;
    edi = 0xFF00;
    eax = eax & ebx;
    ecx = ecx & edi;
    edx = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    esi = 0x5466B0;
    ebp = 0; /* xor self */

loc_00541830: ;
    eax = MEM32(esi);
    eax = eax & edi;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(eax, ecx)) goto loc_0054184B; /* je: equal / zero */

loc_0054183C: ;
    ebp = ebp + 0xC;
    edx++;
    esi = esi + 0xC;
    if (CMP_B(ebp, 0x8AC)) goto loc_00541830; /* jb: below (unsigned <) */

loc_0054184B: ;
    eax = 0xB9;
    if (CMP_AE(edx, eax)) goto loc_00541876; /* jae: above or equal (unsigned >=) */

loc_00541854: ;
    esi = edx + edx * 2;
    esi = esi * 4 + 0x5466B0;

loc_0054185E: ;
    ecx = MEM32(esi);
    ecx = ecx & ebx;
    MEM32(esp + 0x10) = esi;
    if ((ecx == 0)) goto loc_00541876; /* je: equal / zero */

loc_00541868: ;
    if (CMP_EQ(ecx, MEM32(esp + 0x14))) goto loc_00541876; /* je: equal / zero */

loc_0054186E: ;
    edx++;
    esi = esi + 0xC;
    if (CMP_B(edx, eax)) goto loc_0054185E; /* jb: below (unsigned <) */

loc_00541876: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00541881
 * Original: 0x00541881 - 0x00541AA3 (546 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541881(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00541881: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053F8D0(); /* call 0x0053F8D0 */

loc_00541891: ;
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0); sub_00541808(); /* call 0x00541808 */

loc_00541899: ;
    edi = eax;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_005417E9(); /* call 0x005417E9 */

loc_005418A3: ;
    ebx = MEM32(edi);
    edx = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    MEM32(ebp + -12) = eax;
    edi = 0xFF;
    eax = eax & edi;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    ecx = edx;
    ecx = ecx & 0x60;
    ebx = ebx & edi;
    eax = eax & 0xC00000;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) goto loc_005418D5; /* jns: not sign (positive) */

loc_005418CF: ;
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(ebp + -8) = ecx;

loc_005418D5: ;
    if (CMP_NE(MEM32(ebp + -16), 4)) goto loc_005418E7; /* jne: not equal / not zero */

loc_005418DB: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0xE0000;
    MEM32(ebp + -20) = ecx;

loc_005418E7: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0x32)) goto loc_0054199C; /* je: equal / zero */

loc_005418F1: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0x3C)) goto loc_00541952; /* jne: not equal / not zero */

loc_005418F7: ;
    if (TEST_Z(HI8(edx), 2)) goto loc_00541995; /* je: equal / zero */

loc_00541900: ;
    if (TEST_Z(eax, 0x800000)) goto loc_00541995; /* je: equal / zero */

loc_0054190B: ;
    eax = MEM32(esi);
    MEM32(esi + 0x824) = MEM32(esi + 0x824) & 0;
    edx = eax + 0x9410;
    MEM32(esi + 0x820) = 0xFE9156;
    ecx = MEM32(edx);
    ecx = MEM32(eax + 0x9400);
    edx = MEM32(edx);
    ecx = ecx + 0xFE9156;
    edx = edx + 0 + _cf; /* adc */
    PUSH32(esp, 1);
    eax = esi + 0x828;
    PUSH32(esp, edx);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00540B79(); /* call 0x00540B79 */

loc_0054194D: ;
    eax = 0x800000;

loc_00541952: ;
    ecx = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + -16), ecx)) goto loc_00541A90; /* jne: not equal / not zero */

loc_0054195D: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x7E4);
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + ecx * 4 + 0x7DC) = eax;
    ecx = MEM32(edx);
    MEM32(esi + 0x1B8) = eax;
    MEM32(esi + 0x1B4) = ecx;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_00541995: ;
    eax = 0x400000;
    goto loc_00541952;

loc_0054199C: ;
    if (TEST_Z(HI8(edx), 2)) goto loc_0054194D; /* je: equal / zero */

loc_005419A1: ;
    if (TEST_Z(eax, 0x400000)) goto loc_0054194D; /* je: equal / zero */

loc_005419A8: ;
    eax = MEM32(esi);
    MEM32(esi + 0x824) = MEM32(esi + 0x824) & 0;
    edx = eax + 0x9410;
    MEM32(esi + 0x820) = 0x1312D00;
    ecx = MEM32(edx);
    ecx = MEM32(eax + 0x9400);
    edx = MEM32(edx);
    ecx = ecx + 0x1312D00;
    edx = edx + 0 + _cf; /* adc */
    PUSH32(esp, 1);
    eax = esi + 0x828;
    PUSH32(esp, edx);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00540B79(); /* call 0x00540B79 */

loc_005419EA: ;
    goto loc_00541995;

loc_005419EC: ;
    if (CMP_NE(MEM32(ebp + -16), 4)) goto loc_00541A03; /* jne: not equal / not zero */

loc_005419F2: ;
    if (TEST_NZ(MEM32(ebp + -20), ecx)) goto loc_00541A03; /* jne: not equal / not zero */

loc_005419F7: ;
    if (TEST_NZ(ecx, 0xE0000)) goto loc_00541A8C; /* jne: not equal / not zero */

loc_00541A03: ;
    edx = MEM32(ebp + -4);
    edx = ZX16(MEM16(edx + 4));
    if (CMP_NE(edx, MEM32(ebp + 8))) goto loc_00541A8C; /* jne: not equal / not zero */

loc_00541A0F: ;
    edx = MEM32(ebp + -4);
    edx = ZX16(MEM16(edx + 6));
    if (CMP_NE(edx, MEM32(ebp + 0xC))) goto loc_00541A8C; /* jne: not equal / not zero */

loc_00541A1B: ;
    edx = MEM32(ebp + 0x14);
    ecx = ecx >> 0x10;
    edx = edx >> 4;
    ecx = ~ecx;
    edx = ~edx;
    ecx = ecx ^ edx;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00541A8C; /* jne: not equal / not zero */

loc_00541A2F: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    ecx = ecx >> 0x18;
    edx = edx >> 7;
    ecx = ~ecx;
    edx = ~edx;
    ecx = ecx ^ edx;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00541A8C; /* jne: not equal / not zero */

loc_00541A48: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    ecx = ecx >> 0x19;
    edx = edx >> 8;
    ecx = ~ecx;
    edx = ~edx;
    ecx = ecx ^ edx;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00541A8C; /* jne: not equal / not zero */

loc_00541A61: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    if (TEST_Z(eax, ecx)) goto loc_00541A8C; /* je: equal / zero */

loc_00541A6A: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) { sub_00541AA3(); return; } /* je: equal / zero */

loc_00541A70: ;
    if (TEST_Z(MEM8(ebp + -8), 0x20)) goto loc_00541A7E; /* je: equal / zero */

loc_00541A76: ;
    if (TEST_NZ(ecx, 0x200000)) { sub_00541AA3(); return; } /* jne: not equal / not zero */

loc_00541A7E: ;
    if (TEST_Z(MEM8(ebp + -8), 0x40)) goto loc_00541A8C; /* je: equal / zero */

loc_00541A84: ;
    if (TEST_Z(ecx, 0x200000)) { sub_00541AA3(); return; } /* je: equal / zero */

loc_00541A8C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;

loc_00541A90: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = ecx;
    edx = edx & edi;
    if (CMP_EQ(edx, ebx)) goto loc_005419EC; /* je: equal / zero */

loc_00541AA1: ;
    g_seh_ebp = ebp; sub_00541ADA(); return; /* tail jmp 0x00541ADA */

}

/**
 * sub_00541AF0
 * Original: 0x00541AF0 - 0x00541C4F (351 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541AF0(void)
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

loc_00541AF0: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp - 0x18;
    if (CMP_B(eax, ecx)) goto loc_00541B0B; /* jb: below (unsigned <) */

loc_00541AFC: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00541B0B: ;
    edx = MEM32(0x549BCC);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x549BE4);
    MEM32(esp) = edx;
    edx = MEM32(0x549BC8);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x549BD4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax;
    if (TEST_NZ(edx, edx)) goto loc_00541B7C; /* jne: not equal / not zero */

loc_00541B34: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00541B4F; /* jp: parity */

loc_00541B49: ;
    /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00541B4F: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00541B5E; /* jne: not equal / not zero */

loc_00541B59: ;
    /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */

loc_00541B5E: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x649244] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00541C0A; /* jne: not equal / not zero */

loc_00541B6F: ;
    /* fstp st(0) */
    fp_push(MEMF(0x649244)); /* fld float */
    goto loc_00541C0A;

loc_00541B7C: ;
    ecx = MEM32(0x549BD8);
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x549BDC);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x549BE0);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0xEEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00541BC0; /* jge: greater or equal (signed >=) */

loc_00541BBA: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00541BC0: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(eax) = 0x200A30;
    ecx = MEM32(esp);
    /* FPU: fdivr dword ptr [esp] */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = eax + 0x24;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_00541C0A: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(0x549BD0);
    MEM32(ecx) = 0x80318;
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00541C30: ;
    if (CMP_BE(eax, 0x1FF)) goto loc_00541C3C; /* jbe: below or equal (unsigned <=) */

loc_00541C37: ;
    eax = 0x1FF;

loc_00541C3C: ;
    MEM32(ecx + 0xC) = 0x4043C;
    MEM32(ecx + 0x10) = eax;
    ecx = ecx + 0x14;
    MEM32(esi) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00541C50
 * Original: 0x00541C50 - 0x00541DB1 (353 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541C50: ;
    eax = MEM32(edi + 0x784);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_00541DB1(); return; } /* jne: not equal / not zero */

loc_00541C5F: ;
    eax = MEM32(edi + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 1;
    if (((int32_t)(eax & eax) >= 0)) goto loc_00541C6F; /* jns: not sign (positive) */

loc_00541C6B: ;
    ecx = 0; /* xor self */
    goto loc_00541CAD;

loc_00541C6F: ;
    edx = MEM32(0x547460);
    if (CMP_NE(edx, 0x19)) goto loc_00541C81; /* jne: not equal / not zero */

loc_00541C7A: ;
    ecx = 6;
    goto loc_00541CAD;

loc_00541C81: ;
    if (CMP_NE(edx, 0x1A)) goto loc_00541C8D; /* jne: not equal / not zero */

loc_00541C86: ;
    ecx = 7;
    goto loc_00541CAD;

loc_00541C8D: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_00541C98; /* je: equal / zero */

loc_00541C91: ;
    ecx = 3;
    goto loc_00541CAD;

loc_00541C98: ;
    if (TEST_NZ(eax, 0x40000000)) goto loc_00541CA8; /* jne: not equal / not zero */

loc_00541C9F: ;
    eax = eax & 0xF0;
    if (CMP_NE(LO8(eax), 0x30)) goto loc_00541CAD; /* jne: not equal / not zero */

loc_00541CA8: ;
    ecx = 2;

loc_00541CAD: ;
    eax = ecx;
    ecx = MEM32(edi + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = 1;
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_00541CBF; /* jns: not sign (positive) */

loc_00541CBB: ;
    edx = 0; /* xor self */
    goto loc_00541D01;

loc_00541CBF: ;
    esi = MEM32(0x5473E0);
    if (CMP_NE(esi, 0x19)) goto loc_00541CD1; /* jne: not equal / not zero */

loc_00541CCA: ;
    edx = 6;
    goto loc_00541D01;

loc_00541CD1: ;
    if (CMP_NE(esi, 0x1A)) goto loc_00541CDD; /* jne: not equal / not zero */

loc_00541CD6: ;
    edx = 7;
    goto loc_00541D01;

loc_00541CDD: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00541CE9; /* je: equal / zero */

loc_00541CE2: ;
    edx = 3;
    goto loc_00541D01;

loc_00541CE9: ;
    if (TEST_NZ(ecx, 0x40000000)) goto loc_00541CFC; /* jne: not equal / not zero */

loc_00541CF1: ;
    ecx = ecx & 0xF0;
    if (CMP_NE(LO8(ecx), 0x30)) goto loc_00541D01; /* jne: not equal / not zero */

loc_00541CFC: ;
    edx = 2;

loc_00541D01: ;
    ecx = MEM32(edi + 0x10);
    eax = eax << 5;
    eax = eax | edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = 1;
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_00541D16; /* jns: not sign (positive) */

loc_00541D12: ;
    edx = 0; /* xor self */
    goto loc_00541D58;

loc_00541D16: ;
    esi = MEM32(0x547360);
    if (CMP_NE(esi, 0x19)) goto loc_00541D28; /* jne: not equal / not zero */

loc_00541D21: ;
    edx = 6;
    goto loc_00541D58;

loc_00541D28: ;
    if (CMP_NE(esi, 0x1A)) goto loc_00541D34; /* jne: not equal / not zero */

loc_00541D2D: ;
    edx = 7;
    goto loc_00541D58;

loc_00541D34: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00541D40; /* je: equal / zero */

loc_00541D39: ;
    edx = 3;
    goto loc_00541D58;

loc_00541D40: ;
    if (TEST_NZ(ecx, 0x40000000)) goto loc_00541D53; /* jne: not equal / not zero */

loc_00541D48: ;
    ecx = ecx & 0xF0;
    if (CMP_NE(LO8(ecx), 0x30)) goto loc_00541D58; /* jne: not equal / not zero */

loc_00541D53: ;
    edx = 2;

loc_00541D58: ;
    ecx = MEM32(edi + 0xC);
    eax = eax << 5;
    eax = eax | edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = 1;
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_00541D77; /* jns: not sign (positive) */

loc_00541D69: ;
    edx = 0; /* xor self */
    eax = eax << 5;
    eax = eax | edx;
    esi = eax;
    g_seh_ebp = ebp; sub_00541FA8(); return; /* tail jmp 0x00541FA8 */

loc_00541D77: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00541D8D; /* je: equal / zero */

loc_00541D7C: ;
    edx = 3;
    eax = eax << 5;
    eax = eax | edx;
    esi = eax;
    g_seh_ebp = ebp; sub_00541FA8(); return; /* tail jmp 0x00541FA8 */

loc_00541D8D: ;
    if (TEST_NZ(ecx, 0x40000000)) goto loc_00541DA0; /* jne: not equal / not zero */

loc_00541D95: ;
    ecx = ecx & 0xF0;
    if (CMP_NE(LO8(ecx), 0x30)) goto loc_00541DA5; /* jne: not equal / not zero */

loc_00541DA0: ;
    edx = 2;

loc_00541DA5: ;
    eax = eax << 5;
    eax = eax | edx;
    esi = eax;
    g_seh_ebp = ebp; sub_00541FA8(); return; /* tail jmp 0x00541FA8 */

}

/**
 * sub_00541FD0
 * Original: 0x00541FD0 - 0x00541FFD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541FD0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541FD0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 0x41B14;
    ebx = ebx + 0x774;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = ebx;
    esi = 0x547334;
    MEM32(esp + 0x20) = 4;
    g_seh_ebp = ebp; sub_00542000(); return; /* tail jmp 0x00542000 */

}

/**
 * sub_005421D0
 * Original: 0x005421D0 - 0x00542347 (375 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005421D0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_005421D0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_005421DB: ;
    eax = MEM32(0x549B68);
    if (TEST_Z(eax, eax)) { sub_00542347(); return; } /* je: equal / zero */

loc_005421E8: ;
    ecx = MEM32(0x549B70);
    eax = MEM32(0x549B6C);
    edx = MEM32(0x549B74);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(0x549B7C);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(edi, edi)) ? 1 : 0); /* sete */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x549B78);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    ebx++;
    if (TEST_NZ(eax, eax)) goto loc_00542238; /* jne: not equal / not zero */

loc_0054221F: ;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    edi = 0x2601;
    ebx = 0; /* xor self */
    goto loc_005422AA;

loc_00542238: ;
    if (CMP_NE(eax, 3)) goto loc_0054227D; /* jne: not equal / not zero */

loc_0054223D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0054225E; /* jnp: not parity */

loc_0054224E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fdivr dword ptr [0x648d14] */
    goto loc_00542264;

loc_0054225E: ;
    fp_push(MEMF(0x649610)); /* fld float */

loc_00542264: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = 0x2601;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    goto loc_005422A6;

loc_0054227D: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0xC) = 0x3FC00000;
    if (CMP_NE(eax, 1)) goto loc_0054229B; /* jne: not equal / not zero */

loc_0054228E: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = 0x800;
    goto loc_005422A6;

loc_0054229B: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = 0x801;

loc_005422A6: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */

loc_005422AA: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_005422C0; /* jb: below (unsigned <) */

loc_005422B1: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_005422C0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0x802A0;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x4029C;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = 0xC09C0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = 0;
    ecx = MEM32(esi + 0x784);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00542316; /* je: equal / zero */

loc_00542302: ;
    ecx = MEM32(esi + 0x788);
    if (TEST_Z(ecx, ecx)) goto loc_00542316; /* je: equal / zero */

loc_0054230C: ;
    eax = eax + 0x24;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00542316: ;
    ecx = MEM32(0x549B94);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x20000;
    ecx = ecx + 0x130C0300;
    MEM32(eax + 0x24) = 0x80288;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x1C80;
    eax = eax + 0x30;
    MEM32(esi) = eax;
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
 * sub_005423C0
 * Original: 0x005423C0 - 0x0054274A (906 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005423C0(void)
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

loc_005423C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x794);
    SET_LO8(edx, MEM8(eax + 4));
    esp = esp - 0xC;
    if (TEST_NZ(LO8(edx), 0x12)) goto loc_00542744; /* jne: not equal / not zero */

loc_005423D9: ;
    edx = MEM32(ecx + 0x1928);
    edx = edx & 0xFFFFFFEFu;
    if (CMP_EQ(edx, 1)) goto loc_00542744; /* je: equal / zero */

loc_005423EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0x3FF9B4;
    PUSH32(esp, esi);
    eax = eax - ecx;
    ebp = 0x40420;
    MEM32(esp + 0xC) = 0x5473A0;
    esi = ecx + 0xD0C;
    MEM32(esp + 0x10) = eax;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    /* nop */

loc_00542410: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + -28);
    eax = MEM32(ecx);
    if (CMP_B(eax, MEM32(ecx + 4))) goto loc_00542431; /* jb: below (unsigned <) */

loc_0054241E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0054242D: ;
    ecx = MEM32(esp + 0x20);

loc_00542431: ;
    if (CMP_NE(edi, ebx)) goto loc_00542444; /* jne: not equal / not zero */

loc_00542435: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(ecx) = eax;
    goto loc_00542720;

loc_00542444: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    edx = ecx;
    edx = edx & 0xFFFF0000u;
    MEM32(esp + 0x18) = edx;
    if ((edx == 0)) goto loc_0054245F; /* je: equal / zero */

loc_00542458: ;
    edx = 3;
    goto loc_00542484;

loc_0054245F: ;
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx + 0x794);
    edx = MEM32(edx + 0x10);
    ecx = ecx & 0xFFFF;
    ecx = ecx << 3;
    edx = edx >> LO8(ecx);
    edx = edx & 0xFF;
    if ((edx != 0)) goto loc_00542484; /* jne: not equal / not zero */

loc_0054247F: ;
    edx = 2;

loc_00542484: ;
    ecx = edi;
    ecx = ecx & 0xFF;
    edx = edx << 4;
    edx = edx | ecx;
    ecx = MEM32(esp + 0x14);
    edi = edi >> 8;
    edx = edx << 4;
    edi = edi & 1;
    ecx = ecx + esi;
    MEM32(eax) = ebp;
    edx = edx | edi;
    (void)0; /* cmp edx, 0x320 - flags set for next jcc */
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    ecx = eax + 0x4C;
    if (CMP_A(edx, 0x320)) goto loc_00542633; /* ja: above (unsigned >) */

loc_005424BD: ;
    if (CMP_EQ(edx, 0x320)) goto loc_005425F2; /* je: equal / zero */

loc_005424C3: ;
    edx = ZX8(MEM8(edx + 0x542540));
    { uint32_t _jt = MEM32(edx * 4 + 0x54274C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x005424D1u) goto loc_005424D1;
    if (_jt == 0x0054250Cu) goto loc_0054250C;
    if (_jt == 0x0054254Au) goto loc_0054254A;
    if (_jt == 0x0054259Au) goto loc_0054259A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005424D1: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    goto loc_00542708;

loc_0054250C: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x34) = ebx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00542702;

loc_0054254A: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    edx = MEM32(esi + -36);
    MEMF(eax + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x44) = ebx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00542718;

loc_0054259A: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x34) = ebx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -32);
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -16)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x44) = ebx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00542718;

loc_005425F2: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -12)); /* fld float */
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    goto loc_00542708;

loc_00542633: ;
    edx = edx - 0x330;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi + -12)); /* fld float */
    fp_push(MEMF(esi + -28)); /* fld float */
    if ((edx == 0)) goto loc_005426C9; /* je: equal / zero */

loc_00542648: ;
    edx--;
    edx = MEM32(esi + -44);
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx == 0)) goto loc_005426A3; /* je: equal / zero */

loc_00542672: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -32);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -16)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00542718;

loc_005426A3: ;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00542718;

loc_005426C9: ;
    edx = MEM32(esi + -44);
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */

loc_00542702: ;
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */

loc_00542708: ;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM32(eax + 0x44) = ebx;
    MEM32(eax + 0x48) = 0x3F800000;

loc_00542718: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ecx = eax;

loc_00542720: ;
    edi = MEM32(esp + 0x10);
    ebp = ebp + 4;
    edi = edi + 0x80;
    esi = esi + 0x40;
    (void)0; /* cmp ebp, 0x40430 - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_B(ebp, 0x40430)) goto loc_00542410; /* jb: below (unsigned <) */

loc_00542740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00542744: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00542790
 * Original: 0x00542790 - 0x00542828 (152 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00542790: ;
    ecx = MEM32(0x549B9C);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00542827; /* je: equal / zero */

loc_005427A0: ;
    eax = MEM32(0x549BA0);
    ecx = MEM32(0x549BA4);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x549BA8);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x549BAC);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x549BB0);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x549BB4);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x549BB8);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x549BBC);
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(0x5499E8);
    ecx = MEM32(ecx + 0x794);
    ecx = MEM32(ecx + 4);
    if (TEST_NZ(HI8(ecx), 4)) goto loc_00542809; /* jne: not equal / not zero */

loc_00542806: ;
    eax = eax & 0xFFFFFFAAu;

loc_00542809: ;
    if (TEST_NZ(HI8(ecx), 8)) goto loc_00542813; /* jne: not equal / not zero */

loc_0054280E: ;
    eax = eax & 0xFFFFFF55u;

loc_00542813: ;
    if (TEST_NZ(HI8(ecx), 0x10)) goto loc_0054281D; /* jne: not equal / not zero */

loc_00542818: ;
    eax = eax & 0xFFFFAAFFu;

loc_0054281D: ;
    if (TEST_NZ(HI8(ecx), 0x20)) goto loc_00542827; /* jne: not equal / not zero */

loc_00542822: ;
    eax = eax & 0xFFFF55FFu;

loc_00542827: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00542830
 * Original: 0x00542830 - 0x00542877 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542830(void)
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

loc_00542830: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x549C2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebp = ebp + 0x4820;
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    ebp = ebp << 7;
    esi = edi + 0xF00;
    MEM32(eax) = ebp;
    if (TEST_NZ(LO8(edx), 0xC)) { sub_00542877(); return; } /* jne: not equal / not zero */

loc_0054285A: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_00542889(); return; /* tail jmp 0x00542889 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00542920
 * Original: 0x00542920 - 0x005429EA (202 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542920(void)
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

loc_00542920: ;
    esp = esp - 0x18;
    ecx = MEM32(0x549C2C);
    edx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x549BC4);
    edx = edx + 0xF00;
    esi = 0xC0A10;
    edi = 0xC03A8;
    ebp = 0x403B4;
    ebx = ecx;
    ebx = ebx >> 0x10;
    ebx = ebx & 0xFF;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_0054296F; /* jge: greater or equal (signed >=) */

loc_00542969: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0054296F: ;
    ebx = ecx;
    ebx = ebx >> 8;
    ebx = ebx & 0xFF;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_00542992; /* jge: greater or equal (signed >=) */

loc_0054298C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00542992: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_005429B4; /* jge: greater or equal (signed >=) */

loc_005429AE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_005429B4: ;
    ebx = MEM32(esp + 0x2C);
    (void)0; /* test LO8(ebx), 0xC - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(ebx), 0xC)) { sub_005429EA(); return; } /* je: equal / zero */

loc_005429C7: ;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    fp_push(MEMF(edx + 0x34)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 0x38);
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_00542A4D(); return; /* tail jmp 0x00542A4D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00542AD0
 * Original: 0x00542AD0 - 0x00542BEE (286 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542AD0(void)
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

loc_00542AD0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    ebp = MEM32(0x549C2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0xF40);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    esi = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    MEM32(edi) = 0x1809E0;
    PUSH32(esp, 0); sub_0053E110(); /* call 0x0053E110 */

loc_00542B05: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    esi = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053E110(); /* call 0x0053E110 */

loc_00542B20: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = MEM32(esp + 0x20);
    MEM32(edi + 8) = eax;
    MEM32(edi + 0x10) = ecx;
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi + 0x14) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edi = edi + 0x1C;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(ebp, ebp)) goto loc_00542BE4; /* je: equal / zero */

loc_00542B65: ;
    eax = MEM32(ebx + 0xF84);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    esi = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    MEM32(edi) = 0x181E28;
    PUSH32(esp, 0); sub_0053E110(); /* call 0x0053E110 */

loc_00542B85: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    esi = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053E110(); /* call 0x0053E110 */

loc_00542BA0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = MEM32(esp + 0x20);
    MEM32(edi + 8) = eax;
    edi = edi + 0x1C;
    ebp--;
    MEMF(edi + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(edi + -12) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(edi + -8) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebp != 0)) goto loc_00542B65; /* jne: not equal / not zero */

loc_00542BE4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00542BF0
 * Original: 0x00542BF0 - 0x00542F54 (868 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542BF0(void)
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

loc_00542BF0: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    eax = MEM32(ebp);
    (void)0; /* cmp eax, MEM32(ebp + 4) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(eax, MEM32(ebp + 4))) goto loc_00542C12; /* jb: below (unsigned <) */

loc_00542C03: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00542C12: ;
    ecx = MEM32(esp + 0x44);
    (void)0; /* test HI8(ecx), 0x10 - flags set for next jcc */
    esi = eax;
    if (TEST_Z(HI8(ecx), 0x10)) goto loc_00542CEC; /* je: equal / zero */

loc_00542C21: ;
    ecx = MEM32(0x549B94);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = 1;
    if (TEST_NZ(ecx, ecx)) goto loc_00542C3A; /* jne: not equal / not zero */

loc_00542C30: ;
    if (TEST_NZ(MEM8(ebp + 8), 0x40)) goto loc_00542C3A; /* jne: not equal / not zero */

loc_00542C36: ;
    ecx = 0; /* xor self */
    goto loc_00542C3C;

loc_00542C3A: ;
    ecx = ebx;

loc_00542C3C: ;
    edx = MEM32(ebp + 0x794);
    if (TEST_NZ(MEM8(edx + 4), 0x12)) goto loc_00542CC4; /* jne: not equal / not zero */

loc_00542C48: ;
    edx = MEM32(0x549B90);
    if (TEST_Z(edx, edx)) goto loc_00542CC4; /* je: equal / zero */

loc_00542C52: ;
    edx = MEM32(ebp + 0x1928);
    edx = edx & 0xFFFFFFEFu;
    if (CMP_EQ(edx, ebx)) goto loc_00542CC4; /* je: equal / zero */

loc_00542C5F: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = ebx;
    if (TEST_Z(ecx, ecx)) goto loc_00542C85; /* je: equal / zero */

loc_00542C65: ;
    ecx = MEM32(0x549B98);
    if (TEST_Z(ecx, ecx)) goto loc_00542C7E; /* je: equal / zero */

loc_00542C6F: ;
    ecx = MEM32(ebp + 0x7CC);
    if (TEST_Z(ecx, ecx)) goto loc_00542C7E; /* je: equal / zero */

loc_00542C79: ;
    edi = 0x10001;

loc_00542C7E: ;
    PUSH32(esp, 0); sub_00542AD0(); /* call 0x00542AD0 */

loc_00542C83: ;
    esi = eax;

loc_00542C85: ;
    MEM32(esi) = 0x40294;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0x40314;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = 0x403B8;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0); sub_00542790(); /* call 0x00542790 */

loc_00542CA7: ;
    MEM32(ebp + 0x7D0) = eax;
    MEM32(esi + 0x18) = 0x40298;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, 0); sub_00542920(); /* call 0x00542920 */

loc_00542CC0: ;
    esi = eax;
    goto loc_00542CEC;

loc_00542CC4: ;
    MEM32(eax) = 0x40314;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x403B8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x40294;
    MEM32(eax + 0x14) = 0x20001;
    esi = eax + 0x18;

loc_00542CEC: ;
    edx = MEM32(esp + 0x44);
    if (TEST_Z(edx, 0xFF8000)) goto loc_00542F47; /* je: equal / zero */

loc_00542CFC: ;
    eax = MEM32(ebp + 0x7D0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x7CC);
    MEM32(esi) = 0x403BC;
    MEM32(esi + 4) = eax;
    esi = esi + 8;
    ecx = 0; /* xor self */
    eax = ebp + 0x7AC;
    MEM32(esp + 0x40) = ecx;
    ebx = 0x41024;
    MEM32(esp + 0x10) = eax;
    goto loc_00542D33;

loc_00542D2F: ;
    edx = MEM32(esp + 0x44);

loc_00542D33: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_00542F21; /* je: equal / zero */

loc_00542D41: ;
    eax = 0x10000;
    eax = eax << LO8(ecx);
    if (TEST_NZ(edx, eax)) goto loc_00542D84; /* jne: not equal / not zero */

loc_00542D4C: ;
    if (((int32_t)(HI8(edx) & HI8(edx)) >= 0)) goto loc_00542F21; /* jns: not sign (positive) */

loc_00542D54: ;
    (void)0; /* cmp esi, MEM32(ebp + 4) - flags set for next jcc */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(esi, MEM32(ebp + 4))) goto loc_00542D6D; /* jb: below (unsigned <) */

loc_00542D5E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00542D6D: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0); sub_00542830(); /* call 0x00542830 */

loc_00542D7D: ;
    esi = eax;
    goto loc_00542F21;

loc_00542D84: ;
    (void)0; /* cmp esi, MEM32(ebp + 4) - flags set for next jcc */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(esi, MEM32(ebp + 4))) goto loc_00542D9D; /* jb: below (unsigned <) */

loc_00542D8E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00542D9D: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0); sub_00542830(); /* call 0x00542830 */

loc_00542DAD: ;
    esi = eax;
    if (CMP_NE(MEM32(edi), 3)) goto loc_00542E43; /* jne: not equal / not zero */

loc_00542DB8: ;
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = edi + 0x6C;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053DA80(); /* call 0x0053DA80 */

loc_00542DCF: ;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_0053DA40(); /* call 0x0053DA40 */

loc_00542DD8: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x24;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_0053DA40(); /* call 0x0053DA40 */

loc_00542DFF: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = 0x7149F2CA;
    ecx = ebx + 0x140004;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x20) = ecx;
    esi = esi + 0x24;
    goto loc_00542F21;

loc_00542E43: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    edx = ebp + 0xC60;
    PUSH32(esp, edx);
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3F800000);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esi) = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053DA80(); /* call 0x0053DA80 */

loc_00542E65: ;
    eax = ebx + 0x140038;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(esp + 0x38);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edi + 0x54);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 0x58);
    MEM32(esi + 0x1C) = ecx;
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi);
    esi = esi + 0x24;
    if (CMP_NE(eax, 2)) goto loc_00542F21; /* jne: not equal / not zero */

loc_00542EA3: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053DA80(); /* call 0x0053DA80 */

loc_00542EB4: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D9E0(); /* call 0x0053D9E0 */

loc_00542ED9: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = ebx + 0x18001C;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x78);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0x7C);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0x80);
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 0x20;
    MEMF(esi + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(edi + 0x88);
    MEM32(esi + -4) = ecx;

loc_00542F21: ;
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x10);
    ecx++;
    edi = edi + 4;
    ebx = ebx + 0x80;
    (void)0; /* cmp ebx, 0x41424 - flags set for next jcc */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_B(ebx, 0x41424)) goto loc_00542D2F; /* jb: below (unsigned <) */

loc_00542F47: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00542F60
 * Original: 0x00542F60 - 0x00543165 (517 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00542F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_S(eax, eax)) goto loc_0054315C; /* js: sign (negative) */

loc_00542F77: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x794);
    if (TEST_NZ(MEM8(eax + 4), 0x12)) goto loc_0054315C; /* jne: not equal / not zero */

loc_00542F8A: ;
    ecx = MEM32(esi + 0x1928);
    ecx = ecx & 0xFFFFFFEFu;
    if (CMP_EQ(ecx, 1)) goto loc_0054315C; /* je: equal / zero */

loc_00542F9C: ;
    ebx = MEM32(esi);
    if (CMP_B(ebx, MEM32(esi + 4))) goto loc_00542FB4; /* jb: below (unsigned <) */

loc_00542FA3: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00542FB2: ;
    ebx = eax;

loc_00542FB4: ;
    eax = esi + 0xC60;
    PUSH32(esp, eax);
    eax = esi + 0xDE0;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053DAE0(); /* call 0x0053DAE0 */

loc_00542FCC: ;
    ecx = esp + 0x20;
    edx = 0x400480;
    eax = ebx;
    PUSH32(esp, 0); sub_0053C6B0(); /* call 0x0053C6B0 */

loc_00542FDC: ;
    eax = MEM32(esi + 0x950);
    ebx = ebx + 0x44;
    if (TEST_NZ(eax, eax)) goto loc_00542FF2; /* jne: not equal / not zero */

loc_00542FE9: ;
    eax = MEM32(0x549B90);
    if (TEST_Z(eax, eax)) goto loc_00543027; /* je: equal / zero */

loc_00542FF2: ;
    esi = MEM32(0x549C30);
    edx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    eax = esp + 0x20;
    PUSH32(esp, edx);
    edx = esp + 0x64;
    PUSH32(esp, 0); sub_0053DBE0(); /* call 0x0053DBE0 */

loc_0054300D: ;
    edi = ebx + 4;
    ecx = 0xC;
    esi = esp + 0x60;
    MEM32(ebx) = 0x300580;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    ebx = ebx + 0x34;

loc_00543027: ;
    eax = MEM32(0x549C1C);
    if (TEST_NZ(eax, eax)) goto loc_00543065; /* jne: not equal / not zero */

loc_00543030: ;
    eax = esi + 0x980;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0xE8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053DAE0(); /* call 0x0053DAE0 */

loc_00543049: ;
    ecx = edx;
    edx = 0x400680;
    eax = ebx;
    PUSH32(esp, 0); sub_0053C6B0(); /* call 0x0053C6B0 */

loc_00543057: ;
    ebx = ebx + 0x44;
    MEM32(esi) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00543065: ;
    ecx = esi + 0x980;
    edx = 0x400680;
    eax = ebx;
    PUSH32(esp, 0); sub_0053C6B0(); /* call 0x0053C6B0 */

loc_00543077: ;
    ecx = MEM32(esi + 4);
    eax = ebx + 0x44;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_B(eax, ecx)) goto loc_00543092; /* jb: below (unsigned <) */

loc_00543083: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00543092: ;
    ebx = eax;
    eax = eax + 4;
    edi = 0x4004C0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edi;
    goto loc_005430B0;

    /* nop */
    /* nop */

loc_005430B0: ;
    eax = esi + 0xC60;
    PUSH32(esp, eax);
    edx = esi + edi + -4191904;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053DAE0(); /* call 0x0053DAE0 */

loc_005430CC: ;
    ecx = esp + 0xA0;
    edx = edi;
    eax = ebx;
    PUSH32(esp, 0); sub_0053C6B0(); /* call 0x0053C6B0 */

loc_005430DC: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x950);
    ecx = ecx + 0x44;
    ebx = ebx + 0x44;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_005430FD; /* jne: not equal / not zero */

loc_005430F4: ;
    eax = MEM32(0x549B90);
    if (TEST_Z(eax, eax)) goto loc_00543147; /* je: equal / zero */

loc_005430FD: ;
    esi = MEM32(0x549C30);
    ecx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    eax = esp + 0xA0;
    edx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053DBE0(); /* call 0x0053DBE0 */

loc_0054311B: ;
    eax = MEM32(esp + 0x18);
    edi = edi + 0xFFF00100u;
    MEM32(ebx) = edi;
    edi = MEM32(esp + 0x18);
    ecx = 0xC;
    esi = esp + 0x60;
    ebx = ebx + 0x34;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    edi = MEM32(esp + 0x1C);
    eax = eax + 0x34;
    MEM32(esp + 0x18) = eax;

loc_00543147: ;
    edi = edi + 0x40;
    (void)0; /* cmp edi, 0x400580 - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(edi, 0x400580)) goto loc_005430B0; /* jb: below (unsigned <) */

loc_0054315A: ;
    MEM32(esi) = ebx;

loc_0054315C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00543170
 * Original: 0x00543170 - 0x005431F2 (130 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543170(void)
{
    int _flags = 0; /* fallback flag var */

loc_00543170: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499F0);
    (void)0; /* test HI8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    if (TEST_Z(HI8(ebx), 1)) goto loc_00543188; /* je: equal / zero */

loc_00543183: ;
    PUSH32(esp, 0); sub_00541AF0(); /* call 0x00541AF0 */

loc_00543188: ;
    if (TEST_Z(HI8(ebx), 8)) goto loc_00543196; /* je: equal / zero */

loc_0054318D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00545670(); /* call 0x00545670 */

loc_00543194: ;
    ebx = eax;

loc_00543196: ;
    if (TEST_Z(HI8(ebx), 0x40)) goto loc_005431A4; /* je: equal / zero */

loc_0054319B: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_00541C50(); /* call 0x00541C50 */

loc_005431A3: ;
    POP32(esp, edi);

loc_005431A4: ;
    if (TEST_Z(LO8(ebx), 0xF)) goto loc_005431B0; /* je: equal / zero */

loc_005431A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00541FD0(); /* call 0x00541FD0 */

loc_005431B0: ;
    if (TEST_Z(HI8(ebx), 0x20)) goto loc_005431BC; /* je: equal / zero */

loc_005431B5: ;
    eax = esi;
    PUSH32(esp, 0); sub_005421D0(); /* call 0x005421D0 */

loc_005431BC: ;
    if (TEST_Z(HI8(ebx), 4)) goto loc_005431C7; /* je: equal / zero */

loc_005431C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005423C0(); /* call 0x005423C0 */

loc_005431C7: ;
    if (TEST_Z(ebx, 0xFF1000)) goto loc_005431D6; /* je: equal / zero */

loc_005431CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00542BF0(); /* call 0x00542BF0 */

loc_005431D6: ;
    if (TEST_Z(HI8(ebx), 2)) goto loc_005431E3; /* je: equal / zero */

loc_005431DB: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00542F60(); /* call 0x00542F60 */

loc_005431E3: ;
    ebx = ebx & 0xC0000070u;
    POP32(esp, esi);
    MEM32(0x5499F0) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00543200
 * Original: 0x00543200 - 0x005433A1 (417 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00543200: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499F0);
    eax = ebx;
    eax = eax & 0xFFFFFFAFu;
    (void)0; /* test ebx, 0x3FFFFF8F - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(0x5499F0) = eax;
    if (TEST_Z(ebx, 0x3FFFFF8F)) goto loc_00543226; /* je: equal / zero */

loc_00543221: ;
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_00543226: ;
    if (TEST_NZ(ebx, 0x40000000)) goto loc_00543399; /* jne: not equal / not zero */

loc_00543232: ;
    if (TEST_NZ(LO8(ebx), 0x40)) goto loc_00543244; /* jne: not equal / not zero */

loc_00543237: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(MEM32(ecx + 0x20), edi)) goto loc_00543399; /* je: equal / zero */

loc_00543244: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x794);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    MEM32(ecx + 0x20) = edi;
    ebp = MEM32(eax + 4);
    ebp = ebp & 0x10;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    ebp = ebp + 0x74F444;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_B(eax, edx)) goto loc_0054327B; /* jb: below (unsigned <) */

loc_0054326C: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0054327B: ;
    (void)0; /* test LO8(ebx), 0x10 - flags set for next jcc */
    ecx = eax;
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_005432BE; /* je: equal / zero */

loc_00543282: ;
    MEM32(eax) = 0x401760;
    ecx = eax + 4;
    edx = 0; /* xor self */
    /* nop */

loc_00543290: ;
    eax = ZX8(MEM8(edx + ebp));
    esi = MEM32(esp + 0x10);
    eax = eax << 4;
    ebx = MEM32(eax + esi + 0x1C);
    eax = eax + esi;
    esi = MEM32(eax + 0x14);
    esi = esi + esi * 2;
    esi = MEM32(esi * 4 + 0x547158);
    esi = esi << 8;
    esi = esi + ebx;
    MEM32(ecx) = esi;
    ecx = ecx + 4;
    edx++;
    if (CMP_B(edx, 0x10)) goto loc_00543290; /* jb: below (unsigned <) */

loc_005432BE: ;
    ebx = 0; /* xor self */
    if (CMP_NE(edi, ebx)) goto loc_00543328; /* jne: not equal / not zero */

loc_005432C4: ;
    edi = 0x41720;
    /* nop */

loc_005432D0: ;
    eax = ZX8(MEM8(ebx + ebp));
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    edx = edx + eax;
    if (CMP_EQ(MEM32(edx + 0x1C), 2)) goto loc_0054330C; /* je: equal / zero */

loc_005432E3: ;
    eax = MEM32(edx + 0x14);
    esi = eax + eax * 2;
    eax = MEM32(esi * 4 + 0x547160);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = esi * 4 + 0x547158;
    if (TEST_Z(eax, eax)) goto loc_0054330C; /* je: equal / zero */

loc_005432FB: ;
    eax = MEM32(eax + 4);
    eax = eax + MEM32(edx + 0x18);
    eax = eax + MEM32(esi + 4);
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = eax;
    ecx = ecx + 8;

loc_0054330C: ;
    edi = edi + 4;
    ebx++;
    if (CMP_B(edi, 0x41760)) goto loc_005432D0; /* jb: below (unsigned <) */

loc_00543318: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_00543328: ;
    MEM32(esp + 0x14) = ebx;
    ebx = 0x41720;

loc_00543331: ;
    eax = MEM32(esp + 0x14);
    eax = ZX8(MEM8(eax + ebp));
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    esi = eax + edx;
    if (CMP_EQ(MEM32(esi + 0x1C), 2)) goto loc_0054337D; /* je: equal / zero */

loc_00543349: ;
    eax = MEM32(esi + 0x14);
    edx = eax + eax * 2;
    edi = MEM32(edx * 4 + 0x547160);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = edx * 4 + 0x547158;
    if (TEST_Z(edi, edi)) goto loc_0054337D; /* je: equal / zero */

loc_00543361: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x20));
    eax = eax + MEM32(edi + 4);
    edi = MEM32(esi + 0x18);
    esi = MEM32(edx + 4);
    eax = eax + edi;
    eax = eax + esi;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = ecx + 8;

loc_0054337D: ;
    esi = MEM32(esp + 0x14);
    esi++;
    ebx = ebx + 4;
    (void)0; /* cmp ebx, 0x41760 - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_B(ebx, 0x41760)) goto loc_00543331; /* jb: below (unsigned <) */

loc_00543391: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);

loc_00543399: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005433B0
 * Original: 0x005433B0 - 0x005434FC (332 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005433B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005433B0: ;
    eax = MEM32(0x5499F0);
    esp = esp - 0x14;
    if (TEST_Z(eax, 0x3FFFFF8F)) goto loc_005433C9; /* je: equal / zero */

loc_005433BF: ;
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_005433C4: ;
    eax = MEM32(0x5499F0);

loc_005433C9: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_005434F8; /* je: equal / zero */

loc_005433D1: ;
    ecx = MEM32(esi + 4);
    eax = eax & 0xFFFFFFDFu;
    eax = eax | 0x50;
    PUSH32(esp, ebx);
    MEM32(0x5499F0) = eax;
    eax = MEM32(esi + 0x794);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebx = ebx & 0x10;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = ebx + 0x74F444;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_B(eax, ecx)) goto loc_00543417; /* jb: below (unsigned <) */

loc_00543408: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00543417: ;
    MEM32(eax) = 0x401760;
    ebp = eax + 4;
    MEM32(esp + 0xC) = 0;
    goto loc_00543430;

    /* nop */

loc_00543430: ;
    edx = MEM32(esp + 0xC);
    eax = ZX8(MEM8(edx + ebx));
    ecx = MEM32(esp + 0x18);
    eax = eax << 4;
    edx = eax + ecx;
    ecx = MEM32(edx + 0x1C);
    MEM32(ebp) = ecx;
    ebp = ebp + 4;
    if (CMP_EQ(ecx, 2)) goto loc_005434BB; /* je: equal / zero */

loc_00543450: ;
    edx = MEM32(edx + 0x18);
    eax = ecx;
    eax = eax >> 4;
    eax = eax & 0xF;
    eax = ZX8(MEM8(eax + 0x545C60));
    ecx = ecx & 0xF;
    ecx = ZX8(MEM8(ecx + 0x545C58));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + 3;
    eax = eax >> 2;
    if (TEST_NZ(edi, edi)) goto loc_0054348A; /* jne: not equal / not zero */

loc_00543479: ;
    MEM32(esp + 0x1C) = edx;
    MEM32(esi + 0xBD4) = eax;
    edi = 1;
    goto loc_005434AA;

loc_0054348A: ;
    ecx = edx;
    ecx = ecx - MEM32(esp + 0x14);
    if ((ecx != 0)) goto loc_0054349B; /* jne: not equal / not zero */

loc_00543492: ;
    MEM32(esi + edi * 8 + 0xBCC) = MEM32(esi + edi * 8 + 0xBCC) + eax;
    goto loc_005434AA;

loc_0054349B: ;
    MEM32(esi + edi * 8 + 0xBD0) = ecx;
    MEM32(esi + edi * 8 + 0xBD4) = eax;
    edi++;

loc_005434AA: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + eax;
    edx = edx + eax * 4;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;

loc_005434BB: ;
    eax = MEM32(esp + 0xC);
    eax++;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, 0x10)) goto loc_00543430; /* jb: below (unsigned <) */

loc_005434CD: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0xBC8) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0xC54) = edi;
    POP32(esp, edi);
    MEM32(esi) = ebp;
    MEM32(esi + 0xBCC) = eax;
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(esi + 0xBD0) = eax;
    POP32(esp, ebx);

loc_005434F8: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00543500
 * Original: 0x00543500 - 0x00543541 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543500(void)
{

loc_00543500: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_00543523: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = 0x50001;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0x14) = 0;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00543550
 * Original: 0x00543550 - 0x005438FF (943 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00543550: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5499E8);
    eax = MEM32(edi + 0x8D8);
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x40000000;
    MEM32(esp + 0x20) = 0x40800000;
    MEM32(esp + 0x24) = 0x41000000;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00543687; /* je: equal / zero */

loc_0054358B: ;
    esi = MEM32(0x54A8C4);
    eax = MEM32(edi + 0x8DC);
    ecx = MEM32(0x54A908);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x54A900);
    esi = esi + 0x1FF;
    esi = esi & 0xFFFFFE00u;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x54A8CC);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561024), _icall_esp); /* indirect call */
    }

loc_005435C1: ;
    ebx = MEM32(edi + 0x8DC);
    ebx = ebx + 0x18;
    if (CMP_GE(eax, ebp)) goto loc_005435D2; /* jge: greater or equal (signed >=) */

loc_005435CE: ;
    MEM32(ebx) = ebp;
    goto loc_00543626;

loc_005435D2: ;
    edx = MEM32(0x54A908);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042E367(); /* call 0x0042E367 */

loc_005435E3: ;
    if (CMP_NE(eax, 0x102)) goto loc_005435FF; /* jne: not equal / not zero */

loc_005435EA: ;
    PUSH32(esp, 0x547018);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_005435F4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_005435FF: ;
    eax = MEM32(0x54A900);
    edx = MEM32(0x54A904);
    eax = eax + esi;
    MEM32(0x54A900) = eax;
    eax = MEM32(0x54A8E8);
    edx = edx + ebp + _cf; /* adc */
    eax--;
    MEM32(0x54A904) = edx;
    MEM32(0x54A8E8) = eax;
    MEM32(ebx) = eax;

loc_00543626: ;
    if (CMP_NE(MEM32(edi + 0x8D4), ebp)) goto loc_005438F7; /* jne: not equal / not zero */

loc_00543632: ;
    MEM32(edi + 0x8D4) = 0x26000000;
    esi = 0; /* xor self */
    ebx = 0xFFFFFFEFu;

loc_00543643: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_0054364A: ;
    eax = esi;
    esi++;
    if (CMP_B(eax, 0x2710)) goto loc_00543673; /* jb: below (unsigned <) */

loc_00543654: ;
    ecx = MEM32(edi + 0x8D8);
    eax = MEM32(0x54A8E8);
    ecx = ecx & ebx;
    eax--;
    MEM32(edi + 0x8D4) = ebp;
    MEM32(edi + 0x8D8) = ecx;
    MEM32(0x54A8E8) = eax;

loc_00543673: ;
    if (CMP_EQ(MEM32(edi + 0x8D4), 0x26000000)) goto loc_00543643; /* je: equal / zero */

loc_0054367F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00543687: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_005438F7; /* je: equal / zero */

loc_0054368F: ;
    ecx = MEM32(0x54A8E0);
    ecx = ecx | MEM32(0x54A8E4);
    if ((ecx == 0)) goto loc_005436EC; /* je: equal / zero */

loc_0054369D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_005436A7: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x54A8E0);
    esi = MEM32(esp + 0x14);
    ebp = MEM32(0x54A8E4);
    ebx = MEM32(0x54A8F4);
    ecx = edx;
    ecx = ecx - eax;
    eax = esi;
    eax = eax - ebp - _cf; /* sbb */
    if (CMP_L(eax, ebx)) goto loc_005438F7; /* jl: less (signed <) */

loc_005436D0: ;
    if (CMP_G(eax, ebx)) goto loc_005436DE; /* jg: greater (signed >) */

loc_005436D2: ;
    if (CMP_B(ecx, MEM32(0x54A8F0))) goto loc_005438F7; /* jb: below (unsigned <) */

loc_005436DE: ;
    MEM32(0x54A8E0) = edx;
    MEM32(0x54A8E4) = esi;
    goto loc_005436F6;

loc_005436EC: ;
    PUSH32(esp, 0x54A8E0);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_005436F6: ;
    ecx = MEM32(0x54A90C);
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_00543732; /* jns: not sign (positive) */

loc_00543700: ;
    eax = MEM32(0x54A908);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E367(); /* call 0x0042E367 */

loc_00543710: ;
    if (CMP_NE(eax, 0x102)) goto loc_0054372C; /* jne: not equal / not zero */

loc_00543717: ;
    PUSH32(esp, 0x546FF8);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00543721: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0054372C: ;
    ecx = MEM32(0x54A90C);

loc_00543732: ;
    edx = MEM32(0x5499E8);
    ebx = MEM32(edx + 0x1A18);
    eax = MEM32(ebx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00543760; /* jne: not equal / not zero */

loc_00543747: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00543760; /* jne: not equal / not zero */

loc_00543753: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00543760; /* je: equal / zero */

loc_0054375A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00543760: ;
    ebp = MEM32(ebx);
    esi = MEM32(ebx + 0x10);
    ebp++;
    MEM32(ebx) = ebp;
    ebp = ecx;
    ecx = ecx & 4;
    ebp = ebp & 3;
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = ecx;
    if (TEST_NZ(esi, esi)) goto loc_00543787; /* jne: not equal / not zero */

loc_00543776: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    eax = eax << LO8(ecx);
    goto loc_00543792;

loc_00543787: ;
    eax = esi;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;

loc_00543792: ;
    if (TEST_NZ(esi, esi)) goto loc_005437A8; /* jne: not equal / not zero */

loc_00543796: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    esi = 1;
    esi = esi << LO8(ecx);
    goto loc_005437AF;

loc_005437A8: ;
    esi = esi & 0xFFF;
    esi++;

loc_005437AF: ;
    ecx = MEM32(edi + 0x8DC);
    ecx = ecx + 0x40;
    ecx = ecx & 0xFFFFFFF;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    edx = 0; /* xor self */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebp;
    eax = eax >> LO8(ecx);
    esi = esi >> LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = esp + 0x38;
    PUSH32(esp, 0); sub_00543500(); /* call 0x00543500 */

loc_005437DE: ;
    edx = MEM32(esp + ebp * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053D7F0(); /* call 0x0053D7F0 */

loc_005437EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_005437F2: ;
    ecx = MEM32(0x5499E8);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_00543803: ;
    esi = MEM32(edi + 0x8DC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_0054380F: ;
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042E14C(); /* call 0x0042E14C */

loc_00543818: ;
    eax = MEM32(0x54A8E8);
    MEM32(esi + 0x10) = eax;
    SET_LO8(eax, MEM8(0x54A90C));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00543898; /* jns: not sign (positive) */

loc_00543829: ;
    esi = MEM32(0x54A8C4);
    ecx = MEM32(edi + 0x8DC);
    edx = MEM32(0x54A908);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x54A900);
    esi = esi + 0x1FF;
    esi = esi & 0xFFFFFE00u;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x54A8CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561028), _icall_esp); /* indirect call */
    }

loc_00543860: ;
    if (TEST_S(eax, eax)) goto loc_005438F7; /* jl: less (signed <) */

loc_00543868: ;
    edx = MEM32(0x54A8E8);
    ecx = MEM32(0x54A900);
    eax = MEM32(0x54A904);
    edx++;
    POP32(esp, edi);
    ecx = ecx + esi;
    POP32(esp, esi);
    eax = eax + 0 + _cf; /* adc */
    POP32(esp, ebp);
    MEM32(0x54A8E8) = edx;
    MEM32(0x54A900) = ecx;
    MEM32(0x54A904) = eax;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00543898: ;
    eax = MEM32(edi + 0x8D4);
    ebp = 0; /* xor self */
    if (CMP_NE(eax, ebp)) goto loc_005438F7; /* jne: not equal / not zero */

loc_005438A4: ;
    MEM32(edi + 0x8D4) = 0x26000000;
    esi = 0; /* xor self */
    ebx = 0xFFFFFFEFu;

loc_005438B5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_005438BC: ;
    eax = esi;
    esi++;
    if (CMP_B(eax, 0x2710)) goto loc_005438E5; /* jb: below (unsigned <) */

loc_005438C6: ;
    ecx = MEM32(edi + 0x8D8);
    eax = MEM32(0x54A8E8);
    ecx = ecx & ebx;
    eax--;
    MEM32(edi + 0x8D4) = ebp;
    MEM32(edi + 0x8D8) = ecx;
    MEM32(0x54A8E8) = eax;

loc_005438E5: ;
    if (CMP_EQ(MEM32(edi + 0x8D4), 0x26000000)) goto loc_005438B5; /* je: equal / zero */

loc_005438F1: ;
    MEM32(0x54A8E8) = MEM32(0x54A8E8) + 1;

loc_005438F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00543900
 * Original: 0x00543900 - 0x0054398C (140 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00543900: ;
    eax = MEM32(0x5499E8);
    if (TEST_Z(MEM8(eax + 0x8D8), 0x10)) goto loc_0054398B; /* je: equal / zero */

loc_0054390E: ;
    eax = MEM32(0x54A90C);
    if (TEST_Z(LO8(eax), 0x70)) goto loc_0054398B; /* je: equal / zero */

loc_00543917: ;
    if (CMP_NE(MEM32(0x54A8D8), 0xFFFFFFFFu)) goto loc_0054398B; /* jne: not equal / not zero */

loc_00543920: ;
    ecx = MEM32(0x549BF4);
    eax = eax >> 4;
    eax = eax & 7;
    eax--;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    MEM32(0x54A8D8) = ecx;
    if (CMP_A(eax, 6)) goto loc_0054398B; /* ja: above (unsigned >) */

loc_00543938: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x54398C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0054393Fu) goto loc_0054393F;
    if (_jt == 0x0054394Au) goto loc_0054394A;
    if (_jt == 0x00543955u) goto loc_00543955;
    if (_jt == 0x00543960u) goto loc_00543960;
    if (_jt == 0x0054396Bu) goto loc_0054396B;
    if (_jt == 0x00543976u) goto loc_00543976;
    if (_jt == 0x00543981u) goto loc_00543981;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0054393F: ;
    MEM32(0x549BF4) = 1;
    esp += 4; return; /* ret */

loc_0054394A: ;
    MEM32(0x549BF4) = 2;
    esp += 4; return; /* ret */

loc_00543955: ;
    MEM32(0x549BF4) = 4;
    esp += 4; return; /* ret */

loc_00543960: ;
    MEM32(0x549BF4) = 0x80000000u;
    esp += 4; return; /* ret */

loc_0054396B: ;
    MEM32(0x549BF4) = 0x80000001u;
    esp += 4; return; /* ret */

loc_00543976: ;
    MEM32(0x549BF4) = 0x80000002u;
    esp += 4; return; /* ret */

loc_00543981: ;
    MEM32(0x549BF4) = 0x80000004u;

loc_0054398B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005439B0
 * Original: 0x005439B0 - 0x00543F53 (1443 bytes, 428 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005439B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005439B0: ;
    esp = esp - 0x64;
    eax = MEM32(0x54A8D8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(eax, ebp)) goto loc_005439E1; /* je: equal / zero */

loc_005439CD: ;
    if (TEST_Z(MEM8(esi + 0x8D8), 0x10)) goto loc_005439E1; /* je: equal / zero */

loc_005439D6: ;
    MEM32(0x549BF4) = eax;
    MEM32(0x54A8D8) = ebp;

loc_005439E1: ;
    ecx = MEM32(esi + 0x8D4);
    eax = ecx;
    eax = eax & 0xFF000000u;
    if (CMP_A(eax, 0x28000000)) goto loc_00543E0E; /* ja: above (unsigned >) */

loc_005439F9: ;
    if (CMP_EQ(eax, 0x28000000)) goto loc_00543DEB; /* je: equal / zero */

loc_005439FF: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00543E01; /* je: equal / zero */

loc_00543A09: ;
    if (CMP_EQ(eax, 0x21000000)) goto loc_00543A9A; /* je: equal / zero */

loc_00543A14: ;
    if (CMP_NE(eax, 0x23000000)) goto loc_00543F4B; /* jne: not equal / not zero */

loc_00543A1F: ;
    SET_LO8(eax, MEM8(0x54A90C));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00543A5E; /* jns: not sign (positive) */

loc_00543A28: ;
    eax = MEM32(0x54A908);
    if (CMP_EQ(eax, ebx)) goto loc_00543A5E; /* je: equal / zero */

loc_00543A31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x54A8CC);
    PUSH32(esp, eax);
    MEM8(esp + 0x27) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_00543A4B: ;
    edx = MEM32(0x54A908);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_00543A58: ;
    MEM32(0x54A908) = ebx;

loc_00543A5E: ;
    edx = MEM32(esi + 0x8D8);
    eax = MEM32(esi + 0x8DC);
    edx = edx & 0xFFFFFFCFu;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x8D8) = edx;
    MEM32(esi + 0x8D4) = 0x24000000;
    if (CMP_EQ(eax, ebx)) goto loc_00543A8C; /* je: equal / zero */

loc_00543A81: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00543A8C: ;
    POP32(esp, edi);
    MEM32(esi + 0x8DC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543A9A: ;
    eax = MEM32(esi + 0x8DC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 0xC);
    MEM32(0x54A90C) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(0x54A8D4) = edx;
    MEM32(0x54A8F8) = eax;
    MEM32(0x54A8D8) = ebp;
    PUSH32(esp, 0); sub_0042E14C(); /* call 0x0042E14C */

loc_00543ACC: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00543ADD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00543AEA: ;
    ecx = MEM32(0x5499E8);
    MEM32(0x54A8E0) = ebx;
    MEM32(0x54A8E4) = ebx;
    ebp = MEM32(ecx + 0x1A18);
    MEM32(0x54A8F0) = eax;
    eax = MEM32(ebp);
    (void)0; /* test eax, 0xFFFF - flags set for next jcc */
    MEM32(0x54A8F4) = edx;
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00543B30; /* jne: not equal / not zero */

loc_00543B17: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00543B30; /* jne: not equal / not zero */

loc_00543B23: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_00543B30; /* je: equal / zero */

loc_00543B2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00543B30: ;
    esi = MEM32(ebp);
    eax = MEM32(0x54A90C);
    edx = MEM32(ebp + 0x10);
    esi++;
    MEM32(ebp) = esi;
    esi = eax;
    eax = eax & 4;
    esi = esi & 3;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    edi = eax;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(edx, ebx)) goto loc_00543B62; /* jne: not equal / not zero */

loc_00543B51: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    eax = eax << LO8(ecx);
    goto loc_00543B6D;

loc_00543B62: ;
    eax = edx;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;

loc_00543B6D: ;
    if (CMP_NE(edx, ebx)) goto loc_00543B83; /* jne: not equal / not zero */

loc_00543B71: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    edx = 1;
    edx = edx << LO8(ecx);
    goto loc_00543B8A;

loc_00543B83: ;
    edx = edx & 0xFFF;
    edx++;

loc_00543B8A: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(edi, ebx)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = eax >> LO8(ecx);
    edx = edx >> LO8(ecx);
    esi = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00543500(); /* call 0x00543500 */

loc_00543BAA: ;
    ebx = MEM32(esp + 0x38);
    if (TEST_NZ(ebx, ebx)) goto loc_00543BC5; /* jne: not equal / not zero */

loc_00543BB2: ;
    ecx = MEM32(esp + 0x34);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xF;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    goto loc_00543BCF;

loc_00543BC5: ;
    ebx = ebx >> 0xC;
    ebx = ebx & 0xFFF;
    ebx++;

loc_00543BCF: ;
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_00538B70(); /* call 0x00538B70 */

loc_00543BD8: ;
    edx = MEM32(esp + 0x38);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = 0; /* xor self */
    edi = edi + 0x40;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 0x4C) = 0x28;
    if (CMP_NE(edx, ebx)) goto loc_00543C05; /* jne: not equal / not zero */

loc_00543BF2: ;
    ecx = MEM32(esp + 0x34);
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    goto loc_00543C0D;

loc_00543C05: ;
    eax = edx;
    eax = eax & 0xFFF;
    eax++;

loc_00543C0D: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 0x50) = eax;
    if (CMP_NE(edx, ebx)) goto loc_00543C28; /* jne: not equal / not zero */

loc_00543C15: ;
    ecx = MEM32(esp + 0x34);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xF;
    edx = 1;
    edx = edx << LO8(ecx);
    goto loc_00543C32;

loc_00543C28: ;
    edx = edx >> 0xC;
    edx = edx & 0xFFF;
    edx++;

loc_00543C32: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x54) = edx;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ecx, ebx)) ? 1 : 0); /* setne */
    esi = esp + 0x28;
    MEM16(esp + 0x58) = 1;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = edi;
    MEM32(0x54A8C4) = edi;
    MEM32(esp + 0x64) = ebx;
    edx = edx * 8 + 0x10;
    MEM16(esp + 0x5A) = LO16(edx);
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    PUSH32(esp, 0); sub_00538B70(); /* call 0x00538B70 */

loc_00543C77: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00543C81: ;
    eax = edi + 0x1FF;
    eax = eax & 0xFFFFFE00u;
    PUSH32(esp, 0xAE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00543C97: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ebp = MEM32(esp + 0x18);
    MEM32(ebp + 0x8DC) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00543CB7; /* jne: not equal / not zero */

loc_00543CA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x25000003;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543CB7: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x54A90C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0xA;
    esi = esp + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00543DC4; /* jns: not sign (positive) */

loc_00543CD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x546FF4);
    MEM32(0x54A908) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042C94C(); /* call 0x0042C94C */

loc_00543CEC: ;
    if (TEST_NZ(eax, eax)) goto loc_00543D03; /* jne: not equal / not zero */

loc_00543CF0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00543CF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x546FCC);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00543D00: ;
    esp = esp + 8;

loc_00543D03: ;
    if (CMP_L(MEM32(esp + 0x1C), ebx)) goto loc_00543D1E; /* jl: less (signed <) */

loc_00543D09: ;
    eax = 0x40000000;
    if (CMP_G(MEM32(esp + 0x1C), ebx)) goto loc_00543D16; /* jg: greater (signed >) */

loc_00543D10: ;
    if (CMP_BE(MEM32(esp + 0x18), eax)) goto loc_00543D1E; /* jbe: below or equal (unsigned <=) */

loc_00543D16: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ebx;

loc_00543D1E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x54A8CC);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40100100);
    PUSH32(esp, 0x54A908);
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x54) = 0x40;
    MEM32(esp + 0x50) = 0x74F508;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56105C), _icall_esp); /* indirect call */
    }

loc_00543D56: ;
    if (CMP_GE(eax, ebx)) goto loc_00543D7A; /* jge: greater or equal (signed >=) */

loc_00543D5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x546FB0);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00543D65: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x25000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543D7A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(0x54A908);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x54A900) = ebx;
    MEM32(0x54A904) = ebx;
    PUSH32(esp, 0); sub_0042BFC5(); /* call 0x0042BFC5 */

loc_00543D9E: ;
    eax = MEM32(0x54A908);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BE47(); /* call 0x0042BE47 */

loc_00543DA9: ;
    ecx = MEM32(0x54A904);
    edx = MEM32(0x54A900);
    eax = MEM32(0x54A908);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BFC5(); /* call 0x0042BFC5 */

loc_00543DC4: ;
    eax = MEM32(ebp + 0x8D8);
    POP32(esp, edi);
    eax = eax | 0x10;
    POP32(esp, esi);
    MEM32(ebp + 0x8D8) = eax;
    MEM32(ebp + 0x8D4) = 0x22000000;
    POP32(esp, ebp);
    MEM32(0x54A8E8) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543DEB: ;
    if (TEST_Z(ecx, ecx)) goto loc_00543E01; /* je: equal / zero */

loc_00543DEF: ;
    /* nop */

loc_00543DF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_00543DF7: ;
    eax = MEM32(esi + 0x8D4);
    if (TEST_NZ(eax, eax)) goto loc_00543DF0; /* jne: not equal / not zero */

loc_00543E01: ;
    PUSH32(esp, 0); sub_00543550(); /* call 0x00543550 */

loc_00543E06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543E0E: ;
    if (CMP_EQ(eax, 0x29000000)) goto loc_00543E6F; /* je: equal / zero */

loc_00543E15: ;
    if (CMP_NE(eax, 0x41000000)) goto loc_00543F4B; /* jne: not equal / not zero */

loc_00543E20: ;
    ecx = MEM32(esi + 0x8DC);
    eax = MEM32(ecx);
    MEM32(0x54A8C8) = eax;
    eax--;
    if ((eax == 0)) goto loc_00543E42; /* je: equal / zero */

loc_00543E30: ;
    POP32(esp, edi);
    MEM32(esi + 0x8D4) = 0x44000004;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543E42: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x546F74);
    PUSH32(esp, 0x546F64);
    PUSH32(esp, 0x546F5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00543E5A: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 0x8D4) = 0x43000000;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543E6F: ;
    edx = MEM32(esi + 0x8D8);
    edx = edx & 0xFFFFFFEFu;
    edx = edx | 0x20;
    MEM32(esi + 0x8D8) = edx;
    eax = MEM32(0x54A908);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E367(); /* call 0x0042E367 */

loc_00543E91: ;
    if (CMP_NE(eax, 0x102)) goto loc_00543EB8; /* jne: not equal / not zero */

loc_00543E98: ;
    PUSH32(esp, 0x546FF8);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00543EA2: ;
    eax = MEM32(0x54A8E8);
    edi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_LE(eax, edi)) goto loc_00543EBA; /* jle: less or equal (signed <=) */

loc_00543EB0: ;
    eax--;
    MEM32(0x54A8E8) = eax;
    goto loc_00543EBA;

loc_00543EB8: ;
    edi = 0; /* xor self */

loc_00543EBA: ;
    ebx = MEM32(0x54A8D4);
    ecx = MEM32(0x54A908);
    ebx = ebx & 0xFFFFFFFEu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x54A8D4) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_00543ED6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x54A8CC);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x80110000u);
    PUSH32(esp, 0x54A908);
    MEM32(0x54A908) = ebp;
    MEM32(esp + 0x64) = edi;
    MEM32(esp + 0x6C) = 0x40;
    MEM32(esp + 0x68) = 0x74F508;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56105C), _icall_esp); /* indirect call */
    }

loc_00543F11: ;
    if (CMP_GE(eax, edi)) goto loc_00543F35; /* jge: greater or equal (signed >=) */

loc_00543F15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x546F7C);
    PUSH32(esp, 0); sub_00545590(); /* call 0x00545590 */

loc_00543F20: ;
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(esi + 0x8D4) = 0x25000004;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00543F35: ;
    MEM32(0x54A900) = edi;
    MEM32(0x54A904) = edi;
    MEM32(esi + 0x8D4) = 0x2A000000;

loc_00543F4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00543F53
 * Original: 0x00543F53 - 0x00543FEA (151 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543F53(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00543F53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi + 0x200;
    eax = MEM32(ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x154) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00543F71; /* jne: not equal / not zero */

loc_00543F6F: ;
    MEM32(ecx) = eax;

loc_00543F71: ;
    eax = MEM32(edi + 0x140);
    MEM32(esi + 0x158) = eax;
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = edi + 0x680504;
    ecx = MEM32(eax);
    ebx = 0xFF;
    ecx = ecx & ebx;
    edx = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    MEM32(ebp + -4) = edx;
    MEM32(esi + 0xD0) = edx;
    eax = eax >> 0x10;
    edx = 0; /* xor self */
    eax = eax & 7;
    edx++;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0xD4) = ecx;
    MEM32(esi + 0xD8) = edx;
    MEM32(esi + 0xDC) = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) { sub_00543FEA(); return; } /* je: equal / zero */

loc_00543FC7: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    ecx = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    edx++;
    g_seh_ebp = ebp; sub_00543FEC(); return; /* tail jmp 0x00543FEC */

}

/**
 * sub_005440B6
 * Original: 0x005440B6 - 0x005441B6 (256 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005440B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005440B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = MEM32(edi + 0x100200);
    MEM32(esi + 0x14C) = eax;
    eax = MEM32(edi + 0x100204);
    MEM32(esi + 0x150) = eax;
    eax = MEM32(edi + 0x1218);
    ecx = 0x100;
    eax = eax & ecx;
    edx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, ecx)) ? 1 : 0); /* setne */
    eax = ebp + -4;
    PUSH32(esp, eax);
    ebx = 0x5000;
    PUSH32(esp, ebx);
    edx++;
    edx++;
    MEM32(esi + 0xB0) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56117C), _icall_esp); /* indirect call */
    }

loc_00544102: ;
    ecx = MEM32(ebp + -4);
    eax = eax - ebx;
    MEM32(esi + 0x10) = eax;
    eax = ecx + 0x700000;
    ecx = ecx >> 8;
    MEM32(esi + 0x130) = eax;
    ecx = ecx & 0x1F0;
    ecx = ecx | 0x3000000;
    MEM32(edi + 0x2210) = ecx;
    eax = eax + 0x1000;
    ecx = esi + 0x128;
    MEM32(ecx) = eax;
    ecx = MEM32(ecx);
    eax = eax + 0x80;
    edx = eax;
    edx = edx & 0x1FC00;
    MEM32(esi + 0x12C) = eax;
    edx = edx | 0x200;
    ecx = ecx >> 8;
    ecx = ecx & 0x1FC;
    eax = eax + 0xFF900020u;
    edx = edx << 7;
    edx = edx | ecx;
    eax = eax >> 4;
    MEM32(edi + 0x2214) = edx;
    MEM32(esi + 0x160) = eax;
    ecx = edi + 0x100214;
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFFEu;
    MEM32(ecx) = eax;
    eax = 0x700000;

loc_00544187: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + eax;
    eax = eax + 4;
    (void)0; /* cmp eax, 0x705000 - flags set for next jcc */
    MEM32(ecx + edi) = 0;
    if (CMP_B(eax, 0x705000)) goto loc_00544187; /* jb: below (unsigned <) */

loc_0054419D: ;
    eax = MEM32(esi + 0x160);
    ecx = eax + 8;
    POP32(esp, edi);
    MEM32(esi + 0x160) = ecx;
    MEM32(esi + 0x140) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005441B6
 * Original: 0x005441B6 - 0x00544285 (207 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005441B6(void)
{
    int _flags = 0; /* fallback flag var */

loc_005441B6: ;
    eax = MEM32(eax);
    MEM8(eax + 0x6013D4) = 0x1F;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x57;
    MEM8(eax + 0x6013D4) = 0x52;
    SET_LO8(ecx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x52;
    SET_LO8(ecx, LO8(ecx) + 4);
    MEM8(eax + 0x6013D5) = LO8(ecx);
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xFFFFF43Fu;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x400;
    ecx = ecx | edi;
    MEM32(eax + 0x8088) = ecx;
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xF43FFFFFu;
    esi = 0x4000000;
    ecx = ecx | esi;
    MEM32(eax + 0x8088) = ecx;
    ecx = eax + 0x808C;
    edx = MEM32(ecx);
    edx = edx & 0xFFFFF40Fu;
    edx = edx | edi;
    MEM32(ecx) = edx;
    edx = MEM32(ecx);
    edx = edx & 0xF40FFFFFu;
    edx = edx | esi;
    MEM32(ecx) = edx;
    MEM8(eax + 0x6013D4) = 0x20;
    MEM8(eax + 0x6013D5) = 0x29;
    MEM8(eax + 0x6013D4) = 0x1B;
    edx = eax + 0x600804;
    MEM8(eax + 0x6013D5) = 5;
    ecx = MEM32(edx);
    ecx = ecx & 0xFFFFFFFAu;
    POP32(esp, edi);
    ecx = ecx | 2;
    POP32(esp, esi);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00544284; /* jne: not equal / not zero */

loc_00544276: ;
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x99;

loc_00544284: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00544285
 * Original: 0x00544285 - 0x005442BB (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544285(void)
{
    int _flags = 0; /* fallback flag var */

loc_00544285: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    eax = eax + 0x8918;
    POP32(esp, esi);
    edx = 0x1000;
    ecx = 0x100000;

loc_0054429A: ;
    MEM32(eax + -8) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_0054429A; /* jne: not equal / not zero */

loc_005442B9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005442BB
 * Original: 0x005442BB - 0x005442EB (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005442BB(void)
{
    int _flags = 0; /* fallback flag var */

loc_005442BB: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 0x140);
    edx = eax;
    eax = eax + 0x70000;
    edx = edx & 0xFFFF;
    eax = eax << 4;
    PUSH32(esp, 2);
    MEM32(ecx + 0x400780) = edx;
    eax = eax + ecx;
    POP32(esp, ecx);

loc_005442DE: ;
    MEM32(eax) = 0;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_005442DE; /* jne: not equal / not zero */

loc_005442EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005442EB
 * Original: 0x005442EB - 0x0054435C (113 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005442EB(void)
{

loc_005442EB: ;
    eax = MEM32(ecx);
    MEM32(ecx + 0x120) = 0xFF;
    MEM32(ecx + 0x124) = 0x800000;
    MEM32(ecx + 0x11C) = 0x1111111;
    edx = 0; /* xor self */
    MEM32(eax + 0x3210) = edx;
    MEM32(eax + 0x3270) = edx;
    MEM32(eax + 0x3240) = edx;
    MEM32(eax + 0x3244) = edx;
    MEM32(eax + 0x3058) = edx;
    MEM32(eax + 0x3258) = edx;
    ecx = MEM32(ecx + 0x104);
    MEM32(eax + 0x2504) = ecx;
    MEM32(eax + 0x2508) = edx;
    MEM32(eax + 0x250C) = edx;
    MEM32(eax + 0x3228) = edx;
    MEM32(eax + 0x2410) = edx;
    MEM32(eax + 0x2420) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0054435C
 * Original: 0x0054435C - 0x005445D8 (636 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054435C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054435C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    eax = esi + 0x200;
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFEFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(eax);
    ecx = ecx | 0x1000;
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    MEM32(edi + 0x7EC) = eax;
    MEM32(edi + 0x7FC) = eax;
    MEM32(edi + 0x808) = eax;
    MEM32(edi + 0x814) = eax;
    MEM32(edi + 0x7F0) = 0x118700;
    MEM32(edi + 0x7F4) = 0x28C3FF;
    MEM32(edi + 0x7F8) = 0xF3DE0479u;
    MEM32(edi + 0x800) = 4;
    MEM32(edi + 0x804) = 0x45EAD10E;
    MEM32(edi + 0x80C) = 0x78;
    MEM32(edi + 0x810) = 0x40;
    MEM32(esi + 0x400080) = eax;
    eax = MEM32(edi + 0x7F0);
    MEM32(esi + 0x400084) = eax;
    eax = MEM32(edi + 0x7F4);
    MEM32(esi + 0x400880) = eax;
    eax = MEM32(edi + 0x7F8);
    MEM32(esi + 0x40008C) = eax;
    eax = MEM32(edi + 0x7FC);
    MEM32(esi + 0x400090) = eax;
    eax = MEM32(edi + 0x800);
    MEM32(esi + 0x400094) = eax;
    eax = MEM32(edi + 0x804);
    MEM32(esi + 0x400B80) = eax;
    eax = MEM32(edi + 0x808);
    MEM32(esi + 0x400B84) = eax;
    eax = MEM32(edi + 0x80C);
    MEM32(esi + 0x400098) = eax;
    eax = MEM32(edi + 0x810);
    MEM32(esi + 0x40009C) = eax;
    eax = MEM32(edi + 0x814);
    MEM32(esi + 0x400B88) = eax;
    eax = MEM32(edi + 0x140);
    eax = eax & 0xFFFF;
    MEM32(esi + 0x400780) = eax;
    PUSH32(esp, 0); sub_005445D8(); /* call 0x005445D8 */

loc_00544477: ;
    MEM32(ebp + -8) = 0x50;
    eax = esi + 0x400904;
    edx = 0x1FFC;
    ecx = 0xEA0000;

loc_0054448E: ;
    ebx = MEM32(eax + -3147456);
    MEM32(eax) = ebx;
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -8);
    ebx = ebx + 0xFFFFFFE0u;
    ebx = ebx & edx;
    ebx = ebx | ecx;
    MEM32(esi + 0x400750) = ebx;
    ebx = MEM32(ebp + -4);
    MEM32(esi + 0x400754) = ebx;
    ebx = MEM32(eax + -3147452);
    MEM32(eax + 4) = ebx;
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -8);
    ebx = ebx & edx;
    ebx = ebx | ecx;
    MEM32(esi + 0x400750) = ebx;
    ebx = MEM32(ebp + -4);
    MEM32(esi + 0x400754) = ebx;
    ebx = MEM32(eax + -3147460);
    MEM32(eax + -4) = ebx;
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    ebx = ebx + 0xFFFFFFC0u;
    ebx = ebx & edx;
    ebx = ebx | ecx;
    MEM32(esi + 0x400750) = ebx;
    ebx = MEM32(ebp + -4);
    eax = eax + 0x10;
    (void)0; /* cmp MEM32(ebp + -8), 0x70 - flags set for next jcc */
    MEM32(esi + 0x400754) = ebx;
    if (CMP_L(MEM32(ebp + -8), 0x70)) goto loc_0054448E; /* jl: less (signed <) */

loc_00544506: ;
    MEM32(ebp + -8) = 0xFFBFF710u;
    MEM32(ebp + -8) = MEM32(ebp + -8) - esi;
    eax = esi + 0x400980;
    MEM32(ebp + -12) = 8;

loc_0054451D: ;
    ebx = MEM32(eax + -3147392);
    MEM32(eax) = ebx;
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -8);
    ebx = ebx + eax;
    ebx = ebx & edx;
    ebx = ebx | ecx;
    MEM32(esi + 0x400750) = ebx;
    ebx = MEM32(ebp + -4);
    eax = eax + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(esi + 0x400754) = ebx;
    if ((MEM32(ebp + -12) != 0)) goto loc_0054451D; /* jne: not equal / not zero */

loc_00544548: ;
    eax = MEM32(esi + 0x100324);
    MEM32(esi + 0x4009A0) = eax;
    MEM32(esi + 0x400750) = 0xEA000C;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100200);
    MEM32(esi + 0x4009A4) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100204);
    MEM32(esi + 0x4009A8) = eax;
    MEM32(esi + 0x400750) = 0xEA0004;
    MEM32(esi + 0x400754) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x40014C) = eax;
    MEM32(esi + 0x400150) = eax;
    MEM32(esi + 0x400154) = eax;
    MEM32(esi + 0x400158) = eax;
    MEM32(esi + 0x400144) = 0x10000000;
    MEM32(esi + 0x400764) = 0x8000000;
    PUSH32(esp, MEM32(edi + 0x134));
    eax = edi;
    PUSH32(esp, 0); sub_00544613(); /* call 0x00544613 */

loc_005445D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005445D8
 * Original: 0x005445D8 - 0x00544613 (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005445D8(void)
{
    int _flags = 0; /* fallback flag var */

loc_005445D8: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x400700);
    if (TEST_Z(eax, eax)) goto loc_00544611; /* je: equal / zero */

loc_005445E5: ;
    PUSH32(esp, ebx);

loc_005445E6: ;
    ebx = MEM32(esi + 0x100);
    if (TEST_Z(HI8(ebx), 0x10)) goto loc_005445F8; /* je: equal / zero */

loc_005445F1: ;
    ecx = edi;
    PUSH32(esp, 0); sub_005411D0(); /* call 0x005411D0 */

loc_005445F8: ;
    if (TEST_Z(ebx, 0x1000000)) goto loc_00544607; /* je: equal / zero */

loc_00544600: ;
    eax = edi;
    PUSH32(esp, 0); sub_00540F70(); /* call 0x00540F70 */

loc_00544607: ;
    if (CMP_NE(MEM32(esi + 0x400700), 0)) goto loc_005445E6; /* jne: not equal / not zero */

loc_00544610: ;
    POP32(esp, ebx);

loc_00544611: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00544613
 * Original: 0x00544613 - 0x0054468C (121 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544613(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00544613: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x400100);
    if (TEST_Z(eax, eax)) goto loc_0054462F; /* je: equal / zero */

loc_00544628: ;
    ecx = edi;
    PUSH32(esp, 0); sub_005411D0(); /* call 0x005411D0 */

loc_0054462F: ;
    eax = MEM32(esi + 0x400720);
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x400720) = 0;
    PUSH32(esp, 0); sub_005445D8(); /* call 0x005445D8 */

loc_00544647: ;
    edx = MEM32(ebp + 8);
    ebx = edi + 0x134;
    eax = MEM32(ebx);
    if (CMP_EQ(eax, edx)) goto loc_00544660; /* je: equal / zero */

loc_00544656: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00544733(); /* call 0x00544733 */

loc_0054465D: ;
    edx = MEM32(ebp + 8);

loc_00544660: ;
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    MEM32(ebx) = edx;
    if (CMP_NE(edx, 2)) { sub_0054468C(); return; } /* jne: not equal / not zero */

loc_00544667: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x400144) = 0x10000100;
    eax = eax | 1;
    MEM32(esi + 0x400764) = 0x8000000;
    MEM32(esi + 0x400720) = eax;
    g_seh_ebp = ebp; sub_0054472C(); return; /* tail jmp 0x0054472C */

}

/**
 * sub_00544733
 * Original: 0x00544733 - 0x0054476A (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544733(void)
{
    int _flags = 0; /* fallback flag var */

loc_00544733: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    if (CMP_EQ(eax, ecx)) goto loc_00544767; /* je: equal / zero */

loc_00544740: ;
    eax = MEM32(edi + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = ecx;
    PUSH32(esp, 0); sub_005445D8(); /* call 0x005445D8 */

loc_0054475D: ;
    MEM32(esi + 0x400144) = 0x10000000;

loc_00544767: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054476A
 * Original: 0x0054476A - 0x005447EF (133 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054476A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054476A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(edi + 0x3224) = 0xF0078;
    MEM32(edi + 0x2044) = 0x101FFFF;
    eax = MEM32(esi + 0x120);
    eax = eax & 0x3FF;
    MEM32(edi + 0x2040) = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x2500) = eax;
    MEM32(edi + 0x3000) = eax;
    MEM32(edi + 0x3050) = eax;
    ebp = 0; /* xor self */
    MEM32(edi + 0x3200) = eax;
    ebx = edi + 0x3250;
    ebp++;
    MEM32(ebx) = eax;
    MEM32(edi + 0x3220) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_005447EF(); /* call 0x005447EF */

loc_005447C8: ;
    eax = 0; /* xor self */
    MEM32(edi + 0x3210) = eax;
    MEM32(edi + 0x3270) = eax;
    MEM32(ebx) = ebp;
    MEM32(edi + 0x3200) = ebp;
    MEM32(edi + 0x2500) = ebp;
    MEM32(edi + 0x2500) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005447EF
 * Original: 0x005447EF - 0x005449E7 (504 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005447EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005447EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x2500);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax + 0x3200);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 0x3250);
    MEM32(ebp + -12) = ecx;
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x128);
    MEM32(eax + 0x2500) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(eax + 0x3204);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3240);
    ecx = ecx & 0x1F;
    edx = ecx;
    edx = edx << 6;
    edx = edx + ebx;
    edx = edx + eax;
    MEM32(edx) = edi;
    edi = MEM32(eax + 0x3244);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 0x3248);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0x322C);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x3228);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x3224);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(eax + 0x3280);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(eax + 0x3254);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(eax + 0x3268);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x3264);
    MEM32(edx + 0x24) = edi;
    edi = MEM32(eax + 0x3260);
    MEM32(edx + 0x28) = edi;
    edi = MEM32(eax + 0x326C);
    MEM32(edx + 0x2C) = edi;
    edi = MEM32(eax + 0x324C);
    MEM32(edx + 0x30) = edi;
    edx = MEM32(eax + 0x3204);
    edi = 0x100;
    if (TEST_Z(edi, edx)) goto loc_005448F4; /* je: equal / zero */

loc_005448C3: ;
    edx = MEM32(eax + 0x2508);
    MEM32(ebp + -4) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) << LO8(ecx);
    ecx = MEM32(ebp + -4);
    ecx = ~ecx;
    ecx = ecx & edx;
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x3240);
    if (CMP_EQ(edx, MEM32(eax + 0x3244))) goto loc_005448EE; /* je: equal / zero */

loc_005448EB: ;
    ecx = ecx | MEM32(ebp + -4);

loc_005448EE: ;
    MEM32(eax + 0x2508) = ecx;

loc_005448F4: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx & 0x1F;
    MEM32(eax + 0x3204) = edx;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    (void)0; /* test MEM32(esi + 0x104), edx - flags set for next jcc */
    MEM32(ebp + -8) = edx;
    if (TEST_Z(MEM32(esi + 0x104), edx)) goto loc_00544925; /* je: equal / zero */

loc_00544912: ;
    if (CMP_EQ(ecx, 1)) goto loc_00544925; /* je: equal / zero */

loc_00544917: ;
    ecx = MEM32(eax + 0x3204);
    ecx = ecx | edi;
    MEM32(eax + 0x3204) = ecx;

loc_00544925: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx << 6;
    ecx = ecx + ebx;
    ecx = ecx + eax;
    edx = MEM32(ecx);
    MEM32(eax + 0x3240) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x3244) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x3248) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x322C) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x3228) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x3224) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x3280) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x3254) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x3268) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x3264) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x3260) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x326C) = edx;
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x324C) = ecx;
    ecx = MEM32(ebp + -8);
    (void)0; /* test MEM32(esi + 0x104), ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(MEM32(esi + 0x104), ecx)) goto loc_005449BE; /* je: equal / zero */

loc_005449B0: ;
    ecx = 0; /* xor self */
    ecx++;
    if (CMP_EQ(MEM32(ebp + 8), ecx)) goto loc_005449BE; /* je: equal / zero */

loc_005449B8: ;
    MEM32(eax + 0x3220) = ecx;

loc_005449BE: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x204C) = 0x1FFFFF;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x3200) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x2500) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005449E7
 * Original: 0x005449E7 - 0x00544B81 (410 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005449E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005449E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2500);
    edi = 0; /* xor self */
    MEM32(eax + 0x2500) = edi;

loc_00544A08: ;
    ebx = MEM32(edx + 0x10C);
    ebx = edi + ebx * 4 + 0x1C0000;
    edi++;
    (void)0; /* cmp edi, 0xDFC - flags set for next jcc */
    MEM32(eax + ebx * 4) = 0;
    if (CMP_B(edi, 0xDFC)) goto loc_00544A08; /* jb: below (unsigned <) */

loc_00544A25: ;
    ebx = MEM32(edx + 0x140);
    edi = MEM32(edx + 0x10C);
    ebx = ecx + ebx * 4 + 0x1C0000;
    MEM32(eax + ebx * 4) = edi;
    edi = MEM32(edx + 0x10C);
    MEM32(edx + ecx * 4 + 0x138) = edi;
    edi = ecx;
    edi = edi << 6;
    edi = edi + MEM32(edx + 0x128);
    MEM32(ebp + -8) = 0x10;
    edi = edi + eax;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -4) = edi;

loc_00544A62: ;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(ebx) = 0;
    if ((MEM32(ebp + -8) != 0)) goto loc_00544A62; /* jne: not equal / not zero */

loc_00544A74: ;
    ebx = MEM32(ebp + 0x10);
    ebx = MEM32(ebx + 0xC);
    MEM32(edi + 0xC) = ebx;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, 8)) goto loc_00544A88; /* jae: above or equal (unsigned >=) */

loc_00544A85: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_00544A88: ;
    edi = 0x100;
    if (CMP_BE(ebx, edi)) goto loc_00544A93; /* jbe: below or equal (unsigned <=) */

loc_00544A91: ;
    ebx = edi;

loc_00544A93: ;
    edi = MEM32(ebp + 0xC);
    ebx = ebx >> 3;
    ebx--;
    if (CMP_AE(edi, 0x20)) goto loc_00544AA2; /* jae: above or equal (unsigned >=) */

loc_00544A9F: ;
    PUSH32(esp, 0x20);
    POP32(esp, edi);

loc_00544AA2: ;
    if (CMP_BE(edi, 0x100)) goto loc_00544AAF; /* jbe: below or equal (unsigned <=) */

loc_00544AAA: ;
    edi = 0x100;

loc_00544AAF: ;
    edi = edi >> 5;
    edi--;
    if (CMP_BE(esi, 0xF)) goto loc_00544ABB; /* jbe: below or equal (unsigned <=) */

loc_00544AB8: ;
    PUSH32(esp, 0xF);
    POP32(esp, esi);

loc_00544ABB: ;
    esi = esi & 0x1F;
    esi = esi << 3;
    edi = edi & 7;
    esi = esi | edi;
    esi = esi << 0xA;
    ebx = ebx & 0x1F;
    esi = esi | ebx;
    edi = 0; /* xor self */
    esi = esi << 3;
    edi++;
    ebx = esi;
    esi = MEM32(ebp + -12);
    MEM32(esi + 0x14) = ebx;
    edi = edi << LO8(ecx);
    ecx = ecx & 0x1F;
    MEM32(edx + 0x104) = MEM32(edx + 0x104) | edi;
    esi = MEM32(edx + 0x104);
    MEM32(eax + 0x2504) = esi;
    MEM32(eax + 0x3200) = 0;
    MEM32(eax + 0x3250) = 0;
    esi = eax + 0x3204;
    MEM32(esi) = ecx;
    if (TEST_Z(MEM32(edx + 0x104), edi)) goto loc_00544B21; /* je: equal / zero */

loc_00544B17: ;
    ecx = MEM32(esi);
    ecx = ecx | 0x100;
    MEM32(esi) = ecx;

loc_00544B21: ;
    esi = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    MEM32(eax + 0x3240) = ecx;
    MEM32(eax + 0x3244) = ecx;
    esi = MEM32(esi + 0xC);
    MEM32(eax + 0x322C) = esi;
    MEM32(eax + 0x3230) = ecx;
    MEM32(eax + 0x3228) = ecx;
    MEM32(eax + 0x3280) = ecx;
    MEM32(eax + 0x3224) = ebx;
    ecx++;
    if (TEST_Z(MEM32(edx + 0x104), edi)) goto loc_00544B62; /* je: equal / zero */

loc_00544B5C: ;
    MEM32(eax + 0x3220) = ecx;

loc_00544B62: ;
    MEM32(eax + 0x3250) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x2500) = ecx;
    MEM32(edx + 0x108) = MEM32(edx + 0x108) | edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00544B81
 * Original: 0x00544B81 - 0x00544BB1 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544B81(void)
{

loc_00544B81: ;
    eax = eax | 0xFFFFFF80u;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(ecx + 0x130);
    eax = eax << 8;
    eax = eax | MEM32(esp + 0xC);
    ecx = ecx + edi * 8;
    ecx = ecx + esi;
    esi = MEM32(esp + 8);
    eax = eax << 0x10;
    edx = edx & 0xFFFF;
    MEM32(ecx) = esi;
    eax = eax | edx;
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00544BB1
 * Original: 0x00544BB1 - 0x00545590 (2527 bytes, 568 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544BB1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00544BB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    edx = MEM32(ecx + 0x100);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx * 4 + 0x138);
    esi = edi + 0x70000;
    ecx = esi;
    ecx = ecx << 4;
    edx = ecx + eax;
    ecx = MEM32(edx);
    ebx = 0; /* xor self */
    ebx++;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = esi;
    ecx = ecx << 2;
    MEM32(eax + ecx * 4 + 0x33C) = 0xFFFF0000u;
    edx = 0; /* xor self */
    MEM32(eax + ecx * 4 + 0x340) = edx;
    MEM32(eax + ecx * 4 + 0x344) = edx;
    MEM32(eax + ecx * 4 + 0x348) = edx;
    MEM32(eax + ecx * 4 + 0x34C) = edx;
    MEM32(eax + ecx * 4 + 0x350) = edx;
    MEM32(eax + ecx * 4 + 0x354) = edx;
    MEM32(eax + ecx * 4 + 0x358) = edx;
    MEM32(eax + ecx * 4 + 0x35C) = edx;
    MEM32(eax + ecx * 4 + 0x360) = edx;
    MEM32(eax + ecx * 4 + 0x364) = edx;
    MEM32(eax + ecx * 4 + 0x368) = edx;
    MEM32(eax + ecx * 4 + 0x36C) = edx;
    MEM32(eax + ecx * 4 + 0x370) = edx;
    MEM32(eax + ecx * 4 + 0x374) = edx;
    MEM32(eax + ecx * 4 + 0x378) = edx;
    MEM32(eax + ecx * 4 + 0x37C) = edx;
    MEM32(eax + ecx * 4 + 0x380) = edx;
    MEM32(eax + ecx * 4 + 0x384) = edx;
    MEM32(eax + ecx * 4 + 0x388) = edx;
    MEM32(eax + ecx * 4 + 0x38C) = edx;
    MEM32(eax + ecx * 4 + 0x390) = edx;
    MEM32(eax + ecx * 4 + 0x394) = edx;
    MEM32(eax + ecx * 4 + 0x398) = edx;
    MEM32(eax + ecx * 4 + 0x39C) = edx;
    esi = 0xFFF0000;
    MEM32(eax + ecx * 4 + 0x3A0) = esi;
    MEM32(eax + ecx * 4 + 0x3A4) = esi;
    MEM32(eax + ecx * 4 + 0x3A8) = edx;
    MEM32(eax + ecx * 4 + 0x3AC) = edx;
    MEM32(eax + ecx * 4 + 0x3B0) = edx;
    MEM32(eax + ecx * 4 + 0x3B4) = edx;
    MEM32(eax + ecx * 4 + 0x3B8) = edx;
    MEM32(eax + ecx * 4 + 0x3BC) = edx;
    MEM32(eax + ecx * 4 + 0x3C0) = edx;
    MEM32(eax + ecx * 4 + 0x3C4) = edx;
    MEM32(eax + ecx * 4 + 0x3C8) = edx;
    MEM32(eax + ecx * 4 + 0x3CC) = edx;
    MEM32(eax + ecx * 4 + 0x3D0) = edx;
    MEM32(eax + ecx * 4 + 0x3D4) = edx;
    MEM32(eax + ecx * 4 + 0x3D8) = edx;
    MEM32(eax + ecx * 4 + 0x3DC) = edx;
    MEM32(eax + ecx * 4 + 0x3E0) = edx;
    MEM32(eax + ecx * 4 + 0x3E4) = edx;
    MEM32(eax + ecx * 4 + 0x3E8) = edx;
    MEM32(eax + ecx * 4 + 0x3EC) = edx;
    MEM32(eax + ecx * 4 + 0x3F0) = edx;
    MEM32(eax + ecx * 4 + 0x3F4) = edx;
    MEM32(eax + ecx * 4 + 0x3F8) = edx;
    MEM32(eax + ecx * 4 + 0x3FC) = edx;
    MEM32(eax + ecx * 4 + 0x400) = edx;
    MEM32(eax + ecx * 4 + 0x404) = edx;
    MEM32(eax + ecx * 4 + 0x408) = edx;
    MEM32(eax + ecx * 4 + 0x40C) = edx;
    MEM32(eax + ecx * 4 + 0x410) = edx;
    MEM32(eax + ecx * 4 + 0x414) = edx;
    MEM32(eax + ecx * 4 + 0x418) = edx;
    MEM32(eax + ecx * 4 + 0x41C) = edx;
    MEM32(eax + ecx * 4 + 0x420) = edx;
    MEM32(eax + ecx * 4 + 0x424) = edx;
    MEM32(eax + ecx * 4 + 0x428) = edx;
    MEM32(ebp + -20) = edi;
    MEM32(eax + ecx * 4 + 0x42C) = edx;
    MEM32(eax + ecx * 4 + 0x430) = edx;
    MEM32(eax + ecx * 4 + 0x434) = edx;
    MEM32(eax + ecx * 4 + 0x438) = edx;
    MEM32(eax + ecx * 4 + 0x43C) = edx;
    MEM32(eax + ecx * 4 + 0x440) = edx;
    MEM32(eax + ecx * 4 + 0x444) = edx;
    MEM32(eax + ecx * 4 + 0x448) = edx;
    MEM32(eax + ecx * 4 + 0x44C) = edx;
    MEM32(eax + ecx * 4 + 0x450) = edx;
    MEM32(eax + ecx * 4 + 0x454) = edx;
    MEM32(eax + ecx * 4 + 0x458) = edx;
    MEM32(eax + ecx * 4 + 0x45C) = edx;
    MEM32(eax + ecx * 4 + 0x460) = edx;
    MEM32(eax + ecx * 4 + 0x464) = edx;
    MEM32(eax + ecx * 4 + 0x468) = edx;
    MEM32(eax + ecx * 4 + 0x46C) = edx;
    MEM32(eax + ecx * 4 + 0x470) = edx;
    MEM32(eax + ecx * 4 + 0x474) = edx;
    MEM32(eax + ecx * 4 + 0x478) = edx;
    MEM32(eax + ecx * 4 + 0x47C) = 0x101;
    MEM32(eax + ecx * 4 + 0x480) = edx;
    MEM32(eax + ecx * 4 + 0x484) = edx;
    MEM32(eax + ecx * 4 + 0x488) = edx;
    MEM32(eax + ecx * 4 + 0x48C) = edx;
    MEM32(eax + ecx * 4 + 0x490) = 0x111;
    MEM32(eax + ecx * 4 + 0x494) = edx;
    MEM32(eax + ecx * 4 + 0x498) = edx;
    MEM32(eax + ecx * 4 + 0x49C) = edx;
    MEM32(eax + ecx * 4 + 0x4A0) = edx;
    MEM32(eax + ecx * 4 + 0x4A4) = edx;
    MEM32(eax + ecx * 4 + 0x4A8) = 0x44400000;
    MEM32(eax + ecx * 4 + 0x4AC) = edx;
    MEM32(eax + ecx * 4 + 0x4B0) = edx;
    MEM32(eax + ecx * 4 + 0x4B4) = edx;
    MEM32(eax + ecx * 4 + 0x4B8) = edx;
    MEM32(eax + ecx * 4 + 0x4BC) = edx;
    MEM32(eax + ecx * 4 + 0x4C0) = edx;
    MEM32(eax + ecx * 4 + 0x4C4) = edx;
    MEM32(eax + ecx * 4 + 0x4C8) = edx;
    MEM32(eax + ecx * 4 + 0x4CC) = edx;
    MEM32(eax + ecx * 4 + 0x4D0) = edx;
    esi = 0x30303;
    MEM32(eax + ecx * 4 + 0x4D4) = esi;
    MEM32(eax + ecx * 4 + 0x4D8) = esi;
    MEM32(eax + ecx * 4 + 0x4DC) = esi;
    MEM32(eax + ecx * 4 + 0x4E0) = esi;
    MEM32(eax + ecx * 4 + 0x4E4) = edx;
    MEM32(eax + ecx * 4 + 0x4E8) = edx;
    MEM32(eax + ecx * 4 + 0x4EC) = edx;
    MEM32(eax + ecx * 4 + 0x4F0) = edx;
    esi = 0x80000;
    MEM32(eax + ecx * 4 + 0x4F4) = esi;
    MEM32(eax + ecx * 4 + 0x4F8) = esi;
    MEM32(eax + ecx * 4 + 0x4FC) = esi;
    MEM32(eax + ecx * 4 + 0x500) = esi;
    MEM32(eax + ecx * 4 + 0x504) = edx;
    MEM32(eax + ecx * 4 + 0x508) = edx;
    esi = 0x1012000;
    MEM32(eax + ecx * 4 + 0x50C) = esi;
    MEM32(eax + ecx * 4 + 0x510) = esi;
    MEM32(eax + ecx * 4 + 0x514) = esi;
    MEM32(eax + ecx * 4 + 0x518) = esi;
    esi = 0x105B8;
    MEM32(eax + ecx * 4 + 0x51C) = esi;
    MEM32(eax + ecx * 4 + 0x520) = esi;
    MEM32(eax + ecx * 4 + 0x524) = esi;
    MEM32(eax + ecx * 4 + 0x528) = esi;
    esi = 0x80008;
    MEM32(eax + ecx * 4 + 0x52C) = esi;
    MEM32(eax + ecx * 4 + 0x530) = esi;
    MEM32(eax + ecx * 4 + 0x534) = esi;
    MEM32(eax + ecx * 4 + 0x538) = esi;
    MEM32(eax + ecx * 4 + 0x53C) = edx;
    MEM32(eax + ecx * 4 + 0x540) = edx;
    MEM32(eax + ecx * 4 + 0x544) = edx;
    MEM32(eax + ecx * 4 + 0x548) = edx;
    MEM32(eax + ecx * 4 + 0x54C) = edx;
    MEM32(eax + ecx * 4 + 0x550) = edx;
    MEM32(eax + ecx * 4 + 0x554) = edx;
    MEM32(eax + ecx * 4 + 0x558) = edx;
    edi = edi << 4;
    PUSH32(esp, 8);
    esi = edi + eax + 0x70055C;
    POP32(esp, edi);

loc_00544FDD: ;
    MEM32(esi) = 0x7FF0000;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_00544FDD; /* jne: not equal / not zero */

loc_00544FE9: ;
    PUSH32(esp, 8);
    esi = eax + ecx * 4 + 0x57C;
    POP32(esp, edi);

loc_00544FF3: ;
    MEM32(esi) = 0x7FF0000;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_00544FF3; /* jne: not equal / not zero */

loc_00544FFF: ;
    MEM32(eax + ecx * 4 + 0x59C) = edx;
    MEM32(eax + ecx * 4 + 0x5A0) = edx;
    MEM32(eax + ecx * 4 + 0x5A4) = 0x4B7FFFFF;
    MEM32(eax + ecx * 4 + 0x5A8) = edx;
    MEM32(eax + ecx * 4 + 0x5AC) = edx;
    MEM32(eax + ecx * 4 + 0x5B0) = edx;
    MEM32(eax + ecx * 4 + 0x5B4) = edx;
    MEM32(eax + ecx * 4 + 0x5B8) = edx;
    MEM32(eax + ecx * 4 + 0x5BC) = edx;
    MEM32(eax + ecx * 4 + 0x5C0) = edx;
    MEM32(eax + ecx * 4 + 0x5C4) = edx;
    MEM32(eax + ecx * 4 + 0x5C8) = edx;
    MEM32(eax + ecx * 4 + 0x5CC) = edx;
    MEM32(eax + ecx * 4 + 0x5D0) = edx;
    MEM32(eax + ecx * 4 + 0x5D4) = edx;
    MEM32(eax + ecx * 4 + 0x5D8) = edx;
    MEM32(eax + ecx * 4 + 0x5DC) = edx;
    MEM32(eax + ecx * 4 + 0x5E0) = edx;
    MEM32(eax + ecx * 4 + 0x5E4) = edx;
    MEM32(eax + ecx * 4 + 0x5E8) = edx;
    MEM32(eax + ecx * 4 + 0x5EC) = edx;
    MEM32(eax + ecx * 4 + 0x5F0) = edx;
    MEM32(eax + ecx * 4 + 0x5F4) = edx;
    MEM32(eax + ecx * 4 + 0x5F8) = edx;
    MEM32(eax + ecx * 4 + 0x5FC) = ebx;
    MEM32(eax + ecx * 4 + 0x600) = edx;
    MEM32(eax + ecx * 4 + 0x604) = 0x4000;
    MEM32(eax + ecx * 4 + 0x608) = edx;
    MEM32(eax + ecx * 4 + 0x60C) = edx;
    MEM32(eax + ecx * 4 + 0x610) = ebx;
    MEM32(eax + ecx * 4 + 0x614) = edx;
    PUSH32(esp, 0x23);
    MEM32(eax + ecx * 4 + 0x618) = 0x40000;
    MEM32(eax + ecx * 4 + 0x61C) = 0x10000;
    POP32(esp, edi);
    MEM32(eax + ecx * 4 + 0x620) = edx;
    PUSH32(esp, 4);
    MEM32(eax + ecx * 4 + 0x624) = edx;
    MEM32(eax + ecx * 4 + 0x628) = edx;
    esi = eax + ecx * 4 + 0x62C;
    POP32(esp, ebx);

loc_00545118: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    if ((edi != 0)) goto loc_00545118; /* jne: not equal / not zero */

loc_0054511F: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x6B8;
    POP32(esp, edi);

loc_00545129: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    if ((edi != 0)) goto loc_00545129; /* jne: not equal / not zero */

loc_00545130: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x72C;
    POP32(esp, edi);

loc_0054513A: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    if ((edi != 0)) goto loc_0054513A; /* jne: not equal / not zero */

loc_00545141: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x7A0;
    POP32(esp, edi);

loc_0054514B: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    if ((edi != 0)) goto loc_0054514B; /* jne: not equal / not zero */

loc_00545152: ;
    PUSH32(esp, 2);
    esi = eax + ecx * 4 + 0x814;
    POP32(esp, edi);

loc_0054515C: ;
    MEM32(esi) = edx;
    esi = esi + ebx;
    edi--;
    if ((edi != 0)) goto loc_0054515C; /* jne: not equal / not zero */

loc_00545163: ;
    esi = 0x80;
    ebx = eax + ecx * 4 + 0x81C;
    edi = esi;

loc_00545171: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    if ((edi != 0)) goto loc_00545171; /* jne: not equal / not zero */

loc_00545179: ;
    ebx = eax + ecx * 4 + 0xA1C;
    edi = esi;

loc_00545182: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    if ((edi != 0)) goto loc_00545182; /* jne: not equal / not zero */

loc_0054518A: ;
    ebx = eax + ecx * 4 + 0xC1C;
    edi = esi;

loc_00545193: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    if ((edi != 0)) goto loc_00545193; /* jne: not equal / not zero */

loc_0054519B: ;
    ebx = eax + ecx * 4 + 0xE1C;

loc_005451A2: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    esi--;
    if ((esi != 0)) goto loc_005451A2; /* jne: not equal / not zero */

loc_005451AA: ;
    esi = eax + ecx * 4 + 0x101C;
    edi = 0xC0;

loc_005451B6: ;
    MEM32(esi) = edx;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_005451B6; /* jne: not equal / not zero */

loc_005451BE: ;
    ebx = eax + ecx * 4 + 0x131C;
    edi = 0x1E0;
    esi = 0x6A7;

loc_005451CF: ;
    MEM32(ebx) = edx;
    ebx = ebx + 4;
    edi--;
    if ((edi != 0)) goto loc_005451CF; /* jne: not equal / not zero */

loc_005451D7: ;
    edi = eax + ecx * 4 + 0x1A9C;
    MEM32(ebp + -12) = 0x88;

loc_005451E5: ;
    MEM32(edi) = 0x10700FF9;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    edi = edi + ebx;
    MEM32(edi) = 0x436086C;
    edi = edi + ebx;
    esi++;
    esi++;
    MEM32(edi) = 0xC001B;
    edi = edi + ebx;
    esi++;
    MEM32(edi) = edx;
    esi++;
    edi = edi + ebx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    if ((MEM32(ebp + -12) != 0)) goto loc_005451E5; /* jne: not equal / not zero */

loc_0054520D: ;
    edi = ecx + esi;
    ebx = esi;
    edi = eax + edi * 4;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = 0x300;
    esi = esi + 0x300;

loc_00545228: ;
    edi = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -12) != 0)) goto loc_00545228; /* jne: not equal / not zero */

loc_00545236: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x68;
    esi = esi + 0x68;

loc_0054524C: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_0054524C; /* jne: not equal / not zero */

loc_0054525A: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xD0;
    esi = esi + 0xD0;

loc_00545270: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_00545270; /* jne: not equal / not zero */

loc_0054527E: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 4;
    esi = esi + 4;

loc_00545294: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_00545294; /* jne: not equal / not zero */

loc_005452A2: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x14;
    esi = esi + 0x14;

loc_005452B8: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_005452B8; /* jne: not equal / not zero */

loc_005452C6: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    esi = esi + 0xF;

loc_005452D9: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_005452D9; /* jne: not equal / not zero */

loc_005452E7: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xE;
    esi = esi + 0xE;

loc_005452FA: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_005452FA; /* jne: not equal / not zero */

loc_00545308: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x44;
    esi = esi + 0x44;

loc_0054531B: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_0054531B; /* jne: not equal / not zero */

loc_00545329: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x20;
    esi = esi + 0x20;

loc_0054533C: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_0054533C; /* jne: not equal / not zero */

loc_0054534A: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    esi = esi + 0xF;

loc_0054535D: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(edi) = edx;
    if ((MEM32(ebp + -16) != 0)) goto loc_0054535D; /* jne: not equal / not zero */

loc_0054536B: ;
    esi = esi + ecx;
    MEM32(eax + esi * 4) = edx;
    edi = ebx + 0xE0;
    esi = ecx + edi;
    edi++;
    MEM32(eax + esi * 4) = 0x3F800000;
    esi = ecx + edi;
    edi++;
    MEM32(eax + esi * 4) = edx;
    esi = ecx + edi;
    MEM32(eax + esi * 4) = edx;
    esi = MEM32(ebp + -20);
    esi = esi << 2;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = ebx + 0xF0;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F000000;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    edi = edi + 0xF4;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = 0xBF800000u;
    edi = MEM32(ebp + -8);
    edi = edi + 0xF8;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xBF800000u;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    edi = edi + 0xE4;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    edi = edi + 0xFC;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x58;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x40;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xFE000;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x44;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x4C;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi = edi + esi;
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    edi = edi + 0x60;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F8;
    ebx = MEM32(ebp + -20);
    edi++;
    ecx = ecx + edi;
    MEM32(eax + ecx * 4) = edx;
    ecx = esi + edi;
    edi = MEM32(ebp + -28);
    MEM32(eax + ecx * 4 + 0x700004) = edx;
    ecx = MEM32(ebp + -24);
    ecx = ecx + esi;
    MEM32(eax + ecx * 4 + 0x700004) = 0x2FE000;
    ecx = 0x1C527C;
    edx = edi + ebx * 4 + 0x1C0004;
    MEM32(eax + edx * 4) = ecx;
    edx = esi + edi;
    MEM32(eax + edx * 4 + 0x700014) = ecx;
    MEM32(eax + edx * 4 + 0x700018) = ecx;
    esi = edi + ebx * 4 + 0x1C0008;
    MEM32(eax + edx * 4 + 0x70001C) = ecx;
    MEM32(eax + esi * 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x700024) = ecx;
    POP32(esp, esi);
    MEM32(eax + edx * 4 + 0x700028) = ecx;
    MEM32(eax + edx * 4 + 0x70002C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00545590
 * Original: 0x00545590 - 0x005455C3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545590(void)
{

loc_00545590: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x104;
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EA04(); /* call 0x0046EA04 */

loc_005455B2: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA82(); /* call 0x0046DA82 */

loc_005455BC: ;
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_005455D0
 * Original: 0x005455D0 - 0x005455DD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005455D0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005455D0: ;
    eax = edi;
    PUSH32(esp, esi);
    eax = eax & 0xF;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x545654)); return; /* indirect tail jmp */

}

/**
 * sub_00545670
 * Original: 0x00545670 - 0x00545694 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545670(void)
{
    int _flags = 0; /* fallback flag var */

loc_00545670: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x784);
    esp = esp - 0xB8;
    if (TEST_Z(eax, eax)) { sub_00545694(); return; } /* je: equal / zero */

loc_00545684: ;
    eax = MEM32(esp + 0xC0);
    esp = esp + 0xB8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054A920
 * Original: 0x0054A920 - 0x0054AACC (428 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A920: ;
    esp = esp - 0x80;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    eax = 0; /* xor self */
    edi = esp + 0xC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x100;

loc_0054A942: ;
    eax = ZX8(MEM8(ecx + ebp + -1));
    ecx--;
    edx = eax;
    edx = edx & 0xF;
    edi = MEM32(esp + edx * 4 + 0xC);
    edx = esp + edx * 4 + 0xC;
    eax = (uint32_t)((int32_t)eax >> 4);
    edi++;
    MEM32(edx) = edi;
    edx = MEM32(esp + eax * 4 + 0xC);
    eax = esp + eax * 4 + 0xC;
    edx++;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = edx;
    if (TEST_NZ(ecx, ecx)) goto loc_0054A942; /* jne: not equal / not zero */

loc_0054A96A: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, 0x200)) goto loc_0054AABD; /* je: equal / zero */

loc_0054A979: ;
    if (CMP_EQ(eax, 0x1FF)) goto loc_0054A9A8; /* je: equal / zero */

loc_0054A980: ;
    ecx = 0x10;
    esi = esp + 0xC;
    edi = esp + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = 0; /* xor self */
    ecx = 0xF;

loc_0054A996: ;
    eax = eax + MEM32(esp + ecx * 4 + 0xC);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0054A9A8; /* jne: not equal / not zero */

loc_0054A99E: ;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx--;
    if ((ecx != 0)) goto loc_0054A996; /* jne: not equal / not zero */

loc_0054A9A3: ;
    if (CMP_EQ(eax, 1)) goto loc_0054A9B4; /* je: equal / zero */

loc_0054A9A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

loc_0054A9B4: ;
    ecx = 0; /* xor self */
    eax = 1;
    goto loc_0054A9C0;

    /* nop */

loc_0054A9C0: ;
    edi = MEM32(esp + eax * 4 + 0xC);
    edi = edi + ecx;
    MEM32(esp + eax * 4 + 0xC) = edi;
    eax++;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    ecx = edi;
    if (CMP_L(eax, 0x10)) goto loc_0054A9C0; /* jl: less (signed <) */

loc_0054A9D2: ;
    edi = MEM32(esp + 0x48);
    eax = 0x2000;
    goto loc_0054A9E0;

    /* nop */

loc_0054A9E0: ;
    eax = eax - 0x10;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = ZX8(MEM8(ecx + ebp));
    ecx = ecx >> 4;
    if (TEST_Z(ecx, ecx)) goto loc_0054AA04; /* je: equal / zero */

loc_0054A9F3: ;
    edx = MEM32(esp + ecx * 4 + 0xC);
    edx--;
    esi = eax;
    esi = esi | ecx;
    MEM32(esp + ecx * 4 + 0xC) = edx;
    MEM16(ebx + edx * 2) = LO16(esi);

loc_0054AA04: ;
    eax = eax - 0x10;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + ebp));
    ecx = ecx & 0xF;
    if ((ecx == 0)) goto loc_0054AA27; /* je: equal / zero */

loc_0054AA16: ;
    edx = MEM32(esp + ecx * 4 + 0xC);
    edx--;
    esi = eax;
    esi = esi | ecx;
    MEM32(esp + ecx * 4 + 0xC) = edx;
    MEM16(ebx + edx * 2) = LO16(esi);

loc_0054AA27: ;
    if (TEST_NZ(eax, eax)) goto loc_0054A9E0; /* jne: not equal / not zero */

loc_0054AA2B: ;
    ecx = 0x800;
    eax = ecx;
    esi = 0xF;

loc_0054AA37: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = ecx;
    if (CMP_LE(eax, ecx)) goto loc_0054AA54; /* jle: less or equal (signed <=) */

loc_0054AA3D: ;
    /* nop */

loc_0054AA40: ;
    eax = eax - 2;
    ebp = eax;
    ecx--;
    ebp = ebp | 0x8000;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM16(ebx + ecx * 2) = LO16(ebp);
    if (CMP_G(eax, edx)) goto loc_0054AA40; /* jg: greater (signed >) */

loc_0054AA54: ;
    eax = MEM32(esp + esi * 4 + 0x4C);
    eax--;
    if (((int32_t)eax < 0)) goto loc_0054AA6E; /* js: sign (negative) */

loc_0054AA5B: ;
    eax++;
    /* nop */

loc_0054AA60: ;
    SET_LO16(ebp, MEM16(ebx + edi * 2 + -2));
    edi--;
    ecx--;
    eax--;
    MEM16(ebx + ecx * 2) = LO16(ebp);
    if ((eax != 0)) goto loc_0054AA60; /* jne: not equal / not zero */

loc_0054AA6E: ;
    esi--;
    (void)0; /* cmp esi, 0xA - flags set for next jcc */
    eax = edx;
    if (CMP_G(esi, 0xA)) goto loc_0054AA37; /* jg: greater (signed >) */

loc_0054AA76: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = 0x400;
    if (CMP_LE(eax, ecx)) goto loc_0054AA94; /* jle: less or equal (signed <=) */

loc_0054AA7F: ;
    /* nop */

loc_0054AA80: ;
    eax = eax - 2;
    esi = eax;
    edx--;
    esi = esi | 0x8000;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM16(ebx + edx * 2) = LO16(esi);
    if (CMP_G(eax, ecx)) goto loc_0054AA80; /* jg: greater (signed >) */

loc_0054AA94: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0054AABD; /* jle: less or equal (signed <=) */

loc_0054AA98: ;
    esi = ZX16(MEM16(ebx + edi * 2 + -2));
    edi--;
    ecx = esi;
    ecx = ecx & 0xF;
    ebp = 0x400;
    ebp = (uint32_t)((int32_t)ebp >> LO8(ecx));
    eax = edx;
    eax = eax - ebp;
    edi = edi;

loc_0054AAB0: ;
    edx--;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM16(ebx + edx * 2) = LO16(esi);
    if (CMP_NE(edx, eax)) goto loc_0054AAB0; /* jne: not equal / not zero */

loc_0054AAB9: ;
    if (CMP_G(edi & edi, 0)) goto loc_0054AA98; /* jg: greater (signed >) */

loc_0054AABD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0054AAD0
 * Original: 0x0054AAD0 - 0x0054AE37 (871 bytes, 322 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054AAD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054AAD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    ebx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 4);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ebx));
    esi = esi << 0x10;
    SET_LO16(esi, MEM16(ebx + 2));
    ebx = ebx + 4;
    SET_HI8(ecx, 0x10);
    if (CMP_AE(ebx, MEM32(ebp + 0x1C))) goto loc_0054AD00; /* jae: above or equal (unsigned >=) */

loc_0054AB01: ;
    if (CMP_AE(edi, MEM32(ebp + 8))) goto loc_0054AD00; /* jae: above or equal (unsigned >=) */

loc_0054AB0A: ;
    goto loc_0054AB37;

    /* nop */

loc_0054AB10: ;
    edx = esi;
    MEM8(edi) = LO8(eax);
    edx = edx >> 0x16;
    edi++;
    eax = (uint32_t)(int32_t)SMEM16(ebp + edx * 2 + 0x3C);
    SET_LO8(ecx, 0xF);
    if (TEST_S(eax, eax)) goto loc_0054AB5B; /* jl: less (signed <) */

loc_0054AB23: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    eax = eax >> 4;
    esi = esi << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    if (CMP_L((uint32_t)HI8(ecx) + (uint32_t)LO8(ecx), (uint32_t)LO8(ecx))) goto loc_0054AB81; /* jl: less (signed <) */

loc_0054AB2E: ;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054AB10; /* jl: less (signed <) */

loc_0054AB35: ;
    goto loc_0054ABB1;

loc_0054AB37: ;
    edx = esi;
    SET_LO8(ecx, 0xF);
    edx = edx >> 0x16;
    eax = (uint32_t)(int32_t)SMEM16(ebp + edx * 2 + 0x3C);
    if (TEST_S(eax, eax)) goto loc_0054AB5B; /* jl: less (signed <) */

loc_0054AB47: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    eax = eax >> 4;
    esi = esi << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    if (CMP_L((uint32_t)HI8(ecx) + (uint32_t)LO8(ecx), (uint32_t)LO8(ecx))) goto loc_0054AB81; /* jl: less (signed <) */

loc_0054AB52: ;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054AB10; /* jl: less (signed <) */

loc_0054AB59: ;
    goto loc_0054ABB1;

loc_0054AB5B: ;
    esi = esi << 0xA;

loc_0054AB5E: ;
    esi = esi + esi;
    eax = eax + 0 + _cf; /* adc */
    eax = (uint32_t)(int32_t)SMEM16(ebp + eax * 2 + 0x1003C);
    if (TEST_S(eax, eax)) goto loc_0054AB5E; /* jl: less (signed <) */

loc_0054AB6F: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    eax = eax >> 4;
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    if (CMP_L((uint32_t)HI8(ecx) + (uint32_t)LO8(ecx), (uint32_t)LO8(ecx))) goto loc_0054AB81; /* jl: less (signed <) */

loc_0054AB78: ;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054AB10; /* jl: less (signed <) */

loc_0054AB7F: ;
    goto loc_0054ABB1;

loc_0054AB81: ;
    if (CMP_AE(ebx, MEM32(ebp + 0x1C))) goto loc_0054AD4A; /* jae: above or equal (unsigned >=) */

loc_0054AB8A: ;
    if (CMP_AE(edi, MEM32(ebp + 8))) goto loc_0054AD4A; /* jae: above or equal (unsigned >=) */

loc_0054AB93: ;
    SET_LO8(ecx, HI8(ecx));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ebx = ebx + 2;
    edx = edx << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) + 0x10);
    esi = esi + edx;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054AB10; /* jl: less (signed <) */

loc_0054ABB1: ;
    SET_LO8(ecx, LO8(eax));
    edx = esi;
    SET_LO8(ecx, LO8(ecx) >> 4);
    edx = edx | 1;
    esi = esi << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    edx = ROR32(edx, 1);
    SET_LO8(ecx, LO8(ecx) ^ 0x1F);
    eax = eax & 0xF;
    edx = edx >> LO8(ecx);
    PUSH32(esp, esi);
    edx = (uint32_t)(-(int32_t)edx);
    if (CMP_A(eax, 5)) goto loc_0054AC41; /* ja: above (unsigned >) */

loc_0054ABD1: ;
    esi = edi + edx;
    if (CMP_AE(edx, 0xFFFFFFFDu)) goto loc_0054ABFB; /* jae: above or equal (unsigned >=) */

loc_0054ABD9: ;
    if (CMP_B(esi, MEM32(ebp + 4))) goto loc_0054AE08; /* jb: below (unsigned <) */

loc_0054ABE2: ;
    edx = MEM32(esi);
    MEM32(edi) = edx;
    edx = MEM32(esi + 4);
    MEM32(edi + 4) = edx;
    POP32(esp, esi);
    edi = edi + eax + 3;
    if (CMP_GE(HI8(ecx) & HI8(ecx), 0)) goto loc_0054AB37; /* jge: greater or equal (signed >=) */

loc_0054ABF9: ;
    goto loc_0054AC78;

loc_0054ABFB: ;
    if (CMP_B(esi, MEM32(ebp + 4))) goto loc_0054AE08; /* jb: below (unsigned <) */

loc_0054AC04: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 4));
    MEM8(edi + 4) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 5));
    MEM8(edi + 5) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 6));
    MEM8(edi + 6) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 7));
    MEM8(edi + 7) = LO8(edx);
    POP32(esp, esi);
    edi = edi + eax + 3;
    if (CMP_GE(HI8(ecx) & HI8(ecx), 0)) goto loc_0054AB37; /* jge: greater or equal (signed >=) */

loc_0054AC3F: ;
    goto loc_0054AC78;

loc_0054AC41: ;
    if (CMP_EQ(eax, 0xF)) goto loc_0054ACA2; /* je: equal / zero */

loc_0054AC46: ;
    esi = edi + edx;
    eax = eax + 3;
    edx = edi + eax;
    if (CMP_B(esi, MEM32(ebp + 4))) goto loc_0054AE08; /* jb: below (unsigned <) */

loc_0054AC58: ;
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    if (CMP_AE(edx, MEM32(ebp + 8))) goto loc_0054ADA9; /* jae: above or equal (unsigned >=) */

loc_0054AC62: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_HI8(ecx, HI8(eax));
    POP32(esp, esi);
    if (CMP_AE(edi, MEM32(ebp + 8))) goto loc_0054ADBD; /* jae: above or equal (unsigned >=) */

loc_0054AC70: ;
    if (CMP_GE(HI8(ecx) & HI8(ecx), 0)) goto loc_0054AB37; /* jge: greater or equal (signed >=) */

loc_0054AC78: ;
    if (CMP_AE(ebx, MEM32(ebp + 0x1C))) goto loc_0054ADC5; /* jae: above or equal (unsigned >=) */

loc_0054AC81: ;
    if (CMP_AE(edi, MEM32(ebp + 8))) goto loc_0054ADC5; /* jae: above or equal (unsigned >=) */

loc_0054AC8A: ;
    SET_LO8(ecx, HI8(ecx));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ebx = ebx + 2;
    edx = edx << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) + 0x10);
    esi = esi + edx;
    goto loc_0054AB37;

loc_0054ACA2: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    eax = eax + 0xF;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0054AC46; /* jne: not equal / not zero */

loc_0054ACAE: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    ebx = ebx + 2;
    if (CMP_AE(LO16(eax), 0x10E)) goto loc_0054AC46; /* jae: above or equal (unsigned >=) */

loc_0054ACBC: ;
    goto loc_0054AE09;

    goto loc_0054ACD0;

    /* nop */
    /* nop */

loc_0054ACD0: ;
    if (CMP_AE(edi, MEM32(ebp + 0xC))) goto loc_0054AE1E; /* jae: above or equal (unsigned >=) */

loc_0054ACD9: ;
    edx = esi;
    MEM8(edi) = LO8(eax);
    edx = edx >> 0x16;
    edi++;
    eax = (uint32_t)(int32_t)SMEM16(ebp + edx * 2 + 0x3C);
    SET_LO8(ecx, 0xF);
    if (TEST_S(eax, eax)) goto loc_0054AD24; /* jl: less (signed <) */

loc_0054ACEC: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    eax = eax >> 4;
    esi = esi << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    if (CMP_L((uint32_t)HI8(ecx) + (uint32_t)LO8(ecx), (uint32_t)LO8(ecx))) goto loc_0054AD4A; /* jl: less (signed <) */

loc_0054ACF7: ;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054ACD0; /* jl: less (signed <) */

loc_0054ACFE: ;
    goto loc_0054AD71;

loc_0054AD00: ;
    edx = esi;
    SET_LO8(ecx, 0xF);
    edx = edx >> 0x16;
    eax = (uint32_t)(int32_t)SMEM16(ebp + edx * 2 + 0x3C);
    if (TEST_S(eax, eax)) goto loc_0054AD24; /* jl: less (signed <) */

loc_0054AD10: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    eax = eax >> 4;
    esi = esi << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    if (CMP_L((uint32_t)HI8(ecx) + (uint32_t)LO8(ecx), (uint32_t)LO8(ecx))) goto loc_0054AD4A; /* jl: less (signed <) */

loc_0054AD1B: ;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054ACD0; /* jl: less (signed <) */

loc_0054AD22: ;
    goto loc_0054AD71;

loc_0054AD24: ;
    esi = esi << 0xA;

loc_0054AD27: ;
    esi = esi + esi;
    eax = eax + 0 + _cf; /* adc */
    eax = (uint32_t)(int32_t)SMEM16(ebp + eax * 2 + 0x1003C);
    if (TEST_S(eax, eax)) goto loc_0054AD27; /* jl: less (signed <) */

loc_0054AD38: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    eax = eax >> 4;
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    if (CMP_L((uint32_t)HI8(ecx) + (uint32_t)LO8(ecx), (uint32_t)LO8(ecx))) goto loc_0054AD4A; /* jl: less (signed <) */

loc_0054AD41: ;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054ACD0; /* jl: less (signed <) */

loc_0054AD48: ;
    goto loc_0054AD71;

loc_0054AD4A: ;
    if (CMP_AE(ebx, MEM32(ebp + 0x28))) goto loc_0054AE09; /* jae: above or equal (unsigned >=) */

loc_0054AD53: ;
    SET_LO8(ecx, HI8(ecx));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ebx = ebx + 2;
    edx = edx << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) + 0x10);
    esi = esi + edx;
    eax = eax - 0x100;
    if (CMP_L((uint32_t)eax + (uint32_t)0x100, (uint32_t)0x100)) goto loc_0054ACD0; /* jl: less (signed <) */

loc_0054AD71: ;
    if (CMP_AE(edi, MEM32(ebp + 0xC))) goto loc_0054AE0D; /* jae: above or equal (unsigned >=) */

loc_0054AD7A: ;
    SET_LO8(ecx, LO8(eax));
    edx = esi;
    SET_LO8(ecx, LO8(ecx) >> 4);
    edx = edx | 1;
    esi = esi << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) - LO8(ecx));
    edx = ROR32(edx, 1);
    SET_LO8(ecx, LO8(ecx) ^ 0x1F);
    eax = eax & 0xF;
    edx = edx >> LO8(ecx);
    PUSH32(esp, esi);
    edx = (uint32_t)(-(int32_t)edx);
    if (CMP_EQ(eax, 0xF)) goto loc_0054ADE2; /* je: equal / zero */

loc_0054AD9A: ;
    esi = edi + edx;
    eax = eax + 3;
    edx = edi + eax;
    if (CMP_B(esi, MEM32(ebp + 4))) goto loc_0054AE08; /* jb: below (unsigned <) */

loc_0054ADA8: ;
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }

loc_0054ADA9: ;
    if (CMP_BE(edx, MEM32(ebp + 0xC))) goto loc_0054ADB8; /* jbe: below or equal (unsigned <=) */

loc_0054ADAE: ;
    edx = edx - MEM32(ebp + 0xC);
    ecx = ecx - edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, esi);
    goto loc_0054AE1E;

loc_0054ADB8: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_HI8(ecx, HI8(eax));
    POP32(esp, esi);

loc_0054ADBD: ;
    if (CMP_GE(HI8(ecx) & HI8(ecx), 0)) goto loc_0054AD00; /* jge: greater or equal (signed >=) */

loc_0054ADC5: ;
    if (CMP_AE(ebx, MEM32(ebp + 0x28))) goto loc_0054AE09; /* jae: above or equal (unsigned >=) */

loc_0054ADCA: ;
    SET_LO8(ecx, HI8(ecx));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ebx = ebx + 2;
    edx = edx << LO8(ecx);
    SET_HI8(ecx, HI8(ecx) + 0x10);
    esi = esi + edx;
    goto loc_0054AD00;

loc_0054ADE2: ;
    if (CMP_AE(ebx, MEM32(ebp + 0x14))) goto loc_0054AE08; /* jae: above or equal (unsigned >=) */

loc_0054ADE7: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    eax = eax + 0xF;
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0054AD9A; /* jne: not equal / not zero */

loc_0054ADF3: ;
    if (CMP_AE(ebx, MEM32(ebp + 0x20))) goto loc_0054AE08; /* jae: above or equal (unsigned >=) */

loc_0054ADF8: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    ebx = ebx + 2;
    if (CMP_AE(LO16(eax), 0x10E)) goto loc_0054AD9A; /* jae: above or equal (unsigned >=) */

loc_0054AE06: ;
    goto loc_0054AE09;

loc_0054AE08: ;
    POP32(esp, eax);

loc_0054AE09: ;
    eax = 0; /* xor self */
    goto loc_0054AE23;

loc_0054AE0D: ;
    if (CMP_NE(edi, MEM32(ebp))) goto loc_0054AE1E; /* jne: not equal / not zero */

loc_0054AE12: ;
    if (TEST_NZ(eax, eax)) goto loc_0054AE1E; /* jne: not equal / not zero */

loc_0054AE16: ;
    eax = 1;
    MEM32(ebp + 0x34) = eax;

loc_0054AE1E: ;
    eax = 1;

loc_0054AE23: ;
    MEM32(ebp + 0x30) = eax;
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x10) = edi;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0054AE40
 * Original: 0x0054AE40 - 0x0054AF89 (329 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054AE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054AE40: ;
    eax = 0x1140;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0054AE4A: ;
    eax = MEM32(esp + 0x1148);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1150);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    edx = esp + 0xC;
    edx = edx & 0xFF;
    esi = esp + 0x10C;
    esi = esi - edx;
    edx = MEM32(esp + 0x1150);
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    if (CMP_G(ebp, eax)) ebp = eax; /* cmovg */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esi + 0x18) = edx;
    if (CMP_EQ(edi, eax)) { sub_0054AF89(); return; } /* je: equal / zero */

loc_0054AE87: ;
    if (TEST_Z(ebp, ebp)) { sub_0054AF89(); return; } /* je: equal / zero */

loc_0054AE8F: ;
    if (CMP_L(eax, edi)) goto loc_0054AF7A; /* jl: less (signed <) */

loc_0054AE97: ;
    if (TEST_S(edi, edi)) goto loc_0054AF7A; /* jl: less (signed <) */

loc_0054AE9F: ;
    if (CMP_LE(eax, 0x105)) goto loc_0054AF7A; /* jle: less or equal (signed <=) */

loc_0054AEAA: ;
    if (CMP_L(edi, 0x105)) goto loc_0054AF7A; /* jl: less (signed <) */

loc_0054AEB6: ;
    if (CMP_G(eax, 0x10000)) goto loc_0054AF7A; /* jg: greater (signed >) */

loc_0054AEC1: ;
    if (TEST_S(ebp, ebp)) goto loc_0054AF7A; /* jl: less (signed <) */

loc_0054AEC9: ;
    eax = eax + ecx;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x115C);
    eax = eax + edi;
    edi = eax + -1;
    edx = ecx + ebp;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x28) = edi;
    edi = edx;
    PUSH32(esp, ebx);
    edi = edi - ecx;
    (void)0; /* cmp edi, 0x108 - flags set for next jcc */
    ebx = eax + -3;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 8) = ecx;
    if (CMP_BE(edi, 0x108)) goto loc_0054AF0A; /* jbe: below or equal (unsigned <=) */

loc_0054AF01: ;
    edx = edx + 0xFFFFFEF8u;
    MEM32(esi + 8) = edx;

loc_0054AF0A: ;
    ecx = MEM32(esp + 0x1154);
    edx = eax;
    edx = edx - ecx;
    (void)0; /* cmp edx, 0xE8 - flags set for next jcc */
    MEM32(esi + 0x1C) = ecx;
    if (CMP_BE(edx, 0xE8)) goto loc_0054AF28; /* jbe: below or equal (unsigned <=) */

loc_0054AF20: ;
    eax = eax + 0xFFFFFF18u;
    MEM32(esi + 0x1C) = eax;

loc_0054AF28: ;
    edi = MEM32(esp + 0x1160);
    PUSH32(esp, edi);
    ebx = esi + 0x3C;
    PUSH32(esp, 0); sub_0054A920(); /* call 0x0054A920 */

loc_0054AF38: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0054AF7A; /* je: equal / zero */

loc_0054AF40: ;
    edi = edi + 0x100;
    MEM32(esi + 0x18) = edi;
    edi = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0); sub_0054AAD0(); /* call 0x0054AAD0 */

loc_0054AF57: ;
    eax = MEM32(esi + 0x30);
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_0054AF7A; /* je: equal / zero */

loc_0054AF61: ;
    eax = MEM32(esi + 0xC);
    if (CMP_A(MEM32(esi + 0x10), eax)) goto loc_0054AF7A; /* ja: above (unsigned >) */

loc_0054AF69: ;
    ecx = MEM32(esi + 0x2C);
    if (CMP_A(ecx, MEM32(esi + 0x14))) goto loc_0054AF7A; /* ja: above (unsigned >) */

loc_0054AF71: ;
    if (CMP_NE(eax, MEM32(esi))) { sub_0054AF89(); return; } /* jne: not equal / not zero */

loc_0054AF75: ;
    if (CMP_NE(MEM32(esi + 0x34), edi)) { sub_0054AF89(); return; } /* jne: not equal / not zero */

loc_0054AF7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x1140;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054AFA0
 * Original: 0x0054AFA0 - 0x0054AFAF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054AFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054AFA0: ;
    eax = ZX8(MEM8(0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0054AFAF(); return; } /* je: equal / zero */

loc_0054AFAC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0054AFBE
 * Original: 0x0054AFBE - 0x0054AFCB (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054AFBE(void)
{

loc_0054AFBE: ;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054AFC3: ;
    eax = ZX8(LO8(eax));
    MEM32(esi) = eax;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0054AFCB
 * Original: 0x0054AFCB - 0x0054B008 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054AFCB(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054AFCB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054AFD4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = ZX8(LO8(eax));
    eax = esi;
    esi = esi + 0xFFFFFFF8u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0054C33E(); /* call 0x0054C33E */

loc_0054AFF0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0054B001; /* je: equal / zero */

loc_0054AFF6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B001: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054B008
 * Original: 0x0054B008 - 0x0054B045 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B008(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054B008: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B011: ;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = ZX8(LO8(eax));
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esi;
    esi = esi + 0xFFFFFFF8u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C3EB(); /* call 0x0054C3EB */

loc_0054B02D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0054B03E; /* je: equal / zero */

loc_0054B033: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B03E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054B045
 * Original: 0x0054B045 - 0x0054B07E (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B045(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054B045: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B04E: ;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ZX8(LO8(eax));
    eax = esi;
    esi = esi + 0xFFFFFFF8u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C463(); /* call 0x0054C463 */

loc_0054B066: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0054B077; /* je: equal / zero */

loc_0054B06C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B077: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054B07E
 * Original: 0x0054B07E - 0x0054B0B1 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B07E(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054B07E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B087: ;
    edi = ZX8(LO8(eax));
    eax = esi;
    esi = esi + 0xFFFFFFF8u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C4D9(); /* call 0x0054C4D9 */

loc_0054B09B: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0054B0AC; /* je: equal / zero */

loc_0054B0A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B0AC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054B0B1
 * Original: 0x0054B0B1 - 0x0054B10B (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B0B1(void)
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

loc_0054B0B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B0BB: ;
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = ZX8(LO8(eax));
    esp = esp - 0x18;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054C6DB(); /* call 0x0054C6DB */

loc_0054B0F2: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0054B103; /* je: equal / zero */

loc_0054B0F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B103: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0054B10B
 * Original: 0x0054B10B - 0x0054B144 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B10B(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054B10B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B114: ;
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ZX8(LO8(eax));
    eax = esi;
    esi = esi + 0xFFFFFFF8u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C783(); /* call 0x0054C783 */

loc_0054B12C: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0054B13D; /* je: equal / zero */

loc_0054B132: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B13D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054B144
 * Original: 0x0054B144 - 0x0054B17B (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B144(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B144: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B14B: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ZX8(LO8(eax));
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_0054D6F9(); /* call 0x0054D6F9 */

loc_0054B163: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0054B174; /* je: equal / zero */

loc_0054B169: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B174: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054B17B
 * Original: 0x0054B17B - 0x0054B19D (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B17B(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054B17B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(0x24));
    SET_LO8(ecx, 2);
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esi + 4) = eax;
    if ((eax == 0)) goto loc_0054B19B; /* je: equal / zero */

loc_0054B193: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561204), _icall_esp); /* indirect call */
    }

loc_0054B199: ;
    MEM8(esi) = LO8(eax);

loc_0054B19B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054B19D
 * Original: 0x0054B19D - 0x0054B1CF (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B19D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B19D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B1A4: ;
    esi = MEM32(0x555774);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = ZX8(LO8(eax));
    if (TEST_Z(esi, esi)) goto loc_0054B1BD; /* je: equal / zero */

loc_0054B1B1: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_0054B1B6: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054BCBD(); /* call 0x0054BCBD */

loc_0054B1BD: ;
    if (TEST_Z(edi, edi)) goto loc_0054B1CC; /* je: equal / zero */

loc_0054B1C1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B1CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054B1CF
 * Original: 0x0054B1CF - 0x0054B1F4 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B1CF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054B1CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B1D8: ;
    ebx = ZX8(LO8(eax));
    eax = MEM32(0x555774);
    if (TEST_Z(eax, eax)) { sub_0054B1F4(); return; } /* je: equal / zero */

loc_0054B1E4: ;
    edx = MEM32(esp + 0x10);
    ecx = eax + 8;
    MEM32(edx) = ecx;
    PUSH32(esp, 0); sub_0054B434(); /* call 0x0054B434 */

loc_0054B1F2: ;
    g_seh_ebp = ebp; sub_0054B257(); return; /* tail jmp 0x0054B257 */

}

/**
 * sub_0054B26D
 * Original: 0x0054B26D - 0x0054B320 (179 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B26D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B26D: ;
    MEM32(esi) = 0x6460D8;
    MEM32(esi + 8) = 1;
    if (CMP_NE(MEM32(0x55577C), 0)) goto loc_0054B28D; /* jne: not equal / not zero */

loc_0054B283: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0054B288: ;
    MEM32(0x55577C) = eax;

loc_0054B28D: ;
    eax = esi + 0x14;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x1C;
    MEM32(esi + 0x20) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x44;
    MEM32(esi + 0x48) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4C;
    MEM32(esi + 0x50) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x6C;
    MEM32(esi + 0x70) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x24;
    MEM32(esi + 0x28) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x74;
    MEM32(esi + 0x78) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x54;
    MEM32(esi + 0x58) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x2C;
    MEM32(esi + 0x30) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x34;
    MEM32(esi + 0x38) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x3C;
    MEM32(esi + 0x40) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x5C;
    MEM32(esi + 0x60) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x64;
    MEM32(esi + 0x68) = eax;
    MEM32(eax) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    MEM32(0x555774) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_0054B30A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5554E3);
    eax = esi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_0054B31D: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0054B320
 * Original: 0x0054B320 - 0x0054B392 (114 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054B320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x6460D8;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B336: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    eax = ZX8(LO8(eax));
    ecx = ebp + -12;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054B348: ;
    esi = ebx + 0xD8;
    MEM8(esi) = MEM8(esi) & 0xFE;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_0054B360; /* je: equal / zero */

loc_0054B357: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0054B360: ;
    if (TEST_Z(MEM8(esi), 2)) goto loc_0054B372; /* je: equal / zero */

loc_0054B365: ;
    eax = ebx + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0054B372: ;
    eax = ebx;
    PUSH32(esp, 0); sub_005549B8(); /* call 0x005549B8 */

loc_0054B379: ;
    eax = MEM32(ebx + 0x160);
    if (TEST_Z(eax, eax)) goto loc_0054B38B; /* je: equal / zero */

loc_0054B383: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054B413(); /* call 0x0054B413 */

loc_0054B38B: ;
    edi = ebx + 0x14;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_0054B3A1(); return; /* tail jmp 0x0054B3A1 */

}

/**
 * sub_0054B413
 * Original: 0x0054B413 - 0x0054B434 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B413(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B413: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_00554545(); /* call 0x00554545 */

loc_0054B41C: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054B42D; /* je: equal / zero */

loc_0054B423: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054B42C: ;
    POP32(esp, ecx);

loc_0054B42D: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054B434
 * Original: 0x0054B434 - 0x0054B458 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B434(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B434: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B43C: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    esi = MEM32(esi + 8);
    eax = ZX8(LO8(eax));
    if (TEST_Z(eax, eax)) goto loc_0054B454; /* je: equal / zero */

loc_0054B449: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B454: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054B458
 * Original: 0x0054B458 - 0x0054B482 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B458(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B458: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0x555758;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0054B466: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    ebx = MEM32(esi + 8);
    if ((MEM32(esi + 8) != 0)) goto loc_0054B476; /* jne: not equal / not zero */

loc_0054B46E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0054B482(); /* call 0x0054B482 */

loc_0054B476: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B47D: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054B482
 * Original: 0x0054B482 - 0x0054B4A3 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B482(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054B482: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0054B320(); /* call 0x0054B320 */

loc_0054B48B: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054B49C; /* je: equal / zero */

loc_0054B492: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054B49B: ;
    POP32(esp, ecx);

loc_0054B49C: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054B4A3
 * Original: 0x0054B4A3 - 0x0054B58C (233 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B4A3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054B4A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B4B1: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebx + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0);
    eax = ZX8(LO8(eax));
    edi = ebx + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_004C69A3(); /* call 0x004C69A3 */

loc_0054B4D2: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_0054B572; /* jl: less (signed <) */

loc_0054B4DC: ;
    eax = MEM32(ebx + 0x88);
    MEM32(ebx + 0x80) = MEM32(ebx + 0x80) - eax;
    esi = 0; /* xor self */

loc_0054B4EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_004C4FE8(); /* call 0x004C4FE8 */

loc_0054B4F4: ;
    esi++;
    if (CMP_B(esi, 0x20)) goto loc_0054B4EA; /* jb: below (unsigned <) */

loc_0054B4FA: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); sub_005547E9(); /* call 0x005547E9 */

loc_0054B501: ;
    esi = eax;
    edi = 0; /* xor self */
    if (CMP_L(esi, edi)) goto loc_0054B572; /* jl: less (signed <) */

loc_0054B509: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, edi)) goto loc_0054B516; /* jne: not equal / not zero */

loc_0054B513: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_0054B516: ;
    MEM32(ebx + 0x8C) = eax;
    eax = eax + eax * 2;
    PUSH32(esp, 0x6484800C);
    eax = eax << 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054B52D: ;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0x7FF8FFF2;
    esi = esi + 0x8007000Eu;
    if (((int32_t)esi < 0)) goto loc_0054B572; /* js: sign (negative) */

loc_0054B541: ;
    (void)0; /* cmp MEM32(ebx + 0x8C), edi - flags set for next jcc */
    MEM32(ebx + 0x7C) = eax;
    if (CMP_BE(MEM32(ebx + 0x8C), edi)) goto loc_0054B572; /* jbe: below or equal (unsigned <=) */

loc_0054B54C: ;
    edx = ebx + 0x74;
    eax = eax + 0x28;

loc_0054B552: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax) = edx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = eax + 0x30;
    edi++;
    if (CMP_B(edi, MEM32(ebx + 0x8C))) goto loc_0054B552; /* jb: below (unsigned <) */

loc_0054B572: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054B583; /* je: equal / zero */

loc_0054B578: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054B583: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054B58C
 * Original: 0x0054B58C - 0x0054B5D9 (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B58C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054B58C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B599: ;
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    eax = ebx + 0x64;
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(esi, eax)) goto loc_0054B5D1; /* je: equal / zero */

loc_0054B5B2: ;
    eax = MEM32(ebp + 0xC);
    ecx = esi + -8;
    (void)0; /* cmp MEM32(ecx + 0x14), eax - flags set for next jcc */
    esi = MEM32(esi);
    if (CMP_NE(MEM32(ecx + 0x14), eax)) goto loc_0054B5CC; /* jne: not equal / not zero */

loc_0054B5BF: ;
    if (TEST_NZ(MEM8(ecx + 0x38), 4)) goto loc_0054B5CC; /* jne: not equal / not zero */

loc_0054B5C5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0054FAB1(); /* call 0x0054FAB1 */

loc_0054B5CC: ;
    if (CMP_NE(esi, MEM32(ebp + -4))) goto loc_0054B5B2; /* jne: not equal / not zero */

loc_0054B5D1: ;
    eax = ebx + 0x54;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    g_seh_ebp = ebp; sub_0054B616(); return; /* tail jmp 0x0054B616 */

}

/**
 * sub_0054B6B4
 * Original: 0x0054B6B4 - 0x0054B6C4 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B6B4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054B6B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B6BA: ;
    ecx = esi + 0x64;
    ebx = ZX8(LO8(eax));
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_0054B6CE(); return; /* tail jmp 0x0054B6CE */

}

/**
 * sub_0054B710
 * Original: 0x0054B710 - 0x0054B83D (301 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054B710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = edi + 0x24;
    esi = MEM32(ebx);
    if (CMP_EQ(esi, ebx)) goto loc_0054B782; /* je: equal / zero */

loc_0054B724: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 2;
    MEM32(ebp + -4) = eax;

loc_0054B72D: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    edi = esi;
    esi = MEM32(esi);
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_0054B742; /* jne: not equal / not zero */

loc_0054B737: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0054BBC0(); /* call 0x0054BBC0 */

loc_0054B73E: ;
    if (TEST_NZ(eax, eax)) goto loc_0054B77B; /* jne: not equal / not zero */

loc_0054B742: ;
    if (TEST_Z(MEM8(edi + 0xF), 0x80)) goto loc_0054B74F; /* je: equal / zero */

loc_0054B748: ;
    PUSH32(esp, 0xEE840013u);
    goto loc_0054B754;

loc_0054B74F: ;
    PUSH32(esp, 0x64840013);

loc_0054B754: ;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054B75C: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, 0x6484800E);
    MEM32(eax) = ecx;
    PUSH32(esp, edi);
    MEM32(edi + 4) = edi;
    MEM32(edi) = edi;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054B77B: ;
    if (CMP_NE(esi, ebx)) goto loc_0054B72D; /* jne: not equal / not zero */

loc_0054B77F: ;
    edi = MEM32(ebp + 8);

loc_0054B782: ;
    eax = edi + 0x1C;
    ebx = MEM32(eax);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(ebx, eax)) goto loc_0054B829; /* je: equal / zero */

loc_0054B792: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 1;
    MEM32(ebp + 0xC) = eax;

loc_0054B79B: ;
    eax = MEM32(ebp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ebx;
    ebx = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_0054B7D2; /* je: equal / zero */

loc_0054B7A6: ;
    if (CMP_NE(MEM32(esi + 0xC), eax)) goto loc_0054B7D2; /* jne: not equal / not zero */

loc_0054B7AB: ;
    PUSH32(esp, 0);
    edi = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_0054E22F(); /* call 0x0054E22F */

loc_0054B7B6: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x1C), eax)) goto loc_0054B7C8; /* je: equal / zero */

loc_0054B7BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0054E5E6(); /* call 0x0054E5E6 */

loc_0054B7C6: ;
    goto loc_0054B7CF;

loc_0054B7C8: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054E8EF(); /* call 0x0054E8EF */

loc_0054B7CF: ;
    edi = MEM32(ebp + 8);

loc_0054B7D2: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_0054B7E3; /* jne: not equal / not zero */

loc_0054B7D8: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054E1D8(); /* call 0x0054E1D8 */

loc_0054B7DF: ;
    if (TEST_NZ(eax, eax)) goto loc_0054B820; /* jne: not equal / not zero */

loc_0054B7E3: ;
    if (CMP_EQ(MEM32(esi + 0x1C), 0)) goto loc_0054B7F5; /* je: equal / zero */

loc_0054B7E9: ;
    eax = ZX16(MEM16(esi + 0x10));
    MEM32(edi + 0x80) = MEM32(edi + 0x80) + eax;
    goto loc_0054B805;

loc_0054B7F5: ;
    if (CMP_EQ(MEM32(esi + 0x20), 0)) goto loc_0054B805; /* je: equal / zero */

loc_0054B7FB: ;
    eax = ZX16(MEM16(esi + 0x10));
    MEM32(edi + 0x88) = MEM32(edi + 0x88) + eax;

loc_0054B805: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    eax = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_0054B820: ;
    if (CMP_NE(ebx, MEM32(ebp + -4))) goto loc_0054B79B; /* jne: not equal / not zero */

loc_0054B829: ;
    ebx = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054B836: ;
    edi = edi + 0x34;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_0054B87C(); return; /* tail jmp 0x0054B87C */

}

/**
 * sub_0054B895
 * Original: 0x0054B895 - 0x0054B897 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B895(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054B895: ;
    g_seh_ebp = ebp; sub_0054B8B6(); return; /* tail jmp 0x0054B8B6 */

}

/**
 * sub_0054B8CC
 * Original: 0x0054B8CC - 0x0054B941 (117 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B8CC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054B8CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(MEM8(ebp + 8), 2)) goto loc_0054B8E9; /* je: equal / zero */

loc_0054B8DA: ;
    edi = eax + 0x84;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0054B918; /* je: equal / zero */

loc_0054B8E6: ;
    eax--;
    goto loc_0054B921;

loc_0054B8E9: ;
    if (TEST_Z(MEM8(ebp + 8), 1)) goto loc_0054B923; /* je: equal / zero */

loc_0054B8EF: ;
    (void)0; /* test MEM8(ebp + 0xB), 0x40 - flags set for next jcc */
    esi = MEM32(ebp + 0xC);
    edi = eax + 0x88;
    if (TEST_NZ(MEM8(ebp + 0xB), 0x40)) goto loc_0054B904; /* jne: not equal / not zero */

loc_0054B8FE: ;
    edi = eax + 0x80;

loc_0054B904: ;
    if (CMP_AE(MEM32(edi), esi)) goto loc_0054B912; /* jae: above or equal (unsigned >=) */

loc_0054B908: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054B710(); /* call 0x0054B710 */

loc_0054B912: ;
    eax = MEM32(edi);
    if (CMP_AE(eax, esi)) goto loc_0054B91F; /* jae: above or equal (unsigned >=) */

loc_0054B918: ;
    ebx = 0x80004005u;
    g_seh_ebp = ebp; sub_0054B986(); return; /* tail jmp 0x0054B986 */

loc_0054B91F: ;
    eax = eax - esi;

loc_0054B921: ;
    MEM32(edi) = eax;

loc_0054B923: ;
    PUSH32(esp, 0x6484A006);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054B932: ;
    if (TEST_Z(eax, eax)) { sub_0054B941(); return; } /* je: equal / zero */

loc_0054B936: ;
    ebx = eax;
    PUSH32(esp, 0); sub_0054DDBC(); /* call 0x0054DDBC */

loc_0054B93D: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0054B943(); return; /* tail jmp 0x0054B943 */

}

/**
 * sub_0054B98F
 * Original: 0x0054B98F - 0x0054B9A6 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B98F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054B98F: ;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054B994: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    if (TEST_Z(LO8(eax), 2)) { sub_0054B9A6(); return; } /* je: equal / zero */

loc_0054B99E: ;
    MEM32(edi + 0x84) = MEM32(edi + 0x84) + 1;
    g_seh_ebp = ebp; sub_0054B9D9(); return; /* tail jmp 0x0054B9D9 */

}

/**
 * sub_0054B9E9
 * Original: 0x0054B9E9 - 0x0054BA67 (126 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054B9E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054B9E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi + 0x5C;
    ebx = MEM32(edi);
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(ebx, edi)) { sub_0054BA67(); return; } /* je: equal / zero */

loc_0054BA03: ;
    PUSH32(esp, esi);

loc_0054BA04: ;
    esi = ebx;
    eax = MEM32(esi + 0x44);
    ecx = ZX16(MEM16(eax + 0x18));
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 4);
    ebx = MEM32(ebx);
    ecx = ecx + ecx * 4;
    if (TEST_NZ(MEM8(eax + ecx * 4 + 0x38), 8)) goto loc_0054BA40; /* jne: not equal / not zero */

loc_0054BA1F: ;
    eax = MEM32(esi + 0x10);
    eax = ZX8(MEM8(eax + 0xE));
    (void)0; /* cmp eax, MEM32(ebp + -4) - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_B(eax, MEM32(ebp + -4))) goto loc_0054BA40; /* jb: below (unsigned <) */

loc_0054BA2E: ;
    PUSH32(esp, 0); sub_00551ADF(); /* call 0x00551ADF */

loc_0054BA33: ;
    if (TEST_Z(eax, eax)) goto loc_0054BA40; /* je: equal / zero */

loc_0054BA37: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = esi;

loc_0054BA40: ;
    if (CMP_NE(ebx, edi)) goto loc_0054BA04; /* jne: not equal / not zero */

loc_0054BA44: ;
    ecx = MEM32(ebp + -8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_0054BA67(); return; } /* je: equal / zero */

loc_0054BA4C: ;
    if (CMP_EQ(MEM16(ecx + 0x30), 4)) goto loc_0054BA5C; /* je: equal / zero */

loc_0054BA53: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_0054BA5A: ;
    goto loc_0054BA63;

loc_0054BA5C: ;
    edi = ecx;
    PUSH32(esp, 0); sub_005531AD(); /* call 0x005531AD */

loc_0054BA63: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0054BA6C(); return; /* tail jmp 0x0054BA6C */

}

/**
 * sub_0054BA70
 * Original: 0x0054BA70 - 0x0054BB82 (274 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054BA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054BA88: ;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(0x555774);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0054B8CC(); /* call 0x0054B8CC */

loc_0054BAA2: ;
    ebx = eax;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0054BB32; /* jge: greater or equal (signed >=) */

loc_0054BAAC: ;
    eax = esi + 0x44;
    ecx = MEM32(eax);
    goto loc_0054BADE;

loc_0054BAB3: ;
    edx = ecx + -88;
    edi = MEM32(edx + 0x1C);
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = MEM32(ecx);
    if (TEST_Z(edi, edi)) goto loc_0054BAC8; /* je: equal / zero */

loc_0054BABF: ;
    edi = MEM32(edi);
    edi = ~edi;
    edi = edi & 1;
    goto loc_0054BACA;

loc_0054BAC8: ;
    edi = 0; /* xor self */

loc_0054BACA: ;
    if (TEST_Z(edi, edi)) goto loc_0054BADE; /* je: equal / zero */

loc_0054BACE: ;
    if (TEST_NZ(MEM8(ebp + 0xF), 0x40)) goto loc_0054BADE; /* jne: not equal / not zero */

loc_0054BAD4: ;
    edi = MEM32(edx + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (TEST_NZ(edi, edi)) goto loc_0054BAE4; /* jne: not equal / not zero */

loc_0054BADE: ;
    if (CMP_NE(ecx, eax)) goto loc_0054BAB3; /* jne: not equal / not zero */

loc_0054BAE2: ;
    goto loc_0054BAE9;

loc_0054BAE4: ;
    MEM32(ebp + -8) = edx;
    ebx = 0; /* xor self */

loc_0054BAE9: ;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0054BB27; /* jge: greater or equal (signed >=) */

loc_0054BAED: ;
    eax = MEM32(ebp + 8);
    ecx = esi;
    PUSH32(esp, 0); sub_0054B9E9(); /* call 0x0054B9E9 */

loc_0054BAF7: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0054BB40; /* jl: less (signed <) */

loc_0054BAFD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0054BA70(); /* call 0x0054BA70 */

loc_0054BB10: ;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0054BB23; /* je: equal / zero */

loc_0054BB18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054BB23: ;
    eax = esi;
    goto loc_0054BB7B;

loc_0054BB27: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_0054BB32; /* je: equal / zero */

loc_0054BB2E: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;

loc_0054BB32: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_0054E199(); /* call 0x0054E199 */

loc_0054BB3A: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_0054BB60; /* jge: greater or equal (signed >=) */

loc_0054BB40: ;
    esi = MEM32(ebp + -4);
    if (TEST_Z(esi, esi)) goto loc_0054BB5A; /* je: equal / zero */

loc_0054BB47: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_0054BB53; /* je: equal / zero */

loc_0054BB4E: ;
    MEM32(eax + 0x14) = esi;
    goto loc_0054BB5A;

loc_0054BB53: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_0054BB5A: ;
    if (TEST_S(edi, edi)) goto loc_0054BB68; /* jl: less (signed <) */

loc_0054BB5E: ;
    goto loc_0054BB63;

loc_0054BB60: ;
    esi = MEM32(ebp + -4);

loc_0054BB63: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;

loc_0054BB68: ;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0054BB79; /* je: equal / zero */

loc_0054BB6E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054BB79: ;
    eax = edi;

loc_0054BB7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054BB82
 * Original: 0x0054BB82 - 0x0054BB8A (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BB82(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054BB82: ;
    edx = edx + 0x54;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_0054BB9B(); return; /* tail jmp 0x0054BB9B */

}

/**
 * sub_0054BBC0
 * Original: 0x0054BBC0 - 0x0054BC03 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BBC0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054BBC0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ecx = ecx + 0x18;
    edx = 0x8000000Au;

loc_0054BBCB: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 0xDEAD)) goto loc_0054BBF6; /* je: equal / zero */

loc_0054BBD4: ;
    if (CMP_NE(eax, 0xAAAA)) goto loc_0054BBF1; /* jne: not equal / not zero */

loc_0054BBDB: ;
    eax = MEM32(ecx + 4);
    eax = eax - 0x103;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FFFFFF6;
    eax = eax + edx;
    MEM32(ecx + -8) = eax;

loc_0054BBF1: ;
    if (CMP_EQ(MEM32(ecx + -8), edx)) { sub_0054BC03(); return; } /* je: equal / zero */

loc_0054BBF6: ;
    esi++;
    ecx = ecx + 0x20;
    if (CMP_B(esi, 2)) goto loc_0054BBCB; /* jb: below (unsigned <) */

loc_0054BBFF: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054BC08
 * Original: 0x0054BC08 - 0x0054BCBD (181 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BC08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054BC08: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6484800E);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054BC17: ;
    esi = eax;
    edi = esi;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x7FF8FFF2;
    ebp = 0x8007000Eu;
    edi = edi + ebp;
    if (((int32_t)edi < 0)) goto loc_0054BCB5; /* js: sign (negative) */

loc_0054BC32: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    ecx++;
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_0054BC4C; /* je: equal / zero */

loc_0054BC44: ;
    SET_LO8(eax, LO8(eax) & 0x1C);
    if (CMP_A(LO8(eax), 8)) goto loc_0054BC4C; /* ja: above (unsigned >) */

loc_0054BC4A: ;
    ecx = 0; /* xor self */

loc_0054BC4C: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = eax & 0x7FFFFFFF;
    ecx = ecx << 0x1F;
    eax = eax | ecx;
    ebx = ebx + ebx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (((int32_t)(eax & eax) >= 0)) goto loc_0054BC6E; /* jns: not sign (positive) */

loc_0054BC67: ;
    PUSH32(esp, 0xEE840013u);
    goto loc_0054BC73;

loc_0054BC6E: ;
    PUSH32(esp, 0x64840013);

loc_0054BC73: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054BC79: ;
    MEM32(esi + 8) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + ebp;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_0054BC9A; /* jge: greater or equal (signed >=) */

loc_0054BC8D: ;
    PUSH32(esp, 0x6484800E);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054BC98: ;
    goto loc_0054BCB4;

loc_0054BC9A: ;
    eax = MEM32(esi + 0xC);
    eax = eax & 0x80000000u;
    ebx = ebx >> 1;
    eax = eax | ebx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;
    MEM32(eax) = esi;

loc_0054BCB4: ;
    POP32(esp, ebx);

loc_0054BCB5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0054BCBD
 * Original: 0x0054BCBD - 0x0054BD25 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BCBD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054BCBD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054BCCD: ;
    eax = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    ecx = ebp + -12;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054BCE0: ;
    esi = MEM32(0x5610E8);
    ecx = edi + 0xD8;
    SET_LO16(eax, MEM16(ecx));
    if (TEST_Z(LO8(eax), 4)) goto loc_0054BD14; /* je: equal / zero */

loc_0054BCF3: ;
    SET_LO16(eax, LO16(eax) & 0xFFFB);
    (void)0; /* cmp MEM32(ebp + -8), ebx - flags set for next jcc */
    MEM16(ecx) = LO16(eax);
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_0054BD07; /* je: equal / zero */

loc_0054BCFF: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0054BD04: ;
    MEM32(ebp + -8) = ebx;

loc_0054BD07: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, 0); sub_004C652D(); /* call 0x004C652D */

loc_0054BD0F: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054BD14: ;
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_0054BD1E; /* je: equal / zero */

loc_0054BD19: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0054BD1E: ;
    ebx = edi + 0x44;
    esi = MEM32(ebx);
    g_seh_ebp = ebp; sub_0054BD2F(); return; /* tail jmp 0x0054BD2F */

}

/**
 * sub_0054BD83
 * Original: 0x0054BD83 - 0x0054BDA9 (38 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BD83(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054BD83: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ebp + 0x3C;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (CMP_EQ(edi, ebx)) goto loc_0054BDA3; /* je: equal / zero */

loc_0054BD93: ;
    PUSH32(esp, esi);

loc_0054BD94: ;
    esi = edi;
    edi = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0054BE03(); /* call 0x0054BE03 */

loc_0054BD9E: ;
    if (CMP_NE(edi, ebx)) goto loc_0054BD94; /* jne: not equal / not zero */

loc_0054BDA2: ;
    POP32(esp, esi);

loc_0054BDA3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054BDA9
 * Original: 0x0054BDA9 - 0x0054BDC4 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BDA9(void)
{
    uint32_t ebp;

loc_0054BDA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054BDBA: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x6C;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_0054BDD2(); return; /* tail jmp 0x0054BDD2 */

}

/**
 * sub_0054BDE9
 * Original: 0x0054BDE9 - 0x0054BE03 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BDE9(void)
{

loc_0054BDE9: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(eax + 0x160);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_005546D3(); /* call 0x005546D3 */

loc_0054BE00: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0054BE03
 * Original: 0x0054BE03 - 0x0054BEA6 (163 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BE03(void)
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

loc_0054BE03: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x1C);
    fp_push((double)SMEM32(esi + 0x1C)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0054BE17; /* jge: greater or equal (signed >=) */

loc_0054BE11: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0054BE17: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = esi + 0x20;
    SET_LO16(edx, MEM16(ecx));
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0054BE5F; /* jne: not equal / not zero */

loc_0054BE2B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x555688);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_0054BE3A: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0054BE6F; /* jne: not equal / not zero */

loc_0054BE41: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00550C6C(); /* call 0x00550C6C */

loc_0054BE4D: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x24));
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0054C539(); /* call 0x0054C539 */

loc_0054BE5D: ;
    goto loc_0054BE6F;

loc_0054BE5F: ;
    if (CMP_NE(LO16(edx), 1)) goto loc_0054BE6F; /* jne: not equal / not zero */

loc_0054BE65: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_0055041E(); /* call 0x0055041E */

loc_0054BE6F: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1;
    ecx = ZX16(MEM16(esi + 0x26));
    eax = MEM32(esi + 0x1C);
    if (CMP_BE(eax, ecx)) goto loc_0054BEA2; /* jbe: below or equal (unsigned <=) */

loc_0054BE7D: ;
    if (TEST_NZ(MEM8(esi + 0x23), 0x80)) goto loc_0054BEA2; /* jne: not equal / not zero */

loc_0054BE83: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, 0x64848015);
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054BEA2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0054BEA6
 * Original: 0x0054BEA6 - 0x0054BEE2 (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BEA6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054BEA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x80004005u;
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054BEBA: ;
    esi = MEM32(ebp + 8);
    MEM32(ebx) = MEM32(ebx) & 0;
    esi = esi + 0x44;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(eax, esi)) { sub_0054BEE2(); return; } /* jne: not equal / not zero */

loc_0054BECF: ;
    if (TEST_Z(ecx, ecx)) goto loc_0054BEDE; /* je: equal / zero */

loc_0054BED3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054BEDE: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0054BF43(); return; /* tail jmp 0x0054BF43 */

}

/**
 * sub_0054BF61
 * Original: 0x0054BF61 - 0x0054BFDD (124 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BF61(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054BF61: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054BF75: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x2C;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_0054BFA7; /* je: equal / zero */

loc_0054BF81: ;
    (void)0; /* cmp MEM32(ebp + -4), edi - flags set for next jcc */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_0054BFC3; /* je: equal / zero */

loc_0054BF9C: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0054BFA5: ;
    goto loc_0054BFC3;

loc_0054BFA7: ;
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_0054BFB5; /* je: equal / zero */

loc_0054BFAC: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0054BFB5: ;
    PUSH32(esp, 0x6484800F);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054BFC1: ;
    esi = eax;

loc_0054BFC3: ;
    if (CMP_EQ(esi, edi)) goto loc_0054BFD5; /* je: equal / zero */

loc_0054BFC7: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;

loc_0054BFD5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054BFDD
 * Original: 0x0054BFDD - 0x0054C016 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054BFDD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054BFDD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054BFEE: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x2C;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(esi) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054C012; /* je: equal / zero */

loc_0054C009: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0054C012: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054C016
 * Original: 0x0054C016 - 0x0054C02F (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C016(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054C016: ;
    PUSH32(esp, 0x64848010);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054C022: ;
    if (TEST_Z(eax, eax)) { sub_0054C02F(); return; } /* je: equal / zero */

loc_0054C026: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0054C032
 * Original: 0x0054C032 - 0x0054C055 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C032(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054C032: ;
    edx = edx + 0x74;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_0054C054; /* je: equal / zero */

loc_0054C03D: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(ecx + 4) = ecx;
    MEM32(ecx) = ecx;
    eax = ecx + -40;

loc_0054C054: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0054C055
 * Original: 0x0054C055 - 0x0054C0C7 (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C055(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054C055: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    edx = esi;
    PUSH32(esp, 0); sub_0054C032(); /* call 0x0054C032 */

loc_0054C065: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0054C0B1; /* je: equal / zero */

loc_0054C06B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054C078: ;
    eax = ebx + 0x28;
    ecx = esi + 0x6C;
    esi = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    PUSH32(esp, 0xA);
    MEM32(ecx + 4) = eax;
    POP32(esp, ecx);
    edi = ebx;
    ebx = ebx + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0054C0A1: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054C0B1; /* je: equal / zero */

loc_0054C0A8: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0054C0B1: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0054C0C3; /* je: equal / zero */

loc_0054C0BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_0054C0C3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054C0C7
 * Original: 0x0054C0C7 - 0x0054C125 (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C0C7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054C0C7: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_0054C11F; /* je: equal / zero */

loc_0054C0CF: ;
    SET_LO16(esi, MEM16(ecx));
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(ecx + 2));
    ebx = ebx & 7;
    if (CMP_EQ(LO16(esi), MEM16(edx))) goto loc_0054C0E6; /* je: equal / zero */

loc_0054C0DF: ;
    if (CMP_NE(LO16(esi), 0xFFFF)) goto loc_0054C10C; /* jne: not equal / not zero */

loc_0054C0E6: ;
    esi = ZX16(MEM16(edx + 2));
    esi = esi & 0xFFFF7FF7u;
    if (CMP_NE(ebx, esi)) goto loc_0054C122; /* jne: not equal / not zero */

loc_0054C0F4: ;
    esi = MEM32(ecx + 8);
    if (CMP_EQ(esi, MEM32(edx + 8))) goto loc_0054C101; /* je: equal / zero */

loc_0054C0FC: ;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_0054C104; /* jne: not equal / not zero */

loc_0054C101: ;
    eax = 0; /* xor self */
    eax++;

loc_0054C104: ;
    esi = MEM32(ecx + 4);
    if (CMP_EQ(esi, MEM32(edx + 4))) goto loc_0054C110; /* je: equal / zero */

loc_0054C10C: ;
    eax = 0; /* xor self */
    goto loc_0054C122;

loc_0054C110: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_0054C122; /* je: equal / zero */

loc_0054C115: ;
    ecx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    if (CMP_NE(ecx, MEM32(edx + 0xC))) goto loc_0054C122; /* jne: not equal / not zero */

loc_0054C11F: ;
    eax = 0; /* xor self */
    eax++;

loc_0054C122: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054C125
 * Original: 0x0054C125 - 0x0054C140 (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C125(void)
{
    uint32_t ebp;

loc_0054C125: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(eax);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    eax = edx + 0x54;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0054C1AB(); return; /* tail jmp 0x0054C1AB */

}

/**
 * sub_0054C268
 * Original: 0x0054C268 - 0x0054C270 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C268(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C268: ;
    edx = edx + 0x14;
    ecx = MEM32(edx);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_0054C27E(); return; /* tail jmp 0x0054C27E */

}

/**
 * sub_0054C294
 * Original: 0x0054C294 - 0x0054C2D9 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C294(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054C294: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    edx = edi;
    PUSH32(esp, 0); sub_0054C268(); /* call 0x0054C268 */

loc_0054C29F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_0054C2C9; /* jne: not equal / not zero */

loc_0054C2A4: ;
    PUSH32(esp, 0x64848011);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054C2B0: ;
    if (TEST_Z(eax, eax)) goto loc_0054C2D6; /* je: equal / zero */

loc_0054C2B4: ;
    MEM32(eax + 4) = eax;
    ecx = edi + 0x14;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_0054C2C9: ;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 8) = LO16(ebx);
    MEM16(eax + 0xA) = LO16(ecx);

loc_0054C2D6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054C2D9
 * Original: 0x0054C2D9 - 0x0054C33A (97 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C2D9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054C2D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    ebx = ebx + 0x3C;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (CMP_EQ(edi, ebx)) goto loc_0054C331; /* je: equal / zero */

loc_0054C2EB: ;
    eax = MEM32(ebp + 8);
    eax = eax >> 0x10;
    MEM32(ebp + -4) = eax;

loc_0054C2F4: ;
    (void)0; /* cmp MEM16(ebp + -4), 0 - flags set for next jcc */
    esi = edi;
    edi = MEM32(edi);
    if (CMP_EQ(MEM16(ebp + -4), 0)) goto loc_0054C314; /* je: equal / zero */

loc_0054C2FF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_0054C30D: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    goto loc_0054C31F;

loc_0054C314: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0054C321; /* je: equal / zero */

loc_0054C31C: ;
    (void)0; /* cmp eax, MEM32(esi + 0x34) - flags set for next jcc */

loc_0054C31F: ;
    if (CMP_NE(eax, MEM32(esi + 0x34))) goto loc_0054C32D; /* jne: not equal / not zero */

loc_0054C321: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0054C33A(); return; } /* je: equal / zero */

loc_0054C328: ;
    if (CMP_EQ(eax, MEM32(esi + 0x30))) { sub_0054C33A(); return; } /* je: equal / zero */

loc_0054C32D: ;
    if (CMP_NE(edi, ebx)) goto loc_0054C2F4; /* jne: not equal / not zero */

loc_0054C331: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054C33E
 * Original: 0x0054C33E - 0x0054C370 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C33E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054C33E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    eax = eax | 0x20000000;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0054B8CC(); /* call 0x0054B8CC */

loc_0054C355: ;
    if (TEST_S(eax, eax)) goto loc_0054C36C; /* jl: less (signed <) */

loc_0054C359: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0054E199(); /* call 0x0054E199 */

loc_0054C362: ;
    if (TEST_S(eax, eax)) goto loc_0054C36B; /* jl: less (signed <) */

loc_0054C366: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = esi;

loc_0054C36B: ;
    POP32(esp, esi);

loc_0054C36C: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054C370
 * Original: 0x0054C370 - 0x0054C38D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6484A005);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054C37E: ;
    if (TEST_Z(eax, eax)) { sub_0054C38D(); return; } /* je: equal / zero */

loc_0054C382: ;
    esi = eax;
    PUSH32(esp, 0); sub_0054C8FE(); /* call 0x0054C8FE */

loc_0054C389: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0054C38F(); return; /* tail jmp 0x0054C38F */

}

/**
 * sub_0054C3EB
 * Original: 0x0054C3EB - 0x0054C451 (102 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C3EB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C3EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6484A004);
    esi = 0; /* xor self */
    PUSH32(esp, 0x80);
    MEM32(ebx) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054C400: ;
    if (CMP_EQ(eax, esi)) goto loc_0054C40D; /* je: equal / zero */

loc_0054C404: ;
    esi = eax;
    PUSH32(esp, 0); sub_00553B2D(); /* call 0x00553B2D */

loc_0054C40B: ;
    esi = eax;

loc_0054C40D: ;
    edi = esi;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x7FF8FFF2;
    edi = edi + 0x8007000Eu;
    if (((int32_t)edi < 0)) { sub_0054C451(); return; } /* js: sign (negative) */

loc_0054C421: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_00553CD1(); /* call 0x00553CD1 */

loc_0054C42E: ;
    edi = eax;
    if (TEST_S(edi, edi)) { sub_0054C451(); return; } /* jl: less (signed <) */

loc_0054C434: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + 0x58;
    ecx = ecx + 0x44;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    MEM32(ebx) = esi;
    g_seh_ebp = ebp; sub_0054C45C(); return; /* tail jmp 0x0054C45C */

}

/**
 * sub_0054C463
 * Original: 0x0054C463 - 0x0054C4C7 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C463(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C463: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6484A004);
    esi = 0; /* xor self */
    PUSH32(esp, 0x80);
    MEM32(ebx) = esi;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054C478: ;
    if (CMP_EQ(eax, esi)) goto loc_0054C485; /* je: equal / zero */

loc_0054C47C: ;
    esi = eax;
    PUSH32(esp, 0); sub_00553B2D(); /* call 0x00553B2D */

loc_0054C483: ;
    esi = eax;

loc_0054C485: ;
    edi = esi;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x7FF8FFF2;
    edi = edi + 0x8007000Eu;
    if (((int32_t)edi < 0)) { sub_0054C4C7(); return; } /* js: sign (negative) */

loc_0054C499: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esi;
    PUSH32(esp, 0); sub_00553D3B(); /* call 0x00553D3B */

loc_0054C4A4: ;
    edi = eax;
    if (TEST_S(edi, edi)) { sub_0054C4C7(); return; } /* jl: less (signed <) */

loc_0054C4AA: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + 0x58;
    ecx = ecx + 0x44;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    MEM32(ebx) = esi;
    g_seh_ebp = ebp; sub_0054C4D2(); return; /* tail jmp 0x0054C4D2 */

}

/**
 * sub_0054C4D9
 * Original: 0x0054C4D9 - 0x0054C504 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C4D9(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C4D9: ;
    eax = ebx + 0x58;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    PUSH32(esp, esi);
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00554318(); /* call 0x00554318 */

loc_0054C4F9: ;
    edi = MEM32(esp + 0xC);
    edi = edi + 0x4C;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_0054C50E(); return; /* tail jmp 0x0054C50E */

}

/**
 * sub_0054C539
 * Original: 0x0054C539 - 0x0054C59B (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C539(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054C539: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054C546: ;
    ebx = ZX16(MEM16(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0054C294(); /* call 0x0054C294 */

loc_0054C558: ;
    ebx = edi + 0x5C;
    edi = MEM32(ebx);
    if (CMP_EQ(edi, ebx)) goto loc_0054C582; /* je: equal / zero */

loc_0054C561: ;
    PUSH32(esp, esi);

loc_0054C562: ;
    SET_LO16(eax, MEM16(ebp + 8));
    (void)0; /* cmp LO16(eax), 0xFF - flags set for next jcc */
    esi = edi;
    edi = MEM32(edi);
    if (CMP_EQ(LO16(eax), 0xFF)) goto loc_0054C578; /* je: equal / zero */

loc_0054C570: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(MEM8(ecx + 0xA), LO8(eax))) goto loc_0054C57D; /* jne: not equal / not zero */

loc_0054C578: ;
    PUSH32(esp, 0); sub_00551661(); /* call 0x00551661 */

loc_0054C57D: ;
    if (CMP_NE(edi, ebx)) goto loc_0054C562; /* jne: not equal / not zero */

loc_0054C581: ;
    POP32(esp, esi);

loc_0054C582: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054C595; /* je: equal / zero */

loc_0054C58A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054C595: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054C59B
 * Original: 0x0054C59B - 0x0054C6DB (320 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C59B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054C59B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(edi), esi - flags set for next jcc */
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    if (CMP_BE(MEM32(edi), esi)) goto loc_0054C6D2; /* jbe: below or equal (unsigned <=) */

loc_0054C5B6: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = esi;
    goto loc_0054C5C2;

loc_0054C5BC: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -4);

loc_0054C5C2: ;
    eax = MEM32(edi + 4);
    eax = eax + esi;
    (void)0; /* test MEM8(eax), 1 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (TEST_Z(MEM8(eax), 1)) goto loc_0054C5D8; /* je: equal / zero */

loc_0054C5CF: ;
    eax = MEM32(edi + 4);
    eax = MEM32(esi + eax + 0x10);
    goto loc_0054C5DA;

loc_0054C5D8: ;
    eax = 0; /* xor self */

loc_0054C5DA: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, MEM32(esi + eax + 0x14));
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0054C2D9(); /* call 0x0054C2D9 */

loc_0054C5EA: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0054C606; /* je: equal / zero */

loc_0054C5F0: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    MEM32(ebx + 4) = ebx;
    MEM32(ebx) = ebx;
    goto loc_0054C63C;

loc_0054C606: ;
    eax = MEM32(edi + 4);
    esi = esi + eax;
    if (CMP_NE(MEM16(esi + 6), 0)) goto loc_0054C61D; /* jne: not equal / not zero */

loc_0054C612: ;
    if (TEST_Z(MEM8(esi + 2), 1)) goto loc_0054C61D; /* je: equal / zero */

loc_0054C618: ;
    ebx = ebp + -72;
    goto loc_0054C63C;

loc_0054C61D: ;
    PUSH32(esp, 0x64848015);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054C629: ;
    ebx = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -12) = eax;

loc_0054C63C: ;
    if (CMP_L(MEM32(ebp + -12), 0)) goto loc_0054C6D1; /* jl: less (signed <) */

loc_0054C646: ;
    esi = MEM32(ebp + -16);
    PUSH32(esp, 6);
    MEM32(ebx + 4) = ebx;
    MEM32(ebx) = ebx;
    edi = ebx + 0x20;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + -16);
    eax = MEM32(edi + 0x14);
    ecx = eax;
    ecx = ecx >> 0x10;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0054C678; /* je: equal / zero */

loc_0054C666: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    esi = ebx + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0054C672: ;
    esp = esp + 0xC;
    MEM32(ebx + 0x34) = esi;

loc_0054C678: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0054C688; /* je: equal / zero */

loc_0054C67F: ;
    if (CMP_NE(MEM16(edi), 1)) goto loc_0054C688; /* jne: not equal / not zero */

loc_0054C685: ;
    MEM32(ebx + 0x30) = eax;

loc_0054C688: ;
    eax = ebp + -72;
    if (CMP_NE(eax, ebx)) goto loc_0054C695; /* jne: not equal / not zero */

loc_0054C68F: ;
    MEM8(ebx + 0x23) = MEM8(ebx + 0x23) | 0x80;
    goto loc_0054C6AA;

loc_0054C695: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x3C;
    MEM32(ebx) = eax;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;
    MEM32(eax) = ebx;
    eax = MEM32(ebx);
    MEM32(eax + 4) = ebx;

loc_0054C6AA: ;
    if (TEST_Z(MEM16(ebx + 0x22), 0x8001)) goto loc_0054C6BC; /* je: equal / zero */

loc_0054C6B2: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebx;
    PUSH32(esp, 0); sub_0054BE03(); /* call 0x0054BE03 */

loc_0054C6BC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x18;
    if (CMP_B(ecx, MEM32(eax))) goto loc_0054C5BC; /* jb: below (unsigned <) */

loc_0054C6D1: ;
    POP32(esp, ebx);

loc_0054C6D2: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0054C6DB
 * Original: 0x0054C6DB - 0x0054C735 (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C6DB(void)
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

loc_0054C6DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054C6E5: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    esi = ZX8(LO8(eax));
    esp = esp - 0x18;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054EDBC(); /* call 0x0054EDBC */

loc_0054C71C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0054C72D; /* je: equal / zero */

loc_0054C722: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054C72D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0054C735
 * Original: 0x0054C735 - 0x0054C74D (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C735(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C735: ;
    SET_LO16(ecx, MEM16(eax + 2));
    (void)0; /* test LO8(ecx), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(ecx), 2)) { sub_0054C74D(); return; } /* je: equal / zero */

loc_0054C73F: ;
    PUSH32(esp, MEM32(esp + 8));
    ebx = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0054D863(); /* call 0x0054D863 */

loc_0054C74B: ;
    g_seh_ebp = ebp; sub_0054C77D(); return; /* tail jmp 0x0054C77D */

}

/**
 * sub_0054C783
 * Original: 0x0054C783 - 0x0054C7B0 (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C783(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054C783: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054C78A: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0054C735(); /* call 0x0054C735 */

loc_0054C798: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0054C7A9; /* je: equal / zero */

loc_0054C79E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054C7A9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054C7B0
 * Original: 0x0054C7B0 - 0x0054C838 (136 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054C7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054C7C8: ;
    edi = MEM32(ebp + 8);
    edi = edi + 0x6C;
    esi = MEM32(edi);
    if (CMP_EQ(esi, edi)) { sub_0054C838(); return; } /* je: equal / zero */

loc_0054C7D4: ;
    ecx = MEM32(ebp + 0xC);
    edx = esi + -40;
    esi = MEM32(esi);
    PUSH32(esp, 0); sub_0054C0C7(); /* call 0x0054C0C7 */

loc_0054C7E1: ;
    if (TEST_NZ(eax, eax)) goto loc_0054C7EB; /* jne: not equal / not zero */

loc_0054C7E5: ;
    edx = 0; /* xor self */
    if (CMP_NE(esi, edi)) goto loc_0054C7D4; /* jne: not equal / not zero */

loc_0054C7EB: ;
    if (TEST_Z(edx, edx)) { sub_0054C838(); return; } /* je: equal / zero */

loc_0054C7EF: ;
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = edx + 0x28;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    MEM32(eax) = ecx;
    PUSH32(esp, 0xA);
    MEM32(ebx + 4) = ebx;
    MEM32(ebx) = ebx;
    POP32(esp, ecx);
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_NZ(MEM8(edx + 3), 0x80)) goto loc_0054C820; /* jne: not equal / not zero */

loc_0054C817: ;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0054C783(); /* call 0x0054C783 */

loc_0054C820: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x74;
    MEM32(ebx) = eax;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;
    MEM32(eax) = ebx;
    eax = MEM32(ebx);
    MEM32(eax + 4) = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0054C83F(); return; /* tail jmp 0x0054C83F */

}

/**
 * sub_0054C857
 * Original: 0x0054C857 - 0x0054C871 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C857(void)
{
    uint32_t ebp;

loc_0054C857: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0054C86A: ;
    edi = ebx + 0x6C;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_0054C8AB(); return; /* tail jmp 0x0054C8AB */

}

/**
 * sub_0054C8C6
 * Original: 0x0054C8C6 - 0x0054C8DE (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C8C6(void)
{

loc_0054C8C6: ;
    edx = MEM32(eax + 0xC);
    eax = eax + 8;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0054C8DE
 * Original: 0x0054C8DE - 0x0054C8F9 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C8DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C8DE: ;
    if (CMP_BE(MEM32(esp + 4), 1)) { sub_0054C8F9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0054C8E5: ;
    PUSH32(esp, 0x55577C);
    PUSH32(esp, 0); sub_0047EAB2(); /* call 0x0047EAB2 */

loc_0054C8EF: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 4)); }
    eax = edx;
    g_seh_ebp = ebp; sub_0054C8FB(); return; /* tail jmp 0x0054C8FB */

}

/**
 * sub_0054C8FE
 * Original: 0x0054C8FE - 0x0054C931 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C8FE(void)
{

loc_0054C8FE: ;
    eax = esi + 0x14;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xC;
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x1C;
    MEM32(esi + 0x20) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x24;
    MEM32(esi + 0x28) = eax;
    MEM32(eax) = eax;
    eax = MEM32(0x555774);
    MEM32(esi) = 1;
    PUSH32(esp, 0); sub_0054B434(); /* call 0x0054B434 */

loc_0054C92E: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0054C931
 * Original: 0x0054C931 - 0x0054C940 (15 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C931(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054C931: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = edi + 0x14;
    ebx = MEM32(ebp);
    g_seh_ebp = ebp; sub_0054C949(); return; /* tail jmp 0x0054C949 */

}

/**
 * sub_0054C9F3
 * Original: 0x0054C9F3 - 0x0054CA06 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054C9F3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054C9F3: ;
    MEM32(eax) = MEM32(eax) - 1;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if ((MEM32(eax) != 0)) goto loc_0054CA02; /* jne: not equal / not zero */

loc_0054C9FA: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054CA06(); /* call 0x0054CA06 */

loc_0054CA02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054CA06
 * Original: 0x0054CA06 - 0x0054CA27 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CA06(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054CA06: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0054C931(); /* call 0x0054C931 */

loc_0054CA0F: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054CA20; /* je: equal / zero */

loc_0054CA16: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054CA1F: ;
    POP32(esp, ecx);

loc_0054CA20: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054CA27
 * Original: 0x0054CA27 - 0x0054CA6F (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CA27(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054CA27: ;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esi + 8) = edx;
    MEM32(esi + 4) = ecx;
    SET_LO16(ecx, MEM16(ecx + 0x22));
    eax = 0; /* xor self */
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0054CA5F; /* je: equal / zero */

loc_0054CA3B: ;
    eax = ZX16(LO16(ecx));
    PUSH32(esp, 0x64848011);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054CA4C: ;
    MEM32(esi + 0x30) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    if (((int32_t)eax < 0)) goto loc_0054CA6D; /* js: sign (negative) */

loc_0054CA5F: ;
    ecx = MEM32(esi + 4);
    if (TEST_NZ(MEM8(ecx + 0x18), 1)) goto loc_0054CA6D; /* jne: not equal / not zero */

loc_0054CA68: ;
    PUSH32(esp, 0); sub_0054CA6F(); /* call 0x0054CA6F */

loc_0054CA6D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054CA6F
 * Original: 0x0054CA6F - 0x0054CB39 (202 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CA6F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054CA6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    eax = ZX16(MEM16(eax + 0x1A));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6484800B);
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054CA8A: ;
    MEM32(esi + 0x2C) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    ebx = 0x8007000Eu;
    eax = eax + ebx;
    if (((int32_t)eax < 0)) goto loc_0054CB36; /* js: sign (negative) */

loc_0054CAA3: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(edi + 0x1A), LO16(edx))) goto loc_0054CAC5; /* jbe: below or equal (unsigned <=) */

loc_0054CAB1: ;
    edi = MEM32(esi + 0x2C);
    MEM32(edi + ecx * 8 + 4) = MEM32(edi + ecx * 8 + 4) | 0xFFFFFFFFu;
    edi = MEM32(esi + 4);
    edi = ZX16(MEM16(edi + 0x1A));
    ecx++;
    if (CMP_B(ecx, edi)) goto loc_0054CAB1; /* jb: below (unsigned <) */

loc_0054CAC5: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp MEM16(ecx + 0x1E), LO16(edx) - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_BE(MEM16(ecx + 0x1E), LO16(edx))) goto loc_0054CB35; /* jbe: below or equal (unsigned <=) */

loc_0054CAD1: ;
    MEM32(ebp + -8) = edx;

loc_0054CAD4: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(esi + 4);
    ecx = ZX16(MEM16(edx + ecx + 0x46));
    edx = MEM32(esi + 0x2C);
    edi = edx + ecx * 8;
    if (CMP_NE(MEM32(edi + 4), 0xFFFFFFFFu)) goto loc_0054CAF3; /* jne: not equal / not zero */

loc_0054CAEB: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi + 4) = ecx;
    goto loc_0054CB22;

loc_0054CAF3: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0054CAFF; /* je: equal / zero */

loc_0054CAF9: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0054CAF3; /* jne: not equal / not zero */

loc_0054CAFF: ;
    PUSH32(esp, 0x6484800B);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054CB0B: ;
    ecx = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + ebx;
    MEM32(edi) = ecx;
    if (((int32_t)eax < 0)) goto loc_0054CB35; /* js: sign (negative) */

loc_0054CB1C: ;
    edx = MEM32(ebp + -4);
    MEM32(ecx + 4) = edx;

loc_0054CB22: ;
    ecx = MEM32(esi + 4);
    ecx = ZX16(MEM16(ecx + 0x1E));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x14;
    if (CMP_B(MEM32(ebp + -4), ecx)) goto loc_0054CAD4; /* jb: below (unsigned <) */

loc_0054CB35: ;
    POP32(esp, edi);

loc_0054CB36: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054CB39
 * Original: 0x0054CB39 - 0x0054CB51 (24 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CB39(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054CB39: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = esi;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ecx + 1;

loc_0054CB44: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0054CB44; /* jne: not equal / not zero */

loc_0054CB4B: ;
    ecx = ecx - edi;
    ecx = ecx + esi;
    g_seh_ebp = ebp; sub_0054CB62(); return; /* tail jmp 0x0054CB62 */

}

/**
 * sub_0054CB7C
 * Original: 0x0054CB7C - 0x0054CBC8 (76 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CB7C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054CB7C: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(edi + 0x2C), ebx)) goto loc_0054CBC6; /* je: equal / zero */

loc_0054CB84: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp MEM16(eax + 0x1A), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 0x6484800B;
    if (CMP_BE(MEM16(eax + 0x1A), LO16(ebx))) goto loc_0054CBB8; /* jbe: below or equal (unsigned <=) */

loc_0054CB93: ;
    PUSH32(esp, esi);

loc_0054CB94: ;
    eax = MEM32(edi + 0x2C);
    esi = MEM32(eax + ebx * 8);
    goto loc_0054CBA7;

loc_0054CB9C: ;
    eax = esi;
    esi = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054CBA7: ;
    if (TEST_NZ(esi, esi)) goto loc_0054CB9C; /* jne: not equal / not zero */

loc_0054CBAB: ;
    eax = MEM32(edi + 4);
    eax = ZX16(MEM16(eax + 0x1A));
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_0054CB94; /* jb: below (unsigned <) */

loc_0054CBB7: ;
    POP32(esp, esi);

loc_0054CBB8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(edi + 0x2C));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054CBC1: ;
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0;
    POP32(esp, ebp);

loc_0054CBC6: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054CBC8
 * Original: 0x0054CBC8 - 0x0054CC0F (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CBC8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054CBC8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    esi = esi + MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = MEM32(esi);
    edi = ecx;
    ebx = 0x1FFF;
    edi = edi & ebx;
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* test ecx, 0x40000000 - flags set for next jcc */
    edx = esi + edi * 8 + 4;
    MEM32(ebp + -8) = edx;
    if (TEST_NZ(ecx, 0x40000000)) goto loc_0054CBF9; /* jne: not equal / not zero */

loc_0054CBF3: ;
    if (TEST_Z(MEM8(ebp + 0xC), 0x10)) { sub_0054CC0F(); return; } /* je: equal / zero */

loc_0054CBF9: ;
    edx = ecx;
    edx = edx >> 0x11;
    edx = edx & ebx;
    if (CMP_AE(edx, edi)) { sub_0054CC0F(); return; } /* jae: above or equal (unsigned >=) */

loc_0054CC04: ;
    MEM8(esi + 3) = MEM8(esi + 3) & 0xBF;
    eax = edx;
    g_seh_ebp = ebp; sub_0054CE65(); return; /* tail jmp 0x0054CE65 */

}

/**
 * sub_0054CE89
 * Original: 0x0054CE89 - 0x0054CE91 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CE89(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054CE89: ;
    edx = edx + 0x1C;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_0054CE9F(); return; /* tail jmp 0x0054CE9F */

}

/**
 * sub_0054CEA9
 * Original: 0x0054CEA9 - 0x0054CEC4 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CEA9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054CEA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6484A003);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054CEB7: ;
    if (TEST_Z(eax, eax)) { sub_0054CEC4(); return; } /* je: equal / zero */

loc_0054CEBB: ;
    PUSH32(esp, 0); sub_0054F6BA(); /* call 0x0054F6BA */

loc_0054CEC0: ;
    edi = eax;
    g_seh_ebp = ebp; sub_0054CEC6(); return; /* tail jmp 0x0054CEC6 */

}

/**
 * sub_0054CF1F
 * Original: 0x0054CF1F - 0x0054CF4B (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054CF1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054CF1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 4);
    PUSH32(esp, esi);
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx + eax * 4 + 0x38;
    (void)0; /* test MEM8(esi), 8 - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (TEST_Z(MEM8(esi), 8)) { sub_0054CF4B(); return; } /* je: equal / zero */

loc_0054CF41: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_0054D0E3(); return; /* tail jmp 0x0054D0E3 */

}

/**
 * sub_0054D0E9
 * Original: 0x0054D0E9 - 0x0054D3C5 (732 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D0E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054D0E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 4);
    ecx = ZX16(MEM16(edx + 0x1E));
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    eax = edx + eax * 4 + 0x38;
    esi = ZX16(MEM16(eax + 2));
    MEM32(edi) = MEM32(edi) & 0;
    ecx = ecx + esi;
    ecx = ecx + ecx * 4;
    esi = edx + ecx * 4 + 0x38;
    if (TEST_Z(MEM8(esi + 0xB), 1)) goto loc_0054D174; /* je: equal / zero */

loc_0054D120: ;
    MEM32(edi) = 1;
    edx = MEM32(ebx + 4);
    ebx = MEM32(edx + 0x10);
    ecx = ZX16(MEM16(esi + 0xC));
    ecx = ecx + ecx * 4;
    ecx = ebx + ecx * 8;
    ecx = ecx + edx;
    edx = ZX16(MEM16(ecx));
    MEM32(edi + 0x40) = edx;
    edx = ZX16(MEM16(ecx + 2));
    ebx = MEM32(ebp + 8);
    MEM32(edi + 0x44) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    MEM32(edi + 0x48) = edx;
    edx = ZX8(MEM8(ecx + 0x1C));
    MEM32(edi + 0x4C) = edx;
    edx = MEM32(ecx + 8);
    MEM32(edi + 0x50) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(edi + 0x54) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(edi + 0x58) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(edi + 0x5C) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(edi + 0x60) = ecx;

loc_0054D174: ;
    ecx = ZX8(MEM8(esi + 0xE));
    MEM32(edi + 4) = ecx;
    ecx = ZX8(MEM8(esi + 8));
    MEM32(edi + 0x28) = ecx;
    eax = ZX16(MEM16(eax + 2));
    MEM32(edi + 0x2C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(edi + 0xC) = eax;
    eax = ZX8(MEM8(esi + 9));
    MEM32(edi + 0x10) = eax;
    eax = ZX8(MEM8(esi + 0xA));
    MEM32(edi + 0x14) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    MEM32(edi + 0x18) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x12));
    ecx = 0; /* xor self */
    eax = eax & 7;
    MEM32(edi + 0x1C) = eax;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax >> 3;
    MEM32(edi + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x34) = ecx;
    SET_LO16(eax, MEM16(esi + 4));
    eax = eax & 0x1FF;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax << 4;
    MEM32(edi + 8) = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 4));
    eax = eax >> 9;
    eax = eax & 0x7F;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFFFFCEu);
    MEM32(edi + 0x3C) = eax;
    eax = ZX8(MEM8(esi + 0xF));
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax << 8;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x30) = 0xFFFF;
    MEM32(edi + 0x24) = ecx;
    SET_LO8(eax, MEM8(esi + 0xB));
    if (TEST_Z(LO8(eax), 0x18)) goto loc_0054D290; /* je: equal / zero */

loc_0054D205: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0054D238; /* je: equal / zero */

loc_0054D209: ;
    esi = MEM32(esi);
    esi = esi + MEM32(ebx + 4);
    edx = 0x1FFF;
    ecx = MEM32(esi);
    eax = ecx;
    eax = eax >> 0x11;
    eax = eax & edx;
    ecx = ecx & edx;
    if (CMP_AE(eax, ecx)) goto loc_0054D245; /* jae: above or equal (unsigned >=) */

loc_0054D222: ;
    eax = ZX16(MEM16(esi + eax * 8 + 4));
    MEM32(edi + 0x30) = eax;
    eax = MEM32(esi);
    eax = eax >> 0x11;
    eax = eax & edx;
    eax = ZX16(MEM16(esi + eax * 8 + 6));
    goto loc_0054D242;

loc_0054D238: ;
    eax = ZX16(MEM16(esi));
    MEM32(edi + 0x30) = eax;
    eax = ZX16(MEM16(esi + 2));

loc_0054D242: ;
    MEM32(ebp + -8) = eax;

loc_0054D245: ;
    if (CMP_EQ(MEM32(edi + 0x30), 0xFFFF)) goto loc_0054D3BC; /* je: equal / zero */

loc_0054D252: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x30));
    ecx = 0; /* xor self */
    esi = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0054DD1C(); /* call 0x0054DD1C */

loc_0054D269: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0054D284; /* jl: less (signed <) */

loc_0054D270: ;
    eax = MEM32(ebp + -24);
    if (CMP_BE(eax, MEM32(edi + 0x34))) goto loc_0054D3BC; /* jbe: below or equal (unsigned <=) */

loc_0054D27C: ;
    MEM32(edi + 0x34) = eax;
    goto loc_0054D3BC;

loc_0054D284: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_0054D3BC;

loc_0054D290: ;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -8) = ecx;

loc_0054D29A: ;
    eax = ZX8(MEM8(esi + 8));
    if (CMP_AE(MEM32(ebp + -8), eax)) goto loc_0054D3B0; /* jae: above or equal (unsigned >=) */

loc_0054D2A7: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    eax = MEM32(ebx + 4);
    edx = ecx + edx * 4;
    edx = edx + eax;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(ebp + -20) = edx;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_0054D3A2; /* jl: less (signed <) */

loc_0054D2C1: ;
    ecx = MEM32(edx);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFF;
    if (0) goto loc_0054D3A2; /* jbe: below or equal (unsigned <=) */

loc_0054D2D3: ;
    ecx = ecx >> 8;
    ecx = ecx + eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + 8) = 0xFFFF;

loc_0054D2E3: ;
    eax = MEM32(ecx);
    eax = eax & 0xFF;
    if ((eax == 0)) goto loc_0054D30D; /* je: equal / zero */

loc_0054D2EC: ;
    if (CMP_EQ(eax, 1)) goto loc_0054D30D; /* je: equal / zero */

loc_0054D2F1: ;
    eax = ZX8(MEM8(ecx + 4));
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    ecx = ecx + eax + 8;
    eax = MEM32(ebp + -12);
    if (CMP_AE(eax, MEM32(ebp + -16))) goto loc_0054D3A2; /* jae: above or equal (unsigned >=) */

loc_0054D308: ;
    edx = MEM32(ebp + -20);
    goto loc_0054D2E3;

loc_0054D30D: ;
    eax = ZX16(MEM16(ecx + 6));
    if (CMP_BE(eax, MEM32(edi + 0x24))) goto loc_0054D319; /* jbe: below or equal (unsigned <=) */

loc_0054D316: ;
    MEM32(edi + 0x24) = eax;

loc_0054D319: ;
    if (TEST_Z(MEM8(ecx + 5), 4)) goto loc_0054D348; /* je: equal / zero */

loc_0054D31F: ;
    (void)0; /* cmp MEM8(ecx), 0 - flags set for next jcc */
    ecx = MEM32(ecx + 8);
    ecx = ecx + MEM32(ebx + 4);
    edx = MEM32(ecx);
    eax = edx;
    eax = eax >> 0x11;
    edx = edx & 0x1FFF;
    eax = eax & 0x1FFF;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    edx = MEM32(ebp + -20);
    if (CMP_AE(eax, edx)) goto loc_0054D350; /* jae: above or equal (unsigned >=) */

loc_0054D341: ;
    SET_LO16(eax, MEM16(ecx + eax * 8 + 4));
    goto loc_0054D34C;

loc_0054D348: ;
    SET_LO16(eax, MEM16(ecx + 8));

loc_0054D34C: ;
    MEM16(ebp + 8) = LO16(eax);

loc_0054D350: ;
    eax = MEM32(edi + 0x30);
    if (CMP_NE(eax, 0xFFFF)) goto loc_0054D363; /* jne: not equal / not zero */

loc_0054D35A: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(edi + 0x30) = eax;
    goto loc_0054D36F;

loc_0054D363: ;
    ecx = ZX16(MEM16(ebp + 8));
    if (CMP_EQ(eax, ecx)) goto loc_0054D36F; /* je: equal / zero */

loc_0054D36B: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_0054D36F: ;
    if (CMP_EQ(MEM16(ebp + 8), 0xFFFF)) goto loc_0054D3A2; /* je: equal / zero */

loc_0054D377: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054D92E(); /* call 0x0054D92E */

loc_0054D387: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0054D39B; /* jl: less (signed <) */

loc_0054D38E: ;
    eax = MEM32(ebp + -24);
    if (CMP_BE(eax, MEM32(edi + 0x34))) goto loc_0054D3A2; /* jbe: below or equal (unsigned <=) */

loc_0054D396: ;
    MEM32(edi + 0x34) = eax;
    goto loc_0054D3A2;

loc_0054D39B: ;
    MEM32(ebp + -4) = 0x80004005u;

loc_0054D3A2: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    ecx = 0; /* xor self */
    if (CMP_GE(MEM32(ebp + -4), ecx)) goto loc_0054D29A; /* jge: greater or equal (signed >=) */

loc_0054D3B0: ;
    if (CMP_NE(MEM32(ebp + -28), ecx)) goto loc_0054D3BC; /* jne: not equal / not zero */

loc_0054D3B5: ;
    MEM32(edi + 0x30) = 0xFFFF;

loc_0054D3BC: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054D3C5
 * Original: 0x0054D3C5 - 0x0054D3E3 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D3C5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054D3C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    eax = MEM32(edi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (TEST_Z(MEM8(eax + 0x18), 1)) { sub_0054D3E3(); return; } /* je: equal / zero */

loc_0054D3DC: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0054D459(); return; /* tail jmp 0x0054D459 */

}

/**
 * sub_0054D45D
 * Original: 0x0054D45D - 0x0054D481 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D45D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054D45D: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x30);
    if (TEST_Z(edi, edi)) goto loc_0054D47F; /* je: equal / zero */

loc_0054D465: ;
    eax = MEM32(eax + 4);
    ecx = ZX16(MEM16(eax + 0x22));
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0054D47F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054D481
 * Original: 0x0054D481 - 0x0054D49D (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D481(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054D481: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi << 2;
    ecx = MEM32(edi + ecx);
    if (TEST_Z(ecx, ecx)) { sub_0054D49D(); return; } /* je: equal / zero */

loc_0054D499: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_0054D4C4(); return; /* tail jmp 0x0054D4C4 */

}

/**
 * sub_0054D4C7
 * Original: 0x0054D4C7 - 0x0054D573 (172 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D4C7(void)
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

loc_0054D4C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054D4DC: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -16) = eax;
    eax = MEM32(edi + 4);
    eax = eax + eax * 4;
    ebx = ecx + eax * 4 + 0x38;
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, esi)) goto loc_0054D542; /* je: equal / zero */

loc_0054D4F9: ;
    if (CMP_BE(MEM32(eax), esi)) goto loc_0054D542; /* jbe: below or equal (unsigned <=) */

loc_0054D4FD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & esi;

loc_0054D500: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx;
    if (CMP_NE(MEM16(eax), 1)) goto loc_0054D524; /* jne: not equal / not zero */

loc_0054D50E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x555698);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_0054D51D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0054D532; /* je: equal / zero */

loc_0054D524: ;
    eax = MEM32(edi + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x18;
    esi++;
    if (CMP_B(esi, MEM32(eax))) goto loc_0054D500; /* jb: below (unsigned <) */

loc_0054D530: ;
    goto loc_0054D542;

loc_0054D532: ;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 4);
    ecx = esi + esi * 2;
    eax = eax + ecx * 8 + 0xC;
    MEM32(ebp + -8) = eax;

loc_0054D542: ;
    if (TEST_NZ(MEM8(ebx), 8)) { sub_0054D573(); return; } /* jne: not equal / not zero */

loc_0054D547: ;
    eax = MEM32(ebp + -8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    esi = ebx;
    if (TEST_Z(eax, eax)) goto loc_0054D558; /* je: equal / zero */

loc_0054D554: ;
    fp_push(MEMF(eax)); /* fld float */
    goto loc_0054D55A;

loc_0054D558: ;
    fp_push(1.0); /* fld1 */

loc_0054D55A: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0054D7FC(); /* call 0x0054D7FC */

loc_0054D564: ;
    if (CMP_NE(MEM16(ebx + 2), 0xFFFF)) { sub_0054D573(); return; } /* jne: not equal / not zero */

loc_0054D56C: ;
    ebx = 0x80004005u;
    g_seh_ebp = ebp; sub_0054D5DE(); return; /* tail jmp 0x0054D5DE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0054D5F7
 * Original: 0x0054D5F7 - 0x0054D635 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D5F7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054D5F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    esi = MEM32(edi);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0); sub_0054CE89(); /* call 0x0054CE89 */

loc_0054D61D: ;
    if (TEST_Z(eax, eax)) { sub_0054D635(); return; } /* je: equal / zero */

loc_0054D621: ;
    if (TEST_NZ(MEM8(ebp + -3), 1)) { sub_0054D635(); return; } /* jne: not equal / not zero */

loc_0054D627: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0); sub_0054F5CA(); /* call 0x0054F5CA */

loc_0054D630: ;
    g_seh_ebp = ebp; sub_0054D6F2(); return; /* tail jmp 0x0054D6F2 */

}

/**
 * sub_0054D6F9
 * Original: 0x0054D6F9 - 0x0054D79E (165 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D6F9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054D6F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054D712: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 1;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    if (TEST_NZ(esi, esi)) { sub_0054D79E(); return; } /* jne: not equal / not zero */

loc_0054D720: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0054D74A; /* je: equal / zero */

loc_0054D728: ;
    ecx = MEM32(edi + 4);
    eax = eax + eax * 4;
    SET_LO16(edx, MEM16(ecx + eax * 4 + 0x3A));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0054D74A; /* je: equal / zero */

loc_0054D73A: ;
    eax = ZX16(MEM16(ecx + 0x1E));
    edx = ZX16(LO16(edx));
    eax = eax + edx;
    eax = eax + eax * 4;
    SET_LO8(ebx, MEM8(ecx + eax * 4 + 0x41));

loc_0054D74A: ;
    eax = edi + 0x14;
    esi = MEM32(eax);
    goto loc_0054D798;

loc_0054D751: ;
    eax = esi;
    esi = MEM32(esi);
    MEM32(ebp + -8) = eax;
    eax = ZX16(MEM16(eax + 0x18));
    if (CMP_EQ(eax, MEM32(ebp + 8))) goto loc_0054D787; /* je: equal / zero */

loc_0054D761: ;
    if (CMP_EQ(MEM32(ebp + 8), 0xFFFFFFFFu)) goto loc_0054D787; /* je: equal / zero */

loc_0054D767: ;
    if (TEST_Z(MEM8(ebp + 0xD), 2)) goto loc_0054D795; /* je: equal / zero */

loc_0054D76D: ;
    edx = MEM32(edi + 4);
    ecx = ZX16(MEM16(edx + 0x1E));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(edx + eax * 4 + 0x3A));
    eax = eax + ecx;
    eax = eax + eax * 4;
    if (CMP_NE(MEM8(edx + eax * 4 + 0x41), LO8(ebx))) goto loc_0054D795; /* jne: not equal / not zero */

loc_0054D787: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_0054FAB1(); /* call 0x0054FAB1 */

loc_0054D792: ;
    MEM32(ebp + -4) = eax;

loc_0054D795: ;
    eax = edi + 0x14;

loc_0054D798: ;
    if (CMP_NE(esi, eax)) goto loc_0054D751; /* jne: not equal / not zero */

loc_0054D79C: ;
    g_seh_ebp = ebp; sub_0054D7E1(); return; /* tail jmp 0x0054D7E1 */

}

/**
 * sub_0054D7FC
 * Original: 0x0054D7FC - 0x0054D830 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D7FC(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0054D7FC: ;
    eax = MEM32(esi + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0054D82D; /* je: equal / zero */

loc_0054D804: ;
    if (TEST_NZ(MEM8(esi), 8)) goto loc_0054D82D; /* jne: not equal / not zero */

loc_0054D809: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054CBC8(); /* call 0x0054CBC8 */

loc_0054D81B: ;
    if (TEST_Z(eax, eax)) goto loc_0054D824; /* je: equal / zero */

loc_0054D81F: ;
    eax = ZX16(MEM16(eax));
    goto loc_0054D829;

loc_0054D824: ;
    eax = 0xFFFF;

loc_0054D829: ;
    MEM16(esi + 2) = LO16(eax);

loc_0054D82D: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0054D830
 * Original: 0x0054D830 - 0x0054D863 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054D830: ;
    edx = edx + 0x24;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_0054D860; /* je: equal / zero */

loc_0054D83B: ;
    PUSH32(esp, esi);

loc_0054D83C: ;
    eax = ecx + -40;
    esi = MEM32(eax + 8);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0054D84D; /* je: equal / zero */

loc_0054D847: ;
    if (CMP_NE(esi, MEM32(esp + 8))) goto loc_0054D857; /* jne: not equal / not zero */

loc_0054D84D: ;
    SET_LO16(esi, MEM16(eax));
    if (CMP_EQ(LO16(esi), MEM16(esp + 0xC))) goto loc_0054D85F; /* je: equal / zero */

loc_0054D857: ;
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    if (CMP_NE(ecx, edx)) goto loc_0054D83C; /* jne: not equal / not zero */

loc_0054D85F: ;
    POP32(esp, esi);

loc_0054D860: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054D863
 * Original: 0x0054D863 - 0x0054D8EA (135 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D863(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054D863: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX16(MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    edx = ebx;
    PUSH32(esp, 0); sub_0054D830(); /* call 0x0054D830 */

loc_0054D874: ;
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_0054D8B3; /* je: equal / zero */

loc_0054D87B: ;
    if (TEST_NZ(eax, eax)) goto loc_0054D8E6; /* jne: not equal / not zero */

loc_0054D87F: ;
    edx = MEM32(0x555774);
    PUSH32(esp, 0); sub_0054C032(); /* call 0x0054C032 */

loc_0054D88A: ;
    if (TEST_Z(eax, eax)) goto loc_0054D8E6; /* je: equal / zero */

loc_0054D88E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = eax;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax + 0x28;
    MEM32(eax + 0x2C) = ecx;
    MEM32(ecx) = ecx;
    eax = ebx + 0x24;
    MEM32(ecx) = eax;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    eax = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    POP32(esp, edi);
    goto loc_0054D8E6;

loc_0054D8B3: ;
    if (TEST_Z(eax, eax)) goto loc_0054D8E6; /* je: equal / zero */

loc_0054D8B7: ;
    edx = MEM32(eax + 0x2C);
    eax = eax + 0x28;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(0x555774);
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    ecx = ecx + 0x74;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_0054D8E6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054D8EA
 * Original: 0x0054D8EA - 0x0054D902 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D8EA(void)
{

loc_0054D8EA: ;
    edx = MEM32(eax + 0x68);
    eax = eax + 0x64;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0054D902
 * Original: 0x0054D902 - 0x0054D92E (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D902(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054D902: ;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054D907: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = ZX8(LO8(eax));
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = edx;
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;
    if (TEST_Z(eax, eax)) goto loc_0054D92D; /* je: equal / zero */

loc_0054D922: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054D92D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0054D92E
 * Original: 0x0054D92E - 0x0054DB66 (568 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054D92E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054D92E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -48) = ebx;
    edi = ebp + -44;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(MEM32(ebp + 0x10), ebx)) goto loc_0054D964; /* jne: not equal / not zero */

loc_0054D95B: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x38);
    MEM32(ebp + 0x10) = eax;

loc_0054D964: ;
    esi = MEM32(ebp + 0x1C);
    if (CMP_EQ(esi, ebx)) goto loc_0054D96D; /* je: equal / zero */

loc_0054D96B: ;
    MEM32(esi) = ebx;

loc_0054D96D: ;
    eax = MEM32(ebp + 0x10);
    edi = MEM32(eax);
    edx = 0xFF;
    if (CMP_BE(edx & edi, 0)) goto loc_0054DB23; /* jbe: below or equal (unsigned <=) */

loc_0054D97F: ;
    eax = MEM32(ebp + 8);
    edi = edi >> 8;
    edi = edi + MEM32(eax + 4);

loc_0054D988: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & edx;
    if ((ecx == 0)) goto loc_0054D9FC; /* je: equal / zero */

loc_0054D990: ;
    if (CMP_EQ(ecx, 1)) goto loc_0054D9FC; /* je: equal / zero */

loc_0054D995: ;
    if (CMP_EQ(ecx, 2)) goto loc_0054D9E6; /* je: equal / zero */

loc_0054D99A: ;
    if (CMP_EQ(ecx, 3)) goto loc_0054D9E6; /* je: equal / zero */

loc_0054D99F: ;
    if (CMP_NE(ecx, 0xC)) goto loc_0054D9B0; /* jne: not equal / not zero */

loc_0054D9A4: ;
    eax = ZX16(MEM16(edi + 6));
    MEM32(ebp + -20) = eax;
    goto loc_0054DAED;

loc_0054D9B0: ;
    if (CMP_NE(ecx, 4)) goto loc_0054D9C5; /* jne: not equal / not zero */

loc_0054D9B5: ;
    ebx = MEM32(edi + 0xC);
    ebx = ebx >> 8;
    eax = eax >> 8;
    ebx = ebx + eax;
    goto loc_0054DAED;

loc_0054D9C5: ;
    if (CMP_EQ(ecx, 5)) goto loc_0054D9B5; /* je: equal / zero */

loc_0054D9CA: ;
    if (CMP_EQ(ecx, 7)) goto loc_0054D9B5; /* je: equal / zero */

loc_0054D9CF: ;
    if (CMP_EQ(ecx, 0xE)) goto loc_0054D9B5; /* je: equal / zero */

loc_0054D9D4: ;
    eax = eax >> 8;
    if (CMP_NE(ecx, 6)) goto loc_0054D9DF; /* jne: not equal / not zero */

loc_0054D9DC: ;
    eax = eax + MEM32(edi + 8);

loc_0054D9DF: ;
    ebx = eax;
    goto loc_0054DAED;

loc_0054D9E6: ;
    eax = eax >> 8;
    ebx = eax;
    if (CMP_AE(ebx, MEM32(ebp + -12))) goto loc_0054DAED; /* jae: above or equal (unsigned >=) */

loc_0054D9F4: ;
    MEM32(ebp + -12) = ebx;
    goto loc_0054DAED;

loc_0054D9FC: ;
    eax = eax >> 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(esi, esi)) goto loc_0054DA07; /* je: equal / zero */

loc_0054DA05: ;
    MEM32(esi) = ebx;

loc_0054DA07: ;
    if (CMP_EQ(MEM16(edi + 6), 0xFFFF)) goto loc_0054DB50; /* je: equal / zero */

loc_0054DA13: ;
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(esi, esi)) goto loc_0054DA1F; /* je: equal / zero */

loc_0054DA1A: ;
    esi = esi + 0x5C;
    goto loc_0054DA9C;

loc_0054DA1F: ;
    if (TEST_Z(MEM8(edi + 5), 4)) goto loc_0054DA57; /* je: equal / zero */

loc_0054DA25: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(edi + 8);
    eax = eax + MEM32(ecx + 4);
    esi = 0x1FFF;
    edx = MEM32(eax);
    ecx = edx;
    ecx = ecx >> 0x11;
    ecx = ecx & esi;
    edx = edx & esi;
    if (CMP_AE(ecx, edx)) { sub_0054DB66(); return; } /* jae: above or equal (unsigned >=) */

loc_0054DA46: ;
    eax = eax + ecx * 8 + 4;
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(eax, MEM16(eax + 2));
    MEM16(ebp + -4) = LO16(ecx);
    goto loc_0054DA63;

loc_0054DA57: ;
    SET_LO16(eax, MEM16(edi + 8));
    MEM16(ebp + -4) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0xA));

loc_0054DA63: ;
    if (CMP_EQ(MEM16(ebp + -4), 0xFFFF)) { sub_0054DB66(); return; } /* je: equal / zero */

loc_0054DA6F: ;
    esi = MEM32(ebp + 8);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0); sub_0054D481(); /* call 0x0054D481 */

loc_0054DA7A: ;
    edx = eax;
    if (TEST_Z(edx, edx)) { sub_0054DB66(); return; } /* je: equal / zero */

loc_0054DA84: ;
    eax = ZX16(MEM16(ebp + -4));
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, 0); sub_00554399(); /* call 0x00554399 */

loc_0054DA91: ;
    if (TEST_Z(eax, eax)) { sub_0054DB66(); return; } /* je: equal / zero */

loc_0054DA99: ;
    esi = ebp + -48;

loc_0054DA9C: ;
    eax = MEM32(esi + 0xC);
    ecx = esi + 4;
    MEM32(ebp + -24) = ecx;
    PUSH32(esp, 0); sub_0055442A(); /* call 0x0055442A */

loc_0054DAAA: ;
    SET_LO16(ecx, MEM16(edi + 6));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0054DADD; /* je: equal / zero */

loc_0054DAB6: ;
    esi = MEM32(esi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_0054DAD3; /* je: equal / zero */

loc_0054DABD: ;
    ecx = MEM32(ebp + -24);
    eax = esi;
    PUSH32(esp, 0); sub_0055442A(); /* call 0x0055442A */

loc_0054DAC7: ;
    ecx = ZX16(MEM16(edi + 6));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    goto loc_0054DADD;

loc_0054DAD3: ;
    ecx = ZX16(LO16(ecx));
    ecx++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(ebp + -4) = ecx;

loc_0054DADD: ;
    eax = MEM32(edi);
    esi = MEM32(ebp + 0x1C);
    eax = eax >> 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    edx = 0xFF;

loc_0054DAED: ;
    if (CMP_BE(ebx, MEM32(ebp + -16))) goto loc_0054DAF5; /* jbe: below or equal (unsigned <=) */

loc_0054DAF2: ;
    MEM32(ebp + -16) = ebx;

loc_0054DAF5: ;
    eax = ZX8(MEM8(edi + 4));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    edi = edi + eax + 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & edx;
    if (CMP_B(MEM32(ebp + -8), eax)) goto loc_0054D988; /* jb: below (unsigned <) */

loc_0054DB10: ;
    eax = MEM32(ebp + -12);
    if (CMP_AE(eax, MEM32(ebp + -4))) goto loc_0054DB1B; /* jae: above or equal (unsigned >=) */

loc_0054DB18: ;
    MEM32(ebp + -4) = eax;

loc_0054DB1B: ;
    ecx = MEM32(ebp + -16);
    if (CMP_A(ecx, MEM32(ebp + -4))) goto loc_0054DB26; /* ja: above (unsigned >) */

loc_0054DB23: ;
    ecx = MEM32(ebp + -4);

loc_0054DB26: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0054DB2F; /* je: equal / zero */

loc_0054DB2D: ;
    MEM32(eax) = ecx;

loc_0054DB2F: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0054DB47; /* je: equal / zero */

loc_0054DB36: ;
    edx = MEM32(ebp + -20);
    if (CMP_EQ(edx, 0xFFFF)) goto loc_0054DB61; /* je: equal / zero */

loc_0054DB41: ;
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(eax) = edx;

loc_0054DB47: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_0054DB50: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0054DB5A; /* je: equal / zero */

loc_0054DB57: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;

loc_0054DB5A: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0054DB47; /* je: equal / zero */

loc_0054DB61: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    goto loc_0054DB47;

}

/**
 * sub_0054DB6D
 * Original: 0x0054DB6D - 0x0054DD1C (431 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DB6D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054DB6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = edx;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + 0x48);
    ebx = ecx;
    ebx = ebx - MEM32(eax + 0x4C);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -20) = edx;
    PUSH32(esp, 0); sub_0054D92E(); /* call 0x0054D92E */

loc_0054DBAF: ;
    edx = 0; /* xor self */
    if (CMP_L(eax, edx)) goto loc_0054DD15; /* jl: less (signed <) */

loc_0054DBB9: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -24);
    if (CMP_B(ecx, eax)) goto loc_0054DBCA; /* jb: below (unsigned <) */

loc_0054DBC3: ;
    MEM32(esi) = edx;
    goto loc_0054DD0E;

loc_0054DBCA: ;
    if (CMP_BE(MEM16(edi + 0x54), LO16(edx))) goto loc_0054DC46; /* jbe: below or equal (unsigned <=) */

loc_0054DBD0: ;
    if (CMP_EQ(MEM32(ebp + -4), 0xFFFFFFFFu)) goto loc_0054DC22; /* je: equal / zero */

loc_0054DBD6: ;
    edx = 0; /* xor self */
    eax = ecx + ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    eax = MEM32(ebp + -4);
    eax = eax - edx;
    edx = MEM32(0x555774);
    eax = eax + ebx;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(esi) = eax;
    goto loc_0054DC16;

loc_0054DBF3: ;
    SET_LO16(eax, MEM16(ebp + 8));
    if (CMP_AE(LO16(eax), MEM16(edi + 0x54))) goto loc_0054DC25; /* jae: above or equal (unsigned >=) */

loc_0054DBFD: ;
    eax = MEM32(esi);
    ecx = ecx | 0xFFFFFFFFu;
    ecx = ecx - eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    if (CMP_AE(eax, ecx)) goto loc_0054DC22; /* jae: above or equal (unsigned >=) */

loc_0054DC0D: ;
    eax = MEM32(esi);
    eax = eax + ecx;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM32(esi) = eax;

loc_0054DC16: ;
    eax = eax - ebx;
    if (CMP_B(eax, MEM32(edx + 0x90))) goto loc_0054DBF3; /* jb: below (unsigned <) */

loc_0054DC20: ;
    goto loc_0054DC25;

loc_0054DC22: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;

loc_0054DC25: ;
    esi = MEM32(esi);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0054DC3B; /* je: equal / zero */

loc_0054DC2C: ;
    eax = MEM32(ebp + -20);
    esi = esi + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = esi;
    goto loc_0054DD13;

loc_0054DC3B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_0054DD13;

loc_0054DC46: ;
    eax = MEM32(edi + 4);
    if (CMP_EQ(MEM32(eax + 0x1C), edx)) goto loc_0054DC5D; /* je: equal / zero */

loc_0054DC4E: ;
    if (TEST_Z(MEM8(eax + 0x18), 1)) goto loc_0054DC63; /* je: equal / zero */

loc_0054DC54: ;
    MEM32(ebp + -12) = 0xFFFF;
    goto loc_0054DC63;

loc_0054DC5D: ;
    eax = MEM32(edi + 0x50);
    MEM32(ebp + -12) = eax;

loc_0054DC63: ;
    eax = MEM32(edi + 0x6C);
    if (CMP_EQ(eax, edx)) goto loc_0054DC75; /* je: equal / zero */

loc_0054DC6A: ;
    ecx = edi + 0x60;
    PUSH32(esp, 0); sub_0055442A(); /* call 0x0055442A */

loc_0054DC72: ;
    MEM32(ebp + -16) = eax;

loc_0054DC75: ;
    eax = MEM32(edi + 0x70);
    if (TEST_NZ(eax, eax)) goto loc_0054DC7F; /* jne: not equal / not zero */

loc_0054DC7C: ;
    eax = MEM32(edi + 0x68);

loc_0054DC7F: ;
    ecx = edi + 0x60;
    PUSH32(esp, 0); sub_0055442A(); /* call 0x0055442A */

loc_0054DC87: ;
    edx = 0xFFFF;
    (void)0; /* cmp MEM32(ebp + -12), edx - flags set for next jcc */
    ecx = eax;
    if (CMP_EQ(MEM32(ebp + -12), edx)) goto loc_0054DC9F; /* je: equal / zero */

loc_0054DC93: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -12));
    edx = edx + MEM32(edi + 0x68);
    edx = edx + MEM32(ebp + -8);

loc_0054DC9F: ;
    eax = MEM32(ebp + -16);
    edi = MEM32(ebp + -8);
    edi = edi + eax;
    eax = MEM32(ebp + -20);
    eax = eax + ebx;
    if (CMP_AE(eax, edi)) goto loc_0054DCBA; /* jae: above or equal (unsigned >=) */

loc_0054DCB0: ;
    eax = MEM32(ebp + -8);
    eax = eax + ecx;
    eax = eax + MEM32(ebp + -16);
    goto loc_0054DCCE;

loc_0054DCBA: ;
    if (CMP_AE(eax, edx)) goto loc_0054DD08; /* jae: above or equal (unsigned >=) */

loc_0054DCBE: ;
    eax = eax - MEM32(ebp + -8);
    edx = 0; /* xor self */
    eax = eax - MEM32(ebp + -16);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = ecx;
    eax = eax - edx;
    eax = eax + ebx;

loc_0054DCCE: ;
    MEM32(esi) = eax;
    eax = MEM32(0x555774);
    edx = 0; /* xor self */
    goto loc_0054DCE4;

loc_0054DCD9: ;
    edi = ZX16(LO16(edx));
    if (CMP_AE(edi, MEM32(ebp + -12))) goto loc_0054DCF0; /* jae: above or equal (unsigned >=) */

loc_0054DCE1: ;
    MEM32(esi) = MEM32(esi) + ecx;
    edx++;

loc_0054DCE4: ;
    edi = MEM32(esi);
    edi = edi - ebx;
    if (CMP_B(edi, MEM32(eax + 0x90))) goto loc_0054DCD9; /* jb: below (unsigned <) */

loc_0054DCF0: ;
    ecx = MEM32(esi);
    ecx = ecx - ebx;
    if (CMP_AE(ecx, MEM32(eax + 0x90))) goto loc_0054DD01; /* jae: above or equal (unsigned >=) */

loc_0054DCFC: ;
    eax = MEM32(ebp + -4);
    MEM32(esi) = eax;

loc_0054DD01: ;
    eax = MEM32(esi);
    eax = eax + MEM32(ebp + -20);
    goto loc_0054DD0E;

loc_0054DD08: ;
    MEM32(esi) = MEM32(esi) & 0;
    eax = MEM32(ebp + -24);

loc_0054DD0E: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;

loc_0054DD13: ;
    eax = 0; /* xor self */

loc_0054DD15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054DD1C
 * Original: 0x0054DD1C - 0x0054DD3B (31 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DD1C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054DD1C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) { sub_0054DD3B(); return; } /* je: equal / zero */

loc_0054DD36: ;
    eax = ecx + 0x5C;
    g_seh_ebp = ebp; sub_0054DD65(); return; /* tail jmp 0x0054DD65 */

}

/**
 * sub_0054DD7B
 * Original: 0x0054DD7B - 0x0054DD93 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DD7B(void)
{

loc_0054DD7B: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C5218(); /* call 0x004C5218 */

loc_0054DD90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054DD93
 * Original: 0x0054DD93 - 0x0054DDB3 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DD93(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054DD93: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(0x24));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0054DDB3(); return; } /* jne: not equal / not zero */

loc_0054DDA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0054DDAE: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0054DDB6(); return; /* tail jmp 0x0054DDB6 */

}

/**
 * sub_0054DDBC
 * Original: 0x0054DDBC - 0x0054DF00 (324 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DDBC(void)
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

loc_0054DDBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(0x55578C), ecx)) goto loc_0054DEB1; /* je: equal / zero */

loc_0054DDD0: ;
    PUSH32(esp, esi);
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    MEM32(0x5559E8) = 0x7F;
    fp_push(0.0); /* fldz */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x5559EC) = ecx;
    fp_push(0.0); /* fldz */
    esi = ebp + -12;
    edi = 0x5559F0;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(0x4E1660);
    fp_push(0.0); /* fldz */
    edx = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ebp + -12;
    fp_push(0.0); /* fldz */
    edi = 0x5559FC;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    fp_push(0.0); /* fldz */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ebp + -12;
    fp_push(1.0); /* fld1 */
    edi = 0x555A08;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    fp_push(0.0); /* fldz */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ebp + -12;
    fp_push(0.0); /* fldz */
    edi = 0x555A14;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    fp_push(1.0); /* fld1 */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEMF(0x555A20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(0x555A24) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ebp + -12;
    fp_push(1.0); /* fld1 */
    edi = 0x555A2C;
    MEMF(0x555A28) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx & 0xFFFF;
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(edx, 2)) goto loc_0054DE97; /* je: equal / zero */

loc_0054DE90: ;
    if (TEST_Z(eax, 0x10000)) goto loc_0054DEA5; /* je: equal / zero */

loc_0054DE97: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x555788) = 1;
    if (((int32_t)(eax & eax) >= 0)) goto loc_0054DEAB; /* jns: not sign (positive) */

loc_0054DEA5: ;
    MEM32(0x555788) = ecx;

loc_0054DEAB: ;
    MEM32(0x55578C) = ecx;

loc_0054DEB1: ;
    eax = ebx + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561000), _icall_esp); /* indirect call */
    }

loc_0054DEBB: ;
    eax = ebx + 0x148;
    MEM32(ebx + 0x14C) = eax;
    MEM32(eax) = eax;
    eax = ebx + 0x15C;
    MEM32(ebx + 0x160) = eax;
    MEM32(eax) = eax;
    eax = ebx + 0x154;
    MEM32(ebx + 0x158) = eax;
    MEM32(eax) = eax;
    eax = ebx;
    MEM32(ebx + 4) = ebx;
    MEM32(ebx) = ebx;
    MEM32(ebx + 8) = 1;
    MEM16(ebx + 0x12) = 0xFF;
    PUSH32(esp, 0); sub_0054F184(); /* call 0x0054F184 */

loc_0054DEFE: ;
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
 * sub_0054DF00
 * Original: 0x0054DF00 - 0x0054DF63 (99 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054DF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054DF13: ;
    eax = esi + 0x148;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_0054DF31; /* je: equal / zero */

loc_0054DF1D: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_0054DF31: ;
    ecx = esi + 0x15C;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) { sub_0054DF63(); return; } /* je: equal / zero */

loc_0054DF3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0054DF3F: ;
    edx = MEM32(eax);
    MEM32(eax + -4) = MEM32(eax + -4) & 0;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    edi = MEM32(eax);
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    edi = MEM32(eax + 4);
    ebx = MEM32(eax);
    MEM32(edi) = ebx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = edx;
    if (CMP_NE(edx, ecx)) goto loc_0054DF3F; /* jne: not equal / not zero */

loc_0054DF5F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0054DF81(); return; /* tail jmp 0x0054DF81 */

}

/**
 * sub_0054DF98
 * Original: 0x0054DF98 - 0x0054DFC5 (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DF98(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054DF98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054DFAB: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = MEM32(esi + 8);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054DFC0; /* je: equal / zero */

loc_0054DFB7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054DFC0: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054DFC5
 * Original: 0x0054DFC5 - 0x0054E004 (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054DFC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054DFC5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0054DFD4: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    ebx = MEM32(esi + 8);
    if ((MEM32(esi + 8) != 0)) { sub_0054E004(); return; } /* jne: not equal / not zero */

loc_0054DFDC: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054DFE7: ;
    if (TEST_Z(MEM8(esi + 0x17), 0x20)) goto loc_0054DFF8; /* je: equal / zero */

loc_0054DFED: ;
    edi = MEM32(0x555774);
    PUSH32(esp, 0); sub_0054B98F(); /* call 0x0054B98F */

loc_0054DFF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0054E03D(); /* call 0x0054E03D */

loc_0054E000: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0054E039(); return; /* tail jmp 0x0054E039 */

}

/**
 * sub_0054E03D
 * Original: 0x0054E03D - 0x0054E05E (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E03D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054E03D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0054DF00(); /* call 0x0054DF00 */

loc_0054E046: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054E057; /* je: equal / zero */

loc_0054E04D: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054E056: ;
    POP32(esp, ecx);

loc_0054E057: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054E05E
 * Original: 0x0054E05E - 0x0054E114 (182 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E05E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E05E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -44;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -68;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x14);
    edi = 0x20000000;
    (void)0; /* test edi, eax - flags set for next jcc */
    MEM32(ebp + -44) = 0x18;
    MEM32(ebp + -64) = 5;
    MEM16(esi + 0x10) = LO16(edx);
    if (TEST_Z(edi, eax)) goto loc_0054E0C9; /* je: equal / zero */

loc_0054E095: ;
    MEM8(ebp + -39) = MEM8(ebp + -39) | 0x20;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEM32(ebp + -28) = 0x4E13A4;
    if (TEST_Z(LO8(eax), 2)) goto loc_0054E0F1; /* je: equal / zero */

loc_0054E0A4: ;
    MEM8(ebp + -38) = MEM8(ebp + -38) | 0x60;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(0x555788), eax - flags set for next jcc */
    MEM32(ebp + -28) = 0x4E13AC;
    SET_LO8(eax, (CMP_NE(MEM32(0x555788), eax)) ? 1 : 0); /* setne */
    eax = eax | 2;
    MEM32(esi + 0x9C) = MEM32(esi + 0x9C) | eax;
    MEM8(esi + 0x47) = MEM8(esi + 0x47) | 4;
    goto loc_0054E0F1;

loc_0054E0C9: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xBB80);
    eax = edx + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C39DF(); /* call 0x004C39DF */

loc_0054E0DD: ;
    eax = ebp + -20;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -60) = eax;
    eax = 0x400000;
    MEM32(ebp + -40) = MEM32(ebp + -40) | eax;
    MEM32(ebp + -68) = MEM32(ebp + -68) | eax;

loc_0054E0F1: ;
    (void)0; /* test MEM8(esi + 0x17), 0x40 - flags set for next jcc */
    eax = MEM32(0x555774);
    PUSH32(esp, 0);
    if (TEST_Z(MEM8(esi + 0x17), 0x40)) { sub_0054E114(); return; } /* je: equal / zero */

loc_0054E0FE: ;
    MEM32(ebp + -68) = MEM32(ebp + -68) | edi;
    eax = MEM32(eax + 0x10);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C67B9(); /* call 0x004C67B9 */

loc_0054E112: ;
    g_seh_ebp = ebp; sub_0054E125(); return; /* tail jmp 0x0054E125 */

}

/**
 * sub_0054E16F
 * Original: 0x0054E16F - 0x0054E182 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E16F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054E16F: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) { sub_0054E182(); return; } /* je: equal / zero */

loc_0054E176: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C3960(); /* call 0x004C3960 */

loc_0054E17C: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    g_seh_ebp = ebp; sub_0054E193(); return; /* tail jmp 0x0054E193 */

}

/**
 * sub_0054E199
 * Original: 0x0054E199 - 0x0054E1D8 (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E199(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054E199: ;
    if (CMP_EQ(MEM16(esi + 0x10), 0)) goto loc_0054E1CE; /* je: equal / zero */

loc_0054E1A0: ;
    if (CMP_NE(MEM32(esi + 0x1C), 0)) goto loc_0054E1B2; /* jne: not equal / not zero */

loc_0054E1A6: ;
    if (CMP_NE(MEM32(esi + 0x20), 0)) goto loc_0054E1B2; /* jne: not equal / not zero */

loc_0054E1AC: ;
    eax = 0x8007000Eu;
    esp += 4; return; /* ret */

loc_0054E1B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_0054E22F(); /* call 0x0054E22F */

loc_0054E1BE: ;
    eax = MEM32(esi + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0054E1CE; /* je: equal / zero */

loc_0054E1C6: ;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5213(); /* call 0x004C5213 */

loc_0054E1CE: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054F184(); /* call 0x0054F184 */

loc_0054E1D5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0054E1D8
 * Original: 0x0054E1D8 - 0x0054E205 (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E1D8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E1D8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E1EC: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) { sub_0054E205(); return; } /* je: equal / zero */

loc_0054E1F3: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5164(); /* call 0x004C5164 */

loc_0054E1FD: ;
    esi = MEM32(ebp + -8);
    esi = esi & 1;
    g_seh_ebp = ebp; sub_0054E21B(); return; /* tail jmp 0x0054E21B */

}

/**
 * sub_0054E22F
 * Original: 0x0054E22F - 0x0054E253 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E22F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054E22F: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x68;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E24A: ;
    if (TEST_Z(edi, edi)) { sub_0054E253(); return; } /* je: equal / zero */

loc_0054E24E: ;
    ebx = MEM32(edi + 0x1C);
    g_seh_ebp = ebp; sub_0054E255(); return; /* tail jmp 0x0054E255 */

}

/**
 * sub_0054E3EB
 * Original: 0x0054E3EB - 0x0054E40C (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E3EB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E3EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E3FB: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) { sub_0054E40C(); return; } /* je: equal / zero */

loc_0054E402: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5213(); /* call 0x004C5213 */

loc_0054E40A: ;
    g_seh_ebp = ebp; sub_0054E414(); return; /* tail jmp 0x0054E414 */

}

/**
 * sub_0054E425
 * Original: 0x0054E425 - 0x0054E457 (50 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E425(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054E425: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    eax = edi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E43C: ;
    eax = MEM32(edi + 0x1C);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_0054E457(); return; } /* je: equal / zero */

loc_0054E445: ;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 3;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5120(); /* call 0x004C5120 */

loc_0054E455: ;
    g_seh_ebp = ebp; sub_0054E46D(); return; /* tail jmp 0x0054E46D */

}

/**
 * sub_0054E484
 * Original: 0x0054E484 - 0x0054E4A9 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E484(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E484: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E497: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E4A9(); return; } /* je: equal / zero */

loc_0054E4A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5020(); /* call 0x004C5020 */

loc_0054E4A7: ;
    g_seh_ebp = ebp; sub_0054E4B2(); return; /* tail jmp 0x0054E4B2 */

}

/**
 * sub_0054E4CA
 * Original: 0x0054E4CA - 0x0054E4EF (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E4CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E4CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E4DD: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E4EF(); return; } /* je: equal / zero */

loc_0054E4E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C503C(); /* call 0x004C503C */

loc_0054E4ED: ;
    g_seh_ebp = ebp; sub_0054E4F8(); return; /* tail jmp 0x0054E4F8 */

}

/**
 * sub_0054E510
 * Original: 0x0054E510 - 0x0054E539 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E523: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) { sub_0054E539(); return; } /* je: equal / zero */

loc_0054E52A: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C50E4(); /* call 0x004C50E4 */

loc_0054E537: ;
    g_seh_ebp = ebp; sub_0054E544(); return; /* tail jmp 0x0054E544 */

}

/**
 * sub_0054E55A
 * Original: 0x0054E55A - 0x0054E57F (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E55A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E55A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E56D: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E57F(); return; } /* je: equal / zero */

loc_0054E577: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C59C7(); /* call 0x004C59C7 */

loc_0054E57D: ;
    g_seh_ebp = ebp; sub_0054E588(); return; /* tail jmp 0x0054E588 */

}

/**
 * sub_0054E5A0
 * Original: 0x0054E5A0 - 0x0054E5C5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E5A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E5A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E5B3: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E5C5(); return; } /* je: equal / zero */

loc_0054E5BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C50C8(); /* call 0x004C50C8 */

loc_0054E5C3: ;
    g_seh_ebp = ebp; sub_0054E5CE(); return; /* tail jmp 0x0054E5CE */

}

/**
 * sub_0054E5E6
 * Original: 0x0054E5E6 - 0x0054E620 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E5E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E5E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E5F9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C6048(); /* call 0x004C6048 */

loc_0054E608: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E619; /* je: equal / zero */

loc_0054E610: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E619: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054E620
 * Original: 0x0054E620 - 0x0054E65A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E633: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C59E3(); /* call 0x004C59E3 */

loc_0054E642: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E653; /* je: equal / zero */

loc_0054E64A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E653: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054E65A
 * Original: 0x0054E65A - 0x0054E67F (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E65A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E65A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E66D: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E67F(); return; } /* je: equal / zero */

loc_0054E677: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5090(); /* call 0x004C5090 */

loc_0054E67D: ;
    g_seh_ebp = ebp; sub_0054E688(); return; /* tail jmp 0x0054E688 */

}

/**
 * sub_0054E6A0
 * Original: 0x0054E6A0 - 0x0054E6C5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E6A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E6B3: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E6C5(); return; } /* je: equal / zero */

loc_0054E6BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C50AC(); /* call 0x004C50AC */

loc_0054E6C3: ;
    g_seh_ebp = ebp; sub_0054E6CE(); return; /* tail jmp 0x0054E6CE */

}

/**
 * sub_0054E6E6
 * Original: 0x0054E6E6 - 0x0054E70B (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E6E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E6E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E6F9: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E70B(); return; } /* je: equal / zero */

loc_0054E703: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C519C(); /* call 0x004C519C */

loc_0054E709: ;
    g_seh_ebp = ebp; sub_0054E714(); return; /* tail jmp 0x0054E714 */

}

/**
 * sub_0054E72C
 * Original: 0x0054E72C - 0x0054E751 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E72C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E72C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E73F: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E751(); return; } /* je: equal / zero */

loc_0054E749: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C602C(); /* call 0x004C602C */

loc_0054E74F: ;
    g_seh_ebp = ebp; sub_0054E75A(); return; /* tail jmp 0x0054E75A */

}

/**
 * sub_0054E772
 * Original: 0x0054E772 - 0x0054E7A9 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E772(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E772: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E785: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C5180(); /* call 0x004C5180 */

loc_0054E791: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E7A2; /* je: equal / zero */

loc_0054E799: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E7A2: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054E7A9
 * Original: 0x0054E7A9 - 0x0054E7E3 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E7A9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E7A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E7BC: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C5144(); /* call 0x004C5144 */

loc_0054E7CB: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E7DC; /* je: equal / zero */

loc_0054E7D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E7DC: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054E7E3
 * Original: 0x0054E7E3 - 0x0054E808 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E7E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E7E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E7F6: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E808(); return; } /* je: equal / zero */

loc_0054E800: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5074(); /* call 0x004C5074 */

loc_0054E806: ;
    g_seh_ebp = ebp; sub_0054E811(); return; /* tail jmp 0x0054E811 */

}

/**
 * sub_0054E829
 * Original: 0x0054E829 - 0x0054E84E (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E829(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E829: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E83C: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E84E(); return; } /* je: equal / zero */

loc_0054E846: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5058(); /* call 0x004C5058 */

loc_0054E84C: ;
    g_seh_ebp = ebp; sub_0054E857(); return; /* tail jmp 0x0054E857 */

}

/**
 * sub_0054E86F
 * Original: 0x0054E86F - 0x0054E894 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E86F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E86F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E882: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    if (TEST_Z(eax, eax)) { sub_0054E894(); return; } /* je: equal / zero */

loc_0054E88C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5164(); /* call 0x004C5164 */

loc_0054E892: ;
    g_seh_ebp = ebp; sub_0054E89D(); return; /* tail jmp 0x0054E89D */

}
