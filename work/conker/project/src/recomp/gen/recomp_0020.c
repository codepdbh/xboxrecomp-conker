/**
 * Burnout 3 - Recompiled code chunk 20
 * Functions: 250 (0x001CD5D0 - 0x001E02C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001CD5D0
 * Original: 0x001CD5D0 - 0x001CD5D8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD5D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CD5D0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_001CD5D8(); return; } /* jne: not equal / not zero */

loc_001CD5D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD5F0
 * Original: 0x001CD5F0 - 0x001CD601 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_001CD601(); return; } /* jne: not equal / not zero */

loc_001CD5FD: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001CD617(); return; /* tail jmp 0x001CD617 */

}

/**
 * sub_001CD670
 * Original: 0x001CD670 - 0x001CD6C4 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CD670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F9D0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x10);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -76) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -72) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -68) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -64) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebp + -60) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(ebp + -56) = edx;
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_001CD6C4(); return; } /* jne: not equal / not zero */

loc_001CD6C0: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001CD6DA(); return; /* tail jmp 0x001CD6DA */

}

/**
 * sub_001CD940
 * Original: 0x001CD940 - 0x001CD967 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD940(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CD940: ;
    if (TEST_Z(eax, eax)) goto loc_001CD966; /* je: equal / zero */

loc_001CD944: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;

loc_001CD966: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD970
 * Original: 0x001CD970 - 0x001CD9AE (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD970(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CD970: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001CD9AE(); return; } /* jne: not equal / not zero */

loc_001CD979: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 2)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD983: ;
    if (CMP_EQ(eax, 6)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD988: ;
    if (CMP_EQ(eax, 7)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD98D: ;
    if (CMP_EQ(eax, 0xC)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD992: ;
    if (CMP_EQ(eax, 0x14)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD997: ;
    if (CMP_EQ(eax, 0x29)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD99C: ;
    if (CMP_EQ(eax, 0x3C)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD9A1: ;
    if (CMP_EQ(eax, 0x40)) goto loc_001CD9AB; /* je: equal / zero */

loc_001CD9A6: ;
    if (CMP_NE(eax, 0x49)) { sub_001CD9AE(); return; } /* jne: not equal / not zero */

loc_001CD9AB: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001CD9C0
 * Original: 0x001CD9C0 - 0x001CDA6C (172 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD9C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001CD9C0: ;
    esp = esp - 0x28;
    PUSH32(esp, 0); sub_001CD970(); /* call 0x001CD970 */

loc_001CD9C8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CDA68; /* je: equal / zero */

loc_001CD9D0: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    ecx = esp + 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x775D40);
    PUSH32(esp, 0x6B99DC);
    PUSH32(esp, 1);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x22;
    PUSH32(esp, edx);
    edx = MEM32(0x771B78);
    eax = 0; /* xor self */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 3);
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x32) = LO8(eax);
    MEM8(esp + 0x48) = LO8(eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E8C); /* movss */
    PUSH32(esp, edx);
    ecx = 0x100;
    SET_LO8(eax, 8);
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x3C) = 0x4F;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000EC4B0(); /* call 0x000EC4B0 */

loc_001CDA68: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001CDA70
 * Original: 0x001CDA70 - 0x001CDAC1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDA70: ;
    PUSH32(esp, 0); sub_001CD970(); /* call 0x001CD970 */

loc_001CDA75: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CDAC0; /* je: equal / zero */

loc_001CDA79: ;
    SET_LO16(eax, MEM16(0x6B99DC));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001CDAB5; /* je: equal / zero */

loc_001CDA8F: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_001CDAA6: ;
    ebx = ebx << 5;
    ebx = ebx + esi;
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, ebx);

loc_001CDAB5: ;
    POP32(esp, edi);
    MEM16(0x6B99DC) = 0xFFFF;
    POP32(esp, ebp);

loc_001CDAC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CDAD0
 * Original: 0x001CDAD0 - 0x001CDBB7 (231 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDAD0(void)
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

loc_001CDAD0: ;
    esp = esp - 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001CDAD8: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001CDAEA: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_001CDAFF: ;
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(esp); /* movss */
    SET_LO16(edx, MEM16(eax * 2 + 0x775D40));
    SET_LO16(eax, MEM16(0x6B99DC));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001CDBB3; /* je: equal / zero */

loc_001CDB63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx >> 0xC;
    esi = esp + 0x2C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    eax = eax & 0xFFF;
    ecx = ecx << 5;
    ecx = ecx + eax;
    eax = MEM32(0x771B78);
    ecx = MEM32(eax + ecx * 4 + 0x31C);
    PUSH32(esp, esi);
    esi = esp + 0x44;
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_001CDBB2: ;
    POP32(esp, esi);

loc_001CDBB3: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001CDBC0
 * Original: 0x001CDBC0 - 0x001CDCD0 (272 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDBC0: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax));
    esp = esp - 0xC;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_001CDCD0(); return; } /* jne: not equal / not zero */

loc_001CDBD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    edx = esi;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    eax = esi + 0x10;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    edi = 0x59AD3C;
    ebx = esi;

loc_001CDBF6: ;
    ecx = MEM32(edi);
    eax = 0x59AD64;
    /* nop */

loc_001CDC00: ;
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_001CDC44; /* je: equal / zero */

loc_001CDC04: ;
    eax = eax + 4;
    if (CMP_L(eax, 0x59AD88)) goto loc_001CDC00; /* jl: less (signed <) */

loc_001CDC0E: ;
    edx = MEM32(edi + -8);
    eax = MEM32(edi + -4);
    esi = esp + 0x18;
    PUSH32(esp, esi);
    esi = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_001CDC2E: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    ebp = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001CDC3C: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001CDC58; /* jne: not equal / not zero */

loc_001CDC42: ;
    goto loc_001CDC99;

loc_001CDC44: ;
    eax = MEM32(edi + -8);
    edx = MEM32(edi + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C790(); /* call 0x0053C790 */

loc_001CDC54: ;
    MEM32(ebx) = eax;
    goto loc_001CDC9F;

loc_001CDC58: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001CDC63: ;
    if (TEST_NZ(eax, eax)) goto loc_001CDC76; /* jne: not equal / not zero */

loc_001CDC67: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001CDC72: ;
    esi = 0; /* xor self */
    goto loc_001CDC99;

loc_001CDC76: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = eax & 0xFFFFFFF;
    MEM32(esi) = 0x1040001;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = 0;

loc_001CDC99: ;
    MEM32(ebx) = esi;
    esi = MEM32(esp + 0x20);

loc_001CDC9F: ;
    eax = MEM32(esp + 0x10);
    ebx = ebx + 4;
    edi = edi + 0xC;
    MEM8(eax) = 0;
    eax++;
    (void)0; /* cmp edi, 0x59AD6C - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(edi, 0x59AD6C)) goto loc_001CDBF6; /* jl: less (signed <) */

loc_001CDCBD: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEM8(eax) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CDCE0
 * Original: 0x001CDCE0 - 0x001CDCF0 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDCE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CDCE0: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */

loc_001CDCE4: ;
    if (CMP_EQ(ecx, MEM32(edx + eax * 4))) { sub_001CDCF0(); return; } /* je: equal / zero */

loc_001CDCE9: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_001CDCE4; /* jl: less (signed <) */

loc_001CDCEF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CDD00
 * Original: 0x001CDD00 - 0x001CDD27 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDD00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CDD00: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F59FC;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_001CDD21; /* je: equal / zero */

loc_001CDD10: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CDD1E: ;
    esp = esp + 4;

loc_001CDD21: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDD30
 * Original: 0x001CDD30 - 0x001CDDE8 (184 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDD30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;

loc_001CDD30: ;
    SET_LO8(eax, MEM8(ecx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CDDE3; /* je: equal / zero */

loc_001CDD3B: ;
    eax = MEM32(ecx + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx + 8;
    edx = eax;
    edx = edx & 0x7F800000;
    (void)0; /* cmp edx, 0x7F800000 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(edx, 0x7F800000)) goto loc_001CDD61; /* jne: not equal / not zero */

loc_001CDD56: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_001CDD61; /* je: equal / zero */

loc_001CDD5D: ;
    MEMF(esi) = xmm0; /* movss */

loc_001CDD61: ;
    eax = MEM32(ecx + 0xC);
    edx = eax;
    edx = edx & 0x7F800000;
    if (CMP_NE(edx, 0x7F800000)) goto loc_001CDD80; /* jne: not equal / not zero */

loc_001CDD74: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_001CDD80; /* je: equal / zero */

loc_001CDD7B: ;
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_001CDD80: ;
    eax = MEM32(ecx + 0x10);
    edx = eax;
    edx = edx & 0x7F800000;
    if (CMP_NE(edx, 0x7F800000)) goto loc_001CDD9F; /* jne: not equal / not zero */

loc_001CDD93: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_001CDD9F; /* je: equal / zero */

loc_001CDD9A: ;
    MEMF(ecx + 0x10) = xmm0; /* movss */

loc_001CDD9F: ;
    edx = MEM32(esp + 0xC);
    xmm2 = MEMF(ecx + 0x14); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(0x84A13C);
    edi = edx + eax + 0x148;
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_001CDDC3: ;
    esp = esp + 4;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(eax, 2)) goto loc_001CDDDD; /* je: equal / zero */

loc_001CDDCD: ;
    if (CMP_EQ(eax, 1)) goto loc_001CDDDD; /* je: equal / zero */

loc_001CDDD2: ;
    MEM32(0x8496A8) = MEM32(0x8496A8) + 1;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001CDDDD: ;
    MEM32(0x8496A4) = MEM32(0x8496A4) + 1;

loc_001CDDE3: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDDF0
 * Original: 0x001CDDF0 - 0x001CDE55 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDDF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84A144);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_S(eax, eax)) goto loc_001CDE4D; /* jl: less (signed <) */

loc_001CDE02: ;
    ebp = 0; /* xor self */

loc_001CDE04: ;
    ecx = MEM32(0x84A13C);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    edi = ecx + ebp + 0x148;
    MEM8(esp + 0x17) = 0;
    xmm2 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_003E0C50(); /* call 0x003E0C50 */

loc_001CDE23: ;
    esp = esp + 4;
    if (CMP_EQ(eax, 2)) { sub_001CDE55(); return; } /* je: equal / zero */

loc_001CDE2B: ;
    if (CMP_EQ(eax, 1)) { sub_001CDE55(); return; } /* je: equal / zero */

loc_001CDE30: ;
    edi = MEM32(0x8496A8);
    eax = MEM32(0x84A144);
    edi++;
    ebx++;
    ebp = ebp + 0x2B0;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(0x8496A8) = edi;
    if (CMP_LE(ebx, eax)) goto loc_001CDE04; /* jle: less or equal (signed <=) */

loc_001CDE4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDE70
 * Original: 0x001CDE70 - 0x001CDEB8 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDE70(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDE70: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648FDC); /* movss */
    PUSH32(esp, 0x80);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001CDE9C: ;
    PUSH32(esp, 0x100);
    MEM32(ebx) = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001CDEA8: ;
    esp = esp + 8;
    MEM32(edi) = eax;
    esi = 0; /* xor self */
    eax = 2;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_001CDEC0(); return; /* tail jmp 0x001CDEC0 */

}

/**
 * sub_001CDFB0
 * Original: 0x001CDFB0 - 0x001CE075 (197 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDFB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001CDFB0: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    eax = 0; /* xor self */
    esp = esp - 0x18;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_001CE071; /* je: equal / zero */

loc_001CDFC3: ;
    xmm0 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    edi = esp + 0x10;
    ebx = esp + 0x14;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0xE) = 1;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001CDE70(); /* call 0x001CDE70 */

loc_001CE005: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    eax = MEM32(0x771B78);
    PUSH32(esp, 0x775D44);
    PUSH32(esp, 0x6B99E0);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xF);
    ecx = esp + 0x2E;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x40;
    SET_LO8(eax, 0x10);
    PUSH32(esp, 0); sub_000EC4B0(); /* call 0x000EC4B0 */

loc_001CE044: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(esi, esi)) goto loc_001CE059; /* je: equal / zero */

loc_001CE04C: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CE056: ;
    esp = esp + 4;

loc_001CE059: ;
    MEM32(esp + 0x14) = edi;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(edi, edi)) goto loc_001CE071; /* je: equal / zero */

loc_001CE064: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CE06E: ;
    esp = esp + 4;

loc_001CE071: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE080
 * Original: 0x001CE080 - 0x001CE0D1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE080: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CE0D0; /* je: equal / zero */

loc_001CE089: ;
    SET_LO16(eax, MEM16(0x6B99E0));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001CE0C5; /* je: equal / zero */

loc_001CE09F: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_001CE0B6: ;
    ebx = ebx << 5;
    ebx = ebx + esi;
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, ebx);

loc_001CE0C5: ;
    POP32(esp, edi);
    MEM16(0x6B99E0) = 0xFFFF;
    POP32(esp, ebp);

loc_001CE0D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE0E0
 * Original: 0x001CE0E0 - 0x001CE1F9 (281 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001CE0E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000C0570(); /* call 0x000C0570 */

loc_001CE116: ;
    eax = MEM32(esp + 0x14C);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_001CE1F2; /* je: equal / zero */

loc_001CE128: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_001CE137: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    esi = esp + 0x40;
    edi = esp + 0x34;
    eax = ebx;
    PUSH32(esp, 0); sub_001CE200(); /* call 0x001CE200 */

loc_001CE151: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x5A0060) - sets EFLAGS */
    if ((xmm0 > MEMF(0x5A0060))) goto loc_001CE1F2; /* ja: above (unsigned >) */

loc_001CE167: ;
    eax = esi;
    ecx = esp + 0x14;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x5A02E4;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_001CE1A7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001CE1CD; /* je: equal / zero */

loc_001CE1AE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    goto loc_001CE1DB;

loc_001CE1CD: ;
    eax = esp + 0x14;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001CE1D8: ;
    ebx = MEM32(ebp + 8);

loc_001CE1DB: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    ecx = esp + 0x4C;
    PUSH32(esp, 0); sub_001CE2E0(); /* call 0x001CE2E0 */

loc_001CE1EF: ;
    esp = esp + 4;

loc_001CE1F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE200
 * Original: 0x001CE200 - 0x001CE2DA (218 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001CE200: ;
    esp = esp - 0x30;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, 0xE);
    edx = esp;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0x2A) = LO8(eax);
    MEM8(esp + 0x2B) = LO8(eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM8(esp + 0x10) = LO8(ecx);
    MEM8(esp + 0x18) = 1;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM16(esp + 0x30) = 0x1E;
    MEM8(esp + 0x34) = 0xFF;
    MEM8(esp + 0x35) = 0;
    PUSH32(esp, 0); sub_000B0070(); /* call 0x000B0070 */

loc_001CE277: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CE2D6; /* je: equal / zero */

loc_001CE27E: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x649524); /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001CE2A6; /* ja: above (unsigned >) */

loc_001CE299: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001CE2A9; /* jbe: below or equal (unsigned <=) */

loc_001CE2A6: ;
    xmm0 = xmm1; /* movaps */

loc_001CE2A9: ;
    MEMF(eax + 0x70) = xmm0; /* movss */
    edx = MEM32(edi);
    ecx = eax + 0x74;
    MEM32(ecx) = edx;
    edx = MEM32(edi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi);
    eax = eax + 0x80;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_001CE2D6: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE2E0
 * Original: 0x001CE2E0 - 0x001CE3B3 (211 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE2E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001CE2E0: ;
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm0 = MEMF(0x648E5C); /* movss */
    esp = esp - 0x1C;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001CE308; /* ja: above (unsigned >) */

loc_001CE2F8: ;
    xmm0 = MEMF(0x648E38); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001CE308; /* ja: above (unsigned >) */

loc_001CE305: ;
    xmm0 = xmm1; /* movaps */

loc_001CE308: ;
    edx = MEM32(esp + 0x20);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM32(esp) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x14) = ecx;
    ecx = SX16(LO16(eax));
    PUSH32(esp, 0xFF);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x68;
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001CE361: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CE3AF; /* je: equal / zero */

loc_001CE368: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xD;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, esi);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    edi = eax + 0x4C;
    ecx = 7;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001CE3AF: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE3C0
 * Original: 0x001CE3C0 - 0x001CE5A6 (486 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE3C0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001CE3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    eax = ebx + 0x80;
    esi = ebx + 0x74;
    ecx = esp + 0x60;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    edi = 0x5A02E4;
    esi = esp + 0x78;
    PUSH32(esp, 0); sub_003E32F0(); /* call 0x003E32F0 */

loc_001CE426: ;
    xmm4 = MEMF(ebx + 0x70); /* movss */
    xmm1 = MEMF(0x648EB8); /* movss */
    xmm1 = xmm1 / MEMF(ebx + 0x70); /* divss */
    xmm2 = MEMF(0x64908C); /* movss */
    xmm3 = MEMF(0x648CE0); /* movss */
    xmm0 = MEMF(0x649368); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x191380);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(0x64A284); /* movss */
    eax = esp + 0x84;
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x78) = xmm3; /* movss */
    xmm3 = MEMF(0x648D38); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    ecx = esp + 0x60;
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    xmm3 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(0x648EA8); /* movss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    xmm1 = MEMF(0x649B98); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    MEMF(esp + 0x84) = xmm3; /* movss */
    MEMF(esp + 0x88) = xmm3; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(0x6B7A0C) = xmm2; /* movss */
    MEMF(0x6B7A14) = xmm2; /* movss */
    MEMF(0x6B7A1C) = xmm2; /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_001CE59C: ;
    esp = esp + 0x38;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE5B0
 * Original: 0x001CE5B0 - 0x001CE624 (116 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE5B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_001CE623; /* je: equal / zero */

loc_001CE5BB: ;
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 2 + 0x775D44));
    SET_LO16(eax, MEM16(0x6B99E0));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001CE622; /* je: equal / zero */

loc_001CE5D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0);
    ecx = ecx >> 0xC;
    edi = edx + 0x5C;
    eax = eax & 0xFFF;
    PUSH32(esp, edi);
    ecx = ecx << 5;
    edx = edx + 0x50;
    ecx = ecx + eax;
    eax = MEM32(0x771B78);
    ecx = MEM32(eax + ecx * 4 + 0x31C);
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_001CE621: ;
    POP32(esp, edi);

loc_001CE622: ;
    POP32(esp, esi);

loc_001CE623: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE630
 * Original: 0x001CE630 - 0x001CE985 (853 bytes, 261 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(ebx, ebx)) goto loc_001CE982; /* je: equal / zero */

loc_001CE640: ;
    SET_LO8(eax, MEM8(0x847265));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CE982; /* jne: not equal / not zero */

loc_001CE64D: ;
    eax = MEM32(ebx + 0x3E0);
    SET_LO8(ecx, MEM8(eax + 0x135));
    edx = MEM32(0x84A5F8);
    eax = ZX8(LO8(ecx));
    if (TEST_Z(eax, eax)) goto loc_001CE690; /* je: equal / zero */

loc_001CE666: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + edx + -1640);
    eax = eax - 0x23;
    if ((eax == 0)) goto loc_001CE68B; /* je: equal / zero */

loc_001CE678: ;
    eax = eax - 0x9E;
    if ((eax == 0)) goto loc_001CE684; /* je: equal / zero */

loc_001CE67F: ;
    eax = eax - 0xB;
    if ((eax != 0)) goto loc_001CE690; /* jne: not equal / not zero */

loc_001CE684: ;
    esi = 0x43;
    goto loc_001CE690;

loc_001CE68B: ;
    esi = 0x6F;

loc_001CE690: ;
    eax = esi + -2;
    if (CMP_A(eax, 0x72)) goto loc_001CE982; /* ja: above (unsigned >) */

loc_001CE69C: ;
    eax = ZX8(MEM8(eax + 0x1CE9CC));
    { uint32_t _jt = MEM32(eax * 4 + 0x1CE988); /* switch: 17 entries, 16 targets */
    if (_jt == 0x001CE6AAu) goto loc_001CE6AA;
    if (_jt == 0x001CE6F3u) goto loc_001CE6F3;
    if (_jt == 0x001CE712u) goto loc_001CE712;
    if (_jt == 0x001CE740u) goto loc_001CE740;
    if (_jt == 0x001CE756u) goto loc_001CE756;
    if (_jt == 0x001CE77Eu) goto loc_001CE77E;
    if (_jt == 0x001CE7EFu) goto loc_001CE7EF;
    if (_jt == 0x001CE817u) goto loc_001CE817;
    if (_jt == 0x001CE83Fu) goto loc_001CE83F;
    if (_jt == 0x001CE867u) goto loc_001CE867;
    if (_jt == 0x001CE8CEu) goto loc_001CE8CE;
    if (_jt == 0x001CE8F5u) goto loc_001CE8F5;
    if (_jt == 0x001CE91Fu) goto loc_001CE91F;
    if (_jt == 0x001CE946u) goto loc_001CE946;
    if (_jt == 0x001CE95Bu) goto loc_001CE95B;
    if (_jt == 0x001CE982u) goto loc_001CE982;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CE6AA: ;
    ecx = MEM32(ebx + 0x3E4);
    SET_LO8(eax, MEM8(ecx + 0xB1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CE6E5; /* jne: not equal / not zero */

loc_001CE6BA: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x10F);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE6DF: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE6E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001CF6E0(); /* call 0x001CF6E0 */

loc_001CE6ED: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE6F3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_001CEB50(); /* call 0x001CEB50 */

loc_001CE704: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D0E60(); /* call 0x001D0E60 */

loc_001CE70C: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE712: ;
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001CE982; /* jbe: below or equal (unsigned <=) */

loc_001CE71A: ;
    ebx = MEM32(ebx + 0x3E0);
    eax = ZX8(MEM8(ebx + 0x135));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, ebx);
    ebx = eax + edx + -1744;
    PUSH32(esp, 0); sub_002C15D0(); /* call 0x002C15D0 */

loc_001CE73A: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE740: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    esi = ebx;
    PUSH32(esp, 0); sub_001CEA40(); /* call 0x001CEA40 */

loc_001CE750: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE756: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x115);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE778: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE77E: ;
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x116);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE7A0: ;
    ebx = MEM32(ebx + 0x3E0);
    esp = esp + 0x1C;
    if (TEST_Z(ebx, ebx)) goto loc_001CE982; /* je: equal / zero */

loc_001CE7B1: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_001CE982; /* je: equal / zero */

loc_001CE7BF: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_001CE982; /* je: equal / zero */

loc_001CE7CD: ;
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_001CE7D2: ;
    if (CMP_NE(eax, 7)) goto loc_001CE982; /* jne: not equal / not zero */

loc_001CE7DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x43480000);
    edi = ebx;
    PUSH32(esp, 0); sub_000ADAB0(); /* call 0x000ADAB0 */

loc_001CE7E8: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE7EF: ;
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE811: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE817: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x118);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE839: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE83F: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x117);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE861: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE867: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CE8B0; /* jne: not equal / not zero */

loc_001CE87A: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x36 - flags set for next jcc */
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x32);
    ecx = ebx;
    PUSH32(esp, 0);
    if (CMP_NE(MEM32(0x7FA1F8), 0x36)) goto loc_001CE8A0; /* jne: not equal / not zero */

loc_001CE890: ;
    eax = 0x2C3;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_001CE89A: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE8A0: ;
    eax = 0x2CB;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_001CE8AA: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE8B0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x10F);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_001CE8C8: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE8CE: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    eax = 0x2C0;
    ecx = ebx;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_001CE8EF: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE8F5: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = 0x2CC;
    ecx = ebx;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_001CE919: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE91F: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    eax = 0x2C1;
    ecx = ebx;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_001CE940: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE946: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xFA);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D4E20(); /* call 0x001D4E20 */

loc_001CE955: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE95B: ;
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x2B7);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_001D64C0(); /* call 0x001D64C0 */

loc_001CE97F: ;
    esp = esp + 0x1C;

loc_001CE982: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEA40
 * Original: 0x001CEA40 - 0x001CEAAE (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CEA40: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CEB50(); /* call 0x001CEB50 */

loc_001CEA58: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_001D1CF0(); /* call 0x001D1CF0 */

loc_001CEA6D: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_001D20B0(); /* call 0x001D20B0 */

loc_001CEA82: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_001D2910(); /* call 0x001D2910 */

loc_001CEA8F: ;
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_0015F790(); /* call 0x0015F790 */

loc_001CEA97: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0x3C;
    (void)0; /* cmp eax, 0x27 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(eax, 0x27)) goto loc_001CEAAD; /* jne: not equal / not zero */

loc_001CEAA6: ;
    MEM8(0x849420) = 1;

loc_001CEAAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CEAB0
 * Original: 0x001CEAB0 - 0x001CEB4D (157 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEAB0(void)
{

loc_001CEAB0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0x7D;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001CEAD1: ;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x89;
    MEM32(esp + 0x2C) = 0x72;
    MEM32(esp + 0x30) = 0x80;
    MEM32(esp + 0x34) = 0x86;
    MEM32(esp + 0x38) = 0x7A;
    MEM32(esp + 0x3C) = 0x79;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001CEB13: ;
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0x85;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001CEB2D: ;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001CEB3F: ;
    esp = esp + 0x40;
    MEM8(0x849420) = 0;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001CEB50
 * Original: 0x001CEB50 - 0x001CEDE7 (663 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEB50(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEB50: ;
    esp = esp - 0x1E0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, edi);
    eax = esp + 0xA0;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001CEB68: ;
    eax = MEM32(0x59ADA8);
    ecx = MEM32(0x59ADAC);
    edx = MEM32(0x59ADB0);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(0x59ADB4);
    MEM32(esp + 0x6C) = eax;
    eax = ZX8(MEM8(esp + 0x1F8));
    MEM32(esp + 0x64) = ecx;
    xmm0 = MEMF(eax * 4 + 0x59AE6C); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEM32(esp + 0x68) = edx;
    esi = eax;
    esi = esi << 4;
    edi = esi + 0x59ADB8;
    ecx = edi;
    edx = MEM32(ecx);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(eax * 4 + 0x59AE6C); /* movss */
    MEM32(esp + 0x78) = edx;
    edx = MEM32(esp + 0x1F4);
    MEM32(esp + 0x7C) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x1FC));
    (void)0; /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    SET_LO8(edx, (CMP_EQ(LO8(ecx), 0xFF)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    ebp = eax * 4 + 0x59AE6C;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x649248); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEM8(esp + 0x84) = LO8(ecx);
    ecx = 0xFF;
    edx = edx & 4;
    MEM8(esp + 0x3C) = LO8(edx);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(eax * 4 + 0x59AE80); /* movss */
    edx = eax * 4 + 0x59AE58;
    MEM16(esp + 0xBA) = LO16(ecx);
    MEM8(esp + 0xC7) = LO8(ecx);
    MEM8(esp + 0xC6) = LO8(ecx);
    MEM8(esp + 0xC5) = LO8(ecx);
    MEM8(esp + 0xC8) = LO8(ecx);
    MEM8(esp + 0xC9) = LO8(ecx);
    ecx = MEM32(esp + 0x1F4);
    SET_LO8(ecx, MEM8(ecx + 0x2A8));
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x84A144);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM8(esp + 0x2C) = 0;
    MEM32(esp + 0xDC) = 1;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = ebp;
    MEM8(esp + 0x9C) = 1;
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEM16(esp + 0xB8) = 1;
    MEM8(esp + 0xC0) = 7;
    MEM8(esp + 0xCA) = LO8(ecx);
    MEMF(esp + 0xA4) = xmm3; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    if (TEST_Z(edx, edx)) goto loc_001CED13; /* je: equal / zero */

loc_001CECF1: ;
    xmm2 = MEMF(0x649AC4); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */

loc_001CED13: ;
    ecx = ecx + 0xB;
    fp_push(MEMF(edi)); /* fld float */
    xmm0 = MEMF(0x649864); /* movss */
    ebp = 1;
    ebp = ebp << LO8(ecx);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0xE0) = 0xFFFFFFFFu;
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEM8(esp + 0x3D) = 3;
    MEM32(esp + 0x98) = 0x19;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x40;
    ebp = ebp | ebx;
    ecx = 0; /* xor self */
    ebp = ebp | 0x30;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, 1)) ? 1 : 0); /* sete */
    MEM32(esp + 0xB4) = ebp;
    eax = ecx + eax * 2;
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x59AE94); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x59AEBC); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CED90: ;
    fp_push(MEMF(esi + 0x59ADBC)); /* fld float */
    MEM8(esp + 0xC3) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CEDA2: ;
    fp_push(MEMF(esi + 0x59ADC0)); /* fld float */
    MEM8(esp + 0xC2) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CEDB4: ;
    fp_push(MEMF(esi + 0x59ADC4)); /* fld float */
    MEM8(esp + 0xC1) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CEDC6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = ebp;
    ebx = ebx & 0x20;
    MEM8(esp + 0xC4) = LO8(eax);
    MEMF(esp + 0xBC) = xmm0; /* movss */
    if ((ebx == 0)) { sub_001CEDE7(); return; } /* je: equal / zero */

loc_001CEDE0: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001CEE29(); return; /* tail jmp 0x001CEE29 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001CF010
 * Original: 0x001CF010 - 0x001CF0EB (219 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF010(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_001CF010: ;
    PUSH32(esp, esi);
    esi = 0x15;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001CF01B: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0x40401818;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEM32(eax) = ebx;
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF0F0
 * Original: 0x001CF0F0 - 0x001CF130 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF0F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x43210000);
    edi = edi << 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x42840000);
    ebx = edi;
    PUSH32(esp, 0); sub_001CF010(); /* call 0x001CF010 */

loc_001CF117: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x440F8000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x43EF8000);
    PUSH32(esp, 0); sub_001CF010(); /* call 0x001CF010 */

loc_001CF128: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF130
 * Original: 0x001CF130 - 0x001CF1B8 (136 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF130(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF130: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ebp << 0x18;
    PUSH32(esp, 0x42A40000);
    esi = ebp;
    PUSH32(esp, ecx);
    esi = esi | 0x101010;
    PUSH32(esp, 0x42840000);
    edi = esi;
    ebx = ebp;
    PUSH32(esp, 0); sub_001CF010(); /* call 0x001CF010 */

loc_001CF161: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43210000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x42A40000);
    ebx = esi;
    PUSH32(esp, 0); sub_001CF010(); /* call 0x001CF010 */

loc_001CF17C: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x440B8000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43EF8000);
    PUSH32(esp, 0); sub_001CF010(); /* call 0x001CF010 */

loc_001CF195: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x440F8000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x440B8000);
    edi = ebp;
    PUSH32(esp, 0); sub_001CF010(); /* call 0x001CF010 */

loc_001CF1B0: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF1C0
 * Original: 0x001CF1C0 - 0x001CF414 (596 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001CF1C0: ;
    eax = MEM32(0x84A144);
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001CF40F; /* je: equal / zero */

loc_001CF1D3: ;
    eax = MEM32(0x6B83F4);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001CF1F0; /* je: equal / zero */

loc_001CF1E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001CF1EA: ;
    MEM32(0x771760) = esi;

loc_001CF1F0: ;
    if (CMP_EQ(MEM32(0x77175C), edi)) goto loc_001CF205; /* je: equal / zero */

loc_001CF1F8: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001CF1FF: ;
    MEM32(0x77175C) = edi;

loc_001CF205: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001CF21F; /* je: equal / zero */

loc_001CF213: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001CF219: ;
    MEM32(0x77182C) = esi;

loc_001CF21F: ;
    if (CMP_EQ(MEM32(0x771828), edi)) goto loc_001CF233; /* je: equal / zero */

loc_001CF227: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001CF22D: ;
    MEM32(0x771828) = edi;

loc_001CF233: ;
    eax = MEM32(0x771824);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_001CF259; /* je: equal / zero */

loc_001CF241: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CF24D: ;
    MEM32(0x549AE4) = ebx;
    MEM32(0x771824) = ebx;

loc_001CF259: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_001CF279; /* je: equal / zero */

loc_001CF261: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CF26D: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_001CF279: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001CF300; /* je: equal / zero */

loc_001CF281: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001CF29D; /* jb: below (unsigned <) */

loc_001CF28E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001CF29D: ;
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
    if (CMP_NE(eax, 2)) goto loc_001CF2FA; /* jne: not equal / not zero */

loc_001CF2CB: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_001CF2D0: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_001CF2D5: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001CF2EB; /* jb: below (unsigned <) */

loc_001CF2DC: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001CF2EB: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_001CF2F3: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_001CF2F8: ;
    MEM32(esi) = eax;

loc_001CF2FA: ;
    MEM32(0x77181C) = edi;

loc_001CF300: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001CF320; /* je: equal / zero */

loc_001CF308: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CF314: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001CF320: ;
    (void)0; /* cmp MEM32(0x771810), edi - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_001CF33E; /* je: equal / zero */

loc_001CF32D: ;
    eax = eax | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_001CF33E: ;
    if (CMP_EQ(MEM32(0x7717E4), ebx)) goto loc_001CF357; /* je: equal / zero */

loc_001CF346: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ebx;
    MEM32(0x7717E4) = ebx;

loc_001CF357: ;
    if (CMP_EQ(MEM32(0x7717A4), ebx)) goto loc_001CF370; /* je: equal / zero */

loc_001CF35F: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ebx;
    MEM32(0x7717A4) = ebx;

loc_001CF370: ;
    ecx = MEM32(esp + 0x1C);
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    eax = ZX8(MEM8(ecx + 0x56));
    eax = eax - edi;
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((eax == 0)) goto loc_001CF3A9; /* je: equal / zero */

loc_001CF38E: ;
    eax--;
    if ((eax != 0)) goto loc_001CF40F; /* jne: not equal / not zero */

loc_001CF391: ;
    xmm0 = MEMF(0x64A824); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A820); /* movss */
    goto loc_001CF3BF;

loc_001CF3A9: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A81C); /* movss */

loc_001CF3BF: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    ecx = MEM32(0x6BD92C);
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(ecx + 4);
    eax = eax - edi;
    MEMF(esp + 4) = xmm0; /* movss */
    if ((eax == 0)) goto loc_001CF3F8; /* je: equal / zero */

loc_001CF3D9: ;
    eax--;
    if ((eax != 0)) goto loc_001CF40F; /* jne: not equal / not zero */

loc_001CF3DC: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF130(); /* call 0x001CF130 */

loc_001CF3F0: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001CF3F8: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF0F0(); /* call 0x001CF0F0 */

loc_001CF40C: ;
    esp = esp + 0xC;

loc_001CF40F: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF420
 * Original: 0x001CF420 - 0x001CF6D8 (696 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF420: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x3E0);
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_001CF435: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001CF6CF; /* je: equal / zero */

loc_001CF43F: ;
    eax = MEM32(eax + 0x14);
    if (CMP_EQ(eax, 2)) goto loc_001CF450; /* je: equal / zero */

loc_001CF447: ;
    if (CMP_NE(eax, 0x44)) goto loc_001CF6CF; /* jne: not equal / not zero */

loc_001CF450: ;
    PUSH32(esp, esi);
    esi = 0x21;
    eax = edi;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_001CF45D: ;
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001CF469: ;
    if (CMP_NE(MEM32(0x84A144), ebx)) goto loc_001CF48C; /* jne: not equal / not zero */

loc_001CF471: ;
    xmm0 = MEMF(0x64994C); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x58BD48); /* movss */
    goto loc_001CF4A5;

loc_001CF48C: ;
    xmm0 = MEMF(0x649E24); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x649A80); /* movss */

loc_001CF4A5: ;
    SET_LO8(eax, MEM8(esp + 0x1E4));
    ecx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(0x6BD92C);
    (void)0; /* cmp MEM32(ebp + 4), ebx - flags set for next jcc */
    xmm2 = MEMF(0x648CE0); /* movss */
    SET_LO8(ecx, (CMP_NE(MEM32(ebp + 4), ebx)) ? 1 : 0); /* setne */
    ebp = 2;
    esi = 1;
    MEM32(esp + 0xEC) = ebp;
    MEM32(esp + 0xFC) = ebp;
    MEM8(esp + 0xB8) = LO8(eax);
    ebp = esi;
    ecx = ecx + 0xDA;
    MEM32(esp + 0xD4) = ecx;
    ecx = 4;
    MEM32(esp + 0xE4) = ecx;
    MEM32(esp + 0xF4) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x2A8));
    MEM8(esp + 0xBE) = LO8(ecx);
    eax = ZX8(LO8(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    edx = 0xFF;
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    ebp = ebp | 0x50050;
    MEM32(esp + 0xA8) = ebp;
    SET_LO8(eax, MEM8(esp + 0xA8));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0xAC) = LO16(esi);
    MEM16(esp + 0xAE) = LO16(edx);
    MEM8(esp + 0xB4) = 0x14;
    MEM8(esp + 0xB7) = LO8(edx);
    MEM8(esp + 0xB6) = LO8(edx);
    MEM8(esp + 0xB5) = LO8(edx);
    MEM32(esp + 0xD0) = esi;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0x100) = ebx;
    MEM8(esp + 0xBD) = LO8(edx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x90) = LO8(ebx);
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x31) = 7;
    MEM32(esp + 0x8C) = ebx;
    MEM8(esp + 0x30) = 8;
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001CF63B; /* je: equal / zero */

loc_001CF634: ;
    eax = 0x72;
    goto loc_001CF676;

loc_001CF63B: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001CF64A; /* je: equal / zero */

loc_001CF643: ;
    eax = 0x86;
    goto loc_001CF676;

loc_001CF64A: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001CF659; /* je: equal / zero */

loc_001CF652: ;
    eax = 0x80;
    goto loc_001CF676;

loc_001CF659: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001CF668; /* je: equal / zero */

loc_001CF661: ;
    eax = 0x7A;
    goto loc_001CF676;

loc_001CF668: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001CF676: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001CF682: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001CF6CD; /* je: equal / zero */

loc_001CF689: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x94;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x12;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001CF6BC; /* jne: not equal / not zero */

loc_001CF6A9: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001CF6B6; /* je: equal / zero */

loc_001CF6B1: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001CF6B9;

loc_001CF6B6: ;
    ecx = ecx | 4;

loc_001CF6B9: ;
    MEM32(eax + 0x40) = ecx;

loc_001CF6BC: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001CF6CD: ;
    POP32(esp, ebp);
    POP32(esp, esi);

loc_001CF6CF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x1D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF6E0
 * Original: 0x001CF6E0 - 0x001CF81F (319 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF6E0: ;
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x178);
    esi = 0x21;
    eax = edi;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_001CF6FD: ;
    eax = MEM32(edi + 0x3E0);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax + 0xB0);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x24;
    MEM8(esp + 0x18) = 0xA;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001CF71F: ;
    ecx = ZX8(MEM8(edi + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(ecx + edx + 0x1F8); /* movss */
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001CF76C; /* je: equal / zero */

loc_001CF758: ;
    xmm0 = xmm0 * MEMF(0x649AC4); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_001CF76C: ;
    eax = MEM32(edi + 0x3E0);
    ecx = MEM32(eax + 0x238);
    esi = MEM32(ecx);
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 0; /* xor self */
    edx = 1;
    ebp = edx;
    ebx = 0xFF;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 0xD8;
    MEM32(esp + 0x64) = eax;
    SET_LO8(eax, MEM8(edi + 0x2A8));
    SET_LO8(ecx, LO8(eax));
    MEM32(esp + 0x60) = edx;
    MEM16(esp + 0x3C) = LO16(edx);
    MEM16(esp + 0x3E) = LO16(ebx);
    MEM8(esp + 0x44) = 0xA;
    MEM8(esp + 0x47) = LO8(ebx);
    MEM8(esp + 0x46) = LO8(ebx);
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEM8(esp + 0x45) = LO8(ebx);
    MEM8(esp + 0x48) = LO8(ebx);
    MEM8(esp + 0x4B) = LO8(ebx);
    ebp = ebp | 0x18050;
    esi = ebp;
    esi = esi & 0x20;
    MEM32(esp + 0x38) = ebp;
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM8(esp + 0x4E) = LO8(eax);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x14) = esi;
    if ((esi == 0)) { sub_001CF81F(); return; } /* je: equal / zero */

loc_001CF818: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001CF85E(); return; /* tail jmp 0x001CF85E */

}

/**
 * sub_001CFA20
 * Original: 0x001CFA20 - 0x001CFC23 (515 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFA20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFA20: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(eax, ebx)) goto loc_001CFC1A; /* je: equal / zero */

loc_001CFA34: ;
    if (CMP_EQ(esi, ebx)) goto loc_001CFC1A; /* je: equal / zero */

loc_001CFA3C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001CFA47: ;
    SET_LO8(edx, MEM8(esi + 0x2A8));
    edi = MEM32(0x84A13C);
    xmm0 = MEMF(0x648D10); /* movss */
    eax = ZX8(LO8(edx));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm1 = MEMF(ecx + edi + 0x1F4); /* movss */
    ecx = ecx + edi;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1F8); /* movss */
    ecx = 2;
    edi = 1;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x78) = ecx;
    ecx = eax + 0xB;
    ebp = edi;
    ebp = ebp << LO8(ecx);
    eax = 0xFF;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64925C); /* movss */
    ebp = ebp | 0x10070;
    MEM32(esp + 0x24) = ebp;
    SET_LO8(ecx, MEM8(esp + 0x24));
    (void)0; /* test LO8(ecx), 0x20 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x50) = 0xDD;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM16(esp + 0x28) = LO16(edi);
    MEM16(esp + 0x2A) = LO16(eax);
    MEM8(esp + 0x30) = 0x10;
    MEM8(esp + 0x33) = 0x64;
    MEM8(esp + 0x32) = 0xCD;
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x37) = LO8(eax);
    MEM8(esp + 0x36) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(edx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x170) = LO8(ebx);
    MEM8(esp + 0x1E0) = LO8(ebx);
    MEM32(esp + 0x160) = esi;
    MEMF(esp + 0x16C) = xmm1; /* movss */
    MEMF(esp + 0x168) = xmm1; /* movss */
    MEM8(esp + 0x181) = LO8(ebx);
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = LO8(ebx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_001CFB85; /* je: equal / zero */

loc_001CFB7E: ;
    ecx = 0x72;
    goto loc_001CFBC2;

loc_001CFB85: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001CFB94; /* je: equal / zero */

loc_001CFB8D: ;
    ecx = 0x86;
    goto loc_001CFBC2;

loc_001CFB94: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001CFBA3; /* je: equal / zero */

loc_001CFB9C: ;
    ecx = 0x80;
    goto loc_001CFBC2;

loc_001CFBA3: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001CFBB2; /* je: equal / zero */

loc_001CFBAB: ;
    ecx = 0x7A;
    goto loc_001CFBC2;

loc_001CFBB2: ;
    SET_LO8(ecx, LO8(ecx) & 0x81);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx + 0x89;

loc_001CFBC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001CFBCE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001CFC18; /* je: equal / zero */

loc_001CFBD5: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = LO8(ebx);
    if (TEST_NZ(ebp, 0x10000)) goto loc_001CFC04; /* jne: not equal / not zero */

loc_001CFBF1: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001CFBFE; /* je: equal / zero */

loc_001CFBF9: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001CFC01;

loc_001CFBFE: ;
    ecx = ecx | 4;

loc_001CFC01: ;
    MEM32(eax + 0x40) = ecx;

loc_001CFC04: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x160;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001CFC18: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001CFC1A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFC30
 * Original: 0x001CFC30 - 0x001CFD31 (257 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFC30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    (void)0; /* cmp ebp, 0x62 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x180);
    ecx = MEM32(edi + 0x3E0);
    if (CMP_A(ebp, 0x62)) goto loc_001CFD0C; /* ja: above (unsigned >) */

loc_001CFC55: ;
    eax = ZX8(MEM8(ebp + 0x1CFD4C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1CFD34)); return; /* indirect tail jmp */

    if (CMP_NE(MEM32(ebx), edi)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFC6B: ;
    SET_LO8(eax, MEM8(esi + 0x1A0));
    if (TEST_Z(LO8(eax), 8)) goto loc_001CFCD2; /* je: equal / zero */

loc_001CFC75: ;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFC7D: ;
    ecx = MEM32(esi + 0x18C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648E14); /* movss */
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esi + 0x190) = 0;
    MEM32(esi + 0x184) = ecx;
    MEMF(esi + 0x188) = xmm0; /* movss */
    MEMF(esi + 0x198) = xmm1; /* movss */
    MEMF(esi + 0x19C) = xmm0; /* movss */
    MEM8(esi + 0x1A0) = LO8(eax);
    goto loc_001CFD0C;

    edx = MEM32(ebx);
    if (CMP_NE(MEM32(edx + 0x564), edi)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFCC7: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001CFCCC: ;
    goto loc_001CFD0C;

    if (CMP_NE(MEM32(ebx), ecx)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFCD2: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001CFCD7: ;
    goto loc_001CFD0C;

    eax = MEM32(ebx);
    if (CMP_NE(eax, ecx)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFCDF: ;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_001CFCE4: ;
    if (TEST_Z(eax, eax)) goto loc_001CFD0C; /* je: equal / zero */

loc_001CFCE8: ;
    if (CMP_NE(MEM32(eax + 0x14), 2)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFCEE: ;
    PUSH32(esp, 0xFF);
    eax = edi;
    PUSH32(esp, 0); sub_001CF420(); /* call 0x001CF420 */

loc_001CFCFA: ;
    esp = esp + 4;
    goto loc_001CFD0C;

    if (CMP_NE(MEM32(ebx), ecx)) goto loc_001CFD0C; /* jne: not equal / not zero */

loc_001CFD03: ;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x194) = eax;

loc_001CFD0C: ;
    SET_LO8(eax, MEM8(esi + 0x1A1));
    if (CMP_AE(LO8(eax), 8)) goto loc_001CFD2C; /* jae: above or equal (unsigned >=) */

loc_001CFD16: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(ecx * 4 + 0x59AEE4);
    if (TEST_Z(eax, eax)) goto loc_001CFD2C; /* je: equal / zero */

loc_001CFD24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001CFD29: ;
    esp = esp + 0xC;

loc_001CFD2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CFE70
 * Original: 0x001CFE70 - 0x001CFF11 (161 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFE70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CFE70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(edi, 0x21)) goto loc_001CFECE; /* jne: not equal / not zero */

loc_001CFE84: ;
    eax = MEM32(esi + 0x184);
    ecx = MEM32(ebx);
    if (CMP_NE(ecx, MEM32(eax + 0x564))) goto loc_001CFEED; /* jne: not equal / not zero */

loc_001CFE94: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CFEED; /* jne: not equal / not zero */

loc_001CFE9D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001CFEA4: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001CFEED; /* jl: less (signed <) */

loc_001CFEAB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001CFEC0; /* je: equal / zero */

loc_001CFEB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001CFEBB: ;
    esp = esp + 4;
    goto loc_001CFEED;

loc_001CFEC0: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001CFECC: ;
    goto loc_001CFEED;

loc_001CFECE: ;
    if (TEST_NZ(edi, edi)) goto loc_001CFEED; /* jne: not equal / not zero */

loc_001CFED2: ;
    eax = MEM32(ebx);
    edx = MEM32(esi + 0x184);
    ecx = MEM32(eax + 0x564);
    if (CMP_NE(ecx, MEM32(edx + 0x564))) goto loc_001CFEED; /* jne: not equal / not zero */

loc_001CFEE8: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001CFEED: ;
    SET_LO8(eax, MEM8(esi + 0x180));
    if (CMP_AE(LO8(eax), 8)) goto loc_001CFF0D; /* jae: above or equal (unsigned >=) */

loc_001CFEF7: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x59AEE4);
    if (TEST_Z(eax, eax)) goto loc_001CFF0D; /* je: equal / zero */

loc_001CFF05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001CFF0A: ;
    esp = esp + 0xC;

loc_001CFF0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CFF20
 * Original: 0x001CFF20 - 0x001D07A4 (2180 bytes, 447 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF20: ;
    esp = esp - 0x1E4;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebx, edi)) goto loc_001D079C; /* je: equal / zero */

loc_001CFF31: ;
    eax = esp + 0x98;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001CFF3D: ;
    (void)0; /* cmp MEM32(0x84A144), edi - flags set for next jcc */
    xmm1 = MEMF(esp + 0x200); /* movss */
    xmm0 = MEMF(esp + 0x204); /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    if (CMP_EQ(MEM32(0x84A144), edi)) goto loc_001CFF91; /* je: equal / zero */

loc_001CFF69: ;
    xmm2 = xmm1; /* movaps */
    xmm1 = MEMF(0x649AC4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xA4) = xmm2; /* movss */

loc_001CFF91: ;
    SET_LO8(ecx, MEM8(esp + 0x1F8));
    SET_LO8(eax, MEM8(esp + 0x1F4));
    xmm1 = MEMF(0x64925C); /* movss */
    xmm2 = MEMF(0x648EEC); /* movss */
    SET_LO8(edx, MEM8(esp + 0x1FC));
    MEM8(esp + 0xBA) = LO8(ecx);
    ecx = 4;
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xF8) = ecx;
    MEM32(esp + 0x118) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 1;
    MEM8(esp + 0xCA) = LO8(ecx);
    ebp = esi;
    MEM8(esp + 0xC3) = LO8(eax);
    eax = MEM32(esp + 0x1F8);
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEM32(esp + 0xE0) = eax;
    eax = 2;
    MEMF(esp + 0xB0) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    ebp = ebp | 0x50050;
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0x11C) = eax;
    MEM32(esp + 0x12C) = eax;
    MEM32(esp + 0x130) = eax;
    MEM32(esp + 0x13C) = eax;
    MEM32(esp + 0x14C) = eax;
    MEM32(esp + 0xB4) = ebp;
    SET_LO8(eax, MEM8(esp + 0xB4));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0x1A4) = xmm0; /* movss */
    MEMF(esp + 0x1AC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0xB8) = LO16(esi);
    MEM16(esp + 0xBA) = 0xFF;
    MEM8(esp + 0xC0) = 0xE;
    MEM8(esp + 0xC1) = LO8(edx);
    MEM8(esp + 0xC4) = 0;
    MEM32(esp + 0xDC) = 3;
    MEM32(esp + 0xFC) = edi;
    MEM32(esp + 0x10C) = edi;
    MEM32(esp + 0xE4) = 0x11B;
    MEM32(esp + 0x118) = esi;
    MEM32(esp + 0x128) = esi;
    MEM32(esp + 0xE8) = 0x11A;
    MEM32(esp + 0x138) = esi;
    MEM32(esp + 0x140) = 5;
    MEM32(esp + 0x148) = esi;
    MEM8(esp + 0xC9) = 0xFF;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEM8(esp + 0x1C) = 0;
    MEM8(esp + 0x8C) = 0;
    MEM32(esp + 0xC) = ebx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2D) = 0;
    MEM32(esp + 0x88) = 0x19;
    MEM8(esp + 0x2C) = 8;
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D01A3; /* je: equal / zero */

loc_001D019C: ;
    eax = 0x72;
    goto loc_001D01DE;

loc_001D01A3: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D01B2; /* je: equal / zero */

loc_001D01AB: ;
    eax = 0x86;
    goto loc_001D01DE;

loc_001D01B2: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D01C1; /* je: equal / zero */

loc_001D01BA: ;
    eax = 0x80;
    goto loc_001D01DE;

loc_001D01C1: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D01D0; /* je: equal / zero */

loc_001D01C9: ;
    eax = 0x7A;
    goto loc_001D01DE;

loc_001D01D0: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D01DE: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D01EE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, edi)) goto loc_001D0251; /* je: equal / zero */

loc_001D01F5: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(esp + 0x1F4));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    SET_LO8(ecx, LO8(ecx) & 0xF2);
    SET_LO8(ecx, LO8(ecx) + 0x12);
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    MEM8(eax + 0x17C) = LO8(ecx);
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D023B; /* jne: not equal / not zero */

loc_001D0228: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D0235; /* je: equal / zero */

loc_001D0230: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D0238;

loc_001D0235: ;
    ecx = ecx | 4;

loc_001D0238: ;
    MEM32(eax + 0x40) = ecx;

loc_001D023B: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 1;

loc_001D0251: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = eax;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x110) = esi;
    MEM32(esp + 0x120) = esi;
    MEM32(esp + 0x130) = esi;
    MEM32(esp + 0x140) = esi;
    MEM8(esp + 0xC0) = 7;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001D02C3; /* je: equal / zero */

loc_001D02A9: ;
    xmm0 = MEMF(0x649E20); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */

loc_001D02C3: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E6C); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    MEM8(esp + 0xCA) = LO8(ecx);
    ebp = esi;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x208); /* subss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(esp + 0xE0) = 0x140;
    ebp = ebp | 0x50050;
    MEM32(esp + 0xB4) = ebp;
    SET_LO8(eax, MEM8(esp + 0xB4));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEM8(esp + 0x1C) = 0;
    MEM8(esp + 0x8C) = 0;
    MEM32(esp + 0xC) = ebx;
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEM8(esp + 0x2D) = 0;
    MEM8(esp + 0x2C) = 8;
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D03A2; /* je: equal / zero */

loc_001D039B: ;
    eax = 0x72;
    goto loc_001D03DD;

loc_001D03A2: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D03B1; /* je: equal / zero */

loc_001D03AA: ;
    eax = 0x86;
    goto loc_001D03DD;

loc_001D03B1: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D03C0; /* je: equal / zero */

loc_001D03B9: ;
    eax = 0x80;
    goto loc_001D03DD;

loc_001D03C0: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D03CF; /* je: equal / zero */

loc_001D03C8: ;
    eax = 0x7A;
    goto loc_001D03DD;

loc_001D03CF: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D03DD: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x214;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D03ED: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001D043D; /* je: equal / zero */

loc_001D03F4: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x14;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D0427; /* jne: not equal / not zero */

loc_001D0414: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D0421; /* je: equal / zero */

loc_001D041C: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D0424;

loc_001D0421: ;
    ecx = ecx | 4;

loc_001D0424: ;
    MEM32(eax + 0x40) = ecx;

loc_001D0427: ;
    edi = eax + 0x180;
    ecx = 0x25;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 1;

loc_001D043D: ;
    xmm1 = MEMF(esp + 0x208); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    ebp = esi;
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEMF(esp + 0x98) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    ebp = ebp | 0x50052;
    MEM32(esp + 0xB4) = ebp;
    SET_LO8(eax, MEM8(esp + 0xB4));
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D04BE; /* je: equal / zero */

loc_001D04B7: ;
    eax = 0x72;
    goto loc_001D04F9;

loc_001D04BE: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D04CD; /* je: equal / zero */

loc_001D04C6: ;
    eax = 0x86;
    goto loc_001D04F9;

loc_001D04CD: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D04DC; /* je: equal / zero */

loc_001D04D5: ;
    eax = 0x80;
    goto loc_001D04F9;

loc_001D04DC: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D04EB; /* je: equal / zero */

loc_001D04E4: ;
    eax = 0x7A;
    goto loc_001D04F9;

loc_001D04EB: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D04F9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x214;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D0509: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001D0559; /* je: equal / zero */

loc_001D0510: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x14;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D0543; /* jne: not equal / not zero */

loc_001D0530: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D053D; /* je: equal / zero */

loc_001D0538: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D0540;

loc_001D053D: ;
    ecx = ecx | 4;

loc_001D0540: ;
    MEM32(eax + 0x40) = ecx;

loc_001D0543: ;
    edi = eax + 0x180;
    ecx = 0x25;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 1;

loc_001D0559: ;
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    ebp = esi;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20C); /* subss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEM32(esp + 0xE0) = 0x141;
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    ebp = ebp | 0x50050;
    MEM32(esp + 0xB4) = ebp;
    SET_LO8(eax, MEM8(esp + 0xB4));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0x98) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D05E8; /* je: equal / zero */

loc_001D05E1: ;
    eax = 0x72;
    goto loc_001D0623;

loc_001D05E8: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D05F7; /* je: equal / zero */

loc_001D05F0: ;
    eax = 0x86;
    goto loc_001D0623;

loc_001D05F7: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D0606; /* je: equal / zero */

loc_001D05FF: ;
    eax = 0x80;
    goto loc_001D0623;

loc_001D0606: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D0615; /* je: equal / zero */

loc_001D060E: ;
    eax = 0x7A;
    goto loc_001D0623;

loc_001D0615: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D0623: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x214;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D0633: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001D0683; /* je: equal / zero */

loc_001D063A: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x14;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D066D; /* jne: not equal / not zero */

loc_001D065A: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D0667; /* je: equal / zero */

loc_001D0662: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D066A;

loc_001D0667: ;
    ecx = ecx | 4;

loc_001D066A: ;
    MEM32(eax + 0x40) = ecx;

loc_001D066D: ;
    edi = eax + 0x180;
    ecx = 0x25;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 1;

loc_001D0683: ;
    xmm1 = MEMF(esp + 0x20C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    ebp = esi;
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    ebp = ebp | 0x50054;
    MEM32(esp + 0xB4) = ebp;
    SET_LO8(eax, MEM8(esp + 0xB4));
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D0704; /* je: equal / zero */

loc_001D06FD: ;
    eax = 0x72;
    goto loc_001D073F;

loc_001D0704: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D0713; /* je: equal / zero */

loc_001D070C: ;
    eax = 0x86;
    goto loc_001D073F;

loc_001D0713: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D0722; /* je: equal / zero */

loc_001D071B: ;
    eax = 0x80;
    goto loc_001D073F;

loc_001D0722: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D0731; /* je: equal / zero */

loc_001D072A: ;
    eax = 0x7A;
    goto loc_001D073F;

loc_001D0731: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D073F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x214;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D074F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001D079A; /* je: equal / zero */

loc_001D0756: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x14;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D0789; /* jne: not equal / not zero */

loc_001D0776: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D0783; /* je: equal / zero */

loc_001D077E: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D0786;

loc_001D0783: ;
    ecx = ecx | 4;

loc_001D0786: ;
    MEM32(eax + 0x40) = ecx;

loc_001D0789: ;
    edi = eax + 0x180;
    ecx = 0x25;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D079A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001D079C: ;
    POP32(esp, edi);
    esp = esp + 0x1E4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D07B0
 * Original: 0x001D07B0 - 0x001D0AE0 (816 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D07B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001D07B0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D07C5: ;
    xmm0 = MEMF(0x6496BC); /* movss */
    eax = MEM32(0x84A144);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x649718); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_001D0814; /* je: equal / zero */

loc_001D07F2: ;
    xmm0 = MEMF(0x649DF4); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x649E1C); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */

loc_001D0814: ;
    xmm0 = MEMF(0x64925C); /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm3 = MEMF(0x648CE0); /* movss */
    eax = 1;
    MEM16(esp + 0xA8) = LO16(eax);
    MEM32(esp + 0xCC) = eax;
    eax = 2;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xF0) = eax;
    eax = MEM32(0x8470DC);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x649E18); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7A);
    eax = 0x204;
    MEM16(esp + 0xB2) = 0xFF;
    MEM8(esp + 0xB8) = 0xE;
    MEM8(esp + 0xBB) = LO8(ebx);
    MEM8(esp + 0xBA) = LO8(ebx);
    MEM8(esp + 0xB9) = LO8(ebx);
    MEM32(esp + 0xD8) = 0x2CF;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0x100) = ebx;
    MEM8(esp + 0xC1) = 0xFF;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEM8(esp + 0xC2) = LO8(ebx);
    MEM32(esp + 0xAC) = 0x50850;
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x94) = LO8(ebx);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x35) = LO8(ebx);
    MEM32(esp + 0x90) = ebx;
    MEM8(esp + 0x34) = LO8(ebx);
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm3; /* movss */
    MEMF(esp + 0x88) = xmm3; /* movss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEM8(esp + 0xBC) = 0xFF;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D096A: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001D099A; /* je: equal / zero */

loc_001D0971: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0xC;
    MEM8(eax + 0x17C) = 0x12;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D099A: ;
    xmm0 = MEMF(0x649E14); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7A);
    eax = 0x204;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D09C8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001D09F8; /* je: equal / zero */

loc_001D09CF: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0xC;
    MEM8(eax + 0x17C) = 0x12;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D09F8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x649E10); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x64971C); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x59A8D8); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7A);
    eax = 0x204;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D0A48: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001D0A78; /* je: equal / zero */

loc_001D0A4F: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0xC;
    MEM8(eax + 0x17C) = 0x12;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D0A78: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x649E0C); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7A);
    eax = 0x204;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D0AA6: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001D0AD6; /* je: equal / zero */

loc_001D0AAD: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0xC;
    MEM8(eax + 0x17C) = 0x12;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D0AD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0AE0
 * Original: 0x001D0AE0 - 0x001D0E5C (892 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0AE0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_001D0E52; /* je: equal / zero */

loc_001D0AF7: ;
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D0B03: ;
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    xmm0 = MEMF(esp + 0x1F4); /* movss */
    xmm1 = MEMF(esp + 0x1F8); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    if (CMP_EQ(MEM32(0x84A144), ebx)) goto loc_001D0B51; /* je: equal / zero */

loc_001D0B2F: ;
    xmm2 = MEMF(0x649AC4); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */

loc_001D0B51: ;
    SET_LO8(ecx, MEM8(esp + 0x1EC));
    SET_LO8(eax, MEM8(esp + 0x1E8));
    xmm0 = MEMF(0x64925C); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648EEC); /* movss */
    MEM8(esp + 0xB2) = LO8(ecx);
    ecx = 4;
    MEM32(esp + 0xE0) = ecx;
    MEM32(esp + 0xF0) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2A8));
    PUSH32(esp, ebp);
    ebp = 1;
    MEM8(esp + 0xBE) = LO8(ecx);
    MEM16(esp + 0xAC) = LO16(ebp);
    MEM32(esp + 0xD0) = ebp;
    MEM8(esp + 0xB7) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1F4));
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEM8(esp + 0xB5) = LO8(eax);
    eax = 2;
    edx = 0xFF;
    ebp = ebp | 0x50050;
    (void)0; /* cmp edi, 0x2CF - flags set for next jcc */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0xA8) = ebp;
    SET_LO8(eax, MEM8(esp + 0xA8));
    MEM16(esp + 0xAE) = LO16(edx);
    MEM8(esp + 0xB4) = 0xE;
    MEM8(esp + 0xB8) = LO8(ebx);
    MEM32(esp + 0xD4) = edi;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0x100) = ebx;
    MEM8(esp + 0xBD) = LO8(edx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x90) = LO8(ebx);
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x31) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    MEM8(esp + 0x30) = 8;
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    if (CMP_NE(edi, 0x2CF)) goto loc_001D0D9D; /* jne: not equal / not zero */

loc_001D0CCF: ;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM8(esp + 0xB8) = LO8(edx);
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEM32(0x8496AC) = ebx;
    MEM8(esp + 0x30) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D0CF7; /* je: equal / zero */

loc_001D0CF0: ;
    eax = 0x72;
    goto loc_001D0D32;

loc_001D0CF7: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D0D06; /* je: equal / zero */

loc_001D0CFF: ;
    eax = 0x86;
    goto loc_001D0D32;

loc_001D0D06: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D0D15; /* je: equal / zero */

loc_001D0D0E: ;
    eax = 0x80;
    goto loc_001D0D32;

loc_001D0D15: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D0D24; /* je: equal / zero */

loc_001D0D1D: ;
    eax = 0x7A;
    goto loc_001D0D32;

loc_001D0D24: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D0D32: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D0D3E: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001D0D51; /* jne: not equal / not zero */

loc_001D0D45: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_001D07B0(); /* call 0x001D07B0 */

loc_001D0D4C: ;
    goto loc_001D0E3C;

loc_001D0D51: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x94;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x1B;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D0D91; /* jne: not equal / not zero */

loc_001D0D71: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D0D8B; /* je: equal / zero */

loc_001D0D79: ;
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax + 0x40) = ecx;
    esi = eax;
    PUSH32(esp, 0); sub_001D07B0(); /* call 0x001D07B0 */

loc_001D0D86: ;
    goto loc_001D0E3C;

loc_001D0D8B: ;
    ecx = ecx | 4;
    MEM32(eax + 0x40) = ecx;

loc_001D0D91: ;
    esi = eax;
    PUSH32(esp, 0); sub_001D07B0(); /* call 0x001D07B0 */

loc_001D0D98: ;
    goto loc_001D0E3C;

loc_001D0D9D: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D0DA8; /* je: equal / zero */

loc_001D0DA1: ;
    eax = 0x72;
    goto loc_001D0DE3;

loc_001D0DA8: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D0DB7; /* je: equal / zero */

loc_001D0DB0: ;
    eax = 0x86;
    goto loc_001D0DE3;

loc_001D0DB7: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D0DC6; /* je: equal / zero */

loc_001D0DBF: ;
    eax = 0x80;
    goto loc_001D0DE3;

loc_001D0DC6: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D0DD5; /* je: equal / zero */

loc_001D0DCE: ;
    eax = 0x7A;
    goto loc_001D0DE3;

loc_001D0DD5: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D0DE3: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D0DEF: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001D0E51; /* je: equal / zero */

loc_001D0DF6: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x94;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    (void)0; /* cmp MEM8(esp + 0x1E8), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(esp + 0x1E8), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    SET_LO8(ecx, LO8(ecx) & 0xF2);
    SET_LO8(ecx, LO8(ecx) + 0x12);
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    MEM8(eax + 0x17C) = LO8(ecx);
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D0E3A; /* jne: not equal / not zero */

loc_001D0E27: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D0E34; /* je: equal / zero */

loc_001D0E2F: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D0E37;

loc_001D0E34: ;
    ecx = ecx | 4;

loc_001D0E37: ;
    MEM32(eax + 0x40) = ecx;

loc_001D0E3A: ;
    esi = eax;

loc_001D0E3C: ;
    if (CMP_EQ(esi, ebx)) goto loc_001D0E51; /* je: equal / zero */

loc_001D0E40: ;
    edi = esi + 0x180;
    ecx = 0x21;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D0E51: ;
    POP32(esp, ebp);

loc_001D0E52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0E60
 * Original: 0x001D0E60 - 0x001D0F87 (295 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E60: ;
    esp = esp - 0x1DC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D0E73: ;
    edx = MEM32(0x84A144);
    eax = MEM32(esp + 0x1F0);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    SET_LO8(edx, MEM8(eax + 0x2A8));
    SET_LO8(ecx, (CMP_LE(edx, ebx)) ? 1 : 0); /* setle */
    xmm0 = MEMF(0x649248); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x64925C); /* movss */
    MEM32(esp + 0x168) = eax;
    esi = 1;
    eax = esi;
    ecx--;
    ecx = ecx & 0xD;
    ecx = ecx + 0x65;
    MEM32(esp + 0x58) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(edx));
    MEMF(esp + 0x170) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEM8(esp + 0x178) = LO8(ebx);
    MEM8(esp + 0x1E8) = LO8(ebx);
    MEM32(esp + 0x54) = esi;
    MEMF(esp + 0x174) = xmm1; /* movss */
    ecx = ecx + 0xB;
    eax = eax << LO8(ecx);
    MEM8(esp + 0x189) = LO8(ebx);
    MEM32(esp + 0x1E4) = 0x19;
    MEM8(esp + 0x188) = LO8(ebx);
    eax = eax | 0x70;
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 2;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    ebp = eax;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEM16(esp + 0x30) = LO16(esi);
    MEM16(esp + 0x32) = 0xFF;
    MEM8(esp + 0x38) = 7;
    MEM8(esp + 0x3B) = LO8(ebx);
    MEM8(esp + 0x3A) = 0xFF;
    MEM8(esp + 0x39) = LO8(ebx);
    MEM8(esp + 0x3C) = 0x82;
    MEM8(esp + 0x3F) = 0xFF;
    MEM8(esp + 0x3E) = 0xFF;
    MEM8(esp + 0x3D) = 0xFF;
    MEM8(esp + 0x40) = 0xFF;
    MEM8(esp + 0x41) = 0xFF;
    MEM8(esp + 0x42) = LO8(edx);
    MEM32(esp + 0x2C) = ebp;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) { sub_001D0F87(); return; } /* je: equal / zero */

loc_001D0F80: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001D0FC2(); return; /* tail jmp 0x001D0FC2 */

}

/**
 * sub_001D1390
 * Original: 0x001D1390 - 0x001D16C9 (825 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1390(void)
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

loc_001D1390: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp - 0x38;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D16C5; /* jne: not equal / not zero */

loc_001D13A0: ;
    SET_LO8(eax, MEM8(0x7FA274));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D16C5; /* jne: not equal / not zero */

loc_001D13AD: ;
    SET_LO8(eax, MEM8(0x7FA273));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D16C5; /* jne: not equal / not zero */

loc_001D13BA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(ebx + 0x54);
    eax = MEM32(ebx + 0x58);
    eax = eax + ecx;
    ecx = MEM32(0x7F9FF0);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x4C);
    edx = ecx + ecx;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebp;
    eax = ecx + eax * 2;
    edx = 0x60;
    MEM32(esp + 0x14) = 4;

loc_001D13F2: ;
    ecx = MEM32(ebx + 0x50);
    edi = edx + ecx + -96;
    esi = eax;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x50);
    eax = eax + MEM32(esp + 0x10);
    edi = edx + ecx + -48;
    esi = eax;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0x50);
    eax = eax + MEM32(esp + 0x10);
    edi = edi + edx;
    esi = eax;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x50);
    eax = eax + MEM32(esp + 0x10);
    edi = edx + ecx + 0x30;
    esi = eax;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(esp + 0x10);
    edi = edx + ecx + 0x60;
    eax = eax + esi;
    esi = eax;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = eax + MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x50);
    edi = edx + ecx + 0x90;
    esi = eax;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = eax + edi;
    edx = edx + 0x120;
    ecx--;
    MEM32(esp + 0x14) = ecx;
    if ((ecx != 0)) goto loc_001D13F2; /* jne: not equal / not zero */

loc_001D1484: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_001D1492: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D14A3: ;
    xmm3 = 0.0f; /* xorps self = zero */
    eax = eax << 2;
    edx = 0x595D20;
    edx = edx - eax;
    xmm2 = MEMF(edx); /* movss */
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001D16A4; /* jnp: not parity */

loc_001D14C7: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x7F9FF0);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x649514); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + MEMF(ebp + 0x228); /* addss */
    edi = (int32_t)xmm5; /* cvttss2si */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    xmm5 = MEMF(ebp + 0x228); /* movss */
    xmm5 = xmm5 - xmm0; /* subss */
    eax = (int32_t)xmm5; /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_001D16A4; /* jbe: below or equal (unsigned <=) */

loc_001D1545: ;
    xmm4 = xmm4 - xmm1; /* subss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    goto loc_001D1555;

loc_001D1551: ;
    edi = MEM32(esp + 0x2C);

loc_001D1555: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D156A: ;
    xmm2 = MEMF(0x649030); /* movss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax << 2;
    ecx = 0x595D20;
    ecx = ecx - eax;
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 + MEMF(ebp + 0x224); /* addss */
    edx = (int32_t)xmm4; /* cvttss2si */
    xmm4 = MEMF(ebp + 0x224); /* movss */
    ebp = MEM32(ebx + 0x50);
    xmm4 = xmm4 - xmm1; /* subss */
    eax = (int32_t)xmm4; /* cvttss2si */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    MEM32(esp + 0x30) = eax;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    esi = (int32_t)xmm4; /* cvttss2si */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEM32(esp + 0x38) = esi;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    eax = (int32_t)xmm4; /* cvttss2si */
    eax = eax + eax * 2;
    eax = eax << 3;
    esi = esi + eax;
    SET_LO16(esi, MEM16(ebp + esi * 2));
    ebp = MEM32(esp + 0x30);
    xmm3 = xmm3 + MEMF(0x649510); /* addss */
    edi = edi + edx;
    xmm4 = xmm2; /* movaps */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x50);
    MEM16(edx + edi * 2) = LO16(esi);
    edi = MEM32(esp + 0x2C);
    xmm4 = xmm4 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = (int32_t)xmm4; /* cvttss2si */
    MEM32(esp + 0x40) = ecx;
    esi = MEM32(esp + 0x40);
    esi = esi + eax;
    eax = MEM32(ebx + 0x50);
    SET_LO16(eax, MEM16(eax + esi * 2));
    ebp = ebp + edi;
    MEM16(edx + ebp * 2) = LO16(eax);
    eax = MEM32(esp + 0x40);
    edi = MEM32(ebx + 0x50);
    ebp = MEM32(esp + 0x30);
    xmm2 = xmm2 - xmm0; /* subss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    ecx = ecx + ecx * 2;
    ecx = ecx << 3;
    esi = ecx + eax;
    SET_LO16(esi, MEM16(edi + esi * 2));
    eax = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x28);
    ebp = ebp + eax;
    MEM16(edx + ebp * 2) = LO16(esi);
    esi = MEM32(esp + 0x38);
    ecx = ecx + esi;
    esi = MEM32(ebx + 0x50);
    SET_LO16(ecx, MEM16(esi + ecx * 2));
    edi = edi + eax;
    xmm0 = xmm3; /* movaps */
    MEM16(edx + edi * 2) = LO16(ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ebp = MEM32(esp + 0x18);
    if ((xmm1 > xmm0)) goto loc_001D1551; /* ja: above (unsigned >) */

loc_001D16A1: ;
    xmm3 = xmm1; /* movaps */

loc_001D16A4: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(0x649510); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((xmm3 > xmm0)) goto loc_001D1492; /* ja: above (unsigned >) */

loc_001D16C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001D16C5: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D16D0
 * Original: 0x001D16D0 - 0x001D173E (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D16D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D16D0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x21)) goto loc_001D1722; /* jne: not equal / not zero */

loc_001D16DE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x48))) goto loc_001D173C; /* jne: not equal / not zero */

loc_001D16E9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D173C; /* jne: not equal / not zero */

loc_001D16F2: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001D16F9: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001D173C; /* jl: less (signed <) */

loc_001D1700: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001D1715; /* je: equal / zero */

loc_001D170D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D1710: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D1715: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001D1722: ;
    if (TEST_NZ(eax, eax)) goto loc_001D173C; /* jne: not equal / not zero */

loc_001D1726: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x564);
    if (CMP_NE(ecx, MEM32(esi + 0x48))) goto loc_001D173C; /* jne: not equal / not zero */

loc_001D1737: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D173C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1740
 * Original: 0x001D1740 - 0x001D1772 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1740: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x180);
    ecx = MEM32(eax + 0x3B4);
    edx = MEM32(ecx + 0x28);
    if (TEST_Z(edx, edx)) { sub_001D1772(); return; } /* je: equal / zero */

loc_001D1758: ;
    edx = MEM32(eax + 0x3E4);
    if (CMP_NE(MEM16(edx + 0x2C8), 0)) { sub_001D1772(); return; } /* jne: not equal / not zero */

loc_001D1768: ;
    xmm0 = MEMF(esi + 0x188); /* movss */
    g_seh_ebp = ebp; sub_001D1775(); return; /* tail jmp 0x001D1775 */

}

/**
 * sub_001D17B0
 * Original: 0x001D17B0 - 0x001D17F7 (71 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D17B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001D17B0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x37 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x37)) goto loc_001D17F6; /* jne: not equal / not zero */

loc_001D17BB: ;
    ecx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(eax + 0x1A2));
    if (CMP_NE(LO8(edx), MEM8(ecx))) goto loc_001D17F6; /* jne: not equal / not zero */

loc_001D17C9: ;
    edx = MEM32(eax + 0x180);
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_001D17F6; /* jne: not equal / not zero */

loc_001D17D4: ;
    SET_LO8(ecx, MEM8(eax + 0x1A0));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0x1A0) = LO8(ecx);
    MEMF(eax + 0x1A4) = xmm0; /* movss */
    MEMF(eax + 0x1A8) = xmm0; /* movss */

loc_001D17F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1800
 * Original: 0x001D1800 - 0x001D18E4 (228 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1800(void)
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

loc_001D1800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi;
    PUSH32(esp, 0); sub_001D1B80(); /* call 0x001D1B80 */

loc_001D180D: ;
    (void)0; /* test MEM8(esi + 0x1A0), 1 - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x1AC); /* subss */
    xmm1 = xmm1 * MEMF(esi + 0x1B4); /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649550); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x6498B0); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x1A0), 1)) goto loc_001D18A7; /* je: equal / zero */

loc_001D1851: ;
    fp_push(MEMF(esi + 0x1A4)); /* fld float */
    xmm1 = MEMF(0x7FA24C); /* movss */
    /* FPU: fsin  */
    xmm1 = xmm1 * MEMF(0x6498AC); /* mulss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 + MEMF(esi + 0x1A4); /* addss */
    /* comiss xmm1, MEMF(0x648D88) - sets EFLAGS */
    MEMF(esi + 0x1A4) = xmm1; /* movss */
    if ((xmm1 < MEMF(0x648D88))) goto loc_001D18AC; /* jb: below (unsigned <) */

loc_001D1899: ;
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x1A0) = MEM8(esi + 0x1A0) & 0xFE;
    goto loc_001D18AC;

loc_001D18A7: ;
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_001D18AC: ;
    if (CMP_NE(MEM8(esi + 0x1A1), 2)) goto loc_001D18C7; /* jne: not equal / not zero */

loc_001D18B5: ;
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_001D18C7: ;
    fp_push(MEMF(esi + 0x1A8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D18D2: ;
    if (CMP_NE(MEM32(esi + 0x6C), 0x7C)) { sub_001D18E4(); return; } /* jne: not equal / not zero */

loc_001D18D8: ;
    ecx = ZX8(LO8(eax));
    eax = 0xFF;
    eax = eax - ecx;
    g_seh_ebp = ebp; sub_001D18E7(); return; /* tail jmp 0x001D18E7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D1920
 * Original: 0x001D1920 - 0x001D19A2 (130 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1920: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x21)) goto loc_001D1986; /* jne: not equal / not zero */

loc_001D192E: ;
    eax = MEM32(esi + 0x40);
    if (TEST_Z(eax, eax)) goto loc_001D1942; /* je: equal / zero */

loc_001D1935: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001D193B: ;
    MEM32(esi + 0x40) = 0;

loc_001D1942: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x44))) goto loc_001D19A0; /* jne: not equal / not zero */

loc_001D194D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D19A0; /* jne: not equal / not zero */

loc_001D1956: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001D195D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001D19A0; /* jl: less (signed <) */

loc_001D1964: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001D1979; /* je: equal / zero */

loc_001D1971: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D1974: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D1979: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001D1986: ;
    if (TEST_NZ(eax, eax)) goto loc_001D19A0; /* jne: not equal / not zero */

loc_001D198A: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x564);
    if (CMP_NE(ecx, MEM32(esi + 0x44))) goto loc_001D19A0; /* jne: not equal / not zero */

loc_001D199B: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D19A0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D19B0
 * Original: 0x001D19B0 - 0x001D1A0F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D19B0(void)
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

loc_001D19B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_001D1B80(); /* call 0x001D1B80 */

loc_001D19BC: ;
    /* ucomiss xmm0, MEMF(esi + 0x1BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    SET_LO8(eax, 1);
    if (1 /* jnp after test - parity */) goto loc_001D1A0D; /* jnp: not parity */

loc_001D19D1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esi + 0x1BC) = xmm0; /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x30) = (float)fp_top(); fp_popp(); /* fstp */

loc_001D1A0D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D1A10
 * Original: 0x001D1A10 - 0x001D1B7A (362 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A10(void)
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

loc_001D1A10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_001D1B80(); /* call 0x001D1B80 */

loc_001D1A1C: ;
    /* ucomiss xmm0, MEMF(esi + 0x1BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001D1A62; /* jnp: not parity */

loc_001D1A29: ;
    xmm1 = MEMF(esi + 0x1C0); /* movss */
    MEMF(esi + 0x1BC) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x1AC); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x1B4); /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x1C0); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    MEMF(esi + 0x38) = xmm1; /* movss */

loc_001D1A62: ;
    if (TEST_Z(MEM8(esi + 0x1A0), 2)) goto loc_001D1B76; /* je: equal / zero */

loc_001D1A6F: ;
    xmm0 = MEMF(esi + 0x1E4); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esi + 0x1E4) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_001D1AD8; /* jb: below (unsigned <) */

loc_001D1A95: ;
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1AA0: ;
    MEM8(esi + 0x4F) = LO8(eax);
    fp_push(MEMF(esi + 0x1D8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1AAE: ;
    MEM8(esi + 0x4E) = LO8(eax);
    fp_push(MEMF(esi + 0x1DC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1ABC: ;
    MEM8(esi + 0x4D) = LO8(eax);
    fp_push(MEMF(esi + 0x1E0)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1ACA: ;
    MEM8(esi + 0x50) = LO8(eax);
    MEM8(esi + 0x1A0) = MEM8(esi + 0x1A0) & 0xFD;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D1AD8: ;
    fp_push(MEMF(esi + 0x1C4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1AFB: ;
    MEM8(esi + 0x4F) = LO8(eax);
    fp_push(MEMF(esi + 0x1C8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x1E4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1B23: ;
    MEM8(esi + 0x4E) = LO8(eax);
    fp_push(MEMF(esi + 0x1CC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x1E4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1B4B: ;
    MEM8(esi + 0x4D) = LO8(eax);
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x1E4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1B73: ;
    MEM8(esi + 0x50) = LO8(eax);

loc_001D1B76: ;
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
 * sub_001D1B80
 * Original: 0x001D1B80 - 0x001D1BC5 (69 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1B80: ;
    if (TEST_Z(MEM8(eax + 0x1A0), 4)) { sub_001D1BC5(); return; } /* je: equal / zero */

loc_001D1B89: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1E8);
    edx = MEM32(0x76E884);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    xmm0 = MEMF(ecx + edx + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = MEMF(eax + 0x1B0); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x1AC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x1AC); /* addss */
    g_seh_ebp = ebp; sub_001D1BF6(); return; /* tail jmp 0x001D1BF6 */

}

/**
 * sub_001D1C20
 * Original: 0x001D1C20 - 0x001D1C6E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C20(void)
{

loc_001D1C20: ;
    esp = esp - 0x1C;
    PUSH32(esp, 0x46);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0x89;
    MEM32(esp + 0x18) = 0x72;
    MEM32(esp + 0x1C) = 0x80;
    MEM32(esp + 0x20) = 0x86;
    MEM32(esp + 0x24) = 0x7A;
    MEM32(esp + 0x28) = 0x79;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001D1C6A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1C70
 * Original: 0x001D1C70 - 0x001D1CE2 (114 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C70(void)
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

loc_001D1C70: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x46 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esp + 0xC), 0x46)) goto loc_001D1CE0; /* jne: not equal / not zero */

loc_001D1C7C: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x180);
    if (CMP_NE(eax, MEM32(ecx))) goto loc_001D1CE0; /* jne: not equal / not zero */

loc_001D1C8A: ;
    SET_LO8(eax, MEM8(esi + 0x1A0));
    fp_push(MEMF(esi + 0x1C4)); /* fld float */
    xmm0 = MEMF(0x648FD8); /* movss */
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esi + 0x1A0) = LO8(eax);
    MEMF(esi + 0x1E4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1CB3: ;
    MEM8(esi + 0x4F) = LO8(eax);
    fp_push(MEMF(esi + 0x1C8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1CC1: ;
    MEM8(esi + 0x4E) = LO8(eax);
    fp_push(MEMF(esi + 0x1CC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1CCF: ;
    MEM8(esi + 0x4D) = LO8(eax);
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D1CDD: ;
    MEM8(esi + 0x50) = LO8(eax);

loc_001D1CE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D1CF0
 * Original: 0x001D1CF0 - 0x001D1E57 (359 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1CF0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, edi);
    eax = esp + 0x10;
    esi = ecx;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D1D07: ;
    SET_LO8(eax, MEM8(esi + 0x2A8));
    xmm1 = MEMF(0x649248); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    edx = 1;
    ebp = edx;
    MEMF(esp + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    MEM32(esp + 0x4C) = edx;
    MEM16(esp + 0x28) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x1E8));
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x648FF0); /* movss */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x40;
    ebp = ebp | ebx;
    ebp = ebp | 0x3B0;
    ecx = 0xFF;
    MEM8(esp + 0x33) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1EC));
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649E00); /* movss */
    MEM8(esp + 0x32) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1F0));
    ebx = ebp;
    ebx = ebx & 0x20;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649BB4); /* movss */
    MEM8(esp + 0x170) = 0;
    MEM8(esp + 0x1E0) = 0;
    MEM32(esp + 0x160) = esi;
    MEMF(esp + 0x16C) = xmm0; /* movss */
    MEM8(esp + 0x181) = 0;
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = 0;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x24) = ebp;
    MEM16(esp + 0x2A) = LO16(ecx);
    MEM8(esp + 0x30) = 7;
    MEM8(esp + 0x31) = LO8(edx);
    MEM8(esp + 0x34) = 0x82;
    MEM8(esp + 0x37) = LO8(ecx);
    MEM8(esp + 0x36) = LO8(ecx);
    MEM8(esp + 0x35) = LO8(ecx);
    MEM8(esp + 0x38) = LO8(ecx);
    MEM8(esp + 0x39) = LO8(ecx);
    MEM8(esp + 0x3A) = LO8(eax);
    MEM32(esp + 0x50) = 0x9A;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if ((ebx == 0)) { sub_001D1E57(); return; } /* je: equal / zero */

loc_001D1E50: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001D1E96(); return; /* tail jmp 0x001D1E96 */

}

/**
 * sub_001D2010
 * Original: 0x001D2010 - 0x001D2035 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2010(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D2010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x180);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_001D2030; /* je: equal / zero */

loc_001D2026: ;
    eax = MEM32(eax + 0x568);
    if (TEST_NZ(eax, eax)) { sub_001D2035(); return; } /* jne: not equal / not zero */

loc_001D2030: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D20B0
 * Original: 0x001D20B0 - 0x001D21DD (301 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D20B0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, edi);
    eax = esp + 0x10;
    esi = ecx;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D20C7: ;
    SET_LO8(eax, MEM8(esi + 0x2A8));
    xmm1 = MEMF(0x649248); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    edx = 1;
    ebp = edx;
    MEM32(esp + 0x4C) = edx;
    MEM16(esp + 0x28) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x1E8));
    MEM8(esp + 0x33) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1EC));
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    ecx = 0xFF;
    MEMF(esp + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    MEM8(esp + 0x3A) = LO8(eax);
    MEM8(esp + 0x32) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1F0));
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x40;
    ebp = ebp | ebx;
    ebp = ebp | 0x30;
    MEM32(esp + 0x24) = ebp;
    SET_LO8(eax, MEM8(esp + 0x24));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649030); /* movss */
    MEM8(esp + 0x170) = 0;
    MEM8(esp + 0x1E0) = 0;
    MEM32(esp + 0x160) = esi;
    MEMF(esp + 0x16C) = xmm0; /* movss */
    MEM8(esp + 0x181) = 0;
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = 0;
    MEM16(esp + 0x2A) = LO16(ecx);
    MEM8(esp + 0x30) = 7;
    MEM8(esp + 0x31) = LO8(edx);
    MEM8(esp + 0x34) = 0xB4;
    MEM8(esp + 0x37) = LO8(ecx);
    MEM8(esp + 0x36) = LO8(ecx);
    MEM8(esp + 0x35) = LO8(ecx);
    MEM8(esp + 0x38) = LO8(ecx);
    MEM8(esp + 0x39) = LO8(ecx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x50) = 0x64;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) { sub_001D21DD(); return; } /* je: equal / zero */

loc_001D21D6: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001D2218(); return; /* tail jmp 0x001D2218 */

}

/**
 * sub_001D2910
 * Original: 0x001D2910 - 0x001D2A3C (300 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2910: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, edi);
    eax = esp + 0x10;
    esi = ecx;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D2927: ;
    edx = MEM32(0x84A144);
    eax = 0; /* xor self */
    edi = 1;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, edi)) ? 1 : 0); /* sete */
    SET_LO8(edx, MEM8(esi + 0x2A8));
    MEM8(esp + 0x170) = 0;
    MEM8(esp + 0x1E0) = 0;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x160) = esi;
    MEM16(esp + 0x28) = LO16(edi);
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x59AEB4); /* movss */
    xmm1 = MEMF(eax + 0x59AEDC); /* movss */
    SET_LO8(eax, MEM8(esp + 0x1E8));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 0xFF)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    MEMF(esp + 0x194) = xmm1; /* movss */
    xmm1 = MEMF(0x649248); /* movss */
    MEMF(esp + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    MEM8(esp + 0x1C8) = LO8(eax);
    eax = 0xFF;
    ecx = ecx & 4;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    MEMF(esp + 0x18C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x190) = xmm0; /* movss */
    MEMF(esp + 0x16C) = xmm0; /* movss */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x40;
    ebx = ebx | 0x30;
    MEM8(esp + 0x180) = LO8(ecx);
    MEM16(esp + 0x2A) = LO16(eax);
    MEM8(esp + 0x30) = 7;
    MEM8(esp + 0x33) = LO8(eax);
    MEM8(esp + 0x32) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x37) = LO8(eax);
    MEM8(esp + 0x36) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(edx);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_001D2A40(); return; /* tail jmp 0x001D2A40 */

}

/**
 * sub_001D2BA0
 * Original: 0x001D2BA0 - 0x001D2BEB (75 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2BA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001D2BA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_001D1B80(); /* call 0x001D1B80 */

loc_001D2BA9: ;
    SET_LO8(ecx, MEM8(eax + 0x1A1));
    (void)0; /* cmp LO8(ecx), 5 - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x1AC); /* subss */
    xmm1 = xmm1 * MEMF(eax + 0x1B4); /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649550); /* mulss */
    if (CMP_NE(LO8(ecx), 5)) { sub_001D2BEB(); return; } /* jne: not equal / not zero */

loc_001D2BDB: ;
    xmm0 = xmm0 + MEMF(0x6499B4); /* addss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2C10
 * Original: 0x001D2C10 - 0x001D2C58 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2C10: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x180);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(esi, esi)) { sub_001D2C58(); return; } /* je: equal / zero */

loc_001D2C2B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x18C), _icall_esp); /* indirect call */
    }

loc_001D2C45: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x34);
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_001D2C89(); return; /* tail jmp 0x001D2C89 */

}

/**
 * sub_001D2D60
 * Original: 0x001D2D60 - 0x001D2DC1 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D2D60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x184);
    if (TEST_Z(esi, esi)) { sub_001D2DC1(); return; } /* je: equal / zero */

loc_001D2D6F: ;
    ecx = MEM32(esi + 0xB0);
    if (CMP_NE(ecx, MEM32(eax + 0x188))) { sub_001D2DC1(); return; } /* jne: not equal / not zero */

loc_001D2D7D: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x568);
    if (TEST_NZ(edi, edi)) goto loc_001D2D8D; /* jne: not equal / not zero */

loc_001D2D88: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D2D8D: ;
    PUSH32(esp, 0); sub_002C38C0(); /* call 0x002C38C0 */

loc_001D2D92: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D2DBC; /* jne: not equal / not zero */

loc_001D2D96: ;
    eax = ZX8(MEM8(edi + 0x97));
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x16)) goto loc_001D2DAC; /* je: equal / zero */

loc_001D2DA7: ;
    if (CMP_NE(eax, 0x53)) goto loc_001D2D88; /* jne: not equal / not zero */

loc_001D2DAC: ;
    edx = MEM32(esi + 0x564);
    SET_LO8(eax, MEM8(edx + 0x6DE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001D2D88; /* je: equal / zero */

loc_001D2DBC: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2DD0
 * Original: 0x001D2DD0 - 0x001D2E44 (116 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2DD0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x21)) goto loc_001D2E25; /* jne: not equal / not zero */

loc_001D2DDE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x188))) goto loc_001D2E42; /* jne: not equal / not zero */

loc_001D2DEC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D2E42; /* jne: not equal / not zero */

loc_001D2DF5: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001D2DFC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001D2E42; /* jl: less (signed <) */

loc_001D2E03: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001D2E18; /* je: equal / zero */

loc_001D2E10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D2E13: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D2E18: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001D2E25: ;
    if (TEST_NZ(eax, eax)) goto loc_001D2E42; /* jne: not equal / not zero */

loc_001D2E29: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x564);
    if (CMP_NE(ecx, MEM32(esi + 0x188))) goto loc_001D2E42; /* jne: not equal / not zero */

loc_001D2E3D: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D2E42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E50
 * Original: 0x001D2E50 - 0x001D2F41 (241 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E50: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D2E64: ;
    eax = ZX8(MEM8(esi + 0x2A8));
    edx = MEM32(0x84A13C);
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm1 = MEMF(ecx + edx + 0x1F4); /* movss */
    ecx = ecx + edx;
    edx = MEM32(esp + 0x1E4);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x50) = edx;
    edx = 4;
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1F8); /* movss */
    ecx = 2;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x6C) = edx;
    edx = 1;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0x94) = ecx;
    ecx = eax + 0xB;
    SET_LO8(eax, MEM8(0x7819D5));
    ebp = edx;
    ebp = ebp << LO8(ecx);
    ebx = 0; /* xor self */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEM32(esp + 0x84) = edx;
    ebp = ebp | 0x10070;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM16(esp + 0x24) = LO16(edx);
    edx = 0xFF;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x4C) = 0xFFFFFFFEu;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = ebp;
    MEM16(esp + 0x26) = LO16(edx);
    MEM8(esp + 0x2C) = 0xC;
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_001D2F41(); return; } /* je: equal / zero */

loc_001D2F3D: ;
    SET_LO8(eax, 0x9B);
    g_seh_ebp = ebp; sub_001D2F5B(); return; /* tail jmp 0x001D2F5B */

}

/**
 * sub_001D30A0
 * Original: 0x001D30A0 - 0x001D30FA (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D30A0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_001D30B7; /* je: equal / zero */

loc_001D30AD: ;
    if (CMP_EQ(eax, 0x59)) goto loc_001D30B7; /* je: equal / zero */

loc_001D30B2: ;
    if (CMP_NE(eax, 0x21)) goto loc_001D30F8; /* jne: not equal / not zero */

loc_001D30B7: ;
    if (CMP_EQ(MEM32(esi + 0x70), 0xFE)) goto loc_001D30F8; /* je: equal / zero */

loc_001D30C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x180))) goto loc_001D30F8; /* jne: not equal / not zero */

loc_001D30CE: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D30F8; /* jne: not equal / not zero */

loc_001D30D7: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001D30DE: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001D30F8; /* jl: less (signed <) */

loc_001D30E5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001D30FA(); return; } /* je: equal / zero */

loc_001D30F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D30F5: ;
    esp = esp + 4;

loc_001D30F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3210
 * Original: 0x001D3210 - 0x001D3461 (593 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001D3210: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8470DC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 0x56));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    eax = eax + ecx;
    if ((eax == 0)) { sub_001D3461(); return; } /* je: equal / zero */

loc_001D322E: ;
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_001D3461(); return; } /* je: equal / zero */

loc_001D323C: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_001D3461(); return; } /* je: equal / zero */

loc_001D324A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_001D3461(); return; } /* je: equal / zero */

loc_001D3258: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) { sub_001D3461(); return; } /* jne: not equal / not zero */

loc_001D3263: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) { sub_001D3461(); return; } /* je: equal / zero */

loc_001D3275: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm5 = MEMF(0x648E3C); /* movss */
    eax = edx + eax + 0x14;
    eax = MEM32(eax + 0xB4);
    xmm3 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    if (TEST_Z(eax, eax)) goto loc_001D32C6; /* je: equal / zero */

loc_001D32BE: ;
    xmm5 = MEMF(0x64950C); /* movss */

loc_001D32C6: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001D32E3; /* jp: parity */

loc_001D32DE: ;
    xmm3 = xmm4; /* movaps */
    goto loc_001D32FD;

loc_001D32E3: ;
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 / xmm0; /* divss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_001D32F5; /* jbe: below or equal (unsigned <=) */

loc_001D32F0: ;
    xmm3 = xmm4; /* movaps */
    goto loc_001D32FD;

loc_001D32F5: ;
    /* comiss xmm3, xmm6 - sets EFLAGS */
    if ((xmm3 <= xmm6)) goto loc_001D32FD; /* jbe: below or equal (unsigned <=) */

loc_001D32FA: ;
    xmm3 = xmm6; /* movaps */

loc_001D32FD: ;
    xmm0 = MEMF(esi + 0x20C); /* movss */
    xmm1 = MEMF(esi + 0x2C); /* movss */
    xmm2 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x204); /* addss */
    MEMF(esi + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x210); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = MEMF(esi + 0x2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x208); /* addss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x190));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D33DA; /* jne: not equal / not zero */

loc_001D3354: ;
    xmm0 = MEMF(esi + 0x19C); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esi + 0x188); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x184); /* subss */
    MEMF(esi + 0x19C) = xmm0; /* movss */
    if ((xmm4 <= xmm0)) goto loc_001D3386; /* jbe: below or equal (unsigned <=) */

loc_001D3381: ;
    xmm0 = xmm4; /* movaps */
    goto loc_001D3397;

loc_001D3386: ;
    /* comiss xmm0, MEMF(esi + 0x198) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x198))) goto loc_001D3397; /* jbe: below or equal (unsigned <=) */

loc_001D338F: ;
    xmm0 = MEMF(esi + 0x198); /* movss */

loc_001D3397: ;
    MEMF(esi + 0x19C) = xmm0; /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x198); /* divss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001D33C4; /* jp: parity */

loc_001D33B0: ;
    (void)0; /* test MEM8(esi + 0x1A0), 0x10 - flags set for next jcc */
    MEM8(esi + 0x190) = 1;
    if (TEST_NZ(MEM8(esi + 0x1A0), 0x10)) { sub_001D3461(); return; } /* jne: not equal / not zero */

loc_001D33C4: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x184); /* addss */
    MEMF(esi + 0x18C) = xmm0; /* movss */
    goto loc_001D344E;

loc_001D33DA: ;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 / xmm5; /* divss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_001D3422; /* jbe: below or equal (unsigned <=) */

loc_001D341D: ;
    xmm0 = xmm4; /* movaps */
    goto loc_001D342A;

loc_001D3422: ;
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_001D342A; /* jbe: below or equal (unsigned <=) */

loc_001D3427: ;
    xmm0 = xmm6; /* movaps */

loc_001D342A: ;
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x188); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x188); /* addss */
    MEMF(esi + 0x18C) = xmm1; /* movss */

loc_001D344E: ;
    fp_push(MEMF(esi + 0x18C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D3459: ;
    MEM8(esi + 0x50) = LO8(eax);
    SET_LO8(eax, 1);
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
 * sub_001D3470
 * Original: 0x001D3470 - 0x001D36BC (588 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3470(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001D3470: ;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x204); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esi + 0x204) = xmm0; /* movss */
    if ((xmm5 <= xmm0)) goto loc_001D34F0; /* jbe: below or equal (unsigned <=) */

loc_001D349B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = MEMF(0x648D14); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x208)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001D34D3; /* jbe: below or equal (unsigned <=) */

loc_001D34C9: ;
    MEMF(esi + 0x204) = xmm5; /* movss */
    goto loc_001D34E8;

loc_001D34D3: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / MEMF(esi + 0x208); /* divss */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */

loc_001D34E8: ;
    MEMF(esi + 0x210) = xmm0; /* movss */

loc_001D34F0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001D34F5: ;
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001D3526; /* jbe: below or equal (unsigned <=) */

loc_001D3502: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001D3507: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D351C: ;
    xmm5 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0xE1);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esi + 0x50) = LO8(ecx);

loc_001D3526: ;
    xmm0 = MEMF(esi + 0x214); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 < xmm5)) goto loc_001D36B8; /* jb: below (unsigned <) */

loc_001D3537: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    eax = MEM32(esi + 0x218);
    PUSH32(esp, ebx);
    MEMF(esi + 0x214) = xmm0; /* movss */
    if ((xmm5 <= xmm0)) goto loc_001D35CD; /* jbe: below or equal (unsigned <=) */

loc_001D3553: ;
    eax--;
    if ((eax == 0)) goto loc_001D35AE; /* je: equal / zero */

loc_001D3556: ;
    eax--;
    if ((eax != 0)) goto loc_001D36B7; /* jne: not equal / not zero */

loc_001D355D: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(esi + 0x218) = 0;
    MEMF(esi + 0x214) = xmm0; /* movss */
    eax = esi + 0x184;
    ecx = 8;
    ebx = ebx | 0xFFFFFFFFu;
    goto loc_001D3590;

    /* nop */
    edi = edi;

loc_001D3590: ;
    MEM32(eax + 4) = 0xAAAAAAAAu;
    MEM32(eax) = 0xAAAAAAAAu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = ebx;
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_001D3590; /* jne: not equal / not zero */

loc_001D35A9: ;
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D35AE: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    POP32(esp, ebx);
    MEM32(esi + 0x218) = 2;
    MEMF(esi + 0x214) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D35CD: ;
    eax--;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_001D367E; /* je: equal / zero */

loc_001D35D5: ;
    eax--;
    if ((eax != 0)) goto loc_001D36B6; /* jne: not equal / not zero */

loc_001D35DC: ;
    PUSH32(esp, 0x1F);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E2500(); /* call 0x003E2500 */

loc_001D35E5: ;
    edx = eax;
    esp = esp + 4;
    edx = edx & 0x80000003u;
    if (((int32_t)edx >= 0)) goto loc_001D35F7; /* jns: not sign (positive) */

loc_001D35F2: ;
    edx--;
    edx = edx | 0xFFFFFFFCu;
    edx++;

loc_001D35F7: ;
    ebx = 0xFFFFFFFFu;
    if ((edx == 0)) goto loc_001D3622; /* je: equal / zero */

loc_001D35FE: ;
    ecx = eax + -1;
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_001D360E; /* jns: not sign (positive) */

loc_001D3609: ;
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001D360E: ;
    if ((ecx == 0)) goto loc_001D3622; /* je: equal / zero */

loc_001D3610: ;
    if (CMP_EQ(MEM32(esi + eax * 4 + 0x184), ebx)) goto loc_001D363A; /* je: equal / zero */

loc_001D3619: ;
    MEM32(esi + eax * 4 + 0x184) = ebx;
    goto loc_001D363A;

loc_001D3622: ;
    if (CMP_EQ(MEM32(esi + eax * 4 + 0x184), 0xAAAAAAAAu)) goto loc_001D363A; /* je: equal / zero */

loc_001D362F: ;
    MEM32(esi + eax * 4 + 0x184) = 0xAAAAAAAAu;

loc_001D363A: ;
    esi = esi + 0x184;
    edi = 0x20;

loc_001D3645: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0xAAAAAAAAu)) goto loc_001D3672; /* je: equal / zero */

loc_001D364E: ;
    if (CMP_EQ(eax, ebx)) goto loc_001D3672; /* je: equal / zero */

loc_001D3652: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001D3657: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001D365E: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    eax = MEM32(esi);
    if (TEST_Z(LO8(eax), 1)) goto loc_001D366B; /* je: equal / zero */

loc_001D3664: ;
    eax = eax | 0x80000000u;
    goto loc_001D3670;

loc_001D366B: ;
    eax = eax & 0x7FFFFFFF;

loc_001D3670: ;
    MEM32(esi) = eax;

loc_001D3672: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_001D3645; /* jne: not equal / not zero */

loc_001D3678: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D367E: ;
    esi = esi + 0x184;
    edi = 0x20;
    /* nop */

loc_001D3690: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001D3695: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001D369C: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    eax = MEM32(esi);
    if (TEST_Z(LO8(eax), 1)) goto loc_001D36A9; /* je: equal / zero */

loc_001D36A2: ;
    eax = eax | 0x80000000u;
    goto loc_001D36AE;

loc_001D36A9: ;
    eax = eax & 0x7FFFFFFF;

loc_001D36AE: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_001D3690; /* jne: not equal / not zero */

loc_001D36B6: ;
    POP32(esp, edi);

loc_001D36B7: ;
    POP32(esp, ebx);

loc_001D36B8: ;
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
 * sub_001D36C0
 * Original: 0x001D36C0 - 0x001D37AE (238 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D36C0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x21)) goto loc_001D3721; /* jne: not equal / not zero */

loc_001D36CE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x180))) goto loc_001D37AC; /* jne: not equal / not zero */

loc_001D36E0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D37AC; /* jne: not equal / not zero */

loc_001D36ED: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001D36F4: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001D37AC; /* jl: less (signed <) */

loc_001D36FF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001D3714; /* je: equal / zero */

loc_001D370C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D370F: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D3714: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001D3721: ;
    if (TEST_NZ(eax, eax)) goto loc_001D3739; /* jne: not equal / not zero */

loc_001D3725: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x564);
    (void)0; /* cmp ecx, MEM32(esi + 0x180) - flags set for next jcc */
    goto loc_001D37A5;

loc_001D3739: ;
    if (CMP_NE(eax, 0x5B)) goto loc_001D378E; /* jne: not equal / not zero */

loc_001D373E: ;
    edx = MEM32(esi + 0x180);
    eax = MEM32(edx + 0x3E0);
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001D37AC; /* je: equal / zero */

loc_001D3754: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + -1744;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(edx, MEM32(eax))) goto loc_001D37AC; /* jne: not equal / not zero */

loc_001D3772: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esi + 0x214) = xmm0; /* movss */
    MEM32(esi + 0x218) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D378E: ;
    if (CMP_NE(eax, 0x5D)) goto loc_001D37AC; /* jne: not equal / not zero */

loc_001D3793: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x180);
    eax = MEM32(edx);
    (void)0; /* cmp eax, MEM32(ecx + 0x3E0) - flags set for next jcc */

loc_001D37A5: ;
    if (CMP_NE(eax, MEM32(ecx + 0x3E0))) goto loc_001D37AC; /* jne: not equal / not zero */

loc_001D37A7: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D37AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D37B0
 * Original: 0x001D37B0 - 0x001D382A (122 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001D37B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x218);
    if (CMP_EQ(eax, 1)) goto loc_001D37C5; /* je: equal / zero */

loc_001D37C0: ;
    if (CMP_NE(eax, 2)) goto loc_001D37EA; /* jne: not equal / not zero */

loc_001D37C5: ;
    edx = 1;
    ecx = 0x4147C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D37D4: ;
    eax = esi + 0x184;
    PUSH32(esp, eax);
    MEM32(0x549B44) = 1;
    PUSH32(esp, 0); sub_0053A2D0(); /* call 0x0053A2D0 */

loc_001D37EA: ;
    xmm0 = MEMF(esi + 0x210); /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x208); /* divss */
    xmm0 = xmm0 + MEMF(esi + 0x210); /* addss */
    MEMF(eax + 0xB4) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3830
 * Original: 0x001D3830 - 0x001D3847 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3830(void)
{

loc_001D3830: ;
    edx = 0; /* xor self */
    ecx = 0x4147C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D383C: ;
    MEM32(0x549B44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3850
 * Original: 0x001D3850 - 0x001D38B1 (97 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3850(void)
{
    float xmm0;

loc_001D3850: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x5499F0);
    eax = 3;
    MEM32(0x547430) = eax;
    MEM32(0x547434) = eax;
    xmm0 = MEMF(ecx + 0x1F8); /* movss */
    eax = MEM32(esp + 8);
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(ecx + 0x1F0); /* divss */
    xmm0 = xmm0 + MEMF(ecx + 0x1F8); /* addss */
    edx = edx | 4;
    MEM32(0x5499F0) = edx;
    MEMF(eax + 0xB4) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001D38C0
 * Original: 0x001D38C0 - 0x001D3A15 (341 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D38C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D38C0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D38D5: ;
    SET_LO8(edx, MEM8(esi + 0x2A8));
    edi = MEM32(0x84A13C);
    xmm0 = MEMF(0x648D10); /* movss */
    eax = ZX8(LO8(edx));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm1 = MEMF(ecx + edi + 0x1F4); /* movss */
    ecx = ecx + edi;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1F8); /* movss */
    ecx = 2;
    edi = 1;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x78) = ecx;
    ecx = eax + 0xB;
    ebp = edi;
    ebp = ebp << LO8(ecx);
    SET_LO8(ecx, 0xAF);
    ebx = 0; /* xor self */
    eax = 0xFF;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64925C); /* movss */
    ebp = ebp | 0x50050;
    MEM32(esp + 0x24) = ebp;
    MEM8(esp + 0x33) = LO8(ecx);
    MEM8(esp + 0x32) = LO8(ecx);
    MEM8(esp + 0x31) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x24));
    (void)0; /* test LO8(ecx), 0x20 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x50) = 0x20C;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM16(esp + 0x28) = LO16(edi);
    MEM16(esp + 0x2A) = LO16(eax);
    MEM8(esp + 0x30) = 0xE;
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x37) = LO8(eax);
    MEM8(esp + 0x36) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(edx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x170) = LO8(ebx);
    MEM8(esp + 0x1E0) = LO8(ebx);
    MEM32(esp + 0x160) = esi;
    MEMF(esp + 0x16C) = xmm1; /* movss */
    MEMF(esp + 0x168) = xmm1; /* movss */
    MEM8(esp + 0x181) = LO8(ebx);
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = LO8(ebx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), 0x20)) { sub_001D3A15(); return; } /* je: equal / zero */

loc_001D3A0E: ;
    ecx = 0x72;
    g_seh_ebp = ebp; sub_001D3A52(); return; /* tail jmp 0x001D3A52 */

}

/**
 * sub_001D3AC0
 * Original: 0x001D3AC0 - 0x001D3C0E (334 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3AC0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D3AD5: ;
    eax = MEM32(0x84A144);
    xmm0 = MEMF(0x59A8D8); /* movss */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_001D3B08; /* je: equal / zero */

loc_001D3AF4: ;
    xmm0 = MEMF(0x649AC0); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001D3B08: ;
    SET_LO8(edx, MEM8(esi + 0x2A8));
    xmm0 = MEMF(0x64925C); /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(edx));
    edi = 1;
    ebp = edi;
    eax = 2;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x78) = eax;
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    eax = 0xFF;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = ebp | 0x50050;
    MEM32(esp + 0x24) = ebp;
    SET_LO8(ecx, MEM8(esp + 0x24));
    (void)0; /* test LO8(ecx), 0x20 - flags set for next jcc */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x50) = 0x111;
    MEM32(esp + 0x60) = 3;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM16(esp + 0x28) = LO16(edi);
    MEM16(esp + 0x2A) = LO16(eax);
    MEM8(esp + 0x30) = 0xC;
    MEM8(esp + 0x33) = 0x64;
    MEM8(esp + 0x32) = 0xCD;
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x37) = LO8(eax);
    MEM8(esp + 0x36) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(edx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x170) = LO8(ebx);
    MEM8(esp + 0x1E0) = LO8(ebx);
    MEM32(esp + 0x160) = esi;
    MEMF(esp + 0x16C) = xmm1; /* movss */
    MEMF(esp + 0x168) = xmm1; /* movss */
    MEM8(esp + 0x181) = LO8(ebx);
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = LO8(ebx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), 0x20)) { sub_001D3C0E(); return; } /* je: equal / zero */

loc_001D3C07: ;
    ecx = 0x72;
    g_seh_ebp = ebp; sub_001D3C4B(); return; /* tail jmp 0x001D3C4B */

}

/**
 * sub_001D3CB0
 * Original: 0x001D3CB0 - 0x001D3EB0 (512 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3CB0: ;
    esp = esp - 0x320;
    eax = ZX8(MEM8(ebx + 0x2A8));
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = MEMF(eax + ecx + 0x1FC); /* movss */
    eax = eax + ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x200); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x18;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D3CF4: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    ebp = 1;
    MEM8(esp + 0x42) = LO8(ecx);
    MEM16(esp + 0x30) = LO16(ebp);
    MEM32(esp + 0x90) = ebp;
    MEM32(esp + 0xA0) = ebp;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648EEC); /* movss */
    edi = 2;
    ebp = ebp | 0x10070;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x59D950); /* mulss */
    MEMF(esp + 0x170) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    esi = 0; /* xor self */
    MEM32(esp + 0x2C) = ebp;
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0xFC) = xmm0; /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x180) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0x32) = 0xFF;
    MEM8(esp + 0x38) = 0xF;
    MEM8(esp + 0x3B) = 0;
    MEM8(esp + 0x3A) = 0;
    MEM8(esp + 0x39) = 0;
    MEM8(esp + 0x3C) = 0xFF;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = 0x11B;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = 3;
    MEM32(esp + 0x80) = esi;
    MEM32(esp + 0x84) = edi;
    MEM32(esp + 0x5C) = 0x11A;
    MEM32(esp + 0x88) = edi;
    MEM32(esp + 0x94) = edi;
    MEM32(esp + 0x98) = 4;
    MEM32(esp + 0xA4) = edi;
    MEM8(esp + 0x41) = 0xFF;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x178) = 0;
    MEM8(esp + 0x1E8) = 0;
    MEM32(esp + 0x168) = ebx;
    MEMF(esp + 0x16C) = xmm0; /* movss */
    MEMF(esp + 0x174) = xmm0; /* movss */
    MEMF(esp + 0x184) = xmm0; /* movss */
    MEM8(esp + 0x189) = 0;
    MEM32(esp + 0x1E4) = 0x19;
    MEM8(esp + 0x188) = 8;
    MEMF(esp + 0x1D4) = xmm1; /* movss */
    MEMF(esp + 0x1D8) = xmm2; /* movss */
    MEMF(esp + 0x1DC) = xmm2; /* movss */
    MEMF(esp + 0x1E0) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) { sub_001D3EB0(); return; } /* je: equal / zero */

loc_001D3EA9: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001D3EEB(); return; /* tail jmp 0x001D3EEB */

}

/**
 * sub_001D41C0
 * Original: 0x001D41C0 - 0x001D424B (139 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D41C0(void)
{
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

loc_001D41C0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x1EC); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(eax + 0x1EC) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001D4248; /* jbe: below or equal (unsigned <=) */

loc_001D41EA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = MEMF(0x648D14); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x1F0)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001D422B; /* jbe: below or equal (unsigned <=) */

loc_001D4218: ;
    MEMF(eax + 0x1EC) = xmm1; /* movss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001D422B: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / MEMF(eax + 0x1F0); /* divss */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */

loc_001D4248: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D4250
 * Original: 0x001D4250 - 0x001D42BA (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4250: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x5F - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_A(eax, 0x5F)) goto loc_001D42B8; /* ja: above (unsigned >) */

loc_001D425E: ;
    eax = ZX8(MEM8(eax + 0x1D42CC));
    PUSH32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1D42BC)); return; /* indirect tail jmp */

    ecx = MEM32(edi + 0x180);
    edx = MEM32(esp + 0x10);
    (void)0; /* cmp edx, MEM32(ecx + 0x3E0) - flags set for next jcc */
    goto loc_001D42AE;

    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x180);
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001D42B7; /* jne: not equal / not zero */

loc_001D428D: ;
    esi = MEM32(eax + 0x3E0);
    PUSH32(esp, 0); sub_002C38C0(); /* call 0x002C38C0 */

loc_001D4298: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    goto loc_001D42AE;

    eax = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x180);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, MEM32(edx + 0x3E0) - flags set for next jcc */

loc_001D42AE: ;
    if (CMP_NE(ecx, MEM32(edx + 0x3E0))) goto loc_001D42B7; /* jne: not equal / not zero */

loc_001D42B0: ;
    esi = edi;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D42B7: ;
    POP32(esp, esi);

loc_001D42B8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D43F0
 * Original: 0x001D43F0 - 0x001D442C (60 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D43F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D43F0: ;
    ecx = MEM32(0x5499F0);
    eax = 1;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    eax = 2;
    ecx = ecx | 3;
    MEM32(0x547340) = eax;
    MEM32(0x54733C) = eax;
    MEM32(0x5473C0) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x5473BC) = eax;
    g_seh_ebp = ebp; sub_000DB8E0(); return; /* tail jmp 0x000DB8E0 */

}

/**
 * sub_001D4430
 * Original: 0x001D4430 - 0x001D45E4 (436 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4430: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D4445: ;
    ecx = MEM32(0x84A13C);
    xmm0 = MEMF(0x648D10); /* movss */
    edi = MEM32(0x8470DC);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm1 = MEMF(eax + ecx + 0x1F4); /* movss */
    eax = eax + ecx;
    ecx = 4;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x90) = ecx;
    ecx = ebx + 0xB;
    ebp = 1;
    MEM8(esp + 0x3A) = LO8(ebx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x770);
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1F8); /* movss */
    eax = 2;
    MEM32(esp + 0x88) = ebp;
    ebp = ebp << LO8(ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x98) = eax;
    SET_LO8(eax, 0x32);
    ebp = ebp | 0x10079;
    esi = 0; /* xor self */
    ecx = 0xFF;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x5A005C); /* movss */
    MEM32(esp + 0x24) = ebp;
    MEM8(esp + 0x32) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x24));
    ebx = ebx + edi;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    MEM32(esp + 0x50) = 0xFFFFFFFEu;
    MEM32(esp + 0x54) = 0x100;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x8C) = esi;
    MEM32(esp + 0x7C) = esi;
    MEM16(esp + 0x28) = 0xF;
    MEM16(esp + 0x2A) = 0x11;
    MEM8(esp + 0x30) = 0xC;
    MEM8(esp + 0x33) = 0xAF;
    MEM8(esp + 0x34) = 0;
    MEM8(esp + 0x37) = LO8(ecx);
    MEM8(esp + 0x36) = LO8(ecx);
    MEM8(esp + 0x35) = LO8(ecx);
    MEM8(esp + 0x38) = LO8(ecx);
    MEM8(esp + 0x39) = LO8(ecx);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x170) = 0;
    MEM8(esp + 0x1E0) = 0;
    MEM32(esp + 0x160) = ebx;
    MEMF(esp + 0x16C) = xmm0; /* movss */
    MEMF(esp + 0x164) = xmm0; /* movss */
    MEM8(esp + 0x181) = 0;
    MEM32(esp + 0x1DC) = 0x19;
    MEM8(esp + 0x180) = 0;
    MEMF(esp + 0x17C) = xmm0; /* movss */
    MEMF(esp + 0x178) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) { sub_001D45E4(); return; } /* je: equal / zero */

loc_001D45DD: ;
    eax = 0x72;
    g_seh_ebp = ebp; sub_001D461F(); return; /* tail jmp 0x001D461F */

}

/**
 * sub_001D4690
 * Original: 0x001D4690 - 0x001D4744 (180 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4690(void)
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

loc_001D4690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x190));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D4740; /* jne: not equal / not zero */

loc_001D46A3: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x19C); /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esi + 0x188); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x184); /* subss */
    MEMF(esi + 0x19C) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001D46D8; /* jbe: below or equal (unsigned <=) */

loc_001D46D3: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001D46E9;

loc_001D46D8: ;
    /* comiss xmm0, MEMF(esi + 0x198) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x198))) goto loc_001D46E9; /* jbe: below or equal (unsigned <=) */

loc_001D46E1: ;
    xmm0 = MEMF(esi + 0x198); /* movss */

loc_001D46E9: ;
    MEMF(esi + 0x19C) = xmm0; /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x198); /* divss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001D471A; /* jp: parity */

loc_001D4706: ;
    (void)0; /* test MEM8(esi + 0x1A0), 0x10 - flags set for next jcc */
    MEM8(esi + 0x190) = 1;
    if (TEST_Z(MEM8(esi + 0x1A0), 0x10)) goto loc_001D471A; /* je: equal / zero */

loc_001D4716: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D471A: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x184); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esi + 0x18C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D473D: ;
    MEM8(esi + 0x50) = LO8(eax);

loc_001D4740: ;
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
 * sub_001D4750
 * Original: 0x001D4750 - 0x001D476B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4750(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D4750: ;
    esp = esp - 0x190;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    if (CMP_NE(esi, ebx)) { sub_001D476B(); return; } /* jne: not equal / not zero */

loc_001D4760: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x190;
    esp += 4; return; /* ret */

}

/**
 * sub_001D4A20
 * Original: 0x001D4A20 - 0x001D4BB2 (402 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4A20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x1A0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D4AD2; /* jne: not equal / not zero */

loc_001D4A34: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x1A8); /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esi + 0x198); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x194); /* subss */
    MEMF(esi + 0x1A8) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001D4A69; /* jbe: below or equal (unsigned <=) */

loc_001D4A64: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001D4A7A;

loc_001D4A69: ;
    /* comiss xmm0, MEMF(esi + 0x1A4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x1A4))) goto loc_001D4A7A; /* jbe: below or equal (unsigned <=) */

loc_001D4A72: ;
    xmm0 = MEMF(esi + 0x1A4); /* movss */

loc_001D4A7A: ;
    MEMF(esi + 0x1A8) = xmm0; /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x1A4); /* divss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001D4AAC; /* jp: parity */

loc_001D4A97: ;
    (void)0; /* test MEM8(esi + 0x1AD), 0x10 - flags set for next jcc */
    MEM8(esi + 0x1A0) = 1;
    if (TEST_Z(MEM8(esi + 0x1AD), 0x10)) goto loc_001D4AAC; /* je: equal / zero */

loc_001D4AA7: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001D4AAC: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x194); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esi + 0x19C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D4ACF: ;
    MEM8(esi + 0x50) = LO8(eax);

loc_001D4AD2: ;
    xmm0 = MEMF(esi + 0x1B0); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x1B0) = xmm0; /* movss */
    if ((xmm7 <= xmm0)) goto loc_001D4B4D; /* jbe: below or equal (unsigned <=) */

loc_001D4AF8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = MEMF(0x648D14); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001D4B30; /* jbe: below or equal (unsigned <=) */

loc_001D4B26: ;
    MEMF(esi + 0x1B0) = xmm7; /* movss */
    goto loc_001D4B45;

loc_001D4B30: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / MEMF(esi + 0x1B4); /* divss */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */

loc_001D4B45: ;
    MEMF(esi + 0x1BC) = xmm0; /* movss */

loc_001D4B4D: ;
    PUSH32(esp, ebx);
    ebx = (int32_t)MEMF(esi + 0x19C); /* cvttss2si */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001D4B5B: ;
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001D4B94; /* jbe: below or equal (unsigned <=) */

loc_001D4B68: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001D4B6D: ;
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x33);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_001D4B79: ;
    eax = eax - 0x19;
    ebx = ebx + eax;
    if (((int32_t)ebx >= 0)) goto loc_001D4B84; /* jns: not sign (positive) */

loc_001D4B80: ;
    ebx = 0; /* xor self */
    goto loc_001D4B91;

loc_001D4B84: ;
    if (CMP_LE(ebx, 0xFF)) goto loc_001D4B91; /* jle: less or equal (signed <=) */

loc_001D4B8C: ;
    ebx = 0xFF;

loc_001D4B91: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_001D4B94: ;
    MEM8(esi + 0x50) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 0x188));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001D4BB2(); return; } /* je: equal / zero */

loc_001D4BA2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001D4BB8(); return; /* tail jmp 0x001D4BB8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D4C30
 * Original: 0x001D4C30 - 0x001D4C8B (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4C30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, 0x76 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_A(ebx, 0x76)) goto loc_001D4C67; /* ja: above (unsigned >) */

loc_001D4C44: ;
    eax = ZX8(MEM8(ebx + 0x1D4D2C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1D4D18)); return; /* indirect tail jmp */

    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x564);
    if (CMP_NE(edx, MEM32(esi + 0x180))) goto loc_001D4C67; /* jne: not equal / not zero */

loc_001D4C62: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D4C67: ;
    SET_LO8(eax, MEM8(esi + 0x1AC));
    if (CMP_AE(LO8(eax), 8)) goto loc_001D4C87; /* jae: above or equal (unsigned >=) */

loc_001D4C71: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x59AEE4);
    if (TEST_Z(eax, eax)) goto loc_001D4C87; /* je: equal / zero */

loc_001D4C7F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D4C84: ;
    esp = esp + 0xC;

loc_001D4C87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4E20
 * Original: 0x001D4E20 - 0x001D54AD (1677 bytes, 343 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4E20: ;
    esp = esp - 0x1F0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1FC);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001D54A4; /* je: equal / zero */

loc_001D4E39: ;
    eax = esp + 0xA8;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D4E45: ;
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    xmm0 = MEMF(0x648F00); /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    if (CMP_EQ(MEM32(0x84A144), ebx)) goto loc_001D4E81; /* je: equal / zero */

loc_001D4E67: ;
    xmm0 = MEMF(0x64995C); /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */

loc_001D4E81: ;
    SET_LO8(ecx, MEM8(esp + 0x204));
    xmm1 = MEMF(0x64925C); /* movss */
    SET_LO8(eax, MEM8(esp + 0x200));
    xmm2 = MEMF(0x648EEC); /* movss */
    SET_LO8(edx, MEM8(esp + 0x208));
    MEM8(esp + 0xCA) = LO8(ecx);
    ecx = 4;
    MEM32(esp + 0xF8) = ecx;
    MEM32(esp + 0x108) = ecx;
    MEM32(esp + 0x128) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2A8));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 1;
    MEM8(esp + 0xDA) = LO8(ecx);
    ebp = edi;
    MEMF(esp + 0xC0) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM8(esp + 0xD3) = LO8(eax);
    eax = 2;
    MEMF(esp + 0x1B4) = xmm0; /* movss */
    MEMF(esp + 0x1BC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = ebp | 0x50050;
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0xC8) = LO16(edi);
    MEM16(esp + 0xCA) = 0xFF;
    MEM8(esp + 0xD0) = 0x12;
    MEM8(esp + 0xD1) = LO8(edx);
    MEM8(esp + 0xD4) = LO8(ebx);
    MEM32(esp + 0xEC) = 3;
    MEM32(esp + 0xF0) = 0x2B8;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x10C) = ebx;
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0x11C) = ebx;
    MEM32(esp + 0xF4) = 0x11B;
    MEM32(esp + 0x120) = eax;
    MEM32(esp + 0x128) = edi;
    MEM32(esp + 0x12C) = eax;
    MEM32(esp + 0x138) = edi;
    MEM32(esp + 0x13C) = eax;
    MEM32(esp + 0xF8) = 0x11A;
    MEM32(esp + 0x140) = eax;
    MEM32(esp + 0x148) = edi;
    MEM32(esp + 0x14C) = eax;
    MEM32(esp + 0x150) = 5;
    MEM32(esp + 0x158) = edi;
    MEM32(esp + 0x15C) = eax;
    MEMF(esp + 0xCC) = xmm0; /* movss */
    MEM8(esp + 0xD9) = 0xFF;
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEM32(esp + 0xC4) = ebp;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM32(esp + 0x1C) = esi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x38) = 8;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x6C) = ebx;
    eax = ZX8(MEM8(esi + 0x2A8));
    edx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm1 = MEMF(eax + edx + 0x224); /* movss */
    eax = eax + edx;
    MEMF(esp + 0x98) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x228); /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x224); /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x228); /* movss */
    eax = ebp;
    eax = eax & 0x20;
    MEM32(esp + 0x84) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x88) = ebx;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEMF(esp + 0xA4) = xmm1; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    if ((eax == 0)) goto loc_001D5146; /* je: equal / zero */

loc_001D513F: ;
    eax = 0x72;
    goto loc_001D5188;

loc_001D5146: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D5155; /* je: equal / zero */

loc_001D514E: ;
    eax = 0x86;
    goto loc_001D5188;

loc_001D5155: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D5164; /* je: equal / zero */

loc_001D515D: ;
    eax = 0x80;
    goto loc_001D5188;

loc_001D5164: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D5173; /* je: equal / zero */

loc_001D516C: ;
    eax = 0x7A;
    goto loc_001D5188;

loc_001D5173: ;
    SET_LO8(eax, MEM8(esp + 0xC4));
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D5188: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x214;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D5198: ;
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = 0x19;
    if (CMP_NE(eax, ebx)) goto loc_001D51A8; /* jne: not equal / not zero */

loc_001D51A4: ;
    eax = 0; /* xor self */
    goto loc_001D51F7;

loc_001D51A8: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = LO8(edx);
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D51DA; /* jne: not equal / not zero */

loc_001D51C7: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D51D4; /* je: equal / zero */

loc_001D51CF: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D51D7;

loc_001D51D4: ;
    ecx = ecx | 4;

loc_001D51D7: ;
    MEM32(eax + 0x40) = ecx;

loc_001D51DA: ;
    edi = eax + 0x180;
    ecx = 0x25;
    esi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x204);
    edi = 1;

loc_001D51F7: ;
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEM32(esp + 0x1C) = esi;
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    esi = eax + 0x1E4;
    MEM8(esp + 0xD0) = 0xE;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x9C) = LO8(ebx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM8(esp + 0x3D) = LO8(ebx);
    MEM32(esp + 0x98) = edx;
    MEM8(esp + 0x3C) = 8;
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0x90) = xmm2; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 6;
    edi = edi;

loc_001D52A0: ;
    eax = MEM32(esp + 0xEC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm0 = MEMF(0x648F00); /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEM32(esp + 0xF0) = 0x2B9;
    if (CMP_LE(eax, ebx)) goto loc_001D52CC; /* jle: less or equal (signed <=) */

loc_001D52C7: ;
    if (CMP_LE(eax, 4)) goto loc_001D52D3; /* jle: less or equal (signed <=) */

loc_001D52CC: ;
    MEM32(esp + 0xEC) = edi;

loc_001D52D3: ;
    if (CMP_EQ(MEM32(esp + 0x18), ebx)) goto loc_001D52E0; /* je: equal / zero */

loc_001D52D9: ;
    eax = 0x72;
    goto loc_001D5322;

loc_001D52E0: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D52EF; /* je: equal / zero */

loc_001D52E8: ;
    eax = 0x86;
    goto loc_001D5322;

loc_001D52EF: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D52FE; /* je: equal / zero */

loc_001D52F7: ;
    eax = 0x80;
    goto loc_001D5322;

loc_001D52FE: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D530D; /* je: equal / zero */

loc_001D5306: ;
    eax = 0x7A;
    goto loc_001D5322;

loc_001D530D: ;
    SET_LO8(eax, MEM8(esp + 0xC4));
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D5322: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D5332: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001D533D; /* jne: not equal / not zero */

loc_001D5339: ;
    eax = 0; /* xor self */
    goto loc_001D538A;

loc_001D533D: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x12;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D5370; /* jne: not equal / not zero */

loc_001D535D: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D536A; /* je: equal / zero */

loc_001D5365: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D536D;

loc_001D536A: ;
    ecx = ecx | 4;

loc_001D536D: ;
    MEM32(eax + 0x40) = ecx;

loc_001D5370: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    edi = 1;

loc_001D538A: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEM32(esi + -24) = eax;
    eax = MEM32(esp + 0xEC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEM32(esp + 0xF0) = 0xFF;
    if (CMP_LE(eax, ebx)) goto loc_001D53B9; /* jle: less or equal (signed <=) */

loc_001D53B4: ;
    if (CMP_LE(eax, 4)) goto loc_001D53C0; /* jle: less or equal (signed <=) */

loc_001D53B9: ;
    MEM32(esp + 0xEC) = edi;

loc_001D53C0: ;
    if (CMP_EQ(MEM32(esp + 0x18), ebx)) goto loc_001D53CD; /* je: equal / zero */

loc_001D53C6: ;
    eax = 0x72;
    goto loc_001D540F;

loc_001D53CD: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D53DC; /* je: equal / zero */

loc_001D53D5: ;
    eax = 0x86;
    goto loc_001D540F;

loc_001D53DC: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D53EB; /* je: equal / zero */

loc_001D53E4: ;
    eax = 0x80;
    goto loc_001D540F;

loc_001D53EB: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D53FA; /* je: equal / zero */

loc_001D53F3: ;
    eax = 0x7A;
    goto loc_001D540F;

loc_001D53FA: ;
    SET_LO8(eax, MEM8(esp + 0xC4));
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D540F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D541F: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001D542A; /* jne: not equal / not zero */

loc_001D5426: ;
    eax = 0; /* xor self */
    goto loc_001D5477;

loc_001D542A: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x12;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D545D; /* jne: not equal / not zero */

loc_001D544A: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D5457; /* je: equal / zero */

loc_001D5452: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D545A;

loc_001D5457: ;
    ecx = ecx | 4;

loc_001D545A: ;
    MEM32(eax + 0x40) = ecx;

loc_001D545D: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    edi = 1;

loc_001D5477: ;
    MEM32(esi) = eax;
    eax = MEM32(esi + -24);
    if (CMP_EQ(eax, ebx)) goto loc_001D5483; /* je: equal / zero */

loc_001D5480: ;
    MEM8(eax + 5) = LO8(ebx);

loc_001D5483: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_001D548C; /* je: equal / zero */

loc_001D5489: ;
    MEM8(eax + 5) = LO8(ebx);

loc_001D548C: ;
    eax = MEM32(esp + 0x14);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001D52A0; /* jne: not equal / not zero */

loc_001D54A2: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001D54A4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1F0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D54B0
 * Original: 0x001D54B0 - 0x001D56C6 (534 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D54B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D54B0: ;
    esp = esp - 0x94;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    SET_LO8(eax, MEM8(edi + 0x190));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D556F; /* jne: not equal / not zero */

loc_001D54CC: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x198); /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(edi + 0x188); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x184); /* subss */
    MEMF(edi + 0x198) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001D5501; /* jbe: below or equal (unsigned <=) */

loc_001D54FC: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001D5512;

loc_001D5501: ;
    /* comiss xmm0, MEMF(edi + 0x194) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x194))) goto loc_001D5512; /* jbe: below or equal (unsigned <=) */

loc_001D550A: ;
    xmm0 = MEMF(edi + 0x194); /* movss */

loc_001D5512: ;
    MEMF(edi + 0x198) = xmm0; /* movss */
    xmm0 = xmm0 / MEMF(edi + 0x194); /* divss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001D5549; /* jp: parity */

loc_001D552F: ;
    (void)0; /* test MEM8(edi + 0x19C), 0x10 - flags set for next jcc */
    MEM8(edi + 0x190) = 1;
    if (TEST_Z(MEM8(edi + 0x19C), 0x10)) goto loc_001D5549; /* je: equal / zero */

loc_001D553F: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

loc_001D5549: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x184); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(edi + 0x18C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D556C: ;
    MEM8(edi + 0x50) = LO8(eax);

loc_001D556F: ;
    xmm0 = MEMF(edi + 0x1A0); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(edi + 0x1A0) = xmm0; /* movss */
    if ((xmm7 <= xmm0)) goto loc_001D55EA; /* jbe: below or equal (unsigned <=) */

loc_001D5595: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = MEMF(0x648D14); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0x1A4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001D55CD; /* jbe: below or equal (unsigned <=) */

loc_001D55C3: ;
    MEMF(edi + 0x1A0) = xmm7; /* movss */
    goto loc_001D55E2;

loc_001D55CD: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / MEMF(edi + 0x1A4); /* divss */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */

loc_001D55E2: ;
    MEMF(edi + 0x1AC) = xmm0; /* movss */

loc_001D55EA: ;
    PUSH32(esp, ebx);
    ebx = (int32_t)MEMF(edi + 0x18C); /* cvttss2si */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001D55FA: ;
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001D5633; /* jbe: below or equal (unsigned <=) */

loc_001D5607: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001D560C: ;
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x33);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_001D5618: ;
    eax = eax - 0x19;
    ebx = ebx + eax;
    if (((int32_t)ebx >= 0)) goto loc_001D5623; /* jns: not sign (positive) */

loc_001D561F: ;
    ebx = 0; /* xor self */
    goto loc_001D5630;

loc_001D5623: ;
    if (CMP_LE(ebx, 0xFF)) goto loc_001D5630; /* jle: less or equal (signed <=) */

loc_001D562B: ;
    ebx = 0xFF;

loc_001D5630: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_001D5633: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, 0x40C00000);
    MEM8(edi + 0x50) = LO8(ebx);
    eax = MEM32(edi + 0x1B0);
    PUSH32(esp, 0x40400000);
    edx = edi + 0x1B4;
    ecx = edi + 0x1B8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001D5660: ;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x48); /* addss */
    MEMF(edi + 0x48) = xmm0; /* movss */
    ecx = MEM32(edi + 0x180);
    xmm0 = MEMF(0x59D948); /* movss */
    MEMF(edi + 0x1B0) = xmm7; /* movss */
    eax = MEM32(ecx + 0x3E0);
    MEM32(esp + 0x34) = eax;
    eax = eax + 0x78;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(0x870ED4);
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_001D56C6(); return; } /* jne: not equal / not zero */

loc_001D56BF: ;
    ecx = 0x870ED8;
    g_seh_ebp = ebp; sub_001D56FA(); return; /* tail jmp 0x001D56FA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D5EB0
 * Original: 0x001D5EB0 - 0x001D5F9F (239 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5EB0: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x71 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x180);
    ecx = MEM32(eax + 0x3E0);
    if (CMP_A(edx, 0x71)) goto loc_001D5F9D; /* ja: above (unsigned >) */

loc_001D5ECE: ;
    edx = ZX8(MEM8(edx + 0x1D5FBC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x1D5FA0)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001D5F9D; /* jne: not equal / not zero */

loc_001D5EE8: ;
    SET_LO8(eax, MEM8(esi + 0x19C));
    if (TEST_Z(LO8(eax), 8)) goto loc_001D5F57; /* je: equal / zero */

loc_001D5EF2: ;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_001D5F9D; /* jne: not equal / not zero */

loc_001D5EFA: ;
    edx = MEM32(esi + 0x18C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648E14); /* movss */
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esi + 0x190) = 0;
    MEM32(esi + 0x184) = edx;
    MEMF(esi + 0x188) = xmm0; /* movss */
    MEMF(esi + 0x194) = xmm1; /* movss */
    MEMF(esi + 0x198) = xmm0; /* movss */
    MEM8(esi + 0x19C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D5F4D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D5F57: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D5F5C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    xmm0 = MEMF(0x648D88); /* movss */
    MEMF(esi + 0x1B0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    eax = MEM32(eax + 8);
    MEM32(esi + 0x1BC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    MEM32(esi + 0x1BC) = 0;

loc_001D5F9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D60A0
 * Original: 0x001D60A0 - 0x001D63BC (796 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D60A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D60A0: ;
    esp = esp - 0x1E0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x564);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001D63B3; /* je: equal / zero */

loc_001D60BA: ;
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D60C4: ;
    xmm0 = MEMF(0x649108); /* movss */
    SET_LO8(eax, 0x64);
    MEM8(esp + 0x3A) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    eax = 2;
    ecx = 4;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xC4) = eax;
    eax = MEM32(ebx + 0x564);
    SET_LO8(eax, MEM8(eax + 0x2A8));
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    ebp = 1;
    MEM16(esp + 0x30) = LO16(ebp);
    MEM32(esp + 0x90) = ebp;
    MEM32(esp + 0xA0) = ebp;
    MEM32(esp + 0xB0) = ebp;
    MEM32(esp + 0xC0) = ebp;
    ecx = ecx + 0xB;
    ebp = ebp << LO8(ecx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(edi + 4);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    PUSH32(esp, edx);
    SET_LO16(ecx, ZX8(LO8(eax)));
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x94) = esi;
    MEMF(esp + 0x12C) = xmm0; /* movss */
    MEMF(esp + 0x134) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    ebp = ebp | 0x50050;
    edx = 0; /* xor self */
    esi = esp + 0x24;
    MEM16(esp + 0x42) = 0xFF;
    MEM8(esp + 0x48) = 0xE;
    MEM8(esp + 0x4B) = 0xFF;
    MEM8(esp + 0x4C) = 0;
    MEM32(esp + 0x64) = 3;
    MEM32(esp + 0x68) = 0x10F;
    MEM32(esp + 0x6C) = 0x11B;
    MEM32(esp + 0x70) = 0x11A;
    MEM32(esp + 0xC8) = 5;
    MEM8(esp + 0x51) = 0xFF;
    MEM8(esp + 0x52) = LO8(eax);
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_001D621A: ;
    ecx = MEM32(ebx + 0x564);
    eax = ZX8(MEM8(ecx + 0x2A8));
    edx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(eax + edx + 0x224); /* subss */
    esp = esp + 0x10;
    eax = eax + edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x228); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x178) = 0;
    MEM8(esp + 0x1E8) = 0;
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x170) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x180) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x168) = ecx;
    MEMF(esp + 0x16C) = xmm0; /* movss */
    MEMF(esp + 0x174) = xmm0; /* movss */
    MEMF(esp + 0x184) = xmm0; /* movss */
    MEM8(esp + 0x189) = 6;
    MEM32(esp + 0x1E4) = 0x19;
    MEM8(esp + 0x188) = 8;
    MEMF(esp + 0x1D4) = xmm1; /* movss */
    MEMF(esp + 0x1D8) = xmm2; /* movss */
    MEMF(esp + 0x1DC) = xmm2; /* movss */
    MEMF(esp + 0x1E0) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D631C; /* je: equal / zero */

loc_001D6315: ;
    eax = 0x72;
    goto loc_001D6357;

loc_001D631C: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D632B; /* je: equal / zero */

loc_001D6324: ;
    eax = 0x86;
    goto loc_001D6357;

loc_001D632B: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D633A; /* je: equal / zero */

loc_001D6333: ;
    eax = 0x80;
    goto loc_001D6357;

loc_001D633A: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D6349; /* je: equal / zero */

loc_001D6342: ;
    eax = 0x7A;
    goto loc_001D6357;

loc_001D6349: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D6357: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D6367: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001D63B2; /* je: equal / zero */

loc_001D636E: ;
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x17C) = 0x12;
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D639E; /* jne: not equal / not zero */

loc_001D638B: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D6398; /* je: equal / zero */

loc_001D6393: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D639B;

loc_001D6398: ;
    ecx = ecx | 4;

loc_001D639B: ;
    MEM32(eax + 0x40) = ecx;

loc_001D639E: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x168;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001D63B2: ;
    POP32(esp, ebp);

loc_001D63B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1E0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D63C0
 * Original: 0x001D63C0 - 0x001D6402 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D63C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x180);
    ecx = MEM32(eax + 0x3E0);
    eax = MEM32(esp + 0x10);
    eax = eax - 0x72;
    if ((eax == 0)) goto loc_001D63EE; /* je: equal / zero */

loc_001D63DA: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_001D6400; /* jne: not equal / not zero */

loc_001D63DF: ;
    edx = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(edx), ecx)) goto loc_001D6400; /* jne: not equal / not zero */

loc_001D63E7: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D63EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D63EE: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(eax), ecx)) goto loc_001D6400; /* jne: not equal / not zero */

loc_001D63F6: ;
    MEM32(eax + 4) = esi;
    MEM8(0x8472BC) = 0;

loc_001D6400: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6410
 * Original: 0x001D6410 - 0x001D643C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6410(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D6410: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x73)) goto loc_001D643B; /* jne: not equal / not zero */

loc_001D6417: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x180);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    (void)0; /* cmp esi, MEM32(edx + 0x3E0) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(esi, MEM32(edx + 0x3E0))) goto loc_001D643B; /* jne: not equal / not zero */

loc_001D6431: ;
    MEM32(ecx + 4) = eax;
    MEM8(0x8472BC) = 0;

loc_001D643B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6440
 * Original: 0x001D6440 - 0x001D64BD (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6440(void)
{
    float xmm0;

loc_001D6440: ;
    xmm0 = MEMF(eax); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x564);
    SET_LO16(ecx, ZX8(MEM8(ecx + 0x2A8)));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = esp + 0x1C;
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_001D6473: ;
    edx = MEM32(ebx + 0x564);
    eax = ZX8(MEM8(edx + 0x2A8));
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(eax + ecx + 0x224); /* subss */
    esp = esp + 0x10;
    eax = eax + ecx;
    MEMF(edi + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x228); /* subss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001D64C0
 * Original: 0x001D64C0 - 0x001D67B1 (753 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D64C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D64C0: ;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001D67A8; /* je: equal / zero */

loc_001D64D4: ;
    eax = esp + 8;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001D64DD: ;
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    xmm1 = MEMF(esp + 0x1F4); /* movss */
    xmm0 = MEMF(esp + 0x1F8); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_EQ(MEM32(0x84A144), ebx)) goto loc_001D6522; /* je: equal / zero */

loc_001D6503: ;
    xmm2 = MEMF(0x649AC4); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_001D6522: ;
    SET_LO8(ecx, MEM8(esp + 0x1EC));
    SET_LO8(eax, MEM8(esp + 0x1E8));
    xmm1 = MEMF(0x64925C); /* movss */
    xmm2 = MEMF(0x648EEC); /* movss */
    MEM8(esp + 0x2A) = LO8(ecx);
    ecx = MEM32(esp + 0x1E4);
    MEM32(esp + 0x48) = ecx;
    ecx = 4;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x88) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2A8));
    PUSH32(esp, ebp);
    ebp = 1;
    MEM8(esp + 0x36) = LO8(ecx);
    MEM16(esp + 0x24) = LO16(ebp);
    MEM32(esp + 0x84) = ebp;
    MEM32(esp + 0x94) = ebp;
    ecx = ecx + 0xB;
    MEM32(esp + 0xA4) = ebp;
    MEM32(esp + 0xB4) = ebp;
    MEM8(esp + 0x2F) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1F4));
    ebp = ebp << LO8(ecx);
    MEM8(esp + 0x2D) = LO8(eax);
    eax = 2;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    ebp = ebp | 0x50050;
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0x20) = ebp;
    SET_LO8(eax, MEM8(esp + 0x20));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    edx = 0xFF;
    MEMF(esp + 0x110) = xmm0; /* movss */
    MEMF(esp + 0x118) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x164) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x174) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(esp + 0x26) = LO16(edx);
    MEM8(esp + 0x2C) = 0xE;
    MEM8(esp + 0x30) = LO8(ebx);
    MEM32(esp + 0x48) = 3;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x50) = 0x11B;
    MEM32(esp + 0x54) = 0x11A;
    MEM32(esp + 0xAC) = 5;
    MEM8(esp + 0x35) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0x16C) = LO8(ebx);
    MEM8(esp + 0x1DC) = LO8(ebx);
    MEM32(esp + 0x15C) = esi;
    MEMF(esp + 0x160) = xmm0; /* movss */
    MEMF(esp + 0x168) = xmm0; /* movss */
    MEMF(esp + 0x178) = xmm0; /* movss */
    MEM8(esp + 0x17D) = LO8(ebx);
    MEM32(esp + 0x1D8) = 0x19;
    MEM8(esp + 0x17C) = 8;
    MEMF(esp + 0x1C8) = xmm1; /* movss */
    MEMF(esp + 0x1CC) = xmm2; /* movss */
    MEMF(esp + 0x1D0) = xmm2; /* movss */
    MEMF(esp + 0x1D4) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x20)) goto loc_001D6702; /* je: equal / zero */

loc_001D66FB: ;
    eax = 0x72;
    goto loc_001D673D;

loc_001D6702: ;
    if (TEST_Z(ebp, 0x8000)) goto loc_001D6711; /* je: equal / zero */

loc_001D670A: ;
    eax = 0x86;
    goto loc_001D673D;

loc_001D6711: ;
    if (TEST_Z(ebp, 0x20000)) goto loc_001D6720; /* je: equal / zero */

loc_001D6719: ;
    eax = 0x80;
    goto loc_001D673D;

loc_001D6720: ;
    if (TEST_Z(ebp, 0x40000)) goto loc_001D672F; /* je: equal / zero */

loc_001D6728: ;
    eax = 0x7A;
    goto loc_001D673D;

loc_001D672F: ;
    SET_LO8(eax, LO8(eax) & 0x81);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 0x89;

loc_001D673D: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x204;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001D6749: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001D67A7; /* je: equal / zero */

loc_001D6750: ;
    PUSH32(esp, edi);
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    (void)0; /* cmp MEM8(esp + 0x1E8), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM8(esp + 0x1E8), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    SET_LO8(edx, LO8(edx) & 0xF2);
    SET_LO8(edx, LO8(edx) + 0x12);
    (void)0; /* test ebp, 0x10000 - flags set for next jcc */
    MEM8(eax + 0x17C) = LO8(edx);
    if (TEST_NZ(ebp, 0x10000)) goto loc_001D6792; /* jne: not equal / not zero */

loc_001D677F: ;
    ecx = MEM32(eax + 0x40);
    if (TEST_Z(LO8(ecx), 4)) goto loc_001D678C; /* je: equal / zero */

loc_001D6787: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_001D678F;

loc_001D678C: ;
    ecx = ecx | 4;

loc_001D678F: ;
    MEM32(eax + 0x40) = ecx;

loc_001D6792: ;
    edi = eax + 0x180;
    ecx = 0x21;
    esi = esp + 0x160;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_001D67A7: ;
    POP32(esp, ebp);

loc_001D67A8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D67C0
 * Original: 0x001D67C0 - 0x001D67EA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D67C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D67C0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_001D67EA(); return; } /* je: equal / zero */

loc_001D67CD: ;
    if (CMP_EQ(eax, 3)) { sub_001D67EA(); return; } /* je: equal / zero */

loc_001D67D2: ;
    if (CMP_NE(eax, 0x5F)) goto loc_001D67E8; /* jne: not equal / not zero */

loc_001D67D7: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(esi + 0x180))) goto loc_001D67E8; /* jne: not equal / not zero */

loc_001D67E3: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001D67E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6930
 * Original: 0x001D6930 - 0x001D6A49 (281 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6930(void)
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

loc_001D6930: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D697A; /* jne: not equal / not zero */

loc_001D693C: ;
    fp_push(MEMF(0x7FA21C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D694D: ;
    edx = MEM32(0x8496AC);
    edx = edx + eax;
    eax = MEM32(0x6B99E4);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(0x8496AC) = edx;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001D697F; /* je: equal / zero */

loc_001D6965: ;
    eax++;
    (void)0; /* cmp eax, 0x14 - flags set for next jcc */
    MEM32(0x6B99E4) = eax;
    if (CMP_BE(eax, 0x14)) goto loc_001D697F; /* jbe: below or equal (unsigned <=) */

loc_001D6970: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x6B99E4) = eax;
    goto loc_001D697F;

loc_001D697A: ;
    eax = MEM32(0x6B99E4);

loc_001D697F: ;
    MEM8(0x8496AF) = 0;
    fp_push((double)SMEM32(0x8496AC)); /* fild */
    ecx = MEM32(0x8496AC);
    if (CMP_GE(ecx & ecx, 0)) goto loc_001D699C; /* jge: greater or equal (signed >=) */

loc_001D6996: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001D699C: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001D69F4; /* je: equal / zero */

loc_001D69AC: ;
    if (CMP_AE(eax, 0xA)) goto loc_001D69C7; /* jae: above or equal (unsigned >=) */

loc_001D69B1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001D69C3; /* jge: greater or equal (signed >=) */

loc_001D69BD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001D69C3: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    goto loc_001D69EE;

loc_001D69C7: ;
    eax = eax + 0xFFFFFFF6u;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001D69DC; /* jge: greater or equal (signed >=) */

loc_001D69D6: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001D69DC: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_001D69EE: ;
    /* FPU: fsubr dword ptr [esp] */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */

loc_001D69F4: ;
    xmm1 = MEMF(0x64938C); /* movss */
    xmm0 = MEMF(esp); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001D6A09; /* jbe: below or equal (unsigned <=) */

loc_001D6A06: ;
    xmm0 = xmm1; /* movaps */

loc_001D6A09: ;
    eax = MEM32(esp + 0xC);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 * MEMF(0x649504); /* mulss */
    xmm1 = xmm1 + MEMF(0x649500); /* addss */
    xmm0 = xmm0 + MEMF(0x6494FC); /* addss */
    PUSH32(esp, eax);
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001D4690(); /* call 0x001D4690 */

loc_001D6A40: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D6A50
 * Original: 0x001D6A50 - 0x001D6A5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D6A50: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_001D6A5E(); return; } /* jne: not equal / not zero */

loc_001D6A57: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D6AA0
 * Original: 0x001D6AA0 - 0x001D6CD7 (567 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6AA0: ;
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
    if (TEST_Z(eax, eax)) goto loc_001D6AC9; /* je: equal / zero */

loc_001D6AC3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001D6AC9: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_001D6AD6: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_001D6BE5; /* jne: not equal / not zero */

loc_001D6AE9: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001D6CAB; /* jbe: below or equal (unsigned <=) */

loc_001D6AF1: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;
    /* nop */

loc_001D6B10: ;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_001D6BD0; /* jbe: below or equal (unsigned <=) */

loc_001D6BAF: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x64);
    if (CMP_EQ(eax, 0x3B)) goto loc_001D6BC8; /* je: equal / zero */

loc_001D6BB9: ;
    if (CMP_EQ(eax, 0x36)) goto loc_001D6BC8; /* je: equal / zero */

loc_001D6BBE: ;
    if (CMP_EQ(eax, 0x37)) goto loc_001D6BC8; /* je: equal / zero */

loc_001D6BC3: ;
    if (CMP_NE(eax, 0x44)) goto loc_001D6BD0; /* jne: not equal / not zero */

loc_001D6BC8: ;
    MEM32(esp + 0x470) = MEM32(esp + 0x470) + 4;

loc_001D6BD0: ;
    ecx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, ecx)) goto loc_001D6B10; /* jl: less (signed <) */

loc_001D6BE0: ;
    goto loc_001D6CAB;

loc_001D6BE5: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001D6CAB; /* jbe: below or equal (unsigned <=) */

loc_001D6BED: ;
    eax = esp + 0x58;
    edx = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_001D6C03: ;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_001D6C9B; /* jbe: below or equal (unsigned <=) */

loc_001D6C9A: ;
    ebx++;

loc_001D6C9B: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_001D6C03; /* jl: less (signed <) */

loc_001D6CAB: ;
    ebp = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_001D6AD6; /* jne: not equal / not zero */

loc_001D6CB8: ;
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
 * sub_001D6CE0
 * Original: 0x001D6CE0 - 0x001D6D23 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D6CE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B99F0), _icall_esp); /* indirect call */
    }

loc_001D6CF0: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D6D21; /* jne: not equal / not zero */

loc_001D6CF7: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D6D21; /* jne: not equal / not zero */

loc_001D6D00: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001D6D07: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001D6D21; /* jl: less (signed <) */

loc_001D6D0E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001D6D23(); return; } /* je: equal / zero */

loc_001D6D1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001D6D1E: ;
    esp = esp + 4;

loc_001D6D21: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6DD0
 * Original: 0x001D6DD0 - 0x001D6F43 (371 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D6DD0: ;
    eax = MEM32(0x77182C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x1B02;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_001D6DED; /* je: equal / zero */

loc_001D6DE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001D6DE7: ;
    MEM32(0x77182C) = esi;

loc_001D6DED: ;
    eax = MEM32(0x771828);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001D6E04; /* je: equal / zero */

loc_001D6DF8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001D6DFE: ;
    MEM32(0x771828) = edi;

loc_001D6E04: ;
    if (CMP_EQ(MEM32(0x771824), edi)) goto loc_001D6E24; /* je: equal / zero */

loc_001D6E0C: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D6E18: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001D6E24: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_001D6E44; /* je: equal / zero */

loc_001D6E2C: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D6E38: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_001D6E44: ;
    eax = MEM32(0x77181C);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_001D6E5E; /* je: equal / zero */

loc_001D6E52: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001D6E58: ;
    MEM32(0x77181C) = ebx;

loc_001D6E5E: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001D6E84; /* je: equal / zero */

loc_001D6E6C: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D6E78: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001D6E84: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001D6EA4; /* je: equal / zero */

loc_001D6E8C: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D6E98: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001D6EA4: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_001D6EC2; /* je: equal / zero */

loc_001D6EAC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_001D6EC2: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_001D6EE8; /* je: equal / zero */

loc_001D6ED0: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D6EDC: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001D6EE8: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001D6F0E; /* je: equal / zero */

loc_001D6EF6: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D6F02: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001D6F0E: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001D6F16: ;
    ecx = MEM32(0x5499F0);
    eax = 3;
    POP32(esp, edi);
    ecx = ecx | eax;
    POP32(esp, esi);
    MEM32(0x5473B0) = ebx;
    MEM32(0x5473B4) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5499F0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6F50
 * Original: 0x001D6F50 - 0x001D6F74 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D6F50: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x30);
    edx = SX16(LO16(ecx));
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(edx, esi)) goto loc_001D6F73; /* jne: not equal / not zero */

loc_001D6F64: ;
    edx = MEM32(eax + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B99E8), _icall_esp); /* indirect call */
    }

loc_001D6F70: ;
    esp = esp + 8;

loc_001D6F73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6F80
 * Original: 0x001D6F80 - 0x001D7045 (197 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6F80: ;
    edx = MEM32(0x84A13C);
    eax = MEM32(0x6B8544);
    ecx = MEM32(0x771760);
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2B0);
    edi = edi + edx;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001D6FB6; /* je: equal / zero */

loc_001D6FAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001D6FB0: ;
    MEM32(0x771760) = esi;

loc_001D6FB6: ;
    eax = MEM32(0x6B8CBC);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001D6FD0; /* je: equal / zero */

loc_001D6FC5: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001D6FCA: ;
    MEM32(0x77175C) = esi;

loc_001D6FD0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = eax;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001D7004: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = 2;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001D7033: ;
    SET_LO8(eax, MEM8(0x75CBBC));
    ebx = 0; /* xor self */
    if (CMP_A(LO8(eax), LO8(ebx))) { sub_001D7045(); return; } /* ja: above (unsigned >) */

loc_001D703E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001D70D5(); return; /* tail jmp 0x001D70D5 */

}

/**
 * sub_001D76B0
 * Original: 0x001D76B0 - 0x001D7D91 (1761 bytes, 455 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D76B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D76B0: ;
    esp = esp - 0x120;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x128);
    ecx = MEM32(0x84A13C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x2B0);
    PUSH32(esp, esi);
    ebp = ebp + ecx;
    PUSH32(esp, edi);
    esi = ebp + 0x148;
    ecx = 0x2A;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x134);
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    eax = MEM32(0x870ED4);
    ecx = esp + 0x24;
    edx = esp + 0x8C;
    PUSH32(esp, ecx);
    ecx = 4;
    MEM8(esp + 0x138) = 0;
    MEMF(esp + 0x13C) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_001D90C0(); /* call 0x001D90C0 */

loc_001D772A: ;
    ebx = eax;
    eax = MEM32(0x84A144);
    if (TEST_Z(eax, eax)) goto loc_001D7773; /* je: equal / zero */

loc_001D7735: ;
    eax = (int32_t)MEMF(ebp + 0x214); /* cvttss2si */
    edx = (int32_t)MEMF(ebp + 0x21C); /* cvttss2si */
    ecx = (int32_t)MEMF(ebp + 0x220); /* cvttss2si */
    MEM32(esp + 0x48) = eax;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x4C) = edx;
    edx = (int32_t)MEMF(ebp + 0x218); /* cvttss2si */
    PUSH32(esp, 1);
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_001D7773: ;
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_001D7B8B; /* jle: less or equal (signed <=) */

loc_001D777D: ;
    /* nop */

loc_001D7780: ;
    eax = MEM32(esp + edi * 4 + 0x64);
    xmm0 = MEMF(eax + 0x78); /* movss */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x80);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x7C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x144);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = esp + 0x5C;
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_001D77B0: ;
    eax = MEM32(0x6B842C);
    ecx = MEM32(0x771760);
    esp = esp + 0x10;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001D77D0; /* je: equal / zero */

loc_001D77C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001D77CA: ;
    MEM32(0x771760) = esi;

loc_001D77D0: ;
    eax = MEM32(0x77175C);
    if (TEST_Z(eax, eax)) goto loc_001D77EA; /* je: equal / zero */

loc_001D77D9: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001D77E0: ;
    MEM32(0x77175C) = 0;

loc_001D77EA: ;
    SET_LO8(eax, MEM8(0x75C1EC));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001D788D; /* jbe: below or equal (unsigned <=) */

loc_001D77F7: ;
    esi = MEM32(0x75C1E8);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_001D782C; /* jne: not equal / not zero */

loc_001D7804: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001D7815: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001D781D: ;
    ecx = MEM32(0x75C1E8);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C1E8);

loc_001D782C: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001D7858; /* jne: not equal / not zero */

loc_001D7833: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001D783B: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C1E8);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001D7858; /* jne: not equal / not zero */

loc_001D784B: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C1E8);

loc_001D7858: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001D7881; /* jne: not equal / not zero */

loc_001D7860: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_001D787C; /* jne: not equal / not zero */

loc_001D786A: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001D7873: ;
    esi = MEM32(0x75C1E8);
    esp = esp + 8;

loc_001D787C: ;
    esi = MEM32(esi + 4);
    goto loc_001D7889;

loc_001D7881: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_001D7886: ;
    esi = MEM32(eax + 4);

loc_001D7889: ;
    if (TEST_NZ(esi, esi)) goto loc_001D78A2; /* jne: not equal / not zero */

loc_001D788D: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D7896: ;
    MEM32(0x771764) = 0;
    goto loc_001D78DD;

loc_001D78A2: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001D78DD; /* je: equal / zero */

loc_001D78AA: ;
    eax = MEM32(esi + 4);
    if (CMP_A(eax, 4)) goto loc_001D78D7; /* ja: above (unsigned >) */

loc_001D78B2: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1D8FAC)); return; /* indirect tail jmp */

    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    goto loc_001D78D0;

    ecx = MEM32(esi + 0x1C);
    goto loc_001D78CF;

    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    goto loc_001D78D0;

    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);

loc_001D78CF: ;
    PUSH32(esp, ecx);

loc_001D78D0: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D78D7: ;
    MEM32(0x771764) = esi;

loc_001D78DD: ;
    eax = MEM32(0x771824);
    ecx = 1;
    if (CMP_EQ(eax, ecx)) goto loc_001D7907; /* je: equal / zero */

loc_001D78EB: ;
    esi = ecx;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D78F9: ;
    MEM32(0x549AE4) = esi;
    MEM32(0x771824) = esi;
    ecx = esi;

loc_001D7907: ;
    edx = MEM32(0x7717E4);
    eax = 2;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    esi = 0x800;
    if (CMP_EQ(edx, eax)) goto loc_001D792B; /* je: equal / zero */

loc_001D791B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001D792B: ;
    if (CMP_EQ(MEM32(0x7717C4), eax)) goto loc_001D7943; /* je: equal / zero */

loc_001D7933: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_001D7943: ;
    edx = 4;
    if (CMP_EQ(MEM32(0x7717A4), edx)) goto loc_001D7962; /* je: equal / zero */

loc_001D7950: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_001D7962: ;
    if (CMP_EQ(MEM32(0x771784), eax)) goto loc_001D797A; /* je: equal / zero */

loc_001D796A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_001D797A: ;
    edx = MEM32(0x771774);
    eax = 0; /* xor self */
    if (CMP_EQ(edx, eax)) goto loc_001D7996; /* je: equal / zero */

loc_001D7986: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x54737C) = eax;
    MEM32(0x771774) = eax;

loc_001D7996: ;
    if (CMP_EQ(MEM32(0x7717E8), ecx)) goto loc_001D79B0; /* je: equal / zero */

loc_001D799E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x5473E0) = ecx;
    MEM32(0x7717E8) = ecx;

loc_001D79B0: ;
    if (CMP_EQ(MEM32(0x7717A8), ecx)) goto loc_001D79CA; /* je: equal / zero */

loc_001D79B8: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    MEM32(0x5473F0) = ecx;
    MEM32(0x7717A8) = ecx;

loc_001D79CA: ;
    xmm1 = MEMF(0x59A8D8); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    edx = MEM32(0x5499E8);
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0);
    xmm2 = xmm2 - xmm1; /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_001D7A1A: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    edx = edx + 0x200;
    esi = eax + 0x78;
    if (CMP_B(esi, edx)) goto loc_001D7A61; /* jb: below (unsigned <) */

loc_001D7A32: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x27C)) goto loc_001D7A49; /* jae: above or equal (unsigned >=) */

loc_001D7A44: ;
    ecx = 0x27C;

loc_001D7A49: ;
    if (CMP_AE(eax, 0x27C)) goto loc_001D7A55; /* jae: above or equal (unsigned >=) */

loc_001D7A50: ;
    eax = 0x27C;

loc_001D7A55: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001D7A5B: ;
    ecx = MEM32(0x5499E8);

loc_001D7A61: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    edi++;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(ecx) = eax;
    if (CMP_L(edi, ebx)) goto loc_001D7780; /* jl: less (signed <) */

loc_001D7B8B: ;
    eax = MEM32(0x5499E8);
    edi = MEM32(eax + 0x1A04);
    if (TEST_Z(edi, edi)) goto loc_001D7BBE; /* je: equal / zero */

loc_001D7B9A: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001D7BBC; /* jne: not equal / not zero */

loc_001D7BA3: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001D7BBC; /* jne: not equal / not zero */

loc_001D7BAF: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001D7BBC; /* je: equal / zero */

loc_001D7BB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001D7BBC: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001D7BBE: ;
    esi = esp + 0x64;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001D7BC9: ;
    ebx = MEM32(esp + 0x64);
    ecx = 0; /* xor self */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = ecx;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = ecx;
    eax = esp + 0x40;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ecx;
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_001D7BF8: ;
    ecx = eax;
    eax = MEM32(esp + 0x84);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_001D7C19: ;
    eax = MEM32(0x6B8544);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x30) = 0x40001;
    MEM32(esp + 0x38) = 0;
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001D7C48; /* je: equal / zero */

loc_001D7C3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001D7C42: ;
    MEM32(0x771760) = esi;

loc_001D7C48: ;
    eax = MEM32(0x6B8C1C);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001D7C62; /* je: equal / zero */

loc_001D7C57: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001D7C5C: ;
    MEM32(0x77175C) = esi;

loc_001D7C62: ;
    eax = MEM32(0x771824);
    if (TEST_Z(eax, eax)) goto loc_001D7C83; /* je: equal / zero */

loc_001D7C6B: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D7C77: ;
    eax = 0; /* xor self */
    MEM32(0x549AE4) = eax;
    MEM32(0x771824) = eax;

loc_001D7C83: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x54;
    eax = 1;
    PUSH32(esp, edx);
    ecx = eax;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001D7CB4: ;
    ecx = MEM32(0x771764);
    eax = esp + 0x30;
    if (CMP_EQ(ecx, eax)) goto loc_001D7CD6; /* je: equal / zero */

loc_001D7CC2: ;
    ecx = eax;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D7CCC: ;
    edx = esp + 0x30;
    MEM32(0x771764) = edx;

loc_001D7CD6: ;
    SET_LO8(eax, MEM8(0x75C22C));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001D7D79; /* jbe: below or equal (unsigned <=) */

loc_001D7CE3: ;
    esi = MEM32(0x75C228);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_001D7D18; /* jne: not equal / not zero */

loc_001D7CF0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001D7D01: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001D7D09: ;
    ecx = MEM32(0x75C228);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C228);

loc_001D7D18: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001D7D44; /* jne: not equal / not zero */

loc_001D7D1F: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001D7D27: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C228);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001D7D44; /* jne: not equal / not zero */

loc_001D7D37: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C228);

loc_001D7D44: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001D7D6D; /* jne: not equal / not zero */

loc_001D7D4C: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_001D7D68; /* jne: not equal / not zero */

loc_001D7D56: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001D7D5F: ;
    esi = MEM32(0x75C228);
    esp = esp + 8;

loc_001D7D68: ;
    esi = MEM32(esi + 4);
    goto loc_001D7D75;

loc_001D7D6D: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_001D7D72: ;
    esi = MEM32(eax + 4);

loc_001D7D75: ;
    if (TEST_NZ(esi, esi)) { sub_001D7D91(); return; } /* jne: not equal / not zero */

loc_001D7D79: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D7D85: ;
    MEM32(0x771768) = 0;
    g_seh_ebp = ebp; sub_001D7DCF(); return; /* tail jmp 0x001D7DCF */

}

/**
 * sub_001D90C0
 * Original: 0x001D90C0 - 0x001D90FD (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D90C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x644;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x40;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00129980(); /* call 0x00129980 */

loc_001D90DE: ;
    eax = MEM32(esi + 0x34);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001D90ED; /* je: equal / zero */

loc_001D90E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001D90ED: ;
    if (CMP_NE(MEM32(esi + 0x4C), edi)) { sub_001D90FD(); return; } /* jne: not equal / not zero */

loc_001D90F2: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D9450
 * Original: 0x001D9450 - 0x001D95CA (378 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9463: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AF8) = 1;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001D9489; /* jb: below (unsigned <) */

loc_001D947A: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001D9489: ;
    MEM32(eax) = 0x4030C;
    ebx = 0; /* xor self */
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    edi = 2;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, edi)) goto loc_001D94EC; /* jne: not equal / not zero */

loc_001D94BD: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_001D94C2: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_001D94C7: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001D94DD; /* jb: below (unsigned <) */

loc_001D94CE: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001D94DD: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_001D94E5: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_001D94EA: ;
    MEM32(esi) = eax;

loc_001D94EC: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D94F8: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D950A: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x1A00;
    PUSH32(esp, ebx);
    MEM32(0x549AE4) = ebx;
    MEM32(0x549B90) = ebx;
    MEM32(0x549B9C) = ebx;
    MEM32(0x547360) = edi;
    MEM32(0x547368) = edi;
    MEM32(0x547370) = edi;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547378) = edi;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_001D954C: ;
    ebp = 4;

loc_001D9551: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0xF88);
    if (CMP_EQ(edi, ebx)) goto loc_001D957F; /* je: equal / zero */

loc_001D9561: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    MEM32(edi + 8) = eax;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_001D957F; /* jne: not equal / not zero */

loc_001D957A: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_001D957F: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 0xF88) = ebx;
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001D959B; /* jb: below (unsigned <) */

loc_001D958C: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001D959B: ;
    ecx = MEM32(0x5499F0);
    MEM32(eax) = 0x41B0C;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    ecx = ecx | 0x4800;
    ebp--;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = 0x80000000u;
    MEM32(0x5499F0) = ecx;
    if ((ebp != 0)) goto loc_001D9551; /* jne: not equal / not zero */

loc_001D95C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D95D0
 * Original: 0x001D95D0 - 0x001D96D5 (261 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D95D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D95D0: ;
    SET_LO8(eax, MEM8(0x87A1C0));
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_001D95FC; /* jne: not equal / not zero */

loc_001D95DF: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_001D95FC: ;
    eax = MEM32(0x87A1AC);
    MEM32(0x775D6C) = eax;
    (void)0; /* test MEM8(0x87A1C0), LO8(ebx) - flags set for next jcc */
    MEM8(0x87A1BC) = LO8(ebx);
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_001D9631; /* jne: not equal / not zero */

loc_001D9614: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_001D9631: ;
    (void)0; /* test MEM8(0x87A1C0), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(0x87A1B0);
    MEM8(0x87A1BD) = LO8(ebx);
    MEM32(0x775D68) = ecx;
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_001D9668; /* jne: not equal / not zero */

loc_001D964B: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_001D9668: ;
    edx = MEM32(0x87A1B4);
    MEM8(0x87A1BE) = LO8(ebx);
    MEM32(0x775D64) = edx;
    PUSH32(esp, 0); sub_001D9450(); /* call 0x001D9450 */

loc_001D967F: ;
    PUSH32(esp, 0); sub_001D9790(); /* call 0x001D9790 */

loc_001D9684: ;
    PUSH32(esp, 0); sub_001D9C80(); /* call 0x001D9C80 */

loc_001D9689: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DA7D0(); /* call 0x001DA7D0 */

loc_001D9693: ;
    SET_LO8(eax, MEM8(0x87A1C0));
    esp = esp + 4;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_001D96BC; /* jne: not equal / not zero */

loc_001D969F: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_001D96BC: ;
    ecx = MEM32(0x775D6C);
    eax = 0; /* xor self */

loc_001D96C4: ;
    if (CMP_EQ(ecx, MEM32(eax * 4 + 0x87A1AC))) { sub_001D96D5(); return; } /* je: equal / zero */

loc_001D96CD: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_001D96C4; /* jl: less (signed <) */

loc_001D96D3: ;
    g_seh_ebp = ebp; sub_001D96E6(); return; /* tail jmp 0x001D96E6 */

}

/**
 * sub_001D9790
 * Original: 0x001D9790 - 0x001D9C7E (1262 bytes, 304 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9790(void)
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

loc_001D9790: ;
    esp = esp - 0xA8;
    PUSH32(esp, esi);
    esi = MEM32(0x8493BC);
    if (TEST_Z(esi, esi)) goto loc_001D9C76; /* je: equal / zero */

loc_001D97A5: ;
    PUSH32(esp, 0); sub_0012B280(); /* call 0x0012B280 */

loc_001D97AA: ;
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(eax), 0)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001D9C76; /* je: equal / zero */

loc_001D97B8: ;
    PUSH32(esp, 0); sub_0012B280(); /* call 0x0012B280 */

loc_001D97BD: ;
    SET_LO8(edx, MEM8(eax + 8));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001D9868; /* je: equal / zero */

loc_001D97CD: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012BAE0(); /* call 0x0012BAE0 */

loc_001D97DC: ;
    xmm0 = MEMF(0x648E54); /* movss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 8))) goto loc_001D97F4; /* jbe: below or equal (unsigned <=) */

loc_001D97EE: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_001D97F4: ;
    edx = MEM32(0x8470DC);
    eax = MEM32(edx + 4);
    SET_LO8(ecx, MEM8(eax + 0x8C2));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 0x134;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001D9813; /* jne: not equal / not zero */

loc_001D980D: ;
    eax = esi + 0xB0;

loc_001D9813: ;
    xmm0 = MEMF(eax + 4); /* movss */
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D9832; /* jne: not equal / not zero */

loc_001D982A: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001D9832: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_001D9892;

loc_001D9868: ;
    ecx = MEM32(0x8470DC);
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(edx + 0x8C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = esi + 0x134;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001D9887; /* jne: not equal / not zero */

loc_001D9881: ;
    eax = esi + 0xB0;

loc_001D9887: ;
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_001D9892: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001D9C76; /* jnp: not parity */

loc_001D98A9: ;
    ecx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1A04);
    if (TEST_Z(edi, edi)) goto loc_001D98E0; /* je: equal / zero */

loc_001D98BC: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001D98DE; /* jne: not equal / not zero */

loc_001D98C5: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001D98DE; /* jne: not equal / not zero */

loc_001D98D1: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001D98DE; /* je: equal / zero */

loc_001D98D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001D98DE: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001D98E0: ;
    ebp = MEM32(ecx + 0x1A08);
    if (TEST_Z(ebp, ebp)) goto loc_001D9910; /* je: equal / zero */

loc_001D98EA: ;
    eax = MEM32(ebp);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001D990D; /* jne: not equal / not zero */

loc_001D98F4: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001D990D; /* jne: not equal / not zero */

loc_001D9900: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001D990D; /* je: equal / zero */

loc_001D9907: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001D990D: ;
    MEM32(ebp) = MEM32(ebp) + 1;

loc_001D9910: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    esi = esp + 0x9C;
    ebx = 0; /* xor self */
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001D9934: ;
    esi = MEM32(edi + 4);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_001D9950: ;
    edx = eax;
    eax = MEM32(esp + 0xBC);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_001D9971: ;
    xmm1 = MEMF(0x648CE0); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(0x775D64);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM32(esp + 0x48) = 0x40001;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x4C) = esi;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003EAFB0(); /* call 0x003EAFB0 */

loc_001D99C5: ;
    esp = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001D99CE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001D99D4: ;
    ecx = MEM32(0x6B842C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001D99E0: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001D99E7: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm1 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x64971C); /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(0x649718); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001D9A62: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = MEM32(0x775D64);
    eax = eax << 0x18;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D9ACD: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D9AD8: ;
    edi = 2;
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D9AE5: ;
    esi = 3;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001D9AF2: ;
    edx = MEM32(0x5499F0);
    MEM32(0x54736C) = esi;
    MEM32(0x547330) = esi;
    MEM32(0x547334) = esi;
    esi = MEM32(0x5499E8);
    MEM32(0x547360) = edi;
    MEM32(0x547368) = edi;
    MEM32(0x547370) = edi;
    MEM32(0x547378) = ebx;
    MEM32(0x54737C) = edi;
    MEM32(0x547340) = edi;
    MEM32(0x54733C) = edi;
    MEM32(0x54734C) = ebx;
    MEM32(0x547344) = ebx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = edx | 0x801;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x5499F0) = edx;
    if (CMP_B(eax, ecx)) goto loc_001D9B6A; /* jb: below (unsigned <) */

loc_001D9B5B: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001D9B6A: ;
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
    if (CMP_NE(eax, edi)) goto loc_001D9BC6; /* jne: not equal / not zero */

loc_001D9B97: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_001D9B9C: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_001D9BA1: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001D9BB7; /* jb: below (unsigned <) */

loc_001D9BA8: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001D9BB7: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_001D9BBF: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_001D9BC4: ;
    MEM32(esi) = eax;

loc_001D9BC6: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9BD2: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AF8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9BE4: ;
    edi = MEM32(0x5499F0);
    esi = 1;
    edi = edi | 0x800;
    edx = esi;
    ecx = 0x40304;
    MEM32(0x549AE8) = ebx;
    MEM32(0x5473E0) = esi;
    MEM32(0x5499F0) = edi;
    MEM32(0x5473F0) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9C19: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE4) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9C2E: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9C47: ;
    edx = esi;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001D9C5D: ;
    PUSH32(esp, 0x18);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 9);
    MEM32(0x549AF4) = esi;
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001D9C73: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001D9C76: ;
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001D9C80
 * Original: 0x001D9C80 - 0x001D9D4B (203 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001D9C80: ;
    eax = MEM32(0x5499E8);
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1A08);
    if (TEST_Z(edi, edi)) goto loc_001D9CB9; /* je: equal / zero */

loc_001D9C95: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001D9CB7; /* jne: not equal / not zero */

loc_001D9C9E: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001D9CB7; /* jne: not equal / not zero */

loc_001D9CAA: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001D9CB7; /* je: equal / zero */

loc_001D9CB1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001D9CB7: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001D9CB9: ;
    esi = esp + 0x20;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001D9CC4: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    eax = esp + 0x1C;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x24) = ecx;
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_001D9CF1: ;
    ecx = eax;
    eax = MEM32(esp + 0x40);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x41);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_001D9D0D: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x40001;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001D9D23: ;
    eax = MEM32(0x775D6C);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = eax;
    PUSH32(esp, 0); sub_001D9D50(); /* call 0x001D9D50 */

loc_001D9D35: ;
    eax = MEM32(0x775D64);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DB010(); /* call 0x001DB010 */

loc_001D9D41: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9D50
 * Original: 0x001D9D50 - 0x001D9DA4 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9D50: ;
    esp = esp - 0x11C;
    ecx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1A04);
    ebp = 0; /* xor self */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(esp + 0x24) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_001D9D94; /* je: equal / zero */

loc_001D9D70: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001D9D92; /* jne: not equal / not zero */

loc_001D9D79: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001D9D92; /* jne: not equal / not zero */

loc_001D9D85: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001D9D92; /* je: equal / zero */

loc_001D9D8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001D9D92: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001D9D94: ;
    ecx = MEM32(ecx + 0x1A08);
    if (CMP_NE(ecx, ebp)) { sub_001D9DA4(); return; } /* jne: not equal / not zero */

loc_001D9D9E: ;
    MEM32(esp + 0x28) = ebp;
    g_seh_ebp = ebp; sub_001D9DCC(); return; /* tail jmp 0x001D9DCC */

}

/**
 * sub_001DA3F0
 * Original: 0x001DA3F0 - 0x001DA50C (284 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA3F0: ;
    esp = esp - 0x90;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001DA405: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001DA40C: ;
    edx = MEM32(0x5499E8);
    edi = MEM32(edx + 0x1A04);
    ecx = MEM32(0x775D68);
    ebp = 0; /* xor self */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(edi, ebp)) goto loc_001DA44C; /* je: equal / zero */

loc_001DA428: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001DA44A; /* jne: not equal / not zero */

loc_001DA431: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001DA44A; /* jne: not equal / not zero */

loc_001DA43D: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001DA44A; /* je: equal / zero */

loc_001DA444: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001DA44A: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001DA44C: ;
    esi = esp + 0x84;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001DA45A: ;
    fp_push((double)SMEM32(esp + 0x98)); /* fild */
    eax = MEM32(esp + 0x98);
    if (CMP_GE(eax & eax, 0)) goto loc_001DA472; /* jge: greater or equal (signed >=) */

loc_001DA46C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DA472: ;
    ecx = MEM32(esp + 0x9C);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x9C)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001DA48E; /* jge: greater or equal (signed >=) */

loc_001DA488: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DA48E: ;
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001DA498: ;
    edi = MEM32(esp + 0x18);
    esi = esp + 0x84;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001DA4AA: ;
    fp_push((double)SMEM32(esp + 0x98)); /* fild */
    edx = MEM32(esp + 0x98);
    if (CMP_GE(edx & edx, 0)) goto loc_001DA4C2; /* jge: greater or equal (signed >=) */

loc_001DA4BC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DA4C2: ;
    eax = MEM32(esp + 0x9C);
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x9C)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001DA4DE; /* jge: greater or equal (signed >=) */

loc_001DA4D8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DA4DE: ;
    eax = MEM32(esp + 0x84);
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp eax, 0x3C - flags set for next jcc */
    xmm1 = MEMF(0x648D14); /* movss */
    if (CMP_A(eax, 0x3C)) { sub_001DA50C(); return; } /* ja: above (unsigned >) */

loc_001DA4F6: ;
    ecx = ZX8(MEM8(eax + 0x1DA78C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1DA784)); return; /* indirect tail jmp */

    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_001DA518(); return; /* tail jmp 0x001DA518 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001DA7D0
 * Original: 0x001DA7D0 - 0x001DA84F (127 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA7D0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM16(0x847278), LO16(ebp) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM16(0x847278), LO16(ebp))) goto loc_001DA80B; /* je: equal / zero */

loc_001DA7E1: ;
    MEM32(0x7FA0F8) = MEM32(0x7FA0F8) + 1;
    /* TODO: rdtsc  */
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_001DA7F3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_001DA800: ;
    MEM32(0x7FA100) = eax;
    MEM32(0x7FA104) = edx;

loc_001DA80B: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0x1A04);
    if (CMP_EQ(edi, ebp)) goto loc_001DA83F; /* je: equal / zero */

loc_001DA81B: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001DA83D; /* jne: not equal / not zero */

loc_001DA824: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001DA83D; /* jne: not equal / not zero */

loc_001DA830: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001DA83D; /* je: equal / zero */

loc_001DA837: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001DA83D: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_001DA83F: ;
    ecx = MEM32(esi + 0x1A08);
    if (CMP_NE(ecx, ebp)) { sub_001DA84F(); return; } /* jne: not equal / not zero */

loc_001DA849: ;
    MEM32(esp + 0x18) = ebp;
    g_seh_ebp = ebp; sub_001DA877(); return; /* tail jmp 0x001DA877 */

}

/**
 * sub_001DABB0
 * Original: 0x001DABB0 - 0x001DAFAE (1022 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABB0(void)
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

loc_001DABB0: ;
    esp = esp - 0xFC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x104);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001DAFA5; /* je: equal / zero */

loc_001DABC9: ;
    if (TEST_Z(ebp, ebp)) goto loc_001DAFA5; /* je: equal / zero */

loc_001DABD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xF4;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_001DABF9: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_001DAC0C: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_001DAC16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001DAC1C: ;
    esi = esp + 0xF0;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001DAC2A: ;
    fp_push((double)SMEM32(esp + 0x104)); /* fild */
    ecx = MEM32(esp + 0x104);
    if (CMP_GE(ecx & ecx, 0)) goto loc_001DAC42; /* jge: greater or equal (signed >=) */

loc_001DAC3C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DAC42: ;
    edx = MEM32(esp + 0x108);
    fp_push((double)SMEM32(esp + 0x108)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001DAC5A; /* jge: greater or equal (signed >=) */

loc_001DAC54: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DAC5A: ;
    edi = MEM32(0x775D64);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    esi = esp + 0xF0;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_001DAC72: ;
    fp_push((double)SMEM32(esp + 0x104)); /* fild */
    eax = MEM32(esp + 0x104);
    if (CMP_GE(eax & eax, 0)) goto loc_001DAC8A; /* jge: greater or equal (signed >=) */

loc_001DAC84: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DAC8A: ;
    ecx = MEM32(esp + 0x108);
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x108)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001DACA6; /* jge: greater or equal (signed >=) */

loc_001DACA0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001DACA6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(0x648D14); /* movss */
    /* fld st(1) */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax | 0xFFFFFFFFu;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x68) = eax;
    MEMF(esp + 0x90) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0xF0);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    MEMF(esp + 0x94) = xmm4; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm1; /* movss */
    MEMF(esp + 0xC4) = xmm4; /* movss */
    PUSH32(esp, 0); sub_005232CC(); /* call 0x005232CC */

loc_001DAD38: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x114);
    if (TEST_Z(eax, eax)) goto loc_001DAD5D; /* je: equal / zero */

loc_001DAD43: ;
    xmm2 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 / MEMF(esp + 0x10); /* divss */
    xmm6 = xmm6 / MEMF(esp + 0x14); /* divss */
    xmm5 = xmm4; /* movaps */
    goto loc_001DAD88;

loc_001DAD5D: ;
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    edx = esp + 0x1C;
    if (CMP_EQ(eax, edx)) goto loc_001DAD7C; /* je: equal / zero */

loc_001DAD71: ;
    xmm2 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    goto loc_001DAD88;

loc_001DAD7C: ;
    xmm6 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */

loc_001DAD88: ;
    xmm1 = xmm4; /* movaps */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    xmm1 = xmm5; /* movaps */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0xD0) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + xmm5; /* addss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xD8) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x7C) = xmm3; /* movss */
    MEMF(esp + 0xAC) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm2; /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0xDC) = xmm1; /* movss */
    xmm3 = xmm3 + xmm5; /* addss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    MEMF(esp + 0xB4) = xmm3; /* movss */
    MEMF(esp + 0xE4) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xE8) = xmm2; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001DAECC: ;
    ebx = 1;
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001DAED9: ;
    PUSH32(esp, ebp);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001DAEE4: ;
    PUSH32(esp, ebp);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001DAEEF: ;
    edi = MEM32(esp + 0x118);
    esi = 0; /* xor self */
    goto loc_001DAF00;

    /* nop */

loc_001DAF00: ;
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_001DAF10: ;
    esp = esp + 8;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = ebx;
    ecx = esi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001DAF39: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_001DAF00; /* jl: less (signed <) */

loc_001DAF3F: ;
    SET_LO8(eax, MEM8(esp + 0x11C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0x40304;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DAF82; /* je: equal / zero */

loc_001DAF4F: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001DAF56: ;
    edx = ebx;
    ecx = 0x40344;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001DAF68: ;
    edx = ebx;
    ecx = 0x40348;
    MEM32(0x549AF0) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001DAF7A: ;
    MEM32(0x549AF4) = ebx;
    goto loc_001DAF93;

loc_001DAF82: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001DAF89: ;
    MEM32(0x549AE4) = 0;

loc_001DAF93: ;
    PUSH32(esp, 0x30);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001DAFA3: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001DAFA5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0xFC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001DAFB0
 * Original: 0x001DAFB0 - 0x001DB003 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFB0(void)
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

loc_001DAFB0: ;
    PUSH32(esp, ecx);
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001DAFFF; /* ja: above (unsigned >) */

loc_001DAFB9: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001DAFF6; /* jbe: below or equal (unsigned <=) */

loc_001DAFC6: ;
    xmm0 = xmm1; /* movaps */

loc_001DAFC9: ;
    xmm2 = MEMF(0x85E3FC); /* movss */
    SET_LO8(eax, MEM8(esp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp) = xmm2; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001DB003(); return; } /* je: equal / zero */

loc_001DAFE9: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001DAFEE: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DAFF6: ;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001DAFC9; /* jp: parity */

loc_001DAFFF: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001DB010
 * Original: 0x001DB010 - 0x001DB075 (101 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB010: ;
    esp = esp - 0x108;
    eax = MEM32(0x6B85B4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001DB024: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001DB02B: ;
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(ecx, ebp)) goto loc_001DB065; /* je: equal / zero */

loc_001DB041: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001DB063; /* jne: not equal / not zero */

loc_001DB04A: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001DB063; /* jne: not equal / not zero */

loc_001DB056: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001DB063; /* je: equal / zero */

loc_001DB05D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001DB063: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_001DB065: ;
    ecx = MEM32(esi + 0x1A08);
    if (CMP_NE(ecx, ebp)) { sub_001DB075(); return; } /* jne: not equal / not zero */

loc_001DB06F: ;
    MEM32(esp + 0x20) = ebp;
    g_seh_ebp = ebp; sub_001DB09D(); return; /* tail jmp 0x001DB09D */

}

/**
 * sub_001DB650
 * Original: 0x001DB650 - 0x001DB6A5 (85 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB650(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB650: ;
    esp = esp - 0x20;
    eax = 0x24;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = 0xD0;
    MEM32(esp + 4) = 0x90;
    MEM32(esp + 0x10) = 0x34;
    MEM32(esp + 0x14) = 0x14;
    MEM32(esp + 0x18) = 0x50;
    MEM32(esp + 0x1C) = 0x60;
    if (TEST_S(eax, eax)) { sub_001DB6A5(); return; } /* jl: less (signed <) */

loc_001DB699: ;
    if (CMP_G(eax, 8)) { sub_001DB6A5(); return; } /* jg: greater (signed >) */

loc_001DB69E: ;
    eax = MEM32(esp + eax * 4);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB6B0
 * Original: 0x001DB6B0 - 0x001DB710 (96 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB6B0: ;
    SET_LO8(ecx, MEM8(0x87A1A8));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_001DB70A; /* jne: not equal / not zero */

loc_001DB6BF: ;
    MEM32(0x87A1A8) = MEM32(0x87A1A8) | eax;
    ecx = 0; /* xor self */
    MEM32(0x87878C) = ecx;
    MEM32(0x878790) = ecx;
    MEM32(0x878794) = ecx;
    MEM32(0x87879C) = ecx;
    MEM32(0x8787A0) = ecx;
    MEM32(0x8787A4) = ecx;
    eax = 0x8787D8;
    edx = 0x80;

loc_001DB6F5: ;
    MEM32(eax) = ecx;
    eax = eax + 0x34;
    edx--;
    if ((edx != 0)) goto loc_001DB6F5; /* jne: not equal / not zero */

loc_001DB6FD: ;
    PUSH32(esp, 0x48C660);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_001DB707: ;
    esp = esp + 4;

loc_001DB70A: ;
    eax = 0x878788;
    esp += 4; return; /* ret */

}

/**
 * sub_001DB710
 * Original: 0x001DB710 - 0x001DB753 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB710(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB710: ;
    edx = MEM32(0x8496B4);
    PUSH32(esp, esi);
    esi = ecx;
    edx--;
    PUSH32(esp, edi);
    eax = esi + 0x20;
    MEM32(esi) = 0x5F5A80;
    MEM32(0x8496B4) = edx;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DB72F: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001DB74D; /* je: equal / zero */

loc_001DB738: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 0x14);
    if (CMP_NE(MEM32(ecx + 4), edi)) goto loc_001DB74D; /* jne: not equal / not zero */

loc_001DB743: ;
    if (CMP_EQ(ecx, edi)) goto loc_001DB74D; /* je: equal / zero */

loc_001DB747: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DB74D: ;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB760
 * Original: 0x001DB760 - 0x001DB7AF (79 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB760(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB760: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(esi, eax)) goto loc_001DB792; /* je: equal / zero */

loc_001DB76C: ;
    if (TEST_Z(esi, esi)) goto loc_001DB773; /* je: equal / zero */

loc_001DB770: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DB773: ;
    eax = MEM32(ecx + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x14) = esi;
    if (TEST_Z(eax, eax)) goto loc_001DB792; /* je: equal / zero */

loc_001DB77D: ;
    edx = MEM32(eax + 4);
    edx--;
    ecx = edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(ecx, ecx)) goto loc_001DB792; /* jne: not equal / not zero */

loc_001DB78A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DB792: ;
    if (TEST_Z(esi, esi)) goto loc_001DB7AB; /* je: equal / zero */

loc_001DB796: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DB7AB; /* jne: not equal / not zero */

loc_001DB7A3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DB7AB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB7B0
 * Original: 0x001DB7B0 - 0x001DB7E6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7B0(void)
{
    uint32_t ebp;

loc_001DB7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    edi = ecx;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DB7C9: ;
    esi = eax;
    edi = edi + 0x20;
    ecx = 0x30;
    eax = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DB7DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB7F0
 * Original: 0x001DB7F0 - 0x001DB81A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB7F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_001DB710(); /* call 0x001DB710 */

loc_001DB7F8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001DB814; /* je: equal / zero */

loc_001DB7FF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DB814; /* je: equal / zero */

loc_001DB807: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DB811: ;
    esp = esp + 4;

loc_001DB814: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB820
 * Original: 0x001DB820 - 0x001DB82D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB820(void)
{

loc_001DB820: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DB830
 * Original: 0x001DB830 - 0x001DB862 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB830(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB830: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001DB842: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) { sub_001DB862(); return; } /* je: equal / zero */

loc_001DB84A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    edx = MEM32(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_001DB857: ;
    eax = MEM32(esp + 4);
    MEM32(edi) = eax;
    eax = edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB870
 * Original: 0x001DB870 - 0x001DB8CE (94 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB870(void)
{

loc_001DB870: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi) = 0x5F5A80;
    MEM32(esi + 0x10) = edi;
    eax = esi + 0x20;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001DB887: ;
    eax = MEM32(0x8496B4);
    eax++;
    ecx = esi + 0xF0;
    MEM8(esi + 0xE0) = 1;
    MEM32(esi + 0xE4) = 0xF0;
    MEM32(0x8496B4) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi) = 0x5F5A04;
    MEM32(ecx + 4) = edi;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edi;
    PUSH32(esp, eax);
    MEM32(esi + 0x104) = edi;
    PUSH32(esp, 0); sub_001DDAF0(); /* call 0x001DDAF0 */

loc_001DB8C8: ;
    eax = esi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DB8D0
 * Original: 0x001DB8D0 - 0x001DB914 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB8D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB8D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEM32(esi) = 0x5F5A04;
    edi = 0; /* xor self */
    /* nop */

loc_001DB8E0: ;
    ecx = MEM32(esi + 0xF4);
    if (CMP_EQ(ecx, ebx)) { sub_001DB914(); return; } /* je: equal / zero */

loc_001DB8EA: ;
    eax = MEM32(esi + 0xF8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(edi, eax)) { sub_001DB914(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB8F9: ;
    eax = ecx;
    ecx = MEM32(eax + edi * 4);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = eax + edi * 4;
    if (CMP_EQ(ecx, ebx)) goto loc_001DB90B; /* je: equal / zero */

loc_001DB905: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DB90B: ;
    MEM32(esi + 0x104) = MEM32(esi + 0x104) - 1;
    edi++;
    goto loc_001DB8E0;

}

/**
 * sub_001DB9A0
 * Original: 0x001DB9A0 - 0x001DB9DB (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB9A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_001DB9B0: ;
    ecx = MEM32(edi + 0xF4);
    if (TEST_Z(ecx, ecx)) { sub_001DB9DB(); return; } /* je: equal / zero */

loc_001DB9BA: ;
    eax = MEM32(edi + 0xF8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(esi, eax)) { sub_001DB9DB(); return; } /* jae: above or equal (unsigned >=) */

loc_001DB9C9: ;
    eax = ecx;
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    eax = eax + esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001DB9D8: ;
    esi++;
    goto loc_001DB9B0;

}

/**
 * sub_001DB9F0
 * Original: 0x001DB9F0 - 0x001DB9FD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB9F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB9F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DBA00(); return; /* tail jmp 0x001DBA00 */

}

/**
 * sub_001DBA30
 * Original: 0x001DBA30 - 0x001DBA4A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBA30(void)
{
    uint32_t ebp;

loc_001DBA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = 0; /* xor self */
    ebx = ecx;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DBA50(); return; /* tail jmp 0x001DBA50 */

}

/**
 * sub_001DBB20
 * Original: 0x001DBB20 - 0x001DBB29 (9 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBB20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBB20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DBB30(); return; /* tail jmp 0x001DBB30 */

}

/**
 * sub_001DBC00
 * Original: 0x001DBC00 - 0x001DBC2A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DBC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_001DB8D0(); /* call 0x001DB8D0 */

loc_001DBC08: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001DBC24; /* je: equal / zero */

loc_001DBC0F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DBC24; /* je: equal / zero */

loc_001DBC17: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DBC21: ;
    esp = esp + 4;

loc_001DBC24: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBC30
 * Original: 0x001DBC30 - 0x001DBCE9 (185 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001DBC30: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi) = 0x5F5A80;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, edi);
    eax = esi + 0x20;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001DBC48: ;
    ecx = MEM32(0x8496B4);
    edi = MEM32(esp + 0xC);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM8(esi + 0xE0) = 1;
    MEM32(esi + 0xE4) = 0xF0;
    ecx++;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi) = 0x5F5A60;
    MEMF(esi + 0xF0) = xmm0; /* movss */
    MEM8(esi + 0xF4) = LO8(ebx);
    MEM32(esi + 0xFC) = ebx;
    MEM32(0x8496B4) = ecx;
    MEM32(esi + 0x100) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_001DBC97; /* je: equal / zero */

loc_001DBC94: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_001DBC97: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(esi + 0x104) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001DBCA6: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esi + 0xF0); /* mulss */
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(esi + 0xF8) = xmm0; /* movss */
    MEM32(eax) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_001DBCC2; /* je: equal / zero */

loc_001DBCBF: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_001DBCC2: ;
    ecx = esi;
    PUSH32(esp, 0); sub_001DB760(); /* call 0x001DB760 */

loc_001DBCC9: ;
    if (CMP_EQ(edi, ebx)) goto loc_001DBCE2; /* je: equal / zero */

loc_001DBCCD: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (CMP_NE(eax, ebx)) goto loc_001DBCE2; /* jne: not equal / not zero */

loc_001DBCDA: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DBCE2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DBCF0
 * Original: 0x001DBCF0 - 0x001DBCFF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBCF0: ;
    ecx = MEM32(ecx + 0xFC);
    if (TEST_Z(ecx, ecx)) { sub_001DBCFF(); return; } /* je: equal / zero */

loc_001DBCFA: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_001DBD10
 * Original: 0x001DBD10 - 0x001DBD7C (108 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001DBD10: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0xFC);
    if (TEST_NZ(ecx, ecx)) { sub_001DBD7C(); return; } /* jne: not equal / not zero */

loc_001DBD1D: ;
    xmm0 = MEMF(ebx + 0xF8); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001DBD78; /* jbe: below or equal (unsigned <=) */

loc_001DBD2D: ;
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0xF8) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_001DBD78; /* jb: below (unsigned <) */

loc_001DBD40: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    edx = ebx + 0x20;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_001DB830(); /* call 0x001DB830 */

loc_001DBD59: ;
    eax = MEM32(eax);
    MEM32(ebx + 0xFC) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001DBD66: ;
    xmm0 = xmm0 * MEMF(ebx + 0xF0); /* mulss */
    POP32(esp, edi);
    MEMF(ebx + 0xF8) = xmm0; /* movss */
    POP32(esp, esi);

loc_001DBD78: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBDE0
 * Original: 0x001DBDE0 - 0x001DBE32 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBDE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DBDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0xFC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001DBE22; /* je: equal / zero */

loc_001DBDFB: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001DBE04: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DBE0D: ;
    esi = eax;
    edi = ebx + 0x20;
    ecx = 0x30;
    eax = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DBE22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0xF4) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DBE40
 * Original: 0x001DBE40 - 0x001DBE8F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xFC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5F5A60;
    if (TEST_Z(ecx, ecx)) goto loc_001DBE59; /* je: equal / zero */

loc_001DBE53: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DBE59: ;
    eax = MEM32(esi + 0x100);
    if (TEST_Z(eax, eax)) goto loc_001DBE7D; /* je: equal / zero */

loc_001DBE63: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 0x100);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DBE7D; /* jne: not equal / not zero */

loc_001DBE73: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DBE7D; /* je: equal / zero */

loc_001DBE77: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DBE7D: ;
    MEM32(esi + 0x100) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001DB710(); return; /* tail jmp 0x001DB710 */

}

/**
 * sub_001DBEC0
 * Original: 0x001DBEC0 - 0x001DBF38 (120 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBEC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DBEC0: ;
    ecx = MEM32(0x8496B0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(edi + 4) = ebx;
    ecx++;
    PUSH32(esp, esi);
    esi = edi + 8;
    MEM32(edi) = 0x5F5A24;
    MEM32(0x8496B0) = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    ecx = esp + 0xC;
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, 0); sub_0024F260(); /* call 0x0024F260 */

loc_001DBEF2: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_0024F260(); /* call 0x0024F260 */

loc_001DBEFB: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_EQ(ecx, ebx)) goto loc_001DBF16; /* je: equal / zero */

loc_001DBF03: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (CMP_NE(eax, ebx)) goto loc_001DBF16; /* jne: not equal / not zero */

loc_001DBF10: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DBF16: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(ecx, ebx)) goto loc_001DBF31; /* je: equal / zero */

loc_001DBF1E: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (CMP_NE(eax, ebx)) goto loc_001DBF31; /* jne: not equal / not zero */

loc_001DBF2B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DBF31: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DBF40
 * Original: 0x001DBF40 - 0x001DBF71 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF40: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi + 8;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0024F260(); /* call 0x0024F260 */

loc_001DBF4F: ;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_001DBF71(); return; } /* je: equal / zero */

loc_001DBF58: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) { sub_001DBF71(); return; } /* jne: not equal / not zero */

loc_001DBF65: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_001DBF80
 * Original: 0x001DBF80 - 0x001DBFBD (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF80: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x110);
    ebp = ecx;
    PUSH32(esp, 0); sub_001DD990(); /* call 0x001DD990 */

loc_001DBF93: ;
    ecx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ecx)) { sub_001DBFBD(); return; } /* je: equal / zero */

loc_001DBF9C: ;
    edx = MEM32(ebp + 0xC);
    if (CMP_EQ(edx, ecx)) goto loc_001DBFAB; /* je: equal / zero */

loc_001DBFA3: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_001DBFAB: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0); sub_001DB870(); /* call 0x001DB870 */

loc_001DBFB7: ;
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_001DBFC1(); return; /* tail jmp 0x001DBFC1 */

}

/**
 * sub_001DC140
 * Original: 0x001DC140 - 0x001DC144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC140(void)
{

loc_001DC140: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC150
 * Original: 0x001DC150 - 0x001DC195 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC150(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DC150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 8;
    MEM32(edi) = 0x5F5A24;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_001DC162: ;
    ecx = MEM32(0x8496B0);
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx--;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(edi) = 0x5F5AA0;
    MEM32(0x8496B0) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_001DC18E; /* je: equal / zero */

loc_001DC17D: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DC18B: ;
    esp = esp + 4;

loc_001DC18E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC1A0
 * Original: 0x001DC1A0 - 0x001DC1E2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC1A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DC1A0: ;
    eax = MEM32(edx + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi + 4) = eax;
    MEM32(edi) = 0x5F5A50;
    MEM32(edi + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DC1BB; /* je: equal / zero */

loc_001DC1B8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DC1BB: ;
    eax = edi + 0x10;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001DC1C3: ;
    if (TEST_Z(esi, esi)) goto loc_001DC1DC; /* je: equal / zero */

loc_001DC1C7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DC1DC; /* jne: not equal / not zero */

loc_001DC1D4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DC1DC: ;
    eax = edi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC1F0
 * Original: 0x001DC1F0 - 0x001DC21A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DC1F0: ;
    eax = ecx;
    ecx = eax + 0x10;
    eax = MEM32(eax + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    if (TEST_Z(eax, eax)) goto loc_001DC206; /* je: equal / zero */

loc_001DC203: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_001DC206: ;
    edx = MEM32(esp + 0xC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DC970(); /* call 0x001DC970 */

loc_001DC215: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC220
 * Original: 0x001DC220 - 0x001DC262 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC220(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DC220: ;
    eax = MEM32(edx + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi + 4) = eax;
    MEM32(edi) = 0x5F5A40;
    MEM32(edi + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DC23B; /* je: equal / zero */

loc_001DC238: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DC23B: ;
    eax = edi + 0x10;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001DC243: ;
    if (TEST_Z(esi, esi)) goto loc_001DC25C; /* je: equal / zero */

loc_001DC247: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DC25C; /* jne: not equal / not zero */

loc_001DC254: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DC25C: ;
    eax = edi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DC270
 * Original: 0x001DC270 - 0x001DC278 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC270(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC270: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_001DC2A0
 * Original: 0x001DC2A0 - 0x001DC33C (156 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC2A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC2A0: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esp + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(esi) = LO8(eax);
    edi = esi + 4;
    PUSH32(esp, 0); sub_00287A70(); /* call 0x00287A70 */

loc_001DC2B4: ;
    ebx = 0; /* xor self */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ebx;
    ecx = MEM32(esi + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    ebp = esi + 0x10;
    PUSH32(esp, ebp);
    ecx = 9;
    PUSH32(esp, 0); sub_002D1E60(); /* call 0x002D1E60 */

loc_001DC2D6: ;
    eax = 1;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_001DC2E6: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ebx;
    eax = esi + 0x34;
    MEM32(eax) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM8(esi + 0x60) = LO8(ebx);
    ebx = 1;
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, 0); sub_001DDFC0(); /* call 0x001DDFC0 */

loc_001DC319: ;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 9);
    eax = esp + 0x14;
    edx = ebp;
    PUSH32(esp, 0); sub_001DE460(); /* call 0x001DE460 */

loc_001DC32D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC340
 * Original: 0x001DC340 - 0x001DC487 (327 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_001DCF60(); /* call 0x001DCF60 */

loc_001DC34D: ;
    eax = MEM32(ebx + 0x2C);
    esi = MEM32(eax);
    ebp = 0; /* xor self */
    if (CMP_EQ(esi, eax)) goto loc_001DC36C; /* je: equal / zero */

loc_001DC358: ;
    ecx = MEM32(esi + 8);
    if (CMP_EQ(ecx, ebp)) goto loc_001DC365; /* je: equal / zero */

loc_001DC35F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DC365: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, MEM32(ebx + 0x2C))) goto loc_001DC358; /* jne: not equal / not zero */

loc_001DC36C: ;
    edi = MEM32(ebx + 0x40);
    esi = ebx + 0x34;
    if (CMP_EQ(edi, esi)) goto loc_001DC389; /* je: equal / zero */

loc_001DC376: ;
    ecx = MEM32(edi);
    if (CMP_EQ(ecx, ebp)) goto loc_001DC382; /* je: equal / zero */

loc_001DC37C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DC382: ;
    edi = MEM32(edi + 0xC);
    if (CMP_NE(edi, esi)) goto loc_001DC376; /* jne: not equal / not zero */

loc_001DC389: ;
    edi = MEM32(ebx + 0x54);
    if (CMP_EQ(edi, ebp)) goto loc_001DC3BB; /* je: equal / zero */

loc_001DC390: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001DC396: ;
    if (TEST_NZ(eax, eax)) goto loc_001DC3BB; /* jne: not equal / not zero */

loc_001DC39A: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001DC3B8: ;
    esp = esp + 4;

loc_001DC3BB: ;
    MEM32(ebx + 0x54) = ebp;
    MEM32(ebx + 0x58) = ebp;
    MEM32(ebx + 0x5C) = ebp;
    PUSH32(esp, 0); sub_001DEAE0(); /* call 0x001DEAE0 */

loc_001DC3C9: ;
    edi = ebx + 0x28;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_001DC3D1: ;
    esi = MEM32(edi + 4);
    if (CMP_EQ(esi, ebp)) goto loc_001DC403; /* je: equal / zero */

loc_001DC3D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001DC3DE: ;
    if (TEST_NZ(eax, eax)) goto loc_001DC403; /* jne: not equal / not zero */

loc_001DC3E2: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001DC400: ;
    esp = esp + 4;

loc_001DC403: ;
    MEM32(edi + 4) = ebp;
    esi = MEM32(ebx + 0x14);
    if (CMP_EQ(esi, ebp)) goto loc_001DC43A; /* je: equal / zero */

loc_001DC40D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001DC413: ;
    if (TEST_NZ(eax, eax)) goto loc_001DC43A; /* jne: not equal / not zero */

loc_001DC417: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001DC437: ;
    esp = esp + 4;

loc_001DC43A: ;
    edi = ebx + 4;
    MEM32(ebx + 0x14) = ebp;
    MEM32(ebx + 0x18) = ebp;
    MEM32(ebx + 0x1C) = ebp;
    PUSH32(esp, 0); sub_001DDFC0(); /* call 0x001DDFC0 */

loc_001DC44B: ;
    esi = MEM32(edi + 4);
    if (CMP_EQ(esi, ebp)) goto loc_001DC47F; /* je: equal / zero */

loc_001DC452: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001DC458: ;
    if (TEST_NZ(eax, eax)) goto loc_001DC47F; /* jne: not equal / not zero */

loc_001DC45C: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001DC47C: ;
    esp = esp + 4;

loc_001DC47F: ;
    MEM32(edi + 4) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC490
 * Original: 0x001DC490 - 0x001DC4AD (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC490: ;
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001DC4A2: ;
    if (TEST_Z(eax, eax)) { sub_001DC4AD(); return; } /* je: equal / zero */

loc_001DC4A6: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DC4AB: ;
    g_seh_ebp = ebp; sub_001DC4AF(); return; /* tail jmp 0x001DC4AF */

}

/**
 * sub_001DC680
 * Original: 0x001DC680 - 0x001DC7A2 (290 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC680(void)
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

loc_001DC680: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_001DC79C; /* je: equal / zero */

loc_001DC68F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DC6B0; /* je: equal / zero */

loc_001DC693: ;
    PUSH32(esp, 0); sub_0046FD20(); /* call 0x0046FD20 */

loc_001DC698: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6497BC); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001DC6B0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001DC6BE; /* jne: not equal / not zero */

loc_001DC6B9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001DC6BE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001DC70C; /* je: equal / zero */

loc_001DC6E4: ;
    if (CMP_B(MEM32(esi + 0x80), 0xD0)) goto loc_001DC70C; /* jb: below (unsigned <) */

loc_001DC6F0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DC6FA: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DC705: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001DC730; /* jne: not equal / not zero */

loc_001DC70C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DC71E: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DC729: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DC787; /* je: equal / zero */

loc_001DC730: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    edx = MEM32(esp + 0x1C);
    edi = eax;
    PUSH32(esp, 0); sub_001DC1A0(); /* call 0x001DC1A0 */

loc_001DC743: ;
    if (TEST_Z(eax, eax)) goto loc_001DC787; /* je: equal / zero */

loc_001DC747: ;
    SET_LO8(ecx, MEM8(0x7FA23C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001DC75C; /* jne: not equal / not zero */

loc_001DC754: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001DC75C: ;
    edi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esp = esp - 8;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esp;
    edi = edi + 0x34;
    MEM32(ecx) = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001DE700(); /* call 0x001DE700 */

loc_001DC787: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DC79C; /* jne: not equal / not zero */

loc_001DC794: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DC79C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001DC7B0
 * Original: 0x001DC7B0 - 0x001DC964 (436 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC7B0(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC7B0: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_001DC8A4; /* jbe: below or equal (unsigned <=) */

loc_001DC7CF: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001DC7DD; /* jne: not equal / not zero */

loc_001DC7D8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001DC7DD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001DC82B; /* je: equal / zero */

loc_001DC803: ;
    if (CMP_B(MEM32(esi + 0x80), 0xD0)) goto loc_001DC82B; /* jb: below (unsigned <) */

loc_001DC80F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DC819: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DC824: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001DC84F; /* jne: not equal / not zero */

loc_001DC82B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DC83D: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DC848: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DC8CA; /* je: equal / zero */

loc_001DC84F: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_001DC85B; /* je: equal / zero */

loc_001DC858: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_001DC85B: ;
    edx = ebp;
    edi = eax;
    PUSH32(esp, 0); sub_001DC220(); /* call 0x001DC220 */

loc_001DC864: ;
    if (TEST_Z(eax, eax)) goto loc_001DC8CA; /* je: equal / zero */

loc_001DC868: ;
    SET_LO8(ecx, MEM8(0x7FA23C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001DC87D; /* jne: not equal / not zero */

loc_001DC875: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001DC87D: ;
    edi = MEM32(esp + 0x14);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esp = esp - 8;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esp;
    edi = edi + 0x34;
    MEM32(ecx) = eax;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001DE700(); /* call 0x001DE700 */

loc_001DC8A2: ;
    goto loc_001DC8CA;

loc_001DC8A4: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001DC8AB: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001DC8F2; /* jp: parity */

loc_001DC8BB: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_001DC8F2; /* ja: above (unsigned >) */

loc_001DC8CA: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_001DC8DB; /* je: equal / zero */

loc_001DC8D8: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_001DC8DB: ;
    esi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0); sub_001DC970(); /* call 0x001DC970 */

loc_001DC8EC: ;
    if (TEST_Z(ebx, ebx)) goto loc_001DC95B; /* je: equal / zero */

loc_001DC8F0: ;
    goto loc_001DC946;

loc_001DC8F2: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001DC8F9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001DC912; /* jbe: below or equal (unsigned <=) */

loc_001DC905: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001DC90C: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_001DC91E;

loc_001DC912: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */

loc_001DC91E: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    edi = MEM32(ebx + 4);
    SET_LO8(eax, 0); /* xor self */
    edi++;
    PUSH32(esp, edx);
    MEM32(ebx + 4) = edi;
    PUSH32(esp, 0); sub_001DC680(); /* call 0x001DC680 */

loc_001DC93C: ;
    esi = MEM32(esp + 0x18);
    MEM32(esi) = 0;

loc_001DC946: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DC95B; /* jne: not equal / not zero */

loc_001DC953: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DC95B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001DC970
 * Original: 0x001DC970 - 0x001DC99D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC970: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001DC98E: ;
    edi = MEM32(eax);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (TEST_NZ(edi, edi)) { sub_001DC99D(); return; } /* jne: not equal / not zero */

loc_001DC998: ;
    MEM32(ebp) = edi;
    g_seh_ebp = ebp; sub_001DC9E2(); return; /* tail jmp 0x001DC9E2 */

}

/**
 * sub_001DCA00
 * Original: 0x001DCA00 - 0x001DCA32 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCA00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    ecx = esp + 0x10;
    eax = esp + 8;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_001DCA18: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, MEM32(esi + 8))) { sub_001DCA32(); return; } /* jne: not equal / not zero */

loc_001DCA21: ;
    ecx = 0; /* xor self */
    ebx = 1;
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x10;
    g_seh_ebp = ebp; sub_001DCA39(); return; /* tail jmp 0x001DCA39 */

}

/**
 * sub_001DCA70
 * Original: 0x001DCA70 - 0x001DCADA (106 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCA70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax ^ edx;
    PUSH32(esp, eax);
    edi = esp + 0x20;
    eax = ebp;
    PUSH32(esp, 0); sub_001DCA00(); /* call 0x001DCA00 */

loc_001DCA8D: ;
    esi = MEM32(esp + 0x1C);
    if (TEST_Z(esi, esi)) { sub_001DCADA(); return; } /* je: equal / zero */

loc_001DCA95: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    eax++;
    PUSH32(esp, ebp);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0); sub_001DC7B0(); /* call 0x001DC7B0 */

loc_001DCABC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DCAD1; /* jne: not equal / not zero */

loc_001DCAC9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DCAD1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001DCAF0
 * Original: 0x001DCAF0 - 0x001DCBBA (202 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001DCAF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DCB08: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    ebx = MEM32(eax);
    if (CMP_EQ(ebx, eax)) goto loc_001DCBA8; /* je: equal / zero */

loc_001DCB18: ;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ecx + 0x14);
    if (TEST_Z(esi, esi)) goto loc_001DCB25; /* je: equal / zero */

loc_001DCB22: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DCB25: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001DCB2C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    edi = eax;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DCB43; /* jne: not equal / not zero */

loc_001DCB3B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DCB43: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x84);
    edx = MEM32(ebp + 0xC);
    if (CMP_NE(ecx, MEM32(edx + 0x64))) goto loc_001DCB9A; /* jne: not equal / not zero */

loc_001DCB54: ;
    esi = MEM32(ebp + 0x10);
    eax = edi;
    /* nop */

loc_001DCB60: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    if (CMP_NE(LO8(ecx), MEM8(esi))) goto loc_001DCB84; /* jne: not equal / not zero */

loc_001DCB68: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001DCB80; /* je: equal / zero */

loc_001DCB6C: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ecx));
    if (CMP_NE(LO8(ecx), MEM8(esi + 1))) goto loc_001DCB84; /* jne: not equal / not zero */

loc_001DCB76: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001DCB60; /* jne: not equal / not zero */

loc_001DCB80: ;
    eax = 0; /* xor self */
    goto loc_001DCB89;

loc_001DCB84: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_001DCB89: ;
    if (TEST_NZ(eax, eax)) goto loc_001DCB9A; /* jne: not equal / not zero */

loc_001DCB8D: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_001DCB9A: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    if (CMP_NE(ebx, MEM32(ecx + 0x2C))) goto loc_001DCB18; /* jne: not equal / not zero */

loc_001DCBA8: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DCBB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DCBC0
 * Original: 0x001DCBC0 - 0x001DCC6A (170 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001DCBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DCBD8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    ebx = MEM32(eax);
    if (CMP_EQ(ebx, eax)) goto loc_001DCC58; /* je: equal / zero */

loc_001DCBE4: ;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ecx + 0x14);
    if (TEST_Z(esi, esi)) goto loc_001DCBF1; /* je: equal / zero */

loc_001DCBEE: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DCBF1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001DCBF8: ;
    ecx = MEM32(esi + 4);
    ecx--;
    edi = eax;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DCC0F; /* jne: not equal / not zero */

loc_001DCC07: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DCC0F: ;
    esi = MEM32(ebp + 0xC);
    eax = edi;

loc_001DCC14: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_001DCC38; /* jne: not equal / not zero */

loc_001DCC1C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001DCC34; /* je: equal / zero */

loc_001DCC20: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) goto loc_001DCC38; /* jne: not equal / not zero */

loc_001DCC2A: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001DCC14; /* jne: not equal / not zero */

loc_001DCC34: ;
    eax = 0; /* xor self */
    goto loc_001DCC3D;

loc_001DCC38: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_001DCC3D: ;
    if (TEST_NZ(eax, eax)) goto loc_001DCC4E; /* jne: not equal / not zero */

loc_001DCC41: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001DCC4E: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    if (CMP_NE(ebx, MEM32(eax + 0x2C))) goto loc_001DCBE4; /* jne: not equal / not zero */

loc_001DCC58: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DCC61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DCC70
 * Original: 0x001DCC70 - 0x001DCD9E (302 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCC70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, eax)) goto loc_001DCCE9; /* je: equal / zero */

loc_001DCC81: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001DCC89: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DCCE2; /* je: equal / zero */

loc_001DCC8D: ;
    ecx = MEM32(esi + 8);
    if (TEST_Z(ecx, ecx)) goto loc_001DCC9A; /* je: equal / zero */

loc_001DCC94: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DCC9A: ;
    (void)0; /* cmp esi, MEM32(ebx + 0x2C) - flags set for next jcc */
    edi = MEM32(esi);
    if (CMP_EQ(esi, MEM32(ebx + 0x2C))) goto loc_001DCCDE; /* je: equal / zero */

loc_001DCCA1: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001DCCB4: ;
    if (TEST_NZ(eax, eax)) goto loc_001DCCDB; /* jne: not equal / not zero */

loc_001DCCB8: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001DCCD8: ;
    esp = esp + 4;

loc_001DCCDB: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - 1;

loc_001DCCDE: ;
    esi = edi;
    goto loc_001DCCE4;

loc_001DCCE2: ;
    esi = MEM32(esi);

loc_001DCCE4: ;
    if (CMP_NE(esi, MEM32(ebx + 0x2C))) goto loc_001DCC81; /* jne: not equal / not zero */

loc_001DCCE9: ;
    esi = MEM32(ebx + 0x40);
    edi = ebx + 0x34;
    if (CMP_EQ(esi, edi)) goto loc_001DCD5E; /* je: equal / zero */

loc_001DCCF3: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001DCD0C; /* jne: not equal / not zero */

loc_001DCD04: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001DCD0C: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001DCD5E; /* jbe: below or equal (unsigned <=) */

loc_001DCD11: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001DCD19: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_001DCD25; /* je: equal / zero */

loc_001DCD1F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DCD25: ;
    if (CMP_EQ(esi, edi)) goto loc_001DCD57; /* je: equal / zero */

loc_001DCD29: ;
    ebp = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = ebp;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = eax;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DCD4B: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    eax--;
    esi = ebp;
    MEM32(edi + 0x10) = eax;

loc_001DCD57: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, edi)) goto loc_001DCCF3; /* jne: not equal / not zero */

loc_001DCD5E: ;
    eax = MEM32(0x84A144);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001DCD69; /* je: equal / zero */

loc_001DCD68: ;
    eax--;

loc_001DCD69: ;
    eax = MEM32(ebx + 0x2C);
    esi = MEM32(eax);
    if (CMP_EQ(esi, eax)) goto loc_001DCD97; /* je: equal / zero */

loc_001DCD72: ;
    ecx = MEM32(esi + 8);
    xmm0 = MEMF(0x6B99F8); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001DCD90: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, MEM32(ebx + 0x2C))) goto loc_001DCD72; /* jne: not equal / not zero */

loc_001DCD97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DCDA0
 * Original: 0x001DCDA0 - 0x001DCE92 (242 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCDA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DCDA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DCDBA: ;
    eax = MEM32(edi + 0x2C);
    esi = MEM32(eax);
    if (CMP_EQ(esi, eax)) goto loc_001DCE25; /* je: equal / zero */

loc_001DCDC3: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x64);
    if (CMP_NE(MEM32(ecx + 0x84), eax)) goto loc_001DCE1E; /* jne: not equal / not zero */

loc_001DCDD4: ;
    if (TEST_NZ(eax, eax)) goto loc_001DCE12; /* jne: not equal / not zero */

loc_001DCDD8: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DCDE2; /* je: equal / zero */

loc_001DCDDC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DCDE2: ;
    (void)0; /* cmp esi, MEM32(edi + 0x2C) - flags set for next jcc */
    ebx = MEM32(esi);
    if (CMP_EQ(esi, MEM32(edi + 0x2C))) goto loc_001DCE0E; /* je: equal / zero */

loc_001DCDE9: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = ebx;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DCE04: ;
    eax = MEM32(edi + 0x30);
    esp = esp + 4;
    eax--;
    MEM32(edi + 0x30) = eax;

loc_001DCE0E: ;
    esi = ebx;
    goto loc_001DCE20;

loc_001DCE12: ;
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_001DCE1C: ;
    goto loc_001DCE20;

loc_001DCE1E: ;
    esi = MEM32(esi);

loc_001DCE20: ;
    if (CMP_NE(esi, MEM32(edi + 0x2C))) goto loc_001DCDC3; /* jne: not equal / not zero */

loc_001DCE25: ;
    esi = MEM32(edi + 0x40);
    edi = edi + 0x34;
    if (CMP_EQ(esi, edi)) goto loc_001DCE80; /* je: equal / zero */

loc_001DCE2F: ;
    /* nop */

loc_001DCE30: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    edx = MEM32(ecx + 4);
    if (CMP_NE(edx, MEM32(eax + 0x64))) goto loc_001DCE79; /* jne: not equal / not zero */

loc_001DCE3D: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DCE47; /* je: equal / zero */

loc_001DCE41: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DCE47: ;
    if (CMP_EQ(esi, edi)) goto loc_001DCE79; /* je: equal / zero */

loc_001DCE4B: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = ebx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = eax;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DCE6D: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    eax--;
    esi = ebx;
    MEM32(edi + 0x10) = eax;

loc_001DCE79: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, edi)) goto loc_001DCE30; /* jne: not equal / not zero */

loc_001DCE80: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DCE89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DCEA0
 * Original: 0x001DCEA0 - 0x001DCF52 (178 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCEA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ebp, eax)) { sub_001DCF52(); return; } /* je: equal / zero */

loc_001DCEB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001DCEC0: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x84);
    if (CMP_NE(ecx, MEM32(edx + 0x64))) goto loc_001DCF36; /* jne: not equal / not zero */

loc_001DCED2: ;
    edi = MEM32(eax + 0x14);
    if (TEST_Z(edi, edi)) goto loc_001DCEDC; /* je: equal / zero */

loc_001DCED9: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_001DCEDC: ;
    eax = MEM32(edi);
    esi = MEM32(esp + 0x20);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001DCEE7: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_001DCF0F; /* jne: not equal / not zero */

loc_001DCEF1: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001DCF0B; /* je: equal / zero */

loc_001DCEF5: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_001DCF0F; /* jne: not equal / not zero */

loc_001DCF01: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001DCEE7; /* jne: not equal / not zero */

loc_001DCF0B: ;
    eax = 0; /* xor self */
    goto loc_001DCF14;

loc_001DCF0F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_001DCF14: ;
    ecx = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DCF2E; /* jne: not equal / not zero */

loc_001DCF26: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DCF2E: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001DCF36; /* je: equal / zero */

loc_001DCF32: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_001DCF36: ;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ebp);
    if (CMP_NE(ebp, MEM32(ecx + 0x2C))) goto loc_001DCEC0; /* jne: not equal / not zero */

loc_001DCF46: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DCF60
 * Original: 0x001DCF60 - 0x001DCFA7 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCF60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DCF60: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(edx, 1);
    if (CMP_EQ(eax, ecx)) goto loc_001DCF7F; /* je: equal / zero */

loc_001DCF6B: ;
    goto loc_001DCF70;

    /* nop */

loc_001DCF70: ;
    eax = MEM32(eax);
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (CMP_NE(eax, ecx)) goto loc_001DCF70; /* jne: not equal / not zero */

loc_001DCF7B: ;
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_001DCFA7(); return; } /* je: equal / zero */

loc_001DCF7F: ;
    eax = MEM32(esi + 0x40);
    ecx = esi + 0x34;
    if (CMP_EQ(eax, ecx)) goto loc_001DCF97; /* je: equal / zero */

loc_001DCF89: ;
    /* nop */

loc_001DCF90: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_001DCF90; /* jne: not equal / not zero */

loc_001DCF97: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DE900(); /* call 0x001DE900 */

loc_001DCF9D: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001DCFA7(); return; } /* je: equal / zero */

loc_001DCFA4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCFB0
 * Original: 0x001DCFB0 - 0x001DCFD7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCFB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DCFB0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F5ABC;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_001DCFD1; /* je: equal / zero */

loc_001DCFC0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DCFCE: ;
    esp = esp + 4;

loc_001DCFD1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DCFE0
 * Original: 0x001DCFE0 - 0x001DD034 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DCFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DCFEB: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_001DD009; /* je: equal / zero */

loc_001DCFF2: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DD009; /* jne: not equal / not zero */

loc_001DCFFF: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DD009; /* je: equal / zero */

loc_001DD003: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DD009: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0x5F5ABC;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001DD02E; /* je: equal / zero */

loc_001DD01D: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DD02B: ;
    esp = esp + 4;

loc_001DD02E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DD040
 * Original: 0x001DD040 - 0x001DD107 (199 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD040: ;
    eax = MEM32(0x8496B8);
    if (TEST_NZ(eax, eax)) { sub_001DD107(); return; } /* jne: not equal / not zero */

loc_001DD04D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001DD05B; /* jne: not equal / not zero */

loc_001DD056: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001DD05B: ;
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
    if (TEST_Z(esi, esi)) goto loc_001DD0A5; /* je: equal / zero */

loc_001DD083: ;
    if (CMP_B(MEM32(esi + 0x80), 0x64)) goto loc_001DD0A5; /* jb: below (unsigned <) */

loc_001DD08C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DD096: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DD09E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001DD0C6; /* jne: not equal / not zero */

loc_001DD0A5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DD0B7: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DD0BF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DD0D4; /* je: equal / zero */

loc_001DD0C6: ;
    esi = eax;
    PUSH32(esp, 0); sub_001DC2A0(); /* call 0x001DC2A0 */

loc_001DD0CD: ;
    MEM32(0x8496B8) = eax;
    goto loc_001DD0DE;

loc_001DD0D4: ;
    MEM32(0x8496B8) = 0;

loc_001DD0DE: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_001DD0E3: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_001DD0F2: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_001DD100: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001E2410(); return; /* tail jmp 0x001E2410 */

}

/**
 * sub_001DD110
 * Original: 0x001DD110 - 0x001DD159 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD110: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8496B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001DD156; /* je: equal / zero */

loc_001DD11F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x50;
    ebp = eax;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DE820(); /* call 0x001DE820 */

loc_001DD137: ;
    edx = esi;
    PUSH32(esp, 0); sub_001DD910(); /* call 0x001DD910 */

loc_001DD13E: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_001DD143: ;
    PUSH32(esp, ebx);
    edi = eax + 0x10;
    PUSH32(esp, 0); sub_001DFC60(); /* call 0x001DFC60 */

loc_001DD14C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x4C) = 0;
    POP32(esp, ebp);

loc_001DD156: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD160
 * Original: 0x001DD160 - 0x001DD303 (419 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001DD160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    eax = 0x10D4;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_001DD170: ;
    eax = MEM32(0x8496B8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001DD2FC; /* je: equal / zero */

loc_001DD182: ;
    eax = MEM32(0x7737A4);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = eax;
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    MEM32(0x7737A4) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) goto loc_001DD1C1; /* jne: not equal / not zero */

loc_001DD19C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = esp + 0x20;
    MEMF(0x6B99F8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD1B5: ;
    edx = MEM32(esp + 0x2C);
    MEM32(ebp + 0xC) = edx;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD1C1: ;
    (void)0; /* cmp MEM32(esi), ebx - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(MEM32(esi), ebx)) goto loc_001DD2F3; /* jle: less or equal (signed <=) */

loc_001DD1CD: ;
    MEM32(esp + 0x14) = ebx;

loc_001DD1D1: ;
    eax = MEM32(esi + 4);
    esi = MEM32(ebx + eax);
    ebx = ebx + eax;
    if (CMP_LE(esi, 8)) goto loc_001DD1F0; /* jle: less or equal (signed <=) */

loc_001DD1DE: ;
    PUSH32(esp, 0x5F5AF0);
    PUSH32(esp, 0); sub_0046FD42(); /* call 0x0046FD42 */

loc_001DD1E8: ;
    esp = esp + 4;
    goto loc_001DD2D2;

loc_001DD1F0: ;
    edi = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001DB650(); /* call 0x001DB650 */

loc_001DD1F9: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_001DD297; /* je: equal / zero */

loc_001DD204: ;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(esi, 4)) ? 1 : 0); /* sete */
    eax--;
    eax = eax & 0xFFFFFE4;
    eax = eax + 0x1C;
    if (CMP_NE(eax, edi)) goto loc_001DD288; /* jne: not equal / not zero */

loc_001DD219: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + edx);
    esi = MEM32(eax + edx + 4);
    eax = eax + edx;
    if (CMP_EQ(ecx, 4)) goto loc_001DD237; /* je: equal / zero */

loc_001DD231: ;
    eax = MEM32(ebx);
    ecx = 0; /* xor self */
    goto loc_001DD2A9;

loc_001DD237: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 7;
    edi = esp + 0xE0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(esp + 0xFC) = 0;
    MEM8(esp + 0x104) = 0;
    MEMF(esp + 0x100) = xmm0; /* movss */
    MEM32(esp + 0x108) = 0;
    MEM8(esp + 0x110) = 0;
    MEMF(esp + 0x10C) = xmm0; /* movss */
    eax = MEM32(ebx);
    ecx = esp + 0xE0;
    goto loc_001DD2A9;

loc_001DD288: ;
    PUSH32(esp, 0x5F5ACC);
    PUSH32(esp, 0); sub_0046FD42(); /* call 0x0046FD42 */

loc_001DD292: ;
    esp = esp + 4;
    goto loc_001DD2D2;

loc_001DD297: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0x14);
    eax = edx + ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);

loc_001DD2A9: ;
    if (CMP_GE(eax, 8)) goto loc_001DD2D2; /* jge: greater or equal (signed >=) */

loc_001DD2AE: ;
    edx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x875D08), _icall_esp); /* indirect call */
    }

loc_001DD2BA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DD2D2; /* je: equal / zero */

loc_001DD2C1: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(0x8496B8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DC490(); /* call 0x001DC490 */

loc_001DD2D2: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi);
    eax++;
    ebx = ebx + 0xC;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(eax, ecx)) goto loc_001DD1D1; /* jl: less (signed <) */

loc_001DD2F3: ;
    eax = MEM32(esp + 0x1C);
    MEM32(0x7737A4) = eax;

loc_001DD2FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD310
 * Original: 0x001DD310 - 0x001DD368 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD0;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355260(); /* call 0x00355260 */

loc_001DD325: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_001DD35B; /* je: equal / zero */

loc_001DD32D: ;
    eax = 0x5D5174;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DD337: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBF800000u);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8496B8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_001DD35B: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD364: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD370
 * Original: 0x001DD370 - 0x001DD3AA (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) goto loc_001DD3A5; /* je: equal / zero */

loc_001DD387: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355260(); /* call 0x00355260 */

loc_001DD390: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_001DD39C: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD3A5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD3B0
 * Original: 0x001DD3B0 - 0x001DD40A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD0;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00354EF0(); /* call 0x00354EF0 */

loc_001DD3C7: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_001DD3FD; /* je: equal / zero */

loc_001DD3CF: ;
    eax = 0x5D5174;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DD3D9: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBF800000u);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8496B8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_001DD3FD: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD406: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD410
 * Original: 0x001DD410 - 0x001DD44C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) goto loc_001DD447; /* je: equal / zero */

loc_001DD427: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00354EF0(); /* call 0x00354EF0 */

loc_001DD432: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_001DD43E: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD447: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD450
 * Original: 0x001DD450 - 0x001DD48A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) goto loc_001DD485; /* je: equal / zero */

loc_001DD467: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355150(); /* call 0x00355150 */

loc_001DD470: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_001DD47C: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD485: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD490
 * Original: 0x001DD490 - 0x001DD506 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD0;
    eax = MEM32(0x8496B8);
    SET_LO8(ecx, MEM8(eax + 0x60));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001DD4F2; /* jne: not equal / not zero */

loc_001DD4A8: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD4B1: ;
    eax = 0x5D5174;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DD4BB: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBF800000u);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8496B8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_001DD4DF: ;
    edx = MEM32(0x8496B8);
    eax = esp + 0x10;
    MEM8(edx + 0x60) = 1;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD4F2: ;
    PUSH32(esp, 0); sub_001E24F0(); /* call 0x001E24F0 */

loc_001DD4F7: ;
    eax = MEM32(0x8496B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DCC70(); /* call 0x001DCC70 */

loc_001DD502: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD510
 * Original: 0x001DD510 - 0x001DD54F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD510(void)
{
    uint32_t ebp;

loc_001DD510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00354EF0(); /* call 0x00354EF0 */

loc_001DD528: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(0x8496B8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DCEA0(); /* call 0x001DCEA0 */

loc_001DD53D: ;
    esi = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD548: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD550
 * Original: 0x001DD550 - 0x001DD579 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD566: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) { sub_001DD579(); return; } /* je: equal / zero */

loc_001DD570: ;
    eax = esi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DD577: ;
    g_seh_ebp = ebp; sub_001DD57B(); return; /* tail jmp 0x001DD57B */

}

/**
 * sub_001DD5B0
 * Original: 0x001DD5B0 - 0x001DD62F (127 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) goto loc_001DD62A; /* je: equal / zero */

loc_001DD5C7: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD5D0: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_001DD5D8: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD5E1: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD5EA: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD110(); /* call 0x001DD110 */

loc_001DD5F3: ;
    esp = esp + 4;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD5FF: ;
    eax = MEM32(0x8496B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = eax;
    if (TEST_Z(eax, eax)) goto loc_001DD620; /* je: equal / zero */

loc_001DD60A: ;
    PUSH32(esp, 0); sub_001DC340(); /* call 0x001DC340 */

loc_001DD60F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DD61D: ;
    esp = esp + 4;

loc_001DD620: ;
    MEM32(0x8496B8) = 0;

loc_001DD62A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD630
 * Original: 0x001DD630 - 0x001DD66E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001DD658; /* jne: not equal / not zero */

loc_001DD643: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD64C: ;
    esi = MEM32(eax + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD658: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x8496B8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DC490(); /* call 0x001DC490 */

loc_001DD669: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD670
 * Original: 0x001DD670 - 0x001DD6CB (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD670(void)
{
    uint32_t ebp;

loc_001DD670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD686: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(0x8496B8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DCAF0(); /* call 0x001DCAF0 */

loc_001DD69B: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_001DD6A0: ;
    esi = eax;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_001DD6AF: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, 0); sub_001DE040(); /* call 0x001DE040 */

loc_001DD6BD: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD6C6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD6D0
 * Original: 0x001DD6D0 - 0x001DD705 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD6D0(void)
{
    uint32_t ebp;

loc_001DD6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC0;
    eax = esp;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD6E4: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(0x8496B8);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DCAF0(); /* call 0x001DCAF0 */

loc_001DD6F9: ;
    eax = esp;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD701: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD710
 * Original: 0x001DD710 - 0x001DD74F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, esi);
    esi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) goto loc_001DD74A; /* je: equal / zero */

loc_001DD727: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00354EF0(); /* call 0x00354EF0 */

loc_001DD732: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DCAF0(); /* call 0x001DCAF0 */

loc_001DD741: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD74A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD750
 * Original: 0x001DD750 - 0x001DD7BB (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD768: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = 0x10;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DD781: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8496B8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_001DD7A3: ;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    eax = esp + 0x10;
    SET_LO8(ebx, (CMP_NE(MEM32(eax), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD7B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD7C0
 * Original: 0x001DD7C0 - 0x001DD7FA (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD7C0(void)
{
    uint32_t ebp;

loc_001DD7C0: ;
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

loc_001DD7DD: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_001DD7F3: ;
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD800
 * Original: 0x001DD800 - 0x001DD88E (142 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001DD800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_001DD823: ;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DD82C: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    eax = MEM32(ebp + 0xC);
    ecx = 0x10;
    esi = esp + 0x10;
    edi = esp + 0xC0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DD854: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8496B8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_001DD876: ;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    eax = esp + 0x50;
    SET_LO8(ebx, (CMP_NE(MEM32(eax), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DD885: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD890
 * Original: 0x001DD890 - 0x001DD8AE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DD890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    eax = MEM32(edx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(eax, eax)) { sub_001DD8AE(); return; } /* jne: not equal / not zero */

loc_001DD8A7: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD910
 * Original: 0x001DD910 - 0x001DD990 (128 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD910(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD910: ;
    eax = MEM32(edx + 8);
    ecx = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, eax)) goto loc_001DD979; /* je: equal / zero */

loc_001DD91B: ;
    goto loc_001DD920;

    /* nop */

loc_001DD920: ;
    if (CMP_EQ(MEM32(ecx), ebx)) goto loc_001DD92B; /* je: equal / zero */

loc_001DD924: ;
    ecx = ecx + 8;
    if (CMP_NE(ecx, eax)) goto loc_001DD920; /* jne: not equal / not zero */

loc_001DD92B: ;
    if (CMP_EQ(ecx, eax)) goto loc_001DD979; /* je: equal / zero */

loc_001DD92F: ;
    PUSH32(esp, edi);

loc_001DD930: ;
    edi = MEM32(ecx);
    esi = MEM32(eax + -8);
    MEM32(eax + -8) = edi;
    MEM32(ecx) = esi;
    esi = MEM32(eax + -4);
    edi = MEM32(ecx + 4);
    MEM32(eax + -4) = edi;
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 4);
    if (TEST_Z(esi, esi)) goto loc_001DD961; /* je: equal / zero */

loc_001DD94D: ;
    edi = MEM32(edx + 8);
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (TEST_Z(eax, eax)) goto loc_001DD961; /* je: equal / zero */

loc_001DD95B: ;
    edi = edi + 0xFFFFFFF8u;
    MEM32(edx + 8) = edi;

loc_001DD961: ;
    eax = MEM32(edx + 8);
    if (CMP_EQ(ecx, eax)) goto loc_001DD973; /* je: equal / zero */

loc_001DD968: ;
    if (CMP_EQ(MEM32(ecx), ebx)) goto loc_001DD973; /* je: equal / zero */

loc_001DD96C: ;
    ecx = ecx + 8;
    if (CMP_NE(ecx, eax)) goto loc_001DD968; /* jne: not equal / not zero */

loc_001DD973: ;
    if (CMP_NE(ecx, MEM32(edx + 8))) goto loc_001DD930; /* jne: not equal / not zero */

loc_001DD978: ;
    POP32(esp, edi);

loc_001DD979: ;
    eax = MEM32(edx + 8);
    edx = MEM32(edx + 4);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(edx, eax)) goto loc_001DD98F; /* je: equal / zero */

loc_001DD984: ;
    if (CMP_EQ(MEM32(edx), ebx)) goto loc_001DD98F; /* je: equal / zero */

loc_001DD988: ;
    edx = edx + 8;
    if (CMP_NE(edx, eax)) goto loc_001DD984; /* jne: not equal / not zero */

loc_001DD98F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DD990
 * Original: 0x001DD990 - 0x001DDA14 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD990(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD990: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001DDA14(); return; } /* je: equal / zero */

loc_001DD9AB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001DD9BF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DD9F4; /* je: equal / zero */

loc_001DD9CA: ;
    ecx = 0x75DF0C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001DD9D4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001DD9F1: ;
    esp = esp + 0x14;

loc_001DD9F4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001DDA0D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001DDA40
 * Original: 0x001DDA40 - 0x001DDAC4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDA40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DDA40: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001DDAC4(); return; } /* je: equal / zero */

loc_001DDA5B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001DDA6F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DDAA4; /* je: equal / zero */

loc_001DDA7A: ;
    ecx = 0x75DEF4;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001DDA84: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001DDAA1: ;
    esp = esp + 0x14;

loc_001DDAA4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001DDABD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001DDAF0
 * Original: 0x001DDAF0 - 0x001DDB30 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DDAF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F9C0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    edx = MEM32(ebp + 8);
    if (CMP_BE(edx, 0x3FFFFFFF)) goto loc_001DDB23; /* jbe: below or equal (unsigned <=) */

loc_001DDB1E: ;
    PUSH32(esp, 0); sub_001DE0C0(); /* call 0x001DE0C0 */

loc_001DDB23: ;
    ecx = MEM32(esi + 4);
    edi = 0; /* xor self */
    if (CMP_NE(ecx, edi)) { sub_001DDB30(); return; } /* jne: not equal / not zero */

loc_001DDB2C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DDB38(); return; /* tail jmp 0x001DDB38 */

}

/**
 * sub_001DDC00
 * Original: 0x001DDC00 - 0x001DDC0D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDC00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_001DDC0D(); return; } /* jne: not equal / not zero */

loc_001DDC09: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DDC15(); return; /* tail jmp 0x001DDC15 */

}

/**
 * sub_001DDC60
 * Original: 0x001DDC60 - 0x001DDCA1 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DDC60: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    ecx = edi;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_001DDC71: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_001DDC99; /* jne: not equal / not zero */

loc_001DDC7A: ;
    eax = MEM32(edi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_001DDD00(); /* call 0x001DDD00 */

loc_001DDC97: ;
    eax = MEM32(eax);

loc_001DDC99: ;
    eax = eax + 0xC;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001DDCB0
 * Original: 0x001DDCB0 - 0x001DDCD9 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDCB0(void)
{

loc_001DDCB0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DE4B0(); /* call 0x001DE4B0 */

loc_001DDCC0: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_001DDCCE: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDCE0
 * Original: 0x001DDCE0 - 0x001DDCFA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDCE0(void)
{

loc_001DDCE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002502B0(); /* call 0x002502B0 */

loc_001DDCF1: ;
    esp = esp + 0x10;
    eax = edi + esi * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DDD00
 * Original: 0x001DDD00 - 0x001DDF28 (552 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDD00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDD00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    eax = eax >> 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_A(ecx, eax)) goto loc_001DDE69; /* ja: above (unsigned >) */

loc_001DDD15: ;
    edi = MEM32(esi + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = esi + 0x10;
    if (TEST_NZ(edi, edi)) goto loc_001DDD23; /* jne: not equal / not zero */

loc_001DDD1F: ;
    eax = 0; /* xor self */
    goto loc_001DDD2B;

loc_001DDD23: ;
    eax = MEM32(edx + 8);
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_001DDD2B: ;
    eax--;
    if (CMP_A(eax, ecx)) goto loc_001DDD58; /* ja: above (unsigned >) */

loc_001DDD30: ;
    ecx = MEM32(edx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_001DDD3B; /* jne: not equal / not zero */

loc_001DDD37: ;
    eax = 0; /* xor self */
    goto loc_001DDD43;

loc_001DDD3B: ;
    eax = MEM32(edx + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_001DDD43: ;
    ecx = MEM32(esi + 8);
    eax = eax + eax + -3;
    PUSH32(esp, ecx);
    ecx = eax + 2;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0); sub_00068500(); /* call 0x00068500 */

loc_001DDD56: ;
    goto loc_001DDD66;

loc_001DDD58: ;
    eax = MEM32(esi + 0x20);
    if (CMP_AE(eax, ecx)) goto loc_001DDD66; /* jae: above or equal (unsigned >=) */

loc_001DDD5F: ;
    ecx = eax + eax + 1;
    MEM32(esi + 0x20) = ecx;

loc_001DDD66: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    eax = eax >> 1;
    edx = edx - eax;
    edx--;
    ebx = edx * 4;
    edi = MEM32(ebx + ecx);
    eax = ebx + ecx;
    (void)0; /* cmp edi, MEM32(eax + 4) - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(edi, MEM32(eax + 4))) goto loc_001DDE66; /* je: equal / zero */

loc_001DDD8E: ;
    edi = edi;

loc_001DDD90: ;
    eax = MEM32(edi + 8);
    ebp = MEM32(esi + 0x20);
    eax = eax ^ 0xDEADBEEFu;
    eax = eax & ebp;
    if (CMP_NE(eax, edx)) goto loc_001DDDA8; /* jne: not equal / not zero */

loc_001DDDA1: ;
    edi = MEM32(edi);
    goto loc_001DDE4C;

loc_001DDDA8: ;
    ebp = MEM32(edi);
    if (CMP_EQ(ebp, MEM32(esi + 8))) goto loc_001DDE24; /* je: equal / zero */

loc_001DDDAF: ;
    ecx = MEM32(esi + 0x14);
    ecx = ecx + ebx;
    (void)0; /* cmp edi, MEM32(ecx) - flags set for next jcc */
    eax = edx;
    if (CMP_NE(edi, MEM32(ecx))) goto loc_001DDDDA; /* jne: not equal / not zero */

loc_001DDDBA: ;
    /* nop */

loc_001DDDC0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 0x14);
    ecx = ecx + eax * 4;
    MEM32(ecx) = ebp;
    if (TEST_Z(eax, eax)) goto loc_001DDDDA; /* je: equal / zero */

loc_001DDDCC: ;
    ecx = MEM32(esi + 0x14);
    eax--;
    ebx = MEM32(ecx + eax * 4);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ecx = ecx + eax * 4;
    if (CMP_EQ(edi, ebx)) goto loc_001DDDC0; /* je: equal / zero */

loc_001DDDDA: ;
    ebx = MEM32(esi + 8);
    eax = esi + 4;
    if (CMP_EQ(eax, eax)) goto loc_001DDDF1; /* je: equal / zero */

loc_001DDDE4: ;
    ecx = 0; /* xor self */
    edx = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_001DDDED: ;
    edx = MEM32(esp + 0xC);

loc_001DDDF1: ;
    eax = MEM32(edi + 4);
    MEM32(eax) = ebp;
    ecx = MEM32(ebp + 4);
    MEM32(ecx) = ebx;
    eax = MEM32(ebx + 4);
    MEM32(eax) = edi;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + 4);
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(ebp + 4) = ecx;
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(esi + 0x14);
    eax = MEM32(esi + 8);
    edi = MEM32(eax + 4);
    ecx = ebx + ecx * 4 + 4;
    MEM32(ecx) = eax;

loc_001DDE24: ;
    eax = MEM32(esi + 0x24);
    if (CMP_AE(edx, eax)) goto loc_001DDE45; /* jae: above or equal (unsigned >=) */

loc_001DDE2B: ;
    goto loc_001DDE30;

    /* nop */

loc_001DDE30: ;
    ecx = MEM32(esi + 0x14);
    ebx = MEM32(ecx + eax * 4);
    (void)0; /* cmp ebx, MEM32(esi + 8) - flags set for next jcc */
    ecx = ecx + eax * 4;
    if (CMP_NE(ebx, MEM32(esi + 8))) goto loc_001DDE45; /* jne: not equal / not zero */

loc_001DDE3E: ;
    eax--;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ecx) = edi;
    if (CMP_B(edx, eax)) goto loc_001DDE30; /* jb: below (unsigned <) */

loc_001DDE45: ;
    if (CMP_EQ(ebp, MEM32(esi + 8))) goto loc_001DDE66; /* je: equal / zero */

loc_001DDE4A: ;
    edi = ebp;

loc_001DDE4C: ;
    eax = MEM32(esi + 0x14);
    ebx = edx * 4;
    ecx = MEM32(ebx + eax + 4);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    eax = ebx + eax + 4;
    if (CMP_NE(edi, ecx)) goto loc_001DDD90; /* jne: not equal / not zero */

loc_001DDE66: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_001DDE69: ;
    ebp = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    ecx = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x24);
    eax = edx;
    eax = eax ^ 0xDEADBEEFu;
    eax = eax & ecx;
    if (CMP_A(edi, eax)) goto loc_001DDE8C; /* ja: above (unsigned >) */

loc_001DDE83: ;
    ecx = ecx >> 1;
    edi = edi | 0xFFFFFFFFu;
    edi = edi - ecx;
    eax = eax + edi;

loc_001DDE8C: ;
    ecx = MEM32(esi + 0x14);
    ebx = eax * 4;
    edi = MEM32(ecx + ebx + 4);
    MEM32(esp + 0x18) = eax;
    eax = ecx + ebx;
    if (CMP_EQ(edi, MEM32(eax))) goto loc_001DDEB9; /* je: equal / zero */

loc_001DDEA5: ;
    edi = MEM32(edi + 4);
    if (CMP_BE(MEM32(edi + 8), edx)) { sub_001DDF28(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DDEAD: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + ebx);
    eax = eax + ebx;
    if (CMP_NE(edi, ecx)) goto loc_001DDEA5; /* jne: not equal / not zero */

loc_001DDEB9: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001DE640(); /* call 0x001DE640 */

loc_001DDEC4: ;
    ecx = 1;
    edx = esi + 4;
    ebp = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_001DDED3: ;
    MEM32(edi + 4) = ebp;
    eax = MEM32(ebp + 4);
    MEM32(eax) = ebp;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + ebx);
    ecx = MEM32(edi + 4);
    eax = eax + ebx;
    if (CMP_NE(edi, edx)) goto loc_001DDF17; /* jne: not equal / not zero */

loc_001DDEEA: ;
    /* nop */

loc_001DDEF0: ;
    eax = MEM32(esi + 0x14);
    eax = eax + ebx;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001DDF17; /* je: equal / zero */

loc_001DDEFF: ;
    eax--;
    MEM32(esp + 0x18) = eax;
    ebx = eax * 4;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + ebx);
    eax = eax + ebx;
    if (CMP_EQ(edi, edx)) goto loc_001DDEF0; /* je: equal / zero */

loc_001DDF17: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DDF40
 * Original: 0x001DDF40 - 0x001DDF98 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDF40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(edi, ecx)) { sub_001DDF98(); return; } /* jne: not equal / not zero */

loc_001DDF5B: ;
    if (CMP_NE(ebx, eax)) { sub_001DDF98(); return; } /* jne: not equal / not zero */

loc_001DDF5F: ;
    edi = esi + 4;
    PUSH32(esp, 0); sub_001DDFC0(); /* call 0x001DDFC0 */

loc_001DDF67: ;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 9);
    edx = esi + 0x10;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001DE460(); /* call 0x001DE460 */

loc_001DDF7C: ;
    ecx = MEM32(esi + 8);
    eax = 1;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DDFC0
 * Original: 0x001DDFC0 - 0x001DE03C (124 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDFC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DDFC0: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    (void)0; /* cmp esi, MEM32(edi + 4) - flags set for next jcc */
    MEM32(edi + 8) = 0;
    if (CMP_EQ(esi, MEM32(edi + 4))) goto loc_001DE03A; /* je: equal / zero */

loc_001DDFDA: ;
    PUSH32(esp, ebx);
    goto loc_001DDFE0;

    /* nop */

loc_001DDFE0: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001DE000; /* je: equal / zero */

loc_001DDFE9: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DE000; /* jne: not equal / not zero */

loc_001DDFF6: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DE000; /* je: equal / zero */

loc_001DDFFA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DE000: ;
    PUSH32(esp, esi);
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001DE00D: ;
    if (TEST_NZ(eax, eax)) goto loc_001DE032; /* jne: not equal / not zero */

loc_001DE011: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001DE02F: ;
    esp = esp + 4;

loc_001DE032: ;
    (void)0; /* cmp ebx, MEM32(edi + 4) - flags set for next jcc */
    esi = ebx;
    if (CMP_NE(ebx, MEM32(edi + 4))) goto loc_001DDFE0; /* jne: not equal / not zero */

loc_001DE039: ;
    POP32(esp, ebx);

loc_001DE03A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE040
 * Original: 0x001DE040 - 0x001DE04D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE040: ;
    eax = MEM32(edx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_001DE04D(); return; } /* jne: not equal / not zero */

loc_001DE049: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DE055(); return; /* tail jmp 0x001DE055 */

}

/**
 * sub_001DE0C0
 * Original: 0x001DE0C0 - 0x001DE130 (112 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE0C0(void)
{

loc_001DE0C0: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x12);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x5D12EC);
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = 0xF;
    MEM32(esp + 0x20) = ebx;
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_001DE0E6: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_001DE0EF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x2C) = 0x5AC69C;
    MEM32(esp + 0x50) = 0xF;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_001DE118: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_001DE12F: ;
    POP32(esp, ebx);

}

/**
 * sub_001DE130
 * Original: 0x001DE130 - 0x001DE166 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DE130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FBB0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    MEM32(ebp + -28) = ecx;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_001DE166(); return; } /* jne: not equal / not zero */

loc_001DE162: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DE173(); return; /* tail jmp 0x001DE173 */

}

/**
 * sub_001DE3F0
 * Original: 0x001DE3F0 - 0x001DE452 (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE3F0: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 8);
    ebx = eax;
    eax = MEM32(esi + 0x20);
    ecx = ecx ^ 0xDEADBEEFu;
    ecx = ecx & eax;
    if (CMP_A(edx, ecx)) goto loc_001DE417; /* ja: above (unsigned >) */

loc_001DE40E: ;
    eax = eax >> 1;
    edx = edx | 0xFFFFFFFFu;
    edx = edx - eax;
    ecx = ecx + edx;

loc_001DE417: ;
    eax = MEM32(esi + 0x14);
    edx = ecx;
    ecx = ecx << 2;
    if (CMP_NE(edi, MEM32(ecx + eax))) goto loc_001DE441; /* jne: not equal / not zero */

loc_001DE424: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ebp = MEM32(ecx + eax);
    ebp = MEM32(ebp);
    MEM32(ecx + eax) = ebp;
    if (TEST_Z(edx, edx)) goto loc_001DE441; /* je: equal / zero */

loc_001DE431: ;
    eax = MEM32(esi + 0x14);
    edx--;
    ecx = edx * 4;
    if (CMP_EQ(edi, MEM32(ecx + eax))) goto loc_001DE424; /* je: equal / zero */

loc_001DE441: ;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, 0); sub_001DE590(); /* call 0x001DE590 */

loc_001DE44A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DE460
 * Original: 0x001DE460 - 0x001DE4A9 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE460(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DE460: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(esi, eax)) goto loc_001DE492; /* je: equal / zero */

loc_001DE472: ;
    (void)0; /* cmp eax, eax - flags set for next jcc */
    ecx = eax;
    if (CMP_EQ(eax, eax)) goto loc_001DE48F; /* je: equal / zero */

loc_001DE478: ;
    PUSH32(esp, edi);
    /* nop */

loc_001DE480: ;
    edi = MEM32(ecx);
    MEM32(esi) = edi;
    ecx = ecx + 4;
    esi = esi + 4;
    if (CMP_NE(ecx, eax)) goto loc_001DE480; /* jne: not equal / not zero */

loc_001DE48E: ;
    POP32(esp, edi);

loc_001DE48F: ;
    MEM32(edx + 8) = esi;

loc_001DE492: ;
    eax = MEM32(edx + 4);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00068580(); /* call 0x00068580 */

loc_001DE4A4: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DE4B0
 * Original: 0x001DE4B0 - 0x001DE52A (122 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DE4B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F650);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001DE4E4: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_001DE510; /* je: equal / zero */

loc_001DE4F8: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = edx;
    ecx = eax + 8;
    MEM32(ebp + -32) = ecx;
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx);
    MEM32(ecx) = edx;

loc_001DE510: ;
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
 * sub_001DE550
 * Original: 0x001DE550 - 0x001DE587 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE550: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(edi, ecx)) goto loc_001DE581; /* je: equal / zero */

loc_001DE55D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    edx = edi;
    if (CMP_EQ(ecx, esi)) goto loc_001DE57D; /* je: equal / zero */

loc_001DE567: ;
    PUSH32(esp, ebp);

loc_001DE568: ;
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    ecx = ecx + 8;
    edx = edx + 8;
    if (CMP_NE(ecx, esi)) goto loc_001DE568; /* jne: not equal / not zero */

loc_001DE57C: ;
    POP32(esp, ebp);

loc_001DE57D: ;
    MEM32(ebx + 8) = edx;
    POP32(esp, esi);

loc_001DE581: ;
    MEM32(eax) = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DE590
 * Original: 0x001DE590 - 0x001DE5F4 (100 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE590: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ebp = MEM32(esi);
    if (CMP_EQ(esi, eax)) goto loc_001DE5EB; /* je: equal / zero */

loc_001DE59F: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001DE5CC; /* je: equal / zero */

loc_001DE5B5: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DE5CC; /* jne: not equal / not zero */

loc_001DE5C2: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DE5CC; /* je: equal / zero */

loc_001DE5C6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DE5CC: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = 0;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DE5E1: ;
    eax = MEM32(edi + 8);
    esp = esp + 4;
    eax--;
    MEM32(edi + 8) = eax;

loc_001DE5EB: ;
    POP32(esp, esi);
    MEM32(ebx) = ebp;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DE600
 * Original: 0x001DE600 - 0x001DE631 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE600: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(edi, ecx)) goto loc_001DE62B; /* je: equal / zero */

loc_001DE60D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    edx = edi;
    if (CMP_EQ(ecx, esi)) goto loc_001DE627; /* je: equal / zero */

loc_001DE617: ;
    PUSH32(esp, ebp);

loc_001DE618: ;
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ecx = ecx + 4;
    edx = edx + 4;
    if (CMP_NE(ecx, esi)) goto loc_001DE618; /* jne: not equal / not zero */

loc_001DE626: ;
    POP32(esp, ebp);

loc_001DE627: ;
    MEM32(ebx + 8) = edx;
    POP32(esp, esi);

loc_001DE62B: ;
    MEM32(eax) = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DE640
 * Original: 0x001DE640 - 0x001DE6B7 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DE640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F640);
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
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001DE674: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DE69B; /* je: equal / zero */

loc_001DE68A: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_001DE6E0(); /* call 0x001DE6E0 */

loc_001DE69B: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
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
 * sub_001DE6E0
 * Original: 0x001DE6E0 - 0x001DE6FE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE6E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DE6E0: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001DE6FB; /* je: equal / zero */

loc_001DE6F8: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_001DE6FB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DE700
 * Original: 0x001DE700 - 0x001DE7F1 (241 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001DE700: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001DE70E; /* jne: not equal / not zero */

loc_001DE709: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001DE70E: ;
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
    if (TEST_Z(esi, esi)) goto loc_001DE758; /* je: equal / zero */

loc_001DE736: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_001DE758; /* jb: below (unsigned <) */

loc_001DE73F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DE749: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DE751: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001DE779; /* jne: not equal / not zero */

loc_001DE758: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001DE76A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001DE772: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DE79E; /* je: equal / zero */

loc_001DE779: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(eax) = 0;
    ecx = MEM32(edi + 0xC);
    if (CMP_EQ(ecx, edi)) goto loc_001DE7C8; /* je: equal / zero */

loc_001DE78C: ;
    esi = MEM32(edi + 0x14);
    /* nop */

loc_001DE790: ;
    edx = esi;
    edx--;
    if ((edx == 0)) goto loc_001DE7B7; /* je: equal / zero */

loc_001DE795: ;
    edx--;
    if ((edx != 0)) goto loc_001DE7C1; /* jne: not equal / not zero */

loc_001DE798: ;
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    goto loc_001DE7BF;

loc_001DE79E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_001DE7AF: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001DE7B7: ;
    xmm1 = MEMF(ecx + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_001DE7BF: ;
    if ((xmm1 > xmm0)) { sub_001DE7F1(); return; } /* ja: above (unsigned >) */

loc_001DE7C1: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(ecx, edi)) goto loc_001DE790; /* jne: not equal / not zero */

loc_001DE7C8: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0; /* movss */
    edx = MEM32(edi + 8);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    MEM32(edi + 8) = eax;
    MEM32(eax + 0xC) = edi;
    eax = MEM32(edi + 0x10);
    eax++;
    POP32(esp, esi);
    MEM32(edi + 0x10) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DE820
 * Original: 0x001DE820 - 0x001DE8F3 (211 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE820: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    esp = esp - 0xC;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_001DE847; /* je: equal / zero */

loc_001DE838: ;
    edx = MEM32(esp + 0x20);
    if (CMP_EQ(MEM32(eax), edx)) goto loc_001DE847; /* je: equal / zero */

loc_001DE840: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_001DE838; /* jne: not equal / not zero */

loc_001DE847: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(eax, ecx)) goto loc_001DE8EA; /* je: equal / zero */

loc_001DE851: ;
    PUSH32(esp, edi);

loc_001DE852: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(ebp);
    MEM32(esp + 0x28) = eax;
    ecx = esp + 0x28;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_001DE869: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + 0xC);
    if (TEST_Z(esi, esi)) goto loc_001DE877; /* je: equal / zero */

loc_001DE874: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DE877: ;
    edi = MEM32(ebp);
    ecx = esp + 0x28;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0037D940(); /* call 0x0037D940 */

loc_001DE887: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, ecx)) goto loc_001DE89B; /* je: equal / zero */

loc_001DE895: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_001DE895; /* jne: not equal / not zero */

loc_001DE89B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_001DDF40(); /* call 0x001DDF40 */

loc_001DE8A9: ;
    if (TEST_Z(esi, esi)) goto loc_001DE8C2; /* je: equal / zero */

loc_001DE8AD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DE8C2; /* jne: not equal / not zero */

loc_001DE8BA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DE8C2: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 8);
    eax = ebx + 8;
    if (CMP_EQ(eax, ecx)) goto loc_001DE8DF; /* je: equal / zero */

loc_001DE8D0: ;
    edx = MEM32(esp + 0x24);
    if (CMP_EQ(MEM32(eax), edx)) goto loc_001DE8DF; /* je: equal / zero */

loc_001DE8D8: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_001DE8D0; /* jne: not equal / not zero */

loc_001DE8DF: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = eax;
    if (CMP_NE(eax, ecx)) goto loc_001DE852; /* jne: not equal / not zero */

loc_001DE8E9: ;
    POP32(esp, edi);

loc_001DE8EA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DE900
 * Original: 0x001DE900 - 0x001DE955 (85 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE900: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_EQ(edi, ecx)) goto loc_001DE952; /* je: equal / zero */

loc_001DE911: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_001DE913: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DE947; /* je: equal / zero */

loc_001DE917: ;
    esi = MEM32(edi + 0xC);
    if (TEST_Z(esi, esi)) goto loc_001DE921; /* je: equal / zero */

loc_001DE91E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DE921: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_001DE928: ;
    ecx = MEM32(esi + 4);
    ecx--;
    SET_LO8(ebx, LO8(eax));
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DE93F; /* jne: not equal / not zero */

loc_001DE937: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DE93F: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001DE947; /* je: equal / zero */

loc_001DE943: ;
    SET_LO8(eax, 1);
    goto loc_001DE949;

loc_001DE947: ;
    SET_LO8(eax, 0); /* xor self */

loc_001DE949: ;
    edi = MEM32(edi);
    if (CMP_NE(edi, MEM32(ebp + 8))) goto loc_001DE913; /* jne: not equal / not zero */

loc_001DE950: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001DE952: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE960
 * Original: 0x001DE960 - 0x001DE9B1 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DE960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00354EF0(); /* call 0x00354EF0 */

loc_001DE978: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8496B8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DCA70(); /* call 0x001DCA70 */

loc_001DE99B: ;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    eax = esp + 0x10;
    SET_LO8(ebx, (CMP_NE(MEM32(eax), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DE9AA: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE9C0
 * Original: 0x001DE9C0 - 0x001DE9E9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE9C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DE9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003551E0(); /* call 0x003551E0 */

loc_001DE9D6: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) { sub_001DE9E9(); return; } /* je: equal / zero */

loc_001DE9E0: ;
    eax = esi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DE9E7: ;
    g_seh_ebp = ebp; sub_001DE9EB(); return; /* tail jmp 0x001DE9EB */

}

/**
 * sub_001DEA20
 * Original: 0x001DEA20 - 0x001DEA49 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEA20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DEA20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003550C0(); /* call 0x003550C0 */

loc_001DEA36: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(0x8496B8);
    if (TEST_Z(esi, esi)) { sub_001DEA49(); return; } /* je: equal / zero */

loc_001DEA40: ;
    eax = esi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001DEA47: ;
    g_seh_ebp = ebp; sub_001DEA4B(); return; /* tail jmp 0x001DEA4B */

}

/**
 * sub_001DEA80
 * Original: 0x001DEA80 - 0x001DEA9B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEA80(void)
{

loc_001DEA80: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00264FA0(); /* call 0x00264FA0 */

loc_001DEA95: ;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DEAA0
 * Original: 0x001DEAA0 - 0x001DEAB6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEAA0(void)
{

loc_001DEAA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0037C360(); /* call 0x0037C360 */

loc_001DEAB0: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DEAC0
 * Original: 0x001DEAC0 - 0x001DEADB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEAC0(void)
{

loc_001DEAC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00250710(); /* call 0x00250710 */

loc_001DEAD5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DEAE0
 * Original: 0x001DEAE0 - 0x001DEB28 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DEAE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, esi)) goto loc_001DEB1F; /* je: equal / zero */

loc_001DEAE8: ;
    PUSH32(esp, edi);

loc_001DEAE9: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    edx = edi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DEB0B: ;
    ecx = MEM32(esi + 0x10);
    esp = esp + 4;
    ecx--;
    eax = edi;
    MEM32(esi + 0x10) = ecx;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, esi)) goto loc_001DEAE9; /* jne: not equal / not zero */

loc_001DEB1E: ;
    POP32(esp, edi);

loc_001DEB1F: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DEB30
 * Original: 0x001DEB30 - 0x001DEB81 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001DEB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F190);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_001DEB60: ;
    if (CMP_BE(ecx & ecx, 0)) { sub_001DEB81(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DEB64: ;
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_001DEB75; /* je: equal / zero */

loc_001DEB6B: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;

loc_001DEB75: ;
    ecx--;
    MEM32(ebp + 0xC) = ecx;
    eax = eax + 8;
    MEM32(ebp + 8) = eax;
    goto loc_001DEB60;

}

/**
 * sub_001DEBB0
 * Original: 0x001DEBB0 - 0x001DEBE2 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DEBB0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_001DEBE0; /* je: equal / zero */

loc_001DEBB7: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001DEBD3; /* je: equal / zero */

loc_001DEBBD: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DEBD3; /* jne: not equal / not zero */

loc_001DEBC9: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DEBD3; /* je: equal / zero */

loc_001DEBCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DEBD3: ;
    MEM32(esi) = 0;
    esi = esi + 4;
    if (CMP_NE(esi, edi)) goto loc_001DEBB7; /* jne: not equal / not zero */

loc_001DEBE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DEBF0
 * Original: 0x001DEBF0 - 0x001DEC13 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEBF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DEBF0: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001DEC0C; /* je: equal / zero */

loc_001DEBF6: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DEC0C; /* jne: not equal / not zero */

loc_001DEC02: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DEC0C; /* je: equal / zero */

loc_001DEC06: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DEC0C: ;
    MEM32(esi) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001DEC20
 * Original: 0x001DEC20 - 0x001DEC69 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001DEC20: ;
    MEM32(0x8496B0) = MEM32(0x8496B0) + 1;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5F5BC8;
    MEM32(esi + 8) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001DEC41; /* je: equal / zero */

loc_001DEC3E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_001DEC41: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_001DEC64; /* je: equal / zero */

loc_001DEC51: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_001DEC64; /* jne: not equal / not zero */

loc_001DEC5E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DEC64: ;
    eax = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DEC70
 * Original: 0x001DEC70 - 0x001DECB2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DEC70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x110);
    edi = ecx;
    PUSH32(esp, 0); sub_001DD990(); /* call 0x001DD990 */

loc_001DEC7E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001DECB2(); return; } /* je: equal / zero */

loc_001DEC85: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = esp;
    MEM32(edx) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001DEC9A; /* je: equal / zero */

loc_001DEC97: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_001DEC9A: ;
    edx = MEM32(esp + 0x1C);
    esi = eax;
    PUSH32(esp, 0); sub_001DBC30(); /* call 0x001DBC30 */

loc_001DECA5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DECC0
 * Original: 0x001DECC0 - 0x001DECC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DECC0(void)
{

loc_001DECC0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001DECD0
 * Original: 0x001DECD0 - 0x001DED30 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DECD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DECD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F5BC8;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_001DECF7; /* je: equal / zero */

loc_001DECE0: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_001DECF7; /* jne: not equal / not zero */

loc_001DECED: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DECF7; /* je: equal / zero */

loc_001DECF1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DECF7: ;
    ecx = MEM32(0x8496B0);
    SET_LO8(eax, MEM8(esp + 8));
    ecx--;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0x5F5AA0;
    MEM32(0x8496B0) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_001DED2A; /* je: equal / zero */

loc_001DED19: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DED27: ;
    esp = esp + 4;

loc_001DED2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DED30
 * Original: 0x001DED30 - 0x001DEDA6 (118 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DED30(void)
{
    float xmm0;

loc_001DED30: ;
    eax = 0; /* xor self */
    MEM32(ebx + 0x10) = eax;
    PUSH32(esp, esi);
    MEM32(ebx) = 0x5F5A80;
    MEM32(ebx + 0x14) = eax;
    PUSH32(esp, edi);
    eax = ebx + 0x20;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001DED48: ;
    eax = MEM32(0x8496B4);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x648D14); /* movss */
    eax++;
    MEM32(0x8496B4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ebx + 0xF8) = ecx;
    MEM32(ebx + 0xF4) = eax;
    edi = ebx + 0x100;
    ecx = 0x10;
    MEM8(ebx + 0xE0) = 1;
    MEM32(ebx + 0xE4) = 0xF0;
    MEM32(ebx) = 0x5F5BA8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    MEMF(ebx + 0x140) = xmm0; /* movss */
    eax = ebx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DEDB0
 * Original: 0x001DEDB0 - 0x001DEF30 (384 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEDB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001DEDB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    /* comiss xmm0, MEMF(edi + 0x140) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x140))) goto loc_001DEE5D; /* jbe: below or equal (unsigned <=) */

loc_001DEDD6: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm1 = MEMF(edi + 0x140); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_001DEDF7; /* jbe: below or equal (unsigned <=) */

loc_001DEDF4: ;
    xmm1 = xmm2; /* movaps */

loc_001DEDF7: ;
    xmm0 = MEMF(edi + 0x144); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(edi + 0x140) = xmm1; /* movss */
    xmm1 = MEMF(0x648D54); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001DEE1B; /* jbe: below or equal (unsigned <=) */

loc_001DEE18: ;
    xmm0 = xmm1; /* movaps */

loc_001DEE1B: ;
    eax = MEM32(edi + 0xF4);
    MEMF(eax + 0x24) = xmm0; /* movss */
    eax = MEM32(edi + 0xF4);
    xmm0 = MEMF(eax + 0x24); /* movss */
    ecx = eax + 0x28;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    ecx = MEM32(esp + 0x1C);
    xmm1 = MEMF(ecx); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movups */

loc_001DEE5D: ;
    eax = MEM32(edi + 0xF4);
    xmm0 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    MEMF(eax + 0x28) = xmm2; /* movss */
    MEMF(eax + 0x2C) = xmm2; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm2; /* movss */
    eax = MEM32(edi + 0x84);
    if (TEST_Z(eax, eax)) goto loc_001DEF27; /* je: equal / zero */

loc_001DEE92: ;
    ecx = MEM32(edi + 0xF8);
    ebx = edi + 0x20;
    PUSH32(esp, ecx);
    esi = esp + 0x34;
    edx = ebx;
    PUSH32(esp, 0); sub_00355350(); /* call 0x00355350 */

loc_001DEEA7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001DEEE8; /* je: equal / zero */

loc_001DEEAB: ;
    edx = esi;
    PUSH32(esp, edx);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001DEEBD: ;
    eax = MEM32(edi + 0xF4);
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    eax = eax + 0xC;
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    goto loc_001DEF17;

loc_001DEEE8: ;
    eax = MEM32(ebx + 0x60);
    edx = ebx + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001DEEFA: ;
    edx = MEM32(edi + 0xF4);
    eax = MEM32(esp + 0x24);
    edx = edx + 0xC;
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 8) = eax;

loc_001DEF17: ;
    esi = MEM32(edi + 0xF4);
    PUSH32(esp, 0x870EEC);
    PUSH32(esp, 0); sub_001213A0(); /* call 0x001213A0 */

loc_001DEF27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DEF80
 * Original: 0x001DEF80 - 0x001DEFD7 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEF80(void)
{
    uint32_t ebp;
    float xmm0;

loc_001DEF80: ;
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

loc_001DEF9A: ;
    esi = eax;
    edi = ebx + 0x20;
    ecx = 0x30;
    eax = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DEFAF: ;
    eax = MEM32(ebx + 0xF4);
    xmm0 = MEMF(0x649AB4); /* movss */
    MEMF(ebx + 0x140) = xmm0; /* movss */
    ecx = MEM32(eax + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x144) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DEFE0
 * Original: 0x001DEFE0 - 0x001DF03D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DEFE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0xF4);
    edx = ebx;
    MEM32(esi) = 0x5F5BA8;
    PUSH32(esp, 0); sub_00123F50(); /* call 0x00123F50 */

loc_001DEFF7: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001DF005; /* je: equal / zero */

loc_001DF003: ;
    MEM32(eax) = ecx;

loc_001DF005: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_001DF017: ;
    ecx = esi;
    PUSH32(esp, 0); sub_001DB710(); /* call 0x001DB710 */

loc_001DF01E: ;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_001DF036; /* je: equal / zero */

loc_001DF025: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DF033: ;
    esp = esp + 4;

loc_001DF036: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF040
 * Original: 0x001DF040 - 0x001DF058 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF040: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(eax, esi)) { sub_001DF058(); return; } /* jne: not equal / not zero */

loc_001DF053: ;
    esi = esi | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_001DF078(); return; /* tail jmp 0x001DF078 */

}

/**
 * sub_001DF0F0
 * Original: 0x001DF0F0 - 0x001DF0F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF0F0(void)
{

loc_001DF0F0: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    esp += 4; return; /* ret */

}

/**
 * sub_001DF100
 * Original: 0x001DF100 - 0x001DF150 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF100(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF100: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    edi = ecx;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DF114; /* je: equal / zero */

loc_001DF111: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DF114: ;
    ecx = edi;
    PUSH32(esp, 0); sub_001DB760(); /* call 0x001DB760 */

loc_001DF11B: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(edi + 0xF0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DF12D; /* je: equal / zero */

loc_001DF12A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_001DF12D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_001DF132: ;
    if (TEST_Z(esi, esi)) goto loc_001DF14B; /* je: equal / zero */

loc_001DF136: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_001DF14B; /* jne: not equal / not zero */

loc_001DF143: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001DF14B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF180
 * Original: 0x001DF180 - 0x001DF1C5 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF180(void)
{
    uint32_t ebp;

loc_001DF180: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xF0);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_001DF19F: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003552E0(); /* call 0x003552E0 */

loc_001DF1A8: ;
    esi = eax;
    edi = edi + 0x20;
    ecx = 0x30;
    eax = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_001DF1BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF1D0
 * Original: 0x001DF1D0 - 0x001DF225 (85 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF1D0(void)
{
    float xmm0;

loc_001DF1D0: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x5F5A80;
    MEM32(esi + 0x14) = eax;
    eax = esi + 0x20;
    PUSH32(esp, 0); sub_00354FC0(); /* call 0x00354FC0 */

loc_001DF1E6: ;
    eax = MEM32(0x8496B4);
    xmm0 = MEMF(esp + 8); /* movss */
    eax++;
    MEM32(0x8496B4) = eax;
    eax = MEM32(esp + 4);
    MEM8(esi + 0xE0) = 1;
    MEM32(esi + 0xE4) = 0xF0;
    MEM32(esi + 0xF0) = eax;
    MEM32(esi) = 0x5F5B6C;
    MEMF(esi + 0x100) = xmm0; /* movss */
    eax = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001DF230
 * Original: 0x001DF230 - 0x001DF254 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF230(void)
{
    float xmm0;

loc_001DF230: ;
    eax = ecx;
    ecx = MEM32(eax + 0xF0);
    xmm0 = MEMF(eax + 0x100); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001DF251: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF260
 * Original: 0x001DF260 - 0x001DF29E (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF260(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF260: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5F5B30;
    if (TEST_Z(ecx, ecx)) goto loc_001DF279; /* je: equal / zero */

loc_001DF273: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001DF279: ;
    ecx = esi;
    PUSH32(esp, 0); sub_001DB710(); /* call 0x001DB710 */

loc_001DF280: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001DF298; /* je: equal / zero */

loc_001DF287: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DF295: ;
    esp = esp + 4;

loc_001DF298: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF2A0
 * Original: 0x001DF2A0 - 0x001DF2DD (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF2A0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    if (TEST_Z(eax, eax)) { sub_001DF2DD(); return; } /* je: equal / zero */

loc_001DF2B4: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x8496B8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DCEA0(); /* call 0x001DCEA0 */

loc_001DF2C4: ;
    if (CMP_L(eax, MEM32(edi + 0x20))) { sub_001DF2DD(); return; } /* jl: less (signed <) */

loc_001DF2C9: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DF4F0
 * Original: 0x001DF4F0 - 0x001DF4F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF4F0(void)
{

loc_001DF4F0: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_001DF500
 * Original: 0x001DF500 - 0x001DF535 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF500(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF500: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8496B0);
    ecx--;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esi) = 0x5F5AA0;
    MEM32(0x8496B0) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_001DF52F; /* je: equal / zero */

loc_001DF51E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DF52C: ;
    esp = esp + 4;

loc_001DF52F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF540
 * Original: 0x001DF540 - 0x001DF5D4 (148 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF540: ;
    edx = MEM32(0x8496B0);
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(ebp + 4) = esi;
    edx++;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x130);
    MEM32(ebp) = 0x5F5B14;
    MEM32(0x8496B0) = edx;
    ecx = edi;
    edx = MEM32(ecx);
    eax = ebp + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esp + 0x134);
    if (CMP_EQ(MEM32(0x6B9A00), eax)) { sub_001DF5D4(); return; } /* je: equal / zero */

loc_001DF5A1: ;
    MEM32(0x6B9A00) = eax;
    eax = MEM32(0x85E408);
    if (CMP_EQ(eax, esi)) goto loc_001DF5C0; /* je: equal / zero */

loc_001DF5AF: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DF5BD: ;
    esp = esp + 4;

loc_001DF5C0: ;
    MEM32(0x85E408) = esi;
    MEM32(0x85E40C) = esi;
    MEM32(0x85E410) = esi;
    g_seh_ebp = ebp; sub_001DF5DA(); return; /* tail jmp 0x001DF5DA */

}

/**
 * sub_001DF700
 * Original: 0x001DF700 - 0x001DF764 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF700(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF700: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esi) = 0x5F5B14;
    MEM32(0x6B9A00) = 0xFFFFFFFFu;
    if (TEST_Z(ebx, ebx)) goto loc_001DF751; /* je: equal / zero */

loc_001DF718: ;
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_001DF725: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001DF750; /* je: equal / zero */

loc_001DF72B: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001DF736; /* je: equal / zero */

loc_001DF732: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_001DF736: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_001DF750; /* jne: not equal / not zero */

loc_001DF73D: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_001DF746: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_001DF750: ;
    POP32(esp, edi);

loc_001DF751: ;
    eax = MEM32(0x8496B0);
    eax--;
    MEM32(esi) = 0x5F5AA0;
    MEM32(0x8496B0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF770
 * Original: 0x001DF770 - 0x001DF774 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF770(void)
{

loc_001DF770: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF780
 * Original: 0x001DF780 - 0x001DF784 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF780(void)
{

loc_001DF780: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_001DF790
 * Original: 0x001DF790 - 0x001DF7BA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF790(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_001DF700(); /* call 0x001DF700 */

loc_001DF798: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001DF7B4; /* je: equal / zero */

loc_001DF79F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001DF7B4; /* je: equal / zero */

loc_001DF7A7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001DF7B1: ;
    esp = esp + 4;

loc_001DF7B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DF7C0
 * Original: 0x001DF7C0 - 0x001DF80A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF7C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF7C0: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0); sub_001DDA40(); /* call 0x001DDA40 */

loc_001DF7CA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001DF80A(); return; } /* je: equal / zero */

loc_001DF7D1: ;
    ecx = MEM32(0x8496B0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx++;
    PUSH32(esp, edi);
    MEM32(0x8496B0) = ecx;
    MEM32(eax + 4) = 0;
    edi = eax + 0x10;
    ecx = 0x24;
    MEM32(eax) = 0x5F5B8C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x7737A4);
    POP32(esp, edi);
    MEM32(eax + 0xA0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF810
 * Original: 0x001DF810 - 0x001DF848 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF810: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0); sub_001DDA40(); /* call 0x001DDA40 */

loc_001DF81A: ;
    ebx = MEM32(esp + 0x14);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001DF848(); return; } /* je: equal / zero */

loc_001DF825: ;
    MEM32(0x8496B0) = MEM32(0x8496B0) + 1;
    MEM32(eax + 4) = 0;
    edi = eax + 8;
    ecx = 0xD;
    esi = ebx;
    MEM32(eax) = 0x5F5B50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax;
    g_seh_ebp = ebp; sub_001DF84A(); return; /* tail jmp 0x001DF84A */

}

/**
 * sub_001DF8A0
 * Original: 0x001DF8A0 - 0x001DF8BF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF8A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DF8A0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_001DDA40(); /* call 0x001DDA40 */

loc_001DF8A7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001DF8BF(); return; } /* je: equal / zero */

loc_001DF8AE: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DF540(); /* call 0x001DF540 */

loc_001DF8BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DF8D0
 * Original: 0x001DF8D0 - 0x001DF932 (98 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF8D0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(edi, eax)) { sub_001DF932(); return; } /* je: equal / zero */

loc_001DF8E2: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_001DF8E8: ;
    ecx = MEM32(edi);
    esi = eax;
    /* nop */

loc_001DF8F0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_001DF914; /* jne: not equal / not zero */

loc_001DF8F8: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001DF910; /* je: equal / zero */

loc_001DF8FC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_001DF914; /* jne: not equal / not zero */

loc_001DF906: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001DF8F0; /* jne: not equal / not zero */

loc_001DF910: ;
    ecx = 0; /* xor self */
    goto loc_001DF919;

loc_001DF914: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_001DF919: ;
    if (TEST_Z(ecx, ecx)) goto loc_001DF928; /* je: equal / zero */

loc_001DF91D: ;
    ecx = MEM32(esp + 0x1C);
    edi = edi + 4;
    if (CMP_NE(edi, ecx)) goto loc_001DF8E8; /* jne: not equal / not zero */

loc_001DF928: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ebp) = edi;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF940
 * Original: 0x001DF940 - 0x001DFAAC (364 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF940: ;
    esp = esp - 0x214;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x224);
    eax = MEM32(edi + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    esi = edi + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001DFA94; /* je: equal / zero */

loc_001DF961: ;
    if (CMP_LE(eax & eax, 0)) goto loc_001DFA94; /* jle: less or equal (signed <=) */

loc_001DF967: ;
    ecx = edi + 0x34;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebp);

loc_001DF974: ;
    edx = MEM32(esi);
    if (TEST_Z(edx, edx)) goto loc_001DFA75; /* je: equal / zero */

loc_001DF97E: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x40);
    ebx = esp + 0x128;
    PUSH32(esp, ebx);
    ebx = esp + 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    ebx = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F9AB0(); /* call 0x003F9AB0 */

loc_001DF9A9: ;
    edx = eax;
    ecx = 0; /* xor self */
    esp = esp + 0x1C;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(edx & edx, 0)) goto loc_001DFA75; /* jle: less or equal (signed <=) */

loc_001DF9C0: ;
    ebx = MEM32(esp + ecx * 4 + 0x24);
    ebp = MEM32(esi);
    ebp = MEM32(ebp + 4);
    edi = esp + ecx * 4 + 0x24;
    ebx = ebx << 2;
    ebp = MEM32(ebx + ebp);
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(ebp), eax)) goto loc_001DFA61; /* jle: less or equal (signed <=) */

loc_001DF9DE: ;
    edi = MEM32(edi);
    ecx = 0; /* xor self */

loc_001DF9E2: ;
    edx = MEM32(esi);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + edi * 4);
    edx = MEM32(edx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edx + ecx + 0x1C) = xmm0; /* movss */
    edx = MEM32(esi);
    ebp = MEM32(edx + 4);
    ebp = MEM32(ebp + edi * 4);
    ebp = MEM32(ebp + 4);
    if (CMP_EQ(MEM32(ecx + ebp + 0x44), 0)) goto loc_001DFA47; /* je: equal / zero */

loc_001DFA09: ;
    edx = MEM32(edx + 4);
    edx = MEM32(edx + edi * 4);
    edx = MEM32(edx + 4);
    ebp = MEM32(esp + 0x1C);
    ebp = MEM32(ebp + 8);
    xmm1 = MEMF(ebp + 0x10); /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm2 = (float)(int32_t)MEM32(edx + ecx + 0x48); /* cvtsi2ss */
    edx = edx + ecx;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 / xmm2; /* divss */
    MEMF(edx + 0xC) = xmm1; /* movss */

loc_001DFA47: ;
    edx = MEM32(esi);
    edx = MEM32(edx + 4);
    edx = MEM32(ebx + edx);
    ebp = MEM32(edx);
    eax++;
    ecx = ecx + 0x78;
    if (CMP_L(eax, ebp)) goto loc_001DF9E2; /* jl: less (signed <) */

loc_001DFA59: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);

loc_001DFA61: ;
    ecx++;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(ecx, edx)) goto loc_001DF9C0; /* jl: less (signed <) */

loc_001DFA6E: ;
    edi = MEM32(esp + 0x22C);

loc_001DFA75: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    edx = edx + 4;
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001DF974; /* jne: not equal / not zero */

loc_001DFA92: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001DFA94: ;
    eax = MEM32(esp + 0x220);
    POP32(esp, edi);
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp = esp + 0x214;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DFAB0
 * Original: 0x001DFAB0 - 0x001DFAD9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFAB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DFAB0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_001DDA40(); /* call 0x001DDA40 */

loc_001DFAB7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_001DFAD9(); return; } /* je: equal / zero */

loc_001DFABE: ;
    MEM32(0x8496B0) = MEM32(0x8496B0) + 1;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x5F5BE4;
    esp += 4; return; /* ret */

}

/**
 * sub_001DFAE0
 * Original: 0x001DFAE0 - 0x001DFAE7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFAE0(void)
{

loc_001DFAE0: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001DFAF0
 * Original: 0x001DFAF0 - 0x001DFAF7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFAF0(void)
{

loc_001DFAF0: ;
    eax = MEM32(ecx + 8);
    SET_LO8(eax, MEM8(eax + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_001DFB00
 * Original: 0x001DFB00 - 0x001DFBAC (172 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFB00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFB00: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001DFBA8; /* jle: less or equal (signed <=) */

loc_001DFB10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = esi + 0x10;
    ebp = esi + 0x20;
    goto loc_001DFB20;

    /* nop */

loc_001DFB20: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0xA4);
    if (CMP_EQ(ecx, MEM32(ebp))) goto loc_001DFB49; /* je: equal / zero */

loc_001DFB2F: ;
    edx = MEM32(esi + 0x30);
    edx--;
    MEM32(esi + 0x30) = edx;
    ecx = edx;
    edx = MEM32(esi + ecx * 4);
    MEM32(esi + edi * 4) = edx;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + ecx * 4 + 0x10);
    MEM32(ebx) = edx;
    goto loc_001DFB8D;

loc_001DFB49: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(esi + edi * 4) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + edi * 4))) goto loc_001DFB94; /* jb: below (unsigned <) */

loc_001DFB55: ;
    xmm0 = MEMF(esi + edi * 4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x14))) goto loc_001DFB75; /* jb: below (unsigned <) */

loc_001DFB61: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_001DFB70: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);

loc_001DFB75: ;
    edx = MEM32(esi + 0x30);
    edx--;
    MEM32(esi + 0x30) = edx;
    ecx = edx;
    ecx = MEM32(esi + ecx * 4);
    MEM32(esi + edi * 4) = ecx;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + edx * 4 + 0x10);
    MEM32(ebx) = ecx;

loc_001DFB8D: ;
    ebp = ebp - 4;
    edi--;
    ebx = ebx - 4;

loc_001DFB94: ;
    ecx = MEM32(esi + 0x30);
    edi++;
    ebp = ebp + 4;
    ebx = ebx + 4;
    if (CMP_L(edi, ecx)) goto loc_001DFB20; /* jl: less (signed <) */

loc_001DFBA6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001DFBA8: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001DFBB0
 * Original: 0x001DFBB0 - 0x001DFBFB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFBB0(void)
{

loc_001DFBB0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_001DFBBB: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x10);
    edi = eax;
    eax = MEM32(esp + 0x1C);
    esi = edi + 0x10;
    edx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_001DFC00(); /* call 0x001DFC00 */

loc_001DFBDC: ;
    edx = MEM32(ebx + 0x10);
    MEM32(esp + 0xC) = edx;
    edx = esp + 0xC;
    esi = edi;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_001DFC00(); /* call 0x001DFC00 */

loc_001DFBF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001DFC00
 * Original: 0x001DFC00 - 0x001DFC0D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_001DFC0D(); return; } /* jne: not equal / not zero */

loc_001DFC09: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_001DFC15(); return; /* tail jmp 0x001DFC15 */

}

/**
 * sub_001DFC60
 * Original: 0x001DFC60 - 0x001DFCB7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFC60: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_001DFC7B; /* je: equal / zero */

loc_001DFC70: ;
    if (CMP_EQ(MEM32(eax), ebp)) goto loc_001DFC7B; /* je: equal / zero */

loc_001DFC74: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_001DFC70; /* jne: not equal / not zero */

loc_001DFC7B: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(eax, ecx)) goto loc_001DFCB2; /* je: equal / zero */

loc_001DFC81: ;
    PUSH32(esp, ebx);

loc_001DFC82: ;
    ebx = MEM32(esi + 4);
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_001DFC8A: ;
    edx = eax;
    PUSH32(esp, 0); sub_001DD910(); /* call 0x001DD910 */

loc_001DFC91: ;
    ecx = MEM32(edi + 8);
    eax = esi + 8;
    if (CMP_EQ(eax, ecx)) goto loc_001DFCAB; /* je: equal / zero */

loc_001DFC9B: ;
    goto loc_001DFCA0;

    /* nop */

loc_001DFCA0: ;
    if (CMP_EQ(MEM32(eax), ebp)) goto loc_001DFCAB; /* je: equal / zero */

loc_001DFCA4: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_001DFCA0; /* jne: not equal / not zero */

loc_001DFCAB: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    esi = eax;
    if (CMP_NE(eax, ecx)) goto loc_001DFC82; /* jne: not equal / not zero */

loc_001DFCB1: ;
    POP32(esp, ebx);

loc_001DFCB2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001DFCC0
 * Original: 0x001DFCC0 - 0x001DFCF0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFCC0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFCC0: ;
    esp = esp - 0x38;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    fp_push(MEMF(esi + 4)); /* fld float */
    MEMF(esp + 0x18) = xmm1; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D80)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_001DFCF0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001DFCE3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_001DFCFB(); return; /* tail jmp 0x001DFCFB */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001DFE30
 * Original: 0x001DFE30 - 0x001DFE3C (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFE30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DFE30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) { sub_001DFE3C(); return; } /* jne: not equal / not zero */

loc_001DFE38: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DFEC0
 * Original: 0x001DFEC0 - 0x001DFEF4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFEC0(void)
{

loc_001DFEC0: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = esp + 8;
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_001DFED4: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 4) = ecx;
    esp = esp + 4;
    MEM32(edx + 8) = eax;
    eax = edi;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001DFF00
 * Original: 0x001DFF00 - 0x001DFF5F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001DFF00: ;
    esp = esp - 8;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001DFF48; /* je: equal / zero */

loc_001DFF17: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001DFF48; /* je: equal / zero */

loc_001DFF1E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001DFF2C: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001DFF42; /* je: equal / zero */

loc_001DFF33: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_001DFF4D; /* je: equal / zero */

loc_001DFF3B: ;
    eax = MEM32(eax + 8);
    if (TEST_NZ(eax, eax)) goto loc_001DFF51; /* jne: not equal / not zero */

loc_001DFF42: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_001DFF48: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DFF4D: ;
    eax = MEM32(esp + 8);

loc_001DFF51: ;
    if (TEST_Z(eax, eax)) goto loc_001DFF42; /* je: equal / zero */

loc_001DFF55: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001DFF60
 * Original: 0x001DFF60 - 0x001DFF88 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF60(void)
{
    float xmm0;

loc_001DFF60: ;
    xmm0 = MEMF(0x648E98); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    MEMF(eax) = xmm0; /* movss */
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = 0x7D00;
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xC) = 0x7000;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DFF90
 * Original: 0x001DFF90 - 0x001DFFF8 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DFF90: ;
    PUSH32(esp, ecx);
    xmm1 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax--;
    MEM32(ebx) = eax;
    eax = 0; /* xor self */
    MEM32(ebx + 0x160C) = eax;
    MEM8(ebx + 0x1610) = LO8(eax);
    MEMF(ebx + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ebx + 0x16A8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001E0040(); /* call 0x001E0040 */

loc_001DFFD0: ;
    esi = MEM32(ebx);
    esi++;
    ecx = esi + esi * 4;
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001DFFDF: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) { sub_001DFFF8(); return; } /* je: equal / zero */

loc_001DFFE8: ;
    PUSH32(esp, 0x1DFF60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_001DFFF6: ;
    g_seh_ebp = ebp; sub_001DFFFA(); return; /* tail jmp 0x001DFFFA */

}

/**
 * sub_001E0040
 * Original: 0x001E0040 - 0x001E008E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0040(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E0040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2220(); /* call 0x003E2220 */

loc_001E004A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001E008B; /* je: equal / zero */

loc_001E0051: ;
    PUSH32(esp, edi);
    edi = ebx + 0x1660;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001E2230(); /* call 0x001E2230 */

loc_001E0060: ;
    ecx = MEM32(esi);
    eax = ebx + 0x16A8;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    esp = esp + 4;
    esi = ebx + 0x1620;
    eax = edi;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_001E008A: ;
    POP32(esp, edi);

loc_001E008B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E0090
 * Original: 0x001E0090 - 0x001E0107 (119 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0090: ;
    ecx = MEM32(esi + 0x160C);
    SET_LO8(edx, MEM8(esi + 0x1610));
    esp = esp - 0xC;
    ecx++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    MEM8(ecx + esi) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x1610));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_001E0107(); return; } /* je: equal / zero */

loc_001E00B0: ;
    ecx = esi + 0x1620;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001E00C2: ;
    eax = MEM32(esi + 0x160C);
    edx = MEM32(esp);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = eax + esi + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x160C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = ecx + esi + 0x20;
    eax = esi + 0x16A8;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    g_seh_ebp = ebp; sub_001E014A(); return; /* tail jmp 0x001E014A */

}

/**
 * sub_001E0190
 * Original: 0x001E0190 - 0x001E0264 (212 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E0190: ;
    esp = esp - 0x44;
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    eax++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0x160C) = ecx;
    MEM32(esp) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_001E0260; /* jle: less or equal (signed <=) */

loc_001E01A9: ;
    xmm0 = MEMF(0x648E98); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM16(esp + 0x18) = LO16(ecx);
    MEM16(esp + 0x1A) = 0x7D00;
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM16(esp + 0x20) = 0x7000;
    ebx = 0; /* xor self */
    goto loc_001E01E0;

    /* nop */

loc_001E01E0: ;
    eax = MEM32(edx + 0x16A0);
    eax = eax + ebx;
    esi = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edx + 0x16A4);
    if (CMP_EQ(eax, ecx)) goto loc_001E0246; /* je: equal / zero */

loc_001E0214: ;
    MEM16(esp + 0x2C) = LO16(ecx);
    MEM16(esp + 0x30) = LO16(ecx);
    MEM32(esp + 0x38) = ecx;
    edi = eax + ebp;
    ecx = 0xB;
    esi = esp + 0x28;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM16(esp + 0x2E) = 0x7D00;
    MEM16(esp + 0x34) = 0x7000;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0; /* xor self */

loc_001E0246: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(edx);
    eax++;
    ebx = ebx + 0x14;
    ebp = ebp + 0x2C;
    esi++;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, esi)) goto loc_001E01E0; /* jl: less (signed <) */

loc_001E025C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001E0260: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_001E0270
 * Original: 0x001E0270 - 0x001E02B3 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0270(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E0270: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8496C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(eax, eax)) goto loc_001E02A6; /* je: equal / zero */

loc_001E027D: ;
    eax = MEM32(eax + 0x16A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001E0289: ;
    ecx = MEM32(esi + 0x16A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001E0295: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001E02A3: ;
    esp = esp + 0xC;

loc_001E02A6: ;
    MEM32(0x8496C8) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E02C0
 * Original: 0x001E02C0 - 0x001E04C2 (514 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E02C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E02C0: ;
    eax = MEM32(0x84A5F8);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + 0x36C;
    ebx = ebp;
    PUSH32(esp, 0); sub_001E0040(); /* call 0x001E0040 */

loc_001E02DC: ;
    eax = MEM32(ebp + 0x160C);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    MEM32(0x775E90) = ebx;
    if (CMP_LE(eax, 0x20)) goto loc_001E033E; /* jle: less or equal (signed <=) */

loc_001E02EF: ;
    edi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_001E031D; /* jle: less or equal (signed <=) */

loc_001E02F5: ;
    esi = ebp + 0x10;
    goto loc_001E0300;

    /* nop */

loc_001E0300: ;
    eax = esi + 0x24;
    ecx = esi;
    PUSH32(esp, 0); sub_001E0DB0(); /* call 0x001E0DB0 */

loc_001E030A: ;
    MEMF(esi + 0x20) = xmm0; /* movss */
    eax = MEM32(ebp + 0x160C);
    edi++;
    esi = esi + 0x2C;
    if (CMP_L(edi, eax)) goto loc_001E0300; /* jl: less (signed <) */

loc_001E031D: ;
    eax = MEM32(ebp + 0x160C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = eax + ebp + 0xC;
    PUSH32(esp, ecx);
    edx = ebp + 0x58C;
    PUSH32(esp, edx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E25C0(); /* call 0x001E25C0 */

loc_001E033B: ;
    esp = esp + 0xC;

loc_001E033E: ;
    eax = MEM32(ebp + 0x160C);
    if (CMP_LE(eax, 0x20)) goto loc_001E034E; /* jle: less or equal (signed <=) */

loc_001E0349: ;
    eax = 0x20;

loc_001E034E: ;
    if (CMP_LE(eax, ebx)) { sub_001E04C2(); return; } /* jle: less or equal (signed <=) */

loc_001E0356: ;
    esi = ebp + 0x10;
    MEM32(esp + 0x34) = eax;
    ebx = 0x7FFF;

loc_001E0362: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = esp + 0x28;
    PUSH32(esp, 0); sub_001E0E20(); /* call 0x001E0E20 */

loc_001E0370: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    xmm0 = MEMF(0x648FD0); /* movss */
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + -4);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001E044D; /* je: equal / zero */

loc_001E0389: ;
    SET_LO16(edx, MEM16(esi + 0xC));
    MEM16(eax + 0xC) = LO16(edx);
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 4) = LO16(ecx);
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 6) = LO16(edx);
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 8) = LO16(ecx);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM16(eax + 0xC) = MEM16(eax + 0xC) & LO16(ebx);
    ecx = eax + 0x20;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_001DFCC0(); /* call 0x001DFCC0 */

loc_001E03ED: ;
    xmm2 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_001E0499;

loc_001E044D: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    MEM16(eax + 0xC) = LO16(ecx);
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 4) = LO16(edx);
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 6) = LO16(ecx);
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 8) = LO16(edx);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM16(eax + 0xC) = MEM16(eax + 0xC) & LO16(ebx);
    MEMF(eax) = xmm0; /* movss */

loc_001E0499: ;
    eax = MEM32(esp + 0x34);
    esi = esi + 0x2C;
    eax--;
    MEM32(esp + 0x34) = eax;
    if ((eax != 0)) goto loc_001E0362; /* jne: not equal / not zero */

loc_001E04AB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(ebp + 0x160C) = eax;
    POP32(esp, ebp);
    MEM32(0x775E90) = eax;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}
