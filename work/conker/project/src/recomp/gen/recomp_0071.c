/**
 * Burnout 3 - Recompiled code chunk 71
 * Functions: 163 (0x0055AA28 - 0x00560FA8)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0055AA28
 * Original: 0x0055AA28 - 0x0055AA78 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AA28(void)
{

loc_0055AA28: ;
    edx = ZX8(MEM8(ecx + 0x79));
    eax = MEM32(ecx + 0xE0);
    edx = edx << 5;
    PUSH32(esp, esi);
    esi = eax + edx + 1;
    SET_LO8(eax, MEM8(esi));
    MEM8(ecx + 0x79) = LO8(eax);
    MEM8(esi) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 2) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 3) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM32(eax + edx + 0x1C) = MEM32(eax + edx + 0x1C) & 0;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 7) = 0xFF;
    eax = MEM32(ecx + 0xE0);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AA78
 * Original: 0x0055AA78 - 0x0055AAAA (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AA78(void)
{

loc_0055AA78: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE0);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edx = ZX8(LO8(eax));
    edx = edx << 5;
    MEM8(edx + ecx) = 0xFF;
    SET_LO8(ebx, MEM8(esi + 0x79));
    ecx = MEM32(esi + 0xE0);
    MEM8(edx + ecx + 1) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AAAA
 * Original: 0x0055AAAA - 0x0055AABE (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAAA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055AAAA: ;
    SET_LO8(eax, MEM8(ecx + 1));
    if (CMP_EQ(LO8(eax), 0x80)) { sub_0055AABE(); return; } /* je: equal / zero */

loc_0055AAB1: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + MEM32(0x762BD8);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAC1
 * Original: 0x0055AAC1 - 0x0055AAD5 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAC1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055AAC1: ;
    SET_LO8(eax, MEM8(ecx + 2));
    if (CMP_EQ(LO8(eax), 0x80)) { sub_0055AAD5(); return; } /* je: equal / zero */

loc_0055AAC8: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + MEM32(0x762BD8);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAD8
 * Original: 0x0055AAD8 - 0x0055AAEC (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAD8(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055AAD8: ;
    SET_LO8(eax, MEM8(ecx + 3));
    if (CMP_EQ(LO8(eax), 0x80)) { sub_0055AAEC(); return; } /* je: equal / zero */

loc_0055AADF: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + MEM32(0x762BD8);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAEF
 * Original: 0x0055AAEF - 0x0055ABB3 (196 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAEF(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0055AAEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x762AF8;
    PUSH32(esp, 0); sub_0055AA28(); /* call 0x0055AA28 */

loc_0055AAFE: ;
    esi = eax;
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0055ABAD; /* je: equal / zero */

loc_0055AB0A: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi) = 0xFE;
    MEM8(esi + 4) = LO8(eax);
    MEM32(esi + 0x10) = ebx;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0); sub_0055BB06(); /* call 0x0055BB06 */

loc_0055AB25: ;
    (void)0; /* cmp MEM8(0x762AF8), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0x14));
    if (CMP_EQ(MEM8(0x762AF8), LO8(ebx))) goto loc_0055AB68; /* je: equal / zero */

loc_0055AB31: ;
    edi = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 5) = LO8(eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0055AB3E: ;
    MEM32(edi) = MEM32(edi) + 0xF4240;
    MEM32(esi + 0x10) = ebx;
    MEM32(edi + 4) = MEM32(edi + 4) + ebx + _cf; /* adc */
    eax = MEM32(0x762B74);
    if (CMP_NE(eax, ebx)) goto loc_0055AB5E; /* jne: not equal / not zero */

loc_0055AB53: ;
    MEM32(0x762B74) = esi;
    goto loc_0055ABAD;

loc_0055AB5B: ;
    eax = MEM32(eax + 0x10);

loc_0055AB5E: ;
    if (CMP_NE(MEM32(eax + 0x10), ebx)) goto loc_0055AB5B; /* jne: not equal / not zero */

loc_0055AB63: ;
    MEM32(eax + 0x10) = esi;
    goto loc_0055ABAD;

loc_0055AB68: ;
    MEM8(esi) = 0xFD;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    MEM8(0x762AFA) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    MEM8(0x762AF8) = 1;
    MEM8(0x762AF9) = LO8(ebx);
    MEM32(0x762B78) = esi;
    MEM8(0x762AFB) = 0x80;
    MEM8(esi + 5) = LO8(ebx);
    PUSH32(esp, 0x762B48);
    MEM8(0x762B70) = LO8(ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_0055ABAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055ABB3
 * Original: 0x0055ABB3 - 0x0055ABD5 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ABB3(void)
{

loc_0055ABB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x762B48);
    MEM8(0x762B70) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_0055ABD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055AC51
 * Original: 0x0055AC51 - 0x0055AC74 (35 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC51(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055AC51: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(edx));

loc_0055AC5A: ;
    esi = ZX8(LO8(ebx));
    if (TEST_Z(MEM32(ecx + esi * 4 + 8), edx)) { sub_0055AC74(); return; } /* je: equal / zero */

loc_0055AC63: ;
    edx = edx << 1;
    if ((edx != 0)) goto loc_0055AC6C; /* jne: not equal / not zero */

loc_0055AC67: ;
    edx = 0; /* xor self */
    SET_LO8(ebx, LO8(ebx) + 1);
    edx++;

loc_0055AC6C: ;
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_B(LO8(eax), 0x80)) goto loc_0055AC5A; /* jb: below (unsigned <) */

loc_0055AC72: ;
    g_seh_ebp = ebp; sub_0055AC7D(); return; /* tail jmp 0x0055AC7D */

}

/**
 * sub_0055AC82
 * Original: 0x0055AC82 - 0x0055ACB6 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC82(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055AC82: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(edx, LO8(edx) - 1);
    (void)0; /* cmp LO8(edx), 0x1F - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_BE(LO8(edx), 0x1F)) goto loc_0055ACA1; /* jbe: below or equal (unsigned <=) */

loc_0055AC8D: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) - 0x20);
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) + 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(eax));

loc_0055AC9B: ;
    SET_LO8(edx, LO8(edx) + 0xE0);
    eax--;
    if ((eax != 0)) goto loc_0055AC9B; /* jne: not equal / not zero */

loc_0055ACA1: ;
    eax = ZX8(LO8(ebx));
    esi = 0; /* xor self */
    eax = ecx + eax * 4 + 8;
    esi++;
    SET_LO8(ecx, LO8(edx));
    esi = esi << LO8(ecx);
    esi = ~esi;
    MEM32(eax) = MEM32(eax) & esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ACB6
 * Original: 0x0055ACB6 - 0x0055ACBD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACB6(void)
{

loc_0055ACB6: ;
    MEM32(0x762BDC) = MEM32(0x762BDC) + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0055ACBD
 * Original: 0x0055ACBD - 0x0055ACC4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACBD(void)
{

loc_0055ACBD: ;
    MEM32(0x762BDC) = MEM32(0x762BDC) - 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0055ACC4
 * Original: 0x0055ACC4 - 0x0055ACD9 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACC4(void)
{

loc_0055ACC4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -20);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0055AAEF(); /* call 0x0055AAEF */

loc_0055ACD6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055ACD9
 * Original: 0x0055ACD9 - 0x0055ACFB (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACD9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055ACD9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x762B78);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    edi = edi + 0x18;
    if (CMP_EQ(MEM8(0x762AF9), LO8(ebx))) { sub_0055ACFB(); return; } /* je: equal / zero */

loc_0055ACF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055B03A(); /* call 0x0055B03A */

loc_0055ACF9: ;
    g_seh_ebp = ebp; sub_0055AD37(); return; /* tail jmp 0x0055AD37 */

}

/**
 * sub_0055AD3B
 * Original: 0x0055AD3B - 0x0055AD40 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD3B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055AD3B: ;
    g_seh_ebp = ebp; sub_0055ABD5(); return; /* tail jmp 0x0055ABD5 */

}

/**
 * sub_0055AD40
 * Original: 0x0055AD40 - 0x0055ADB6 (118 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055AD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 7));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0055AD67; /* je: equal / zero */

loc_0055AD4C: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0055AD67; /* je: equal / zero */

loc_0055AD5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055A4B4(); /* call 0x0055A4B4 */

loc_0055AD67: ;
    (void)0; /* cmp MEM8(esi), 5 - flags set for next jcc */
    ebx = 0x762AF8;
    if (CMP_NE(MEM8(esi), 5)) goto loc_0055AD9B; /* jne: not equal / not zero */

loc_0055AD71: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055AD78: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0055BB4E(); /* call 0x0055BB4E */

loc_0055AD82: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0055ADAA; /* jne: not equal / not zero */

loc_0055AD86: ;
    SET_LO8(edx, MEM8(edi + 5));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_0055AC82(); /* call 0x0055AC82 */

loc_0055AD91: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055AA78(); /* call 0x0055AA78 */

loc_0055AD99: ;
    goto loc_0055ADAA;

loc_0055AD9B: ;
    SET_LO8(edx, MEM8(esi + 5));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0055ADAA; /* je: equal / zero */

loc_0055ADA2: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_0055AC82(); /* call 0x0055AC82 */

loc_0055ADAA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055AA78(); /* call 0x0055AA78 */

loc_0055ADB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ADB6
 * Original: 0x0055ADB6 - 0x0055AE08 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ADB6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055ADB6: ;
    ecx = MEM32(esp + 4);
    (void)0; /* cmp MEM8(ecx), 4 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(MEM8(ecx), 4)) goto loc_0055ADF2; /* jne: not equal / not zero */

loc_0055ADC0: ;
    PUSH32(esp, 0); sub_0055AAC1(); /* call 0x0055AAC1 */

loc_0055ADC5: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0055AE04; /* je: equal / zero */

loc_0055ADCB: ;
    PUSH32(esp, edi);

loc_0055ADCC: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055AAD8(); /* call 0x0055AAD8 */

loc_0055ADD3: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0055ADE2; /* je: equal / zero */

loc_0055ADDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0055ADE0: ;
    goto loc_0055ADE9;

loc_0055ADE2: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055AD40(); /* call 0x0055AD40 */

loc_0055ADE9: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0055ADCC; /* jne: not equal / not zero */

loc_0055ADEF: ;
    POP32(esp, edi);
    goto loc_0055AE04;

loc_0055ADF2: ;
    eax = MEM32(ecx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0055ADFF; /* je: equal / zero */

loc_0055ADF9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0055ADFD: ;
    goto loc_0055AE04;

loc_0055ADFF: ;
    PUSH32(esp, 0); sub_0055AD40(); /* call 0x0055AD40 */

loc_0055AE04: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AE08
 * Original: 0x0055AE08 - 0x0055AE3D (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AE08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055AE08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(0x762AF9), LO8(ebx))) goto loc_0055AE20; /* je: equal / zero */

loc_0055AE18: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0055ADB6(); /* call 0x0055ADB6 */

loc_0055AE20: ;
    eax = MEM32(0x762B74);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x762AF9) = LO8(ebx);
    if (CMP_NE(eax, ebx)) { sub_0055AE3D(); return; } /* jne: not equal / not zero */

loc_0055AE2F: ;
    MEM32(0x762B78) = ebx;
    MEM8(0x762AF8) = LO8(ebx);
    g_seh_ebp = ebp; sub_0055AEB2(); return; /* tail jmp 0x0055AEB2 */

}

/**
 * sub_0055AEB7
 * Original: 0x0055AEB7 - 0x0055AF2E (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AEB7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055AEB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    PUSH32(esp, 0); sub_0055BAD5(); /* call 0x0055BAD5 */

loc_0055AEC4: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0055AF29; /* je: equal / zero */

loc_0055AECA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0055BB4E(); /* call 0x0055BB4E */

loc_0055AED2: ;
    if (CMP_NE(MEM8(esi), 0xFE)) goto loc_0055AF09; /* jne: not equal / not zero */

loc_0055AED7: ;
    eax = MEM32(0x762B74);
    if (CMP_NE(eax, esi)) goto loc_0055AEED; /* jne: not equal / not zero */

loc_0055AEE0: ;
    eax = MEM32(esi + 0x10);
    MEM32(0x762B74) = eax;
    goto loc_0055AEF8;

loc_0055AEEA: ;
    eax = MEM32(eax + 0x10);

loc_0055AEED: ;
    if (CMP_NE(esi, MEM32(eax + 0x10))) goto loc_0055AEEA; /* jne: not equal / not zero */

loc_0055AEF2: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_0055AEF8: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    PUSH32(esp, esi);
    ecx = 0x762AF8;
    PUSH32(esp, 0); sub_0055AA78(); /* call 0x0055AA78 */

loc_0055AF07: ;
    goto loc_0055AF29;

loc_0055AF09: ;
    if (CMP_EQ(MEM8(0x762AF8), 0)) goto loc_0055AF23; /* je: equal / zero */

loc_0055AF12: ;
    if (CMP_NE(MEM32(0x762B78), esi)) goto loc_0055AF23; /* jne: not equal / not zero */

loc_0055AF1A: ;
    MEM8(0x762AF9) = 1;
    goto loc_0055AF29;

loc_0055AF23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055ADB6(); /* call 0x0055ADB6 */

loc_0055AF29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AF2E
 * Original: 0x0055AF2E - 0x0055AF42 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AF2E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055AF2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(ecx), 5 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(ecx), 5)) { sub_0055AF42(); return; } /* jne: not equal / not zero */

loc_0055AF39: ;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055AF3E: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0055AF44(); return; /* tail jmp 0x0055AF44 */

}

/**
 * sub_0055AF73
 * Original: 0x0055AF73 - 0x0055AFF4 (129 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AF73(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055AF73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp MEM8(0x762AF9), 0 - flags set for next jcc */
    esi = ecx;
    MEM8(ebp + -4) = LO8(ebx);
    MEM8(0x762AFB) = 0xA;
    if (CMP_NE(MEM8(0x762AF9), 0)) goto loc_0055AFB5; /* jne: not equal / not zero */

loc_0055AF93: ;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055AF98: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0055BB4E(); /* call 0x0055BB4E */

loc_0055AFA2: ;
    SET_LO8(eax, MEM8(0x762AFA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0055AFB5; /* je: equal / zero */

loc_0055AFAB: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(ebp + -4) = LO8(eax);

loc_0055AFB5: ;
    SET_LO8(edx, MEM8(esi + 5));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0055AFC4; /* je: equal / zero */

loc_0055AFBC: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_0055AC82(); /* call 0x0055AC82 */

loc_0055AFC4: ;
    PUSH32(esp, esi);
    ecx = 0x762AF8;
    PUSH32(esp, 0); sub_0055AA78(); /* call 0x0055AA78 */

loc_0055AFCF: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0055AFE0; /* je: equal / zero */

loc_0055AFD3: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_0055AAEF(); /* call 0x0055AAEF */

loc_0055AFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM8(0x762AF9) = 0;
    PUSH32(esp, 0); sub_0055AE08(); /* call 0x0055AE08 */

loc_0055AFEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AFF4
 * Original: 0x0055AFF4 - 0x0055B007 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AFF4(void)
{

loc_0055AFF4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + -20);
    PUSH32(esp, 0); sub_0055AEB7(); /* call 0x0055AEB7 */

loc_0055B004: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B007
 * Original: 0x0055B007 - 0x0055B03A (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B007(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055B007: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(esp + 4), eax - flags set for next jcc */
    MEM8(0x762AFB) = 9;
    if (CMP_GE(MEM32(esp + 4), eax)) goto loc_0055B025; /* jge: greater or equal (signed >=) */

loc_0055B01A: ;
    if (CMP_NE(MEM8(0x762AF9), LO8(eax))) goto loc_0055B02D; /* jne: not equal / not zero */

loc_0055B022: ;
    MEM8(ecx + 5) = LO8(eax);

loc_0055B025: ;
    if (CMP_EQ(MEM8(0x762AF9), LO8(eax))) goto loc_0055B032; /* je: equal / zero */

loc_0055B02D: ;
    MEM8(0x762AFA) = LO8(eax);

loc_0055B032: ;
    PUSH32(esp, 0); sub_0055AF73(); /* call 0x0055AF73 */

loc_0055B037: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B03A
 * Original: 0x0055B03A - 0x0055B093 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B03A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B03A: ;
    (void)0; /* cmp MEM8(0x762AF9), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(0x762AFB) = 8;
    if (CMP_NE(MEM8(0x762AF9), 0)) { sub_0055B093(); return; } /* jne: not equal / not zero */

loc_0055B04B: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055B056: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0055B07C; /* jne: not equal / not zero */

loc_0055B05B: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    eax = eax & 0x7F;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055E0F6(); /* call 0x0055E0F6 */

loc_0055B070: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_0055B007(); /* call 0x0055B007 */

loc_0055B07A: ;
    g_seh_ebp = ebp; sub_0055B0A3(); return; /* tail jmp 0x0055B0A3 */

loc_0055B07C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055D69F(); /* call 0x0055D69F */

loc_0055B091: ;
    g_seh_ebp = ebp; sub_0055B0A3(); return; /* tail jmp 0x0055B0A3 */

}

/**
 * sub_0055B0A7
 * Original: 0x0055B0A7 - 0x0055B10C (101 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B0A7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055B0A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B48);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055B0B2: ;
    eax = MEM32(esp + 4);
    MEM8(0x762AFB) = 3;
    if (CMP_L(MEM32(eax + 4), 0)) goto loc_0055B0D6; /* jl: less (signed <) */

loc_0055B0C3: ;
    (void)0; /* cmp MEM8(0x762AF9), 0 - flags set for next jcc */
    MEM32(0x762B04) = 0x55AC26;
    if (CMP_EQ(MEM8(0x762AF9), 0)) goto loc_0055B0E0; /* je: equal / zero */

loc_0055B0D6: ;
    MEM32(0x762B04) = 0x55B03A;

loc_0055B0E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM8(0x762AFC) = 0x1C;
    MEM8(0x762AFD) = 0x43;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x762AFC);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055E6D3(); /* call 0x0055E6D3 */

loc_0055B104: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B10C
 * Original: 0x0055B10C - 0x0055B13C (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B10C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055B10C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    ecx++;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM8(0x762AFB) = 7;
    if (CMP_GE(MEM32(ebp + 8), ebx)) { sub_0055B13C(); return; } /* jge: greater or equal (signed >=) */

loc_0055B12B: ;
    if (CMP_NE(MEM32(ebp + 8), 0x80000400u)) goto loc_0055B137; /* jne: not equal / not zero */

loc_0055B134: ;
    MEM32(ebp + -4) = ebx;

loc_0055B137: ;
    MEM32(esi + 0x10) = ebx;
    g_seh_ebp = ebp; sub_0055B15D(); return; /* tail jmp 0x0055B15D */

}

/**
 * sub_0055B298
 * Original: 0x0055B298 - 0x0055B2BC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B298(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B298: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0055BD4B(); /* call 0x0055BD4B */

loc_0055B2A0: ;
    if (CMP_EQ(MEM32(esi + 0x14), 0x20)) { sub_0055B2BC(); return; } /* je: equal / zero */

loc_0055B2A6: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0055BFB7(); /* call 0x0055BFB7 */

loc_0055B2AF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(eax, eax)) { sub_0055B2BC(); return; } /* je: equal / zero */

loc_0055B2B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0055B2BA: ;
    g_seh_ebp = ebp; sub_0055B2C8(); return; /* tail jmp 0x0055B2C8 */

}

/**
 * sub_0055B3A7
 * Original: 0x0055B3A7 - 0x0055B4DF (312 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B3A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055B3A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x762B48);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055B3B7: ;
    ecx = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM8(0x762AFB) = 6;
    if (CMP_L(MEM32(ecx + 4), ebx)) { sub_0055B4DF(); return; } /* jl: less (signed <) */

loc_0055B3CC: ;
    if (CMP_NE(MEM8(0x762AF9), LO8(ebx))) { sub_0055B4DF(); return; } /* jne: not equal / not zero */

loc_0055B3D8: ;
    esi = MEM32(ebp + 0xC);
    MEM32(esi + 0x18) = ebx;
    eax = 0x762B84;

loc_0055B3E3: ;
    edx = ZX8(MEM8(eax));
    eax = eax + edx;
    if (CMP_AE(eax, 0x762BD4)) goto loc_0055B4CE; /* jae: above or equal (unsigned >=) */

loc_0055B3F3: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0055B4CE; /* je: equal / zero */

loc_0055B3FC: ;
    if (CMP_NE(MEM8(eax + 1), 4)) goto loc_0055B3E3; /* jne: not equal / not zero */

loc_0055B402: ;
    (void)0; /* cmp MEM8(0x762B88), 1 - flags set for next jcc */
    MEM32(0x762BD4) = eax;
    if (CMP_EQ(MEM8(0x762B88), 1)) goto loc_0055B499; /* je: equal / zero */

loc_0055B414: ;
    if (CMP_EQ(MEM8(0x762B73), 0)) goto loc_0055B499; /* je: equal / zero */

loc_0055B41D: ;
    MEM8(esi) = 4;
    MEM8(esi + 2) = 0x80;
    if (CMP_BE(MEM8(0x762B88), 0)) goto loc_0055B48A; /* jbe: below or equal (unsigned <=) */

loc_0055B42D: ;
    eax = ZX8(MEM8(0x762B73));
    if (CMP_BE(eax, ebx)) goto loc_0055B48A; /* jbe: below or equal (unsigned <=) */

loc_0055B438: ;
    ecx = 0x762AF8;
    PUSH32(esp, 0); sub_0055AA28(); /* call 0x0055AA28 */

loc_0055B442: ;
    if (TEST_Z(eax, eax)) goto loc_0055B48A; /* je: equal / zero */

loc_0055B446: ;
    MEM8(eax) = 5;
    SET_LO8(ecx, MEM8(esi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 5));
    MEM8(eax + 5) = LO8(ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM8(eax + 6) = LO8(ecx);
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0055BB06(); /* call 0x0055BB06 */

loc_0055B47E: ;
    eax = ZX8(MEM8(0x762B88));
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_0055B42D; /* jb: below (unsigned <) */

loc_0055B48A: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    ecx = esi;
    PUSH32(esp, 0); sub_0055AAC1(); /* call 0x0055AAC1 */

loc_0055B495: ;
    esi = eax;
    goto loc_0055B49C;

loc_0055B499: ;
    MEM8(esi) = 3;

loc_0055B49C: ;
    eax = MEM32(0x762BD4);
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(esi + 2) = LO8(eax);
    eax = MEM32(0x762BD4);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xD) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xE) = LO8(ecx);
    MEM8(ebp + 0xF) = LO8(eax);
    MEM8(ebp + 0xC) = 0x82;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_0055B298(); /* call 0x0055B298 */

loc_0055B4CC: ;
    g_seh_ebp = ebp; sub_0055B4E8(); return; /* tail jmp 0x0055B4E8 */

loc_0055B4CE: ;
    MEM8(0x762AFA) = 0;
    MEM32(ecx + 4) = 0x80000400u;
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_0055B4E2(); return; /* tail jmp 0x0055B4E2 */

}

/**
 * sub_0055B4EE
 * Original: 0x0055B4EE - 0x0055B516 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B4EE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B4EE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    edi = edi + 0x18;
    (void)0; /* cmp MEM8(0x762AF9), LO8(ebx) - flags set for next jcc */
    MEM8(0x762AFB) = 1;
    if (CMP_EQ(MEM8(0x762AF9), LO8(ebx))) { sub_0055B516(); return; } /* je: equal / zero */

loc_0055B50A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055B03A(); /* call 0x0055B03A */

loc_0055B511: ;
    g_seh_ebp = ebp; sub_0055B5EA(); return; /* tail jmp 0x0055B5EA */

}

/**
 * sub_0055B5EE
 * Original: 0x0055B5EE - 0x0055B63C (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B5EE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055B5EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0x762B48);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055B5FC: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM8(0x762AFB) = 5;
    if (CMP_L(MEM32(eax + 4), edx)) goto loc_0055B62F; /* jl: less (signed <) */

loc_0055B60D: ;
    if (CMP_NE(MEM8(0x762AF9), LO8(edx))) goto loc_0055B62F; /* jne: not equal / not zero */

loc_0055B615: ;
    SET_LO16(ecx, MEM16(0x762B86));
    if (CMP_BE(LO16(ecx), 0x50)) { sub_0055B63C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0055B622: ;
    MEM8(0x762AFA) = LO8(edx);
    MEM32(eax + 4) = 0x80000400u;

loc_0055B62F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055B0A7(); /* call 0x0055B0A7 */

loc_0055B638: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B6A7
 * Original: 0x0055B6A7 - 0x0055B6CC (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B6A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055B6A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM8(0x762AF9), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edx;
    MEM8(0x762AFB) = 4;
    if (CMP_EQ(MEM8(0x762AF9), LO8(ebx))) { sub_0055B6CC(); return; } /* je: equal / zero */

loc_0055B6C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055B03A(); /* call 0x0055B03A */

loc_0055B6C7: ;
    g_seh_ebp = ebp; sub_0055B7EE(); return; /* tail jmp 0x0055B7EE */

}

/**
 * sub_0055B857
 * Original: 0x0055B857 - 0x0055B86A (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B857(void)
{

loc_0055B857: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, MEM32(esp + 4));
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055E562(); /* call 0x0055E562 */

loc_0055B867: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B86A
 * Original: 0x0055B86A - 0x0055B86E (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B86A(void)
{

loc_0055B86A: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B86E
 * Original: 0x0055B86E - 0x0055B87B (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B86E(void)
{

loc_0055B86E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B87B
 * Original: 0x0055B87B - 0x0055B87F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B87B(void)
{

loc_0055B87B: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_0055B87F
 * Original: 0x0055B87F - 0x0055B889 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B87F(void)
{

loc_0055B87F: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 7) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B889
 * Original: 0x0055B889 - 0x0055B8F3 (106 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B889(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055B889: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    if (CMP_G(eax, ecx)) goto loc_0055B8D6; /* jg: greater (signed >) */

loc_0055B896: ;
    if (CMP_EQ(eax, ecx)) goto loc_0055B8CF; /* je: equal / zero */

loc_0055B898: ;
    if (CMP_EQ(eax, 0x80000000u)) goto loc_0055B8BB; /* je: equal / zero */

loc_0055B89F: ;
    if (CMP_EQ(eax, 0x80000100u)) goto loc_0055B8CA; /* je: equal / zero */

loc_0055B8A6: ;
    if (CMP_EQ(eax, 0x80000800u)) goto loc_0055B8C3; /* je: equal / zero */

loc_0055B8AD: ;
    if (CMP_LE(eax, 0xBFFFFFFFu)) goto loc_0055B8E8; /* jle: less or equal (signed <=) */

loc_0055B8B4: ;
    if (CMP_G(eax, 0xC000000Eu)) goto loc_0055B8E8; /* jg: greater (signed >) */

loc_0055B8BB: ;
    eax = 0x45D;

loc_0055B8C0: ;
    esp += 8; return; /* ret 4 */

loc_0055B8C3: ;
    eax = 0x5AA;
    goto loc_0055B8C0;

loc_0055B8CA: ;
    PUSH32(esp, 0xE);

loc_0055B8CC: ;
    POP32(esp, eax);
    goto loc_0055B8C0;

loc_0055B8CF: ;
    eax = 0x4C7;
    goto loc_0055B8C0;

loc_0055B8D6: ;
    if (CMP_EQ(eax, 0xC0000010u)) goto loc_0055B8BB; /* je: equal / zero */

loc_0055B8DD: ;
    if (TEST_Z(eax, eax)) { sub_0055B8F3(); return; } /* je: equal / zero */

loc_0055B8E1: ;
    if (CMP_EQ(eax, 0x40000000)) goto loc_0055B8EC; /* je: equal / zero */

loc_0055B8E8: ;
    PUSH32(esp, 0x1F);
    goto loc_0055B8CC;

loc_0055B8EC: ;
    eax = 0x3E5;
    goto loc_0055B8C0;

}

/**
 * sub_0055B8F7
 * Original: 0x0055B8F7 - 0x0055B95F (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B8F7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055B8F7: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    if (CMP_G(eax, ecx)) goto loc_0055B93F; /* jg: greater (signed >) */

loc_0055B904: ;
    if (CMP_EQ(eax, ecx)) goto loc_0055B938; /* je: equal / zero */

loc_0055B906: ;
    if (CMP_EQ(eax, 0x80000000u)) goto loc_0055B929; /* je: equal / zero */

loc_0055B90D: ;
    if (CMP_EQ(eax, 0x80000100u)) goto loc_0055B931; /* je: equal / zero */

loc_0055B914: ;
    if (CMP_EQ(eax, 0x80000800u)) goto loc_0055B931; /* je: equal / zero */

loc_0055B91B: ;
    if (CMP_LE(eax, 0xBFFFFFFFu)) goto loc_0055B951; /* jle: less or equal (signed <=) */

loc_0055B922: ;
    if (CMP_G(eax, 0xC000000Eu)) goto loc_0055B951; /* jg: greater (signed >) */

loc_0055B929: ;
    eax = 0xC0000185u;

loc_0055B92E: ;
    esp += 8; return; /* ret 4 */

loc_0055B931: ;
    eax = 0xC000009Au;
    goto loc_0055B92E;

loc_0055B938: ;
    eax = 0xC0000120u;
    goto loc_0055B92E;

loc_0055B93F: ;
    if (CMP_EQ(eax, 0xC0000010u)) goto loc_0055B929; /* je: equal / zero */

loc_0055B946: ;
    if (TEST_Z(eax, eax)) { sub_0055B95F(); return; } /* je: equal / zero */

loc_0055B94A: ;
    if (CMP_EQ(eax, 0x40000000)) goto loc_0055B958; /* je: equal / zero */

loc_0055B951: ;
    eax = 0xC0000001u;
    goto loc_0055B92E;

loc_0055B958: ;
    eax = 0x103;
    goto loc_0055B92E;

}

/**
 * sub_0055B963
 * Original: 0x0055B963 - 0x0055B969 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B963(void)
{

loc_0055B963: ;
    eax = MEM32(0x762BD4);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B969
 * Original: 0x0055B969 - 0x0055B9DF (118 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B969(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055B969: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x762BD4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(0x762B86));
    PUSH32(esp, edi);
    esi = esi + 0x762B84;
    edi = 0; /* xor self */

loc_0055B984: ;
    SET_LO8(edx, MEM8(ecx));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0055B9D6; /* je: equal / zero */

loc_0055B98A: ;
    eax = ZX8(LO8(edx));
    ecx = ecx + eax;
    if (CMP_AE(ecx, esi)) goto loc_0055B9D6; /* jae: above or equal (unsigned >=) */

loc_0055B993: ;
    SET_LO8(eax, MEM8(ecx + 1));
    if (CMP_NE(LO8(eax), 5)) goto loc_0055B9CE; /* jne: not equal / not zero */

loc_0055B99A: ;
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_NE(LO8(edx), MEM8(ebp + 8))) goto loc_0055B9CE; /* jne: not equal / not zero */

loc_0055B9A5: ;
    if (CMP_EQ(MEM8(ebp + 8), 0)) goto loc_0055B9CE; /* je: equal / zero */

loc_0055B9AB: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 2));
    ebx = 0; /* xor self */
    edx = edx >> 7;
    edx = ~edx;
    edx = edx & 1;
    (void)0; /* cmp MEM8(ebp + 0xC), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(MEM8(ebp + 0xC), LO8(ebx))) ? 1 : 0); /* sete */
    if (CMP_NE(edx, ebx)) goto loc_0055B9CE; /* jne: not equal / not zero */

loc_0055B9C4: ;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM8(ebp + 0x10) = MEM8(ebp + 0x10) - 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0055B9D4; /* je: equal / zero */

loc_0055B9CE: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_0055B984; /* jne: not equal / not zero */

loc_0055B9D2: ;
    goto loc_0055B9D6;

loc_0055B9D4: ;
    edi = ecx;

loc_0055B9D6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055B9DF
 * Original: 0x0055B9DF - 0x0055B9E3 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B9DF(void)
{

loc_0055B9DF: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B9E3
 * Original: 0x0055B9E3 - 0x0055BA11 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B9E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B9E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM8(edi), 5)) { sub_0055BA11(); return; } /* jne: not equal / not zero */

loc_0055B9EE: ;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055B9F3: ;
    ebx = eax;
    eax = MEM32(ebx + 8);
    if (TEST_Z(eax, eax)) { sub_0055BA11(); return; } /* je: equal / zero */

loc_0055B9FC: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055BF5A(); /* call 0x0055BF5A */

loc_0055BA0D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0055BA64(); return; /* tail jmp 0x0055BA64 */

}

/**
 * sub_0055BA69
 * Original: 0x0055BA69 - 0x0055BAC3 (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BA69(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BA69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    if (CMP_NE(MEM8(esi), 5)) goto loc_0055BAA2; /* jne: not equal / not zero */

loc_0055BA79: ;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055BA7E: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0055AAC1(); /* call 0x0055AAC1 */

loc_0055BA85: ;
    goto loc_0055BA93;

loc_0055BA87: ;
    if (CMP_EQ(MEM32(eax + 8), edi)) { sub_0055BAC3(); return; } /* je: equal / zero */

loc_0055BA8C: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0055AAD8(); /* call 0x0055AAD8 */

loc_0055BA93: ;
    if (TEST_NZ(eax, eax)) goto loc_0055BA87; /* jne: not equal / not zero */

loc_0055BA97: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055BA9E: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;

loc_0055BAA2: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    PUSH32(esp, eax);
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 0x10) = edi;
    eax = MEM32(esi + 0xC);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055E6D3(); /* call 0x0055E6D3 */

loc_0055BABE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BAD5
 * Original: 0x0055BAD5 - 0x0055BB06 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BAD5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BAD5: ;
    PUSH32(esp, 0); sub_0055AAC1(); /* call 0x0055AAC1 */

loc_0055BADA: ;
    if (TEST_Z(eax, eax)) goto loc_0055BB03; /* je: equal / zero */

loc_0055BADE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0xC));
    esi = 0xFFFFFF7Fu;
    edi = edi & esi;

loc_0055BAEC: ;
    ecx = ZX8(MEM8(eax + 4));
    ecx = ecx & esi;
    if (CMP_EQ(ecx, edi)) goto loc_0055BB01; /* je: equal / zero */

loc_0055BAF6: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0055AAD8(); /* call 0x0055AAD8 */

loc_0055BAFD: ;
    if (TEST_NZ(eax, eax)) goto loc_0055BAEC; /* jne: not equal / not zero */

loc_0055BB01: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055BB03: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BB06
 * Original: 0x0055BB06 - 0x0055BB4E (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB06(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BB06: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx - MEM32(0x762BD8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(eax + 3) = 0x80;
    ecx = ecx - MEM32(0x762BD8);
    ebx = (uint32_t)((int32_t)ebx >> 5);
    ecx = (uint32_t)((int32_t)ecx >> 5);
    MEM8(eax + 1) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0055AAC1(); /* call 0x0055AAC1 */

loc_0055BB30: ;
    if (TEST_NZ(eax, eax)) goto loc_0055BB40; /* jne: not equal / not zero */

loc_0055BB34: ;
    MEM8(esi + 2) = LO8(ebx);
    goto loc_0055BB49;

loc_0055BB39: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0055AAD8(); /* call 0x0055AAD8 */

loc_0055BB40: ;
    if (CMP_NE(MEM8(eax + 3), 0x80)) goto loc_0055BB39; /* jne: not equal / not zero */

loc_0055BB46: ;
    MEM8(eax + 3) = LO8(ebx);

loc_0055BB49: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BB4E
 * Original: 0x0055BB4E - 0x0055BBAA (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BB4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0); sub_0055AAC1(); /* call 0x0055AAC1 */

loc_0055BB59: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (CMP_NE(edi, esi)) goto loc_0055BB73; /* jne: not equal / not zero */

loc_0055BB65: ;
    SET_LO8(eax, MEM8(esi + 3));
    (void)0; /* cmp LO8(eax), 0x80 - flags set for next jcc */
    MEM8(ebp + 2) = LO8(eax);
    if (CMP_NE(LO8(eax), 0x80)) goto loc_0055BB99; /* jne: not equal / not zero */

loc_0055BB6F: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_0055BB99;

loc_0055BB73: ;
    if (TEST_Z(edi, edi)) goto loc_0055BB99; /* je: equal / zero */

loc_0055BB77: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0055AAD8(); /* call 0x0055AAD8 */

loc_0055BB7E: ;
    if (CMP_EQ(eax, esi)) goto loc_0055BB8F; /* je: equal / zero */

loc_0055BB82: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0055AAD8(); /* call 0x0055AAD8 */

loc_0055BB89: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0055BB77; /* jne: not equal / not zero */

loc_0055BB8F: ;
    if (TEST_Z(edi, edi)) goto loc_0055BB99; /* je: equal / zero */

loc_0055BB93: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);

loc_0055BB99: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 0x80;
    MEM8(esi + 1) = 0x80;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BBAA
 * Original: 0x0055BBAA - 0x0055BBCA (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BBAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BBAA: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    edx = ZX8(MEM8(edx + 4));
    edx = edx & 0x7F;
    edx--;
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    MEM32(ecx + 0x14) = edx;
    if (CMP_L(edx, 4)) { sub_0055BBCA(); return; } /* jl: less (signed <) */

loc_0055BBC1: ;
    MEM32(ecx + 0x14) = 0x20;
    g_seh_ebp = ebp; sub_0055BC1C(); return; /* tail jmp 0x0055BC1C */

}

/**
 * sub_0055BC1F
 * Original: 0x0055BC1F - 0x0055BD09 (234 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BC1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055BC1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(ebp + -1) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0055BC5F; /* je: equal / zero */

loc_0055BC36: ;
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0055BC5F; /* jne: not equal / not zero */

loc_0055BC3B: ;
    edx = ebp + -12;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -12) = edx;
    edx = ebp + -20;
    MEM8(ebp + -1) = 1;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 8) = 0x55B846;
    MEM32(esi + 0xC) = edx;

loc_0055BC5F: ;
    eax = ZX8(LO8(eax));
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0055BCB5; /* je: equal / zero */

loc_0055BC66: ;
    eax = eax - 7;
    if ((eax == 0)) goto loc_0055BCAD; /* je: equal / zero */

loc_0055BC6B: ;
    eax = eax - 0x37;
    if ((eax == 0)) goto loc_0055BC97; /* je: equal / zero */

loc_0055BC70: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0055BC8F; /* je: equal / zero */

loc_0055BC75: ;
    eax = eax - 0x3F;
    if ((eax == 0)) goto loc_0055BC87; /* je: equal / zero */

loc_0055BC7A: ;
    eax = eax - 0x41;
    if ((eax != 0)) goto loc_0055BCCA; /* jne: not equal / not zero */

loc_0055BC7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055BA69(); /* call 0x0055BA69 */

loc_0055BC85: ;
    goto loc_0055BCD7;

loc_0055BC87: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055B9E3(); /* call 0x0055B9E3 */

loc_0055BC8D: ;
    goto loc_0055BCD7;

loc_0055BC8F: ;
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    goto loc_0055BCCA;

loc_0055BC97: ;
    if (CMP_NE(MEM32(esi + 0x10), ebx)) goto loc_0055BCA2; /* jne: not equal / not zero */

loc_0055BC9C: ;
    eax = MEM32(ecx + 8);
    MEM32(esi + 0x10) = eax;

loc_0055BCA2: ;
    if (CMP_NE(MEM8(esi + 0x29), 9)) goto loc_0055BCCA; /* jne: not equal / not zero */

loc_0055BCA8: ;
    MEM32(ecx + 0x18) = ebx;
    goto loc_0055BCCA;

loc_0055BCAD: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_0055BCCA;

loc_0055BCB5: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    MEM8(esi + 0x1E) = LO8(eax);

loc_0055BCCA: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055E6D3(); /* call 0x0055E6D3 */

loc_0055BCD7: ;
    if (CMP_EQ(MEM8(ebp + -1), LO8(ebx))) goto loc_0055BD03; /* je: equal / zero */

loc_0055BCDC: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    if (CMP_NE(ecx, 0x40000000)) goto loc_0055BCFD; /* jne: not equal / not zero */

loc_0055BCEC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_0055BCFA: ;
    eax = MEM32(esi + 4);

loc_0055BCFD: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_0055BD03: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BD09
 * Original: 0x0055BD09 - 0x0055BD2C (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD09(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BD09: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 4;
    edx = MEM32(eax);
    if (CMP_NE(MEM8(edx), 1)) goto loc_0055BD23; /* jne: not equal / not zero */

loc_0055BD18: ;
    SET_LO8(edx, MEM8(edx + 4));
    SET_LO8(edx, LO8(edx) & 0x7F);
    if (CMP_EQ(LO8(edx), 1)) { sub_0055BD2C(); return; } /* je: equal / zero */

loc_0055BD23: ;
    MEM32(ecx + 0x14) = 0x20;
    g_seh_ebp = ebp; sub_0055BD47(); return; /* tail jmp 0x0055BD47 */

}

/**
 * sub_0055BD4B
 * Original: 0x0055BD4B - 0x0055BD8D (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD4B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055BD4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 5);
    POP32(esp, esi);
    MEM32(ebp + -4) = edi;

loc_0055BD5B: ;
    ecx = MEM32(ebp + esi * 4 + -24);
    esi--;
    PUSH32(esp, 0); sub_0055AAAA(); /* call 0x0055AAAA */

loc_0055BD65: ;
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    MEM32(ebp + esi * 4 + -24) = eax;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0055BD5B; /* jne: not equal / not zero */

loc_0055BD6E: ;
    edx = MEM32(0x561128);
    PUSH32(esp, 5);
    POP32(esp, eax);
    eax = eax - esi;
    (void)0; /* test MEM8(edx), 1 - flags set for next jcc */
    ecx = ebp + esi * 4 + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    if (TEST_Z(MEM8(edx), 1)) { sub_0055BD8D(); return; } /* je: equal / zero */

loc_0055BD86: ;
    PUSH32(esp, 0); sub_0055BD09(); /* call 0x0055BD09 */

loc_0055BD8B: ;
    g_seh_ebp = ebp; sub_0055BD92(); return; /* tail jmp 0x0055BD92 */

}

/**
 * sub_0055BD96
 * Original: 0x0055BD96 - 0x0055BDB5 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD96(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055BD96: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0); sub_0055BED5(); /* call 0x0055BED5 */

loc_0055BDA6: ;
    if (TEST_NZ(eax, eax)) { sub_0055BDB5(); return; } /* jne: not equal / not zero */

loc_0055BDAA: ;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0055BDB1: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0055BDE8(); return; /* tail jmp 0x0055BDE8 */

}

/**
 * sub_0055BDEC
 * Original: 0x0055BDEC - 0x0055BDF8 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BDEC(void)
{

loc_0055BDEC: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0055EFB6(); /* call 0x0055EFB6 */

loc_0055BDF5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BDF8
 * Original: 0x0055BDF8 - 0x0055BE17 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BDF8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BDF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055BE02: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0xA3);
    if (TEST_Z(MEM8(ecx + 0x28), 0x10)) { sub_0055BE17(); return; } /* je: equal / zero */

loc_0055BE12: ;
    PUSH32(esp, 0x57);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0055BE5C(); return; /* tail jmp 0x0055BE5C */

}

/**
 * sub_0055BE6B
 * Original: 0x0055BE6B - 0x0055BE82 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BE6B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BE6B: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0xA3;
    edx = MEM32(eax);
    if (TEST_Z(MEM8(edx + 0x28), 0x20)) { sub_0055BE82(); return; } /* je: equal / zero */

loc_0055BE7D: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0055BE9B(); return; /* tail jmp 0x0055BE9B */

}

/**
 * sub_0055BE9E
 * Original: 0x0055BE9E - 0x0055BECF (49 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BE9E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BE9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x5582E4;
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x5582EC;
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM8(edx) = 0;
    if (CMP_AE(edi, esi)) goto loc_0055BEC9; /* jae: above or equal (unsigned >=) */

loc_0055BEB6: ;
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_0055BEC2; /* je: equal / zero */

loc_0055BEBC: ;
    if (CMP_EQ(MEM8(edi), LO8(ecx))) { sub_0055BECF(); return; } /* je: equal / zero */

loc_0055BEC0: ;
    SET_LO8(ebx, LO8(ebx) + 1);

loc_0055BEC2: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_0055BEB6; /* jb: below (unsigned <) */

loc_0055BEC9: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055BED5
 * Original: 0x0055BED5 - 0x0055BEFC (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BED5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BED5: ;
    eax = 0x5582E4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x5582EC;
    if (CMP_AE(edx, esi)) goto loc_0055BEF8; /* jae: above or equal (unsigned >=) */

loc_0055BEE6: ;
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) goto loc_0055BEF1; /* je: equal / zero */

loc_0055BEEC: ;
    if (CMP_EQ(MEM32(edx + 4), ecx)) { sub_0055BEFC(); return; } /* je: equal / zero */

loc_0055BEF1: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_0055BEE6; /* jb: below (unsigned <) */

loc_0055BEF8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055BF00
 * Original: 0x0055BF00 - 0x0055BF5A (90 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF00(void)
{

loc_0055BF00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(edx + 0x98) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x9C) = eax;
    eax = 0; /* xor self */
    MEM8(edx + 0xA0) = 0;
    MEM8(edx + 0xA1) = 0;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x32;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x64;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = 0; /* xor self */
    edi = edx + 0xA4;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BF5A
 * Original: 0x0055BF5A - 0x0055BF6E (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF5A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BF5A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0055BF6B; /* je: equal / zero */

loc_0055BF65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0055BF6B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BF6E
 * Original: 0x0055BF6E - 0x0055BFB7 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF6E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055BF6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -12) = 9;
    MEM32(ebp + -4) = 0xD;
    ecx = MEM32(ebp + eax * 4 + -16);
    eax = ZX16(MEM16(ebp + 8));
    eax = eax + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    edx = 0; /* xor self */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(ecx, ecx)) goto loc_0055BFAA; /* jne: not equal / not zero */

loc_0055BFA8: ;
    eax = 0; /* xor self */

loc_0055BFAA: ;
    if (CMP_EQ(MEM8(ebp + 0x10), 0)) goto loc_0055BFB3; /* je: equal / zero */

loc_0055BFB0: ;
    eax = eax << 3;

loc_0055BFB3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055BFB7
 * Original: 0x0055BFB7 - 0x0055BFE8 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BFB7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055BFB7: ;
    PUSH32(esp, esi);
    eax = 0x5582F4;
    esi = 0x55830C;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ecx = eax;
    if (CMP_AE(eax, esi)) goto loc_0055BFE2; /* jae: above or equal (unsigned >=) */

loc_0055BFC8: ;
    edx = MEM32(esp + 8);

loc_0055BFCC: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0055BFDB; /* je: equal / zero */

loc_0055BFD2: ;
    if (CMP_NE(HI8(edx), MEM8(eax + 1))) goto loc_0055BFDB; /* jne: not equal / not zero */

loc_0055BFD7: ;
    if (CMP_EQ(LO8(edx), MEM8(eax))) { sub_0055BFE8(); return; } /* je: equal / zero */

loc_0055BFDB: ;
    ecx = ecx + 4;
    if (CMP_B(ecx, esi)) goto loc_0055BFCC; /* jb: below (unsigned <) */

loc_0055BFE2: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BFEC
 * Original: 0x0055BFEC - 0x0055C00C (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BFEC(void)
{
    uint32_t ebp;

loc_0055BFEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebp + -4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xA));
    MEM8(ebp + -3) = LO8(eax);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -2) = HI8(eax);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C00C
 * Original: 0x0055C00C - 0x0055C043 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C00C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055C00C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x18);
    ebx = 0x103;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055C023: ;
    (void)0; /* test MEM8(esi + 0xC), 6 - flags set for next jcc */
    ecx = MEM32(ebp + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0xC), 6)) { sub_0055C043(); return; } /* je: equal / zero */

loc_0055C02F: ;
    eax = 0xC000009Du;
    SET_LO8(edx, 0); /* xor self */
    ebx = eax;
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610DC), _icall_esp); /* indirect call */
    }

loc_0055C041: ;
    g_seh_ebp = ebp; sub_0055C054(); return; /* tail jmp 0x0055C054 */

}

/**
 * sub_0055C066
 * Original: 0x0055C066 - 0x0055C089 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C066(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C066: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = eax;
    ecx = 0xC0000000u;
    eax = eax & ecx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x10);
    if (CMP_NE(eax, ecx)) { sub_0055C089(); return; } /* jne: not equal / not zero */

loc_0055C083: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    g_seh_ebp = ebp; sub_0055C08F(); return; /* tail jmp 0x0055C08F */

}

/**
 * sub_0055C0A6
 * Original: 0x0055C0A6 - 0x0055C0C2 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C0A6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055C0A6: ;
    eax = MEM32(0x75FAEC);
    if (CMP_EQ(eax, 0x75FAEC)) goto loc_0055C0C1; /* je: equal / zero */

loc_0055C0B2: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x30), _icall_esp); /* indirect call */
    }

loc_0055C0C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055C0C2
 * Original: 0x0055C0C2 - 0x0055C0E9 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C0C2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055C0C2: ;
    eax = ecx;
    edx = 0; /* xor self */
    if (CMP_BE(MEM32(eax + 4), edx)) goto loc_0055C0E8; /* jbe: below or equal (unsigned <=) */

loc_0055C0CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0055C0CD: ;
    edi = MEM32(eax);
    edi = edi + edx;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x560FC8;
    edx = edx + 0x1000;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_B(edx, MEM32(eax + 4))) goto loc_0055C0CD; /* jb: below (unsigned <) */

loc_0055C0E6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055C0E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055C0E9
 * Original: 0x0055C0E9 - 0x0055C0FE (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C0E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C0E9: ;
    eax = MEM32(esp + 4);
    if (CMP_BE(eax, 1)) { sub_0055C0FE(); return; } /* jbe: below or equal (unsigned <=) */

loc_0055C0F2: ;
    ecx = eax + -1;
    if (TEST_NZ(eax, ecx)) { sub_0055C0FE(); return; } /* jne: not equal / not zero */

loc_0055C0F9: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0055C100(); return; /* tail jmp 0x0055C100 */

}

/**
 * sub_0055C103
 * Original: 0x0055C103 - 0x0055C119 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C103(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055C103: ;
    ecx = 0; /* xor self */
    SET_LO8(eax, 0); /* xor self */
    ecx++;

loc_0055C108: ;
    if (TEST_NZ(MEM32(esp + 4), ecx)) goto loc_0055C116; /* jne: not equal / not zero */

loc_0055C10E: ;
    SET_LO8(eax, LO8(eax) + 1);
    ecx = ecx << 1;
    if (CMP_B(LO8(eax), 0x20)) goto loc_0055C108; /* jb: below (unsigned <) */

loc_0055C116: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C119
 * Original: 0x0055C119 - 0x0055C156 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C119(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055C119: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0xC0000000u;
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x28);
    esi = esi & eax;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(esi, eax)) { sub_0055C156(); return; } /* jne: not equal / not zero */

loc_0055C147: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = edx;
    g_seh_ebp = ebp; sub_0055C2CB(); return; /* tail jmp 0x0055C2CB */

}

/**
 * sub_0055C2FF
 * Original: 0x0055C2FF - 0x0055C380 (129 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C2FF(void)
{
    uint32_t ebp;

loc_0055C2FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    MEM8(esi + 0x4F) = 0x2F;
    ecx = MEM32(esi + 0x158);
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    PUSH32(esp, 0); sub_0047F030(); /* call 0x0047F030 */

loc_0055C322: ;
    ecx = MEM32(esi + 0x158);
    ebx = MEM32(edi + 8);
    edx = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = 0x55C066;
    ebx = ebx >> LO8(ecx);
    SET_LO16(ecx, MEM16(edi + 0xA));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)0x64));
    MEM16(esi + 0x34) = LO16(ecx);
    ecx = esi + 0x4F;
    MEM8(esi + 0x37) = LO8(eax);
    MEM8(esi + 0x36) = 2;
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, edx);
    MEM8(ecx) = 0x2F;
    PUSH32(esp, 0); sub_0055BFEC(); /* call 0x0055BFEC */

loc_0055C363: ;
    MEM32(esi + 0x51) = eax;
    MEM8(ebp + -4) = HI8(ebx);
    MEM8(ebp + -3) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -4));
    ecx = esi;
    MEM16(esi + 0x56) = LO16(eax);
    PUSH32(esp, 0); sub_0055D309(); /* call 0x0055D309 */

loc_0055C37B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055C380
 * Original: 0x0055C380 - 0x0055C44E (206 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055C380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    ecx = ecx + edi;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(edi, ecx)) goto loc_0055C440; /* jae: above or equal (unsigned >=) */

loc_0055C39D: ;
    edx = edi;
    edx = edx - 0x560FC8;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, esi);

loc_0055C3AA: ;
    eax = 0; /* xor self */
    if (CMP_NE(MEM32(edi), 0x46313539)) goto loc_0055C424; /* jne: not equal / not zero */

loc_0055C3B4: ;
    eax++;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(eax, 8)) goto loc_0055C3CF; /* je: equal / zero */

loc_0055C3BD: ;
    esi = MEM32(edx + eax * 4 + 0x560FC8);
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x560FC8))) goto loc_0055C3B4; /* je: equal / zero */

loc_0055C3CD: ;
    goto loc_0055C424;

loc_0055C3CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610C0), _icall_esp); /* indirect call */
    }

loc_0055C3D6: ;
    esi = esi | 0xFFFFFFFFu;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ebx = eax;
    if (CMP_L(MEM32(ebp + 0xC), 0)) goto loc_0055C3E8; /* jl: less (signed <) */

loc_0055C3E1: ;
    MEM32(ebp + 0xC) = 0xC000003Eu;

loc_0055C3E8: ;
    eax = ebx;
    eax = eax & 6;
    if (CMP_NE(LO8(eax), 2)) goto loc_0055C403; /* jne: not equal / not zero */

loc_0055C3F1: ;
    esi = ebx;
    esi = esi & 0xFFFFFFFDu;
    esi = esi | 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B8), _icall_esp); /* indirect call */
    }

loc_0055C403: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    eax = MEM32(ebp + -4);
    MEM32(edi + eax * 4) = 0x4C494146;
    if ((MEM32(ebp + -4) != 0)) goto loc_0055C403; /* jne: not equal / not zero */

loc_0055C412: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0055C421; /* je: equal / zero */

loc_0055C417: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B8), _icall_esp); /* indirect call */
    }

loc_0055C421: ;
    ecx = MEM32(ebp + -8);

loc_0055C424: ;
    edx = MEM32(ebp + -12);
    eax = 0x1000;
    edi = edi + eax;
    edx = edx + eax;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(ebp + -12) = edx;
    if (CMP_B(edi, ecx)) goto loc_0055C3AA; /* jb: below (unsigned <) */

loc_0055C43B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0055C440: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055C066(); /* call 0x0055C066 */

loc_0055C449: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C44E
 * Original: 0x0055C44E - 0x0055C634 (486 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C44E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055C44E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    ebx = ebx & 0xF0000000u;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x5C);
    MEM32(ebp + 8) = ecx;
    if (CMP_L(MEM32(ebp + 0xC), 0)) goto loc_0055C524; /* jl: less (signed <) */

loc_0055C473: ;
    ebx = ebx + 0x10000000;
    if (CMP_NE(ebx, 0x20000000)) goto loc_0055C48C; /* jne: not equal / not zero */

loc_0055C481: ;
    if (TEST_NZ(MEM8(esi + 0xF), 2)) goto loc_0055C49F; /* jne: not equal / not zero */

loc_0055C487: ;
    ebx = 0x40000000;

loc_0055C48C: ;
    if (CMP_NE(ebx, 0x40000000)) goto loc_0055C49F; /* jne: not equal / not zero */

loc_0055C494: ;
    if (TEST_NZ(MEM8(esi + 0xF), 4)) goto loc_0055C49F; /* jne: not equal / not zero */

loc_0055C49A: ;
    ebx = 0x60000000;

loc_0055C49F: ;
    eax = MEM32(esi + 0xC);
    edx = 0xFFFFFFF;
    eax = eax & edx;
    eax = eax | ebx;
    (void)0; /* cmp ebx, 0x20000000 - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(ebx, 0x20000000)) goto loc_0055C5DD; /* je: equal / zero */

loc_0055C4BA: ;
    if (CMP_EQ(ebx, 0x30000000)) goto loc_0055C5B1; /* je: equal / zero */

loc_0055C4C6: ;
    if (CMP_EQ(ebx, 0x40000000)) goto loc_0055C591; /* je: equal / zero */

loc_0055C4D2: ;
    if (CMP_EQ(ebx, 0x50000000)) goto loc_0055C55F; /* je: equal / zero */

loc_0055C4DE: ;
    if (CMP_NE(ebx, 0x60000000)) goto loc_0055C62D; /* jne: not equal / not zero */

loc_0055C4EA: ;
    eax = eax & edx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x75FAEC);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610DC), _icall_esp); /* indirect call */
    }

loc_0055C512: ;
    PUSH32(esp, 0); sub_0055C0A6(); /* call 0x0055C0A6 */

loc_0055C517: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561234), _icall_esp); /* indirect call */
    }

loc_0055C51F: ;
    goto loc_0055C62D;

loc_0055C524: ;
    if (CMP_EQ(ebx, 0x20000000)) goto loc_0055C538; /* je: equal / zero */

loc_0055C52C: ;
    if (CMP_NE(ebx, 0x40000000)) goto loc_0055C49A; /* jne: not equal / not zero */

loc_0055C538: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0xC000003Eu)) goto loc_0055C49A; /* jne: not equal / not zero */

loc_0055C545: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0); sub_0055C0C2(); /* call 0x0055C0C2 */

loc_0055C54D: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    ecx = MEM32(ebp + 8);
    ebx = ebx + 0x10000000;
    goto loc_0055C49F;

loc_0055C55F: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 8);
    eax = eax - MEM32(esi + 0x1C);
    eax = eax + MEM32(edi + 4);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 0xC);
    eax = eax - MEM32(esi + 0x1C);

loc_0055C58C: ;
    eax = eax + MEM32(edi + 4);
    goto loc_0055C5FE;

loc_0055C591: ;
    MEM32(esi + 0x28) = 0x75FAF4;
    eax = MEM32(esi + 0x168);
    eax = eax - MEM32(esi + 0x1C);
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    goto loc_0055C58C;

loc_0055C5B1: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x37) = 6;
    eax = esi + 0x168;
    ecx = MEM32(eax);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x28) = ecx;
    eax = MEM32(eax);
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 0xC);
    eax = eax - MEM32(esi + 0x38);
    goto loc_0055C5FE;

loc_0055C5DD: ;
    MEM32(esi + 0x28) = 0x75FAF4;
    eax = MEM32(esi + 0x168);
    eax = eax - MEM32(esi + 0x18);
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    eax = eax - MEM32(esi + 0x2C);

loc_0055C5FE: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055BFEC(); /* call 0x0055BFEC */

loc_0055C60E: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    PUSH32(esp, 0); sub_0055D309(); /* call 0x0055D309 */

loc_0055C62D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C634
 * Original: 0x0055C634 - 0x0055C65D (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C634(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055C634: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x10);
    edx = MEM32(ebx + 0x5C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edi = edi & 0xF0000000u;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    MEM32(ebp + 8) = edx;
    if (CMP_L(MEM32(ebp + 0xC), 0)) { sub_0055C65D(); return; } /* jl: less (signed <) */

loc_0055C655: ;
    edi = edi + 0x10000000;
    g_seh_ebp = ebp; sub_0055C692(); return; /* tail jmp 0x0055C692 */

}

/**
 * sub_0055C7AF
 * Original: 0x0055C7AF - 0x0055C7D4 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C7AF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C7AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 8);
    POP32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56118C), _icall_esp); /* indirect call */
    }

loc_0055C7C2: ;
    if (TEST_NZ(eax, eax)) { sub_0055C7D4(); return; } /* jne: not equal / not zero */

loc_0055C7C6: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    eax = 0xC000009Au;
    g_seh_ebp = ebp; sub_0055C809(); return; /* tail jmp 0x0055C809 */

}

/**
 * sub_0055C80C
 * Original: 0x0055C80C - 0x0055C843 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C80C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055C80C: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax = 0xC0000000u;
    edi = edx;
    edi = edi & eax;
    if (CMP_NE(edi, eax)) { sub_0055C843(); return; } /* jne: not equal / not zero */

loc_0055C82A: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, 0); /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610DC), _icall_esp); /* indirect call */
    }

loc_0055C839: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561234), _icall_esp); /* indirect call */
    }

loc_0055C841: ;
    g_seh_ebp = ebp; sub_0055C8A9(); return; /* tail jmp 0x0055C8A9 */

}

/**
 * sub_0055C8AE
 * Original: 0x0055C8AE - 0x0055C931 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C8AE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055C8AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x5C);
    eax = MEM32(eax + 0x10);
    eax = eax - 0x70000;
    PUSH32(esp, edi);
    if ((eax == 0)) { sub_0055C931(); return; } /* je: equal / zero */

loc_0055C8C7: ;
    eax = eax - 0x14;
    if ((eax == 0)) goto loc_0055C925; /* je: equal / zero */

loc_0055C8CC: ;
    eax = eax - 0x3FF0;
    if ((eax == 0)) goto loc_0055C8E1; /* je: equal / zero */

loc_0055C8D3: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    eax = 0xC0000010u;
    g_seh_ebp = ebp; sub_0055C962(); return; /* tail jmp 0x0055C962 */

loc_0055C8E1: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    if ((eax != 0)) goto loc_0055C906; /* jne: not equal / not zero */

loc_0055C8FB: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0055C7AF(); /* call 0x0055C7AF */

loc_0055C904: ;
    g_seh_ebp = ebp; sub_0055C95B(); return; /* tail jmp 0x0055C95B */

loc_0055C906: ;
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    MEM32(esi + 0x14) = 0x20;
    g_seh_ebp = ebp; sub_0055C959(); return; /* tail jmp 0x0055C959 */

loc_0055C925: ;
    ecx = MEM32(ebp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_0055C2FF(); /* call 0x0055C2FF */

loc_0055C92F: ;
    g_seh_ebp = ebp; sub_0055C977(); return; /* tail jmp 0x0055C977 */

}

/**
 * sub_0055C97E
 * Original: 0x0055C97E - 0x0055CA22 (164 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C97E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0055C97E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    eax = edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = 0xFFF;
    (void)0; /* test edi, edx - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = edx;
    if (TEST_NZ(edi, edx)) goto loc_0055C9FA; /* jne: not equal / not zero */

loc_0055C9A7: ;
    if (TEST_NZ(edi, ebx)) goto loc_0055C9FA; /* jne: not equal / not zero */

loc_0055C9AB: ;
    eax = 0; /* xor self */
    edi = ebx;
    edi = edi + edx;
    eax = eax + MEM32(ecx + 0x10) + _cf; /* adc */
    if (CMP_G(eax, MEM32(esi + 0x164))) goto loc_0055C9F7; /* jg: greater (signed >) */

loc_0055C9BC: ;
    if (CMP_L(eax, MEM32(esi + 0x164))) goto loc_0055C9C6; /* jl: less (signed <) */

loc_0055C9BE: ;
    if (CMP_A(edi, MEM32(esi + 0x160))) goto loc_0055C9F7; /* ja: above (unsigned >) */

loc_0055C9C6: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0055C9D2; /* jne: not equal / not zero */

loc_0055C9CA: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & ebx;
    goto loc_0055CA07;

loc_0055C9D2: ;
    if (TEST_Z(MEM8(ecx + 2), 0x80)) goto loc_0055C9E3; /* je: equal / zero */

loc_0055C9D8: ;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    goto loc_0055C9EF;

loc_0055C9E3: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x30);
    edi = edi + MEM32(ecx + 8);
    MEM32(ebp + -4) = edi;

loc_0055C9EF: ;
    edi = MEM32(ebp + -4);
    MEM32(ecx + 8) = edi;
    goto loc_0055CA01;

loc_0055C9F7: ;
    eax = MEM32(ebp + -8);

loc_0055C9FA: ;
    MEM32(eax + 0x10) = 0xC000000Du;

loc_0055CA01: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) { sub_0055CA22(); return; } /* jne: not equal / not zero */

loc_0055CA07: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    SET_LO8(edx, 0); /* xor self */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610DC), _icall_esp); /* indirect call */
    }

loc_0055CA15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561234), _icall_esp); /* indirect call */
    }

loc_0055CA1D: ;
    g_seh_ebp = ebp; sub_0055CB09(); return; /* tail jmp 0x0055CB09 */

}

/**
 * sub_0055CB0E
 * Original: 0x0055CB0E - 0x0055CB47 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CB0E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055CB0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 0x5C);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56123C), _icall_esp); /* indirect call */
    }

loc_0055CB29: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0055CB47(); return; } /* je: equal / zero */

loc_0055CB2D: ;
    SET_LO8(edx, 0); /* xor self */
    ecx = edi;
    MEM32(edi + 0x10) = 0xC0000240u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610DC), _icall_esp); /* indirect call */
    }

loc_0055CB3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561234), _icall_esp); /* indirect call */
    }

loc_0055CB45: ;
    g_seh_ebp = ebp; sub_0055CB78(); return; /* tail jmp 0x0055CB78 */

}

/**
 * sub_0055CB7F
 * Original: 0x0055CB7F - 0x0055CBCC (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CB7F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055CB7F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 3;
    esi = esi & 0xFFFFFFFCu;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055CB92: ;
    (void)0; /* cmp MEM32(0x558500), esi - flags set for next jcc */
    SET_LO8(ecx, LO8(eax));
    if (CMP_B(MEM32(0x558500), esi)) { sub_0055CBCC(); return; } /* jb: below (unsigned <) */

loc_0055CB9C: ;
    ebx = 0x80001000u;
    ebx = ebx - MEM32(0x558500);
    MEM32(0x558500) = MEM32(0x558500) - esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055CBB3: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0xCCCCCCCCu;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    g_seh_ebp = ebp; sub_0055CBDF(); return; /* tail jmp 0x0055CBDF */

}

/**
 * sub_0055CC22
 * Original: 0x0055CC22 - 0x0055CC55 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CC22(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055CC22: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test MEM8(esi + 0xD), 1 - flags set for next jcc */
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(MEM8(esi + 0xD), 1)) goto loc_0055CC40; /* je: equal / zero */

loc_0055CC32: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055CC3C: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;

loc_0055CC40: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 6)) { sub_0055CC55(); return; } /* je: equal / zero */

loc_0055CC47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x30), _icall_esp); /* indirect call */
    }

loc_0055CC50: ;
    g_seh_ebp = ebp; sub_0055CD24(); return; /* tail jmp 0x0055CD24 */

}

/**
 * sub_0055CDAC
 * Original: 0x0055CDAC - 0x0055CE35 (137 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CDAC(void)
{

loc_0055CDAC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, edi);
    eax = esi + 0x5F;
    MEM32(esi + 0xD0) = eax;
    eax = ZX16(MEM16(esi + 0x34));
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFE7960u);
    PUSH32(esp, edx);
    edi = esi + 0xB8;
    PUSH32(esp, eax);
    MEM8(edi) = 0x28;
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x55CD28;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xCC) = 0xD;
    MEM8(esi + 0xD4) = 2;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0055CE14: ;
    ecx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_0055CE27: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055CE32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CF32
 * Original: 0x0055CF32 - 0x0055CF53 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CF32(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055CF32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(eax, MEM8(edi + 0x37));
    esi = ecx;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 3);
    if (CMP_NE(LO8(ecx), 1)) { sub_0055CF53(); return; } /* jne: not equal / not zero */

loc_0055CF4A: ;
    ebx = MEM32(edi + 0x20);
    MEM8(ebp + -1) = 2;
    g_seh_ebp = ebp; sub_0055CF5A(); return; /* tail jmp 0x0055CF5A */

}

/**
 * sub_0055D060
 * Original: 0x0055D060 - 0x0055D109 (169 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D060(void)
{

loc_0055D060: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    MEM32(edi) = 0x43425355;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x37));
    SET_LO8(eax, LO8(eax) << 7);
    edx = esi + 0x98;
    PUSH32(esp, edx);
    MEM8(edi + 0xC) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFF3CB00u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0xA;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_0055D0A9: ;
    ecx = MEM32(esi + 0x24);
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    eax = esi + 0xB8;
    MEM8(eax) = 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x55CFF8;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xCC) = 0x1F;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055D106: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D309
 * Original: 0x0055D309 - 0x0055D326 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D309(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D309: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055D313: ;
    (void)0; /* test MEM8(esi + 0xC), 6 - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(MEM8(esi + 0xC), 6)) { sub_0055D326(); return; } /* je: equal / zero */

loc_0055D31B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x30), _icall_esp); /* indirect call */
    }

loc_0055D324: ;
    g_seh_ebp = ebp; sub_0055D32D(); return; /* tail jmp 0x0055D32D */

}

/**
 * sub_0055D387
 * Original: 0x0055D387 - 0x0055D3E4 (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D387(void)
{

loc_0055D387: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055D394: ;
    SET_LO16(edi, ZX8(MEM8(eax + 3)));
    edx = 0; /* xor self */
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x55DC6B;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x23;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = 1;
    MEM16(eax + 0x34) = LO16(edi);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055D3DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D3E4
 * Original: 0x0055D3E4 - 0x0055D403 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D3E4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D3E4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    if ((LO8(eax) == 0)) { sub_0055D403(); return; } /* je: equal / zero */

loc_0055D3F2: ;
    if (CMP_NE(MEM32(esp + 0xC), 0)) { sub_0055D403(); return; } /* jne: not equal / not zero */

loc_0055D3F9: ;
    PUSH32(esp, 0); sub_0055ACBD(); /* call 0x0055ACBD */

loc_0055D3FE: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    g_seh_ebp = ebp; sub_0055D416(); return; /* tail jmp 0x0055D416 */

}

/**
 * sub_0055D48B
 * Original: 0x0055D48B - 0x0055D4C4 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D48B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D48B: ;
    (void)0; /* cmp MEM32(0x762C98), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = 0x762C50;
    if (CMP_EQ(MEM32(0x762C98), 0)) goto loc_0055D4B5; /* je: equal / zero */

loc_0055D49A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055D4A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x762C98));
    PUSH32(esp, 0); sub_0055D3E4(); /* call 0x0055D3E4 */

loc_0055D4AE: ;
    MEM32(0x762C98) = MEM32(0x762C98) & 0;

loc_0055D4B5: ;
    edx = MEM32(esp + 8);
    if (TEST_NZ(edx, edx)) { sub_0055D4C4(); return; } /* jne: not equal / not zero */

loc_0055D4BD: ;
    eax = 0xFA0A1F00u;
    g_seh_ebp = ebp; sub_0055D4D3(); return; /* tail jmp 0x0055D4D3 */

}

/**
 * sub_0055D4EE
 * Original: 0x0055D4EE - 0x0055D565 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D4EE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055D4EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055D4FE: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi + 0x3A));
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 0x10)) { sub_0055D565(); return; } /* je: equal / zero */

loc_0055D50A: ;
    if (CMP_NE(MEM32(0x762C94), 1)) goto loc_0055D55D; /* jne: not equal / not zero */

loc_0055D513: ;
    if (CMP_EQ(MEM32(0x762C48), ebx)) goto loc_0055D55D; /* je: equal / zero */

loc_0055D51B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    edi = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055D528: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    if (TEST_Z(LO8(eax), 2)) goto loc_0055D540; /* je: equal / zero */

loc_0055D530: ;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_0055D540; /* jne: not equal / not zero */

loc_0055D534: ;
    if (TEST_Z(HI8(eax), 2)) goto loc_0055D545; /* je: equal / zero */

loc_0055D539: ;
    edi = 0x1000000;
    goto loc_0055D545;

loc_0055D540: ;
    edi = 0x80000600u;

loc_0055D545: ;
    eax = MEM32(0x762C48);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(0x762C48) = ebx;
    PUSH32(esp, 0); sub_0055AD3B(); /* call 0x0055AD3B */

loc_0055D55A: ;
    edi = MEM32(ebp + 8);

loc_0055D55D: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xEF;
    PUSH32(esp, 0x14);
    g_seh_ebp = ebp; sub_0055D5DC(); return; /* tail jmp 0x0055D5DC */

}

/**
 * sub_0055D69F
 * Original: 0x0055D69F - 0x0055D76F (208 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D69F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055D69F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055D6AE: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, 4);
    SET_LO8(edx, 3);
    POP32(esp, esi);
    MEM32(ebp + -4) = 1;
    edi = 0x55D337;
    if (CMP_EQ(eax, ecx)) { sub_0055D76F(); return; } /* je: equal / zero */

loc_0055D6C9: ;
    SET_LO8(ebx, MEM8(ebp + 0xC));
    if (CMP_B(MEM8(eax + 2), LO8(ebx))) { sub_0055D76F(); return; } /* jb: below (unsigned <) */

loc_0055D6D5: ;
    (void)0; /* cmp MEM8(ebp + 0x14), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    MEM32(0x762C48) = eax;
    if (CMP_EQ(MEM8(ebp + 0x14), LO8(ecx))) goto loc_0055D6F3; /* je: equal / zero */

loc_0055D6E2: ;
    edx = 0; /* xor self */
    edx++;
    esi = edx;
    edi = 0x55D363;
    MEM32(ebp + -4) = 2;

loc_0055D6F3: ;
    PUSH32(esp, MEM32(ebp + -4));
    SET_LO16(eax, ZX8(LO8(ebx)));
    MEM32(0x762C20) = edi;
    edi = MEM32(ebp + 8);
    MEM8(0x762C18) = 0x30;
    MEM8(0x762C19) = 0x40;
    MEM32(0x762C24) = edi;
    MEM32(0x762C28) = ecx;
    MEM32(0x762C30) = ecx;
    MEM32(0x762C2C) = ecx;
    MEM8(0x762C34) = LO8(ecx);
    MEM8(0x762C35) = LO8(ecx);
    MEM8(0x762C36) = LO8(ecx);
    MEM8(0x762C40) = 0x23;
    MEM8(0x762C41) = LO8(edx);
    MEM16(0x762C42) = LO16(esi);
    MEM16(0x762C44) = LO16(eax);
    MEM16(0x762C46) = LO16(ecx);
    PUSH32(esp, 0); sub_0055D48B(); /* call 0x0055D48B */

loc_0055D761: ;
    PUSH32(esp, 0x762C18);
    ecx = edi;
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055D76D: ;
    g_seh_ebp = ebp; sub_0055D77F(); return; /* tail jmp 0x0055D77F */

}

/**
 * sub_0055D786
 * Original: 0x0055D786 - 0x0055D7A8 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D786(void)
{

loc_0055D786: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x55D63C;
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055D7A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D7A8
 * Original: 0x0055D7A8 - 0x0055D7DA (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D7A8(void)
{

loc_0055D7A8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055D7B4: ;
    edx = MEM32(eax + 0x3C);
    ecx = eax + 8;
    MEM8(ecx) = 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x43;
    MEM32(eax + 0x10) = 0x55D786;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055D7D6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D921
 * Original: 0x0055D921 - 0x0055D971 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D921(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055D921: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055D92F: ;
    esi = eax;
    MEM8(esi) = MEM8(esi) | 2;
    ebx = 0; /* xor self */
    ebx++;
    MEM8(ebp + -4) = LO8(ebx);

loc_0055D93A: ;
    if (TEST_Z(MEM8(esi + 5), LO8(ebx))) goto loc_0055D951; /* je: equal / zero */

loc_0055D93F: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0055AEB7(); /* call 0x0055AEB7 */

loc_0055D94A: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    MEM8(esi + 5) = MEM8(esi + 5) & LO8(eax);

loc_0055D951: ;
    ebx = ebx << 1;
    MEM8(ebp + -4) = MEM8(ebp + -4) + 1;
    SET_LO8(eax, MEM8(ebp + -4));
    if (CMP_BE(LO8(eax), MEM8(esi + 2))) goto loc_0055D93A; /* jbe: below or equal (unsigned <=) */

loc_0055D95E: ;
    (void)0; /* test MEM8(esi), 8 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(MEM8(esi), 8)) goto loc_0055D96D; /* je: equal / zero */

loc_0055D965: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0055D7A8(); /* call 0x0055D7A8 */

loc_0055D96D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055DB68
 * Original: 0x0055DB68 - 0x0055DB99 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DB68(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055DB68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055DB78: ;
    SET_LO8(ebx, MEM8(eax + 4));
    ecx = 0; /* xor self */
    SET_LO8(edx, 1);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(ebx);

loc_0055DB85: ;
    if (TEST_NZ(MEM8(ebp + 0xB), LO8(edx))) { sub_0055DB99(); return; } /* jne: not equal / not zero */

loc_0055DB8A: ;
    MEM8(eax + 3) = MEM8(eax + 3) + 1;
    SET_LO8(ebx, MEM8(eax + 3));
    SET_LO8(edx, LO8(edx) << 1);
    if (CMP_BE(LO8(ebx), MEM8(eax + 2))) goto loc_0055DB85; /* jbe: below or equal (unsigned <=) */

loc_0055DB97: ;
    g_seh_ebp = ebp; sub_0055DBA1(); return; /* tail jmp 0x0055DBA1 */

}

/**
 * sub_0055DC3B
 * Original: 0x0055DC3B - 0x0055DC54 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DC3B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055DC3B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055DC47: ;
    (void)0; /* test MEM8(eax), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(eax), 2)) { sub_0055DC54(); return; } /* je: equal / zero */

loc_0055DC4D: ;
    PUSH32(esp, 0); sub_0055D7A8(); /* call 0x0055D7A8 */

loc_0055DC52: ;
    g_seh_ebp = ebp; sub_0055DC67(); return; /* tail jmp 0x0055DC67 */

}

/**
 * sub_0055DE12
 * Original: 0x0055DE12 - 0x0055DF28 (278 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DE12(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055DE12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055B86A(); /* call 0x0055B86A */

loc_0055DE20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    edi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055DE2D: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    if (CMP_L(MEM32(esi + 4), ebx)) { sub_0055DF28(); return; } /* jl: less (signed <) */

loc_0055DE3B: ;
    SET_LO16(ecx, MEM16(0x762BEA));
    edx = 0; /* xor self */
    (void)0; /* cmp LO16(ecx), 0x30 - flags set for next jcc */
    eax = 0x762BE8;
    if (CMP_A(LO16(ecx), 0x30)) { sub_0055DF28(); return; } /* ja: above (unsigned >) */

loc_0055DE53: ;
    ecx = ZX16(LO16(ecx));
    (void)0; /* cmp MEM32(esi + 0x14), ecx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(MEM32(esi + 0x14), ecx)) { sub_0055DF28(); return; } /* jb: below (unsigned <) */

loc_0055DE62: ;
    SET_LO8(eax, MEM8(eax));
    ecx = ZX8(LO8(eax));
    edx = edx + ecx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_0055DF28(); return; } /* je: equal / zero */

loc_0055DE71: ;
    if (CMP_AE(edx, MEM32(ebp + 8))) { sub_0055DF28(); return; } /* jae: above or equal (unsigned >=) */

loc_0055DE7A: ;
    eax = edx + 0x762BE8;
    if (CMP_NE(MEM8(eax + 1), 5)) goto loc_0055DE62; /* jne: not equal / not zero */

loc_0055DE86: ;
    if (CMP_A(MEM16(eax + 4), 4)) goto loc_0055DE95; /* ja: above (unsigned >) */

loc_0055DE8D: ;
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(edi + 7) = LO8(ecx);
    goto loc_0055DE99;

loc_0055DE95: ;
    MEM8(edi + 7) = 4;

loc_0055DE99: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(esi) = 0x20;
    MEM8(esi + 1) = 2;
    MEM32(esi + 8) = ebx;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 3));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 3);
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = 0x10;
    SET_LO16(eax, ZX8(MEM8(edi + 7)));
    PUSH32(esp, esi);
    MEM16(esi + 0x1C) = LO16(eax);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055DECD: ;
    if (TEST_S(eax, eax)) { sub_0055DF28(); return; } /* jl: less (signed <) */

loc_0055DED1: ;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x3C) = eax;
    edi = MEM32(ebp + 0xC);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x55DD96;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = 9;
    SET_LO16(eax, ZX8(MEM8(0x762BED)));
    PUSH32(esp, ebx);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    PUSH32(esp, 0); sub_0055D48B(); /* call 0x0055D48B */

loc_0055DF1E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055DF26: ;
    g_seh_ebp = ebp; sub_0055DF31(); return; /* tail jmp 0x0055DF31 */

}

/**
 * sub_0055E01A
 * Original: 0x0055E01A - 0x0055E0A9 (143 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E01A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E01A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM8(esi + 0x460), 0 - flags set for next jcc */
    ebp = edx;
    SET_LO8(ebx, 1);
    if (CMP_BE(MEM8(esi + 0x460), 0)) goto loc_0055E0A4; /* jbe: below or equal (unsigned <=) */

loc_0055E02D: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, edi);

loc_0055E032: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    if (TEST_Z(MEM16(ebp), LO16(eax))) goto loc_0055E08F; /* je: equal / zero */

loc_0055E03C: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 2));
    ecx = ecx & eax;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0055E071; /* je: equal / zero */

loc_0055E049: ;
    ecx = esi + 0x461;
    SET_LO8(eax, MEM8(ecx));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0055E061; /* je: equal / zero */

loc_0055E055: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055AFF4(); /* call 0x0055AFF4 */

loc_0055E05F: ;
    goto loc_0055E065;

loc_0055E061: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(ecx) = LO8(eax);

loc_0055E065: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055ACC4(); /* call 0x0055ACC4 */

loc_0055E06F: ;
    goto loc_0055E08F;

loc_0055E071: ;
    edi = esi + 0x461;
    SET_LO8(eax, MEM8(edi));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0055E08F; /* je: equal / zero */

loc_0055E07D: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    PUSH32(esp, esi);
    MEM8(edi) = LO8(ecx);
    PUSH32(esp, 0); sub_0055AFF4(); /* call 0x0055AFF4 */

loc_0055E08F: ;
    MEM8(esp + 0x10) = MEM8(esp + 0x10) + 1;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(eax, LO8(eax) - 1);
    if (CMP_B(LO8(eax), MEM8(esi + 0x460))) goto loc_0055E032; /* jb: below (unsigned <) */

loc_0055E0A3: ;
    POP32(esp, edi);

loc_0055E0A4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E0A9
 * Original: 0x0055E0A9 - 0x0055E0F6 (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0A9(void)
{
    uint32_t ebp;

loc_0055E0A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x470) = ecx;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(eax);
    MEM16(ebp + 8) = 0x10;
    esi = MEM32(ebp + 8);
    MEM32(ecx + edx * 4 + 0x50) = esi;
    esi = eax + 0x4A0;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, edx);
    ecx = 0xFFF0BDC0u;
    PUSH32(esp, ecx);
    eax = eax + 0x478;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_0055E0F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055E0F6
 * Original: 0x0055E0F6 - 0x0055E113 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0F6(void)
{
    uint32_t ebp;

loc_0055E0F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + -4) = 1;
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4 + 0x50) = edx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E13E
 * Original: 0x0055E13E - 0x0055E1FD (191 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E13E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055E13E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    edx = ZX8(MEM8(esi + 0x460));
    ecx = eax + 0x54;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = ebp + -8;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(ebp + -12) = 1;
    if (CMP_BE(edx & edx, 0)) goto loc_0055E1EF; /* jbe: below or equal (unsigned <=) */

loc_0055E16B: ;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = edx;
    PUSH32(esp, ebx);

loc_0055E172: ;
    edi = MEM32(ecx);
    MEM32(ebp + -4) = edi;
    if (TEST_Z(MEM8(ebp + -2), 0x10)) goto loc_0055E1BC; /* je: equal / zero */

loc_0055E17D: ;
    ecx = MEM32(esi + 0x474);
    ebx = esi + 0x470;
    eax = MEM32(ebx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(eax, eax)) goto loc_0055E1BC; /* je: equal / zero */

loc_0055E195: ;
    eax = esi + 0x478;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055E1A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebx) = MEM32(ebx) & 0;
    MEM32(esi + 0x474) = MEM32(esi + 0x474) & 0;
    edi = edi & 0x200;
    edi = edi << 0xF;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + -28), _icall_esp); /* indirect call */
    }

loc_0055E1BC: ;
    if (TEST_Z(MEM8(ebp + -2), 1)) goto loc_0055E1D3; /* je: equal / zero */

loc_0055E1C2: ;
    eax = MEM32(ebp + -12);
    MEM16(ebp + -8) = MEM16(ebp + -8) | LO16(eax);
    if (TEST_Z(MEM8(ebp + -4), 1)) goto loc_0055E1D3; /* je: equal / zero */

loc_0055E1CF: ;
    MEM16(ebp + -6) = MEM16(ebp + -6) | LO16(eax);

loc_0055E1D3: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) << 1;
    MEM32(ecx) = eax;
    ecx = ecx + 4;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    MEM32(ebp + -16) = ecx;
    if ((MEM32(ebp + -20) != 0)) goto loc_0055E172; /* jne: not equal / not zero */

loc_0055E1EE: ;
    POP32(esp, ebx);

loc_0055E1EF: ;
    edx = ebp + -8;
    ecx = esi;
    PUSH32(esp, 0); sub_0055E01A(); /* call 0x0055E01A */

loc_0055E1F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E1FD
 * Original: 0x0055E1FD - 0x0055E210 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E1FD(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055E1FD: ;
    eax = MEM32(0x87C948);
    if (TEST_Z(eax, eax)) goto loc_0055E20F; /* je: equal / zero */

loc_0055E206: ;
    ecx = MEM32(eax + 0x18);
    MEM32(0x87C948) = ecx;

loc_0055E20F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055E210
 * Original: 0x0055E210 - 0x0055E241 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055E210: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edx;
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055E227: ;
    MEM8(ebp + -1) = LO8(eax);
    PUSH32(esp, 0); sub_0055E1FD(); /* call 0x0055E1FD */

loc_0055E22F: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_0055E241(); return; } /* jne: not equal / not zero */

loc_0055E235: ;
    MEM32(ebp + -8) = 0x80000100u;
    g_seh_ebp = ebp; sub_0055E36F(); return; /* tail jmp 0x0055E36F */

}

/**
 * sub_0055E384
 * Original: 0x0055E384 - 0x0055E3A5 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E384(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055E384: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 8);
    eax = eax & 1;
    MEM32(edx + 0x14) = eax;
    if (CMP_NE(MEM8(ecx + 0x26), 0)) goto loc_0055E39C; /* jne: not equal / not zero */

loc_0055E396: ;
    if (CMP_EQ(MEM8(ecx + 0x27), 0)) goto loc_0055E3A2; /* je: equal / zero */

loc_0055E39C: ;
    eax = eax | 2;
    MEM32(edx + 0x14) = eax;

loc_0055E3A2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E3A5
 * Original: 0x0055E3A5 - 0x0055E3D3 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E3A5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055E3A5: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    if (TEST_Z(LO8(edx), 4)) goto loc_0055E3B4; /* je: equal / zero */

loc_0055E3B0: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0xFFFFFFFDu;

loc_0055E3B4: ;
    if (TEST_Z(LO8(edx), 8)) goto loc_0055E3BD; /* je: equal / zero */

loc_0055E3B9: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 2;

loc_0055E3BD: ;
    if (TEST_NZ(LO8(edx), 1)) goto loc_0055E3D0; /* jne: not equal / not zero */

loc_0055E3C2: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(LO8(ecx), 1)) goto loc_0055E3D0; /* je: equal / zero */

loc_0055E3CA: ;
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 8) = ecx;

loc_0055E3D0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E3D3
 * Original: 0x0055E3D3 - 0x0055E3F8 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E3D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E3D3: ;
    eax = MEM32(ecx + 0x41C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0055E3ED; /* je: equal / zero */

loc_0055E3E0: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    if (CMP_NE(eax, edx)) goto loc_0055E3E0; /* jne: not equal / not zero */

loc_0055E3E9: ;
    if (TEST_NZ(esi, esi)) { sub_0055E3F8(); return; } /* jne: not equal / not zero */

loc_0055E3ED: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x41C) = eax;
    g_seh_ebp = ebp; sub_0055E3FE(); return; /* tail jmp 0x0055E3FE */

}

/**
 * sub_0055E40C
 * Original: 0x0055E40C - 0x0055E431 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E40C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E40C: ;
    eax = MEM32(ecx + 0x424);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0055E426; /* je: equal / zero */

loc_0055E419: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    if (CMP_NE(eax, edx)) goto loc_0055E419; /* jne: not equal / not zero */

loc_0055E422: ;
    if (TEST_NZ(esi, esi)) { sub_0055E431(); return; } /* jne: not equal / not zero */

loc_0055E426: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x424) = eax;
    g_seh_ebp = ebp; sub_0055E437(); return; /* tail jmp 0x0055E437 */

}

/**
 * sub_0055E445
 * Original: 0x0055E445 - 0x0055E464 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E445(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E445: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0055E45C; /* je: equal / zero */

loc_0055E44F: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    if (CMP_NE(eax, edx)) goto loc_0055E44F; /* jne: not equal / not zero */

loc_0055E458: ;
    if (TEST_NZ(esi, esi)) { sub_0055E464(); return; } /* jne: not equal / not zero */

loc_0055E45C: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x28) = eax;
    g_seh_ebp = ebp; sub_0055E46A(); return; /* tail jmp 0x0055E46A */

}

/**
 * sub_0055E474
 * Original: 0x0055E474 - 0x0055E4EA (118 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E474(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E474: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_EQ(MEM8(edi + 0x26), 0)) goto loc_0055E4E7; /* je: equal / zero */

loc_0055E47E: ;
    eax = ZX8(MEM8(edi + 0x11));
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((eax == 0)) goto loc_0055E4A6; /* je: equal / zero */

loc_0055E489: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0055E498; /* je: equal / zero */

loc_0055E48D: ;
    eax--;
    if ((eax != 0)) goto loc_0055E4E5; /* jne: not equal / not zero */

loc_0055E490: ;
    ebx = edi + 0x28;
    ebp = edi + 0x2C;
    goto loc_0055E4B2;

loc_0055E498: ;
    ebx = ecx + 0x424;
    ebp = ecx + 0x428;
    goto loc_0055E4B2;

loc_0055E4A6: ;
    ebx = ecx + 0x41C;
    ebp = ecx + 0x420;

loc_0055E4B2: ;
    PUSH32(esp, esi);

loc_0055E4B3: ;
    esi = MEM32(ebx);
    if (CMP_NE(MEM32(esi + 0x10), edi)) goto loc_0055E4D1; /* jne: not equal / not zero */

loc_0055E4BA: ;
    eax = MEM32(esi + 0x24);
    MEM32(ebx) = eax;
    MEM32(esi + 4) = 0xC000000Fu;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055BF5A(); /* call 0x0055BF5A */

loc_0055E4CF: ;
    goto loc_0055E4D8;

loc_0055E4D1: ;
    MEM32(esp + 0x10) = esi;
    ebx = esi + 0x24;

loc_0055E4D8: ;
    if (CMP_NE(MEM32(ebp), esi)) goto loc_0055E4B3; /* jne: not equal / not zero */

loc_0055E4DD: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    POP32(esp, esi);

loc_0055E4E5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055E4E7: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E4EA
 * Original: 0x0055E4EA - 0x0055E527 (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E4EA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055E4EA: ;
    PUSH32(esp, esi);
    esi = edx;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) + 1;
    (void)0; /* test MEM8(esi + 0x10), 0x20 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(MEM8(esi + 0x10), 0x20)) goto loc_0055E524; /* jne: not equal / not zero */

loc_0055E4F9: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    PUSH32(esp, 0); sub_0055FC10(); /* call 0x0055FC10 */

loc_0055E502: ;
    eax++;
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(MEM32(edi + 0x438), 0)) goto loc_0055E513; /* je: equal / zero */

loc_0055E50F: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x40;

loc_0055E513: ;
    ecx = MEM32(edi);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0x10) = eax;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x20;

loc_0055E524: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E562
 * Original: 0x0055E562 - 0x0055E577 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E562(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E562: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(MEM8(esi + 0x22), 1)) { sub_0055E577(); return; } /* je: equal / zero */

loc_0055E56D: ;
    eax = 0x40020000;
    g_seh_ebp = ebp; sub_0055E615(); return; /* tail jmp 0x0055E615 */

}

/**
 * sub_0055E619
 * Original: 0x0055E619 - 0x0055E64F (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E619(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E619: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebp = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055E62A: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x10;
    edx = esi;
    ecx = ebp;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_0055E474(); /* call 0x0055E474 */

loc_0055E639: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0055E64F(); return; } /* je: equal / zero */

loc_0055E640: ;
    if (CMP_EQ(LO8(eax), 2)) { sub_0055E64F(); return; } /* je: equal / zero */

loc_0055E644: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0055FA01(); /* call 0x0055FA01 */

loc_0055E64D: ;
    g_seh_ebp = ebp; sub_0055E658(); return; /* tail jmp 0x0055E658 */

}

/**
 * sub_0055E680
 * Original: 0x0055E680 - 0x0055E6D3 (83 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E680: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebp = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055E694: ;
    edx = edi;
    ecx = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_0055E474(); /* call 0x0055E474 */

loc_0055E6A1: ;
    if (CMP_EQ(MEM8(edi + 0x27), LO8(ebx))) goto loc_0055E6C1; /* je: equal / zero */

loc_0055E6A6: ;
    eax = ebp + 0x430;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    edx = edi;
    ecx = ebp;
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_0055E4EA(); /* call 0x0055E4EA */

loc_0055E6BC: ;
    ebx = 0x40000000;

loc_0055E6C1: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055E6CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E6D3
 * Original: 0x0055E6D3 - 0x0055E7C0 (237 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E6D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055E6D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(edi + 1));
    if (CMP_G(eax, 0xC)) goto loc_0055E76B; /* jg: greater (signed >) */

loc_0055E6E8: ;
    if (CMP_EQ(eax, 0xC)) goto loc_0055E75F; /* je: equal / zero */

loc_0055E6EA: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0055E753; /* je: equal / zero */

loc_0055E6F1: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0055E747; /* je: equal / zero */

loc_0055E6F5: ;
    eax--;
    if ((eax == 0)) goto loc_0055E738; /* je: equal / zero */

loc_0055E6F8: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0055E726; /* je: equal / zero */

loc_0055E6FC: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0055E717; /* je: equal / zero */

loc_0055E700: ;
    eax = eax - ecx;
    if ((eax != 0)) goto loc_0055E7B9; /* jne: not equal / not zero */

loc_0055E708: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_005605F0(); /* call 0x005605F0 */

loc_0055E712: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E717: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_00560376(); /* call 0x00560376 */

loc_0055E721: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E726: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0055FC10(); /* call 0x0055FC10 */

loc_0055E72E: ;
    MEM32(edi + 0x14) = eax;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0055E7CC(); return; /* tail jmp 0x0055E7CC */

loc_0055E738: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_0055E3A5(); /* call 0x0055E3A5 */

loc_0055E742: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E747: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_0055E384(); /* call 0x0055E384 */

loc_0055E751: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E753: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_0055E210(); /* call 0x0055E210 */

loc_0055E75D: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E75F: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_00560757(); /* call 0x00560757 */

loc_0055E769: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E76B: ;
    if (CMP_EQ(eax, 0xD)) { sub_0055E7C0(); return; } /* je: equal / zero */

loc_0055E770: ;
    if (CMP_LE(eax, 0x3F)) goto loc_0055E7B9; /* jle: less or equal (signed <=) */

loc_0055E775: ;
    if (CMP_LE(eax, 0x41)) goto loc_0055E7AD; /* jle: less or equal (signed <=) */

loc_0055E77A: ;
    if (CMP_EQ(eax, 0x43)) goto loc_0055E7A1; /* je: equal / zero */

loc_0055E77F: ;
    if (CMP_EQ(eax, 0x46)) goto loc_0055E795; /* je: equal / zero */

loc_0055E784: ;
    if (CMP_NE(eax, 0x4A)) goto loc_0055E7B9; /* jne: not equal / not zero */

loc_0055E789: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_00560523(); /* call 0x00560523 */

loc_0055E793: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E795: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_0055E680(); /* call 0x0055E680 */

loc_0055E79F: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E7A1: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_0055E619(); /* call 0x0055E619 */

loc_0055E7AB: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E7AD: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0); sub_00560F20(); /* call 0x00560F20 */

loc_0055E7B7: ;
    g_seh_ebp = ebp; sub_0055E7CA(); return; /* tail jmp 0x0055E7CA */

loc_0055E7B9: ;
    esi = 0x80000200u;
    g_seh_ebp = ebp; sub_0055E7CC(); return; /* tail jmp 0x0055E7CC */

}

/**
 * sub_0055E7EB
 * Original: 0x0055E7EB - 0x0055E806 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E7EB(void)
{

loc_0055E7EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D30);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x762D08);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_0055E805: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055E817
 * Original: 0x0055E817 - 0x0055E83A (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E817(void)
{

loc_0055E817: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0055B86E(); /* call 0x0055B86E */

loc_0055E823: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_0055AD40(); /* call 0x0055AD40 */

loc_0055E82A: ;
    MEM32(esi) = MEM32(esi) & 0;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    MEM16(0x762CB2) = MEM16(0x762CB2) - 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E83A
 * Original: 0x0055E83A - 0x0055E8A4 (106 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E83A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E83A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM16(0x762CB0), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    edi = ecx;
    if (CMP_BE(MEM16(0x762CB0), LO16(ebx))) goto loc_0055E89D; /* jbe: below or equal (unsigned <=) */

loc_0055E851: ;
    PUSH32(esp, esi);

loc_0055E852: ;
    eax = MEM32(0x762CB4);
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    eax = eax + esi;
    if (TEST_Z(MEM8(eax + 4), 1)) goto loc_0055E88D; /* je: equal / zero */

loc_0055E865: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0); sub_0055B9DF(); /* call 0x0055B9DF */

loc_0055E86C: ;
    if (CMP_NE(eax, MEM32(esp + 0x10))) goto loc_0055E88D; /* jne: not equal / not zero */

loc_0055E872: ;
    eax = MEM32(0x762CB4);
    eax = eax + esi;
    if (CMP_NE(MEM32(eax + 0xE), edi)) goto loc_0055E88D; /* jne: not equal / not zero */

loc_0055E87E: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), 8)) goto loc_0055E88D; /* je: equal / zero */

loc_0055E886: ;
    if (TEST_NZ(LO8(ecx), 2)) goto loc_0055E88D; /* jne: not equal / not zero */

loc_0055E88B: ;
    ebp = eax;

loc_0055E88D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    SET_LO16(eax, ZX8(LO8(ebx)));
    if (CMP_B(LO16(eax), MEM16(0x762CB0))) goto loc_0055E852; /* jb: below (unsigned <) */

loc_0055E89C: ;
    POP32(esp, esi);

loc_0055E89D: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E8A4
 * Original: 0x0055E8A4 - 0x0055E94F (171 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E8A4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055E8A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = esi + 0x52;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 0x82;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = edx;
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055E8C8: ;
    if (TEST_S(eax, eax)) goto loc_0055E94A; /* jl: less (signed <) */

loc_0055E8CC: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 2;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0x67) = LO8(eax);
    eax = MEM32(ebp + -4);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055E8FF: ;
    if (TEST_S(eax, eax)) goto loc_0055E94A; /* jl: less (signed <) */

loc_0055E903: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebp + -4);
    if (TEST_Z(MEM8(ecx), 2)) goto loc_0055E94A; /* je: equal / zero */

loc_0055E911: ;
    if (CMP_EQ(MEM8(edi + 9), 0)) goto loc_0055E94A; /* je: equal / zero */

loc_0055E917: ;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x67) = LO8(eax);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055E940: ;
    if (TEST_S(eax, eax)) goto loc_0055E94A; /* jl: less (signed <) */

loc_0055E944: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0x10) = ecx;

loc_0055E94A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E94F
 * Original: 0x0055E94F - 0x0055E980 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E94F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E94F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* test MEM8(esi + 0xA2), 2 - flags set for next jcc */
    eax = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(esi + 0xA2), 2)) { sub_0055E980(); return; } /* je: equal / zero */

loc_0055E962: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x55E94F;
    MEM32(eax + 0xC) = esi;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) & 0xFD;
    g_seh_ebp = ebp; sub_0055E9CA(); return; /* tail jmp 0x0055E9CA */

}

/**
 * sub_0055EBBC
 * Original: 0x0055EBBC - 0x0055EBE6 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EBBC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055EBBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 4));
    esi = edx;
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_0055B889(); /* call 0x0055B889 */

loc_0055EBCB: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(edi, edi)) { sub_0055EBE6(); return; } /* je: equal / zero */

loc_0055EBD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0055EBDC: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561044)); return; /* indirect tail jmp */

}

/**
 * sub_0055EC4F
 * Original: 0x0055EC4F - 0x0055EC9C (77 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EC4F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055EC4F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x561150);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = edx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = 0xFFF85EE0u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0055EC7C: ;
    if (CMP_NE(eax, 0x102)) goto loc_0055EC95; /* jne: not equal / not zero */

loc_0055EC83: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055B857(); /* call 0x0055B857 */

loc_0055EC8C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0055EC95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EDC3
 * Original: 0x0055EDC3 - 0x0055EDE1 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EDC3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055EDC3: ;
    edx = ecx + 0xA2;
    SET_LO8(eax, MEM8(edx));
    if (TEST_NZ(LO8(eax), 4)) goto loc_0055EDE0; /* jne: not equal / not zero */

loc_0055EDCF: ;
    PUSH32(esp, ecx);
    ecx = ecx + 0x82;
    SET_LO8(eax, LO8(eax) | 4);
    PUSH32(esp, ecx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, 0); sub_0055E94F(); /* call 0x0055E94F */

loc_0055EDE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055EEF0
 * Original: 0x0055EEF0 - 0x0055EF7B (139 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EEF0(void)
{

loc_0055EEF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x762D08);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0055EEFC: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    MEM8(0x762CD0) = 0x30;
    MEM8(0x762CD1) = 0x40;
    MEM32(0x762CD8) = 0x55ED26;
    MEM32(0x762CDC) = esi;
    MEM32(0x762CE0) = eax;
    MEM32(0x762CE8) = eax;
    MEM32(0x762CE4) = eax;
    MEM8(0x762CEC) = LO8(eax);
    MEM8(0x762CED) = 1;
    MEM8(0x762CEE) = LO8(eax);
    MEM8(0x762CF8) = 0x21;
    MEM8(0x762CF9) = 0xA;
    MEM16(0x762CFA) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x762CFC) = LO16(ecx);
    MEM16(0x762CFE) = LO16(eax);
    PUSH32(esp, 0); sub_0055E7EB(); /* call 0x0055E7EB */

loc_0055EF6B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x762CD0);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055EF77: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EFB6
 * Original: 0x0055EFB6 - 0x0055F023 (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EFB6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055EFB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055EFC6: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xA3);
    eax = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0055EFDC; /* je: equal / zero */

loc_0055EFD8: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0055EFDC: ;
    if (CMP_EQ(MEM32(esi), ebx)) { sub_0055F023(); return; } /* je: equal / zero */

loc_0055EFE0: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 1;
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -20;
    ecx = esi;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 0x9E) = eax;
    PUSH32(esp, 0); sub_0055EDC3(); /* call 0x0055EDC3 */

loc_0055F00A: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055F013: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_0055F021: ;
    g_seh_ebp = ebp; sub_0055F02C(); return; /* tail jmp 0x0055F02C */

}

/**
 * sub_0055F04A
 * Original: 0x0055F04A - 0x0055F162 (280 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F04A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055F04A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    esi = edx;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055F05F: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(edi, ebx)) { sub_0055F162(); return; } /* je: equal / zero */

loc_0055F06C: ;
    if (TEST_NZ(MEM8(edi + 4), 2)) { sub_0055F162(); return; } /* jne: not equal / not zero */

loc_0055F076: ;
    if (CMP_NE(MEM8(edi + 0xD), LO8(ebx))) goto loc_0055F086; /* jne: not equal / not zero */

loc_0055F07B: ;
    MEM32(esi) = 0x32;
    g_seh_ebp = ebp; sub_0055F168(); return; /* tail jmp 0x0055F168 */

loc_0055F086: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0055F0A5; /* je: equal / zero */

loc_0055F08D: ;
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x5610F8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56104C), _icall_esp); /* indirect call */
    }

loc_0055F09E: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0055F0A8; /* jge: greater or equal (signed >=) */

loc_0055F0A2: ;
    MEM32(esi + 4) = ebx;

loc_0055F0A5: ;
    MEM32(esi + 0xC) = ebx;

loc_0055F0A8: ;
    ecx = esi + 0x40;
    SET_LO8(eax, MEM8(ecx));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0055F0BF; /* jne: not equal / not zero */

loc_0055F0B4: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    if (CMP_AE(LO8(eax), MEM8(esi + 0x41))) goto loc_0055F0BF; /* jae: above or equal (unsigned >=) */

loc_0055F0BC: ;
    MEM8(esi + 0x41) = LO8(eax);

loc_0055F0BF: ;
    eax = MEM32(edi + 0xE);
    if (TEST_Z(MEM8(eax + 0x28), 2)) goto loc_0055F0CB; /* je: equal / zero */

loc_0055F0C8: ;
    ecx = esi + 0x42;

loc_0055F0CB: ;
    edx = MEM32(ebp + -8);
    (void)0; /* cmp MEM32(edx + 0x10), ebx - flags set for next jcc */
    eax = esi + 0x10;
    MEM32(esi + 0x1C) = esi;
    MEM32(esi + 0x18) = 0x55EDE1;
    if (CMP_EQ(MEM32(edx + 0x10), ebx)) goto loc_0055F103; /* je: equal / zero */

loc_0055F0E0: ;
    MEM8(eax) = 0x28;
    MEM8(esi + 0x11) = 0x41;
    edx = MEM32(edx + 0x10);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX8(MEM8(esi + 0x41));
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    goto loc_0055F14A;

loc_0055F103: ;
    MEM32(esi + 0x28) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x41));
    edx = ZX8(LO8(ecx));
    MEM32(esi + 0x24) = edx;
    SET_LO16(edx, ZX8(MEM8(ebp + -1)));
    SET_LO16(edx, LO16(edx) | 0x200);
    MEM8(eax) = 0x30;
    MEM8(esi + 0x11) = 0x40;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM8(esi + 0x38) = 0x21;
    MEM8(esi + 0x39) = 9;
    MEM16(esi + 0x3A) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(edi + 5)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(esi + 0x3C) = LO16(edx);
    MEM16(esi + 0x3E) = LO16(ecx);

loc_0055F14A: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055F158: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055B889(); /* call 0x0055B889 */

loc_0055F15E: ;
    MEM32(esi) = eax;
    g_seh_ebp = ebp; sub_0055F168(); return; /* tail jmp 0x0055F168 */

}

/**
 * sub_0055F178
 * Original: 0x0055F178 - 0x0055F22B (179 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F178(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F178: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_0055B963(); /* call 0x0055B963 */

loc_0055F184: ;
    SET_LO8(ecx, MEM8(eax + 5));
    if (CMP_NE(LO8(ecx), 3)) { sub_0055F22B(); return; } /* jne: not equal / not zero */

loc_0055F190: ;
    if (CMP_NE(MEM8(eax + 7), 1)) goto loc_0055F20F; /* jne: not equal / not zero */

loc_0055F196: ;
    eax = 0; /* xor self */
    MEM8(0x762CD0) = 0x30;
    MEM8(0x762CD1) = 0x40;
    MEM32(0x762CD8) = 0x55EE65;
    MEM32(0x762CDC) = esi;
    MEM32(0x762CE0) = eax;
    MEM32(0x762CE8) = eax;
    MEM32(0x762CE4) = eax;
    MEM8(0x762CEC) = LO8(eax);
    MEM8(0x762CED) = 1;
    MEM8(0x762CEE) = LO8(eax);
    MEM8(0x762CF8) = 0x21;
    MEM8(0x762CF9) = 0xB;
    MEM16(0x762CFA) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x762CFC) = LO16(ecx);
    MEM16(0x762CFE) = LO16(eax);
    PUSH32(esp, 0); sub_0055E7EB(); /* call 0x0055E7EB */

loc_0055F201: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x762CD0);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055F20D: ;
    g_seh_ebp = ebp; sub_0055F252(); return; /* tail jmp 0x0055F252 */

loc_0055F20F: ;
    if (CMP_NE(LO8(ecx), 3)) { sub_0055F22B(); return; } /* jne: not equal / not zero */

loc_0055F214: ;
    if (CMP_NE(MEM8(eax + 7), 2)) { sub_0055F22B(); return; } /* jne: not equal / not zero */

loc_0055F21A: ;
    PUSH32(esp, 0); sub_0055E7EB(); /* call 0x0055E7EB */

loc_0055F21F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0055EEF0(); /* call 0x0055EEF0 */

loc_0055F229: ;
    g_seh_ebp = ebp; sub_0055F252(); return; /* tail jmp 0x0055F252 */

}

/**
 * sub_0055F34A
 * Original: 0x0055F34A - 0x0055F38E (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F34A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055F34A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055F36D: ;
    edx = edi;
    ecx = esi;
    MEM8(ebp + -1) = LO8(eax);
    PUSH32(esp, 0); sub_0055E83A(); /* call 0x0055E83A */

loc_0055F379: ;
    edx = eax;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ebp + -20) = edx;
    if (CMP_NE(edx, ebx)) { sub_0055F38E(); return; } /* jne: not equal / not zero */

loc_0055F382: ;
    MEM32(ebp + -8) = 0x48F;
    g_seh_ebp = ebp; sub_0055F579(); return; /* tail jmp 0x0055F579 */

}

/**
 * sub_0055F6EE
 * Original: 0x0055F6EE - 0x0055F70B (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F6EE(void)
{

loc_0055F6EE: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    MEM8(eax + 0x1F) = 0xFF;
    ecx = MEM32(0x87C94C);
    MEM32(eax + 0x14) = ecx;
    MEM32(0x87C94C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F70B
 * Original: 0x0055F70B - 0x0055F71F (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F70B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F70B: ;
    (void)0; /* cmp MEM8(edx + 0x11), 0 - flags set for next jcc */
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_NE(MEM8(edx + 0x11), 0)) { sub_0055F71F(); return; } /* jne: not equal / not zero */

loc_0055F714: ;
    esi = ecx + 0x40C;
    eax = eax + 0x20;
    g_seh_ebp = ebp; sub_0055F728(); return; /* tail jmp 0x0055F728 */

}

/**
 * sub_0055F748
 * Original: 0x0055F748 - 0x0055F75D (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F748(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F748: ;
    (void)0; /* cmp MEM8(edx + 0x11), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(edx + 0x11), 0)) { sub_0055F75D(); return; } /* jne: not equal / not zero */

loc_0055F750: ;
    esi = ecx + 0x40C;
    ecx = MEM32(ecx);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_0055F768(); return; /* tail jmp 0x0055F768 */

}

/**
 * sub_0055F798
 * Original: 0x0055F798 - 0x0055F7AE (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F798(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055F798: ;
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_0055F7AD; /* jbe: below or equal (unsigned <=) */

loc_0055F79E: ;
    PUSH32(esp, esi);

loc_0055F79F: ;
    esi = edx;
    esi = esi & 1;
    edx = edx >> 1;
    ecx--;
    eax = esi + eax * 2;
    if ((ecx != 0)) goto loc_0055F79F; /* jne: not equal / not zero */

loc_0055F7AC: ;
    POP32(esp, esi);

loc_0055F7AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F7AE
 * Original: 0x0055F7AE - 0x0055F7D6 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F7AE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055F7AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    (void)0; /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_B(LO8(ecx), 0x20)) { sub_0055F7D6(); return; } /* jb: below (unsigned <) */

loc_0055F7C0: ;
    edx = ZX8(LO8(ecx));
    PUSH32(esp, 5);
    edx = edx - 0x20;
    POP32(esp, ecx);
    PUSH32(esp, 0); sub_0055F798(); /* call 0x0055F798 */

loc_0055F7CE: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    g_seh_ebp = ebp; sub_0055F81F(); return; /* tail jmp 0x0055F81F */

}

/**
 * sub_0055F825
 * Original: 0x0055F825 - 0x0055F8B6 (145 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F825(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055F825: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    (void)0; /* cmp MEM8(esi + 0x11), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(esi + 0x11), 3)) goto loc_0055F889; /* jne: not equal / not zero */

loc_0055F836: ;
    SET_LO8(eax, 0x20);
    if (CMP_AE(MEM8(esi + 0x13), LO8(eax))) goto loc_0055F846; /* jae: above or equal (unsigned >=) */

loc_0055F83D: ;
    SET_LO8(edx, MEM8(esi + 0x13));

loc_0055F840: ;
    SET_LO8(eax, LO8(eax) >> 1);
    if (CMP_A(LO8(eax), LO8(edx))) goto loc_0055F840; /* ja: above (unsigned >) */

loc_0055F846: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(ebx, LO8(ebx) - 1);
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    edi = 0x2EE0;
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(LO8(eax), LO8(ebx))) goto loc_0055F895; /* ja: above (unsigned >) */

loc_0055F858: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    edx = eax + ecx + 0x10;

loc_0055F862: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + -2));
    SET_LO16(eax, LO16(eax) + MEM16(edx + 2));
    SET_LO16(eax, LO16(eax) + MEM16(edx));
    if (CMP_AE(LO16(eax), LO16(edi))) goto loc_0055F87C; /* jae: above or equal (unsigned >=) */

loc_0055F874: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(ebp + -5) = LO8(eax);

loc_0055F87C: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) + 1;
    edx = edx + 0x10;
    if (CMP_BE(MEM8(ebp + -1), LO8(ebx))) goto loc_0055F862; /* jbe: below or equal (unsigned <=) */

loc_0055F887: ;
    goto loc_0055F895;

loc_0055F889: ;
    SET_LO16(edi, MEM16(ecx + 0x10));
    SET_LO16(edi, LO16(edi) + MEM16(ecx + 0xE));
    MEM8(ebp + -5) = 0;

loc_0055F895: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    edi = ZX16(LO16(edi));
    edx = ZX16(LO16(eax));
    edx = edx + edi;
    edi = ZX16(MEM16(ecx + 0x414));
    if (CMP_LE(edx, edi)) { sub_0055F8B6(); return; } /* jle: less or equal (signed <=) */

loc_0055F8AC: ;
    eax = 0x80000800u;
    g_seh_ebp = ebp; sub_0055F9FC(); return; /* tail jmp 0x0055F9FC */

}

/**
 * sub_0055FA01
 * Original: 0x0055FA01 - 0x0055FA98 (151 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FA01(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055FA01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    SET_LO16(eax, MEM16(edx + 0x22));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x12));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    eax = eax << 4;
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi + 0xC;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = edx;
    MEM8(ebp + -12) = LO8(ebx);

loc_0055FA2E: ;
    if (CMP_EQ(eax, edx)) goto loc_0055FA3C; /* je: equal / zero */

loc_0055FA32: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_0055FA2E; /* jne: not equal / not zero */

loc_0055FA3C: ;
    ecx = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0055FA77; /* jne: not equal / not zero */

loc_0055FA43: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(edi + 0xC) = ecx;
    MEM32(ebp + -8) = edx;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0055FA7F; /* je: equal / zero */

loc_0055FA52: ;
    SET_LO8(edx, LO8(ebx));
    goto loc_0055FA5A;

loc_0055FA56: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0055FA69; /* je: equal / zero */

loc_0055FA5A: ;
    SET_LO8(edx, LO8(edx) >> 1);
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    if (CMP_EQ(MEM32(ecx + esi + 0x14), 0)) goto loc_0055FA56; /* je: equal / zero */

loc_0055FA69: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0055FA7C; /* je: equal / zero */

loc_0055FA77: ;
    edx = MEM32(ecx + 0x14);
    goto loc_0055FA7F;

loc_0055FA7C: ;
    edx = MEM32(ebp + -8);

loc_0055FA7F: ;
    ecx = MEM32(ebp + -4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    if (TEST_NZ(ecx, ecx)) { sub_0055FA98(); return; } /* jne: not equal / not zero */

loc_0055FA89: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_0055F7AE(); /* call 0x0055F7AE */

loc_0055FA96: ;
    g_seh_ebp = ebp; sub_0055FA9E(); return; /* tail jmp 0x0055FA9E */

}

/**
 * sub_0055FC10
 * Original: 0x0055FC10 - 0x0055FC34 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FC10(void)
{

loc_0055FC10: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x418);
    ecx = ZX16(MEM16(eax + 0x80));
    eax = ecx;
    eax = eax ^ edx;
    ecx = ecx & 0x7FFF;
    eax = eax & 0x8000;
    ecx = ecx | edx;
    eax = eax + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0055FC34
 * Original: 0x0055FC34 - 0x0055FD47 (275 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FC34(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055FC34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x418);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* TODO: cli  */
    eax = MEM32(ecx + 8);
    eax = ZX16(MEM16(eax + 0x80));
    ebx = MEM32(-25157620);
    /* TODO: sti  */
    esi = eax;
    eax = eax & 0x7FFF;
    esi = esi ^ edx;
    eax = eax | edx;
    esi = esi & 0x8000;
    esi = esi + eax;
    eax = esi;
    eax = eax - MEM32(ecx + 0x4D8);
    (void)0; /* cmp eax, 0x14 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_B(eax, 0x14)) goto loc_0055FD43; /* jb: below (unsigned <) */

loc_0055FC79: ;
    edx = MEM32(ecx + 0x4D0);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 4;
    edi = edi - ebx;
    if (TEST_NZ(edx, edx)) goto loc_0055FCA4; /* jne: not equal / not zero */

loc_0055FC8C: ;
    MEM32(ecx + 0x4D4) = MEM32(ecx + 0x4D4) & 0;
    MEM32(ecx + 0x4D0) = edi;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_0055FD42;

loc_0055FCA4: ;
    eax = edi;
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_0055FCAD; /* jns: not sign (positive) */

loc_0055FCAA: ;
    eax = eax + 0x2F;

loc_0055FCAD: ;
    PUSH32(esp, 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MEM32(ecx + 0x4D4);
    edx = eax;
    edx = edx - ebx;
    if ((edx != 0)) goto loc_0055FCD4; /* jne: not equal / not zero */

loc_0055FCBF: ;
    if (TEST_Z(eax, eax)) goto loc_0055FD42; /* je: equal / zero */

loc_0055FCC3: ;
    if (CMP_BE(MEM32(ebp + -4), 0x61A8)) goto loc_0055FD42; /* jbe: below or equal (unsigned <=) */

loc_0055FCCC: ;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_0055FCFE;

loc_0055FCD4: ;
    (void)0; /* cmp edx, 3 - flags set for next jcc */
    MEM32(ecx + 0x4D4) = eax;
    MEM32(ecx + 0x4D8) = esi;
    if (CMP_G(edx, 3)) goto loc_0055FC8C; /* jg: greater (signed >) */

loc_0055FCE5: ;
    if (CMP_L(edx, 0xFFFFFFFDu)) goto loc_0055FC8C; /* jl: less (signed <) */

loc_0055FCEA: ;
    if (TEST_Z(eax, eax)) goto loc_0055FD42; /* je: equal / zero */

loc_0055FCEE: ;
    if (CMP_LE(edx & edx, 0)) goto loc_0055FCF8; /* jle: less or equal (signed <=) */

loc_0055FCF2: ;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0055FCFE; /* jge: greater or equal (signed >=) */

loc_0055FCF6: ;
    (void)0; /* test edx, edx - flags set for next jcc */

loc_0055FCF8: ;
    if (CMP_GE(edx & edx, 0)) goto loc_0055FD42; /* jge: greater or equal (signed >=) */

loc_0055FCFA: ;
    if (CMP_G(ebx & ebx, 0)) goto loc_0055FD42; /* jg: greater (signed >) */

loc_0055FCFE: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edx;
    eax = 0x3FFF;
    if (CMP_LE(eax & eax, 0)) goto loc_0055FD1D; /* jle: less or equal (signed <=) */

loc_0055FD0E: ;
    esi = esi & eax;
    if (CMP_AE(esi, 0x2EE1)) goto loc_0055FD30; /* jae: above or equal (unsigned >=) */

loc_0055FD18: ;
    esi = edx + 1;
    goto loc_0055FD2A;

loc_0055FD1D: ;
    esi = esi & eax;
    if (CMP_BE(esi, 0x2ED1)) goto loc_0055FD30; /* jbe: below or equal (unsigned <=) */

loc_0055FD27: ;
    esi = edx + -1;

loc_0055FD2A: ;
    esi = esi ^ edx;
    esi = esi & eax;
    edx = edx ^ esi;

loc_0055FD30: ;
    eax = edx;
    eax = ~eax;
    eax = eax ^ edx;
    eax = eax & 0x7FFFFFFF;
    edx = ~edx;
    eax = eax ^ edx;
    MEM32(ecx + 0x34) = eax;

loc_0055FD42: ;
    POP32(esp, edi);

loc_0055FD43: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FD47
 * Original: 0x0055FD47 - 0x0055FDC3 (124 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FD47(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055FD47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edx;
    MEM8(esi + 0x27) = MEM8(esi + 0x27) - 1;
    eax = MEM32(edi + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = ecx;
    if (TEST_Z(eax, eax)) goto loc_0055FD6A; /* je: equal / zero */

loc_0055FD5C: ;
    ecx = ZX16(MEM16(edi + 0x20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_0055FD6A: ;
    if (TEST_Z(MEM8(edi + 0x22), 1)) goto loc_0055FDB3; /* je: equal / zero */

loc_0055FD70: ;
    eax = MEM32(ebx + 0x42C);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0055FDB3; /* je: equal / zero */

loc_0055FD7C: ;
    if (CMP_EQ(edi, eax)) goto loc_0055FD89; /* je: equal / zero */

loc_0055FD80: ;
    ecx = eax;
    eax = MEM32(eax + 0x24);
    if (TEST_NZ(eax, eax)) goto loc_0055FD7C; /* jne: not equal / not zero */

loc_0055FD89: ;
    if (TEST_Z(eax, eax)) goto loc_0055FDB3; /* je: equal / zero */

loc_0055FD8D: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0055FD9C; /* jne: not equal / not zero */

loc_0055FD91: ;
    ecx = MEM32(eax + 0x24);
    MEM32(ebx + 0x42C) = ecx;
    goto loc_0055FDA2;

loc_0055FD9C: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;

loc_0055FDA2: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    if ((MEM8(esi + 0x20) != 0)) goto loc_0055FDB3; /* jne: not equal / not zero */

loc_0055FDAB: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;

loc_0055FDB3: ;
    MEM8(edi + 0x22) = MEM8(edi + 0x22) | 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055BF5A(); /* call 0x0055BF5A */

loc_0055FDBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055FDC3
 * Original: 0x0055FDC3 - 0x0055FDF4 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FDC3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FDC3: ;
    eax = ZX8(MEM8(edx + 0x11));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0055FDE8; /* je: equal / zero */

loc_0055FDCC: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0055FDDC; /* je: equal / zero */

loc_0055FDD0: ;
    eax--;
    if ((eax != 0)) { sub_0055FDF4(); return; } /* jne: not equal / not zero */

loc_0055FDD3: ;
    MEM16(edx + 0x24) = MEM16(edx + 0x24) - 1;
    g_seh_ebp = ebp; sub_00560D88(); return; /* tail jmp 0x00560D88 */

loc_0055FDDC: ;
    MEM16(0x87C966) = MEM16(0x87C966) + 1;
    g_seh_ebp = ebp; sub_00560DDB(); return; /* tail jmp 0x00560DDB */

loc_0055FDE8: ;
    MEM16(0x87C962) = MEM16(0x87C962) + 1;
    g_seh_ebp = ebp; sub_00560E28(); return; /* tail jmp 0x00560E28 */

}

/**
 * sub_0055FDF5
 * Original: 0x0055FDF5 - 0x0055FE64 (111 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FDF5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055FDF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    eax = eax >> 0x1C;
    (void)0; /* cmp eax, 9 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ebx;
    MEM8(ebp + -1) = 1;
    if (CMP_NE(eax, 9)) { sub_0055FE64(); return; } /* jne: not equal / not zero */

loc_0055FE18: ;
    if (CMP_EQ(MEM8(ebx + 0x1D), 0)) { sub_0055FE64(); return; } /* je: equal / zero */

loc_0055FE1E: ;
    eax = MEM32(edx + 4);
    if (TEST_Z(eax, eax)) goto loc_0055FE53; /* je: equal / zero */

loc_0055FE25: ;
    ecx = MEM32(edx + 0xC);
    esi = 0xFFF;
    eax = eax & esi;
    ecx = ecx & esi;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_L(ecx, eax)) goto loc_0055FE43; /* jl: less (signed <) */

loc_0055FE38: ;
    eax = ZX8(MEM8(edx + 0x1D));
    eax = eax - ecx;
    eax = eax + MEM32(ebp + -12);
    goto loc_0055FE50;

loc_0055FE43: ;
    esi = ZX8(MEM8(edx + 0x1D));
    esi = esi - ecx;
    eax = esi + eax + -4096;

loc_0055FE50: ;
    eax--;
    goto loc_0055FE57;

loc_0055FE53: ;
    eax = ZX8(MEM8(edx + 0x1D));

loc_0055FE57: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax;
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    MEM8(ebp + -1) = 0;
    g_seh_ebp = ebp; sub_0055FE7D(); return; /* tail jmp 0x0055FE7D */

}

/**
 * sub_0055FEE9
 * Original: 0x0055FEE9 - 0x0055FF30 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FEE9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055FEE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    (void)0; /* cmp MEM8(esi + 0x1E), 1 - flags set for next jcc */
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = eax;
    if (CMP_NE(MEM8(esi + 0x1E), 1)) goto loc_0055FF1E; /* jne: not equal / not zero */

loc_0055FF04: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x87C940);
    eax = eax + ecx + -7;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055F6EE(); /* call 0x0055F6EE */

loc_0055FF17: ;
    MEM16(0x87C962) = MEM16(0x87C962) + 1;

loc_0055FF1E: ;
    if (TEST_Z(MEM8(esi + 3), 0xF0)) { sub_0055FF30(); return; } /* je: equal / zero */

loc_0055FF24: ;
    ecx = MEM32(ebp + -4);
    edx = esi;
    PUSH32(esp, 0); sub_0055FDF5(); /* call 0x0055FDF5 */

loc_0055FF2E: ;
    g_seh_ebp = ebp; sub_0055FF91(); return; /* tail jmp 0x0055FF91 */

}

/**
 * sub_0055FF95
 * Original: 0x0055FF95 - 0x00560097 (258 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FF95(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055FF95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    ebx = ecx;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x42C), edx - flags set for next jcc */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(MEM32(ebx + 0x42C), edx)) goto loc_00560086; /* je: equal / zero */

loc_0055FFB8: ;
    PUSH32(esp, esi);
    goto loc_0055FFBE;

loc_0055FFBB: ;
    edi = MEM32(ebp + -20);

loc_0055FFBE: ;
    ecx = MEM32(ebx + 0x42C);
    eax = MEM32(ecx + 0x24);
    MEM32(ebx + 0x42C) = eax;
    esi = MEM32(ecx + 0x10);
    if (CMP_AE(edi, MEM32(esi + 0x1C))) goto loc_0055FFE0; /* jae: above or equal (unsigned >=) */

loc_0055FFD5: ;
    MEM32(ecx + 0x24) = edx;
    MEM32(ebp + -4) = ecx;
    goto loc_00560075;

loc_0055FFE0: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0055FFF2; /* je: equal / zero */

loc_0055FFE7: ;
    edi++;
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM32(esi + 0x1C) = edi;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_0055FFD5;

loc_0055FFF2: ;
    eax = MEM32(esi + 8);
    edi = MEM32(0x87C940);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -24) = eax;
    eax = eax & 0xFFFFFFF0u;
    edx = edi + eax;
    (void)0; /* cmp ecx, MEM32(edx + 0x18) - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_00560028; /* je: equal / zero */

loc_00560010: ;
    ebx = MEM32(esi + 4);

loc_00560013: ;
    if (CMP_EQ(eax, ebx)) goto loc_00560025; /* je: equal / zero */

loc_00560017: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edx + 8);
    edx = edi + eax;
    if (CMP_NE(ecx, MEM32(edx + 0x18))) goto loc_00560013; /* jne: not equal / not zero */

loc_00560025: ;
    ebx = MEM32(ebp + -8);

loc_00560028: ;
    eax = MEM32(edx + 8);
    eax = eax ^ MEM32(ebp + -24);
    ecx = ebx;
    eax = eax & 0xF;
    eax = eax ^ MEM32(edx + 8);
    MEM32(esi + 8) = eax;
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    PUSH32(esp, 0); sub_0055FEE9(); /* call 0x0055FEE9 */

loc_00560042: ;
    eax = MEM32(ebp + -12);
    if (TEST_Z(eax, eax)) goto loc_00560068; /* je: equal / zero */

loc_00560049: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(0x87C940);
    ecx = ecx & 0xFFFFFFF0u;
    MEM32(edx + eax + 8) = ecx;
    eax = MEM32(esi + 8);
    eax = eax ^ MEM32(ebp + -16);
    eax = eax & 0xF;
    eax = eax ^ MEM32(ebp + -16);
    MEM32(esi + 8) = eax;

loc_00560068: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    if ((MEM8(esi + 0x20) != 0)) goto loc_00560075; /* jne: not equal / not zero */

loc_0056006D: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;

loc_00560075: ;
    (void)0; /* cmp MEM32(ebx + 0x42C), 0 - flags set for next jcc */
    edx = MEM32(ebp + -4);
    if (CMP_NE(MEM32(ebx + 0x42C), 0)) goto loc_0055FFBB; /* jne: not equal / not zero */

loc_00560085: ;
    POP32(esp, esi);

loc_00560086: ;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x42C) = edx;
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00560097
 * Original: 0x00560097 - 0x005600ED (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560097(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560097: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    SET_LO8(ebx, 0); /* xor self */

loc_005600A0: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    if ((ecx == 0)) goto loc_005600E9; /* je: equal / zero */

loc_005600AA: ;
    edx = MEM32(0x87C940);
    edx = edx + ecx;
    if (CMP_EQ(ecx, MEM32(esi + 4))) goto loc_005600D3; /* je: equal / zero */

loc_005600B7: ;
    eax = MEM32(edx + 8);
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    eax = eax ^ MEM32(esi + 8);
    ecx = edi;
    eax = eax & 0xF;
    eax = eax ^ MEM32(edx + 8);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0055FEE9(); /* call 0x0055FEE9 */

loc_005600D1: ;
    goto loc_005600E5;

loc_005600D3: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    eax = eax & 0xF;
    PUSH32(esp, edx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0055F6EE(); /* call 0x0055F6EE */

loc_005600E3: ;
    SET_LO8(ebx, 1);

loc_005600E5: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_005600A0; /* je: equal / zero */

loc_005600E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005600ED
 * Original: 0x005600ED - 0x00560174 (135 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005600ED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005600ED: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x430), ebp - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (CMP_EQ(MEM32(ebx + 0x430), ebp)) goto loc_00560163; /* je: equal / zero */

loc_00560100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00560102: ;
    edi = MEM32(ebx + 0x430);
    eax = MEM32(edi + 0x24);
    MEM32(ebx + 0x430) = eax;
    esi = MEM32(edi + 0x10);
    if (CMP_AE(edx, MEM32(esi + 0x1C))) goto loc_00560120; /* jae: above or equal (unsigned >=) */

loc_00560119: ;
    MEM32(edi + 0x14) = ebp;
    ebp = edi;
    goto loc_00560158;

loc_00560120: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00560134; /* je: equal / zero */

loc_00560127: ;
    ecx = edx + 1;
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_00560119;

loc_00560134: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00560097(); /* call 0x00560097 */

loc_0056013D: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    if ((MEM8(esi + 0x20) != 0)) goto loc_0056014A; /* jne: not equal / not zero */

loc_00560142: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;

loc_0056014A: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055BF5A(); /* call 0x0055BF5A */

loc_00560154: ;
    edx = MEM32(esp + 0x10);

loc_00560158: ;
    if (CMP_NE(MEM32(ebx + 0x430), 0)) goto loc_00560102; /* jne: not equal / not zero */

loc_00560161: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00560163: ;
    eax = 0; /* xor self */
    MEM32(ebx + 0x430) = ebp;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, ebp);
    SET_LO8(eax, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00560174
 * Original: 0x00560174 - 0x0056024E (218 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560174(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00560174: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x434), ecx - flags set for next jcc */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(MEM32(ebx + 0x434), ecx)) goto loc_0056023E; /* je: equal / zero */

loc_00560191: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00560193: ;
    esi = MEM32(ebx + 0x434);
    eax = MEM32(esi + 0x14);
    MEM32(ebx + 0x434) = eax;
    edi = MEM32(esi + 0x10);
    eax = MEM32(ebp + -8);
    if (CMP_AE(eax, MEM32(edi + 0x1C))) goto loc_005601B5; /* jae: above or equal (unsigned >=) */

loc_005601AD: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(ebp + -4) = esi;
    goto loc_0056022C;

loc_005601B5: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    if (TEST_Z(LO8(eax), 0x40)) goto loc_005601C3; /* je: equal / zero */

loc_005601BC: ;
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM8(edi + 0x10) = LO8(eax);
    goto loc_005601AD;

loc_005601C3: ;
    (void)0; /* cmp MEM8(esi + 1), 0x4A - flags set for next jcc */
    ecx = ebx;
    if (CMP_NE(MEM8(esi + 1), 0x4A)) goto loc_005601D4; /* jne: not equal / not zero */

loc_005601CB: ;
    edx = esi;
    PUSH32(esp, 0); sub_00560567(); /* call 0x00560567 */

loc_005601D2: ;
    goto loc_0056022C;

loc_005601D4: ;
    edx = edi;
    PUSH32(esp, 0); sub_00560097(); /* call 0x00560097 */

loc_005601DB: ;
    edx = MEM32(esi + 0x18);
    if (TEST_Z(edx, edx)) goto loc_00560214; /* je: equal / zero */

loc_005601E2: ;
    ecx = MEM32(edi);
    MEM32(ebp + -12) = ecx;
    ecx = ecx >> 7;
    eax = 0; /* xor self */
    ecx = ecx & 0xF;
    eax++;
    eax = eax << LO8(ecx);
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x1800;
    if (CMP_NE(ecx, 0x1000)) goto loc_00560206; /* jne: not equal / not zero */

loc_00560203: ;
    eax = eax << 0x10;

loc_00560206: ;
    if (TEST_Z(MEM8(edi + 8), 2)) goto loc_00560210; /* je: equal / zero */

loc_0056020C: ;
    MEM32(edx) = MEM32(edx) | eax;
    goto loc_00560214;

loc_00560210: ;
    eax = ~eax;
    MEM32(edx) = MEM32(edx) & eax;

loc_00560214: ;
    eax = MEM32(0x87C948);
    MEM32(edi + 0x18) = eax;
    MEM32(0x87C948) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0055BF5A(); /* call 0x0055BF5A */

loc_0056022C: ;
    (void)0; /* cmp MEM32(ebx + 0x434), 0 - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(MEM32(ebx + 0x434), 0)) goto loc_00560193; /* jne: not equal / not zero */

loc_0056023C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0056023E: ;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebx + 0x434) = ecx;
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0056024E
 * Original: 0x0056024E - 0x00560364 (278 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056024E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0056024E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(esi);
    eax = esi + 0x438;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    edi = 0; /* xor self */
    ecx = esi;
    MEM8(ebp + 0xF) = 0;
    MEM32(eax) = edi;
    PUSH32(esp, 0); sub_0055FC34(); /* call 0x0055FC34 */

loc_00560275: ;
    if (TEST_Z(MEM8(ebp + -4), 2)) goto loc_005602D2; /* je: equal / zero */

loc_0056027B: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + 0x84;
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFF0u;
    MEM32(ecx) = edi;
    if ((eax == 0)) goto loc_005602BE; /* je: equal / zero */

loc_0056028D: ;
    ecx = MEM32(0x87C940);
    ecx = ecx + eax;
    eax = MEM32(ecx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 8) = edi;
    edi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0056028D; /* jne: not equal / not zero */

loc_005602A1: ;
    edx = edi;
    (void)0; /* test MEM8(edx + 2), 1 - flags set for next jcc */
    edi = MEM32(edi + 8);
    ecx = esi;
    if (TEST_Z(MEM8(edx + 2), 1)) goto loc_005602B5; /* je: equal / zero */

loc_005602AE: ;
    PUSH32(esp, 0); sub_005608D0(); /* call 0x005608D0 */

loc_005602B3: ;
    goto loc_005602BA;

loc_005602B5: ;
    PUSH32(esp, 0); sub_0055FEE9(); /* call 0x0055FEE9 */

loc_005602BA: ;
    if (TEST_NZ(edi, edi)) goto loc_005602A1; /* jne: not equal / not zero */

loc_005602BE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    MEM32(ebx + 0xC) = 2;
    eax = MEM32(esi);
    MEM32(eax + 8) = 6;

loc_005602D2: ;
    (void)0; /* test MEM8(ebp + -4), 4 - flags set for next jcc */
    PUSH32(esp, 4);
    POP32(esp, edi);
    if (TEST_Z(MEM8(ebp + -4), 4)) goto loc_005602E5; /* je: equal / zero */

loc_005602DB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFBu;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x14) = edi;

loc_005602E5: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055FC10(); /* call 0x0055FC10 */

loc_005602EC: ;
    edx = eax;
    ecx = esi;
    MEM32(ebp + -8) = edx;
    PUSH32(esp, 0); sub_0055FF95(); /* call 0x0055FF95 */

loc_005602F8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00560300; /* je: equal / zero */

loc_005602FC: ;
    MEM8(ebp + 0xF) = 1;

loc_00560300: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    PUSH32(esp, 0); sub_005600ED(); /* call 0x005600ED */

loc_0056030A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00560312; /* je: equal / zero */

loc_0056030E: ;
    MEM8(ebp + 0xF) = 1;

loc_00560312: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    PUSH32(esp, 0); sub_00560174(); /* call 0x00560174 */

loc_0056031C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00560324; /* je: equal / zero */

loc_00560320: ;
    MEM8(ebp + 0xF) = 1;

loc_00560324: ;
    if (CMP_EQ(MEM8(ebp + 0xF), 0)) goto loc_00560334; /* je: equal / zero */

loc_0056032A: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = edi;

loc_00560334: ;
    if (TEST_Z(MEM8(ebp + -4), 0x40)) goto loc_0056034C; /* je: equal / zero */

loc_0056033A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055E13E(); /* call 0x0055E13E */

loc_00560341: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFBFu;
    MEM32(ebx + 0xC) = 0x40;

loc_0056034C: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_00560356; /* je: equal / zero */

loc_00560353: ;
    MEM32(ebx + 0xC) = eax;

loc_00560356: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0x80000000u;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00560364
 * Original: 0x00560364 - 0x00560376 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560364(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560364: ;
    eax = MEM32(0x87C968);
    if (TEST_Z(eax, eax)) goto loc_00560375; /* je: equal / zero */

loc_0056036D: ;
    ecx = MEM32(eax);
    MEM32(0x87C968) = ecx;

loc_00560375: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00560376
 * Original: 0x00560376 - 0x005603AC (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560376(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00560376: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(0x87C96C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00560391: ;
    MEM8(ebp + -2) = LO8(eax);
    PUSH32(esp, 0); sub_00560364(); /* call 0x00560364 */

loc_00560399: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -12) = edi;
    if (TEST_NZ(edi, edi)) { sub_005603AC(); return; } /* jne: not equal / not zero */

loc_005603A2: ;
    edi = 0x80000100u;
    g_seh_ebp = ebp; sub_00560511(); return; /* tail jmp 0x00560511 */

}

/**
 * sub_00560523
 * Original: 0x00560523 - 0x00560567 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560523(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560523: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    ebp = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00560534: ;
    edx = ebp;
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_0055FA01(); /* call 0x0055FA01 */

loc_0056053F: ;
    edx = ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_0055E4EA(); /* call 0x0055E4EA */

loc_00560548: ;
    eax = edi + 0x434;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0056055D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00560567
 * Original: 0x00560567 - 0x005605F0 (137 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560567(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560567: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x25));
    ebx = ZX8(MEM8(esi + 0x26));
    ecx = ZX8(LO8(eax));
    ebx = ebx - ecx;
    ecx = ZX8(MEM8(esi + 0x24));
    ebx = ebx + ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005605C9; /* je: equal / zero */

loc_00560585: ;
    PUSH32(esp, edi);

loc_00560586: ;
    ecx = ZX8(MEM8(esi + 0x24));
    eax = ebx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebx = edx;
    edi = ebx;
    edi = edi << 6;
    edi = edi + MEM32(esi + 0x2C);
    ebx++;
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561240), _icall_esp); /* indirect call */
    }

loc_005605A9: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 4);
    ecx = ecx ^ eax;
    if (TEST_Z(ecx, 0xFFFFF000u)) goto loc_005605C2; /* je: equal / zero */

loc_005605B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561240), _icall_esp); /* indirect call */
    }

loc_005605C2: ;
    if (CMP_NE(MEM8(esi + 0x25), 0)) goto loc_00560586; /* jne: not equal / not zero */

loc_005605C8: ;
    POP32(esp, edi);

loc_005605C9: ;
    eax = ZX8(MEM8(esi + 0x24));
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    eax = eax << 6;
    esi = esi - eax;
    eax = MEM32(0x87C968);
    MEM32(esi) = eax;
    MEM32(0x87C968) = esi;
    MEM32(ebp + 4) = MEM32(ebp + 4) & 0;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0055BF5A(); /* call 0x0055BF5A */

loc_005605EC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005605F0
 * Original: 0x005605F0 - 0x00560627 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005605F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005605F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00560610: ;
    SET_LO8(ecx, MEM8(edi + 0x24));
    (void)0; /* cmp LO8(ecx), MEM8(edi + 0x25) - flags set for next jcc */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(LO8(ecx), MEM8(edi + 0x25))) { sub_00560627(); return; } /* jne: not equal / not zero */

loc_0056061B: ;
    MEM32(ebp + -20) = 0xC0000D00u;
    g_seh_ebp = ebp; sub_0056073C(); return; /* tail jmp 0x0056073C */

}

/**
 * sub_00560757
 * Original: 0x00560757 - 0x0056078A (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560757(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00560757: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5610F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00560777: ;
    (void)0; /* test MEM8(esi + 0x10), 2 - flags set for next jcc */
    MEM8(ebp + -1) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x10), 2)) { sub_0056078A(); return; } /* je: equal / zero */

loc_00560780: ;
    esi = 0xC0000E00u;
    g_seh_ebp = ebp; sub_00560856(); return; /* tail jmp 0x00560856 */

}

/**
 * sub_00560876
 * Original: 0x00560876 - 0x005608B0 (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560876(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560876: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebx = ecx;
    ebp = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0056088A: ;
    (void)0; /* test MEM8(esi + 0x10), 2 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0x10), 2)) { sub_005608B0(); return; } /* je: equal / zero */

loc_00560894: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    ecx = ebx;
    PUSH32(esp, 0); sub_0055FC10(); /* call 0x0055FC10 */

loc_0056089F: ;
    eax++;
    eax++;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x10) = LO8(eax);
    g_seh_ebp = ebp; sub_005608B5(); return; /* tail jmp 0x005608B5 */

}

/**
 * sub_005608D0
 * Original: 0x005608D0 - 0x00560977 (167 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005608D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005608D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = edx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    edx = MEM32(ebx + 0x20);
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    esi = eax;
    esi = esi >> 0x1C;
    MEM32(ebp + -44) = esi;
    eax = eax >> 0x18;
    eax = eax & 7;
    PUSH32(esp, edi);
    eax++;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebx + 0x28);
    esi = ebx + 0x10;
    MEM32(ebp + -8) = esi;
    edi = ebp + -36;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebx + 0x24);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(edx + 0x2C);
    MEM32(ebp + -20) = eax;
    eax = ZX8(MEM8(ebx + 0x2D));
    esi = ebx;
    esi = esi - MEM32(0x87C940);
    eax = eax << 6;
    MEM32(eax + edi + 8) = esi;
    (void)0; /* test MEM8(edx + 0x10), 1 - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(MEM8(edx + 0x10), 1)) { sub_00560977(); return; } /* je: equal / zero */

loc_00560931: ;
    PUSH32(esp, 0); sub_0055FC10(); /* call 0x0055FC10 */

loc_00560936: ;
    ecx = MEM32(ebp + -4);
    esi = eax;
    eax = MEM32(ecx + 0x28);
    esi++;
    edx = eax;
    edx = edx - esi;
    if (((int32_t)edx < 0)) goto loc_00560947; /* js: sign (negative) */

loc_00560945: ;
    esi = eax;

loc_00560947: ;
    edi = MEM32(ebp + -8);
    MEM16(ebx) = LO16(esi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 3));
    eax = eax & 7;
    eax = eax + esi + 1;
    MEM32(ecx + 0x28) = eax;
    esi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ZX8(MEM8(ecx + 0x26));
    esi = ZX8(MEM8(ecx + 0x24));
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(ebp + -12);
    MEM8(ecx + 0x26) = LO8(edx);
    g_seh_ebp = ebp; sub_005609AE(); return; /* tail jmp 0x005609AE */

}

/**
 * sub_005609C0
 * Original: 0x005609C0 - 0x005609E0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005609C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005609C0: ;
    eax = MEM32(0x87C94C);
    if (TEST_Z(eax, eax)) goto loc_005609D2; /* je: equal / zero */

loc_005609C9: ;
    ecx = MEM32(eax + 0x14);
    MEM32(0x87C94C) = ecx;

loc_005609D2: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 2) = MEM8(eax + 2) & 0xFE;
    MEM8(eax + 0x1F) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005609E0
 * Original: 0x005609E0 - 0x005609F2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005609E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005609E0: ;
    SET_LO16(eax, MEM16(esp + 4));
    if (CMP_AE(MEM16(0x87C962), LO16(eax))) { sub_005609F2(); return; } /* jae: above or equal (unsigned >=) */

loc_005609EE: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_005609FC(); return; /* tail jmp 0x005609FC */

}

/**
 * sub_005609FF
 * Original: 0x005609FF - 0x00560A11 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005609FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005609FF: ;
    SET_LO16(eax, MEM16(esp + 4));
    if (CMP_AE(MEM16(0x87C966), LO16(eax))) { sub_00560A11(); return; } /* jae: above or equal (unsigned >=) */

loc_00560A0D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00560A1B(); return; /* tail jmp 0x00560A1B */

}

/**
 * sub_00560A1E
 * Original: 0x00560A1E - 0x00560A50 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560A1E(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560A1E: ;
    PUSH32(esp, edi);
    edi = edx;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 2));
    eax = 0; /* xor self */
    edx = edx & 0x7FF;
    if (CMP_EQ(MEM32(ecx + 0x14), eax)) goto loc_00560A45; /* je: equal / zero */

loc_00560A34: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_00560A45; /* je: equal / zero */

loc_00560A44: ;
    eax++;

loc_00560A45: ;
    (void)0; /* cmp MEM8(edi + 0x11), 0 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(MEM8(edi + 0x11), 0)) goto loc_00560A4F; /* jne: not equal / not zero */

loc_00560A4C: ;
    eax = eax + 3;

loc_00560A4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00560A50
 * Original: 0x00560A50 - 0x00560A8A (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560A50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, MEM32(esi));
    edi = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_00560A5F: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFF;
    edx = 0x1000;
    edx = edx - ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    ebx = MEM32(edi);
    if (CMP_BE(edx, ebx)) goto loc_00560A7C; /* jbe: below or equal (unsigned <=) */

loc_00560A7A: ;
    MEM32(ecx) = ebx;

loc_00560A7C: ;
    edx = MEM32(ecx);
    MEM32(edi) = MEM32(edi) - edx;
    ecx = MEM32(ecx);
    MEM32(esi) = MEM32(esi) + ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560A8A
 * Original: 0x00560A8A - 0x00560AF0 (102 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560A8A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00560A8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = edx;
    SET_LO16(eax, MEM16(ebx + 2));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ecx;
    SET_LO8(ecx, MEM8(ecx + 0x45C));
    MEM8(ebp + -24) = LO8(ecx);
    eax = eax & 0x7FF;
    MEM32(ebp + -40) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    MEM8(ebx + 0x26) = MEM8(ebx + 0x26) - 1;
    MEM8(ebx + 0x27) = MEM8(ebx + 0x27) + 1;
    SET_LO16(ecx, MEM16(edi + 0x22));
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    SET_LO16(ecx, LO16(ecx) | 4);
    MEM16(edi + 0x22) = LO16(ecx);
    esi = MEM32(ebx + 4);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    MEM8(ebp + 0xB) = LO8(eax);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(esi, eax)) { sub_00560AF0(); return; } /* je: equal / zero */

loc_00560AE7: ;
    eax = MEM32(0x87C940);
    esi = esi + eax;
    g_seh_ebp = ebp; sub_00560B09(); return; /* tail jmp 0x00560B09 */

}

/**
 * sub_00560D88
 * Original: 0x00560D88 - 0x00560DDB (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560D88(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00560D88: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    (void)0; /* cmp MEM32(esi + 0x28), 0 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(MEM32(esi + 0x28), 0)) goto loc_00560DD8; /* je: equal / zero */

loc_00560D98: ;
    PUSH32(esp, ebx);

loc_00560D99: ;
    eax = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x24));
    ebx = ZX16(MEM16(eax + 0x20));
    ecx = ZX16(LO16(edx));
    ecx = ecx + ebx;
    if (CMP_G(ecx, 3)) goto loc_00560DD7; /* jg: greater (signed >) */

loc_00560DAE: ;
    ecx = MEM32(eax + 0x24);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x28) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00560DBB; /* jne: not equal / not zero */

loc_00560DB8: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & ecx;

loc_00560DBB: ;
    SET_LO16(ecx, MEM16(eax + 0x20));
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    MEM16(esi + 0x24) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_00560A8A(); /* call 0x00560A8A */

loc_00560DD1: ;
    if (CMP_NE(MEM32(esi + 0x28), 0)) goto loc_00560D99; /* jne: not equal / not zero */

loc_00560DD7: ;
    POP32(esp, ebx);

loc_00560DD8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00560DDB
 * Original: 0x00560DDB - 0x00560E28 (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560DDB(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560DDB: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x424), 0)) goto loc_00560E26; /* je: equal / zero */

loc_00560DE7: ;
    PUSH32(esp, edi);

loc_00560DE8: ;
    edi = MEM32(esi + 0x424);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_005609FF(); /* call 0x005609FF */

loc_00560DFA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00560E25; /* je: equal / zero */

loc_00560DFE: ;
    eax = MEM32(edi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x424) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00560E11; /* jne: not equal / not zero */

loc_00560E0B: ;
    MEM32(esi + 0x428) = MEM32(esi + 0x428) & eax;

loc_00560E11: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00560A8A(); /* call 0x00560A8A */

loc_00560E1C: ;
    if (CMP_NE(MEM32(esi + 0x424), 0)) goto loc_00560DE8; /* jne: not equal / not zero */

loc_00560E25: ;
    POP32(esp, edi);

loc_00560E26: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560E28
 * Original: 0x00560E28 - 0x00560E75 (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560E28(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560E28: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x41C), 0)) goto loc_00560E73; /* je: equal / zero */

loc_00560E34: ;
    PUSH32(esp, edi);

loc_00560E35: ;
    edi = MEM32(esi + 0x41C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_005609E0(); /* call 0x005609E0 */

loc_00560E47: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00560E72; /* je: equal / zero */

loc_00560E4B: ;
    eax = MEM32(edi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x41C) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00560E5E; /* jne: not equal / not zero */

loc_00560E58: ;
    MEM32(esi + 0x420) = MEM32(esi + 0x420) & eax;

loc_00560E5E: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00560A8A(); /* call 0x00560A8A */

loc_00560E69: ;
    if (CMP_NE(MEM32(esi + 0x41C), 0)) goto loc_00560E35; /* jne: not equal / not zero */

loc_00560E72: ;
    POP32(esp, edi);

loc_00560E73: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560E75
 * Original: 0x00560E75 - 0x00560E87 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560E75(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560E75: ;
    eax = MEM32(esp + 4);
    if (CMP_BE(MEM16(eax + 0x20), 3)) { sub_00560E87(); return; } /* jbe: below or equal (unsigned <=) */

loc_00560E80: ;
    eax = 0x80000500u;
    g_seh_ebp = ebp; sub_00560EA5(); return; /* tail jmp 0x00560EA5 */

}

/**
 * sub_00560EA8
 * Original: 0x00560EA8 - 0x00560EBB (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560EA8(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560EA8: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    if (CMP_BE(LO16(eax), MEM16(0x87C964))) { sub_00560EBB(); return; } /* jbe: below or equal (unsigned <=) */

loc_00560EB5: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

}

/**
 * sub_00560EE4
 * Original: 0x00560EE4 - 0x00560EF7 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560EE4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00560EE4: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    if (CMP_BE(LO16(eax), MEM16(0x87C960))) { sub_00560EF7(); return; } /* jbe: below or equal (unsigned <=) */

loc_00560EF1: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

}

/**
 * sub_00560F20
 * Original: 0x00560F20 - 0x00560F7F (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00560F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = ecx;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_00560A1E(); /* call 0x00560A1E */

loc_00560F37: ;
    MEM16(esi + 0x20) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00560F41: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) + 1;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    MEM8(ebp + -1) = LO8(eax);
    MEM16(esi + 0x22) = 2;
    eax = ZX8(MEM8(edi + 0x11));
    eax = eax - 0;
    if ((eax == 0)) { sub_00560F7F(); return; } /* je: equal / zero */

loc_00560F5A: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_00560F74; /* je: equal / zero */

loc_00560F5E: ;
    eax--;
    if ((eax == 0)) goto loc_00560F68; /* je: equal / zero */

loc_00560F61: ;
    ebx = 0x80000600u;
    g_seh_ebp = ebp; sub_00560F8E(); return; /* tail jmp 0x00560F8E */

loc_00560F68: ;
    PUSH32(esp, esi);
    edx = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00560E75(); /* call 0x00560E75 */

loc_00560F72: ;
    g_seh_ebp = ebp; sub_00560F88(); return; /* tail jmp 0x00560F88 */

loc_00560F74: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00560EA8(); /* call 0x00560EA8 */

loc_00560F7D: ;
    g_seh_ebp = ebp; sub_00560F88(); return; /* tail jmp 0x00560F88 */

}

/**
 * sub_00560FA8
 * Original: 0x00560FA8 - 0x00560FE7 (63 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560FA8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560FA8: ;
    POP32(esp, esp);
    esp++;
    if (_flags /* jbe: below or equal (unsigned <=) */) { sub_00561016(); return; }

loc_00560FAD: ;
    /* TODO: arpl word ptr [ebp + 0x5c], sp */
    ebp--;
    PUSH32(esp, ebp);
    POP32(esp, edi);
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(esp + eax * 2 + 0x65) = MEM8(esp + eax * 2 + 0x65) + LO8(ebx);
    if (_flags /* jbe: below or equal (unsigned <=) */) { sub_00561026(); return; }

loc_00560FBD: ;
    /* TODO: arpl word ptr [ebp + 0x5c], sp */
    ebp--;
    PUSH32(esp, ebp);
    POP32(esp, edi);
    eax = eax & 0x78;
    (void)0; /* cmp MEM32(0x45304631), esi - flags set for next jcc */
    esi++;
    esi = esi ^ MEM32(eax);
    esp++;
    ebx++;
    SET_LO8(eax, LO8(eax) ^ 0x36);
    (void)0; /* cmp MEM32(edi + 0x43), ebx - flags set for next jcc */
    edi--;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esp);
    POP32(esp, edi);
    PUSH32(esp, ebx);
    ebp++;
    ebx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);

}
