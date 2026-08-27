/**
 * Burnout 3 - Recompiled code chunk 1
 * Functions: 250 (0x0001ADC0 - 0x0002BE80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0001ADC0
 * Original: 0x0001ADC0 - 0x0001ADF5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ADC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0001ADC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x174);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004017B0(); /* call 0x004017B0 */

loc_0001ADD5: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esp = esp + 8;
    /* ucomiss xmm0, MEMF(edi + 0x170) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0001ADF5(); return; } /* jp: parity */

loc_0001ADEB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0001A0A0(); /* call 0x0001A0A0 */

loc_0001ADF2: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001AE00
 * Original: 0x0001AE00 - 0x0001AE1A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE00(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AE00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi;
    PUSH32(esp, 0); sub_0001A190(); /* call 0x0001A190 */

loc_0001AE0B: ;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_0001AE12: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_0001AE70
 * Original: 0x0001AE70 - 0x0001AE9A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AE70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001AE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0001AF10(); /* call 0x0001AF10 */

loc_0001AE78: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0001AE94; /* je: equal / zero */

loc_0001AE7F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_0001AE94; /* je: equal / zero */

loc_0001AE87: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001AE91: ;
    esp = esp + 4;

loc_0001AE94: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001AEA0
 * Original: 0x0001AEA0 - 0x0001AF0A (106 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AEA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001AEA0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edx = MEM32(esp + 4);
    MEM32(esi) = 0x5AD388;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = edx;
    if (TEST_Z(ebx, ebx)) goto loc_0001AF05; /* je: equal / zero */

loc_0001AEBE: ;
    eax = ebx;
    edx = eax + 1;

loc_0001AEC3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0001AEC3; /* jne: not equal / not zero */

loc_0001AECA: ;
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0001AED6: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0001AEF4; /* jne: not equal / not zero */

loc_0001AEE0: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_0001AEEB: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = esi;
    esp += 8; return; /* ret 4 */

loc_0001AEF4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5AC808);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0001AF01: ;
    esp = esp + 0x10;
    POP32(esp, edi);

loc_0001AF05: ;
    eax = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001AF10
 * Original: 0x0001AF10 - 0x0001AF64 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001AF10: ;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x5AD388;
    SET_LO8(eax, MEM8(0x846FFC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AF4B; /* je: equal / zero */

loc_0001AF22: ;
    eax = MEM32(0x7F9F60);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0001AF2E: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD390);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AF47: ;
    esp = esp + 0x14;
    POP32(esp, esi);

loc_0001AF4B: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0001AF62; /* je: equal / zero */

loc_0001AF52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001AF58: ;
    esp = esp + 4;
    MEM32(edi + 0x14) = 0;

loc_0001AF62: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001AF70
 * Original: 0x0001AF70 - 0x0001B0E9 (377 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001AF70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_0001AF81: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AF99; /* je: equal / zero */

loc_0001AF8B: ;
    if (CMP_AE(ebp, 0x1CE)) goto loc_0001AF99; /* jae: above or equal (unsigned >=) */

loc_0001AF93: ;
    esi = ebp + 0x6E3;

loc_0001AF99: ;
    edi = MEM32(0x847024);
    eax = MEM32(edi + 0x40);
    PUSH32(esp, 0); sub_0002AC90(); /* call 0x0002AC90 */

loc_0001AFA7: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (TEST_S(esi, esi)) goto loc_0001B0E4; /* jl: less (signed <) */

loc_0001AFB3: ;
    if (CMP_GE(esi, 0xDDA)) goto loc_0001B0E4; /* jge: greater or equal (signed >=) */

loc_0001AFBF: ;
    eax = esi + esi * 2;
    eax = eax << 4;
    eax = eax + 0x65E060;
    if ((eax == 0)) goto loc_0001B0E4; /* je: equal / zero */

loc_0001AFD0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, MEM8(0x846FF6));
    MEM32(0x84704C) = ebp;
    MEM32(0x657C58) = esi;
    if (TEST_NZ(ebx, ebx)) goto loc_0001B04E; /* jne: not equal / not zero */

loc_0001AFE6: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001B004; /* je: equal / zero */

loc_0001AFEA: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD42C);
    esi = edi;
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AFFB: ;
    edi = MEM32(0x847024);
    esp = esp + 0xC;

loc_0001B004: ;
    ecx = MEM32(0x657C58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edi + 0x40);
    if (TEST_NZ(ecx, ecx)) goto loc_0001B01E; /* jne: not equal / not zero */

loc_0001B011: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x657C54) = eax;
    goto loc_0001B0B9;

loc_0001B01E: ;
    PUSH32(esp, 0x1B210);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0001B041: ;
    edi = MEM32(0x847024);
    MEM32(0x657C54) = eax;
    goto loc_0001B0B9;

loc_0001B04E: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001B070; /* je: equal / zero */

loc_0001B052: ;
    edx = MEM32(eax + 0x14);
    ecx = ebx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD3FC);
    esi = edi;
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B067: ;
    edi = MEM32(0x847024);
    esp = esp + 0x10;

loc_0001B070: ;
    eax = MEM32(0x657C58);
    edi = MEM32(edi + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0001B08A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(0x847024);
    MEM32(0x657C54) = eax;
    if (TEST_S(eax, eax)) goto loc_0001B0B9; /* jl: less (signed <) */

loc_0001B099: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0001B0B9; /* je: equal / zero */

loc_0001B0A8: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0001B0B9; /* je: equal / zero */

loc_0001B0AF: ;
    MEM32(eax + 0x16C) = 0x1B210;

loc_0001B0B9: ;
    edx = MEM32(0x657C58);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, edx);
    ebx = 1;
    PUSH32(esp, eax);
    MEM8(0x76F0B4) = LO8(ebx);
    PUSH32(esp, 0); sub_0001F750(); /* call 0x0001F750 */

loc_0001B0D4: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x847050) = ebx;
    MEM32(0x847064) = ecx;

loc_0001B0E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B0F0
 * Original: 0x0001B0F0 - 0x0001B11B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001B0F0: ;
    eax = MEM32(0x657C54);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0001B11B(); return; } /* je: equal / zero */

loc_0001B0FA: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(0x657C58);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_0001B10F: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax = eax + 3;
    g_seh_ebp = ebp; sub_0001B11D(); return; /* tail jmp 0x0001B11D */

}

/**
 * sub_0001B140
 * Original: 0x0001B140 - 0x0001B16F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B140(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0001B140: ;
    eax = MEM32(0x657C54);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0001B16F(); return; } /* je: equal / zero */

loc_0001B14A: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(0x657C58);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_0001B15F: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax = eax + 3;
    MEM32(0x847050) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B180
 * Original: 0x0001B180 - 0x0001B210 (144 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B180: ;
    PUSH32(esp, ebx);
    ebx = 0x847054;
    PUSH32(esp, 0); sub_0001B270(); /* call 0x0001B270 */

loc_0001B18B: ;
    eax = MEM32(0x657C54);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(0x847064) = ebx;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001B20E; /* je: equal / zero */

loc_0001B19D: ;
    (void)0; /* cmp MEM8(0x846FF6), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(0x657C58);
    if (CMP_EQ(MEM8(0x846FF6), LO8(ebx))) goto loc_0001B1E9; /* je: equal / zero */

loc_0001B1AB: ;
    if (CMP_L(ecx, ebx)) goto loc_0001B1E9; /* jl: less (signed <) */

loc_0001B1AF: ;
    if (CMP_GE(ecx, 0xDDA)) goto loc_0001B1E9; /* jge: greater or equal (signed >=) */

loc_0001B1B7: ;
    eax = ecx + ecx * 2;
    eax = eax << 4;
    eax = eax + 0x65E060;
    if (CMP_EQ(eax, ebx)) goto loc_0001B1E9; /* je: equal / zero */

loc_0001B1C6: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD3E0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B1DF: ;
    ecx = MEM32(0x657C58);
    esp = esp + 0xC;
    POP32(esp, esi);

loc_0001B1E9: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edi = 0x657C54;
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0001B1FD: ;
    MEM32(0x847050) = ebx;
    MEM32(0x657C54) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_0001B20E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B270
 * Original: 0x0001B270 - 0x0001B2BA (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B270(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B270: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0001B2B9; /* je: equal / zero */

loc_0001B275: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0001B286: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0001B2B1; /* je: equal / zero */

loc_0001B28C: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0001B297; /* je: equal / zero */

loc_0001B293: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0001B297: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0001B2B1; /* jne: not equal / not zero */

loc_0001B29E: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0001B2A7: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0001B2B1: ;
    POP32(esp, edi);
    MEM32(ebx) = 0;
    POP32(esp, esi);

loc_0001B2B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B2C0
 * Original: 0x0001B2C0 - 0x0001B2CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B2C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B2C0: ;
    edx = MEM32(0x847054);
    if (TEST_NZ(edx, edx)) { sub_0001B2CD(); return; } /* jne: not equal / not zero */

loc_0001B2CA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B3A0
 * Original: 0x0001B3A0 - 0x0001B400 (96 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B3A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B3A0: ;
    esp = esp - 0x114;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0xA);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0001B3B7: ;
    esp = esp + 0xC;
    eax = esp;
    MEM32(esp + 0x110) = 0xA;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0001B3E4: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_0001B400(); return; } /* jl: less (signed <) */

loc_0001B3F2: ;
    if (CMP_G(eax, 0x3E5)) { sub_0001B400(); return; } /* jg: greater (signed >) */

loc_0001B3F9: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0001B3FE: ;
    goto loc_0001B3E4;

}

/**
 * sub_0001B470
 * Original: 0x0001B470 - 0x0001B4AF (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B470(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B470: ;
    SET_LO8(eax, MEM8(0x846FFF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001B4AE; /* je: equal / zero */

loc_0001B479: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B48A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD45C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B49A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B4AA: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_0001B4AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B4B0
 * Original: 0x0001B4B0 - 0x0001B4CA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B4B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0001B4C8; /* je: equal / zero */

loc_0001B4BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001B4C1: ;
    MEM32(esi + 4) = 0;

loc_0001B4C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B4D0
 * Original: 0x0001B4D0 - 0x0001B523 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B4D0(void)
{

loc_0001B4D0: ;
    ecx = MEM32(0x7F9F60);
    edx = 0; /* xor self */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM8(eax + 0x29) = LO8(edx);
    edx = MEM32(esp + 4);
    SET_LO8(ecx, 1);
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax) = 0x5AD490;
    MEM32(eax + 8) = 8;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = 5;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0001B530
 * Original: 0x0001B530 - 0x0001B583 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B530(void)
{

loc_0001B530: ;
    ecx = MEM32(0x7F9F60);
    edx = 0; /* xor self */
    MEM32(eax + 0x24) = ecx;
    SET_LO8(ecx, 1);
    MEM32(eax + 4) = edx;
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x29) = LO8(edx);
    edx = MEM32(esp + 4);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0x5AD490;
    MEM32(eax + 8) = 8;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x64;
    MEM32(eax + 0x20) = 5;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001B590
 * Original: 0x0001B590 - 0x0001B594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B590(void)
{

loc_0001B590: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    esp += 4; return; /* ret */

}

/**
 * sub_0001B5A0
 * Original: 0x0001B5A0 - 0x0001B5EE (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B5A0(void)
{

loc_0001B5A0: ;
    ecx = MEM32(0x7F9F60);
    edx = 0; /* xor self */
    MEM32(eax + 0x24) = ecx;
    SET_LO8(ecx, 1);
    MEM32(eax + 4) = edx;
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x29) = LO8(edx);
    edx = MEM32(esp + 4);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax) = 0x5AD4FC;
    MEM32(eax + 8) = 9;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 3;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001B5F0
 * Original: 0x0001B5F0 - 0x0001B60C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B5F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    if (CMP_NE(edx, MEM32(eax + 8))) { sub_0001B60C(); return; } /* jne: not equal / not zero */

loc_0001B5FC: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(ecx, MEM32(eax + 0xC))) { sub_0001B60C(); return; } /* jne: not equal / not zero */

loc_0001B604: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001B620
 * Original: 0x0001B620 - 0x0001B673 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B620(void)
{

loc_0001B620: ;
    ecx = MEM32(0x7F9F60);
    edx = 0; /* xor self */
    MEM32(eax + 0x24) = ecx;
    SET_LO8(ecx, 1);
    MEM32(eax + 4) = edx;
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x29) = LO8(edx);
    edx = MEM32(esp + 4);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0x5AD4B4;
    MEM32(eax + 8) = 0xA;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    MEM32(eax + 0x20) = 4;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001B680
 * Original: 0x0001B680 - 0x0001B79C (284 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B680(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B680: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001B79A; /* je: equal / zero */

loc_0001B690: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B6A6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B6B8: ;
    ecx = MEM32(0x65C788);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B6CF: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B6E3: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B6F7: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001B70C; /* jl: less (signed <) */

loc_0001B701: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001B711;

loc_0001B70C: ;
    eax = 0x587BE4;

loc_0001B711: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B722: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADA58);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B736: ;
    edx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B74A: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0001B782; /* je: equal / zero */

loc_0001B754: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B764: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0001B76F: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B77F: ;
    esp = esp + 4;

loc_0001B782: ;
    ecx = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B796: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001B79A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B7A0
 * Original: 0x0001B7A0 - 0x0001B903 (355 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001B7A0: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001B901; /* je: equal / zero */

loc_0001B7B0: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B7C6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 2);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B7D8: ;
    ecx = MEM32(0x65C790);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B7EF: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B803: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD990);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B817: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001B82C; /* jl: less (signed <) */

loc_0001B821: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001B831;

loc_0001B82C: ;
    eax = 0x587BE4;

loc_0001B831: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD974);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B842: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD958);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B856: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_0001B86B; /* jl: less (signed <) */

loc_0001B860: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001B870;

loc_0001B86B: ;
    eax = 0x587BE4;

loc_0001B870: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD93C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B881: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(eax * 4 + 0x65C7B4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD91C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B89D: ;
    eax = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B8B1: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0001B8E9; /* je: equal / zero */

loc_0001B8BB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B8CB: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001B8D6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B8E6: ;
    esp = esp + 4;

loc_0001B8E9: ;
    eax = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001B8FD: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001B901: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001B910
 * Original: 0x0001B910 - 0x0001BA48 (312 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001B910: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_0001BA48(); return; } /* jne: not equal / not zero */

loc_0001B921: ;
    eax = MEM32(edi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001B9BE; /* jne: not equal / not zero */

loc_0001B931: ;
    if (TEST_NZ(eax, eax)) goto loc_0001B93A; /* jne: not equal / not zero */

loc_0001B935: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001B93A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0001B982; /* je: equal / zero */

loc_0001B960: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001B982; /* jb: below (unsigned <) */

loc_0001B969: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001B973: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001B97B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001B9A3; /* jne: not equal / not zero */

loc_0001B982: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001B994: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001B99C: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001B9B7; /* je: equal / zero */

loc_0001B9A3: ;
    ecx = MEM32(edi + 0x14);
    edi = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001B5A0(); /* call 0x0001B5A0 */

loc_0001B9B2: ;
    g_seh_ebp = ebp; sub_0001BB77(); return; /* tail jmp 0x0001BB77 */

loc_0001B9B7: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0001BB7D(); return; /* tail jmp 0x0001BB7D */

loc_0001B9BE: ;
    if (TEST_NZ(eax, eax)) goto loc_0001B9C7; /* jne: not equal / not zero */

loc_0001B9C2: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001B9C7: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0001BA0F; /* je: equal / zero */

loc_0001B9ED: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001BA0F; /* jb: below (unsigned <) */

loc_0001B9F6: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001BA00: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001BA08: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001BA30; /* jne: not equal / not zero */

loc_0001BA0F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001BA21: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001BA29: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001B9B7; /* je: equal / zero */

loc_0001BA30: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    edi = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001B530(); /* call 0x0001B530 */

loc_0001BA43: ;
    g_seh_ebp = ebp; sub_0001BB77(); return; /* tail jmp 0x0001BB77 */

}

/**
 * sub_0001BBA0
 * Original: 0x0001BBA0 - 0x0001BBC8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BBA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001BBA0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_0001BBC8(); return; } /* jne: not equal / not zero */

loc_0001BBA7: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(eax + 8), 4)) { sub_0001BBC8(); return; } /* jne: not equal / not zero */

loc_0001BBB1: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_NE(edx, MEM32(eax + 0xC))) { sub_0001BBC8(); return; } /* jne: not equal / not zero */

loc_0001BBB9: ;
    edx = MEM32(eax + 0x14);
    if (TEST_Z(edx, edx)) { sub_0001BBC8(); return; } /* je: equal / zero */

loc_0001BBC0: ;
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001BBD0
 * Original: 0x0001BBD0 - 0x0001BCF4 (292 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BBD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001BBD0: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001BCF2; /* je: equal / zero */

loc_0001BBE0: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BBF6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 3);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BC08: ;
    ecx = MEM32(0x65C794);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BC1F: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BC33: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BC47: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001BC5C; /* jl: less (signed <) */

loc_0001BC51: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001BC61;

loc_0001BC5C: ;
    eax = 0x587BE4;

loc_0001BC61: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BC72: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax * 4 + 0x65C7B4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD91C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BC8E: ;
    edx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BCA2: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_0001BCDA; /* je: equal / zero */

loc_0001BCAC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BCBC: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0001BCC7: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BCD7: ;
    esp = esp + 4;

loc_0001BCDA: ;
    ecx = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BCEE: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001BCF2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001BD00
 * Original: 0x0001BD00 - 0x0001BDBA (186 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BD00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001BD00: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    if (TEST_NZ(eax, eax)) { sub_0001BDBA(); return; } /* jne: not equal / not zero */

loc_0001BD0E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001BD1C; /* jne: not equal / not zero */

loc_0001BD17: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001BD1C: ;
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
    if (TEST_Z(esi, esi)) goto loc_0001BD66; /* je: equal / zero */

loc_0001BD44: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001BD66; /* jb: below (unsigned <) */

loc_0001BD4D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001BD57: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001BD5F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001BD87; /* jne: not equal / not zero */

loc_0001BD66: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001BD78: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001BD80: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001BDB6; /* je: equal / zero */

loc_0001BD87: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0001B5A0(); /* call 0x0001B5A0 */

loc_0001BD96: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0001BDB0; /* jne: not equal / not zero */

loc_0001BD9C: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001BDAD: ;
    esp = esp + 0xC;

loc_0001BDB0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001BDB6: ;
    esi = 0; /* xor self */
    goto loc_0001BD9C;

}

/**
 * sub_0001BDC0
 * Original: 0x0001BDC0 - 0x0001BF05 (325 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BDC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001BDC0: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001BF03; /* je: equal / zero */

loc_0001BDD0: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BDE6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 4);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BDF8: ;
    ecx = MEM32(0x65C798);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE0F: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE23: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE37: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001BE4C; /* jl: less (signed <) */

loc_0001BE41: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001BE51;

loc_0001BE4C: ;
    eax = 0x587BE4;

loc_0001BE51: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE62: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD900);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE76: ;
    eax = MEM32(edi + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD8DC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE8B: ;
    edx = MEM32(edi + 0x18);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD8C0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BE9F: ;
    eax = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BEB3: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_0001BEEB; /* je: equal / zero */

loc_0001BEBD: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BECD: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001BED8: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BEE8: ;
    esp = esp + 4;

loc_0001BEEB: ;
    eax = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001BEFF: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001BF03: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001BF10
 * Original: 0x0001BF10 - 0x0001BF22 (18 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BF10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001BF10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x14);
    if (TEST_NZ(ebx, ebx)) { sub_0001BF22(); return; } /* jne: not equal / not zero */

loc_0001BF1C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001C1A0
 * Original: 0x0001C1A0 - 0x0001C2D0 (304 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C1A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001C1A0: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C2CE; /* je: equal / zero */

loc_0001C1B0: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C1C6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 5);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C1D8: ;
    ecx = MEM32(0x65C79C);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C1EF: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C203: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C217: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001C22C; /* jl: less (signed <) */

loc_0001C221: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001C231;

loc_0001C22C: ;
    eax = 0x587BE4;

loc_0001C231: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C242: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD8A4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C256: ;
    edx = MEM32(edi + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD888);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C26A: ;
    eax = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C27E: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0001C2B6; /* je: equal / zero */

loc_0001C288: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C298: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001C2A3: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C2B3: ;
    esp = esp + 4;

loc_0001C2B6: ;
    eax = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C2CA: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001C2CE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001C3A0
 * Original: 0x0001C3A0 - 0x0001C4E4 (324 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C3A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001C3A0: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C4E2; /* je: equal / zero */

loc_0001C3B0: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C3C6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 6);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C3D8: ;
    ecx = MEM32(0x65C7A0);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C3EF: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C403: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C417: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001C42C; /* jl: less (signed <) */

loc_0001C421: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001C431;

loc_0001C42C: ;
    eax = 0x587BE4;

loc_0001C431: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C442: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD86C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C456: ;
    edx = MEM32(edi + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD850);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C46A: ;
    eax = MEM32(edi + 0x18);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD834);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C47E: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C492: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0001C4CA; /* je: equal / zero */

loc_0001C49C: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C4AC: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001C4B7: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C4C7: ;
    esp = esp + 4;

loc_0001C4CA: ;
    eax = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C4DE: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001C4E2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001C4F0
 * Original: 0x0001C4F0 - 0x0001C541 (81 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C4F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001C4F0: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C53E; /* je: equal / zero */

loc_0001C4F9: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C50A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7B8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C51A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD790);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C52A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C53A: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_0001C53E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0001C550
 * Original: 0x0001C550 - 0x0001C6C8 (376 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001C550: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C6C6; /* je: equal / zero */

loc_0001C560: ;
    eax = ZX8(MEM8(edi + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADB00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C576: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 8);
    PUSH32(esp, 0x5ADAE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C588: ;
    ecx = MEM32(0x65C7A8);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ADAC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C59F: ;
    edx = MEM32(edi + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ADAAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C5B3: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD990);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C5C7: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x28;
    if (TEST_S(eax, eax)) goto loc_0001C5DC; /* jl: less (signed <) */

loc_0001C5D1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001C5E1;

loc_0001C5DC: ;
    eax = 0x587BE4;

loc_0001C5E1: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD974);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C5F2: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD958);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C606: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_0001C61B; /* jl: less (signed <) */

loc_0001C610: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001C620;

loc_0001C61B: ;
    eax = 0x587BE4;

loc_0001C620: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD93C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C631: ;
    eax = MEM32(edi + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD76C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C646: ;
    eax = MEM32(edi + 0x18);
    edx = MEM32(eax * 4 + 0x65C7B4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD74C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C662: ;
    eax = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ADA38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C676: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_0001C6AE; /* je: equal / zero */

loc_0001C680: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ADA00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C690: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001C69B: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD9C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C6AB: ;
    esp = esp + 4;

loc_0001C6AE: ;
    eax = MEM32(edi + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD9AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001C6C2: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0001C6C6: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001C6D0
 * Original: 0x0001C6D0 - 0x0001C76E (158 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C6D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001C6D0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C767; /* je: equal / zero */

loc_0001C6E1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x14);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0001C6F9; /* jge: greater or equal (signed >=) */

loc_0001C6F7: ;
    ebx = 0; /* xor self */

loc_0001C6F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_0001C705: ;
    edi = eax;
    PUSH32(esp, 0);
    ebx = 0; /* xor self */
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_0001C714: ;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_0001C74A; /* jne: not equal / not zero */

loc_0001C71B: ;
    if (TEST_Z(eax, eax)) goto loc_0001C765; /* je: equal / zero */

loc_0001C71F: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001C734: ;
    if (TEST_Z(eax, eax)) goto loc_0001C765; /* je: equal / zero */

loc_0001C738: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = eax;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001C741: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0001C74A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0001C75E; /* jne: not equal / not zero */

loc_0001C74F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001C7B0(); /* call 0x0001C7B0 */

loc_0001C755: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0001C75E: ;
    eax = esi;
    PUSH32(esp, 0); sub_0001C9F0(); /* call 0x0001C9F0 */

loc_0001C765: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0001C767: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0001C770
 * Original: 0x0001C770 - 0x0001C7A3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C770(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001C770: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001C7A0; /* je: equal / zero */

loc_0001C777: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x28));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001C7A0; /* je: equal / zero */

loc_0001C782: ;
    edx = MEM32(ecx + 0x10);
    if (CMP_G(edx & edx, 0)) goto loc_0001C78F; /* jg: greater (signed >) */

loc_0001C789: ;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;

loc_0001C78F: ;
    edx = MEM32(ecx + 0x14);
    if (CMP_GE(edx & edx, 0)) goto loc_0001C79C; /* jge: greater or equal (signed >=) */

loc_0001C796: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;

loc_0001C79C: ;
    MEM8(eax + 0x28) = 0;

loc_0001C7A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001C7B0
 * Original: 0x0001C7B0 - 0x0001C8F2 (322 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001C7B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 4);
    eax = MEM32(edx + 0xC);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, edx)) goto loc_0001C7FC; /* je: equal / zero */

loc_0001C7CE: ;
    edi = edi;

loc_0001C7D0: ;
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_0001C7F5; /* je: equal / zero */

loc_0001C7D6: ;
    ecx = MEM32(edi + 0x14);
    if (CMP_EQ(ecx, 3)) goto loc_0001C7F5; /* je: equal / zero */

loc_0001C7DE: ;
    if (CMP_EQ(ecx, 6)) goto loc_0001C7F5; /* je: equal / zero */

loc_0001C7E3: ;
    if (TEST_Z(ecx, ecx)) goto loc_0001C7F5; /* je: equal / zero */

loc_0001C7E7: ;
    (void)0; /* cmp ebx, MEM32(edi + 0xC) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ebx, MEM32(edi + 0xC))) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0001C8F2(); return; } /* jne: not equal / not zero */

loc_0001C7F5: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, edx)) goto loc_0001C7D0; /* jne: not equal / not zero */

loc_0001C7FC: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001C80A; /* jne: not equal / not zero */

loc_0001C805: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001C80A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0001C852; /* je: equal / zero */

loc_0001C830: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0001C852; /* jb: below (unsigned <) */

loc_0001C839: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001C843: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001C84B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001C873; /* jne: not equal / not zero */

loc_0001C852: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001C864: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001C86C: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001C87E; /* je: equal / zero */

loc_0001C873: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001C878: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0001C899; /* jne: not equal / not zero */

loc_0001C87E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001C88F: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001C899: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    ebx = ebx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001C8AF: ;
    eax = MEM32(esi + 0x18);
    if (CMP_A(eax, 7)) goto loc_0001C8D7; /* ja: above (unsigned >) */

loc_0001C8B7: ;
    ecx = ZX8(MEM8(eax + 0x1C9DC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1C9D4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0001C8C5u) goto loc_0001C8C5;
    if (_jt == 0x0001C8CFu) goto loc_0001C8CF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001C8C5: ;
    MEM8(edi + 0x1D) = 0;
    MEM8(edi + 0x21) = 1;
    goto loc_0001C8D7;

loc_0001C8CF: ;
    SET_LO8(eax, 1);
    MEM8(edi + 0x1D) = LO8(eax);
    MEM8(edi + 0x21) = LO8(eax);

loc_0001C8D7: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001C8EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001C9F0
 * Original: 0x0001C9F0 - 0x0001CF0D (1309 bytes, 393 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001C9F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001CA0B: ;
    ebp = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_0001CB12; /* jne: not equal / not zero */

loc_0001CA15: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CAF9; /* je: equal / zero */

loc_0001CA22: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CA32: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD668);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CA42: ;
    edx = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD6F0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CA56: ;
    eax = MEM32(edi + 0xC);
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_0001CA6B; /* jl: less (signed <) */

loc_0001CA60: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001CA70;

loc_0001CA6B: ;
    eax = 0x587BE4;

loc_0001CA70: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD6D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CA81: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD650);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CA95: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_0001CAAA; /* jl: less (signed <) */

loc_0001CA9F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001CAAF;

loc_0001CAAA: ;
    eax = 0x587BE4;

loc_0001CAAF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD638);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CAC0: ;
    ecx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AD6C0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CAD7: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CAE7: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    esp = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001F500(); /* call 0x0001F500 */

loc_0001CAF9: ;
    eax = MEM32(edi + 0x18);
    (void)0; /* cmp eax, 7 - flags set for next jcc */
    SET_LO8(ebx, 1);
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_A(eax, 7)) goto loc_0001CF05; /* ja: above (unsigned >) */

loc_0001CB0B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1CF10); /* switch: 8 entries, 6 targets */
    if (_jt == 0x0001CB83u) goto loc_0001CB83;
    if (_jt == 0x0001CB88u) goto loc_0001CB88;
    if (_jt == 0x0001CC18u) goto loc_0001CC18;
    if (_jt == 0x0001CCA5u) goto loc_0001CCA5;
    if (_jt == 0x0001CCE1u) goto loc_0001CCE1;
    if (_jt == 0x0001CE24u) goto loc_0001CE24;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001CB12: ;
    edx = MEM32(ebp + 0x14);
    if (CMP_EQ(edx, 2)) goto loc_0001CB1F; /* je: equal / zero */

loc_0001CB1A: ;
    if (CMP_NE(edx, 1)) goto loc_0001CAF9; /* jne: not equal / not zero */

loc_0001CB1F: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0001CAF9; /* je: equal / zero */

loc_0001CB27: ;
    SET_LO8(ecx, MEM8(ebp + 0x36));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CAF9; /* je: equal / zero */

loc_0001CB2E: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CAF9; /* je: equal / zero */

loc_0001CB35: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 8))) goto loc_0001CAF9; /* ja: above (unsigned >) */

loc_0001CB3E: ;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp ecx, MEM32(eax + 4) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 4))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001CAF9; /* je: equal / zero */

loc_0001CB4B: ;
    (void)0; /* cmp edx, 5 - flags set for next jcc */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_EQ(edx, 5)) goto loc_0001CB72; /* je: equal / zero */

loc_0001CB5B: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_0001CB72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x3C) = 1;
    MEMF(ebp + 0x40) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001CB83: ;
    MEM8(esp + 0x13) = 0;

loc_0001CB88: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001CB9C: ;
    if (TEST_NZ(eax, eax)) goto loc_0001CF05; /* jne: not equal / not zero */

loc_0001CBA4: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0001CBAB: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0001CC4D; /* je: equal / zero */

loc_0001CBB6: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001CBBB: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0001CC4D; /* je: equal / zero */

loc_0001CBC5: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ebx = ebx | 0xFFFFFFFFu;
    edi = esi;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001CBDD: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    SET_LO8(eax, 1);
    MEM8(esi + 0x1D) = LO8(ecx);
    MEM8(esi + 0x21) = LO8(eax);
    if (CMP_EQ(ebp, ecx)) goto loc_0001CBFC; /* je: equal / zero */

loc_0001CBEB: ;
    SET_LO8(ebx, MEM8(esp + 0x13));
    edi = ebp;
    MEM8(ebp + 0x1E) = LO8(ecx);
    MEM8(ebp + 0x21) = LO8(eax);
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001CBFC: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001CC10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001CC18: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001CC2C: ;
    if (TEST_NZ(eax, eax)) goto loc_0001CF05; /* jne: not equal / not zero */

loc_0001CC34: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0001CC3B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0001CC4D; /* je: equal / zero */

loc_0001CC42: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001CC47: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0001CC69; /* jne: not equal / not zero */

loc_0001CC4D: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001CC5E: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001CC69: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ebx = ebx | 0xFFFFFFFFu;
    edi = esi;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001CC81: ;
    edx = MEM32(0x847024);
    SET_LO8(eax, 1);
    MEM8(esi + 0x1D) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    eax = MEM32(edx + 0x3C);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001CC9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001CCA5: ;
    SET_LO8(eax, MEM8(0x846FF7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CCE1; /* je: equal / zero */

loc_0001CCAE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CCBE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD610);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CCCE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001CCDE: ;
    esp = esp + 0xC;

loc_0001CCE1: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001CCF5: ;
    if (TEST_NZ(eax, eax)) goto loc_0001CDCC; /* jne: not equal / not zero */

loc_0001CCFD: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0001CD04: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0001CD16; /* je: equal / zero */

loc_0001CD0B: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001CD10: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0001CD93; /* jne: not equal / not zero */

loc_0001CD16: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001CD27: ;
    esp = esp + 0xC;

loc_0001CD2A: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_0001CD32: ;
    if (TEST_Z(ebp, ebp)) goto loc_0001CF05; /* je: equal / zero */

loc_0001CD3A: ;
    SET_LO8(eax, MEM8(ebp + 0x37));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001CF05; /* jne: not equal / not zero */

loc_0001CD45: ;
    xmm2 = MEMF(0x759EF8); /* movss */
    edx = MEM32(ebp + 0x10);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648CF8); /* mulss */
    MEMF(ebp + 0x28) = xmm1; /* movss */
    MEM8(ebp + 0x24) = 1;
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(edx + 0x30) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm1 > MEMF(edx + 0x30))) goto loc_0001CD7E; /* ja: above (unsigned >) */

loc_0001CD76: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_0001CD7E: ;
    POP32(esp, edi);
    xmm0 = xmm0 / xmm2; /* divss */
    POP32(esp, esi);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001CD93: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ebx = ebx | 0xFFFFFFFFu;
    edi = esi;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001CDAB: ;
    edx = MEM32(0x847024);
    SET_LO8(eax, 1);
    MEM8(esi + 0x1D) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    eax = MEM32(edx + 0x3C);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001CDC7: ;
    goto loc_0001CD2A;

loc_0001CDCC: ;
    SET_LO8(ecx, MEM8(eax + 0x37));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0001CD2A; /* jne: not equal / not zero */

loc_0001CDD7: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x759EF8); /* movss */
    ecx = MEM32(eax + 0x10);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEM8(eax + 0x24) = LO8(ebx);
    MEMF(eax + 0x2C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(ecx + 0x30) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm1 > MEMF(ecx + 0x30))) goto loc_0001CE0F; /* ja: above (unsigned >) */

loc_0001CE07: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_0001CE0F: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 / xmm2; /* divss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(eax + 0x30) = xmm3; /* movss */
    goto loc_0001CD32;

loc_0001CE24: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001CE38: ;
    if (TEST_NZ(eax, eax)) goto loc_0001CEA4; /* jne: not equal / not zero */

loc_0001CE3C: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0001CE43: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0001CE55; /* je: equal / zero */

loc_0001CE4A: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001CE4F: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0001CE6E; /* jne: not equal / not zero */

loc_0001CE55: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001CE66: ;
    esp = esp + 0xC;
    goto loc_0001CEF0;

loc_0001CE6E: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ebx = ebx | 0xFFFFFFFFu;
    edi = esi;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001CE86: ;
    edx = MEM32(0x847024);
    SET_LO8(eax, 1);
    MEM8(esi + 0x1D) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    eax = MEM32(edx + 0x3C);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001CEA2: ;
    goto loc_0001CEF0;

loc_0001CEA4: ;
    SET_LO8(ecx, MEM8(eax + 0x37));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0001CEF0; /* jne: not equal / not zero */

loc_0001CEAB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x759EF8); /* movss */
    ecx = MEM32(eax + 0x10);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEM8(eax + 0x24) = LO8(ebx);
    MEMF(eax + 0x2C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(ecx + 0x30) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm1 > MEMF(ecx + 0x30))) goto loc_0001CEE3; /* ja: above (unsigned >) */

loc_0001CEDB: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_0001CEE3: ;
    xmm0 = xmm0 / xmm2; /* divss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x30) = xmm0; /* movss */

loc_0001CEF0: ;
    if (TEST_Z(ebp, ebp)) goto loc_0001CF05; /* je: equal / zero */

loc_0001CEF4: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = ebp;
    MEM8(ebp + 0x1E) = 0;
    MEM8(ebp + 0x21) = 1;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001CF05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001D070
 * Original: 0x0001D070 - 0x0001D253 (483 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001D070: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001D24F; /* je: equal / zero */

loc_0001D07E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(ebx, ebx)) goto loc_0001D0C2; /* jne: not equal / not zero */

loc_0001D088: ;
    eax = MEM32(0x847024);
    ebp = MEM32(eax + 0x3C);
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_0001D24C; /* je: equal / zero */

loc_0001D09B: ;
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001D24C; /* je: equal / zero */

loc_0001D0A6: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0001D0B3; /* je: equal / zero */

loc_0001D0AC: ;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001D0B3: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 4))) goto loc_0001D0A6; /* jne: not equal / not zero */

loc_0001D0BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D0C2: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001D0D7: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0001D1A3; /* jne: not equal / not zero */

loc_0001D0E1: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001D24C; /* je: equal / zero */

loc_0001D0EE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D0FE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD5A0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D10E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5AD588);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D11F: ;
    esp = esp + 0x10;
    if (TEST_S(ebx, ebx)) goto loc_0001D139; /* jl: less (signed <) */

loc_0001D126: ;
    if (CMP_GE(ebx, 0x119)) goto loc_0001D139; /* jge: greater or equal (signed >=) */

loc_0001D12E: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    ebx = MEM32(ebx + 0x658FD8);
    goto loc_0001D13E;

loc_0001D139: ;
    ebx = 0x5AD580;

loc_0001D13E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5AD56C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D14F: ;
    ebp = MEM32(ebp + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5AD550);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D164: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD53C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D17B: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001D18B: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x3C);
    esp = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001F500(); /* call 0x0001F500 */

loc_0001D19C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D1A3: ;
    ebp = MEM32(ebp + 0x14);
    if (CMP_A(ebp, 7)) goto loc_0001D24C; /* ja: above (unsigned >) */

loc_0001D1AF: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x1D254); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0001D1B6u) goto loc_0001D1B6;
    if (_jt == 0x0001D1CBu) goto loc_0001D1CB;
    if (_jt == 0x0001D1E1u) goto loc_0001D1E1;
    if (_jt == 0x0001D1F7u) goto loc_0001D1F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001D1B6: ;
    SET_LO8(ebx, 1);
    MEM8(edi + 0x1E) = 0;
    MEM8(edi + 0x21) = LO8(ebx);
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001D1C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D1CB: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM8(edi + 0x1E) = 0;
    MEM8(edi + 0x21) = 1;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001D1DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D1E1: ;
    SET_LO8(eax, 1);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(edi + 0x1E) = LO8(eax);
    MEM8(edi + 0x21) = LO8(eax);
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001D1F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D1F7: ;
    SET_LO8(eax, MEM8(edi + 0x37));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001D24C; /* jne: not equal / not zero */

loc_0001D1FE: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x759EF8); /* movss */
    edx = MEM32(edi + 0x10);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648CF8); /* mulss */
    MEMF(edi + 0x28) = xmm1; /* movss */
    MEM8(edi + 0x24) = 1;
    MEMF(edi + 0x2C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(edx + 0x30) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm1 > MEMF(edx + 0x30))) goto loc_0001D23F; /* ja: above (unsigned >) */

loc_0001D237: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_0001D23F: ;
    xmm0 = xmm0 / xmm2; /* divss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_0001D24C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001D24F: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D3D0
 * Original: 0x0001D3D0 - 0x0001D48A (186 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D3D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001D3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001D486; /* je: equal / zero */

loc_0001D3DE: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001D3F7: ;
    if (TEST_Z(eax, eax)) goto loc_0001D40C; /* je: equal / zero */

loc_0001D3FB: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00021160(); /* call 0x00021160 */

loc_0001D407: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001D40C: ;
    ecx = MEM32(esi + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0001D485; /* je: equal / zero */

loc_0001D416: ;
    if (TEST_Z(eax, eax)) goto loc_0001D485; /* je: equal / zero */

loc_0001D41A: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0001D485; /* je: equal / zero */

loc_0001D421: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0001D429: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0001D43B; /* je: equal / zero */

loc_0001D430: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001D435: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0001D455; /* jne: not equal / not zero */

loc_0001D43B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001D44C: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001D455: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    ebx = ebx | 0xFFFFFFFFu;
    ecx = ebp;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001D467: ;
    ecx = MEM32(0x847024);
    MEM8(edi + 0x1D) = 0;
    MEM8(edi + 0x21) = 1;
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001D483: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_0001D485: ;
    POP32(esp, ebp);

loc_0001D486: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D490
 * Original: 0x0001D490 - 0x0001D49D (13 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D490(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001D490: ;
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi);
    if (CMP_G(ecx & ecx, 0)) { sub_0001D49D(); return; } /* jg: greater (signed >) */

loc_0001D499: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D660
 * Original: 0x0001D660 - 0x0001D737 (215 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D660(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0001D660: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001D66E; /* jne: not equal / not zero */

loc_0001D669: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001D66E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0001D6B8; /* je: equal / zero */

loc_0001D696: ;
    if (CMP_B(MEM32(esi + 0x80), 0x2C)) goto loc_0001D6B8; /* jb: below (unsigned <) */

loc_0001D69F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001D6A9: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001D6B1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001D6D9; /* jne: not equal / not zero */

loc_0001D6B8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001D6CA: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001D6D2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0001D737(); return; } /* je: equal / zero */

loc_0001D6D9: ;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D34); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    POP32(esp, edi);
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = 0;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax) = 0x5AC67C;
    MEMF(eax + 0x18) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0001D740
 * Original: 0x0001D740 - 0x0001D781 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D740(void)
{

loc_0001D740: ;
    PUSH32(esp, esi);
    esi = edx;
    SET_LO8(edx, MEM8(esi + 0x86));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM8(edi) = LO8(edx);
    edx = esi + 0x94;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    esi = esi + 0xA0;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001D790
 * Original: 0x0001D790 - 0x0001D7DD (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D790(void)
{

loc_0001D790: ;
    edx = MEM32(0x7F9F60);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x14) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    MEM8(eax + 0x28) = 1;
    MEM32(eax) = 0x5B1360;
    MEM32(eax + 8) = 2;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 3;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001D7E0
 * Original: 0x0001D7E0 - 0x0001D81C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D7E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001D7E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5AD4D8;
    if (TEST_Z(ecx, ecx)) goto loc_0001D7FE; /* je: equal / zero */

loc_0001D7F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001D7F7: ;
    MEM32(esi + 4) = 0;

loc_0001D7FE: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0001D816; /* je: equal / zero */

loc_0001D805: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001D813: ;
    esp = esp + 4;

loc_0001D816: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001D820
 * Original: 0x0001D820 - 0x0001D869 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D820(void)
{

loc_0001D820: ;
    edx = MEM32(0x7F9F60);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    MEM8(eax + 0x28) = 1;
    MEM32(eax) = 0x5B133C;
    MEM32(eax + 8) = 3;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 2;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001D870
 * Original: 0x0001D870 - 0x0001D8BD (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D870(void)
{

loc_0001D870: ;
    edx = MEM32(0x7F9F60);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x14) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    MEM8(eax + 0x28) = 1;
    MEM32(eax) = 0x5B1318;
    MEM32(eax + 8) = 4;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 3;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001D8C0
 * Original: 0x0001D8C0 - 0x0001D90F (79 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D8C0(void)
{

loc_0001D8C0: ;
    edx = MEM32(0x7F9F60);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = 4;
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    MEM8(eax + 0x28) = 1;
    MEM32(eax) = 0x5B1318;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    MEM32(eax + 0x20) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001D910
 * Original: 0x0001D910 - 0x0001D95D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D910(void)
{

loc_0001D910: ;
    edx = MEM32(0x7F9F60);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x14) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    MEM8(eax + 0x28) = 1;
    MEM32(eax) = 0x5B1384;
    MEM32(eax + 8) = 5;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 3;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001D960
 * Original: 0x0001D960 - 0x0001D965 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D960(void)
{

loc_0001D960: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001D970
 * Original: 0x0001D970 - 0x0001D9C2 (82 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D970(void)
{

loc_0001D970: ;
    edx = MEM32(0x7F9F60);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 8);
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x10);
    MEM8(eax + 0x28) = 1;
    MEM32(eax) = 0x5B12F4;
    MEM32(eax + 8) = 6;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    MEM32(eax + 0x20) = 4;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001D9D0
 * Original: 0x0001D9D0 - 0x0001DA09 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D9D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001D9D0: ;
    eax = MEM32(eax + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x164));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0001DA09(); return; } /* jne: not equal / not zero */

loc_0001D9DD: ;
    ecx = MEM32(eax + 0x15C);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x160) = ecx;
    edx = MEM32(eax + 0x15C);
    if (CMP_EQ(ecx, edx)) { sub_0001DA09(); return; } /* je: equal / zero */

loc_0001D9F6: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) { sub_0001DA09(); return; } /* je: equal / zero */

loc_0001D9FC: ;
    MEM8(eax + 0x164) = 1;
    edx = MEM32(ecx + 0x10);
    MEM32(esi) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0001DA10
 * Original: 0x0001DA10 - 0x0001DA48 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DA10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001DA10: ;
    eax = MEM32(eax + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x164));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0001DA48(); return; } /* je: equal / zero */

loc_0001DA1D: ;
    ecx = MEM32(eax + 0x160);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x160) = ecx;
    ecx = MEM32(eax + 0x15C);
    eax = MEM32(eax + 0x160);
    if (CMP_EQ(eax, ecx)) { sub_0001DA48(); return; } /* je: equal / zero */

loc_0001DA3C: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_0001DA48(); return; } /* je: equal / zero */

loc_0001DA42: ;
    eax = MEM32(eax + 0x10);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001DA50
 * Original: 0x0001DA50 - 0x0001DB0E (190 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DA50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001DA50: ;
    eax = MEM32(0x84A19C);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM8(ebp) = LO8(ebx);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x18) = ebx;
    MEM8(ebp + 0x1C) = LO8(ebx);
    MEM32(ebp + 0x20) = 0xFFFFFFFFu;
    MEMF(ebp + 0x24) = xmm0; /* movss */
    MEMF(ebp + 0x28) = xmm0; /* movss */
    MEM8(ebp + 0x2C) = LO8(ebx);
    if (CMP_NE(eax, ebx)) goto loc_0001DA95; /* jne: not equal / not zero */

loc_0001DA90: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001DA95: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_0001DADF; /* je: equal / zero */

loc_0001DABD: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0001DADF; /* jb: below (unsigned <) */

loc_0001DAC6: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001DAD0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001DAD8: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0001DB00; /* jne: not equal / not zero */

loc_0001DADF: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001DAF1: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001DAF9: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0001DB0E(); return; } /* je: equal / zero */

loc_0001DB00: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    g_seh_ebp = ebp; sub_0001DB10(); return; /* tail jmp 0x0001DB10 */

}

/**
 * sub_0001DE60
 * Original: 0x0001DE60 - 0x0001DF11 (177 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DE60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001DE60: ;
    eax = MEM32(0x847068);
    if (TEST_NZ(eax, eax)) goto loc_0001DF10; /* jne: not equal / not zero */

loc_0001DE6D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001DE7B; /* jne: not equal / not zero */

loc_0001DE76: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001DE7B: ;
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
    if (TEST_Z(esi, esi)) goto loc_0001DEC5; /* je: equal / zero */

loc_0001DEA3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001DEC5; /* jb: below (unsigned <) */

loc_0001DEAC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001DEB6: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001DEBE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001DEE6; /* jne: not equal / not zero */

loc_0001DEC5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001DED7: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001DEDF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0001DF11(); return; } /* je: equal / zero */

loc_0001DEE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001DA50(); /* call 0x0001DA50 */

loc_0001DEEC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x847068) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0001DF0E; /* jne: not equal / not zero */

loc_0001DEF5: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001DF06: ;
    eax = MEM32(0x847068);
    esp = esp + 0xC;

loc_0001DF0E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0001DF10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001DF20
 * Original: 0x0001DF20 - 0x0001E036 (278 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DF20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0001DF20: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = eax;
    xmm0 = MEMF(edi + 0x28); /* movss */
    /* comiss xmm0, MEMF(edi + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x24))) goto loc_0001E002; /* jbe: below or equal (unsigned <=) */

loc_0001DF35: ;
    eax = MEM32(0x847024);
    xmm1 = MEMF(edi + 0x28); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x24); /* subss */
    eax = eax + 0x94;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x24); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0xC) = eax;
    if ((xmm1 > xmm0)) goto loc_0001DF81; /* ja: above (unsigned >) */

loc_0001DF74: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0001DF84; /* jbe: below or equal (unsigned <=) */

loc_0001DF81: ;
    xmm0 = xmm1; /* movaps */

loc_0001DF84: ;
    ecx = MEM32(0x847010);
    edx = MEM32(ecx + 8);
    xmm1 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0001DFA0; /* jnp: not parity */

loc_0001DF9B: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_0001DFA0: ;
    MEM8(edx + 9) = 0;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 8));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0001DFB2; /* jne: not equal / not zero */

loc_0001DFAE: ;
    MEM8(eax + 8) = 1;

loc_0001DFB2: ;
    edx = MEM32(ecx + 0x38);
    xmm1 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0001DFC8; /* jnp: not parity */

loc_0001DFC3: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_0001DFC8: ;
    MEM8(edx + 9) = 0;
    eax = MEM32(ecx + 0x38);
    SET_LO8(edx, MEM8(eax + 8));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0001DFDA; /* jne: not equal / not zero */

loc_0001DFD6: ;
    MEM8(eax + 8) = 1;

loc_0001DFDA: ;
    edx = MEM32(ecx + 0x54);
    xmm1 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0001DFF0; /* jnp: not parity */

loc_0001DFEB: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_0001DFF0: ;
    MEM8(edx + 9) = 0;
    ecx = MEM32(ecx + 0x54);
    SET_LO8(eax, MEM8(ecx + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001E002; /* jne: not equal / not zero */

loc_0001DFFE: ;
    MEM8(ecx + 8) = 1;

loc_0001E002: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E040(); /* call 0x0001E040 */

loc_0001E008: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E9E0(); /* call 0x0001E9E0 */

loc_0001E00E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001EAB0(); /* call 0x0001EAB0 */

loc_0001E014: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001EBA0(); /* call 0x0001EBA0 */

loc_0001E01A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001EC30(); /* call 0x0001EC30 */

loc_0001E020: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E1C0(); /* call 0x0001E1C0 */

loc_0001E026: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E310(); /* call 0x0001E310 */

loc_0001E02C: ;
    PUSH32(esp, 0); sub_0001E3C0(); /* call 0x0001E3C0 */

loc_0001E031: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E040
 * Original: 0x0001E040 - 0x0001E1B4 (372 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E040: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0001E1B0; /* je: equal / zero */

loc_0001E053: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    if (CMP_EQ(edi, eax)) goto loc_0001E1AF; /* je: equal / zero */

loc_0001E05F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_0001E061: ;
    ebx = MEM32(edi);
    if (TEST_Z(ebx, ebx)) goto loc_0001E1A1; /* je: equal / zero */

loc_0001E06B: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_0001E19A; /* jne: not equal / not zero */

loc_0001E076: ;
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, esi)) goto loc_0001E0BB; /* je: equal / zero */

loc_0001E080: ;
    if (CMP_EQ(ebx, MEM32(eax))) goto loc_0001E08D; /* je: equal / zero */

loc_0001E084: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, esi)) goto loc_0001E080; /* jne: not equal / not zero */

loc_0001E08B: ;
    goto loc_0001E0BB;

loc_0001E08D: ;
    if (CMP_EQ(eax, esi)) goto loc_0001E0BB; /* je: equal / zero */

loc_0001E091: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001E0B1: ;
    eax = MEM32(esi + 0x10);
    esp = esp + 4;
    eax--;
    MEM32(esi + 0x10) = eax;

loc_0001E0BB: ;
    ecx = MEM32(ebx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0001E138; /* je: equal / zero */

loc_0001E0C2: ;
    eax = MEM32(ecx + 0x2C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001E123; /* je: equal / zero */

loc_0001E0CA: ;
    if (CMP_EQ(eax, 0x91)) goto loc_0001E123; /* je: equal / zero */

loc_0001E0D1: ;
    if (CMP_EQ(eax, 0x93)) goto loc_0001E123; /* je: equal / zero */

loc_0001E0D8: ;
    if (CMP_EQ(eax, 0x92)) goto loc_0001E123; /* je: equal / zero */

loc_0001E0DF: ;
    xmm1 = MEMF(0x759EF0); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0001E0F6; /* jbe: below or equal (unsigned <=) */

loc_0001E0EF: ;
    MEMF(ecx + 0x30) = xmm0; /* movss */
    goto loc_0001E114;

loc_0001E0F6: ;
    xmm0 = MEMF(ecx + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x759EAC); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0001E10F; /* jbe: below or equal (unsigned <=) */

loc_0001E108: ;
    MEMF(ecx + 0x30) = xmm0; /* movss */
    goto loc_0001E114;

loc_0001E10F: ;
    MEMF(ecx + 0x30) = xmm1; /* movss */

loc_0001E114: ;
    ecx = (int32_t)MEMF(ecx + 0x30); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_0001E120: ;
    esp = esp + 8;

loc_0001E123: ;
    ecx = MEM32(ebx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0001E131; /* je: equal / zero */

loc_0001E12A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0001E131: ;
    MEM32(ebx + 0x10) = 0;

loc_0001E138: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001E146: ;
    esi = MEM32(ebp + 4);
    esp = esp + 4;
    if (CMP_EQ(edi, esi)) goto loc_0001E1A1; /* je: equal / zero */

loc_0001E150: ;
    ebx = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    edx = ebx;
    MEM32(ecx + 8) = edx;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0001E16A: ;
    if (TEST_NZ(eax, eax)) goto loc_0001E18F; /* jne: not equal / not zero */

loc_0001E16E: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0001E18C: ;
    esp = esp + 4;

loc_0001E18F: ;
    eax = MEM32(esi + 0x10);
    eax--;
    edi = ebx;
    MEM32(esi + 0x10) = eax;
    goto loc_0001E1A1;

loc_0001E19A: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00020DF0(); /* call 0x00020DF0 */

loc_0001E1A1: ;
    edi = MEM32(edi + 0xC);
    if (CMP_NE(edi, MEM32(ebp + 4))) goto loc_0001E061; /* jne: not equal / not zero */

loc_0001E1AD: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001E1AF: ;
    POP32(esp, edi);

loc_0001E1B0: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001E1C0
 * Original: 0x0001E1C0 - 0x0001E305 (325 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, ebx)) goto loc_0001E243; /* je: equal / zero */

loc_0001E1D4: ;
    edi = MEM32(eax + 8);
    if (CMP_EQ(edi, ebx)) goto loc_0001E23B; /* je: equal / zero */

loc_0001E1DB: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, ebx)) goto loc_0001E23B; /* je: equal / zero */

loc_0001E1E2: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001E200; /* je: equal / zero */

loc_0001E1E9: ;
    ecx--;
    if ((ecx != 0)) goto loc_0001E23B; /* jne: not equal / not zero */

loc_0001E1EC: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    esi = ecx;
    goto loc_0001E217;

loc_0001E200: ;
    ecx = MEM32(eax + 0xC);
    esi = MEM32(eax);
    esi = MEM32(esi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, edi)) goto loc_0001E217; /* jne: not equal / not zero */

loc_0001E214: ;
    MEM32(eax + 0xC) = ebx;

loc_0001E217: ;
    if (CMP_EQ(esi, ebx)) goto loc_0001E23B; /* je: equal / zero */

loc_0001E21B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0001E222: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001E232; /* jne: not equal / not zero */

loc_0001E226: ;
    eax = MEM32(ebp + 0x10);
    edx = esi;
    PUSH32(esp, 0); sub_0029EA40(); /* call 0x0029EA40 */

loc_0001E230: ;
    goto loc_0001E23B;

loc_0001E232: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001E23B: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0001E1D4; /* jne: not equal / not zero */

loc_0001E243: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0001E2FE; /* je: equal / zero */

loc_0001E24F: ;
    /* nop */

loc_0001E250: ;
    esi = MEM32(eax + 8);
    if (CMP_NE(esi, ebx)) goto loc_0001E25B; /* jne: not equal / not zero */

loc_0001E257: ;
    ecx = 0; /* xor self */
    goto loc_0001E29F;

loc_0001E25B: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_0001E266; /* jne: not equal / not zero */

loc_0001E262: ;
    ecx = 0; /* xor self */
    goto loc_0001E29F;

loc_0001E266: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001E286; /* je: equal / zero */

loc_0001E26D: ;
    ecx--;
    if ((ecx == 0)) goto loc_0001E274; /* je: equal / zero */

loc_0001E270: ;
    ecx = 0; /* xor self */
    goto loc_0001E29F;

loc_0001E274: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    goto loc_0001E29F;

loc_0001E286: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax);
    edi = MEM32(edi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, esi)) goto loc_0001E29D; /* jne: not equal / not zero */

loc_0001E29A: ;
    MEM32(eax + 0xC) = ebx;

loc_0001E29D: ;
    ecx = edi;

loc_0001E29F: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 8);
    if (CMP_EQ(edx, ebx)) goto loc_0001E2F2; /* je: equal / zero */

loc_0001E2A9: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_0001E2F2; /* je: equal / zero */

loc_0001E2AE: ;
    edx = MEM32(eax + 0x14);
    edx = edx - ebx;
    if ((edx == 0)) goto loc_0001E2D0; /* je: equal / zero */

loc_0001E2B5: ;
    edx--;
    if ((edx != 0)) goto loc_0001E2F2; /* jne: not equal / not zero */

loc_0001E2B8: ;
    edx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    MEM32(esi + edx * 4) = ecx;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    edx++;
    ecx++;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 4) = ecx;
    goto loc_0001E2F2;

loc_0001E2D0: ;
    edx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    MEM32(esi + edx * 4) = ecx;
    edi = MEM32(eax + 4);
    esi = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    edi++;
    esi++;
    ecx = esi;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax + 4) = edi;
    MEM32(eax + 0x10) = esi;
    if (CMP_NE(ecx, edx)) goto loc_0001E2F2; /* jne: not equal / not zero */

loc_0001E2EF: ;
    MEM32(eax + 0x10) = ebx;

loc_0001E2F2: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0001E250; /* jne: not equal / not zero */

loc_0001E2FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001E310
 * Original: 0x0001E310 - 0x0001E3B8 (168 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E310: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(MEM8(ebp), 0)) goto loc_0001E3B4; /* jne: not equal / not zero */

loc_0001E31F: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0001E3B4; /* je: equal / zero */

loc_0001E32D: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001E3B3; /* je: equal / zero */

loc_0001E335: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0001E337: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0001E3A9; /* je: equal / zero */

loc_0001E33D: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0001E35A; /* jnp: not parity */

loc_0001E34F: ;
    xmm0 = MEMF(ecx + 0x10); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 >= MEMF(ecx + 8))) goto loc_0001E367; /* jae: above or equal (unsigned >=) */

loc_0001E35A: ;
    eax = MEM32(ecx + 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001E3A5; /* je: equal / zero */

loc_0001E362: ;
    if (CMP_NE(MEM32(ecx + 0xC), eax)) goto loc_0001E3A5; /* jne: not equal / not zero */

loc_0001E367: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0001E36E: ;
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(esi, edi)) goto loc_0001E3A9; /* je: equal / zero */

loc_0001E375: ;
    ebx = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edx = ebx;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(eax + 0xC) = ecx;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001E397: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    eax--;
    esi = ebx;
    MEM32(edi + 0x10) = eax;
    goto loc_0001E3A9;

loc_0001E3A5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0001E3A9: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 0x14))) goto loc_0001E337; /* jne: not equal / not zero */

loc_0001E3B1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0001E3B3: ;
    POP32(esp, esi);

loc_0001E3B4: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001E3C0
 * Original: 0x0001E3C0 - 0x0001E419 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E3C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm1;

loc_0001E3C0: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001E418; /* je: equal / zero */

loc_0001E3C7: ;
    ecx = MEM32(0x847024);
    eax = MEM32(edi + 0x20);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0); sub_00024D90(); /* call 0x00024D90 */

loc_0001E3D8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001E418; /* jne: not equal / not zero */

loc_0001E3DC: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001E417; /* je: equal / zero */

loc_0001E3E7: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0001E40F; /* je: equal / zero */

loc_0001E3ED: ;
    if (CMP_EQ(MEM32(eax + 0x18), 1)) goto loc_0001E40F; /* je: equal / zero */

loc_0001E3F3: ;
    SET_LO8(ecx, MEM8(eax + 0x37));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001E40F; /* je: equal / zero */

loc_0001E3FA: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0001E40F; /* je: equal / zero */

loc_0001E401: ;
    xmm1 = MEMF(eax + 0x38); /* movss */
    MEM8(eax + 0x37) = 0;
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_0001E40F: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(edi + 4))) goto loc_0001E3E7; /* jne: not equal / not zero */

loc_0001E417: ;
    POP32(esp, esi);

loc_0001E418: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001E420
 * Original: 0x0001E420 - 0x0001E4A0 (128 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_0001E460; /* je: equal / zero */

loc_0001E435: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0001E459; /* je: equal / zero */

loc_0001E43B: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0001E459; /* je: equal / zero */

loc_0001E442: ;
    eax = MEM32(eax + 0xC);
    ebp = MEM32(ebx);
    eax = MEM32(ebp + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0001E459; /* je: equal / zero */

loc_0001E44F: ;
    (void)0; /* cmp MEM32(eax + 0x20), edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax + 0x20), edi)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0001E4A0(); return; } /* jne: not equal / not zero */

loc_0001E459: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(ecx, edx)) goto loc_0001E435; /* jne: not equal / not zero */

loc_0001E460: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_0001E49A; /* je: equal / zero */

loc_0001E46A: ;
    /* nop */

loc_0001E470: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0001E493; /* je: equal / zero */

loc_0001E476: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0001E493; /* je: equal / zero */

loc_0001E47D: ;
    eax = MEM32(eax + 0xC);
    esi = MEM32(ebx);
    eax = MEM32(esi + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0001E493; /* je: equal / zero */

loc_0001E489: ;
    (void)0; /* cmp MEM32(eax + 0x20), edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax + 0x20), edi)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0001E4A0(); return; } /* jne: not equal / not zero */

loc_0001E493: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(ecx, edx)) goto loc_0001E470; /* jne: not equal / not zero */

loc_0001E49A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001E4B0
 * Original: 0x0001E4B0 - 0x0001E4EF (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E4B0: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    if (CMP_EQ(edi, eax)) goto loc_0001E4EA; /* je: equal / zero */

loc_0001E4C0: ;
    PUSH32(esp, esi);

loc_0001E4C1: ;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_0001E4E1; /* je: equal / zero */

loc_0001E4C7: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0001E4E1; /* je: equal / zero */

loc_0001E4CE: ;
    if (CMP_EQ(eax, 3)) goto loc_0001E4E1; /* je: equal / zero */

loc_0001E4D3: ;
    if (CMP_EQ(eax, 6)) goto loc_0001E4E1; /* je: equal / zero */

loc_0001E4D8: ;
    esi = MEM32(ecx + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0001AAE0(); /* call 0x0001AAE0 */

loc_0001E4E1: ;
    edi = MEM32(edi + 0xC);
    if (CMP_NE(edi, MEM32(ebx + 4))) goto loc_0001E4C1; /* jne: not equal / not zero */

loc_0001E4E9: ;
    POP32(esp, esi);

loc_0001E4EA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001E4F0
 * Original: 0x0001E4F0 - 0x0001E505 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E4F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E4F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001E570(); /* call 0x0001E570 */

loc_0001E4F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001E5D0(); /* call 0x0001E5D0 */

loc_0001E4FE: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0001E710(); return; /* tail jmp 0x0001E710 */

}

/**
 * sub_0001E510
 * Original: 0x0001E510 - 0x0001E563 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E510: ;
    SET_LO8(eax, MEM8(0x846FFD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001E54E; /* je: equal / zero */

loc_0001E519: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001E52A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1B9C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001E53A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001E54A: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_0001E54E: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E570(); /* call 0x0001E570 */

loc_0001E556: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E5D0(); /* call 0x0001E5D0 */

loc_0001E55C: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0001E710(); return; /* tail jmp 0x0001E710 */

}

/**
 * sub_0001E570
 * Original: 0x0001E570 - 0x0001E5C9 (89 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E570: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_0001E5C5; /* je: equal / zero */

loc_0001E57C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001E5C4; /* je: equal / zero */

loc_0001E584: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0001E586: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0001E5BA; /* je: equal / zero */

loc_0001E58C: ;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001E593: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001E5BA; /* je: equal / zero */

loc_0001E59B: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_0001E5B0; /* je: equal / zero */

loc_0001E5A5: ;
    if (CMP_EQ(edi, MEM32(eax))) goto loc_0001E5BA; /* je: equal / zero */

loc_0001E5A9: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_0001E5A5; /* jne: not equal / not zero */

loc_0001E5B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001E5BA: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 4))) goto loc_0001E586; /* jne: not equal / not zero */

loc_0001E5C2: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0001E5C4: ;
    POP32(esp, esi);

loc_0001E5C5: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001E5D0
 * Original: 0x0001E5D0 - 0x0001E70D (317 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E5D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E5D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_0001E63C; /* je: equal / zero */

loc_0001E5E1: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0001E63C; /* je: equal / zero */

loc_0001E5E6: ;
    esi = MEM32(eax + 8);
    if (CMP_EQ(esi, ebx)) goto loc_0001E634; /* je: equal / zero */

loc_0001E5ED: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, ebx)) goto loc_0001E634; /* je: equal / zero */

loc_0001E5F4: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001E610; /* je: equal / zero */

loc_0001E5FB: ;
    ecx--;
    if ((ecx != 0)) goto loc_0001E634; /* jne: not equal / not zero */

loc_0001E5FE: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    goto loc_0001E629;

loc_0001E610: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax);
    edi = MEM32(edi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, esi)) goto loc_0001E627; /* jne: not equal / not zero */

loc_0001E624: ;
    MEM32(eax + 0xC) = ebx;

loc_0001E627: ;
    ecx = edi;

loc_0001E629: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0001E634; /* je: equal / zero */

loc_0001E62D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001E634: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0001E5E6; /* jne: not equal / not zero */

loc_0001E63C: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_0001E69E; /* je: equal / zero */

loc_0001E643: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0001E69E; /* je: equal / zero */

loc_0001E648: ;
    esi = MEM32(eax + 8);
    if (CMP_EQ(esi, ebx)) goto loc_0001E696; /* je: equal / zero */

loc_0001E64F: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, ebx)) goto loc_0001E696; /* je: equal / zero */

loc_0001E656: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001E672; /* je: equal / zero */

loc_0001E65D: ;
    ecx--;
    if ((ecx != 0)) goto loc_0001E696; /* jne: not equal / not zero */

loc_0001E660: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    goto loc_0001E68B;

loc_0001E672: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax);
    edi = MEM32(edi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, esi)) goto loc_0001E689; /* jne: not equal / not zero */

loc_0001E686: ;
    MEM32(eax + 0xC) = ebx;

loc_0001E689: ;
    ecx = edi;

loc_0001E68B: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0001E696; /* je: equal / zero */

loc_0001E68F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001E696: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0001E648; /* jne: not equal / not zero */

loc_0001E69E: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_0001E706; /* je: equal / zero */

loc_0001E6A5: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0001E706; /* je: equal / zero */

loc_0001E6AA: ;
    /* nop */

loc_0001E6B0: ;
    esi = MEM32(eax + 8);
    if (CMP_EQ(esi, ebx)) goto loc_0001E6FE; /* je: equal / zero */

loc_0001E6B7: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, ebx)) goto loc_0001E6FE; /* je: equal / zero */

loc_0001E6BE: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001E6DA; /* je: equal / zero */

loc_0001E6C5: ;
    ecx--;
    if ((ecx != 0)) goto loc_0001E6FE; /* jne: not equal / not zero */

loc_0001E6C8: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    goto loc_0001E6F3;

loc_0001E6DA: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax);
    edi = MEM32(edi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, esi)) goto loc_0001E6F1; /* jne: not equal / not zero */

loc_0001E6EE: ;
    MEM32(eax + 0xC) = ebx;

loc_0001E6F1: ;
    ecx = edi;

loc_0001E6F3: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0001E6FE; /* je: equal / zero */

loc_0001E6F7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001E6FE: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0001E6B0; /* jne: not equal / not zero */

loc_0001E706: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001E710
 * Original: 0x0001E710 - 0x0001E742 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E710(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001E710: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0001E740; /* je: equal / zero */

loc_0001E71A: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001E737; /* je: equal / zero */

loc_0001E722: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0001E72F; /* je: equal / zero */

loc_0001E728: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0001E72F: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(edi + 0x14))) goto loc_0001E722; /* jne: not equal / not zero */

loc_0001E737: ;
    edi = MEM32(edi + 0x14);
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_0001E73F: ;
    POP32(esp, esi);

loc_0001E740: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001E750
 * Original: 0x0001E750 - 0x0001E7EE (158 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E750: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0001E765; /* jne: not equal / not zero */

loc_0001E760: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001E765: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0001E7AD; /* je: equal / zero */

loc_0001E78B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0001E7AD; /* jb: below (unsigned <) */

loc_0001E794: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001E79E: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001E7A6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001E7CE; /* jne: not equal / not zero */

loc_0001E7AD: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001E7BF: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001E7C7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001E7D9; /* je: equal / zero */

loc_0001E7CE: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001E7D3: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) { sub_0001E7EE(); return; } /* jne: not equal / not zero */

loc_0001E7D9: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_0001E7E5: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001E8B0
 * Original: 0x0001E8B0 - 0x0001E9BE (270 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E8B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001E8E2; /* je: equal / zero */

loc_0001E8BE: ;
    if (TEST_Z(eax, eax)) goto loc_0001E8E2; /* je: equal / zero */

loc_0001E8C2: ;
    PUSH32(esp, 4);
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0001E8D1: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) { sub_0001E9BE(); return; } /* je: equal / zero */

loc_0001E8DE: ;
    MEM32(ebx) = esi;
    goto loc_0001E948;

loc_0001E8E2: ;
    eax = MEM32(esi * 8 + 0x6585E0);
    eax++;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0001E8F3: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) { sub_0001E9BE(); return; } /* je: equal / zero */

loc_0001E900: ;
    MEM32(ebx) = esi;
    eax = MEM32(esi * 8 + 0x6585E0);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = 1;
    if (CMP_LE(eax & eax, 0)) goto loc_0001E944; /* jle: less or equal (signed <=) */

loc_0001E914: ;
    goto loc_0001E920;

    /* nop */
    /* nop */

loc_0001E920: ;
    eax = MEM32(esi * 8 + 0x6585E4);
    eax = MEM32(eax + ecx * 8 + 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001E938; /* je: equal / zero */

loc_0001E930: ;
    if (CMP_EQ(eax, esi)) goto loc_0001E938; /* je: equal / zero */

loc_0001E934: ;
    MEM32(ebx + edx * 4) = eax;
    edx++;

loc_0001E938: ;
    eax = MEM32(esi * 8 + 0x6585E0);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0001E920; /* jl: less (signed <) */

loc_0001E944: ;
    MEM32(esp + 8) = edx;

loc_0001E948: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC);
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ebp, eax)) goto loc_0001E998; /* je: equal / zero */

loc_0001E958: ;
    edi = MEM32(ebp);
    if (TEST_Z(edi, edi)) goto loc_0001E98C; /* je: equal / zero */

loc_0001E95F: ;
    eax = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0001E98C; /* jle: less or equal (signed <=) */

loc_0001E969: ;
    /* nop */

loc_0001E970: ;
    edx = MEM32(ebx + esi * 4);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = edi;
    PUSH32(esp, 0); sub_00021070(); /* call 0x00021070 */

loc_0001E97F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001E9AB; /* jne: not equal / not zero */

loc_0001E983: ;
    eax = MEM32(esp + 0x10);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0001E970; /* jl: less (signed <) */

loc_0001E98C: ;
    eax = MEM32(esp + 0x18);
    ebp = MEM32(ebp + 0xC);
    if (CMP_NE(ebp, MEM32(eax + 4))) goto loc_0001E958; /* jne: not equal / not zero */

loc_0001E998: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001E99E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0001E9AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001E9B1: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001E9E0
 * Original: 0x0001E9E0 - 0x0001EAA8 (200 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001E9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001E9E0: ;
    SET_LO8(eax, MEM8(0x846FFD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001EAA4; /* je: equal / zero */

loc_0001E9F2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0001EAA4; /* je: equal / zero */

loc_0001EA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B1B40);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EA13: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5B1B24);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EA2A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EA3A: ;
    esp = esp + 0x10;
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0001EA78; /* jle: less or equal (signed <=) */

loc_0001EA43: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax + edi;
    if (CMP_L(eax, edx)) goto loc_0001EA54; /* jl: less (signed <) */

loc_0001EA52: ;
    eax = eax - edx;

loc_0001EA54: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001EA60: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EA70: ;
    esp = esp + 4;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_0001EA43; /* jl: less (signed <) */

loc_0001EA78: ;
    eax = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1ABC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EA8E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1A60);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EA9E: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001EAA4: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001EAB0
 * Original: 0x0001EAB0 - 0x0001EB91 (225 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001EAB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_0001EB8C; /* je: equal / zero */

loc_0001EAC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0001EAC8: ;
    edi = MEM32(eax + 8);
    if (CMP_NE(edi, ebx)) goto loc_0001EAD3; /* jne: not equal / not zero */

loc_0001EACF: ;
    esi = 0; /* xor self */
    goto loc_0001EB17;

loc_0001EAD3: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_0001EADE; /* jne: not equal / not zero */

loc_0001EADA: ;
    esi = 0; /* xor self */
    goto loc_0001EB17;

loc_0001EADE: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0001EB00; /* je: equal / zero */

loc_0001EAE5: ;
    ecx--;
    if ((ecx == 0)) goto loc_0001EAEC; /* je: equal / zero */

loc_0001EAE8: ;
    esi = 0; /* xor self */
    goto loc_0001EB17;

loc_0001EAEC: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    esi = ecx;
    goto loc_0001EB17;

loc_0001EB00: ;
    ecx = MEM32(eax + 0xC);
    esi = MEM32(eax);
    esi = MEM32(esi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, edi)) goto loc_0001EB17; /* jne: not equal / not zero */

loc_0001EB14: ;
    MEM32(eax + 0xC) = ebx;

loc_0001EB17: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0001EB1E: ;
    if (CMP_EQ(eax, ebx)) goto loc_0001EB75; /* je: equal / zero */

loc_0001EB22: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 8);
    if (CMP_EQ(edx, ebx)) goto loc_0001EB75; /* je: equal / zero */

loc_0001EB2C: ;
    if (CMP_EQ(MEM32(ecx + 4), edx)) goto loc_0001EB75; /* je: equal / zero */

loc_0001EB31: ;
    edx = MEM32(ecx + 0x14);
    edx = edx - ebx;
    if ((edx == 0)) goto loc_0001EB53; /* je: equal / zero */

loc_0001EB38: ;
    edx--;
    if ((edx != 0)) goto loc_0001EB75; /* jne: not equal / not zero */

loc_0001EB3B: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(ecx);
    MEM32(edi + edx * 4) = eax;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 4);
    edx++;
    eax++;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 4) = eax;
    goto loc_0001EB75;

loc_0001EB53: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(ecx);
    MEM32(edi + edx * 4) = eax;
    eax = MEM32(ecx + 4);
    edi = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    eax++;
    edi++;
    MEM32(ecx + 4) = eax;
    eax = edi;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ecx + 0x10) = edi;
    if (CMP_NE(eax, edx)) goto loc_0001EB75; /* jne: not equal / not zero */

loc_0001EB72: ;
    MEM32(ecx + 0x10) = ebx;

loc_0001EB75: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0001EB7E: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0001EAC8; /* jne: not equal / not zero */

loc_0001EB8A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0001EB8C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001EBA0
 * Original: 0x0001EBA0 - 0x0001EC28 (136 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001EBA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_0001EC24; /* je: equal / zero */

loc_0001EBAF: ;
    ecx = esi + -1;
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0001EC24; /* jle: less or equal (signed <=) */

loc_0001EBB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_0001EBC0;

    /* nop */

loc_0001EBC0: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax + 8);
    ecx = ecx + edx;
    if (CMP_L(ecx, edi)) goto loc_0001EBCE; /* jl: less (signed <) */

loc_0001EBCC: ;
    ecx = ecx - edi;

loc_0001EBCE: ;
    edi = MEM32(eax);
    ebx = MEM32(edi + ecx * 4);
    ebp = edx + 1;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    edi = ebp;
    if (CMP_GE(ebp, esi)) goto loc_0001EC0E; /* jge: greater or equal (signed >=) */

loc_0001EBDC: ;
    /* nop */

loc_0001EBE0: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    ecx = ecx + edi;
    if (CMP_L(ecx, edx)) goto loc_0001EBEE; /* jl: less (signed <) */

loc_0001EBEC: ;
    ecx = ecx - edx;

loc_0001EBEE: ;
    edx = MEM32(eax);
    ecx = MEM32(edx + ecx * 4);
    if (CMP_NE(ebx, ecx)) goto loc_0001EBFF; /* jne: not equal / not zero */

loc_0001EBF7: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_0001EBFF: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0001EBE0; /* jl: less (signed <) */

loc_0001EC0E: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0xC);
    esi = MEM32(eax + 4);
    edx = ebp;
    ecx = esi + -1;
    if (CMP_L(edx, ecx)) goto loc_0001EBC0; /* jl: less (signed <) */

loc_0001EC21: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001EC24: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001EC30
 * Original: 0x0001EC30 - 0x0001ECF8 (200 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001EC30: ;
    SET_LO8(eax, MEM8(0x846FFD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001ECF4; /* je: equal / zero */

loc_0001EC42: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0001ECF4; /* je: equal / zero */

loc_0001EC50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B1A00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EC63: ;
    ecx = MEM32(ebp + 0xC);
    ebx = MEM32(ecx + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5B1B24);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EC7A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EC8A: ;
    esp = esp + 0x10;
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0001ECC8; /* jle: less or equal (signed <=) */

loc_0001EC93: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax + edi;
    if (CMP_L(eax, edx)) goto loc_0001ECA4; /* jl: less (signed <) */

loc_0001ECA2: ;
    eax = eax - edx;

loc_0001ECA4: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001ECB0: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001ECC0: ;
    esp = esp + 4;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_0001EC93; /* jl: less (signed <) */

loc_0001ECC8: ;
    eax = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1ABC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001ECDE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B19A0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001ECEE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001ECF4: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001ED00
 * Original: 0x0001ED00 - 0x0001EFA3 (675 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ED00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001ED00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    SET_LO8(eax, MEM8(esi + 0x85));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001ED7D; /* jne: not equal / not zero */

loc_0001ED18: ;
    edi = MEM32(esi + 0x40);
    SET_LO8(eax, MEM8(edi + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x847046) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001ED37; /* je: equal / zero */

loc_0001ED29: ;
    ebx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0002F2C0(); /* call 0x0002F2C0 */

loc_0001ED33: ;
    MEM8(edi + 0x14) = 0;

loc_0001ED37: ;
    ebx = MEM32(esi + 0x3C);
    if (CMP_EQ(MEM8(ebx), 0)) goto loc_0001ED49; /* je: equal / zero */

loc_0001ED3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0001E4B0(); /* call 0x0001E4B0 */

loc_0001ED46: ;
    MEM8(ebx) = 0;

loc_0001ED49: ;
    eax = MEM32(esi + 0x44);
    MEM8(eax + 0x1D) = 0;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001ED7D; /* jne: not equal / not zero */

loc_0001ED59: ;
    esi = MEM32(esi + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = 0x23;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001ED69: ;
    if (TEST_Z(eax, eax)) goto loc_0001ED7D; /* je: equal / zero */

loc_0001ED6D: ;
    SET_LO8(ebx, 1);
    edi = eax;
    MEM8(eax + 0x1E) = 0;
    MEM8(eax + 0x21) = LO8(ebx);
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001ED7D: ;
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001ED95; /* jne: not equal / not zero */

loc_0001ED88: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x24) = xmm0; /* movss */
    MEMF(edi + 0x28) = xmm0; /* movss */

loc_0001ED95: ;
    SET_LO8(eax, MEM8(0x846FFD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001EEE9; /* je: equal / zero */

loc_0001EDA2: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EDB2: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1988);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EDC2: ;
    eax = MEM32(ebp);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001EE92; /* je: equal / zero */

loc_0001EDD0: ;
    eax = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0001EEA5; /* jle: less or equal (signed <=) */

loc_0001EDDD: ;
    edi = 0; /* xor self */
    /* nop */

loc_0001EDE0: ;
    ecx = MEM32(ebp);
    edx = MEM32(edi + ecx);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B196C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EDF7: ;
    eax = MEM32(ebp);
    eax = MEM32(edi + eax);
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_0001EE0F; /* jl: less (signed <) */

loc_0001EE04: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001EE14;

loc_0001EE0F: ;
    eax = 0x587BE4;

loc_0001EE14: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1950);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EE25: ;
    ecx = MEM32(ebp);
    eax = MEM32(edi + ecx + 8);
    esi = MEM32(0x847024);
    eax = eax ^ 0xFFFF;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B192C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EE43: ;
    edx = MEM32(ebp);
    eax = MEM32(edi + edx + 0xC);
    ecx = MEM32(eax * 4 + 0x65C7D4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1910);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EE62: ;
    edx = MEM32(ebp);
    eax = MEM32(edi + edx + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B18F4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EE7A: ;
    eax = MEM32(ebp + 4);
    esp = esp + 0x24;
    ebx++;
    edi = edi + 0x14;
    if (CMP_L(ebx, eax)) goto loc_0001EDE0; /* jl: less (signed <) */

loc_0001EE8C: ;
    edi = MEM32(esp + 0x14);
    goto loc_0001EEA5;

loc_0001EE92: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B18DC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EEA2: ;
    esp = esp + 4;

loc_0001EEA5: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx * 4 + 0x65C774);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B18C0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EEC0: ;
    eax = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B18A4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EED6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001EEE6: ;
    esp = esp + 0x14;

loc_0001EEE9: ;
    eax = MEM32(ebp + 8);
    if (CMP_A(eax, 4)) goto loc_0001EF9C; /* ja: above (unsigned >) */

loc_0001EEF5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1EFA4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0001EEFCu) goto loc_0001EEFC;
    if (_jt == 0x0001EF0Fu) goto loc_0001EF0F;
    if (_jt == 0x0001EF24u) goto loc_0001EF24;
    if (_jt == 0x0001EF7Eu) goto loc_0001EF7E;
    if (_jt == 0x0001EF90u) goto loc_0001EF90;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001EEFC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001EFC0(); /* call 0x0001EFC0 */

loc_0001EF08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001EF0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001EFC0(); /* call 0x0001EFC0 */

loc_0001EF1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001EF24: ;
    if (CMP_EQ(MEM8(0x7FA23C), 2)) goto loc_0001EF90; /* je: equal / zero */

loc_0001EF2D: ;
    if (CMP_EQ(MEM32(0x7FA1F0), 0x22)) goto loc_0001EF90; /* je: equal / zero */

loc_0001EF36: ;
    eax = MEM32(edi + 4);
    ebx = MEM32(eax + 0xC);
    if (CMP_EQ(ebx, eax)) goto loc_0001EF9C; /* je: equal / zero */

loc_0001EF40: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_0001EF6F; /* je: equal / zero */

loc_0001EF46: ;
    eax = MEM32(esi + 0x14);
    eax--;
    if ((eax == 0)) goto loc_0001EF5A; /* je: equal / zero */

loc_0001EF4C: ;
    eax--;
    if ((eax == 0)) goto loc_0001EF54; /* je: equal / zero */

loc_0001EF4F: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0001EF6F; /* jne: not equal / not zero */

loc_0001EF54: ;
    MEM8(esi + 0x1C) = 1;
    goto loc_0001EF6F;

loc_0001EF5A: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001EF62: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFCu;
    eax = eax + 4;
    MEM32(esi + 0x14) = eax;

loc_0001EF6F: ;
    ebx = MEM32(ebx + 0xC);
    if (CMP_NE(ebx, MEM32(edi + 4))) goto loc_0001EF40; /* jne: not equal / not zero */

loc_0001EF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001EF7E: ;
    if (CMP_EQ(MEM8(0x7FA23C), 2)) goto loc_0001EF90; /* je: equal / zero */

loc_0001EF87: ;
    if (CMP_NE(MEM32(0x7FA1F0), 0x22)) goto loc_0001EF9C; /* jne: not equal / not zero */

loc_0001EF90: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001EFC0(); /* call 0x0001EFC0 */

loc_0001EF9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001EFC0
 * Original: 0x0001EFC0 - 0x0001EFE4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EFC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001EFC0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 0x10);
    if (TEST_NZ(ecx, ecx)) { sub_0001EFE4(); return; } /* jne: not equal / not zero */

loc_0001EFD2: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001F240(); /* call 0x0001F240 */

loc_0001EFDD: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001F240
 * Original: 0x0001F240 - 0x0001F39F (351 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F240: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_GE(eax, ebx)) goto loc_0001F253; /* jge: greater or equal (signed >=) */

loc_0001F24A: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */

loc_0001F253: ;
    if (CMP_LE(eax, ebx)) goto loc_0001F398; /* jle: less or equal (signed <=) */

loc_0001F259: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM32(esp + 0x14) = eax;

loc_0001F262: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    esi = MEM32(esp + 0x1C);
    eax = eax + ebp;
    PUSH32(esp, 0); sub_0001F3B0(); /* call 0x0001F3B0 */

loc_0001F273: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F383; /* je: equal / zero */

loc_0001F27B: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + ebp + 8);
    if (CMP_EQ(eax, ebx)) goto loc_0001F290; /* je: equal / zero */

loc_0001F285: ;
    eax = eax ^ 0xFFFF;
    MEM32(esp + 0x10) = eax;
    goto loc_0001F294;

loc_0001F290: ;
    MEM32(esp + 0x10) = ebx;

loc_0001F294: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0001F2A1; /* jne: not equal / not zero */

loc_0001F29C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001F2A1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0001F2EB; /* je: equal / zero */

loc_0001F2C7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_0001F2EB; /* jb: below (unsigned <) */

loc_0001F2D0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001F2DA: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001F2E2: ;
    edi = eax;
    esp = esp + 8;
    if (CMP_NE(edi, ebx)) goto loc_0001F312; /* jne: not equal / not zero */

loc_0001F2EB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001F2FD: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001F305: ;
    edi = eax;
    esp = esp + 8;
    if (CMP_EQ(edi, ebx)) { sub_0001F39F(); return; } /* je: equal / zero */

loc_0001F312: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x20);
    ecx = ecx | 0xFFFFFFFFu;
    SET_LO8(eax, 1);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x18) = ebx;
    MEM8(edi + 0x1C) = LO8(ebx);
    MEM8(edi + 0x1D) = LO8(ebx);
    MEM8(edi + 0x1E) = LO8(eax);
    MEM8(edi + 0x1F) = LO8(ebx);
    MEM8(edi + 0x20) = LO8(ebx);
    MEM8(edi + 0x21) = LO8(ebx);
    MEM8(edi + 0x34) = LO8(eax);
    eax = MEM32(esp + 0x10);
    MEM8(edi + 0x35) = LO8(ebx);
    MEM8(edi + 0x36) = LO8(ebx);
    MEM8(edi + 0x37) = LO8(ebx);
    MEM8(edi + 0x3C) = LO8(ebx);
    MEM8(edi + 0x24) = LO8(ebx);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 0xC) = ecx;
    MEMF(edi + 0x38) = xmm0; /* movss */
    MEMF(edi + 0x40) = xmm0; /* movss */
    edx = MEM32(edx);
    ebx = ecx;
    ecx = MEM32(edx + ebp);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_0001F372: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001F381: ;
    ebx = 0; /* xor self */

loc_0001F383: ;
    eax = MEM32(esp + 0x14);
    ebp = ebp + 0x14;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0001F262; /* jne: not equal / not zero */

loc_0001F395: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0001F398: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001F3B0
 * Original: 0x0001F3B0 - 0x0001F459 (169 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F3B0: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_A(ecx, 6)) goto loc_0001F456; /* ja: above (unsigned >) */

loc_0001F3BC: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1F4A0)); return; /* indirect tail jmp */

    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    if (TEST_Z(eax, eax)) goto loc_0001F456; /* je: equal / zero */

loc_0001F449: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001F455: ;
    POP32(esp, edi);

loc_0001F456: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0001F4C0
 * Original: 0x0001F4C0 - 0x0001F4F9 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F4C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_0001F4F5; /* je: equal / zero */

loc_0001F4CC: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001F4F4; /* je: equal / zero */

loc_0001F4D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0001F4D6: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0001F4EA; /* je: equal / zero */

loc_0001F4DC: ;
    SET_LO8(eax, MEM8(edi + 0x35));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F4EA; /* je: equal / zero */

loc_0001F4E3: ;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001F4EA: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 4))) goto loc_0001F4D6; /* jne: not equal / not zero */

loc_0001F4F2: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0001F4F4: ;
    POP32(esp, esi);

loc_0001F4F5: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001F500
 * Original: 0x0001F500 - 0x0001F5B4 (180 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F500: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F5B0; /* je: equal / zero */

loc_0001F512: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1848);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F524: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1834);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F53B: ;
    edx = MEM32(ebp + 4);
    esi = MEM32(0x847024);
    ebx = MEM32(edx + 0xC);
    PUSH32(esp, 0x5B1AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F551: ;
    eax = MEM32(ebp + 4);
    esp = esp + 0x10;
    if (CMP_EQ(ebx, eax)) goto loc_0001F585; /* je: equal / zero */

loc_0001F55B: ;
    PUSH32(esp, edi);
    /* nop */

loc_0001F560: ;
    edi = MEM32(ebx);
    PUSH32(esp, 0); sub_00020F40(); /* call 0x00020F40 */

loc_0001F567: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F577: ;
    ebx = MEM32(ebx + 0xC);
    eax = MEM32(ebp + 4);
    esp = esp + 4;
    if (CMP_NE(ebx, eax)) goto loc_0001F560; /* jne: not equal / not zero */

loc_0001F584: ;
    POP32(esp, edi);

loc_0001F585: ;
    eax = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD53C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F59B: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B17D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F5AB: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001F5B0: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001F5C0
 * Original: 0x0001F5C0 - 0x0001F5EE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F5C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001F5C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001D660(); /* call 0x0001D660 */

loc_0001F5DA: ;
    if (TEST_Z(eax, eax)) goto loc_0001F5EB; /* je: equal / zero */

loc_0001F5DE: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001F5EA: ;
    POP32(esp, edi);

loc_0001F5EB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001F5F0
 * Original: 0x0001F5F0 - 0x0001F672 (130 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F5F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001F66D; /* je: equal / zero */

loc_0001F600: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);

loc_0001F606: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0001F622; /* je: equal / zero */

loc_0001F60C: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0001F61E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001F631; /* jne: not equal / not zero */

loc_0001F622: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebx + 0x14))) goto loc_0001F606; /* jne: not equal / not zero */

loc_0001F62A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0001F631: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0001F63A: ;
    edi = MEM32(ebx + 0x14);
    if (CMP_EQ(esi, edi)) goto loc_0001F66B; /* je: equal / zero */

loc_0001F641: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(eax + 0xC) = ecx;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001F661: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    eax--;
    MEM32(edi + 0x10) = eax;

loc_0001F66B: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001F66D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001F680
 * Original: 0x0001F680 - 0x0001F6C7 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, eax)) goto loc_0001F6BE; /* je: equal / zero */

loc_0001F692: ;
    edi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_0001F6A0: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0001F6B6; /* je: equal / zero */

loc_0001F6A6: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0001F6B2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0001F6C7(); return; } /* jne: not equal / not zero */

loc_0001F6B6: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 0x14))) goto loc_0001F6A0; /* jne: not equal / not zero */

loc_0001F6BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001F6D0
 * Original: 0x0001F6D0 - 0x0001F742 (114 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F6D0: ;
    SET_LO8(eax, MEM8(0x846FFD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F712; /* je: equal / zero */

loc_0001F6DF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F6EF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B17B4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F6FF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001F70F: ;
    esp = esp + 0xC;

loc_0001F712: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0001F73D; /* je: equal / zero */

loc_0001F71C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 1;

loc_0001F723: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0001F733; /* je: equal / zero */

loc_0001F729: ;
    if (CMP_NE(MEM32(edi + 0x18), ebx)) goto loc_0001F733; /* jne: not equal / not zero */

loc_0001F72E: ;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0001F733: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebp + 4))) goto loc_0001F723; /* jne: not equal / not zero */

loc_0001F73B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0001F73D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001F750
 * Original: 0x0001F750 - 0x0001F846 (246 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F750: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(LO8(eax), 1)) goto loc_0001F76F; /* je: equal / zero */

loc_0001F75E: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_0001F76F; /* je: equal / zero */

loc_0001F762: ;
    SET_LO8(eax, MEM8(0x847045));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F842; /* je: equal / zero */

loc_0001F76F: ;
    eax = MEM32(esp + 0xC);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    MEM8(ebp + 0x1C) = 1;
    edi = MEM32(eax + 0xC);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM8(0x847045) = 0;
    if (CMP_EQ(edi, eax)) goto loc_0001F841; /* je: equal / zero */

loc_0001F790: ;
    PUSH32(esp, esi);

loc_0001F791: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0001F834; /* je: equal / zero */

loc_0001F79B: ;
    eax = MEM32(esi + 0x18);
    if (CMP_EQ(eax, 1)) goto loc_0001F834; /* je: equal / zero */

loc_0001F7A7: ;
    if (CMP_EQ(eax, 2)) goto loc_0001F834; /* je: equal / zero */

loc_0001F7B0: ;
    SET_LO8(eax, MEM8(esi + 0x37));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001F834; /* jne: not equal / not zero */

loc_0001F7BB: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0001F834; /* je: equal / zero */

loc_0001F7C2: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F7EA; /* je: equal / zero */

loc_0001F7C9: ;
    xmm1 = MEMF(esi + 0x28); /* movss */
    MEM8(esi + 0x24) = 0;
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_0001F7D7: ;
    SET_LO8(eax, MEM8(esi + 0x21));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001F7EA; /* je: equal / zero */

loc_0001F7DE: ;
    SET_LO8(ecx, MEM8(esi + 0x1F));
    SET_LO8(edx, MEM8(esi + 0x20));
    MEM8(esi + 0x1D) = LO8(ecx);
    MEM8(esi + 0x1E) = LO8(edx);

loc_0001F7EA: ;
    ecx = MEM32(esi + 0x10);
    xmm0 = MEMF(ecx + 0x30); /* movss */
    xmm1 = MEMF(0x759EF8); /* movss */
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(eax, 0x1E)) goto loc_0001F834; /* jle: less or equal (signed <=) */

loc_0001F81C: ;
    SET_LO8(eax, MEM8(esi + 0x37));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001F830; /* jne: not equal / not zero */

loc_0001F823: ;
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_0001F830: ;
    MEM8(esi + 0x37) = 1;

loc_0001F834: ;
    edi = MEM32(edi + 0xC);
    if (CMP_NE(edi, MEM32(ebp + 4))) goto loc_0001F791; /* jne: not equal / not zero */

loc_0001F840: ;
    POP32(esp, esi);

loc_0001F841: ;
    POP32(esp, edi);

loc_0001F842: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001F850
 * Original: 0x0001F850 - 0x0001F88C (60 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F850(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001F850: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0001F888; /* jle: less or equal (signed <=) */

loc_0001F85D: ;
    /* nop */

loc_0001F860: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    ecx = ecx + esi;
    if (CMP_L(ecx, edx)) goto loc_0001F86E; /* jl: less (signed <) */

loc_0001F86C: ;
    ecx = ecx - edx;

loc_0001F86E: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0001F879: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0001F88C(); return; } /* jne: not equal / not zero */

loc_0001F87D: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 4);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_0001F860; /* jl: less (signed <) */

loc_0001F888: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001F890
 * Original: 0x0001F890 - 0x0001F8AC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F890(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001F890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001F89F: ;
    if (TEST_Z(eax, eax)) { sub_0001F8AC(); return; } /* je: equal / zero */

loc_0001F8A3: ;
    PUSH32(esp, 0); sub_0001D9D0(); /* call 0x0001D9D0 */

loc_0001F8A8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001F8C0
 * Original: 0x0001F8C0 - 0x0001F8DA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F8C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001F8C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001F8CC: ;
    if (TEST_Z(eax, eax)) { sub_0001F8DA(); return; } /* je: equal / zero */

loc_0001F8D0: ;
    edx = esi;
    PUSH32(esp, 0); sub_0001DA10(); /* call 0x0001DA10 */

loc_0001F8D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001F8F0
 * Original: 0x0001F8F0 - 0x0001F90C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F8F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_0001F8FC: ;
    if (TEST_Z(eax, eax)) { sub_0001F90C(); return; } /* je: equal / zero */

loc_0001F900: ;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0001AA50(); return; /* tail jmp 0x0001AA50 */

}

/**
 * sub_0001F910
 * Original: 0x0001F910 - 0x0001F91E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F910(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001F910: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) { sub_0001F91E(); return; } /* jne: not equal / not zero */

loc_0001F918: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001F9F0
 * Original: 0x0001F9F0 - 0x0001F9FE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001F9F0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) { sub_0001F9FE(); return; } /* jne: not equal / not zero */

loc_0001F9F8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001FAC0
 * Original: 0x0001FAC0 - 0x0001FC4C (396 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FAC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x846FFD));
    ebx = 0; /* xor self */
    edi = edi & 0xFFF;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0001FB76; /* je: equal / zero */

loc_0001FADB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FAEB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1744);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FAFB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B1730);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FB0C: ;
    esp = esp + 0x10;
    if (CMP_L(edi, ebx)) goto loc_0001FB20; /* jl: less (signed <) */

loc_0001FB13: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001FB25;

loc_0001FB20: ;
    eax = 0x587BE4;

loc_0001FB25: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B171C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FB36: ;
    ecx = ZX8(MEM8(esp + 0x20));
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1708);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FB4C: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B16F4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FB63: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FB73: ;
    esp = esp + 0x1C;

loc_0001FB76: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0001FB83; /* jne: not equal / not zero */

loc_0001FB7E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001FB83: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0001FBCD; /* je: equal / zero */

loc_0001FBA9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001FBCD; /* jb: below (unsigned <) */

loc_0001FBB2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001FBBC: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001FBC4: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_0001FBF0; /* jne: not equal / not zero */

loc_0001FBCD: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001FBDF: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001FBE7: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) { sub_0001FC4C(); return; } /* je: equal / zero */

loc_0001FBF0: ;
    eax = MEM32(0x7F9F60);
    ecx = ZX8(MEM8(esp + 0x18));
    MEM32(esi + 0x24) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 4) = ebx;
    MEM8(esi + 0x29) = LO8(ebx);
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edi;
    edi = MEM32(esp + 0x14);
    ebx = esi;
    MEM8(esi + 0x28) = 1;
    MEM32(esi) = 0x5B12D0;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = 2;
    PUSH32(esp, 0); sub_0001F850(); /* call 0x0001F850 */

loc_0001FC37: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001FC45; /* jne: not equal / not zero */

loc_0001FC3B: ;
    eax = MEM32(edi + 8);
    edx = esi;
    PUSH32(esp, 0); sub_0029EA40(); /* call 0x0029EA40 */

loc_0001FC45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001FC70
 * Original: 0x0001FC70 - 0x0001FE86 (534 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FC70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = ebx & 0xFFF;
    edi = edi & 0xFFF;
    (void)0; /* cmp ebp, 8 - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(ebp, 8)) goto loc_0001FCF6; /* jl: less (signed <) */

loc_0001FC93: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001FCF1; /* je: equal / zero */

loc_0001FC9C: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FCAC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B16CC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FCBC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B169C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FCCE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1678);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FCDE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FCEE: ;
    esp = esp + 0x1C;

loc_0001FCF1: ;
    ebp = 4;

loc_0001FCF6: ;
    SET_LO8(eax, MEM8(0x846FFD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001FDE2; /* je: equal / zero */

loc_0001FD03: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FD13: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B16CC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FD23: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B1660);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FD34: ;
    esp = esp + 0x10;
    if (TEST_S(edi, edi)) goto loc_0001FD50; /* jl: less (signed <) */

loc_0001FD3B: ;
    if (CMP_GE(edi, 0x119)) goto loc_0001FD50; /* jge: greater or equal (signed >=) */

loc_0001FD43: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001FD55;

loc_0001FD50: ;
    eax = 0x587BE4;

loc_0001FD55: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1648);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FD66: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5B1630);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FD77: ;
    esp = esp + 0x10;
    if (TEST_S(ebx, ebx)) goto loc_0001FD89; /* jl: less (signed <) */

loc_0001FD7E: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    eax = MEM32(ebx + 0x658FD8);
    goto loc_0001FD8E;

loc_0001FD89: ;
    eax = 0x587BE4;

loc_0001FD8E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1618);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FD9F: ;
    ecx = MEM32(ebp * 4 + 0x65C7B4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B15FC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FDB8: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B15E4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FDCF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FDDF: ;
    esp = esp + 0x20;

loc_0001FDE2: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001FDF0; /* jne: not equal / not zero */

loc_0001FDEB: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001FDF0: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0001FE38; /* je: equal / zero */

loc_0001FE16: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001FE38; /* jb: below (unsigned <) */

loc_0001FE1F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001FE29: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001FE31: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001FE59; /* jne: not equal / not zero */

loc_0001FE38: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001FE4A: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001FE52: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001FE6B; /* je: equal / zero */

loc_0001FE59: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001D790(); /* call 0x0001D790 */

loc_0001FE65: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_0001FE86(); return; } /* jne: not equal / not zero */

loc_0001FE6B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001FE7C: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0001FEB0
 * Original: 0x0001FEB0 - 0x00020030 (384 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FEB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x846FFD));
    ebp = ebp & 0xFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001FF6A; /* je: equal / zero */

loc_0001FECC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FEDC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B15BC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FEEC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FEFD: ;
    esp = esp + 0x10;
    if (TEST_S(ebp, ebp)) goto loc_0001FF11; /* jl: less (signed <) */

loc_0001FF04: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_0001FF16;

loc_0001FF11: ;
    eax = 0x587BE4;

loc_0001FF16: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FF27: ;
    ecx = MEM32(edi * 4 + 0x65C7B4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B157C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FF40: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FF57: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001FF67: ;
    esp = esp + 0x20;

loc_0001FF6A: ;
    if (TEST_S(ebp, ebp)) goto loc_0002002A; /* jl: less (signed <) */

loc_0001FF72: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001FF80; /* jne: not equal / not zero */

loc_0001FF7B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001FF80: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0001FFC9; /* je: equal / zero */

loc_0001FFA7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0001FFC9; /* jb: below (unsigned <) */

loc_0001FFB0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001FFBA: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001FFC2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001FFEA; /* jne: not equal / not zero */

loc_0001FFC9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001FFDB: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001FFE3: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001FFF7; /* je: equal / zero */

loc_0001FFEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0001D820(); /* call 0x0001D820 */

loc_0001FFF1: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_00020012; /* jne: not equal / not zero */

loc_0001FFF7: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00020008: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00020012: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0001F850(); /* call 0x0001F850 */

loc_0002001B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00020029; /* jne: not equal / not zero */

loc_0002001F: ;
    eax = MEM32(edi + 8);
    edx = ebx;
    PUSH32(esp, 0); sub_0029EA40(); /* call 0x0029EA40 */

loc_00020029: ;
    POP32(esp, ebx);

loc_0002002A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00020030
 * Original: 0x00020030 - 0x000201B8 (392 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x846FFD));
    ebp = ebp & 0xFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002010D; /* je: equal / zero */

loc_0002004D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002005D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1550);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002006D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002007E: ;
    esp = esp + 0x10;
    if (TEST_S(ebp, ebp)) goto loc_00020092; /* jl: less (signed <) */

loc_00020085: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00020097;

loc_00020092: ;
    eax = 0x587BE4;

loc_00020097: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000200A8: ;
    ecx = MEM32(esp + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B153C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000200BD: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B1520);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000200CF: ;
    edx = MEM32(esp + 0x3C);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B150C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000200E4: ;
    eax = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000200FA: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002010A: ;
    esp = esp + 0x30;

loc_0002010D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0002011B; /* jne: not equal / not zero */

loc_00020116: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0002011B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_00020163; /* je: equal / zero */

loc_00020141: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_00020163; /* jb: below (unsigned <) */

loc_0002014A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020154: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002015C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00020184; /* jne: not equal / not zero */

loc_00020163: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020175: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002017D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0002019B; /* je: equal / zero */

loc_00020184: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0001D8C0(); /* call 0x0001D8C0 */

loc_00020195: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_000201B8(); return; } /* jne: not equal / not zero */

loc_0002019B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000201AC: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000201E0
 * Original: 0x000201E0 - 0x0002034F (367 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000201E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000201E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x846FFD));
    ebp = ebp & 0xFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000202A9; /* je: equal / zero */

loc_000201FD: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002020D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B14DC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002021D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002022E: ;
    esp = esp + 0x10;
    if (TEST_S(ebp, ebp)) goto loc_00020242; /* jl: less (signed <) */

loc_00020235: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00020247;

loc_00020242: ;
    eax = 0x587BE4;

loc_00020247: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020258: ;
    ecx = MEM32(esp + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B153C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002026D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B1520);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002027F: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020296: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000202A6: ;
    esp = esp + 0x28;

loc_000202A9: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000202B7; /* jne: not equal / not zero */

loc_000202B2: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000202B7: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_000202FF; /* je: equal / zero */

loc_000202DD: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_000202FF; /* jb: below (unsigned <) */

loc_000202E6: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000202F0: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000202F8: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00020320; /* jne: not equal / not zero */

loc_000202FF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020311: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020319: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00020332; /* je: equal / zero */

loc_00020320: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0001D870(); /* call 0x0001D870 */

loc_0002032C: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_0002034F(); return; } /* jne: not equal / not zero */

loc_00020332: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00020343: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00020370
 * Original: 0x00020370 - 0x0002043D (205 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = eax;
    SET_LO8(eax, MEM8(0x846FFD));
    PUSH32(esp, esi);
    ebp = ebp & 0xFFF;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020435; /* je: equal / zero */

loc_0002038D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002039D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B14B8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000203AD: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000203BE: ;
    esp = esp + 0x10;
    if (TEST_S(ebp, ebp)) goto loc_000203D2; /* jl: less (signed <) */

loc_000203C5: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_000203D4;

loc_000203D2: ;
    eax = 0; /* xor self */

loc_000203D4: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000203E5: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5B14A4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000203F6: ;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1490);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002040B: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020422: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020432: ;
    esp = esp + 0x24;

loc_00020435: ;
    if (CMP_GE(ebx & ebx, 0)) { sub_0002043D(); return; } /* jge: greater or equal (signed >=) */

loc_00020439: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00020464(); return; /* tail jmp 0x00020464 */

}

/**
 * sub_00020530
 * Original: 0x00020530 - 0x000206C0 (400 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x846FFD));
    ebp = ebp & 0xFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020615; /* je: equal / zero */

loc_0002054D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002055D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1468);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002056D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002057E: ;
    esp = esp + 0x10;
    if (TEST_S(ebp, ebp)) goto loc_00020592; /* jl: less (signed <) */

loc_00020585: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00020597;

loc_00020592: ;
    eax = 0x587BE4;

loc_00020597: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000205A8: ;
    ecx = MEM32(esp + 0x24);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1454);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000205BD: ;
    edx = MEM32(edi * 4 + 0x65C7B4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B157C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000205D6: ;
    eax = MEM32(esp + 0x3C);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1440);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000205EB: ;
    ecx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020602: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020612: ;
    esp = esp + 0x30;

loc_00020615: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00020623; /* jne: not equal / not zero */

loc_0002061E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00020623: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0002066B; /* je: equal / zero */

loc_00020649: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_0002066B; /* jb: below (unsigned <) */

loc_00020652: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002065C: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020664: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0002068C; /* jne: not equal / not zero */

loc_0002066B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002067D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020685: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000206A3; /* je: equal / zero */

loc_0002068C: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0001D970(); /* call 0x0001D970 */

loc_0002069D: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_000206C0(); return; } /* jne: not equal / not zero */

loc_000206A3: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000206B4: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000206E0
 * Original: 0x000206E0 - 0x00020791 (177 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000206E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000206E0: ;
    SET_LO8(eax, MEM8(0x846FFF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020762; /* je: equal / zero */

loc_000206E9: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000206FA: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1418);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002070A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002071B: ;
    esi = MEM32(0x847024);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x658FD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020737: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002074E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002075E: ;
    esp = esp + 0x24;
    POP32(esp, esi);

loc_00020762: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_00020770: ;
    if (TEST_Z(eax, eax)) { sub_00020791(); return; } /* je: equal / zero */

loc_00020774: ;
    ecx = MEM32(eax + 0x10);
    xmm0 = MEMF(ecx + 0x30); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00020791(); return; } /* jp: parity */

loc_00020789: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000207A0
 * Original: 0x000207A0 - 0x00020850 (176 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000207A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000207A0: ;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 0xFFF;
    if (((int32_t)edi < 0)) { sub_00020850(); return; } /* jl: less (signed <) */

loc_000207AF: ;
    if (CMP_GE(edi, 0x119)) { sub_00020850(); return; } /* jge: greater or equal (signed >=) */

loc_000207BB: ;
    SET_LO8(eax, MEM8(0x846FFF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002083D; /* je: equal / zero */

loc_000207C4: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000207D5: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B13EC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000207E5: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000207F6: ;
    esi = MEM32(0x847024);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + 0x658FD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020812: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020829: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020839: ;
    esp = esp + 0x24;
    POP32(esp, esi);

loc_0002083D: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    ecx = MEM32(edi + 0x658FDC);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, 1)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00020860
 * Original: 0x00020860 - 0x000208D7 (119 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020860: ;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x846FFF));
    edi = edi & 0xFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000208D2; /* je: equal / zero */

loc_00020872: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020883: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B13A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020893: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B15A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000208A4: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = MEM32(edi + 0x658FD8);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1594);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000208BE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000208CE: ;
    esp = esp + 0x1C;
    POP32(esp, esi);

loc_000208D2: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000208E0
 * Original: 0x000208E0 - 0x00020942 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000208E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000208E0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xC);
    if (CMP_EQ(esi, edi)) goto loc_00020939; /* je: equal / zero */

loc_000208E8: ;
    PUSH32(esp, ebx);

loc_000208E9: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = ebx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00020903: ;
    if (TEST_NZ(eax, eax)) goto loc_00020928; /* jne: not equal / not zero */

loc_00020907: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00020925: ;
    esp = esp + 4;

loc_00020928: ;
    eax = MEM32(edi + 0x10);
    eax--;
    esi = ebx;
    MEM32(edi + 0x10) = eax;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, edi)) goto loc_000208E9; /* jne: not equal / not zero */

loc_00020938: ;
    POP32(esp, ebx);

loc_00020939: ;
    MEM32(edi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00020950
 * Original: 0x00020950 - 0x000209A2 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020950: ;
    PUSH32(esp, 0x100);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0x40;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00020983: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0002099F; /* jne: not equal / not zero */

loc_0002098C: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0002099C: ;
    esp = esp + 0xC;

loc_0002099F: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000209B0
 * Original: 0x000209B0 - 0x000209FD (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000209B0(void)
{
    float xmm0;

loc_000209B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = edx;
    SET_LO8(edx, 1);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(ecx);
    MEM8(eax + 0x1E) = LO8(edx);
    MEM8(eax + 0x1F) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x34) = LO8(edx);
    MEM8(eax + 0x35) = LO8(ecx);
    MEM8(eax + 0x36) = LO8(ecx);
    MEM8(eax + 0x37) = LO8(ecx);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM8(eax + 0x3C) = LO8(ecx);
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEM8(eax + 0x24) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00020A00
 * Original: 0x00020A00 - 0x00020CD4 (724 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020A00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_00020A12: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_00020CCF; /* je: equal / zero */

loc_00020A1F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(ebx + 8) - sets EFLAGS */
    PUSH32(esp, esi);
    if ((xmm0 <= MEMF(ebx + 8))) goto loc_00020ADD; /* jbe: below or equal (unsigned <=) */

loc_00020A2D: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020CCE; /* je: equal / zero */

loc_00020A3A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020A4A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5B1FDC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020A5A: ;
    eax = MEM32(ebp);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD588);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020A6E: ;
    eax = MEM32(ebp);
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_00020A83; /* jl: less (signed <) */

loc_00020A78: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00020A88;

loc_00020A83: ;
    eax = 0x587BE4;

loc_00020A88: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AD56C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020A99: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1FC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020AAD: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AD53C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020AC4: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD7D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020AD4: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00020ADD: ;
    eax = MEM32(ebx + 4);
    MEM32(ebp + 0xC) = eax;
    SET_LO8(eax, MEM8(ebx + 0x18));
    MEM8(ebp + 0x36) = LO8(eax);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x84A19C);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00020B97; /* jne: not equal / not zero */

loc_00020AF7: ;
    if (TEST_NZ(eax, eax)) goto loc_00020B00; /* jne: not equal / not zero */

loc_00020AFB: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00020B00: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00020B50; /* je: equal / zero */

loc_00020B26: ;
    if (CMP_B(MEM32(esi + 0x80), 0x170)) goto loc_00020B50; /* jb: below (unsigned <) */

loc_00020B32: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020B3C: ;
    PUSH32(esp, 0x170);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020B47: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_00020B76; /* jne: not equal / not zero */

loc_00020B50: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020B62: ;
    PUSH32(esp, 0x170);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020B6D: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_00020B8B; /* je: equal / zero */

loc_00020B76: ;
    PUSH32(esp, 0); sub_00019BF0(); /* call 0x00019BF0 */

loc_00020B7B: ;
    MEM32(edi) = 0x5ACAC0;
    MEM32(ebp + 0x10) = edi;
    (void)0; /* test edi, edi - flags set for next jcc */
    goto loc_00020C20;

loc_00020B8B: ;
    edi = 0; /* xor self */
    MEM32(ebp + 0x10) = edi;
    (void)0; /* test edi, edi - flags set for next jcc */
    goto loc_00020C20;

loc_00020B97: ;
    if (TEST_NZ(eax, eax)) goto loc_00020BA0; /* jne: not equal / not zero */

loc_00020B9B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00020BA0: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00020BEE; /* je: equal / zero */

loc_00020BC6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x178)) goto loc_00020BEE; /* jb: below (unsigned <) */

loc_00020BD2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020BDC: ;
    PUSH32(esp, 0x178);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020BE7: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00020C12; /* jne: not equal / not zero */

loc_00020BEE: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00020C00: ;
    PUSH32(esp, 0x178);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00020C0B: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00020C19; /* je: equal / zero */

loc_00020C12: ;
    PUSH32(esp, 0); sub_0001ABE0(); /* call 0x0001ABE0 */

loc_00020C17: ;
    goto loc_00020C1B;

loc_00020C19: ;
    eax = 0; /* xor self */

loc_00020C1B: ;
    MEM32(ebp + 0x10) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_00020C20: ;
    if (TEST_NZ(eax, eax)) goto loc_00020C31; /* jne: not equal / not zero */

loc_00020C22: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_00020C2E: ;
    esp = esp + 8;

loc_00020C31: ;
    ecx = MEM32(ebp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00020CCE; /* je: equal / zero */

loc_00020C3D: ;
    esi = MEM32(0x847024);
    esi = MEM32(esi + 0x20);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1C);
    eax = eax << 2;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x65C3C8);
    eax = MEM32(eax + 0x65C018);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00020C77: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(ebp + 0x18) = ecx;
    SET_LO8(eax, MEM8(ebx + 0x20));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ebp + 0x10);
    MEM8(ebp + 0x1D) = LO8(eax);
    MEM8(ebp + 0x1F) = LO8(eax);
    SET_LO8(ebx, MEM8(ebx + 0x21));
    MEM8(ebp + 0x1E) = LO8(ebx);
    MEM8(ebp + 0x20) = LO8(ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00020CC6; /* jne: not equal / not zero */

loc_00020C96: ;
    edx = MEM32(0x847024);
    xmm1 = MEMF(edx + 0x20); /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x759EF0); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_00020CC0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00020CC6: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_00020CCE: ;
    POP32(esp, esi);

loc_00020CCF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00020CE0
 * Original: 0x00020CE0 - 0x00020D0A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020CE0: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00020CE7: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00020D02; /* je: equal / zero */

loc_00020CEC: ;
    eax--;
    if ((eax == 0)) goto loc_00020CFA; /* je: equal / zero */

loc_00020CEF: ;
    eax--;
    if ((eax != 0)) goto loc_00020D09; /* jne: not equal / not zero */

loc_00020CF2: ;
    MEM32(esi + 0x14) = 5;
    esp += 4; return; /* ret */

loc_00020CFA: ;
    MEM32(esi + 0x14) = 0;
    esp += 4; return; /* ret */

loc_00020D02: ;
    MEM32(esi + 0x14) = 2;

loc_00020D09: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00020D10
 * Original: 0x00020D10 - 0x00020DE7 (215 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020D10: ;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = eax;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00020D23; /* je: equal / zero */

loc_00020D1F: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00020D2A; /* jge: greater or equal (signed >=) */

loc_00020D23: ;
    MEM32(edi + 8) = 0;

loc_00020D2A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00020A00(); /* call 0x00020A00 */

loc_00020D36: ;
    ebp = MEM32(edi + 0x10);
    if (TEST_Z(ebp, ebp)) goto loc_00020DE3; /* je: equal / zero */

loc_00020D41: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, MEM8(0x846FF1));
    PUSH32(esp, esi);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_00020D7E; /* jne: not equal / not zero */

loc_00020D4C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020D6C; /* je: equal / zero */

loc_00020D50: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5AD100);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020D69: ;
    esp = esp + 0x10;

loc_00020D6C: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + 0x1C) = eax;
    goto loc_00020DB3;

loc_00020D7E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00020D9F; /* je: equal / zero */

loc_00020D82: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5AD0A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020D9C: ;
    esp = esp + 0x14;

loc_00020D9F: ;
    ecx = MEM32(0x847024);
    MEM32(ebp + 0x1C) = ebx;
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_00034FA0(); /* call 0x00034FA0 */

loc_00020DB3: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00020DBA: ;
    eax = eax - 0;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_00020DDC; /* je: equal / zero */

loc_00020DC0: ;
    eax--;
    if ((eax == 0)) goto loc_00020DD1; /* je: equal / zero */

loc_00020DC3: ;
    eax--;
    if ((eax != 0)) goto loc_00020DE3; /* jne: not equal / not zero */

loc_00020DC6: ;
    MEM32(edi + 0x14) = 5;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00020DD1: ;
    MEM32(edi + 0x14) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00020DDC: ;
    MEM32(edi + 0x14) = 2;

loc_00020DE3: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020DF0
 * Original: 0x00020DF0 - 0x00020E03 (19 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    if (CMP_NE(ecx, ebx)) { sub_00020E03(); return; } /* jne: not equal / not zero */

loc_00020DFD: ;
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00020EF0
 * Original: 0x00020EF0 - 0x00020F06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020EF0(void)
{
    int _cf = 0; /* carry flag */

loc_00020EF0: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00020EF8: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFCu;
    eax = eax + 4;
    MEM32(esi + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00020F10
 * Original: 0x00020F10 - 0x00020F39 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020F10(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00020F10: ;
    eax = MEM32(esi + 0x14);
    eax--;
    if ((eax == 0)) goto loc_00020F23; /* je: equal / zero */

loc_00020F16: ;
    eax--;
    if ((eax == 0)) goto loc_00020F1E; /* je: equal / zero */

loc_00020F19: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_00020F38; /* jne: not equal / not zero */

loc_00020F1E: ;
    MEM8(esi + 0x1C) = 1;
    esp += 4; return; /* ret */

loc_00020F23: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00020F2B: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFCu;
    eax = eax + 4;
    MEM32(esi + 0x14) = eax;

loc_00020F38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00020F40
 * Original: 0x00020F40 - 0x00021064 (292 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00020F40: ;
    SET_LO8(eax, MEM8(0x846FF7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00021063; /* je: equal / zero */

loc_00020F4D: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1FAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020F61: ;
    eax = MEM32(edi);
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_00020F75; /* jl: less (signed <) */

loc_00020F6A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00020F7A;

loc_00020F75: ;
    eax = 0x587BE4;

loc_00020F7A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1F90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020F8B: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1F74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020F9F: ;
    eax = MEM32(edi + 4);
    esp = esp + 0x10;
    if (TEST_S(eax, eax)) goto loc_00020FB4; /* jl: less (signed <) */

loc_00020FA9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00020FB9;

loc_00020FB4: ;
    eax = 0x587BE4;

loc_00020FB9: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1F90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020FCA: ;
    edx = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B1F58);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020FDE: ;
    eax = MEM32(edi + 8);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1F38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00020FF2: ;
    ecx = MEM32(edi + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1F1C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00021006: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx * 4 + 0x65C7EC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1F00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00021021: ;
    ecx = ZX8(MEM8(edi + 0x36));
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B1EE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00021036: ;
    edx = ZX8(MEM8(edi + 0x1C));
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B1EC8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002104B: ;
    eax = MEM32(edi + 0x18);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1EAC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002105F: ;
    esp = esp + 0x40;
    POP32(esp, esi);

loc_00021063: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00021070
 * Original: 0x00021070 - 0x0002114A (218 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021070: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    ebx = eax;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, 3)) { sub_0002114A(); return; } /* je: equal / zero */

loc_00021086: ;
    if (CMP_EQ(eax, 6)) { sub_0002114A(); return; } /* je: equal / zero */

loc_0002108F: ;
    if (TEST_Z(eax, eax)) { sub_0002114A(); return; } /* je: equal / zero */

loc_00021097: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00021130; /* je: equal / zero */

loc_000210A0: ;
    if (TEST_Z(ebx, ebx)) goto loc_00021130; /* je: equal / zero */

loc_000210A8: ;
    eax = MEM32(esi + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0002110C; /* je: equal / zero */

loc_000210B0: ;
    if (TEST_Z(eax, eax)) goto loc_0002110C; /* je: equal / zero */

loc_000210B4: ;
    if (CMP_EQ(ecx, MEM32(esi))) goto loc_000210E4; /* je: equal / zero */

loc_000210B8: ;
    if (CMP_EQ(ecx, MEM32(esi + 4))) goto loc_000210E4; /* je: equal / zero */

loc_000210BD: ;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_000210C8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0002114A(); return; } /* je: equal / zero */

loc_000210CF: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, esi)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000210E4: ;
    if (CMP_EQ(eax, ebx)) goto loc_00021105; /* je: equal / zero */

loc_000210E8: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_000210F7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0002114A(); return; } /* je: equal / zero */

loc_000210FE: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, MEM32(esi))) { sub_0002114A(); return; } /* jne: not equal / not zero */

loc_00021105: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002110C: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_0001D490(); /* call 0x0001D490 */

loc_0002111B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0002114A(); return; } /* je: equal / zero */

loc_00021122: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_NE(ecx, MEM32(esi))) { sub_0002114A(); return; } /* jne: not equal / not zero */

loc_00021129: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00021130: ;
    if (CMP_EQ(ecx, MEM32(esi))) goto loc_00021140; /* je: equal / zero */

loc_00021134: ;
    if (CMP_EQ(ecx, MEM32(esi + 4))) goto loc_00021140; /* je: equal / zero */

loc_00021139: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00021140: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00021160
 * Original: 0x00021160 - 0x000211E7 (135 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021160(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00021160: ;
    SET_LO8(edx, MEM8(eax + 0x37));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000211E4; /* jne: not equal / not zero */

loc_00021167: ;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    xmm3 = MEMF(0x759EF8); /* movss */
    xmm1 = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    if (CMP_NE(ecx, 1)) goto loc_000211A0; /* jne: not equal / not zero */

loc_00021195: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_0002119D: ;
    esp += 8; return; /* ret 4 */

loc_000211A0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(eax + 0x24) = 1;
    MEMF(eax + 0x28) = xmm1; /* movss */
    if (TEST_NZ(ecx, ecx)) goto loc_000211B2; /* jne: not equal / not zero */

loc_000211AD: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000211BE;

loc_000211B2: ;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x7F9F5C); /* divss */

loc_000211BE: ;
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0x2C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(ecx + 0x30) - sets EFLAGS */
    xmm1 = xmm2; /* movaps */
    if ((xmm1 > MEMF(ecx + 0x30))) goto loc_000211D7; /* ja: above (unsigned >) */

loc_000211CF: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_000211D7: ;
    xmm0 = xmm0 / xmm3; /* divss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x30) = xmm0; /* movss */

loc_000211E4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000211F0
 * Original: 0x000211F0 - 0x000212C0 (208 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000211F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000211F0: ;
    SET_LO8(eax, MEM8(edi + 0x24));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = 6;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00021212; /* jne: not equal / not zero */

loc_00021200: ;
    if (CMP_NE(MEM32(edi + 0x14), esi)) goto loc_000212BE; /* jne: not equal / not zero */

loc_00021209: ;
    MEM8(edi + 0x24) = 1;
    MEMF(edi + 0x2C) = xmm0; /* movss */

loc_00021212: ;
    /* comiss xmm0, MEMF(edi + 0x2C) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 0x2C))) goto loc_0002128D; /* jb: below (unsigned <) */

loc_00021218: ;
    ecx = MEM32(edi + 0x10);
    xmm1 = MEMF(edi + 0x28); /* movss */
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_00021225: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x24) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002123C; /* je: equal / zero */

loc_00021230: ;
    SET_LO8(eax, MEM8(edi + 0x1F));
    SET_LO8(ecx, MEM8(edi + 0x20));
    MEM8(edi + 0x1D) = LO8(eax);
    MEM8(edi + 0x1E) = LO8(ecx);

loc_0002123C: ;
    if (CMP_NE(MEM32(edi + 0x14), esi)) goto loc_000212BE; /* jne: not equal / not zero */

loc_00021241: ;
    esi = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    MEM32(edi + 0x14) = 3;
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00021253: ;
    SET_LO8(eax, MEM8(0x846FF7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000212BE; /* je: equal / zero */

loc_0002125D: ;
    eax = MEM32(edi);
    if (TEST_S(eax, eax)) goto loc_0002126E; /* jl: less (signed <) */

loc_00021263: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00021273;

loc_0002126E: ;
    eax = 0x587BE4;

loc_00021273: ;
    edx = MEM32(edi + 0xC);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5B1E74);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00021288: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002128D: ;
    xmm1 = MEMF(0x7FA218); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_000212BE; /* jbe: below or equal (unsigned <=) */

loc_0002129A: ;
    ecx = MEM32(edi + 0x10);
    xmm1 = xmm1 / MEMF(edi + 0x30); /* divss */
    xmm1 = xmm1 + MEMF(ecx + 0x30); /* addss */
    PUSH32(esp, 0); sub_0001A040(); /* call 0x0001A040 */

loc_000212AC: ;
    xmm0 = MEMF(edi + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    MEMF(edi + 0x2C) = xmm0; /* movss */

loc_000212BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000212C0
 * Original: 0x000212C0 - 0x000213B4 (244 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000212C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000212C0: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000213B3; /* je: equal / zero */

loc_000212CB: ;
    if (CMP_EQ(eax, 3)) goto loc_000213B3; /* je: equal / zero */

loc_000212D4: ;
    if (CMP_EQ(eax, 6)) goto loc_000213B3; /* je: equal / zero */

loc_000212DD: ;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, 5)) goto loc_000213AB; /* je: equal / zero */

loc_000212E7: ;
    esi = MEM32(edi + 0x10);
    if (TEST_Z(esi, esi)) goto loc_000213AB; /* je: equal / zero */

loc_000212F2: ;
    SET_LO8(eax, MEM8(edi + 0x1E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002135F; /* je: equal / zero */

loc_000212F9: ;
    SET_LO8(eax, MEM8(edi + 0x36));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002135F; /* jne: not equal / not zero */

loc_00021300: ;
    SET_LO8(eax, MEM8(edi + 0x37));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x14) = 6;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000213B2; /* jne: not equal / not zero */

loc_00021312: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x759EF8); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648CF8); /* mulss */
    MEMF(edi + 0x28) = xmm1; /* movss */
    MEM8(edi + 0x24) = 1;
    MEMF(edi + 0x2C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(esi + 0x30) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm1 > MEMF(esi + 0x30))) goto loc_00021350; /* ja: above (unsigned >) */

loc_00021348: ;
    xmm1 = MEMF(0x648D34); /* movss */

loc_00021350: ;
    xmm0 = xmm0 / xmm2; /* divss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002135F: ;
    MEM32(edi + 0x14) = 3;
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_0002136B: ;
    SET_LO8(eax, MEM8(0x846FF7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000213B2; /* je: equal / zero */

loc_00021374: ;
    eax = MEM32(edi);
    if (TEST_S(eax, eax)) goto loc_0002138C; /* jl: less (signed <) */

loc_0002137A: ;
    if (CMP_GE(eax, 0x119)) goto loc_0002138C; /* jge: greater or equal (signed >=) */

loc_00021381: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x658FD8);
    goto loc_00021391;

loc_0002138C: ;
    eax = 0x5AD580;

loc_00021391: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1E44);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000213A6: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000213AB: ;
    MEM32(edi + 0x14) = 0;

loc_000213B2: ;
    POP32(esp, esi);

loc_000213B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000213C0
 * Original: 0x000213C0 - 0x000213DB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000213C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000213C0: ;
    if (TEST_Z(eax, eax)) { sub_000213DB(); return; } /* je: equal / zero */

loc_000213C4: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) { sub_000213DB(); return; } /* je: equal / zero */

loc_000213D1: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, eax)) { sub_000213DB(); return; } /* je: equal / zero */

loc_000213D8: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000213E0
 * Original: 0x000213E0 - 0x000213EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000213E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000213E0: ;
    PUSH32(esp, ecx);
    if (CMP_G(edi, 1)) { sub_000213EC(); return; } /* jg: greater (signed >) */

loc_000213E6: ;
    eax = MEM32(esp + 8);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000214C0
 * Original: 0x000214C0 - 0x00021501 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000214C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000214C0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000214C8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021501(); return; } /* je: equal / zero */

loc_000214CC: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_00021501(); return; } /* je: equal / zero */

loc_000214D3: ;
    eax = MEM32(esi + 0x188);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_00021501(); return; } /* je: equal / zero */

loc_000214DE: ;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(esi + 0x190);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_000214ED; /* je: equal / zero */

loc_000214E9: ;
    if (CMP_NE(edx, edi)) { sub_00021501(); return; } /* jne: not equal / not zero */

loc_000214ED: ;
    ecx = MEM32(0x84706C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_000214F9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021501(); return; } /* je: equal / zero */

loc_000214FD: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021510
 * Original: 0x00021510 - 0x00021551 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021510(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021510: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021518: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021551(); return; } /* je: equal / zero */

loc_0002151C: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_00021551(); return; } /* je: equal / zero */

loc_00021523: ;
    eax = MEM32(esi + 0x184);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_00021551(); return; } /* je: equal / zero */

loc_0002152E: ;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(esi + 0x18C);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0002153D; /* je: equal / zero */

loc_00021539: ;
    if (CMP_NE(edx, edi)) { sub_00021551(); return; } /* jne: not equal / not zero */

loc_0002153D: ;
    ecx = MEM32(0x84706C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_00021549: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021551(); return; } /* je: equal / zero */

loc_0002154D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021560
 * Original: 0x00021560 - 0x000215C0 (96 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021560: ;
    PUSH32(esp, esi);
    esi = ebx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021568: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000215BE; /* je: equal / zero */

loc_0002156C: ;
    eax = MEM32(ebx + 0x188);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx + 0x188;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000215AD; /* je: equal / zero */

loc_0002157E: ;
    SET_LO8(ecx, MEM8(0x846FF8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002159C; /* je: equal / zero */

loc_00021588: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B2158);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00021599: ;
    esp = esp + 8;

loc_0002159C: ;
    eax = MEM32(0x84706C);
    ecx = MEM32(ebx + 0x190);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000215AD: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(ebx + 0x190) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_000215BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000215C0
 * Original: 0x000215C0 - 0x00021626 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000215C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000215C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ebx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000215CD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00021623; /* je: equal / zero */

loc_000215D1: ;
    eax = MEM32(ebx + 0x184);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx + 0x184;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00021612; /* je: equal / zero */

loc_000215E3: ;
    SET_LO8(ecx, MEM8(0x846FF8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00021601; /* je: equal / zero */

loc_000215ED: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B2110);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000215FE: ;
    esp = esp + 8;

loc_00021601: ;
    eax = MEM32(0x84706C);
    ecx = MEM32(ebx + 0x18C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00021612: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(ebx + 0x18C) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_00021623: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00021630
 * Original: 0x00021630 - 0x00021693 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021630(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021630: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0002163B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002168E; /* je: equal / zero */

loc_0002163F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    edi = edi & 0x1F;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021693(); return; } /* je: equal / zero */

loc_0002164B: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0002168E; /* je: equal / zero */

loc_00021655: ;
    eax = MEM32(eax + 0x3F4);
    if (TEST_Z(eax, eax)) goto loc_0002168E; /* je: equal / zero */

loc_0002165F: ;
    eax = MEM32(eax + 8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0002167C; /* je: equal / zero */

loc_00021667: ;
    eax--;
    if ((eax != 0)) goto loc_0002168E; /* jne: not equal / not zero */

loc_0002166A: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x25);
    edi = edi + ebx;
    eax = edi + edi * 2;
    eax = MEM32(eax * 4 + 0x588C98);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002167C: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x25);
    edi = edi + ebx;
    ecx = edi + edi * 2;
    eax = MEM32(ecx * 4 + 0x588C94);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002168E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000216B0
 * Original: 0x000216B0 - 0x000216D1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000216B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000216B0: ;
    if (TEST_S(eax, eax)) { sub_000216D1(); return; } /* jl: less (signed <) */

loc_000216B4: ;
    ecx = MEM32(0x84706C);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) { sub_000216D1(); return; } /* je: equal / zero */

loc_000216C6: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) { sub_000216D1(); return; } /* je: equal / zero */

loc_000216CD: ;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_000216E0
 * Original: 0x000216E0 - 0x0002172E (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000216E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000216E0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000216E8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002172C; /* je: equal / zero */

loc_000216EC: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x444);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    edi = esi;
    PUSH32(esp, 0); sub_000219E0(); /* call 0x000219E0 */

loc_0002170C: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0002172C; /* je: equal / zero */

loc_00021714: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x84706C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0002172C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021730
 * Original: 0x00021730 - 0x00021775 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021730(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021730: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021738: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00021773; /* je: equal / zero */

loc_0002173C: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00021C20(); /* call 0x00021C20 */

loc_00021755: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00021773; /* je: equal / zero */

loc_0002175C: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x84706C);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00021773: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021780
 * Original: 0x00021780 - 0x000217EA (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021780(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021789: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000217E7; /* je: equal / zero */

loc_0002178D: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 0xC);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00021A30(); /* call 0x00021A30 */

loc_000217AE: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000217E7; /* je: equal / zero */

loc_000217B5: ;
    edx = MEM32(0x84706C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_000217CE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x84706C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_000217E6: ;
    POP32(esp, edi);

loc_000217E7: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000217F0
 * Original: 0x000217F0 - 0x0002183B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000217F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000217F0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000217F8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0002183B(); return; } /* je: equal / zero */

loc_000217FC: ;
    if (TEST_Z(esi, esi)) { sub_0002183B(); return; } /* je: equal / zero */

loc_00021800: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) { sub_0002183B(); return; } /* je: equal / zero */

loc_0002180A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_0002183B(); return; } /* je: equal / zero */

loc_00021814: ;
    ecx = MEM32(esp + 8);
    esi = MEM32(0x84706C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    eax = esi;
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021829: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000213C0(); /* call 0x000213C0 */

loc_00021830: ;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021840
 * Original: 0x00021840 - 0x0002188D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021840: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021848: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002188B; /* je: equal / zero */

loc_0002184C: ;
    if (TEST_Z(esi, esi)) goto loc_0002188B; /* je: equal / zero */

loc_00021850: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0002188B; /* je: equal / zero */

loc_0002185A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0002188B; /* je: equal / zero */

loc_00021864: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x84706C);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_0002187F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0002188B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021890
 * Original: 0x00021890 - 0x000218F4 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021890: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021898: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000218F2; /* je: equal / zero */

loc_0002189C: ;
    if (TEST_Z(esi, esi)) goto loc_000218F2; /* je: equal / zero */

loc_000218A0: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000218F2; /* je: equal / zero */

loc_000218AA: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_000218F2; /* je: equal / zero */

loc_000218B4: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x84706C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    eax = edi;
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_000218CA: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_000218F1; /* je: equal / zero */

loc_000218D0: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000218F1: ;
    POP32(esp, edi);

loc_000218F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021900
 * Original: 0x00021900 - 0x00021954 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021900: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021908: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00021952; /* je: equal / zero */

loc_0002190C: ;
    if (CMP_LE(edi & edi, 0)) goto loc_00021952; /* jle: less or equal (signed <=) */

loc_00021910: ;
    if (CMP_GE(edi, 0xDDA)) goto loc_00021952; /* jge: greater or equal (signed >=) */

loc_00021918: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002192A; /* je: equal / zero */

loc_00021925: ;
    eax = 6;

loc_0002192A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x84706C);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00021952: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021960
 * Original: 0x00021960 - 0x000219DC (124 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021960: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00021968: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000219DA; /* je: equal / zero */

loc_0002196C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x84706C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_00021983: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000219A2; /* je: equal / zero */

loc_0002198E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B20C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002199F: ;
    esp = esp + 8;

loc_000219A2: ;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(0x84706C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000219C5; /* je: equal / zero */

loc_000219B1: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000219C2: ;
    esp = esp + 8;

loc_000219C5: ;
    if (TEST_S(edi, edi)) goto loc_000219D8; /* jl: less (signed <) */

loc_000219C9: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_000219D8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000219DA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000219E0
 * Original: 0x000219E0 - 0x00021A14 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000219E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000219E0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x568);
    esi = MEM32(esi + 0x3F4);
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_000219F6; /* je: equal / zero */

loc_000219F3: ;
    eax = MEM32(esi + 8);

loc_000219F6: ;
    (void)0; /* cmp edx, 0xC - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(edx, 0xC)) { sub_00021A14(); return; } /* jl: less (signed <) */

loc_000219FC: ;
    if (CMP_LE(edx, 0x10)) goto loc_00021A06; /* jle: less or equal (signed <=) */

loc_00021A01: ;
    if (CMP_NE(edx, 0x12)) { sub_00021A14(); return; } /* jne: not equal / not zero */

loc_00021A06: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00021C20(); /* call 0x00021C20 */

loc_00021A10: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00021A30
 * Original: 0x00021A30 - 0x00021A90 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021A30: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x3F4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00021A55; /* je: equal / zero */

loc_00021A52: ;
    esi = MEM32(eax + 8);

loc_00021A55: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021A90(); return; } /* je: equal / zero */

loc_00021A5F: ;
    eax = MEM32(0x847024);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, ebp);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00027E40(); /* call 0x00027E40 */

loc_00021A72: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebp);
    edx = ebx;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00027E90(); /* call 0x00027E90 */

loc_00021A82: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00021AB0
 * Original: 0x00021AB0 - 0x00021BBE (270 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax--;
    (void)0; /* cmp eax, 0x30 - flags set for next jcc */
    ebx = edx;
    if (CMP_A(eax, 0x30)) goto loc_00021BB9; /* ja: above (unsigned >) */

loc_00021AC0: ;
    eax = ZX8(MEM8(eax + 0x21BE8));
    { uint32_t _jt = MEM32(eax * 4 + 0x21BC0); /* switch: 10 entries, 9 targets */
    if (_jt == 0x00021ACEu) goto loc_00021ACE;
    if (_jt == 0x00021AD8u) goto loc_00021AD8;
    if (_jt == 0x00021AE2u) goto loc_00021AE2;
    if (_jt == 0x00021B52u) goto loc_00021B52;
    if (_jt == 0x00021B5Cu) goto loc_00021B5C;
    if (_jt == 0x00021B7Au) goto loc_00021B7A;
    if (_jt == 0x00021B84u) goto loc_00021B84;
    if (_jt == 0x00021BB4u) goto loc_00021BB4;
    if (_jt == 0x00021BB9u) goto loc_00021BB9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00021ACE: ;
    esi = 0xACC;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021AD8: ;
    esi = 0xACD;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021AE2: ;
    eax = MEM32(ebx + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0xAC9;
    if (TEST_Z(eax, eax)) goto loc_00021BB9; /* je: equal / zero */

loc_00021AF5: ;
    if (CMP_NE(ecx, 7)) goto loc_00021B1B; /* jne: not equal / not zero */

loc_00021AFA: ;
    ecx = MEM32(0x84706C);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC1A);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00021B16: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021B1B: ;
    edx = MEM32(0x84706C);
    PUSH32(esp, edx);
    eax = 0xC1A;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00021B2C: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, eax);
    eax = 0xC1B;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00021B3C: ;
    ecx = MEM32(0x84706C);
    PUSH32(esp, ecx);
    eax = 0xC1C;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00021B4D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021B52: ;
    esi = 0xACF;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021B5C: ;
    if (CMP_NE(ecx, 8)) goto loc_00021B6B; /* jne: not equal / not zero */

loc_00021B61: ;
    esi = 0xB28;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021B6B: ;
    if (CMP_NE(ecx, 9)) goto loc_00021BB9; /* jne: not equal / not zero */

loc_00021B70: ;
    esi = 0xB29;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021B7A: ;
    esi = 0xACB;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021B84: ;
    (void)0; /* cmp ecx, 0x13 - flags set for next jcc */
    esi = 0xACE;
    if (CMP_EQ(ecx, 0x13)) goto loc_00021BB9; /* je: equal / zero */

loc_00021B8E: ;
    edx = MEM32(0x84706C);
    PUSH32(esp, edx);
    eax = 0xC67;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00021B9F: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, eax);
    eax = 0xC65;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00021BAF: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00021BB4: ;
    esi = 0xACA;

loc_00021BB9: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00021C20
 * Original: 0x00021C20 - 0x00021C9D (125 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021C20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = MEM32(esi + 0x568);
    esi = MEM32(esi + 0x3F4);
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_00021C3A; /* je: equal / zero */

loc_00021C37: ;
    eax = MEM32(esi + 8);

loc_00021C3A: ;
    esi = edx + -23;
    if (CMP_A(esi, 5)) { sub_00021C9D(); return; } /* ja: above (unsigned >) */

loc_00021C42: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x21CB0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00021C49u) goto loc_00021C49;
    if (_jt == 0x00021C57u) goto loc_00021C57;
    if (_jt == 0x00021C65u) goto loc_00021C65;
    if (_jt == 0x00021C73u) goto loc_00021C73;
    if (_jt == 0x00021C81u) goto loc_00021C81;
    if (_jt == 0x00021C8Fu) goto loc_00021C8F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00021C49: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021C55: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00021C57: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021C63: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00021C65: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021C71: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00021C73: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021C7F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00021C81: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021C8D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00021C8F: ;
    eax = MEM32(0x84706C);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_00021C9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021CD0
 * Original: 0x00021CD0 - 0x00021CE7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021CD0: ;
    if (TEST_S(eax, eax)) { sub_00021CE7(); return; } /* jl: less (signed <) */

loc_00021CD4: ;
    if (CMP_GE(eax, 0xDDA)) { sub_00021CE7(); return; } /* jge: greater or equal (signed >=) */

loc_00021CDB: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + 0x65E060;
    esp += 4; return; /* ret */

}

/**
 * sub_00021CF0
 * Original: 0x00021CF0 - 0x00021D08 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021CF0: ;
    if (TEST_S(eax, eax)) { sub_00021D08(); return; } /* jl: less (signed <) */

loc_00021CF4: ;
    if (CMP_GE(eax, 0xDDA)) { sub_00021D08(); return; } /* jge: greater or equal (signed >=) */

loc_00021CFB: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = MEM32(eax + 0x65E07C);
    esp += 4; return; /* ret */

}

/**
 * sub_00021D10
 * Original: 0x00021D10 - 0x00021D34 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021D10: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00021D25; /* jne: not equal / not zero */

loc_00021D17: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00021D25; /* jne: not equal / not zero */

loc_00021D1E: ;
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00021D34(); return; } /* je: equal / zero */

loc_00021D25: ;
    if (CMP_EQ(MEM32(eax + 0xE4), 1)) { sub_00021D34(); return; } /* je: equal / zero */

loc_00021D2E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00021D40
 * Original: 0x00021D40 - 0x00021D5B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021D40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021D40: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00021D5B(); return; } /* jne: not equal / not zero */

loc_00021D4D: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_00021D52: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00021D5B(); return; } /* jne: not equal / not zero */

loc_00021D56: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021D70
 * Original: 0x00021D70 - 0x00021D8B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021D70: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00021D8B(); return; } /* jne: not equal / not zero */

loc_00021D7D: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_00021D82: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00021D8B(); return; } /* jne: not equal / not zero */

loc_00021D86: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021DA0
 * Original: 0x00021DA0 - 0x00021DDC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021DA0: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) { sub_00021DDC(); return; } /* je: equal / zero */

loc_00021DA7: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) { sub_00021DDC(); return; } /* je: equal / zero */

loc_00021DAE: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_00021DBD; /* jge: greater or equal (signed >=) */

loc_00021DB3: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_00021DB8: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;

loc_00021DBD: ;
    eax = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_00021DC9; /* jge: greater or equal (signed >=) */

loc_00021DC5: ;
    MEM8(esi + 0x3D) = 1;

loc_00021DC9: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_00021DF0
 * Original: 0x00021DF0 - 0x00021E26 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021DF0: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_00021E20; /* je: equal / zero */

loc_00021DF7: ;
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00021E26(); return; } /* jne: not equal / not zero */

loc_00021DFE: ;
    if (TEST_Z(eax, eax)) goto loc_00021E20; /* je: equal / zero */

loc_00021E02: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00021E17; /* jne: not equal / not zero */

loc_00021E09: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00021E17; /* jne: not equal / not zero */

loc_00021E10: ;
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00021E26(); return; } /* je: equal / zero */

loc_00021E17: ;
    if (CMP_EQ(MEM32(eax + 0xE4), 1)) { sub_00021E26(); return; } /* je: equal / zero */

loc_00021E20: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00021E30
 * Original: 0x00021E30 - 0x00021E69 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021E30: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) { sub_00021E69(); return; } /* je: equal / zero */

loc_00021E37: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) { sub_00021E69(); return; } /* je: equal / zero */

loc_00021E3E: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_00021E4D; /* jge: greater or equal (signed >=) */

loc_00021E43: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_00021E48: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;

loc_00021E4D: ;
    eax = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_00021E59; /* jge: greater or equal (signed >=) */

loc_00021E55: ;
    MEM8(esi + 0x3D) = 1;

loc_00021E59: ;
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, 0xFFFF - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(ecx, 0xFFFF)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_00021E70
 * Original: 0x00021E70 - 0x00021E97 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021E70: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D2BC4;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00021E91; /* je: equal / zero */

loc_00021E80: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00021E8E: ;
    esp = esp + 4;

loc_00021E91: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00021EA0
 * Original: 0x00021EA0 - 0x00021EC6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021EA0: ;
    eax = MEM32(ecx + 4);
    if (TEST_S(eax, eax)) { sub_00021EC6(); return; } /* jl: less (signed <) */

loc_00021EA7: ;
    if (CMP_GE(eax, 2)) { sub_00021EC6(); return; } /* jge: greater or equal (signed >=) */

loc_00021EAC: ;
    ecx = MEM32(ecx + 0xC);
    (void)0; /* cmp MEM32(ecx + eax * 4 + 0xA3C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(ecx + eax * 4 + 0xA3C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00021EC6(); return; } /* je: equal / zero */

loc_00021EBE: ;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0xA3C));
    esp += 4; return; /* ret */

}

/**
 * sub_00021ED0
 * Original: 0x00021ED0 - 0x00021EDE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021ED0(void)
{

loc_00021ED0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x76C));
    esp += 4; return; /* ret */

}

/**
 * sub_00021EE0
 * Original: 0x00021EE0 - 0x00021EEB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021EE0(void)
{

loc_00021EE0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00021EF0
 * Original: 0x00021EF0 - 0x00021EFE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021EF0(void)
{

loc_00021EF0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0xC);
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x9E8));
    esp += 4; return; /* ret */

}

/**
 * sub_00021F00
 * Original: 0x00021F00 - 0x00021F0B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021F00(void)
{

loc_00021F00: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x14));
    esp += 4; return; /* ret */

}

/**
 * sub_00021F10
 * Original: 0x00021F10 - 0x00021F39 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021F10: ;
    edx = MEM32(ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(ecx + 0xC);
    if (TEST_S(edx, edx)) { sub_00021F39(); return; } /* jl: less (signed <) */

loc_00021F1A: ;
    if (CMP_GE(edx, 2)) { sub_00021F39(); return; } /* jge: greater or equal (signed >=) */

loc_00021F1F: ;
    SET_LO8(eax, MEM8(edx + ecx + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00021F39(); return; } /* je: equal / zero */

loc_00021F2A: ;
    eax = MEM32(ecx + edx * 8 + 0xA18);
    edx = MEM32(ecx + edx * 8 + 0xA1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00021F40
 * Original: 0x00021F40 - 0x00021F4B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021F40(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021F40: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_00299D60(); return; /* tail jmp 0x00299D60 */

}

/**
 * sub_00021F70
 * Original: 0x00021F70 - 0x00021F7B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021F70(void)
{

loc_00021F70: ;
    eax = MEM32(ecx + 0xC);
    SET_LO16(eax, MEM16(eax + 0x9D8));
    esp += 4; return; /* ret */

}

/**
 * sub_00021F80
 * Original: 0x00021F80 - 0x00021F94 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021F80(void)
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

loc_00021F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00021F88: ;
    eax = MEM32(esi + 0xC);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00471288(); return; /* tail jmp 0x00471288 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00021FC0
 * Original: 0x00021FC0 - 0x00021FD3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021FC0: ;
    eax = MEM32(ecx + 0xC);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(eax + 0x9D8), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM16(eax + 0x9D8), 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00021FE0
 * Original: 0x00021FE0 - 0x00022007 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021FE0(void)
{
    int _cf = 0; /* carry flag */

loc_00021FE0: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0xC);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x758));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(eax, LO8(edx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00022010
 * Original: 0x00022010 - 0x0002201E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022010(void)
{

loc_00022010: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x8B));
    esp += 4; return; /* ret */

}

/**
 * sub_00022020
 * Original: 0x00022020 - 0x0002202E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022020(void)
{

loc_00022020: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x227F));
    esp += 4; return; /* ret */

}

/**
 * sub_00022030
 * Original: 0x00022030 - 0x0002203E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022030(void)
{

loc_00022030: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4 + 0x80);
    esp += 4; return; /* ret */

}

/**
 * sub_00022040
 * Original: 0x00022040 - 0x0002204E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022040(void)
{

loc_00022040: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x89));
    esp += 4; return; /* ret */

}

/**
 * sub_00022050
 * Original: 0x00022050 - 0x00022055 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022050(void)
{

loc_00022050: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00022060
 * Original: 0x00022060 - 0x0002207B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00022060: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    edx = 1;
    edx = edx << LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xBD43));
    (void)0; /* test LO8(ecx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(edx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00022080
 * Original: 0x00022080 - 0x00022090 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00022080: ;
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    ecx = MEM32(ecx + 8);
    if (CMP_NE(MEM32(0x863D04), 1)) { sub_00022090(); return; } /* jne: not equal / not zero */

loc_0002208C: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000220B0
 * Original: 0x000220B0 - 0x000220C8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000220B0(void)
{

loc_000220B0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    edx = ZX8(MEM8(eax + ecx + 0x227F));
    edx = edx << 6;
    eax = MEM32(edx + 0x777EE4);
    esp += 4; return; /* ret */

}

/**
 * sub_000220D0
 * Original: 0x000220D0 - 0x000220F7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000220D0(void)
{
    int _cf = 0; /* carry flag */

loc_000220D0: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0xBD40));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(eax, LO8(edx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00022100
 * Original: 0x00022100 - 0x00022156 (86 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022100(void)
{

loc_00022100: ;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x5D12B0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x862C40;
    MEM32(eax + 0x120) = 0x5D1274;
    MEM32(eax + 0x124) = ecx;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x134) = ecx;
    MEM32(eax + 0x138) = ecx;
    MEM32(eax + 0x13C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00022160
 * Original: 0x00022160 - 0x00022306 (422 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022160: ;
    ecx = MEM32(eax + 0x130);
    esp = esp - 0x10C;
    PUSH32(esp, ebp);
    ebp = 2;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(ecx, ebp)) goto loc_000221AA; /* jge: greater or equal (signed >=) */

loc_00022178: ;
    edi = MEM32(eax + 0xC);
    goto loc_00022180;

    /* nop */

loc_00022180: ;
    esi = MEM32(eax + 0x130);
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x86E980));
    if (TEST_NZ(LO8(ecx), LO8(edx))) goto loc_00022272; /* jne: not equal / not zero */

loc_0002219D: ;
    esi++;
    ecx = esi;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 0x130) = esi;
    if (CMP_L(ecx, ebp)) goto loc_00022180; /* jl: less (signed <) */

loc_000221AA: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    esi = MEM32(eax + 0x134);
    edx = 0; /* xor self */
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_GE(esi, ecx)) goto loc_00022226; /* jge: greater or equal (signed >=) */

loc_000221BE: ;
    edi = edi;

loc_000221C0: ;
    if (CMP_GE(MEM32(eax + 0x138), ebp)) goto loc_00022206; /* jge: greater or equal (signed >=) */

loc_000221C8: ;
    ecx = MEM32(eax + 0x134);
    esi = MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA50);
    edi = ecx + esi + 0x865620;
    edi = edi;

loc_000221E0: ;
    esi = MEM32(eax + 0x138);
    ecx = esi;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    if (TEST_NZ(LO8(ecx), LO8(ebx))) goto loc_000222C0; /* jne: not equal / not zero */

loc_000221F9: ;
    esi++;
    ecx = esi;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 0x138) = esi;
    if (CMP_L(ecx, ebp)) goto loc_000221E0; /* jl: less (signed <) */

loc_00022206: ;
    edi = MEM32(eax + 0x134);
    edi++;
    MEM32(eax + 0x138) = edx;
    MEM32(eax + 0x134) = edi;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    esi = edi;
    if (CMP_L(esi, ecx)) goto loc_000221C0; /* jl: less (signed <) */

loc_00022226: ;
    if (CMP_NE(MEM32(0x863D04), 1)) { sub_00022306(); return; } /* jne: not equal / not zero */

loc_00022233: ;
    if (CMP_EQ(MEM8(0x862998), LO8(edx))) goto loc_00022242; /* je: equal / zero */

loc_0002223B: ;
    edx = (uint32_t)(int32_t)SMEM8(0x86298D);

loc_00022242: ;
    ecx = MEM32(eax + 0x13C);
    if (CMP_GE(ecx, edx)) { sub_00022306(); return; } /* jge: greater or equal (signed >=) */

loc_00022250: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    POP32(esp, ebx);
    edx = edx + 0x8626F8;
    POP32(esp, edi);
    ecx++;
    POP32(esp, esi);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x13C) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_00022272: ;
    ecx = MEM32(eax + 0x130);
    edx = eax + 0x14;
    MEM32(edx + 4) = ecx;
    esi = 0x862C40;
    MEM32(edx + 8) = esi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;
    edi = edx + 0xC;
    ecx = 0x40;
    esi = esp + 0x18;
    MEM32(esp + 0xC) = 0x5D12B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x130);
    POP32(esp, edi);
    ecx++;
    POP32(esp, esi);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x130) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_000222C0: ;
    esi = MEM32(eax + 0x134);
    edi = MEM32(eax + 0x138);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA50);
    edx = eax + 0x120;
    ecx = ecx + 0x864EC8;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x138);
    POP32(esp, ebx);
    POP32(esp, edi);
    ecx++;
    POP32(esp, esi);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x138) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

}

/**
 * sub_00022320
 * Original: 0x00022320 - 0x0002235A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00022320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_0002232D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002233D; /* je: equal / zero */

loc_00022331: ;
    eax = esi;
    edi++;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_00022339: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00022331; /* jne: not equal / not zero */

loc_0002233D: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x13C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00022360
 * Original: 0x00022360 - 0x0002242C (204 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022360: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x10) = ebx;
    MEM8(ebp + 0x14) = LO8(ebx);
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = ebx;
    MEM32(ebp + 0x24) = ebx;
    MEM32(ebp + 0x28) = ebx;
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x30) = ebx;
    MEM32(ebp + 0xAC) = ebx;
    MEM32(ebp + 0xB0) = 1;
    MEM32(ebp + 0xB4) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_000223B4; /* jne: not equal / not zero */

loc_000223AF: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000223B4: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_000223FD; /* je: equal / zero */

loc_000223DB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_000223FD; /* jb: below (unsigned <) */

loc_000223E4: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000223EE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000223F6: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0002241E; /* jne: not equal / not zero */

loc_000223FD: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002240F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00022417: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0002242C(); return; } /* je: equal / zero */

loc_0002241E: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    g_seh_ebp = ebp; sub_0002242E(); return; /* tail jmp 0x0002242E */

}

/**
 * sub_00022CC0
 * Original: 0x00022CC0 - 0x00022D7A (186 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00022CC0: ;
    eax = MEM32(0x847074);
    if (TEST_NZ(eax, eax)) goto loc_00022D79; /* jne: not equal / not zero */

loc_00022CCD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00022CDB; /* jne: not equal / not zero */

loc_00022CD6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00022CDB: ;
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
    if (TEST_Z(esi, esi)) goto loc_00022D2B; /* je: equal / zero */

loc_00022D03: ;
    if (CMP_B(MEM32(esi + 0x80), 0xB8)) goto loc_00022D2B; /* jb: below (unsigned <) */

loc_00022D0F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00022D19: ;
    PUSH32(esp, 0xB8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00022D24: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00022D4F; /* jne: not equal / not zero */

loc_00022D2B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00022D3D: ;
    PUSH32(esp, 0xB8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00022D48: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00022D7A(); return; } /* je: equal / zero */

loc_00022D4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00022360(); /* call 0x00022360 */

loc_00022D55: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x847074) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00022D77; /* jne: not equal / not zero */

loc_00022D5E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00022D6F: ;
    eax = MEM32(0x847074);
    esp = esp + 0xC;

loc_00022D77: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00022D79: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00022D90
 * Original: 0x00022D90 - 0x00022DE7 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022D90: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x847001));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00022DCF; /* je: equal / zero */

loc_00022DAC: ;
    if (TEST_Z(edi, edi)) goto loc_00022DCF; /* je: equal / zero */

loc_00022DB0: ;
    if (CMP_GE(edi, 0xDDA)) goto loc_00022DCF; /* jge: greater or equal (signed >=) */

loc_00022DB8: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x48);
    if (TEST_Z(ecx, ecx)) goto loc_00022DCF; /* je: equal / zero */

loc_00022DC4: ;
    eax = ecx;
    ecx = MEM32(eax + edi * 4);
    eax = eax + edi * 4;
    ecx++;
    MEM32(eax) = ecx;

loc_00022DCF: ;
    SET_LO8(eax, MEM8(0x847002));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00022DE7(); return; } /* je: equal / zero */

loc_00022DD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00022FE0
 * Original: 0x00022FE0 - 0x00023054 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022FE0: ;
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00022FF4: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023018; /* je: equal / zero */

loc_00023003: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5D25E0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023015: ;
    esp = esp + 0xC;

loc_00023018: ;
    if (CMP_NE(edi, 0xFFFFFFFFu)) { sub_00023054(); return; } /* jne: not equal / not zero */

loc_0002301D: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002303A; /* je: equal / zero */

loc_00023026: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5D2568);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023037: ;
    esp = esp + 8;

loc_0002303A: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0x2C);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_0002304A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000231D0
 * Original: 0x000231D0 - 0x0002321B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000231D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000231D0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00023205; /* jne: not equal / not zero */

loc_000231EF: ;
    /* nop */

loc_000231F0: ;
    if (CMP_AE(MEM32(eax + 0xC), edi)) goto loc_000231FA; /* jae: above or equal (unsigned >=) */

loc_000231F5: ;
    eax = MEM32(eax + 8);
    goto loc_000231FE;

loc_000231FA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000231FE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000231F0; /* je: equal / zero */

loc_00023205: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0002321B(); return; } /* je: equal / zero */

loc_00023210: ;
    if (CMP_B(edi, MEM32(ecx + 0xC))) { sub_0002321B(); return; } /* jb: below (unsigned <) */

loc_00023215: ;
    eax = esp + 0x10;
    g_seh_ebp = ebp; sub_00023223(); return; /* tail jmp 0x00023223 */

}

/**
 * sub_00023610
 * Original: 0x00023610 - 0x0002366A (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023610: ;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00023620: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 4);
    esi = eax;
    eax = MEM32(ecx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00023654; /* jne: not equal / not zero */

loc_00023639: ;
    /* nop */

loc_00023640: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_0002364A; /* jge: greater or equal (signed >=) */

loc_00023645: ;
    eax = MEM32(eax + 8);
    goto loc_0002364E;

loc_0002364A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0002364E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00023640; /* je: equal / zero */

loc_00023654: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0002366A(); return; } /* je: equal / zero */

loc_0002365F: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_0002366A(); return; } /* jl: less (signed <) */

loc_00023664: ;
    eax = esp + 0x10;
    g_seh_ebp = ebp; sub_00023672(); return; /* tail jmp 0x00023672 */

}

/**
 * sub_000237B0
 * Original: 0x000237B0 - 0x00023824 (116 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000237B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000237B0: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_000237CB; /* je: equal / zero */

loc_000237BE: ;
    edi = edi;

loc_000237C0: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_000237CB; /* je: equal / zero */

loc_000237C4: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_000237C0; /* jne: not equal / not zero */

loc_000237CB: ;
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 0x2C);
    if (CMP_EQ(eax, MEM32(ecx + 8))) { sub_00023824(); return; } /* je: equal / zero */

loc_000237D5: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000237F7; /* je: equal / zero */

loc_000237DE: ;
    eax = MEM32(esp + 8);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D2318);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000237F4: ;
    esp = esp + 0xC;

loc_000237F7: ;
    eax = MEM32(ebx);
    esi = MEM32(edi + 0x2C);
    edx = MEM32(esi + 8);
    ecx = eax + 4;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 2);
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00023812: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023830
 * Original: 0x00023830 - 0x00023C03 (979 bytes, 309 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023830: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(esi, ebx)) goto loc_000239E8; /* je: equal / zero */

loc_0002384B: ;
    edx = MEM32(edi + 0x20);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    if (CMP_NE(MEM8(eax + 0x15), LO8(ebx))) goto loc_00023874; /* jne: not equal / not zero */

loc_00023859: ;
    /* nop */

loc_00023860: ;
    if (CMP_AE(MEM32(eax + 0xC), esi)) goto loc_0002386A; /* jae: above or equal (unsigned >=) */

loc_00023865: ;
    eax = MEM32(eax + 8);
    goto loc_0002386E;

loc_0002386A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0002386E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00023860; /* je: equal / zero */

loc_00023874: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(ecx, eax)) goto loc_0002388A; /* je: equal / zero */

loc_0002387F: ;
    if (CMP_B(esi, MEM32(ecx + 0xC))) goto loc_0002388A; /* jb: below (unsigned <) */

loc_00023884: ;
    eax = esp + 0x10;
    goto loc_00023892;

loc_0002388A: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;

loc_00023892: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, MEM32(edx + 4))) goto loc_000239AA; /* je: equal / zero */

loc_0002389D: ;
    esi = MEM32(eax + 0x10);
    if (CMP_EQ(esi, ebx)) goto loc_00023B0C; /* je: equal / zero */

loc_000238A8: ;
    edi = esp + 0x24;
    ebx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_0002ACF0(); /* call 0x0002ACF0 */

loc_000238B7: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, MEM32(esi + 4))) goto loc_00023964; /* je: equal / zero */

loc_000238C4: ;
    edi = MEM32(eax + 0x10);
    if (TEST_Z(edi, edi)) goto loc_00023B0C; /* je: equal / zero */

loc_000238CF: ;
    esi = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0002B8A0(); /* call 0x0002B8A0 */

loc_000238E5: ;
    ebx = MEM32(esp + 0x30);
    esp = esp + 0xC;
    if (CMP_EQ(ebx, esi)) goto loc_00023923; /* je: equal / zero */

loc_000238F0: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023912; /* je: equal / zero */

loc_000238F9: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D22A0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002390F: ;
    esp = esp + 0xC;

loc_00023912: ;
    PUSH32(esp, ebx);
    ebx = esp + 0x28;
    esi = edi;
    PUSH32(esp, 0); sub_0002AD30(); /* call 0x0002AD30 */

loc_0002391E: ;
    goto loc_00023B0C;

loc_00023923: ;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebx = esp + 0x28;
    edx = esi;
    PUSH32(esp, 0); sub_000237B0(); /* call 0x000237B0 */

loc_00023937: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00023BF9; /* jne: not equal / not zero */

loc_0002393F: ;
    if (CMP_EQ(ebp, 0xFF)) goto loc_00023B0C; /* je: equal / zero */

loc_0002394B: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023B0C; /* je: equal / zero */

loc_00023958: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5D2218);
    goto loc_00023AFE;

loc_00023964: ;
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebx = esp + 0x28;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0); sub_000237B0(); /* call 0x000237B0 */

loc_0002397E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00023BF9; /* jne: not equal / not zero */

loc_00023986: ;
    if (CMP_EQ(ebp, 0xFF)) goto loc_00023B0C; /* je: equal / zero */

loc_00023992: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023B0C; /* je: equal / zero */

loc_0002399F: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    goto loc_00023AF9;

loc_000239AA: ;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, ebp);
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_000237B0(); /* call 0x000237B0 */

loc_000239BC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00023BF9; /* jne: not equal / not zero */

loc_000239C4: ;
    if (CMP_EQ(ebp, 0xFF)) goto loc_00023B0C; /* je: equal / zero */

loc_000239D0: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023B0C; /* je: equal / zero */

loc_000239DD: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    goto loc_00023AF9;

loc_000239E8: ;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00023A0B; /* jne: not equal / not zero */

loc_000239F7: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00023A01; /* jge: greater or equal (signed >=) */

loc_000239FC: ;
    eax = MEM32(eax + 8);
    goto loc_00023A05;

loc_00023A01: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00023A05: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000239F7; /* je: equal / zero */

loc_00023A0B: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(ecx, eax)) goto loc_00023A21; /* je: equal / zero */

loc_00023A16: ;
    if (CMP_L(ebp, MEM32(ecx + 0xC))) goto loc_00023A21; /* jl: less (signed <) */

loc_00023A1B: ;
    eax = esp + 0x24;
    goto loc_00023A29;

loc_00023A21: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;

loc_00023A29: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, MEM32(edx + 4))) goto loc_00023AC8; /* je: equal / zero */

loc_00023A34: ;
    edi = MEM32(eax + 0x10);
    if (CMP_EQ(edi, ebx)) goto loc_00023B0C; /* je: equal / zero */

loc_00023A3F: ;
    esi = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0002B8A0(); /* call 0x0002B8A0 */

loc_00023A55: ;
    ebx = MEM32(esp + 0x30);
    esp = esp + 0xC;
    if (CMP_EQ(ebx, esi)) goto loc_00023A90; /* je: equal / zero */

loc_00023A60: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023A82; /* je: equal / zero */

loc_00023A69: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D2118);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023A7F: ;
    esp = esp + 0xC;

loc_00023A82: ;
    PUSH32(esp, ebx);
    ebx = esp + 0x28;
    esi = edi;
    PUSH32(esp, 0); sub_0002AD30(); /* call 0x0002AD30 */

loc_00023A8E: ;
    goto loc_00023B0C;

loc_00023A90: ;
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_000237B0(); /* call 0x000237B0 */

loc_00023AA2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00023BF9; /* jne: not equal / not zero */

loc_00023AAA: ;
    if (CMP_EQ(ebp, 0xFF)) goto loc_00023B0C; /* je: equal / zero */

loc_00023AB2: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023B0C; /* je: equal / zero */

loc_00023ABB: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D2088);
    goto loc_00023AFE;

loc_00023AC8: ;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, ebp);
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_000237B0(); /* call 0x000237B0 */

loc_00023ADA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00023BF9; /* jne: not equal / not zero */

loc_00023AE2: ;
    if (CMP_EQ(ebp, 0xFF)) goto loc_00023B0C; /* je: equal / zero */

loc_00023AEA: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023B0C; /* je: equal / zero */

loc_00023AF3: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);

loc_00023AF9: ;
    PUSH32(esp, 0x5D2190);

loc_00023AFE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023B09: ;
    esp = esp + 0xC;

loc_00023B0C: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x28);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00023B35; /* jne: not equal / not zero */

loc_00023B20: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00023B2A; /* jge: greater or equal (signed >=) */

loc_00023B25: ;
    eax = MEM32(eax + 8);
    goto loc_00023B2E;

loc_00023B2A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00023B2E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00023B20; /* je: equal / zero */

loc_00023B35: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(ecx, eax)) goto loc_00023B4B; /* je: equal / zero */

loc_00023B40: ;
    if (CMP_L(ebp, MEM32(ecx + 0xC))) goto loc_00023B4B; /* jl: less (signed <) */

loc_00023B45: ;
    eax = esp + 0x1C;
    goto loc_00023B53;

loc_00023B4B: ;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x24;

loc_00023B53: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, MEM32(edx + 4))) goto loc_00023BD7; /* je: equal / zero */

loc_00023B5A: ;
    edi = MEM32(eax + 0x10);
    if (TEST_Z(edi, edi)) goto loc_00023BF9; /* je: equal / zero */

loc_00023B65: ;
    esi = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0002B8A0(); /* call 0x0002B8A0 */

loc_00023B7B: ;
    ebx = MEM32(esp + 0x28);
    esp = esp + 0xC;
    if (CMP_EQ(ebx, esi)) goto loc_00023BBE; /* je: equal / zero */

loc_00023B86: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023BA8; /* je: equal / zero */

loc_00023B8F: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D2010);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023BA5: ;
    esp = esp + 0xC;

loc_00023BA8: ;
    PUSH32(esp, ebx);
    ebx = esp + 0x24;
    esi = edi;
    PUSH32(esp, 0); sub_0002AD30(); /* call 0x0002AD30 */

loc_00023BB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_00023BBE: ;
    if (CMP_EQ(ebp, 0xFF)) goto loc_00023BF9; /* je: equal / zero */

loc_00023BC6: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023BF9; /* je: equal / zero */

loc_00023BCF: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    goto loc_00023BE6;

loc_00023BD7: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023BF9; /* je: equal / zero */

loc_00023BE0: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);

loc_00023BE6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D1F80);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023BF6: ;
    esp = esp + 0xC;

loc_00023BF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00023C10
 * Original: 0x00023C10 - 0x00023E18 (520 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023C10: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023E15; /* je: equal / zero */

loc_00023C1D: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023C35; /* je: equal / zero */

loc_00023C2E: ;
    MEM8(esi + 0x84) = 1;

loc_00023C35: ;
    PUSH32(esp, 0x5D1F38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023C3F: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi + 4);
    esp = esp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00023C51; /* jne: not equal / not zero */

loc_00023C4D: ;
    eax = 0; /* xor self */
    goto loc_00023C59;

loc_00023C51: ;
    eax = MEM32(edi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00023C59: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1F18);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023C6A: ;
    ecx = MEM32(edi + 4);
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00023C78; /* jne: not equal / not zero */

loc_00023C74: ;
    eax = 0; /* xor self */
    goto loc_00023C80;

loc_00023C78: ;
    eax = MEM32(edi + 0xC);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00023C80: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1EF4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023C91: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1ED0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023CA6: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D1EB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023CB6: ;
    ebx = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    esp = esp + 0x14;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(ebx, ecx)) goto loc_00023DEB; /* je: equal / zero */

loc_00023CCD: ;
    PUSH32(esp, ebp);
    goto loc_00023CD4;

loc_00023CD0: ;
    eax = MEM32(esp + 0x14);

loc_00023CD4: ;
    ebp = MEM32(ebx);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = MEM32(0x847024);
    if (TEST_Z(ebp, ebp)) goto loc_00023DC5; /* je: equal / zero */

loc_00023CE4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1E8C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023CF0: ;
    eax = MEM32(ebp + 0x2C);
    esp = esp + 0xC;
    if (TEST_S(eax, eax)) goto loc_00023D0F; /* jl: less (signed <) */

loc_00023CFA: ;
    if (CMP_GE(eax, 0xDDA)) goto loc_00023D0F; /* jge: greater or equal (signed >=) */

loc_00023D01: ;
    edi = eax + eax * 2;
    edi = edi << 4;
    edi = edi + 0x65E060;
    goto loc_00023D11;

loc_00023D0F: ;
    edi = 0; /* xor self */

loc_00023D11: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D1E6C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023D29: ;
    eax = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1E54);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023D3D: ;
    ecx = MEM32(ebp + 0x1C);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D1E3C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023D51: ;
    edx = MEM32(ebp + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D1E24);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023D65: ;
    eax = MEM32(ebp + 4);
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_00023D7B; /* je: equal / zero */

loc_00023D6F: ;
    SET_LO8(ecx, MEM8(eax + 5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = 0x5D1E1C;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00023D80; /* jne: not equal / not zero */

loc_00023D7B: ;
    eax = 0x5D1E14;

loc_00023D80: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1DFC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023D91: ;
    ebp = MEM32(ebp + 4);
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_00023DA2; /* je: equal / zero */

loc_00023D9B: ;
    SET_LO8(eax, MEM8(ebp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023DA9; /* je: equal / zero */

loc_00023DA2: ;
    eax = 0x5D1E1C;
    goto loc_00023DAE;

loc_00023DA9: ;
    eax = 0x5D1E14;

loc_00023DAE: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1DE4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023DBF: ;
    edi = MEM32(esp + 0x20);
    goto loc_00023DD0;

loc_00023DC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1DB8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023DD0: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edi + 8);
    esp = esp + 8;
    edx++;
    ebx = ebx + 4;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(ebx, eax)) goto loc_00023CD0; /* jne: not equal / not zero */

loc_00023DEA: ;
    POP32(esp, ebp);

loc_00023DEB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D1F38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00023DFB: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00023E15; /* je: equal / zero */

loc_00023E09: ;
    eax = MEM32(0x847024);
    MEM8(eax + 0x84) = 0;

loc_00023E15: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00023E20
 * Original: 0x00023E20 - 0x0002405B (571 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023E20: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    eax = MEM32(ebp);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_00023E97; /* je: equal / zero */

loc_00023E43: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00023E86; /* je: equal / zero */

loc_00023E4A: ;
    esi = MEM32(eax + 4);
    eax = MEM32(esi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, esi)) goto loc_00023E86; /* je: equal / zero */

loc_00023E57: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00023E75; /* je: equal / zero */

loc_00023E5E: ;
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00023E69; /* jne: not equal / not zero */

loc_00023E65: ;
    eax = 0; /* xor self */
    goto loc_00023E71;

loc_00023E69: ;
    eax = MEM32(eax + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00023E71: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + eax;

loc_00023E75: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023E7E: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(eax, esi)) goto loc_00023E57; /* jne: not equal / not zero */

loc_00023E86: ;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023E8F: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, ebp)) goto loc_00023E43; /* jne: not equal / not zero */

loc_00023E97: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x24);
    esi = MEM32(eax + 4);
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(eax, esi)) goto loc_00023EDD; /* je: equal / zero */

loc_00023EAE: ;
    edi = edi;

loc_00023EB0: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00023ECC; /* je: equal / zero */

loc_00023EB7: ;
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00023EC2; /* jne: not equal / not zero */

loc_00023EBE: ;
    eax = 0; /* xor self */
    goto loc_00023ECA;

loc_00023EC2: ;
    eax = MEM32(eax + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00023ECA: ;
    ebx = ebx + eax;

loc_00023ECC: ;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023ED5: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(eax, esi)) goto loc_00023EB0; /* jne: not equal / not zero */

loc_00023EDD: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x28);
    esi = MEM32(edx + 4);
    eax = MEM32(esi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(eax, esi)) goto loc_00023F20; /* je: equal / zero */

loc_00023EF3: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00023F0F; /* je: equal / zero */

loc_00023EFA: ;
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00023F05; /* jne: not equal / not zero */

loc_00023F01: ;
    eax = 0; /* xor self */
    goto loc_00023F0D;

loc_00023F05: ;
    eax = MEM32(eax + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00023F0D: ;
    edi = edi + eax;

loc_00023F0F: ;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023F18: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(eax, esi)) goto loc_00023EF3; /* jne: not equal / not zero */

loc_00023F20: ;
    eax = MEM32(esp + 0x10);
    ebx = ebx + eax;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(edi, ebx)) goto loc_00024052; /* je: equal / zero */

loc_00023F2F: ;
    eax = MEM32(ebp);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_00023FA5; /* je: equal / zero */

loc_00023F3A: ;
    /* nop */

loc_00023F40: ;
    edi = MEM32(eax + 0x10);
    if (TEST_Z(edi, edi)) goto loc_00023F8C; /* je: equal / zero */

loc_00023F47: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(esi, eax)) goto loc_00023F8C; /* je: equal / zero */

loc_00023F54: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00023F7A; /* je: equal / zero */

loc_00023F5B: ;
    edx = MEM32(ecx + 4);
    if (TEST_Z(edx, edx)) goto loc_00023F7A; /* je: equal / zero */

loc_00023F62: ;
    eax = MEM32(ecx + 8);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_00023F7A; /* je: equal / zero */

loc_00023F6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00023C10(); /* call 0x00023C10 */

loc_00023F7A: ;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023F83: ;
    esi = MEM32(esp + 0x14);
    if (CMP_NE(esi, MEM32(edi + 4))) goto loc_00023F54; /* jne: not equal / not zero */

loc_00023F8C: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023F95: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 0x20);
    eax = MEM32(esp + 0x10);
    if (CMP_NE(eax, MEM32(ecx + 4))) goto loc_00023F40; /* jne: not equal / not zero */

loc_00023FA5: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 4);
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(esi, eax)) goto loc_00023FFF; /* je: equal / zero */

loc_00023FB9: ;
    /* nop */

loc_00023FC0: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00023FE6; /* je: equal / zero */

loc_00023FC7: ;
    edx = MEM32(ecx + 4);
    if (TEST_Z(edx, edx)) goto loc_00023FE6; /* je: equal / zero */

loc_00023FCE: ;
    eax = MEM32(ecx + 8);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_00023FE6; /* je: equal / zero */

loc_00023FDA: ;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00023C10(); /* call 0x00023C10 */

loc_00023FE6: ;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00023FEF: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x24);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(esi, MEM32(eax + 4))) goto loc_00023FC0; /* jne: not equal / not zero */

loc_00023FFF: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(edx + 4);
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(esi, eax)) goto loc_00024052; /* je: equal / zero */

loc_00024013: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00024039; /* je: equal / zero */

loc_0002401A: ;
    edx = MEM32(ecx + 4);
    if (TEST_Z(edx, edx)) goto loc_00024039; /* je: equal / zero */

loc_00024021: ;
    eax = MEM32(ecx + 8);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_00024039; /* je: equal / zero */

loc_0002402D: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00023C10(); /* call 0x00023C10 */

loc_00024039: ;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00024042: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x28);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(esi, MEM32(edx + 4))) goto loc_00024013; /* jne: not equal / not zero */

loc_00024052: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024060
 * Original: 0x00024060 - 0x000243D9 (889 bytes, 297 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024060: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x20);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(ecx, eax)) goto loc_00024290; /* je: equal / zero */

loc_0002407F: ;
    /* nop */

loc_00024080: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + 0x10);
    if (TEST_Z(esi, esi)) goto loc_00024261; /* je: equal / zero */

loc_0002408F: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_000241E3; /* je: equal / zero */

loc_0002409A: ;
    ebx = MEM32(esi + 4);
    ebp = MEM32(ebx);
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ebp, ebx)) goto loc_00024168; /* je: equal / zero */

loc_000240AB: ;
    goto loc_000240B0;

    /* nop */

loc_000240B0: ;
    edi = MEM32(ebp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_00024147; /* je: equal / zero */

loc_000240BB: ;
    ecx = MEM32(edi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_000240DD; /* je: equal / zero */

loc_000240C2: ;
    eax = MEM32(edi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_000240DD; /* je: equal / zero */

loc_000240CE: ;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_000240D7: ;
    ebp = MEM32(esp + 0x14);
    goto loc_0002415C;

loc_000240DD: ;
    ebx = MEM32(edi + 4);
    if (TEST_Z(ebx, ebx)) goto loc_0002410F; /* je: equal / zero */

loc_000240E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000240EA: ;
    if (TEST_NZ(eax, eax)) goto loc_0002410F; /* jne: not equal / not zero */

loc_000240EE: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0002410C: ;
    esp = esp + 4;

loc_0002410F: ;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00024120: ;
    if (TEST_NZ(eax, eax)) goto loc_00024147; /* jne: not equal / not zero */

loc_00024124: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00024144: ;
    esp = esp + 4;

loc_00024147: ;
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0002ADB0(); /* call 0x0002ADB0 */

loc_00024153: ;
    ebx = MEM32(esi + 4);
    ebp = MEM32(ebx);
    MEM32(esp + 0x14) = ebp;

loc_0002415C: ;
    if (CMP_NE(ebp, ebx)) goto loc_000240B0; /* jne: not equal / not zero */

loc_00024164: ;
    edi = MEM32(esp + 0x1C);

loc_00024168: ;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_000241D5; /* jne: not equal / not zero */

loc_00024171: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002B310(); /* call 0x0002B310 */

loc_00024182: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0002419A; /* je: equal / zero */

loc_0002418D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00024197: ;
    esp = esp + 4;

loc_0002419A: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000241AE: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi + 0x20);
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002ADB0(); /* call 0x0002ADB0 */

loc_000241C4: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    goto loc_00024280;

loc_000241D5: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_000241DE: ;
    goto loc_00024280;

loc_000241E3: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002B310(); /* call 0x0002B310 */

loc_000241F4: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_0002422A; /* je: equal / zero */

loc_000241FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00024203: ;
    if (TEST_NZ(eax, eax)) goto loc_0002422A; /* jne: not equal / not zero */

loc_00024207: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00024227: ;
    esp = esp + 4;

loc_0002422A: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00024236: ;
    if (TEST_NZ(eax, eax)) goto loc_0002425D; /* jne: not equal / not zero */

loc_0002423A: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0002425A: ;
    esp = esp + 4;

loc_0002425D: ;
    edi = MEM32(esp + 0x1C);

loc_00024261: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002ADB0(); /* call 0x0002ADB0 */

loc_00024274: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    MEM32(esp + 0x10) = eax;

loc_00024280: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(esp + 0x10);
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_00024080; /* jne: not equal / not zero */

loc_00024290: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0002432F; /* je: equal / zero */

loc_0002429E: ;
    ebp = MEM32(eax + 4);
    ebx = MEM32(ebp);
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(ebx, ebp)) goto loc_0002432F; /* je: equal / zero */

loc_000242B0: ;
    esi = MEM32(ebx + 0x10);
    edx = 0; /* xor self */
    if (CMP_EQ(esi, edx)) goto loc_0002430F; /* je: equal / zero */

loc_000242B9: ;
    ecx = MEM32(esi + 4);
    if (CMP_EQ(ecx, edx)) goto loc_000242DB; /* je: equal / zero */

loc_000242C0: ;
    eax = MEM32(esi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_EQ(eax, edx)) goto loc_000242DB; /* je: equal / zero */

loc_000242CC: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_000242D5: ;
    ebx = MEM32(esp + 0x1C);
    goto loc_0002432B;

loc_000242DB: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edx)) goto loc_000242F5; /* je: equal / zero */

loc_000242E2: ;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000242F0: ;
    esp = esp + 4;
    edx = 0; /* xor self */

loc_000242F5: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002430C: ;
    esp = esp + 4;

loc_0002430F: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002ADB0(); /* call 0x0002ADB0 */

loc_0002431E: ;
    ecx = MEM32(edi + 0x24);
    ebp = MEM32(ecx + 4);
    ebx = MEM32(ebp);
    MEM32(esp + 0x1C) = ebx;

loc_0002432B: ;
    if (CMP_NE(ebx, ebp)) goto loc_000242B0; /* jne: not equal / not zero */

loc_0002432F: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_000243CF; /* je: equal / zero */

loc_0002433D: ;
    ebp = MEM32(eax + 4);
    ebx = MEM32(ebp);
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(ebx, ebp)) goto loc_000243CF; /* je: equal / zero */

loc_0002434F: ;
    /* nop */

loc_00024350: ;
    esi = MEM32(ebx + 0x10);
    edx = 0; /* xor self */
    if (CMP_EQ(esi, edx)) goto loc_000243AF; /* je: equal / zero */

loc_00024359: ;
    ecx = MEM32(esi + 4);
    if (CMP_EQ(ecx, edx)) goto loc_0002437B; /* je: equal / zero */

loc_00024360: ;
    eax = MEM32(esi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_EQ(eax, edx)) goto loc_0002437B; /* je: equal / zero */

loc_0002436C: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_00024375: ;
    ebx = MEM32(esp + 0x1C);
    goto loc_000243CB;

loc_0002437B: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edx)) goto loc_00024395; /* je: equal / zero */

loc_00024382: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00024390: ;
    esp = esp + 4;
    edx = 0; /* xor self */

loc_00024395: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000243AC: ;
    esp = esp + 4;

loc_000243AF: ;
    edx = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002ADB0(); /* call 0x0002ADB0 */

loc_000243BE: ;
    eax = MEM32(edi + 0x28);
    ebp = MEM32(eax + 4);
    ebx = MEM32(ebp);
    MEM32(esp + 0x1C) = ebx;

loc_000243CB: ;
    if (CMP_NE(ebx, ebp)) goto loc_00024350; /* jne: not equal / not zero */

loc_000243CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000243E0
 * Original: 0x000243E0 - 0x0002444C (108 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000243E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000243E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, ecx)) goto loc_00024447; /* je: equal / zero */

loc_000243F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 4;

loc_000243F8: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_00024437; /* je: equal / zero */

loc_000243FE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00024404: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00024437; /* je: equal / zero */

loc_00024409: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00022FE0(); /* call 0x00022FE0 */

loc_00024413: ;
    esi = MEM32(ebp + 0x2C);
    ecx = MEM32(esi + 8);
    ecx = ecx - ebx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00024429: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 8) = eax;
    goto loc_0002443D;

loc_00024437: ;
    edi = edi + 4;
    ebx = ebx + 4;

loc_0002443D: ;
    edx = MEM32(ebp + 0x2C);
    if (CMP_NE(edi, MEM32(edx + 8))) goto loc_000243F8; /* jne: not equal / not zero */

loc_00024445: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00024447: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024450
 * Original: 0x00024450 - 0x00024630 (480 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0002462B; /* je: equal / zero */

loc_00024461: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_00024470;

loc_00024465: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_00024470: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    eax = eax + edx;
    eax--;
    ecx = eax;
    eax = eax >> 2;
    edi = eax * 4;
    ecx = ecx - edi;
    edi = MEM32(esi + 8);
    if (CMP_A(edi, eax)) goto loc_00024490; /* ja: above (unsigned >) */

loc_0002448E: ;
    eax = eax - edi;

loc_00024490: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = MEM32(esi + 4);
    eax = MEM32(esi + eax * 4);
    ebp = MEM32(eax + ecx * 4);
    if (TEST_Z(edx, edx)) goto loc_000244AE; /* je: equal / zero */

loc_0002449D: ;
    ecx = MEM32(esp + 0x14);
    eax = edx + -1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_000244AE; /* jne: not equal / not zero */

loc_000244AB: ;
    MEM32(ecx + 0xC) = eax;

loc_000244AE: ;
    if (TEST_Z(ebp, ebp)) goto loc_0002461A; /* je: equal / zero */

loc_000244B6: ;
    SET_LO8(eax, MEM8(0x846FF4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000244F1; /* je: equal / zero */

loc_000244BF: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    edx = MEM32(0x7F9F60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_000244DC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D1D10);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000244EE: ;
    esp = esp + 0x24;

loc_000244F1: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, ecx)) goto loc_0002450C; /* je: equal / zero */

loc_000244FE: ;
    eax = MEM32(ebp);

loc_00024501: ;
    if (CMP_EQ(MEM32(edi), eax)) goto loc_0002450C; /* je: equal / zero */

loc_00024505: ;
    edi = edi + 4;
    if (CMP_NE(edi, ecx)) goto loc_00024501; /* jne: not equal / not zero */

loc_0002450C: ;
    eax = MEM32(ebx + 0x10);
    if (CMP_EQ(edi, MEM32(eax + 8))) goto loc_00024568; /* je: equal / zero */

loc_00024514: ;
    SET_LO8(eax, MEM8(0x846FF4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00024543; /* je: equal / zero */

loc_0002451D: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(0x7F9F60);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0002452E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D1C90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00024540: ;
    esp = esp + 0x18;

loc_00024543: ;
    esi = MEM32(ebx + 0x10);
    ecx = MEM32(esi + 8);
    eax = edi + 4;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0002455C: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 8) = eax;

loc_00024568: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00024589; /* je: equal / zero */

loc_00024570: ;
    if (TEST_S(eax, eax)) goto loc_00024589; /* jl: less (signed <) */

loc_00024574: ;
    if (CMP_G(eax, 0xFF)) goto loc_00024589; /* jg: greater (signed >) */

loc_0002457B: ;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00023830(); /* call 0x00023830 */

loc_00024589: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax + 8);
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, ecx)) goto loc_000245AB; /* je: equal / zero */

loc_00024596: ;
    eax = MEM32(ebp);
    /* nop */

loc_000245A0: ;
    if (CMP_EQ(MEM32(edi), eax)) goto loc_000245AB; /* je: equal / zero */

loc_000245A4: ;
    edi = edi + 4;
    if (CMP_NE(edi, ecx)) goto loc_000245A0; /* jne: not equal / not zero */

loc_000245AB: ;
    eax = MEM32(ebx + 0x2C);
    if (CMP_EQ(edi, MEM32(eax + 8))) goto loc_00024609; /* je: equal / zero */

loc_000245B3: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000245E4; /* je: equal / zero */

loc_000245BC: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp);
    eax = MEM32(0x7F9F60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_000245CF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D1BF8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000245E1: ;
    esp = esp + 0x18;

loc_000245E4: ;
    esi = MEM32(ebx + 0x2C);
    ecx = MEM32(esi + 8);
    eax = edi + 4;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_000245FD: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    eax = eax + 0xFFFFFFFCu;
    MEM32(esi + 8) = eax;

loc_00024609: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00024617: ;
    esp = esp + 4;

loc_0002461A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00024465; /* jne: not equal / not zero */

loc_00024629: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0002462B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024630
 * Original: 0x00024630 - 0x000246B0 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024630(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024630: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002EC60(); /* call 0x0002EC60 */

loc_00024657: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_00024450(); /* call 0x00024450 */

loc_00024663: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000243E0(); /* call 0x000243E0 */

loc_00024669: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002468B; /* jne: not equal / not zero */

loc_00024670: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000246B0(); /* call 0x000246B0 */

loc_00024676: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024820(); /* call 0x00024820 */

loc_0002467C: ;
    ebx = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0002ED40(); /* call 0x0002ED40 */

loc_00024684: ;
    edi = esi;
    PUSH32(esp, 0); sub_00024B50(); /* call 0x00024B50 */

loc_0002468B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024060(); /* call 0x00024060 */

loc_00024691: ;
    SET_LO8(eax, MEM8(0x847033));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000246A0; /* je: equal / zero */

loc_0002469A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00023E20(); /* call 0x00023E20 */

loc_000246A0: ;
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_002981B0(); /* call 0x002981B0 */

loc_000246A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000246B0
 * Original: 0x000246B0 - 0x00024811 (353 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000246B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000246B0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    if (CMP_EQ(esi, ebx)) goto loc_00024808; /* je: equal / zero */

loc_000246C8: ;
    PUSH32(esp, edi);
    /* nop */

loc_000246D0: ;
    edi = MEM32(esi);
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(edi, ecx)) goto loc_00024717; /* jne: not equal / not zero */

loc_000246DC: ;
    if (CMP_EQ(esi, ebx)) goto loc_000247F9; /* je: equal / zero */

loc_000246E4: ;
    edi = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = edi;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = eax;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00024706: ;
    eax = MEM32(ebx + 0x10);
    esp = esp + 4;
    eax--;
    esi = edi;
    MEM32(ebx + 0x10) = eax;
    goto loc_000247F9;

loc_00024717: ;
    ebx = MEM32(ebp + 4);
    edx = MEM32(ebx);
    MEM32(esp + 0x10) = ecx;

loc_00024720: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_00024749; /* je: equal / zero */

loc_00024726: ;
    if (CMP_EQ(MEM8(eax + 8), 0)) goto loc_00024745; /* je: equal / zero */

loc_0002472C: ;
    ebp = MEM32(edi + 0x30);
    if (CMP_NE(MEM32(eax + 0x30), ebp)) goto loc_00024741; /* jne: not equal / not zero */

loc_00024734: ;
    ebp = MEM32(edi + 0x24);
    if (CMP_EQ(MEM32(eax + 0x24), ebp)) goto loc_00024760; /* je: equal / zero */

loc_0002473C: ;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00024760; /* je: equal / zero */

loc_00024741: ;
    ebp = MEM32(esp + 0x1C);

loc_00024745: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00024749: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(ebx + 8))) goto loc_0002476C; /* je: equal / zero */

loc_00024752: ;
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 0x80)) goto loc_00024720; /* jl: less (signed <) */

loc_0002475E: ;
    goto loc_0002476C;

loc_00024760: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebp = MEM32(esp + 0x1C);
    if (CMP_GE(ecx & ecx, 0)) goto loc_000247F9; /* jge: greater or equal (signed >=) */

loc_0002476C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002E4F0(); /* call 0x0002E4F0 */

loc_00024773: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00022FE0(); /* call 0x00022FE0 */

loc_0002477D: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_0002478B; /* jne: not equal / not zero */

loc_00024787: ;
    ebx = 0; /* xor self */
    goto loc_00024793;

loc_0002478B: ;
    ebx = MEM32(eax + 8);
    ebx = ebx - edx;
    ebx = (uint32_t)((int32_t)ebx >> 2);

loc_00024793: ;
    if (TEST_Z(edx, edx)) goto loc_000247B0; /* je: equal / zero */

loc_00024797: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(ebx, ecx)) goto loc_000247B0; /* jae: above or equal (unsigned >=) */

loc_000247A3: ;
    ecx = MEM32(eax + 8);
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    MEM32(eax + 8) = ecx;
    goto loc_000247C4;

loc_000247B0: ;
    ecx = MEM32(eax + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_000247C4: ;
    edi = MEM32(ebp);
    if (CMP_EQ(esi, edi)) goto loc_000247F9; /* je: equal / zero */

loc_000247CB: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = ebx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = eax;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000247ED: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    eax--;
    esi = ebx;
    MEM32(edi + 0x10) = eax;

loc_000247F9: ;
    esi = MEM32(esi + 0xC);
    ebx = MEM32(ebp);
    if (CMP_NE(esi, ebx)) goto loc_000246D0; /* jne: not equal / not zero */

loc_00024807: ;
    POP32(esp, edi);

loc_00024808: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024820
 * Original: 0x00024820 - 0x00024B49 (809 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024820: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00024B41; /* je: equal / zero */

loc_00024839: ;
    eax = MEM32(edx + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_EQ(eax, edi)) goto loc_00024B41; /* je: equal / zero */

loc_00024849: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0x10);
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    if (CMP_LE(ecx, 5)) ecx = edi; /* cmovle */
    ecx = ecx + esi;
    ecx = ecx + eax;
    if (CMP_GE(ecx, 0x1E)) goto loc_000248A4; /* jge: greater or equal (signed >=) */

loc_00024865: ;
    esi = MEM32(edx + 4);
    if (CMP_EQ(esi, MEM32(edx + 8))) goto loc_00024888; /* je: equal / zero */

loc_0002486D: ;
    /* nop */

loc_00024870: ;
    ecx = MEM32(esi);
    if (CMP_EQ(ecx, edi)) goto loc_0002487B; /* je: equal / zero */

loc_00024876: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0002487B: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    esi = esi + 4;
    if (CMP_NE(esi, ecx)) goto loc_00024870; /* jne: not equal / not zero */

loc_00024888: ;
    esi = MEM32(ebx + 0x10);
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_00024B37; /* je: equal / zero */

loc_00024896: ;
    ecx = esp + 0x34;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, ecx);
    goto loc_00024B2F;

loc_000248A4: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    MEM8(esp + 0x14) = 0;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002BA70(); /* call 0x0002BA70 */

loc_000248C6: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    esp = esp + 0x10;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = edi;
    if (CMP_EQ(ecx, edx)) goto loc_00024B1C; /* je: equal / zero */

loc_000248EA: ;
    PUSH32(esp, ebp);
    goto loc_000248F1;

loc_000248ED: ;
    ecx = MEM32(esp + 0x18);

loc_000248F1: ;
    ebx = MEM32(ecx);
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_000248FD: ;
    ebp = eax;
    if (CMP_NE(ebp, 0xFFFFFFFFu)) goto loc_00024909; /* jne: not equal / not zero */

loc_00024904: ;
    ebp = 0xE6;

loc_00024909: ;
    esi = MEM32(ebx + 4);
    if (TEST_Z(esi, esi)) goto loc_00024958; /* je: equal / zero */

loc_00024910: ;
    eax = MEM32(ebx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00024958; /* je: equal / zero */

loc_00024917: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002493F; /* jge: greater or equal (signed >=) */

loc_0002491C: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00024934; /* jne: not equal / not zero */

loc_00024926: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002492B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00024934; /* jne: not equal / not zero */

loc_0002492F: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002493A;

loc_00024934: ;
    esi = MEM32(esi + 0x114);

loc_0002493A: ;
    ecx = MEM32(ebx + 0x18);
    MEM32(ecx) = esi;

loc_0002493F: ;
    eax = MEM32(ebx + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002494B; /* jge: greater or equal (signed >=) */

loc_00024947: ;
    MEM8(ebx + 0x3D) = 1;

loc_0002494B: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    MEM8(esp + 0x13) = (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0; /* sete */
    goto loc_0002495D;

loc_00024958: ;
    MEM8(esp + 0x13) = 1;

loc_0002495D: ;
    ecx = MEM32(esp + 0x38);
    eax = 0; /* xor self */
    ecx = ecx + 0x34;

loc_00024966: ;
    if (CMP_G(MEM32(ecx), ebp)) goto loc_00024975; /* jg: greater (signed >) */

loc_0002496A: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x1E)) goto loc_00024966; /* jl: less (signed <) */

loc_00024973: ;
    goto loc_000249CD;

loc_00024975: ;
    ebp = eax + -1;
    if (CMP_LE(ebp & ebp, 0)) goto loc_000249CD; /* jle: less or equal (signed <=) */

loc_0002497C: ;
    ebx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_000249C9; /* jle: less or equal (signed <=) */

loc_00024982: ;
    esi = MEM32(esp + 0x38);
    esi = esi + 0x34;
    /* nop */

loc_00024990: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_0002B8D0(); /* call 0x0002B8D0 */

loc_000249AA: ;
    edi = MEM32(esp + 0x28);
    if (TEST_Z(edi, edi)) goto loc_000249C1; /* je: equal / zero */

loc_000249B2: ;
    ecx = MEM32(esp + 0x2C);
    eax = ecx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_NZ(eax, eax)) goto loc_00024A37; /* jne: not equal / not zero */

loc_000249C1: ;
    ebx++;
    esi = esi + 4;
    if (CMP_L(ebx, ebp)) goto loc_00024990; /* jl: less (signed <) */

loc_000249C9: ;
    ebx = MEM32(esp + 0x14);

loc_000249CD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00024AA5; /* je: equal / zero */

loc_000249D9: ;
    esi = MEM32(esp + 0x38);
    ebx = 0; /* xor self */
    esi = esi + 0x34;

loc_000249E2: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002B8D0(); /* call 0x0002B8D0 */

loc_000249FC: ;
    edi = MEM32(esp + 0x28);
    if (TEST_Z(edi, edi)) goto loc_00024A13; /* je: equal / zero */

loc_00024A04: ;
    ecx = MEM32(esp + 0x2C);
    eax = ecx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_NZ(eax, eax)) goto loc_00024A6E; /* jne: not equal / not zero */

loc_00024A13: ;
    ebx++;
    esi = esi + 4;
    if (CMP_L(ebx, 0x1E)) goto loc_000249E2; /* jl: less (signed <) */

loc_00024A1C: ;
    ebp = MEM32(esp + 0x14);
    esi = MEM32(ebp + 4);
    if (TEST_Z(esi, esi)) goto loc_00024A2E; /* je: equal / zero */

loc_00024A27: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00024A2E: ;
    MEM8(ebp + 8) = 0;
    goto loc_00024ABB;

loc_00024A37: ;
    eax = ecx;
    MEM8(esp + 0x1C) = 0;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002BB60(); /* call 0x0002BB60 */

loc_00024A50: ;
    eax = MEM32(edi);
    esi = MEM32(eax + 4);
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_00024A63; /* je: equal / zero */

loc_00024A5C: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00024A63: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00024A6C: ;
    goto loc_00024ABB;

loc_00024A6E: ;
    edx = ecx;
    MEM8(esp + 0x20) = 0;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    edx = edx - edi;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002BB60(); /* call 0x0002BB60 */

loc_00024A87: ;
    eax = MEM32(edi);
    esi = MEM32(eax + 4);
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_00024A9A; /* je: equal / zero */

loc_00024A93: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00024A9A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00024AA3: ;
    goto loc_00024ABB;

loc_00024AA5: ;
    esi = MEM32(ebx + 4);
    if (TEST_Z(esi, esi)) goto loc_00024AB7; /* je: equal / zero */

loc_00024AAC: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00024AB3: ;
    ebx = MEM32(esp + 0x14);

loc_00024AB7: ;
    MEM8(ebx + 8) = 0;

loc_00024ABB: ;
    if (TEST_Z(edi, edi)) goto loc_00024AEC; /* je: equal / zero */

loc_00024ABF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00024AC5: ;
    if (TEST_NZ(eax, eax)) goto loc_00024AEC; /* jne: not equal / not zero */

loc_00024AC9: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00024AE9: ;
    esp = esp + 4;

loc_00024AEC: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 8);
    edi = 0; /* xor self */
    eax = eax + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(eax, ecx)) goto loc_000248ED; /* jne: not equal / not zero */

loc_00024B17: ;
    ebx = MEM32(esp + 0x38);
    POP32(esp, ebp);

loc_00024B1C: ;
    esi = MEM32(ebx + 0x10);
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_00024B37; /* je: equal / zero */

loc_00024B26: ;
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x34;
    PUSH32(esp, eax);

loc_00024B2F: ;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00024B34: ;
    esp = esp + 4;

loc_00024B37: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, esi);

loc_00024B41: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024B50
 * Original: 0x00024B50 - 0x00024BFA (170 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024B50: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00024BF9; /* je: equal / zero */

loc_00024B5D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x28);
    eax = ebx + ebp;
    (void)0; /* cmp eax, 0xD - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_L(eax, 0xD)) goto loc_00024BC5; /* jl: less (signed <) */

loc_00024B71: ;
    eax = MEM32(edi + 0xB4);
    if (CMP_G(eax & eax, 0)) goto loc_00024BB3; /* jg: greater (signed >) */

loc_00024B7B: ;
    esi = MEM32(edi + 0xB0);

loc_00024B81: ;
    if (TEST_Z(esi, esi)) goto loc_00024BF6; /* je: equal / zero */

loc_00024B85: ;
    ecx = MEM32(edi + 4);
    esi = esi + esi;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0002EEF0(); /* call 0x0002EEF0 */

loc_00024B92: ;
    if (CMP_GE(eax, ebx)) goto loc_00024BF6; /* jge: greater or equal (signed >=) */

loc_00024B96: ;
    ebx = eax;
    eax = eax + ebp;
    if (CMP_GE(eax, 0xD)) goto loc_00024B81; /* jge: greater or equal (signed >=) */

loc_00024B9F: ;
    MEM32(edi + 0xB0) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0xB4) = 0xA;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00024BB3: ;
    ecx = MEM32(0x7FA208);
    POP32(esp, esi);
    eax = eax - ecx;
    POP32(esp, ebp);
    MEM32(edi + 0xB4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00024BC5: ;
    eax = MEM32(edi + 0xB0);
    if (CMP_LE(eax, 1)) goto loc_00024BF6; /* jle: less or equal (signed <=) */

loc_00024BD0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_GE(esi, 1)) goto loc_00024BE1; /* jge: greater or equal (signed >=) */

loc_00024BDC: ;
    esi = 1;

loc_00024BE1: ;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0002EEF0(); /* call 0x0002EEF0 */

loc_00024BE9: ;
    eax = eax + ebp;
    if (CMP_GE(eax, 0xD)) goto loc_00024BF6; /* jge: greater or equal (signed >=) */

loc_00024BF0: ;
    MEM32(edi + 0xB0) = esi;

loc_00024BF6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00024BF9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00024C00
 * Original: 0x00024C00 - 0x00024C81 (129 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, ecx)) goto loc_00024C38; /* je: equal / zero */

loc_00024C15: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00024C2B; /* je: equal / zero */

loc_00024C1B: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_00024C2B; /* je: equal / zero */

loc_00024C22: ;
    SET_LO8(ebx, 0); /* xor self */
    esi = eax;
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00024C2B: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    edi = edi + 4;
    if (CMP_NE(edi, ecx)) goto loc_00024C15; /* jne: not equal / not zero */

loc_00024C38: ;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_00024C71; /* je: equal / zero */

loc_00024C44: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00024C4A: ;
    if (TEST_NZ(eax, eax)) goto loc_00024C71; /* jne: not equal / not zero */

loc_00024C4E: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00024C6E: ;
    esp = esp + 4;

loc_00024C71: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024C90
 * Original: 0x00024C90 - 0x00024D16 (134 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024C90: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    if (CMP_EQ(edi, eax)) goto loc_00024D11; /* je: equal / zero */

loc_00024CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00024CA2: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00024CB8; /* je: equal / zero */

loc_00024CA8: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_00024CB8; /* je: equal / zero */

loc_00024CAF: ;
    SET_LO8(ebx, 0); /* xor self */
    esi = eax;
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00024CB8: ;
    esi = MEM32(ebp);
    if (CMP_EQ(edi, esi)) goto loc_00024D07; /* je: equal / zero */

loc_00024CBF: ;
    ebx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    ecx = ebx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00024CD9: ;
    if (TEST_NZ(eax, eax)) goto loc_00024CFE; /* jne: not equal / not zero */

loc_00024CDD: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00024CFB: ;
    esp = esp + 4;

loc_00024CFE: ;
    eax = MEM32(esi + 0x10);
    eax--;
    edi = ebx;
    MEM32(esi + 0x10) = eax;

loc_00024D07: ;
    edi = MEM32(edi + 0xC);
    if (CMP_NE(edi, MEM32(ebp))) goto loc_00024CA2; /* jne: not equal / not zero */

loc_00024D0F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00024D11: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024D20
 * Original: 0x00024D20 - 0x00024D84 (100 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024D20: ;
    if (TEST_S(eax, eax)) { sub_00024D84(); return; } /* jl: less (signed <) */

loc_00024D24: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + eax * 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_00024D7D; /* je: equal / zero */

loc_00024D36: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_00024D69; /* je: equal / zero */

loc_00024D3D: ;
    esi = MEM32(eax + 0x10);
    if (TEST_NZ(esi, esi)) goto loc_00024D52; /* jne: not equal / not zero */

loc_00024D44: ;
    SET_LO8(ebx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00024D52; /* jne: not equal / not zero */

loc_00024D4B: ;
    SET_LO8(ebx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00024D5B; /* je: equal / zero */

loc_00024D52: ;
    if (CMP_NE(MEM32(eax + 0xE4), 1)) goto loc_00024D69; /* jne: not equal / not zero */

loc_00024D5B: ;
    SET_LO8(ebx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00024D69; /* jne: not equal / not zero */

loc_00024D62: ;
    SET_LO8(ebx, MEM8(eax + 9));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00024D7D; /* je: equal / zero */

loc_00024D69: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00024D73; /* je: equal / zero */

loc_00024D6E: ;
    if (CMP_NE(MEM32(ecx + 0x2C), edx)) goto loc_00024D7D; /* jne: not equal / not zero */

loc_00024D73: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00024D7D: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024D90
 * Original: 0x00024D90 - 0x00024DE5 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024D90: ;
    if (TEST_Z(eax, eax)) { sub_00024DE5(); return; } /* je: equal / zero */

loc_00024D94: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + eax * 4);
    if (TEST_Z(eax, eax)) { sub_00024DE5(); return; } /* je: equal / zero */

loc_00024DA1: ;
    edx = MEM32(eax + 0xC);
    if (CMP_EQ(edx, eax)) { sub_00024DE5(); return; } /* je: equal / zero */

loc_00024DA8: ;
    eax = MEM32(edx);
    if (TEST_S(eax, eax)) { sub_00024DE5(); return; } /* jl: less (signed <) */

loc_00024DAE: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_00024DE2; /* je: equal / zero */

loc_00024DB7: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_00024DDC; /* je: equal / zero */

loc_00024DBE: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00024DD3; /* jne: not equal / not zero */

loc_00024DC5: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00024DD3; /* jne: not equal / not zero */

loc_00024DCC: ;
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00024DE2; /* je: equal / zero */

loc_00024DD3: ;
    if (CMP_EQ(MEM32(eax + 0xE4), 1)) goto loc_00024DE2; /* je: equal / zero */

loc_00024DDC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00024DE2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00024DF0
 * Original: 0x00024DF0 - 0x00024DF8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024DF0: ;
    if (TEST_NZ(ecx, ecx)) { sub_00024DF8(); return; } /* jne: not equal / not zero */

loc_00024DF4: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00024E50
 * Original: 0x00024E50 - 0x00024E5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024E50: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(esp + 4);
    if (TEST_NZ(ecx, ecx)) { sub_00024E5E(); return; } /* jne: not equal / not zero */

loc_00024E58: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024EB0
 * Original: 0x00024EB0 - 0x00024EBA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024EB0: ;
    if (TEST_NZ(ecx, ecx)) { sub_00024EBA(); return; } /* jne: not equal / not zero */

loc_00024EB4: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024EF0
 * Original: 0x00024EF0 - 0x00024EFA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024EF0: ;
    if (TEST_NZ(ecx, ecx)) { sub_00024EFA(); return; } /* jne: not equal / not zero */

loc_00024EF4: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024F20
 * Original: 0x00024F20 - 0x00024F29 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024F20: ;
    if (TEST_NZ(ebx, ebx)) { sub_00024F29(); return; } /* jne: not equal / not zero */

loc_00024F24: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024F60
 * Original: 0x00024F60 - 0x00024F69 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00024F60: ;
    if (TEST_NZ(ecx, ecx)) { sub_00024F69(); return; } /* jne: not equal / not zero */

loc_00024F64: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024FA0
 * Original: 0x00024FA0 - 0x0002508C (236 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024FA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax & 0xF;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00024FEB; /* je: equal / zero */

loc_00024FB5: ;
    eax--;
    if ((eax == 0)) goto loc_00024FE2; /* je: equal / zero */

loc_00024FB8: ;
    eax--;
    if ((eax != 0)) goto loc_00025033; /* jne: not equal / not zero */

loc_00024FBB: ;
    if (TEST_Z(ebp, ebp)) goto loc_00024FD9; /* je: equal / zero */

loc_00024FBF: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00024FD9; /* je: equal / zero */

loc_00024FC9: ;
    eax = MEM32(eax + 0x3F4);
    if (TEST_Z(eax, eax)) goto loc_00024FD9; /* je: equal / zero */

loc_00024FD3: ;
    (void)0; /* cmp MEM32(eax + 0x18), 1 - flags set for next jcc */

loc_00024FD7: ;
    if (CMP_EQ(MEM32(eax + 0x18), 1)) goto loc_0002502D; /* je: equal / zero */

loc_00024FD9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00024FE2: ;
    (void)0; /* cmp MEM32(ebp + 0x68), 0x111 - flags set for next jcc */
    goto loc_00024FD7;

loc_00024FEB: ;
    if (TEST_S(ebx, ebx)) goto loc_00024FD9; /* jl: less (signed <) */

loc_00024FEF: ;
    if (CMP_GE(ebx, 0x25)) goto loc_00024FD9; /* jge: greater or equal (signed >=) */

loc_00024FF4: ;
    ecx = MEM32(ebp + 0x298);
    ecx = ecx & 0x1F;
    eax = ebp;
    PUSH32(esp, 0); sub_00021630(); /* call 0x00021630 */

loc_00025004: ;
    ebx = eax;
    if (CMP_G(ebx & ebx, 0)) goto loc_0002502D; /* jg: greater (signed >) */

loc_0002500A: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025028; /* je: equal / zero */

loc_00025013: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D1BA0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00025024: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00025028: ;
    ebx = 0xBA0;

loc_0002502D: ;
    edi = edi & 0xFFFFFFF2u;
    edi = edi | 2;

loc_00025033: ;
    ecx = ecx | 0xFFFFFFFFu;
    if (TEST_Z(edi, 0x48000000)) goto loc_00025046; /* je: equal / zero */

loc_0002503E: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx >> 0x14);
    ecx = ecx & 0xF;

loc_00025046: ;
    (void)0; /* test edi, 0x2000000 - flags set for next jcc */
    edx = 0x64;
    if (TEST_Z(edi, 0x2000000)) goto loc_0002505E; /* je: equal / zero */

loc_00025053: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx >> 0xC);
    edx = edx & 0xFF;

loc_0002505E: ;
    (void)0; /* test edi, 0x10000000 - flags set for next jcc */
    eax = ebp;
    if (TEST_Z(edi, 0x10000000)) goto loc_00025073; /* je: equal / zero */

loc_00025068: ;
    eax = MEM32(0x8470DC);
    eax = MEM32(eax + 0x3E0);

loc_00025073: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00025090(); /* call 0x00025090 */

loc_00025086: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00025090
 * Original: 0x00025090 - 0x00025148 (184 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025090: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000250A0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000250E4; /* je: equal / zero */

loc_000250A4: ;
    edi = edi & 0x7FFF;
    if (((int32_t)edi <= 0)) goto loc_000250E4; /* jle: less or equal (signed <=) */

loc_000250AC: ;
    if (CMP_G(edi, 0xDDA)) goto loc_000250E4; /* jg: greater (signed >) */

loc_000250B4: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000250E4; /* je: equal / zero */

loc_000250BB: ;
    if (CMP_EQ(eax, 5)) goto loc_000250E4; /* je: equal / zero */

loc_000250C0: ;
    if (TEST_S(ebp, ebp)) goto loc_00025103; /* jl: less (signed <) */

loc_000250C4: ;
    edx = MEM32(esp + 0x10);
    if (TEST_Z(edx, 0x8000000)) goto loc_000250ED; /* je: equal / zero */

loc_000250D0: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + 4);
    eax = MEM32(eax + edi * 4);
    if (TEST_Z(eax, eax)) goto loc_000250E0; /* je: equal / zero */

loc_000250DD: ;
    eax = MEM32(eax + 0x10);

loc_000250E0: ;
    if (CMP_L(eax, ebp)) goto loc_00025107; /* jl: less (signed <) */

loc_000250E4: ;
    eax = eax | 0xFFFFFFFFu;

loc_000250E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_000250ED: ;
    if (TEST_Z(edx, 0x40000000)) goto loc_00025107; /* je: equal / zero */

loc_000250F5: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002F1F0(); /* call 0x0002F1F0 */

loc_000250FF: ;
    if (CMP_GE(eax, ebp)) goto loc_000250E4; /* jge: greater or equal (signed >=) */

loc_00025103: ;
    edx = MEM32(esp + 0x10);

loc_00025107: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_GE(ebp, 0x64)) goto loc_0002512C; /* jge: greater or equal (signed >=) */

loc_00025110: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00025115: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_LE(edx, ebp)) ? 1 : 0); /* setle */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000250E4; /* je: equal / zero */

loc_00025128: ;
    edx = MEM32(esp + 0x10);

loc_0002512C: ;
    ecx = edx;
    edx = edx & 0xF;
    ecx = ecx & 0xFF000000u;
    (void)0; /* cmp edx, 7 - flags set for next jcc */
    eax = 0xFFFFFFFFu;
    if (CMP_A(edx, 7)) goto loc_000250E7; /* ja: above (unsigned >) */

loc_00025141: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x251B8)); return; /* indirect tail jmp */

}

/**
 * sub_000251E0
 * Original: 0x000251E0 - 0x000252BF (223 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000251E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000251E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x188);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebp + 0x188;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0x20);
    if (TEST_S(ecx, ecx)) goto loc_00025267; /* jl: less (signed <) */

loc_000251FD: ;
    if (TEST_NZ(eax, 0x4000000)) goto loc_000252B6; /* jne: not equal / not zero */

loc_00025208: ;
    SET_LO8(edx, MEM8(ebp + 0x194));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000252B6; /* jne: not equal / not zero */

loc_00025216: ;
    if (TEST_NZ(eax, 0x1000000)) goto loc_00025267; /* jne: not equal / not zero */

loc_0002521D: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002523C; /* je: equal / zero */

loc_00025226: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D1B50);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00025238: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0002523C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x190);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0002524C: ;
    eax = MEM32(esp + 0x20);
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(ebp + 0x190) = 0xFFFFFFFFu;
    MEM8(ebp + 0x194) = 0;

loc_00025267: ;
    if (((int32_t)(eax & eax) >= 0)) goto loc_00025272; /* jns: not sign (positive) */

loc_0002526B: ;
    MEM8(ebp + 0x194) = 1;

loc_00025272: ;
    ecx = MEM32(ebp + 0x564);
    eax = eax >> 0x18;
    eax = eax & 0x20;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    if (TEST_Z(ecx, ecx)) { sub_000252BF(); return; } /* je: equal / zero */

loc_00025285: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x24);
    eax = eax + 8;
    eax = MEM32(eax);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x21;
    ebx--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_000252E6(); return; /* tail jmp 0x000252E6 */

loc_000252B6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00025310
 * Original: 0x00025310 - 0x00025413 (259 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x184);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebp + 0x184;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0x20);
    if (TEST_S(ecx, ecx)) goto loc_000253C4; /* jl: less (signed <) */

loc_00025331: ;
    if (TEST_NZ(eax, 0x4000000)) goto loc_00025371; /* jne: not equal / not zero */

loc_00025338: ;
    SET_LO8(edx, MEM8(ebp + 0x195));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00025371; /* jne: not equal / not zero */

loc_00025342: ;
    if (TEST_NZ(eax, 0x1000000)) goto loc_000253C4; /* jne: not equal / not zero */

loc_00025349: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002537A; /* je: equal / zero */

loc_00025352: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_00021CF0(); /* call 0x00021CF0 */

loc_0002535B: ;
    edx = eax;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0002537A; /* je: equal / zero */

loc_00025362: ;
    eax = MEM32(ebp + 0x18C);
    PUSH32(esp, 0); sub_00021CF0(); /* call 0x00021CF0 */

loc_0002536D: ;
    if (CMP_G(edx, eax)) goto loc_0002537A; /* jg: greater (signed >) */

loc_00025371: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0002537A: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025399; /* je: equal / zero */

loc_00025383: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D1B00);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00025395: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_00025399: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x18C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000253A9: ;
    eax = MEM32(esp + 0x20);
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(ebp + 0x18C) = 0xFFFFFFFFu;
    MEM8(ebp + 0x195) = 0;

loc_000253C4: ;
    if (((int32_t)(eax & eax) >= 0)) goto loc_000253CF; /* jns: not sign (positive) */

loc_000253C8: ;
    MEM8(ebp + 0x195) = 1;

loc_000253CF: ;
    ecx = MEM32(ebp + 0x564);
    eax = eax >> 0x18;
    eax = eax & 0x20;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    if (TEST_Z(ecx, ecx)) { sub_00025413(); return; } /* je: equal / zero */

loc_000253E2: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x24);
    eax = eax + 4;
    eax = MEM32(eax);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x21;
    ebx--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0002543A(); return; /* tail jmp 0x0002543A */

}

/**
 * sub_00025460
 * Original: 0x00025460 - 0x000254A0 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00025460: ;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x564);
    eax = eax >> 0x18;
    eax = eax & 0x20;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    if (TEST_Z(edi, edi)) { sub_000254A0(); return; } /* je: equal / zero */

loc_00025474: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x10);
    eax = eax + 8;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0002549C: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000254D0
 * Original: 0x000254D0 - 0x00025535 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000254D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000254D0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_LE(ecx & ecx, 0)) goto loc_000254F7; /* jle: less or equal (signed <=) */

loc_000254D9: ;
    eax = MEM32(edi);
    if (TEST_S(eax, eax)) goto loc_000254F0; /* jl: less (signed <) */

loc_000254DF: ;
    edx = MEM32(ebx + 4);
    edx = MEM32(edx);
    eax = MEM32(edx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_000254F0; /* je: equal / zero */

loc_000254EB: ;
    eax = MEM32(eax + 0x2C);
    goto loc_000254F3;

loc_000254F0: ;
    eax = eax | 0xFFFFFFFFu;

loc_000254F3: ;
    if (CMP_NE(eax, ecx)) goto loc_0002552B; /* jne: not equal / not zero */

loc_000254F7: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025518; /* je: equal / zero */

loc_00025500: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00025514: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_00025518: ;
    eax = MEM32(edi);
    if (TEST_S(eax, eax)) goto loc_0002552B; /* jl: less (signed <) */

loc_0002551E: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0002552B: ;
    MEM32(edi) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025540
 * Original: 0x00025540 - 0x00025591 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025540(void)
{
    int _flags = 0; /* fallback flag var */

loc_00025540: ;
    if (TEST_S(eax, eax)) goto loc_00025590; /* jl: less (signed <) */

loc_00025544: ;
    if (TEST_Z(eax, eax)) goto loc_00025590; /* je: equal / zero */

loc_00025546: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_00025590; /* je: equal / zero */

loc_00025553: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, eax)) goto loc_00025590; /* je: equal / zero */

loc_0002555A: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (TEST_S(edi, edi)) goto loc_0002558F; /* jl: less (signed <) */

loc_00025561: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025580; /* je: equal / zero */

loc_0002556A: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002557C: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_00025580: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0002558F: ;
    POP32(esp, edi);

loc_00025590: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000255A0
 * Original: 0x000255A0 - 0x000255EC (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000255A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000255A0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_S(eax, eax)) goto loc_000255E8; /* jl: less (signed <) */

loc_000255A9: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_000255B3: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_000255E7; /* jl: less (signed <) */

loc_000255B9: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000255D8; /* je: equal / zero */

loc_000255C2: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000255D4: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_000255D8: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_000255E7: ;
    POP32(esp, edi);

loc_000255E8: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000255F0
 * Original: 0x000255F0 - 0x00025604 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000255F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000255F0: ;
    if (TEST_S(eax, eax)) { sub_00025604(); return; } /* jl: less (signed <) */

loc_000255F4: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) { sub_00025604(); return; } /* je: equal / zero */

loc_00025600: ;
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00025610
 * Original: 0x00025610 - 0x0002565C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025610: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0002EFC0(); /* call 0x0002EFC0 */

loc_00025623: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00025657; /* jl: less (signed <) */

loc_00025629: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025648; /* je: equal / zero */

loc_00025632: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1A58);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00025644: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_00025648: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00025657: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00025660
 * Original: 0x00025660 - 0x000256AF (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025660: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002F060(); /* call 0x0002F060 */

loc_00025675: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_000256A9; /* jl: less (signed <) */

loc_0002567B: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002569A; /* je: equal / zero */

loc_00025684: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1A58);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00025696: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_0002569A: ;
    edx = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_000256A9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000256B0
 * Original: 0x000256B0 - 0x00025711 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000256B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000256B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0002F0B0(); /* call 0x0002F0B0 */

loc_000256C1: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0002570B; /* jl: less (signed <) */

loc_000256C7: ;
    PUSH32(esp, esi);
    goto loc_000256D0;

    /* nop */

loc_000256D0: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000256ED; /* je: equal / zero */

loc_000256D9: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D1A58);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000256EA: ;
    esp = esp + 8;

loc_000256ED: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_000256FC: ;
    ebx = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_0002F0B0(); /* call 0x0002F0B0 */

loc_00025704: ;
    ebx = eax;
    if (CMP_GE(ebx & ebx, 0)) goto loc_000256D0; /* jge: greater or equal (signed >=) */

loc_0002570A: ;
    POP32(esp, esi);

loc_0002570B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025720
 * Original: 0x00025720 - 0x000257AF (143 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0002F180(); /* call 0x0002F180 */

loc_00025731: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_000257A9; /* jl: less (signed <) */

loc_00025737: ;
    PUSH32(esp, esi);
    goto loc_00025740;

    /* nop */

loc_00025740: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002575D; /* je: equal / zero */

loc_00025749: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D19F8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002575A: ;
    esp = esp + 8;

loc_0002575D: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0002576C: ;
    esi = MEM32(ebp + 4);
    edx = MEM32(esi);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */

loc_00025775: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0002578A; /* je: equal / zero */

loc_0002577B: ;
    SET_LO8(ebx, MEM8(eax + 8));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00025789; /* je: equal / zero */

loc_00025782: ;
    ebx = MEM32(eax + 0x24);
    if (TEST_Z(ebx, ebx)) goto loc_000257A2; /* je: equal / zero */

loc_00025789: ;
    edi++;

loc_0002578A: ;
    if (CMP_EQ(edi, MEM32(esi + 8))) goto loc_000257A8; /* je: equal / zero */

loc_0002578F: ;
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 0x80)) goto loc_00025775; /* jl: less (signed <) */

loc_0002579B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000257A2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00025740; /* jge: greater or equal (signed >=) */

loc_000257A8: ;
    POP32(esp, esi);

loc_000257A9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000257B0
 * Original: 0x000257B0 - 0x00025BC9 (1049 bytes, 293 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000257B0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000257B0: ;
    SET_LO8(eax, MEM8(0x847047));
    esp = esp - 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00025BC5; /* jne: not equal / not zero */

loc_000257C0: ;
    SET_LO8(eax, MEM8(0x846FEA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, MEM8(0x846FEE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000257E0; /* jne: not equal / not zero */

loc_000257CF: ;
    SET_LO8(eax, MEM8(0x846FED));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000257E0; /* jne: not equal / not zero */

loc_000257D8: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00025BC5; /* je: equal / zero */

loc_000257E0: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x656CAC); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x656CA8); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00025809; /* jne: not equal / not zero */

loc_00025806: ;
    xmm1 = xmm0; /* movaps */

loc_00025809: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x649108); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(0x77615C) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025833; /* je: equal / zero */

loc_00025823: ;
    xmm1 = xmm1 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm1; /* movss */

loc_00025833: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = LO8(eax);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000259E9; /* je: equal / zero */

loc_00025853: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D19CC);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0002586A: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x1C);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D19A0);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025898: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x18);
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1968);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000258C4: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x24);
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1920);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000258F0: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x2C);
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D18D8);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0002591F: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x28);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D189C);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0002594B: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x20);
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1860);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025977: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x10);
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D1810);
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000259A6: ;
    eax = MEM32(ebx + 0xB0);
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    esp = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D17D4);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000259D5: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    esp = esp + 0x10;
    MEMF(esp) = xmm0; /* movss */

loc_000259E9: ;
    SET_LO8(eax, MEM8(0x846FED));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025AF0; /* je: equal / zero */

loc_000259F6: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(eax + 0xC);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00025A0D; /* jne: not equal / not zero */

loc_00025A09: ;
    eax = 0; /* xor self */
    goto loc_00025A15;

loc_00025A0D: ;
    eax = MEM32(eax + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00025A15: ;
    eax = eax + 0xFFFFFFFDu;
    PUSH32(esp, eax);
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    PUSH32(esp, 0x5D1798);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025A2E: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x20);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D1750);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025A64: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x40);
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D16C8);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025A9A: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = MEM32(eax + 0x3C);
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMD(esp + 0x30) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    esp = esp + 0x28;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D1668);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025ADC: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    esp = esp + 0x20;
    MEMF(esp) = xmm0; /* movss */

loc_00025AF0: ;
    SET_LO8(eax, MEM8(0x846FEA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025BC5; /* je: equal / zero */

loc_00025AFD: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_00025BC4; /* je: equal / zero */

loc_00025B16: ;
    if (CMP_LE(MEM32(eax + 0xC), ebp)) goto loc_00025BC4; /* jle: less or equal (signed <=) */

loc_00025B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00025B21: ;
    ecx = MEM32(eax);
    esi = MEM32(ecx + ebp * 4);
    if (TEST_Z(esi, esi)) goto loc_00025BB3; /* je: equal / zero */

loc_00025B2E: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025BB3; /* je: equal / zero */

loc_00025B35: ;
    if (CMP_EQ(MEM32(esi + 0x30), 0xFFFFFFFFu)) goto loc_00025BA2; /* je: equal / zero */

loc_00025B3B: ;
    edx = MEM32(esi);
    edi = MEM32(esi + 0x24);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_00025B45: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00025B63; /* jnp: not parity */

loc_00025B55: ;
    if (TEST_Z(edi, edi)) goto loc_00025BA2; /* je: equal / zero */

loc_00025B59: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00025BA2; /* je: equal / zero */

loc_00025B63: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00025B71; /* je: equal / zero */

loc_00025B6A: ;
    eax = MEM32(eax + 0x28);
    if (TEST_NZ(eax, eax)) goto loc_00025B76; /* jne: not equal / not zero */

loc_00025B71: ;
    eax = 0x5D165C;

loc_00025B76: ;
    PUSH32(esp, eax);
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, 0x5D163C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00025B8D: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    esp = esp + 0x14;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_00025BA2: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_00025BC2; /* je: equal / zero */

loc_00025BB3: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0xC);
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_00025B21; /* jl: less (signed <) */

loc_00025BC2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00025BC4: ;
    POP32(esp, ebp);

loc_00025BC5: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00025BD0
 * Original: 0x00025BD0 - 0x00025BF2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00025BD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00025BDD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00025BEA; /* je: equal / zero */

loc_00025BE1: ;
    if (TEST_NZ(edi, edi)) { sub_00025BF2(); return; } /* jne: not equal / not zero */

loc_00025BE5: ;
    if (TEST_NZ(LO8(ebx), 0x40)) { sub_00025BF2(); return; } /* jne: not equal / not zero */

loc_00025BEA: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00025C40
 * Original: 0x00025C40 - 0x00025C4E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00025C40: ;
    if (TEST_NZ(ecx, ecx)) { sub_00025C4E(); return; } /* jne: not equal / not zero */

loc_00025C44: ;
    if (TEST_NZ(LO8(eax), 0x40)) { sub_00025C4E(); return; } /* jne: not equal / not zero */

loc_00025C48: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00025C80
 * Original: 0x00025C80 - 0x00025CE1 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025C80(void)
{
    float xmm0;

loc_00025C80: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    ecx = MEM32(eax + 0x68796C);
    edx = MEM32(eax + 0x687968);
    xmm0 = MEMF(eax + 0x687948); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x687964);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x687960);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x68795C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x687958);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x687950);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x68794C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x687944);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x687954);
    eax = MEM32(eax + 0x687940);
    PUSH32(esp, 0); sub_00401F50(); /* call 0x00401F50 */

loc_00025CDD: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00025CF0
 * Original: 0x00025CF0 - 0x00027897 (7079 bytes, 1350 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025CF0: ;
    esp = esp - 0x64;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    ebp = 0; /* xor self */
    eax--;
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x5C) = esi;
    if (CMP_A(eax, 0x21)) goto loc_0002761D; /* ja: above (unsigned >) */

loc_00025D5D: ;
    eax = ZX8(MEM8(eax + 0x27D2C));
    { uint32_t _jt = MEM32(eax * 4 + 0x27D10); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00025D6Bu) goto loc_00025D6B;
    if (_jt == 0x00026175u) goto loc_00026175;
    if (_jt == 0x000265AEu) goto loc_000265AE;
    if (_jt == 0x000269B9u) goto loc_000269B9;
    if (_jt == 0x00026DC8u) goto loc_00026DC8;
    if (_jt == 0x00027215u) goto loc_00027215;
    if (_jt == 0x0002761Du) goto loc_0002761D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00025D6B: ;
    PUSH32(esp, 8);
    MEM32(esp + 0x14) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025D7A: ;
    esi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025D87: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025D94: ;
    ebp = 3;
    MEM32(esi) = ebp;
    MEM32(edi) = 0xA4F;
    MEM32(eax) = 0xA80;
    MEM32(esi + 4) = 8;
    MEM32(edi + 4) = 0xA4A;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x38) = eax;
    MEM32(eax + 4) = 0xA86;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025DCB: ;
    esi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025DD8: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025DE5: ;
    MEM32(esi) = 5;
    MEM32(edi) = 0xA50;
    MEM32(eax) = 0xA81;
    MEM32(esi + 4) = 6;
    MEM32(edi + 4) = 0xA51;
    MEM32(eax + 4) = 0xA82;
    MEM32(esi + 8) = 7;
    MEM32(edi + 8) = 0xA52;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x4C) = eax;
    MEM32(eax + 8) = 0xA83;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025E30: ;
    PUSH32(esp, 0xC);
    ebx = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025E39: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025E46: ;
    MEM32(ebx) = ebp;
    MEM32(edi) = 0xA4B;
    MEM32(eax) = 0xA7C;
    MEM32(ebx + 4) = 9;
    MEM32(edi + 4) = 0xA48;
    MEM32(eax + 4) = 0xA84;
    esi = 0xB;
    MEM32(ebx + 8) = esi;
    MEM32(edi + 8) = 0xA4D;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x5C) = eax;
    MEM32(eax + 8) = 0xA7E;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025E8E: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025E9B: ;
    ebp = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x84) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025EAB: ;
    MEM32(edi) = 3;
    MEM32(ebp) = 0xA4C;
    MEM32(eax) = 0xA7D;
    MEM32(edi + 4) = 9;
    MEM32(ebp + 4) = 0xA49;
    MEM32(eax + 4) = 0xA85;
    MEM32(edi + 8) = esi;
    MEM32(esp + 0x6C) = eax;
    MEM32(ebp + 8) = 0xA4E;
    PUSH32(esp, 8);
    MEM32(eax + 8) = 0xA7F;
    MEM32(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025EF7: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025F04: ;
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025F14: ;
    MEM32(edi) = 3;
    MEM32(ebp) = 0xB38;
    MEM32(eax) = 0xB38;
    ecx = 0xC62;
    MEM32(edi + 4) = esi;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x90);
    MEM32(esp + 0x84) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(esp + 0x9C) = 0x24;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025F51: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x90);
    edi = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00025F60: ;
    MEM32(edi) = 0;
    ebp = eax;
    MEM32(ebp) = 0x99B;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0x99C;
    MEM32(edi + 8) = 2;
    MEM32(ebp + 8) = 0x99D;
    MEM32(edi + 0xC) = 3;
    MEM32(ebp + 0xC) = 0x99E;
    MEM32(edi + 0x10) = 4;
    MEM32(ebp + 0x10) = 0x99F;
    MEM32(edi + 0x14) = 5;
    MEM32(ebp + 0x14) = 0x9A0;
    MEM32(edi + 0x18) = 6;
    MEM32(ebp + 0x18) = 0x9A1;
    MEM32(edi + 0x1C) = 7;
    MEM32(ebp + 0x1C) = 0x9A2;
    MEM32(edi + 0x20) = 8;
    MEM32(ebp + 0x20) = 0x9A3;
    MEM32(edi + 0x24) = 9;
    MEM32(ebp + 0x24) = 0x9A4;
    MEM32(edi + 0x28) = 0xA;
    MEM32(ebp + 0x28) = 0x9A5;
    MEM32(edi + 0x2C) = esi;
    MEM32(ebp + 0x2C) = 0x9A6;
    MEM32(edi + 0x30) = 0xC;
    MEM32(ebp + 0x30) = 0x9A7;
    MEM32(edi + 0x34) = 0xD;
    MEM32(ebp + 0x34) = 0x9A8;
    MEM32(edi + 0x38) = 0xE;
    MEM32(ebp + 0x38) = 0x9A9;
    MEM32(edi + 0x3C) = 0xF;
    MEM32(ebp + 0x3C) = 0x9AA;
    MEM32(edi + 0x40) = 0x10;
    MEM32(ebp + 0x40) = 0x9AB;
    MEM32(edi + 0x44) = 0x11;
    MEM32(ebp + 0x44) = 0x9AC;
    MEM32(edi + 0x48) = 0x12;
    MEM32(ebp + 0x48) = 0x9AD;
    MEM32(edi + 0x4C) = 0x13;
    MEM32(ebp + 0x4C) = 0x9AE;
    MEM32(edi + 0x50) = 0x14;
    MEM32(ebp + 0x50) = 0x9AF;
    MEM32(edi + 0x54) = 0x15;
    MEM32(ebp + 0x54) = 0x9B0;
    MEM32(edi + 0x58) = 0x16;
    MEM32(ebp + 0x58) = 0x9B1;
    MEM32(edi + 0x5C) = 0x17;
    MEM32(ebp + 0x5C) = 0x9B2;
    MEM32(edi + 0x60) = 0x18;
    MEM32(ebp + 0x60) = 0x9B3;
    MEM32(edi + 0x64) = 0x19;
    esp = esp + 4;
    MEM32(ebp + 0x64) = 0x9B4;
    MEM32(edi + 0x68) = 0x1A;
    MEM32(ebp + 0x68) = 0x9B5;
    MEM32(edi + 0x6C) = 0x1B;
    MEM32(ebp + 0x6C) = 0x9B6;
    MEM32(edi + 0x70) = 0x1C;
    MEM32(ebp + 0x70) = 0x9B7;
    MEM32(edi + 0x74) = 0x1D;
    MEM32(ebp + 0x74) = 0x9B8;
    MEM32(edi + 0x78) = 0x1E;
    MEM32(ebp + 0x78) = 0x9B9;
    MEM32(edi + 0x7C) = 0x1F;
    MEM32(ebp + 0x7C) = 0x9BA;
    MEM32(edi + 0x80) = 0x20;
    MEM32(ebp + 0x80) = 0x9BB;
    MEM32(edi + 0x84) = 0x21;
    MEM32(ebp + 0x84) = 0x9BC;
    MEM32(edi + 0x88) = 0x22;
    MEM32(ebp + 0x88) = 0x9BD;
    MEM32(edi + 0x8C) = 0x23;
    MEM32(ebp + 0x8C) = 0xB02;
    goto loc_0002761B;

loc_00026175: ;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x14) = 3;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026184: ;
    esi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026191: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002619E: ;
    MEM32(esi) = 4;
    MEM32(edi) = 0xA53;
    MEM32(eax) = 0xA89;
    MEM32(esi + 4) = 9;
    MEM32(edi + 4) = 0xA59;
    MEM32(eax + 4) = 0xA8D;
    MEM32(esi + 8) = 0x1F;
    MEM32(edi + 8) = 0xA57;
    PUSH32(esp, 0x18);
    MEM32(esp + 0x38) = eax;
    MEM32(eax + 8) = 0xAF6;
    MEM32(esp + 0x24) = 6;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000261ED: ;
    esi = eax;
    PUSH32(esp, 0x18);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000261FA: ;
    edi = eax;
    PUSH32(esp, 0x18);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026207: ;
    MEM32(esi) = 0;
    MEM32(edi) = 0xA55;
    MEM32(eax) = 0xA8A;
    MEM32(esi + 4) = 1;
    MEM32(edi + 4) = 0xA54;
    MEM32(eax + 4) = 0xA8B;
    ebp = 2;
    MEM32(esi + 8) = ebp;
    MEM32(edi + 8) = 0xA56;
    MEM32(eax + 8) = 0xA8C;
    MEM32(esi + 0xC) = 0xF;
    MEM32(edi + 0xC) = 0xA5A;
    MEM32(eax + 0xC) = 0xA8E;
    MEM32(esi + 0x10) = 0x10;
    MEM32(edi + 0x10) = 0xA5B;
    MEM32(eax + 0x10) = 0xA8F;
    MEM32(esi + 0x14) = 0x40;
    MEM32(edi + 0x14) = 0xA5C;
    PUSH32(esp, 8);
    MEM32(esp + 0x4C) = eax;
    MEM32(eax + 0x14) = 0xA90;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026292: ;
    PUSH32(esp, 8);
    ebx = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002629B: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000262A8: ;
    esi = 0xB;
    MEM32(ebx) = esi;
    MEM32(edi) = 0xA5F;
    MEM32(eax) = 0xA87;
    MEM32(ebx + 4) = 1;
    MEM32(edi + 4) = 0xD89;
    PUSH32(esp, 8);
    MEM32(esp + 0x5C) = eax;
    MEM32(eax + 4) = 0xD8F;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000262DF: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000262EC: ;
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x84) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000262FC: ;
    MEM32(edi) = esi;
    MEM32(ebp) = 0xA60;
    MEM32(eax) = 0xA88;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0xD8A;
    PUSH32(esp, 8);
    MEM32(esp + 0x70) = eax;
    MEM32(eax + 4) = 0xD90;
    MEM32(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026333: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026340: ;
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026350: ;
    MEM32(edi) = esi;
    ecx = 0xC62;
    MEM32(ebp) = ecx;
    MEM32(eax) = ecx;
    ecx = 0xCA9;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x90);
    MEM32(esp + 0x84) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(esp + 0x9C) = 0x24;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002638A: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x90);
    edi = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026399: ;
    MEM32(edi) = 0;
    ebp = eax;
    MEM32(ebp) = 0x955;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0x956;
    MEM32(edi + 8) = 2;
    MEM32(ebp + 8) = 0x957;
    MEM32(edi + 0xC) = 3;
    MEM32(ebp + 0xC) = 0x958;
    MEM32(edi + 0x10) = 4;
    MEM32(ebp + 0x10) = 0x959;
    MEM32(edi + 0x14) = 5;
    MEM32(ebp + 0x14) = 0x95A;
    MEM32(edi + 0x18) = 6;
    MEM32(ebp + 0x18) = 0x95B;
    MEM32(edi + 0x1C) = 7;
    MEM32(ebp + 0x1C) = 0x95C;
    MEM32(edi + 0x20) = 8;
    MEM32(ebp + 0x20) = 0x95D;
    MEM32(edi + 0x24) = 9;
    MEM32(ebp + 0x24) = 0x95E;
    MEM32(edi + 0x28) = 0xA;
    MEM32(ebp + 0x28) = 0x95F;
    MEM32(edi + 0x2C) = esi;
    MEM32(ebp + 0x2C) = 0x960;
    MEM32(edi + 0x30) = 0xC;
    MEM32(ebp + 0x30) = 0x961;
    MEM32(edi + 0x34) = 0xD;
    MEM32(ebp + 0x34) = 0x962;
    MEM32(edi + 0x38) = 0xE;
    MEM32(ebp + 0x38) = 0x963;
    MEM32(edi + 0x3C) = 0xF;
    MEM32(ebp + 0x3C) = 0x964;
    MEM32(edi + 0x40) = 0x10;
    MEM32(ebp + 0x40) = 0x965;
    MEM32(edi + 0x44) = 0x11;
    MEM32(ebp + 0x44) = 0x966;
    MEM32(edi + 0x48) = 0x12;
    MEM32(ebp + 0x48) = 0x967;
    MEM32(edi + 0x4C) = 0x13;
    MEM32(ebp + 0x4C) = 0x968;
    MEM32(edi + 0x50) = 0x14;
    MEM32(ebp + 0x50) = 0x969;
    MEM32(edi + 0x54) = 0x15;
    MEM32(ebp + 0x54) = 0x96A;
    esp = esp + 4;
    MEM32(edi + 0x58) = 0x16;
    MEM32(ebp + 0x58) = 0x96B;
    MEM32(edi + 0x5C) = 0x17;
    MEM32(ebp + 0x5C) = 0x96C;
    MEM32(edi + 0x60) = 0x18;
    MEM32(ebp + 0x60) = 0x96D;
    MEM32(edi + 0x64) = 0x19;
    MEM32(ebp + 0x64) = 0x96E;
    MEM32(edi + 0x68) = 0x1A;
    MEM32(ebp + 0x68) = 0x96F;
    MEM32(edi + 0x6C) = 0x1B;
    MEM32(ebp + 0x6C) = 0x970;
    MEM32(edi + 0x70) = 0x1C;
    MEM32(ebp + 0x70) = 0x971;
    MEM32(edi + 0x74) = 0x1D;
    MEM32(ebp + 0x74) = 0x972;
    MEM32(edi + 0x78) = 0x1E;
    MEM32(ebp + 0x78) = 0x973;
    MEM32(edi + 0x7C) = 0x1F;
    MEM32(ebp + 0x7C) = 0x974;
    MEM32(edi + 0x80) = 0x20;
    MEM32(ebp + 0x80) = 0x975;
    MEM32(edi + 0x84) = 0x21;
    MEM32(ebp + 0x84) = 0x976;
    MEM32(edi + 0x88) = 0x22;
    MEM32(ebp + 0x88) = 0x977;
    MEM32(edi + 0x8C) = 0x23;
    MEM32(ebp + 0x8C) = 0xB01;
    goto loc_0002761B;

loc_000265AE: ;
    ebp = 3;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000265BE: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000265CB: ;
    ebx = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x54) = ebx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000265D8: ;
    esi = 0xB;
    MEM32(edi) = esi;
    MEM32(ebx) = 0xB5E;
    MEM32(eax) = 0xB62;
    MEM32(edi + 4) = 0x1F;
    MEM32(ebx + 4) = 0xA5D;
    MEM32(eax + 4) = 0xA93;
    MEM32(edi + 8) = 0x2D;
    MEM32(ebx + 8) = 0xB61;
    PUSH32(esp, 8);
    MEM32(esp + 0x38) = eax;
    MEM32(eax + 8) = 0xB65;
    MEM32(esp + 0x24) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026628: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x40) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026635: ;
    ebx = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026642: ;
    MEM32(edi) = 0x14;
    MEM32(ebx) = 0xB5F;
    MEM32(eax) = 0xB63;
    MEM32(edi + 4) = 0x15;
    MEM32(ebx + 4) = 0xB60;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x4C) = eax;
    MEM32(eax + 4) = 0xB64;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026678: ;
    PUSH32(esp, 0xC);
    ebx = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026681: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002668E: ;
    MEM32(ebx) = esi;
    MEM32(edi) = 0xA61;
    MEM32(eax) = 0xA91;
    MEM32(ebx + 4) = 8;
    MEM32(edi + 4) = 0xD8B;
    MEM32(eax + 4) = 0xD91;
    MEM32(ebx + 8) = 1;
    MEM32(edi + 8) = 0xD8D;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x5C) = eax;
    MEM32(eax + 8) = 0xD93;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000266D5: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000266E2: ;
    ebp = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x84) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000266F2: ;
    MEM32(edi) = esi;
    MEM32(ebp) = 0xA62;
    MEM32(eax) = 0xA92;
    MEM32(edi + 4) = 8;
    MEM32(ebp + 4) = 0xD8C;
    MEM32(eax + 4) = 0xD92;
    MEM32(edi + 8) = 1;
    MEM32(esp + 0x6C) = eax;
    MEM32(ebp + 8) = 0xD8E;
    PUSH32(esp, 8);
    MEM32(eax + 8) = 0xD94;
    MEM32(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002673E: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002674B: ;
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002675B: ;
    MEM32(edi) = esi;
    ecx = 0xC62;
    MEM32(ebp) = ecx;
    MEM32(eax) = ecx;
    ecx = 0xCA9;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x90);
    MEM32(esp + 0x84) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(esp + 0x9C) = 0x24;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026795: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x90);
    edi = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000267A4: ;
    MEM32(edi) = 0;
    ebp = eax;
    MEM32(ebp) = 0xA04;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0xA05;
    MEM32(edi + 8) = 2;
    MEM32(ebp + 8) = 0xA06;
    MEM32(edi + 0xC) = 3;
    MEM32(ebp + 0xC) = 0xA07;
    MEM32(edi + 0x10) = 4;
    MEM32(ebp + 0x10) = 0xA08;
    MEM32(edi + 0x14) = 5;
    MEM32(ebp + 0x14) = 0xA09;
    MEM32(edi + 0x18) = 6;
    MEM32(ebp + 0x18) = 0xA0A;
    MEM32(edi + 0x1C) = 7;
    MEM32(ebp + 0x1C) = 0xA0B;
    MEM32(edi + 0x20) = 8;
    MEM32(ebp + 0x20) = 0xA0C;
    MEM32(edi + 0x24) = 9;
    MEM32(ebp + 0x24) = 0xA0D;
    MEM32(edi + 0x28) = 0xA;
    MEM32(ebp + 0x28) = 0xA0E;
    MEM32(edi + 0x2C) = esi;
    MEM32(ebp + 0x2C) = 0xA0F;
    MEM32(edi + 0x30) = 0xC;
    MEM32(ebp + 0x30) = 0xA10;
    MEM32(edi + 0x34) = 0xD;
    MEM32(ebp + 0x34) = 0xA11;
    MEM32(edi + 0x38) = 0xE;
    MEM32(ebp + 0x38) = 0xA12;
    MEM32(edi + 0x3C) = 0xF;
    MEM32(ebp + 0x3C) = 0xA13;
    MEM32(edi + 0x40) = 0x10;
    MEM32(ebp + 0x40) = 0xA14;
    MEM32(edi + 0x44) = 0x11;
    MEM32(ebp + 0x44) = 0xA15;
    MEM32(edi + 0x48) = 0x12;
    MEM32(ebp + 0x48) = 0xA16;
    MEM32(edi + 0x4C) = 0x13;
    MEM32(ebp + 0x4C) = 0xA17;
    MEM32(edi + 0x50) = 0x14;
    MEM32(ebp + 0x50) = 0xA18;
    MEM32(edi + 0x54) = 0x15;
    MEM32(ebp + 0x54) = 0xA19;
    MEM32(edi + 0x58) = 0x16;
    MEM32(ebp + 0x58) = 0xA1A;
    MEM32(edi + 0x5C) = 0x17;
    MEM32(ebp + 0x5C) = 0xA1B;
    MEM32(edi + 0x60) = 0x18;
    MEM32(ebp + 0x60) = 0xA1C;
    esp = esp + 4;
    MEM32(edi + 0x64) = 0x19;
    MEM32(ebp + 0x64) = 0xA1D;
    MEM32(edi + 0x68) = 0x1A;
    MEM32(ebp + 0x68) = 0xA1E;
    MEM32(edi + 0x6C) = 0x1B;
    MEM32(ebp + 0x6C) = 0xA1F;
    MEM32(edi + 0x70) = 0x1C;
    MEM32(ebp + 0x70) = 0xA20;
    MEM32(edi + 0x74) = 0x1D;
    MEM32(ebp + 0x74) = 0xA21;
    MEM32(edi + 0x78) = 0x1E;
    MEM32(ebp + 0x78) = 0xA22;
    MEM32(edi + 0x7C) = 0x1F;
    MEM32(ebp + 0x7C) = 0xA23;
    MEM32(edi + 0x80) = 0x20;
    MEM32(ebp + 0x80) = 0xA24;
    MEM32(edi + 0x84) = 0x21;
    MEM32(ebp + 0x84) = 0xA25;
    MEM32(edi + 0x88) = 0x22;
    MEM32(ebp + 0x88) = 0xA26;
    MEM32(edi + 0x8C) = 0x23;
    MEM32(ebp + 0x8C) = 0xB03;
    goto loc_0002761B;

loc_000269B9: ;
    ebp = 4;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000269CC: ;
    esi = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000269D8: ;
    edi = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000269E4: ;
    MEM32(esi) = 1;
    MEM32(edi) = 0xA77;
    PUSH32(esp, 8);
    MEM32(esp + 0x38) = eax;
    MEM32(eax) = 0xA97;
    MEM32(esp + 0x24) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026A09: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x40) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026A16: ;
    ebx = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026A23: ;
    MEM32(edi) = 0xA;
    MEM32(ebx) = 0xA78;
    MEM32(eax) = 0xA98;
    esi = 0xB;
    MEM32(edi + 4) = esi;
    MEM32(ebx + 4) = 0xA79;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x4C) = eax;
    MEM32(eax + 4) = 0xA99;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026A5A: ;
    PUSH32(esp, 0x10);
    ebx = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026A63: ;
    edi = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026A70: ;
    MEM32(ebx) = 1;
    MEM32(edi) = 0xA73;
    MEM32(eax) = 0xAE6;
    MEM32(ebx + 4) = 8;
    MEM32(edi + 4) = 0xADA;
    MEM32(eax + 4) = 0xAE0;
    MEM32(ebx + 8) = 9;
    MEM32(edi + 8) = 0xA7A;
    MEM32(eax + 8) = 0xAE8;
    MEM32(ebx + 0xC) = esi;
    MEM32(edi + 0xC) = 0xA75;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x5C) = eax;
    MEM32(eax + 0xC) = 0xA95;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026ACC: ;
    edi = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026AD9: ;
    ebp = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x84) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026AE9: ;
    MEM32(edi) = 1;
    MEM32(ebp) = 0xA74;
    MEM32(eax) = 0xAE7;
    MEM32(edi + 4) = 8;
    MEM32(ebp + 4) = 0xADB;
    MEM32(eax + 4) = 0xAE1;
    MEM32(edi + 8) = 9;
    MEM32(ebp + 8) = 0xA7B;
    MEM32(eax + 8) = 0xAE9;
    MEM32(edi + 0xC) = esi;
    MEM32(esp + 0x6C) = eax;
    MEM32(ebp + 0xC) = 0xA76;
    PUSH32(esp, 8);
    MEM32(eax + 0xC) = 0xA96;
    MEM32(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026B4A: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026B57: ;
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026B67: ;
    MEM32(edi) = 1;
    MEM32(ebp) = 0xB5D;
    MEM32(eax) = 0xB5D;
    ecx = 0xC62;
    MEM32(edi + 4) = esi;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x90);
    MEM32(esp + 0x84) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(esp + 0x9C) = 0x24;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026BA4: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x90);
    edi = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026BB3: ;
    MEM32(edi) = 0;
    ebp = eax;
    MEM32(ebp) = 0x9E1;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0x9E2;
    MEM32(edi + 8) = 2;
    MEM32(ebp + 8) = 0x9E3;
    MEM32(edi + 0xC) = 3;
    MEM32(ebp + 0xC) = 0x9E4;
    MEM32(edi + 0x10) = 4;
    MEM32(ebp + 0x10) = 0x9E5;
    MEM32(edi + 0x14) = 5;
    MEM32(ebp + 0x14) = 0x9E6;
    MEM32(edi + 0x18) = 6;
    MEM32(ebp + 0x18) = 0x9E7;
    MEM32(edi + 0x1C) = 7;
    MEM32(ebp + 0x1C) = 0x9E8;
    MEM32(edi + 0x20) = 8;
    MEM32(ebp + 0x20) = 0x9E9;
    MEM32(edi + 0x24) = 9;
    MEM32(ebp + 0x24) = 0x9EA;
    MEM32(edi + 0x28) = 0xA;
    MEM32(ebp + 0x28) = 0x9EB;
    MEM32(edi + 0x2C) = esi;
    MEM32(ebp + 0x2C) = 0x9EC;
    MEM32(edi + 0x30) = 0xC;
    MEM32(ebp + 0x30) = 0x9ED;
    MEM32(edi + 0x34) = 0xD;
    MEM32(ebp + 0x34) = 0x9EE;
    MEM32(edi + 0x38) = 0xE;
    MEM32(ebp + 0x38) = 0x9EF;
    MEM32(edi + 0x3C) = 0xF;
    MEM32(ebp + 0x3C) = 0x9F0;
    MEM32(edi + 0x40) = 0x10;
    MEM32(ebp + 0x40) = 0x9F1;
    MEM32(edi + 0x44) = 0x11;
    MEM32(ebp + 0x44) = 0x9F2;
    MEM32(edi + 0x48) = 0x12;
    MEM32(ebp + 0x48) = 0x9F3;
    MEM32(edi + 0x4C) = 0x13;
    MEM32(ebp + 0x4C) = 0x9F4;
    MEM32(edi + 0x50) = 0x14;
    MEM32(ebp + 0x50) = 0x9F5;
    MEM32(edi + 0x54) = 0x15;
    MEM32(ebp + 0x54) = 0x9F6;
    MEM32(edi + 0x58) = 0x16;
    MEM32(ebp + 0x58) = 0x9F7;
    MEM32(edi + 0x5C) = 0x17;
    MEM32(ebp + 0x5C) = 0x9F8;
    MEM32(edi + 0x60) = 0x18;
    MEM32(ebp + 0x60) = 0x9F9;
    MEM32(edi + 0x64) = 0x19;
    esp = esp + 4;
    MEM32(ebp + 0x64) = 0x9FA;
    MEM32(edi + 0x68) = 0x1A;
    MEM32(ebp + 0x68) = 0x9FB;
    MEM32(edi + 0x6C) = 0x1B;
    MEM32(ebp + 0x6C) = 0x9FC;
    MEM32(edi + 0x70) = 0x1C;
    MEM32(ebp + 0x70) = 0x9FD;
    MEM32(edi + 0x74) = 0x1D;
    MEM32(ebp + 0x74) = 0x9FE;
    MEM32(edi + 0x78) = 0x1E;
    MEM32(ebp + 0x78) = 0x9FF;
    MEM32(edi + 0x7C) = 0x1F;
    MEM32(ebp + 0x7C) = 0xA00;
    MEM32(edi + 0x80) = 0x20;
    MEM32(ebp + 0x80) = 0xA01;
    MEM32(edi + 0x84) = 0x21;
    MEM32(ebp + 0x84) = 0xA02;
    MEM32(edi + 0x88) = 0x22;
    MEM32(ebp + 0x88) = 0xA03;
    MEM32(edi + 0x8C) = 0x23;
    MEM32(ebp + 0x8C) = 0xB04;
    goto loc_0002761B;

loc_00026DC8: ;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x14) = 3;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026DD7: ;
    esi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026DE4: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026DF1: ;
    MEM32(esi) = 5;
    MEM32(edi) = 0xA65;
    MEM32(eax) = 0xA9E;
    MEM32(esi + 4) = 0xA;
    MEM32(edi + 4) = 0xA68;
    MEM32(eax + 4) = 0xAA1;
    MEM32(esi + 8) = 0x42;
    MEM32(edi + 8) = 0xC90;
    ebp = 4;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x38) = eax;
    MEM32(eax + 8) = 0xC92;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026E41: ;
    esi = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026E4E: ;
    edi = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026E5B: ;
    MEM32(esi) = 8;
    MEM32(edi) = 0xA66;
    MEM32(eax) = 0xA9F;
    MEM32(esi + 4) = 9;
    MEM32(edi + 4) = 0xA67;
    MEM32(eax + 4) = 0xAA0;
    MEM32(esi + 8) = 0x12;
    MEM32(edi + 8) = 0xA69;
    MEM32(eax + 8) = 0xAA2;
    MEM32(esi + 0xC) = 0x13;
    MEM32(edi + 0xC) = 0xA6A;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x4C) = eax;
    MEM32(eax + 0xC) = 0xAA3;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026EBB: ;
    PUSH32(esp, 0x10);
    ebx = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026EC4: ;
    edi = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026ED1: ;
    MEM32(ebx) = ebp;
    MEM32(edi) = 0xADC;
    MEM32(eax) = 0xAE2;
    MEM32(ebx + 4) = 5;
    MEM32(edi + 4) = 0xADE;
    MEM32(eax + 4) = 0xAE4;
    MEM32(ebx + 8) = 6;
    MEM32(edi + 8) = 0xA63;
    MEM32(eax + 8) = 0xA9A;
    esi = 0xB;
    MEM32(ebx + 0xC) = esi;
    MEM32(edi + 0xC) = 0xA6B;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x5C) = eax;
    MEM32(eax + 0xC) = 0xA9C;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026F2E: ;
    edi = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026F3B: ;
    ebp = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x84) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026F4B: ;
    MEM32(edi) = 4;
    MEM32(ebp) = 0xADD;
    MEM32(eax) = 0xAE3;
    MEM32(edi + 4) = 5;
    MEM32(ebp + 4) = 0xADF;
    MEM32(eax + 4) = 0xAE5;
    MEM32(edi + 8) = 6;
    MEM32(ebp + 8) = 0xA64;
    MEM32(eax + 8) = 0xA9B;
    MEM32(edi + 0xC) = esi;
    MEM32(ebp + 0xC) = 0xA6C;
    PUSH32(esp, 4);
    MEM32(esp + 0x70) = eax;
    MEM32(eax + 0xC) = 0xA9D;
    MEM32(esp + 0x54) = 1;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026FAC: ;
    edi = eax;
    PUSH32(esp, 4);
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026FB9: ;
    ebp = eax;
    PUSH32(esp, 4);
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026FC9: ;
    ecx = 0xC62;
    MEM32(edi) = esi;
    MEM32(ebp) = ecx;
    PUSH32(esp, 0x90);
    MEM32(esp + 0x84) = eax;
    MEM32(eax) = ecx;
    MEM32(esp + 0x9C) = 0x24;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00026FF1: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x90);
    edi = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027000: ;
    MEM32(edi) = 0;
    ebp = eax;
    MEM32(ebp) = 0x9BE;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0x9BF;
    MEM32(edi + 8) = 2;
    MEM32(ebp + 8) = 0x9C0;
    MEM32(edi + 0xC) = 3;
    MEM32(ebp + 0xC) = 0x9C1;
    MEM32(edi + 0x10) = 4;
    MEM32(ebp + 0x10) = 0x9C2;
    MEM32(edi + 0x14) = 5;
    MEM32(ebp + 0x14) = 0x9C3;
    MEM32(edi + 0x18) = 6;
    MEM32(ebp + 0x18) = 0x9C4;
    MEM32(edi + 0x1C) = 7;
    MEM32(ebp + 0x1C) = 0x9C5;
    MEM32(edi + 0x20) = 8;
    MEM32(ebp + 0x20) = 0x9C6;
    MEM32(edi + 0x24) = 9;
    MEM32(ebp + 0x24) = 0x9C7;
    MEM32(edi + 0x28) = 0xA;
    MEM32(ebp + 0x28) = 0x9C8;
    MEM32(edi + 0x2C) = esi;
    MEM32(ebp + 0x2C) = 0x9C9;
    MEM32(edi + 0x30) = 0xC;
    MEM32(ebp + 0x30) = 0x9CA;
    MEM32(edi + 0x34) = 0xD;
    MEM32(ebp + 0x34) = 0x9CB;
    MEM32(edi + 0x38) = 0xE;
    MEM32(ebp + 0x38) = 0x9CC;
    MEM32(edi + 0x3C) = 0xF;
    MEM32(ebp + 0x3C) = 0x9CD;
    MEM32(edi + 0x40) = 0x10;
    MEM32(ebp + 0x40) = 0x9CE;
    MEM32(edi + 0x44) = 0x11;
    MEM32(ebp + 0x44) = 0x9CF;
    MEM32(edi + 0x48) = 0x12;
    MEM32(ebp + 0x48) = 0x9D0;
    MEM32(edi + 0x4C) = 0x13;
    MEM32(ebp + 0x4C) = 0x9D1;
    MEM32(edi + 0x50) = 0x14;
    MEM32(ebp + 0x50) = 0x9D2;
    esp = esp + 4;
    MEM32(edi + 0x54) = 0x15;
    MEM32(ebp + 0x54) = 0x9D3;
    MEM32(edi + 0x58) = 0x16;
    MEM32(ebp + 0x58) = 0x9D4;
    MEM32(edi + 0x5C) = 0x17;
    MEM32(ebp + 0x5C) = 0x9D5;
    MEM32(edi + 0x60) = 0x18;
    MEM32(ebp + 0x60) = 0x9D6;
    MEM32(edi + 0x64) = 0x19;
    MEM32(ebp + 0x64) = 0x9D7;
    MEM32(edi + 0x68) = 0x1A;
    MEM32(ebp + 0x68) = 0x9D8;
    MEM32(edi + 0x6C) = 0x1B;
    MEM32(ebp + 0x6C) = 0x9D9;
    MEM32(edi + 0x70) = 0x1C;
    MEM32(ebp + 0x70) = 0x9DA;
    MEM32(edi + 0x74) = 0x1D;
    MEM32(ebp + 0x74) = 0x9DB;
    MEM32(edi + 0x78) = 0x1E;
    MEM32(ebp + 0x78) = 0x9DC;
    MEM32(edi + 0x7C) = 0x1F;
    MEM32(ebp + 0x7C) = 0x9DD;
    MEM32(edi + 0x80) = 0x20;
    MEM32(ebp + 0x80) = 0x9DE;
    MEM32(edi + 0x84) = 0x21;
    MEM32(ebp + 0x84) = 0x9DF;
    MEM32(edi + 0x88) = 0x22;
    MEM32(ebp + 0x88) = 0x9E0;
    MEM32(edi + 0x8C) = 0x23;
    MEM32(ebp + 0x8C) = 0xB05;
    goto loc_0002761B;

loc_00027215: ;
    ebp = 3;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027225: ;
    esi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027232: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002723F: ;
    MEM32(esi) = 1;
    MEM32(edi) = 0xA72;
    MEM32(eax) = 0xAA9;
    ecx = 2;
    MEM32(esi + 4) = ecx;
    MEM32(edi + 4) = 0xA6D;
    MEM32(eax + 4) = 0xAA6;
    MEM32(esi + 8) = 0x1F;
    MEM32(edi + 8) = 0xAF2;
    PUSH32(esp, 8);
    MEM32(eax + 8) = 0xAF4;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002728B: ;
    esi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x40) = esi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027298: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000272A5: ;
    MEM32(esi) = ebp;
    MEM32(edi) = 0xA6E;
    MEM32(eax) = 0xAA7;
    MEM32(esi + 4) = 4;
    MEM32(edi + 4) = 0xA6F;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x4C) = eax;
    MEM32(eax + 4) = 0xAA8;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000272D7: ;
    PUSH32(esp, 0xC);
    ebx = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000272E0: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x74) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000272ED: ;
    MEM32(ebx) = 1;
    MEM32(edi) = 0xAEC;
    MEM32(eax) = 0xAF0;
    MEM32(ebx + 4) = 8;
    MEM32(edi + 4) = 0xAEA;
    MEM32(eax + 4) = 0xAEE;
    esi = 0xB;
    MEM32(ebx + 8) = esi;
    MEM32(edi + 8) = 0xA70;
    PUSH32(esp, 0xC);
    MEM32(eax + 8) = 0xAA4;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027339: ;
    edi = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x64) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027346: ;
    ebp = eax;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x84) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00027356: ;
    MEM32(edi) = 1;
    MEM32(ebp) = 0xAED;
    MEM32(eax) = 0xAF1;
    MEM32(edi + 4) = 8;
    MEM32(ebp + 4) = 0xAEB;
    MEM32(eax + 4) = 0xAEF;
    MEM32(edi + 8) = esi;
    MEM32(ebp + 8) = 0xA71;
    PUSH32(esp, 8);
    MEM32(eax + 8) = 0xAA5;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000273A2: ;
    edi = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000273AF: ;
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000273BF: ;
    MEM32(edi) = 1;
    MEM32(ebp) = 0xB5D;
    MEM32(eax) = 0xB5D;
    ecx = 0xC62;
    MEM32(edi + 4) = esi;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, 0x90);
    MEM32(esp + 0x84) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(esp + 0x9C) = 0x24;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000273FC: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x90);
    edi = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002740B: ;
    MEM32(edi) = 0;
    ebp = eax;
    MEM32(ebp) = 0x978;
    MEM32(edi + 4) = 1;
    MEM32(ebp + 4) = 0x979;
    MEM32(edi + 8) = 2;
    MEM32(ebp + 8) = 0x97A;
    MEM32(edi + 0xC) = 3;
    MEM32(ebp + 0xC) = 0x97B;
    MEM32(edi + 0x10) = 4;
    MEM32(ebp + 0x10) = 0x97C;
    MEM32(edi + 0x14) = 5;
    MEM32(ebp + 0x14) = 0x97D;
    MEM32(edi + 0x18) = 6;
    MEM32(ebp + 0x18) = 0x97E;
    MEM32(edi + 0x1C) = 7;
    MEM32(ebp + 0x1C) = 0x97F;
    MEM32(edi + 0x20) = 8;
    MEM32(ebp + 0x20) = 0x980;
    MEM32(edi + 0x24) = 9;
    MEM32(ebp + 0x24) = 0x981;
    MEM32(edi + 0x28) = 0xA;
    MEM32(ebp + 0x28) = 0x982;
    MEM32(edi + 0x2C) = esi;
    MEM32(ebp + 0x2C) = 0x983;
    MEM32(edi + 0x30) = 0xC;
    MEM32(ebp + 0x30) = 0x984;
    MEM32(edi + 0x34) = 0xD;
    MEM32(ebp + 0x34) = 0x985;
    MEM32(edi + 0x38) = 0xE;
    MEM32(ebp + 0x38) = 0x986;
    MEM32(edi + 0x3C) = 0xF;
    MEM32(ebp + 0x3C) = 0x987;
    MEM32(edi + 0x40) = 0x10;
    MEM32(ebp + 0x40) = 0x988;
    MEM32(edi + 0x44) = 0x11;
    MEM32(ebp + 0x44) = 0x989;
    MEM32(edi + 0x48) = 0x12;
    MEM32(ebp + 0x48) = 0x98A;
    MEM32(edi + 0x4C) = 0x13;
    MEM32(ebp + 0x4C) = 0x98B;
    MEM32(edi + 0x50) = 0x14;
    MEM32(ebp + 0x50) = 0x98C;
    MEM32(edi + 0x54) = 0x15;
    MEM32(ebp + 0x54) = 0x98D;
    MEM32(edi + 0x58) = 0x16;
    MEM32(ebp + 0x58) = 0x98E;
    MEM32(edi + 0x5C) = 0x17;
    MEM32(ebp + 0x5C) = 0x98F;
    MEM32(edi + 0x60) = 0x18;
    MEM32(ebp + 0x60) = 0x990;
    esp = esp + 4;
    MEM32(edi + 0x64) = 0x19;
    MEM32(ebp + 0x64) = 0x991;
    MEM32(edi + 0x68) = 0x1A;
    MEM32(ebp + 0x68) = 0x992;
    MEM32(edi + 0x6C) = 0x1B;
    MEM32(ebp + 0x6C) = 0x993;
    MEM32(edi + 0x70) = 0x1C;
    MEM32(ebp + 0x70) = 0x994;
    MEM32(edi + 0x74) = 0x1D;
    MEM32(ebp + 0x74) = 0x995;
    MEM32(edi + 0x78) = 0x1E;
    MEM32(ebp + 0x78) = 0x996;
    MEM32(edi + 0x7C) = 0x1F;
    MEM32(ebp + 0x7C) = 0x997;
    MEM32(edi + 0x80) = 0x20;
    MEM32(ebp + 0x80) = 0x998;
    MEM32(edi + 0x84) = 0x21;
    MEM32(ebp + 0x84) = 0x999;
    MEM32(edi + 0x88) = 0x22;
    MEM32(ebp + 0x88) = 0x99A;
    MEM32(edi + 0x8C) = 0x23;
    MEM32(ebp + 0x8C) = 0xB06;

loc_0002761B: ;
    esi = 0; /* xor self */

loc_0002761D: ;
    if (CMP_NE(MEM32(0x84A19C), esi)) goto loc_0002762A; /* jne: not equal / not zero */

loc_00027625: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0002762A: ;
    eax = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax++;
    MEM32(0x7FA494) = eax;
    eax = MEM32(0x84A190);
    edx++;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x7FA4B4) = edx;
    MEM32(esp + 0x64) = eax;
    if (CMP_EQ(eax, esi)) goto loc_00027675; /* je: equal / zero */

loc_0002764F: ;
    if (CMP_B(MEM32(eax + 0x80), 0x18)) goto loc_00027675; /* jb: below (unsigned <) */

loc_00027658: ;
    ecx = 4;
    esi = eax;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00027664: ;
    ecx = esi;
    PUSH32(esp, 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002766E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0002769E; /* jne: not equal / not zero */

loc_00027675: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    MEM32(esp + 0x64) = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00027689: ;
    edx = esi;
    PUSH32(esp, 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00027693: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0002786A; /* je: equal / zero */

loc_0002769E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00014940(); /* call 0x00014940 */

loc_000276A4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x60) = eax;
    if (TEST_NZ(eax, eax)) goto loc_000276C0; /* jne: not equal / not zero */

loc_000276AC: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000276BD: ;
    esp = esp + 0xC;

loc_000276C0: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00027702; /* jle: less or equal (signed <=) */

loc_000276C8: ;
    esi = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x48);
    eax = eax - esi;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x64) = ecx;
    /* nop */

loc_000276E0: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + esi);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00014DC0(); /* call 0x00014DC0 */

loc_000276F4: ;
    eax = MEM32(esp + 0x64);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x64) = eax;
    if ((eax != 0)) goto loc_000276E0; /* jne: not equal / not zero */

loc_00027702: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00027742; /* jle: less or equal (signed <=) */

loc_0002770A: ;
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x4C);
    eax = eax - esi;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x64) = ecx;
    /* nop */

loc_00027720: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + esi);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00014E30(); /* call 0x00014E30 */

loc_00027734: ;
    eax = MEM32(esp + 0x64);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x64) = eax;
    if ((eax != 0)) goto loc_00027720; /* jne: not equal / not zero */

loc_00027742: ;
    ecx = MEM32(esp + 0x18);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00027782; /* jle: less or equal (signed <=) */

loc_0002774A: ;
    eax = MEM32(esp + 0x50);
    eax = eax - ebx;
    esi = ebx;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x64) = ecx;
    /* nop */

loc_00027760: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + esi);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00014EB0(); /* call 0x00014EB0 */

loc_00027774: ;
    eax = MEM32(esp + 0x64);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x64) = eax;
    if ((eax != 0)) goto loc_00027760; /* jne: not equal / not zero */

loc_00027782: ;
    ecx = MEM32(esp + 0x1C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_000277C2; /* jle: less or equal (signed <=) */

loc_0002778A: ;
    esi = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x54);
    eax = eax - esi;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x64) = ecx;
    /* nop */

loc_000277A0: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + esi);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00014F30(); /* call 0x00014F30 */

loc_000277B4: ;
    eax = MEM32(esp + 0x64);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x64) = eax;
    if ((eax != 0)) goto loc_000277A0; /* jne: not equal / not zero */

loc_000277C2: ;
    ecx = MEM32(esp + 0x20);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00027802; /* jle: less or equal (signed <=) */

loc_000277CA: ;
    esi = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x58);
    eax = eax - esi;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x64) = ecx;
    /* nop */

loc_000277E0: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + esi);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00014FB0(); /* call 0x00014FB0 */

loc_000277F4: ;
    eax = MEM32(esp + 0x64);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x64) = eax;
    if ((eax != 0)) goto loc_000277E0; /* jne: not equal / not zero */

loc_00027802: ;
    ecx = MEM32(esp + 0x5C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00027842; /* jle: less or equal (signed <=) */

loc_0002780A: ;
    eax = ebp;
    eax = eax - edi;
    esi = edi;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x64) = ecx;
    goto loc_00027820;

    /* nop */

loc_00027820: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax + esi);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00015030(); /* call 0x00015030 */

loc_00027834: ;
    eax = MEM32(esp + 0x64);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x64) = eax;
    if ((eax != 0)) goto loc_00027820; /* jne: not equal / not zero */

loc_00027842: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    esi = MEM32(esp + 0x7C);
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00027881; /* jne: not equal / not zero */

loc_00027859: ;
    /* nop */

loc_00027860: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_00027877; /* jge: greater or equal (signed >=) */

loc_00027865: ;
    eax = MEM32(eax + 8);
    goto loc_0002787B;

loc_0002786A: ;
    MEM32(esp + 0x60) = 0;
    goto loc_000276AC;

loc_00027877: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002787B: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00027860; /* je: equal / zero */

loc_00027881: ;
    eax = MEM32(ecx + 4);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x6C) = edx;
    if (CMP_EQ(edx, eax)) { sub_00027897(); return; } /* je: equal / zero */

loc_0002788C: ;
    if (CMP_L(esi, MEM32(edx + 0xC))) { sub_00027897(); return; } /* jl: less (signed <) */

loc_00027891: ;
    eax = esp + 0x6C;
    g_seh_ebp = ebp; sub_0002789F(); return; /* tail jmp 0x0002789F */

}

/**
 * sub_00027D50
 * Original: 0x00027D50 - 0x00027D93 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027D50: ;
    PUSH32(esp, ecx);
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    if ((eax == 0)) goto loc_00027D8E; /* je: equal / zero */

loc_00027D5C: ;
    eax--;
    if ((eax != 0)) { sub_00027D93(); return; } /* jne: not equal / not zero */

loc_00027D5F: ;
    ebp = MEM32(ecx + 0x1C);

loc_00027D62: ;
    edi = esp + 0x18;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_0002ACF0(); /* call 0x0002ACF0 */

loc_00027D71: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(ebp + 4))) { sub_00027D93(); return; } /* je: equal / zero */

loc_00027D7A: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_00027D93(); return; } /* je: equal / zero */

loc_00027D81: ;
    PUSH32(esp, 0); sub_000150B0(); /* call 0x000150B0 */

loc_00027D86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00027D8E: ;
    ebp = MEM32(ecx + 0x18);
    goto loc_00027D62;

}

/**
 * sub_00027DA0
 * Original: 0x00027DA0 - 0x00027DE3 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027DA0: ;
    PUSH32(esp, ecx);
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    if ((eax == 0)) goto loc_00027DDE; /* je: equal / zero */

loc_00027DAC: ;
    eax--;
    if ((eax != 0)) { sub_00027DE3(); return; } /* jne: not equal / not zero */

loc_00027DAF: ;
    ebp = MEM32(ecx + 0x1C);

loc_00027DB2: ;
    edi = esp + 0x18;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_0002ACF0(); /* call 0x0002ACF0 */

loc_00027DC1: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(ebp + 4))) { sub_00027DE3(); return; } /* je: equal / zero */

loc_00027DCA: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_00027DE3(); return; } /* je: equal / zero */

loc_00027DD1: ;
    PUSH32(esp, 0); sub_00015110(); /* call 0x00015110 */

loc_00027DD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00027DDE: ;
    ebp = MEM32(ecx + 0x18);
    goto loc_00027DB2;

}

/**
 * sub_00027DF0
 * Original: 0x00027DF0 - 0x00027E33 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027DF0: ;
    PUSH32(esp, ecx);
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    if ((eax == 0)) goto loc_00027E2E; /* je: equal / zero */

loc_00027DFC: ;
    eax--;
    if ((eax != 0)) { sub_00027E33(); return; } /* jne: not equal / not zero */

loc_00027DFF: ;
    ebp = MEM32(ecx + 0x1C);

loc_00027E02: ;
    edi = esp + 0x18;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_0002ACF0(); /* call 0x0002ACF0 */

loc_00027E11: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(ebp + 4))) { sub_00027E33(); return; } /* je: equal / zero */

loc_00027E1A: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_00027E33(); return; } /* je: equal / zero */

loc_00027E21: ;
    PUSH32(esp, 0); sub_00015170(); /* call 0x00015170 */

loc_00027E26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00027E2E: ;
    ebp = MEM32(ecx + 0x18);
    goto loc_00027E02;

}

/**
 * sub_00027E40
 * Original: 0x00027E40 - 0x00027E83 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027E40: ;
    PUSH32(esp, ecx);
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    if ((eax == 0)) goto loc_00027E7E; /* je: equal / zero */

loc_00027E4C: ;
    eax--;
    if ((eax != 0)) { sub_00027E83(); return; } /* jne: not equal / not zero */

loc_00027E4F: ;
    ebp = MEM32(ecx + 0x1C);

loc_00027E52: ;
    edi = esp + 0x18;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_0002ACF0(); /* call 0x0002ACF0 */

loc_00027E61: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(ebp + 4))) { sub_00027E83(); return; } /* je: equal / zero */

loc_00027E6A: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_00027E83(); return; } /* je: equal / zero */

loc_00027E71: ;
    PUSH32(esp, 0); sub_000151D0(); /* call 0x000151D0 */

loc_00027E76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00027E7E: ;
    ebp = MEM32(ecx + 0x18);
    goto loc_00027E52;

}

/**
 * sub_00027E90
 * Original: 0x00027E90 - 0x00027ED3 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027E90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027E90: ;
    PUSH32(esp, ecx);
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    if ((eax == 0)) goto loc_00027ECE; /* je: equal / zero */

loc_00027E9C: ;
    eax--;
    if ((eax != 0)) { sub_00027ED3(); return; } /* jne: not equal / not zero */

loc_00027E9F: ;
    ebp = MEM32(ecx + 0x1C);

loc_00027EA2: ;
    edi = esp + 0x18;
    ebx = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_0002ACF0(); /* call 0x0002ACF0 */

loc_00027EB1: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(ebp + 4))) { sub_00027ED3(); return; } /* je: equal / zero */

loc_00027EBA: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_00027ED3(); return; } /* je: equal / zero */

loc_00027EC1: ;
    PUSH32(esp, 0); sub_00015230(); /* call 0x00015230 */

loc_00027EC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00027ECE: ;
    ebp = MEM32(ecx + 0x18);
    goto loc_00027EA2;

}

/**
 * sub_00027EE0
 * Original: 0x00027EE0 - 0x00027F22 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027EE0: ;
    edx = MEM32(eax + 0x18);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00027F0C; /* jne: not equal / not zero */

loc_00027EF7: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_00027F01; /* jge: greater or equal (signed >=) */

loc_00027EFC: ;
    eax = MEM32(eax + 8);
    goto loc_00027F05;

loc_00027F01: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00027F05: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00027EF7; /* je: equal / zero */

loc_00027F0C: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00027F22(); return; } /* je: equal / zero */

loc_00027F17: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_00027F22(); return; } /* jl: less (signed <) */

loc_00027F1C: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00027F2A(); return; /* tail jmp 0x00027F2A */

}

/**
 * sub_00027F60
 * Original: 0x00027F60 - 0x000288ED (2445 bytes, 789 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027F60: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00027F8D; /* jne: not equal / not zero */

loc_00027F76: ;
    esi = MEM32(eax + 0xC);
    if (CMP_GE(esi & esi, 0)) goto loc_00027F82; /* jge: greater or equal (signed >=) */

loc_00027F7D: ;
    eax = MEM32(eax + 8);
    goto loc_00027F86;

loc_00027F82: ;
    edx = eax;
    eax = MEM32(eax);

loc_00027F86: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00027F76; /* je: equal / zero */

loc_00027F8D: ;
    esi = MEM32(ecx + 4);
    ebp = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, esi)) goto loc_00027F9D; /* je: equal / zero */

loc_00027F98: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00027FB5; /* jle: less or equal (signed <=) */

loc_00027F9D: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_00027FB3: ;
    eax = MEM32(eax);

loc_00027FB5: ;
    ebx = 2;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x34) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 8;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00027FE8; /* jne: not equal / not zero */

loc_00027FD4: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00027FDE; /* jge: greater or equal (signed >=) */

loc_00027FD9: ;
    eax = MEM32(eax + 8);
    goto loc_00027FE2;

loc_00027FDE: ;
    edx = eax;
    eax = MEM32(eax);

loc_00027FE2: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00027FD4; /* je: equal / zero */

loc_00027FE8: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00027FF4; /* je: equal / zero */

loc_00027FEF: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00028010; /* jle: less or equal (signed <=) */

loc_00027FF4: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002800E: ;
    eax = MEM32(eax);

loc_00028010: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x38) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x10;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028044; /* jne: not equal / not zero */

loc_0002802A: ;
    /* nop */

loc_00028030: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002803A; /* jge: greater or equal (signed >=) */

loc_00028035: ;
    eax = MEM32(eax + 8);
    goto loc_0002803E;

loc_0002803A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002803E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028030; /* je: equal / zero */

loc_00028044: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028050; /* je: equal / zero */

loc_0002804B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002806C; /* jle: less or equal (signed <=) */

loc_00028050: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002806A: ;
    eax = MEM32(eax);

loc_0002806C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x3C) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebp = 0x18;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002809C; /* jne: not equal / not zero */

loc_00028087: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00028091; /* jge: greater or equal (signed >=) */

loc_0002808C: ;
    eax = MEM32(eax + 8);
    goto loc_00028095;

loc_00028091: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028095: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00028087; /* je: equal / zero */

loc_0002809C: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000280A8; /* je: equal / zero */

loc_000280A3: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000280C4; /* jle: less or equal (signed <=) */

loc_000280A8: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000280C2: ;
    eax = MEM32(eax);

loc_000280C4: ;
    ebx = 1;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x40) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x20;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000280F7; /* jne: not equal / not zero */

loc_000280E3: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000280ED; /* jge: greater or equal (signed >=) */

loc_000280E8: ;
    eax = MEM32(eax + 8);
    goto loc_000280F1;

loc_000280ED: ;
    edx = eax;
    eax = MEM32(eax);

loc_000280F1: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000280E3; /* je: equal / zero */

loc_000280F7: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028103; /* je: equal / zero */

loc_000280FE: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002811F; /* jle: less or equal (signed <=) */

loc_00028103: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002811D: ;
    eax = MEM32(eax);

loc_0002811F: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x44) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x88;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028154; /* jne: not equal / not zero */

loc_00028139: ;
    /* nop */

loc_00028140: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002814A; /* jge: greater or equal (signed >=) */

loc_00028145: ;
    eax = MEM32(eax + 8);
    goto loc_0002814E;

loc_0002814A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002814E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028140; /* je: equal / zero */

loc_00028154: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028160; /* je: equal / zero */

loc_0002815B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002817C; /* jle: less or equal (signed <=) */

loc_00028160: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002817A: ;
    eax = MEM32(eax);

loc_0002817C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x48) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x78;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000281AA; /* jne: not equal / not zero */

loc_00028196: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000281A0; /* jge: greater or equal (signed >=) */

loc_0002819B: ;
    eax = MEM32(eax + 8);
    goto loc_000281A4;

loc_000281A0: ;
    edx = eax;
    eax = MEM32(eax);

loc_000281A4: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028196; /* je: equal / zero */

loc_000281AA: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000281B6; /* je: equal / zero */

loc_000281B1: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000281D2; /* jle: less or equal (signed <=) */

loc_000281B6: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000281D0: ;
    eax = MEM32(eax);

loc_000281D2: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x4C) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x68;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028204; /* jne: not equal / not zero */

loc_000281EC: ;
    /* nop */

loc_000281F0: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000281FA; /* jge: greater or equal (signed >=) */

loc_000281F5: ;
    eax = MEM32(eax + 8);
    goto loc_000281FE;

loc_000281FA: ;
    edx = eax;
    eax = MEM32(eax);

loc_000281FE: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000281F0; /* je: equal / zero */

loc_00028204: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028210; /* je: equal / zero */

loc_0002820B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002822C; /* jle: less or equal (signed <=) */

loc_00028210: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002822A: ;
    eax = MEM32(eax);

loc_0002822C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x50) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x28;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_0002825A; /* jne: not equal / not zero */

loc_00028246: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00028250; /* jge: greater or equal (signed >=) */

loc_0002824B: ;
    eax = MEM32(eax + 8);
    goto loc_00028254;

loc_00028250: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028254: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028246; /* je: equal / zero */

loc_0002825A: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028266; /* je: equal / zero */

loc_00028261: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00028282; /* jle: less or equal (signed <=) */

loc_00028266: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_00028280: ;
    eax = MEM32(eax);

loc_00028282: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x54) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x30;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000282B4; /* jne: not equal / not zero */

loc_0002829C: ;
    /* nop */

loc_000282A0: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000282AA; /* jge: greater or equal (signed >=) */

loc_000282A5: ;
    eax = MEM32(eax + 8);
    goto loc_000282AE;

loc_000282AA: ;
    edx = eax;
    eax = MEM32(eax);

loc_000282AE: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000282A0; /* je: equal / zero */

loc_000282B4: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000282C0; /* je: equal / zero */

loc_000282BB: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000282DC; /* jle: less or equal (signed <=) */

loc_000282C0: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000282DA: ;
    eax = MEM32(eax);

loc_000282DC: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x58) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x38;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_0002830A; /* jne: not equal / not zero */

loc_000282F6: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00028300; /* jge: greater or equal (signed >=) */

loc_000282FB: ;
    eax = MEM32(eax + 8);
    goto loc_00028304;

loc_00028300: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028304: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000282F6; /* je: equal / zero */

loc_0002830A: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028316; /* je: equal / zero */

loc_00028311: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00028332; /* jle: less or equal (signed <=) */

loc_00028316: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_00028330: ;
    eax = MEM32(eax);

loc_00028332: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x5C) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x40;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028364; /* jne: not equal / not zero */

loc_0002834C: ;
    /* nop */

loc_00028350: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002835A; /* jge: greater or equal (signed >=) */

loc_00028355: ;
    eax = MEM32(eax + 8);
    goto loc_0002835E;

loc_0002835A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002835E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028350; /* je: equal / zero */

loc_00028364: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028370; /* je: equal / zero */

loc_0002836B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002838C; /* jle: less or equal (signed <=) */

loc_00028370: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002838A: ;
    eax = MEM32(eax);

loc_0002838C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x60) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x48;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000283BA; /* jne: not equal / not zero */

loc_000283A6: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000283B0; /* jge: greater or equal (signed >=) */

loc_000283AB: ;
    eax = MEM32(eax + 8);
    goto loc_000283B4;

loc_000283B0: ;
    edx = eax;
    eax = MEM32(eax);

loc_000283B4: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000283A6; /* je: equal / zero */

loc_000283BA: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000283C6; /* je: equal / zero */

loc_000283C1: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000283E2; /* jle: less or equal (signed <=) */

loc_000283C6: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000283E0: ;
    eax = MEM32(eax);

loc_000283E2: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x64) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x58;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028414; /* jne: not equal / not zero */

loc_000283FC: ;
    /* nop */

loc_00028400: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002840A; /* jge: greater or equal (signed >=) */

loc_00028405: ;
    eax = MEM32(eax + 8);
    goto loc_0002840E;

loc_0002840A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002840E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028400; /* je: equal / zero */

loc_00028414: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028420; /* je: equal / zero */

loc_0002841B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002843C; /* jle: less or equal (signed <=) */

loc_00028420: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002843A: ;
    eax = MEM32(eax);

loc_0002843C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x68) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x50;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_0002846A; /* jne: not equal / not zero */

loc_00028456: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00028460; /* jge: greater or equal (signed >=) */

loc_0002845B: ;
    eax = MEM32(eax + 8);
    goto loc_00028464;

loc_00028460: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028464: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028456; /* je: equal / zero */

loc_0002846A: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028476; /* je: equal / zero */

loc_00028471: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00028492; /* jle: less or equal (signed <=) */

loc_00028476: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_00028490: ;
    eax = MEM32(eax);

loc_00028492: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x6C) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x60;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000284C4; /* jne: not equal / not zero */

loc_000284AC: ;
    /* nop */

loc_000284B0: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000284BA; /* jge: greater or equal (signed >=) */

loc_000284B5: ;
    eax = MEM32(eax + 8);
    goto loc_000284BE;

loc_000284BA: ;
    edx = eax;
    eax = MEM32(eax);

loc_000284BE: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000284B0; /* je: equal / zero */

loc_000284C4: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000284D0; /* je: equal / zero */

loc_000284CB: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000284EC; /* jle: less or equal (signed <=) */

loc_000284D0: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000284EA: ;
    eax = MEM32(eax);

loc_000284EC: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x70) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x24;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_0002851A; /* jne: not equal / not zero */

loc_00028506: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_00028510; /* jge: greater or equal (signed >=) */

loc_0002850B: ;
    eax = MEM32(eax + 8);
    goto loc_00028514;

loc_00028510: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028514: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028506; /* je: equal / zero */

loc_0002851A: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028526; /* je: equal / zero */

loc_00028521: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00028542; /* jle: less or equal (signed <=) */

loc_00028526: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_00028540: ;
    eax = MEM32(eax);

loc_00028542: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x74) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x80;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028574; /* jne: not equal / not zero */

loc_0002855C: ;
    /* nop */

loc_00028560: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002856A; /* jge: greater or equal (signed >=) */

loc_00028565: ;
    eax = MEM32(eax + 8);
    goto loc_0002856E;

loc_0002856A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002856E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028560; /* je: equal / zero */

loc_00028574: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028580; /* je: equal / zero */

loc_0002857B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002859C; /* jle: less or equal (signed <=) */

loc_00028580: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002859A: ;
    eax = MEM32(eax);

loc_0002859C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x78) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebp = 0xB8;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000285CC; /* jne: not equal / not zero */

loc_000285B7: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000285C1; /* jge: greater or equal (signed >=) */

loc_000285BC: ;
    eax = MEM32(eax + 8);
    goto loc_000285C5;

loc_000285C1: ;
    edx = eax;
    eax = MEM32(eax);

loc_000285C5: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000285B7; /* je: equal / zero */

loc_000285CC: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000285D8; /* je: equal / zero */

loc_000285D3: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000285F4; /* jle: less or equal (signed <=) */

loc_000285D8: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000285F2: ;
    eax = MEM32(eax);

loc_000285F4: ;
    MEM32(eax + 0x10) = 4;
    MEM32(edi + 0x7C) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebp = 0x98;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00028628; /* jne: not equal / not zero */

loc_00028613: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002861D; /* jge: greater or equal (signed >=) */

loc_00028618: ;
    eax = MEM32(eax + 8);
    goto loc_00028621;

loc_0002861D: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028621: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00028613; /* je: equal / zero */

loc_00028628: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028634; /* je: equal / zero */

loc_0002862F: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_00028650; /* jle: less or equal (signed <=) */

loc_00028634: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002864E: ;
    eax = MEM32(eax);

loc_00028650: ;
    ebx = 2;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x80) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0xA0;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028686; /* jne: not equal / not zero */

loc_00028672: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002867C; /* jge: greater or equal (signed >=) */

loc_00028677: ;
    eax = MEM32(eax + 8);
    goto loc_00028680;

loc_0002867C: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028680: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028672; /* je: equal / zero */

loc_00028686: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028692; /* je: equal / zero */

loc_0002868D: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000286AE; /* jle: less or equal (signed <=) */

loc_00028692: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000286AC: ;
    eax = MEM32(eax);

loc_000286AE: ;
    MEM32(eax + 0x10) = 6;
    MEM32(edi + 0x84) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0xA8;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000286E4; /* jne: not equal / not zero */

loc_000286CF: ;
    /* nop */

loc_000286D0: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000286DA; /* jge: greater or equal (signed >=) */

loc_000286D5: ;
    eax = MEM32(eax + 8);
    goto loc_000286DE;

loc_000286DA: ;
    edx = eax;
    eax = MEM32(eax);

loc_000286DE: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000286D0; /* je: equal / zero */

loc_000286E4: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000286F0; /* je: equal / zero */

loc_000286EB: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002870C; /* jle: less or equal (signed <=) */

loc_000286F0: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002870A: ;
    eax = MEM32(eax);

loc_0002870C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x88) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0x90;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028744; /* jne: not equal / not zero */

loc_00028729: ;
    /* nop */

loc_00028730: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002873A; /* jge: greater or equal (signed >=) */

loc_00028735: ;
    eax = MEM32(eax + 8);
    goto loc_0002873E;

loc_0002873A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002873E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028730; /* je: equal / zero */

loc_00028744: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028750; /* je: equal / zero */

loc_0002874B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002876C; /* jle: less or equal (signed <=) */

loc_00028750: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002876A: ;
    eax = MEM32(eax);

loc_0002876C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x8C) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0xB0;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_000287A4; /* jne: not equal / not zero */

loc_00028789: ;
    /* nop */

loc_00028790: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002879A; /* jge: greater or equal (signed >=) */

loc_00028795: ;
    eax = MEM32(eax + 8);
    goto loc_0002879E;

loc_0002879A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002879E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028790; /* je: equal / zero */

loc_000287A4: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000287B0; /* je: equal / zero */

loc_000287AB: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_000287CC; /* jle: less or equal (signed <=) */

loc_000287B0: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000287CA: ;
    eax = MEM32(eax);

loc_000287CC: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x90) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0xC0;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028804; /* jne: not equal / not zero */

loc_000287E9: ;
    /* nop */

loc_000287F0: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000287FA; /* jge: greater or equal (signed >=) */

loc_000287F5: ;
    eax = MEM32(eax + 8);
    goto loc_000287FE;

loc_000287FA: ;
    edx = eax;
    eax = MEM32(eax);

loc_000287FE: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_000287F0; /* je: equal / zero */

loc_00028804: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028810; /* je: equal / zero */

loc_0002880B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002882C; /* jle: less or equal (signed <=) */

loc_00028810: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002882A: ;
    eax = MEM32(eax);

loc_0002882C: ;
    MEM32(eax + 0x10) = 4;
    MEM32(edi + 0x94) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    ebp = 0xE6;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028864; /* jne: not equal / not zero */

loc_0002884D: ;
    /* nop */

loc_00028850: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_0002885A; /* jge: greater or equal (signed >=) */

loc_00028855: ;
    eax = MEM32(eax + 8);
    goto loc_0002885E;

loc_0002885A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002885E: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028850; /* je: equal / zero */

loc_00028864: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028870; /* je: equal / zero */

loc_0002886B: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) goto loc_0002888C; /* jle: less or equal (signed <=) */

loc_00028870: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002888A: ;
    eax = MEM32(eax);

loc_0002888C: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(edi + 0x98) = ebp;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebp = 0xD0;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000288C5; /* jne: not equal / not zero */

loc_000288AA: ;
    /* nop */

loc_000288B0: ;
    if (CMP_GE(MEM32(eax + 0xC), ebp)) goto loc_000288BA; /* jge: greater or equal (signed >=) */

loc_000288B5: ;
    eax = MEM32(eax + 8);
    goto loc_000288BE;

loc_000288BA: ;
    edx = eax;
    eax = MEM32(eax);

loc_000288BE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000288B0; /* je: equal / zero */

loc_000288C5: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_000288D1; /* je: equal / zero */

loc_000288CC: ;
    if (CMP_LE(MEM32(edx + 0xC), ebp)) { sub_000288ED(); return; } /* jle: less or equal (signed <=) */

loc_000288D1: ;
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_000288E9: ;
    eax = MEM32(eax);
    g_seh_ebp = ebp; sub_000288EF(); return; /* tail jmp 0x000288EF */

}

/**
 * sub_00028A30
 * Original: 0x00028A30 - 0x00028A71 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00028A30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x140;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00028A61; /* je: equal / zero */

loc_00028A3F: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    eax = esp + 4;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_00028A4B: ;
    esi = esp + 4;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_00028A54: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    eax = MEM32(esp + 0x14C);
    POP32(esp, esi);
    if (CMP_G(eax, 4)) goto loc_00028A68; /* jg: greater (signed >) */

loc_00028A61: ;
    eax = MEM32(esp + 0x144);

loc_00028A68: ;
    esp = esp + 0x140;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00028A80
 * Original: 0x00028A80 - 0x00028ADE (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00028A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10;
    ecx = MEM32(ebx + 0xAC);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    (void)0; /* cmp MEM8(eax + 0x15), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6E3;
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00028AB6; /* jne: not equal / not zero */

loc_00028AA2: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_00028AAC; /* jge: greater or equal (signed >=) */

loc_00028AA7: ;
    eax = MEM32(eax + 8);
    goto loc_00028AB0;

loc_00028AAC: ;
    edx = eax;
    eax = MEM32(eax);

loc_00028AB0: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00028AA2; /* je: equal / zero */

loc_00028AB6: ;
    (void)0; /* cmp edx, MEM32(ecx + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(ecx + 4))) goto loc_00028AC2; /* je: equal / zero */

loc_00028ABD: ;
    if (CMP_LE(MEM32(edx + 0xC), esi)) { sub_00028ADE(); return; } /* jle: less or equal (signed <=) */

loc_00028AC2: ;
    MEM32(esp + 0x10) = esi;
    edi = 0; /* xor self */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_00028ADA: ;
    eax = MEM32(eax);
    g_seh_ebp = ebp; sub_00028AE0(); return; /* tail jmp 0x00028AE0 */

}

/**
 * sub_0002AC90
 * Original: 0x0002AC90 - 0x0002ACD2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AC90: ;
    edx = MEM32(eax + 0xAC);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002ACBC; /* jne: not equal / not zero */

loc_0002ACA7: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_0002ACB1; /* jge: greater or equal (signed >=) */

loc_0002ACAC: ;
    eax = MEM32(eax + 8);
    goto loc_0002ACB5;

loc_0002ACB1: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0002ACB5: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002ACA7; /* je: equal / zero */

loc_0002ACBC: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0002ACD2(); return; } /* je: equal / zero */

loc_0002ACC7: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_0002ACD2(); return; } /* jl: less (signed <) */

loc_0002ACCC: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_0002ACDA(); return; /* tail jmp 0x0002ACDA */

}

/**
 * sub_0002ACF0
 * Original: 0x0002ACF0 - 0x0002AD1D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ACF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002ACF0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0002B2E0(); /* call 0x0002B2E0 */

loc_0002ACFC: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(eax, ecx)) { sub_0002AD1D(); return; } /* je: equal / zero */

loc_0002AD07: ;
    edx = MEM32(edi);
    if (CMP_L(edx, MEM32(eax + 0xC))) { sub_0002AD1D(); return; } /* jl: less (signed <) */

loc_0002AD0E: ;
    eax = esp + 4;
    eax = MEM32(eax);
    MEM32(ebx) = eax;
    eax = ebx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0002AD30
 * Original: 0x0002AD30 - 0x0002AD5A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AD30(void)
{

loc_0002AD30: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = edi + 4;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0002AD4B: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 0xFFFFFFFCu;
    esp = esp + 0xC;
    MEM32(ebx) = edi;
    eax = ebx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002AD60
 * Original: 0x0002AD60 - 0x0002ADA2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AD60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002AD60: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0002B450(); /* call 0x0002B450 */

loc_0002AD6E: ;
    if (CMP_EQ(eax, MEM32(edi + 4))) goto loc_0002AD7A; /* je: equal / zero */

loc_0002AD73: ;
    ecx = MEM32(esi);
    if (CMP_AE(ecx, MEM32(eax + 0xC))) goto loc_0002AD9A; /* jae: above or equal (unsigned >=) */

loc_0002AD7A: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    esi = esp + 8;
    ecx = edi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0002B170(); /* call 0x0002B170 */

loc_0002AD98: ;
    eax = MEM32(eax);

loc_0002AD9A: ;
    eax = eax + 0x10;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002ADB0
 * Original: 0x0002ADB0 - 0x0002AE46 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ADB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002ADB0: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x15));
    esp = esp - 0x44;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002AE2A; /* je: equal / zero */

loc_0002ADC0: ;
    PUSH32(esp, 0x1B);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6A8);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_0002ADE4: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0002ADED: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_0002AE13: ;
    PUSH32(esp, 0x64B604);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC68C;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0002AE2A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x60;
    ebp = eax;
    PUSH32(esp, 0); sub_0002B700(); /* call 0x0002B700 */

loc_0002AE37: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0002AE46(); return; } /* je: equal / zero */

loc_0002AE41: ;
    edi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0002AE5F(); return; /* tail jmp 0x0002AE5F */

}

/**
 * sub_0002B0A0
 * Original: 0x0002B0A0 - 0x0002B0E2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B0A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B0A0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0002B2E0(); /* call 0x0002B2E0 */

loc_0002B0AE: ;
    if (CMP_EQ(eax, MEM32(edi + 4))) goto loc_0002B0BA; /* je: equal / zero */

loc_0002B0B3: ;
    ecx = MEM32(esi);
    if (CMP_GE(ecx, MEM32(eax + 0xC))) goto loc_0002B0DA; /* jge: greater or equal (signed >=) */

loc_0002B0BA: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    esi = esp + 8;
    ecx = edi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_000152F0(); /* call 0x000152F0 */

loc_0002B0D8: ;
    eax = MEM32(eax);

loc_0002B0DA: ;
    eax = eax + 0x10;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002B0F0
 * Original: 0x0002B0F0 - 0x0002B10C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B0F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B0F0: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x15));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0002B10B; /* jne: not equal / not zero */

loc_0002B0F9: ;
    /* nop */

loc_0002B100: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x15));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0002B100; /* je: equal / zero */

loc_0002B10B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002B110
 * Original: 0x0002B110 - 0x0002B144 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B110(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B110: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002B125; /* jne: not equal / not zero */

loc_0002B122: ;
    MEM32(edx + 4) = ecx;

loc_0002B125: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_0002B144(); return; } /* jne: not equal / not zero */

loc_0002B137: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B170
 * Original: 0x0002B170 - 0x0002B196 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B170(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B170: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(edi + 4);
    if (TEST_NZ(eax, eax)) { sub_0002B196(); return; } /* jne: not equal / not zero */

loc_0002B183: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00015440(); /* call 0x00015440 */

loc_0002B18C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B2C0
 * Original: 0x0002B2C0 - 0x0002B2DD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B2C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B2C0: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0002B2DC; /* jne: not equal / not zero */

loc_0002B2CA: ;
    /* nop */

loc_0002B2D0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0002B2D0; /* je: equal / zero */

loc_0002B2DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002B2E0
 * Original: 0x0002B2E0 - 0x0002B30D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B2E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B2E0: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0002B30A; /* jne: not equal / not zero */

loc_0002B2ED: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    PUSH32(esp, ebx);

loc_0002B2F4: ;
    if (CMP_GE(MEM32(ecx + 0xC), edx)) goto loc_0002B2FE; /* jge: greater or equal (signed >=) */

loc_0002B2F9: ;
    ecx = MEM32(ecx + 8);
    goto loc_0002B302;

loc_0002B2FE: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_0002B302: ;
    SET_LO8(ebx, MEM8(ecx + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002B2F4; /* je: equal / zero */

loc_0002B309: ;
    POP32(esp, ebx);

loc_0002B30A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B310
 * Original: 0x0002B310 - 0x0002B35B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B310: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, MEM32(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(ecx))) { sub_0002B35B(); return; } /* jne: not equal / not zero */

loc_0002B325: ;
    if (CMP_NE(ebx, ecx)) { sub_0002B35B(); return; } /* jne: not equal / not zero */

loc_0002B329: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0002B640(); /* call 0x0002B640 */

loc_0002B334: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002B390
 * Original: 0x0002B390 - 0x0002B437 (167 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B390: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, 1);
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0002B3CD; /* jne: not equal / not zero */

loc_0002B3AA: ;
    edx = MEM32(ebx);
    /* nop */

loc_0002B3B0: ;
    (void)0; /* cmp edx, MEM32(eax + 0xC) - flags set for next jcc */
    SET_LO8(ecx, (CMP_B(edx, MEM32(eax + 0xC))) ? 1 : 0); /* setb */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = eax;
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002B3C4; /* je: equal / zero */

loc_0002B3C0: ;
    eax = MEM32(eax);
    goto loc_0002B3C7;

loc_0002B3C4: ;
    eax = MEM32(eax + 8);

loc_0002B3C7: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_0002B3B0; /* je: equal / zero */

loc_0002B3CD: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002B40C; /* je: equal / zero */

loc_0002B3D7: ;
    eax = MEM32(ebp + 4);
    if (CMP_NE(esi, MEM32(eax))) goto loc_0002B3FF; /* jne: not equal / not zero */

loc_0002B3DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00015440(); /* call 0x00015440 */

loc_0002B3EF: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = edx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002B3FF: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0002B6A0(); /* call 0x0002B6A0 */

loc_0002B408: ;
    eax = MEM32(esp + 0x10);

loc_0002B40C: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_AE(ecx, MEM32(ebx))) { sub_0002B437(); return; } /* jae: above or equal (unsigned >=) */

loc_0002B413: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00015440(); /* call 0x00015440 */

loc_0002B427: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = ecx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B450
 * Original: 0x0002B450 - 0x0002B47D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B450(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B450: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0002B47A; /* jne: not equal / not zero */

loc_0002B45D: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    PUSH32(esp, ebx);

loc_0002B464: ;
    if (CMP_AE(MEM32(ecx + 0xC), edx)) goto loc_0002B46E; /* jae: above or equal (unsigned >=) */

loc_0002B469: ;
    ecx = MEM32(ecx + 8);
    goto loc_0002B472;

loc_0002B46E: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_0002B472: ;
    SET_LO8(ebx, MEM8(ecx + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002B464; /* je: equal / zero */

loc_0002B479: ;
    POP32(esp, ebx);

loc_0002B47A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B480
 * Original: 0x0002B480 - 0x0002B4B3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B480(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B480: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002B495; /* jne: not equal / not zero */

loc_0002B492: ;
    MEM32(edx + 4) = ecx;

loc_0002B495: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_0002B4B3(); return; } /* jne: not equal / not zero */

loc_0002B4A7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B4E0
 * Original: 0x0002B4E0 - 0x0002B55F (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0002B4E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6A0);
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
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0002B514: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_0002B543; /* je: equal / zero */

loc_0002B52A: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0002B760(); /* call 0x0002B760 */

loc_0002B543: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0002B580
 * Original: 0x0002B580 - 0x0002B616 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0002B580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6B0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0002B5B4: ;
    esp = esp + 0x10;
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0002B5CB; /* je: equal / zero */

loc_0002B5C9: ;
    MEM32(eax) = ebx;

loc_0002B5CB: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_0002B5E2; /* je: equal / zero */

loc_0002B5E0: ;
    MEM32(ecx) = ebx;

loc_0002B5E2: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_0002B5F8; /* je: equal / zero */

loc_0002B5F6: ;
    MEM32(ecx) = ebx;

loc_0002B5F8: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x14) = LO8(edx);
    MEM8(eax + 0x15) = LO8(ebx);
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
 * sub_0002B640
 * Original: 0x0002B640 - 0x0002B69D (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B640(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = ecx;
    esi = edi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002B697; /* jne: not equal / not zero */

loc_0002B652: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0002B640(); /* call 0x0002B640 */

loc_0002B65D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0002B68E; /* je: equal / zero */

loc_0002B663: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0002B669: ;
    if (TEST_NZ(eax, eax)) goto loc_0002B68E; /* jne: not equal / not zero */

loc_0002B66D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0002B68B: ;
    esp = esp + 4;

loc_0002B68E: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002B652; /* je: equal / zero */

loc_0002B697: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B6A0
 * Original: 0x0002B6A0 - 0x0002B6AF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B6A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B6A0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0002B6AF(); return; } /* je: equal / zero */

loc_0002B6A9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0002B700
 * Original: 0x0002B700 - 0x0002B757 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B700(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B700: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002B756; /* jne: not equal / not zero */

loc_0002B709: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002B72F; /* jne: not equal / not zero */

loc_0002B714: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002B72B; /* jne: not equal / not zero */

loc_0002B71D: ;
    /* nop */

loc_0002B720: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002B720; /* je: equal / zero */

loc_0002B72B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002B72F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002B753; /* jne: not equal / not zero */

loc_0002B739: ;
    /* nop */

loc_0002B740: ;
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax + 8))) goto loc_0002B753; /* jne: not equal / not zero */

loc_0002B747: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002B740; /* je: equal / zero */

loc_0002B753: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_0002B756: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002B760
 * Original: 0x0002B760 - 0x0002B789 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B760(void)
{

loc_0002B760: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(edx);
    MEM8(eax + 0x15) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002B790
 * Original: 0x0002B790 - 0x0002B875 (229 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B790: ;
    esp = esp - 8;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    eax = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(ebp, ecx)) goto loc_0002B86E; /* je: equal / zero */

loc_0002B7A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0002B7B0: ;
    edi = MEM32(ebp);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(edi, edi)) goto loc_0002B85A; /* je: equal / zero */

loc_0002B7BF: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002B85A; /* je: equal / zero */

loc_0002B7CA: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0002B85A; /* je: equal / zero */

loc_0002B7D5: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002B7FD; /* jge: greater or equal (signed >=) */

loc_0002B7DA: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002B7F2; /* jne: not equal / not zero */

loc_0002B7E4: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002B7E9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002B7F2; /* jne: not equal / not zero */

loc_0002B7ED: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002B7F8;

loc_0002B7F2: ;
    esi = MEM32(esi + 0x114);

loc_0002B7F8: ;
    eax = MEM32(edi + 0x18);
    MEM32(eax) = esi;

loc_0002B7FD: ;
    eax = MEM32(edi + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002B809; /* jge: greater or equal (signed >=) */

loc_0002B805: ;
    MEM8(edi + 0x3D) = 1;

loc_0002B809: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002B85A; /* jne: not equal / not zero */

loc_0002B816: ;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002B85A; /* je: equal / zero */

loc_0002B81D: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002B85A; /* jne: not equal / not zero */

loc_0002B824: ;
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002B85A; /* jne: not equal / not zero */

loc_0002B82B: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_0002B840; /* jne: not equal / not zero */

loc_0002B832: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002B840; /* jne: not equal / not zero */

loc_0002B839: ;
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002B85A; /* je: equal / zero */

loc_0002B840: ;
    if (CMP_EQ(MEM32(eax + 0xE4), 1)) goto loc_0002B85A; /* je: equal / zero */

loc_0002B849: ;
    eax = MEM32(esp + 0x18);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_0002B856: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;

loc_0002B85A: ;
    eax = MEM32(ebx + 8);
    ebp = ebp + 4;
    if (CMP_NE(ebp, eax)) goto loc_0002B7B0; /* jne: not equal / not zero */

loc_0002B868: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);

loc_0002B86E: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B880
 * Original: 0x0002B880 - 0x0002B8A0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B880(void)
{

loc_0002B880: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = eax;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002B980(); /* call 0x0002B980 */

loc_0002B89C: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0002B8A0
 * Original: 0x0002B8A0 - 0x0002B8C2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B8A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002B8A0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    if (CMP_EQ(ecx, edx)) { sub_0002B8C2(); return; } /* je: equal / zero */

loc_0002B8AC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    esi = MEM32(esi);

loc_0002B8B3: ;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_0002B8BE; /* je: equal / zero */

loc_0002B8B7: ;
    ecx = ecx + 4;
    if (CMP_NE(ecx, edx)) goto loc_0002B8B3; /* jne: not equal / not zero */

loc_0002B8BE: ;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B8D0
 * Original: 0x0002B8D0 - 0x0002B913 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B8D0: ;
    edx = MEM32(eax + 0x28);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0002B8FD; /* jne: not equal / not zero */

loc_0002B8E8: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_0002B8F2; /* jge: greater or equal (signed >=) */

loc_0002B8ED: ;
    eax = MEM32(eax + 8);
    goto loc_0002B8F6;

loc_0002B8F2: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0002B8F6: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002B8E8; /* je: equal / zero */

loc_0002B8FD: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0002B913(); return; } /* je: equal / zero */

loc_0002B908: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_0002B913(); return; } /* jl: less (signed <) */

loc_0002B90D: ;
    eax = esp + 0xC;
    g_seh_ebp = ebp; sub_0002B91B(); return; /* tail jmp 0x0002B91B */

}

/**
 * sub_0002B980
 * Original: 0x0002B980 - 0x0002BA33 (179 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B980: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x20)) goto loc_0002BA17; /* jle: less or equal (signed <=) */

loc_0002B99B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_0002B9A0: ;
    if (CMP_LE(esi & esi, 0)) { sub_0002BA33(); return; } /* jle: less or equal (signed <=) */

loc_0002B9A8: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002BC50(); /* call 0x0002BC50 */

loc_0002B9B9: ;
    ebp = MEM32(esp + 0x24);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    eax = MEM32(esp + 0x20);
    edx = edi;
    ecx = eax;
    edx = edx - ebp;
    ecx = ecx - ebx;
    edx = edx & 0xFFFFFFFCu;
    ecx = ecx & 0xFFFFFFFCu;
    esp = esp + 0x10;
    if (CMP_GE(ecx, edx)) goto loc_0002B9F7; /* jge: greater or equal (signed >=) */

loc_0002B9E6: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002B980(); /* call 0x0002B980 */

loc_0002B9F3: ;
    ebx = ebp;
    goto loc_0002BA08;

loc_0002B9F7: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002B980(); /* call 0x0002B980 */

loc_0002BA04: ;
    edi = MEM32(esp + 0x20);

loc_0002BA08: ;
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0x10;
    if (CMP_G(eax, 0x20)) goto loc_0002B9A0; /* jg: greater (signed >) */

loc_0002BA17: ;
    if (CMP_LE(eax, 1)) goto loc_0002BA2B; /* jle: less or equal (signed <=) */

loc_0002BA1C: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002BE10(); /* call 0x0002BE10 */

loc_0002BA28: ;
    esp = esp + 0xC;

loc_0002BA2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0002BA70
 * Original: 0x0002BA70 - 0x0002BB23 (179 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BA70: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x20)) goto loc_0002BB07; /* jle: less or equal (signed <=) */

loc_0002BA8B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_0002BA90: ;
    if (CMP_LE(esi & esi, 0)) { sub_0002BB23(); return; } /* jle: less or equal (signed <=) */

loc_0002BA98: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002BE80(); /* call 0x0002BE80 */

loc_0002BAA9: ;
    ebp = MEM32(esp + 0x24);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    eax = MEM32(esp + 0x20);
    edx = edi;
    ecx = eax;
    edx = edx - ebp;
    ecx = ecx - ebx;
    edx = edx & 0xFFFFFFFCu;
    ecx = ecx & 0xFFFFFFFCu;
    esp = esp + 0x10;
    if (CMP_GE(ecx, edx)) goto loc_0002BAE7; /* jge: greater or equal (signed >=) */

loc_0002BAD6: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002BA70(); /* call 0x0002BA70 */

loc_0002BAE3: ;
    ebx = ebp;
    goto loc_0002BAF8;

loc_0002BAE7: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002BA70(); /* call 0x0002BA70 */

loc_0002BAF4: ;
    edi = MEM32(esp + 0x20);

loc_0002BAF8: ;
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0x10;
    if (CMP_G(eax, 0x20)) goto loc_0002BA90; /* jg: greater (signed >) */

loc_0002BB07: ;
    if (CMP_LE(eax, 1)) goto loc_0002BB1B; /* jle: less or equal (signed <=) */

loc_0002BB0C: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002C430(); /* call 0x0002C430 */

loc_0002BB18: ;
    esp = esp + 0xC;

loc_0002BB1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0002BB60
 * Original: 0x0002BB60 - 0x0002BC13 (179 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BB60: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x20)) goto loc_0002BBF7; /* jle: less or equal (signed <=) */

loc_0002BB7B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_0002BB80: ;
    if (CMP_LE(esi & esi, 0)) { sub_0002BC13(); return; } /* jle: less or equal (signed <=) */

loc_0002BB88: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002C5A0(); /* call 0x0002C5A0 */

loc_0002BB99: ;
    ebp = MEM32(esp + 0x24);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    eax = MEM32(esp + 0x20);
    edx = edi;
    ecx = eax;
    edx = edx - ebp;
    ecx = ecx - ebx;
    edx = edx & 0xFFFFFFFCu;
    ecx = ecx & 0xFFFFFFFCu;
    esp = esp + 0x10;
    if (CMP_GE(ecx, edx)) goto loc_0002BBD7; /* jge: greater or equal (signed >=) */

loc_0002BBC6: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002BB60(); /* call 0x0002BB60 */

loc_0002BBD3: ;
    ebx = ebp;
    goto loc_0002BBE8;

loc_0002BBD7: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002BB60(); /* call 0x0002BB60 */

loc_0002BBE4: ;
    edi = MEM32(esp + 0x20);

loc_0002BBE8: ;
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0x10;
    if (CMP_G(eax, 0x20)) goto loc_0002BB80; /* jg: greater (signed >) */

loc_0002BBF7: ;
    if (CMP_LE(eax, 1)) goto loc_0002BC0B; /* jle: less or equal (signed <=) */

loc_0002BBFC: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002C790(); /* call 0x0002C790 */

loc_0002BC08: ;
    esp = esp + 0xC;

loc_0002BC0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0002BC50
 * Original: 0x0002BC50 - 0x0002BDAE (350 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BC50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BC50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebx;
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    eax = eax - edx;
    PUSH32(esp, edi);
    eax = (uint32_t)((int32_t)eax >> 1);
    edi = ebp + eax * 4;
    PUSH32(esp, ecx);
    eax = ebx + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002C820(); /* call 0x0002C820 */

loc_0002BC7D: ;
    esp = esp + 0x10;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    eax = edi;
    esi = edi + 4;
    if (CMP_AE(ebp, edi)) goto loc_0002BCA8; /* jae: above or equal (unsigned >=) */

loc_0002BC89: ;
    /* nop */

loc_0002BC90: ;
    edx = MEM32(eax + -4);
    ecx = MEM32(edx + 0x1C);
    edx = MEM32(eax);
    edx = MEM32(edx + 0x1C);
    if (CMP_B(edx, ecx)) goto loc_0002BCA8; /* jb: below (unsigned <) */

loc_0002BC9F: ;
    if (CMP_A(edx, ecx)) goto loc_0002BCA8; /* ja: above (unsigned >) */

loc_0002BCA1: ;
    eax = eax + 0xFFFFFFFCu;
    if (CMP_B(ebp, eax)) goto loc_0002BC90; /* jb: below (unsigned <) */

loc_0002BCA8: ;
    if (CMP_AE(esi, ebx)) goto loc_0002BCC3; /* jae: above or equal (unsigned >=) */

loc_0002BCAC: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x1C);

loc_0002BCB1: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x1C);
    if (CMP_B(edx, ecx)) goto loc_0002BCC3; /* jb: below (unsigned <) */

loc_0002BCBA: ;
    if (CMP_A(edx, ecx)) goto loc_0002BCC3; /* ja: above (unsigned >) */

loc_0002BCBC: ;
    esi = esi + 4;
    if (CMP_B(esi, ebx)) goto loc_0002BCB1; /* jb: below (unsigned <) */

loc_0002BCC3: ;
    ecx = esi;
    ebp = eax;

loc_0002BCC7: ;
    if (CMP_AE(ecx, ebx)) goto loc_0002BCF8; /* jae: above or equal (unsigned >=) */

loc_0002BCCB: ;
    goto loc_0002BCD0;

    /* nop */

loc_0002BCD0: ;
    edx = MEM32(eax);
    edi = MEM32(ecx);
    edx = MEM32(edx + 0x1C);
    edi = MEM32(edi + 0x1C);
    if (CMP_B(edi, edx)) goto loc_0002BCF1; /* jb: below (unsigned <) */

loc_0002BCDE: ;
    if (CMP_A(edi, edx)) goto loc_0002BCF8; /* ja: above (unsigned >) */

loc_0002BCE0: ;
    ebx = MEM32(ecx);
    edx = esi;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    esi = esi + 4;
    MEM32(ecx) = edi;

loc_0002BCF1: ;
    ecx = ecx + 4;
    if (CMP_B(ecx, ebx)) goto loc_0002BCD0; /* jb: below (unsigned <) */

loc_0002BCF8: ;
    if (CMP_BE(ebp, MEM32(esp + 0x1C))) goto loc_0002BD35; /* jbe: below or equal (unsigned <=) */

loc_0002BCFE: ;
    edx = ebp + -4;

loc_0002BD01: ;
    edi = MEM32(edx);
    ebx = MEM32(eax);
    edi = MEM32(edi + 0x1C);
    ebx = MEM32(ebx + 0x1C);
    if (CMP_B(ebx, edi)) goto loc_0002BD1D; /* jb: below (unsigned <) */

loc_0002BD0F: ;
    if (CMP_A(ebx, edi)) goto loc_0002BD2B; /* ja: above (unsigned >) */

loc_0002BD11: ;
    ebx = MEM32(edx);
    edi = MEM32(eax + -4);
    eax = eax - 4;
    MEM32(eax) = ebx;
    MEM32(edx) = edi;

loc_0002BD1D: ;
    edi = MEM32(esp + 0x1C);
    ebp = ebp - 4;
    edx = edx - 4;
    if (CMP_B(edi, ebp)) goto loc_0002BD01; /* jb: below (unsigned <) */

loc_0002BD2B: ;
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    (void)0; /* cmp ebp, edx - flags set for next jcc */

loc_0002BD35: ;
    if (CMP_NE(ebp, edx)) goto loc_0002BD6D; /* jne: not equal / not zero */

loc_0002BD37: ;
    if (CMP_EQ(ecx, ebx)) { sub_0002BDAE(); return; } /* je: equal / zero */

loc_0002BD3B: ;
    if (CMP_EQ(esi, ecx)) goto loc_0002BD47; /* je: equal / zero */

loc_0002BD3F: ;
    edi = MEM32(esi);
    edx = MEM32(eax);
    MEM32(eax) = edi;
    MEM32(esi) = edx;

loc_0002BD47: ;
    edi = eax;
    ebx = MEM32(edi);
    edx = ecx;
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(edx);
    MEM32(edi) = ebx;
    edi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    esi = esi + 4;
    ecx = ecx + 4;
    eax = eax + 4;
    MEM32(edx) = edi;
    goto loc_0002BCC7;

loc_0002BD6D: ;
    ebp = ebp - 4;
    if (CMP_NE(ecx, ebx)) goto loc_0002BD96; /* jne: not equal / not zero */

loc_0002BD74: ;
    eax = eax - 4;
    if (CMP_EQ(ebp, eax)) goto loc_0002BD85; /* je: equal / zero */

loc_0002BD7B: ;
    edi = MEM32(eax);
    edx = MEM32(ebp);
    MEM32(ebp) = edi;
    MEM32(eax) = edx;

loc_0002BD85: ;
    edi = MEM32(esi + -4);
    edx = MEM32(eax);
    esi = esi - 4;
    MEM32(eax) = edi;
    MEM32(esi) = edx;
    goto loc_0002BCC7;

loc_0002BD96: ;
    ebx = MEM32(ebp);
    edx = ecx;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    ecx = ecx + 4;
    MEM32(ebp) = edi;
    goto loc_0002BCC7;

}

/**
 * sub_0002BDC0
 * Original: 0x0002BDC0 - 0x0002BE09 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BDC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002BDC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi - edi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 1)) goto loc_0002BE06; /* jle: less or equal (signed <=) */

loc_0002BDD6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);

loc_0002BDDB: ;
    eax = MEM32(edi + esi + -4);
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = esi + -4;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(edi + esi + -4) = ecx;
    PUSH32(esp, 0); sub_0002CB40(); /* call 0x0002CB40 */

loc_0002BDF5: ;
    esi = esi - 4;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0xC;
    if (CMP_G(eax, 1)) goto loc_0002BDDB; /* jg: greater (signed >) */

loc_0002BE05: ;
    POP32(esp, ebx);

loc_0002BE06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BE10
 * Original: 0x0002BE10 - 0x0002BE7F (111 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BE10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_0002BE7C; /* je: equal / zero */

loc_0002BE1E: ;
    PUSH32(esp, esi);
    esi = edi + 4;
    if (CMP_EQ(esi, ebx)) goto loc_0002BE7B; /* je: equal / zero */

loc_0002BE26: ;
    PUSH32(esp, ebp);

loc_0002BE27: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(edi);
    if (CMP_BE(ecx, MEM32(edx + 0x1C))) goto loc_0002BE43; /* jbe: below or equal (unsigned <=) */

loc_0002BE33: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = esi + 4;
    if (CMP_EQ(edi, esi)) goto loc_0002BE73; /* je: equal / zero */

loc_0002BE3A: ;
    if (CMP_EQ(esi, eax)) goto loc_0002BE73; /* je: equal / zero */

loc_0002BE3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0002BE6B;

loc_0002BE43: ;
    edx = MEM32(esi + -4);
    (void)0; /* cmp ecx, MEM32(edx + 0x1C) - flags set for next jcc */
    eax = esi + -4;
    if (CMP_BE(ecx, MEM32(edx + 0x1C))) goto loc_0002BE73; /* jbe: below or equal (unsigned <=) */

loc_0002BE4E: ;
    edi = edi;

loc_0002BE50: ;
    ebp = MEM32(eax + -4);
    edx = eax;
    eax = eax - 4;
    if (CMP_A(ecx, MEM32(ebp + 0x1C))) goto loc_0002BE50; /* ja: above (unsigned >) */

loc_0002BE5D: ;
    if (CMP_EQ(edx, esi)) goto loc_0002BE73; /* je: equal / zero */

loc_0002BE61: ;
    eax = esi + 4;
    if (CMP_EQ(esi, eax)) goto loc_0002BE73; /* je: equal / zero */

loc_0002BE68: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_0002BE6B: ;
    PUSH32(esp, 0); sub_0002CE50(); /* call 0x0002CE50 */

loc_0002BE70: ;
    esp = esp + 0xC;

loc_0002BE73: ;
    esi = esi + 4;
    if (CMP_NE(esi, ebx)) goto loc_0002BE27; /* jne: not equal / not zero */

loc_0002BE7A: ;
    POP32(esp, ebp);

loc_0002BE7B: ;
    POP32(esp, esi);

loc_0002BE7C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BE80
 * Original: 0x0002BE80 - 0x0002C3BE (1342 bytes, 440 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BE80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BE80: ;
    esp = esp - 0x14;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = ecx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = edi + eax * 4;
    eax = ecx + -4;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002C910(); /* call 0x0002C910 */

loc_0002BEAE: ;
    esp = esp + 0x10;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ebx = esi;
    edx = esi + 4;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = edx;
    if (CMP_AE(edi, esi)) goto loc_0002BF71; /* jae: above or equal (unsigned >=) */

loc_0002BEC6: ;
    edi = MEM32(ebx + -4);
    eax = MEM32(edi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_0002BF12; /* je: equal / zero */

loc_0002BED2: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002BF01; /* jge: greater or equal (signed >=) */

loc_0002BED7: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002BF12; /* je: equal / zero */

loc_0002BEDE: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BEF6; /* jne: not equal / not zero */

loc_0002BEE8: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002BEED: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BEF6; /* jne: not equal / not zero */

loc_0002BEF1: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002BEFC;

loc_0002BEF6: ;
    esi = MEM32(esi + 0xF4);

loc_0002BEFC: ;
    eax = MEM32(edi + 0x14);
    MEM32(eax) = esi;

loc_0002BF01: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(ebp + 0x14);
    (void)0; /* cmp eax, MEM32(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(ecx))) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BF6D; /* jne: not equal / not zero */

loc_0002BF12: ;
    edi = MEM32(ebx);
    eax = MEM32(edi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(ebx + -4);
    if (TEST_Z(eax, eax)) goto loc_0002BF5E; /* je: equal / zero */

loc_0002BF1E: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002BF4D; /* jge: greater or equal (signed >=) */

loc_0002BF23: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002BF5E; /* je: equal / zero */

loc_0002BF2A: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BF42; /* jne: not equal / not zero */

loc_0002BF34: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002BF39: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BF42; /* jne: not equal / not zero */

loc_0002BF3D: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002BF48;

loc_0002BF42: ;
    esi = MEM32(esi + 0xF4);

loc_0002BF48: ;
    ecx = MEM32(edi + 0x14);
    MEM32(ecx) = esi;

loc_0002BF4D: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BF6D; /* jne: not equal / not zero */

loc_0002BF5E: ;
    eax = MEM32(esp + 0x2C);
    ebx = ebx + 0xFFFFFFFCu;
    if (CMP_B(eax, ebx)) goto loc_0002BEC6; /* jb: below (unsigned <) */

loc_0002BF6D: ;
    MEM32(esp + 0x10) = ebx;

loc_0002BF71: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_AE(ecx, MEM32(esp + 0x30))) goto loc_0002C033; /* jae: above or equal (unsigned >=) */

loc_0002BF7F: ;
    /* nop */

loc_0002BF80: ;
    edi = MEM32(ecx);
    eax = MEM32(edi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_0002BFD1; /* je: equal / zero */

loc_0002BF8B: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002BFBE; /* jge: greater or equal (signed >=) */

loc_0002BF90: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002BFD1; /* je: equal / zero */

loc_0002BF97: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BFAF; /* jne: not equal / not zero */

loc_0002BFA1: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002BFA6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002BFAF; /* jne: not equal / not zero */

loc_0002BFAA: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002BFB5;

loc_0002BFAF: ;
    esi = MEM32(esi + 0xF4);

loc_0002BFB5: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = esi;

loc_0002BFBE: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(edi + 0x14);
    esi = MEM32(eax);
    edx = MEM32(edx);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx, esi)) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C033; /* jne: not equal / not zero */

loc_0002BFD1: ;
    edi = MEM32(ebx);
    eax = MEM32(edi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0002C020; /* je: equal / zero */

loc_0002BFDC: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C00F; /* jge: greater or equal (signed >=) */

loc_0002BFE1: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C020; /* je: equal / zero */

loc_0002BFE8: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C000; /* jne: not equal / not zero */

loc_0002BFF2: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002BFF7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C000; /* jne: not equal / not zero */

loc_0002BFFB: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C006;

loc_0002C000: ;
    esi = MEM32(esi + 0xF4);

loc_0002C006: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = esi;

loc_0002C00F: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C033; /* jne: not equal / not zero */

loc_0002C020: ;
    eax = MEM32(esp + 0x30);
    ecx = ecx + 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(ecx, eax)) goto loc_0002BF80; /* jb: below (unsigned <) */

loc_0002C033: ;
    ebx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ecx;

loc_0002C043: ;
    if (CMP_AE(ebx, MEM32(esp + 0x30))) goto loc_0002C18C; /* jae: above or equal (unsigned >=) */

loc_0002C04D: ;
    /* nop */

loc_0002C050: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebx);
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(eax, eax)) goto loc_0002C0DC; /* je: equal / zero */

loc_0002C063: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C0C3; /* jge: greater or equal (signed >=) */

loc_0002C068: ;
    esi = MEM32(ebp + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C0DC; /* je: equal / zero */

loc_0002C06F: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C0B8; /* jne: not equal / not zero */

loc_0002C079: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0002C345; /* je: equal / zero */

loc_0002C084: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    edi = esi + 0xF0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_0002C098: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002C0B1; /* jne: not equal / not zero */

loc_0002C0A1: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_0002C0B1: ;
    MEM8(esi + 0x154) = 1;

loc_0002C0B8: ;
    esi = MEM32(esi + 0xF4);

loc_0002C0BE: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;

loc_0002C0C3: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C179; /* jne: not equal / not zero */

loc_0002C0DC: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    ebp = MEM32(ebx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0002C164; /* je: equal / zero */

loc_0002C0EF: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C14F; /* jge: greater or equal (signed >=) */

loc_0002C0F4: ;
    esi = MEM32(ebp + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C164; /* je: equal / zero */

loc_0002C0FB: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C144; /* jne: not equal / not zero */

loc_0002C105: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0002C34D; /* je: equal / zero */

loc_0002C110: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    edi = esi + 0xF0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_0002C124: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002C13D; /* jne: not equal / not zero */

loc_0002C12D: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_0002C13D: ;
    MEM8(esi + 0x154) = 1;

loc_0002C144: ;
    esi = MEM32(esi + 0xF4);

loc_0002C14A: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;

loc_0002C14F: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C188; /* jne: not equal / not zero */

loc_0002C164: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    eax = ecx;
    ecx = ecx + 4;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    MEM32(ebx) = ecx;

loc_0002C179: ;
    eax = MEM32(esp + 0x30);
    ebx = ebx + 4;
    if (CMP_B(ebx, eax)) goto loc_0002C050; /* jb: below (unsigned <) */

loc_0002C188: ;
    MEM32(esp + 0x18) = ebx;

loc_0002C18C: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_AE(MEM32(esp + 0x2C), eax)) goto loc_0002C2EB; /* jae: above or equal (unsigned >=) */

loc_0002C19A: ;
    ecx = eax;
    ecx = ecx + 0xFFFFFFFCu;
    MEM32(esp + 0x20) = ecx;

loc_0002C1A3: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0002C22B; /* je: equal / zero */

loc_0002C1B6: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C216; /* jge: greater or equal (signed >=) */

loc_0002C1BB: ;
    esi = MEM32(ebp + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C22B; /* je: equal / zero */

loc_0002C1C2: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C20B; /* jne: not equal / not zero */

loc_0002C1CC: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0002C355; /* je: equal / zero */

loc_0002C1D7: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    edi = esi + 0xF0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_0002C1EB: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002C204; /* jne: not equal / not zero */

loc_0002C1F4: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_0002C204: ;
    MEM8(esi + 0x154) = 1;

loc_0002C20B: ;
    esi = MEM32(esi + 0xF4);

loc_0002C211: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;

loc_0002C216: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(ebx + 0x14);
    (void)0; /* cmp eax, MEM32(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(ecx))) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C2C9; /* jne: not equal / not zero */

loc_0002C22B: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(ecx);
    eax = MEM32(ebp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x20);
    ebx = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0002C2B9; /* je: equal / zero */

loc_0002C23E: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C2A6; /* jge: greater or equal (signed >=) */

loc_0002C243: ;
    esi = MEM32(ebp + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C2B9; /* je: equal / zero */

loc_0002C24A: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C29B; /* jne: not equal / not zero */

loc_0002C254: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0002C35D; /* je: equal / zero */

loc_0002C25F: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    edi = esi + 0xF0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_0002C273: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002C28C; /* jne: not equal / not zero */

loc_0002C27C: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_0002C28C: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    MEM8(esi + 0x154) = 1;

loc_0002C29B: ;
    esi = MEM32(esi + 0xF4);

loc_0002C2A1: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;

loc_0002C2A6: ;
    eax = MEM32(ebx + 0x14);
    esi = MEM32(ebp + 0x14);
    edi = MEM32(eax);
    esi = MEM32(esi);
    (void)0; /* cmp esi, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_G(esi, edi)) ? 1 : 0); /* setg */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C2EB; /* jne: not equal / not zero */

loc_0002C2B9: ;
    esi = MEM32(edx);
    eax = MEM32(ecx + -4);
    ecx = ecx - 4;
    MEM32(ecx) = esi;
    MEM32(esp + 0x10) = ecx;
    MEM32(edx) = eax;

loc_0002C2C9: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x2C);
    eax = eax - 4;
    edx = edx - 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_B(ecx, eax)) goto loc_0002C1A3; /* jb: below (unsigned <) */

loc_0002C2EB: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    eax = MEM32(esp + 0x30);
    if (CMP_NE(edx, eax)) goto loc_0002C365; /* jne: not equal / not zero */

loc_0002C2FF: ;
    if (CMP_EQ(ecx, eax)) { sub_0002C3BE(); return; } /* je: equal / zero */

loc_0002C307: ;
    esi = MEM32(esp + 0x14);
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(esi, ecx)) goto loc_0002C31B; /* je: equal / zero */

loc_0002C313: ;
    edi = MEM32(esi);
    eax = MEM32(edx);
    MEM32(edx) = edi;
    MEM32(esi) = eax;

loc_0002C31B: ;
    eax = ecx;
    ecx = ecx + 4;
    esi = esi + 4;
    MEM32(esp + 0x18) = ecx;
    ebx = MEM32(esp + 0x18);
    ecx = edx;
    edx = edx + 4;
    MEM32(esp + 0x14) = esi;
    esi = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx);
    MEM32(ecx) = esi;
    MEM32(eax) = edx;
    goto loc_0002C043;

loc_0002C345: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C0BE;

loc_0002C34D: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C14A;

loc_0002C355: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C211;

loc_0002C35D: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C2A1;

loc_0002C365: ;
    edx = edx - 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(ecx, eax)) goto loc_0002C3A4; /* jne: not equal / not zero */

loc_0002C370: ;
    esi = MEM32(esp + 0x10);
    esi = esi - 4;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(edx, esi)) goto loc_0002C387; /* je: equal / zero */

loc_0002C37F: ;
    ecx = MEM32(esi);
    eax = MEM32(edx);
    MEM32(edx) = ecx;
    MEM32(esi) = eax;

loc_0002C387: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + -4);
    eax = MEM32(esi);
    ebx = MEM32(esp + 0x18);
    ecx = ecx - 4;
    MEM32(esi) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(ecx) = eax;
    goto loc_0002C043;

loc_0002C3A4: ;
    esi = MEM32(edx);
    eax = ecx;
    ecx = ecx + 4;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax);
    ebx = MEM32(esp + 0x18);
    MEM32(eax) = esi;
    MEM32(edx) = ecx;
    goto loc_0002C043;

}
