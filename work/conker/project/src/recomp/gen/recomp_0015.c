/**
 * Burnout 3 - Recompiled code chunk 15
 * Functions: 250 (0x0014D910 - 0x001681D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0014D910
 * Original: 0x0014D910 - 0x0014D95D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D910(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014D910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0014D94A; /* je: equal / zero */

loc_0014D91E: ;
    ecx = MEM32(eax + 0x144);
    MEM8(eax + 0x50) = LO8(edx);
    eax = MEM32(esi + 0x54);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) & 0xFD;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 8;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) | 1;
    eax = MEM32(esi + 0x54);
    MEM16(eax + 0x38) = 0x28;
    MEM32(ecx) = edx;
    MEM32(esi + 0x54) = edx;

loc_0014D94A: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0014D952: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0014D958: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D960
 * Original: 0x0014D960 - 0x0014D99D (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D960(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014D960: ;
    ecx = MEM32(eax + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_0014D99C; /* je: equal / zero */

loc_0014D967: ;
    edx = MEM32(ecx + 0x144);
    MEM8(ecx + 0x50) = 0;
    ecx = MEM32(eax + 0x54);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) & 0xFD;
    ecx = MEM32(eax + 0x54);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 8;
    ecx = MEM32(eax + 0x54);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 1;
    ecx = MEM32(eax + 0x54);
    MEM16(ecx + 0x38) = 0x28;
    MEM32(edx) = 0;
    MEM32(eax + 0x54) = 0;

loc_0014D99C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D9A0
 * Original: 0x0014D9A0 - 0x0014D9F1 (81 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D9A0: ;
    esp = esp - 0x40;
    eax = MEM32(ebx + 0x4C);
    (void)0; /* cmp MEM32(eax + 0x68), 0x25 - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = ebx;
    MEMF(esp + 4) = xmm0; /* movss */
    MEM8(esp + 8) = 0xC8;
    if (CMP_NE(MEM32(eax + 0x68), 0x25)) { sub_0014D9F1(); return; } /* jne: not equal / not zero */

loc_0014D9BD: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CFC); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    g_seh_ebp = ebp; sub_0014DA2D(); return; /* tail jmp 0x0014DA2D */

}

/**
 * sub_0014DAD0
 * Original: 0x0014DAD0 - 0x0014DD94 (708 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DAD0(void)
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

loc_0014DAD0: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x144);
    edx = MEM32(edi);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x7FA20C);
    edx = edx + 0x4C;
    if (CMP_LE(eax & eax, 0)) goto loc_0014DD8A; /* jle: less or equal (signed <=) */

loc_0014DAFA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx + 0x2C;
    esi = edx + 0x18;
    ebp = MEM32(esi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 4;
    MEM32(ebx + 8) = esi;
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    ebp = MEM32(eax);
    ebx = MEM32(esp + 0x10);
    esi = esi + esi * 4;
    esi = ebx + esi * 8;
    ebx = esi;
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ebx + 4) = ebp;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(edx + 0x30);
    MEM32(esi + 0xC) = eax;
    xmm0 = MEMF(0x648D14); /* movss */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_push(MEMF(edx + 0x24)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014DB7F; /* jnp: not parity */

loc_0014DB7B: ;
    xmm0 = xmm0 / xmm2; /* divss */

loc_0014DB7F: ;
    xmm1 = MEMF(0x649610); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    eax = MEM32(edi + 4);
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x64960C); /* mulss */
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x14) = 0xFF;
    xmm0 = xmm0 + MEMF(edi + 4); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 4) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0014DBC9; /* jbe: below or equal (unsigned <=) */

loc_0014DBBF: ;
    /* nop */

loc_0014DBC0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0014DBC0; /* ja: above (unsigned >) */

loc_0014DBC9: ;
    xmm5 = 0.0f; /* xorps self = zero */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_0014DBDA; /* jbe: below or equal (unsigned <=) */

loc_0014DBD1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_0014DBD1; /* ja: above (unsigned >) */

loc_0014DBDA: ;
    /* ucomiss xmm2, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(edi + 4) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0014DC0F; /* jnp: not parity */

loc_0014DBE8: ;
    xmm0 = MEMF(edx + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(esi + 0x20) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x24); /* mulss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    goto loc_0014DC19;

loc_0014DC0F: ;
    MEMF(esi + 0x20) = xmm5; /* movss */
    MEMF(esi + 0x24) = xmm5; /* movss */

loc_0014DC19: ;
    SET_LO8(edx, MEM8(ecx + 0x4E));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ecx + 0x4E) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, MEM8(ecx + 0x41));
    edi = ZX8(LO8(edx));
    MEM8(esp + 0x1C) = LO8(edx);
    edx = SX8(LO8(eax));
    if (CMP_NE(edx, edi)) goto loc_0014DC38; /* jne: not equal / not zero */

loc_0014DC34: ;
    MEM8(ecx + 0x4E) = 0;

loc_0014DC38: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    SET_LO8(ebx, MEM8(ecx + 0x4E));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx + 0x4C) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x4D));
    if (CMP_NE(LO8(ebx), LO8(eax))) goto loc_0014DC61; /* jne: not equal / not zero */

loc_0014DC4C: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx + 0x4D) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, edi)) goto loc_0014DC5C; /* jne: not equal / not zero */

loc_0014DC58: ;
    MEM8(ecx + 0x4D) = 0;

loc_0014DC5C: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(ecx + 0x4C) = LO8(edx);

loc_0014DC61: ;
    if (CMP_LE(MEM8(ecx + 0x4C), 2)) goto loc_0014DD87; /* jle: less or equal (signed <=) */

loc_0014DC6B: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    SET_LO16(eax, SX8(LO8(ebx)));
    eax--;
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_0014DC7E; /* jge: greater or equal (signed >=) */

loc_0014DC79: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    eax--;

loc_0014DC7E: ;
    eax--;
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_0014DC89; /* jge: greater or equal (signed >=) */

loc_0014DC84: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    eax--;

loc_0014DC89: ;
    edx = eax + -1;
    if (CMP_GE(LO16(edx) & LO16(edx), 0)) goto loc_0014DC96; /* jge: greater or equal (signed >=) */

loc_0014DC91: ;
    SET_LO16(edx, ZX8(LO8(ecx)));
    edx--;

loc_0014DC96: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    edi = MEM32(esp + 0x10);
    eax = SX16(LO16(eax));
    ecx = eax + eax * 4;
    eax = SX16(LO16(edx));
    edx = eax + eax * 4;
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = edi + ecx * 8;
    edx = edi + edx * 8;
    if (1 /* jnp after test - parity */) goto loc_0014DD87; /* jnp: not parity */

loc_0014DCBE: ;
    xmm0 = MEMF(ecx + 0xC); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014DD87; /* jnp: not parity */

loc_0014DCD0: ;
    xmm2 = MEMF(esi + 0x10); /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 8); /* subss */
    xmm4 = MEMF(ecx + 0x10); /* movss */
    xmm3 = MEMF(edx + 8); /* movss */
    xmm3 = xmm3 - MEMF(ecx + 8); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(edx); /* movss */
    xmm2 = xmm2 - MEMF(ecx); /* subss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(0x648D54) - sets EFLAGS */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D54))) goto loc_0014DD7D; /* jbe: below or equal (unsigned <=) */

loc_0014DD47: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    POP32(esp, esi);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp);
    MEM32(ecx + 0x20) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 1;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x24) = edx;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0014DD7D: ;
    MEMF(ecx + 0x20) = xmm5; /* movss */
    MEMF(ecx + 0x24) = xmm5; /* movss */

loc_0014DD87: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0014DD8A: ;
    eax = 1;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014DDA0
 * Original: 0x0014DDA0 - 0x0014DEF6 (342 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DDA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DDA0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = MEM32(esi + 0x144);
    eax = MEM32(ebx);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(esi + 0x140);
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(eax, eax)) goto loc_0014DDCC; /* je: equal / zero */

loc_0014DDC0: ;
    eax = MEM32(eax + 0x4C);
    ecx = MEM32(eax + 0x260);
    MEM32(ebx + 0x1C) = ecx;

loc_0014DDCC: ;
    (void)0; /* cmp MEM8(esi + 0x4C), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(MEM8(esi + 0x4C), 1)) { sub_0014DEF6(); return; } /* jle: less or equal (signed <=) */

loc_0014DDD7: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    edi--;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    if (((int32_t)edi >= 0)) goto loc_0014DDE9; /* jns: not sign (positive) */

loc_0014DDE4: ;
    edi = ZX8(MEM8(esi + 0x41));
    edi--;

loc_0014DDE9: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(edi, edx)) goto loc_0014DEF1; /* je: equal / zero */

loc_0014DDF5: ;
    xmm4 = MEMF(0x648D14); /* movss */
    /* nop */

loc_0014DE00: ;
    eax = edi;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_0014DE0A; /* jns: not sign (positive) */

loc_0014DE05: ;
    edi = ZX8(MEM8(esi + 0x41));
    edi--;

loc_0014DE0A: ;
    edx = eax + eax * 4;
    xmm1 = MEMF(ebp + edx * 8 + 0xC); /* movss */
    edx = ebp + edx * 8;
    xmm1 = xmm1 + xmm0; /* addss */
    ecx = edi + edi * 4;
    xmm0 = xmm1; /* movaps */
    /* comiss xmm0, MEMF(ebx + 0xC) - sets EFLAGS */
    ecx = ebp + ecx * 8;
    if ((xmm0 <= MEMF(ebx + 0xC))) goto loc_0014DED6; /* jbe: below or equal (unsigned <=) */

loc_0014DE2F: ;
    xmm1 = MEMF(edx + 0xC); /* movss */
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014DEA7; /* jnp: not parity */

loc_0014DE3D: ;
    xmm0 = xmm0 - MEMF(ebx + 0xC); /* subss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 - MEMF(edx + 4); /* subss */
    xmm6 = MEMF(ecx); /* movss */
    xmm3 = MEMF(ecx + 8); /* movss */
    xmm3 = xmm3 - MEMF(edx + 8); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 - MEMF(edx); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(ecx + 8) = xmm1; /* movss */
    MEMF(ecx) = xmm6; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(edx + 0xC); /* mulss */
    MEMF(edx + 0xC) = xmm1; /* movss */

loc_0014DEA7: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(edi, eax)) goto loc_0014DED1; /* je: equal / zero */

loc_0014DEAF: ;
    eax = ZX8(MEM8(esi + 0x41));

loc_0014DEB3: ;
    SET_LO8(ecx, MEM8(esi + 0x4D));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, eax)) goto loc_0014DEC6; /* jne: not equal / not zero */

loc_0014DEC2: ;
    MEM8(esi + 0x4D) = 0;

loc_0014DEC6: ;
    MEM8(esi + 0x4C) = MEM8(esi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(edi, edx)) goto loc_0014DEB3; /* jne: not equal / not zero */

loc_0014DED1: ;
    xmm0 = MEMF(ebx + 0xC); /* movss */

loc_0014DED6: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(edi, eax)) goto loc_0014DE00; /* jne: not equal / not zero */

loc_0014DEE2: ;
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014DEF1; /* jnp: not parity */

loc_0014DEEB: ;
    xmm4 = xmm4 / xmm0; /* divss */
    g_seh_ebp = ebp; sub_0014DF02(); return; /* tail jmp 0x0014DF02 */

loc_0014DEF1: ;
    xmm4 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_0014DF02(); return; /* tail jmp 0x0014DF02 */

}

/**
 * sub_0014DFC0
 * Original: 0x0014DFC0 - 0x0014E5A6 (1510 bytes, 410 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DFC0: ;
    esp = esp - 0x3C;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    if (CMP_L(MEM8(edi + 0x4C), 2)) goto loc_0014E5A1; /* jl: less (signed <) */

loc_0014DFD2: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x48);
    eax = MEM32(edi + 0x144);
    ecx = MEM32(edi + 0x140);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(edi + 0x41));
    esi = esi + 5;
    ebx = edi + edx * 4 + 0x130;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    MEM32(esp + 0x24) = eax;
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0014E022; /* jne: not equal / not zero */

loc_0014E003: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = esi + esi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0014E015: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(eax, eax)) goto loc_0014E59F; /* je: equal / zero */

loc_0014E022: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ecx--;
    ecx = ecx & esi;
    ecx = ecx + eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_0014E59E; /* je: equal / zero */

loc_0014E03E: ;
    SET_LO8(eax, MEM8(0x75BF34));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0014E0E1; /* jbe: below or equal (unsigned <=) */

loc_0014E04B: ;
    ebx = MEM32(0x75BF30);
    eax = MEM32(ebx + 8);
    if (TEST_NZ(eax, eax)) goto loc_0014E080; /* jne: not equal / not zero */

loc_0014E058: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0014E069: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0014E071: ;
    ecx = MEM32(0x75BF30);
    MEM32(ecx + 8) = eax;
    ebx = MEM32(0x75BF30);

loc_0014E080: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0014E0AC; /* jne: not equal / not zero */

loc_0014E087: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0014E08F: ;
    MEM32(ebx + 0x10) = eax;
    ebx = MEM32(0x75BF30);
    eax = MEM32(ebx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0014E0AC; /* jne: not equal / not zero */

loc_0014E09F: ;
    MEM32(ebx + 0x10) = 0xFFFFFFFFu;
    ebx = MEM32(0x75BF30);

loc_0014E0AC: ;
    ecx = MEM32(ebx + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0014E0D5; /* jne: not equal / not zero */

loc_0014E0B4: ;
    ecx = MEM32(ebx + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebx + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0014E0D0; /* jne: not equal / not zero */

loc_0014E0BE: ;
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0014E0C7: ;
    ebx = MEM32(0x75BF30);
    esp = esp + 8;

loc_0014E0D0: ;
    esi = MEM32(ebx + 4);
    goto loc_0014E0DD;

loc_0014E0D5: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0014E0DA: ;
    esi = MEM32(eax + 4);

loc_0014E0DD: ;
    if (TEST_NZ(esi, esi)) goto loc_0014E0F6; /* jne: not equal / not zero */

loc_0014E0E1: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0014E0EA: ;
    MEM32(0x771764) = 0;
    goto loc_0014E10D;

loc_0014E0F6: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_0014E113; /* je: equal / zero */

loc_0014E0FE: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0014E107: ;
    MEM32(0x771764) = esi;

loc_0014E10D: ;
    ebx = MEM32(0x75BF30);

loc_0014E113: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_0014E11A: ;
    esi = eax;
    SET_LO8(eax, MEM8(0x75BF34));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0014E1BB; /* jbe: below or equal (unsigned <=) */

loc_0014E12D: ;
    eax = MEM32(ebx + 8);
    if (TEST_NZ(eax, eax)) goto loc_0014E15C; /* jne: not equal / not zero */

loc_0014E134: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0014E145: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0014E14D: ;
    ecx = MEM32(0x75BF30);
    MEM32(ecx + 8) = eax;
    ebx = MEM32(0x75BF30);

loc_0014E15C: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0014E188; /* jne: not equal / not zero */

loc_0014E163: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0014E16B: ;
    MEM32(ebx + 0x10) = eax;
    ebx = MEM32(0x75BF30);
    eax = MEM32(ebx + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0014E188; /* jne: not equal / not zero */

loc_0014E17B: ;
    MEM32(ebx + 0x10) = 0xFFFFFFFFu;
    ebx = MEM32(0x75BF30);

loc_0014E188: ;
    ecx = MEM32(ebx + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0014E1B1; /* jne: not equal / not zero */

loc_0014E190: ;
    ecx = MEM32(ebx + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebx + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0014E1AC; /* jne: not equal / not zero */

loc_0014E19A: ;
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0014E1A3: ;
    ebx = MEM32(0x75BF30);
    esp = esp + 8;

loc_0014E1AC: ;
    ebx = MEM32(ebx + 4);
    goto loc_0014E1BD;

loc_0014E1B1: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0014E1B6: ;
    ebx = MEM32(eax + 4);
    goto loc_0014E1BD;

loc_0014E1BB: ;
    ebx = 0; /* xor self */

loc_0014E1BD: ;
    if (CMP_EQ(MEM32(esi + 0x3838), ebx)) goto loc_0014E1D0; /* je: equal / zero */

loc_0014E1C5: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0014E1CA: ;
    MEM32(esi + 0x3838) = ebx;

loc_0014E1D0: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0014E1DC; /* jns: not sign (positive) */

loc_0014E1D7: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_0014E1DC: ;
    esi = eax + -1;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(esi & esi, 0)) goto loc_0014E1F2; /* jge: greater or equal (signed >=) */

loc_0014E1E7: ;
    ecx = ZX8(MEM8(edi + 0x41));
    ecx--;
    MEM32(esp + 0x10) = ecx;
    esi = ecx;

loc_0014E1F2: ;
    edi = MEM32(esp + 0x1C);
    eax = eax + eax * 4;
    xmm2 = MEMF(edi + eax * 8 + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(edi + eax * 8 + 0x1C); /* mulss */
    xmm3 = MEMF(edi + eax * 8 + 0x24); /* movss */
    xmm3 = xmm3 * MEMF(edi + eax * 8 + 0x1C); /* mulss */
    xmm0 = MEMF(edi + eax * 8 + 0x18); /* movss */
    eax = edi + eax * 8;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = ecx;
    ecx = ZX8(MEM8(eax + 0x14));
    eax = esi + esi * 4;
    xmm4 = MEMF(edi + eax * 8 + 0x18); /* movss */
    xmm1 = MEMF(edi + eax * 8 + 0x24); /* movss */
    xmm1 = xmm1 * MEMF(edi + eax * 8 + 0x1C); /* mulss */
    eax = edi + eax * 8;
    edi = eax;
    ebx = MEM32(edi);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x28);
    edx = ZX8(MEM8(edx + 8));
    MEM32(esp + 0x34) = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ebx = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x38) = ebx;
    ebx = ZX8(MEM8(eax + 0x14));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    MEMF(esp + 0x24) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x1C); /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 + xmm2; /* addss */
    edx = (int32_t)xmm5; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = SX16(LO16(edx));
    MEMF(ebp) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 + xmm3; /* addss */
    edx = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = SX16(LO16(edx));
    MEMF(ebp + 8) = xmm7; /* movss */
    xmm7 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + 0x14) = xmm7; /* movss */
    xmm4 = xmm4 - xmm2; /* subss */
    ecx = (uint32_t)((int32_t)ecx >> 8);
    eax = 0; /* xor self */
    edx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(edx));
    MEMF(ebp + 4) = xmm6; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ecx);
    MEMF(esp + 0x18) = xmm7; /* movss */
    xmm7 = MEMF(0x64AC08); /* movss */
    MEMF(ebp + 0x10) = xmm7; /* movss */
    MEM16(ebp + 0x18) = LO16(eax);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    ebp = ebp + 0x1C;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm5 - xmm3; /* subss */
    MEM32(esp + 0x3C) = edi;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(ebp) = xmm2; /* movss */
    MEMF(ebp + 4) = xmm6; /* movss */
    edx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    MEMF(ebp + 0x14) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ecx);
    MEMF(ebp + 0x10) = xmm2; /* movss */
    MEM16(ebp + 0x18) = LO16(eax);
    ebp = ebp + 0x1C;
    edi = ebp + -56;
    goto loc_0014E390;

loc_0014E380: ;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* nop */

loc_0014E390: ;
    xmm5 = MEMF(esp + 0x34); /* movss */
    edx = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm6 = MEMF(0x64AC08); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 + xmm0; /* addss */
    eax = (int32_t)xmm2; /* cvttss2si */
    ecx = SX16(LO16(eax));
    eax = SX16(LO16(edx));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp) = xmm2; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 + xmm1; /* addss */
    ecx = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(ecx));
    ecx = SX16(LO16(eax));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm3; /* movss */
    MEMF(ebp + 4) = xmm2; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ebx);
    MEMF(ebp + 0x10) = xmm6; /* movss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp + 0x14) = xmm3; /* movss */
    xmm5 = xmm5 - xmm0; /* subss */
    ebp = ebp + 0x1C;
    edx = (int32_t)xmm5; /* cvttss2si */
    ecx = SX16(LO16(edx));
    eax = 0; /* xor self */
    MEM16(ebp + -4) = LO16(eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 - xmm1; /* subss */
    edx = (int32_t)xmm4; /* cvttss2si */
    ecx = SX16(LO16(edx));
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x14);
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(ebp + 0x18) = LO16(eax);
    MEMF(ebp + 4) = xmm2; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    MEM8(ebp + 0xF) = LO8(ebx);
    MEMF(ebp + 0x14) = xmm3; /* movss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    ebp = ebp + 0x1C;
    edi = edi + 0x1C;
    PUSH32(esp, 0xFF);
    edx = ebp + -112;
    edi = edi + 0x1C;
    PUSH32(esp, edx);
    eax = 4;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_0014E484: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014E493: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0014E4A2: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x20))) goto loc_0014E4F8; /* jbe: below or equal (unsigned <=) */

loc_0014E4AF: ;
    xmm1 = MEMF(ebp + -36); /* movss */
    xmm0 = MEMF(0x649610); /* movss */
    eax = MEM32(esp + 0x18);
    esi = edi;
    edi = ebp;
    ecx = 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + -36) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    ebp = ebp + 0x1C;
    xmm1 = xmm1 - xmm0; /* subss */
    eax = eax + 0x1C;
    MEMF(ebp + -36) = xmm1; /* movss */
    ebp = ebp + 0x1C;
    eax = eax + 0x1C;
    MEM32(esp + 0x18) = eax;
    edi = eax;

loc_0014E4F8: ;
    ecx = esi;
    esi--;
    MEM32(esp + 0x10) = esi;
    if (((int32_t)esi >= 0)) goto loc_0014E510; /* jns: not sign (positive) */

loc_0014E501: ;
    eax = MEM32(esp + 0x50);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x10) = eax;
    esi = eax;

loc_0014E510: ;
    edx = MEM32(esp + 0x50);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x4D);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_0014E59E; /* je: equal / zero */

loc_0014E520: ;
    edx = MEM32(esp + 0x1C);
    eax = esi + esi * 4;
    xmm0 = MEMF(edx + eax * 8 + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(edx + eax * 8 + 0x1C); /* mulss */
    eax = edx + eax * 8;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0x34) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x1C); /* mulss */
    MEM32(esp + 0x38) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esp + 0x3C) = edx;
    edx = ecx + ecx * 4;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + edx * 8 + 0x18); /* movss */
    ebx = ZX8(MEM8(eax + 0x14));
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    eax = MEM32(esp + 0x28);
    edx = ZX8(MEM8(eax + 8));
    eax = MEM32(esp + 0x18);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0014E380; /* jne: not equal / not zero */

loc_0014E59E: ;
    POP32(esp, ebp);

loc_0014E59F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0014E5A1: ;
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0014E5B0
 * Original: 0x0014E5B0 - 0x0014E5EE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E5B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x144);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0014E5C8; /* je: equal / zero */

loc_0014E5C1: ;
    MEM32(eax + 0x54) = 0;

loc_0014E5C8: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0014E5D3: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_0014E5D8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0014E5EE(); return; } /* jne: not equal / not zero */

loc_0014E5E1: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0014E630
 * Original: 0x0014E630 - 0x0014E9D7 (935 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E630(void)
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

loc_0014E630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */

loc_0014E641: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014E646: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014E667: ;
    xmm1 = MEMF(0x6493AC); /* movss */
    xmm2 = MEMF(0x64A004); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EB8); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014E6B9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0xC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014E6CD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x3C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014E6E1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014E6F5: ;
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, 0x14 - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ebx, 0x14)) ? 1 : 0); /* setge */
    edx--;
    edx = edx & 0xC;
    esi = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014E708: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x886);
    PUSH32(esp, 0x2B5);
    PUSH32(esp, 0x2B6);
    PUSH32(esp, 0x3E4CCCCD);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, 0x3F8CCCCD);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, 0x40000000);
    MEMF(esp + 0x54) = xmm1; /* movss */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = eax + 0x78;
    ecx = esi;
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, eax);
    ecx = ecx & 0xB;
    PUSH32(esp, ecx);
    edi = esp + 0x8C;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_0014E781: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_0014E7F0; /* je: equal / zero */

loc_0014E788: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x6491DC); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    MEM8(eax + 0x100) = 0x3C;
    MEM8(eax + 0x101) = 0x3C;
    MEM8(eax + 0x102) = 0x3C;
    if (CMP_LE(esi & esi, 0)) goto loc_0014E7F0; /* jle: less or equal (signed <=) */

loc_0014E7C1: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    MEMF(eax + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(eax + 0x108) = 2;
    MEMF(eax + 0x10C) = xmm0; /* movss */

loc_0014E7F0: ;
    ebx++;
    if (CMP_L(ebx, 0x64)) goto loc_0014E641; /* jl: less (signed <) */

loc_0014E7FA: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    xmm2 = MEMF(0x648F60); /* movss */
    PUSH32(esp, 0x1030002);
    eax = eax + 0x78;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x191380);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x68;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(0x649420); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(0x648F08); /* movss */
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(0x64925C); /* movss */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(0x6492E4); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    eax = esp + 0x74;
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(0x649418); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    xmm0 = MEMF(0x64909C); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(0x648E14); /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm2; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    MEMF(0x6B7A24) = xmm1; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0014E9CD: ;
    esp = esp + 0x30;
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
 * sub_0014E9E0
 * Original: 0x0014E9E0 - 0x0014ECAD (717 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0014E9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    eax = edx + 0x78;
    MEM32(esp + 0x30) = eax;
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x50;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0014EA27: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0014EA4A: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014EA66: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014EA7B: ;
    MEM8(esp + 0x24) = LO8(eax);
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x597618), _icall_esp); /* indirect call */
    }

loc_0014EA91: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_0014EA98: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0014EAA5; /* je: equal / zero */

loc_0014EA9F: ;
    MEM16(eax + 0x38) = 0x12C;

loc_0014EAA5: ;
    ebx = 0; /* xor self */

loc_0014EAA7: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014EAAC: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014EACD: ;
    xmm1 = MEMF(0x6493AC); /* movss */
    edx = MEM32(esp + 0x3C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    xmm3 = MEMF(0x648EC0); /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    edx = MEM32(edx + 8);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm0 * MEMF(0x649248); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    xmm4 = xmm1; /* movaps */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E38); /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = edx;
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x18); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    MEMF(esp + 0x44) = xmm4; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014EB67: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x2C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014EB7B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x3C);
    MEM8(esp + 0x28) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014EB8F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x3C);
    MEM8(esp + 0x34) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0014EBA3: ;
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, 0x14 - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ebx, 0x14)) ? 1 : 0); /* setge */
    edx--;
    edx = edx & 0xC;
    esi = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014EBB6: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x886);
    PUSH32(esp, 0x2B5);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, 0x2B6);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3E4CCCCD);
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    PUSH32(esp, 0x3F8CCCCD);
    eax = MEM32(esp + 0x64);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, eax);
    edx = esi;
    edx = (uint32_t)(-(int32_t)edx);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esp + 0x58;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, ecx);
    edx = edx & 0xB;
    PUSH32(esp, edx);
    edi = esp + 0x8C;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_0014EC2D: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_0014EC9C; /* je: equal / zero */

loc_0014EC34: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x6491DC); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    MEM8(eax + 0x100) = 0x3C;
    MEM8(eax + 0x101) = 0x3C;
    MEM8(eax + 0x102) = 0x3C;
    if (CMP_LE(esi & esi, 0)) goto loc_0014EC9C; /* jle: less or equal (signed <=) */

loc_0014EC6D: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    MEMF(eax + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(eax + 0x108) = 2;
    MEMF(eax + 0x10C) = xmm0; /* movss */

loc_0014EC9C: ;
    ebx++;
    if (CMP_L(ebx, 0x64)) goto loc_0014EAA7; /* jl: less (signed <) */

loc_0014ECA6: ;
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
 * sub_0014ECB0
 * Original: 0x0014ECB0 - 0x0014EE06 (342 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ECB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0014ECB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = 0xF;

loc_0014ECC6: ;
    eax = ebx + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014ECE2: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014ED03: ;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x38)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm6 = MEMF(0x648EA4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 + MEMF(0x648F08); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    edx = ebx;
    eax = esp + 0x40;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0014ED71: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0014ED90: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014EDAC: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014EDC1: ;
    MEM8(esp + 0x30) = LO8(eax);
    ecx = MEM32(esp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x597618), _icall_esp); /* indirect call */
    }

loc_0014EDD7: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_0014EDDE: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0xC;
    eax--;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_0014ECC6; /* jne: not equal / not zero */

loc_0014EDF0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x35)) { sub_0014EE06(); return; } /* jne: not equal / not zero */

loc_0014EDF9: ;
    edx = ebx;
    PUSH32(esp, 0); sub_0014E9E0(); /* call 0x0014E9E0 */

loc_0014EE00: ;
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
 * sub_0014EE20
 * Original: 0x0014EE20 - 0x0014EF9C (380 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EE20(void)
{

loc_0014EE20: ;
    eax = MEM32(0x8496B8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5F44B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DCBC0(); /* call 0x001DCBC0 */

loc_0014EE31: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_0014EE36: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EE45: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EE53: ;
    ecx = MEM32(0x8496B8);
    PUSH32(esp, 0x5F4498);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DCBC0(); /* call 0x001DCBC0 */

loc_0014EE64: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_0014EE69: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EE78: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EE86: ;
    edx = MEM32(0x8496B8);
    PUSH32(esp, 0x5F447C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DCBC0(); /* call 0x001DCBC0 */

loc_0014EE97: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_0014EE9C: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EEAB: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EEB9: ;
    eax = MEM32(0x8496B8);
    PUSH32(esp, 0x5F4460);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DCBC0(); /* call 0x001DCBC0 */

loc_0014EEC9: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_0014EECE: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EEDD: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EEEB: ;
    ecx = MEM32(0x8496B8);
    PUSH32(esp, 0x5F4444);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DCBC0(); /* call 0x001DCBC0 */

loc_0014EEFC: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_0014EF01: ;
    esi = eax;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EF10: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EF1E: ;
    edx = MEM32(0x8496B8);
    PUSH32(esp, 0x5F4428);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DCBC0(); /* call 0x001DCBC0 */

loc_0014EF2F: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_0014EF34: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EF43: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_0014EF51: ;
    PUSH32(esp, 0x5F4424);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF5B: ;
    PUSH32(esp, 0x5F4410);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF65: ;
    PUSH32(esp, 0x5F43FC);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF6F: ;
    PUSH32(esp, 0x5F43E8);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF79: ;
    PUSH32(esp, 0x5F43D4);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF83: ;
    PUSH32(esp, 0x5F43BC);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF8D: ;
    PUSH32(esp, 0x5F43A4);
    PUSH32(esp, 0); sub_001DD670(); /* call 0x001DD670 */

loc_0014EF97: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EFA0
 * Original: 0x0014EFA0 - 0x0014F2A3 (771 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EFA0(void)
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

loc_0014EFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x184;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x54) = 0x5F4394;
    MEM32(esp + 0x58) = 0x5F44E0;
    MEM32(esp + 0x5C) = 0x5F4384;
    MEM32(esp + 0x4C) = 0x5F4378;
    MEM32(esp + 0x50) = 0x5F436C;
    if (TEST_Z(eax, eax)) goto loc_0014F29C; /* je: equal / zero */

loc_0014EFE8: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x20) = edi;
    goto loc_0014F000;

loc_0014EFF0: ;
    edi = MEM32(esp + 0x20);
    esi = MEM32(ebp + 8);
    goto loc_0014F000;

    /* nop */

loc_0014F000: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(esp + edi + 0x54);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0014F021: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0014F035; /* je: equal / zero */

loc_0014F028: ;
    eax = MEM32(esp + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0014F035; /* je: equal / zero */

loc_0014F030: ;
    eax = MEM32(eax + 8);
    goto loc_0014F037;

loc_0014F035: ;
    eax = 0; /* xor self */

loc_0014F037: ;
    edx = ZX8(MEM8(esi + 0x3A8));
    ecx = MEM32(esi + edx * 4 + 0x4EC);
    ecx = MEM32(ecx + 0x34);
    edx = eax + eax * 8;
    xmm1 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm0 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    ecx = ecx + edx * 4;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C8);
    eax = eax << 6;
    eax = eax + edx;
    ecx = esp + 0xA4;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_0014F075: ;
    xmm0 = MEMF(esp + 0xD4); /* movss */
    xmm1 = MEMF(esp + 0xDC); /* movss */
    esp = esp + 4;
    (void)0; /* cmp edi, 8 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_GE(edi, 8)) goto loc_0014F1E8; /* jge: greater or equal (signed >=) */

loc_0014F0AE: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(esp + edi + 0x4C);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0014F0CF: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0014F0E3; /* je: equal / zero */

loc_0014F0D6: ;
    eax = MEM32(esp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0014F0E3; /* je: equal / zero */

loc_0014F0DE: ;
    eax = MEM32(eax + 8);
    goto loc_0014F0E5;

loc_0014F0E3: ;
    eax = 0; /* xor self */

loc_0014F0E5: ;
    edx = ZX8(MEM8(esi + 0x3A8));
    ecx = MEM32(esi + edx * 4 + 0x4EC);
    ecx = MEM32(ecx + 0x34);
    edx = eax + eax * 8;
    xmm1 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm0 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    ecx = ecx + edx * 4;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C8);
    eax = eax << 6;
    eax = eax + edx;
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_0014F120: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x94); /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = eax;
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = ecx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x98); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = edx;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x9C); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x34) = eax;
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = ecx;
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    ecx = MEM32(esp + 0x38);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 4;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edx;

loc_0014F1E8: ;
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    edx = esi;
    eax = esp + 0xE0;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0014F204: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0014F227: ;
    xmm0 = MEMF(esp + 0xEC); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0xE0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0014F249: ;
    MEMF(esp + 0x44) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014F25E: ;
    MEM8(esp + 0x40) = LO8(eax);
    eax = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x597618), _icall_esp); /* indirect call */
    }

loc_0014F274: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_0014F27B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0014F288; /* je: equal / zero */

loc_0014F282: ;
    MEM16(eax + 0x38) = 0x258;

loc_0014F288: ;
    eax = MEM32(esp + 0x20);
    eax = eax + 4;
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, 0xC)) goto loc_0014EFF0; /* jl: less (signed <) */

loc_0014F29C: ;
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
 * sub_0014F2B0
 * Original: 0x0014F2B0 - 0x0014F39C (236 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F2B0(void)
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

loc_0014F2B0: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO16(eax, ZX8(MEM8(esi + 0x2E)));
    ecx = ZX8(MEM8(esi + 0x28));
    edx = ZX8(MEM8(esi + 0x29));
    eax = ZX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(esp + 0x30) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x2A));
    MEM8(esp + 0x31) = LO8(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = ZX8(MEM8(esi + 0x2B));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(esp + 0x32) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x2C));
    MEM8(esp + 0x34) = LO8(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = ZX8(MEM8(esi + 0x2D));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    SET_LO16(eax, MEM16(esi + 0x26));
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM16(esp + 0x2C) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x40));
    PUSH32(esp, edi);
    MEM8(esp + 0x39) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x2F));
    MEM8(esp + 0x3A) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x30));
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x37) = LO8(ecx);
    MEM8(esp + 0x32) = LO8(edx);
    MEM32(esp + 8) = 0x58DBB4;
    MEM16(esp + 0x14) = LO16(edi);
    MEM16(esp + 0x16) = 0x100;
    if (CMP_NE(LO8(eax), 1)) { sub_0014F39C(); return; } /* jne: not equal / not zero */

loc_0014F348: ;
    fp_push(MEMF(esi)); /* fld float */
    eax = (int32_t)MEMF(esi); /* cvttss2si */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = (int32_t)MEMF(esi + 4); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 8); /* cvttss2si */
    MEM16(esp + 0x18) = LO16(eax);
    MEM16(esp + 0x1A) = LO16(ecx);
    MEM16(esp + 0x1C) = LO16(edx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014F372: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x24) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014F384: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x26) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0014F396: ;
    MEM8(esp + 0x25) = LO8(eax);
    g_seh_ebp = ebp; sub_0014F3CC(); return; /* tail jmp 0x0014F3CC */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0014F460
 * Original: 0x0014F460 - 0x0014F492 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F460: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x32));
    SET_LO16(edx, MEM16(ecx + 0x30));
    MEM16(ecx + 0x50) = MEM16(ecx + 0x50) + LO16(eax);
    MEM16(ecx + 0x52) = MEM16(ecx + 0x52) + LO16(edx);
    if (CMP_NE(MEM16(ecx + 0x54), 0)) { sub_0014F492(); return; } /* jne: not equal / not zero */

loc_0014F47B: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x57));
    if (TEST_Z(LO8(eax), 0xF)) { sub_0014F492(); return; } /* je: equal / zero */

loc_0014F484: ;
    eax = eax & 0xF;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x6B7104)); return; /* indirect tail jmp */

}

/**
 * sub_0014F4A0
 * Original: 0x0014F4A0 - 0x0014F60E (366 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F4A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0014F4A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x2C));
    ebx = 1;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0014F60B; /* je: equal / zero */

loc_0014F4B6: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0014F4D2; /* je: equal / zero */

loc_0014F4C0: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x38) = MEM16(esi + 0x38) - LO16(eax);
    if (CMP_GE(MEM16(esi + 0x38), LO16(edi))) goto loc_0014F4D2; /* jge: greater or equal (signed >=) */

loc_0014F4D0: ;
    edi = ebx;

loc_0014F4D2: ;
    SET_LO8(eax, MEM8(esi + 0xD9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F4F0; /* je: equal / zero */

loc_0014F4DC: ;
    ecx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5979A0), _icall_esp); /* indirect call */
    }

loc_0014F4E7: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0014F4F0; /* jne: not equal / not zero */

loc_0014F4EE: ;
    edi = ebx;

loc_0014F4F0: ;
    ebx = MEM32(esi + 0x34);
    if (((int32_t)(HI8(ebx) & HI8(ebx)) >= 0)) goto loc_0014F520; /* jns: not sign (positive) */

loc_0014F4F7: ;
    if (TEST_NZ(edi, edi)) goto loc_0014F520; /* jne: not equal / not zero */

loc_0014F4FB: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    if (CMP_GE(LO16(eax), MEM16(esi + 0x5A))) goto loc_0014F520; /* jge: greater or equal (signed >=) */

loc_0014F505: ;
    ecx = ZX8(MEM8(esi + 0x4C));
    edx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + 0x5C); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(ecx, eax)) goto loc_0014F520; /* jle: less or equal (signed <=) */

loc_0014F51D: ;
    MEM8(esi + 0x4C) = LO8(eax);

loc_0014F520: ;
    if (TEST_Z(ebx, 0x10000)) goto loc_0014F557; /* je: equal / zero */

loc_0014F528: ;
    if (TEST_NZ(edi, edi)) goto loc_0014F5E9; /* jne: not equal / not zero */

loc_0014F530: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    if (CMP_GE(LO16(eax), MEM16(esi + 0x5A))) goto loc_0014F55F; /* jge: greater or equal (signed >=) */

loc_0014F53A: ;
    ecx = ZX8(MEM8(esi + 0x4C));
    edx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + 0x5C); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(ecx, eax)) goto loc_0014F55F; /* jle: less or equal (signed <=) */

loc_0014F552: ;
    MEM8(esi + 0x51) = LO8(eax);
    goto loc_0014F55F;

loc_0014F557: ;
    if (TEST_NZ(edi, edi)) goto loc_0014F5E9; /* jne: not equal / not zero */

loc_0014F55F: ;
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0014F60A; /* jnp: not parity */

loc_0014F574: ;
    edx = MEM32(esi + 0x3C);
    ecx = ZX8(MEM8(edx * 8 + 0x75B954));
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x44); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esi + 0x44) = xmm0; /* movss */
    if ((xmm0 < xmm2)) goto loc_0014F5CD; /* jb: below (unsigned <) */

loc_0014F5A1: ;
    if (TEST_NZ(HI8(ebx), 8)) goto loc_0014F5E9; /* jne: not equal / not zero */

loc_0014F5A6: ;
    if (TEST_Z(HI8(ebx), 2)) goto loc_0014F5B9; /* je: equal / zero */

loc_0014F5AB: ;
    ecx--;
    POP32(esp, edi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014F5B9: ;
    if (TEST_Z(HI8(ebx), 4)) goto loc_0014F5DC; /* je: equal / zero */

loc_0014F5BE: ;
    ecx = ecx - edx;
    POP32(esp, edi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014F5CD: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0014F60A; /* jbe: below or equal (unsigned <=) */

loc_0014F5D2: ;
    if (TEST_NZ(HI8(ebx), 0x10)) goto loc_0014F5E9; /* jne: not equal / not zero */

loc_0014F5D7: ;
    if (TEST_Z(HI8(ebx), 4)) goto loc_0014F5BE; /* je: equal / zero */

loc_0014F5DC: ;
    POP32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014F5E9: ;
    SET_LO8(eax, MEM8(esi + 0xD8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F605; /* je: equal / zero */

loc_0014F5F3: ;
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5979E0), _icall_esp); /* indirect call */
    }

loc_0014F5FE: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F60A; /* je: equal / zero */

loc_0014F605: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0014F60A: ;
    POP32(esp, edi);

loc_0014F60B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F610
 * Original: 0x0014F610 - 0x0014F62E (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F610(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014F610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0014F62E(); return; } /* je: equal / zero */

loc_0014F61F: ;
    if (CMP_B(MEM32(0x774A94), 0x1E)) { sub_0014F62E(); return; } /* jb: below (unsigned <) */

loc_0014F628: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F7F0
 * Original: 0x0014F7F0 - 0x0014F94C (348 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F7F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x774A94);
    (void)0; /* cmp ecx, 0x1E - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_AE(ecx, 0x1E)) { sub_0014F94C(); return; } /* jae: above or equal (unsigned >=) */

loc_0014F809: ;
    edx = ecx;
    edx++;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x774A94) = edx;
    if (CMP_NE(eax, ebx)) goto loc_0014F820; /* jne: not equal / not zero */

loc_0014F818: ;
    MEM32(esp + 0xC) = 0x597978;

loc_0014F820: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x3C);
    ecx = ecx & 0x40000;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = ecx & 0x3F;
    ecx = ecx + 0x23;
    eax = eax + 0x10C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014F846: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, ebx)) { sub_0014F94C(); return; } /* je: equal / zero */

loc_0014F853: ;
    SET_LO8(edx, MEM8(esp + 0x34));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = ebp + 0x34;
    ecx = 0xD;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    eax = ebp + 0x68;
    POP32(esp, edi);
    xmm1 = xmm2; /* movaps */
    if ((LO8(ecx) != 0)) goto loc_0014F87E; /* jne: not equal / not zero */

loc_0014F87B: ;
    xmm1 = xmm0; /* movaps */

loc_0014F87E: ;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEMF(eax + 0x64) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0014F892; /* jne: not equal / not zero */

loc_0014F88F: ;
    xmm1 = xmm2; /* movaps */

loc_0014F892: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    MEMF(eax + 0x48) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    if ((LO8(ecx) != 0)) goto loc_0014F8A9; /* jne: not equal / not zero */

loc_0014F8A6: ;
    xmm1 = xmm2; /* movaps */

loc_0014F8A9: ;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0014F8BA; /* je: equal / zero */

loc_0014F8B7: ;
    xmm0 = xmm2; /* movaps */

loc_0014F8BA: ;
    ecx = MEM32(esp + 0xC);
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00152EF0(); /* call 0x00152EF0 */

loc_0014F8CD: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x18));
    xmm4 = MEMF(esp + 0x28); /* movss */
    xmm5 = MEMF(esp + 0x24); /* movss */
    MEM8(ebp + 0xD9) = LO8(ecx);
    ecx = MEM32(esp + 0x2C);
    MEM8(ebp + 0xD8) = LO8(edx);
    edx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    MEM32(ebp + 0x2C) = 1;
    MEM32(ebp + 0x30) = ebx;
    MEM32(ebp + 0xDC) = ebx;
    MEM32(ebp + 0xF8) = ebx;
    MEM32(ebp + 0xE4) = eax;
    MEM32(ebp + 0xE8) = eax;
    MEM32(ebp + 0xEC) = eax;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x34));
    MEM32(ebp + 0xF0) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(ebp + 0xF4) = ebx;
    MEM8(ebp + 0x108) = LO8(ebx);
    PUSH32(esp, 0); sub_00151510(); /* call 0x00151510 */

loc_0014F942: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F960
 * Original: 0x0014F960 - 0x0014FA3A (218 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F960(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0014F960: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0014F610(); /* call 0x0014F610 */

loc_0014F9BC: ;
    esi = eax;
    esp = esp + 0x24;
    if (TEST_Z(esi, esi)) goto loc_0014FA33; /* je: equal / zero */

loc_0014F9C5: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x4C));
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_001516B0(); /* call 0x001516B0 */

loc_0014F9EE: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) { sub_0014FA3A(); return; } /* jne: not equal / not zero */

loc_0014F9F6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014FA33; /* jne: not equal / not zero */

loc_0014F9FF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0014FA06: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0014FA33; /* jl: less (signed <) */

loc_0014FA0D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0014FA27; /* je: equal / zero */

loc_0014FA1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0014FA1D: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0014FA27: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0014FA33: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FA50
 * Original: 0x0014FA50 - 0x0014FBDF (399 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FA50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x774A94);
    (void)0; /* cmp eax, 0x1E - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_AE(eax, 0x1E)) goto loc_0014FBD8; /* jae: above or equal (unsigned >=) */

loc_0014FA64: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(esp + 0x40);
    ecx = ecx & 0x40000;
    edi++;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = ecx & 0x3F;
    ecx = ecx + 0x23;
    eax = eax + 0x10C;
    PUSH32(esp, ecx);
    MEM32(0x774A94) = edi;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0014FA93: ;
    ebp = eax;
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(ebp, ebx)) goto loc_0014FBD8; /* je: equal / zero */

loc_0014FAA2: ;
    SET_LO8(edx, MEM8(esp + 0x38));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edi = ebp + 0x34;
    ecx = 0xD;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    eax = ebp + 0x68;
    xmm1 = xmm2; /* movaps */
    if ((LO8(ecx) != 0)) goto loc_0014FACB; /* jne: not equal / not zero */

loc_0014FAC8: ;
    xmm1 = xmm0; /* movaps */

loc_0014FACB: ;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEMF(eax + 0x64) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0014FADF; /* jne: not equal / not zero */

loc_0014FADC: ;
    xmm1 = xmm2; /* movaps */

loc_0014FADF: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    MEMF(eax + 0x48) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    if ((LO8(ecx) != 0)) goto loc_0014FAF6; /* jne: not equal / not zero */

loc_0014FAF3: ;
    xmm1 = xmm2; /* movaps */

loc_0014FAF6: ;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0014FB07; /* je: equal / zero */

loc_0014FB04: ;
    xmm0 = xmm2; /* movaps */

loc_0014FB07: ;
    ecx = 0x597978;
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00152EF0(); /* call 0x00152EF0 */

loc_0014FB1B: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(ebp + 0xD9) = LO8(ecx);
    ecx = MEM32(esp + 0x30);
    MEM8(ebp + 0xD8) = LO8(edx);
    edx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    MEM32(ebp + 0x30) = ebx;
    MEM32(ebp + 0xDC) = ebx;
    MEM32(ebp + 0xF8) = ebx;
    MEM32(ebp + 0x2C) = 1;
    MEM32(ebp + 0xE4) = eax;
    MEM32(ebp + 0xE8) = eax;
    MEM32(ebp + 0xEC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEM32(ebp + 0xF0) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x44));
    MEM32(ebp + 0xF4) = ebx;
    MEM8(ebp + 0x108) = LO8(ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_001516B0(); /* call 0x001516B0 */

loc_0014FB93: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) { sub_0014FBDF(); return; } /* jne: not equal / not zero */

loc_0014FB9A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014FBD8; /* jne: not equal / not zero */

loc_0014FBA3: ;
    edx = ebp;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0014FBAA: ;
    eax = MEM32(ebp);
    if (CMP_L(eax, 2)) goto loc_0014FBD8; /* jl: less (signed <) */

loc_0014FBB2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0014FBCC; /* je: equal / zero */

loc_0014FBBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0014FBC2: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014FBCC: ;
    edx = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0014FBD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FBF0
 * Original: 0x0014FBF0 - 0x0014FC1D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FBF0: ;
    ecx = MEM32(0x774A94);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx--;
    MEM32(0x774A94) = ecx;
    PUSH32(esp, 0); sub_0014FC50(); /* call 0x0014FC50 */

loc_0014FC07: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0014FC1D(); return; } /* jne: not equal / not zero */

loc_0014FC10: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0014FC20
 * Original: 0x0014FC20 - 0x0014FC42 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FC20(void)
{

loc_0014FC20: ;
    edx = MEM32(0x774A94);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx--;
    MEM32(0x774A94) = edx;
    PUSH32(esp, 0); sub_0014FC50(); /* call 0x0014FC50 */

loc_0014FC37: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0014FC3D: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FC50
 * Original: 0x0014FC50 - 0x0014FCFD (173 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FC50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014FC50: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_0014FCAF; /* jl: less (signed <) */

loc_0014FC5D: ;
    esi = ebx + 0xE4;

loc_0014FC63: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0014FCA2; /* je: equal / zero */

loc_0014FC69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0014FC6F: ;
    if (TEST_NZ(eax, eax)) goto loc_0014FCA2; /* jne: not equal / not zero */

loc_0014FC73: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0014FCA2; /* je: equal / zero */

loc_0014FC79: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0014FC99: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0014FCA2: ;
    eax = MEM32(0x84A144);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, eax)) goto loc_0014FC63; /* jle: less or equal (signed <=) */

loc_0014FCAF: ;
    eax = MEM32(ebx + 0xF4);
    if (TEST_Z(eax, eax)) goto loc_0014FCFA; /* je: equal / zero */

loc_0014FCB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0014FCBF: ;
    if (TEST_NZ(eax, eax)) goto loc_0014FCFA; /* jne: not equal / not zero */

loc_0014FCC3: ;
    eax = MEM32(ebx + 0xF4);
    if (TEST_Z(eax, eax)) goto loc_0014FCFA; /* je: equal / zero */

loc_0014FCCD: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0014FCED: ;
    esp = esp + 4;
    MEM32(ebx + 0xF4) = 0;

loc_0014FCFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FD00
 * Original: 0x0014FD00 - 0x0014FD12 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FD00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x34);
    if (TEST_Z(HI8(eax), 0x10)) { sub_0014FD12(); return; } /* je: equal / zero */

loc_0014FD0C: ;
    eax = ZX8(MEM8(ecx + 0x40));
    g_seh_ebp = ebp; sub_0014FD14(); return; /* tail jmp 0x0014FD14 */

}

/**
 * sub_0014FD70
 * Original: 0x0014FD70 - 0x0014FE1D (173 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014FD70: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_0014FDCF; /* jl: less (signed <) */

loc_0014FD7D: ;
    esi = ebx + 0x208;

loc_0014FD83: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0014FDC2; /* je: equal / zero */

loc_0014FD89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0014FD8F: ;
    if (TEST_NZ(eax, eax)) goto loc_0014FDC2; /* jne: not equal / not zero */

loc_0014FD93: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0014FDC2; /* je: equal / zero */

loc_0014FD99: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0014FDB9: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0014FDC2: ;
    eax = MEM32(0x84A144);
    edi++;
    esi = esi + 4;
    if (CMP_LE(edi, eax)) goto loc_0014FD83; /* jle: less or equal (signed <=) */

loc_0014FDCF: ;
    eax = MEM32(ebx + 0x218);
    if (TEST_Z(eax, eax)) goto loc_0014FE1A; /* je: equal / zero */

loc_0014FDD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0014FDDF: ;
    if (TEST_NZ(eax, eax)) goto loc_0014FE1A; /* jne: not equal / not zero */

loc_0014FDE3: ;
    eax = MEM32(ebx + 0x218);
    if (TEST_Z(eax, eax)) goto loc_0014FE1A; /* je: equal / zero */

loc_0014FDED: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0014FE0D: ;
    esp = esp + 4;
    MEM32(ebx + 0x218) = 0;

loc_0014FE1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FE20
 * Original: 0x0014FE20 - 0x0014FE33 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FE20: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(MEM32(ecx + 0x64), 0x400000)) { sub_0014FE33(); return; } /* je: equal / zero */

loc_0014FE2D: ;
    eax = ZX8(MEM8(ecx + 0x34));
    g_seh_ebp = ebp; sub_0014FE35(); return; /* tail jmp 0x0014FE35 */

}

/**
 * sub_00150390
 * Original: 0x00150390 - 0x00150396 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150390(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150390: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x597C8C)); return; /* indirect tail jmp */

}

/**
 * sub_00150630
 * Original: 0x00150630 - 0x00150649 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150630: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, 0x800000)) { sub_00150649(); return; } /* je: equal / zero */

loc_00150642: ;
    ecx = 0x71;
    g_seh_ebp = ebp; sub_0015065A(); return; /* tail jmp 0x0015065A */

}

/**
 * sub_00150820
 * Original: 0x00150820 - 0x001508DD (189 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00150820: ;
    if (TEST_NZ(eax, eax)) goto loc_00150829; /* jne: not equal / not zero */

loc_00150824: ;
    eax = 0x597978;

loc_00150829: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = edx + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00150861: ;
    esi = eax;
    esp = esp + 0x28;
    if (TEST_Z(esi, esi)) { sub_001508DD(); return; } /* je: equal / zero */

loc_0015086A: ;
    edx = MEM32(esi + 0x64);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = edx | 0x40000;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x64) = edx;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x3C));
    edx = esi + 0x310;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0); sub_001508F0(); /* call 0x001508F0 */

loc_00150898: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001508DD(); return; } /* jne: not equal / not zero */

loc_0015089F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001508D9; /* jne: not equal / not zero */

loc_001508A8: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001508AF: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001508D9; /* jl: less (signed <) */

loc_001508B6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001508CD; /* je: equal / zero */

loc_001508C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001508C6: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001508CD: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001508D9: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001508F0
 * Original: 0x001508F0 - 0x00150C34 (836 bytes, 252 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001508F0(void)
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

loc_001508F0: ;
    esp = esp - 0x34;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00150B91; /* je: equal / zero */

loc_00150902: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_0015091F; /* je: equal / zero */

loc_00150913: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_00150924;

loc_0015091F: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_00150924: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0015093B; /* je: equal / zero */

loc_00150928: ;
    if (CMP_EQ(LO8(ebx), 0xC0)) goto loc_0015093B; /* je: equal / zero */

loc_0015092D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00150944;

loc_0015093B: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00150944: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0015095F; /* je: equal / zero */

loc_00150953: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_00150964;

loc_0015095F: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_00150964: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0015097B; /* je: equal / zero */

loc_00150968: ;
    if (CMP_EQ(LO8(ebx), 0xC0)) goto loc_0015097B; /* je: equal / zero */

loc_0015096D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_00150984;

loc_0015097B: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00150984: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000759D0(); /* call 0x000759D0 */

loc_00150999: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00150C2B; /* je: equal / zero */

loc_001509A4: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm3, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm5 = xmm1; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm2; /* subss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00150A38; /* jnp: not parity */

loc_00150A00: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x10); /* movss */
    goto loc_00150A41;

loc_00150A38: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_00150A41: ;
    /* ucomiss xmm4, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00150A82; /* jnp: not parity */

loc_00150A4A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x14); /* movss */
    goto loc_00150A8B;

loc_00150A82: ;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm2 = xmm1; /* movaps */

loc_00150A8B: ;
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x10); /* mulss */
    /* ucomiss xmm6, xmm1 - sets EFLAGS */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(0x648D10); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    MEMF(ebp) = xmm7; /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    MEMF(ebp + 8) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00150B0B; /* jnp: not parity */

loc_00150ACD: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm4 = MEMF(esp + 0xC); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x10); /* movss */
    goto loc_00150B11;

loc_00150B0B: ;
    xmm4 = xmm1; /* movaps */
    xmm0 = xmm1; /* movaps */

loc_00150B11: ;
    /* ucomiss xmm5, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00150B58; /* jnp: not parity */

loc_00150B1A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm2 = MEMF(esp + 0x10); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x14); /* movss */
    goto loc_00150B5B;

loc_00150B58: ;
    xmm2 = xmm1; /* movaps */

loc_00150B5B: ;
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    POP32(esp, esi);
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(ebp + 0xC) = xmm7; /* movss */
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEMF(ebp + 0x14) = xmm1; /* movss */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00150B91: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_00150BAE; /* je: equal / zero */

loc_00150BA2: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_00150BB3;

loc_00150BAE: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_00150BB3: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm6 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00150BCD; /* je: equal / zero */

loc_00150BBA: ;
    if (CMP_EQ(LO8(ebx), 0xC0)) goto loc_00150BCD; /* je: equal / zero */

loc_00150BBF: ;
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00150BD6;

loc_00150BCD: ;
    xmm5 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00150BD6: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00150BEB; /* je: equal / zero */

loc_00150BDF: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_00150BF0;

loc_00150BEB: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_00150BF0: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00150C07; /* je: equal / zero */

loc_00150BF4: ;
    if (CMP_EQ(LO8(ebx), 0xC0)) goto loc_00150C07; /* je: equal / zero */

loc_00150BF9: ;
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_00150C10;

loc_00150C07: ;
    xmm4 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00150C10: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_00150C24: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00150C34(); return; } /* jne: not equal / not zero */

loc_00150C2B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00150D50
 * Original: 0x00150D50 - 0x001513BF (1647 bytes, 433 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D50(void)
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

loc_00150D50: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    (void)0; /* test MEM8(ebx + 0x64), 8 - flags set for next jcc */
    eax = MEM32(esp + 0x38);
    if (TEST_Z(MEM8(ebx + 0x64), 8)) goto loc_00150D74; /* je: equal / zero */

loc_00150D62: ;
    SET_LO8(ecx, LO8(eax));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM8(ebx + 0x6C), LO8(edx))) goto loc_001513BA; /* je: equal / zero */

loc_00150D74: ;
    ecx = ZX8(MEM8(ebx + 0x14B));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x597B70), _icall_esp); /* indirect call */
    }

loc_00150D86: ;
    ebp = eax;
    edi = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ebp, edi)) goto loc_001513B8; /* je: equal / zero */

loc_00150D99: ;
    (void)0; /* test MEM32(ebx + 0x64), 0x40000 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(MEM32(ebx + 0x64), 0x40000)) goto loc_00150DE0; /* je: equal / zero */

loc_00150DA3: ;
    xmm0 = MEMF(0x649368); /* movss */
    edx = 1;
    ecx = 0x40338;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00150DC0: ;
    esi = MEM32(esp + 0x14);
    edx = esi;
    ecx = 0x40388;
    MEM32(0x549B3C) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00150DDA: ;
    MEM32(0x549B30) = esi;

loc_00150DE0: ;
    SET_LO8(eax, MEM8(ebx + 0x84));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00151061; /* jbe: below or equal (unsigned <=) */

loc_00150DF2: ;
    eax = ebx + 0x88;
    esi = 0x547334;
    MEM32(esp + 0x10) = eax;

loc_00150E01: ;
    ebp = MEM32(eax);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00150F08; /* je: equal / zero */

loc_00150E0C: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00150E19: ;
    ecx = eax;
    eax = ebp;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00150E22: ;
    ebp = eax;
    esp = esp + 4;
    if (TEST_NZ(ebp, ebp)) goto loc_00150E39; /* jne: not equal / not zero */

loc_00150E2B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00150E31: ;
    MEM32(0x771764) = ebp;
    goto loc_00150E50;

loc_00150E39: ;
    if (CMP_EQ(MEM32(0x771764), ebp)) goto loc_00150E50; /* je: equal / zero */

loc_00150E41: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00150E4A: ;
    MEM32(0x771764) = ebp;

loc_00150E50: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00150EB0; /* je: equal / zero */

loc_00150E58: ;
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_00150EB0: ;
    (void)0; /* test MEM32(ebx + 0x64), 0x200000 - flags set for next jcc */
    ecx = edi;
    if (TEST_Z(MEM32(ebx + 0x64), 0x200000)) goto loc_00150EDF; /* je: equal / zero */

loc_00150EBB: ;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x5499F0);
    MEM32(esi + -4) = 1;
    MEM32(esi) = 1;
    ecx = ecx | eax;
    MEM32(0x5499F0) = ecx;
    goto loc_00150EFF;

loc_00150EDF: ;
    eax = MEM32(0x5499F0);
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(esi + -4) = 3;
    MEM32(esi) = 3;
    eax = eax | edx;
    MEM32(0x5499F0) = eax;

loc_00150EFF: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) goto loc_00150F85; /* jne: not equal / not zero */

loc_00150F08: ;
    ecx = MEM32(edi * 4 + 0x7717E4);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    edx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_00150F2D; /* je: equal / zero */

loc_00150F1D: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x2C) = eax;
    MEM32(edi * 4 + 0x7717E4) = eax;

loc_00150F2D: ;
    ebp = MEM32(edi * 4 + 0x7717C4);
    ecx = 0; /* xor self */
    if (CMP_EQ(ebp, ecx)) goto loc_00150F4A; /* je: equal / zero */

loc_00150F3A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x34) = ecx;
    MEM32(edi * 4 + 0x7717C4) = ecx;

loc_00150F4A: ;
    if (CMP_EQ(MEM32(edi * 4 + 0x7717A4), eax)) goto loc_00150F63; /* je: equal / zero */

loc_00150F53: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x3C) = eax;
    MEM32(edi * 4 + 0x7717A4) = eax;

loc_00150F63: ;
    if (CMP_EQ(MEM32(edi * 4 + 0x771784), ecx)) goto loc_0015103C; /* je: equal / zero */

loc_00150F70: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x44) = ecx;
    MEM32(edi * 4 + 0x771784) = ecx;
    goto loc_0015103C;

loc_00150F85: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(edi * 4 + 0x7717E4);
    eax = MEM32(ecx + 0xC);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    edx = 0x800;
    if (CMP_EQ(eax, edx)) goto loc_00150FAC; /* je: equal / zero */

loc_00150F9C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x2C) = eax;
    MEM32(edi * 4 + 0x7717E4) = eax;

loc_00150FAC: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, MEM32(edi * 4 + 0x7717C4))) goto loc_00150FC8; /* je: equal / zero */

loc_00150FB8: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x34) = eax;
    MEM32(edi * 4 + 0x7717C4) = eax;

loc_00150FC8: ;
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(eax, MEM32(edi * 4 + 0x7717B4))) goto loc_00150FE4; /* je: equal / zero */

loc_00150FD4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x38) = eax;
    MEM32(edi * 4 + 0x7717B4) = eax;

loc_00150FE4: ;
    eax = MEM32(ecx + 0x1C);
    if (CMP_EQ(eax, MEM32(edi * 4 + 0x7717A4))) goto loc_00151000; /* je: equal / zero */

loc_00150FF0: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x3C) = eax;
    MEM32(edi * 4 + 0x7717A4) = eax;

loc_00151000: ;
    eax = MEM32(ecx + 0x24);
    if (CMP_EQ(eax, MEM32(edi * 4 + 0x771784))) goto loc_0015101C; /* je: equal / zero */

loc_0015100C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edx;
    MEM32(esi + 0x44) = eax;
    MEM32(edi * 4 + 0x771784) = eax;

loc_0015101C: ;
    eax = MEM32(ecx + 0x28);
    if (CMP_EQ(eax, MEM32(edi * 4 + 0x771774))) goto loc_0015103C; /* je: equal / zero */

loc_00151028: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(esi + 0x48) = eax;
    MEM32(edi * 4 + 0x771774) = eax;

loc_0015103C: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(ebx + 0x84));
    edi++;
    eax = eax + 0x30;
    esi = esi + 0x80;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(edi, ecx)) goto loc_00150E01; /* jl: less (signed <) */

loc_0015105D: ;
    ebp = MEM32(esp + 0x18);

loc_00151061: ;
    esi = MEM32(ebx + 0x7C);
    if (CMP_EQ(esi, MEM32(0x771808))) goto loc_00151084; /* je: equal / zero */

loc_0015106C: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00151078: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_00151084: ;
    esi = ZX8(MEM8(ebx + 0x220));
    if (CMP_EQ(esi, MEM32(0x771814))) goto loc_001510AB; /* je: equal / zero */

loc_00151093: ;
    edx = esi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015109F: ;
    MEM32(0x549AF8) = esi;
    MEM32(0x771814) = esi;

loc_001510AB: ;
    edx = MEM32(ebx + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_001510B9: ;
    SET_LO8(eax, MEM8(ebx + 0x14C));
    esp = esp + 8;
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001510FE; /* je: equal / zero */

loc_001510C8: ;
    esi = MEM32(0x8472C8);
    eax = edi + edi * 2;
    eax = eax << 4;
    eax = MEM32(eax + ebx + 0x88);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001510E4: ;
    edi = eax;
    eax = MEM32(esi + 0x3838);
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_001510FE; /* je: equal / zero */

loc_001510F3: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_001510F8: ;
    MEM32(esi + 0x3838) = edi;

loc_001510FE: ;
    SET_LO8(eax, MEM8(ebx + 0x84));
    if (CMP_AE(LO8(eax), 4)) goto loc_00151163; /* jae: above or equal (unsigned >=) */

loc_00151108: ;
    eax = ZX8(LO8(eax));
    edx = MEM32(eax * 4 + 0x7717E4);
    ecx = 1;
    if (CMP_EQ(edx, ecx)) goto loc_00151137; /* je: equal / zero */

loc_0015111B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    edx = eax;
    edx = edx << 7;
    MEM32(edx + 0x547360) = ecx;
    MEM32(eax * 4 + 0x7717E4) = ecx;

loc_00151137: ;
    eax = ZX8(MEM8(ebx + 0x84));
    if (CMP_EQ(MEM32(eax * 4 + 0x7717A4), ecx)) goto loc_00151163; /* je: equal / zero */

loc_00151147: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    edx = eax;
    edx = edx << 7;
    MEM32(edx + 0x547370) = ecx;
    MEM32(eax * 4 + 0x7717A4) = ecx;

loc_00151163: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx + 0x7A));
    MEM8(ebp + 0xC) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x79));
    MEM8(ebp + 0xD) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x78));
    MEM8(ebp + 0xE) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x7B));
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x7A));
    MEM8(ebp + 0x28) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x79));
    MEM8(ebp + 0x29) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x78));
    MEM8(ebp + 0x2A) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x7B));
    MEM8(ebp + 0x2B) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x7A));
    MEM8(ebp + 0x44) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x79));
    MEM8(ebp + 0x45) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x78));
    MEM8(ebp + 0x46) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x7B));
    MEM8(ebp + 0x47) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x7A));
    MEM8(ebp + 0x60) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x79));
    MEM8(ebp + 0x61) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 0x78));
    MEM8(ebp + 0x62) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x7B));
    MEM8(ebp + 0x63) = LO8(eax);
    if (TEST_Z(esi, esi)) goto loc_0015129C; /* je: equal / zero */

loc_001511CB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013B9D0(); /* call 0x0013B9D0 */

loc_001511DD: ;
    ecx = MEM32(esi + 0x24);
    ecx = ecx + 3;
    (void)0; /* cmp ecx, 0x3FF - flags set for next jcc */
    edi = 0x1FF;
    if (CMP_GE(ecx, 0x3FF)) goto loc_001511F5; /* jge: greater or equal (signed >=) */

loc_001511F0: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_001511FA; /* jl: less (signed <) */

loc_001511F5: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_001511FA: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    SET_LO16(ecx, MEM16(esi + 0x30));
    MEM16(eax + edx * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    edx++;
    MEM32(esi + 0x24) = edx;
    eax = edx;
    SET_LO16(edx, MEM16(esi + 0x30));
    SET_LO16(edx, LO16(edx) + 1);
    MEM16(ecx + eax * 2) = LO16(edx);
    ebp = MEM32(esi + 0x24);
    SET_LO16(edx, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x28);
    ebp++;
    SET_LO16(edx, LO16(edx) + 2);
    MEM32(esi + 0x24) = ebp;
    eax = ebp;
    MEM16(ecx + eax * 2) = LO16(edx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_0015124E; /* jge: greater or equal (signed >=) */

loc_00151249: ;
    if (CMP_L(MEM32(esi + 0x20), edi)) goto loc_00151253; /* jl: less (signed <) */

loc_0015124E: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00151253: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    SET_LO16(ecx, MEM16(esi + 0x30));
    MEM16(eax + edx * 2) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    SET_LO16(edx, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x28);
    ebx++;
    MEM32(esi + 0x24) = ebx;
    SET_LO16(edx, LO16(edx) + 2);
    eax = ebx;
    MEM16(ecx + eax * 2) = LO16(edx);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    edx++;
    MEM32(esi + 0x24) = edx;
    eax = edx;
    SET_LO16(edx, MEM16(esi + 0x30));
    SET_LO16(edx, LO16(edx) + 3);
    MEM16(ecx + eax * 2) = LO16(edx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0015129C: ;
    edx = MEM32(0x5499E8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_001512AA: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = ecx + 0x200;
    edx = eax + 0x78;
    if (CMP_B(edx, ecx)) goto loc_001512EB; /* jb: below (unsigned <) */

loc_001512C2: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x27C)) goto loc_001512D9; /* jae: above or equal (unsigned >=) */

loc_001512D4: ;
    ecx = 0x27C;

loc_001512D9: ;
    if (CMP_AE(eax, 0x27C)) goto loc_001512E5; /* jae: above or equal (unsigned >=) */

loc_001512E0: ;
    eax = 0x27C;

loc_001512E5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001512EB: ;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 8;
    eax = eax + 4;
    MEM32(eax) = 0x40601818;
    eax = eax + 4;
    ecx = eax + 0x10;
    esi = esp + 0x1C;
    edx = ebp + 0x10;
    MEM32(esp + 0x10) = 4;
    eax = eax + 0x60;
    goto loc_00151320;

    /* nop */

loc_00151320: ;
    edi = edx + -16;
    ebp = MEM32(edi);
    ebx = ecx + -16;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = MEM32(edx + -4);
    MEM32(ecx + -4) = edi;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_00151357; /* je: equal / zero */

loc_0015134E: ;
    edi = MEM32(esi);
    MEM32(ecx) = edi;
    edi = MEM32(esi + 4);
    goto loc_0015135E;

loc_00151357: ;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);

loc_0015135E: ;
    MEM32(ecx + 4) = edi;
    edi = MEM32(esp + 0x10);
    esi = esi + 8;
    edx = edx + 0x1C;
    ecx = ecx + 0x18;
    edi--;
    MEM32(esp + 0x10) = edi;
    if ((edi != 0)) goto loc_00151320; /* jne: not equal / not zero */

loc_00151375: ;
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_00151394: ;
    edx = MEM32(esp + 0x40);
    if (TEST_Z(MEM32(edx + 0x64), 0x40000)) goto loc_001513B7; /* je: equal / zero */

loc_001513A1: ;
    edx = 0; /* xor self */
    ecx = 0x40338;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001513AD: ;
    MEM32(0x549B3C) = 0;

loc_001513B7: ;
    POP32(esp, esi);

loc_001513B8: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001513BA: ;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001513C0
 * Original: 0x001513C0 - 0x00151423 (99 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001513C0: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(MEM32(ecx + 0x64), 0x400000)) { sub_00151423(); return; } /* je: equal / zero */

loc_001513CD: ;
    eax = ZX8(MEM8(ecx + 0x34));
    if (CMP_A(eax, 0xC)) { sub_00151423(); return; } /* ja: above (unsigned >) */

loc_001513D6: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x151430)); return; /* indirect tail jmp */

    eax = 0xA;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 9;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 1;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 2;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 3;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 4;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 5;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 6;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 7;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

    eax = 8;
    g_seh_ebp = ebp; sub_00151425(); return; /* tail jmp 0x00151425 */

}

/**
 * sub_00151510
 * Original: 0x00151510 - 0x0015152C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151510: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0015152C(); return; } /* je: equal / zero */

loc_00151520: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_00151531(); return; /* tail jmp 0x00151531 */

}

/**
 * sub_001516B0
 * Original: 0x001516B0 - 0x001516D5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001516B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001516B0: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    esi = esi + 0x68;
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_001516D5(); return; } /* je: equal / zero */

loc_001516C9: ;
    eax = eax & 0x3F;
    edi = 0x40;
    edi = edi - eax;
    g_seh_ebp = ebp; sub_001516DA(); return; /* tail jmp 0x001516DA */

}

/**
 * sub_00151C60
 * Original: 0x00151C60 - 0x00151D6B (267 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151C60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00151C60: ;
    eax = MEM32(esp + 4);
    (void)0; /* test MEM8(eax + 0x64), 0x20 - flags set for next jcc */
    xmm0 = MEMF(0x7FA24C); /* movss */
    if (TEST_Z(MEM8(eax + 0x64), 0x20)) goto loc_00151C8E; /* je: equal / zero */

loc_00151C72: ;
    xmm1 = MEMF(eax + 0x33C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x31C); /* addss */
    MEMF(eax + 0x31C) = xmm1; /* movss */

loc_00151C8E: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_00151CD8; /* je: equal / zero */

loc_00151C96: ;
    xmm1 = MEMF(eax + 0x318); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x31C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x320); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm1; /* movss */

loc_00151CD8: ;
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_00151D1E; /* jns: not sign (positive) */

loc_00151CDC: ;
    xmm1 = MEMF(eax + 0x324); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x328); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x32C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm1; /* movss */

loc_00151D1E: ;
    if (TEST_Z(HI8(ecx), 1)) goto loc_00151D65; /* je: equal / zero */

loc_00151D23: ;
    xmm1 = MEMF(eax + 0x330); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x58); /* addss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x334); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x5C); /* addss */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x338); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x60); /* addss */
    MEMF(eax + 0x60) = xmm1; /* movss */

loc_00151D65: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00151D70
 * Original: 0x00151D70 - 0x00151FEF (639 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00151D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx + 0x38); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(edx + 0x3C); /* movss */
    PUSH32(esp, ebx);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x3C); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edx + 0x38); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(edx + 0x38); /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x54); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    PUSH32(esp, 0);
    esp = esp - 0xC;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x2C;
    PUSH32(esp, 0x3F800000);
    edi = edx + 0x294;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = edi;
    MEMF(esp + 0xA4) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00151E4D: ;
    xmm2 = MEMF(edx + 0x58); /* movss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(edx + 0x5C); /* movss */
    xmm0 = MEMF(edx + 0x40); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x44); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x48); /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    esi = esp + 0x74;
    ebx = 4;
    /* nop */

loc_00151F50: ;
    xmm0 = MEMF(esi + -4); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00151F82: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(esi + -4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEMF(edi) = xmm0; /* movss */
    edx = (int32_t)xmm2; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm1; /* movss */
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEM16(edi + 0x18) = 0;
    edi = edi + 0x1C;
    esi = esi + 0xC;
    ebx--;
    if ((ebx != 0)) goto loc_00151F50; /* jne: not equal / not zero */

loc_00151FE4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00151FF0
 * Original: 0x00151FF0 - 0x0015219D (429 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151FF0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00151FF0: ;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = ZX8(MEM8(eax + ecx + 0x2A8));
    ecx = MEM32(esp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(edx + eax + 0x80); /* movss */
    xmm3 = MEMF(edx + eax + 0x90); /* movss */
    xmm4 = MEMF(edx + eax + 0x94); /* movss */
    xmm5 = MEMF(edx + eax + 0x98); /* movss */
    xmm1 = MEMF(edx + eax + 0x84); /* movss */
    xmm2 = MEMF(edx + eax + 0x88); /* movss */
    xmm6 = MEMF(ecx + 0x38); /* movss */
    xmm7 = MEMF(ecx + 0x3C); /* movss */
    xmm5 = xmm5 * xmm7; /* mulss */
    eax = edx + eax + 0x80;
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(ecx + 0x40); /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    MEMF(ecx + 0x294) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x44); /* movss */
    xmm5 = xmm5 - xmm3; /* subss */
    MEMF(ecx + 0x298) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x48); /* movss */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(ecx + 0x29C) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x40); /* movss */
    xmm5 = xmm5 + xmm0; /* addss */
    eax = ecx + 0x294;
    MEMF(ecx + 0x2B0) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x44); /* movss */
    xmm5 = xmm5 + xmm1; /* addss */
    MEMF(ecx + 0x2B4) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x48); /* movss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(ecx + 0x2B8) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x40); /* movss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(ecx + 0x2CC) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 0x44); /* movss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(ecx + 0x48); /* movss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(ecx + 0x2D4) = xmm3; /* movss */
    xmm3 = MEMF(ecx + 0x40); /* movss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 0x44); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    edx = 0; /* xor self */
    MEMF(ecx + 0x2EC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x48); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEM16(ecx + 0x2AC) = LO16(edx);
    MEM16(ecx + 0x2C8) = LO16(edx);
    MEMF(ecx + 0x2D0) = xmm5; /* movss */
    MEM16(ecx + 0x2E4) = LO16(edx);
    MEMF(ecx + 0x2E8) = xmm3; /* movss */
    MEMF(ecx + 0x2F0) = xmm0; /* movss */
    MEM16(ecx + 0x300) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_001521A0
 * Original: 0x001521A0 - 0x001522AA (266 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001521A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001521A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm2 = MEMF(ecx + 0x5C); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x3C); /* mulss */
    xmm3 = MEMF(ecx + 0x3C); /* movss */
    edx = SX16(LO16(edx));
    edx = edx << 2;
    xmm0 = MEMF(edx + 0x77149C); /* movss */
    xmm1 = MEMF(edx + 0x77148C); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    edx = 0; /* xor self */
    (void)0; /* cmp MEM8(esp + 0x14), 0 - flags set for next jcc */
    eax = ecx + 0x294;
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x50) = LO16(edx);
    MEM16(eax + 0x6C) = LO16(edx);
    xmm4 = MEMF(ecx + 0x40); /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm3 = xmm3 - xmm2; /* subss */
    edx = (int32_t)xmm4; /* cvttss2si */
    xmm4 = MEMF(ecx + 0x44); /* movss */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x48); /* addss */
    edi = (int32_t)xmm2; /* cvttss2si */
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0x44); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    esi = (int32_t)xmm4; /* cvttss2si */
    ebp = (int32_t)xmm2; /* cvttss2si */
    ebx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    ecx = SX16(LO16(ecx));
    if (CMP_EQ(MEM8(esp + 0x14), 0)) { sub_001522AA(); return; } /* je: equal / zero */

loc_00152246: ;
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ebp = LO16(ebp);
    ecx = SX16(LO16(ebx));
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    esi = SX16(LO16(esi));
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = SX16(LO16(edi));
    POP32(esp, edi);
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    POP32(esp, esi);
    MEMF(eax + 8) = xmm2; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    POP32(esp, ebp);
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm2; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x54) = xmm2; /* movss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152310
 * Original: 0x00152310 - 0x00152323 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152310(void)
{

loc_00152310: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001521A0(); /* call 0x001521A0 */

loc_0015231F: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00152330
 * Original: 0x00152330 - 0x00152343 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152330(void)
{

loc_00152330: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001521A0(); /* call 0x001521A0 */

loc_0015233F: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00152350
 * Original: 0x00152350 - 0x001525C0 (624 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152350(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00152350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0x54); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x8C;
    PUSH32(esp, 0x3F800000);
    esi = edx + 0x294;
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001523C5: ;
    xmm0 = MEMF(edx + 0x40); /* movss */
    xmm2 = MEMF(edx + 0x38); /* movss */
    xmm3 = MEMF(edx + 0x3C); /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x44); /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x48); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    edx = esp + 0x18;
    xmm4 = xmm1; /* movaps */
    xmm6 = xmm1; /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    PUSH32(esp, eax);
    xmm5 = xmm3; /* movaps */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm7 = xmm2; /* movaps */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0015244B: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00152471: ;
    xmm1 = MEMF(esp + 0x64); /* movss */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0015249D: ;
    xmm1 = MEMF(esp + 0x6C); /* movss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001524C9: ;
    ecx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    eax = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    edx = SX16(LO16(ecx));
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x4C); /* cvttss2si */
    MEMF(esi) = xmm0; /* movss */
    MEM16(esi + 0x18) = LO16(ebx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    MEMF(esi + 4) = xmm0; /* movss */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x3C); /* cvttss2si */
    MEMF(esi + 8) = xmm0; /* movss */
    edx = SX16(LO16(ecx));
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x40); /* cvttss2si */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    esi = esi + 0x1C;
    eax = SX16(LO16(edx));
    MEM16(esi + 0x18) = LO16(ebx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    MEMF(esi + 8) = xmm0; /* movss */
    edx = SX16(LO16(ecx));
    ecx = SX16(LO16(eax));
    esi = esi + 0x1C;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    MEMF(esi + 4) = xmm0; /* movss */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    MEMF(esi + 8) = xmm0; /* movss */
    MEM16(esi + 0x18) = LO16(ebx);
    edx = SX16(LO16(ecx));
    esi = esi + 0x1C;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEMF(esi) = xmm0; /* movss */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = edi;
    POP32(esp, edi);
    MEM16(esi + 0x18) = LO16(ebx);
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001528A0
 * Original: 0x001528A0 - 0x001528DE (62 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001528A0(void)
{
    float xmm0, xmm1;

loc_001528A0: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x328); /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x328); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001528E0
 * Original: 0x001528E0 - 0x00152A47 (359 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001528E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001528E0: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x10);
    eax = ecx + 0x310;
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x7FA20C);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_00152951; /* je: equal / zero */

loc_0015290F: ;
    xmm0 = MEMF(eax + 0x10); /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */

loc_00152922: ;
    edx--;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm4; /* movaps */
    if ((edx != 0)) goto loc_00152922; /* jne: not equal / not zero */

loc_00152943: ;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */

loc_00152951: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm2 = MEMF(eax); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(0x7FA248); /* movss */
    xmm5 = MEMF(esp); /* movss */
    xmm6 = MEMF(esp + 4); /* movss */
    xmm7 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = MEMF(0x648D10); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(ecx + 0x40); /* addss */
    MEMF(ecx + 0x40) = xmm4; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x48); /* addss */
    MEMF(ecx + 0x48) = xmm1; /* movss */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(ecx + 0x44); /* addss */
    MEMF(ecx + 0x44) = xmm4; /* movss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x4C); /* addss */
    MEMF(ecx + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x50); /* addss */
    MEMF(ecx + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x54); /* addss */
    MEMF(ecx + 0x54) = xmm1; /* movss */
    eax = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00152A50
 * Original: 0x00152A50 - 0x00152A7E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A50(void)
{
    float xmm0;

loc_00152A50: ;
    esp = esp - 8;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    ecx = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00152AB0(); /* call 0x00152AB0 */

loc_00152A7A: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00152A80
 * Original: 0x00152A80 - 0x00152AAE (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A80(void)
{
    float xmm0;

loc_00152A80: ;
    esp = esp - 8;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    ecx = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00152AB0(); /* call 0x00152AB0 */

loc_00152AAA: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00152AB0
 * Original: 0x00152AB0 - 0x00152C55 (421 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152AB0(void)
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

loc_00152AB0: ;
    esp = esp - 0x30;
    xmm0 = MEMF(edx + 0x38); /* movss */
    xmm1 = MEMF(edx + 0x4C); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x40); /* subss */
    xmm2 = MEMF(edx + 0x50); /* movss */
    xmm2 = xmm2 - MEMF(edx + 0x44); /* subss */
    xmm3 = MEMF(edx + 0x54); /* movss */
    xmm3 = xmm3 - MEMF(edx + 0x48); /* subss */
    xmm6 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8470DC);
    PUSH32(esp, esi);
    eax = SX16(LO16(eax));
    PUSH32(esp, edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edi = ecx;
    xmm0 = xmm0 * MEMF(edi); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(edx + 0x40); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x44); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x48); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    eax = eax + ebx + 0x330;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(edx + 0x44); /* addss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 + MEMF(edx + 0x48); /* addss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(edx + 0x40); /* addss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    eax = MEM32(esp + 0x30);
    xmm6 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x34) = xmm6; /* movss */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x38);
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    esi = edx + 0x294;
    xmm0 = xmm0 + xmm2; /* addss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00152C55(); return; } /* jnp: not parity */

loc_00152C1B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x18); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x20); /* movss */
    g_seh_ebp = ebp; sub_00152C5B(); return; /* tail jmp 0x00152C5B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00152EF0
 * Original: 0x00152EF0 - 0x00152F93 (163 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152EF0(void)
{

loc_00152EF0: ;
    SET_LO16(edx, MEM16(ecx + 8));
    MEM16(eax + 0x18) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 4));
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 6));
    MEM8(eax + 0xF) = LO8(edx);
    ecx = ecx + 0xA;
    eax = eax + 0x1C;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM16(eax + -4) = LO16(esi);
    SET_LO16(edx, MEM16(ecx + 8));
    MEM16(eax + 0x18) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 4));
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 6));
    MEM16(eax + 0x18) = LO16(esi);
    MEM8(eax + 0xF) = LO8(edx);
    SET_LO16(edx, MEM16(ecx + 0x12));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 0x28) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xC));
    ecx = ecx + 0xA;
    eax = eax + 0x1C;
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 6));
    MEM16(eax + 0x18) = LO16(esi);
    MEM8(eax + 0xF) = LO8(edx);
    SET_LO16(edx, MEM16(ecx + 0x12));
    ecx = ecx + 0xA;
    eax = eax + 0x1C;
    MEM16(eax + 0x18) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 4));
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 6));
    MEM16(eax + 0x18) = LO16(esi);
    MEM8(eax + 0xF) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00152FA0
 * Original: 0x00152FA0 - 0x0015315F (447 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_00152FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx + 0x38); /* movss */
    xmm2 = MEMF(edx + 0x3C); /* movss */
    PUSH32(esp, ebx);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x3C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edx + 0x38); /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x54); /* movss */
    PUSH32(esp, 0);
    esp = esp - 0xC;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x7C;
    MEMF(esp + 0x5C) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x38); /* movss */
    PUSH32(esp, 0x3F800000);
    edi = edx + 0x294;
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = edi;
    MEMF(esp + 0x78) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00153083: ;
    xmm0 = MEMF(edx + 0x40); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x44); /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x48); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0x98) = xmm0; /* movss */
    esi = esp + 0x34;
    ebx = 4;
    /* nop */

loc_001530C0: ;
    xmm0 = MEMF(esi + -4); /* movss */
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001530F2: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(esi + -4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = (int32_t)xmm1; /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEMF(edi) = xmm0; /* movss */
    edx = (int32_t)xmm2; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm1; /* movss */
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEM16(edi + 0x18) = 0;
    edi = edi + 0x1C;
    esi = esi + 0xC;
    ebx--;
    if ((ebx != 0)) goto loc_001530C0; /* jne: not equal / not zero */

loc_00153154: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00153160
 * Original: 0x00153160 - 0x00153340 (480 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153160(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00153160: ;
    xmm4 = MEMF(edx + 4); /* movss */
    xmm5 = MEMF(edx + 8); /* movss */
    xmm3 = MEMF(ecx + 0x3C); /* movss */
    xmm3 = xmm3 * MEMF(edx); /* mulss */
    xmm6 = MEMF(ecx + 0x40); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 0x3C); /* mulss */
    xmm5 = xmm5 * MEMF(ecx + 0x3C); /* mulss */
    xmm6 = xmm6 + xmm3; /* addss */
    PUSH32(esp, esi);
    esi = eax;
    xmm1 = MEMF(esi); /* movss */
    xmm2 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x38); /* mulss */
    xmm2 = xmm2 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    edx = (int32_t)xmm6; /* cvttss2si */
    eax = ecx + 0x294;
    edx = SX16(LO16(edx));
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm6; /* movss */
    xmm6 = MEMF(ecx + 0x44); /* movss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm6 = xmm6 + xmm2; /* addss */
    edx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm6; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm6 = xmm6 + MEMF(ecx + 0x48); /* addss */
    edx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm6; /* movss */
    edx = 0; /* xor self */
    MEM16(eax + 0x18) = LO16(edx);
    xmm6 = MEMF(ecx + 0x40); /* movss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm6 = xmm6 + xmm3; /* addss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm6; /* movss */
    xmm6 = MEMF(ecx + 0x44); /* movss */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm6 = xmm6 + xmm4; /* addss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm6; /* movss */
    xmm6 = MEMF(ecx + 0x48); /* movss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm6 = xmm6 + xmm5; /* addss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x24) = xmm6; /* movss */
    MEM16(eax + 0x34) = LO16(edx);
    xmm6 = MEMF(ecx + 0x40); /* movss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm6 = xmm6 - xmm3; /* subss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm6; /* movss */
    xmm6 = MEMF(ecx + 0x44); /* movss */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm6 = xmm6 - xmm4; /* subss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x3C) = xmm6; /* movss */
    xmm6 = MEMF(ecx + 0x48); /* movss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm6 = xmm6 - xmm5; /* subss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm6; /* movss */
    MEM16(eax + 0x50) = LO16(edx);
    xmm6 = MEMF(ecx + 0x40); /* movss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm6 = xmm6 - xmm3; /* subss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x44); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - xmm4; /* subss */
    esi = (int32_t)xmm1; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x48); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0x6C) = LO16(edx);
    MEMF(eax + 0x64) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00153590
 * Original: 0x00153590 - 0x00153758 (456 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153590(void)
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

loc_00153590: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp - 0x10;
    PUSH32(esp, edi);
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    edi = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0015362F; /* jnp: not parity */

loc_001535AB: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 < xmm2)) goto loc_001535E0; /* jb: below (unsigned <) */

loc_001535DB: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0015362A; /* ja: above (unsigned >) */

loc_001535E0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001535F7: ;
    ecx = MEM32(esi + 0x2C);
    ecx--;
    if (CMP_A(ecx, 3)) { sub_00153758(); return; } /* ja: above (unsigned >) */

loc_00153604: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x153778); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0015360Bu) goto loc_0015360B;
    if (_jt == 0x00153665u) goto loc_00153665;
    if (_jt == 0x001536C6u) goto loc_001536C6;
    if (_jt == 0x00153722u) goto loc_00153722;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015360B: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 8))) goto loc_00153636; /* jb: below (unsigned <) */

loc_00153618: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E4030(); /* call 0x003E4030 */

loc_00153627: ;
    esp = esp + 8;

loc_0015362A: ;
    MEMF(esi + 4) = xmm0; /* movss */

loc_0015362F: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00153636: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0015362F; /* jbe: below or equal (unsigned <=) */

loc_0015363E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    edi--;
    PUSH32(esp, eax);
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    PUSH32(esp, 0); sub_003E4030(); /* call 0x003E4030 */

loc_00153652: ;
    esp = esp + 8;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 4) = xmm1; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00153665: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00153696; /* jb: below (unsigned <) */

loc_00153676: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00153682; /* jns: not sign (positive) */

loc_0015367D: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00153682: ;
    if ((eax == 0)) goto loc_001536EB; /* je: equal / zero */

loc_00153684: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00153696: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0015362F; /* jbe: below or equal (unsigned <=) */

loc_0015369E: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_001536AA; /* jns: not sign (positive) */

loc_001536A5: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_001536AA: ;
    if ((eax != 0)) goto loc_001536B4; /* jne: not equal / not zero */

loc_001536AC: ;
    xmm0 = MEMF(esp + 4); /* movss */
    goto loc_001536F1;

loc_001536B4: ;
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001536C6: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0015370F; /* jb: below (unsigned <) */

loc_001536D7: ;
    if (CMP_L(eax, 1)) goto loc_001536EB; /* jl: less (signed <) */

loc_001536DC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001536EB: ;
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */

loc_001536F1: ;
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648D34); /* mulss */
    MEMF(esi + 8) = xmm0; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0015370F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015362F; /* jbe: below or equal (unsigned <=) */

loc_0015371B: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00153722: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 8))) goto loc_00153740; /* jb: below (unsigned <) */

loc_0015372F: ;
    edi--;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00153740: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0015362F; /* jbe: below or equal (unsigned <=) */

loc_0015374C: ;
    MEMF(esi + 4) = xmm1; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00153790
 * Original: 0x00153790 - 0x00153A42 (690 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;

loc_00153790: ;
    esp = esp - 0x154;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001537A3: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x2C);
    xmm6 = 0.0f; /* xorps self = zero */
    eax = 2;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xC4) = eax;
    SET_LO16(eax, MEM16(esi + 0x24));
    MEM16(esp + 0x4A) = LO16(eax);
    MEM32(esp + 0x4C) = ecx;
    eax = esi;
    ecx = MEM32(eax);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    edi = 0; /* xor self */
    MEMF(esp + 0x94) = xmm6; /* movss */
    MEM32(esp + 0x90) = 0x303;
    MEM8(esp + 0x98) = 1;
    MEM32(esp + 0x9C) = 0x57;
    MEM32(esp + 0xA8) = 4;
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xB8) = 4;
    MEM32(esp + 0xC0) = edi;
    MEMF(esp + 0xA0) = xmm6; /* movss */
    MEMF(esp + 0xA4) = xmm6; /* movss */
    MEM32(esp + 0xC8) = edi;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00153851: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00153868: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00153877: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm6; /* movss */
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEMF(esp + 0x74) = xmm6; /* movss */
    MEM32(esp + 0x78) = 0x1E1;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001538A0: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_NE(eax, 4)) goto loc_001538B6; /* jne: not equal / not zero */

loc_001538B1: ;
    eax = 3;

loc_001538B6: ;
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x6B7128));
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B7129));
    SET_LO8(eax, MEM8(eax + eax * 2 + 0x6B712A));
    xmm0 = MEMF(esi + 0x30); /* movss */
    MEM8(esp + 0x8D) = LO8(edx);
    MEM8(esp + 0x8C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x23));
    edx = esi + 0xC;
    MEM8(esp + 0x8E) = LO8(eax);
    eax = MEM32(edx);
    MEM8(esp + 0x8F) = LO8(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00153927: ;
    xmm7 = MEMF(0x649430); /* movss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E98); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00153952: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E98); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015396D: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E98); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015398E: ;
    xmm0 = xmm0 * MEMF(0x64A47C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A478); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001539AD: ;
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001539C6: ;
    xmm0 = xmm0 * MEMF(0x64A474); /* mulss */
    xmm5 = MEMF(0x648D54); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001539E5: ;
    eax = MEM32(esp + 0x160);
    xmm0 = xmm0 * MEMF(0x64A470); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A46C); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x11);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x13);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0x597978);
    eax = esp + 0x70;
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00153A21: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, edi)) goto loc_00153A39; /* je: equal / zero */

loc_00153A28: ;
    edi = eax + 0x310;
    ecx = 0x10;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00153A39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x154;
    esp += 4; return; /* ret */

}

/**
 * sub_00153A50
 * Original: 0x00153A50 - 0x00153C94 (580 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00153A50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm4 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(eax + 0x310); /* movss */
    ecx = MEM32(0x7FA20C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * MEMF(eax + 0x31C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x314); /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x318); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * MEMF(eax + 0x31C); /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x314); /* addss */
    MEMF(eax + 0x314) = xmm3; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_00153B18; /* je: equal / zero */

loc_00153AD7: ;
    xmm0 = MEMF(eax + 0x310); /* movss */
    xmm1 = MEMF(eax + 0x318); /* movss */
    xmm2 = MEMF(eax + 0x320); /* movss */
    edx = ecx;

loc_00153AF1: ;
    edx--;
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = xmm5; /* movaps */
    if ((edx != 0)) goto loc_00153AF1; /* jne: not equal / not zero */

loc_00153B08: ;
    MEMF(eax + 0x310) = xmm0; /* movss */
    MEMF(eax + 0x318) = xmm1; /* movss */

loc_00153B18: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_00153B3F; /* jbe: below or equal (unsigned <=) */

loc_00153B20: ;
    if (TEST_Z(ecx, ecx)) goto loc_00153B3F; /* je: equal / zero */

loc_00153B24: ;
    xmm1 = MEMF(eax + 0x320); /* movss */
    xmm0 = xmm3; /* movaps */
    /* nop */

loc_00153B30: ;
    ecx--;
    xmm0 = xmm0 * xmm1; /* mulss */
    if ((ecx != 0)) goto loc_00153B30; /* jne: not equal / not zero */

loc_00153B37: ;
    MEMF(eax + 0x314) = xmm0; /* movss */

loc_00153B3F: ;
    xmm0 = MEMF(eax + 0x34C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x314) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x314))) goto loc_00153B5C; /* jbe: below or equal (unsigned <=) */

loc_00153B50: ;
    ecx = MEM32(eax + 0x34C);
    MEM32(eax + 0x314) = ecx;

loc_00153B5C: ;
    /* comiss xmm2, MEMF(eax + 0x314) - sets EFLAGS */
    if ((xmm2 <= MEMF(eax + 0x314))) goto loc_00153C57; /* jbe: below or equal (unsigned <=) */

loc_00153B69: ;
    fp_push(MEMF(eax + 0x340)); /* fld float */
    ecx = MEM32(eax + 0x33C);
    /* FPU: fsin  */
    MEM32(esp) = ecx;
    edx = MEM32(eax + 0x334);
    MEM32(esp + 8) = edx;
    xmm1 = MEMF(0x648D30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_push(MEMF(esp)); /* fld float */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(eax + 0x338); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x334); /* addss */
    /* fstp st(0) */
    MEMF(eax + 0x334) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x344); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x340); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x340) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00153C27; /* jbe: below or equal (unsigned <=) */

loc_00153C05: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00153C10;

    /* nop */

loc_00153C10: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm3 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_00153C10; /* ja: above (unsigned >) */

loc_00153C1F: ;
    MEMF(eax + 0x340) = xmm3; /* movss */

loc_00153C27: ;
    /* comiss xmm2, MEMF(eax + 0x340) - sets EFLAGS */
    if ((xmm2 <= MEMF(eax + 0x340))) goto loc_00153C57; /* jbe: below or equal (unsigned <=) */

loc_00153C30: ;
    xmm3 = MEMF(eax + 0x340); /* movss */
    goto loc_00153C40;

    /* nop */

loc_00153C40: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm3 = xmm0; /* movaps */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 > xmm3)) goto loc_00153C40; /* ja: above (unsigned >) */

loc_00153C4F: ;
    MEMF(eax + 0x340) = xmm3; /* movss */

loc_00153C57: ;
    xmm0 = MEMF(eax + 0x324); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x328); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x32C); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x54); /* addss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00153CA0
 * Original: 0x00153CA0 - 0x00153DC4 (292 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm5;

loc_00153CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx + 0x38); /* movss */
    xmm2 = MEMF(edx + 0x3C); /* movss */
    PUSH32(esp, ebx);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x3C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edx + 0x38); /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x54); /* movss */
    PUSH32(esp, 0);
    esp = esp - 0xC;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x7C;
    MEMF(esp + 0x5C) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x38); /* movss */
    PUSH32(esp, 0x3F800000);
    edi = edx + 0x294;
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = edi;
    MEMF(esp + 0x78) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00153D83: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esp = esp + 0x24;
    /* comiss xmm4, MEMF(edx + 0x314) - sets EFLAGS */
    if ((xmm4 <= MEMF(edx + 0x314))) { sub_00153DC4(); return; } /* jbe: below or equal (unsigned <=) */

loc_00153D92: ;
    xmm0 = MEMF(edx + 0x58); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x40); /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x5C); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x44); /* addss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x48); /* addss */
    g_seh_ebp = ebp; sub_00153DE5(); return; /* tail jmp 0x00153DE5 */

}

/**
 * sub_00153EA0
 * Original: 0x00153EA0 - 0x00154135 (661 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153EA0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00153EA0: ;
    xmm6 = MEMF(0x648D14); /* movss */
    esp = esp - 0x68;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    xmm0 = MEMF(edi + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648EF8); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x4C); /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    if ((xmm0 <= xmm6)) goto loc_00154130; /* jbe: below or equal (unsigned <=) */

loc_00153ED8: ;
    xmm0 = MEMF(0x64A6C0); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A6BC); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x649D44); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F24); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2D4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A6B8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64988C); /* movss */
    PUSH32(esp, ebx);
    MEM16(esp + 0x3C) = 0xFFE9;
    MEM16(esp + 0x3E) = 6;
    MEM8(esp + 0x54) = 0;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, esi);
    /* nop */

loc_00153F50: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00153F55: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, LO8(edx));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00153F64: ;
    eax = MEM32(0x84A148);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm1 = MEMF(0x648F60); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(eax + ecx + 0x3BC); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm5 = xmm5 * MEMF(0x64A400); /* mulss */
    edx = ZX8(LO8(ebx));
    xmm5 = xmm5 + MEMF(esp + edx * 4 + 0x14); /* addss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00153FC2; /* jbe: below or equal (unsigned <=) */

loc_00153FB3: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00153FB3; /* ja: above (unsigned >) */

loc_00153FBC: ;
    MEMF(esp + 0x78) = xmm0; /* movss */

loc_00153FC2: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00153FDF; /* jbe: below or equal (unsigned <=) */

loc_00153FCA: ;
    /* nop */

loc_00153FD0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00153FD0; /* ja: above (unsigned >) */

loc_00153FD9: ;
    MEMF(esp + 0x78) = xmm0; /* movss */

loc_00153FDF: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esp + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64A6B4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00154117; /* jbe: below or equal (unsigned <=) */

loc_00153FFF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00154004: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A6B0); /* mulss */
    xmm1 = xmm1 + MEMF(0x64A6AC); /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(0x64A6A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A6A4); /* addss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    xmm5 = xmm5 + MEMF(0x648D88); /* addss */
    xmm5 = xmm5 - MEMF(0x649EF0); /* subss */
    xmm5 = xmm5 * MEMF(0x649730); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A6A0); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A69C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A698); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 4));
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64A694); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64A690); /* movss */
    edx = (int32_t)xmm5; /* cvttss2si */
    PUSH32(esp, eax);
    esi = esp + 0x2C;
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x30) = 0x14;
    MEM16(esp + 0x40) = LO16(edx);
    MEM16(esp + 0x42) = 0xC;
    MEM16(esp + 0x5E) = 0x226;
    MEM16(esp + 0x60) = 0;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_000F4A60(); /* call 0x000F4A60 */

loc_0015410C: ;
    xmm6 = MEMF(0x648D14); /* movss */
    esp = esp + 4;

loc_00154117: ;
    xmm0 = MEMF(edi + 0x4C); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    if ((xmm0 > xmm6)) goto loc_00153F50; /* ja: above (unsigned >) */

loc_0015412E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00154130: ;
    POP32(esp, edi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00154140
 * Original: 0x00154140 - 0x001542D3 (403 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154140: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = 0x8D;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015414E; /* je: equal / zero */

loc_00154149: ;
    eax = 0x76;

loc_0015414E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x30;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015415F: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) { sub_001542D3(); return; } /* je: equal / zero */

loc_0015416C: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x2C) = 0;
    if ((eax == 0)) goto loc_0015421F; /* je: equal / zero */

loc_00154182: ;
    eax--;
    if ((eax != 0)) goto loc_001542B1; /* jne: not equal / not zero */

loc_00154189: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00154197; /* jne: not equal / not zero */

loc_00154192: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00154197: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001541E5; /* je: equal / zero */

loc_001541BD: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA64)) goto loc_001541E5; /* jb: below (unsigned <) */

loc_001541C9: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001541D3: ;
    PUSH32(esp, 0xA64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001541DE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00154209; /* jne: not equal / not zero */

loc_001541E5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001541F7: ;
    PUSH32(esp, 0xA64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00154202: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00154218; /* je: equal / zero */

loc_00154209: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_00154660(); /* call 0x00154660 */

loc_00154213: ;
    goto loc_001542AE;

loc_00154218: ;
    eax = 0; /* xor self */
    goto loc_001542AE;

loc_0015421F: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0015422D; /* jne: not equal / not zero */

loc_00154228: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0015422D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00154278; /* je: equal / zero */

loc_00154254: ;
    if (CMP_B(MEM32(esi + 0x80), 0x28)) goto loc_00154278; /* jb: below (unsigned <) */

loc_0015425D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00154267: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0015426F: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_0015429B; /* jne: not equal / not zero */

loc_00154278: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0015428A: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00154292: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_001542AB; /* je: equal / zero */

loc_0015429B: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_001554D0(); /* call 0x001554D0 */

loc_001542A9: ;
    goto loc_001542AD;

loc_001542AB: ;
    eax = 0; /* xor self */

loc_001542AD: ;
    POP32(esp, ebx);

loc_001542AE: ;
    MEM32(ebp + 0x2C) = eax;

loc_001542B1: ;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_001542D3(); return; } /* jne: not equal / not zero */

loc_001542BA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001542CF; /* jne: not equal / not zero */

loc_001542C3: ;
    edx = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001542CF: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001542E0
 * Original: 0x001542E0 - 0x00154322 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001542E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001542E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00154320; /* je: equal / zero */

loc_001542EC: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001542F2: ;
    if (TEST_Z(eax, eax)) goto loc_00154320; /* je: equal / zero */

loc_001542F6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154320; /* jne: not equal / not zero */

loc_001542FF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00154306: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00154320; /* jl: less (signed <) */

loc_0015430D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00154322(); return; } /* je: equal / zero */

loc_0015431A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015431D: ;
    esp = esp + 4;

loc_00154320: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00154500
 * Original: 0x00154500 - 0x0015451C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154500: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x2C);
    if (TEST_Z(eax, eax)) { sub_0015451C(); return; } /* je: equal / zero */

loc_0015450B: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 8);
    if (CMP_NE(MEM32(eax + 4), edx)) { sub_0015451C(); return; } /* jne: not equal / not zero */

loc_00154515: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00154520
 * Original: 0x00154520 - 0x00154560 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0015454A; /* je: equal / zero */

loc_0015452C: ;
    MEM32(eax) = 0x5F44F8;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00154540: ;
    esp = esp + 4;
    MEM32(esi + 0x2C) = 0;

loc_0015454A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00154560(); return; } /* jne: not equal / not zero */

loc_00154553: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00154570
 * Original: 0x00154570 - 0x001545A5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00154570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0015459A; /* je: equal / zero */

loc_0015457C: ;
    MEM32(eax) = 0x5F44F8;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00154590: ;
    esp = esp + 4;
    MEM32(esi + 0x2C) = 0;

loc_0015459A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001545A0: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001545B0
 * Original: 0x001545B0 - 0x0015465B (171 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001545B0(void)
{
    float xmm0;

loc_001545B0: ;
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
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 0x18); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x24); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    MEM32(eax) = MEM32(eax) + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00154660
 * Original: 0x00154660 - 0x00154881 (545 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154660: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = SX16(LO16(eax));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x5F44F0;
    MEM32(esi + 8) = 0x2A6;
    MEM32(esi + 0xC) = 0x2B4;
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_0015468A: ;
    eax = ZX8(LO8(eax));
    if (CMP_LE(eax, 0x11)) goto loc_00154697; /* jle: less or equal (signed <=) */

loc_00154692: ;
    eax = 0x11;

loc_00154697: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x6499D4); /* movss */
    ecx = MEM32(eax * 4 + 0x6B7138);
    xmm1 = MEMF(0x649718); /* movss */
    xmm2 = MEMF(0x649090); /* movss */
    xmm3 = MEMF(0x64971C); /* movss */
    xmm4 = MEMF(0x58BD48); /* movss */
    xmm6 = MEMF(0x6499D0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D2C); /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x10) = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    edi = MEM32(esp + 0x14);
    MEMF(esp + 0x20) = xmm5; /* movss */
    ebx = MEM32(esp + 0x20);
    eax = esi + 0x1C;
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */

loc_00154741: ;
    ebp = eax + -88;
    MEM32(eax + -8) = ebp;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    ebp = eax + 0x48;
    MEM32(eax + -4) = ebp;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    ebp = MEM32(esp + 0x18);
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x24);
    MEM32(eax + 0x14) = ebp;
    MEMF(esp + 0x28) = xmm0; /* movss */
    ebp = MEM32(esp + 0x28);
    MEM32(eax + 0x18) = ebp;
    ebp = MEM32(esp + 0x2C);
    MEM32(eax + 0x1C) = ebp;
    MEMF(esp + 0x30) = xmm1; /* movss */
    ebp = MEM32(esp + 0x30);
    MEM32(eax + 0x20) = ebp;
    ebp = MEM32(esp + 0x34);
    MEM32(eax + 0x24) = ebp;
    ebp = MEM32(esp + 0x38);
    MEM32(eax + 0x28) = ebp;
    ebp = MEM32(esp + 0x3C);
    MEM32(eax + 0x2C) = ebp;
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x30) = ebp;
    ebp = MEM32(esp + 0x44);
    MEM32(eax + 0x34) = ebp;
    MEMF(esp + 0x48) = xmm0; /* movss */
    ebp = MEM32(esp + 0x48);
    MEM32(eax + 0x38) = ebp;
    ebp = MEM32(esp + 0x4C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x3C) = ebp;
    MEMF(eax + 0x40) = xmm4; /* movss */
    MEMF(eax + 0x44) = xmm6; /* movss */
    ecx++;
    eax = eax + 0x50;
    if (CMP_L(ecx, 0x21)) goto loc_00154741; /* jl: less (signed <) */

loc_001547EA: ;
    ebx = MEM32(esp + 0x54);
    xmm6 = MEMF(0x6499CC); /* movss */
    eax = ebx + 0x14;
    edx = ebx + 0xA14;
    MEMF(esp + 0x48) = xmm5; /* movss */
    ebp = MEM32(esp + 0x48);
    MEM32(eax) = edx;
    MEM32(ebx + 0xA18) = eax;
    esi = 0; /* xor self */
    MEMF(esp + 0x40) = xmm5; /* movss */
    /* nop */

loc_00154820: ;
    eax = esi + esi * 4;
    eax = eax << 4;
    edi = eax + ebx + 0x14;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015482F: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x4C);
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = ecx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015484C: ;
    edx = MEM32(esp + 0x40);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    eax = MEM32(esp + 0x44);
    MEM32(edi + 0x30) = edx;
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00154869: ;
    eax = eax & 3;
    esi = esi + eax + 8;
    if (CMP_LE(esi, 0x20)) goto loc_00154820; /* jle: less or equal (signed <=) */

loc_00154875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154890
 * Original: 0x00154890 - 0x001548BD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00154890: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = MEM32(eax + ecx + 4);
    SET_LO8(eax, MEM8(edx + 0x8C2));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001548BD(); return; } /* je: equal / zero */

loc_001548B3: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00154EE0
 * Original: 0x00154EE0 - 0x00154F57 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154EE0: ;
    eax = MEM32(0x6B849C);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_00154F04; /* je: equal / zero */

loc_00154EF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00154EFE: ;
    MEM32(0x771760) = esi;

loc_00154F04: ;
    eax = MEM32(0x6B8C5C);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_00154F1E; /* je: equal / zero */

loc_00154F13: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00154F18: ;
    MEM32(0x77175C) = esi;

loc_00154F1E: ;
    eax = MEM32(edi + 8);
    ebx = MEM32(0x847194);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00154F30: ;
    esi = eax;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00154F3E: ;
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = eax;
    if (TEST_NZ(esi, esi)) { sub_00154F57(); return; } /* jne: not equal / not zero */

loc_00154F47: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00154F4F: ;
    MEM32(0x771764) = esi;
    g_seh_ebp = ebp; sub_00154F6E(); return; /* tail jmp 0x00154F6E */

}

/**
 * sub_00155440
 * Original: 0x00155440 - 0x001554C7 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155440(void)
{
    float xmm0;

loc_00155440: ;
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
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 0x18); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    MEM32(eax) = MEM32(eax) + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001554D0
 * Original: 0x001554D0 - 0x00155570 (160 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001554D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001554D0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = SX16(LO16(eax));
    MEM32(ebx + 4) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = ebx + 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    MEM32(ebx) = 0x5F4500;
    MEMF(ebx + 8) = xmm0; /* movss */
    MEMF(ebx + 0xC) = xmm0; /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    MEMF(ebx + 0x14) = xmm0; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    MEMF(ebx + 0x20) = xmm0; /* movss */
    edx = MEM32(0x84A13C);
    eax = eax + edx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00155524: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = 0x2A4;
    MEM32(ebx + 0x24) = eax;
    if (TEST_Z(ebp, ebp)) { sub_00155570(); return; } /* je: equal / zero */

loc_00155530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x5F4514;
    esi = ebp;
    ecx = 0xA;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0015554F; /* jne: not equal / not zero */

loc_00155544: ;
    MEM32(ebx + 0x24) = eax;
    eax = ebx;

loc_00155549: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0015554F: ;
    eax = 0; /* xor self */
    edi = 0x5F4508;
    esi = ebp;
    ecx = 0xA;
    /* repe cmpsb - string compare, ecx iterations */
    eax = ebx;
    if (0 /* strings differed (repe cmpsb) */) goto loc_00155549; /* jne: not equal / not zero */

loc_00155563: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x24) = 0x2A5;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155580
 * Original: 0x00155580 - 0x001555AF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00155580: ;
    edx = MEM32(0x8470DC);
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    ecx = MEM32(ecx + edx + 4);
    SET_LO8(edx, MEM8(ecx + 0x8C2));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_001555AF(); return; } /* jne: not equal / not zero */

loc_001555A5: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001557D0
 * Original: 0x001557D0 - 0x00155A37 (615 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001557D0: ;
    eax = MEM32(0x6B82A4);
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001557F4; /* je: equal / zero */

loc_001557E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001557EE: ;
    MEM32(0x771760) = esi;

loc_001557F4: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = eax + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00155816: ;
    edx = MEM32(edi + 4);
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = edx + eax + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00155837: ;
    ecx = MEM32(0x7717E4);
    eax = 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_0015585B; /* je: equal / zero */

loc_0015584B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_0015585B: ;
    eax = MEM32(0x7717C4);
    ebx = 2;
    if (CMP_EQ(eax, ebx)) goto loc_0015587B; /* je: equal / zero */

loc_00155869: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_0015587B: ;
    eax = MEM32(0x7717B4);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_00155898; /* je: equal / zero */

loc_00155886: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54736C) = ebp;
    MEM32(0x7717B4) = ebp;

loc_00155898: ;
    if (CMP_EQ(MEM32(0x7717A4), ebx)) goto loc_001558B2; /* je: equal / zero */

loc_001558A0: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547370) = ebx;
    MEM32(0x7717A4) = ebx;

loc_001558B2: ;
    if (CMP_EQ(MEM32(0x771784), ebp)) goto loc_001558CC; /* je: equal / zero */

loc_001558BA: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547378) = ebp;
    MEM32(0x771784) = ebp;

loc_001558CC: ;
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001558D4: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(0x7717E8);
    esi = 1;
    edx = edx | 0x401;
    eax = 0x17;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x547330) = esi;
    MEM32(0x547334) = esi;
    MEM32(0x5499F0) = edx;
    MEM32(0x547384) = ebp;
    ecx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_00155923; /* je: equal / zero */

loc_00155911: ;
    edx = edx | ecx;
    MEM32(0x5499F0) = edx;
    MEM32(0x5473E0) = eax;
    MEM32(0x7717E8) = eax;

loc_00155923: ;
    if (CMP_EQ(MEM32(0x7717D8), esi)) goto loc_0015593D; /* je: equal / zero */

loc_0015592B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E4) = esi;
    MEM32(0x7717D8) = esi;

loc_0015593D: ;
    if (CMP_EQ(MEM32(0x7717C8), ebx)) goto loc_00155957; /* je: equal / zero */

loc_00155945: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E8) = ebx;
    MEM32(0x7717C8) = ebx;

loc_00155957: ;
    edx = MEM32(0x7717B8);
    eax = 3;
    if (CMP_EQ(edx, eax)) goto loc_00155976; /* je: equal / zero */

loc_00155966: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473EC) = eax;
    MEM32(0x7717B8) = eax;

loc_00155976: ;
    if (CMP_EQ(MEM32(0x7717A8), ebx)) goto loc_00155990; /* je: equal / zero */

loc_0015597E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F0) = ebx;
    MEM32(0x7717A8) = ebx;

loc_00155990: ;
    if (CMP_EQ(MEM32(0x771788), esi)) goto loc_001559AA; /* je: equal / zero */

loc_00155998: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F8) = esi;
    MEM32(0x771788) = esi;

loc_001559AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001559B0: ;
    ecx = MEM32(0x5499F0);
    eax = MEM32(0x7717EC);
    ecx = ecx | 0x402;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x5473B0) = esi;
    MEM32(0x5473B4) = esi;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547404) = ebp;
    if (CMP_EQ(eax, esi)) goto loc_001559F5; /* je: equal / zero */

loc_001559DD: ;
    eax = ecx;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x547460) = esi;
    MEM32(0x7717EC) = esi;

loc_001559F5: ;
    if (CMP_EQ(MEM32(0x7717AC), esi)) goto loc_00155A13; /* je: equal / zero */

loc_001559FD: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x547470) = esi;
    MEM32(0x7717AC) = esi;

loc_00155A13: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00155A1E: ;
    ebx = eax;
    esp = esp + 4;
    if (CMP_NE(ebx, ebp)) { sub_00155A37(); return; } /* jne: not equal / not zero */

loc_00155A27: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00155A2F: ;
    MEM32(0x771764) = ebp;
    g_seh_ebp = ebp; sub_00155A4E(); return; /* tail jmp 0x00155A4E */

}

/**
 * sub_00156070
 * Original: 0x00156070 - 0x00156096 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00156070: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x14);
    ecx = eax + eax * 8;
    ecx = ecx << 5;
    eax = ecx + edx + 0x6DC;
    PUSH32(esp, 0x39);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015608D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00156096(); return; } /* jne: not equal / not zero */

loc_00156094: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00156170
 * Original: 0x00156170 - 0x001563FD (653 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156170(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00156170: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    if (TEST_Z(MEM8(esi + 0x38), 1)) goto loc_00156193; /* je: equal / zero */

loc_0015617E: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x44) = MEM16(esi + 0x44) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x44), 0)) goto loc_001563BD; /* jl: less (signed <) */

loc_00156193: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    SET_LO16(eax, MEM16(esi + 0x44));
    (void)0; /* cmp LO16(eax), MEM16(esi + 0x46) - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x60); /* addss */
    MEMF(esi + 0x60) = xmm0; /* movss */
    if (CMP_LE(LO16(eax), MEM16(esi + 0x46))) goto loc_001561DB; /* jle: less or equal (signed <=) */

loc_001561C3: ;
    SET_LO16(ecx, MEM16(esi + 0x68));
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    edx = SX16(LO16(ecx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(esi + 0x48); /* mulss */
    MEMF(esi + 0x5C) = xmm2; /* movss */

loc_001561DB: ;
    if (CMP_GE(LO16(eax), MEM16(esi + 0x4C))) goto loc_001561F2; /* jge: greater or equal (signed >=) */

loc_001561E1: ;
    eax = SX16(LO16(eax));
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(esi + 0x50); /* mulss */
    MEMF(esi + 0x5C) = xmm2; /* movss */

loc_001561F2: ;
    if (CMP_EQ(MEM8(esi + 0x58), 0xFF)) goto loc_0015638A; /* je: equal / zero */

loc_001561FC: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x54); /* mulss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x6C); /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_0015638A; /* jbe: below or equal (unsigned <=) */

loc_00156228: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* nop */

loc_00156230: ;
    ecx = MEM32(0x84A148);
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    xmm0 = MEMF(ecx + edx + 0x3BC); /* movss */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015625C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    SET_LO8(edx, LO8(edx) - 0x28);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(edx);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00156288; /* je: equal / zero */

loc_0015627C: ;
    eax = eax & 0x3F;
    edi = 0x40;
    edi = edi - eax;
    goto loc_0015628D;

loc_00156288: ;
    eax = eax & 0x3F;
    edi = eax;

loc_0015628D: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001562A4; /* je: equal / zero */

loc_00156291: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001562A4; /* je: equal / zero */

loc_00156296: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edi * 4 + 0x743090); /* subss */
    goto loc_001562AD;

loc_001562A4: ;
    xmm1 = MEMF(edi * 4 + 0x743090); /* movss */

loc_001562AD: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(edx), 0x40 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (TEST_Z(LO8(edx), 0x40)) goto loc_001562C9; /* je: equal / zero */

loc_001562BD: ;
    edx = edx & 0x3F;
    eax = 0x40;
    eax = eax - edx;
    goto loc_001562CE;

loc_001562C9: ;
    edx = edx & 0x3F;
    eax = edx;

loc_001562CE: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001562E5; /* je: equal / zero */

loc_001562D2: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001562E5; /* je: equal / zero */

loc_001562D7: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_001562EE;

loc_001562E5: ;
    xmm2 = MEMF(eax * 4 + 0x743090); /* movss */

loc_001562EE: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x60); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x34); /* addss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x6499C8); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00156371; /* jbe: below or equal (unsigned <=) */

loc_00156346: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x58);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B717C), _icall_esp); /* indirect call */
    }

loc_00156366: ;
    xmm3 = MEMF(0x648D14); /* movss */
    esp = esp + 0x14;

loc_00156371: ;
    xmm0 = MEMF(esi + 0x6C); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    if ((xmm0 > xmm3)) goto loc_00156230; /* ja: above (unsigned >) */

loc_00156388: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0015638A: ;
    SET_LO8(eax, MEM8(esi + 0x59));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001563A4; /* je: equal / zero */

loc_00156391: ;
    edx = SX8(LO8(eax));
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B7184), _icall_esp); /* indirect call */
    }

loc_001563A1: ;
    esp = esp + 8;

loc_001563A4: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001563F8; /* je: equal / zero */

loc_001563AB: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x8493E8), _icall_esp); /* indirect call */
    }

loc_001563B6: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001563F8; /* jne: not equal / not zero */

loc_001563BD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001563F8; /* jne: not equal / not zero */

loc_001563C6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001563CD: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001563F8; /* jl: less (signed <) */

loc_001563D4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001563EC; /* je: equal / zero */

loc_001563E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001563E4: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001563EC: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001563F8: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00156400
 * Original: 0x00156400 - 0x001564C7 (199 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156400: ;
    eax = MEM32(0x75BB68);
    ecx = MEM32(eax + 4);
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x8472C4);
    PUSH32(esp, edi);
    edi = eax + 4;
    ebp = 0; /* xor self */
    if (CMP_NE(ecx, ebp)) goto loc_0015642A; /* jne: not equal / not zero */

loc_0015641E: ;
    eax = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00156427: ;
    esp = esp + 8;

loc_0015642A: ;
    edi = MEM32(edi);
    if (CMP_EQ(MEM32(esi + 0x3838), edi)) goto loc_0015643F; /* je: equal / zero */

loc_00156434: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00156439: ;
    MEM32(esi + 0x3838) = edi;

loc_0015643F: ;
    ebx = MEM32(esp + 0x40);
    eax = MEM32(ebx + 0x5B8);
    xmm5 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(ebx + 0x60); /* movss */
    xmm4 = MEMF(ebx + 0x60); /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edi = MEM32(ebx + ecx * 4 + 0x70);
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 + MEMF(ebx + 0x2C); /* addss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 + MEMF(ebx + 0x34); /* addss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x6499C8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(esp + 0x1C) = ebp;
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEM32(esp + 0x28) = edi;
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEM8(esp + 0x40) = 1;
    if ((xmm1 > xmm0)) goto loc_001564C2; /* ja: above (unsigned >) */

loc_001564BD: ;
    MEM8(esp + 0x40) = 0;

loc_001564C2: ;
    edi = edi + 8;
    g_seh_ebp = ebp; sub_001564E0(); return; /* tail jmp 0x001564E0 */

}

/**
 * sub_00156B40
 * Original: 0x00156B40 - 0x00156D22 (482 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156B40: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = 0x303;
    MEM32(esp + 0x40) = 0x2AF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156B5F: ;
    eax = eax & 0x80000007u;
    if (((int32_t)eax >= 0)) goto loc_00156B6B; /* jns: not sign (positive) */

loc_00156B66: ;
    eax--;
    eax = eax | 0xFFFFFFF8u;
    eax++;

loc_00156B6B: ;
    xmm5 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    eax = eax + 0xE;
    MEM16(esp + 0x14) = LO16(eax);
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM8(esp + 0x22) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156B95: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x78);
    MEM8(esp + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156BA9: ;
    edx = MEM32(esp + 0x98);
    eax = MEM32(edx);
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A468); /* addss */
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(esp + 0x5C) = ecx;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x60) = edx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156C0B: ;
    xmm0 = xmm0 * MEMF(0x58C048); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A464); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0x44) = 0xA;
    MEM16(esp + 0x46) = 0x19;
    MEM16(esp + 0x48) = LO16(ebx);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156C4F: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156C5B: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = esi | 0x207;
    MEM32(esp + 0x80) = esi;
    MEM8(esp + 0x88) = LO8(eax);
    MEM8(esp + 0x89) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156C85: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebp = MEM32(esp + 0x94);
    esi = edx;
    esi = esi - 0xF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156C9E: ;
    xmm1 = MEMF(ebp + 0x3C); /* movss */
    xmm1 = xmm1 * MEMF(0x64A460); /* mulss */
    SET_LO16(eax, ZX8(MEM8(esp + 0x9C)));
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ebp + 0x3C); /* movss */
    xmm1 = xmm1 * MEMF(0x64A45C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = esp + 0x7C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00156CDF: ;
    eax = 2;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    edx = esp + 0x20;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = 4;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00156D14: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00156D30
 * Original: 0x00156D30 - 0x00156D46 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156D30: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00156D50(); return; /* tail jmp 0x00156D50 */

}

/**
 * sub_00156EA0
 * Original: 0x00156EA0 - 0x001570F5 (597 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156EA0(void)
{
    float xmm0, xmm5, xmm6, xmm7;

loc_00156EA0: ;
    esp = esp - 0xD4;
    eax = MEM32(esp + 0xDC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEM32(esp + 0x74) = 0x29E8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156EEB: ;
    xmm6 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156F02: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156F11: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEM32(esp + 0x7C) = 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156F45: ;
    xmm0 = xmm0 * MEMF(0x64964C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    esi = MEM32(esp + 0xE4);
    xmm0 = xmm0 * MEMF(esi + 0x3C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156F74: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x5C;
    edx = edx - 0x2D;
    PUSH32(esp, edx);
    SET_LO16(edx, ZX8(MEM8(esp + 0xF4)));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00156F93: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156F98: ;
    xmm5 = MEMF(0x649298); /* movss */
    xmm6 = MEMF(0x649248); /* movss */
    xmm7 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156FC7: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00156FDE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x28;
    MEM32(esp + 0x84) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00156FF5: ;
    xmm0 = xmm0 * MEMF(0x64B08C); /* mulss */
    xmm0 = xmm0 - MEMF(0x649234); /* subss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015701C: ;
    xmm0 = xmm0 * MEMF(0x648EC0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A080); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    ebx = 0; /* xor self */
    MEM8(esp + 0x8C) = LO8(ebx);
    MEM32(esp + 0x90) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00157051: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    MEM32(esp + 0x9C) = 0x157100;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = 0x13E6E0;
    MEM32(esp + 0xB8) = 0x13E8F0;
    MEM8(esp + 0xC0) = 2;
    MEM32(esp + 0xC4) = ebx;
    MEM8(esp + 0xC8) = LO8(ebx);
    MEM16(esp + 0xCA) = 0x20;
    MEM16(esp + 0xCC) = 7;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x98) = LO8(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001570E8: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_00157100
 * Original: 0x00157100 - 0x001571B5 (181 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157100(void)
{
    float xmm0, xmm1, xmm2;

loc_00157100: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(eax + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x60); /* addss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x90); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x7C); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x64); /* addss */
    MEMF(eax + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x80); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x68); /* addss */
    MEMF(eax + 0x68) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x7C); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x88); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x8C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x7C) = xmm2; /* movss */
    MEMF(eax + 0x44) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001571C0
 * Original: 0x001571C0 - 0x00157567 (935 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001571C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001571C0: ;
    esp = esp - 0xE8;
    xmm0 = MEMF(edi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = MEM32(edi + 0x3C8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_EQ(eax, ebp)) goto loc_0015755F; /* je: equal / zero */

loc_00157203: ;
    eax = ZX8(MEM8(esp + 0xF0));
    eax = eax - ebp;
    if ((eax == 0)) goto loc_0015721B; /* je: equal / zero */

loc_0015720F: ;
    eax--;
    eax = edi;
    if ((eax != 0)) goto loc_0015721D; /* jne: not equal / not zero */

loc_00157214: ;
    PUSH32(esp, 0x5F4520);
    goto loc_00157222;

loc_0015721B: ;
    eax = edi;

loc_0015721D: ;
    PUSH32(esp, 0x5F4528);

loc_00157222: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00157227: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    esi = esp + 0x10;
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_00157236: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(edi + 0x294);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00112960(); /* call 0x00112960 */

loc_00157272: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    SET_LO8(ecx, MEM8(edi + 0x10B));
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F14); /* movss */
    esp = esp + 0x30;
    MEM32(esp + 0x8C) = 5;
    MEM32(esp + 0x84) = 0x29E8;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM8(esp + 0x90) = 0;
    MEM32(esp + 0x94) = ebp;
    MEM8(esp + 0x98) = 0xFF;
    MEM32(esp + 0x9C) = 0x13E180;
    MEM32(esp + 0xA0) = ebp;
    MEM32(esp + 0xA4) = ebp;
    MEM32(esp + 0xA8) = ebp;
    MEM32(esp + 0xAC) = ebp;
    MEM32(esp + 0xB0) = ebp;
    MEM32(esp + 0xB4) = 0x13E6E0;
    MEM32(esp + 0xB8) = 0x13E8F0;
    MEM8(esp + 0xC0) = 1;
    MEM32(esp + 0xC4) = edi;
    MEM8(esp + 0xC8) = LO8(ecx);
    MEM16(esp + 0xCA) = 0x10;
    MEM16(esp + 0xCC) = 0xF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00157360: ;
    eax = eax & 7;
    eax = eax + 5;
    if ((eax == 0)) goto loc_0015755E; /* je: equal / zero */

loc_0015736C: ;
    esi = eax;
    PUSH32(esp, ebx);
    /* nop */

loc_00157370: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00157375: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015737C: ;
    xmm5 = MEMF(0x648E40); /* movss */
    xmm6 = MEMF(0x648D80); /* movss */
    xmm7 = MEMF(esp + 0x10); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    xmm0 = xmm0 * xmm5; /* mulss */
    SET_LO8(ecx, LO8(eax));
    xmm0 = xmm0 + xmm6; /* addss */
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CFC); /* mulss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001573C1; /* je: equal / zero */

loc_001573B5: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_001573C6;

loc_001573C1: ;
    eax = eax & 0x3F;
    edx = eax;

loc_001573C6: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001573DD; /* je: equal / zero */

loc_001573CA: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001573DD; /* je: equal / zero */

loc_001573CF: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_001573E6;

loc_001573DD: ;
    xmm2 = MEMF(edx * 4 + 0x743090); /* movss */

loc_001573E6: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_001573FC; /* je: equal / zero */

loc_001573F0: ;
    ebx = ebx & 0x3F;
    eax = 0x40;
    eax = eax - ebx;
    goto loc_00157401;

loc_001573FC: ;
    ebx = ebx & 0x3F;
    eax = ebx;

loc_00157401: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00157418; /* je: equal / zero */

loc_00157405: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00157418; /* je: equal / zero */

loc_0015740A: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_00157421;

loc_00157418: ;
    xmm1 = MEMF(eax * 4 + 0x743090); /* movss */

loc_00157421: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00157426: ;
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    xmm4 = MEMF(edi + 0x294); /* movss */
    xmm4 = xmm4 + MEMF(0x648CE0); /* addss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    eax = eax & 0x1F;
    xmm4 = xmm1; /* movaps */
    eax = eax + 0xF;
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esp + 0x1C); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x8C) = eax;
    MEMF(esp + 0x5C) = xmm4; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00157494: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * MEMF(0x64B088); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001574BF: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001574D6: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001574E5: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001574F4: ;
    xmm5 = MEMF(0x648F08); /* movss */
    xmm6 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015751A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    edx = esp + 0x38;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, ebp);
    xmm6 = xmm6 - xmm0; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x9C) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00157543: ;
    esp = esp + 0x20;
    if (CMP_EQ(eax, ebp)) goto loc_00157556; /* je: equal / zero */

loc_0015754A: ;
    ecx = MEM32(edi + 0x294);
    MEM32(eax + 0x290) = ecx;

loc_00157556: ;
    esi--;
    if ((esi != 0)) goto loc_00157370; /* jne: not equal / not zero */

loc_0015755D: ;
    POP32(esp, ebx);

loc_0015755E: ;
    POP32(esp, esi);

loc_0015755F: ;
    POP32(esp, ebp);
    esp = esp + 0xE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00157570
 * Original: 0x00157570 - 0x0015758E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157570(void)
{

loc_00157570: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = eax + 0x40;
    ecx = eax + 0x3C;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_00157589: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157590
 * Original: 0x00157590 - 0x001575B0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157590: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001575E0(); /* call 0x001575E0 */

loc_0015759A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001575B0(); return; } /* jne: not equal / not zero */

loc_001575A3: ;
    eax = edi;
    edx = 1;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001575C0
 * Original: 0x001575C0 - 0x001575D5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001575C0(void)
{

loc_001575C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001575E0(); /* call 0x001575E0 */

loc_001575CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001575D0: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001575E0
 * Original: 0x001575E0 - 0x00157662 (130 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001575E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001575E0: ;
    SET_LO16(eax, MEM16(edi + 0x60));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00157661; /* je: equal / zero */

loc_001575EA: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001575F3: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    esi = SX16(LO16(eax));
    eax = MEM32(edi + 0x5C);
    esi = esi << 3;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(esi + eax);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00157650; /* jne: not equal / not zero */

loc_00157609: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_00157624; /* jle: less or equal (signed <=) */

loc_0015760D: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));

loc_00157615: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_0015761E; /* jne: not equal / not zero */

loc_00157619: ;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;

loc_0015761E: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00157615; /* jne: not equal / not zero */

loc_00157624: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_00157650; /* jl: less (signed <) */

loc_0015762B: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_00157646; /* je: equal / zero */

loc_00157638: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0015763B: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_00157650;

loc_00157646: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00157650: ;
    ecx = MEM32(edi + 0x5C);
    SET_LO16(eax, MEM16(ecx + esi + 4));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_001575F3; /* jne: not equal / not zero */

loc_0015765E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00157661: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157670
 * Original: 0x00157670 - 0x001576B0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    SET_LO8(ecx, MEM8(ebp + 0x18));
    SET_LO8(ebx, 2);
    (void)0; /* test LO8(ebx), LO8(ecx) - flags set for next jcc */
    eax = eax * 8 + 0x64;
    if (TEST_NZ(LO8(ebx), LO8(ecx))) goto loc_00157698; /* jne: not equal / not zero */

loc_0015768A: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_001576AB; /* je: equal / zero */

loc_00157691: ;
    edx = MEM32(ecx + 0x64);
    if (TEST_Z(edx, edx)) goto loc_001576AB; /* je: equal / zero */

loc_00157698: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001576A4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001576B0(); return; } /* jne: not equal / not zero */

loc_001576AB: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157C00
 * Original: 0x00157C00 - 0x00157C84 (132 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x170);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 0x60));
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00157C80; /* je: equal / zero */

loc_00157C1E: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00157C20: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00157C48; /* jne: not equal / not zero */

loc_00157C24: ;
    ebp = MEM32(edx + 0x5C);
    ecx = SX16(LO16(eax));
    ecx = ebp + ecx * 8;
    if (CMP_NE(MEM32(ecx), esi)) goto loc_00157C36; /* jne: not equal / not zero */

loc_00157C32: ;
    SET_LO8(ebx, 1);
    goto loc_00157C3E;

loc_00157C36: ;
    edi = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 4));

loc_00157C3E: ;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00157C20; /* jne: not equal / not zero */

loc_00157C44: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00157C7F; /* je: equal / zero */

loc_00157C48: ;
    esi = MEM32(edx + 0x5C);
    ecx = SX16(LO16(eax));
    ecx = ecx << 3;
    if (CMP_NE(LO16(eax), MEM16(edx + 0x60))) goto loc_00157C62; /* jne: not equal / not zero */

loc_00157C57: ;
    SET_LO16(esi, MEM16(esi + ecx + 4));
    MEM16(edx + 0x60) = LO16(esi);
    goto loc_00157C6F;

loc_00157C62: ;
    SET_LO16(ebx, MEM16(esi + ecx + 4));
    edi = SX16(LO16(edi));
    MEM16(esi + edi * 8 + 4) = LO16(ebx);

loc_00157C6F: ;
    SET_LO16(edi, MEM16(edx + 0x62));
    esi = MEM32(edx + 0x5C);
    MEM16(esi + ecx + 4) = LO16(edi);
    MEM16(edx + 0x62) = LO16(eax);

loc_00157C7F: ;
    POP32(esp, ebp);

loc_00157C80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157C90
 * Original: 0x00157C90 - 0x00157D5F (207 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157C90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    MEM32(edi + 0x10) = eax;
    eax = eax << 5;
    PUSH32(esp, eax);
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0); sub_0053C860(); /* call 0x0053C860 */

loc_00157CAB: ;
    ecx = MEM32(0x5499E8);
    esi = ecx;
    MEM32(edi + 0xC) = eax;
    edx = MEM32(esi + 4);
    ebp = eax;
    eax = MEM32(esi);
    if (CMP_B(eax, edx)) goto loc_00157CD6; /* jb: below (unsigned <) */

loc_00157CC1: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00157CD0: ;
    ecx = MEM32(0x5499E8);

loc_00157CD6: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00157D0C; /* je: equal / zero */

loc_00157CEC: ;
    (void)0; /* test MEM32(ebp), 0x780000 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM32(ebp), 0x780000)) goto loc_00157D00; /* je: equal / zero */

loc_00157CF8: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    goto loc_00157D07;

loc_00157D00: ;
    if (TEST_Z(eax, eax)) goto loc_00157D0C; /* je: equal / zero */

loc_00157D04: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);

loc_00157D07: ;
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_00157D0C: ;
    eax = MEM32(ebp + 4);
    eax = eax | 0x80000000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00157D90(); /* call 0x00157D90 */

loc_00157D1A: ;
    eax = MEM32(esp + 0x10);
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = eax + eax * 2;
    ecx = ecx << 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    MEM32(edi + 0x18) = ecx;
    eax = eax >> 0x1F;
    PUSH32(esp, 0x24800000);
    ecx = ecx + ecx + 0xC;
    eax = eax + edx;
    PUSH32(esp, ecx);
    MEM32(edi + 0x1C) = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00157D4A: ;
    if (TEST_NZ(eax, eax)) { sub_00157D5F(); return; } /* jne: not equal / not zero */

loc_00157D4E: ;
    MEM32(edi + 0x14) = eax;
    esi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_00157DF0(); /* call 0x00157DF0 */

loc_00157D59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157D90
 * Original: 0x00157D90 - 0x00157DEF (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157D90: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00157DE9; /* jle: less or equal (signed <=) */

loc_00157DA2: ;
    edx = MEM32(edi + 8);

loc_00157DA5: ;
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00157DE1; /* jle: less or equal (signed <=) */

loc_00157DAB: ;
    eax = esi;
    eax = eax << 5;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    eax = eax + ebp + 0x1C;
    goto loc_00157DC0;

    /* nop */

loc_00157DC0: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm2; /* divss */
    MEMF(eax + -4) = xmm1; /* movss */
    MEMF(eax) = xmm0; /* movss */
    edx = MEM32(edi + 8);
    esi++;
    eax = eax + 0x20;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_00157DC0; /* jl: less (signed <) */

loc_00157DE1: ;
    eax = MEM32(edi + 4);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00157DA5; /* jl: less (signed <) */

loc_00157DE9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157DF0
 * Original: 0x00157DF0 - 0x00157EC2 (210 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157DF0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx--;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 4) = ebx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00157EBF; /* jle: less or equal (signed <=) */

loc_00157E06: ;
    PUSH32(esp, ebp);

loc_00157E07: ;
    ebp = MEM32(edi + 8);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = 0; /* xor self */
    ebp--;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00157E6E; /* jle: less or equal (signed <=) */

loc_00157E16: ;
    eax++;
    ebp = 0; /* xor self */
    ebx = edx + ecx;
    MEM16(esi + eax * 2 + -2) = LO16(ebx);
    ebx = edx + ecx + 1;
    MEM16(esi + eax * 2) = LO16(ebx);
    SET_LO16(ebp, MEM16(edi + 8));
    SET_LO16(ebp, LO16(ebp) + LO16(edx));
    eax++;
    ebp = ebp + ecx;
    MEM16(esi + eax * 2) = LO16(ebp);
    MEM16(esi + eax * 2 + 2) = LO16(ebx);
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(edi + 8));
    eax++;
    SET_LO16(ebx, LO16(ebx) + LO16(edx));
    eax++;
    eax++;
    ebx = ebx + ecx + 1;
    MEM16(esi + eax * 2 + -2) = LO16(ebx);
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(edi + 8));
    SET_LO16(ebx, LO16(ebx) + LO16(edx));
    ebx = ebx + ecx;
    MEM16(esi + eax * 2) = LO16(ebx);
    ebx = MEM32(edi + 8);
    eax++;
    edx++;
    ebx--;
    if (CMP_L(edx, ebx)) goto loc_00157E16; /* jl: less (signed <) */

loc_00157E6A: ;
    ebx = MEM32(esp + 8);

loc_00157E6E: ;
    eax++;
    ebp = edx + ecx;
    MEM16(esi + eax * 2 + -2) = LO16(ebp);
    ebp = 0; /* xor self */
    MEM16(esi + eax * 2) = LO16(ecx);
    SET_LO16(ebp, MEM16(edi + 8));
    SET_LO16(ebp, LO16(ebp) + LO16(edx));
    eax++;
    ebp = ebp + ecx;
    MEM16(esi + eax * 2) = LO16(ebp);
    eax++;
    MEM16(esi + eax * 2) = LO16(ecx);
    SET_LO16(ebp, MEM16(edi + 8));
    SET_LO16(ebp, LO16(ebp) + LO16(ecx));
    eax++;
    MEM16(esi + eax * 2) = LO16(ebp);
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(edi + 8));
    SET_LO16(ebp, LO16(ebp) + LO16(edx));
    eax++;
    ebp = ebp + ecx;
    MEM16(esi + eax * 2) = LO16(ebp);
    edx = MEM32(edi + 4);
    eax++;
    ebx++;
    edx--;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (CMP_L(ebx, edx)) goto loc_00157E07; /* jl: less (signed <) */

loc_00157EBE: ;
    POP32(esp, ebp);

loc_00157EBF: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157ED0
 * Original: 0x00157ED0 - 0x001581E9 (793 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157ED0(void)
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

loc_00157ED0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA4);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = MEM32(edi + 0xC);
    if (CMP_B(eax, ecx)) goto loc_00157F04; /* jb: below (unsigned <) */

loc_00157EF5: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00157F04: ;
    xmm0 = MEMF(0x64B1C4); /* movss */
    MEM32(eax) = 0x41710;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    esi = MEM32(ebx + 4);
    xmm1 = (float)(int32_t)MEM32(edi + 8); /* cvtsi2ss */
    edx = ebp;
    eax = MEM32(edx);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    esi = esi | 0x80000000u;
    xmm0 = xmm0 / xmm1; /* divss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEM32(esp + 0x7C) = esi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x3C) = ecx;
    if (CMP_LE(eax, ecx)) goto loc_00158199; /* jle: less or equal (signed <=) */

loc_00157F6B: ;
    ecx = esp + 0x10;
    edx = ecx;
    MEM32(esp + 0x60) = edx;
    edx = esp + 0x40;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x80) = edx;
    goto loc_00157F90;

    /* nop */

loc_00157F90: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = ebp;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x3C);
    eax--;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x44) = edx;
    if (CMP_EQ(ecx, eax)) goto loc_0015806B; /* je: equal / zero */

loc_00157FD0: ;
    ebx = ebp + 0xC;
    edx = esp + 0x1C;
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = edx;
    ecx = MEM32(esp + 0x58);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x5C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 8);
    xmm0 = MEMF(edi); /* movss */
    MEM32(esp + 0x84) = eax;
    eax = esp + 0x84;
    MEM32(esp + 0x88) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ebx = esp + 0x9C;
    MEM32(esp + 0x94) = edx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000977A0(); /* call 0x000977A0 */

loc_0015804D: ;
    edx = MEM32(eax);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x38) = eax;

loc_0015806B: ;
    MEMF(esp + 0x28) = xmm0; /* movss */

loc_00158071: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    /* FPU: fcos  */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    /* FPU: fsin  */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x10) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x6C);
    MEM32(esp + 0x14) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x70);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x10;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001580DA: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x78);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x60);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x80);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x50);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x64); /* addss */
    xmm1 = MEMF(0x648D30); /* movss */
    esi = esi + 0x20;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(esp + 0x4C) = esi;
    MEMF(esp + 0x28) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00158071; /* ja: above (unsigned >) */

loc_0015817E: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(edi + 4);
    ecx++;
    ebp = ebp + 0xC;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x3C) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00157F90; /* jl: less (signed <) */

loc_00158195: ;
    esi = MEM32(esp + 0x7C);

loc_00158199: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00157D90(); /* call 0x00157D90 */

loc_0015819F: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0xA8);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00125000(); /* call 0x00125000 */

loc_001581C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_001581CF: ;
    esi = MEM32(edi + 0x20);
    esp = esp + 0x20;
    if (TEST_NZ(esi, esi)) { sub_001581E9(); return; } /* jne: not equal / not zero */

loc_001581D9: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001581E1: ;
    MEM32(0x771764) = esi;
    g_seh_ebp = ebp; sub_00158224(); return; /* tail jmp 0x00158224 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00158260
 * Original: 0x00158260 - 0x001585B8 (856 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158260: ;
    eax = MEM32(0x6B8B64);
    ecx = MEM32(0x771760);
    esp = esp - 0x14;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00158288; /* je: equal / zero */

loc_0015827C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00158282: ;
    MEM32(0x771760) = esi;

loc_00158288: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0xC);
    edx = edx + 0x100;
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001582A0: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = edx + 0xC0;
    ecx = 0x63;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001582B8: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001582D2; /* je: equal / zero */

loc_001582C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001582CC: ;
    MEM32(0x77182C) = esi;

loc_001582D2: ;
    eax = MEM32(0x771828);
    esi = 0x901;
    if (CMP_EQ(eax, esi)) goto loc_001582EC; /* je: equal / zero */

loc_001582E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001582E6: ;
    MEM32(0x771828) = esi;

loc_001582EC: ;
    eax = MEM32(0x771824);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0015830F; /* je: equal / zero */

loc_001582F7: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00158303: ;
    MEM32(0x549AE4) = ebx;
    MEM32(0x771824) = ebx;

loc_0015830F: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_0015832F; /* je: equal / zero */

loc_00158317: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00158323: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_0015832F: ;
    eax = MEM32(0x77181C);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_00158349; /* je: equal / zero */

loc_0015833D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00158343: ;
    MEM32(0x77181C) = edi;

loc_00158349: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_0015836F; /* je: equal / zero */

loc_00158357: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00158363: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_0015836F: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_0015838F; /* je: equal / zero */

loc_00158377: ;
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00158383: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_0015838F: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_001583AD; /* je: equal / zero */

loc_00158397: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_001583AD: ;
    xmm1 = MEMF(0x771CE4); /* movss */
    xmm0 = MEMF(0x771CE8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x14;
    ecx = 0x8B;
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00158409: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0015847C; /* jnp: not parity */

loc_00158412: ;
    edx = MEM32(0x5499F0);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x10);
    esi = 0x2000;
    edx = edx | esi;
    MEM32(0x5499F0) = edx;
    edx = MEM32(0x771CE0);
    edx = edx | 0xFFFFFF00u;
    MEM32(0x549B70) = eax;
    eax = MEM32(0x771CDC);
    edx = edx << 8;
    MEM32(0x549B74) = ecx;
    ecx = MEM32(0x771CD8);
    eax = eax & 0xFF;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx & 0xFF;
    edx = edx | ecx;
    PUSH32(esp, edx);
    MEM32(0x549B68) = edi;
    PUSH32(esp, 0); sub_00537010(); /* call 0x00537010 */

loc_00158470: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x549B6C) = ebx;

loc_0015847C: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_00158491; /* je: equal / zero */

loc_00158484: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0015848B: ;
    MEM32(0x77175C) = ebx;

loc_00158491: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00158499: ;
    esi = MEM32(0x5499F0);
    edx = MEM32(0x7717E4);
    esi = esi | edi;
    eax = 6;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(0x547358) = ebx;
    MEM32(0x547330) = edi;
    MEM32(0x5499F0) = esi;
    MEM32(0x547334) = edi;
    ecx = 0x800;
    if (CMP_EQ(edx, eax)) goto loc_001584E1; /* je: equal / zero */

loc_001584CD: ;
    edx = esi;
    edx = edx | ecx;
    MEM32(0x5499F0) = edx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001584E1: ;
    if (CMP_EQ(MEM32(0x7717C4), ebx)) goto loc_001584FB; /* je: equal / zero */

loc_001584E9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_001584FB: ;
    edx = MEM32(0x7717B4);
    eax = 2;
    if (CMP_EQ(edx, eax)) goto loc_0015851A; /* je: equal / zero */

loc_0015850A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54736C) = eax;
    MEM32(0x7717B4) = eax;

loc_0015851A: ;
    if (CMP_EQ(MEM32(0x7717E8), edi)) goto loc_00158534; /* je: equal / zero */

loc_00158522: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_00158534: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_0015854E; /* je: equal / zero */

loc_0015853C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_0015854E: ;
    PUSH32(esp, 0x77180C);
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_0015855D: ;
    PUSH32(esp, 0x771808);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_00158569: ;
    ecx = MEM32(0x5499F0);
    esp = esp + 8;
    ecx = ecx | 0x400;
    MEM32(0x547384) = ebx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    MEM32(0x5499F0) = ecx;
    PUSH32(esp, 0); sub_00539B40(); /* call 0x00539B40 */

loc_0015858E: ;
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_0015859B: ;
    edx = MEM32(0x54A898);
    PUSH32(esp, edx);
    eax = ebp + ebp * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0053AA00(); /* call 0x0053AA00 */

loc_001585AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001585C0
 * Original: 0x001585C0 - 0x00158652 (146 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001585C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001585C0: ;
    if (TEST_Z(esi, esi)) goto loc_0015864F; /* je: equal / zero */

loc_001585C8: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    eax = eax + 0x48;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001585DB: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_0015864F; /* je: equal / zero */

loc_001585E4: ;
    eax = ZX8(MEM8(esi + 0x10B));
    eax--;
    if ((eax != 0)) goto loc_00158621; /* jne: not equal / not zero */

loc_001585EE: ;
    xmm0 = MEMF(esp + 4); /* movss */
    eax = 1;
    MEM8(edx + 0x34) = LO8(eax);
    MEM32(edx + 0x38) = esi;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    MEM8(edx + 0x3C) = LO8(ecx);
    ecx = ZX16(MEM16(esi + 0x60));
    MEM32(edx + 0x2C) = eax;
    MEM32(edx + 0x40) = ecx;
    MEMF(edx + 0x44) = xmm0; /* movss */
    MEM32(edx + 0x30) = 0;
    eax = edx;
    esp += 4; return; /* ret */

loc_00158621: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015864F; /* jne: not equal / not zero */

loc_0015862A: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015862F: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_00158647; /* je: equal / zero */

loc_0015863F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00158641: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00158647: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0015864C: ;
    esp = esp + 4;

loc_0015864F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00158660
 * Original: 0x00158660 - 0x00158680 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158660: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0x568);
    ecx = MEM32(edx + 0xDC);
    if (TEST_Z(ecx, ecx)) { sub_00158680(); return; } /* je: equal / zero */

loc_00158677: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001596B0(); return; /* tail jmp 0x001596B0 */

}

/**
 * sub_00158690
 * Original: 0x00158690 - 0x001586AE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158690(void)
{

loc_00158690: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = eax + 0x3C;
    ecx = eax + 0x38;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_001586A9: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001586B0
 * Original: 0x001586B0 - 0x001586ED (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001586B0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FA1F8);
    eax = eax + 0xA4;
    (void)0; /* cmp ebp, 0x2C - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(ebp, 0x2C)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFF);
    ecx--;
    ecx = ecx & 0x2F;
    ecx = ecx + 0x37;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001586DA: ;
    ebp = eax;
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(ebp, ebx)) { sub_001586ED(); return; } /* jne: not equal / not zero */

loc_001586E5: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00158C10
 * Original: 0x00158C10 - 0x00159253 (1603 bytes, 417 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158C10(void)
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

loc_00158C10: ;
    esp = esp - 0x238;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x248);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x72));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm5; /* movss */
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00158C4A; /* je: equal / zero */

loc_00158C35: ;
    eax = eax - MEM32(0x7FA20C);
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(esi + 0x72) = LO16(eax);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00158C4A; /* jge: greater or equal (signed >=) */

loc_00158C44: ;
    MEM16(esi + 0x72) = 0;

loc_00158C4A: ;
    edi = ZX8(MEM8(esi + 0x60));
    edx = MEM32(esi + 0x64);
    xmm6 = MEMF(0x648D10); /* movss */
    edi--;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(edx, edx)) goto loc_00158D8D; /* je: equal / zero */

loc_00158C66: ;
    eax = MEM32(edx + 0x568);
    ecx = ZX8(MEM8(eax + 0xEE));
    xmm1 = MEMF(eax + 0xE8); /* movss */
    eax = ZX8(MEM8(eax + 0xEC));
    xmm1 = xmm1 * MEMF(0x64958C); /* mulss */
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(edx + 0x171));
    edi = ecx + ecx * 2;
    ecx = MEM32(esi + 0x54);
    edi = edi << 3;
    ebp = edi + ecx + 0xC;
    ebx = ebx + eax;
    ebx = ebx & 0xFF;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_00158CAE: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    MEMF(ebp) = xmm0; /* movss */
    edx = MEM32(esi + 0x54);
    SET_LO8(eax, LO8(ebx));
    ebp = edi + edx + 0x14;
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_00158CCE: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp) = xmm1; /* movss */
    eax = MEM32(esi + 0x64);
    xmm1 = MEMF(eax + 0x110); /* movss */
    ebx = ZX8(MEM8(eax + 0x171));
    eax = MEM32(esi + 0x54);
    xmm1 = xmm1 * MEMF(0x649C4C); /* mulss */
    ebp = edi + eax + 0xC;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_00158D0C: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    MEMF(ebp) = xmm0; /* movss */
    ecx = MEM32(esi + 0x54);
    SET_LO8(eax, LO8(ebx));
    ebp = edi + ecx + 0x14;
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_00158D2C: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp) = xmm1; /* movss */
    edx = MEM32(esi + 0x54);
    xmm0 = MEMF(edi + edx + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    edi = edi + edx + 0x10;
    MEMF(edi) = xmm0; /* movss */
    eax = MEM32(esi + 0x64);
    ecx = MEM32(eax + 0x568);
    eax = ZX8(MEM8(ecx + 0xED));
    eax--;
    if (CMP_G(eax & eax, 0)) goto loc_00158D7A; /* jg: greater (signed >) */

loc_00158D70: ;
    MEMF(ecx + 0xE8) = xmm5; /* movss */
    eax = 0; /* xor self */

loc_00158D7A: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx + 0x568);
    edi = MEM32(esp + 0x18);
    MEM8(edx + 0xED) = LO8(eax);

loc_00158D8D: ;
    xmm0 = MEMF(esi + 0x6C); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00158E38; /* jnp: not parity */

loc_00158D9F: ;
    eax = ZX8(MEM8(esi + 0x71));
    ecx = MEM32(esi + 0x54);
    eax = eax + eax * 2;
    ebx = ecx + eax * 8 + 0xC;
    SET_LO8(eax, MEM8(esi + 0x70));
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_00158DB5: ;
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    xmm1 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx) = xmm1; /* movss */
    eax = ZX8(MEM8(esi + 0x71));
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x54);
    ebx = eax + edx * 8 + 0x14;
    SET_LO8(eax, MEM8(esi + 0x70));
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_00158DE0: ;
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 / MEMF(0x7FA21C); /* divss */
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, ecx);
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCD0);
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_00158E27: ;
    xmm7 = xmm7 - xmm0; /* subss */
    xmm7 = xmm7 * MEMF(esi + 0x6C); /* mulss */
    esp = esp + 8;
    MEMF(esi + 0x6C) = xmm7; /* movss */

loc_00158E38: ;
    edx = edi + 1;
    if (CMP_LE(edx & edx, 0)) goto loc_00158E67; /* jle: less or equal (signed <=) */

loc_00158E3F: ;
    ecx = MEM32(esi + 0x54);
    eax = esp + 0x68;

loc_00158E46: ;
    edi = ecx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(ebx + 4) = ebp;
    eax = eax + 0xC;
    ecx = ecx + 0x18;
    edx--;
    MEM32(ebx + 8) = edi;
    if ((edx != 0)) goto loc_00158E46; /* jne: not equal / not zero */

loc_00158E63: ;
    edi = MEM32(esp + 0x18);

loc_00158E67: ;
    ebx = edi + -1;
    if (TEST_S(ebx, ebx)) goto loc_00159248; /* jl: less (signed <) */

loc_00158E72: ;
    xmm4 = MEMF(0x649B10); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm7 = MEMF(0x64AAD0); /* movss */
    edi = ebx + ebx * 2;
    ebp = ebx + ebx * 2;
    edi = edi << 3;
    ecx = ebx + ebx * 2;
    ebp = esp + ebp * 4 + 0x74;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x30) = ebp;
    goto loc_00158EB0;

loc_00158EA4: ;
    edi = MEM32(esp + 0x18);
    goto loc_00158EB0;

    /* nop */

loc_00158EB0: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(edx + edi + 0xC);
    edx = edx + edi;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(edx + 0x10);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(edx + 0x14);
    MEM32(esp + 0x40) = eax;
    ecx = ebp;
    MEM32(esp + 0x58) = edx;
    eax = 0; /* xor self */
    goto loc_00158EE0;

    /* nop */
    /* nop */

loc_00158EE0: ;
    xmm0 = MEMF(ecx + -12); /* movss */
    MEMF(esp + eax + 0x1C) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    MEMF(esp + eax + 0x44) = xmm0; /* movss */
    eax = eax + 4;
    ecx = ecx + 4;
    if (CMP_L(eax, 0xC)) goto loc_00158EE0; /* jl: less (signed <) */

loc_00158F00: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm3 = MEMF(esp + 0x24); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm3 = xmm3 - MEMF(ebp + 8); /* subss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 - MEMF(ebp); /* subss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm3; /* movaps */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = xmm0 * xmm3; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00158F73; /* jp: parity */

loc_00158F65: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00158F73: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64964C); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if ((xmm0 < xmm5)) goto loc_00158FCF; /* jb: below (unsigned <) */

loc_00158FBD: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    goto loc_00158FD2;

loc_00158FCF: ;
    xmm1 = xmm5; /* movaps */

loc_00158FD2: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0x30);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    eax = 0; /* xor self */
    /* nop */

loc_00159020: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(esp + eax * 4 + 0x38); /* movss */
    xmm1 = MEMF(esp + eax * 4 + 0x44); /* movss */
    xmm1 = xmm1 * MEMF(0x64AACC); /* mulss */
    xmm0 = xmm0 * MEMF(0x649728); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + eax * 4 + 0x38) = xmm1; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_0015907C; /* je: equal / zero */

loc_0015904A: ;
    edx = MEM32(esp + 0x28);
    edx = edx + eax;
    xmm0 = MEMF(esp + edx * 4 + 0x5C); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    edx = MEM32(esp + 0x58);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(esp + eax * 4 + 0x1C); /* subss */
    MEMF(esp + eax * 4 + 0x5C) = xmm0; /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + eax * 4 + 0x38) = xmm0; /* movss */

loc_0015907C: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x39 - flags set for next jcc */
    xmm0 = MEMF(esp + eax * 4 + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(esp + eax * 4 + 0x1C); /* addss */
    MEMF(esp + eax * 4 + 0x1C) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x7FA1F8), 0x39)) goto loc_001590B0; /* jne: not equal / not zero */

loc_00159097: ;
    xmm0 = MEMF(0x648FAC); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001590B0; /* jbe: below or equal (unsigned <=) */

loc_001590AA: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001590B0: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 3)) goto loc_00159020; /* jl: less (signed <) */

loc_001590BD: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0015911F; /* jnp: not parity */

loc_00159112: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x10); /* divss */
    goto loc_00159127;

loc_0015911F: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00159127: ;
    eax = edi;
    edx = 0; /* xor self */
    edi = ebp + -12;
    edi = edi;

loc_00159130: ;
    ecx = MEM32(esi + 0x54);
    xmm1 = MEMF(esp + edx * 4 + 0x1C); /* movss */
    xmm1 = xmm1 - MEMF(ecx + eax + 0x18); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + eax + 0x18); /* addss */
    MEMF(ecx + eax) = xmm1; /* movss */
    ecx = MEM32(esi + 0x54);
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm1 = xmm1 - MEMF(edi); /* subss */
    MEMF(ecx + eax + 0xC) = xmm1; /* movss */
    edx++;
    eax = eax + 4;
    edi = edi + 4;
    if (CMP_L(edx, 3)) goto loc_00159130; /* jl: less (signed <) */

loc_0015916C: ;
    eax = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    ebx--;
    eax = eax - 3;
    edi = edi - 0xC;
    edx = edx - 0x18;
    ebp = ebp - 0xC;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_00158EA4; /* jge: greater or equal (signed >=) */

loc_00159199: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x648EB8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB8))) goto loc_00159248; /* jbe: below or equal (unsigned <=) */

loc_001591B0: ;
    eax = MEM32(esi + 0x74);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = MEM32(0x847024);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001591CE; /* je: equal / zero */

loc_001591BE: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_001591CA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00159248; /* jne: not equal / not zero */

loc_001591CE: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001591F7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx + 0x507;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x78) = ecx;
    eax = MEM32(edi + 0x40);
    if (TEST_NZ(ecx, ecx)) goto loc_0015921F; /* jne: not equal / not zero */

loc_0015920F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

loc_0015921F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00159245: ;
    MEM32(esi + 0x74) = eax;

loc_00159248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00159260
 * Original: 0x00159260 - 0x00159393 (307 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159260: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = MEM32(eax + ecx + 4);
    SET_LO8(eax, MEM8(edx + 0x8CA));
    esp = esp - 0x300;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x308);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00159298; /* je: equal / zero */

loc_0015928D: ;
    eax = MEM32(ebx + 0x64);
    if (TEST_NZ(eax, eax)) goto loc_0015938B; /* jne: not equal / not zero */

loc_00159298: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x60));
    esi = 0; /* xor self */
    if (CMP_L(edi, 4)) goto loc_00159332; /* jl: less (signed <) */

loc_001592A9: ;
    eax = MEM32(ebx + 0x54);
    edx = edi + -4;
    edx = edx >> 2;
    eax = eax + 4;
    edx++;
    ecx = esp + 0x14;
    esi = edx * 4;
    PUSH32(esp, ebp);

loc_001592C2: ;
    ebp = MEM32(eax + -4);
    xmm0 = MEMF(eax + 4); /* movss */
    xmm1 = MEMF(eax); /* movss */
    MEM32(ecx + -8) = ebp;
    MEMF(ecx + -4) = xmm1; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    ebp = MEM32(eax + 0x14);
    xmm0 = MEMF(eax + 0x1C); /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    MEM32(ecx + 4) = ebp;
    MEMF(ecx + 8) = xmm1; /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    ebp = MEM32(eax + 0x2C);
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    MEM32(ecx + 0x10) = ebp;
    MEMF(ecx + 0x14) = xmm1; /* movss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    ebp = MEM32(eax + 0x44);
    xmm0 = MEMF(eax + 0x4C); /* movss */
    xmm1 = MEMF(eax + 0x48); /* movss */
    MEM32(ecx + 0x1C) = ebp;
    MEMF(ecx + 0x20) = xmm1; /* movss */
    MEMF(ecx + 0x24) = xmm0; /* movss */
    eax = eax + 0x60;
    ecx = ecx + 0x30;
    edx--;
    if ((edx != 0)) goto loc_001592C2; /* jne: not equal / not zero */

loc_00159331: ;
    POP32(esp, ebp);

loc_00159332: ;
    if (CMP_GE(esi, edi)) goto loc_00159371; /* jge: greater or equal (signed >=) */

loc_00159336: ;
    ecx = MEM32(ebx + 0x54);
    eax = esi + esi * 2;
    ecx = ecx + eax * 8;
    eax = esi + esi * 2;
    eax = esp + eax * 4 + 0x14;
    edi = edi - esi;
    goto loc_00159350;

    /* nop */

loc_00159350: ;
    edx = MEM32(ecx);
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    MEM32(eax + -8) = edx;
    MEMF(eax + -4) = xmm1; /* movss */
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 0xC;
    ecx = ecx + 0x18;
    edi--;
    if ((edi != 0)) goto loc_00159350; /* jne: not equal / not zero */

loc_00159371: ;
    ecx = MEM32(esp + 0x314);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx + 0x80;
    PUSH32(esp, 0); sub_00157ED0(); /* call 0x00157ED0 */

loc_00159389: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0015938B: ;
    POP32(esp, ebx);
    esp = esp + 0x300;
    esp += 4; return; /* ret */

}

/**
 * sub_001593A0
 * Original: 0x001593A0 - 0x001593EF (79 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001593A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001593A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x94);
    if (TEST_Z(eax, eax)) goto loc_001593BF; /* je: equal / zero */

loc_001593AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001593B5: ;
    MEM32(esi + 0x94) = 0;

loc_001593BF: ;
    eax = MEM32(esi + 0x8C);
    if (TEST_Z(eax, eax)) goto loc_001593D9; /* je: equal / zero */

loc_001593C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001593CF: ;
    MEM32(esi + 0x8C) = 0;

loc_001593D9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001593EF(); return; } /* jne: not equal / not zero */

loc_001593E2: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00159400
 * Original: 0x00159400 - 0x00159444 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00159400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x94);
    if (TEST_Z(eax, eax)) goto loc_0015941F; /* je: equal / zero */

loc_0015940F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00159415: ;
    MEM32(esi + 0x94) = 0;

loc_0015941F: ;
    eax = MEM32(esi + 0x8C);
    if (TEST_Z(eax, eax)) goto loc_00159439; /* je: equal / zero */

loc_00159429: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015942F: ;
    MEM32(esi + 0x8C) = 0;

loc_00159439: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0015943F: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00159450
 * Original: 0x00159450 - 0x00159462 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00159450: ;
    PUSH32(esp, edi);
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_00159860(); /* call 0x00159860 */

loc_00159458: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) { sub_00159462(); return; } /* jne: not equal / not zero */

loc_0015945E: ;
    edi = edi;

loc_00159460: ;
    goto loc_00159460;

}

/**
 * sub_00159540
 * Original: 0x00159540 - 0x0015959D (93 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159540(void)
{
    float xmm0;

loc_00159540: ;
    ecx = MEM32(eax + 0x568);
    xmm0 = MEMF(eax + 0x110); /* movss */
    ecx = MEM32(ecx + 0xDC);
    xmm0 = xmm0 * MEMF(0x649144); /* mulss */
    MEMF(ecx + 0x6C) = xmm0; /* movss */
    SET_LO8(edx, MEM8(eax + 0x171));
    MEM8(ecx + 0x70) = LO8(edx);
    edx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(edx + 0xEE));
    MEM8(ecx + 0x71) = LO8(edx);
    edx = 0; /* xor self */
    MEM16(ecx + 0x72) = 0x14;
    MEM32(ecx + 0x64) = edx;
    ecx = MEM32(eax + 0x568);
    MEM8(ecx + 0xDA) = LO8(edx);
    eax = MEM32(eax + 0x568);
    MEM32(eax + 0xDC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001595A0
 * Original: 0x001595A0 - 0x00159638 (152 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001595A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001595A0: ;
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(edi + 0x60));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = ebx + -1;
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_L(edx, 4)) goto loc_001595F4; /* jl: less (signed <) */

loc_001595B5: ;
    eax = MEM32(edi + 0x54);
    eax = eax + 0x1C;
    goto loc_001595C0;

    /* nop */

loc_001595C0: ;
    xmm1 = MEMF(eax + -24); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_00159620; /* jae: above or equal (unsigned >=) */

loc_001595CA: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_00159615; /* jae: above or equal (unsigned >=) */

loc_001595D3: ;
    xmm1 = MEMF(eax + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_00159618; /* jae: above or equal (unsigned >=) */

loc_001595DD: ;
    xmm1 = MEMF(eax + 0x30); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_0015961D; /* jae: above or equal (unsigned >=) */

loc_001595E7: ;
    ecx = ecx + 4;
    esi = edx + -3;
    eax = eax + 0x60;
    if (CMP_L(ecx, esi)) goto loc_001595C0; /* jl: less (signed <) */

loc_001595F4: ;
    if (CMP_GE(ecx, edx)) goto loc_00159620; /* jge: greater or equal (signed >=) */

loc_001595F8: ;
    esi = MEM32(edi + 0x54);
    eax = ecx + ecx * 2;
    eax = esi + eax * 8 + 4;

loc_00159602: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_00159620; /* jae: above or equal (unsigned >=) */

loc_0015960B: ;
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edx)) goto loc_00159602; /* jl: less (signed <) */

loc_00159613: ;
    goto loc_00159620;

loc_00159615: ;
    ecx++;
    goto loc_00159620;

loc_00159618: ;
    ecx = ecx + 2;
    goto loc_00159620;

loc_0015961D: ;
    ecx = ecx + 3;

loc_00159620: ;
    eax = ebx + -2;
    if (CMP_L(ecx, eax)) { sub_00159638(); return; } /* jl: less (signed <) */

loc_00159627: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, esi);
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001596B0
 * Original: 0x001596B0 - 0x001596EE (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001596B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001596B0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    SET_LO8(ecx, MEM8(esi + 0x175));
    ebx = MEM32(esi + 0x568);
    SET_LO8(ecx, LO8(ecx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xDC);
    if (TEST_Z(LO8(eax), 0x40)) { sub_001596EE(); return; } /* je: equal / zero */

loc_001596E2: ;
    eax = eax & 0x3F;
    ebp = 0x40;
    ebp = ebp - eax;
    g_seh_ebp = ebp; sub_001596F3(); return; /* tail jmp 0x001596F3 */

}

/**
 * sub_00159860
 * Original: 0x00159860 - 0x0015988D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00159860: ;
    SET_LO8(ecx, 0); /* xor self */

loc_00159862: ;
    eax = ZX8(LO8(ecx));
    eax = MEM32(eax * 4 + 0x597D70);
    eax = MEM32(eax * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_00159883; /* je: equal / zero */

loc_00159877: ;
    if (CMP_EQ(MEM8(eax + 0x2C), LO8(edx))) goto loc_0015988C; /* je: equal / zero */

loc_0015987C: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00159877; /* jne: not equal / not zero */

loc_00159883: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_B(LO8(ecx), 2)) goto loc_00159862; /* jb: below (unsigned <) */

loc_0015988A: ;
    eax = 0; /* xor self */

loc_0015988C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00159890
 * Original: 0x00159890 - 0x001598D9 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00159890: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_001598B1; /* jne: not equal / not zero */

loc_00159899: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x64);
    if (CMP_NE(ecx, MEM32(edx))) goto loc_001598D7; /* jne: not equal / not zero */

loc_001598A8: ;
    MEM32(eax + 0x64) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001598B1: ;
    if (CMP_NE(eax, 0x2D)) goto loc_001598D7; /* jne: not equal / not zero */

loc_001598B6: ;
    esi = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x64);
    ecx = MEM32(edx);
    if (CMP_NE(eax, ecx)) goto loc_001598CF; /* jne: not equal / not zero */

loc_001598C7: ;
    eax = MEM32(edx + 4);
    MEM32(esi + 0x64) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001598CF: ;
    if (CMP_NE(eax, MEM32(edx + 4))) goto loc_001598D7; /* jne: not equal / not zero */

loc_001598D4: ;
    MEM32(esi + 0x64) = ecx;

loc_001598D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001598E0
 * Original: 0x001598E0 - 0x00159DE8 (1288 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001598E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001598E0: ;
    esp = esp - 0x114;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x11C);
    xmm0 = MEMF(esi + 0x290); /* movss */
    /* comiss xmm0, MEMF(esi + 0x64) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x64))) { sub_00159DE8(); return; } /* jbe: below or equal (unsigned <=) */

loc_00159900: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    eax = MEM32(esi + 0x9C);
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADCC); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x60); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x290); /* movss */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0xBC) = 0x32;
    MEMF(esp + 0xB0) = xmm6; /* movss */
    MEM32(esp + 0xB8) = 0x9E8;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM8(esp + 0xC4) = 0;
    MEM32(esp + 0xC8) = ebp;
    MEM8(esp + 0xCC) = 0xFF;
    MEM32(esp + 0xD0) = 0x13E180;
    MEM32(esp + 0xD8) = ebp;
    MEM32(esp + 0xDC) = ebp;
    MEM32(esp + 0xE0) = ebp;
    MEM32(esp + 0xE4) = ebp;
    MEM32(esp + 0xE8) = 0x13E6E0;
    MEM32(esp + 0xEC) = 0x13E8F0;
    MEM8(esp + 0xF4) = 2;
    MEM32(esp + 0xF8) = ebp;
    MEM8(esp + 0xFC) = 0;
    MEM16(esp + 0xFE) = 1;
    MEM16(esp + 0x100) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00159A1B: ;
    eax = eax & 3;
    eax = eax + 4;
    if (CMP_LE(LO16(eax), LO16(ebp))) goto loc_00159C92; /* jle: less or equal (signed <=) */

loc_00159A2A: ;
    ecx = ZX16(LO16(eax));
    MEM32(esp + 0x14) = ecx;
    goto loc_00159A36;

loc_00159A33: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_00159A36: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159A3B: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x2C); /* mulss */
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */
    xmm5 = xmm5 + MEMF(0x64909C); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00159A58: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00159A5F: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 0x1F);
    SET_LO8(eax, 0xE0);
    SET_LO8(eax, LO8(eax) - LO8(edx));
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159A71: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00159A9C; /* je: equal / zero */

loc_00159A90: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_00159AA1;

loc_00159A9C: ;
    eax = eax & 0x3F;
    edx = eax;

loc_00159AA1: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00159AB8; /* je: equal / zero */

loc_00159AA5: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00159AB8; /* je: equal / zero */

loc_00159AAA: ;
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_00159AC1;

loc_00159AB8: ;
    xmm4 = MEMF(edx * 4 + 0x743090); /* movss */

loc_00159AC1: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00159AD7; /* je: equal / zero */

loc_00159ACB: ;
    ebx = ebx & 0x3F;
    eax = 0x40;
    eax = eax - ebx;
    goto loc_00159ADC;

loc_00159AD7: ;
    ebx = ebx & 0x3F;
    eax = ebx;

loc_00159ADC: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00159AF3; /* je: equal / zero */

loc_00159AE0: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00159AF3; /* je: equal / zero */

loc_00159AE5: ;
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_00159AFC;

loc_00159AF3: ;
    xmm3 = MEMF(eax * 4 + 0x743090); /* movss */

loc_00159AFC: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00159B1B; /* je: equal / zero */

loc_00159B0F: ;
    eax = eax & 0x3F;
    edi = 0x40;
    edi = edi - eax;
    goto loc_00159B20;

loc_00159B1B: ;
    eax = eax & 0x3F;
    edi = eax;

loc_00159B20: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00159B37; /* je: equal / zero */

loc_00159B24: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00159B37; /* je: equal / zero */

loc_00159B29: ;
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(edi * 4 + 0x743090); /* subss */
    goto loc_00159B40;

loc_00159B37: ;
    xmm2 = MEMF(edi * 4 + 0x743090); /* movss */

loc_00159B40: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_00159B56; /* je: equal / zero */

loc_00159B4A: ;
    ecx = ecx & 0x3F;
    eax = 0x40;
    eax = eax - ecx;
    goto loc_00159B5B;

loc_00159B56: ;
    ecx = ecx & 0x3F;
    eax = ecx;

loc_00159B5B: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00159B72; /* je: equal / zero */

loc_00159B5F: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00159B72; /* je: equal / zero */

loc_00159B64: ;
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_00159B7B;

loc_00159B72: ;
    xmm1 = MEMF(eax * 4 + 0x743090); /* movss */

loc_00159B7B: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x9C) = xmm7; /* movss */
    MEMF(esp + 0xA0) = xmm6; /* movss */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159BC8: ;
    xmm6 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159BDF: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159BEE: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159BFD: ;
    xmm6 = MEMF(0x648F08); /* movss */
    xmm7 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159C26: ;
    /* comiss xmm5, MEMF(0x648E14) - sets EFLAGS */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    MEMF(esp + 0xAC) = xmm7; /* movss */
    MEM32(esp + 0xD4) = 0x1598E0;
    if ((xmm5 > MEMF(0x648E14))) goto loc_00159C56; /* ja: above (unsigned >) */

loc_00159C4B: ;
    MEM32(esp + 0xD4) = 0x159E20;

loc_00159C56: ;
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebp);
    MEM8(esp + 0x1C) = LO8(eax);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    edx = esp + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00159C75: ;
    esp = esp + 0x20;
    if (CMP_EQ(eax, ebp)) goto loc_00159C88; /* je: equal / zero */

loc_00159C7C: ;
    ecx = MEM32(esi + 0x290);
    MEM32(eax + 0x290) = ecx;

loc_00159C88: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_00159A33; /* jne: not equal / not zero */

loc_00159C92: ;
    eax = MEM32(esi + 0x9C);
    eax = eax - 4;
    if ((eax == 0)) goto loc_00159CA1; /* je: equal / zero */

loc_00159C9D: ;
    ebx = 0; /* xor self */
    goto loc_00159CA6;

loc_00159CA1: ;
    ebx = 1;

loc_00159CA6: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x290); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x32) = LO16(eax);
    MEM16(esp + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00159CEA: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    xmm0 = xmm0 * MEMF(esi + 0x2C); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x36) = LO16(eax);
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(ebp);
    MEM16(esp + 0x3C) = LO16(ebp);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00159D1C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = ZX8(LO8(ebx));
    MEM16(esp + 0x40) = LO16(ebp);
    MEM16(esp + 0x42) = 0x258;
    edi = edi << 2;
    edx = edx + 0x12C;
    MEM16(esp + 0x3E) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00159D46: ;
    eax = eax & 3;
    eax = eax + edi;
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B42B0));
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x6B42B1));
    MEM8(esp + 0x44) = LO8(edx);
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B42B2));
    MEM8(esp + 0x45) = LO8(ecx);
    MEM8(esp + 0x46) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00159D71: ;
    xmm0 = MEMF(esi + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x64A658); /* mulss */
    eax = eax & 3;
    eax = eax + edi;
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x6B42B0));
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x6B42B1));
    SET_LO8(eax, MEM8(eax + eax * 2 + 0x6B42B2));
    POP32(esp, edi);
    MEM8(esp + 0x45) = LO8(eax);
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(0x648EEC) - sets EFLAGS */
    POP32(esp, ebp);
    MEM8(esp + 0x3F) = LO8(ecx);
    MEM8(esp + 0x40) = LO8(edx);
    MEM8(esp + 0x42) = 0xFF;
    POP32(esp, ebx);
    MEM8(esp + 0x3F) = 0xFF;
    if ((xmm0 > MEMF(0x648EEC))) goto loc_00159DC6; /* ja: above (unsigned >) */

loc_00159DC2: ;
    MEM8(esp + 0x3F) = LO8(eax);

loc_00159DC6: ;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    MEM8(esp + 0x44) = 0xA;
    MEM8(esp + 0x45) = 0;
    PUSH32(esp, 0); sub_0014F2B0(); /* call 0x0014F2B0 */

loc_00159DDB: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00159E00
 * Original: 0x00159E00 - 0x00159E15 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159E00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00159E00: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x290); /* movss */
    /* comiss xmm0, MEMF(eax + 0x64) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x64))) { sub_00159E15(); return; } /* jbe: below or equal (unsigned <=) */

loc_00159E12: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00159E20
 * Original: 0x00159E20 - 0x00159E6D (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00159E20: ;
    edx = MEM32(esp + 4);
    xmm0 = MEMF(edx + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(edx + 0x290); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00159E6A; /* ja: above (unsigned >) */

loc_00159E39: ;
    eax = MEM32(edx + 0x98);
    eax = eax << 2;
    if (CMP_LE(eax, 0xFF)) goto loc_00159E4E; /* jle: less or equal (signed <=) */

loc_00159E49: ;
    eax = 0xFF;

loc_00159E4E: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx >> 1);
    if (CMP_LE(ecx, 0xFF)) goto loc_00159E61; /* jle: less or equal (signed <=) */

loc_00159E5C: ;
    ecx = 0xFF;

loc_00159E61: ;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_L(ecx, eax)) eax = ecx; /* cmovl */
    if (CMP_GE(eax & eax, 0)) { sub_00159E6D(); return; } /* jge: greater or equal (signed >=) */

loc_00159E6A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00159E80
 * Original: 0x00159E80 - 0x00159EBB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159E80(void)
{
    uint32_t ebp;

loc_00159E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_00159E9D: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x5F4558);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_00159EB4: ;
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00159EC0
 * Original: 0x00159EC0 - 0x0015A3E9 (1321 bytes, 296 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_00159EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(esi, edi)) goto loc_0015A3E2; /* je: equal / zero */

loc_00159EDC: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    xmm0 = MEMF(0x6494DC); /* movss */
    xmm1 = MEMF(0x64ADCC); /* movss */
    MEMF(esp + 0x100) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x98) = ecx;
    ecx = 0xFF;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x1A0) = edi;
    MEM8(esp + 0x1A4) = 0;
    MEM8(esp + 0x1A5) = 0;
    MEM32(esp + 0x1A8) = edi;
    MEM32(esp + 0x94) = 0x12C;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x90) = 0x9E8;
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEM8(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = edi;
    MEM8(esp + 0xA4) = LO8(ecx);
    MEM32(esp + 0xA8) = 0x13E180;
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xB4) = edi;
    MEM32(esp + 0xB8) = edi;
    MEM32(esp + 0xBC) = edi;
    MEM32(esp + 0xC0) = 0x13E6E0;
    MEM32(esp + 0xC4) = 0x13E8F0;
    MEM8(esp + 0xCC) = 2;
    MEM32(esp + 0xD0) = edi;
    MEM8(esp + 0xD4) = 0;
    MEM16(esp + 0xD6) = 1;
    MEM16(esp + 0xD8) = LO16(ecx);
    if (CMP_LE(eax, edi)) goto loc_0015A3E2; /* jle: less or equal (signed <=) */

loc_0015A008: ;
    MEM32(esp + 0x18) = eax;
    goto loc_0015A013;

loc_0015A00E: ;
    esi = MEM32(ebp + 8);
    edi = 0; /* xor self */

loc_0015A013: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015A018: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A01F: ;
    xmm7 = MEMF(ebp + 0xC); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm5 = xmm5 * xmm7; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A047: ;
    xmm6 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A05E: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A06D: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0015A091; /* je: equal / zero */

loc_0015A081: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_0015A098;

loc_0015A091: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_0015A098: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015A0AF; /* je: equal / zero */

loc_0015A09C: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0015A0AF; /* je: equal / zero */

loc_0015A0A1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_0015A0B8;

loc_0015A0AF: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0015A0B8: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 + MEMF(esi + 4); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A0D3: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    xmm6 = xmm6 - xmm0; /* subss */
    MEMF(esp + 0x60) = xmm6; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0015A105; /* je: equal / zero */

loc_0015A0F9: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_0015A10A;

loc_0015A105: ;
    eax = eax & 0x3F;
    edx = eax;

loc_0015A10A: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015A121; /* je: equal / zero */

loc_0015A10E: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0015A121; /* je: equal / zero */

loc_0015A113: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_0015A12A;

loc_0015A121: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_0015A12A: ;
    xmm1 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A142: ;
    xmm5 = MEMF(0x648F08); /* movss */
    xmm6 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A16B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC61C4000u);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, edi);
    xmm6 = xmm6 - xmm0; /* subss */
    esi = esp + 0x10C;
    edi = esp + 0x68;
    MEMF(esp + 0x90) = xmm6; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0015A193: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015A3D8; /* je: equal / zero */

loc_0015A19E: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    ecx = esp + 0x40;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esp + 0xCC) = 0x1598E0;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0015A1C3: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0015A1DB; /* je: equal / zero */

loc_0015A1CA: ;
    xmm0 = MEMF(esp + 0x100); /* movss */
    MEMF(eax + 0x290) = xmm0; /* movss */

loc_0015A1DB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015A1E0: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm7 = MEMF(ebp + 0x10); /* movss */
    xmm7 = xmm7 * MEMF(0x648D50); /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x60); /* addss */
    eax = eax & 3;
    eax++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0015A3D8; /* jle: less or equal (signed <=) */

loc_0015A21D: ;
    edi = eax;
    goto loc_0015A227;

loc_0015A221: ;
    xmm7 = MEMF(esp + 0x20); /* movss */

loc_0015A227: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015A22C: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A233: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0x10); /* mulss */
    xmm5 = xmm5 * MEMF(0x648D50); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A248: ;
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A26F: ;
    xmm6 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A286: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A295: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0015A2B9; /* je: equal / zero */

loc_0015A2A9: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_0015A2C0;

loc_0015A2B9: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_0015A2C0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015A2D7; /* je: equal / zero */

loc_0015A2C4: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0015A2D7; /* je: equal / zero */

loc_0015A2C9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_0015A2E0;

loc_0015A2D7: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0015A2E0: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A2F5: ;
    xmm6 = MEMF(0x648F78); /* movss */
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0015A327; /* je: equal / zero */

loc_0015A31B: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_0015A32C;

loc_0015A327: ;
    eax = eax & 0x3F;
    edx = eax;

loc_0015A32C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015A343; /* je: equal / zero */

loc_0015A330: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0015A343; /* je: equal / zero */

loc_0015A335: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_0015A34C;

loc_0015A343: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_0015A34C: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A365: ;
    xmm5 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015A386: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    ecx = esp + 0x40;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm6 = xmm6 - xmm0; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xA4) = xmm6; /* movss */
    MEM32(esp + 0xCC) = 0x159E00;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0015A3B9: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0015A3D1; /* je: equal / zero */

loc_0015A3C0: ;
    xmm0 = MEMF(esp + 0x100); /* movss */
    MEMF(eax + 0x290) = xmm0; /* movss */

loc_0015A3D1: ;
    edi--;
    if ((edi != 0)) goto loc_0015A221; /* jne: not equal / not zero */

loc_0015A3D8: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_0015A00E; /* jne: not equal / not zero */

loc_0015A3E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A3F0
 * Original: 0x0015A3F0 - 0x0015A526 (310 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A3F0: ;
    SET_LO8(eax, MEM8(0x8493EC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A402: ;
    eax = MEM32(0x776574);
    if (TEST_NZ(eax, eax)) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A40F: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A41C: ;
    SET_LO8(eax, MEM8(0x7FA274));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A429: ;
    SET_LO8(eax, MEM8(0x7FA273));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A436: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A443: ;
    PUSH32(esp, 0); sub_002201E0(); /* call 0x002201E0 */

loc_0015A448: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A526(); return; } /* jne: not equal / not zero */

loc_0015A450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A144);
    SET_LO8(ebx, 0); /* xor self */
    esi++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(esi & esi, 0)) goto loc_0015A496; /* jle: less or equal (signed <=) */

loc_0015A460: ;
    edi = ZX8(MEM8(ebp + 0xC));
    ecx = 0; /* xor self */

loc_0015A466: ;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(edi, eax)) goto loc_0015A48D; /* je: equal / zero */

loc_0015A471: ;
    eax = ecx;
    PUSH32(esp, 0); sub_000FE560(); /* call 0x000FE560 */

loc_0015A478: ;
    if (TEST_Z(eax, eax)) goto loc_0015A51F; /* je: equal / zero */

loc_0015A480: ;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_0015A485: ;
    if (TEST_NZ(eax, eax)) goto loc_0015A51F; /* jne: not equal / not zero */

loc_0015A48D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    ecx = ZX8(LO8(ebx));
    if (CMP_L(ecx, esi)) goto loc_0015A466; /* jl: less (signed <) */

loc_0015A496: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    eax = eax + 0x44;
    PUSH32(esp, 0x46);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015A4A9: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_0015A51F; /* je: equal / zero */

loc_0015A4B2: ;
    eax = ebp;
    ecx = MEM32(eax);
    edx = edi + 0x2C;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    esi = 0; /* xor self */
    ebx = 4;

loc_0015A4D4: ;
    SET_LO8(eax, MEM8(edi + 0x38));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0015A508; /* je: equal / zero */

loc_0015A4E4: ;
    eax = esi;
    PUSH32(esp, 0); sub_0004E000(); /* call 0x0004E000 */

loc_0015A4EB: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0015A508; /* je: equal / zero */

loc_0015A4F0: ;
    edx = ZX8(MEM8(eax + 2));
    xmm2 = MEMF(ebp + 8); /* movss */
    xmm1 = MEMF(ebp + 4); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D2910(); /* call 0x003D2910 */

loc_0015A505: ;
    esp = esp + 4;

loc_0015A508: ;
    esi++;
    ebx--;
    if ((ebx != 0)) goto loc_0015A4D4; /* jne: not equal / not zero */

loc_0015A50C: ;
    ecx = MEM32(ebp + 4);
    MEM32(edi + 0x3C) = ecx;
    edx = MEM32(ebp + 8);
    MEM32(edi + 0x40) = edx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0015A51F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A530
 * Original: 0x0015A530 - 0x0015A541 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A530(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015A530: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x1C;
    if (TEST_NZ(eax, eax)) { sub_0015A541(); return; } /* jne: not equal / not zero */

loc_0015A53D: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0015A5B0
 * Original: 0x0015A5B0 - 0x0015A6DC (300 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A5B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* test MEM8(esi + 0x2C), 1 - flags set for next jcc */
    MEM8(esp + 7) = 0;
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_0015A5D7; /* je: equal / zero */

loc_0015A5C1: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x2E) = MEM16(esi + 0x2E) - LO16(eax);
    if (CMP_GE(MEM16(esi + 0x2E), 0)) goto loc_0015A5D7; /* jge: greater or equal (signed >=) */

loc_0015A5D2: ;
    MEM8(esp + 7) = 1;

loc_0015A5D7: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015A604; /* jne: not equal / not zero */

loc_0015A5E0: ;
    SET_LO8(eax, MEM8(0x7FA274));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015A604; /* jne: not equal / not zero */

loc_0015A5E9: ;
    SET_LO8(eax, MEM8(0x7FA273));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015A604; /* jne: not equal / not zero */

loc_0015A5F2: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015A604; /* jne: not equal / not zero */

loc_0015A5FB: ;
    PUSH32(esp, 0); sub_002201E0(); /* call 0x002201E0 */

loc_0015A600: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015A609; /* je: equal / zero */

loc_0015A604: ;
    MEM8(esp + 7) = 1;

loc_0015A609: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0015A61E; /* je: equal / zero */

loc_0015A610: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x597D94), _icall_esp); /* indirect call */
    }

loc_0015A61B: ;
    esp = esp + 4;

loc_0015A61E: ;
    xmm0 = MEMF(esi + 0x3C); /* movss */
    /* ucomiss xmm0, MEMF(esi + 0x30) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0015A63C; /* jp: parity */

loc_0015A62D: ;
    xmm0 = MEMF(esi + 0x40); /* movss */
    /* ucomiss xmm0, MEMF(esi + 0x34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0015A6A7; /* jnp: not parity */

loc_0015A63C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0x8470FC;
    ebx = 4;
    goto loc_0015A650;

    /* nop */

loc_0015A650: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    edx = 1;
    ecx = ebp;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0015A691; /* je: equal / zero */

loc_0015A660: ;
    if (CMP_GE(edi, 0x847104)) goto loc_0015A66F; /* jge: greater or equal (signed >=) */

loc_0015A668: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 8);
    goto loc_0015A674;

loc_0015A66F: ;
    eax = 0x75A0B4;

loc_0015A674: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0015A691; /* je: equal / zero */

loc_0015A679: ;
    edx = ZX8(MEM8(eax + 2));
    xmm2 = MEMF(esi + 0x34); /* movss */
    xmm1 = MEMF(esi + 0x30); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D2910(); /* call 0x003D2910 */

loc_0015A68E: ;
    esp = esp + 4;

loc_0015A691: ;
    ebp++;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_0015A650; /* jne: not equal / not zero */

loc_0015A698: ;
    edx = MEM32(esi + 0x30);
    eax = MEM32(esi + 0x34);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = eax;
    POP32(esp, ebx);

loc_0015A6A7: ;
    SET_LO8(eax, MEM8(esp + 7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015A6D9; /* je: equal / zero */

loc_0015A6AF: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015A6D9; /* jne: not equal / not zero */

loc_0015A6B8: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015A6BF: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015A6D9; /* jl: less (signed <) */

loc_0015A6C6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0015A6DC(); return; } /* je: equal / zero */

loc_0015A6D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015A6D6: ;
    esp = esp + 4;

loc_0015A6D9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A6F0
 * Original: 0x0015A6F0 - 0x0015A75B (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A6F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A6F0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edx = 0x8470FC;
    edi = 4;

loc_0015A706: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x38));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_0015A750; /* je: equal / zero */

loc_0015A716: ;
    if (CMP_GE(edx, 0x847104)) goto loc_0015A725; /* jge: greater or equal (signed >=) */

loc_0015A71E: ;
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    goto loc_0015A72A;

loc_0015A725: ;
    eax = 0x75A0B4;

loc_0015A72A: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0015A750; /* je: equal / zero */

loc_0015A72F: ;
    eax = ZX8(MEM8(eax + 2));
    eax = eax + eax * 4;
    eax = eax << 2;
    MEM8(eax + 0x806FE2) = 0;
    MEMF(eax + 0x806FE8) = xmm0; /* movss */
    MEMF(eax + 0x806FEC) = xmm0; /* movss */

loc_0015A750: ;
    esi++;
    edx = edx + 4;
    edi--;
    if ((edi != 0)) goto loc_0015A706; /* jne: not equal / not zero */

loc_0015A757: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A760
 * Original: 0x0015A760 - 0x0015A784 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A760: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0015A6F0(); /* call 0x0015A6F0 */

loc_0015A76B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015A784(); return; } /* jne: not equal / not zero */

loc_0015A777: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0015A790
 * Original: 0x0015A790 - 0x0015A7A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A790(void)
{

loc_0015A790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0015A6F0(); /* call 0x0015A6F0 */

loc_0015A79B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0015A7A1: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A7B0
 * Original: 0x0015A7B0 - 0x0015A7BF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A7B0(void)
{

loc_0015A7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x44;
    PUSH32(esp, 0); sub_0015A890(); /* call 0x0015A890 */

loc_0015A7BD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A7C0
 * Original: 0x0015A7C0 - 0x0015A88B (203 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A7C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0015A7C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x48);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_0015A87D; /* je: equal / zero */

loc_0015A7D5: ;
    ecx = MEM32(eax + 0xC84);
    if (TEST_Z(ecx, ecx)) goto loc_0015A7EF; /* je: equal / zero */

loc_0015A7DF: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) goto loc_0015A7EF; /* je: equal / zero */

loc_0015A7E8: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    goto loc_0015A849;

loc_0015A7EF: ;
    if (TEST_Z(eax, eax)) goto loc_0015A87D; /* je: equal / zero */

loc_0015A7F7: ;
    if (CMP_NE(MEM32(eax + 0xE40), 2)) goto loc_0015A87D; /* jne: not equal / not zero */

loc_0015A800: ;
    xmm2 = MEMF(eax + 0x1704); /* movss */
    xmm3 = MEMF(0x648F98); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm2 = MEMF(0x6495F8); /* movss */
    if ((xmm2 <= xmm1)) goto loc_0015A82D; /* jbe: below or equal (unsigned <=) */

loc_0015A81D: ;
    xmm0 = MEMF(eax + 0x1704); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */

loc_0015A82D: ;
    xmm4 = MEMF(eax + 0x1708); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0015A849; /* jbe: below or equal (unsigned <=) */

loc_0015A83A: ;
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm4; /* movaps */

loc_0015A849: ;
    xmm2 = MEMF(0x649418); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_0015A87D; /* ja: above (unsigned >) */

loc_0015A856: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015A86B; /* jbe: below or equal (unsigned <=) */

loc_0015A85B: ;
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */

loc_0015A86B: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0015A87D; /* ja: above (unsigned >) */

loc_0015A870: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015A880; /* jbe: below or equal (unsigned <=) */

loc_0015A87D: ;
    xmm0 = xmm1; /* movaps */

loc_0015A880: ;
    MEMF(edx + 0x30) = xmm0; /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0015A890
 * Original: 0x0015A890 - 0x0015A936 (166 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A890(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0015A890: ;
    esp = esp - 0x14;
    ecx = ZX8(MEM8(eax + 0x18));
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 - MEMF(ecx + edx + 0x330); /* subss */
    ecx = ecx + edx + 0x330;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
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
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0015A936(); return; } /* jbe: below or equal (unsigned <=) */

loc_0015A920: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x30) = xmm1; /* movss */
    MEMF(esi + 0x34) = xmm1; /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0015A980
 * Original: 0x0015A980 - 0x0015A9E5 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A980: ;
    eax = MEM32(esp + 0xC);
    if (CMP_A(eax, 0x75)) goto loc_0015A9E4; /* ja: above (unsigned >) */

loc_0015A989: ;
    eax = ZX8(MEM8(eax + 0x15A9F8));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x15A9E8)); return; /* indirect tail jmp */

    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0015A9A1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x38));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_0015A9E3; /* je: equal / zero */

loc_0015A9BF: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0015A9C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0xC);
    if (CMP_NE(ecx, MEM32(edx))) goto loc_0015A9E3; /* jne: not equal / not zero */

loc_0015A9DE: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0015A9E3: ;
    POP32(esp, esi);

loc_0015A9E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AA70
 * Original: 0x0015AA70 - 0x0015AA83 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AA70(void)
{

loc_0015AA70: ;
    PUSH32(esp, 0x75);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6B7188);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0015AA7F: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AA90
 * Original: 0x0015AA90 - 0x0015ABAF (287 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AA90(void)
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

loc_0015AA90: ;
    eax = MEM32(0x5499E8);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1A04);
    if (TEST_Z(edi, edi)) goto loc_0015AACA; /* je: equal / zero */

loc_0015AAA6: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0015AAC8; /* jne: not equal / not zero */

loc_0015AAAF: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0015AAC8; /* jne: not equal / not zero */

loc_0015AABB: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0015AAC8; /* je: equal / zero */

loc_0015AAC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0015AAC8: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_0015AACA: ;
    esi = esp + 0x14;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0015AAD5: ;
    ebx = MEM32(esp + 0x48);
    edx = MEM32(0x84A13C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    fp_push(MEMF(ecx + edx + 0x1F8)); /* fld float */
    esi = ecx + edx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0015AAF6: ;
    ebp = eax;
    fp_push(MEMF(esi + 0x1F4)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0015AB03: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = ebp;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_0015AB23: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    ebp = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0015AB31: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0015AB78; /* je: equal / zero */

loc_0015AB37: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0015AB42: ;
    if (TEST_NZ(eax, eax)) goto loc_0015AB55; /* jne: not equal / not zero */

loc_0015AB46: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0015AB51: ;
    esi = 0; /* xor self */
    goto loc_0015AB78;

loc_0015AB55: ;
    edx = MEM32(esp + 0x48);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 0;

loc_0015AB78: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015AB7E: ;
    if (TEST_Z(esi, esi)) goto loc_0015ABA5; /* je: equal / zero */

loc_0015AB82: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0xFF);
    eax = eax + 0x44;
    PUSH32(esp, 0x85);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015AB98: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0015ABAF(); return; } /* jne: not equal / not zero */

loc_0015AB9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015ABA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
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
 * sub_0015AC00
 * Original: 0x0015AC00 - 0x0015AC61 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015AC00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0015AC4A; /* je: equal / zero */

loc_0015AC0C: ;
    eax = eax - MEM32(0x7FA20C);
    if (CMP_G(eax & eax, 0)) goto loc_0015AC47; /* jg: greater (signed >) */

loc_0015AC16: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015AC5F; /* jne: not equal / not zero */

loc_0015AC1F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015AC26: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015AC5F; /* jl: less (signed <) */

loc_0015AC2D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_NZ(eax, eax)) goto loc_0015AC59; /* jne: not equal / not zero */

loc_0015AC3A: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0015AC47: ;
    MEM32(esi + 0x2C) = eax;

loc_0015AC4A: ;
    eax = ZX8(MEM8(esi + 0x34));
    eax = MEM32(eax * 4 + 0x597DC8);
    if (TEST_Z(eax, eax)) goto loc_0015AC5F; /* je: equal / zero */

loc_0015AC59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015AC5C: ;
    esp = esp + 4;

loc_0015AC5F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015AC70
 * Original: 0x0015AC70 - 0x0015AC82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AC70(void)
{

loc_0015AC70: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x3C), _icall_esp); /* indirect call */
    }

loc_0015AC7E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0015AC90
 * Original: 0x0015AC90 - 0x0015B3A1 (1809 bytes, 456 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015AC90: ;
    esp = esp - 0x64;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    eax = MEM32(ebp + 0x40);
    if (TEST_Z(eax, eax)) goto loc_0015B39C; /* je: equal / zero */

loc_0015ACA3: ;
    ecx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1A04);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(edi, edi)) goto loc_0015ACDE; /* je: equal / zero */

loc_0015ACBA: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0015ACDC; /* jne: not equal / not zero */

loc_0015ACC3: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0015ACDC; /* jne: not equal / not zero */

loc_0015ACCF: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0015ACDC; /* je: equal / zero */

loc_0015ACD6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0015ACDC: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_0015ACDE: ;
    ecx = MEM32(ecx + 0x1A08);
    if (TEST_NZ(ecx, ecx)) goto loc_0015ACEE; /* jne: not equal / not zero */

loc_0015ACE8: ;
    MEM32(esp + 0x10) = ecx;
    goto loc_0015AD16;

loc_0015ACEE: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0015AD10; /* jne: not equal / not zero */

loc_0015ACF7: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0015AD10; /* jne: not equal / not zero */

loc_0015AD03: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0015AD10; /* je: equal / zero */

loc_0015AD0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0015AD10: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    MEM32(esp + 0x10) = ecx;

loc_0015AD16: ;
    esi = esp + 0x58;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0015AD21: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    esi = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x58);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_0015AD54: ;
    edx = eax;
    eax = MEM32(esp + 0x78);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_0015AD72: ;
    edi = MEM32(ebp + 0x40);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x64) = 0x40001;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x68) = esi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0015ADA6: ;
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0015ADB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0015ADC4: ;
    eax = MEM32(0x6B850C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0015ADDF; /* je: equal / zero */

loc_0015ADD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0015ADD9: ;
    MEM32(0x771760) = esi;

loc_0015ADDF: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0015ADF9; /* je: equal / zero */

loc_0015ADED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0015ADF3: ;
    MEM32(0x77182C) = esi;

loc_0015ADF9: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_0015AE0D; /* je: equal / zero */

loc_0015AE01: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0015AE07: ;
    MEM32(0x771828) = ebx;

loc_0015AE0D: ;
    eax = MEM32(0x771824);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_0015AE33; /* je: equal / zero */

loc_0015AE1B: ;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015AE27: ;
    MEM32(0x549AE4) = esi;
    MEM32(0x771824) = esi;

loc_0015AE33: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_0015AE53; /* je: equal / zero */

loc_0015AE3B: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015AE47: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_0015AE53: ;
    (void)0; /* cmp MEM32(0x77181C), ebx - flags set for next jcc */
    edi = 2;
    if (CMP_EQ(MEM32(0x77181C), ebx)) goto loc_0015AEDE; /* je: equal / zero */

loc_0015AE60: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0015AE7C; /* jb: below (unsigned <) */

loc_0015AE6D: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0015AE7C: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, edi)) goto loc_0015AED8; /* jne: not equal / not zero */

loc_0015AEA9: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0015AEAE: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0015AEB3: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0015AEC9; /* jb: below (unsigned <) */

loc_0015AEBA: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0015AEC9: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0015AED1: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0015AED6: ;
    MEM32(esi) = eax;

loc_0015AED8: ;
    MEM32(0x77181C) = ebx;

loc_0015AEDE: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_0015AEFE; /* je: equal / zero */

loc_0015AEE6: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015AEF2: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_0015AEFE: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_0015AF1C; /* je: equal / zero */

loc_0015AF06: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_0015AF1C: ;
    ecx = MEM32(0x771764);
    eax = esp + 0x44;
    if (CMP_EQ(ecx, eax)) goto loc_0015AF3E; /* je: equal / zero */

loc_0015AF2A: ;
    ecx = eax;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015AF34: ;
    edx = esp + 0x44;
    MEM32(0x771764) = edx;

loc_0015AF3E: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0015AF46: ;
    (void)0; /* cmp MEM32(0x7717E4), edi - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x7717E4), edi)) goto loc_0015AF64; /* je: equal / zero */

loc_0015AF53: ;
    eax = eax | 0x800;
    MEM32(0x547360) = edi;
    MEM32(0x7717E4) = edi;

loc_0015AF64: ;
    if (CMP_EQ(MEM32(0x7717C4), edi)) goto loc_0015AF7D; /* je: equal / zero */

loc_0015AF6C: ;
    eax = eax | 0x800;
    MEM32(0x547368) = edi;
    MEM32(0x7717C4) = edi;

loc_0015AF7D: ;
    ecx = MEM32(0x7717A4);
    edi = 1;
    if (CMP_EQ(ecx, edi)) goto loc_0015AF9D; /* je: equal / zero */

loc_0015AF8C: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edi;
    MEM32(0x7717A4) = edi;

loc_0015AF9D: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | 0x401;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    if (CMP_EQ(ecx, edi)) goto loc_0015AFDE; /* je: equal / zero */

loc_0015AFC8: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_0015AFDE: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_0015AFFC; /* je: equal / zero */

loc_0015AFE6: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_0015AFFC: ;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B00B: ;
    (void)0; /* cmp MEM32(0x77180C), edi - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    if (CMP_EQ(MEM32(0x77180C), edi)) goto loc_0015B035; /* je: equal / zero */

loc_0015B01D: ;
    edx = edi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B029: ;
    MEM32(0x549AF0) = edi;
    MEM32(0x77180C) = edi;

loc_0015B035: ;
    if (CMP_EQ(MEM32(0x771808), ebx)) goto loc_0015B055; /* je: equal / zero */

loc_0015B03D: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B049: ;
    MEM32(0x549AF4) = ebx;
    MEM32(0x771808) = ebx;

loc_0015B055: ;
    eax = MEM32(0x6B8C3C);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_0015B06F; /* je: equal / zero */

loc_0015B064: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0015B069: ;
    MEM32(0x77175C) = esi;

loc_0015B06F: ;
    eax = ZX8(MEM8(ebp + 0x30));
    xmm0 = MEMF(0x648CEC); /* movss */
    ecx = ZX8(MEM8(ebp + 0x31));
    edx = ZX8(MEM8(ebp + 0x32));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    eax = esp + 0x34;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    eax = edi;
    ecx = edi;
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_0015B0C4: ;
    ecx = ZX8(MEM8(ebp + 0x35));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + edx + 0x1F4); /* movss */
    eax = ecx + edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1F8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x214); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x21C); /* movss */
    PUSH32(esp, 0xBF000000u);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    PUSH32(esp, 0xBF000000u);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053A280(); /* call 0x0053A280 */

loc_0015B13B: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x14);
    edi = esp + 0x80;
    MEM32(esp + 0x80) = ebx;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0015B152: ;
    eax = MEM32(esp + 0x80);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    esp = esp + 8;
    MEMF(eax) = xmm5; /* movss */
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x28); /* movss */
    MEMF(eax) = xmm3; /* movss */
    esi = MEM32(esp + 0x10);
    MEMF(eax + 4) = xmm0; /* movss */
    ecx = MEM32(0x5499E8);
    edi = MEM32(esp + 0x14);
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = ebx;
    eax = eax + 4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x80) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0015B251: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015B25B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015B261: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015B267: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053A280(); /* call 0x0053A280 */

loc_0015B26E: ;
    ebp = MEM32(ebp + 0x40);
    if (CMP_EQ(MEM32(0x771764), ebp)) goto loc_0015B287; /* je: equal / zero */

loc_0015B279: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015B281: ;
    MEM32(0x771764) = ebp;

loc_0015B287: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_0015B29C; /* je: equal / zero */

loc_0015B28F: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0015B296: ;
    MEM32(0x77175C) = ebx;

loc_0015B29C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x14);
    edi = esp + 0x80;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0015B2AC: ;
    eax = MEM32(esp + 0x80);
    xmm4 = MEMF(esp + 0x20); /* movss */
    MEMF(eax) = xmm4; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    esp = esp + 8;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = ebx;
    POP32(esp, edi);
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);

loc_0015B39C: ;
    POP32(esp, ebp);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_0015B3B0
 * Original: 0x0015B3B0 - 0x0015C136 (3462 bytes, 843 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B3B0(void)
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

loc_0015B3B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x40);
    esp = esp - 0x330;
    if (TEST_Z(ecx, ecx)) goto loc_0015C12F; /* je: equal / zero */

loc_0015B3C5: ;
    ecx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x1A14);
    eax = MEM32(ebp);
    (void)0; /* test eax, 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0015B3F8; /* jne: not equal / not zero */

loc_0015B3DF: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0015B3F8; /* jne: not equal / not zero */

loc_0015B3EB: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0015B3F8; /* je: equal / zero */

loc_0015B3F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0015B3F8: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    ecx = MEM32(ecx + 0x1A08);
    if (TEST_NZ(ecx, ecx)) goto loc_0015B40B; /* jne: not equal / not zero */

loc_0015B405: ;
    MEM32(esp + 0x20) = ecx;
    goto loc_0015B433;

loc_0015B40B: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0015B42D; /* jne: not equal / not zero */

loc_0015B414: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0015B42D; /* jne: not equal / not zero */

loc_0015B420: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0015B42D; /* je: equal / zero */

loc_0015B427: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0015B42D: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    MEM32(esp + 0x20) = ecx;

loc_0015B433: ;
    esi = esp + 0x58;
    ebx = 0; /* xor self */
    edi = ebp;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0015B440: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = ecx;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = ecx;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = ecx;
    esi = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_0015B46F: ;
    edx = eax;
    eax = MEM32(esp + 0x78);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_0015B48D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = ebx;
    ebx = MEM32(esp + 0x358);
    edi = MEM32(ebx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x58) = 0x40001;
    MEM32(esp + 0x5C) = esi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0015B4CA: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0015B4DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0015B4E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_0015B500: ;
    eax = MEM32(0x6B850C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0015B51B; /* je: equal / zero */

loc_0015B50F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0015B515: ;
    MEM32(0x771760) = esi;

loc_0015B51B: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0015B535; /* je: equal / zero */

loc_0015B529: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0015B52F: ;
    MEM32(0x77182C) = esi;

loc_0015B535: ;
    eax = MEM32(0x771828);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0015B54C; /* je: equal / zero */

loc_0015B540: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0015B546: ;
    MEM32(0x771828) = edi;

loc_0015B54C: ;
    eax = MEM32(0x771824);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_0015B572; /* je: equal / zero */

loc_0015B55A: ;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B566: ;
    MEM32(0x549AE4) = esi;
    MEM32(0x771824) = esi;

loc_0015B572: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_0015B592; /* je: equal / zero */

loc_0015B57A: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B586: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_0015B592: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_0015B619; /* je: equal / zero */

loc_0015B59A: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0015B5B6; /* jb: below (unsigned <) */

loc_0015B5A7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0015B5B6: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, 2)) goto loc_0015B613; /* jne: not equal / not zero */

loc_0015B5E4: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0015B5E9: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0015B5EE: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0015B604; /* jb: below (unsigned <) */

loc_0015B5F5: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0015B604: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0015B60C: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0015B611: ;
    MEM32(esi) = eax;

loc_0015B613: ;
    MEM32(0x77181C) = edi;

loc_0015B619: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_0015B639; /* je: equal / zero */

loc_0015B621: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B62D: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_0015B639: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_0015B657; /* je: equal / zero */

loc_0015B641: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_0015B657: ;
    ecx = MEM32(0x771764);
    eax = esp + 0x38;
    if (CMP_EQ(ecx, eax)) goto loc_0015B679; /* je: equal / zero */

loc_0015B665: ;
    ecx = eax;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015B66F: ;
    edx = esp + 0x38;
    MEM32(0x771764) = edx;

loc_0015B679: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0015B681: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_0015B6A5; /* je: equal / zero */

loc_0015B694: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_0015B6A5: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_0015B6BE; /* je: equal / zero */

loc_0015B6AD: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_0015B6BE: ;
    ecx = MEM32(0x7717A4);
    esi = 1;
    if (CMP_EQ(ecx, esi)) goto loc_0015B6DE; /* je: equal / zero */

loc_0015B6CD: ;
    eax = eax | 0x800;
    MEM32(0x547370) = esi;
    MEM32(0x7717A4) = esi;

loc_0015B6DE: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | 0x401;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    if (CMP_EQ(ecx, esi)) goto loc_0015B71F; /* je: equal / zero */

loc_0015B709: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473E0) = esi;
    MEM32(0x7717E8) = esi;

loc_0015B71F: ;
    if (CMP_EQ(MEM32(0x7717A8), esi)) goto loc_0015B73D; /* je: equal / zero */

loc_0015B727: ;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473F0) = esi;
    MEM32(0x7717A8) = esi;

loc_0015B73D: ;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B74C: ;
    (void)0; /* cmp MEM32(0x77180C), esi - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    if (CMP_EQ(MEM32(0x77180C), esi)) goto loc_0015B776; /* je: equal / zero */

loc_0015B75E: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B76A: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0015B776: ;
    PUSH32(esp, 0x771808);
    edi = 0; /* xor self */
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_0015B787: ;
    eax = MEM32(0x6B8C3C);
    ecx = MEM32(0x77175C);
    esp = esp + 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_0015B7A6; /* je: equal / zero */

loc_0015B79B: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0015B7A0: ;
    MEM32(0x77175C) = esi;

loc_0015B7A6: ;
    eax = ZX8(MEM8(ebx + 0x30));
    xmm0 = MEMF(0x648CEC); /* movss */
    ecx = ZX8(MEM8(ebx + 0x31));
    edx = ZX8(MEM8(ebx + 0x32));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x4C;
    MEMF(esp + 0x50) = xmm1; /* movss */
    PUSH32(esp, eax);
    eax = 1;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = eax;
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_0015B7F5: ;
    ecx = ZX8(MEM8(ebx + 0x35));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = MEMF(ecx + edx + 0x1F4); /* movss */
    eax = ecx + edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1F8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x214); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x21C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    edx = 1;
    ecx = 0x4147C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B86C: ;
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0xBF000000u);
    MEM32(0x549B44) = 1;
    PUSH32(esp, 0); sub_0053A280(); /* call 0x0053A280 */

loc_0015B885: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x14);
    edi = esp + 0x18;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0015B89A: ;
    eax = MEM32(esp + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    esp = esp + 8;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax) = xmm5; /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    esi = MEM32(esp + 0x20);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0015B992: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015B99C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015B9A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015B9A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053A280(); /* call 0x0053A280 */

loc_0015B9B1: ;
    edx = 0; /* xor self */
    ecx = 0x4147C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0015B9BD: ;
    PUSH32(esp, 0x77180C);
    edi = 0x302;
    esi = 0x3E;
    MEM32(0x549B44) = 0;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_0015B9DB: ;
    PUSH32(esp, 0x771808);
    edi = 0x303;
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_0015B9EF: ;
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(ebx + 0x48) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x48))) goto loc_0015BA60; /* jbe: below or equal (unsigned <=) */

loc_0015BA0E: ;
    xmm0 = MEMF(ebx + 0x48); /* movss */
    xmm0 = xmm0 * MEMF(0x6492A4); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0015BA55; /* jbe: below or equal (unsigned <=) */

loc_0015BA4D: ;
    MEMF(esp + 0x20) = xmm2; /* movss */
    goto loc_0015BA60;

loc_0015BA55: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015BA60; /* jbe: below or equal (unsigned <=) */

loc_0015BA5A: ;
    MEMF(esp + 0x20) = xmm1; /* movss */

loc_0015BA60: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0015BA69: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0x7F7F7F;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00537360(); /* call 0x00537360 */

loc_0015BA7A: ;
    ecx = MEM32(0x7717A4);
    eax = 2;
    if (CMP_EQ(ecx, eax)) goto loc_0015BA9D; /* je: equal / zero */

loc_0015BA89: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_0015BA9D: ;
    ecx = MEM32(0x771784);
    eax = 3;
    if (CMP_EQ(ecx, eax)) goto loc_0015BAC0; /* je: equal / zero */

loc_0015BAAC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_0015BAC0: ;
    esi = MEM32(ebx + 0x40);
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_0015BAD9; /* je: equal / zero */

loc_0015BACB: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015BAD3: ;
    MEM32(0x771764) = esi;

loc_0015BAD9: ;
    eax = MEM32(0x77175C);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_0015BAF1; /* je: equal / zero */

loc_0015BAE4: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0015BAEB: ;
    MEM32(0x77175C) = ebp;

loc_0015BAF1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x14);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0015BAFE: ;
    xmm4 = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm4; /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm6; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm6; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm6; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = ebp;
    eax = eax + 4;
    MEM32(ecx) = eax;
    eax = (int32_t)xmm2; /* cvttss2si */
    esp = esp + 8;
    MEM32(esp + 0x5C) = eax;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    edx = (int32_t)xmm4; /* cvttss2si */
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = edx;
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = (int32_t)xmm3; /* cvttss2si */
    PUSH32(esp, 1);
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_0015BC15: ;
    esi = MEM32(ebx + 0x5C);
    if (CMP_EQ(esi, ebp)) goto loc_0015C123; /* je: equal / zero */

loc_0015BC20: ;
    eax = MEM32(0x6B850C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0015BC3B; /* je: equal / zero */

loc_0015BC2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0015BC35: ;
    MEM32(0x771760) = edi;

loc_0015BC3B: ;
    if (CMP_EQ(MEM32(0x77175C), ebp)) goto loc_0015BC50; /* je: equal / zero */

loc_0015BC43: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0015BC4A: ;
    MEM32(0x77175C) = ebp;

loc_0015BC50: ;
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx + 0x3E0);
    eax = MEM32(edx + 0x238);
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x238);
    ecx = MEM32(edx);
    (void)0; /* cmp ecx, MEM32(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    eax = 0xD6;
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_0015BC78; /* je: equal / zero */

loc_0015BC73: ;
    eax = 0xD7;

loc_0015BC78: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0015BC7F: ;
    edi = eax;
    esp = esp + 4;
    if (CMP_NE(edi, ebp)) goto loc_0015BC98; /* jne: not equal / not zero */

loc_0015BC88: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015BC90: ;
    MEM32(0x771764) = ebp;
    goto loc_0015BCAF;

loc_0015BC98: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_0015BCAF; /* je: equal / zero */

loc_0015BCA0: ;
    ecx = edi;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0015BCA9: ;
    MEM32(0x771764) = edi;

loc_0015BCAF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537580(); /* call 0x00537580 */

loc_0015BCB5: ;
    ecx = MEM32(0x7717E4);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_0015BCD9; /* je: equal / zero */

loc_0015BCC9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_0015BCD9: ;
    if (CMP_EQ(MEM32(0x7717C4), eax)) goto loc_0015BCF1; /* je: equal / zero */

loc_0015BCE1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_0015BCF1: ;
    if (CMP_EQ(MEM32(0x7717A4), eax)) goto loc_0015BD09; /* je: equal / zero */

loc_0015BCF9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_0015BD09: ;
    if (CMP_EQ(MEM32(0x771784), eax)) goto loc_0015BD21; /* je: equal / zero */

loc_0015BD11: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_0015BD21: ;
    xmm0 = MEMF(0x648EBC); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x14); /* divss */
    xmm1 = MEMF(0x648E58); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0015BD4E; /* ja: above (unsigned >) */

loc_0015BD41: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015BD54; /* jbe: below or equal (unsigned <=) */

loc_0015BD4E: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_0015BD54: ;
    xmm0 = MEMF(0x59A8D8); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    PUSH32(esp, 8);
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, 0x14);
    edi = esp + 0x1C;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0015BDA9: ;
    eax = MEM32(esp + 0x1C);
    xmm3 = MEMF(esp + 0x34); /* movss */
    MEMF(eax) = xmm3; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm2 = MEMF(0x648D80); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = ebp;
    eax = eax + 4;
    MEM32(edx) = eax;
    eax = MEM32(0x771764);
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_0015BEA5; /* je: equal / zero */

loc_0015BE97: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015BE9F: ;
    MEM32(0x771764) = ebp;

loc_0015BEA5: ;
    eax = MEM32(esi);
    xmm0 = MEMF(eax + 0x80); /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm2 = MEMF(eax + 0x78); /* movss */
    eax = MEM32(ebx + 0x44);
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    edi = MEM32(eax + 0x3E0);
    xmm0 = MEMF(edi + 0x80); /* movss */
    xmm1 = MEMF(edi + 0x7C); /* movss */
    xmm2 = MEMF(edi + 0x78); /* movss */
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0015BF07: ;
    eax = MEM32(0x8086E8);
    xmm0 = xmm0 * MEMF(0x64AC20); /* mulss */
    esp = esp + 8;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_NE(eax, ebp)) goto loc_0015BF28; /* jne: not equal / not zero */

loc_0015BF21: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0015BF26: ;
    goto loc_0015BF2D;

loc_0015BF28: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_0015BF2D: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_001F6230(); /* call 0x001F6230 */

loc_0015BF34: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(0x776180);
    ecx = MEM32(0x6BAF28);
    xmm1 = MEMF(esp + 0x10); /* movss */
    esp = esp - 8;
    eax = eax + eax * 2;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(ecx + eax * 8 + 8); /* movss */
    xmm2 = MEMF(ecx + eax * 8 + 4); /* movss */
    eax = ecx + eax * 8;
    edx = esp + 0x108;
    PUSH32(esp, 0x5F458C);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    PUSH32(esp, edx);
    MEMF(0x80765C) = xmm2; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0015BF8B: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esp = esp + 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    eax = esp + 0x88;
    PUSH32(esp, 0x5F4580);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0015BFA7: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0xA0;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0015BFC7: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    esp = esp + 0x20;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015C004; /* je: equal / zero */

loc_0015BFF4: ;
    xmm2 = xmm2 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm2; /* movss */

loc_0015C004: ;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, ecx);
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0015C01D: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00261A90(); /* call 0x00261A90 */

loc_0015C025: ;
    esp = esp + 0x10;
    if (CMP_NE(eax, ebp)) goto loc_0015C033; /* jne: not equal / not zero */

loc_0015C02C: ;
    eax = 0x5F4570;
    goto loc_0015C073;

loc_0015C033: ;
    edx = MEM32(esi);
    ecx = MEM32(edi + 0x238);
    edx = MEM32(edx + 0x238);
    edx = MEM32(edx);
    (void)0; /* cmp edx, MEM32(ecx) - flags set for next jcc */
    MEM8(0x77616E) = 0x96;
    MEM8(0x77616F) = 0x96;
    if (CMP_NE(edx, MEM32(ecx))) goto loc_0015C065; /* jne: not equal / not zero */

loc_0015C055: ;
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xFF;
    goto loc_0015C073;

loc_0015C065: ;
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0x96;

loc_0015C073: ;
    PUSH32(esp, eax);
    eax = esp + 0x144;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B614(); /* call 0x0042B614 */

loc_0015C086: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0x15C;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0015C0A6: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    xmm2 = MEMF(esi + 0xC); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(0x648D20); /* subss */
    esp = esp + 0x1C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015C0E9; /* je: equal / zero */

loc_0015C0D9: ;
    xmm1 = xmm1 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm1; /* movss */

loc_0015C0E9: ;
    eax = esp + 0x140;
    PUSH32(esp, eax);
    ecx = (int32_t)xmm2; /* cvttss2si */
    PUSH32(esp, ecx);
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0015C102: ;
    esp = esp + 0xC;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015C10D: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_0015C118: ;
    esi = MEM32(esi + 0x18);
    if (CMP_NE(esi, ebp)) goto loc_0015BC20; /* jne: not equal / not zero */

loc_0015C123: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_0015C12B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0015C12F: ;
    esp = esp + 0x330;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0015C140
 * Original: 0x0015C140 - 0x0015C159 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C140: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x34));
    eax = MEM32(eax * 4 + 0x597DBC);
    if (TEST_Z(eax, eax)) { sub_0015C159(); return; } /* je: equal / zero */

loc_0015C153: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_0015C160
 * Original: 0x0015C160 - 0x0015C1A7 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C160(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015C160: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x7FA20C);
    ecx = ZX8(MEM8(eax + 0x30));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x33));
    edx = edx + edx;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0015C190; /* jne: not equal / not zero */

loc_0015C179: ;
    ecx = ecx - edx;
    if (CMP_GE(ecx, 0x90)) goto loc_0015C1A3; /* jge: greater or equal (signed >=) */

loc_0015C183: ;
    ecx = 0x90;
    MEM8(eax + 0x33) = 1;
    MEM8(eax + 0x30) = LO8(ecx);
    esp += 4; return; /* ret */

loc_0015C190: ;
    ecx = ecx + edx;
    if (CMP_LE(ecx, 0xFF)) goto loc_0015C1A3; /* jle: less or equal (signed <=) */

loc_0015C19A: ;
    ecx = 0xFF;
    MEM8(eax + 0x33) = 0;

loc_0015C1A3: ;
    MEM8(eax + 0x30) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C1B0
 * Original: 0x0015C1B0 - 0x0015C1E6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C1B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015C1B0: ;
    eax = MEM32(0x8470DC);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    SET_LO8(edx, MEM8(ebx + 0x35));
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    eax = eax + 0x3E0;

loc_0015C1C8: ;
    if (CMP_NE(MEM8(eax + -312), LO8(edx))) goto loc_0015C1D5; /* jne: not equal / not zero */

loc_0015C1D0: ;
    if (CMP_NE(MEM32(eax), 0)) { sub_0015C1E6(); return; } /* jne: not equal / not zero */

loc_0015C1D5: ;
    ecx++;
    eax = eax + 0x770;
    if (CMP_L(ecx, 4)) goto loc_0015C1C8; /* jl: less (signed <) */

loc_0015C1E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C5B0
 * Original: 0x0015C5B0 - 0x0015C5CE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C5B0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) { sub_0015C5CE(); return; } /* jne: not equal / not zero */

loc_0015C5BD: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x564);
    (void)0; /* cmp edx, MEM32(esi + 0x44) - flags set for next jcc */
    g_seh_ebp = ebp; sub_0015C5E0(); return; /* tail jmp 0x0015C5E0 */

}

/**
 * sub_0015C5F0
 * Original: 0x0015C5F0 - 0x0015C633 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015C5F0: ;
    eax = MEM32(esi + 0x40);
    if (TEST_Z(eax, eax)) goto loc_0015C5FD; /* je: equal / zero */

loc_0015C5F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015C5FD: ;
    eax = ZX8(MEM8(esi + 0x35));
    MEM8(eax + 0x775DC0) = 0;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015C632; /* jne: not equal / not zero */

loc_0015C611: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015C618: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015C632; /* jl: less (signed <) */

loc_0015C61F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0015C633(); return; } /* je: equal / zero */

loc_0015C62C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015C62F: ;
    esp = esp + 4;

loc_0015C632: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C640
 * Original: 0x0015C640 - 0x0015C76F (303 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C640: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E4);
    PUSH32(esp, 0x5F4594);
    PUSH32(esp, 0x1C);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0015C65B: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0015C67C; /* je: equal / zero */

loc_0015C664: ;
    eax = 0; /* xor self */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;

loc_0015C67C: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEM32(esi) = edi;
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x78); /* subss */
    ebp = ebx + 0x78;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x7C); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x80); /* subss */
    edx = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
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
    eax = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0015C723: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_0015C750: ;
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x28);
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(esi + 4) = LO8(edx);
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    MEM32(eax + 0x18) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C770
 * Original: 0x0015C770 - 0x0015C85B (235 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C770(void)
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

loc_0015C770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x40));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_0015C7A7; /* je: equal / zero */

loc_0015C77F: ;
    xmm1 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0015C7A7; /* jbe: below or equal (unsigned <=) */

loc_0015C79D: ;
    MEMF(esi + 0x3C) = xmm1; /* movss */
    edi = 1;

loc_0015C7A7: ;
    SET_LO8(eax, MEM8(esi + 0x17C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015C7CC; /* je: equal / zero */

loc_0015C7B1: ;
    if (TEST_NZ(edi, edi)) goto loc_0015C7CC; /* jne: not equal / not zero */

loc_0015C7B5: ;
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x597DE0), _icall_esp); /* indirect call */
    }

loc_0015C7C0: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015C7CC; /* jne: not equal / not zero */

loc_0015C7C7: ;
    edi = 1;

loc_0015C7CC: ;
    if (TEST_Z(MEM8(esi + 0x40), 8)) goto loc_0015C82A; /* je: equal / zero */

loc_0015C7D2: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esi + 0x3C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x3C))) goto loc_0015C82A; /* jbe: below or equal (unsigned <=) */

loc_0015C7E0: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x46);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + 0x3C); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0015C808; /* ja: above (unsigned >) */

loc_0015C7FB: ;
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015C811; /* jbe: below or equal (unsigned <=) */

loc_0015C808: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0015C811: ;
    eax = ZX8(MEM8(esi + 0x50));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0015C82A; /* jbe: below or equal (unsigned <=) */

loc_0015C81E: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0015C827: ;
    MEM8(esi + 0x50) = LO8(eax);

loc_0015C82A: ;
    if (TEST_Z(edi, edi)) goto loc_0015C858; /* je: equal / zero */

loc_0015C82E: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015C858; /* jne: not equal / not zero */

loc_0015C837: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015C83E: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015C858; /* jl: less (signed <) */

loc_0015C845: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0015C85B(); return; } /* je: equal / zero */

loc_0015C852: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015C855: ;
    esp = esp + 4;

loc_0015C858: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0015CAF0
 * Original: 0x0015CAF0 - 0x0015D5C2 (2770 bytes, 591 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CAF0: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x104;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10C);
    eax = MEM32(ebp + 0x40);
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0015CB16; /* je: equal / zero */

loc_0015CB09: ;
    edx = ZX8(MEM8(ebp + 0x56));
    if (CMP_NE(LO16(ecx), LO16(edx))) goto loc_0015D5BA; /* jne: not equal / not zero */

loc_0015CB16: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0015CB27; /* je: equal / zero */

loc_0015CB1A: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0015D5BA; /* je: equal / zero */

loc_0015CB27: ;
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    ecx = edx + 0xB;
    esi = 1;
    esi = esi << LO8(ecx);
    if (TEST_Z(eax, esi)) goto loc_0015CB65; /* je: equal / zero */

loc_0015CB39: ;
    xmm0 = MEMF(edx * 4 + 0x771C28); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0015D5B9; /* jp: parity */

loc_0015CB53: ;
    ecx = edx;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_0015CB5A: ;
    if (CMP_G(eax, 0xC8)) goto loc_0015D5B9; /* jg: greater (signed >) */

loc_0015CB65: ;
    eax = MEM32(esp + 0x118);
    if (TEST_Z(eax, eax)) goto loc_0015CB88; /* je: equal / zero */

loc_0015CB70: ;
    if (CMP_EQ(eax, 1)) goto loc_0015CB88; /* je: equal / zero */

loc_0015CB75: ;
    if (CMP_EQ(eax, 2)) goto loc_0015CB88; /* je: equal / zero */

loc_0015CB7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_0015CB83: ;
    esp = esp + 8;
    goto loc_0015CB8D;

loc_0015CB88: ;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_0015CB8D: ;
    eax = MEM32(0x84A148);
    edx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = MEM32(ebp + 0x40);
    eax = eax + edx;
    if (TEST_Z(ecx, 0x10000)) goto loc_0015CBE9; /* je: equal / zero */

loc_0015CBAB: ;
    xmm6 = MEMF(eax + 0x224); /* movss */
    xmm7 = MEMF(eax + 0x228); /* movss */
    xmm6 = xmm6 + MEMF(ebp + 0x2C); /* addss */
    xmm7 = xmm7 + MEMF(ebp + 0x30); /* addss */
    xmm2 = MEMF(ebp + 0x34); /* movss */
    xmm3 = MEMF(ebp + 0x38); /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    goto loc_0015CC5A;

loc_0015CBE9: ;
    xmm1 = MEMF(0x64AC1C); /* movss */
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    xmm2 = MEMF(0x64AC18); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x224); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x30); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x228); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x34); /* movss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x38); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 8); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm3 = xmm0; /* movaps */

loc_0015CC5A: ;
    eax = MEM32(ebp + 0x6C);
    (void)0; /* cmp eax, 0xFFFFFFFEu - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 0xFFFFFFFEu)) goto loc_0015CC82; /* jne: not equal / not zero */

loc_0015CC64: ;
    edi = MEM32(0x847194);
    if (TEST_Z(edi, edi)) goto loc_0015D5B7; /* je: equal / zero */

loc_0015CC72: ;
    esi = esp + 0xF4;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0015CC80: ;
    goto loc_0015CCAB;

loc_0015CC82: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0015CCAB; /* je: equal / zero */

loc_0015CC87: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0015CC90: ;
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 4;

loc_0015CCAB: ;
    xmm4 = 0.0f; /* xorps self = zero */
    edi = MEM32(ebp + 0x68);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    MEM32(esp + 0x2C) = edi;
    MEMF(esp + 0xF4) = xmm0; /* movss */
    MEMF(esp + 0xF8) = xmm1; /* movss */
    MEMF(esp + 0xFC) = xmm2; /* movss */
    MEMF(esp + 0x100) = xmm1; /* movss */
    MEMF(esp + 0x104) = xmm2; /* movss */
    MEMF(esp + 0x108) = xmm3; /* movss */
    MEMF(esp + 0x10C) = xmm0; /* movss */
    MEMF(esp + 0x110) = xmm3; /* movss */
    ecx = esp + 0xF4;
    edx = esp + 0x38;
    esi = 4;
    goto loc_0015CD20;

    /* nop */

loc_0015CD20: ;
    xmm0 = MEMF(ebp + 0x48); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0015CD3F; /* jnp: not parity */

loc_0015CD2E: ;
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_0029CFE0(); /* call 0x0029CFE0 */

loc_0015CD39: ;
    xmm4 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_0015CD3F: ;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(edx + -8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(edx + -4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(edx) = xmm0; /* movss */
    edx = edx + 0x30;
    ecx = ecx + 8;
    esi--;
    if ((esi != 0)) goto loc_0015CD20; /* jne: not equal / not zero */

loc_0015CD6F: ;
    eax = ebp + 0xFC;
    ecx = esp + 0x40;
    if (CMP_EQ(eax, ecx)) goto loc_0015CD92; /* je: equal / zero */

loc_0015CD7D: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */

loc_0015CD92: ;
    eax = ebp + 0x104;
    edx = esp + 0x70;
    if (CMP_EQ(eax, edx)) goto loc_0015CDB5; /* je: equal / zero */

loc_0015CDA0: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */

loc_0015CDB5: ;
    eax = ebp + 0x10C;
    ecx = esp + 0xA0;
    if (CMP_EQ(eax, ecx)) goto loc_0015CDE1; /* je: equal / zero */

loc_0015CDC6: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */

loc_0015CDE1: ;
    eax = ebp + 0x114;
    edx = esp + 0xD0;
    if (CMP_EQ(eax, edx)) goto loc_0015CE0D; /* je: equal / zero */

loc_0015CDF2: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */

loc_0015CE0D: ;
    eax = ebp + 0x11C;
    ecx = esp + 0x48;
    if (CMP_EQ(eax, ecx)) goto loc_0015CE30; /* je: equal / zero */

loc_0015CE1B: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */

loc_0015CE30: ;
    eax = ebp + 0x124;
    edx = esp + 0x78;
    if (CMP_EQ(eax, edx)) goto loc_0015CE53; /* je: equal / zero */

loc_0015CE3E: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */

loc_0015CE53: ;
    eax = ebp + 0x12C;
    ecx = esp + 0xA8;
    if (CMP_EQ(eax, ecx)) goto loc_0015CE7F; /* je: equal / zero */

loc_0015CE64: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */

loc_0015CE7F: ;
    eax = ebp + 0x134;
    edx = esp + 0xD8;
    if (CMP_EQ(eax, edx)) goto loc_0015CEAB; /* je: equal / zero */

loc_0015CE90: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */

loc_0015CEAB: ;
    eax = ebp + 0x13C;
    ecx = esp + 0x50;
    if (CMP_EQ(eax, ecx)) goto loc_0015CECE; /* je: equal / zero */

loc_0015CEB9: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */

loc_0015CECE: ;
    eax = ebp + 0x144;
    edx = esp + 0x80;
    if (CMP_EQ(eax, edx)) goto loc_0015CEFA; /* je: equal / zero */

loc_0015CEDF: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */

loc_0015CEFA: ;
    eax = ebp + 0x14C;
    ecx = esp + 0xB0;
    if (CMP_EQ(eax, ecx)) goto loc_0015CF26; /* je: equal / zero */

loc_0015CF0B: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */

loc_0015CF26: ;
    eax = ebp + 0x154;
    edx = esp + 0xE0;
    if (CMP_EQ(eax, edx)) goto loc_0015CF52; /* je: equal / zero */

loc_0015CF37: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */

loc_0015CF52: ;
    eax = ebp + 0x15C;
    ecx = esp + 0x58;
    if (CMP_EQ(eax, ecx)) goto loc_0015CF75; /* je: equal / zero */

loc_0015CF60: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */

loc_0015CF75: ;
    eax = ebp + 0x164;
    edx = esp + 0x88;
    if (CMP_EQ(eax, edx)) goto loc_0015CFA1; /* je: equal / zero */

loc_0015CF86: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */

loc_0015CFA1: ;
    eax = ebp + 0x16C;
    ecx = esp + 0xB8;
    if (CMP_EQ(eax, ecx)) goto loc_0015CFCD; /* je: equal / zero */

loc_0015CFB2: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */

loc_0015CFCD: ;
    eax = ebp + 0x174;
    edx = esp + 0xE8;
    if (CMP_EQ(eax, edx)) goto loc_0015CFF9; /* je: equal / zero */

loc_0015CFDE: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */

loc_0015CFF9: ;
    eax = MEM32(ebp + 0x40);
    if (TEST_Z(LO8(eax), 2)) goto loc_0015D100; /* je: equal / zero */

loc_0015D004: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm1 = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xD0); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x78); /* movss */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xD8); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xE0); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x88); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xE8); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xE8) = xmm0; /* movss */

loc_0015D100: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_0015D204; /* je: equal / zero */

loc_0015D108: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(esp + 0xD4); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xDC); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xAC); /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xE4); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xEC); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xBC); /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */

loc_0015D204: ;
    ecx = ZX8(MEM8(ebp + 0x4E));
    edx = ZX8(MEM8(ebp + 0x4D));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(ebp + 0x50));
    MEM32(esp + 0x10) = 0;
    SET_LO8(eax, MEM8(ebp + 0x4F));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xCC) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_0015D4F9; /* jle: less or equal (signed <=) */

loc_0015D244: ;
    eax = ebp + 0x80;
    MEM32(esp + 0x28) = eax;
    eax = ebp + 0x6C;
    MEM32(esp + 0x14) = eax;
    eax = 0xF1C;
    eax = eax - ebp;
    MEM32(esp + 0xF0) = eax;
    eax = 0xFFFFFFA0u;
    eax = eax - ebp;
    MEM32(esp + 0x24) = 0x547364;
    MEM32(esp + 0x20) = 0x41B0C;
    MEM32(esp + 0x18) = eax;
    edi = edi;

loc_0015D280: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    if (CMP_NE(eax, 0xFFFFFFFEu)) goto loc_0015D2B9; /* jne: not equal / not zero */

loc_0015D28B: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(0x847194);
    esi = esi << 2;
    if (CMP_EQ(MEM32(esi + 0x771764), edi)) goto loc_0015D3D3; /* je: equal / zero */

loc_0015D2A4: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015D2AE: ;
    MEM32(esi + 0x771764) = edi;
    goto loc_0015D3D3;

loc_0015D2B9: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0015D2ED; /* jne: not equal / not zero */

loc_0015D2BE: ;
    esi = MEM32(esp + 0x10);
    esi = esi << 2;
    eax = MEM32(esi + 0x771764);
    if (TEST_Z(eax, eax)) goto loc_0015D3D3; /* je: equal / zero */

loc_0015D2D3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015D2DE: ;
    MEM32(esi + 0x771764) = 0;
    goto loc_0015D3D3;

loc_0015D2ED: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0015D2F6: ;
    ebp = eax;
    esp = esp + 4;
    if (TEST_NZ(ebp, ebp)) goto loc_0015D395; /* jne: not equal / not zero */

loc_0015D303: ;
    edx = MEM32(esp + 0xF0);
    eax = MEM32(esp + 0x14);
    esi = MEM32(0x5499E8);
    edx = edx + eax;
    edi = MEM32(edx + esi);
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = edx + esi;
    if (TEST_Z(edi, edi)) goto loc_0015D33E; /* je: equal / zero */

loc_0015D320: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0015D33E; /* jne: not equal / not zero */

loc_0015D339: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0015D33E: ;
    MEM32(ebx) = 0;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0015D35A; /* jb: below (unsigned <) */

loc_0015D34B: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0015D35A: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    edx = edx + eax;
    eax = MEM32(0x5499F0);
    MEM32(edx + esi) = 0x80000000u;
    edx = MEM32(esp + 0x10);
    eax = eax | 0x4800;
    MEM32(0x5499F0) = eax;
    MEM32(edx * 4 + 0x771764) = ecx;

loc_0015D395: ;
    eax = MEM32(esp + 0x10);
    esi = eax * 4;
    if (CMP_EQ(MEM32(esi + 0x771764), ebp)) goto loc_0015D3D3; /* je: equal / zero */

loc_0015D3A8: ;
    ecx = MEM32(ebp + 4);
    if (CMP_A(ecx, 4)) goto loc_0015D3CD; /* ja: above (unsigned >) */

loc_0015D3B0: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x15D5C4); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0015D3B7u) goto loc_0015D3B7;
    if (_jt == 0x0015D3BCu) goto loc_0015D3BC;
    if (_jt == 0x0015D3C2u) goto loc_0015D3C2;
    if (_jt == 0x0015D3CDu) goto loc_0015D3CD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015D3B7: ;
    ecx = MEM32(ebp + 0x1C);
    goto loc_0015D3C7;

loc_0015D3BC: ;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, edx);
    goto loc_0015D3C8;

loc_0015D3C2: ;
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(edx);

loc_0015D3C7: ;
    PUSH32(esp, ecx);

loc_0015D3C8: ;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015D3CD: ;
    MEM32(esi + 0x771764) = ebp;

loc_0015D3D3: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, MEM32(esi + 0x7717E4) - flags set for next jcc */
    edi = 0x800;
    if (CMP_EQ(eax, MEM32(esi + 0x7717E4))) goto loc_0015D3FC; /* je: equal / zero */

loc_0015D3E7: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx + -4) = eax;
    MEM32(esi + 0x7717E4) = eax;
    goto loc_0015D400;

loc_0015D3FC: ;
    ecx = MEM32(esp + 0x24);

loc_0015D400: ;
    eax = MEM32(edx);
    if (CMP_EQ(eax, MEM32(esi + 0x7717D4))) goto loc_0015D418; /* je: equal / zero */

loc_0015D40A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx) = eax;
    MEM32(esi + 0x7717D4) = eax;

loc_0015D418: ;
    eax = MEM32(edx + 4);
    if (CMP_EQ(eax, MEM32(esi + 0x7717C4))) goto loc_0015D432; /* je: equal / zero */

loc_0015D423: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0x7717C4) = eax;

loc_0015D432: ;
    eax = MEM32(edx + 8);
    if (CMP_EQ(eax, MEM32(esi + 0x7717B4))) goto loc_0015D44C; /* je: equal / zero */

loc_0015D43D: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx + 8) = eax;
    MEM32(esi + 0x7717B4) = eax;

loc_0015D44C: ;
    eax = MEM32(edx + 0xC);
    if (CMP_EQ(eax, MEM32(esi + 0x7717A4))) goto loc_0015D466; /* je: equal / zero */

loc_0015D457: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx + 0xC) = eax;
    MEM32(esi + 0x7717A4) = eax;

loc_0015D466: ;
    eax = MEM32(edx + 0x10);
    if (CMP_EQ(eax, MEM32(esi + 0x771794))) goto loc_0015D480; /* je: equal / zero */

loc_0015D471: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx + 0x10) = eax;
    MEM32(esi + 0x771794) = eax;

loc_0015D480: ;
    eax = MEM32(edx + 0x14);
    if (CMP_EQ(eax, MEM32(esi + 0x771784))) goto loc_0015D49A; /* je: equal / zero */

loc_0015D48B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi + 0x771784) = eax;

loc_0015D49A: ;
    eax = MEM32(edx + 0x18);
    if (CMP_EQ(eax, MEM32(esi + 0x771774))) goto loc_0015D4B4; /* je: equal / zero */

loc_0015D4A5: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | edi;
    MEM32(ecx + 0x18) = eax;
    MEM32(esi + 0x771774) = eax;

loc_0015D4B4: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x14);
    ecx = ecx + 0x80;
    eax++;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x2C);
    ebx = ebx + 0x40;
    edx = edx + 0x20;
    esi = esi + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = esi;
    if (CMP_L(eax, ecx)) goto loc_0015D280; /* jl: less (signed <) */

loc_0015D4F0: ;
    ebp = MEM32(esp + 0x118);
    edi = ecx;

loc_0015D4F9: ;
    if (CMP_GE(edi, 4)) goto loc_0015D578; /* jge: greater or equal (signed >=) */

loc_0015D4FE: ;
    ecx = MEM32(edi * 4 + 0x7717E4);
    eax = 1;
    if (CMP_EQ(ecx, eax)) goto loc_0015D52A; /* je: equal / zero */

loc_0015D50E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    edx = edi;
    edx = edx << 7;
    MEM32(edx + 0x547360) = eax;
    MEM32(edi * 4 + 0x7717E4) = eax;

loc_0015D52A: ;
    if (CMP_EQ(MEM32(edi * 4 + 0x7717A4), eax)) goto loc_0015D557; /* je: equal / zero */

loc_0015D533: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x800;
    ecx = edi;
    ecx = ecx << 7;
    MEM32(0x5499F0) = esi;
    MEM32(ecx + 0x547370) = eax;
    MEM32(edi * 4 + 0x7717A4) = eax;

loc_0015D557: ;
    eax = MEM32(edi * 4 + 0x771764);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi * 4 + 0x771764;
    if (TEST_Z(eax, eax)) goto loc_0015D578; /* je: equal / zero */

loc_0015D569: ;
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0015D572: ;
    MEM32(esi) = 0;

loc_0015D578: ;
    edx = ZX8(MEM8(ebp + 0x4C));
    eax = MEM32(edx * 4 + 0x597E50);
    if (TEST_Z(eax, eax)) goto loc_0015D592; /* je: equal / zero */

loc_0015D587: ;
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015D58F: ;
    esp = esp + 8;

loc_0015D592: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0015D5A2: ;
    eax = ZX8(MEM8(ebp + 0x4C));
    eax = MEM32(eax * 4 + 0x597EA8);
    if (TEST_Z(eax, eax)) goto loc_0015D5B7; /* je: equal / zero */

loc_0015D5B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015D5B4: ;
    esp = esp + 4;

loc_0015D5B7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0015D5B9: ;
    POP32(esp, esi);

loc_0015D5BA: ;
    POP32(esp, ebp);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D5E0
 * Original: 0x0015D5E0 - 0x0015D691 (177 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D5E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_0015D5E0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x3C);
    if (CMP_LE(eax & eax, 0)) goto loc_0015D5F2; /* jle: less or equal (signed <=) */

loc_0015D5ED: ;
    if (CMP_LE(eax, 4)) goto loc_0015D5F9; /* jle: less or equal (signed <=) */

loc_0015D5F2: ;
    MEM32(ebx + 0x3C) = 1;

loc_0015D5F9: ;
    if (TEST_Z(ecx, ecx)) goto loc_0015D62A; /* je: equal / zero */

loc_0015D5FD: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0015D62A; /* jle: less or equal (signed <=) */

loc_0015D601: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0015D6F0(); /* call 0x0015D6F0 */

loc_0015D623: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015D68A; /* jne: not equal / not zero */

loc_0015D62A: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0015D638; /* je: equal / zero */

loc_0015D631: ;
    ecx = 0x72;
    goto loc_0015D66F;

loc_0015D638: ;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0015D643; /* jns: not sign (positive) */

loc_0015D63C: ;
    ecx = 0x86;
    goto loc_0015D66F;

loc_0015D643: ;
    if (TEST_Z(eax, 0x20000)) goto loc_0015D651; /* je: equal / zero */

loc_0015D64A: ;
    ecx = 0x80;
    goto loc_0015D66F;

loc_0015D651: ;
    if (TEST_Z(eax, 0x40000)) goto loc_0015D65F; /* je: equal / zero */

loc_0015D658: ;
    ecx = 0x7A;
    goto loc_0015D66F;

loc_0015D65F: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;
    ecx = eax;

loc_0015D66F: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = eax + 0x180;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015D683: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0015D691(); return; } /* jne: not equal / not zero */

loc_0015D68A: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D6F0
 * Original: 0x0015D6F0 - 0x0015D7DD (237 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D6F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015D6F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = 0x89;
    MEM32(esp + 0x10) = 0x72;
    MEM8(esp + 0xB) = LO8(ecx);
    PUSH32(esp, esi);
    /* nop */

loc_0015D710: ;
    eax = ZX8(LO8(ecx));
    edx = MEM32(esp + eax * 4 + 0x10);
    eax = MEM32(edx * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_0015D7C5; /* je: equal / zero */

loc_0015D726: ;
    ebp = MEM32(eax + 0xC);
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = edi;
    if (CMP_LE(edi & edi, 0)) goto loc_0015D7B7; /* jle: less or equal (signed <=) */

loc_0015D735: ;
    esi = MEM32(esp + 0x24);
    esi = esi + edi * 4 + -4;
    /* nop */

loc_0015D740: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0015D75C; /* jne: not equal / not zero */

loc_0015D744: ;
    ebx = ZX8(MEM8(eax + 0x4C));
    if (CMP_NE(ebx, MEM32(esi))) goto loc_0015D750; /* jne: not equal / not zero */

loc_0015D74C: ;
    SET_LO8(edx, 1);
    goto loc_0015D754;

loc_0015D750: ;
    ecx--;
    esi = esi - 4;

loc_0015D754: ;
    if (CMP_G(ecx & ecx, 0)) goto loc_0015D740; /* jg: greater (signed >) */

loc_0015D758: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0015D7B7; /* je: equal / zero */

loc_0015D75C: ;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 + MEMF(ecx + 4); /* addss */
    ecx = MEM32(esp + 0x1C);
    xmm2 = MEMF(ecx); /* movss */
    xmm3 = MEMF(eax + 0x2C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 < xmm2)) goto loc_0015D7B7; /* jb: below (unsigned <) */

loc_0015D789: ;
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 < xmm3)) goto loc_0015D7B7; /* jb: below (unsigned <) */

loc_0015D796: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_0015D7B7; /* jb: below (unsigned <) */

loc_0015D7A9: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 >= xmm2)) { sub_0015D7DD(); return; } /* jae: above or equal (unsigned >=) */

loc_0015D7B7: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = ebp;
    if (TEST_NZ(ebp, ebp)) goto loc_0015D726; /* jne: not equal / not zero */

loc_0015D7C1: ;
    SET_LO8(ecx, MEM8(esp + 0xF));

loc_0015D7C5: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    (void)0; /* cmp LO8(ecx), 2 - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(ecx);
    if (CMP_B(LO8(ecx), 2)) goto loc_0015D710; /* jb: below (unsigned <) */

loc_0015D7D4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D7F0
 * Original: 0x0015D7F0 - 0x0015D805 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D7F0(void)
{
    int _cf = 0; /* carry flag */

loc_0015D7F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x180);
    (void)0; /* cmp ecx, MEM32(0x7F9F60) - flags set for next jcc */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0015D810
 * Original: 0x0015D810 - 0x0015D840 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0015D810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0015D82B; /* je: equal / zero */

loc_0015D822: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0015D840(); return; } /* je: equal / zero */

loc_0015D82B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0015D83C: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015D890
 * Original: 0x0015D890 - 0x0015D94B (187 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D890(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0015D890: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_0015D94B(); return; } /* je: equal / zero */

loc_0015D8A7: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) { sub_0015D94B(); return; } /* jne: not equal / not zero */

loc_0015D8B6: ;
    ecx = ZX16(MEM16(ebx + 0x52));
    if (CMP_NE(MEM32(esi + 0x68), ecx)) { sub_0015D94B(); return; } /* jne: not equal / not zero */

loc_0015D8C3: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0015D945; /* je: equal / zero */

loc_0015D8CD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015D8D3: ;
    xmm1 = MEMF(0x64A458); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0015D916; /* jbe: below or equal (unsigned <=) */

loc_0015D8E0: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    edi = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015D960(); /* call 0x0015D960 */

loc_0015D913: ;
    esp = esp + 4;

loc_0015D916: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015D91B: ;
    xmm1 = MEMF(0x64A458); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0015D944; /* jbe: below or equal (unsigned <=) */

loc_0015D928: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0015DE50(); /* call 0x0015DE50 */

loc_0015D932: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    edi = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0015D960(); /* call 0x0015D960 */

loc_0015D941: ;
    esp = esp + 8;

loc_0015D944: ;
    POP32(esp, edi);

loc_0015D945: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D960
 * Original: 0x0015D960 - 0x0015DAE7 (391 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D960(void)
{
    float xmm0;

loc_0015D960: ;
    esp = esp - 0x70;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x78);
    xmm0 = MEMF(0x64908C); /* movss */
    eax = 5;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A454); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2DC); /* movss */
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = 0xFF;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64A450); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649060); /* movss */
    MEM16(esp + 0x32) = LO16(ecx);
    MEM8(esp + 0x4B) = LO8(ecx);
    MEM8(esp + 0x4A) = LO8(ecx);
    MEM8(esp + 0x49) = LO8(ecx);
    MEM8(esp + 0x4C) = LO8(ecx);
    MEM8(esp + 0x53) = LO8(ecx);
    MEM8(esp + 0x52) = LO8(ecx);
    MEM8(esp + 0x51) = LO8(ecx);
    MEM8(esp + 0x54) = LO8(ecx);
    MEM8(esp + 0x59) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEM8(esp + 0x70) = LO8(ecx);
    MEM8(esp + 0x72) = LO8(ecx);
    MEM8(esp + 0x73) = LO8(ecx);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    edx = 1;
    ecx = esp + 4;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3C) = 0xFFE1;
    MEM16(esp + 0x3E) = 0x50;
    MEM32(esp + 0x40) = 3;
    MEM32(esp + 0x44) = 2;
    MEM16(esp + 0x48) = 0x14;
    MEM16(esp + 0x4A) = 0x1E;
    MEM16(esp + 0x4C) = LO16(edx);
    MEM8(esp + 0x4E) = 4;
    MEM8(esp + 0x4F) = 2;
    MEM8(esp + 0x50) = 3;
    MEM8(esp + 0x57) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x5F) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x60) = LO8(eax);
    MEM8(esp + 0x62) = LO8(eax);
    MEM32(esp + 0x64) = 0x205;
    MEM32(esp + 0x68) = 0x63000;
    MEM16(esp + 0x6C) = 8;
    MEM16(esp + 0x6E) = 0x1F;
    MEM16(esp + 0x70) = LO16(edx);
    MEM8(esp + 0x72) = LO8(eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM8(esp + 0x79) = LO8(eax);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_0015DAD0: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0015DC80(); /* call 0x0015DC80 */

loc_0015DAD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0015DDE0(); /* call 0x0015DDE0 */

loc_0015DADF: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DAF0
 * Original: 0x0015DAF0 - 0x0015DC7B (395 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DAF0(void)
{
    float xmm0;

loc_0015DAF0: ;
    esp = esp - 0x70;
    xmm0 = MEMF(0x64A44C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A448); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A444); /* movss */
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = 0xFF;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A440); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1E0); /* movss */
    MEM16(esp + 0x2E) = LO16(ecx);
    MEM8(esp + 0x47) = LO8(ecx);
    MEM8(esp + 0x46) = LO8(ecx);
    MEM8(esp + 0x48) = LO8(ecx);
    MEM8(esp + 0x4F) = LO8(ecx);
    MEM8(esp + 0x4E) = LO8(ecx);
    MEM8(esp + 0x50) = LO8(ecx);
    MEM8(esp + 0x55) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x78);
    MEM32(esp + 0x10) = edx;
    edx = 2;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEM8(esp + 0x70) = LO8(ecx);
    MEM8(esp + 0x72) = LO8(ecx);
    MEM8(esp + 0x73) = LO8(ecx);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x3C) = edx;
    MEM8(esp + 0x47) = LO8(edx);
    SET_LO8(edx, 0xB4);
    ecx = esp + 4;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0xD;
    MEM32(esp + 0x10) = 8;
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3C) = 0xFFEC;
    MEM16(esp + 0x3E) = 0x32;
    MEM32(esp + 0x40) = 3;
    MEM16(esp + 0x48) = 0x14;
    MEM16(esp + 0x4A) = 0xF;
    MEM16(esp + 0x4C) = 1;
    MEM8(esp + 0x4E) = 4;
    MEM8(esp + 0x50) = 3;
    MEM8(esp + 0x51) = LO8(edx);
    MEM8(esp + 0x57) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x59) = LO8(edx);
    MEM8(esp + 0x5F) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x60) = LO8(eax);
    MEM8(esp + 0x62) = LO8(eax);
    MEM32(esp + 0x64) = 0x205;
    MEM32(esp + 0x68) = 0x63000;
    MEM16(esp + 0x6C) = 8;
    MEM16(esp + 0x6E) = 0x1F;
    MEM16(esp + 0x70) = 1;
    MEM8(esp + 0x72) = LO8(eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM8(esp + 0x79) = LO8(eax);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_0015DC64: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0015DC80(); /* call 0x0015DC80 */

loc_0015DC6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0015DDE0(); /* call 0x0015DDE0 */

loc_0015DC73: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DC80
 * Original: 0x0015DC80 - 0x0015DDD4 (340 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DC80(void)
{
    float xmm0, xmm1, xmm5;

loc_0015DC80: ;
    esp = esp - 0x7C;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esp + 0x2C) = 0x303;
    MEM32(esp + 0x30) = 0x2B;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DC9B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm5 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    MEM8(esp + 0x12) = LO8(eax);
    MEM8(esp + 0x13) = LO8(eax);
    edx = edx + 4;
    MEM16(esp + 4) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015DCD1: ;
    xmm1 = MEMF(0x5A0060); /* movss */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    MEMF(esp + 0x54) = xmm5; /* movss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEM16(esp + 0x34) = 3;
    MEM16(esp + 0x36) = 0x55;
    MEM16(esp + 0x38) = 1;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DD53: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DD5F: ;
    edx = MEM32(esp + 0x84);
    eax = eax & 1;
    esi = esi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM8(esp + 0x80) = LO8(eax);
    MEM8(esp + 0x81) = LO8(eax);
    MEM8(esp + 0x82) = LO8(eax);
    eax = 2;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    esi = esi << 6;
    eax = esp + 0x10;
    PUSH32(esp, 1);
    esi = esi | 0xC201;
    PUSH32(esp, eax);
    MEM32(esp + 0x84) = esi;
    MEM8(esp + 0x8F) = 4;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0015DDCC: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DDE0
 * Original: 0x0015DDE0 - 0x0015DE4C (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DDE0(void)
{
    float xmm0;

loc_0015DDE0: ;
    esp = esp - 8;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DDF1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 6) = 0;
    edx = edx + 3;
    MEM16(esp + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DE23: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = edx + 0x37;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0015DE48: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DE50
 * Original: 0x0015DE50 - 0x0015DE81 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE50(void)
{
    uint32_t ebp;

loc_0015DE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F45C8);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0015DE67: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x597F70);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0015DE7A: ;
    esp = esp + 0x14;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DE90
 * Original: 0x0015DE90 - 0x0015E0A2 (530 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE90(void)
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

loc_0015DE90: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    esi = MEM32(edi + 0x4C);
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(eax, MEM8(edi + 0x54));
    MEM8(edi + 0x54) = LO8(ecx);
    if (CMP_NE(MEM8(esi + 0x14), 1)) goto loc_0015DECD; /* jne: not equal / not zero */

loc_0015DEAB: ;
    if (CMP_EQ(MEM8(edi + 0x54), LO8(eax))) goto loc_0015E09C; /* je: equal / zero */

loc_0015DEB4: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0015DEC4: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_0015DECD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015DED2: ;
    xmm0 = xmm0 * MEMF(0x649FF4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EB0); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x50); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0015E09C; /* jbe: below or equal (unsigned <=) */

loc_0015DF01: ;
    xmm0 = MEMF(0x648FD8); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = 3;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649FF0); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649FEC); /* movss */
    MEM16(esp + 0x3A) = LO16(eax);
    MEM32(esp + 0x44) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649FE8); /* movss */
    edx = edx + eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM16(esp + 0x34) = 0x28;
    MEM16(esp + 0x36) = 0;
    MEM16(esp + 0x38) = 4;
    MEM16(esp + 0x3C) = 7;
    MEM32(esp + 0x40) = 4;
    MEM8(esp + 0x48) = 0x7E;
    MEM8(esp + 0x49) = 0xF9;
    MEM8(esp + 0x4A) = 0xFF;
    MEM8(esp + 0x4B) = 0x7F;
    MEM8(esp + 0x4C) = 0x80;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, ebx);

loc_0015DFA5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DFAA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x58) = ecx;
    edx = ZX8(LO8(ebx));
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    MEM32(esp + 0x58) = edx;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    /* fld st(0) */
    /* FPU: fsin  */
    MEM32(esp + 0x58) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    MEM32(esp + 0x58) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015DFFD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x81;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3EDEB853);
    SET_LO8(edx, LO8(edx) + 0x40);
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x60) = edx;
    eax = ZX8(LO8(ebx));
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    MEM32(esp + 0x60) = eax;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    MEM32(esp + 0x60) = ecx;
    eax = esp + 0x2C;
    /* fld st(0) */
    PUSH32(esp, eax);
    /* FPU: fsin  */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push((double)SMEM32(esp + 0x68)); /* fild */
    MEM32(esp + 0x68) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    SET_LO8(edx, MEM8(edi + 4));
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x6C)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_000A8B30(); /* call 0x000A8B30 */

loc_0015E079: ;
    xmm0 = MEMF(edi + 0x50); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x14;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x50) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0015DFA5; /* ja: above (unsigned >) */

loc_0015E09B: ;
    POP32(esp, ebx);

loc_0015E09C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0015E0B0
 * Original: 0x0015E0B0 - 0x0015E0E8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E0B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015E0B0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x4A)) goto loc_0015E0E7; /* jne: not equal / not zero */

loc_0015E0B7: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015E0E7; /* jne: not equal / not zero */

loc_0015E0C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015E0CC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015E0E6; /* jl: less (signed <) */

loc_0015E0D3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0015E0E8(); return; } /* je: equal / zero */

loc_0015E0E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015E0E3: ;
    esp = esp + 4;

loc_0015E0E6: ;
    POP32(esp, esi);

loc_0015E0E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E100
 * Original: 0x0015E100 - 0x0015E153 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E100: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x58));
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(LO8(ebx), 1)) { sub_0015E153(); return; } /* jne: not equal / not zero */

loc_0015E10E: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, 0);
    eax = 0x2A;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0015E11C: ;
    esp = esp + 8;
    PUSH32(esp, 0x41159999);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0xFFFFFFBBu);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0015E131: ;
    eax = MEM32(0x597F88);
    ecx = MEM32(0x597F8C);
    edx = MEM32(0x597F90);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_seh_ebp = ebp; sub_0015E220(); return; /* tail jmp 0x0015E220 */

}

/**
 * sub_0015E300
 * Original: 0x0015E300 - 0x0015E33E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E300(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015E300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    ecx = ZX8(MEM8(ecx + 0x139));
    edx = 0; /* xor self */
    ecx = ecx - edx;
    if ((ecx == 0)) { sub_0015E33E(); return; } /* je: equal / zero */

loc_0015E314: ;
    ecx--;
    ecx = MEM32(eax + 0x34);
    MEM8(ecx + 0x5A) = LO8(edx);
    edx = MEM32(eax + 0x34);
    SET_LO8(eax, 1);
    if ((ecx == 0)) goto loc_0015E330; /* je: equal / zero */

loc_0015E322: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(edx + 0x4C) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_0015E330: ;
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(edx + 0x4C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0015E350
 * Original: 0x0015E350 - 0x0015E38F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E350(void)
{

loc_0015E350: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015E359: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0xF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015E36B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCC);
    eax = edx;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    ecx = esi;
    SET_LO8(edx, 0xCC);
    PUSH32(esp, 0); sub_000FE860(); /* call 0x000FE860 */

loc_0015E38A: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E390
 * Original: 0x0015E390 - 0x0015E395 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E390(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E390: ;
    g_seh_ebp = ebp; sub_00178D80(); return; /* tail jmp 0x00178D80 */

}

/**
 * sub_0015E3A0
 * Original: 0x0015E3A0 - 0x0015E411 (113 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E3A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015E3A0: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esi + 0x10B));
    SET_LO16(ecx, MEM16(esi + 0x68));
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    MEM16(esp + 0xE) = LO16(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015E3C7: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_0015E40D; /* je: equal / zero */

loc_0015E3D0: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x45;
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x50) = edx;

loc_0015E40D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E420
 * Original: 0x0015E420 - 0x0015E49F (127 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E420(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015E420: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x14));
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015E449: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0015E49A; /* je: equal / zero */

loc_0015E450: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x46;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x39;
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

loc_0015E49A: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E4A0
 * Original: 0x0015E4A0 - 0x0015E4E1 (65 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E4A0: ;
    eax = ZX8(MEM8(0x774B20));
    eax--;
    if (CMP_A(eax, 9)) { sub_0015E4E1(); return; } /* ja: above (unsigned >) */

loc_0015E4AD: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x15E4E4)); return; /* indirect tail jmp */

    g_seh_ebp = ebp; sub_0015E510(); return; /* tail jmp 0x0015E510 */

    g_seh_ebp = ebp; sub_0015E5C0(); return; /* tail jmp 0x0015E5C0 */

    g_seh_ebp = ebp; sub_0015E600(); return; /* tail jmp 0x0015E600 */

    g_seh_ebp = ebp; sub_0015EBE0(); return; /* tail jmp 0x0015EBE0 */

    g_seh_ebp = ebp; sub_0015ECF0(); return; /* tail jmp 0x0015ECF0 */

    g_seh_ebp = ebp; sub_0015EE40(); return; /* tail jmp 0x0015EE40 */

    g_seh_ebp = ebp; sub_0015EFA0(); return; /* tail jmp 0x0015EFA0 */

    g_seh_ebp = ebp; sub_0015EE60(); return; /* tail jmp 0x0015EE60 */

    g_seh_ebp = ebp; sub_0015F1A0(); return; /* tail jmp 0x0015F1A0 */

}

/**
 * sub_0015E5C0
 * Original: 0x0015E5C0 - 0x0015E5F1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E5C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015E5C0: ;
    eax = MEM32(0x774B38);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 1;
    if (TEST_Z(eax, eax)) goto loc_0015E5D1; /* je: equal / zero */

loc_0015E5CE: ;
    MEM32(eax + 0x3C) = ecx;

loc_0015E5D1: ;
    eax = MEM32(0x774B3C);
    if (TEST_Z(eax, eax)) goto loc_0015E5DD; /* je: equal / zero */

loc_0015E5DA: ;
    MEM32(eax + 0x3C) = ecx;

loc_0015E5DD: ;
    eax = MEM32(0x774B40);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x774B20) = 3;
    if (TEST_Z(eax, eax)) goto loc_0015E5F0; /* je: equal / zero */

loc_0015E5ED: ;
    MEM32(eax + 0x3C) = ecx;

loc_0015E5F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E600
 * Original: 0x0015E600 - 0x0015E6BF (191 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E600(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015E600: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8493F4);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0015E661; /* je: equal / zero */

loc_0015E60C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015E64A; /* jne: not equal / not zero */

loc_0015E615: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015E61C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015E64A; /* jl: less (signed <) */

loc_0015E623: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0015E63E; /* je: equal / zero */

loc_0015E630: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015E633: ;
    esi = MEM32(0x8493F4);
    esp = esp + 4;
    goto loc_0015E64A;

loc_0015E63E: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015E64A: ;
    if (TEST_Z(esi, esi)) goto loc_0015E657; /* je: equal / zero */

loc_0015E64E: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0015E657: ;
    MEM32(0x8493F4) = 0;

loc_0015E661: ;
    edi = 0x774B24;

loc_0015E666: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0015E6AA; /* je: equal / zero */

loc_0015E66C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015E6A4; /* jne: not equal / not zero */

loc_0015E675: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015E67C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015E6A4; /* jl: less (signed <) */

loc_0015E683: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0015E698; /* je: equal / zero */

loc_0015E690: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015E693: ;
    esp = esp + 4;
    goto loc_0015E6A4;

loc_0015E698: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015E6A4: ;
    MEM32(edi) = 0;

loc_0015E6AA: ;
    edi = edi + 4;
    if (CMP_L(edi, 0x774B4C)) goto loc_0015E666; /* jl: less (signed <) */

loc_0015E6B5: ;
    POP32(esp, edi);
    MEM8(0x774B20) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E6C0
 * Original: 0x0015E6C0 - 0x0015E6E3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015E6C0: ;
    ecx = MEM32(0x7FA20C);
    eax = MEM32(esp + 4);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    MEM16(eax + 0x54) = MEM16(eax + 0x54) + LO16(ecx);
    if (CMP_LE(MEM16(eax + 0x54), 0x800)) goto loc_0015E6E2; /* jle: less or equal (signed <=) */

loc_0015E6DC: ;
    MEM16(eax + 0x54) = 0xF400;

loc_0015E6E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E6F0
 * Original: 0x0015E6F0 - 0x0015E858 (360 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E6F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0015E6F0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x7FA20C);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    if (TEST_Z(esi, esi)) goto loc_0015E7CB; /* je: equal / zero */

loc_0015E709: ;
    xmm1 = (float)(int32_t)MEM32(ecx + 0x34); /* cvtsi2ss */
    xmm2 = MEMF(ecx + 0x44); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0015E7CB; /* jp: parity */

loc_0015E720: ;
    eax = MEM32(ecx + 0x38);
    xmm1 = MEMF(ecx + 0x50); /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0015E73E; /* jbe: below or equal (unsigned <=) */

loc_0015E735: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    goto loc_0015E741;

loc_0015E73E: ;
    xmm3 = xmm1; /* movaps */

loc_0015E741: ;
    PUSH32(esp, edi);
    edi = edx + edx * 2;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm3 > xmm1)) goto loc_0015E7CB; /* ja: above (unsigned >) */

loc_0015E74F: ;
    (void)0; /* cmp eax, 0x154 - flags set for next jcc */
    MEMF(ecx + 0x50) = xmm2; /* movss */
    if (CMP_NE(eax, 0x154)) goto loc_0015E7AE; /* jne: not equal / not zero */

loc_0015E75B: ;
    eax = ZX8(MEM8(ecx + 0x65));
    eax = eax + edx * 8;
    if (CMP_LE(eax, 0xFF)) goto loc_0015E853; /* jle: less or equal (signed <=) */

loc_0015E76D: ;
    eax = esi + 1;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(ecx + 0x3C) = eax;
    if (CMP_NE(eax, 3)) goto loc_0015E851; /* jne: not equal / not zero */

loc_0015E77C: ;
    SET_LO8(edx, MEM8(ecx + 0x69));
    SET_LO8(eax, 8);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM32(ecx + 0x2C) = 0x58DF04;
    MEM8(ecx + 0x60) = LO8(eax);
    MEM8(ecx + 0x65) = 0xFF;
    MEM16(ecx + 0x5C) = 0x80;
    MEM16(ecx + 0x5E) = 0x10;
    MEMF(ecx + 0x44) = xmm0; /* movss */
    MEM32(ecx + 0x34) = 0;
    MEM8(ecx + 0x69) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015E7AE: ;
    xmm2 = xmm2 - MEMF(0x649140); /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm0 = xmm0 - xmm2; /* subss */
    if ((xmm0 > xmm2)) goto loc_0015E7C2; /* ja: above (unsigned >) */

loc_0015E7BF: ;
    xmm0 = xmm2; /* movaps */

loc_0015E7C2: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = eax + eax * 8;
    goto loc_0015E848;

loc_0015E7CB: ;
    xmm1 = MEMF(ecx + 0x50); /* movss */
    eax = edx + edx * 2;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(0x64913C); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(ecx + 0x50) = xmm1; /* movss */
    if ((xmm2 < xmm1)) goto loc_0015E826; /* jb: below (unsigned <) */

loc_0015E7ED: ;
    edx = ZX8(MEM8(ecx + 0x61));
    xmm3 = MEMF(ecx + 0x44); /* movss */
    xmm3 = xmm3 + MEMF(0x648D14); /* addss */
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    MEMF(ecx + 0x44) = xmm3; /* movss */
    if ((xmm3 < xmm4)) goto loc_0015E811; /* jb: below (unsigned <) */

loc_0015E80C: ;
    MEMF(ecx + 0x44) = xmm0; /* movss */

loc_0015E811: ;
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x648EC0); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(ecx + 0x50) = xmm1; /* movss */

loc_0015E826: ;
    xmm1 = MEMF(ecx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(0x649140); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm0 = xmm0 - xmm1; /* subss */
    if ((xmm0 > xmm1)) goto loc_0015E83F; /* ja: above (unsigned >) */

loc_0015E83C: ;
    xmm0 = xmm1; /* movaps */

loc_0015E83F: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax << 3;
    edx = eax;

loc_0015E848: ;
    eax = 0xFF;
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_0015E853; /* jns: not sign (positive) */

loc_0015E851: ;
    eax = 0; /* xor self */

loc_0015E853: ;
    MEM8(ecx + 0x65) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E860
 * Original: 0x0015E860 - 0x0015E8EB (139 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E860(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015E860: ;
    edx = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x34);
    if (CMP_NE(ecx, 0x1E)) goto loc_0015E887; /* jne: not equal / not zero */

loc_0015E874: ;
    eax = ZX8(MEM8(edi + 0x65));
    eax = eax + edx * 8;
    if (CMP_LE(eax, 0xFF)) goto loc_0015E884; /* jle: less or equal (signed <=) */

loc_0015E882: ;
    eax = 0; /* xor self */

loc_0015E884: ;
    MEM8(edi + 0x65) = LO8(eax);

loc_0015E887: ;
    ecx = ecx + edx * 2;
    if (CMP_LE(ecx, 0x1E)) goto loc_0015E894; /* jle: less or equal (signed <=) */

loc_0015E88F: ;
    ecx = 0x1E;

loc_0015E894: ;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xA8);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 4);
    MEM32(edi + 0x34) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = 0x1CC;
    edx = edx - eax;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = 0x154;
    MEMF(edi + 0x4C) = xmm0; /* movss */
    ecx = ecx - eax;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x50) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E8F0
 * Original: 0x0015E8F0 - 0x0015E944 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0015E8F0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x58));
    edx = 0x1000;
    (void)0; /* cmp LO16(ecx), LO16(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(LO16(ecx), LO16(edx))) goto loc_0015E91F; /* je: equal / zero */

loc_0015E905: ;
    esi = MEM32(0x7FA20C);
    esi = esi << 8;
    ecx = ecx + esi;
    (void)0; /* cmp LO16(ecx), LO16(edx) - flags set for next jcc */
    MEM16(eax + 0x58) = LO16(ecx);
    if (CMP_LE(LO16(ecx), LO16(edx))) goto loc_0015E942; /* jle: less or equal (signed <=) */

loc_0015E919: ;
    MEM16(eax + 0x58) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015E91F: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x5A));
    if (CMP_EQ(LO16(ecx), LO16(edx))) goto loc_0015E942; /* je: equal / zero */

loc_0015E92A: ;
    esi = MEM32(0x7FA20C);
    esi = esi << 8;
    ecx = ecx + esi;
    (void)0; /* cmp LO16(ecx), LO16(edx) - flags set for next jcc */
    MEM16(eax + 0x5A) = LO16(ecx);
    if (CMP_LE(LO16(ecx), LO16(edx))) goto loc_0015E942; /* jle: less or equal (signed <=) */

loc_0015E93E: ;
    MEM16(eax + 0x5A) = LO16(edx);

loc_0015E942: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E950
 * Original: 0x0015E950 - 0x0015E9ED (157 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E950: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = MEM32(esp + 0x58);
    ebp = MEM32(esp + 0x54);
    MEM32(esp + 0x1C) = eax;
    MEM16(esp + 0x24) = LO16(eax);
    eax = 0x1000;
    MEM16(esp + 0x3C) = LO16(eax);
    MEM16(esp + 0x3E) = LO16(eax);
    eax = 0x10;
    ebp = ebp + ebp;
    ebx = ebx + ebx;
    ecx = ebx;
    ecx = ecx << 0x10;
    edx = ebp;
    MEM16(esp + 0x40) = LO16(eax);
    MEM16(esp + 0x42) = LO16(eax);
    SET_LO8(eax, 0xFF);
    edx = edx & 0xFFFF;
    ecx = ecx | edx;
    MEM8(esp + 0x46) = LO8(eax);
    MEM8(esp + 0x49) = LO8(eax);
    eax = MEM32(0x7F9FD8);
    MEM32(esp + 0x18) = ecx;
    ecx = eax;
    edi = 0; /* xor self */
    ecx = (uint32_t)((int32_t)ecx >> 1);
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = 0x58DF0C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x38) = LO16(edi);
    MEM16(esp + 0x3A) = LO16(edi);
    MEM8(esp + 0x44) = 7;
    MEM8(esp + 0x45) = 2;
    MEM8(esp + 0x47) = 0;
    MEM8(esp + 0x48) = 0;
    if (CMP_GE(ebp, ecx)) { sub_0015E9ED(); return; } /* jge: greater or equal (signed >=) */

loc_0015E9E5: ;
    eax = eax - ebp;
    MEM32(esp + 0x54) = eax;
    g_seh_ebp = ebp; sub_0015E9F1(); return; /* tail jmp 0x0015E9F1 */

}

/**
 * sub_0015EB80
 * Original: 0x0015EB80 - 0x0015EBD6 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EB80(void)
{
    float xmm0, xmm1, xmm2;

loc_0015EB80: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x34);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x36);
    xmm1 = (float)(int32_t)MEM32(eax + 0x38); /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x40);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x3C);
    xmm0 = xmm0 / xmm1; /* divss */
    esi = esi - ecx;
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x3E);
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    ecx = ecx - edx;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EBE0
 * Original: 0x0015EBE0 - 0x0015ECE2 (258 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EBE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015EBE0: ;
    esp = esp - 0x40;
    xmm0 = MEMF(0x648EA0); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0x58;
    PUSH32(esp, esi);
    esi = MEM32(0x774B24);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    eax = 0x51;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x1C) = LO16(ebx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esp + 0x3D) = 1;
    MEM8(esp + 0x3C) = 6;
    MEM32(esp + 8) = 0x58DEDC;
    MEM8(esp + 0x3E) = 0xFF;
    MEM8(esp + 0x3F) = LO8(ebx);
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x41) = 0xFF;
    MEM16(esp + 0x30) = LO16(ebx);
    MEM16(esp + 0x32) = LO16(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    MEM8(esp + 0x44) = 1;
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x36) = LO16(eax);
    if (CMP_EQ(esi, ebx)) goto loc_0015ECA5; /* je: equal / zero */

loc_0015EC6E: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015ECA5; /* jne: not equal / not zero */

loc_0015EC76: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015EC7D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015ECA5; /* jl: less (signed <) */

loc_0015EC84: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015EC99; /* je: equal / zero */

loc_0015EC91: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015EC94: ;
    esp = esp + 4;
    goto loc_0015ECA5;

loc_0015EC99: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015ECA5: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015ECB9: ;
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x774B20) = 3;
    if (CMP_EQ(eax, ebx)) goto loc_0015ECD7; /* je: equal / zero */

loc_0015ECC7: ;
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0015ECD7: ;
    POP32(esp, esi);
    MEM32(0x774B24) = eax;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0015ECF0
 * Original: 0x0015ECF0 - 0x0015EE40 (336 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ECF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015ECF0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x774B24);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0015ED3E; /* je: equal / zero */

loc_0015ED01: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015ED38; /* jne: not equal / not zero */

loc_0015ED09: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015ED10: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015ED38; /* jl: less (signed <) */

loc_0015ED17: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015ED2C; /* je: equal / zero */

loc_0015ED24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015ED27: ;
    esp = esp + 4;
    goto loc_0015ED38;

loc_0015ED2C: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015ED38: ;
    MEM32(0x774B24) = ebx;

loc_0015ED3E: ;
    xmm0 = MEMF(0x648EA0); /* movss */
    esi = MEM32(0x774B30);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    eax = 0x58;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    eax = 0x1000;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEM16(esp + 0x1C) = LO16(ebx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM8(esp + 0x3D) = 0xF;
    MEM8(esp + 0x3C) = LO8(ebx);
    MEM32(esp + 8) = 0x58DEDC;
    MEM16(esp + 0x30) = LO16(ebx);
    MEM16(esp + 0x32) = LO16(ebx);
    MEM8(esp + 0x3E) = 0xFF;
    MEM8(esp + 0x3F) = LO8(ebx);
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x41) = 0xFF;
    MEM8(esp + 0x44) = 1;
    MEM8(esp + 0x45) = LO8(ebx);
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x36) = LO16(eax);
    if (CMP_EQ(esi, ebx)) goto loc_0015EE03; /* je: equal / zero */

loc_0015EDCC: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015EE03; /* jne: not equal / not zero */

loc_0015EDD4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015EDDB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015EE03; /* jl: less (signed <) */

loc_0015EDE2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015EDF7; /* je: equal / zero */

loc_0015EDEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015EDF2: ;
    esp = esp + 4;
    goto loc_0015EE03;

loc_0015EDF7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015EE03: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015EE17: ;
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x774B20) = 3;
    if (CMP_EQ(eax, ebx)) goto loc_0015EE35; /* je: equal / zero */

loc_0015EE25: ;
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0015EE35: ;
    POP32(esp, esi);
    MEM32(0x774B30) = eax;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE60
 * Original: 0x0015EE60 - 0x0015EE77 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE60(void)
{

loc_0015EE60: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0); sub_0015EE80(); /* call 0x0015EE80 */

loc_0015EE6C: ;
    esp = esp + 8;
    MEM8(0x774B20) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE80
 * Original: 0x0015EE80 - 0x0015EF91 (273 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015EE80: ;
    esp = esp - 0x40;
    xmm0 = (float)(int32_t)MEM32(esp + 0x44); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649140); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp * 4 + 0x774B24);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    eax = 0x51;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x20) = LO16(ebx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x41) = 1;
    MEM16(esp + 0x3C) = 0x58;
    MEM16(esp + 0x3E) = 0x40;
    MEM8(esp + 0x40) = 6;
    MEM32(esp + 0xC) = 0x58DEE4;
    MEM8(esp + 0x42) = 0xFF;
    MEM8(esp + 0x43) = LO8(ebx);
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = 0xFF;
    MEM16(esp + 0x34) = LO16(ebx);
    MEM16(esp + 0x36) = LO16(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x48) = 1;
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    if (CMP_EQ(esi, ebx)) goto loc_0015EF58; /* je: equal / zero */

loc_0015EF21: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015EF58; /* jne: not equal / not zero */

loc_0015EF29: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015EF30: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015EF58; /* jl: less (signed <) */

loc_0015EF37: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015EF4C; /* je: equal / zero */

loc_0015EF44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015EF47: ;
    esp = esp + 4;
    goto loc_0015EF58;

loc_0015EF4C: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015EF58: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015EF6C: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0015EF83; /* je: equal / zero */

loc_0015EF73: ;
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0015EF83: ;
    POP32(esp, esi);
    MEM32(ebp * 4 + 0x774B24) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EFA0
 * Original: 0x0015EFA0 - 0x0015F194 (500 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EFA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015EFA0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x774B28);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) goto loc_0015EFEF; /* je: equal / zero */

loc_0015EFB2: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015EFE9; /* jne: not equal / not zero */

loc_0015EFBA: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015EFC1: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015EFE9; /* jl: less (signed <) */

loc_0015EFC8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015EFDD; /* je: equal / zero */

loc_0015EFD5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015EFD8: ;
    esp = esp + 4;
    goto loc_0015EFE9;

loc_0015EFDD: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015EFE9: ;
    MEM32(0x774B28) = ebx;

loc_0015EFEF: ;
    xmm0 = MEMF(0x648EA0); /* movss */
    esi = MEM32(0x774B34);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649140); /* movss */
    eax = 0x1000;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x20) = LO16(ebx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x41) = LO8(ebx);
    MEM16(esp + 0x3C) = 0x40;
    MEM16(esp + 0x3E) = 0x40;
    MEM8(esp + 0x40) = 4;
    MEM32(esp + 0xC) = 0x58DEEC;
    MEM32(esp + 0x10) = 0x58DEF4;
    MEM16(esp + 0x34) = 0xF800;
    MEM16(esp + 0x36) = 9;
    MEM8(esp + 0x42) = 0xFF;
    MEM8(esp + 0x43) = LO8(ebx);
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = 0xFF;
    MEM8(esp + 0x48) = 2;
    MEM8(esp + 0x49) = 3;
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    if (CMP_EQ(esi, ebx)) goto loc_0015F0C0; /* je: equal / zero */

loc_0015F089: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F0C0; /* jne: not equal / not zero */

loc_0015F091: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F098: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015F0C0; /* jl: less (signed <) */

loc_0015F09F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F0B4; /* je: equal / zero */

loc_0015F0AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F0AF: ;
    esp = esp + 4;
    goto loc_0015F0C0;

loc_0015F0B4: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F0C0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F0D4: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0015F0E9; /* je: equal / zero */

loc_0015F0DB: ;
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0015F0E9: ;
    esi = MEM32(0x774B44);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x774B34) = eax;
    MEM16(esp + 0x34) = LO16(ebx);
    MEM16(esp + 0x36) = LO16(ebx);
    MEM16(esp + 0x3C) = 0x58;
    MEM16(esp + 0x3E) = 0x40;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0xC) = 0x58DEE4;
    MEM8(esp + 0x48) = 1;
    if (CMP_EQ(esi, ebx)) goto loc_0015F158; /* je: equal / zero */

loc_0015F121: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F158; /* jne: not equal / not zero */

loc_0015F129: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F130: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015F158; /* jl: less (signed <) */

loc_0015F137: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F14C; /* je: equal / zero */

loc_0015F144: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F147: ;
    esp = esp + 4;
    goto loc_0015F158;

loc_0015F14C: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F158: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F16C: ;
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x774B20) = 3;
    if (CMP_EQ(eax, ebx)) goto loc_0015F188; /* je: equal / zero */

loc_0015F17A: ;
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0015F188: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x774B44) = eax;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F1A0
 * Original: 0x0015F1A0 - 0x0015F50F (879 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F1A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F1A0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x774B2C);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) goto loc_0015F1EF; /* je: equal / zero */

loc_0015F1B2: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F1E9; /* jne: not equal / not zero */

loc_0015F1BA: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F1C1: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015F1E9; /* jl: less (signed <) */

loc_0015F1C8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F1DD; /* je: equal / zero */

loc_0015F1D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F1D8: ;
    esp = esp + 4;
    goto loc_0015F1E9;

loc_0015F1DD: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F1E9: ;
    MEM32(0x774B2C) = ebx;

loc_0015F1EF: ;
    xmm0 = MEMF(0x64A43C); /* movss */
    esi = MEM32(0x774B38);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    eax = 0x1000;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x34) = LO16(ebx);
    MEM16(esp + 0x36) = LO16(ebx);
    MEM16(esp + 0x20) = LO16(ebx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x41) = 3;
    MEM16(esp + 0x3C) = 0x40;
    MEM16(esp + 0x3E) = 0x10;
    MEM8(esp + 0x40) = 5;
    MEM32(esp + 0xC) = 0x58DEFC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = 0x12C;
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x42) = 0xFF;
    MEM8(esp + 0x43) = LO8(ebx);
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = 0x80;
    MEM8(esp + 0x48) = 1;
    MEM8(esp + 0x49) = 8;
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    if (CMP_EQ(esi, ebx)) goto loc_0015F2C9; /* je: equal / zero */

loc_0015F292: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F2C9; /* jne: not equal / not zero */

loc_0015F29A: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F2A1: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015F2C9; /* jl: less (signed <) */

loc_0015F2A8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F2BD; /* je: equal / zero */

loc_0015F2B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F2B8: ;
    esp = esp + 4;
    goto loc_0015F2C9;

loc_0015F2BD: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F2C9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F2DE: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, ebx)) goto loc_0015F2F5; /* je: equal / zero */

loc_0015F2E7: ;
    edi = ebp + 0x2C;
    ecx = 0x10;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0015F2F5: ;
    xmm0 = MEMF(0x649140); /* movss */
    (void)0; /* cmp MEM32(0x774B3C), ebx - flags set for next jcc */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x774B38) = ebp;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = 0x154;
    MEM8(esp + 0x49) = 0xFF;
    if (CMP_EQ(MEM32(0x774B3C), ebx)) goto loc_0015F36C; /* je: equal / zero */

loc_0015F334: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F36C; /* jne: not equal / not zero */

loc_0015F33C: ;
    edx = ebp;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F343: ;
    eax = MEM32(ebp);
    if (CMP_L(eax, 2)) goto loc_0015F36C; /* jl: less (signed <) */

loc_0015F34B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F360; /* je: equal / zero */

loc_0015F358: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F35B: ;
    esp = esp + 4;
    goto loc_0015F36C;

loc_0015F360: ;
    edx = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F36C: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F380: ;
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(eax, ebx)) goto loc_0015F396; /* je: equal / zero */

loc_0015F388: ;
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0015F396: ;
    xmm0 = MEMF(0x64A438); /* movss */
    MEM32(0x774B3C) = eax;
    (void)0; /* cmp MEM32(0x774B40), ebx - flags set for next jcc */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x14) = 2;
    MEM32(esp + 0x18) = 0x17C;
    MEM8(esp + 0x45) = 0x80;
    if (CMP_EQ(MEM32(0x774B40), ebx)) goto loc_0015F411; /* je: equal / zero */

loc_0015F3D4: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F411; /* jne: not equal / not zero */

loc_0015F3DC: ;
    esi = MEM32(0x774B38);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F3E9: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015F411; /* jl: less (signed <) */

loc_0015F3F0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F405; /* je: equal / zero */

loc_0015F3FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F400: ;
    esp = esp + 4;
    goto loc_0015F411;

loc_0015F405: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F411: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F425: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0015F43A; /* je: equal / zero */

loc_0015F42C: ;
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0015F43A: ;
    xmm0 = MEMF(0x64A43C); /* movss */
    esi = MEM32(0x774B48);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649140); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x774B40) = eax;
    MEM16(esp + 0x20) = LO16(ebx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x41) = LO8(ebx);
    MEM16(esp + 0x3C) = 0x58;
    MEM16(esp + 0x3E) = 0x40;
    MEM8(esp + 0x45) = 0xFF;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0xC) = 0x58DEE4;
    if (CMP_EQ(esi, ebx)) goto loc_0015F4D3; /* je: equal / zero */

loc_0015F49C: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_0015F4D3; /* jne: not equal / not zero */

loc_0015F4A4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015F4AB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015F4D3; /* jl: less (signed <) */

loc_0015F4B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_0015F4C7; /* je: equal / zero */

loc_0015F4BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015F4C2: ;
    esp = esp + 4;
    goto loc_0015F4D3;

loc_0015F4C7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0015F4D3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x8A);
    eax = 0x6C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F4E7: ;
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x774B20) = 3;
    if (CMP_EQ(eax, ebx)) goto loc_0015F503; /* je: equal / zero */

loc_0015F4F5: ;
    edi = eax + 0x2C;
    ecx = 0x10;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0015F503: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x774B48) = eax;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F510
 * Original: 0x0015F510 - 0x0015F5AD (157 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F510(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015F510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015F516: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x6492E8); /* addss */
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x56;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F545: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0015F5AB; /* je: equal / zero */

loc_0015F54C: ;
    xmm0 = MEMF(esp); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x3B) = 0;
    SET_LO8(edx, 1);
    MEM8(eax + 0x38) = LO8(edx);
    MEM8(eax + 0x2C) = LO8(edx);
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 0x4C) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x4E) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(eax + 0x50) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM16(eax + 0x52) = LO16(edx);
    MEM8(eax + 0x54) = LO8(ecx);

loc_0015F5AB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F5B0
 * Original: 0x0015F5B0 - 0x0015F785 (469 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F5B0(void)
{

loc_0015F5B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A6);
    PUSH32(esp, 0xFFFFF9D8u);
    PUSH32(esp, 0x23B);
    PUSH32(esp, 0x182);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F5CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFF6Fu);
    PUSH32(esp, 0xFFFFF745u);
    PUSH32(esp, 0x31D);
    PUSH32(esp, 0xFFFFFFE9u);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F5E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFF42u);
    PUSH32(esp, 0xFFFFF73Au);
    PUSH32(esp, 0x2E9);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F5FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E1);
    PUSH32(esp, 0xFFFFF933u);
    PUSH32(esp, 0x464);
    PUSH32(esp, 0x184);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F616: ;
    esp = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, 0x283);
    PUSH32(esp, 0xFFFFF9E8u);
    PUSH32(esp, 0x464);
    PUSH32(esp, 0x184);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F634: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x394);
    PUSH32(esp, 0xFFFFFBB0u);
    PUSH32(esp, 0x464);
    PUSH32(esp, 0x184);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F64F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFE14u);
    PUSH32(esp, 0xFFFFF5A2u);
    PUSH32(esp, 0x447);
    PUSH32(esp, 0x5B8);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F66A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F6);
    PUSH32(esp, 0xFFFFF681u);
    PUSH32(esp, 0x447);
    PUSH32(esp, 0x5A8);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F685: ;
    esp = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFE85u);
    PUSH32(esp, 0xFFFFF837u);
    PUSH32(esp, 0x45C);
    PUSH32(esp, 0x581);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F6A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFE6Cu);
    PUSH32(esp, 0xFFFFFDC7u);
    PUSH32(esp, 0x460);
    PUSH32(esp, 0x57B);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F6BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDF3u);
    PUSH32(esp, 0xFFFFFB0Fu);
    PUSH32(esp, 0x55B);
    PUSH32(esp, 0x604);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F6D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6C8);
    PUSH32(esp, 0xFFFFF921u);
    PUSH32(esp, 0x885);
    PUSH32(esp, 0x37C);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F6F4: ;
    esp = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, 0x676);
    PUSH32(esp, 0xFFFFFB37u);
    PUSH32(esp, 0x885);
    PUSH32(esp, 0x2FB);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F712: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x560);
    PUSH32(esp, 0xFFFFFC7Du);
    PUSH32(esp, 0x885);
    PUSH32(esp, 0x4B9);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F72D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDCBu);
    PUSH32(esp, 0xFFFFFCF3u);
    PUSH32(esp, 0x885);
    PUSH32(esp, 0x6B7);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F748: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x59D);
    PUSH32(esp, 0xFFFFFD7Cu);
    PUSH32(esp, 0x885);
    PUSH32(esp, 0x48A);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F763: ;
    esp = esp + 0x50;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFD91u);
    PUSH32(esp, 0xFFFFFB0Eu);
    PUSH32(esp, 0x885);
    PUSH32(esp, 0x78C);
    PUSH32(esp, 0); sub_0015F510(); /* call 0x0015F510 */

loc_0015F781: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F790
 * Original: 0x0015F790 - 0x0015F7F7 (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015F790: ;
    esp = esp - 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    MEM16(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F7A7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0015F7F3; /* je: equal / zero */

loc_0015F7AE: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x4F;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x3C;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = edx;

loc_0015F7F3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F800
 * Original: 0x0015F800 - 0x0015F9EC (492 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F800: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    esp = esp - 0x1D8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1E0);
    MEM16(ebp + 0x50) = MEM16(ebp + 0x50) - LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x50));
    if (((int32_t)MEM16(ebp + 0x50) >= 0)) goto loc_0015F9E4; /* jns: not sign (positive) */

loc_0015F822: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_0015F82D: ;
    esi = 1;
    MEM32(esp + 0x4C) = esi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015F83B: ;
    xmm0 = xmm0 * MEMF(0x6494C4); /* mulss */
    xmm0 = xmm0 - MEMF(0x6496C8); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649FE4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015F864: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015F87F: ;
    xmm0 = xmm0 * MEMF(0x649D04); /* mulss */
    xmm0 = xmm0 + MEMF(0x649278); /* addss */
    ebx = 0xFF;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    MEM32(esp + 0x50) = 0xAB;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x24) = 0x31;
    MEM16(esp + 0x28) = LO16(esi);
    MEM16(esp + 0x2A) = LO16(ebx);
    MEM8(esp + 0x30) = 7;
    MEM8(esp + 0x33) = LO8(ebx);
    MEM8(esp + 0x32) = LO8(ebx);
    MEM8(esp + 0x31) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015F8D8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + 0x4C);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x37) = LO8(ebx);
    MEM8(esp + 0x36) = LO8(ebx);
    MEM8(esp + 0x35) = LO8(ebx);
    MEM8(esp + 0x38) = LO8(ebx);
    MEM8(esp + 0x39) = LO8(ebx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    MEM32(esp + 0x160) = eax;
    MEM8(esp + 0x181) = 0;
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = 0;
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x34) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x2A8));
    MEM8(esp + 0x3A) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0015F952: ;
    SET_LO8(eax, MEM8(ebp + 4));
    xmm0 = xmm0 * MEMF(0x649FE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649FDC); /* addss */
    MEM8(esp + 0xC) = LO8(eax);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x72);
    eax = 0x204;
    MEMF(esp + 0x18C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0015F989: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0015F9CE; /* je: equal / zero */

loc_0015F990: ;
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x40);
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM8(eax + 0x17C) = 0xA;
    if (TEST_Z(LO8(ecx), 4)) goto loc_0015F9B3; /* je: equal / zero */

loc_0015F9AE: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_0015F9B6;

loc_0015F9B3: ;
    ecx = ecx | 4;

loc_0015F9B6: ;
    MEM32(eax + 0x40) = ecx;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x164;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0015F9CE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0015F9D3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x97;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    POP32(esp, ebx);
    edx = edx + 0x19;
    MEM16(ebp + 0x50) = LO16(edx);

loc_0015F9E4: ;
    POP32(esp, ebp);
    esp = esp + 0x1D8;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F9F0
 * Original: 0x0015F9F0 - 0x0015FA5E (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F9F0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x21)) goto loc_0015FA42; /* jne: not equal / not zero */

loc_0015F9FE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x4C))) goto loc_0015FA5C; /* jne: not equal / not zero */

loc_0015FA09: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015FA5C; /* jne: not equal / not zero */

loc_0015FA12: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0015FA19: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0015FA5C; /* jl: less (signed <) */

loc_0015FA20: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0015FA35; /* je: equal / zero */

loc_0015FA2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0015FA30: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015FA35: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0015FA42: ;
    if (TEST_NZ(eax, eax)) goto loc_0015FA5C; /* jne: not equal / not zero */

loc_0015FA46: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x564);
    if (CMP_NE(ecx, MEM32(esi + 0x4C))) goto loc_0015FA5C; /* jne: not equal / not zero */

loc_0015FA57: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0015FA5C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FA60
 * Original: 0x0015FA60 - 0x0015FA8A (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FA60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0015FA60: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x1A4); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x30); /* addss */
    /* comiss xmm0, MEMF(0x648EA0) - sets EFLAGS */
    MEMF(eax + 0x30) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648EA0))) { sub_0015FA8A(); return; } /* jbe: below or equal (unsigned <=) */

loc_0015FA87: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FA90
 * Original: 0x0015FA90 - 0x0015FAAD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FA90(void)
{
    uint32_t ebp;

loc_0015FA90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x198;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x17C;
    MEM32(esp + 0x14) = 0;
    g_seh_ebp = ebp; sub_0015FAB0(); return; /* tail jmp 0x0015FAB0 */

}

/**
 * sub_0015FC20
 * Original: 0x0015FC20 - 0x0015FCA0 (128 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FC20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0015FC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10C;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    SET_LO8(eax, MEM8(esi + 0x20C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015FC9B; /* jne: not equal / not zero */

loc_0015FC3D: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002D1EE0(); /* call 0x002D1EE0 */

loc_0015FC67: ;
    eax = MEM32(esp + 0x124);
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_0015FC9B; /* je: equal / zero */

loc_0015FC75: ;
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0x3F800000);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x174));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_0015FC98: ;
    esp = esp + 0x1C;

loc_0015FC9B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD90
 * Original: 0x0015FD90 - 0x0015FDD4 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm4;

loc_0015FD90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    SET_LO8(eax, MEM8(0x76F0E0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x64909C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm3 = MEMF(ebx + 0xD8); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0015FDD4(); return; } /* jne: not equal / not zero */

loc_0015FDD0: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0015FDE2(); return; /* tail jmp 0x0015FDE2 */

}

/**
 * sub_00160270
 * Original: 0x00160270 - 0x001604C8 (600 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160270(void)
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

loc_00160270: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0016028F; /* jne: not equal / not zero */

loc_00160282: ;
    if (CMP_NE(MEM8(0x76F0DC), 1)) goto loc_001604C6; /* jne: not equal / not zero */

loc_0016028F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = ebp;
    PUSH32(esp, 0); sub_00071070(); /* call 0x00071070 */

loc_0016029B: ;
    eax = MEM32(ebp + 0x230);
    if (TEST_NZ(eax, eax)) goto loc_001602AF; /* jne: not equal / not zero */

loc_001602A5: ;
    MEM32(ebp + 0x230) = 0;

loc_001602AF: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = 0; /* xor self */

loc_001602B8: ;
    ecx = MEM32(esi + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_001602C8; /* je: equal / zero */

loc_001602BF: ;
    if (CMP_EQ(MEM8(esi + 0x10B), 0x14)) goto loc_001602D8; /* je: equal / zero */

loc_001602C8: ;
    esi = esi + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_001602B8; /* jl: less (signed <) */

loc_001602D6: ;
    esi = 0; /* xor self */

loc_001602D8: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0xC7));
    PUSH32(esp, edi);
    eax = eax & 3;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_00160320; /* je: equal / zero */

loc_001602EA: ;
    eax = MEM32(esi + 0x3C4);
    if (TEST_NZ(eax, eax)) goto loc_001602FF; /* jne: not equal / not zero */

loc_001602F4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */
    goto loc_00160326;

loc_001602FF: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00160309: ;
    if (TEST_Z(eax, eax)) goto loc_00160317; /* je: equal / zero */

loc_0016030D: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    goto loc_0016031A;

loc_00160317: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0016031A: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_00160320: ;
    xmm0 = MEMF(esp + 0xC); /* movss */

loc_00160326: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x15C) = xmm1; /* movss */
    if (CMP_NE(edi, 2)) goto loc_001603D3; /* jne: not equal / not zero */

loc_0016033A: ;
    xmm1 = MEMF(0x648F58); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0016035F; /* jb: below (unsigned <) */

loc_00160347: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x15C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0016035F: ;
    if (TEST_NZ(esi, esi)) goto loc_001603B0; /* jne: not equal / not zero */

loc_00160363: ;
    SET_LO8(edx, 0x14);
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_0016036A: ;
    edx = MEM32(0x84A1AC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, eax);
    MEM8(ecx + edx + 0xA) = 0;
    PUSH32(esp, 0); sub_002B22E0(); /* call 0x002B22E0 */

loc_00160380: ;
    esi = MEM32(0x84A5F8);
    esp = esp + 4;
    eax = 0; /* xor self */
    goto loc_00160390;

    /* nop */

loc_00160390: ;
    ecx = MEM32(esi + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_001603A0; /* je: equal / zero */

loc_00160397: ;
    if (CMP_EQ(MEM8(esi + 0x10B), 0x14)) goto loc_001603B0; /* je: equal / zero */

loc_001603A0: ;
    esi = esi + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_00160390; /* jl: less (signed <) */

loc_001603AE: ;
    esi = 0; /* xor self */

loc_001603B0: ;
    if (CMP_EQ(MEM8(esi + 0x43D), 2)) goto loc_001604C3; /* je: equal / zero */

loc_001603BD: ;
    MEM8(esi + 0x43D) = 2;
    POP32(esp, edi);
    MEM32(esi + 0x420) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001603D3: ;
    if (CMP_EQ(edi, 3)) goto loc_00160403; /* je: equal / zero */

loc_001603D8: ;
    if (TEST_NZ(edi, edi)) goto loc_0016042A; /* jne: not equal / not zero */

loc_001603DC: ;
    /* comiss xmm0, MEMF(0x648E14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648E14))) goto loc_00160403; /* jb: below (unsigned <) */

loc_001603E5: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x15C) = (float)fp_top(); fp_popp(); /* fstp */

loc_00160403: ;
    if (TEST_Z(esi, esi)) goto loc_001604C3; /* je: equal / zero */

loc_0016040B: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D14))) goto loc_001604C3; /* jb: below (unsigned <) */

loc_00160418: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00160422: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0016042A: ;
    if (CMP_NE(edi, 1)) goto loc_001604C3; /* jne: not equal / not zero */

loc_00160433: ;
    /* comiss xmm0, MEMF(0x648E14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648E14))) goto loc_0016045A; /* jb: below (unsigned <) */

loc_0016043C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x15C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0016045A: ;
    if (TEST_NZ(esi, esi)) goto loc_001604A9; /* jne: not equal / not zero */

loc_0016045E: ;
    SET_LO8(edx, 0x14);
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_00160465: ;
    edx = MEM32(0x84A1AC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, eax);
    MEM8(ecx + edx + 0xA) = 0;
    PUSH32(esp, 0); sub_002B22E0(); /* call 0x002B22E0 */

loc_0016047B: ;
    esi = MEM32(0x84A5F8);
    esp = esp + 4;
    eax = 0; /* xor self */

loc_00160486: ;
    ecx = MEM32(esi + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00160496; /* je: equal / zero */

loc_0016048D: ;
    if (CMP_EQ(MEM8(esi + 0x10B), 0x14)) goto loc_001604A9; /* je: equal / zero */

loc_00160496: ;
    esi = esi + 0x6D0;
    eax++;
    if (CMP_L(eax, 0x81)) goto loc_00160486; /* jl: less (signed <) */

loc_001604A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001604A9: ;
    if (CMP_EQ(MEM8(esi + 0x43D), 3)) goto loc_001604C3; /* je: equal / zero */

loc_001604B2: ;
    MEM8(esi + 0x43D) = 3;
    MEM32(esi + 0x420) = 0;

loc_001604C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001604C6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001604D0
 * Original: 0x001604D0 - 0x00160536 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001604D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001604D0: ;
    esp = esp - 0x1C;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebp = ZX16(MEM16(edi + 0x8E));
    PUSH32(esp, 0xFF);
    ecx = esp + 0x20;
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    esi = edi;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_00073D90(); /* call 0x00073D90 */

loc_0016050A: ;
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(edi + 0xC7));
    esp = esp + 0xC;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x30) = 0x10;
    ebx = ebx & 3;
    if (TEST_NZ(ebp, ebp)) { sub_00160536(); return; } /* jne: not equal / not zero */

loc_0016052C: ;
    MEM32(esp + 0x10) = 0x82;
    g_seh_ebp = ebp; sub_0016054B(); return; /* tail jmp 0x0016054B */

}

/**
 * sub_00160910
 * Original: 0x00160910 - 0x00160ADF (463 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160910(void)
{
    float xmm0;

loc_00160910: ;
    esp = esp - 0x7C;
    xmm0 = MEMF(eax + 0x78); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x294); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00160954: ;
    xmm0 = MEMF(0x649E48); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD9C); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5F0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x648FD8); /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649060); /* movss */
    eax = 0x1E;
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD98); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD94); /* movss */
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x52) = LO16(eax);
    MEM16(esp + 0x56) = LO16(eax);
    MEM16(esp + 0x76) = LO16(eax);
    ecx = 8;
    eax = esp + 0x28;
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD90); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    MEM16(esp + 0x30) = 0x11;
    MEM16(esp + 0x32) = 7;
    MEM32(esp + 0x34) = 0x6C;
    MEM32(esp + 0x3C) = 0x205;
    MEM32(esp + 0x40) = esi;
    MEM16(esp + 0x44) = 0x28;
    MEM16(esp + 0x46) = 0x14;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = esi;
    MEM8(esp + 0x53) = 0xFF;
    MEM8(esp + 0x50) = 0x4E;
    MEM8(esp + 0x51) = 0x54;
    MEM8(esp + 0x52) = 0x7B;
    MEM8(esp + 0x54) = 0xA4;
    MEM8(esp + 0x55) = 0xA1;
    MEM8(esp + 0x56) = 0xC8;
    MEM8(esp + 0x57) = 0x9B;
    MEM8(esp + 0x58) = 0x64;
    MEM8(esp + 0x59) = 0xFF;
    MEM16(esp + 0x5C) = LO16(ecx);
    MEM16(esp + 0x78) = LO16(esi);
    MEM16(esp + 0x7A) = 0xFFEC;
    MEM16(esp + 0x7C) = 0xFF;
    MEM32(esp + 0x90) = 0x40040E07;
    MEM8(esp + 0x94) = 0x10;
    MEM8(esp + 0x95) = 0xFF;
    MEM8(esp + 0x96) = LO8(ecx);
    MEM8(esp + 0x97) = 6;
    MEM8(esp + 0x98) = 1;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F5420(); /* call 0x000F5420 */

loc_00160AD7: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00160AE0
 * Original: 0x00160AE0 - 0x00160D9D (701 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160AE0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160AE0: ;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    xmm0 = MEMF(edi + 0x60); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x68); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B084); /* movss */
    eax = 5;
    MEM32(esp + 0x8C) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64B080); /* movss */
    ebp = 0; /* xor self */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    PUSH32(esp, ebp);
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x98;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x6493AC); /* movss */
    PUSH32(esp, 1);
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64B07C); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 1);
    esi = esp + 0x30;
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x38) = ebx;
    MEM16(esp + 0x44) = LO16(ebp);
    MEM16(esp + 0x46) = 0xFF;
    MEM16(esp + 0x48) = 0xFFC0;
    MEM16(esp + 0x4A) = 0x22;
    MEM16(esp + 0x5C) = 0x1E;
    MEM16(esp + 0x5E) = 0xF;
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_00160C0F: ;
    eax = 0xE;
    ecx = 8;
    MEM16(esp + 0x30) = 5;
    MEM16(esp + 0x32) = LO16(ecx);
    MEM32(esp + 0x34) = 0x6C;
    MEM32(esp + 0x3C) = 0x205;
    MEM32(esp + 0x40) = ebp;
    MEM16(esp + 0x44) = 0x1E;
    MEM16(esp + 0x46) = 0xF;
    MEM32(esp + 0x48) = ebp;
    MEM32(esp + 0x4C) = ebp;
    MEM8(esp + 0x53) = 0xFF;
    MEM8(esp + 0x50) = 0x4E;
    MEM8(esp + 0x51) = 0x54;
    MEM8(esp + 0x52) = 0x7B;
    MEM8(esp + 0x54) = 0xA4;
    MEM8(esp + 0x55) = 0xA1;
    MEM8(esp + 0x56) = 0xC8;
    MEM8(esp + 0x57) = 0x64;
    MEM8(esp + 0x58) = 0x9B;
    MEM8(esp + 0x59) = 0xFF;
    MEM16(esp + 0x5A) = LO16(eax);
    MEM16(esp + 0x5C) = 0x12;
    MEM16(esp + 0x5E) = LO16(eax);
    xmm0 = MEMF(0x64B078); /* movss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64B074); /* movss */
    MEM8(esp + 0x96) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9DC); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x649C4C); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x64B070); /* movss */
    MEM32(esp + 0x74) = edx;
    edx = esp + 0x34;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x64B06C); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x80) = eax;
    MEM16(esp + 0x84) = LO16(ebp);
    MEM16(esp + 0x86) = 0xFFD8;
    MEM16(esp + 0x88) = 0xFF;
    MEM16(esp + 0x8A) = 0x28;
    MEM32(esp + 0x9C) = 0x840E07;
    MEM8(esp + 0xA0) = 0x10;
    MEM8(esp + 0xA1) = 0xFF;
    MEM8(esp + 0xA3) = 6;
    MEM8(esp + 0xA4) = 1;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F5420(); /* call 0x000F5420 */

loc_00160D8D: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_00160DA0
 * Original: 0x00160DA0 - 0x00160F1D (381 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160DA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00160DA0: ;
    esp = esp - 0x7C;
    edx = MEM32(eax);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6495B4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD8C); /* movss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD88); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x80);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A898); /* movss */
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD84); /* movss */
    edx = esp + 4;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD80); /* movss */
    MEM32(esp + 0x60) = edx;
    SET_LO8(edx, MEM8(esp + 0x84));
    MEM32(esp) = ecx;
    eax = esp;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x649DE8); /* movss */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = MEM32(esp + 0x88);
    ecx = 4;
    MEM32(esp + 0x5C) = eax;
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD7C); /* movss */
    MEM32(esp + 0x74) = ecx;
    MEM8(esp + 0x6C) = LO8(eax);
    ecx = esp + 8;
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = esp + 0x10;
    MEM32(esp + 0x7C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0D8); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = 9;
    MEM16(esp + 0x44) = 0x50;
    MEM16(esp + 0x46) = 0x3C;
    MEM32(esp + 0x70) = 1;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM32(esp + 0x7C) = 0x160F20;
    MEM16(esp + 0x18) = 0;
    MEM16(esp + 0x1A) = 0xFF;
    MEM16(esp + 0x1C) = 0xFFCE;
    MEM16(esp + 0x1E) = 0x23;
    PUSH32(esp, 0); sub_000F3120(); /* call 0x000F3120 */

loc_00160F16: ;
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_00160F20
 * Original: 0x00160F20 - 0x0016124F (815 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00160F20: ;
    esp = esp - 0x84;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00160F2C: ;
    esi = MEM32(esp + 0x8C);
    xmm1 = MEMF(esi + 0x290); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0016124F(); return; } /* jbe: below or equal (unsigned <=) */

loc_00160F44: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    eax = MEM32(esi + 0x9C);
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD78); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649D54); /* movss */
    edx = esp + 0x84;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x64AD74); /* mulss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    ecx = esi + 0x1B0;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, ebx);
    MEM32(esp + 0x88) = eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x64AD70); /* mulss */
    PUSH32(esp, edi);
    ecx = ecx >> 0xB;
    eax = esp + 0x88;
    SET_LO8(ecx, LO8(ecx) & 1);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD6C); /* movss */
    eax = esp + 0x80;
    MEM8(esp + 0x68) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    ebx = 0xFF;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x1C) = edi;
    MEM16(esp + 0x3C) = 0x28;
    MEM16(esp + 0x3E) = 0x1E;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEM32(esp + 0x68) = 1;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x74) = 0x13F5B0;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x7C) = edi;
    MEM16(esp + 0x88) = LO16(edi);
    MEM16(esp + 0x8A) = LO16(ebx);
    MEM16(esp + 0x8C) = 0xFFD6;
    MEM16(esp + 0x8E) = 0x19;
    PUSH32(esp, 0); sub_000F3120(); /* call 0x000F3120 */

loc_001610D1: ;
    ecx = 0x10;
    MEM16(esp + 0x18) = 1;
    MEM16(esp + 0x1A) = 2;
    MEM32(esp + 0x1C) = 0x6C;
    MEM32(esp + 0x24) = 0x205;
    MEM32(esp + 0x28) = edi;
    MEM16(esp + 0x2C) = 0x1E;
    MEM16(esp + 0x2E) = LO16(ecx);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = edi;
    MEM8(esp + 0x3B) = LO8(ebx);
    MEM8(esp + 0x38) = 0x4E;
    xmm0 = MEMF(0x64AD68); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD64); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x6498B0); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x60); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    SET_LO8(eax, 0xC8);
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x3F) = LO8(eax);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A120); /* movss */
    eax = 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x46) = LO16(eax);
    MEM16(esp + 0x4A) = LO16(eax);
    eax = esp + 0x1C;
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD60); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esp + 0x45) = 0x54;
    MEM8(esp + 0x46) = 0x7B;
    MEM8(esp + 0x48) = 0xA4;
    MEM8(esp + 0x49) = 0xA1;
    MEM8(esp + 0x4C) = 0x37;
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM16(esp + 0x50) = 0xC;
    MEM16(esp + 0x6C) = LO16(edi);
    MEM16(esp + 0x6E) = 0xFFEE;
    MEM16(esp + 0x70) = LO16(ebx);
    MEM16(esp + 0x72) = 0xB;
    MEM32(esp + 0x84) = 0x40040E07;
    MEM8(esp + 0x88) = LO8(ecx);
    MEM8(esp + 0x89) = 0xFF;
    MEM8(esp + 0x8A) = 8;
    MEM8(esp + 0x8B) = 6;
    MEM8(esp + 0x8C) = 1;
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F5420(); /* call 0x000F5420 */

loc_00161240: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_00161290
 * Original: 0x00161290 - 0x00161586 (758 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161290: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x64A434); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A430); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A42C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC0); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001612D2: ;
    xmm0 = xmm0 * MEMF(0x64A428); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E68); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001612F9: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 8;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    if (TEST_Z(eax, eax)) goto loc_00161353; /* je: equal / zero */

loc_00161307: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 5;
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ecx;

loc_00161353: ;
    xmm0 = MEMF(0x64A424); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x64A420); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A41C); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161384: ;
    xmm0 = xmm0 * MEMF(0x64A428); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E68); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001613AB: ;
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x28);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001613FE; /* je: equal / zero */

loc_001613BA: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 5;
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = eax + 0x3C;
    edx = 0; /* xor self */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x18);
    eax = eax + 0x4C;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ebp;

loc_001613FE: ;
    xmm0 = MEMF(0x64A418); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161411: ;
    xmm0 = xmm0 * MEMF(0x64A428); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E68); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00161438: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00161483; /* je: equal / zero */

loc_0016143F: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 5;
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x4C;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ebp;

loc_00161483: ;
    xmm0 = MEMF(0x64A434); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A414); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A42C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001614B2: ;
    xmm0 = xmm0 * MEMF(0x64A428); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E68); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001614D9: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0016152E; /* je: equal / zero */

loc_001614E2: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 5;
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;

loc_0016152E: ;
    eax = MEM32(0x773CC4);
    ecx = MEM32(0x773CC8);
    edx = MEM32(0x773CCC);
    MEM32(esp + 0xC) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x775324) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(0x775320) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(0x77531C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    MEMF(0x775318) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00161590
 * Original: 0x00161590 - 0x001615FC (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161590: ;
    esp = esp - 0xAC;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x18) = LO8(ecx);
    ecx = MEM32(eax + 0x68);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, 0x34 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM16(esp + 0x2C) = LO16(edx);
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM32(esp + 0x30) = edx;
    if (CMP_NE(ecx, 0x34)) goto loc_001615DE; /* jne: not equal / not zero */

loc_001615D2: ;
    MEM16(esp + 0x2C) = 0x54;
    MEM8(esp + 0x2E) = 1;

loc_001615DE: ;
    xmm0 = MEMF(esp + 0xB4); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_001615FC(); return; } /* jp: parity */

loc_001615F8: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00161601(); return; /* tail jmp 0x00161601 */

}

/**
 * sub_001618A0
 * Original: 0x001618A0 - 0x00161E88 (1512 bytes, 380 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001618A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;

loc_001618A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    eax = MEM32(esi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00161E74; /* je: equal / zero */

loc_001618C0: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) goto loc_00161E74; /* jne: not equal / not zero */

loc_001618CF: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00161E5F; /* je: equal / zero */

loc_001618DD: ;
    if (TEST_NZ(MEM8(ebx + 0x62), 2)) goto loc_00161E5F; /* jne: not equal / not zero */

loc_001618E7: ;
    edx = esi;
    eax = esp + 0xC0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001618F5: ;
    if (CMP_NE(MEM32(ebx + 0x64), 0xFFFFFFFFu)) goto loc_0016191D; /* jne: not equal / not zero */

loc_001618FB: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x96);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0016191A: ;
    MEM32(ebx + 0x64) = eax;

loc_0016191D: ;
    if (TEST_Z(MEM8(ebx + 0x62), 1)) goto loc_00161B5A; /* je: equal / zero */

loc_00161927: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00161E81; /* je: equal / zero */

loc_0016193D: ;
    ecx = MEM32(0x847200);
    if (TEST_Z(ecx, ecx)) goto loc_00161E81; /* je: equal / zero */

loc_0016194B: ;
    goto loc_00161950;

    /* nop */

loc_00161950: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    (void)0; /* cmp MEM8(ecx), LO8(eax) - flags set for next jcc */
    edi = MEM32(ecx + 0xE0);
    if (CMP_NE(MEM8(ecx), LO8(eax))) goto loc_00161979; /* jne: not equal / not zero */

loc_00161960: ;
    edx = ZX16(MEM16(ecx + 0xA));
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x60);
    if (CMP_NE(edx, eax)) goto loc_00161979; /* jne: not equal / not zero */

loc_0016196C: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00161986; /* je: equal / zero */

loc_00161974: ;
    eax--;
    MEM32(esp + 0x18) = eax;

loc_00161979: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = edi;
    if (TEST_NZ(edi, edi)) goto loc_00161950; /* jne: not equal / not zero */

loc_0016197F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00161986: ;
    eax = MEM32(esi + 0x534);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_001619AB; /* je: equal / zero */

loc_00161993: ;
    xmm0 = MEMF(esi + 0x524); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x520); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_001619B4;

loc_001619AB: ;
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_001619B4: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_00161A88; /* jne: not equal / not zero */

loc_001619C1: ;
    xmm0 = MEMF(0x64A214); /* movss */
    ecx = esp + 0x50;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x6496D4); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x64A43C); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    edx = esp + 0x20;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_00161A0F: ;
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 8);
    ecx = esp + 0x20;
    eax = esp + 0x74;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_00043D10(); /* call 0x00043D10 */

loc_00161A36: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    edx = esp + 0x30;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_00043DE0(); /* call 0x00043DE0 */

loc_00161A5C: ;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 4);
    esp = esp + 8;
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00161A83: ;
    goto loc_00161C1A;

loc_00161A88: ;
    xmm1 = MEMF(0x648D18); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    if (CMP_L(edx, 4)) goto loc_00161AA5; /* jl: less (signed <) */

loc_00161AA0: ;
    edx = 3;

loc_00161AA5: ;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648E14); /* mulss */
    eax = edx + edx * 2;
    eax = eax << 2;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0x59804C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x598050); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x598054); /* movss */
    eax = esp + 0x40;
    MEM32(esp + 0x4C) = eax;
    eax = esp + 0x34;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edx + 0x59807C));
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_00161B1E: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00161C1A; /* jne: not equal / not zero */

loc_00161B29: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EBC); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    goto loc_00161C1A;

loc_00161B5A: ;
    eax = MEM32(esi + 0x530);
    if (TEST_Z(eax, eax)) goto loc_00161B76; /* je: equal / zero */

loc_00161B64: ;
    xmm0 = (float)(int32_t)MEM32(esi + 0x52C); /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    goto loc_00161B7E;

loc_00161B76: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00161B7E: ;
    xmm1 = MEMF(0x648D20); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    if (CMP_L(ecx, 3)) goto loc_00161B9B; /* jl: less (signed <) */

loc_00161B96: ;
    ecx = 2;

loc_00161B9B: ;
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648F94); /* mulss */
    eax = ecx + ecx * 2;
    eax = eax << 2;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0x598028); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x59802C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x598030); /* movss */
    eax = MEM32(ecx * 4 + 0x6B718C);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00161C00: ;
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00161C17: ;
    esp = esp + 0x14;

loc_00161C1A: ;
    eax = MEM32(ebx + 0x58);
    if (TEST_Z(eax, eax)) goto loc_00161C42; /* je: equal / zero */

loc_00161C21: ;
    MEM8(eax + 0xA2) = 0xFF;
    ecx = MEM32(ebx + 0x58);
    edx = MEM32(esp + 0x34);
    ecx = ecx + 0x70;
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x38);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 8) = edx;

loc_00161C42: ;
    if (CMP_NE(MEM32(0x7FA1F8), 2)) goto loc_00161C5D; /* jne: not equal / not zero */

loc_00161C4B: ;
    ecx = ZX16(MEM16(esi + 0x60));
    eax = 0x4065;
    PUSH32(esp, 0); sub_003C68E0(); /* call 0x003C68E0 */

loc_00161C59: ;
    if (TEST_Z(eax, eax)) goto loc_00161CBD; /* je: equal / zero */

loc_00161C5D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161C62: ;
    xmm0 = xmm0 * MEMF(0x6490EC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AAC8); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00161CBD; /* jbe: below or equal (unsigned <=) */

loc_00161C8D: ;
    /* nop */

loc_00161C90: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 4));
    edi = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000BD140(); /* call 0x000BD140 */

loc_00161C9F: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 4;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00161C90; /* ja: above (unsigned >) */

loc_00161CBD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161CC2: ;
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm6 = MEMF(0x649228); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x5C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00161E81; /* jbe: below or equal (unsigned <=) */

loc_00161CF5: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_00161D09: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00161D17; /* jne: not equal / not zero */

loc_00161D10: ;
    esi = 0x595D14;
    goto loc_00161D25;

loc_00161D17: ;
    esi = MEM32(esp + 0x18);
    goto loc_00161D25;

loc_00161D1D: ;
    xmm6 = MEMF(0x649228); /* movss */

loc_00161D25: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161D2A: ;
    xmm0 = xmm0 * MEMF(0x64AAC4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AAC0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00161D45: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00161D56: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00161D65: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161D9E: ;
    xmm1 = MEMF(0x649688); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00161DAF; /* jbe: below or equal (unsigned <=) */

loc_00161DAB: ;
    SET_LO8(eax, 1);
    goto loc_00161DB1;

loc_00161DAF: ;
    SET_LO8(eax, 0); /* xor self */

loc_00161DB1: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    ecx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161DD5: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00161DF0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00161E00: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00161E11: ;
    xmm0 = xmm0 * MEMF(0x64AABC); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AAB8); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xC);
    eax = esp + 0x5C;
    ecx = esp + 0x68;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00161E36: ;
    xmm0 = MEMF(ebx + 0x5C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x34;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00161D1D; /* ja: above (unsigned >) */

loc_00161E58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00161E5F: ;
    ebx = MEM32(ebx + 0x58);
    if (TEST_Z(ebx, ebx)) goto loc_00161E81; /* je: equal / zero */

loc_00161E66: ;
    MEM8(ebx + 0xA2) = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00161E74: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */

loc_00161E81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00161E90
 * Original: 0x00161E90 - 0x00161EF4 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161E90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x58);
    if (TEST_Z(esi, esi)) goto loc_00161ED5; /* je: equal / zero */

loc_00161E9D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00161ED5; /* jne: not equal / not zero */

loc_00161EA6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00161EAD: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00161ED5; /* jl: less (signed <) */

loc_00161EB4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00161EC9; /* je: equal / zero */

loc_00161EC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00161EC4: ;
    esp = esp + 4;
    goto loc_00161ED5;

loc_00161EC9: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00161ED5: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00161EDD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00161EF4(); return; } /* jne: not equal / not zero */

loc_00161EE6: ;
    eax = edi;
    POP32(esp, edi);
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00161F00
 * Original: 0x00161F00 - 0x00161F6B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00161F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x58);
    if (TEST_Z(esi, esi)) goto loc_00161F57; /* je: equal / zero */

loc_00161F0D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00161F57; /* jne: not equal / not zero */

loc_00161F16: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00161F1D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00161F57; /* jl: less (signed <) */

loc_00161F24: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00161F4B; /* je: equal / zero */

loc_00161F31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00161F34: ;
    esp = esp + 4;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00161F3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00161F45: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00161F4B: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00161F57: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00161F5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00161F65: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161F70
 * Original: 0x00161F70 - 0x00161F85 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00161F70: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x55 - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = eax + 0x4C;
    if (CMP_NE(edx, 0x55)) { sub_00161F85(); return; } /* jne: not equal / not zero */

loc_00161F80: ;
    MEM8(ecx + 0x16) = MEM8(ecx + 0x16) & 0xFD;
    esp += 4; return; /* ret */

}

/**
 * sub_00161FB0
 * Original: 0x00161FB0 - 0x00162057 (167 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161FB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00161FB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0xC7));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_EQ(LO8(eax), 3)) goto loc_00162055; /* je: equal / zero */

loc_00161FC5: ;
    PUSH32(esp, 0xCF6);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0006DAB0(); /* call 0x0006DAB0 */

loc_00161FD1: ;
    SET_LO8(eax, MEM8(esi + 0x9F));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), 4)) goto loc_00161FF0; /* je: equal / zero */

loc_00161FDE: ;
    xmm0 = MEMF(esi + 0xB8); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0xE0); /* addss */
    goto loc_00162005;

loc_00161FF0: ;
    xmm1 = MEMF(esi + 0xE0); /* movss */
    xmm0 = MEMF(0x6494C4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0016200D; /* jbe: below or equal (unsigned <=) */

loc_00162005: ;
    MEMF(esi + 0xE0) = xmm0; /* movss */

loc_0016200D: ;
    xmm0 = MEMF(esi + 0xE0); /* movss */
    /* comiss xmm0, MEMF(0x648F60) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648F60))) goto loc_00162055; /* jbe: below or equal (unsigned <=) */

loc_0016201E: ;
    SET_LO8(ecx, MEM8(esi + 0xC7));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) | 3);
    MEM8(esi + 0xC7) = LO8(ecx);
    ecx = MEM32(0x847024);
    PUSH32(esp, edi);
    MEMF(esi + 0xB8) = xmm0; /* movss */
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(esi + 0xD0);
    edi = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00162054: ;
    POP32(esp, edi);

loc_00162055: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162060
 * Original: 0x00162060 - 0x00162171 (273 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162060(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00162060: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xDA);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xD8);
    xmm5 = MEMF(0x649138); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xDE);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x8E);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x8C);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xDC);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(0x649134); /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE2);
    xmm5 = xmm5 - xmm1; /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE0);
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    MEM16(eax + 0x14) = LO16(ecx);
    ecx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEM16(eax + 0x16) = LO16(ecx);
    ecx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM16(eax + 0x18) = LO16(ecx);
    if ((xmm0 <= xmm1)) goto loc_0016214A; /* jbe: below or equal (unsigned <=) */

loc_00162137: ;
    (void)0; /* cmp MEM8(eax + 0xC6), 0xFA - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    if (CMP_EQ(MEM8(eax + 0xC6), 0xFA)) goto loc_0016214A; /* je: equal / zero */

loc_00162143: ;
    MEM8(eax + 0xC2) = 1;

loc_0016214A: ;
    xmm1 = MEMF(0x649130); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = (int32_t)xmm4; /* cvttss2si */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x8E) = LO16(edx);
    MEM16(eax + 0x8C) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00162180
 * Original: 0x00162180 - 0x001621D8 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162180(void)
{
    uint32_t ebp;
    float xmm0;

loc_00162180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = (float)(int32_t)MEM32(ecx + 0x530); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F28); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_001621B3: ;
    edx = MEM32(ebp + 8);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001621C3: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001621D4: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001621E0
 * Original: 0x001621E0 - 0x00162238 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001621E0(void)
{
    uint32_t ebp;
    float xmm0;

loc_001621E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = (float)(int32_t)MEM32(ecx + 0x52C); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F28); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_00162213: ;
    edx = MEM32(ebp + 8);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00162223: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00162234: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00162240
 * Original: 0x00162240 - 0x00162540 (768 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_00162240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_00162539; /* je: equal / zero */

loc_00162259: ;
    xmm6 = MEMF(ebx + 0x264); /* movss */
    xmm6 = xmm6 + MEMF(ebx + 0x260); /* addss */
    xmm6 = xmm6 * MEMF(0x648D10); /* mulss */
    esi = esp + 0x6C;
    edi = esp + 0x68;
    ecx = esp + 0x5C;
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_00162282: ;
    edx = ebx;
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0016228D: ;
    esi = MEM32(ebp + 8);
    xmm0 = MEMF(0x6498C4); /* movss */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    edi = MEM32(esp + 0x68);
    ebx = MEM32(esp + 0x6C);
    PUSH32(esp, 0x425C0000);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x649278); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64B068); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B064); /* movss */
    PUSH32(esp, 0xA);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64B060); /* movss */
    PUSH32(esp, 0x5F45E8);
    MEM32(esp + 0x44) = eax;
    MEM16(esp + 0x54) = LO16(eax);
    eax = esp + 0x40;
    MEMF(esp + 0x70) = xmm6; /* movss */
    xmm6 = xmm6 * MEMF(0x648CF8); /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x5F4610);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = 0xA;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ecx;
    MEM16(esp + 0x5E) = 0xFF;
    MEM16(esp + 0x60) = 0xFFC0;
    MEM16(esp + 0x62) = 0x32;
    MEM16(esp + 0x74) = 0x4B;
    MEM16(esp + 0x76) = 0x28;
    MEMF(esp + 0x7C) = xmm6; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM32(esp + 0x88) = 0x13F750;
    PUSH32(esp, 0); sub_000F3460(); /* call 0x000F3460 */

loc_00162380: ;
    xmm0 = MEMF(0x649240); /* movss */
    ecx = MEM32(esp + 0x9C);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64912C); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x649824); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x649560); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x649EF0); /* movss */
    MEM32(esp + 0x48) = 0x11;
    MEM32(esp + 0x4C) = 9;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ecx;
    MEM16(esp + 0x5C) = 0;
    MEM16(esp + 0x5E) = 0xFF;
    MEM16(esp + 0x60) = 0xFFC1;
    MEM16(esp + 0x62) = 0x4B;
    MEM16(esp + 0x74) = 0x28;
    MEM16(esp + 0x76) = 0x14;
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64B05C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 1);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x64B058); /* movss */
    PUSH32(esp, 0x648D14);
    PUSH32(esp, 0x5F4AB0);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x5C;
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_00162452: ;
    xmm0 = MEMF(0x64B054); /* movss */
    edx = MEM32(esp + 0xB0);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64B050); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B04C); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x64B048); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64B044); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64B040); /* movss */
    eax = 3;
    MEM32(esp + 0x5C) = edi;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp + 0x4C;
    edi = esp + 0x10;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edx;
    MEM16(esp + 0x34) = 4;
    MEM16(esp + 0x36) = LO16(eax);
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    MEM16(esp + 0x3C) = 0x1E;
    MEM16(esp + 0x3E) = 0x14;
    MEM16(esp + 0x40) = 0x9B;
    MEM16(esp + 0x42) = 0x64;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM16(esp + 0x4C) = 0x10;
    MEM16(esp + 0x4E) = 0xF;
    MEM32(esp + 0x50) = 0;
    MEM8(esp + 0x44) = 0;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_00162525: ;
    MEM8(esp + 0x44) = 2;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_0016252F: ;
    MEM8(esp + 0x44) = 0xA;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_00162539: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00162590
 * Original: 0x00162590 - 0x0016260F (127 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162590(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00162590: ;
    ecx = MEM32(esp + 4);
    if (TEST_NZ(MEM8(ecx + 0xC7), 4)) goto loc_0016260E; /* jne: not equal / not zero */

loc_0016259D: ;
    eax = MEM32(0x8471B8);
    eax = MEM32(eax + 0x47C);
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax & 0xFFFF0000u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax & 0xFFFF0000u;
    MEM32(ecx + 0x8C) = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E90); /* mulss */
    MEMF(ecx + 0xBC) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0xC); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001625F8; /* jbe: below or equal (unsigned <=) */

loc_001625EA: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_001625F8: ;
    xmm1 = MEMF(0x648F60); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0016260E; /* jb: below (unsigned <) */

loc_00162605: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_0016260E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00162610
 * Original: 0x00162610 - 0x0016266C (92 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162610(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00162610: ;
    eax = MEM32(0x8471B8);
    eax = MEM32(eax + 0x47C);
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0xC); /* movss */
    eax = eax & 0xFFFF0000u;
    MEM32(ecx + 0x8C) = eax;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E90); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + 0xBC) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_0016266C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0016265E: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00162690
 * Original: 0x00162690 - 0x001626D5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00162690: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xD8);
    ecx = 0; /* xor self */
    if (CMP_NE(edx, ecx)) goto loc_001626AC; /* jne: not equal / not zero */

loc_001626A0: ;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0x8C) = ecx;

loc_001626AC: ;
    if (TEST_NZ(MEM8(eax + 0xC7), 4)) goto loc_001626D4; /* jne: not equal / not zero */

loc_001626B5: ;
    eax = MEM32(eax + 0xD8);
    if (CMP_EQ(eax, ecx)) goto loc_001626D4; /* je: equal / zero */

loc_001626BF: ;
    ecx = MEM32(0x8471B8);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x47C));
    edx = (uint32_t)((int32_t)edx >> 4);
    MEM8(eax + 0x13) = LO8(edx);

loc_001626D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001626E0
 * Original: 0x001626E0 - 0x001627D8 (248 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001626E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001626E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = (int32_t)MEMF(eax + ecx + 0x338); /* cvttss2si */
    eax = eax + ecx;
    ecx = (int32_t)MEMF(eax + 0x330); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 0x334); /* cvttss2si */
    ecx = ecx + 0x972;
    edx = edx - 0x6EF;
    eax = eax - 0x62F;
    if (((int32_t)eax >= 0)) goto loc_001627D7; /* jns: not sign (positive) */

loc_00162722: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = eax + edx;
    if (CMP_GE(eax, 0xC5C10)) goto loc_001627D7; /* jge: greater or equal (signed >=) */

loc_00162739: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016273E: ;
    eax = eax & 0xFFFF;
    if (CMP_GE(eax, 0x2000)) goto loc_001627D7; /* jge: greater or equal (signed >=) */

loc_0016274E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00162756: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x384;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00162765: ;
    SET_LO8(ebx, LO8(eax));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_00162770: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x649FD8); /* subss */
    SET_LO8(eax, LO8(ebx));
    esi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_00162787: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x649FD4); /* addss */
    edi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016279C: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x4B0);
    PUSH32(esp, 7);
    eax = eax & 0xFFFF;
    eax = eax << 1;
    PUSH32(esp, edi);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D48); /* mulss */
    PUSH32(esp, 0x62F);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    SET_LO8(eax, 0xA);
    PUSH32(esp, 0); sub_0011BA40(); /* call 0x0011BA40 */

loc_001627D1: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001627D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001627E0
 * Original: 0x001627E0 - 0x00162841 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001627E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001627E0: ;
    eax = MEM32(0x84A5F8);
    ecx = 0; /* xor self */
    SET_LO8(edx, 0xC);
    PUSH32(esp, esi);
    /* nop */

loc_001627F0: ;
    esi = MEM32(eax + 0x64);
    if (TEST_Z(esi, esi)) goto loc_001627FF; /* je: equal / zero */

loc_001627F7: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(edx))) goto loc_0016280F; /* je: equal / zero */

loc_001627FF: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_001627F0; /* jl: less (signed <) */

loc_0016280D: ;
    eax = 0; /* xor self */

loc_0016280F: ;
    ecx = (int32_t)MEMF(eax + 0x78); /* cvttss2si */
    edx = 0; /* xor self */
    SET_LO16(edx, LO16(ecx));
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    edx = edx - 0x1E;
    MEM16(ecx + 0x14) = LO16(edx);
    edx = (int32_t)MEMF(eax + 0x7C); /* cvttss2si */
    edx = edx + 0x32;
    MEM16(ecx + 0x16) = LO16(edx);
    eax = (int32_t)MEMF(eax + 0x80); /* cvttss2si */
    eax = eax + 0x1E;
    MEM16(ecx + 0x18) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00162850
 * Original: 0x00162850 - 0x00162A3F (495 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162850(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00162850: ;
    esp = esp - 0x24;
    ecx = MEM32(0x5980C4);
    eax = MEM32(0x5980C0);
    edx = MEM32(0x5980C8);
    MEM32(esp + 8) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(0x5980D0);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x5980CC);
    MEM32(esp + 0x14) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x10) = eax;
    eax = esp;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x5980D4);
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    MEM8(esp + 0x24) = 0;
    MEM32(esp + 0x1C) = edx;
    MEM8(esp + 4) = 1;
    PUSH32(esp, 0); sub_001586B0(); /* call 0x001586B0 */

loc_001628B0: ;
    edx = MEM32(0x5980DC);
    ecx = MEM32(0x5980D8);
    eax = MEM32(0x5980E0);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(0x5980E8);
    MEM32(esp + 0x18) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x5980E4);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5980EC);
    MEM32(esp + 0x14) = ecx;
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = esp + 4;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM8(esp + 8) = 2;
    PUSH32(esp, 0); sub_001586B0(); /* call 0x001586B0 */

loc_00162909: ;
    eax = MEM32(0x5980F4);
    edx = MEM32(0x5980F0);
    ecx = MEM32(0x5980F8);
    MEM32(esp + 0x10) = eax;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(0x598100);
    MEM32(esp + 0x1C) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x5980FC);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x598104);
    fp_top() = fabs(fp_top()); /* fabs */
    edx = esp + 8;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = ecx;
    MEM8(esp + 0xC) = 3;
    PUSH32(esp, 0); sub_001586B0(); /* call 0x001586B0 */

loc_00162962: ;
    eax = MEM32(0x598120);
    ecx = MEM32(0x598124);
    edx = MEM32(0x598128);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x59812C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x598130);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x598134);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = esp + 0xC;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = edx;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(esp + 0x10) = 5;
    PUSH32(esp, 0); sub_001586B0(); /* call 0x001586B0 */

loc_001629BB: ;
    xmm0 = MEMF(0x773CC4); /* movss */
    MEMF(0x775314) = xmm0; /* movss */
    xmm0 = MEMF(0x773CC8); /* movss */
    MEMF(0x775310) = xmm0; /* movss */
    xmm0 = MEMF(0x773CCC); /* movss */
    MEMF(0x77530C) = xmm0; /* movss */
    xmm0 = MEMF(0x773CAC); /* movss */
    MEMF(0x775308) = xmm0; /* movss */
    xmm0 = MEMF(0x773CB0); /* movss */
    MEMF(0x775304) = xmm0; /* movss */
    xmm0 = MEMF(0x773CB4); /* movss */
    MEMF(0x775300) = xmm0; /* movss */
    xmm0 = MEMF(0x773C78); /* movss */
    MEMF(0x7752FC) = xmm0; /* movss */
    xmm0 = MEMF(0x773C74); /* movss */
    MEMF(0x7752F8) = xmm0; /* movss */
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00162A40
 * Original: 0x00162A40 - 0x00162B0F (207 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162A40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00162A40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8493F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx + 6;
    MEM32(esp + 8) = 0xA;
    PUSH32(esp, edi);

loc_00162A55: ;
    SET_LO16(edi, MEM16(ecx));
    SET_LO16(eax, MEM16(ecx + 2));
    if (CMP_EQ(LO16(edi), LO16(eax))) goto loc_00162A9A; /* je: equal / zero */

loc_00162A61: ;
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    edx = SX16(LO16(eax));
    if (CMP_GE(LO16(edi) & LO16(edi), 0)) goto loc_00162A6B; /* jge: greater or equal (signed >=) */

loc_00162A69: ;
    edx = (uint32_t)(-(int32_t)edx);

loc_00162A6B: ;
    esi = SX16(LO16(edi));
    eax = edx;
    eax = eax - esi;
    esi = MEM32(0x7FA20C);
    esi = esi << 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00162A83; /* jge: greater or equal (signed >=) */

loc_00162A81: ;
    ebx = (uint32_t)(-(int32_t)ebx);

loc_00162A83: ;
    if (CMP_L(ebx, esi)) goto loc_00162A97; /* jl: less (signed <) */

loc_00162A87: ;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    edx = edx + edx + -1;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx + edi;

loc_00162A97: ;
    MEM16(ecx) = LO16(edx);

loc_00162A9A: ;
    SET_LO8(edx, MEM8(ecx + -4));
    SET_LO16(esi, ZX8(MEM8(0x7FA250)));
    SET_LO16(eax, SX8(LO8(edx)));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ecx)));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    SET_LO16(eax, LO16(eax) + MEM16(ecx + -2));
    (void)0; /* cmp LO16(eax), 0x500 - flags set for next jcc */
    MEM16(ecx + -2) = LO16(eax);
    if (CMP_L(LO16(eax), 0x500)) goto loc_00162ADD; /* jl: less (signed <) */

loc_00162ABE: ;
    esi = 0xA00;
    esi = esi - eax;
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    (void)0; /* cmp LO16(esi), 0x500 - flags set for next jcc */
    MEM16(ecx + -2) = LO16(esi);
    MEM8(ecx + -4) = LO8(edx);
    if (CMP_L(LO16(esi), 0x500)) goto loc_00162AF8; /* jl: less (signed <) */

loc_00162AD5: ;
    MEM16(ecx + -2) = 0x4FF;
    goto loc_00162AF8;

loc_00162ADD: ;
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00162AF8; /* jge: greater or equal (signed >=) */

loc_00162AE2: ;
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(ecx + -2) = LO16(eax);
    MEM8(ecx + -4) = LO8(edx);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00162AF8; /* jge: greater or equal (signed >=) */

loc_00162AF2: ;
    MEM16(ecx + -2) = 0;

loc_00162AF8: ;
    eax = MEM32(esp + 0xC);
    ecx = ecx + 0xA;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_00162A55; /* jne: not equal / not zero */

loc_00162B0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00162B10
 * Original: 0x00162B10 - 0x00162B1D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162B10: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) { sub_00162B1D(); return; } /* jne: not equal / not zero */

loc_00162B18: ;
    g_seh_ebp = ebp; sub_00162A40(); return; /* tail jmp 0x00162A40 */

}

/**
 * sub_00162B20
 * Original: 0x00162B20 - 0x00162B8B (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162B20: ;
    ecx = MEM32(0x8493F8);
    if (TEST_Z(ecx, ecx)) goto loc_00162B8A; /* je: equal / zero */

loc_00162B2A: ;
    if (TEST_S(eax, eax)) goto loc_00162B50; /* jl: less (signed <) */

loc_00162B2E: ;
    if (CMP_G(eax, 0xFF)) goto loc_00162B50; /* jg: greater (signed >) */

loc_00162B35: ;
    edx = MEM32(0x8493E4);
    if (TEST_Z(edx, edx)) goto loc_00162B50; /* je: equal / zero */

loc_00162B3F: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(edx + 0x50) = xmm0; /* movss */

loc_00162B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x32);
    esi = (uint32_t)((int32_t)esi >> 8);
    ebx = eax;
    PUSH32(esp, edi);
    esi = esi + 0x32;
    ebx = (uint32_t)((int32_t)ebx >> 8);
    edi = ecx + 8;
    ebp = 0xA;

loc_00162B72: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00162B77: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = edi + 0xA;
    edx = edx + ebx;
    ebp--;
    MEM16(edi + -10) = LO16(edx);
    if ((ebp != 0)) goto loc_00162B72; /* jne: not equal / not zero */

loc_00162B86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00162B8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00162B90
 * Original: 0x00162B90 - 0x00162BAF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00162B90: ;
    eax = MEM32(0x8493F8);
    ecx = 0xA;
    /* nop */

loc_00162BA0: ;
    if (CMP_BE(MEM8(eax), 1)) goto loc_00162BA8; /* jbe: below or equal (unsigned <=) */

loc_00162BA5: ;
    MEM8(eax) = 0;

loc_00162BA8: ;
    eax = eax + 0xA;
    ecx--;
    if ((ecx != 0)) goto loc_00162BA0; /* jne: not equal / not zero */

loc_00162BAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00162BB0
 * Original: 0x00162BB0 - 0x00162BC7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00162BB0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x3C4);
    if (TEST_NZ(eax, eax)) { sub_00162BC7(); return; } /* jne: not equal / not zero */

loc_00162BC2: ;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00162CF0
 * Original: 0x00162CF0 - 0x00162DDE (238 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162CF0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x5F4638);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00162D03: ;
    ebp = eax;
    eax = 0; /* xor self */
    ecx = 0x19;
    edi = ebp;
    esp = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x8493F8) = ebp;
    edi = 0; /* xor self */
    esi = ebp + 4;
    edi = edi;

loc_00162D20: ;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 2;
    MEM8(esi + -4) = LO8(edx);
    MEM8(esi + -2) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00162D36: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi++;
    esi = esi + 0xA;
    (void)0; /* cmp edi, 0xA - flags set for next jcc */
    MEM16(esi + -10) = LO16(edx);
    if (CMP_L(edi, 0xA)) goto loc_00162D20; /* jl: less (signed <) */

loc_00162D4B: ;
    if (TEST_Z(ebp, ebp)) goto loc_00162D8A; /* je: equal / zero */

loc_00162D4F: ;
    eax = MEM32(0x8493E4);
    if (TEST_Z(eax, eax)) goto loc_00162D65; /* je: equal / zero */

loc_00162D58: ;
    xmm0 = MEMF(0x649AB8); /* movss */
    MEMF(eax + 0x50) = xmm0; /* movss */

loc_00162D65: ;
    esi = ebp + 8;
    edi = 0xA;
    /* nop */

loc_00162D70: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00162D75: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x45;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = esi + 0xA;
    edx = edx + 0x75;
    edi--;
    MEM16(esi + -10) = LO16(edx);
    if ((edi != 0)) goto loc_00162D70; /* jne: not equal / not zero */

loc_00162D8A: ;
    SET_LO16(edx, MEM16(ebp + 8));
    SET_LO16(eax, MEM16(ebp + 0x12));
    SET_LO16(ecx, MEM16(ebp + 0x1C));
    MEM16(ebp + 6) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x26));
    MEM16(ebp + 0x10) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x30));
    MEM16(ebp + 0x1A) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x3A));
    MEM16(ebp + 0x24) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x44));
    MEM16(ebp + 0x2E) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x4E));
    MEM16(ebp + 0x38) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x58));
    MEM16(ebp + 0x42) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x62));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebp + 0x4C) = LO16(eax);
    MEM16(ebp + 0x56) = LO16(ecx);
    MEM16(ebp + 0x60) = LO16(edx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00162DE0
 * Original: 0x00162DE0 - 0x00162ECA (234 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162DE0: ;
    esp = esp - 8;
    PUSH32(esp, 0); sub_00162CF0(); /* call 0x00162CF0 */

loc_00162DE8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x50;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00162E02: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00162E45; /* je: equal / zero */

loc_00162E09: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x12;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0xE;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp);
    MEM32(eax + 0x4C) = ecx;

loc_00162E45: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00162E65: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00162EA2; /* je: equal / zero */

loc_00162E6C: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x17;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x14;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;

loc_00162EA2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x8493E4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00162EB8; /* je: equal / zero */

loc_00162EAB: ;
    edx = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = ecx;

loc_00162EB8: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x64);
    if (TEST_Z(eax, eax)) { sub_00162ECA(); return; } /* je: equal / zero */

loc_00162EC5: ;
    eax = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_00162ECC(); return; /* tail jmp 0x00162ECC */

}

/**
 * sub_00162F00
 * Original: 0x00162F00 - 0x0016300E (270 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162F00: ;
    xmm3 = MEMF(0x648F60); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    xmm1 = MEMF(esi + 0xB4); /* movss */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_00162F2A; /* jbe: below or equal (unsigned <=) */

loc_00162F26: ;
    xmm0 = xmm0 - xmm3; /* subss */

loc_00162F2A: ;
    ecx = MEM32(0x7FA20C);
    xmm0 = xmm0 * MEMF(0x649948); /* mulss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xD8);
    ebx = ebx + ecx;
    (void)0; /* cmp ebx, 0x100 - flags set for next jcc */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (CMP_L(ebx, 0x100)) goto loc_00162FB9; /* jl: less (signed <) */

loc_00162F53: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xF;
    ebx = ebx - 0x100;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00162FB1: ;
    xmm3 = MEMF(0x648F60); /* movss */

loc_00162FB9: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xD8) = ebx;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    if (CMP_BE(LO8(ebx), 0x40)) { sub_0016300E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00162FCA: ;
    if (CMP_BE(LO8(ebx), 0x80)) goto loc_00162FF8; /* jbe: below or equal (unsigned <=) */

loc_00162FCF: ;
    if (CMP_BE(LO8(ebx), 0xC0)) goto loc_00162FE7; /* jbe: below or equal (unsigned <=) */

loc_00162FD4: ;
    eax = ZX8(LO8(ebx));
    eax = eax << 2;
    ecx = 0x743490;
    ecx = ecx - eax;
    xmm0 = MEMF(ecx); /* movss */
    g_seh_ebp = ebp; sub_0016301A(); return; /* tail jmp 0x0016301A */

loc_00162FE7: ;
    edx = ZX8(LO8(ebx));
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    g_seh_ebp = ebp; sub_0016301A(); return; /* tail jmp 0x0016301A */

loc_00162FF8: ;
    eax = ZX8(LO8(ebx));
    eax = eax << 2;
    ecx = 0x743290;
    ecx = ecx - eax;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    g_seh_ebp = ebp; sub_0016301A(); return; /* tail jmp 0x0016301A */

}

/**
 * sub_00163090
 * Original: 0x00163090 - 0x0016314A (186 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163090: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + 0xC7));
    eax = eax & 3;
    ebp = eax;
    eax = MEM32(edi + 0xD8);
    if (TEST_NZ(eax, eax)) { sub_0016314A(); return; } /* jne: not equal / not zero */

loc_001630B1: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001630BF; /* jne: not equal / not zero */

loc_001630BA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001630BF: ;
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
    if (TEST_Z(esi, esi)) goto loc_00163109; /* je: equal / zero */

loc_001630E7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_00163109; /* jb: below (unsigned <) */

loc_001630F0: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001630FA: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00163102: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00163126; /* jne: not equal / not zero */

loc_00163109: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0016311B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00163123: ;
    esp = esp + 8;

loc_00163126: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0xD8) = eax;
    MEM8(edi + 0x148) = 1;
    POP32(esp, esi);
    MEM16(eax + 4) = 0;
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0016314D(); return; /* tail jmp 0x0016314D */

}

/**
 * sub_00163280
 * Original: 0x00163280 - 0x001632D9 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00163280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x774B4C;

loc_00163287: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_001632C5; /* je: equal / zero */

loc_0016328D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001632C5; /* jne: not equal / not zero */

loc_00163296: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0016329D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001632C5; /* jl: less (signed <) */

loc_001632A4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001632B9; /* je: equal / zero */

loc_001632B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001632B4: ;
    esp = esp + 4;
    goto loc_001632C5;

loc_001632B9: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001632C5: ;
    MEM32(edi) = 0;
    edi = edi + 4;
    if (CMP_L(edi, 0x774B5C)) goto loc_00163287; /* jl: less (signed <) */

loc_001632D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001632E0
 * Original: 0x001632E0 - 0x001632FD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001632E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001632E0: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) { sub_001632FD(); return; } /* jne: not equal / not zero */

loc_001632E9: ;
    SET_LO8(eax, MEM8(0x76F0DC));
    if (CMP_EQ(LO8(eax), 0xB)) goto loc_001632FA; /* je: equal / zero */

loc_001632F2: ;
    if (CMP_EQ(LO8(eax), 0xC)) goto loc_001632FA; /* je: equal / zero */

loc_001632F6: ;
    if (CMP_NE(LO8(eax), 0xD)) { sub_001632FD(); return; } /* jne: not equal / not zero */

loc_001632FA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00163360
 * Original: 0x00163360 - 0x0016364F (751 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163360(void)
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

loc_00163360: ;
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
    ebx = 0x6B7198;
    /* nop */

loc_001633B0: ;
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
    fp_push(MEMF(0x59D948)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00163639; /* jbe: below or equal (unsigned <=) */

loc_0016346B: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(0x64909C); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00163483; /* jbe: below or equal (unsigned <=) */

loc_00163480: ;
    xmm0 = xmm4; /* movaps */

loc_00163483: ;
    xmm5 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm5, MEMF(0x59D944) - sets EFLAGS */
    if ((xmm5 <= MEMF(0x59D944))) goto loc_001634AD; /* jbe: below or equal (unsigned <=) */

loc_00163492: ;
    xmm6 = MEMF(0x59D948); /* movss */
    xmm6 = xmm6 - xmm5; /* subss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 * MEMF(0x649FD0); /* mulss */
    xmm0 = xmm6; /* movaps */

loc_001634AD: ;
    PUSH32(esp, 0x1030000);
    PUSH32(esp, 0x191380);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEMF(esp + 0xC0) = xmm2; /* movss */
    xmm2 = MEMF(0x648D3C); /* movss */
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(0x64925C); /* movss */
    eax = esp + 0x74;
    PUSH32(esp, eax);
    MEMF(esp + 0x88) = xmm2; /* movss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    xmm2 = MEMF(0x648CF4); /* movss */
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0xD0) = xmm1; /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x8C) = xmm2; /* movss */
    xmm2 = MEMF(0x648EB0); /* movss */
    ecx = ebx + 0x18;
    PUSH32(esp, ecx);
    edx = ebx + 0x10;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    xmm2 = MEMF(0x649DC4); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    MEMF(esp + 0xA4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A08) = xmm2; /* movss */
    xmm2 = MEMF(0x649E68); /* movss */
    MEMF(0x6B7A18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0xA8;
    MEMF(esp + 0xE8) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(0x6B7A0C) = xmm2; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    MEMF(0x6B7A24) = xmm4; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_00163636: ;
    esp = esp + 0x30;

loc_00163639: ;
    ebx = ebx + 0x28;
    if (CMP_L(ebx, 0x6B7288)) goto loc_001633B0; /* jl: less (signed <) */

loc_00163648: ;
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
 * sub_00163650
 * Original: 0x00163650 - 0x00163659 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163650(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163650: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00163360(); return; /* tail jmp 0x00163360 */

}

/**
 * sub_001636E0
 * Original: 0x001636E0 - 0x00163724 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001636E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001636E0: ;
    eax = MEM32(ecx + 0x18);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_00163723; /* je: equal / zero */

loc_001636E9: ;
    PUSH32(esp, esi);
    MEM32(eax + 0x98) = MEM32(eax + 0x98) | 0x201;
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(0x595D14);
    esi = esi + 0x88;
    MEM32(esi) = edi;
    edi = MEM32(0x595D18);
    MEM32(esi + 4) = edi;
    edi = MEM32(0x595D1C);
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM8(eax + 0x170) = LO8(edx);
    MEM32(ecx + 0x18) = edx;
    POP32(esp, esi);

loc_00163723: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163730
 * Original: 0x00163730 - 0x00163994 (612 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163730(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00163730: ;
    xmm2 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x5C); /* movss */
    xmm1 = MEMF(esi + 0x60); /* movss */
    esi = esi + 0x4C;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEMF(esi + 0x14) = xmm1; /* movss */
    if ((xmm2 < xmm0)) { sub_00163994(); return; } /* jb: below (unsigned <) */

loc_00163768: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_001636E0(); /* call 0x001636E0 */

loc_00163771: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edi = MEM32(0x595D1C);
    eax = esi;
    ecx = MEM32(eax);
    MEM32(0x877E54) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(0x595D14);
    MEM32(0x877E58) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(0x595D18);
    MEM32(0x877E5C) = eax;
    eax = 0xFF;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x3C);
    MEM32(0x877E64) = edx;
    MEM32(0x877E70) = edx;
    SET_LO8(edx, LO8(edx) | 0xFF);
    MEM32(0x877E60) = ecx;
    MEM32(0x877E6C) = ecx;
    ecx = 2;
    PUSH32(esp, ebx);
    MEM8(0x877E85) = LO8(edx);
    MEM8(0x877E86) = LO8(edx);
    edx = 4;
    PUSH32(esp, ecx);
    MEMF(0x877E50) = xmm0; /* movss */
    MEMF(0x877E4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    PUSH32(esp, 0x877E10);
    MEM32(0x877E3C) = 0x2AA;
    MEM16(0x877E10) = 0xF0;
    MEMF(0x877E14) = xmm2; /* movss */
    MEMF(0x877E18) = xmm2; /* movss */
    MEM8(0x877E1C) = LO8(eax);
    MEM8(0x877E1D) = LO8(eax);
    MEM8(0x877E1E) = LO8(eax);
    MEM8(0x877E1F) = LO8(eax);
    MEM32(0x877E68) = edi;
    MEM32(0x877E74) = edi;
    MEMF(0x877E78) = xmm0; /* movss */
    MEM16(0x877E40) = 0xA0;
    MEM16(0x877E42) = LO16(ecx);
    MEM16(0x877E44) = 1;
    MEMF(0x877E48) = xmm2; /* movss */
    MEM32(0x877E7C) = 0x81C000;
    MEM8(0x877E84) = 0x2E;
    MEM8(0x877E87) = LO8(ebx);
    MEM32(0x877E80) = ebx;
    MEM8(0x877E88) = LO8(eax);
    MEM32(0x877E20) = edx;
    MEM32(0x877E24) = ecx;
    MEM32(0x877E28) = ebx;
    MEM32(0x877E2C) = edx;
    MEM32(0x877E30) = ecx;
    MEM32(0x877E34) = ebx;
    MEM32(0x877E38) = 0x303;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001638C1: ;
    edi = eax;
    esp = esp + 0x14;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 0x18) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_00163990; /* je: equal / zero */

loc_001638D1: ;
    xmm0 = MEMF(0x648D80); /* movss */
    MEM8(edi + 0x170) = 1;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0x180) = ecx;
    MEMF(edi + 0x184) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001638F6: ;
    xmm0 = xmm0 * MEMF(esi + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    MEMF(edi + 0x188) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(edi + 0x18C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(edi + 0x190) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016392D: ;
    MEMF(edi + 0x194) = xmm0; /* movss */
    xmm0 = MEMF(0x649098); /* movss */
    MEMF(edi + 0x198) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x19C) = xmm0; /* movss */
    edx = esi;
    eax = MEM32(edx);
    edi = edi + 0x174;
    MEM32(edi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016396D: ;
    xmm0 = xmm0 * MEMF(esi + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00163981: ;
    xmm0 = xmm0 * MEMF(esi + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    MEMF(esi + 0x14) = xmm0; /* movss */

loc_00163990: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00163A00
 * Original: 0x00163A00 - 0x00163B8D (397 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163A00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00163A00: ;
    esp = esp - 0xD4;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    eax = 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(esp + 0x98) = LO8(eax);
    MEM16(esp + 0xCC) = LO16(eax);
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x8C) = 0xC0500;
    MEM32(esp + 0x90) = 0x12C;
    MEM32(esp + 0x94) = 0x21;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = 0x121460;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x121490;
    MEM8(esp + 0xC8) = LO8(ebx);
    MEM32(esp + 0xCC) = ebx;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM16(esp + 0xD2) = 1;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00163B4D: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00163B86; /* je: equal / zero */

loc_00163B55: ;
    ecx = MEM32(esp + 0xD8);
    PUSH32(esp, esi);
    MEM32(eax + 0x290) = ecx;
    eax = eax + 0x110;
    edx = 2;
    PUSH32(esp, edi);
    edi = edi;

loc_00163B70: ;
    edi = eax;
    ecx = 0x10;
    esi = 0x5A0350;
    eax = eax + 0x40;
    edx--;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if ((edx != 0)) goto loc_00163B70; /* jne: not equal / not zero */

loc_00163B84: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00163B86: ;
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_00163B90
 * Original: 0x00163B90 - 0x00163DC1 (561 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + 0x24);
    ebp = MEM32(ecx + 8);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm1 = (float)(int32_t)MEM32(esi + 0xB4); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    ebx = MEM32(esi + 0x58);
    if (TEST_Z(ebp, ebp)) goto loc_00163DBB; /* je: equal / zero */

loc_00163BBB: ;
    if (TEST_Z(ebx, ebx)) goto loc_00163DBB; /* je: equal / zero */

loc_00163BC3: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xB0);
    if (TEST_NZ(edi, edi)) goto loc_00163C17; /* jne: not equal / not zero */

loc_00163BCE: ;
    edi = MEM32(esp + 0x18);
    MEM8(esi + 0x1B) = 0xC;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 8);
    esi = MEM32(ebx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);
    eax = MEM32(edi + 0x52C);
    if (TEST_Z(eax, eax)) goto loc_00163DBA; /* je: equal / zero */

loc_00163C09: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + 8);
    goto loc_00163D94;

loc_00163C17: ;
    xmm2 = MEMF(0x7F9F5C); /* movss */
    eax = (int32_t)xmm2; /* cvttss2si */
    if (CMP_GE(edi, eax)) goto loc_00163C52; /* jge: greater or equal (signed >=) */

loc_00163C27: ;
    edi = MEM32(esi + 0xB0);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00163C32: ;
    eax = eax & 1;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 / xmm2; /* divss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    goto loc_00163CD4;

loc_00163C52: ;
    ecx = eax + eax * 4;
    if (CMP_GE(edi, ecx)) goto loc_00163C7F; /* jge: greater or equal (signed >=) */

loc_00163C59: ;
    xmm2 = xmm2 * MEMF(0x648D18); /* mulss */
    ecx = edi;
    ecx = ecx - eax;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    goto loc_00163CD4;

loc_00163C7F: ;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm2 + xmm3; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00163CBC; /* jbe: below or equal (unsigned <=) */

loc_00163C9C: ;
    /* comiss xmm1, MEMF(0x648F58) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648F58))) goto loc_00163CAF; /* jbe: below or equal (unsigned <=) */

loc_00163CA5: ;
    xmm0 = MEMF(0x648E14); /* movss */
    goto loc_00163CD4;

loc_00163CAF: ;
    xmm1 = xmm1 + MEMF(0x648E14); /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00163CD4;

loc_00163CBC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */

loc_00163CD4: ;
    eax = MEM32(0x7FA20C);
    if (CMP_G(edi, eax)) goto loc_00163CE9; /* jg: greater (signed >) */

loc_00163CDD: ;
    MEM32(esi + 0xB0) = 0;
    goto loc_00163CF1;

loc_00163CE9: ;
    edi = edi - eax;
    MEM32(esi + 0xB0) = edi;

loc_00163CF1: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EEC); /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esi + 0xB4) = edx;
    if (1 /* jnp after test - parity */) goto loc_00163D79; /* jnp: not parity */

loc_00163D13: ;
    if (CMP_EQ(MEM8(esi + 0x1B), 2)) goto loc_00163D37; /* je: equal / zero */

loc_00163D19: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00163D1E: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    eax = eax & 7;
    eax = eax + 0x44B;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0); sub_00024EB0(); /* call 0x00024EB0 */

loc_00163D37: ;
    edi = MEM32(esp + 0x18);
    MEM8(esi + 0x1B) = 2;
    eax = MEM32(edi + 0x52C);
    edx = 1;
    if (CMP_EQ(eax, edx)) goto loc_00163DBA; /* je: equal / zero */

loc_00163D4E: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + 8);
    esi = MEM32(ebx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    ebx = 0x80;
    ebx = (uint32_t)((int32_t)ebx >> LO8(ecx));
    eax = eax >> 3;
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(ebx);
    MEM32(edi + 0x52C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00163D79: ;
    edi = MEM32(esp + 0x18);
    MEM8(esi + 0x1B) = 0xC;
    eax = MEM32(edi + 0x52C);
    if (TEST_Z(eax, eax)) goto loc_00163DBA; /* je: equal / zero */

loc_00163D8B: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 8);

loc_00163D94: ;
    esi = MEM32(ebx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);
    MEM32(edi + 0x52C) = 0;

loc_00163DBA: ;
    POP32(esp, edi);

loc_00163DBB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00163DD0
 * Original: 0x00163DD0 - 0x00163EB6 (230 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163DD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00163DD0: ;
    edx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00163E83; /* jle: less or equal (signed <=) */

loc_00163DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;
    /* nop */

loc_00163DF0: ;
    if (CMP_EQ(MEM8(ecx), 4)) goto loc_00163E05; /* je: equal / zero */

loc_00163DF5: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_00163DF0; /* jl: less (signed <) */

loc_00163E00: ;
    goto loc_00163E82;

loc_00163E05: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    if (TEST_Z(eax, eax)) goto loc_00163E82; /* je: equal / zero */

loc_00163E11: ;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    fp_push(MEMF(0x649054)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00163E3F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(0x84B4A0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ecx + 0xF0) = LO16(eax);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00163E67: ;
    edx = MEM32(0x84B4A0);
    MEM16(edx + 0xF2) = LO16(eax);
    eax = MEM32(0x84B4A0);
    MEM16(eax + 0xF4) = 0xF8F3;

loc_00163E82: ;
    POP32(esp, esi);

loc_00163E83: ;
    SET_LO8(eax, MEM8(0x774C96));
    SET_LO8(eax, LO8(eax) + MEM8(0x7FA20C));
    (void)0; /* cmp LO8(eax), 5 - flags set for next jcc */
    MEM8(0x774C96) = LO8(eax);
    if (CMP_BE(LO8(eax), 5)) goto loc_00163EB5; /* jbe: below or equal (unsigned <=) */

loc_00163E97: ;
    SET_LO8(eax, MEM8(0x774C97));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    MEM8(0x774C97) = LO8(eax);
    if (CMP_B(LO8(eax), 3)) goto loc_00163EAE; /* jb: below (unsigned <) */

loc_00163EA7: ;
    MEM8(0x774C97) = 0;

loc_00163EAE: ;
    MEM8(0x774C96) = 0;

loc_00163EB5: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00163EC0
 * Original: 0x00163EC0 - 0x00163EEB (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163EC0(void)
{
    float xmm0;

loc_00163EC0: ;
    esp = esp - 8;
    eax = eax + 0xFFFFFFD4u;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx++;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00163EDF: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00163EF0
 * Original: 0x00163EF0 - 0x00163F71 (129 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163EF0: ;
    eax = MEM32(0x7FA20C);
    edx = MEM32(0x8493FC);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1A);
    edx = edx + ecx;
    MEM32(0x8493FC) = edx;
    edx = MEM32(0x849404);
    edx = edx - eax;
    PUSH32(esp, esi);
    esi = MEM32(0x849400);
    esi = esi - eax;
    MEM32(0x849404) = edx;
    edx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(0x849400) = esi;
    if (CMP_LE(edx & edx, 0)) goto loc_00163F6B; /* jle: less or equal (signed <=) */

loc_00163F34: ;
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;

loc_00163F40: ;
    if (CMP_EQ(MEM8(ecx), 0xFC)) goto loc_00163F56; /* je: equal / zero */

loc_00163F45: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_00163F40; /* jl: less (signed <) */

loc_00163F50: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014EE20(); return; /* tail jmp 0x0014EE20 */

loc_00163F56: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    if (TEST_Z(eax, eax)) goto loc_00163F6B; /* je: equal / zero */

loc_00163F62: ;
    if (CMP_NE(MEM8(eax + 0xC2), 1)) { sub_00163F71(); return; } /* jne: not equal / not zero */

loc_00163F6B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014EE20(); return; /* tail jmp 0x0014EE20 */

}

/**
 * sub_00163F80
 * Original: 0x00163F80 - 0x001640DF (351 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163F80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00163F80: ;
    esp = esp - 0x160;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_00163F8F: ;
    ecx = ZX16(MEM16(0x7F9ECE));
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x164);
    xmm2 = MEMF(0x649FCC); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x168);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64920C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = 1;
    MEM32(esp + 0x4C) = eax;
    MEM16(esp + 0x28) = LO16(eax);
    eax = 0xFF;
    MEMF(0x774B5C) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x6498C4); /* movss */
    MEM16(esp + 0x2A) = LO16(eax);
    MEM8(esp + 0x33) = LO8(eax);
    MEM8(esp + 0x32) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x37) = LO8(eax);
    MEM8(esp + 0x36) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    SET_LO8(eax, MEM8(0x84A144));
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0x3E) = LO8(eax);
    PUSH32(esp, 0x72);
    eax = 0x190;
    MEM8(esp + 8) = 0;
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x58) = 0xC1;
    MEM32(esp + 0x2C) = 0x10031;
    MEM8(esp + 0x38) = 8;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00164099: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001640D8; /* je: equal / zero */

loc_001640A0: ;
    edx = MEM32(esp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    MEM8(eax + 0x17C) = 0xC;
    eax = eax + 0x180;
    ecx = 0x54;
    esi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);

loc_001640D8: ;
    esp = esp + 0x160;
    esp += 4; return; /* ret */

}

/**
 * sub_001640E0
 * Original: 0x001640E0 - 0x001643D6 (758 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001640E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001640E0: ;
    esp = esp - 0x168;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x170);
    SET_LO8(eax, MEM8(ebx + 0x180));
    if (TEST_Z(LO8(eax), 1)) goto loc_001643CC; /* je: equal / zero */

loc_001640FC: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x649FC8); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x184); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x184) = xmm0; /* movss */
    if ((xmm0 < xmm1)) goto loc_00164392; /* jb: below (unsigned <) */

loc_0016412D: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(ebx + 0x180) = LO8(eax);
    eax = esp + 0x1C;
    MEMF(ebx + 0x184) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_00164146: ;
    MEM32(esp + 0x58) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164153: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebx + 0x2C);
    xmm0 = MEMF(ebx + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    ecx = MEM32(ebx + 0x30);
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, 0xFF);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0x3F) = LO8(eax);
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x43) = LO8(eax);
    MEM8(esp + 0x42) = LO8(eax);
    MEM8(esp + 0x41) = LO8(eax);
    MEM8(esp + 0x44) = LO8(eax);
    MEM8(esp + 0x45) = LO8(eax);
    SET_LO8(eax, MEM8(0x84A144));
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x20) = ecx;
    MEM16(esp + 0x34) = 0xC;
    MEM16(esp + 0x36) = 0x15;
    MEM8(esp + 0x3C) = 0;
    MEM8(esp + 0x46) = LO8(eax);
    MEMF(esp + 0x54) = xmm0; /* movss */
    edx = edx + 5;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(esp + 0x50) = xmm0; /* movss */
    if (CMP_LE(edx & edx, 0)) goto loc_00164392; /* jle: less or equal (signed <=) */

loc_001641E8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, edi);
    /* nop */

loc_001641F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001641F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x4C) = LO8(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5975D0), _icall_esp); /* indirect call */
    }

loc_00164209: ;
    edx = esp + 0x1C;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016421C: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm2 + MEMF(0x648CF4); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164234: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x41;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_00164248: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164250: ;
    xmm0 = xmm0 * MEMF(0x649274); /* mulss */
    xmm0 = xmm0 + MEMF(0x649FC4); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016426B: ;
    xmm0 = xmm0 * MEMF(0x649FC0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649FBC); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016428C: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001642A7: ;
    ebp = eax;
    ebp = ebp & 1;
    ebp = ebp << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001642B3: ;
    SET_LO8(edx, MEM8(ebx + 4));
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax & 1;
    ebp = ebp | eax;
    ebp = ebp << 1;
    ebp = ebp | 0x10039;
    MEM32(esp + 0x3C) = ebp;
    SET_LO8(eax, MEM8(esp + 0x3C));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM8(esp + 0x14) = LO8(edx);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001642E3; /* je: equal / zero */

loc_001642DC: ;
    eax = 0x72;
    goto loc_0016431E;

loc_001642E3: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001642F2; /* je: equal / zero */

loc_001642EB: ;
    eax = 0x86;
    goto loc_0016431E;

loc_001642F2: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_00164301; /* je: equal / zero */

loc_001642FA: ;
    eax = 0x80;
    goto loc_0016431E;

loc_00164301: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_00164310; /* je: equal / zero */

loc_00164309: ;
    eax = 0x7A;
    goto loc_0016431E;

loc_00164310: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_0016431E: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x190;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0016432E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00164385; /* je: equal / zero */

loc_00164335: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0xD;
    if (TEST_NZ(ebp, 0x10000)) goto loc_00164365; /* jne: not equal / not zero */

loc_00164352: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_0016435F; /* je: equal / zero */

loc_0016435A: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_00164362;

loc_0016435F: ;
    ecx = ecx | 4;

loc_00164362: ;
    MEM32(eax + 0x40) = ecx;

loc_00164365: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = eax + 0x180;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_00164385: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_001641F0; /* jne: not equal / not zero */

loc_0016438F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00164392: ;
    xmm0 = MEMF(ebx + 0x18C); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 0x184); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x188); /* addss */
    MEMF(ebx + 0x2C) = xmm0; /* movss */
    fp_push(MEMF(ebx + 0x184)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 0x30) = (float)fp_top(); fp_popp(); /* fstp */

loc_001643CC: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001643E0
 * Original: 0x001643E0 - 0x00164424 (68 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001643E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001643E0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x52)) goto loc_00164423; /* jne: not equal / not zero */

loc_001643E7: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x180));
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0x180) = LO8(ecx);
    MEMF(eax + 0x184) = xmm0; /* movss */
    ecx = MEM32(eax + 0x2C);
    MEM32(eax + 0x188) = ecx;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x2C); /* subss */
    MEMF(eax + 0x18C) = xmm0; /* movss */

loc_00164423: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164430
 * Original: 0x00164430 - 0x00164480 (80 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164430(void)
{
    float xmm0;

loc_00164430: ;
    esp = esp - 0x1C;
    PUSH32(esp, 0x52);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0x89;
    MEM32(esp + 0x18) = 0x72;
    MEM32(esp + 0x1C) = 0x80;
    MEM32(esp + 0x20) = 0x86;
    MEM32(esp + 0x24) = 0x7A;
    MEM32(esp + 0x28) = 0x79;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0016447C: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00164540
 * Original: 0x00164540 - 0x00164590 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164540(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00164540: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x4C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00164551: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_0016458F; /* je: equal / zero */

loc_0016455A: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x3B;
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    ecx = 0; /* xor self */
    eax = eax + 0x3C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;

loc_0016458F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164610
 * Original: 0x00164610 - 0x00164682 (114 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164610(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00164610: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(esp + 0x28) = LO8(ebx);
    esi = 0x5981F8;

loc_00164620: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x1C) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x14);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) + 1);
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = esp + 8;
    MEM8(esp + 8) = LO8(eax);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_001586B0(); /* call 0x001586B0 */

loc_0016466D: ;
    esp = esp + 4;
    esi = esi + 0x18;
    ebx++;
    if (CMP_L(esi, 0x598288)) goto loc_00164620; /* jl: less (signed <) */

loc_0016467C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00164690
 * Original: 0x00164690 - 0x001646E2 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00164690: ;
    edx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001646E1; /* jle: less or equal (signed <=) */

loc_0016469C: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;
    /* nop */

loc_001646B0: ;
    if (CMP_EQ(MEM8(ecx), 0xF9)) goto loc_001646C2; /* je: equal / zero */

loc_001646B5: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_001646B0; /* jl: less (signed <) */

loc_001646C0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001646C2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    if (TEST_Z(eax, eax)) goto loc_001646E0; /* je: equal / zero */

loc_001646CE: ;
    ecx = MEM32(esp + 8);
    (void)0; /* cmp MEM16(ecx + 0x60), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM16(ecx + 0x60), 0)) ? 1 : 0); /* sete */
    MEM8(eax + 0xC2) = LO8(edx);

loc_001646E0: ;
    POP32(esp, esi);

loc_001646E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001646F0
 * Original: 0x001646F0 - 0x00164737 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001646F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001646F0: ;
    edx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00164736; /* jle: less or equal (signed <=) */

loc_001646FC: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;
    /* nop */

loc_00164710: ;
    if (CMP_EQ(MEM8(ecx), 0xF9)) goto loc_00164722; /* je: equal / zero */

loc_00164715: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_00164710; /* jl: less (signed <) */

loc_00164720: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00164722: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    if (TEST_Z(eax, eax)) goto loc_00164735; /* je: equal / zero */

loc_0016472E: ;
    MEM8(eax + 0xC2) = 1;

loc_00164735: ;
    POP32(esp, esi);

loc_00164736: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164740
 * Original: 0x00164740 - 0x00164805 (197 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00164740: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001647BD; /* jbe: below or equal (unsigned <=) */

loc_0016475F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164764: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164776: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00164782; /* jns: not sign (positive) */

loc_0016477D: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00164782: ;
    if ((eax == 0)) goto loc_001647A3; /* je: equal / zero */

loc_00164784: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164789: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0x50) = xmm1; /* movss */
    goto loc_001647BD;

loc_001647A3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001647A8: ;
    xmm0 = xmm0 * MEMF(0x6498FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esi + 0x50) = xmm0; /* movss */

loc_001647BD: ;
    xmm0 = MEMF(esi + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x4C); /* subss */
    xmm0 = xmm0 * MEMF(0x6498F0); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x4C); /* addss */
    SET_LO8(eax, MEM8(0x773CD0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    POP32(esp, esi);
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00164804; /* ja: above (unsigned >) */

loc_001647E3: ;
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(0x773CC4) = xmm0; /* movss */
    MEM32(0x773C68) = 1;
    MEM8(0x773CD0) = 0;

loc_00164804: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164810
 * Original: 0x00164810 - 0x00164898 (136 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164810(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00164810: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00164840: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_00164894; /* je: equal / zero */

loc_00164849: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x48;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00164894: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001648A0
 * Original: 0x001648A0 - 0x001649E1 (321 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001648A0(void)
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

loc_001648A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001648B6: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    /* FPU: fsin  */
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001648D3: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(0x773CD0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00164935; /* ja: above (unsigned >) */

loc_001648E9: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001648F9: ;
    edx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(0x773CC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x773CC8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x773CCC) = xmm0; /* movss */
    MEM32(0x773C68) = 1;
    MEM8(0x773CD0) = 0;

loc_00164935: ;
    xmm0 = MEMF(esi + 0x70); /* movss */
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x64); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00164969; /* jbe: below or equal (unsigned <=) */

loc_00164958: ;
    goto loc_00164960;

    /* nop */

loc_00164960: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00164960; /* ja: above (unsigned >) */

loc_00164969: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0016497A; /* jbe: below or equal (unsigned <=) */

loc_00164971: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00164971; /* ja: above (unsigned >) */

loc_0016497A: ;
    MEMF(esi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x74); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x68); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0016499B; /* jbe: below or equal (unsigned <=) */

loc_00164992: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00164992; /* ja: above (unsigned >) */

loc_0016499B: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001649A9; /* jbe: below or equal (unsigned <=) */

loc_001649A0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001649A0; /* ja: above (unsigned >) */

loc_001649A9: ;
    MEMF(esi + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x6C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001649CA; /* jbe: below or equal (unsigned <=) */

loc_001649C1: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001649C1; /* ja: above (unsigned >) */

loc_001649CA: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001649D9; /* jbe: below or equal (unsigned <=) */

loc_001649CF: ;
    /* nop */

loc_001649D0: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001649D0; /* ja: above (unsigned >) */

loc_001649D9: ;
    MEMF(esi + 0x6C) = xmm0; /* movss */
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
 * sub_001649F0
 * Original: 0x001649F0 - 0x00164A21 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001649F0(void)
{
    float xmm0;

loc_001649F0: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    esp = esp - 8;
    ecx = ecx + eax;
    eax = MEM32(esp + 0xC);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0014C8A0(); /* call 0x0014C8A0 */

loc_00164A1D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00164A30
 * Original: 0x00164A30 - 0x00164D70 (832 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164A30: ;
    esp = esp - 0x94;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, edi);
    edi = esi + 0x4C;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164A47: ;
    xmm0 = xmm0 * MEMF(0x649F70); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F6C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D54); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xC); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00164D4A; /* jbe: below or equal (unsigned <=) */

loc_00164A86: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x649F64); /* movss */
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, ebx);
    MEM8(esp + 0x99) = LO8(eax);
    MEM8(esp + 0x9A) = LO8(eax);
    eax = MEM32(0x7FA1F8);
    ecx = 0x46;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(esp + 0x50) = 0x303;
    MEM32(esp + 0x54) = 0x6C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM16(esp + 0x58) = LO16(ecx);
    MEM16(esp + 0x5A) = 3;
    ebp = 0x80DE07;
    MEM8(esp + 0x9C) = 0x16;
    MEM8(esp + 0x9F) = LO8(ebx);
    MEM16(esp + 0x5C) = LO16(ecx);
    MEMF(esp + 0x60) = xmm1; /* movss */
    if (CMP_NE(eax, 6)) goto loc_00164D53; /* jne: not equal / not zero */

loc_00164AFF: ;
    eax = MEM32(0x84B290);
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_00164B32; /* js: sign (negative) */

loc_00164B0B: ;
    ecx = ZX8(MEM8(0x76F0B6));
    ecx--;
    if (CMP_EQ(ecx, 0x14)) goto loc_00164B32; /* je: equal / zero */

loc_00164B18: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00164D5C; /* jne: not equal / not zero */

loc_00164B25: ;
    if (CMP_NE(MEM8(0x76F0DC), 0x14)) goto loc_00164D5C; /* jne: not equal / not zero */

loc_00164B32: ;
    MEM8(esp + 0x34) = 0x4B;
    MEM8(esp + 0x35) = 0x40;
    MEM8(esp + 0x36) = 0x48;

loc_00164B41: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x649F68); /* movss */
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = LO8(ebx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    goto loc_00164BA0;

    /* nop */

loc_00164BA0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164BA5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x12) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164BB9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x13) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164BCD: ;
    xmm5 = MEMF(0x64912C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164BE4: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164BF3: ;
    xmm0 = xmm0 * MEMF(0x649F60); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F5C); /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164C11: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164C1D: ;
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    ebp = ebp & 0xFFFFFF3Fu;
    ebp = ebp | edi;
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164C39: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0xF);
    MEM8(esp + 0x37) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00164C4D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x50;
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00164C62: ;
    xmm0 = xmm0 * MEMF(0x64953C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    SET_LO8(edx, MEM8(esi + 4));
    eax = 4;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x44) = eax;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    ecx = 2;
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x24) = LO8(edx);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_00164D29; /* jge: greater or equal (signed >=) */

loc_00164CB3: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x32);
    eax = 0x184;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00164CC4: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00164D29; /* je: equal / zero */

loc_00164CCB: ;
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

loc_00164D29: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x58) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00164BA0; /* ja: above (unsigned >) */

loc_00164D48: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00164D4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

loc_00164D53: ;
    if (CMP_EQ(eax, 0x3B)) goto loc_00164B32; /* je: equal / zero */

loc_00164D5C: ;
    MEM8(esp + 0x34) = 0x96;
    MEM8(esp + 0x35) = 0x60;
    MEM8(esp + 0x36) = 0x27;
    goto loc_00164B41;

}

/**
 * sub_00164D70
 * Original: 0x00164D70 - 0x00164DB1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00164D70: ;
    esp = esp - 8;
    PUSH32(esp, ecx);
    MEM16(esp + 8) = LO16(eax);
    PUSH32(esp, 0x7D);
    eax = 0x48;
    MEM8(esp + 8) = 1;
    MEM8(esp + 9) = 0xFF;
    MEM8(esp + 0xA) = 2;
    MEM8(esp + 0xE) = 0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00164D99: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00164DAD; /* je: equal / zero */

loc_00164DA0: ;
    edx = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = ecx;

loc_00164DAD: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00164DC0
 * Original: 0x00164DC0 - 0x00165147 (903 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164DC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00164DC0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    esi = esi + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EACA0(); /* call 0x003EACA0 */

loc_00164DD6: ;
    esp = esp + 0xC;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00164DE1: ;
    esi = 1;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00164DEE: ;
    edx = MEM32(0x5499F0);
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x6B850C);
    edx = edx | esi;
    PUSH32(esp, eax);
    MEM32(0x547340) = esi;
    MEM32(0x54733C) = esi;
    MEM32(0x547344) = edi;
    MEM32(0x5499F0) = edx;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00164E28: ;
    eax = MEM32(0x6B8CB4);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00164E32: ;
    xmm0 = MEMF(0x64A79C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A798); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x649CE0); /* movss */
    ecx = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6493AC); /* movss */
    PUSH32(esp, ecx);
    eax = esi;
    ecx = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_00164E78: ;
    if (CMP_EQ(MEM32(0x771824), edi)) goto loc_00164E98; /* je: equal / zero */

loc_00164E80: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00164E8C: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_00164E98: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_00164EB8; /* je: equal / zero */

loc_00164EA0: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00164EAC: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_00164EB8: ;
    esi = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_00164EC3: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00164ED9; /* jb: below (unsigned <) */

loc_00164ECA: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00164ED9: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    edx = MEM32(esi + 8);
    eax = eax + 8;
    edx = edx | 0x800;
    MEM32(esi) = eax;
    MEM32(esi + 8) = edx;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00164F13; /* jb: below (unsigned <) */

loc_00164F04: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00164F13: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x81890;
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = eax + 0xC;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00164F47; /* jb: below (unsigned <) */

loc_00164F38: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00164F47: ;
    xmm0 = MEMF(0x648E1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00164F95; /* jb: below (unsigned <) */

loc_00164F86: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00164F95: ;
    xmm0 = MEMF(0x64A794); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x81890;
    MEMF(eax + 8) = xmm0; /* movss */
    eax = eax + 0xC;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00164FD1; /* jb: below (unsigned <) */

loc_00164FC2: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00164FD1: ;
    xmm0 = MEMF(0x64A790); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E1C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00165027; /* jb: below (unsigned <) */

loc_00165018: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00165027: ;
    xmm0 = MEMF(0x64A794); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A78C); /* movss */
    MEM32(eax) = 0x81890;
    MEMF(eax + 8) = xmm0; /* movss */
    eax = eax + 0xC;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00165068; /* jb: below (unsigned <) */

loc_00165059: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00165068: ;
    xmm0 = MEMF(0x64A790); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A788); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001650BE; /* jb: below (unsigned <) */

loc_001650AF: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001650BE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A78C); /* movss */
    MEM32(eax) = 0x81890;
    MEMF(eax + 8) = xmm0; /* movss */
    eax = eax + 0xC;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001650FA; /* jb: below (unsigned <) */

loc_001650EB: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001650FA: ;
    xmm0 = MEMF(0x648E1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A788); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_0053AD40(); /* call 0x0053AD40 */

loc_00165139: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00165141: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00165150
 * Original: 0x00165150 - 0x00165522 (978 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165150: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x170);
    MEM16(ebp + 0x4C) = MEM16(ebp + 0x4C) - LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x4C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xFF;
    if (((int32_t)MEM16(ebp + 0x4C) >= 0)) goto loc_00165319; /* jns: not sign (positive) */

loc_0016517A: ;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_00165183: ;
    esi = 1;
    MEM32(esp + 0x60) = esi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00165191: ;
    xmm0 = xmm0 * MEMF(0x64913C); /* mulss */
    xmm0 = xmm0 - MEMF(0x649148); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001651AC: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001651BF: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001651D2: ;
    xmm0 = xmm0 * MEMF(0x649FB4); /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001651F4: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649FB0); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00165221: ;
    xmm0 = xmm0 * MEMF(0x6490B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    /* comiss xmm0, MEMF(ebp + 0x30) - sets EFLAGS */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ebp + 0x30))) goto loc_00165248; /* jbe: below or equal (unsigned <=) */

loc_0016523D: ;
    xmm0 = MEMF(ebp + 0x30); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_00165248: ;
    MEM32(esp + 0x38) = 0x21;
    MEM16(esp + 0x3C) = LO16(esi);
    MEM16(esp + 0x3E) = LO16(ebx);
    MEM8(esp + 0x44) = 0;
    MEM8(esp + 0x47) = LO8(ebx);
    MEM8(esp + 0x46) = LO8(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00165270: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x47;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x4B) = LO8(ebx);
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM8(esp + 0x4E) = 0;
    MEMF(esp + 0x40) = xmm5; /* movss */
    SET_LO8(edx, LO8(edx) + 0x28);
    MEM8(esp + 0x48) = LO8(edx);
    SET_LO8(edx, MEM8(ebp + 4));
    MEM8(esp + 0x10) = LO8(edx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x72);
    eax = 0x190;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001652B6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00165305; /* je: equal / zero */

loc_001652BD: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x40);
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM8(eax + 0x17C) = 6;
    if (TEST_Z(LO8(ecx), 4)) goto loc_001652DF; /* je: equal / zero */

loc_001652DA: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001652E2;

loc_001652DF: ;
    ecx = ecx | 4;

loc_001652E2: ;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(esp + 0x14);
    eax = eax + 0x180;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_00165305: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016530A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x37;
    MEM16(ebp + 0x4C) = LO16(edx);

loc_00165319: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(ebp + 0x4E) = MEM16(ebp + 0x4E) - LO16(edx);
    if (CMP_GE(MEM16(ebp + 0x4E), 0)) goto loc_00165517; /* jge: greater or equal (signed >=) */

loc_0016532F: ;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_00165338: ;
    MEM32(esp + 0x60) = 1;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00165345: ;
    xmm0 = xmm0 * MEMF(0x64913C); /* mulss */
    xmm0 = xmm0 - MEMF(0x649148); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00165360: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016537B: ;
    xmm5 = MEMF(0x648D20); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0x58;
    MEM32(esp + 0x18) = 0x40;
    MEM32(esp + 0x1C) = 0x3E;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001653B8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + edx * 4 + 0x14);
    MEM32(esp + 0x64) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001653CD: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(ebp + 0x30) - sets EFLAGS */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if ((xmm0 <= MEMF(ebp + 0x30))) goto loc_001653F0; /* jbe: below or equal (unsigned <=) */

loc_001653E5: ;
    xmm0 = MEMF(ebp + 0x30); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_001653F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001653F5: ;
    ebp = eax;
    ebp = (uint32_t)(-(int32_t)ebp);
    ebp = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebp = ebp & 4;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00165403: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 2;
    ebp = ebp | eax;
    ebp = ebp | 0x21;
    MEM32(esp + 0x38) = ebp;
    MEM16(esp + 0x3C) = 1;
    MEM16(esp + 0x3E) = LO16(ebx);
    MEM8(esp + 0x44) = 0;
    MEM8(esp + 0x47) = LO8(ebx);
    MEM8(esp + 0x46) = LO8(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00165435: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x79;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esp + 0x38));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x4B) = LO8(ebx);
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4D) = LO8(ebx);
    ebx = MEM32(esp + 0x178);
    MEM8(esp + 0x4E) = 0;
    MEMF(esp + 0x40) = xmm0; /* movss */
    SET_LO8(edx, LO8(edx) + 0x50);
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM8(esp + 0x48) = LO8(edx);
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(esp + 0x10) = LO8(edx);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00165483; /* je: equal / zero */

loc_0016547C: ;
    eax = 0x72;
    goto loc_001654BE;

loc_00165483: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_00165492; /* je: equal / zero */

loc_0016548B: ;
    eax = 0x86;
    goto loc_001654BE;

loc_00165492: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001654A1; /* je: equal / zero */

loc_0016549A: ;
    eax = 0x80;
    goto loc_001654BE;

loc_001654A1: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001654B0; /* je: equal / zero */

loc_001654A9: ;
    eax = 0x7A;
    goto loc_001654BE;

loc_001654B0: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001654BE: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x180;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001654CE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00165505; /* je: equal / zero */

loc_001654D5: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0;
    if (TEST_NZ(ebp, 0x10000)) goto loc_00165505; /* jne: not equal / not zero */

loc_001654F2: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001654FF; /* je: equal / zero */

loc_001654FA: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_00165502;

loc_001654FF: ;
    ecx = ecx | 4;

loc_00165502: ;
    MEM32(eax + 0x40) = ecx;

loc_00165505: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016550A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    MEM16(ebx + 0x4E) = LO16(edx);

loc_00165517: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x164;
    esp += 4; return; /* ret */

}

/**
 * sub_00165530
 * Original: 0x00165530 - 0x001655AF (127 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165530(void)
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

loc_00165530: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x18C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x188); /* addss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 0x188) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00165576; /* jbe: below or equal (unsigned <=) */

loc_00165567: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00165567; /* ja: above (unsigned >) */

loc_00165570: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_00165576: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0016558F; /* jbe: below or equal (unsigned <=) */

loc_0016557E: ;
    edi = edi;

loc_00165580: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00165580; /* ja: above (unsigned >) */

loc_00165589: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_0016558F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(eax + 0x188) = xmm0; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001655B0
 * Original: 0x001655B0 - 0x0016564C (156 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001655B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001655B0: ;
    eax = MEM32(0x771530);
    if (TEST_Z(eax, eax)) goto loc_0016564B; /* je: equal / zero */

loc_001655BD: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, edi);
    goto loc_001655D0;

    /* nop */
    edi = edi;

loc_001655D0: ;
    edx = MEM32(eax + 0xC);
    ecx = SX8(LO8(ebx));
    MEM32(ecx * 4 + 0x771740) = edx;
    ecx = ZX8(MEM8(eax + 0x5D));
    if (CMP_NE(ecx, esi)) goto loc_0016563B; /* jne: not equal / not zero */

loc_001655E5: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0016563B; /* jne: not equal / not zero */

loc_001655EF: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_0016560F; /* jle: less or equal (signed <=) */

loc_001655F3: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    goto loc_00165600;

    /* nop */

loc_00165600: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_00165609; /* jne: not equal / not zero */

loc_00165604: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_00165609: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00165600; /* jne: not equal / not zero */

loc_0016560F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_0016563B; /* jl: less (signed <) */

loc_00165616: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_00165631; /* je: equal / zero */

loc_00165623: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00165626: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_0016563B;

loc_00165631: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0016563B: ;
    edx = SX8(LO8(ebx));
    eax = MEM32(edx * 4 + 0x771740);
    if (TEST_NZ(eax, eax)) goto loc_001655D0; /* jne: not equal / not zero */

loc_00165649: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0016564B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00165650
 * Original: 0x00165650 - 0x001656F2 (162 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00165650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_001656EE; /* je: equal / zero */

loc_00165667: ;
    eax = MEM32(ebp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(eax, eax)) goto loc_00165677; /* jne: not equal / not zero */

loc_00165670: ;
    PUSH32(esp, 0x5D5864);
    goto loc_0016567C;

loc_00165677: ;
    PUSH32(esp, 0x5D5858);

loc_0016567C: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00165681: ;
    esp = esp + 4;
    edx = eax;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_00165690: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x64938C); /* movss */
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001656C0: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x6495E8); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001656EE: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00165700
 * Original: 0x00165700 - 0x00165B90 (1168 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165700(void)
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

loc_00165700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x330); /* movss */
    eax = eax + ecx;
    PUSH32(esp, ebx);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x334); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x338); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0; /* movss */
    ebx = 0x6B7450;
    /* nop */

loc_00165750: ;
    edx = ebx + 4;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x38);
    xmm1 = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x3C);
    xmm2 = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x40);
    xmm3 = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x1C) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x6493C0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001659ED; /* jbe: below or equal (unsigned <=) */

loc_0016580B: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(0x64909C); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00165823; /* jbe: below or equal (unsigned <=) */

loc_00165820: ;
    xmm0 = xmm4; /* movaps */

loc_00165823: ;
    xmm4 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm4, MEMF(0x648EBC) - sets EFLAGS */
    if ((xmm4 <= MEMF(0x648EBC))) goto loc_0016584D; /* jbe: below or equal (unsigned <=) */

loc_00165832: ;
    xmm5 = MEMF(0x6493C0); /* movss */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 * MEMF(0x649FAC); /* mulss */
    xmm0 = xmm5; /* movaps */

loc_0016584D: ;
    PUSH32(esp, 0x1030000);
    PUSH32(esp, 0x191380);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    MEMF(esp + 0xC0) = xmm1; /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E58); /* movss */
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    MEMF(esp + 0xD4) = xmm2; /* movss */
    xmm2 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    xmm2 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(0x648D58); /* movss */
    MEMF(0x6B7A18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    ecx = ebx + 0x18;
    PUSH32(esp, ecx);
    edx = ebx + 0x10;
    MEMF(esp + 0x8C) = xmm2; /* movss */
    xmm2 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x98) = xmm1; /* movss */
    xmm1 = MEMF(0x649DC4); /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    MEMF(esp + 0xE4) = xmm3; /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    xmm1 = MEMF(0x649E68); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = MEMF(0x59D950); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x74;
    MEMF(esp + 0x9C) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm3; /* movss */
    MEMF(0x6B7A0C) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm2; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_001659EA: ;
    esp = esp + 0x30;

loc_001659ED: ;
    ebx = ebx + 0x28;
    if (CMP_L(ebx, 0x6B74F0)) goto loc_00165750; /* jl: less (signed <) */

loc_001659FC: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x84940C); /* addss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    MEMF(0x84940C) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648D10))) goto loc_00165B89; /* jb: below (unsigned <) */

loc_00165A21: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x649FA8); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(0x6B7A34) = xmm0; /* movss */
    ebx = 0x6B74F0;

loc_00165A53: ;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x20) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x649FA4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00165B5F; /* jbe: below or equal (unsigned <=) */

loc_00165AF9: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00165B03: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    esi = esp + 0x48;
    eax = ebx;
    edi = esp + 0x84;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_00165B37: ;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42600000);
    PUSH32(esp, 0x40000000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_00165B5C: ;
    esp = esp + 0x1C;

loc_00165B5F: ;
    ebx = ebx + 0xC;
    if (CMP_L(ebx, 0x6B7520)) goto loc_00165A53; /* jl: less (signed <) */

loc_00165B6E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x84940C) = xmm0; /* movss */

loc_00165B89: ;
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
 * sub_00165C50
 * Original: 0x00165C50 - 0x00165EE4 (660 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165C50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00165C50: ;
    esp = esp - 0xD8;
    xmm3 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 - MEMF(ecx + 4); /* subss */
    xmm4 = xmm4 - MEMF(ecx + 8); /* subss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xE0);
    MEMF(esp + 4) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00165EDC; /* jnp: not parity */

loc_00165CAD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = MEMF(0x6493A8); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    ecx = MEM32(esp + 0x64);
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    edx = MEM32(esp + 0x5C);
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm4; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00165D48: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x68);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    xmm4 = MEMF(0x648D78); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00165D7F: ;
    eax = MEM32(0x595D1C);
    ecx = MEM32(0x595D14);
    edx = MEM32(0x595D18);
    ebx = 0; /* xor self */
    MEM32(esp + 0x78) = eax;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    eax = 0xFF;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEM32(esp + 0x80) = 0x19A0;
    MEM32(esp + 0x84) = 0x12C;
    MEM32(esp + 0x88) = 0xD2;
    MEM8(esp + 0x8C) = 7;
    MEM32(esp + 0x90) = ebx;
    MEM8(esp + 0x94) = LO8(eax);
    MEM32(esp + 0xB8) = 0xCF570;
    MEM32(esp + 0x98) = 0x157100;
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    MEM16(esp + 0xE0) = LO16(eax);
    eax = eax | 0xFFFFFFFFu;
    ecx = esp + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = 0x13E6E0;
    MEM32(esp + 0xD4) = 0x13EC40;
    MEM8(esp + 0xDC) = LO8(ebx);
    MEM32(esp + 0xE0) = ebx;
    MEM8(esp + 0xE4) = LO8(ebx);
    MEM16(esp + 0xE6) = 1;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x108) = eax;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00165EAC: ;
    esi = eax;
    esp = esp + 0x28;
    if (CMP_EQ(esi, ebx)) goto loc_00165EDA; /* je: equal / zero */

loc_00165EB5: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = 4;
    MEM32(esi + 0x290) = ebx;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_00183750(); /* call 0x00183750 */

loc_00165ED1: ;
    esp = esp + 0xC;
    MEM32(esi + 0x290) = eax;

loc_00165EDA: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00165EDC: ;
    POP32(esp, edi);
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00165EF0
 * Original: 0x00165EF0 - 0x00165EFE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165EF0: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_00165EFE(); return; } /* je: equal / zero */

loc_00165EF6: ;
    esi = MEM32(eax + 0x290);
    g_seh_ebp = ebp; sub_00165F02(); return; /* tail jmp 0x00165F02 */

}

/**
 * sub_00165F80
 * Original: 0x00165F80 - 0x00165F9D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165F80(void)
{

loc_00165F80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_00165EF0(); /* call 0x00165EF0 */

loc_00165F8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0013D300(); /* call 0x0013D300 */

loc_00165F92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00165F98: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00165FA0
 * Original: 0x00165FA0 - 0x0016623A (666 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165FA0(void)
{
    float xmm0;

loc_00165FA0: ;
    esp = esp - 0x7C;
    eax = eax + 0x78;
    ecx = eax;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = edx;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64B03C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC10); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x88);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64A878); /* movss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B038); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0xC) = eax;
    SET_LO8(edx, 0x64);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x18;
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64B034); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEM16(esp + 0x20) = 0xA;
    MEM16(esp + 0x22) = 7;
    MEM32(esp + 0x24) = 0x6C;
    MEM32(esp + 0x2C) = 0x205;
    MEM32(esp + 0x30) = ebx;
    MEM16(esp + 0x34) = 0x1E;
    MEM16(esp + 0x36) = 0xF;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x43) = 0xFF;
    MEM8(esp + 0x40) = 0x7F;
    MEM8(esp + 0x41) = 0x4B;
    MEM8(esp + 0x42) = 6;
    MEM8(esp + 0x44) = 0x80;
    MEM8(esp + 0x45) = 0x53;
    MEM8(esp + 0x46) = LO8(ebx);
    MEM8(esp + 0x47) = LO8(edx);
    MEM8(esp + 0x48) = LO8(edx);
    MEM8(esp + 0x49) = 0xFF;
    MEM16(esp + 0x4A) = 0x20;
    MEM16(esp + 0x4C) = 7;
    MEM16(esp + 0x4E) = 0x20;
    MEM32(esp + 0x60) = eax;
    MEM16(esp + 0x68) = LO16(ebx);
    MEM16(esp + 0x6A) = 0xFFE7;
    MEM16(esp + 0x6C) = 0xFF;
    MEM16(esp + 0x6E) = 0x15;
    MEM32(esp + 0x80) = 0x40E07;
    MEM8(esp + 0x84) = 0x10;
    MEM8(esp + 0x85) = 0xFF;
    MEM8(esp + 0x86) = 8;
    MEM8(esp + 0x87) = 6;
    MEM8(esp + 0x88) = 1;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F5420(); /* call 0x000F5420 */

loc_00166139: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = 0x24;
    MEM32(esp + 0x24) = 0xA;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    xmm0 = MEMF(0x64912C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64B030); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64B02C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A98C); /* movss */
    PUSH32(esp, 0x42820000);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64B028); /* movss */
    PUSH32(esp, 5);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64B024); /* movss */
    PUSH32(esp, 0x5F4678);
    PUSH32(esp, 0x5F468C);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x34;
    MEM16(esp + 0x48) = LO16(ebx);
    MEM16(esp + 0x4A) = 0xFF;
    MEM16(esp + 0x4C) = 0xFFD8;
    MEM16(esp + 0x4E) = 0x14;
    MEM16(esp + 0x60) = 0x22;
    MEM16(esp + 0x62) = 0xF;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_00166208: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x60D;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00166234: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00166240
 * Original: 0x00166240 - 0x001664E0 (672 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166240: ;
    esp = esp - 0xC8;
    xmm0 = MEMF(0x64991C); /* movss */
    xmm1 = MEMF(0x649918); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x649914); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649D60); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM32(esp + 0x54) = 0x2AA;
    MEM16(esp + 0x28) = 0x258;
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEM8(esp + 0x34) = 0xFF;
    MEM8(esp + 0x35) = 0xFF;
    MEM8(esp + 0x36) = 0xFF;
    MEM8(esp + 0x37) = 0xA0;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001662C5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    edi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(0x595D14);
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x84) = eax;
    eax = 1;
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x5E) = LO16(eax);
    MEM16(esp + 0x60) = LO16(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ebx = 0; /* xor self */
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x8C) = ecx;
    PUSH32(esp, 0x34);
    ecx = 4;
    MEM8(esp + 0xA5) = LO8(eax);
    MEM8(esp + 0xA6) = LO8(eax);
    eax = 2;
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x50) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEM32(esp + 0x80) = edi;
    MEM32(esp + 0x84) = ebp;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0xA0) = edx;
    MEMF(esp + 0xA4) = xmm5; /* movss */
    MEM16(esp + 0x6C) = 0x190;
    MEMF(esp + 0x74) = xmm5; /* movss */
    MEM32(esp + 0xA8) = 0x81C201;
    MEM8(esp + 0xB0) = 0x2D;
    MEM8(esp + 0xB3) = LO8(ebx);
    MEM32(esp + 0xAC) = ebx;
    MEM8(esp + 0xB4) = 0xFF;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = 0x303;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001663D4: ;
    esi = eax;
    esp = esp + 0x14;
    if (CMP_EQ(esi, ebx)) goto loc_001664D5; /* je: equal / zero */

loc_001663E1: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xA4) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001663F2: ;
    edx = MEM32(esp + 0x18);
    xmm0 = xmm0 + MEMF(0x648F98); /* addss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEM32(esp + 0xAC) = edi;
    MEM32(esp + 0xB0) = ebp;
    MEM32(esp + 0xB4) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00166421: ;
    xmm0 = xmm0 * MEMF(0x648EB8); /* mulss */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    xmm0 = xmm0 + MEMF(0x648F8C); /* addss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xC0) = ecx;
    MEM32(esp + 0xC4) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00166460: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648E5C); /* mulss */
    MEMF(esp + 0xC8) = xmm1; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0016648E: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    xmm5 = xmm5 - xmm0; /* subss */
    MEMF(esp + 0xD0) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001664B0: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    edi = esi + 0x170;
    ecx = 0xD;
    esi = esp + 0xA4;
    MEMF(esp + 0xD4) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001664D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

}

/**
 * sub_00166760
 * Original: 0x00166760 - 0x00166771 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166760: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x64);
    if (TEST_Z(eax, eax)) { sub_00166771(); return; } /* je: equal / zero */

loc_0016676D: ;
    eax = MEM32(eax);
    g_seh_ebp = ebp; sub_00166773(); return; /* tail jmp 0x00166773 */

}

/**
 * sub_001667A0
 * Original: 0x001667A0 - 0x001667D4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001667A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001667A0: ;
    esp = esp - 0x30;
    PUSH32(esp, 0); sub_00116D20(); /* call 0x00116D20 */

loc_001667A8: ;
    SET_LO8(eax, MEM8(0x774C10));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001667D4(); return; } /* je: equal / zero */

loc_001667B1: ;
    ecx = MEM32(0x7FA20C);
    edx = ZX8(LO8(eax));
    if (CMP_LE(edx, ecx)) goto loc_001667C9; /* jle: less or equal (signed <=) */

loc_001667BE: ;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(0x774C10) = LO8(eax);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_001667C9: ;
    MEM8(0x774C10) = 0;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001679F0
 * Original: 0x001679F0 - 0x00167A38 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001679F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001679F0: ;
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
    ebx = 0x5D5828;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00167A24: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00167A38(); return; } /* je: equal / zero */

loc_00167A2B: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_00167A38(); return; } /* je: equal / zero */

loc_00167A33: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00167A3A(); return; /* tail jmp 0x00167A3A */

}

/**
 * sub_00167AE0
 * Original: 0x00167AE0 - 0x00167B0C (44 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167AE0(void)
{
    float xmm0;

loc_00167AE0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167AE5: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 + MEMF(0x649294); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00167B10
 * Original: 0x00167B10 - 0x00167C4C (316 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00167B10: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x24);
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm4 = MEMF(eax); /* movss */
    xmm5 = MEMF(eax + 4); /* movss */
    xmm6 = MEMF(eax + 8); /* movss */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x30);
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(ecx); /* addss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 + MEMF(ecx + 4); /* addss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 + MEMF(ecx + 8); /* addss */
    ecx = MEM32(esp + 0x20);
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 4); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 8); /* addss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 * MEMF(eax + 0x94); /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * MEMF(eax + 0x94); /* mulss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm2 = xmm2 * MEMF(eax + 0x94); /* mulss */
    eax = ZX8(MEM8(eax + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167BD5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167BE6: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00167BF2; /* jns: not sign (positive) */

loc_00167BED: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00167BF2: ;
    eax = eax + 0x23;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167BFB: ;
    xmm0 = xmm0 * MEMF(0x649154); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A410); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F849247);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167C1B: ;
    xmm0 = xmm0 * MEMF(0x649D68); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x64A40C); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x28;
    ecx = esp + 0x34;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_00167C48: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00167C50
 * Original: 0x00167C50 - 0x00167D0D (189 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167C50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00167C50: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00167CC5; /* jbe: below or equal (unsigned <=) */

loc_00167C6F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167C74: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167C86: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00167C92; /* jns: not sign (positive) */

loc_00167C8D: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00167C92: ;
    if ((eax == 0)) goto loc_00167CAB; /* je: equal / zero */

loc_00167C94: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167C99: ;
    xmm0 = xmm0 * MEMF(0x6498F8); /* mulss */
    xmm0 = xmm0 + MEMF(0x6498F4); /* addss */
    goto loc_00167CC0;

loc_00167CAB: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167CB0: ;
    xmm0 = xmm0 * MEMF(0x64935C); /* mulss */
    xmm0 = xmm0 + MEMF(0x58BD44); /* addss */

loc_00167CC0: ;
    MEMF(esi + 0x50) = xmm0; /* movss */

loc_00167CC5: ;
    xmm0 = MEMF(esi + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x4C); /* subss */
    xmm0 = xmm0 * MEMF(0x6498F0); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x4C); /* addss */
    SET_LO8(eax, MEM8(0x773CD0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    POP32(esp, esi);
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00167D0C; /* ja: above (unsigned >) */

loc_00167CEB: ;
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(0x773CC4) = xmm0; /* movss */
    MEM32(0x773C68) = 1;
    MEM8(0x773CD0) = 0;

loc_00167D0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00167D10
 * Original: 0x00167D10 - 0x00167D98 (136 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167D10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00167D10: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00167D40: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_00167D94; /* je: equal / zero */

loc_00167D49: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x47;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00167D94: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00167DA0
 * Original: 0x00167DA0 - 0x00167E47 (167 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167DA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00167DA0: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(ecx + 4));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ebx = MEM32(eax + 8);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(esp + 0x24) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167DCB: ;
    eax = MEM32(esp + 0x24);
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x5C;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00167DF2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00167E40; /* je: equal / zero */

loc_00167DF9: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x49;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ecx;

loc_00167E40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00167E50
 * Original: 0x00167E50 - 0x00168122 (722 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167E50: ;
    esp = esp - 0x94;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA0);
    esi = edi + 0x4C;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167E67: ;
    xmm0 = xmm0 * MEMF(0x649FA0); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F9C); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xC); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00168119; /* jbe: below or equal (unsigned <=) */

loc_00167E96: ;
    xmm0 = MEMF(0x649F98); /* movss */
    xmm1 = MEMF(0x649F94); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) | 0xFF);
    SET_LO8(ecx, 0x16);
    edx = 0x50;
    MEM8(esp + 0x99) = LO8(eax);
    MEM8(esp + 0x9A) = LO8(eax);
    eax = MEM32(esi);
    MEM8(esp + 0x98) = LO8(ecx);
    MEM8(esp + 0x30) = LO8(ecx);
    ecx = MEM32(esi + 4);
    MEM16(esp + 0x54) = LO16(edx);
    MEM16(esp + 0x58) = LO16(edx);
    edx = MEM32(esi + 8);
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
    ebp = 0x90DE07;
    MEM8(esp + 0x9F) = LO8(ebx);
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEM8(esp + 0x35) = 0xB;
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
    /* nop */

loc_00167F70: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167F75: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x12) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167F89: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x13) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167F9D: ;
    xmm5 = MEMF(0x649B0C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167FB4: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00167FC3: ;
    xmm0 = xmm0 * MEMF(0x649E78); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F90); /* addss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167FE1: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00167FED: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    ebp = ebp & 0xFFFFFF3Fu;
    ebp = ebp | esi;
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00168009: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x37) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0016801D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x7E;
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00168032: ;
    xmm0 = xmm0 * MEMF(0x649070); /* mulss */
    xmm0 = xmm0 + MEMF(0x649F8C); /* addss */
    SET_LO8(edx, MEM8(edi + 4));
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
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_001680F8; /* jge: greater or equal (signed >=) */

loc_00168082: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C);
    eax = 0x184;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00168093: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001680F8; /* je: equal / zero */

loc_0016809A: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xA8);
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

loc_001680F8: ;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x58) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00167F70; /* ja: above (unsigned >) */

loc_00168117: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00168119: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_00168130
 * Original: 0x00168130 - 0x001681A2 (114 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168130(void)
{
    float xmm0;

loc_00168130: ;
    esp = esp - 0x28;
    xmm0 = MEMF(0x64A408); /* movss */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A404); /* movss */
    MEM32(esp + 4) = eax;
    ecx = esp;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    MEM8(esp + 8) = 7;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    MEM8(esp + 0x2D) = LO8(eax);
    MEM8(esp + 0x2E) = 3;
    PUSH32(esp, 0); sub_00113440(); /* call 0x00113440 */

loc_0016819E: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001681B0
 * Original: 0x001681B0 - 0x001681C1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001681B0(void)
{

loc_001681B0: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_001BD230(); /* call 0x001BD230 */

loc_001681B7: ;
    MEM16(0x775AF4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001681D0
 * Original: 0x001681D0 - 0x001682CE (254 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001681D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001681D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB0);
    if (CMP_A(eax, 3)) goto loc_001682CA; /* ja: above (unsigned >) */

loc_001681E4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1682D0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001681EBu) goto loc_001681EB;
    if (_jt == 0x00168231u) goto loc_00168231;
    if (_jt == 0x00168263u) goto loc_00168263;
    if (_jt == 0x00168297u) goto loc_00168297;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001681EB: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xB4) = 0x32;
    if (CMP_NE(MEM32(eax + 0xA4), 0x18D)) goto loc_001682CA; /* jne: not equal / not zero */

loc_00168209: ;
    eax = MEM32(eax + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_00168216: ;
    /* comiss xmm0, MEMF(0x6497D8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x6497D8))) goto loc_001682CA; /* jb: below (unsigned <) */

loc_00168223: ;
    MEM32(esi + 0xB0) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00168231: ;
    eax = MEM32(0x7FA20C);
    edx = MEM32(esi + 0xB4);
    edx = edx + eax;
    eax = edx;
    (void)0; /* cmp eax, 0x64 - flags set for next jcc */
    MEM32(esi + 0xB4) = edx;
    if (CMP_L(eax, 0x64)) goto loc_001682CA; /* jl: less (signed <) */

loc_0016824B: ;
    MEM32(esi + 0xB4) = 0x64;
    MEM32(esi + 0xB0) = 2;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00168263: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(eax + 0xA4), 0x18E)) goto loc_001682CA; /* jne: not equal / not zero */

loc_00168273: ;
    eax = MEM32(eax + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_00168280: ;
    /* comiss xmm0, MEMF(0x6498B8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x6498B8))) goto loc_001682CA; /* jb: below (unsigned <) */

loc_00168289: ;
    MEM32(esi + 0xB0) = 3;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00168297: ;
    ecx = MEM32(0x7FA20C);
    edx = MEM32(esi + 0xB4);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx << 2;
    edx = edx + ecx;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xB4) = edx;
    if (CMP_G(eax & eax, 0)) goto loc_001682CA; /* jg: greater (signed >) */

loc_001682B6: ;
    MEM32(esi + 0xB4) = 0;
    MEM32(esi + 0xB0) = 4;

loc_001682CA: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
